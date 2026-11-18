// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CollectNanitePSOInitializers @ 14504c6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FNaniteShadingPSOCollector::CollectNanitePSOInitializers
          (FNaniteShadingPSOCollector *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,FPSOPrecacheParams *param_4,
          EShaderPlatform param_5,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  undefined1 auStack_88 [32];
  Type local_68 [2];
  undefined4 local_60 [2];
  TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *local_58;
  FMaterial *local_50;
  FPSOPrecacheVertexFactoryData *local_48;
  Type *local_40;
  undefined4 *local_38;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_30;
  TArray<ELightMapPolicyType,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_60[0] = *(undefined4 *)&this->field_0x8;
  local_68[0] = *(Type *)&this->field_0x10;
  FBasePassMeshProcessor::GetUniformLightMapPolicyTypeForPSOCollection
            (&local_28,local_68[0],param_3);
  local_58 = &local_28;
  local_40 = local_68;
  local_38 = local_60;
  local_30 = param_6;
  local_50 = param_3;
  local_48 = param_2;
  `Nanite::CollectBasePassShadingPSOInitializers'::__l2::<lambda_1>::operator()(&local_58,true);
  `Nanite::CollectBasePassShadingPSOInitializers'::__l2::<lambda_1>::operator()(&local_58,false);
  if (local_28.AllocatorInstance.SecondaryData != (ForElementType<ELightMapPolicyType>)0x0) {
    FMemory::Free((void *)local_28.AllocatorInstance.SecondaryData);
  }
  return;
}

