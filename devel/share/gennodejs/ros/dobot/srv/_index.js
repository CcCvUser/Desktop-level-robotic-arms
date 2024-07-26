
"use strict";

let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetDeviceName = require('./SetDeviceName.js')
let SetARCParams = require('./SetARCParams.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let GetIODI = require('./GetIODI.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let SetEMotor = require('./SetEMotor.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let GetIOADC = require('./GetIOADC.js')
let SetColorSensor = require('./SetColorSensor.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let GetCPCmd = require('./GetCPCmd.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let GetCPParams = require('./GetCPParams.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let SetARCCmd = require('./SetARCCmd.js')
let GetIOPWM = require('./GetIOPWM.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let GetDeviceName = require('./GetDeviceName.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let SetIOPWM = require('./SetIOPWM.js')
let GetPose = require('./GetPose.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let SetCPCmd = require('./SetCPCmd.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let GetColorSensor = require('./GetColorSensor.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let GetIODO = require('./GetIODO.js')
let GetARCParams = require('./GetARCParams.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let SetIODO = require('./SetIODO.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let SetCPParams = require('./SetCPParams.js')

module.exports = {
  SetPTPCommonParams: SetPTPCommonParams,
  SetDeviceName: SetDeviceName,
  SetARCParams: SetARCParams,
  GetDeviceSN: GetDeviceSN,
  GetIODI: GetIODI,
  SetWAITCmd: SetWAITCmd,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  SetEMotor: SetEMotor,
  SetIOMultiplexing: SetIOMultiplexing,
  GetIOADC: GetIOADC,
  SetColorSensor: SetColorSensor,
  GetPTPJointParams: GetPTPJointParams,
  GetPTPCommonParams: GetPTPCommonParams,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  SetPTPCmd: SetPTPCmd,
  SetEndEffectorGripper: SetEndEffectorGripper,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  SetCmdTimeout: SetCmdTimeout,
  GetCPCmd: GetCPCmd,
  GetEndEffectorGripper: GetEndEffectorGripper,
  GetCPParams: GetCPParams,
  SetPTPJointParams: SetPTPJointParams,
  GetPTPJumpParams: GetPTPJumpParams,
  SetARCCmd: SetARCCmd,
  GetIOPWM: GetIOPWM,
  GetIOMultiplexing: GetIOMultiplexing,
  SetQueuedCmdClear: SetQueuedCmdClear,
  SetTRIGCmd: SetTRIGCmd,
  SetInfraredSensor: SetInfraredSensor,
  GetDeviceName: GetDeviceName,
  SetJOGJointParams: SetJOGJointParams,
  GetEndEffectorLaser: GetEndEffectorLaser,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  SetEndEffectorLaser: SetEndEffectorLaser,
  SetIOPWM: SetIOPWM,
  GetPose: GetPose,
  GetAlarmsState: GetAlarmsState,
  GetJOGCommonParams: GetJOGCommonParams,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  SetCPCmd: SetCPCmd,
  GetJOGJointParams: GetJOGJointParams,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  SetHOMEParams: SetHOMEParams,
  SetJOGCmd: SetJOGCmd,
  GetColorSensor: GetColorSensor,
  SetHOMECmd: SetHOMECmd,
  ClearAllAlarmsState: ClearAllAlarmsState,
  GetDeviceVersion: GetDeviceVersion,
  GetIODO: GetIODO,
  GetARCParams: GetARCParams,
  SetEndEffectorParams: SetEndEffectorParams,
  SetJOGCommonParams: SetJOGCommonParams,
  GetInfraredSensor: GetInfraredSensor,
  GetEndEffectorParams: GetEndEffectorParams,
  GetHOMEParams: GetHOMEParams,
  SetIODO: SetIODO,
  SetPTPJumpParams: SetPTPJumpParams,
  SetCPParams: SetCPParams,
};
