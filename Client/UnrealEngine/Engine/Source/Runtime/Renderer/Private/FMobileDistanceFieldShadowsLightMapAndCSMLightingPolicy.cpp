// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ModifyCompilationEnvironment @ 144bd50a0

void __cdecl
FMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"DIRECTIONAL_LIGHT_CSM",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"STATICLIGHTING_TEXTUREMASK",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  LightMapPolicyImpl::ModifyCompilationEnvironment(LQ_LIGHTMAP,param_1,param_2);
  return;
}

// ShouldCompilePermutation @ 144be3b70

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
FMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if (((!FReadOnlyCVARCache::bMobileDeferredShadingValue) || (!FReadOnlyCVARCache::bMobileHDR)) &&
     (FReadOnlyCVARCache::bMobileEnableStaticAndCSMShadowReceivers)) {
    bVar1 = FMobileDistanceFieldShadowsAndLQLightMapPolicy::ShouldCompilePermutation(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

