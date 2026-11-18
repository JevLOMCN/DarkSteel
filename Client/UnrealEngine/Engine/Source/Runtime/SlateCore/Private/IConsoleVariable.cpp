// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// Set<bool> @ 142426410

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
IConsoleVariable::Set<bool>
          (IConsoleVariable *this,bool param_1,EConsoleVariableFlags param_2,FName param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 local_38 [12];
  EConsoleVariableFlags local_2c;
  undefined1 local_28;
  FName local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar1 = *(longlong *)this;
  local_28 = 0;
  local_1c = 0;
  local_18 = 0xf000000;
  local_14 = 0x1000000;
  local_2c = param_2;
  local_24 = param_3;
  uVar2 = (**(code **)(lVar1 + 0xa8))(this,local_38,&local_2c);
  puVar3 = &u_0;
  if (param_1) {
    puVar3 = &u_1;
  }
  (**(code **)(lVar1 + 0xb0))(this,puVar3,uVar2);
  return;
}

