// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 1

// ExecuteIfBound @ 14cf0c340

bool __thiscall
FOnRootMotionModifierDelegate::ExecuteIfBound
          (FOnRootMotionModifierDelegate *this,UMotionWarpingComponent *param_1,
          URootMotionModifier *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *this_00;
  UFunction *pUVar5;
  UMotionWarpingComponent *local_38;
  URootMotionModifier *local_30;
  FDestructionSentinel local_28;
  
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this);
  if (!bVar3) {
    return false;
  }
  local_38 = param_1;
  local_30 = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x8);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(longlong *)&this->field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x10;
  FVar1.Number = *(uint *)&this->field_0x14;
  pUVar5 = UObject::FindFunctionChecked(this_00,FVar1);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar5,&local_38);
  return true;
}

