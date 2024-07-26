; Auto-generated. Do not edit!


(cl:in-package axif_tf-msg)


;//! \htmlinclude getPoint.msg.html

(cl:defclass <getPoint> (roslisp-msg-protocol:ros-message)
  ((x1
    :reader x1
    :initarg :x1
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (x2
    :reader x2
    :initarg :x2
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (x3
    :reader x3
    :initarg :x3
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass getPoint (<getPoint>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <getPoint>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'getPoint)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name axif_tf-msg:<getPoint> is deprecated: use axif_tf-msg:getPoint instead.")))

(cl:ensure-generic-function 'x1-val :lambda-list '(m))
(cl:defmethod x1-val ((m <getPoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader axif_tf-msg:x1-val is deprecated.  Use axif_tf-msg:x1 instead.")
  (x1 m))

(cl:ensure-generic-function 'x2-val :lambda-list '(m))
(cl:defmethod x2-val ((m <getPoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader axif_tf-msg:x2-val is deprecated.  Use axif_tf-msg:x2 instead.")
  (x2 m))

(cl:ensure-generic-function 'x3-val :lambda-list '(m))
(cl:defmethod x3-val ((m <getPoint>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader axif_tf-msg:x3-val is deprecated.  Use axif_tf-msg:x3 instead.")
  (x3 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <getPoint>) ostream)
  "Serializes a message object of type '<getPoint>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'x1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'x1))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'x2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'x2))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'x3))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'x3))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <getPoint>) istream)
  "Deserializes a message object of type '<getPoint>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'x1) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'x1)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'x2) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'x2)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'x3) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'x3)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<getPoint>)))
  "Returns string type for a message object of type '<getPoint>"
  "axif_tf/getPoint")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'getPoint)))
  "Returns string type for a message object of type 'getPoint"
  "axif_tf/getPoint")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<getPoint>)))
  "Returns md5sum for a message object of type '<getPoint>"
  "4416512988bf8bb5f533b3277759fe81")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'getPoint)))
  "Returns md5sum for a message object of type 'getPoint"
  "4416512988bf8bb5f533b3277759fe81")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<getPoint>)))
  "Returns full string definition for message of type '<getPoint>"
  (cl:format cl:nil "float32[] x1~%float32[] x2~%float32[] x3~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'getPoint)))
  "Returns full string definition for message of type 'getPoint"
  (cl:format cl:nil "float32[] x1~%float32[] x2~%float32[] x3~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <getPoint>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'x1) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'x2) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'x3) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <getPoint>))
  "Converts a ROS message object to a list"
  (cl:list 'getPoint
    (cl:cons ':x1 (x1 msg))
    (cl:cons ':x2 (x2 msg))
    (cl:cons ':x3 (x3 msg))
))
