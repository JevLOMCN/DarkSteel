// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 1

// Set<enum_sl::ReflexMode> @ 14de6fc10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
IConsoleVariable::Set<enum_sl::ReflexMode>
          (IConsoleVariable *this,ReflexMode param_1,EConsoleVariableFlags param_2,FName param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  undefined1 local_48 [16];
  FString local_38;
  EConsoleVariableFlags local_28;
  undefined1 local_24;
  FName local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_24 = 0;
  local_18 = 0;
  local_14 = 0xf000000;
  local_10 = 0x1000000;
  local_28 = param_2;
  local_20 = param_3;
  ::FString::PrintfImpl(&local_38,L"%d");
  lVar1 = *(longlong *)this;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  uVar2 = (**(code **)(lVar1 + 0xa8))(this,local_48,&local_28);
  (**(code **)(lVar1 + 0xb0))(this,FVar3.Data,uVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

