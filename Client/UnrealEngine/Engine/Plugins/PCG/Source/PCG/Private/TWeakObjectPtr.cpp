// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// UEOpEquals<ALandscape,bool> @ 1499bff30

bool __thiscall
TWeakObjectPtr<ALandscape,FWeakObjectPtr>::UEOpEquals<ALandscape,bool>
          (TWeakObjectPtr<ALandscape,FWeakObjectPtr> *this,
          TWeakObjectPtr<ALandscape,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UPCGMetadata_const_,bool> @ 149e2f770

bool __thiscall
TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>::UEOpEquals<UPCGMetadata_const_,bool>
          (TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> *param_1)

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

