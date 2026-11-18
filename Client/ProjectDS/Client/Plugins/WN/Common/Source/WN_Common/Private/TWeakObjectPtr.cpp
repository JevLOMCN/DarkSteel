// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// UEOpEquals<UWN_VolumeComponent_const_,bool> @ 14948b9b0

bool __thiscall
TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>::
UEOpEquals<UWN_VolumeComponent_const_,bool>
          (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 1494af190

bool __thiscall
TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

