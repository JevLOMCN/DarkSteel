// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// UEOpEquals<UScriptStruct_const_,bool> @ 142c93410

bool __thiscall
TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct_const_,bool>
          (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UScriptStruct,bool> @ 142c93460

bool __thiscall
TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
          (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this,UScriptStruct *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
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

