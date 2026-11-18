// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// GetUObject @ 146925270

UObject * __thiscall
TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
          (TScriptDelegate<FNotThreadSafeDelegateMode> *this)

{
  UObject *pUVar1;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  pUVar1 = FWeakObjectPtr::Get(&this->Object);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return pUVar1;
}

// operator== @ 146a59400

bool __thiscall
TScriptDelegate<FNotThreadSafeDelegateMode>::operator==
          (TScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  FName FVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  local_res8 = param_1->Object;
  FVar1 = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (((this->Object).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->Object).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
LAB_146a5946d:
    if (this->FunctionName == FVar1) {
      bVar2 = true;
      goto LAB_146a5948e;
    }
  }
  else {
    bVar2 = FWeakObjectPtr::IsValid(&this->Object);
    if (!bVar2) {
      bVar2 = FWeakObjectPtr::IsValid(&local_res8);
      if (!bVar2) goto LAB_146a5946d;
    }
  }
  bVar2 = false;
LAB_146a5948e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return bVar2;
}

