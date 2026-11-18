// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// SetWithCurrentPriority<int> @ 148c7dd70

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
IConsoleVariable::SetWithCurrentPriority<int>
          (IConsoleVariable *this,int param_1,FName param_2,EConsoleVariableFlags param_3,
          EConsoleVariableFlags param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  undefined1 local_48 [16];
  FString local_38;
  uint local_28;
  undefined1 local_24;
  FName local_20;
  undefined1 local_18;
  EConsoleVariableFlags local_14;
  EConsoleVariableFlags local_10;
  
  if ((int)param_3 < (int)param_4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinPriority <= MaxPriority",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x2fa,L"MinPriority must be <= MaxPriority");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18 = 0;
  local_24 = 1;
  local_10 = param_4;
  local_20 = param_2;
  local_14 = param_3;
  local_28 = (**(code **)(*(longlong *)this + 0x18))(this);
  local_28 = local_28 & 0xff000000;
  ::FString::PrintfImpl(&local_38,L"%d");
  lVar1 = *(longlong *)this;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  uVar4 = (**(code **)(lVar1 + 0xa8))(this,local_48,&local_28);
  (**(code **)(lVar1 + 0xb0))(this,FVar5.Data,uVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// SetWithCurrentPriority<float> @ 148c7de70

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
IConsoleVariable::SetWithCurrentPriority<float>
          (IConsoleVariable *this,float param_1,FName param_2,EConsoleVariableFlags param_3,
          EConsoleVariableFlags param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  undefined1 local_58 [16];
  FString local_48;
  uint local_38;
  undefined1 local_34;
  FName local_30;
  undefined1 local_28;
  EConsoleVariableFlags local_24;
  EConsoleVariableFlags local_20;
  
  if ((int)param_3 < (int)param_4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinPriority <= MaxPriority",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x2fa,L"MinPriority must be <= MaxPriority");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28 = 0;
  local_34 = 1;
  local_20 = param_4;
  local_30 = param_2;
  local_24 = param_3;
  local_38 = (**(code **)(*(longlong *)this + 0x18))(this);
  local_38 = local_38 & 0xff000000;
  ::FString::PrintfImpl(&local_48,L"%g");
  lVar1 = *(longlong *)this;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  uVar4 = (**(code **)(lVar1 + 0xa8))(this,local_58,&local_38);
  (**(code **)(lVar1 + 0xb0))(this,FVar5.Data,uVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

