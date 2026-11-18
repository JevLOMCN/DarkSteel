// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// BasePassCanOutputVelocity @ 145759de0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FVelocityRendering::BasePassCanOutputVelocity(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&PerPlatformCVar.CVarName,L"r.VelocityOutputPass");
      PerPlatformCVar.CVar = (IConsoleVariable *)0x0;
      atexit(`IsUsingBasePassVelocity'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel != ES3_1) {
    bVar2 = IsForwardShadingEnabled((FStaticShaderPlatform)param_1);
    if (!bVar2) {
      iVar4 = FShaderPlatformCachedIniValue<int>::Get(&PerPlatformCVar,param_1);
      return iVar4 == 1;
    }
  }
  return false;
}

// DepthPassCanOutputVelocity @ 145762d30

bool __cdecl FVelocityRendering::DepthPassCanOutputVelocity(Type param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) goto LAB_145762d5e;
  _Init_thread_header(&::_TSS0);
  pTVar1 = CVarVelocityOutputPass.Ref;
  if (::_TSS0 != -1) goto LAB_145762d5e;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145762dc5:
    lVar4 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_145762dc5;
    lVar4 = 4;
  }
  bRequestedDepthPassVelocity = *(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 0;
  _Init_thread_footer(&::_TSS0);
LAB_145762d5e:
  uVar3 = GetDefaultMSAACount((FGenericStaticFeatureLevel)param_1,8);
  if ((uVar3 < 2) && (bRequestedDepthPassVelocity != false)) {
    return true;
  }
  return false;
}

// GetCreateFlags @ 1457709d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ETextureCreateFlags __cdecl FVelocityRendering::GetCreateFlags(EShaderPlatform param_1)

{
  bool bVar1;
  ETextureCreateFlags EVar2;
  ETextureCreateFlags EVar3;
  
  bVar1 = IsUsingBasePassVelocity((FStaticShaderPlatform)param_1);
  EVar3 = None;
  if (bVar1) {
    EVar3 = GFastVRamConfig.GBufferVelocity;
  }
  bVar1 = NeedVelocityDepth(param_1);
  if (bVar1) {
    bVar1 = SupportsTranslucentClippedDepth(param_1);
    EVar2 = Atomic64Compatible|UAV|ShaderResource|RenderTargetable;
    if (bVar1) goto LAB_145770a10;
  }
  EVar2 = UAV|ShaderResource|RenderTargetable;
LAB_145770a10:
  return EVar2 | EVar3;
}

// GetFormat @ 145771150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EPixelFormat __cdecl FVelocityRendering::GetFormat(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  EPixelFormat EVar4;
  EPixelFormat EVar5;
  
  bVar2 = NeedVelocityDepth(param_1);
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xc1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Language == LANGUAGE_OpenGL) {
    EVar4 = PF_R16G16_UINT;
    EVar5 = PF_R16G16B16A16_UINT;
  }
  else {
    EVar4 = PF_G16R16;
    EVar5 = PF_A16B16G16R16;
  }
  if (bVar2) {
    EVar4 = EVar5;
  }
  return EVar4;
}

// GetRenderTargetDesc @ 145771c50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGTextureDesc * __cdecl
FVelocityRendering::GetRenderTargetDesc
          (FRDGTextureDesc *__return_storage_ptr__,EShaderPlatform param_1,TIntPoint<int> param_2,
          bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  EPixelFormat EVar5;
  ETextureCreateFlags EVar6;
  ETextureCreateFlags EVar7;
  undefined2 uVar8;
  
  bVar4 = IsUsingBasePassVelocity((FStaticShaderPlatform)param_1);
  EVar7 = None;
  if (bVar4) {
    EVar7 = GFastVRamConfig.GBufferVelocity;
  }
  bVar4 = NeedVelocityDepth(param_1);
  if (bVar4) {
    bVar4 = SupportsTranslucentClippedDepth(param_1);
    EVar6 = Atomic64Compatible|UAV|ShaderResource|RenderTargetable;
    if (bVar4) goto LAB_145771cb1;
  }
  EVar6 = UAV|ShaderResource|RenderTargetable;
LAB_145771cb1:
  uVar3 = FClearValueBinding::Transparent.Value.Color[3];
  uVar2 = FClearValueBinding::Transparent.Value._4_8_;
  uVar1 = FClearValueBinding::Transparent._0_8_;
  EVar5 = GetFormat(param_1);
  *(ETextureCreateFlags *)__return_storage_ptr__ = EVar7 | EVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = uVar3;
  if (!param_3) {
    uVar8 = 1;
  }
  else {
    uVar8 = 2;
  }
  *(int *)&__return_storage_ptr__->field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  *(TIntPoint<int>_u_0 *)&__return_storage_ptr__->field_0x24 =
       (TIntPoint<int>_u_0_s_0)param_2.field0_0x0;
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = 1;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = uVar8;
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = 0x101;
  __return_storage_ptr__->field_0x32 = param_3;
  __return_storage_ptr__->field_0x33 = EVar5;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  return __return_storage_ptr__;
}

// IsParallelVelocity @ 145780b10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FVelocityRendering::IsParallelVelocity(EShaderPlatform param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarParallelVelocity.Ref;
  if (GRHICommandList.bLatchedUseParallelAlgorithms) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (pTVar2->ShadowedValue[1] != 0) {
      bVar3 = IsMobilePlatform((FStaticShaderPlatform)param_1);
      if (!bVar3) {
        return true;
      }
    }
  }
  return false;
}

// IsVelocityPassSupported @ 145781060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FVelocityRendering::IsVelocityPassSupported(EShaderPlatform param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  EPixelFormat EVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar1 = CVarBasePassOutputsVelocity.Ref;
  if (`void___cdecl_ValidateVelocityCVars(void)'::__l2::bHasValidatedCVars) goto LAB_14578111c;
  bVar2 = IsInParallelGameThread();
  lVar5 = 4;
  if (bVar2) {
LAB_1457810a2:
    lVar4 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_1457810a2;
    lVar4 = 4;
  }
  if ((*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != -1) && (2 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`void___cdecl_ValidateVelocityCVars(void)'::__l10::LOG_Static,
               (FLogCategoryBase *)&LogRenderer);
  }
  pTVar1 = CVarVertexDeformationOutputsVelocity.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_1457810e3:
    lVar5 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_1457810e3;
  }
  if ((*(int *)((longlong)pTVar1->ShadowedValue + lVar5) != -1) && (2 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`void___cdecl_ValidateVelocityCVars(void)'::__l32::LOG_Static,
               (FLogCategoryBase *)&LogRenderer);
  }
  `void___cdecl_ValidateVelocityCVars(void)'::__l2::bHasValidatedCVars = true;
LAB_14578111c:
  EVar3 = GetFormat(param_1);
  return GPixelFormats[EVar3].Supported;
}

