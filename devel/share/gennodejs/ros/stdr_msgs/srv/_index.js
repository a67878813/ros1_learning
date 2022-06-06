
"use strict";

let DeleteThermalSource = require('./DeleteThermalSource.js')
let AddRfidTag = require('./AddRfidTag.js')
let LoadExternalMap = require('./LoadExternalMap.js')
let AddThermalSource = require('./AddThermalSource.js')
let RegisterGui = require('./RegisterGui.js')
let AddCO2Source = require('./AddCO2Source.js')
let AddSoundSource = require('./AddSoundSource.js')
let LoadMap = require('./LoadMap.js')
let MoveRobot = require('./MoveRobot.js')
let DeleteRfidTag = require('./DeleteRfidTag.js')
let DeleteSoundSource = require('./DeleteSoundSource.js')
let DeleteCO2Source = require('./DeleteCO2Source.js')

module.exports = {
  DeleteThermalSource: DeleteThermalSource,
  AddRfidTag: AddRfidTag,
  LoadExternalMap: LoadExternalMap,
  AddThermalSource: AddThermalSource,
  RegisterGui: RegisterGui,
  AddCO2Source: AddCO2Source,
  AddSoundSource: AddSoundSource,
  LoadMap: LoadMap,
  MoveRobot: MoveRobot,
  DeleteRfidTag: DeleteRfidTag,
  DeleteSoundSource: DeleteSoundSource,
  DeleteCO2Source: DeleteCO2Source,
};
