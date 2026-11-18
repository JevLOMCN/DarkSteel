// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// UEOpEquals<UAnimBank_const_,bool> @ 1456644a0

bool __thiscall
TWeakObjectPtr<UAnimBank_const_,FWeakObjectPtr>::UEOpEquals<UAnimBank_const_,bool>
          (TWeakObjectPtr<UAnimBank_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UAnimBank_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<USkinnedAsset_const_,bool> @ 1456644f0

bool __thiscall
TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr>::UEOpEquals<USkinnedAsset_const_,bool>
          (TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<USkinnedAsset_const_,FWeakObjectPtr> *param_1)

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

