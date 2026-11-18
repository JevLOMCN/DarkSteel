// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ModifyCompilationEnvironment @ 144bd4f40

void __cdecl
FCachedVolumeIndirectLightingPolicy::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"CACHED_VOLUME_INDIRECT_LIGHTING",L"1");
  return;
}

// ShouldCompilePermutation @ 144be34c0

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

bool __cdecl
FCachedVolumeIndirectLightingPolicy::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if ((param_1->_padding_ & 0x100000000) == 0) {
    bVar1 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_1->_padding_);
    if ((!bVar1) && (FReadOnlyCVARCache::bAllowStaticLighting != false)) {
      bVar1 = IsFeatureLevelSupported
                        ((FStaticShaderPlatform)(EShaderPlatform)param_1->_padding_,SM5);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

