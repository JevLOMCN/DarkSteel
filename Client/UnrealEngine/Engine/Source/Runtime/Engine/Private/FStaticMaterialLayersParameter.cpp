// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14732b610

UScriptStruct * __cdecl FStaticMaterialLayersParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMaterialLayersParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticMaterialLayersParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter,(UObject *)pUVar1,
                         L"StaticMaterialLayersParameter");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMaterialLayersParameter.OuterSingleton;
}

// FStaticMaterialLayersParameter @ 147330d00

FStaticMaterialLayersParameter * __thiscall
FStaticMaterialLayersParameter::FStaticMaterialLayersParameter(FStaticMaterialLayersParameter *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 2;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  (this->Value).EditorOnly.LayerStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).EditorOnly.LayerStates.ArrayNum = 0;
  (this->Value).EditorOnly.LayerStates.ArrayMax = 0;
  (this->Value).EditorOnly.LayerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).EditorOnly.LayerNames.ArrayNum = 0;
  (this->Value).EditorOnly.LayerNames.ArrayMax = 0;
  (this->Value).EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Value).EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
  (this->Value).EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
  (this->Value).EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Value).EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
  (this->Value).EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
  (this->Value).EditorOnly.LayerGuids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).EditorOnly.LayerGuids.ArrayNum = 0;
  (this->Value).EditorOnly.LayerGuids.ArrayMax = 0;
  (this->Value).EditorOnly.LayerLinkStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).EditorOnly.LayerLinkStates.ArrayNum = 0;
  (this->Value).EditorOnly.LayerLinkStates.ArrayMax = 0;
  (this->Value).EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Value).EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
  (this->Value).EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
  (this->Value).LayerStates_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).LayerStates_DEPRECATED.ArrayNum = 0;
  (this->Value).LayerStates_DEPRECATED.ArrayMax = 0;
  (this->Value).LayerNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).LayerNames_DEPRECATED.ArrayNum = 0;
  (this->Value).LayerNames_DEPRECATED.ArrayMax = 0;
  (this->Value).RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Value).RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
  (this->Value).RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
  (this->Value).RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Value).RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
  (this->Value).RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
  (this->Value).LayerGuids_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).LayerGuids_DEPRECATED.ArrayNum = 0;
  (this->Value).LayerGuids_DEPRECATED.ArrayMax = 0;
  (this->Value).LayerLinkStates_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).LayerLinkStates_DEPRECATED.ArrayNum = 0;
  (this->Value).LayerLinkStates_DEPRECATED.ArrayMax = 0;
  (this->Value).DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Value).DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
  (this->Value).DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
  return this;
}

