// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 2

// UEOpEquals<UAnimMontage,bool> @ 14cf03810

bool __thiscall
TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr>::UEOpEquals<UAnimMontage,bool>
          (TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr> *this,UAnimMontage *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UAnimMontage *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UAnimSequenceBase,bool> @ 14cf038c0

bool __thiscall
TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr>::UEOpEquals<UAnimSequenceBase,bool>
          (TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr> *this,UAnimSequenceBase *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UAnimSequenceBase *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimSequenceBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

