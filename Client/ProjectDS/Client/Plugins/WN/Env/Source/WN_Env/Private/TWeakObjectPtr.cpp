// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 3

// UEOpEquals<UWN_TODReactComponent_const_,bool> @ 14a04f790

bool __thiscall
TWeakObjectPtr<UWN_TODReactComponent_const_,FWeakObjectPtr>::
UEOpEquals<UWN_TODReactComponent_const_,bool>
          (TWeakObjectPtr<UWN_TODReactComponent_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UWN_TODReactComponent_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 14a066200

bool __thiscall
TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14a066220

bool __thiscall
TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

