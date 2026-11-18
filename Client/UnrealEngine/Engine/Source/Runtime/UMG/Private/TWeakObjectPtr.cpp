// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// UEOpEquals<UUserWidget_const_,bool> @ 1468fd100

bool __thiscall
TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>::UEOpEquals<UUserWidget_const_,bool>
          (TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UUserWidget,bool> @ 146981360

bool __thiscall
TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals<UUserWidget,bool>
          (TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *this,
          TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UWidget,bool> @ 146a54f70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<UWidget,FWeakObjectPtr>::UEOpEquals<UWidget,bool>
          (TWeakObjectPtr<UWidget,FWeakObjectPtr> *this,UWidget *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UWidget *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
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

// UEOpEquals<UWidgetComponent,bool> @ 146a55020

bool __thiscall
TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>::UEOpEquals<UWidgetComponent,bool>
          (TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *param_1)

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

