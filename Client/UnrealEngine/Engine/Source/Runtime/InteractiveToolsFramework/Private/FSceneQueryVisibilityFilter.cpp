// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// IsVisible @ 1496e2730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FSceneQueryVisibilityFilter::IsVisible
          (FSceneQueryVisibilityFilter *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (((*(longlong *)&param_1->field_0xa8 != 0) &&
        (-1 < *(char *)(*(longlong *)&param_1->field_0xa8 + 0x58))) &&
       (cVar3 = (**(code **)(*(longlong *)param_1 + 0x560))(param_1), cVar3 != '\0')) {
LAB_1496e279b:
      pTVar2 = this->ComponentsToIgnore;
      if (pTVar2 != (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        pFVar1 = pFVar4 + (longlong)pTVar2->ArrayNum * 8;
        for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
          if (*(UPrimitiveComponent **)pFVar4 == param_1) {
            return false;
          }
        }
      }
      return true;
    }
    pTVar2 = this->InvisibleComponentsToInclude;
    if (pTVar2 != (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      pFVar1 = pFVar4 + (longlong)pTVar2->ArrayNum * 8;
      for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
        if (*(UPrimitiveComponent **)pFVar4 == param_1) goto LAB_1496e279b;
      }
    }
  }
  return false;
}

