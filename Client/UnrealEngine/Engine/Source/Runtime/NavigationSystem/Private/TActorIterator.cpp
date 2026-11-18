// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// TActorIterator<ANavigationData> @ 146d71150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TActorIterator<ANavigationData> * __thiscall
TActorIterator<ANavigationData>::TActorIterator<ANavigationData>
          (TActorIterator<ANavigationData> *this,UWorld *param_1,
          TSubclassOf<ANavigationData> param_2,EActorIteratorFlags param_3)

{
  UObject *pUVar1;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(EActorIteratorFlags *)this = param_3;
  this->field_0x58 = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FActorIteratorState::FActorIteratorState
            ((FActorIteratorState *)&this->field_0x8,param_1,(TSubclassOf<AActor>)&local_res8);
  this->field_0x58 = 1;
  TActorIteratorBase<TActorIterator<ANavigationData>_>::operator++
            ((TActorIteratorBase<TActorIterator<ANavigationData>_> *)this);
  return this;
}

