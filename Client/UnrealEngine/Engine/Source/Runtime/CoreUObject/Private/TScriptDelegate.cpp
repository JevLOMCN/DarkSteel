// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// BindUFunction @ 142168230

void __thiscall
TScriptDelegate<FNotThreadSafeDelegateMode>::BindUFunction
          (TScriptDelegate<FNotThreadSafeDelegateMode> *this,UObject *param_1,FName *param_2)

{
  UObject *local_res8;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&this->Object,(FObjectPtr)&local_res8);
  this->FunctionName = *param_2;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// operator== @ 142202250

bool __thiscall
TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>::operator==
          (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *this,
          TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  FName FVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  
  local_res8 = param_1->Object;
  FVar1 = param_1->FunctionName;
  if (((this->Object).ObjectIndex != local_res8.ObjectIndex) ||
     ((this->Object).ObjectSerialNumber != local_res8.ObjectSerialNumber)) {
    bVar2 = FWeakObjectPtr::IsValid(&this->Object);
    if (bVar2) {
      return false;
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      return false;
    }
  }
  if (this->FunctionName != FVar1) {
    return false;
  }
  return true;
}

// IsBound @ 142212000

bool __thiscall
TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
          (TScriptDelegate<FNotThreadSafeDelegateMode> *this)

{
  UObject *pUVar1;
  UFunction *pUVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (this->FunctionName != (FName)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&this->Object);
    if (pUVar1 != (UObject *)0x0) {
      pUVar2 = UClass::FindFunctionByName
                         (*(UClass **)&pUVar1->field_0x10,this->FunctionName,IncludeSuper);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return pUVar2 != (UFunction *)0x0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

