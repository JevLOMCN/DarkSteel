// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// UEOpEquals<USoundSubmixBase,bool> @ 14653c1a0

bool __thiscall
TWeakObjectPtr<USoundSubmixBase_const_,FWeakObjectPtr>::UEOpEquals<USoundSubmixBase,bool>
          (TWeakObjectPtr<USoundSubmixBase_const_,FWeakObjectPtr> *this,USoundSubmixBase *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USoundSubmixBase *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundSubmixBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundSubmixBase *)0x0))
  {
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

