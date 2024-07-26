// Auto-generated. Do not edit!

// (in-package opencvtest.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class pixel_point0 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.red_u = null;
      this.red_v = null;
      this.yellow_u = null;
      this.yellow_v = null;
      this.green_u = null;
      this.green_v = null;
      this.purple_u = null;
      this.purple_v = null;
      this.orange_u = null;
      this.orange_v = null;
      this.blue_u = null;
      this.blue_v = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('red_u')) {
        this.red_u = initObj.red_u
      }
      else {
        this.red_u = [];
      }
      if (initObj.hasOwnProperty('red_v')) {
        this.red_v = initObj.red_v
      }
      else {
        this.red_v = [];
      }
      if (initObj.hasOwnProperty('yellow_u')) {
        this.yellow_u = initObj.yellow_u
      }
      else {
        this.yellow_u = [];
      }
      if (initObj.hasOwnProperty('yellow_v')) {
        this.yellow_v = initObj.yellow_v
      }
      else {
        this.yellow_v = [];
      }
      if (initObj.hasOwnProperty('green_u')) {
        this.green_u = initObj.green_u
      }
      else {
        this.green_u = [];
      }
      if (initObj.hasOwnProperty('green_v')) {
        this.green_v = initObj.green_v
      }
      else {
        this.green_v = [];
      }
      if (initObj.hasOwnProperty('purple_u')) {
        this.purple_u = initObj.purple_u
      }
      else {
        this.purple_u = [];
      }
      if (initObj.hasOwnProperty('purple_v')) {
        this.purple_v = initObj.purple_v
      }
      else {
        this.purple_v = [];
      }
      if (initObj.hasOwnProperty('orange_u')) {
        this.orange_u = initObj.orange_u
      }
      else {
        this.orange_u = [];
      }
      if (initObj.hasOwnProperty('orange_v')) {
        this.orange_v = initObj.orange_v
      }
      else {
        this.orange_v = [];
      }
      if (initObj.hasOwnProperty('blue_u')) {
        this.blue_u = initObj.blue_u
      }
      else {
        this.blue_u = [];
      }
      if (initObj.hasOwnProperty('blue_v')) {
        this.blue_v = initObj.blue_v
      }
      else {
        this.blue_v = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type pixel_point0
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [red_u]
    bufferOffset = _arraySerializer.float64(obj.red_u, buffer, bufferOffset, null);
    // Serialize message field [red_v]
    bufferOffset = _arraySerializer.float64(obj.red_v, buffer, bufferOffset, null);
    // Serialize message field [yellow_u]
    bufferOffset = _arraySerializer.float64(obj.yellow_u, buffer, bufferOffset, null);
    // Serialize message field [yellow_v]
    bufferOffset = _arraySerializer.float64(obj.yellow_v, buffer, bufferOffset, null);
    // Serialize message field [green_u]
    bufferOffset = _arraySerializer.float64(obj.green_u, buffer, bufferOffset, null);
    // Serialize message field [green_v]
    bufferOffset = _arraySerializer.float64(obj.green_v, buffer, bufferOffset, null);
    // Serialize message field [purple_u]
    bufferOffset = _arraySerializer.float64(obj.purple_u, buffer, bufferOffset, null);
    // Serialize message field [purple_v]
    bufferOffset = _arraySerializer.float64(obj.purple_v, buffer, bufferOffset, null);
    // Serialize message field [orange_u]
    bufferOffset = _arraySerializer.float64(obj.orange_u, buffer, bufferOffset, null);
    // Serialize message field [orange_v]
    bufferOffset = _arraySerializer.float64(obj.orange_v, buffer, bufferOffset, null);
    // Serialize message field [blue_u]
    bufferOffset = _arraySerializer.float64(obj.blue_u, buffer, bufferOffset, null);
    // Serialize message field [blue_v]
    bufferOffset = _arraySerializer.float64(obj.blue_v, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type pixel_point0
    let len;
    let data = new pixel_point0(null);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [red_u]
    data.red_u = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [red_v]
    data.red_v = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [yellow_u]
    data.yellow_u = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [yellow_v]
    data.yellow_v = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [green_u]
    data.green_u = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [green_v]
    data.green_v = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [purple_u]
    data.purple_u = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [purple_v]
    data.purple_v = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [orange_u]
    data.orange_u = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [orange_v]
    data.orange_v = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [blue_u]
    data.blue_u = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [blue_v]
    data.blue_v = _arrayDeserializer.float64(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.name.length;
    length += 8 * object.red_u.length;
    length += 8 * object.red_v.length;
    length += 8 * object.yellow_u.length;
    length += 8 * object.yellow_v.length;
    length += 8 * object.green_u.length;
    length += 8 * object.green_v.length;
    length += 8 * object.purple_u.length;
    length += 8 * object.purple_v.length;
    length += 8 * object.orange_u.length;
    length += 8 * object.orange_v.length;
    length += 8 * object.blue_u.length;
    length += 8 * object.blue_v.length;
    return length + 52;
  }

  static datatype() {
    // Returns string type for a message object
    return 'opencvtest/pixel_point0';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e04ac0d2a8d1d4cb528470b2ef466922';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string name
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
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new pixel_point0(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.red_u !== undefined) {
      resolved.red_u = msg.red_u;
    }
    else {
      resolved.red_u = []
    }

    if (msg.red_v !== undefined) {
      resolved.red_v = msg.red_v;
    }
    else {
      resolved.red_v = []
    }

    if (msg.yellow_u !== undefined) {
      resolved.yellow_u = msg.yellow_u;
    }
    else {
      resolved.yellow_u = []
    }

    if (msg.yellow_v !== undefined) {
      resolved.yellow_v = msg.yellow_v;
    }
    else {
      resolved.yellow_v = []
    }

    if (msg.green_u !== undefined) {
      resolved.green_u = msg.green_u;
    }
    else {
      resolved.green_u = []
    }

    if (msg.green_v !== undefined) {
      resolved.green_v = msg.green_v;
    }
    else {
      resolved.green_v = []
    }

    if (msg.purple_u !== undefined) {
      resolved.purple_u = msg.purple_u;
    }
    else {
      resolved.purple_u = []
    }

    if (msg.purple_v !== undefined) {
      resolved.purple_v = msg.purple_v;
    }
    else {
      resolved.purple_v = []
    }

    if (msg.orange_u !== undefined) {
      resolved.orange_u = msg.orange_u;
    }
    else {
      resolved.orange_u = []
    }

    if (msg.orange_v !== undefined) {
      resolved.orange_v = msg.orange_v;
    }
    else {
      resolved.orange_v = []
    }

    if (msg.blue_u !== undefined) {
      resolved.blue_u = msg.blue_u;
    }
    else {
      resolved.blue_u = []
    }

    if (msg.blue_v !== undefined) {
      resolved.blue_v = msg.blue_v;
    }
    else {
      resolved.blue_v = []
    }

    return resolved;
    }
};

module.exports = pixel_point0;
