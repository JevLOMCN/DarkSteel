// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 2

// FScopedInterchangeImportEnableState @ 14e4d7ac0

FScopedInterchangeImportEnableState * __thiscall
UE::Interchange::FScopedInterchangeImportEnableState::FScopedInterchangeImportEnableState
          (FScopedInterchangeImportEnableState *this,bool param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  bVar3 = (bool)(**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  local_2c = 0xe000000;
  this->bOriginalInterchangeImportEnableState = bVar3;
  uVar2 = CCvarInterchangeImportEnable._8_8_;
  local_28 = 0;
  local_24 = 0;
  lVar1 = *(longlong *)CCvarInterchangeImportEnable._8_8_;
  local_1c = 0;
  local_18 = 0xf000000;
  local_14 = 0x1000000;
  uVar4 = (**(code **)(lVar1 + 0xa8))(CCvarInterchangeImportEnable._8_8_,local_38,&local_2c);
  puVar5 = &u_0;
  if (param_1) {
    puVar5 = &u_1;
  }
  (**(code **)(lVar1 + 0xb0))(uVar2,puVar5,uVar4);
  return this;
}

// ~FScopedInterchangeImportEnableState @ 14e4daa90

void __thiscall
UE::Interchange::FScopedInterchangeImportEnableState::~FScopedInterchangeImportEnableState
          (FScopedInterchangeImportEnableState *this)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = CCvarInterchangeImportEnable._8_8_;
  bVar1 = this->bOriginalInterchangeImportEnableState;
  local_2c = 0xe000000;
  lVar2 = *(longlong *)CCvarInterchangeImportEnable._8_8_;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0xf000000;
  local_14 = 0x1000000;
  uVar4 = (**(code **)(lVar2 + 0xa8))(CCvarInterchangeImportEnable._8_8_,local_38,&local_2c);
  puVar5 = &u_0;
  if (bVar1 != false) {
    puVar5 = &u_1;
  }
  (**(code **)(lVar2 + 0xb0))(uVar3,puVar5,uVar4);
  return;
}

