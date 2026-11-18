// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 2

// UEOpEquals<UInterchangeTranslatorBase_const_,bool> @ 14e4d6e00

bool __thiscall
TWeakObjectPtr<UInterchangeTranslatorBase_const_,FWeakObjectPtr>::
UEOpEquals<UInterchangeTranslatorBase_const_,bool>
          (TWeakObjectPtr<UInterchangeTranslatorBase_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UInterchangeTranslatorBase_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UInterchangeTranslatorBase,bool> @ 14e4d6e50

bool __thiscall
TWeakObjectPtr<UInterchangeTranslatorBase_const_,FWeakObjectPtr>::
UEOpEquals<UInterchangeTranslatorBase,bool>
          (TWeakObjectPtr<UInterchangeTranslatorBase_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UInterchangeTranslatorBase,FWeakObjectPtr> *param_1)

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

