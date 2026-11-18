// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// UEOpEquals<ULevel,bool> @ 146d710a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
          (TWeakObjectPtr<ULevel,FWeakObjectPtr> *this,ULevel *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  ULevel *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
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

// UEOpEquals @ 146dbe090

bool __thiscall
TWeakObjectPtr<AActor_const_,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 146dbe0b0

bool __thiscall
TWeakObjectPtr<UCrowdManagerBase,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UCrowdManagerBase,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

