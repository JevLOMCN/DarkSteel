// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FPrecacheData @ 1483e8ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FMaterialPSORequestManager::FPrecacheData::~FPrecacheData(FPrecacheData *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBaseGraphTask *pFVar4;
  ForElementType<FPSOPrecacheRequestResult> FVar5;
  
  DestructItems<FPSOPrecacheData,int>
            ((FPSOPrecacheData *)(this->PSOPrecachaData).AllocatorInstance.Data,
             (this->PSOPrecachaData).ArrayNum);
  pFVar3 = (this->PSOPrecachaData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVar5 = (this->ActivePSOPrecacheRequests).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FPSOPrecacheRequestResult>)0x0) {
    FVar5 = (ForElementType<FPSOPrecacheRequestResult>)&this->ActivePSOPrecacheRequests;
  }
  DestructItems<FPSOPrecacheRequestResult,int>
            ((FPSOPrecacheRequestResult *)FVar5,(this->ActivePSOPrecacheRequests).ArrayNum);
  FVar5 = (this->ActivePSOPrecacheRequests).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FPSOPrecacheRequestResult>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  pFVar4 = (this->CollectionGraphEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  return;
}

