// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Set<wchar_t_const_*> @ 1416177b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
IConsoleVariable::Set<wchar_t_const_*>
          (IConsoleVariable *this,wchar_t *param_1,EConsoleVariableFlags param_2,FName param_3)

{
  longlong lVar1;
  undefined8 uVar2;
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
  (**(code **)(lVar1 + 0xb0))(this,param_1,uVar2);
  return;
}

// ClearPlatformVariables @ 14162ecd0

void __thiscall IConsoleVariable::ClearPlatformVariables(IConsoleVariable *this,FName param_1)

{
  return;
}

// GetDefaultValueVariable @ 141641040

IConsoleVariable * __thiscall IConsoleVariable::GetDefaultValueVariable(IConsoleVariable *this)

{
  return (IConsoleVariable *)0x0;
}

// Set<int> @ 141913180

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
IConsoleVariable::Set<int>
          (IConsoleVariable *this,int param_1,EConsoleVariableFlags param_2,FName param_3)

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

