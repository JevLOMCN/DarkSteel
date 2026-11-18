// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// UEOpEquals<UGroomComponent,bool> @ 14e0d09c0

bool __thiscall
TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals<UGroomComponent,bool>
          (TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 14e0f8d20

bool __thiscall
TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

