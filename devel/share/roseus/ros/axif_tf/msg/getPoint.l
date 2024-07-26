;; Auto-generated. Do not edit!


(when (boundp 'axif_tf::getPoint)
  (if (not (find-package "AXIF_TF"))
    (make-package "AXIF_TF"))
  (shadow 'getPoint (find-package "AXIF_TF")))
(unless (find-package "AXIF_TF::GETPOINT")
  (make-package "AXIF_TF::GETPOINT"))

(in-package "ROS")
;;//! \htmlinclude getPoint.msg.html


(defclass axif_tf::getPoint
  :super ros::object
  :slots (_x1 _x2 _x3 ))

(defmethod axif_tf::getPoint
  (:init
   (&key
    ((:x1 __x1) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:x2 __x2) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:x3 __x3) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _x1 __x1)
   (setq _x2 __x2)
   (setq _x3 __x3)
   self)
  (:x1
   (&optional __x1)
   (if __x1 (setq _x1 __x1)) _x1)
  (:x2
   (&optional __x2)
   (if __x2 (setq _x2 __x2)) _x2)
  (:x3
   (&optional __x3)
   (if __x3 (setq _x3 __x3)) _x3)
  (:serialization-length
   ()
   (+
    ;; float32[] _x1
    (* 4    (length _x1)) 4
    ;; float32[] _x2
    (* 4    (length _x2)) 4
    ;; float32[] _x3
    (* 4    (length _x3)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _x1
     (write-long (length _x1) s)
     (dotimes (i (length _x1))
       (sys::poke (elt _x1 i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _x2
     (write-long (length _x2) s)
     (dotimes (i (length _x2))
       (sys::poke (elt _x2 i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _x3
     (write-long (length _x3) s)
     (dotimes (i (length _x3))
       (sys::poke (elt _x3 i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _x1
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _x1 (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _x1 i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _x2
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _x2 (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _x2 i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _x3
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _x3 (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _x3 i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get axif_tf::getPoint :md5sum-) "4416512988bf8bb5f533b3277759fe81")
(setf (get axif_tf::getPoint :datatype-) "axif_tf/getPoint")
(setf (get axif_tf::getPoint :definition-)
      "float32[] x1
float32[] x2
float32[] x3
")



(provide :axif_tf/getPoint "4416512988bf8bb5f533b3277759fe81")


