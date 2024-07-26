#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencvtest/pixel_point0.h>
#include <iostream>

using namespace std;

/**********************************HSV***********************************************/
vector<int> hsvRed = {1, 0, 12, 34, 255, 77, 255};     // HSV range for red color
vector<int> hsvYellow = {2, 29, 42, 100, 255, 150, 255}; // HSV range for yellow color
vector<int> hsvGreen = {3, 43, 94, 34, 255, 77, 255};  // HSV range for green color
vector<int> hsvPurple = {4, 123, 144, 34, 255, 77, 255}; // HSV range for purple color
vector<int> hsvOrange = {5, 12, 28, 34, 255, 77, 255}; // HSV range for orange color
vector<int> hsvBlue = {6, 95, 122, 34, 255, 77, 255}; // HSV range for blue color

static const string OPENCV_WINDOW = "color_distinguish";
static const string OPENCV_WINDOW_1 = "binary";
cv::Mat binary;
vector<cv::Vec4i> hierarchy;

class Cube {
public:
    Cube(const string& name, vector<int> hsv) : name(name), HSV(hsv) {}

    vector<int>& getHSV() {
        return HSV;
    }

    vector<vector<cv::Point>>& getContours() {
        return contours;
    }

private:
    string name;
    vector<vector<cv::Point>> contours;
    vector<int> HSV;
};

Cube red("red", hsvRed);       // Create a red cube with the predefined HSV range
Cube yellow("yellow", hsvYellow); // Create a yellow cube with the predefined HSV range
Cube green("green", hsvGreen);    // Create a green cube with the predefined HSV range
Cube purple("purple", hsvPurple); // Create a purple cube with the predefined HSV range
Cube orange("orange", hsvOrange); // Create an orange cube with the predefined HSV range
Cube blue("blue", hsvBlue);       // Create a blue cube with the predefined HSV range

class ImageConverter {
private:
    ros::NodeHandle nh_;
    image_transport::ImageTransport it_;
    image_transport::Subscriber image_sub_;
    image_transport::Publisher image_pub_;
    ros::Publisher center_point_pub_;
    ros::Publisher center_point_pub_red;
    ros::Publisher center_point_pub_yellow;
    ros::Publisher center_point_pub_green;
    ros::Publisher center_point_pub_blue;
    ros::Publisher center_point_pub_purple;
    opencvtest::pixel_point0 msgs_red_;
    opencvtest::pixel_point0 msgs;
    opencvtest::pixel_point0 msgs_yellow_;
    opencvtest::pixel_point0 msgs_green_;
    opencvtest::pixel_point0 msgs_blue_;
    opencvtest::pixel_point0 msgs_purple_;

public:
    ImageConverter() : it_(nh_) {
        image_sub_ = it_.subscribe("/usb_cam/image_raw", 1, &ImageConverter::imageCb, this);
        center_point_pub_ = nh_.advertise<opencvtest::pixel_point0>("pixel_center_axis_red", 1000);
        center_point_pub_red = nh_.advertise<opencvtest::pixel_point0>("pixel_center_axis", 1000);
        center_point_pub_yellow = nh_.advertise<opencvtest::pixel_point0>("pixel_center_axis_yellow", 1000);
	    center_point_pub_green = nh_.advertise<opencvtest::pixel_point0>("pixel_center_axis_green", 1000);
	    center_point_pub_blue = nh_.advertise<opencvtest::pixel_point0>("pixel_center_axis_blue", 1000);
	    center_point_pub_purple = nh_.advertise<opencvtest::pixel_point0>("pixel_center_axis_purple", 1000);

        cv::namedWindow(OPENCV_WINDOW);
    }

    ~ImageConverter() {
        cv::destroyWindow(OPENCV_WINDOW);
    }

    void process(cv_bridge::CvImagePtr& cv_ptr, Cube& color,opencvtest::pixel_point0& msgs,ros::Publisher& pub) {
        cv::Mat drawmap = cv_ptr->image.clone();
        cv::Mat clone = cv_ptr->image.clone();
        int num = color.getHSV()[0];
        int j = 0;

        // Convert the image from BGR to HSV color space
        cv::cvtColor(clone, clone, cv::COLOR_BGR2HSV);

        // Perform color thresholding
        cv::inRange(clone, cv::Scalar(color.getHSV()[1], color.getHSV()[3], color.getHSV()[5]), 
                    cv::Scalar(color.getHSV()[2], color.getHSV()[4], color.getHSV()[6]), clone);

        binary = clone.clone();

        // Apply median blur to the binary image
        cv::medianBlur(binary, binary, 25);

        // Find contours in the binary image
        cv::findContours(clone, color.getContours(), hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_NONE);

        if (color.getContours().empty()) return;

        vector<cv::Rect> rect;
        for (size_t i = 0; i < color.getContours().size(); i++) {
            rect.push_back(cv::boundingRect(color.getContours()[i]));
            if (rect[i].area() > 3000 && rect[i].area() < 10000) {
                // Draw rectangle around detected object
                cv::rectangle(drawmap, rect[i], cv::Scalar(0, 0, 255), 3);

                switch (num) {
                    case 1: // Red color
                        // Calculate and draw center point
                        msgs.red_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                        msgs.red_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                        cv::circle(drawmap, cv::Point2d(msgs.red_u[j], msgs.red_v[j]), 1, cv::Scalar(255, 0, 0), 15);
                        j++;
                        break;
                    case 2: // Yellow color
                        // Calculate and draw center point
                        msgs.yellow_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                        msgs.yellow_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                        cv::circle(drawmap, cv::Point2d(msgs.yellow_u[j], msgs.yellow_v[j]), 1, cv::Scalar(0, 255, 255), 15);
                        j++;
                        break;
                    case 3: // Green color
                        // Calculate and draw center point
                        msgs.green_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                        msgs.green_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                        cv::circle(drawmap, cv::Point2d(msgs.green_u[j], msgs.green_v[j]), 1, cv::Scalar(0, 255, 0), 15);
                        j++;
                        break;
                    case 4: // Purple color
                        // Calculate and draw center point
                        msgs.purple_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                        msgs.purple_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                        cv::circle(drawmap, cv::Point2d(msgs.purple_u[j], msgs.purple_v[j]), 1, cv::Scalar(255, 0, 255), 15);
                        j++;
                        break;
                    case 5: // Orange color
                        // Calculate and draw center point
                        msgs.orange_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                        msgs.orange_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                        cv::circle(drawmap, cv::Point2d(msgs.orange_u[j], msgs.orange_v[j]), 1, cv::Scalar(0, 165, 255), 15);
                        j++;
                        break;
                    case 6: // Blue color
                        // Calculate and draw center point
                        msgs.blue_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                        msgs.blue_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                        cv::circle(drawmap, cv::Point2d(msgs.blue_u[j], msgs.blue_v[j]), 1, cv::Scalar(255, 0, 0), 15);
                        j++;
                        break;
                    default:
                        break;
                }
            }
        }

        // Show the processed images
        cv::imshow(OPENCV_WINDOW, drawmap);
        cv::imshow(OPENCV_WINDOW_1, binary);
        cv::waitKey(1);

        // Publish the processed image
        image_pub_.publish(cv_ptr->toImageMsg());
    }

    void imageCb(const sensor_msgs::ImageConstPtr& msg) {
        cv_bridge::CvImagePtr cv_ptr;
        try {
            cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        } catch (cv_bridge::Exception& e) {
            ROS_ERROR("cv_bridge exception: %s", e.what());
            return;
        }

        // Process the image to detect and mark colors
        process(cv_ptr, red,msgs_red_,center_point_pub_red);
        process(cv_ptr, yellow,msgs_yellow_,center_point_pub_yellow);
        process(cv_ptr, green,msgs_green_,center_point_pub_green);
        process(cv_ptr, purple,msgs_purple_,center_point_pub_purple);
        process(cv_ptr, orange,msgs,center_point_pub_);
        process(cv_ptr, blue,msgs_blue_,center_point_pub_blue);

        // Print and publish the detected center points
        cout << msgs << endl;
        center_point_pub_.publish(msgs);

        // Clear the message for the next frame
        msgs.red_u.clear();
        msgs.red_v.clear();
        msgs.yellow_u.clear();
        msgs.yellow_v.clear();
        msgs.green_u.clear();
        msgs.green_v.clear();
        msgs.purple_u.clear();
        msgs.purple_v.clear();
        msgs.orange_u.clear();
        msgs.orange_v.clear();
        msgs.blue_u.clear();
        msgs.blue_v.clear();
    }
};

int main(int argc, char** argv) {
    ros::init(argc, argv, "color_distinguish");
    ImageConverter ic;
    ros::spin();
    return 0;
}
