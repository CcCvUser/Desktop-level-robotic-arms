// Auto-generated. Do not edit!

// (in-package axif_tf.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class getPoint {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.x1 = null;
      this.x2 = null;
      this.x3 = null;
    }
    else {
      if (initObj.hasOwnProperty('x1')) {
        this.x1 = initObj.x1
      }
      else {
        this.x1 = [];
      }
      if (initObj.hasOwnProperty('x2')) {
        this.x2 = initObj.x2
      }
      else {
        this.x2 = [];
      }
      if (initObj.hasOwnProperty('x3')) {
        this.x3 = initObj.x3
      }
      else {
        this.x3 = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type getPoint
    // Serialize message field [x1]
    bufferOffset = _arraySerializer.float32(obj.x1, buffer, bufferOffset, null);
    // Serialize message field [x2]
    bufferOffset = _arraySerializer.float32(obj.x2, buffer, bufferOffset, null);
    // Serialize message field [x3]
    bufferOffset = _arraySerializer.float32(obj.x3, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type getPoint
    let len;
    let data = new getPoint(null);
    // Deserialize message field [x1]
    data.x1 = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [x2]
    data.x2 = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [x3]
    data.x3 = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.x1.length;
    length += 4 * object.x2.length;
    length += 4 * object.x3.length;
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'axif_tf/getPoint';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4416512988bf8bb5f533b3277759fe81';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[] x1
    float32[] x2
    float32[] x3
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new getPoint(null);
    if (msg.x1 !== undefined) {
      resolved.x1 = msg.x1;
    }
    else {
      resolved.x1 = []
    }

    if (msg.x2 !== undefined) {
      resolved.x2 = msg.x2;
    }
    else {
      resolved.x2 = []
    }

    if (msg.x3 !== undefined) {
      resolved.x3 = msg.x3;
    }
    else {
      resolved.x3 = []
    }

    return resolved;
    }
};

module.exports = getPoint;
