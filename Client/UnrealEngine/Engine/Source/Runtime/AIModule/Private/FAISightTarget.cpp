// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FAISightTarget @ 146f90cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAISightTarget * __thiscall
FAISightTarget::FAISightTarget(FAISightTarget *this,AActor *param_1,FGenericTeamId param_2)

{
  AActor *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Target).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->WeakSightTargetInterface).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakSightTargetInterface).InterfaceInstance = (IAISightTargetInterface *)0x0;
  (this->TeamId).TeamID = param_2.TeamID;
  this->SightTargetInterface = (IAISightTargetInterface *)0x0;
  if (param_1 == (AActor *)0x0) {
    this->TargetId = 0xffffffff;
  }
  else {
    this->TargetId = *(uint *)((longlong)&param_1->_padding_ + 4);
  }
  return this;
}

