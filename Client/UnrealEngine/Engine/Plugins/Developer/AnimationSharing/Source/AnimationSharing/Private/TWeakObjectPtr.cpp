// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 2

// UEOpEquals<UAnimationSharingSetup_const_,bool> @ 14e2ab810

bool __thiscall
TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
UEOpEquals<UAnimationSharingSetup_const_,bool>
          (TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UAnimationSharingSetup,bool> @ 14e2ab860

bool __thiscall
TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
UEOpEquals<UAnimationSharingSetup,bool>
          (TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *this,
          UAnimationSharingSetup *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UAnimationSharingSetup *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimationSharingSetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UAnimationSharingSetup *)0x0)) {
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

