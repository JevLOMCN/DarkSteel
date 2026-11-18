// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CollectNanitePSOInitializers @ 14504c6a0

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

void __thiscall
FNaniteRasterPSOCollector::CollectNanitePSOInitializers
          (FNaniteRasterPSOCollector *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,FPSOPrecacheParams *param_4,
          EShaderPlatform param_5,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  Nanite::CollectRasterPSOInitializers
            (param_1,param_3,param_4,param_5,*(int *)&this->field_0x8,param_6);
  return;
}

