// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FLumenHardwareRayTracingShaderBase @ 144c1e2a0

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

FLumenHardwareRayTracingShaderBase * __thiscall
FLumenHardwareRayTracingShaderBase::FLumenHardwareRayTracingShaderBase
          (FLumenHardwareRayTracingShaderBase *this,FShaderCompiledShaderInitializerType *param_1)

{
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  return this;
}

// FLumenHardwareRayTracingShaderBase @ 144c1e2c0

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

FLumenHardwareRayTracingShaderBase * __thiscall
FLumenHardwareRayTracingShaderBase::FLumenHardwareRayTracingShaderBase
          (FLumenHardwareRayTracingShaderBase *this)

{
  FShader::FShader((FShader *)this);
  return this;
}

// GetThreadGroupSizeInternal @ 144c50f40

TIntPoint<int> __cdecl
FLumenHardwareRayTracingShaderBase::GetThreadGroupSizeInternal
          (ERayTracingShaderDispatchType param_1,bool param_2)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0 TVar2;
  undefined4 in_register_0000000c;
  undefined3 in_register_00000011;
  byte in_R8B;
  
  if (CONCAT31(in_register_00000011,param_2) == 1) {
    *(uint *)CONCAT44(in_register_0000000c,param_1) = (in_R8B + 1) * 0x20;
    TVar1._s_0.Y = in_register_0000000c;
    TVar1._s_0.X = param_1;
    *(undefined4 *)(CONCAT44(in_register_0000000c,param_1) + 4) = 1;
    return (TIntPoint<int>)TVar1;
  }
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) = 1;
  TVar2._s_0.Y = in_register_0000000c;
  TVar2._s_0.X = param_1;
  *(undefined4 *)(CONCAT44(in_register_0000000c,param_1) + 4) = 1;
  return (TIntPoint<int>)TVar2;
}

// ModifyCompilationEnvironment @ 144c54370

void __cdecl
FLumenHardwareRayTracingShaderBase::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2,
          ESurfaceCacheSampling param_3,FShaderCompilerEnvironment *param_4)

{
  FShaderCompilerEnvironment::SetDefine
            (param_4,L"SURFACE_CACHE_FEEDBACK",(uint)(param_3 != AlwaysResidentPagesWithoutFeedback)
            );
  FShaderCompilerEnvironment::SetDefine
            (param_4,L"SURFACE_CACHE_HIGH_RES_PAGES",(uint)(param_3 == HighResPages));
  FShaderCompilerEnvironment::SetDefine(param_4,L"LUMEN_HARDWARE_RAYTRACING",1);
  FShaderCompilerEnvironment::SetDefine(param_4,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",1);
  if (param_2 == Inline) {
    FShaderCompilerEnvironment::SetDefine(param_4,L"LUMEN_HARDWARE_INLINE_RAYTRACING",1);
    (param_4->CompilerFlags).Data = (param_4->CompilerFlags).Data | 0x2000000;
  }
  return;
}

// ModifyCompilationEnvironmentInternal @ 144c54430

void __cdecl
FLumenHardwareRayTracingShaderBase::ModifyCompilationEnvironmentInternal
          (ERayTracingShaderDispatchType param_1,bool param_2,FShaderCompilerEnvironment *param_3)

{
  if ((param_1 == Inline) && (!param_2)) {
    (param_3->CompilerFlags).Data = (param_3->CompilerFlags).Data | 0x1000000;
  }
  return;
}

// ShouldCompilePermutation @ 144c5f460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_2 != Inline) {
    bVar3 = ShouldCompileRayTracingShadersForProject(*(EShaderPlatform *)param_1);
    return bVar3;
  }
  bVar3 = IsRayTracingEnabledForProject(*(EShaderPlatform *)param_1);
  if (bVar3) {
    uVar1 = *(ushort *)param_1;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x16c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsRayTracing != 0) {
      uVar1 = *(ushort *)param_1;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x178,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsRayTracing != 0) &&
         (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsInlineRayTracing != 0)) {
        return true;
      }
    }
  }
  return false;
}

// UseThreadGroupSize64 @ 144c73c60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FLumenHardwareRayTracingShaderBase::UseThreadGroupSize64(EShaderPlatform param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  pTVar2 = CVarLumenThreadGroupSize32.Ref;
  if ((GRHIGlobals.SupportsWaveOperations) && (GRHIGlobals.MinimumWaveSize < 0x21)) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != 0) {
      return false;
    }
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x34d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bSupportsWave64 == 0) {
    return false;
  }
  return true;
}

