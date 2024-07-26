;; Auto-generated. Do not edit!


(when (boundp 'opencvtest::pixel_point0)
  (if (not (find-package "OPENCVTEST"))
    (make-package "OPENCVTEST"))
  (shadow 'pixel_point0 (find-package "OPENCVTEST")))
(unless (find-package "OPENCVTEST::PIXEL_POINT0")
  (make-package "OPENCVTEST::PIXEL_POINT0"))

(in-package "ROS")
;;//! \htmlinclude pixel_point0.msg.html


(defclass opencvtest::pixel_point0
  :super ros::object
  :slots (_name _red_u _red_v _yellow_u _yellow_v _green_u _green_v _purple_u _purple_v _orange_u _orange_v _blue_u _blue_v ))

(defmethod opencvtest::pixel_point0
  (:init
   (&key
    ((:name __name) "")
    ((:red_u __red_u) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:red_v __red_v) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:yellow_u __yellow_u) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:yellow_v __yellow_v) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:green_u __green_u) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:green_v __green_v) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:purple_u __purple_u) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:purple_v __purple_v) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:orange_u __orange_u) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:orange_v __orange_v) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:blue_u __blue_u) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:blue_v __blue_v) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _red_u __red_u)
   (setq _red_v __red_v)
   (setq _yellow_u __yellow_u)
   (setq _yellow_v __yellow_v)
   (setq _green_u __green_u)
   (setq _green_v __green_v)
   (setq _purple_u __purple_u)
   (setq _purple_v __purple_v)
   (setq _orange_u __orange_u)
   (setq _orange_v __orange_v)
   (setq _blue_u __blue_u)
   (setq _blue_v __blue_v)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:red_u
   (&optional __red_u)
   (if __red_u (setq _red_u __red_u)) _red_u)
  (:red_v
   (&optional __red_v)
   (if __red_v (setq _red_v __red_v)) _red_v)
  (:yellow_u
   (&optional __yellow_u)
   (if __yellow_u (setq _yellow_u __yellow_u)) _yellow_u)
  (:yellow_v
   (&optional __yellow_v)
   (if __yellow_v (setq _yellow_v __yellow_v)) _yellow_v)
  (:green_u
   (&optional __green_u)
   (if __green_u (setq _green_u __green_u)) _green_u)
  (:green_v
   (&optional __green_v)
   (if __green_v (setq _green_v __green_v)) _green_v)
  (:purple_u
   (&optional __purple_u)
   (if __purple_u (setq _purple_u __purple_u)) _purple_u)
  (:purple_v
   (&optional __purple_v)
   (if __purple_v (setq _purple_v __purple_v)) _purple_v)
  (:orange_u
   (&optional __orange_u)
   (if __orange_u (setq _orange_u __orange_u)) _orange_u)
  (:orange_v
   (&optional __orange_v)
   (if __orange_v (setq _orange_v __orange_v)) _orange_v)
  (:blue_u
   (&optional __blue_u)
   (if __blue_u (setq _blue_u __blue_u)) _blue_u)
  (:blue_v
   (&optional __blue_v)
   (if __blue_v (setq _blue_v __blue_v)) _blue_v)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; float64[] _red_u
    (* 8    (length _red_u)) 4
    ;; float64[] _red_v
    (* 8    (length _red_v)) 4
    ;; float64[] _yellow_u
    (* 8    (length _yellow_u)) 4
    ;; float64[] _yellow_v
    (* 8    (length _yellow_v)) 4
    ;; float64[] _green_u
    (* 8    (length _green_u)) 4
    ;; float64[] _green_v
    (* 8    (length _green_v)) 4
    ;; float64[] _purple_u
    (* 8    (length _purple_u)) 4
    ;; float64[] _purple_v
    (* 8    (length _purple_v)) 4
    ;; float64[] _orange_u
    (* 8    (length _orange_u)) 4
    ;; float64[] _orange_v
    (* 8    (length _orange_v)) 4
    ;; float64[] _blue_u
    (* 8    (length _blue_u)) 4
    ;; float64[] _blue_v
    (* 8    (length _blue_v)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; float64[] _red_u
     (write-long (length _red_u) s)
     (dotimes (i (length _red_u))
       (sys::poke (elt _red_u i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _red_v
     (write-long (length _red_v) s)
     (dotimes (i (length _red_v))
       (sys::poke (elt _red_v i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _yellow_u
     (write-long (length _yellow_u) s)
     (dotimes (i (length _yellow_u))
       (sys::poke (elt _yellow_u i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _yellow_v
     (write-long (length _yellow_v) s)
     (dotimes (i (length _yellow_v))
       (sys::poke (elt _yellow_v i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _green_u
     (write-long (length _green_u) s)
     (dotimes (i (length _green_u))
       (sys::poke (elt _green_u i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _green_v
     (write-long (length _green_v) s)
     (dotimes (i (length _green_v))
       (sys::poke (elt _green_v i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _purple_u
     (write-long (length _purple_u) s)
     (dotimes (i (length _purple_u))
       (sys::poke (elt _purple_u i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _purple_v
     (write-long (length _purple_v) s)
     (dotimes (i (length _purple_v))
       (sys::poke (elt _purple_v i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _orange_u
     (write-long (length _orange_u) s)
     (dotimes (i (length _orange_u))
       (sys::poke (elt _orange_u i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _orange_v
     (write-long (length _orange_v) s)
     (dotimes (i (length _orange_v))
       (sys::poke (elt _orange_v i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _blue_u
     (write-long (length _blue_u) s)
     (dotimes (i (length _blue_u))
       (sys::poke (elt _blue_u i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[] _blue_v
     (write-long (length _blue_v) s)
     (dotimes (i (length _blue_v))
       (sys::poke (elt _blue_v i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float64[] _red_u
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _red_u (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _red_u i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _red_v
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _red_v (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _red_v i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _yellow_u
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _yellow_u (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _yellow_u i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _yellow_v
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _yellow_v (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _yellow_v i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _green_u
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _green_u (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _green_u i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _green_v
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _green_v (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _green_v i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _purple_u
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _purple_u (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _purple_u i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _purple_v
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _purple_v (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _purple_v i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _orange_u
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _orange_u (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _orange_u i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _orange_v
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _orange_v (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _orange_v i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _blue_u
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _blue_u (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _blue_u i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; float64[] _blue_v
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _blue_v (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _blue_v i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;;
   self)
  )

(setf (get opencvtest::pixel_point0 :md5sum-) "e04ac0d2a8d1d4cb528470b2ef466922")
(setf (get opencvtest::pixel_point0 :datatype-) "opencvtest/pixel_point0")
(setf (get opencvtest::pixel_point0 :definition-)
      "string name
float64[] red_u
float64[] red_v
float64[] yellow_u
float64[] yellow_v
float64[] green_u
float64[] green_v
float64[] purple_u
float64[] purple_v
float64[] orange_u
float64[] orange_v
float64[] blue_u
float64[] blue_v
")



(provide :opencvtest/pixel_point0 "e04ac0d2a8d1d4cb528470b2ef466922")


