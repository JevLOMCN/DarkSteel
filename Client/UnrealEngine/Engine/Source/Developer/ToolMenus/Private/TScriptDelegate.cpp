// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// ProcessDelegate<UObject> @ 142c35540

void __thiscall
TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
          (TScriptDelegate<FNotThreadSafeDelegateMode> *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&this->Object);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->FunctionName == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = FWeakObjectPtr::Get(&this->Object);
  pUVar3 = UObject::FindFunctionChecked(this_00,this->FunctionName);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar3,param_1);
  return;
}

// operator= @ 142c3ce40

TScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
          (TScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  FWeakObjectPtr FVar1;
  FName FVar2;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_28);
  FVar1 = param_1->Object;
  FVar2 = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  this->Object = FVar1;
  this->FunctionName = FVar2;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

