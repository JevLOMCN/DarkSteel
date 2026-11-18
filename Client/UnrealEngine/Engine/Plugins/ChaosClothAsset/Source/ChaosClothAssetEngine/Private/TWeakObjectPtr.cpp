// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// UEOpEquals<UPhysicsAsset,bool> @ 14dc315b0

bool __thiscall
TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr>::UEOpEquals<UPhysicsAsset,bool>
          (TWeakObjectPtr<UPhysicsAsset_const_,FWeakObjectPtr> *this,UPhysicsAsset *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UPhysicsAsset *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPhysicsAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPhysicsAsset *)0x0)) {
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

// UEOpEquals<USkinnedAsset,bool> @ 14dc31660

bool __thiscall
TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr>::UEOpEquals<USkinnedAsset,bool>
          (TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr> *this,USkinnedAsset *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USkinnedAsset *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkinnedAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkinnedAsset *)0x0)) {
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

