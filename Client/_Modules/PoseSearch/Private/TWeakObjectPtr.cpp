// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// UEOpEquals<UPoseSearchDatabase_const_,bool> @ 14a8a89f0

bool __thiscall
TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
UEOpEquals<UPoseSearchDatabase_const_,bool>
          (TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UPoseSearchDatabase,bool> @ 14a8a8a40

bool __thiscall
TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals<UPoseSearchDatabase,bool>
          (TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *this,
          UPoseSearchDatabase *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UPoseSearchDatabase *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPoseSearchDatabase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPoseSearchDatabase *)0x0)) {
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

// UEOpEquals @ 14a8cefd0

bool __thiscall
TWeakObjectPtr<UAnimationAsset_const_,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UAnimationAsset_const_,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14a8ceff0

bool __thiscall
TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UActorComponent,bool> @ 14a8de460

bool __thiscall
TWeakObjectPtr<UActorComponent,FWeakObjectPtr>::UEOpEquals<UActorComponent,bool>
          (TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 14a9092e0

bool __thiscall
TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UActorComponent_const_,bool> @ 14a918260

bool __thiscall
TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr>::UEOpEquals<UActorComponent_const_,bool>
          (TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UActorComponent_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 14a942130

bool __thiscall
TWeakObjectPtr<UMirrorDataTable_const_,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UMirrorDataTable_const_,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

