// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 16

// Call @ 14d6b8e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTestCameraCalibrationCore::Define'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  CameraCalibrationTestUtil::TestDistortionParameterCurveBlending(*(FAutomationTestBase **)param_1);
  return;
}

// Call @ 14d6b8e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LensFileRendering::DrawBlendedDisplacementMap'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  TRefCountPtr<IPooledRenderTarget> TVar7;
  FRDGTexture *pFVar8;
  FRDGTexture *pFVar9;
  FRDGTexture *pFVar10;
  FRDGTexture *pFVar11;
  FGlobalShaderMap *this;
  FShaderType *pFVar12;
  FName this_00;
  FRDGEventName *pFVar13;
  undefined8 *puVar14;
  FParameters *pFVar15;
  int iVar16;
  undefined1 auStackY_978 [32];
  undefined8 *puStack_908;
  float fStack_900;
  float fStack_8fc;
  float fStack_8f8;
  float fStack_8f4;
  FRenderTargetBinding FStack_8f0;
  TIntRect<int>_u_0 TStack_8d8;
  undefined1 auStack_8c8 [16];
  undefined1 auStack_8b8 [16];
  undefined1 auStack_8a8 [16];
  undefined1 auStack_898 [16];
  longlong lStack_888;
  longlong lStack_880;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_878;
  undefined1 auStack_868 [8];
  FString FStack_860;
  TShaderRefBase<FDisplacementMapBlendPS,FShaderMapPointerTable> TStack_848;
  FRDGEventName FStack_838;
  undefined1 auStack_818 [64];
  ForAnyElementType FStack_7d8;
  undefined4 uStack_7d0;
  ClearValueType aCStack_7cc [120];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_978;
  puVar14 = (undefined8 *)0x0;
  lStack_888 = 0;
  lStack_880 = 0;
  auStack_898._8_8_ = L"";
  FRDGBuilder::FRDGBuilder
            ((FRDGBuilder *)auStack_818,param_2,(FRDGEventName *)(auStack_898 + 8),None,
             GMaxRHIShaderPlatform);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x1a0,0x10);
  iVar16 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *puVar6 = &___7__TObject_VFParameters_FDisplacementMapBlendPS___FRDGAllocator__6B_;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x5c) = 0x3f800000;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar6 + 0x14));
    puVar14 = puVar6;
  }
  puStack_908 = puVar14;
  if (((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_908) &&
      ((FScriptContainerElement *)&puStack_908 <
       FStack_7d8.Data + (longlong)(int)aCStack_7cc[0]._0_4_ * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uStack_7d0 == aCStack_7cc[0].Color[0]) {
    uStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7d8,(int *)aCStack_7cc[0].Color);
  }
  pFVar15 = (FParameters *)(puVar14 + 2);
  *(undefined8 **)(FStack_7d8.Data + (longlong)(int)uStack_7d0 * 8) = puStack_908;
  uStack_7d0 = uStack_7d0 + 1;
  TVar7 = CreateRenderTarget((FRHITexture *)auStack_8c8,*(wchar_t **)(*(longlong *)param_1 + 0x20));
  pFVar8 = FRDGBuilder::RegisterExternalTexture
                     ((FRDGBuilder *)auStack_818,
                      (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
  if ((longlong *)auStack_8c8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_8c8._0_8_ + 0x38))();
  }
  TVar7 = CreateRenderTarget((FRHITexture *)(auStack_8c8 + 8),
                             *(wchar_t **)(*(longlong *)((longlong)param_1 + 0x150) + 0x20));
  pFVar9 = FRDGBuilder::RegisterExternalTexture
                     ((FRDGBuilder *)auStack_818,
                      (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
  if ((longlong *)auStack_8c8._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_8c8._8_8_ + 0x38))();
  }
  puVar14[0xe] = *(undefined8 *)&(pFVar9->Desc).field_0x24;
  puVar14[0x13] =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  puVar14[0xf] = pFVar8;
  fStack_900 = (float)*(double *)((longlong)param_1 + 0x130);
  fStack_8fc = (float)*(double *)((longlong)param_1 + 0x138);
  puVar14[0xc] = CONCAT44(fStack_8fc,fStack_900);
  fStack_8f8 = (float)*(double *)((longlong)param_1 + 0x140);
  fStack_8f4 = (float)*(double *)((longlong)param_1 + 0x148);
  puVar14[0xd] = CONCAT44(fStack_8f4,fStack_8f8);
  cVar1 = *(char *)((longlong)param_1 + 0x20);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar16 = 2;
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceTextureTwoResource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFileRendering.cpp"
                             ,0x9f,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TVar7 = CreateRenderTarget((FRHITexture *)auStack_898,
                                 *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x20));
      pFVar8 = FRDGBuilder::RegisterExternalTexture
                         ((FRDGBuilder *)auStack_818,
                          (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
      iVar4 = 2;
      if ((longlong *)auStack_898._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)auStack_898._0_8_ + 0x38))();
        pFVar15->EvalFocus = *(float *)((longlong)param_1 + 0x24);
        *(undefined4 *)((longlong)puVar14 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x28);
        uVar3 = *(undefined8 *)((longlong)param_1 + 0x34);
        puVar14[4] = *(undefined8 *)((longlong)param_1 + 0x2c);
        puVar14[5] = uVar3;
        uVar3 = *(undefined8 *)((longlong)param_1 + 0x44);
        puVar14[6] = *(undefined8 *)((longlong)param_1 + 0x3c);
        puVar14[7] = uVar3;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[0x10] = pFVar8;
        goto LAB_14d6aecba;
      }
    }
    else {
      if (cVar1 != '\x02') {
        if (cVar1 == '\x03') {
          iVar16 = 3;
          if ((((*(longlong *)((longlong)param_1 + 8) == 0) ||
               (*(longlong *)((longlong)param_1 + 0x10) == 0)) ||
              (*(longlong *)((longlong)param_1 + 0x18) == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("SourceTextureTwoResource && SourceTextureThreeResource && SourceTextureFourResource"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFileRendering.cpp"
                                 ,0xad,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TVar7 = CreateRenderTarget((FRHITexture *)auStack_8b8,
                                     *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x20));
          pFVar8 = FRDGBuilder::RegisterExternalTexture
                             ((FRDGBuilder *)auStack_818,
                              (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
          if ((longlong *)auStack_8b8._0_8_ != (longlong *)0x0) {
            (**(code **)(*(longlong *)auStack_8b8._0_8_ + 0x38))();
          }
          TVar7 = CreateRenderTarget((FRHITexture *)(auStack_8b8 + 8),
                                     *(wchar_t **)(*(longlong *)((longlong)param_1 + 0x10) + 0x20));
          pFVar10 = FRDGBuilder::RegisterExternalTexture
                              ((FRDGBuilder *)auStack_818,
                               (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
          if ((longlong *)auStack_8b8._8_8_ != (longlong *)0x0) {
            (**(code **)(*(longlong *)auStack_8b8._8_8_ + 0x38))();
          }
          TVar7 = CreateRenderTarget((FRHITexture *)auStack_8a8,
                                     *(wchar_t **)(*(longlong *)((longlong)param_1 + 0x18) + 0x20));
          pFVar11 = FRDGBuilder::RegisterExternalTexture
                              ((FRDGBuilder *)auStack_818,
                               (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
          if ((longlong *)auStack_8a8._0_8_ != (longlong *)0x0) {
            (**(code **)(*(longlong *)auStack_8a8._0_8_ + 0x38))();
          }
          pFVar15->EvalFocus = *(float *)((longlong)param_1 + 0x24);
          *(undefined4 *)((longlong)puVar14 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x28);
          uVar3 = *(undefined8 *)((longlong)param_1 + 0x34);
          puVar14[4] = *(undefined8 *)((longlong)param_1 + 0x2c);
          puVar14[5] = uVar3;
          uVar3 = *(undefined8 *)((longlong)param_1 + 0x44);
          puVar14[6] = *(undefined8 *)((longlong)param_1 + 0x3c);
          puVar14[7] = uVar3;
          uVar3 = *(undefined8 *)((longlong)param_1 + 0x54);
          puVar14[8] = *(undefined8 *)((longlong)param_1 + 0x4c);
          puVar14[9] = uVar3;
          uVar3 = *(undefined8 *)((longlong)param_1 + 100);
          puVar14[10] = *(undefined8 *)((longlong)param_1 + 0x5c);
          puVar14[0xb] = uVar3;
          puVar14[0x10] = pFVar8;
          puVar14[0x11] = pFVar10;
          puVar14[0x12] = pFVar11;
        }
        goto LAB_14d6aecba;
      }
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceTextureTwoResource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\LensFileRendering.cpp"
                             ,0x91,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TVar7 = CreateRenderTarget((FRHITexture *)(auStack_8a8 + 8),
                                 *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x20));
      pFVar8 = FRDGBuilder::RegisterExternalTexture
                         ((FRDGBuilder *)auStack_818,
                          (TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
      iVar4 = 1;
      if ((longlong *)auStack_8a8._8_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)auStack_8a8._8_8_ + 0x38))();
      }
    }
    iVar16 = iVar4;
    pFVar15->EvalFocus = *(float *)((longlong)param_1 + 0x24);
    *(undefined4 *)((longlong)puVar14 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x28);
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x34);
    puVar14[4] = *(undefined8 *)((longlong)param_1 + 0x2c);
    puVar14[5] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x44);
    puVar14[6] = *(undefined8 *)((longlong)param_1 + 0x3c);
    puVar14[7] = uVar3;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[0x10] = pFVar8;
  }
LAB_14d6aecba:
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar12 = (FShaderType *)FDisplacementMapBlendPS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&TStack_878,pFVar12,iVar16);
  if (TStack_878.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_868);
    ::FName::ToString((FName *)this_00,&FStack_860);
    FDisplacementMapBlendPS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_860.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FDisplacementMapBlendPS::GetStaticType();
  TStack_848.ShaderContent = (FDisplacementMapBlendPS *)TStack_878.ShaderContent;
  TStack_848.ShaderMap = TStack_878.ShaderMap;
  FStack_8f0.ResolveTexture = (FRDGTexture *)0x0;
  FStack_8f0.LoadAction = ELoad;
  FStack_8f0.MipIndex = '\0';
  FStack_8f0.ArraySlice = -1;
  FStack_8f0.Texture = pFVar9;
  bVar5 = FRenderTargetBinding::Validate(&FStack_8f0);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar14[0x14] = FStack_8f0.Texture;
  puVar14[0x15] = FStack_8f0.ResolveTexture;
  TStack_8d8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  puVar14[0x16] = CONCAT44(FStack_8f0._20_4_,FStack_8f0._16_4_);
  TStack_8d8._8_4_ = *(undefined4 *)&(pFVar9->Desc).field_0x24;
  TStack_8d8._12_4_ = *(undefined4 *)&(pFVar9->Desc).field_0x28;
  pFVar13 = FRDGEventName::FRDGEventName(&FStack_838,1,L"BlendingLensDisplacementMap");
  FPixelShaderUtils::AddFullscreenPass<FDisplacementMapBlendPS>
            ((FRDGBuilder *)auStack_818,this,pFVar13,&TStack_848,pFVar15,
             (TIntRect<int> *)&TStack_8d8._s_0,(FRHIBlendState *)0x0,(FRHIRasterizerState *)0x0,
             (FRHIDepthStencilState *)0x0,0,None);
  if (FStack_838.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_838.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRDGBuilder::Execute((FRDGBuilder *)auStack_818);
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)auStack_818);
  return;
}

// Call @ 14d6b8e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OverlayRendering::DrawCrosshairOverlay'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  TRefCountPtr<IPooledRenderTarget> TVar5;
  FRDGTexture *pFVar6;
  FGlobalShaderMap *this;
  FShaderType *pFVar7;
  FName this_00;
  FRDGEventName *pFVar8;
  undefined8 *puVar9;
  undefined1 auStackY_908 [32];
  undefined8 *puStack_8a8;
  undefined1 auStack_8a0 [16];
  longlong lStack_890;
  undefined4 uStack_888;
  undefined4 uStack_884;
  TIntRect<int>_u_0 TStack_880;
  FRDGEventName FStack_870;
  TShaderRefBase<FCrosshairOverlayPS,FShaderMapPointerTable> TStack_858;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_848;
  undefined1 auStack_838 [8];
  FString FStack_830;
  FRDGEventName FStack_820;
  undefined1 auStack_808 [64];
  ForAnyElementType FStack_7c8;
  undefined4 uStack_7c0;
  undefined4 auStack_7bc [481];
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_908;
  FStack_870.EventFormat = L"";
  puVar9 = (undefined8 *)0x0;
  FStack_870.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_870.FormattedEventName.Data.ArrayNum = 0;
  FStack_870.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder
            ((FRDGBuilder *)auStack_808,param_2,&FStack_870,None,GMaxRHIShaderPlatform);
  puVar4 = FMemStackBase::Alloc((FMemStackBase *)(auStack_808 + 0x18),0x140,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    puVar4[6] = 0;
    *puVar4 = &___7__TObject_VFParameters_FCrosshairOverlayPS___FRDGAllocator__6B_;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar4 + 8));
    puVar9 = puVar4;
  }
  puStack_8a8 = puVar9;
  if (((FStack_7c8.Data <= (FScriptContainerElement *)&puStack_8a8) &&
      ((FScriptContainerElement *)&puStack_8a8 < FStack_7c8.Data + (longlong)(int)auStack_7bc[0] * 8
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uStack_7c0 == auStack_7bc[0]) {
    uStack_7c0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7c8,auStack_7bc);
  }
  *(undefined8 **)(FStack_7c8.Data + (longlong)(int)uStack_7c0 * 8) = puStack_8a8;
  uStack_7c0 = uStack_7c0 + RenderTargetable;
  TVar5 = CreateRenderTarget((FRHITexture *)auStack_8a0,*(wchar_t **)(*(longlong *)param_1 + 0x20));
  pFVar6 = FRDGBuilder::RegisterExternalTexture
                     ((FRDGBuilder *)auStack_808,
                      (TRefCountPtr<IPooledRenderTarget> *)TVar5.Reference,None);
  if ((longlong *)auStack_8a0._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_8a0._0_8_ + 0x38))();
  }
  puVar9[3] = *(undefined8 *)&(pFVar6->Desc).field_0x24;
  (((FParameters *)(puVar9 + 2))->PrincipalPoint).field0_0x0 =
       *(TVector2<float>_u_0 *)((longlong)param_1 + 0x10);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)((longlong)param_1 + 0x18);
  *(undefined4 *)((longlong)puVar9 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x28);
  puVar9[6] = *(undefined8 *)((longlong)param_1 + 0x20);
  puVar9[7] = uVar2;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar7 = (FShaderType *)FCrosshairOverlayPS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&TStack_848,pFVar7,0);
  if (TStack_848.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_838);
    ::FName::ToString((FName *)this_00,&FStack_830);
    FCrosshairOverlayPS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_830.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCrosshairOverlayPS::GetStaticType();
  TStack_858.ShaderContent = (FCrosshairOverlayPS *)TStack_848.ShaderContent;
  TStack_858.ShaderMap = TStack_848.ShaderMap;
  lStack_890 = 0;
  uStack_888 = 0xffff0001;
  auStack_8a0._8_8_ = pFVar6;
  bVar3 = FRenderTargetBinding::Validate((FRenderTargetBinding *)(auStack_8a0 + 8));
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar9[8] = auStack_8a0._8_8_;
  puVar9[9] = lStack_890;
  TStack_880._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  puVar9[10] = CONCAT44(uStack_884,uStack_888);
  TStack_880._8_4_ = *(undefined4 *)&(pFVar6->Desc).field_0x24;
  TStack_880._12_4_ = *(undefined4 *)&(pFVar6->Desc).field_0x28;
  pFVar8 = FRDGEventName::FRDGEventName(&FStack_820,1,L"CrosshairOverlay");
  FPixelShaderUtils::AddFullscreenPass<FCrosshairOverlayPS>
            ((FRDGBuilder *)auStack_808,this,pFVar8,&TStack_858,(FParameters *)(puVar9 + 2),
             (TIntRect<int> *)&TStack_880._s_0,(FRHIBlendState *)0x0,(FRHIRasterizerState *)0x0,
             (FRHIDepthStencilState *)0x0,0,None);
  if (FStack_820.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_820.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FRDGBuilder::Execute((FRDGBuilder *)auStack_808);
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)auStack_808);
  return;
}

// Call @ 14d6b8e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseLensTable::ForEachFocusPoint'::__l2::<lambda_1>,void,FBaseFocusPoint_const_&>
::Call(void *param_1,FBaseFocusPoint *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  
  fVar1 = *(float *)((longlong)param_1 + 0x40);
  fVar2 = *(float *)((longlong)param_1 + 0x44);
  fVar6 = (float)(**(code **)((longlong)*param_2 + 8))(param_2);
  if ((float)((uint)(fVar6 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2) {
    CheckCallable(*(void **)((longlong)param_1 + 0x10));
    pcVar3 = *(code **)((longlong)param_1 + 0x10);
    plVar5 = (longlong *)((longlong)param_1 + 0x20);
    if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)param_1 + 0x38);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,param_2);
  }
  return;
}

// Call @ 14d6b8ea0

FRichCurve * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFocalLengthTable::SetParameterCurveKeysAtFocus'::__l2::<lambda_1>,FRichCurve_*,float>
::Call(void *param_1,float *param_2)

{
  uint uVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  
  pFVar2 = *(FRichCurve **)(*(longlong *)param_1 + 0x20);
  pFVar3 = (FRichCurve *)
           ((longlong)*(int *)(*(longlong *)param_1 + 0x28) * 0x108 + (longlong)pFVar2);
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FRichCurve *)0x0;
    }
    if ((float)((uint)(*(float *)&pFVar2[2]._padding_ - *param_2) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) break;
    pFVar2 = (FRichCurve *)&pFVar2[2]._padding_;
  }
  uVar1 = *(uint *)((longlong)param_1 + 8);
  if (1 < uVar1) {
    return (FRichCurve *)0x0;
  }
  if (uVar1 == 0) {
    return pFVar2;
  }
  if (uVar1 != 1) {
    return (FRichCurve *)0x0;
  }
  return pFVar2 + 1;
}

// Call @ 14d6b8f20

/* WARNING: Removing unreachable block (ram,0x00014d6b1574) */
/* WARNING: Removing unreachable block (ram,0x00014d6b1581) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`DistortionRenderingUtils::UndistortImagePoints'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  atomic<unsigned_int> aVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  TVector2<float> TVar6;
  FRHIResource *pFVar7;
  FShader *pFVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  FGlobalShaderMap *this;
  FShaderType *pFVar13;
  FName this_00;
  FShaderParametersMetadata *pFVar14;
  FRHIComputeShader *pFVar15;
  FRHIBatchedShaderUnbinds *pFVar16;
  IRHIComputeContext *pIVar17;
  undefined8 *puVar18;
  longlong lVar19;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar20;
  TRefCountPtr<FRHIBuffer> this_01;
  longlong lVar21;
  uint uVar22;
  TRefCountPtr<FRHIUnorderedAccessView> this_02;
  FRHIResource *pFStackX_8;
  FRHIResource *pFStackX_18;
  FRHIResource *pFStackX_20;
  FResourceArrayUploadInterface FStack_1f8;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TStack_1f0;
  int aiStack_1e8 [2];
  undefined1 uStack_1e0;
  FShader *pFStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FRWBuffer FStack_1c8;
  TIntVector3<int>_u_0 TStack_198;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_188;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  wchar_t *pwStack_168;
  undefined ***pppuStack_160;
  ERHIAccess EStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  TShaderRefBase<FUndistortImagePointsCS,FShaderMapPointerTable> TStack_140;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  int iStack_120;
  FRHITransitionInfo FStack_118;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  FRHISamplerState *pFStack_d0;
  FRHIResource *pFStack_c8;
  FRHIUnorderedAccessView *pFStack_c0;
  undefined1 auStack_b8 [8];
  FString FStack_b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> TStack_98;
  TArrayView<FRHITransitionInfo_const_,int> TStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  wchar_t *pwStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  uStack_d8 = *(undefined8 *)(*(longlong *)param_1 + 0x20);
  pFStack_d0 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  FStack_1f8 = (FResourceArrayUploadInterface)&___7__TResourceArray_U__TVector2_M_Math_UE___0A___6B_
  ;
  TStack_1f0.Packed = 0;
  aiStack_1e8[0] = 0;
  aiStack_1e8[1] = 0;
  uStack_1e0 = 0;
  iVar11 = ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                     (8,4,iVar1,(ForAnyElementType *)&TStack_1f0.Frozen,aiStack_1e8,aiStack_1e8 + 1)
  ;
  TVar20 = TStack_1f0;
  if ((TStack_1f0.Packed & 1) != 0) {
    TVar20.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&TStack_1f0 + ((longlong)TStack_1f0.Packed >> 0x18));
  }
  memset(TVar20.UnfrozenPtr + (longlong)iVar11 * 8,0,(longlong)iVar1 << 3);
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x10);
  iVar11 = *(int *)((longlong)param_1 + 8) << 3;
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EStack_158 = RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|Static,false);
  ppuStack_130 = &___7FResourceArrayUploadArrayView__6B_;
  pppuStack_160 = &ppuStack_130;
  iStack_178 = iVar1 * 8;
  iStack_16c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  pwStack_168 = L"ImagePointsInitialData";
  uStack_174 = 8;
  pwStack_68 = L"ImagePointsInitialData";
  uStack_170 = 0x10101;
  uStack_78 = CONCAT44(8,iStack_178);
  uStack_70 = CONCAT44(iStack_16c,0x10101);
  uStack_150 = 0;
  uStack_154 = 2;
  uStack_148 = 0;
  uStack_58 = CONCAT44(2,EStack_158);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_128 = uVar3;
  iStack_120 = iStack_178;
  pppuStack_60 = pppuStack_160;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)&pFStackX_18);
  pFVar7 = pFStackX_18;
  ppuStack_130 = &___7FResourceArrayUploadInterface__6B_;
  uStack_e8 = 0;
  uStack_e0 = 0;
  if ((pFStackX_18 == (FRHIResource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xb15,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  aVar2 = pFVar7[9].AtomicFlags.Packed;
  if (((uint)aVar2 >> 0x14 & 1) != 0) {
    if (((((int)pFVar7[9]._padding_ != 0) || (*(int *)((longlong)&pFVar7[9]._padding_ + 4) != 0)) ||
        (aVar2 != (atomic<unsigned_int>)0x100000)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x54f,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TargetBuffer->GetDesc().IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb16,
                       L"Null buffer resources are placeholders for the streaming system. They do not contain a valid descriptor for this function to use. Call SetType() instead."
                      );
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  aVar2 = pFVar7[9].AtomicFlags.Packed;
  if (((uint)aVar2 & 0x10) == 0) {
    if (((uint)aVar2 >> 0x10 & 1) == 0) {
      bVar10 = (byte)((uint)aVar2 >> 0xc) & 2 | 1;
    }
    else {
      bVar10 = 2;
    }
  }
  else {
    bVar10 = 4;
  }
  uStack_e8._0_3_ = CONCAT12(bVar10,(undefined2)uStack_e8);
  FRHICommandListBase::CreateShaderResourceView
            ((FRHICommandListBase *)param_2,(FRHIBuffer *)&pFStackX_20,(FInitializer *)pFStackX_18);
  pFStack_c8 = pFStackX_20;
  FStack_1c8.SRV.Reference = (FRHIShaderResourceView *)0x0;
  FStack_1c8.Buffer.Reference = (FRHIBuffer *)0x0;
  FStack_1c8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  FStack_1c8.NumBytes = 0;
  FStack_1c8.ClassName.ComparisonIndex.Value = 0;
  FStack_1c8.ClassName.Number = 0;
  FStack_1c8.OwnerName.ComparisonIndex.Value = 0;
  FStack_1c8.OwnerName.Number = 0;
  FRWBuffer::Initialize
            (&FStack_1c8,(FRHICommandListBase *)param_2,L"UndistortedPointsBuffer",8,
             *(uint *)((longlong)param_1 + 8),PF_G32R32F,UAVCompute,SourceCopy|UnorderedAccess,
             &FStack_1f8);
  this_02.Reference = FStack_1c8.UAV.Reference;
  pFStack_c0 = FStack_1c8.UAV.Reference;
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar13 = (FShaderType *)FUndistortImagePointsCS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&TStack_188,pFVar13,0);
  if (TStack_188.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_b8);
    ::FName::ToString((FName *)this_00,&FStack_b0);
    FUndistortImagePointsCS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUndistortImagePointsCS::GetStaticType();
  uVar22 = *(uint *)((longlong)param_1 + 8);
  pFStack_1d8 = TStack_188.ShaderContent;
  TStack_140.ShaderContent = (FUndistortImagePointsCS *)TStack_188.ShaderContent;
  TStack_140.ShaderMap = TStack_188.ShaderMap;
  pFVar14 = FUndistortImagePointsCS::FParameters::FTypeInfo::GetStructMetadata();
  TStack_198._s_0.Y = 1;
  TStack_198._s_0.Z = 1;
  TStack_198._s_0.X = uVar22;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&TStack_198._s_0);
  pFVar15 = TShaderRefBase<FUndistortImagePointsCS,FShaderMapPointerTable>::GetComputeShader
                      (&TStack_140);
  SetComputePipelineState((FRHIComputeCommandList *)param_2,pFVar15);
  TStack_98.ShaderContent = TStack_188.ShaderContent;
  TStack_98.ShaderMap = TStack_188.ShaderMap;
  ValidateShaderParameters(&TStack_98,pFVar14,&uStack_d8);
  pFVar8 = pFStack_1d8;
  ::SetShaderParameters
            ((FRHIComputeCommandList *)param_2,pFVar15,&pFStack_1d8->Bindings,pFVar14,&uStack_d8);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_2,uVar22,1,1);
  pFVar15 = TShaderRefBase<FUndistortImagePointsCS,FShaderMapPointerTable>::GetComputeShader
                      (&TStack_140);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar16 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    if (((pFVar8->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar16,&pFVar8->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_2,pFVar15,pFVar16);
  }
  FStack_118._padding_._4_2_ = 0xffff;
  pFStack_1d8 = (FShader *)&FStack_118;
  uStack_1d0 = 1;
  TStack_88._12_4_ = uStack_1cc;
  TStack_88.ArrayNum = 1;
  FStack_118._padding_._0_4_ = 0xffffffff;
  FStack_118.field1_0x8.UAV = this_02.Reference;
  FStack_118.Type = UAV;
  FStack_118.AccessBefore = UAVCompute;
  FStack_118.AccessAfter = CopySrc;
  FStack_118.Flags = None;
  FStack_118.CommitInfo.bIsSet = false;
  TStack_88.DataPtr = (FRHITransitionInfo *)pFStack_1d8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_88,None);
  (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&pFStackX_8);
  pFVar7 = pFStackX_8;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar18 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar18;
    *(undefined8 **)&param_2->field_0x30 = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &___7FRHICommandCopyToStagingBuffer__6B_;
    puVar18[2] = FStack_1c8.Buffer.Reference;
    puVar18[3] = pFVar7;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(int *)((longlong)puVar18 + 0x24) = iVar11;
    this_01.Reference = FStack_1c8.Buffer.Reference;
  }
  else {
    pIVar17 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_2);
    this_01.Reference = FStack_1c8.Buffer.Reference;
    (**(code **)(pIVar17->_padding_ + 0xd8))(pIVar17,FStack_1c8.Buffer.Reference,pFVar7,0,iVar11);
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  lVar19 = (**(code **)(pFStackX_8->_padding_ + 0x10))(pFStackX_8,0,iVar11);
  if (lVar19 == 0) {
    if (2 < (byte)LogCameraCalibrationCore._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
    }
    uVar22 = 0;
    if (0 < *(int *)((longlong)param_1 + 8)) {
      lVar19 = 0;
      do {
        TVar6.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        plVar4 = *(longlong **)((longlong)param_1 + 0x20);
        uVar12 = 0;
        if ((int)uVar22 < (int)plVar4[1]) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = uVar22 + 1;
        ((TVector2<float>_u_0 *)(lVar19 + *plVar4))->_s_0 =
             (TVector2<float>_u_0_s_0)TVar6.field0_0x0;
        lVar19 = lVar19 + 8;
        this_01.Reference = FStack_1c8.Buffer.Reference;
        this_02.Reference = FStack_1c8.UAV.Reference;
      } while ((int)uVar22 < *(int *)((longlong)param_1 + 8));
    }
  }
  else {
    uVar22 = 0;
    if (0 < *(int *)((longlong)param_1 + 8)) {
      lVar21 = 0;
      do {
        plVar4 = *(longlong **)((longlong)param_1 + 0x20);
        uVar3 = *(undefined8 *)(lVar21 + lVar19);
        uVar12 = 0;
        if ((int)uVar22 < (int)plVar4[1]) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = uVar22 + 1;
        *(undefined8 *)(lVar21 + *plVar4) = uVar3;
        lVar21 = lVar21 + 8;
        this_01.Reference = FStack_1c8.Buffer.Reference;
        this_02.Reference = FStack_1c8.UAV.Reference;
      } while ((int)uVar22 < *(int *)((longlong)param_1 + 8));
    }
  }
  (**(code **)(pFStackX_8->_padding_ + 0x18))();
  if (pFStackX_8 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStackX_8);
  }
  if (this_01.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01.Reference);
  }
  if (this_02.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02.Reference);
  }
  if (FStack_1c8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)FStack_1c8.SRV.Reference);
  }
  if (pFStackX_20 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStackX_20);
  }
  if (pFStackX_18 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStackX_18);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&TStack_1f0.Frozen);
  return;
}

// Call @ 14d6b8f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCalibratedMapProcessor::Update'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FCalibratedMapProcessor::Update_RenderThread(*(FCalibratedMapProcessor **)param_1);
  return;
}

// Call @ 14d6b8f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LensFileRendering::ClearDisplacementMap'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TRefCountPtr<IPooledRenderTarget> TVar1;
  FRDGTexture *pFVar2;
  undefined1 auStackY_848 [32];
  undefined1 auStack_818 [16];
  longlong lStack_808;
  longlong lStack_800;
  FLinearColor_u_0 FStack_7f8;
  FRDGBuilder FStack_7e8;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_848;
  auStack_818._8_8_ = L"";
  lStack_808 = 0;
  lStack_800 = 0;
  FRDGBuilder::FRDGBuilder
            (&FStack_7e8,param_2,(FRDGEventName *)(auStack_818 + 8),None,GMaxRHIShaderPlatform);
  TVar1 = CreateRenderTarget((FRHITexture *)auStack_818,*(wchar_t **)(*(longlong *)param_1 + 0x20));
  pFVar2 = FRDGBuilder::RegisterExternalTexture
                     (&FStack_7e8,(TRefCountPtr<IPooledRenderTarget> *)TVar1.Reference,None);
  if ((longlong *)auStack_818._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_818._0_8_ + 0x38))();
  }
  FStack_7f8._0_8_ = 0;
  FStack_7f8._8_8_ = 0;
  AddClearRenderTargetPass(&FStack_7e8,pFVar2,(FLinearColor *)&FStack_7f8._s_0);
  FRDGBuilder::Execute(&FStack_7e8);
  FRDGBuilder::~FRDGBuilder(&FStack_7e8);
  return;
}

// Call @ 14d6b8f50

FRichCurve * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCenterTable::SetParameterCurveKeysAtFocus'::__l8::<lambda_1>,FRichCurve_*,float>
::Call(void *param_1,float *param_2)

{
  uint uVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  
  pFVar2 = *(FRichCurve **)(*(longlong *)param_1 + 0x20);
  pFVar3 = (FRichCurve *)
           ((longlong)*(int *)(*(longlong *)param_1 + 0x28) * 0x108 + (longlong)pFVar2);
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FRichCurve *)0x0;
    }
    if ((float)((uint)(*(float *)&pFVar2[2]._padding_ - *param_2) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) break;
    pFVar2 = (FRichCurve *)&pFVar2[2]._padding_;
  }
  uVar1 = *(uint *)((longlong)param_1 + 8);
  if (1 < uVar1) {
    return (FRichCurve *)0x0;
  }
  if (uVar1 == 0) {
    return pFVar2;
  }
  if (uVar1 != 1) {
    return (FRichCurve *)0x0;
  }
  return pFVar2 + 1;
}

// Call @ 14d6b8fd0

FRichCurve * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNodalOffsetTable::SetParameterCurveKeysAtFocus'::__l8::<lambda_1>,FRichCurve_*,float>
::Call(void *param_1,float *param_2)

{
  FRichCurve *pFVar1;
  
  pFVar1 = `FNodalOffsetTable::SetParameterCurveKeysAtFocus'::__l8::<lambda_1>::operator()
                     (param_1,*param_2);
  return pFVar1;
}

// Call @ 14d6b8fe0

FRichCurve * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageCenterTable::SetParameterCurveKeysAtZoom'::__l8::<lambda_1>,FRichCurve_*,float>
::Call(void *param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)param_1 + 0x10);
  lVar3 = (longlong)*(int *)(*(longlong *)param_1 + 0x18) * 0x110 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return (FRichCurve *)0x0;
    }
    if ((float)((uint)(*(float *)(lVar2 + 8) - *param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_38d1b717) break;
    lVar2 = lVar2 + 0x110;
  }
  uVar1 = *(uint *)((longlong)param_1 + 8);
  if (1 < uVar1) {
    return (FRichCurve *)0x0;
  }
  if (uVar1 == 0) {
    return (FRichCurve *)(lVar2 + 0x10);
  }
  if (uVar1 != 1) {
    return (FRichCurve *)0x0;
  }
  return (FRichCurve *)(lVar2 + 0x90);
}

// Call @ 14d6b9060

FRichCurve * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNodalOffsetTable::SetParameterCurveKeysAtZoom'::__l8::<lambda_1>,FRichCurve_*,float>
::Call(void *param_1,float *param_2)

{
  FRichCurve *pFVar1;
  
  pFVar1 = `FNodalOffsetTable::SetParameterCurveKeysAtZoom'::__l8::<lambda_1>::operator()
                     (param_1,*param_2);
  return pFVar1;
}

// Call @ 14d6b9070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBaseLensTable::ForEachLinkedFocusPoint'::__l9::<lambda_1>,void,FBaseFocusPoint_const_&>
::Call(void *param_1,FBaseFocusPoint *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  
  fVar1 = *(float *)((longlong)param_1 + 0x40);
  fVar2 = *(float *)((longlong)param_1 + 0x44);
  fVar6 = (float)(**(code **)((longlong)*param_2 + 8))(param_2);
  if ((float)((uint)(fVar6 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2) {
    auStackX_8[0] = *(undefined1 *)((longlong)param_1 + 0x49);
    auStackX_10[0] = *(undefined1 *)((longlong)param_1 + 0x48);
    CheckCallable(*(void **)((longlong)param_1 + 0x10));
    pcVar3 = *(code **)((longlong)param_1 + 0x10);
    plVar5 = (longlong *)((longlong)param_1 + 0x20);
    if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)param_1 + 0x38);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,param_2,auStackX_10,auStackX_8);
  }
  return;
}

// Call @ 14d6b9080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCalibratedMapProcessor::ExecuteJob'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  wchar_t *pwVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  FRDGTexture *pFVar9;
  FRDGTexture *pFVar10;
  FRDGTexture *pFVar11;
  FRDGBuffer *pFVar12;
  undefined8 *puVar13;
  FRDGBufferUAV *pFVar14;
  FRDGTextureUAV *pFVar15;
  FGlobalShaderMap *this;
  FShaderType *pFVar16;
  FName this_00;
  FRDGEventName *this_01;
  FShaderParametersMetadata *pFVar17;
  wchar_t *pwVar18;
  FRDGPass *this_02;
  FDerivedDistortionDataJob *pFVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_988 [32];
  FRDGTextureUAVDesc FStack_938;
  FRDGTextureUAVDesc FStack_920;
  undefined8 *puStack_908;
  ERDGPassFlags EStack_900;
  FRDGBufferUAVDesc FStack_8f8;
  float fStack_8e8;
  float fStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  FRDGBufferDesc FStack_8d8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined8 uStack_8b0;
  undefined1 auStack_8a8 [16];
  undefined1 auStack_898 [24];
  longlong lStack_880;
  FRDGEventName FStack_878;
  FRDGParameterStruct FStack_860;
  undefined1 auStack_848 [8];
  FString FStack_840;
  FRDGEventName FStack_830;
  undefined1 auStack_818 [64];
  ForAnyElementType FStack_7d8;
  int iStack_7d0;
  int aiStack_7cc [87];
  ForElementType<FRDGPass_*> FStack_670;
  uint uStack_668;
  uint auStack_664 [5];
  ForElementType<FRDGBuffer_*> FStack_650;
  uint uStack_648;
  uint uStack_644;
  ForElementType<FRDGView_*> FStack_640;
  int iStack_638;
  int aiStack_634 [299];
  FRDGTrace FStack_188;
  FRDGUserValidation FStack_118;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_988;
  FStack_878.EventFormat = L"";
  puVar21 = (undefined8 *)0x0;
  FStack_878.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_878.FormattedEventName.Data.ArrayNum = 0;
  FStack_878.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder
            ((FRDGBuilder *)auStack_818,param_2,&FStack_878,None,GMaxRHIShaderPlatform);
  TVar8 = CreateRenderTarget((FRHITexture *)auStack_8a8,
                             *(wchar_t **)(*(longlong *)((longlong)param_1 + 0x10) + 0x20));
  pFVar9 = FRDGBuilder::RegisterExternalTexture
                     ((FRDGBuilder *)auStack_818,
                      (TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
  if ((longlong *)auStack_8a8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_8a8._0_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)(auStack_8a8 + 8),
                             *(wchar_t **)(*(longlong *)param_1 + 0x20));
  pFVar10 = FRDGBuilder::RegisterExternalTexture
                      ((FRDGBuilder *)auStack_818,
                       (TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
  if ((longlong *)auStack_8a8._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_8a8._8_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)auStack_898,
                             *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x20));
  pFVar11 = FRDGBuilder::RegisterExternalTexture
                      ((FRDGBuilder *)auStack_818,
                       (TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,None);
  if ((longlong *)auStack_898._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_898._0_8_ + 0x38))();
  }
  if (*(longlong *)((longlong)param_1 + 0x18) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(longlong *)((longlong)param_1 + 0x18) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uStack_8b4 = FStack_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  uStack_8c0 = 0x10;
  uStack_8bc = 8;
  uStack_8b8 = 0x4129;
  FStack_8d8.BytesPerElement = 0x10;
  FStack_8d8.NumElements = 8;
  FStack_8d8._12_4_ = FStack_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  FStack_8d8.Usage = VertexBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  uStack_8b0 = 0;
  FStack_8d8.Metadata = (FShaderParametersMetadata *)0x0;
  FRDGUserValidation::ValidateCreateBuffer(&FStack_118,&FStack_8d8,L"EdgePointsBuffer",None);
  if (FStack_8d8.BytesPerElement == 0) {
    FStack_8d8.BytesPerElement = 1;
  }
  if (FStack_8d8.NumElements == 0) {
    FStack_8d8.NumElements = 1;
  }
  pFVar12 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x130,8);
  pFVar12 = FRDGBuffer::FRDGBuffer(pFVar12,L"EdgePointsBuffer",&FStack_8d8,None);
  auStack_898._8_8_ = pFVar12;
  if (uStack_648 == uStack_644) {
    uStack_648 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,&FStack_650,(int *)&uStack_644);
  }
  FStack_650.Data[(int)uStack_648] = pFVar12;
  (pFVar12->Handle).Index = uStack_648;
  uStack_648 = uStack_648 + 1;
  FRDGUserValidation::ValidateCreateBuffer(&FStack_118,pFVar12);
  FRDGTrace::AddResource(&FStack_188,(FRDGViewableResource *)pFVar12);
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x50,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    puVar13[4] = 0;
    *puVar13 = &___7__TObject_VFParameters_FCalibratedMapDerivedDataCS___FRDGAllocator__6B_;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar21 = puVar13;
  }
  puStack_908 = puVar21;
  if (((FStack_7d8.Data <= (FScriptContainerElement *)&puStack_908) &&
      ((FScriptContainerElement *)&puStack_908 < FStack_7d8.Data + (longlong)aiStack_7cc[0] * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iStack_7d0 == aiStack_7cc[0]) {
    iStack_7d0 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&FStack_7d8,aiStack_7cc);
  }
  fStack_8e4 = __real_3f800000;
  pwVar1 = (wchar_t *)(puVar21 + 2);
  FStack_8f8._padding_._0_2_ = 0x11;
  FStack_8f8._padding_._2_1_ = 0;
  *(undefined8 **)(FStack_7d8.Data + (longlong)iStack_7d0 * 8) = puStack_908;
  puVar21[4] = pFVar9;
  puVar21[5] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  fStack_8e8 = fStack_8e4 / (float)*(int *)&(pFVar10->Desc).field_0x24;
  fStack_8e4 = fStack_8e4 / (float)*(int *)&(pFVar10->Desc).field_0x28;
  *(ulonglong *)pwVar1 = CONCAT44(fStack_8e4,fStack_8e8);
  puVar2 = &(pFVar10->Desc).field_0x24;
  uStack_8e0 = *(undefined4 *)puVar2;
  uStack_8dc = *(undefined4 *)&(pFVar10->Desc).field_0x28;
  puVar21[3] = *(undefined8 *)puVar2;
  FStack_8f8.Buffer = pFVar12;
  iStack_7d0 = iStack_7d0 + 1;
  FRDGUserValidation::ValidateCreateUAV(&FStack_118,&FStack_8f8);
  pFVar12 = FStack_8f8.Buffer;
  pFVar14 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x48,8);
  lVar5 = pFVar12->_padding_;
  *(byte *)&pFVar14->_padding_ = (byte)pFVar14->_padding_ & 0xfe;
  *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0xffffffffffffffff;
  pFVar14->_padding_ = lVar5;
  pFVar14->_padding_ = 0;
  *(undefined1 *)&pFVar14->_padding_ = 2;
  *(undefined1 *)&pFVar14->_padding_ = 0;
  pFVar14->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
  (pFVar14->Desc)._padding_ =
       CONCAT53(FStack_8f8._padding_._3_5_,
                CONCAT12(FStack_8f8._padding_._2_1_,(undefined2)FStack_8f8._padding_));
  (pFVar14->Desc).Buffer = FStack_8f8.Buffer;
  if (iStack_638 == aiStack_634[0]) {
    iStack_638 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,&FStack_640,aiStack_634);
  }
  FStack_640.Data[iStack_638] = (FRDGView *)pFVar14;
  *(int *)((longlong)&pFVar14->_padding_ + 4) = iStack_638;
  iStack_638 = iStack_638 + 1;
  FRDGUserValidation::ValidateCreateUAV(&FStack_118,pFVar14);
  puVar21[6] = pFVar14;
  FStack_938._padding_._0_1_ = (pFVar10->Desc).field_0x34;
  FStack_938._padding_._1_1_ = 0;
  FStack_938._padding_._2_4_ = 0;
  FStack_938._padding_._6_1_ = 0;
  FStack_938._padding_._0_1_ = '\0';
  FStack_938.Texture = pFVar10;
  FRDGUserValidation::ValidateCreateUAV(&FStack_118,&FStack_938);
  pFVar9 = FStack_938.Texture;
  pFVar15 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x50,8);
  lVar5 = pFVar9->_padding_;
  *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
  pFVar15->_padding_ = lVar5;
  pFVar15->_padding_ = 0;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  pFVar15->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = (undefined1)FStack_938._padding_;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 1) = FStack_938._padding_._1_1_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 2) = FStack_938._padding_._2_2_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = FStack_938._padding_._4_2_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 6) = FStack_938._padding_._6_1_;
  *(char *)&(pFVar15->Desc)._padding_ = (char)FStack_938._padding_;
  if ((char)FStack_938._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 7) = FStack_938._padding_._7_1_;
  }
  (pFVar15->Desc).Texture = FStack_938.Texture;
  if (iStack_638 == aiStack_634[0]) {
    iStack_638 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,&FStack_640,aiStack_634);
  }
  FStack_640.Data[iStack_638] = (FRDGView *)pFVar15;
  *(int *)((longlong)&pFVar15->_padding_ + 4) = iStack_638;
  iStack_638 = iStack_638 + 1;
  FRDGUserValidation::ValidateCreateUAV(&FStack_118,pFVar15);
  puVar21[7] = pFVar15;
  FStack_920._padding_._0_1_ = (pFVar11->Desc).field_0x34;
  FStack_920._padding_._1_1_ = 0;
  FStack_920._padding_._2_4_ = 0;
  FStack_920._padding_._6_1_ = 0;
  FStack_920._padding_._0_1_ = '\0';
  FStack_920.Texture = pFVar11;
  FRDGUserValidation::ValidateCreateUAV(&FStack_118,&FStack_920);
  pFVar9 = FStack_920.Texture;
  pFVar15 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x50,8);
  lVar5 = pFVar9->_padding_;
  *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
  pFVar15->_padding_ = lVar5;
  pFVar15->_padding_ = 0;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  pFVar15->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = (undefined1)FStack_920._padding_;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 1) = FStack_920._padding_._1_1_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 2) = FStack_920._padding_._2_2_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = FStack_920._padding_._4_2_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 6) = FStack_920._padding_._6_1_;
  *(char *)&(pFVar15->Desc)._padding_ = (char)FStack_920._padding_;
  if ((char)FStack_920._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 7) = FStack_920._padding_._7_1_;
  }
  (pFVar15->Desc).Texture = FStack_920.Texture;
  if (iStack_638 == aiStack_634[0]) {
    iStack_638 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,&FStack_640,aiStack_634);
  }
  FStack_640.Data[iStack_638] = (FRDGView *)pFVar15;
  *(int *)((longlong)&pFVar15->_padding_ + 4) = iStack_638;
  iStack_638 = iStack_638 + 1;
  FRDGUserValidation::ValidateCreateUAV(&FStack_118,pFVar15);
  puVar21[8] = pFVar15;
  if ((*(longlong *)((longlong)param_1 + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar3 = *(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x10);
  if ((*(longlong *)((longlong)param_1 + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar4 = *(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x11);
  if ((*(longlong *)((longlong)param_1 + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar23 = (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x12);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  uVar22 = (uint)bVar3;
  if ((1 < uVar22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar20 = (uint)bVar4;
  if ((2 < uVar20) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((2 < uVar23) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (FShaderType *)FCalibratedMapDerivedDataCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (this,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(auStack_898 + 0x10),pFVar16,
             uVar22 + uVar20 * 2 + uVar23 * 6);
  if ((FScriptContainerElement *)auStack_898._16_8_ == (FScriptContainerElement *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_848);
    ::FName::ToString((FName *)this_00,&FStack_840);
    FCalibratedMapDerivedDataCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (FStack_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_840.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FCalibratedMapDerivedDataCS::GetStaticType();
  this_01 = FRDGEventName::FRDGEventName(&FStack_830,1,L"LensFileSTMapConversion");
  pFVar17 = FCalibratedMapDerivedDataCS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&FStack_118,pwVar1,pFVar17,this_01,Compute);
  FRDGBuilder::FlushAccessModeQueue((FRDGBuilder *)auStack_818);
  pwVar18 = FRDGEventName::GetTCHAR(this_01);
  EStack_900 = FRDGBuilder::OverridePassFlags((FRDGBuilder *)auStack_818,pwVar18,Compute);
  this_02 = FMemStackBase::Alloc((FMemStackBase *)(auStack_818 + 0x18),0x1a0,8);
  FStack_860.Contents = (uchar *)pwVar1;
  if (((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FStack_860.Layout.Reference = (pFVar17->Layout).Reference;
  if (FStack_860.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)FStack_860.Layout.Reference);
  }
  FStack_860.Metadata = pFVar17;
  FRDGPass::FRDGPass(this_02,this_01,&FStack_860,EStack_900,Async);
  this_02->_padding_ =
       (longlong)
       &TRDGLambdaPass<FCalibratedMapDerivedDataCS::FParameters,``FCalibratedMapProcessor::ExecuteJob'::`10'::<lambda_1>::operator()'::`2'::<lambda_1>_>
        ::_vftable_;
  this_02[1]._padding_ = (longlong)pwVar1;
  this_02[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)auStack_898._16_8_;
  this_02[1].FullPathIfDebug.Data.ArrayNum = (undefined4)lStack_880;
  this_02[1].FullPathIfDebug.Data.ArrayMax = lStack_880._4_4_;
  this_02[1].Name.EventFormat = pwVar1;
  FRDGBuilder::ClobberPassOutputs((FRDGBuilder *)auStack_818,this_02);
  if (uStack_668 == auStack_664[0]) {
    uStack_668 = ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,&FStack_670,(int *)auStack_664);
  }
  FStack_670.Data[(int)uStack_668] = this_02;
  (this_02->Handle).Index = uStack_668;
  uStack_668 = uStack_668 + 1;
  FRDGBuilder::SetupParameterPass((FRDGBuilder *)auStack_818,this_02);
  if ((void *)CONCAT44(FStack_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                       FStack_830.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(FStack_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                   FStack_830.FormattedEventName.Data.AllocatorInstance.Data._0_4_))
    ;
  }
  pFVar19 = TSharedPtr<FDerivedDistortionDataJob,1>::operator->
                      ((TSharedPtr<FDerivedDistortionDataJob,1> *)((longlong)param_1 + 0x18));
  AddEnqueueCopyPass((FRDGBuilder *)auStack_818,(pFVar19->Readback).Ptr,
                     (FRDGBuffer *)auStack_898._8_8_,0x80);
  FRDGBuilder::Execute((FRDGBuilder *)auStack_818);
  pFVar19 = TSharedPtr<FDerivedDistortionDataJob,1>::operator->
                      ((TSharedPtr<FDerivedDistortionDataJob,1> *)((longlong)param_1 + 0x18));
  pFVar19->State = AwaitingResult;
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)auStack_818);
  return;
}

// Call @ 14d6b9090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTestCameraCalibrationCore::Define'::__l2::<lambda_2>,void>::Call(void *param_1)

{
  CameraCalibrationTestUtil::TestLensFileAddPoints(*(FAutomationTestBase **)param_1);
  return;
}

// Call @ 14d6b90a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTestCameraCalibrationCore::Define'::__l2::<lambda_3>,void>::Call(void *param_1)

{
  CameraCalibrationTestUtil::TestLensFileRemovePoints(*(FAutomationTestBase **)param_1);
  return;
}

