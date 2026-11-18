// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 1478af2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPredicateOverlapHasDifferentActor::operator()
          (FPredicateOverlapHasDifferentActor *this,FOverlapInfo *param_1)

{
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res10 = FActorInstanceHandle::FetchActor(&(param_1->OverlapInfo).HitObjectHandle);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->MyOwnerPtr).WeakPtr.ObjectIndex == local_res8.ObjectIndex) &&
     ((this->MyOwnerPtr).WeakPtr.ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return false;
  }
  return true;
}

