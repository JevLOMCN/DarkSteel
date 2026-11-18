// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FActorIterator @ 147abac50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorIterator * __thiscall
FActorIterator::FActorIterator(FActorIterator *this,UWorld *param_1,EActorIteratorFlags param_2)

{
  UClass *local_res8;
  
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(EActorIteratorFlags *)this = param_2;
  this->field_0x58 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FActorIteratorState::FActorIteratorState
            ((FActorIteratorState *)&this->field_0x8,param_1,(TSubclassOf<AActor>)&local_res8);
  this->field_0x58 = 1;
  TActorIteratorBase<FActorIterator>::operator++((TActorIteratorBase<FActorIterator> *)this);
  return this;
}

