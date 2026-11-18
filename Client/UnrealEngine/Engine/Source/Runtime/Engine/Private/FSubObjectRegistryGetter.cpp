// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetSubObjectsOfActorComponent @ 148038820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSubObjectRegistry * __cdecl
UE::Net::FSubObjectRegistryGetter::GetSubObjectsOfActorComponent
          (AActor *param_1,UActorComponent *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (param_1->ReplicatedComponentsInfo).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (longlong)(param_1->ReplicatedComponentsInfo).ArrayNum * 0x28;
  for (; (pFVar2 = (FScriptContainerElement *)0x0, pFVar1 != pFVar3 &&
         (pFVar2 = pFVar1, *(UActorComponent **)pFVar1 != param_2)); pFVar1 = pFVar1 + 0x28) {
  }
  pFVar3 = pFVar2 + 0x18;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar3 = (FScriptContainerElement *)0x0;
  }
  return (FSubObjectRegistry *)pFVar3;
}

