// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// IsTraceConsideredVisible @ 146fba1c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UE::AISense_Sight::IsTraceConsideredVisible(FHitResult *param_1,AActor *param_2)

{
  AActor *pAVar1;
  
  if (param_1 != (FHitResult *)0x0) {
    pAVar1 = ::FActorInstanceHandle::FetchActor(&param_1->HitObjectHandle);
    while( true ) {
      if (pAVar1 == (AActor *)0x0) {
        return false;
      }
      if (pAVar1 == param_2) break;
      pAVar1 = (pAVar1->Owner).field0_0x0.DebugPtr;
    }
  }
  return true;
}

