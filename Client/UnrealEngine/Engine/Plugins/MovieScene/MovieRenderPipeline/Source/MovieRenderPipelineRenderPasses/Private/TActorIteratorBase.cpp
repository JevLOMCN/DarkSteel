// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TActorIteratorBase<TActorIterator<AActor>_> @ 14ddc8e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TActorIteratorBase<TActorIterator<AActor>_>::~TActorIteratorBase<TActorIterator<AActor>_>
          (TActorIteratorBase<TActorIterator<AActor>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->State).bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              ((this->State).TypedValue.CurrentWorld,
               (FDelegateHandle)(this->State).TypedValue.ActorSpawnedDelegateHandle.ID);
    pFVar1 = (this->State).TypedValue.SpawnedActorArray.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->State).TypedValue.ActorArray.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

