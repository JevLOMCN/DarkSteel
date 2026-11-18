// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 2

// UEOpEquals<USkeletalMesh,bool> @ 14a65e7a0

bool __thiscall
TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
          (TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *this,USkeletalMesh *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USkeletalMesh *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeletalMesh *)0x0)) {
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

// UEOpEquals<USkeleton,bool> @ 14a65e850

bool __thiscall
TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>::UEOpEquals<USkeleton,bool>
          (TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *this,USkeleton *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USkeleton *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
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

