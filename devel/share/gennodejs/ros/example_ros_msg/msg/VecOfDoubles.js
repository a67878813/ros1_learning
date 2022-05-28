// Auto-generated. Do not edit!

// (in-package example_ros_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class VecOfDoubles {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.db1_vec = null;
    }
    else {
      if (initObj.hasOwnProperty('db1_vec')) {
        this.db1_vec = initObj.db1_vec
      }
      else {
        this.db1_vec = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type VecOfDoubles
    // Serialize message field [db1_vec]
    bufferOffset = _arraySerializer.float64(obj.db1_vec, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type VecOfDoubles
    let len;
    let data = new VecOfDoubles(null);
    // Deserialize message field [db1_vec]
    data.db1_vec = _arrayDeserializer.float64(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 8 * object.db1_vec.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'example_ros_msg/VecOfDoubles';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '103cc761631b433aad855c490af308f7';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64[] db1_vec
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new VecOfDoubles(null);
    if (msg.db1_vec !== undefined) {
      resolved.db1_vec = msg.db1_vec;
    }
    else {
      resolved.db1_vec = []
    }

    return resolved;
    }
};

module.exports = VecOfDoubles;
