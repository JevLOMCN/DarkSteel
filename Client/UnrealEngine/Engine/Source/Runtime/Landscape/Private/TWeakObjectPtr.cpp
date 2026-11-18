// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// UEOpEquals<ALandscapeStreamingProxy_const_,bool> @ 145f01910

bool __thiscall
TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>::
UEOpEquals<ALandscapeStreamingProxy_const_,bool>
          (TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *this,
          TWeakObjectPtr<ALandscapeStreamingProxy_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<ALandscape,bool> @ 145f01960

bool __thiscall
TWeakObjectPtr<ALandscape,FWeakObjectPtr>::UEOpEquals<ALandscape,bool>
          (TWeakObjectPtr<ALandscape,FWeakObjectPtr> *this,ALandscape *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  ALandscape *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ALandscape *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ALandscape *)0x0)) {
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

// UEOpEquals<ALandscapeStreamingProxy,bool> @ 145f01a10

bool __thiscall
TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>::UEOpEquals<ALandscapeStreamingProxy,bool>
          (TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *this,
          TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *param_1)

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

// UEOpEquals<ULandscapeComponent,bool> @ 145f40450

bool __thiscall
TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>::UEOpEquals<ULandscapeComponent,bool>
          (TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals<ULandscapeGrassType,bool> @ 145f404a0

bool __thiscall
TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr>::UEOpEquals<ULandscapeGrassType,bool>
          (TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr> *this,
          TWeakObjectPtr<ULandscapeGrassType,FWeakObjectPtr> *param_1)

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

// UEOpEquals<ULandscapeComponent,bool> @ 145f76610

bool __thiscall
TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>::UEOpEquals<ULandscapeComponent,bool>
          (TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr> *this,ULandscapeComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  ULandscapeComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULandscapeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (ULandscapeComponent *)0x0)) {
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

// UEOpEquals @ 145fc9a30

bool __thiscall
TWeakObjectPtr<ALandscape,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<ALandscape,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

