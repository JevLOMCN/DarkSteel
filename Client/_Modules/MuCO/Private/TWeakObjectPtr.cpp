// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 5

// UEOpEquals<UCustomizableObjectExtension,bool> @ 14abbb760

bool __thiscall
TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr>::
UEOpEquals<UCustomizableObjectExtension,bool>
          (TWeakObjectPtr<UCustomizableObjectExtension_const_,FWeakObjectPtr> *this,
          UCustomizableObjectExtension *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UCustomizableObjectExtension *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UCustomizableObjectExtension *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCustomizableObjectExtension *)0x0)) {
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

// UEOpEquals<UCustomizableObject_const_,bool> @ 14ac088b0

bool __thiscall
TWeakObjectPtr<UCustomizableObject_const_,FWeakObjectPtr>::
UEOpEquals<UCustomizableObject_const_,bool>
          (TWeakObjectPtr<UCustomizableObject_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UCustomizableObject_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UCustomizableObjectInstanceUsage_const_,bool> @ 14ac08900

bool __thiscall
TWeakObjectPtr<UCustomizableObjectInstanceUsage_const_,FWeakObjectPtr>::
UEOpEquals<UCustomizableObjectInstanceUsage_const_,bool>
          (TWeakObjectPtr<UCustomizableObjectInstanceUsage_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UCustomizableObjectInstanceUsage_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UCustomizableObjectInstance,bool> @ 14ac08950

bool __thiscall
TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr>::
UEOpEquals<UCustomizableObjectInstance,bool>
          (TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr> *this,
          TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UCustomizableObjectInstance,bool> @ 14ac089a0

bool __thiscall
TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr>::
UEOpEquals<UCustomizableObjectInstance,bool>
          (TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr> *this,
          UCustomizableObjectInstance *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UCustomizableObjectInstance *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCustomizableObjectInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCustomizableObjectInstance *)0x0)) {
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

