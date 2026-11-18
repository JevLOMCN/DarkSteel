// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// GenerateLUTPasses @ 14514a080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FLensDistortionLUT * __thiscall
FPaniniProjectionConfig::GenerateLUTPasses
          (FPaniniProjectionConfig *this,FLensDistortionLUT *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2)

{
  int *piVar1;
  FGlobalShaderMap *this_00;
  code *pcVar2;
  TVector2<float>_u_0 TVar3;
  float fVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FLensDistortionLUT *pFVar10;
  TVector2<double> *pTVar11;
  undefined8 *puVar12;
  FScreenTransform *pFVar13;
  FRDGTexture *pFVar14;
  FRDGTextureUAV *pFVar15;
  FShaderType *pFVar16;
  FName this_01;
  FRDGEventName *pFVar17;
  FShaderParametersMetadata *pFVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_278 [32];
  int local_210;
  int local_20c;
  undefined8 *local_208;
  int local_200;
  int iStack_1fc;
  TIntVector3<int>_u_0 local_1f8;
  FRDGTextureUAVDesc local_1e8;
  FRDGTextureUAVDesc local_1d0;
  TIntRect<int>_u_0 local_1b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  undefined1 local_198 [8];
  FString local_190;
  TShaderRefBase<FGeneratePaniniUVDisplacementCS,FShaderMapPointerTable> local_178;
  FRDGEventName local_168;
  TVector2<double> local_150;
  FScreenTransform local_140;
  undefined1 local_128 [24];
  float local_110;
  int local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  
  fVar28 = __real_3c23d70a;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if ((this->D <= __real_3c23d70a) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                         ,0x8a,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
    return pFVar10;
  }
  if ((__real_3ff0000000000000 < (double)param_2->_padding_ ||
       __real_3ff0000000000000 == (double)param_2->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("View.ViewMatrices.IsPerspectiveProjection()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                         ,0x8b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
    return pFVar10;
  }
  pTVar5 = CVarLensDistortionLUTResolutionDivisor.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
    return pFVar10;
  }
  fVar28 = pTVar5->ShadowedValue[1] * fVar28;
  if (__real_42c80000 <= fVar28) {
    fVar28 = __real_42c80000;
  }
  if (fVar28 <= __real_3e800000) {
    fVar28 = __real_3e800000;
  }
  FViewInfo::GetSecondaryViewRectSize(param_2);
  fVar26 = __real_3f000000;
  iVar7 = (int)ROUND((float)local_210 * (fVar28 + fVar28) + __real_3f000000) >> 1;
  iVar8 = (int)ROUND((float)local_20c * (fVar28 + fVar28) + __real_3f000000) >> 1;
  pTVar11 = FViewMatrices::ComputeHalfFieldOfViewPerAxis
                      ((FViewMatrices *)&param_2->_padding_,&local_150);
  fVar19 = tanf((float)(pTVar11->field0_0x0)._s_0.X);
  fVar20 = tanf((float)(pTVar11->field0_0x0)._s_0.Y);
  pTVar5 = CVarLensDistortionPaniniScreenFit.Ref;
  fVar4 = __real_3f800000;
  fVar28 = this->D;
  fVar22 = fVar28 + __real_3f800000;
  fVar24 = fVar19 / SQRT(fVar19 * fVar19 + __real_3f800000);
  fVar21 = __real_3f800000 - fVar24 * fVar24;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
    return pFVar10;
  }
  fVar29 = (fVar19 / ((fVar22 / (SQRT(fVar21) + fVar28)) * fVar24) - fVar4) *
           pTVar5->ShadowedValue[1] + fVar4;
  fVar31 = (__real_41200000 / (float)local_210) * fVar19;
  fVar21 = fVar4 / fVar29;
  fVar27 = fVar31 * fVar21;
  fVar30 = this->D + fVar4;
  fVar28 = (__real_41200000 / (float)local_20c) * fVar20;
  fVar25 = fVar27 * this->D;
  fVar22 = fVar4 / (fVar30 * fVar30);
  fVar24 = (fVar27 + fVar27) * fVar25 * fVar22;
  fVar23 = fVar27 * fVar27 * fVar22 + fVar4;
  fVar22 = (SQRT(fVar24 * fVar24 - (fVar25 * fVar25 * fVar22 - fVar4) * fVar23 * __real_40800000) -
           fVar24) * (fVar26 / fVar23);
  fVar26 = SQRT(fVar4 - fVar22 * fVar22);
  if (fVar27 < 0.0) {
    fVar26 = (float)((uint)fVar26 ^ __xmm_80000000800000008000000080000000);
  }
  fVar26 = (fVar4 / fVar22) * fVar26;
  fVar31 = fVar31 / fVar26;
  fVar28 = fVar28 / (SQRT(fVar26 * fVar26 + fVar4) *
                    ((fVar28 * fVar21) /
                    ((fVar30 / (fVar22 + this->D)) * ((fVar4 / fVar22 - fVar4) * this->S + fVar4))))
  ;
  if (fVar28 <= fVar31) {
    fVar28 = fVar31;
  }
  iVar9 = _finite((double)fVar28);
  if ((iVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsFinite(ResolutionFraction)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                         ,0xb4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
    return pFVar10;
  }
  if (fVar4 < fVar28) {
    if ((__real_40000000 <= fVar28) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResolutionFraction < 2.0f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                           ,0xb6,L""), bVar6)) goto code_r0x00014514a4d4;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResolutionFraction > 1.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                       ,0xb5,L"");
    if (bVar6) {
code_r0x00014514a4d4:
      pcVar2 = (code *)swi(3);
      pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
      return pFVar10;
    }
  }
  __return_storage_ptr__->DistortingDisplacementTexture = (FRDGTexture *)0x0;
  __return_storage_ptr__->UndistortingDisplacementTexture = (FRDGTexture *)0x0;
  (__return_storage_ptr__->DistortionGridDimensions).field0_0x0._s_0.X = 0x20;
  (__return_storage_ptr__->DistortionGridDimensions).field0_0x0._s_0.Y = 0x14;
  __return_storage_ptr__->ResolutionFraction = fVar28;
  __return_storage_ptr__->DistortionOverscan = 1.0;
  puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
      return pFVar10;
    }
  }
  else {
    puVar12[8] = 0;
    *puVar12 = &___7__TObject_VFParameters_FGeneratePaniniUVDisplacementCS___FRDGAllocator__6B_;
    puVar12[9] = 0;
  }
  local_208 = puVar12;
  if ((((undefined8 **)param_1->_padding_ <= &local_208) &&
      (&local_208 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
    return pFVar10;
  }
  iVar9 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar9 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_208;
  TVar3._s_0.Y = fVar20;
  TVar3._s_0.X = fVar19;
  (((FParameters *)(puVar12 + 2))->ScreenSpaceToPaniniFactor).field0_0x0 = TVar3;
  puVar12[3] = CONCAT44(fVar4 / fVar20,fVar4 / fVar19);
  local_1b8._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_1b8._8_4_ = iVar7;
  local_1b8._12_4_ = iVar8;
  pFVar13 = FScreenTransform::DispatchThreadIdToViewportUV
                      (&local_140,(TIntRect<int> *)&local_1b8._s_0);
  local_dc = 1;
  local_128._0_8_ = 0x20008;
  TVar3 = (pFVar13->Bias).field0_0x0;
  local_108 = 0;
  local_fc = 0x10001;
  *(TVector2<float>_u_0 *)(puVar12 + 4) = (pFVar13->Scale).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar12 + 5) = TVar3;
  *(float *)(puVar12 + 6) = this->D;
  *(float *)((longlong)puVar12 + 0x34) = this->S;
  *(float *)(puVar12 + 7) = fVar29;
  local_110 = FClearValueBinding::None.Value.Color[3];
  local_10c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_104._4_4_ = iVar8;
  local_104._0_4_ = iVar7;
  local_128._8_8_ = FClearValueBinding::None._0_8_;
  local_128._16_8_ = FClearValueBinding::None.Value._4_8_;
  local_f8 = 0x11000101;
  local_f4 = 0xff00;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_200 = iVar7;
  iStack_1fc = iVar8;
  pFVar14 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_128,L"Panini.DistortingDisplacement",None);
  __return_storage_ptr__->DistortingDisplacementTexture = pFVar14;
  pFVar14 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_128,L"Panini.UndistortingDisplacement",None)
  ;
  local_1e8.Texture = __return_storage_ptr__->DistortingDisplacementTexture;
  __return_storage_ptr__->UndistortingDisplacementTexture = pFVar14;
  local_1e8._padding_._1_1_ = 0;
  local_1e8._padding_._0_1_ = ((local_1e8.Texture)->Desc).field_0x34;
  local_1e8._padding_._2_4_ = 0;
  local_1e8._padding_._6_1_ = 0;
  local_1e8._padding_._0_1_ = 0;
  pFVar15 = FRDGBuilder::CreateUAV(param_1,&local_1e8,None);
  puVar12[8] = pFVar15;
  local_1d0.Texture = __return_storage_ptr__->UndistortingDisplacementTexture;
  local_1d0._padding_._0_1_ = ((local_1d0.Texture)->Desc).field_0x34;
  local_1d0._padding_._1_1_ = 0;
  local_1d0._padding_._2_4_ = 0;
  local_1d0._padding_._6_1_ = 0;
  local_1d0._padding_._0_1_ = 0;
  pFVar15 = FRDGBuilder::CreateUAV(param_1,&local_1d0,None);
  puVar12[9] = pFVar15;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  this_00 = param_2->ShaderMap;
  pFVar16 = (FShaderType *)FGeneratePaniniUVDisplacementCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_1a8,pFVar16,0);
  if (local_1a8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_198);
    ::FName::ToString((FName *)this_01,&local_190);
    FGeneratePaniniUVDisplacementCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FLensDistortionLUT *)(*pcVar2)();
      return pFVar10;
    }
  }
  FGeneratePaniniUVDisplacementCS::GetStaticType();
  local_178.ShaderContent = (FGeneratePaniniUVDisplacementCS *)local_1a8.ShaderContent;
  local_178.ShaderMap = local_1a8.ShaderMap;
  pFVar17 = FRDGEventName::FRDGEventName(&local_168,L"GeneratePaniniUVDisplacement %dx%d");
  pFVar18 = FGeneratePaniniUVDisplacementCS::FParameters::FTypeInfo::GetStructMetadata();
  local_1f8._s_0.Z = 2;
  local_1f8._s_0.X = (int)(iVar7 + 7 + (iVar7 + 7 >> 0x1f & 7U)) >> 3;
  local_1f8._s_0.Y = (int)(iVar8 + 7 + (iVar8 + 7 >> 0x1f & 7U)) >> 3;
  FComputeShaderUtils::AddPass<FGeneratePaniniUVDisplacementCS>
            (param_1,pFVar17,Compute,&local_178,pFVar18,(FParameters *)(puVar12 + 2),
             (TIntVector3<int> *)&local_1f8._s_0);
  if (local_168.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GenerateLUTPassesUnsafe @ 14514a910

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FLensDistortionLUT * __thiscall
FPaniniProjectionConfig::GenerateLUTPassesUnsafe
          (FPaniniProjectionConfig *this,FLensDistortionLUT *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneView *param_2)

{
  GenerateLUTPasses(this,__return_storage_ptr__,param_1,(FViewInfo *)param_2);
  return __return_storage_ptr__;
}

// IsEnabledByCVars @ 14515a840

bool __cdecl FPaniniProjectionConfig::IsEnabledByCVars(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                       ,0x65,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pTVar2 = CVarLensDistortionPaniniD.Ref;
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
  return __real_3c23d70a < pTVar2->ShadowedValue[1];
}

// ReadCVars @ 14515c7c0

FPaniniProjectionConfig __cdecl FPaniniProjectionConfig::ReadCVars(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  FPaniniProjectionConfig FVar5;
  float fVar6;
  
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                       ,0x65,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FPaniniProjectionConfig)(*pcVar1)();
      return FVar5;
    }
  }
  pTVar2 = CVarLensDistortionPaniniD.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FPaniniProjectionConfig)(*pcVar1)();
      return FVar5;
    }
  }
  if (pTVar2->ShadowedValue[1] <= __real_3c23d70a) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPaniniProjectionConfig::IsEnabledByCVars()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\LensDistortion.cpp"
                       ,0x6c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FPaniniProjectionConfig)(*pcVar1)();
      return FVar5;
    }
  }
  pTVar2 = CVarLensDistortionPaniniD.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FPaniniProjectionConfig)(*pcVar1)();
      return FVar5;
    }
  }
  pTVar3 = CVarLensDistortionPaniniS.Ref;
  fVar6 = pTVar2->ShadowedValue[1];
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FPaniniProjectionConfig)(*pcVar1)();
      return FVar5;
    }
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  FVar5.S = pTVar3->ShadowedValue[1];
  FVar5.D = fVar6;
  return FVar5;
}

