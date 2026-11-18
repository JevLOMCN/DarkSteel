// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FMaterialLayersFunctionsEditorOnlyData @ 1472af490

void __thiscall
FMaterialLayersFunctionsEditorOnlyData::~FMaterialLayersFunctionsEditorOnlyData
          (FMaterialLayersFunctionsEditorOnlyData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeletedParentLayerGuids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerLinkStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerGuids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestrictToBlendRelatives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestrictToLayerRelatives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->LayerNames).AllocatorInstance.Data,(this->LayerNames).ArrayNum);
  pFVar1 = (this->LayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 1472ecac0

UScriptStruct * __cdecl FMaterialLayersFunctionsEditorOnlyData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData,
                         (UObject *)pUVar1,L"MaterialLayersFunctionsEditorOnlyData");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData.OuterSingleton;
}

// operator= @ 1472f2660

FMaterialLayersFunctionsEditorOnlyData * __thiscall
FMaterialLayersFunctionsEditorOnlyData::operator=
          (FMaterialLayersFunctionsEditorOnlyData *this,
          FMaterialLayersFunctionsEditorOnlyData *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=(&this->LayerStates,&param_1->LayerStates);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=(&this->LayerNames,&param_1->LayerNames);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->RestrictToLayerRelatives,&param_1->RestrictToLayerRelatives);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->RestrictToBlendRelatives,&param_1->RestrictToBlendRelatives);
  TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=(&this->LayerGuids,&param_1->LayerGuids);
  TArray<enum_EMaterialLayerLinkState,TSizedDefaultAllocator<32>_>::operator=
            (&this->LayerLinkStates,&param_1->LayerLinkStates);
  TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
            (&this->DeletedParentLayerGuids,&param_1->DeletedParentLayerGuids);
  return this;
}

