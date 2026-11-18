// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CollectPSOInitializers @ 14504c7a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FNaniteBasePSOCollector::CollectPSOInitializers
          (FNaniteBasePSOCollector *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  EMaterialDomain EVar2;
  EShaderPlatform EVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  if (this->FeatureLevel == Num) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel];
  }
  bVar1 = UseNanite(EVar3,true,true);
  if ((bVar1) && (param_3->VertexFactoryType == &FNaniteVertexFactory::StaticType)) {
    (**(code **)(param_2->_padding_ + 0x280))(param_2,local_res8);
    bVar1 = Nanite::IsSupportedBlendMode(param_2);
    if (bVar1) {
      EVar2 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
      bVar1 = Nanite::IsSupportedMaterialDomain(EVar2);
      if (bVar1) {
        local_28 = *(undefined4 *)&param_3->VertexFactoryType;
        uStack_24 = *(undefined4 *)((longlong)&param_3->VertexFactoryType + 4);
        uStack_20 = 0;
        (**(code **)(this->_padding_ + 0x10))(this,param_1,&local_28,param_2,param_4,EVar3,param_5);
      }
    }
  }
  return;
}

