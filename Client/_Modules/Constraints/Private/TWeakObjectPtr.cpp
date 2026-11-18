// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 7

// UEOpEquals<ULevel_const_,bool> @ 14649d4e0

bool __thiscall
TWeakObjectPtr<ULevel_const_,FWeakObjectPtr>::UEOpEquals<ULevel_const_,bool>
          (TWeakObjectPtr<ULevel_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<ULevel_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<ULevel,bool> @ 14649d530

bool __thiscall
TWeakObjectPtr<ULevel_const_,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
          (TWeakObjectPtr<ULevel_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<ULevel,FWeakObjectPtr> *param_1)

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

// UEOpEquals<USceneComponent,bool> @ 14649d580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals<USceneComponent,bool>
          (TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *this,USceneComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USceneComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
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

// UEOpEquals<USkeletalMeshComponent,bool> @ 14649d630

bool __thiscall
TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals<USkeletalMeshComponent,bool>
          (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this,
          USkeletalMeshComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USkeletalMeshComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (USkeletalMeshComponent *)0x0)) {
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

// UEOpEquals<UTickableConstraint,bool> @ 14649d6e0

bool __thiscall
TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::UEOpEquals<UTickableConstraint,bool>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *this,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UTickableConstraint,bool> @ 14649d730

bool __thiscall
TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::UEOpEquals<UTickableConstraint,bool>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *this,UTickableConstraint *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UTickableConstraint *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTickableConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTickableConstraint *)0x0)) {
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

// UEOpEquals<UTickableTransformConstraint,bool> @ 14649d7e0

bool __thiscall
TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::UEOpEquals<UTickableTransformConstraint,bool>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *this,
          UTickableTransformConstraint *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UTickableTransformConstraint *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UTickableTransformConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTickableTransformConstraint *)0x0)) {
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

