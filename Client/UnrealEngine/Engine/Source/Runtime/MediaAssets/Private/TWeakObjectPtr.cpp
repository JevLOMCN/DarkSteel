// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// UEOpEquals<UMediaTexture_const_,bool> @ 146c1b9f0

bool __thiscall
TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>::UEOpEquals<UMediaTexture_const_,bool>
          (TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UMediaTexture,bool> @ 146c1bae0

bool __thiscall
TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>::UEOpEquals<UMediaTexture,bool>
          (TWeakObjectPtr<UMediaTexture,FWeakObjectPtr> *this,
          TWeakObjectPtr<UMediaTexture,FWeakObjectPtr> *param_1)

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

