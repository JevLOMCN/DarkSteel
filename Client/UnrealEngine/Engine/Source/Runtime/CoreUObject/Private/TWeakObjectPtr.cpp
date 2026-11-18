// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// UEOpEquals<UClass_const_,bool> @ 141fbc970

bool __thiscall
TWeakObjectPtr<UClass_const_,FWeakObjectPtr>::UEOpEquals<UClass_const_,bool>
          (TWeakObjectPtr<UClass_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UClass_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UStruct,bool> @ 141fbc9c0

bool __thiscall
TWeakObjectPtr<UStruct,FWeakObjectPtr>::UEOpEquals<UStruct,bool>
          (TWeakObjectPtr<UStruct,FWeakObjectPtr> *this,
          TWeakObjectPtr<UStruct,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UObject_const_,bool> @ 1420a1250

bool __thiscall
TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
          (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UObject,bool> @ 1420a12a0

bool __thiscall
TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
          (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UObject,bool> @ 1420e8960

bool __thiscall
TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
          (TWeakObjectPtr<UObject,FWeakObjectPtr> *this,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1)

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

