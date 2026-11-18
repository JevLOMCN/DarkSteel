// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TActorIterator<AActor> @ 14ddc8e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall TActorIterator<AActor>::~TActorIterator<AActor>(TActorIterator<AActor> *this)

{
  if (this->field_0x58 != '\0') {
    UWorld::RemoveOnActorSpawnedHandler
              (*(UWorld **)&this->field_0x8,(FDelegateHandle)*(ulong64 *)&this->field_0x50);
    if (*(void **)&this->field_0x38 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x38);
    }
    if (*(void **)&this->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x10);
    }
  }
  return;
}

