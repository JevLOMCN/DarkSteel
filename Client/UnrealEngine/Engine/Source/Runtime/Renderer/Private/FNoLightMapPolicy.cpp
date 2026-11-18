// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ModifyCompilationEnvironment @ 144bd5110

void __cdecl
FNoLightMapPolicy::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = (ushort)param_1->_padding_;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) &&
     (FReadOnlyCVARCache::bAllowStaticLighting == false)) {
    bVar3 = MobileUseCSMShaderBranch();
    if (bVar3) {
      FShaderCompilerEnvironment::SetDefine(param_2,L"DIRECTIONAL_LIGHT_CSM",L"1");
      FShaderCompilerEnvironment::SetDefine(param_2,L"MOBILE_USE_CSM_BRANCH",L"1");
    }
  }
  return;
}

// ShouldCompilePermutation @ 144be3bb0

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
FNoLightMapPolicy::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters *param_1)

{
  return true;
}

