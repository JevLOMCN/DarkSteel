// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FMaterialLayersFunctions @ 1472af3e0

void __thiscall FMaterialLayersFunctions::~FMaterialLayersFunctions(FMaterialLayersFunctions *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeletedParentLayerGuids_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerLinkStates_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerGuids_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestrictToBlendRelatives_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestrictToLayerRelatives_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->LayerNames_DEPRECATED).AllocatorInstance.Data,
             (this->LayerNames_DEPRECATED).ArrayNum);
  pFVar1 = (this->LayerNames_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerStates_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMaterialLayersFunctionsEditorOnlyData::~FMaterialLayersFunctionsEditorOnlyData(&this->EditorOnly)
  ;
  FMaterialLayersFunctionsRuntimeData::~FMaterialLayersFunctionsRuntimeData
            ((FMaterialLayersFunctionsRuntimeData *)this);
  return;
}

// StaticStruct @ 1472ee070

UScriptStruct * __cdecl FMaterialLayersFunctions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialLayersFunctions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialLayersFunctions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayersFunctions,(UObject *)pUVar1,
                         L"MaterialLayersFunctions");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialLayersFunctions.OuterSingleton;
}

// FMaterialLayersFunctions @ 1472f1870

FMaterialLayersFunctions * __thiscall
FMaterialLayersFunctions::FMaterialLayersFunctions(FMaterialLayersFunctions *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->EditorOnly).LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorOnly).LayerStates.ArrayNum = 0;
  (this->EditorOnly).LayerStates.ArrayMax = 0;
  (this->EditorOnly).LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorOnly).LayerNames.ArrayNum = 0;
  (this->EditorOnly).LayerNames.ArrayMax = 0;
  (this->EditorOnly).RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EditorOnly).RestrictToLayerRelatives.ArrayNum = 0;
  (this->EditorOnly).RestrictToLayerRelatives.ArrayMax = 0;
  (this->EditorOnly).RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EditorOnly).RestrictToBlendRelatives.ArrayNum = 0;
  (this->EditorOnly).RestrictToBlendRelatives.ArrayMax = 0;
  (this->EditorOnly).LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorOnly).LayerGuids.ArrayNum = 0;
  (this->EditorOnly).LayerGuids.ArrayMax = 0;
  (this->EditorOnly).LayerLinkStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorOnly).LayerLinkStates.ArrayNum = 0;
  (this->EditorOnly).LayerLinkStates.ArrayMax = 0;
  (this->EditorOnly).DeletedParentLayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->EditorOnly).DeletedParentLayerGuids.ArrayNum = 0;
  (this->EditorOnly).DeletedParentLayerGuids.ArrayMax = 0;
  (this->LayerStates_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerStates_DEPRECATED).ArrayNum = 0;
  (this->LayerStates_DEPRECATED).ArrayMax = 0;
  (this->LayerNames_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerNames_DEPRECATED).ArrayNum = 0;
  (this->LayerNames_DEPRECATED).ArrayMax = 0;
  (this->RestrictToLayerRelatives_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RestrictToLayerRelatives_DEPRECATED).ArrayNum = 0;
  (this->RestrictToLayerRelatives_DEPRECATED).ArrayMax = 0;
  (this->RestrictToBlendRelatives_DEPRECATED).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RestrictToBlendRelatives_DEPRECATED).ArrayNum = 0;
  (this->RestrictToBlendRelatives_DEPRECATED).ArrayMax = 0;
  (this->LayerGuids_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerGuids_DEPRECATED).ArrayNum = 0;
  (this->LayerGuids_DEPRECATED).ArrayMax = 0;
  (this->LayerLinkStates_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerLinkStates_DEPRECATED).ArrayNum = 0;
  (this->LayerLinkStates_DEPRECATED).ArrayMax = 0;
  (this->DeletedParentLayerGuids_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DeletedParentLayerGuids_DEPRECATED).ArrayNum = 0;
  (this->DeletedParentLayerGuids_DEPRECATED).ArrayMax = 0;
  return this;
}

// PostSerialize @ 148b03580

void __thiscall
FMaterialLayersFunctions::PostSerialize(FMaterialLayersFunctions *this,FArchive *param_1)

{
  return;
}

