;; Auto-generated. Do not edit!


(when (boundp 'example_ros_msg::VecOfDoubles)
  (if (not (find-package "EXAMPLE_ROS_MSG"))
    (make-package "EXAMPLE_ROS_MSG"))
  (shadow 'VecOfDoubles (find-package "EXAMPLE_ROS_MSG")))
(unless (find-package "EXAMPLE_ROS_MSG::VECOFDOUBLES")
  (make-package "EXAMPLE_ROS_MSG::VECOFDOUBLES"))

(in-package "ROS")
;;//! \htmlinclude VecOfDoubles.msg.html


(defclass example_ros_msg::VecOfDoubles
  :super ros::object
  :slots (_db1_vec ))

(defmethod example_ros_msg::VecOfDoubles
  (:init
   (&key
    ((:db1_vec __db1_vec) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _db1_vec __db1_vec)
   self)
  (:db1_vec
   (&optional __db1_vec)
   (if __db1_vec (setq _db1_vec __db1_vec)) _db1_vec)
  (:serialization-length
   ()
   (+
    ;; float64[] _db1_vec
    (* 8    (length _db1_vec)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[] _db1_vec
     (write-long (length _db1_vec) s)
     (dotimes (i (length _db1_vec))
       (sys::poke (elt _db1_vec i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[] _db1_vec
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _db1_vec (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _db1_vec i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;;
   self)
  )

(setf (get example_ros_msg::VecOfDoubles :md5sum-) "103cc761631b433aad855c490af308f7")
(setf (get example_ros_msg::VecOfDoubles :datatype-) "example_ros_msg/VecOfDoubles")
(setf (get example_ros_msg::VecOfDoubles :definition-)
      "float64[] db1_vec

")



(provide :example_ros_msg/VecOfDoubles "103cc761631b433aad855c490af308f7")


