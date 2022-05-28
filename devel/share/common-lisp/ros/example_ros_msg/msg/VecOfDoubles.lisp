; Auto-generated. Do not edit!


(cl:in-package example_ros_msg-msg)


;//! \htmlinclude VecOfDoubles.msg.html

(cl:defclass <VecOfDoubles> (roslisp-msg-protocol:ros-message)
  ((db1_vec
    :reader db1_vec
    :initarg :db1_vec
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass VecOfDoubles (<VecOfDoubles>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VecOfDoubles>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VecOfDoubles)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name example_ros_msg-msg:<VecOfDoubles> is deprecated: use example_ros_msg-msg:VecOfDoubles instead.")))

(cl:ensure-generic-function 'db1_vec-val :lambda-list '(m))
(cl:defmethod db1_vec-val ((m <VecOfDoubles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader example_ros_msg-msg:db1_vec-val is deprecated.  Use example_ros_msg-msg:db1_vec instead.")
  (db1_vec m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VecOfDoubles>) ostream)
  "Serializes a message object of type '<VecOfDoubles>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'db1_vec))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'db1_vec))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VecOfDoubles>) istream)
  "Deserializes a message object of type '<VecOfDoubles>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'db1_vec) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'db1_vec)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VecOfDoubles>)))
  "Returns string type for a message object of type '<VecOfDoubles>"
  "example_ros_msg/VecOfDoubles")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VecOfDoubles)))
  "Returns string type for a message object of type 'VecOfDoubles"
  "example_ros_msg/VecOfDoubles")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VecOfDoubles>)))
  "Returns md5sum for a message object of type '<VecOfDoubles>"
  "103cc761631b433aad855c490af308f7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VecOfDoubles)))
  "Returns md5sum for a message object of type 'VecOfDoubles"
  "103cc761631b433aad855c490af308f7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VecOfDoubles>)))
  "Returns full string definition for message of type '<VecOfDoubles>"
  (cl:format cl:nil "float64[] db1_vec~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VecOfDoubles)))
  "Returns full string definition for message of type 'VecOfDoubles"
  (cl:format cl:nil "float64[] db1_vec~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VecOfDoubles>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'db1_vec) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VecOfDoubles>))
  "Converts a ROS message object to a list"
  (cl:list 'VecOfDoubles
    (cl:cons ':db1_vec (db1_vec msg))
))
