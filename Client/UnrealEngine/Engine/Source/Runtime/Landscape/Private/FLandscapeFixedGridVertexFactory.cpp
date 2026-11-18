// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// GetType @ 145f95b40

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

FVertexFactoryType * __thiscall
FLandscapeFixedGridVertexFactory::GetType(FLandscapeFixedGridVertexFactory *this)

{
  return &StaticType;
}

// ModifyCompilationEnvironment @ 145f99a80

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

void __cdecl
FLandscapeFixedGridVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  FGenericStaticFeatureLevel FVar2;
  code *pcVar3;
  bool bVar4;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2.FeatureLevel = FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
  bVar4 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,FVar2);
  if ((bVar4) && (1 < (int)FVar2.FeatureLevel)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) == None) || (!bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar4);
  FShaderCompilerEnvironment::SetDefine(param_2,L"RAY_TRACING_DYNAMIC_MESH_IN_LOCAL_SPACE",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"FIXED_GRID",L"1");
  return;
}

