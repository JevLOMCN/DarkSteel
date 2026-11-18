// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// ~FFoveatedImageGenerator @ 1457503b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FFoveatedImageGenerator::~FFoveatedImageGenerator(FFoveatedImageGenerator *this)

{
  this->_padding_ = (longlong)&___7IVariableRateShadingImageGenerator__6B_;
  return;
}

// operator() @ 145751d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FFoveatedImageGenerator::PrepareImages'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FComputeVariableRateShadingImageGeneration,FShaderMapPointerTable> *this_00;
  undefined8 uVar1;
  uint uVar2;
  void *pvVar3;
  FComputeVariableRateShadingImageGeneration *pFVar4;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  FRHIComputeShader *pFVar8;
  FRHIBatchedShaderUnbinds *pFVar9;
  TIntVector3<int>_u_0 local_48;
  undefined8 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  uVar1 = *(undefined8 *)((longlong)this + 0x18);
  this_00 = (TShaderRefBase<FComputeVariableRateShadingImageGeneration,FShaderMapPointerTable> *)
            ((longlong)this + 8);
  uVar2 = *(uint *)((longlong)this + 0x20);
  pvVar3 = *(void **)this;
  local_38 = uVar1;
  pFVar7 = FComputeVariableRateShadingImageGeneration::FParameters::FTypeInfo::GetStructMetadata();
  local_48._0_8_ = uVar1;
  local_48._s_0.Z = uVar2;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_48._s_0);
  pFVar8 = TShaderRefBase<FComputeVariableRateShadingImageGeneration,FShaderMapPointerTable>::
           GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar8);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x10);
  ValidateShaderParameters(&local_28,pFVar7,pvVar3);
  ::SetShaderParameters
            (param_2,pFVar8,(FShaderParameterBindings *)this_00->ShaderContent,pFVar7,pvVar3);
  FRHIComputeCommandList::DispatchComputeShader(param_2,(uint)local_38,local_38._4_4_,uVar2);
  pFVar8 = TShaderRefBase<FComputeVariableRateShadingImageGeneration,FShaderMapPointerTable>::
           GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar9 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar9,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar8,pFVar9);
  }
  return;
}

// GetDebugImage @ 145770b70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRDGTexture * __thiscall
FFoveatedImageGenerator::GetDebugImage
          (FFoveatedImageGenerator *this,FRDGBuilder *param_1,FViewInfo *param_2,
          EVRSImageType param_3,bool param_4)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FRDGTexture *pFVar4;
  
  pTVar2 = CVarFoveationPreview.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((pTVar2->ShadowedValue[1] != 0) && (param_3 != Disabled)) {
    return this->CachedImage;
  }
  return (FRDGTexture *)0x0;
}

// GetImage @ 1457713b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRDGTexture * __thiscall
FFoveatedImageGenerator::GetImage
          (FFoveatedImageGenerator *this,FRDGBuilder *param_1,FViewInfo *param_2,
          EVRSImageType param_3,bool param_4)

{
  if (((param_3 != Disabled) && (*(int *)((longlong)&param_2->_padding_ + 4) < 2)) && (!param_4)) {
    return this->CachedImage;
  }
  return (FRDGTexture *)0x0;
}

// GetType @ 145779d00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EVRSSourceType __thiscall FFoveatedImageGenerator::GetType(FFoveatedImageGenerator *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  EVRSSourceType EVar3;
  longlong lVar4;
  
  pTVar1 = CVarGazeTrackedFoveation.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar4 = 4;
      goto LAB_145779d28;
    }
  }
  lVar4 = 0;
LAB_145779d28:
  if (((*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 0) ||
      ((GEngine->EyeTrackingDevice).Object == (IEyeTracker *)0x0)) ||
     (EVar3 = FixedFoveation, (GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0)) {
    EVar3 = EyeTrackedFoveation;
  }
  return EVar3;
}

// IsEnabled @ 1457809b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FFoveatedImageGenerator::IsEnabled(FFoveatedImageGenerator *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarFoveationLevel.Ref;
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
  return 0 < pTVar2->ShadowedValue[1];
}

// IsGazeTrackingEnabled @ 145780a20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FFoveatedImageGenerator::IsGazeTrackingEnabled(FFoveatedImageGenerator *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarGazeTrackedFoveation.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_145780a48;
    }
  }
  lVar3 = 0;
LAB_145780a48:
  if (((*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) &&
      ((GEngine->EyeTrackingDevice).Object != (IEyeTracker *)0x0)) &&
     ((GEngine->StereoRenderingDevice).Object != (IStereoRendering *)0x0)) {
    return true;
  }
  return false;
}

// IsSupportedByView @ 145780db0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FFoveatedImageGenerator::IsSupportedByView(FFoveatedImageGenerator *this,FSceneView *param_1)

{
  return true;
}

// PrepareImages @ 145781c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FFoveatedImageGenerator::PrepareImages
          (FFoveatedImageGenerator *this,FRDGBuilder *param_1,FSceneViewFamily *param_2,
          FMinimalSceneTextures *param_3,bool param_4,bool param_5)

{
  int *piVar1;
  uchar *puVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  IEyeTracker *pIVar5;
  IXRTrackingSystem *pIVar6;
  IStereoRendering *pIVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  TConsoleVariableData<int> *pTVar14;
  TConsoleVariableData<int> *pTVar15;
  UEngine *pUVar16;
  bool bVar17;
  char cVar18;
  ERDGPassFlags EVar19;
  uint uVar20;
  int iVar21;
  FRDGTexture *pFVar22;
  undefined8 *puVar23;
  FRDGTextureUAV *pFVar24;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar25;
  FName this_01;
  FRDGEventName *this_02;
  FShaderParametersMetadata *pFVar26;
  wchar_t *pwVar27;
  FRDGPass *this_03;
  uint uVar28;
  double dVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auStackY_3c8 [32];
  undefined8 *local_368;
  float local_360;
  float fStack_35c;
  FRDGTextureUAVDesc local_358;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_340;
  uchar *local_330;
  FShader *pFStack_328;
  FShaderMapBase *local_320;
  int iStack_318;
  int iStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  float local_2c0;
  undefined2 local_2bc;
  undefined8 local_2b8;
  FRDGParameterStruct local_2a8 [2];
  undefined8 local_278;
  double local_270;
  undefined1 local_268 [16];
  FString local_258;
  FRDGEventName local_248 [2];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [80];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  ulonglong local_e8;
  undefined8 *puVar29;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  puVar29 = (undefined8 *)0x0;
  uVar28 = 0;
  if (!param_4) {
    return;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), uVar12 = _UNK_151013468,
     uVar11 = ___xmm_3eb333333f0000003f3333333f800000, ::_TSS0 == -1)) {
    local_208 = 0x3eb33333;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&kFoveationFullRateCutoffs.AllocatorInstance,5,
               &kFoveationFullRateCutoffs.ArrayMax);
    FVar13 = kFoveationFullRateCutoffs.AllocatorInstance;
    local_218 = uVar11;
    uStack_210 = uVar12;
    *(undefined8 *)kFoveationFullRateCutoffs.AllocatorInstance.Data = uVar11;
    *(undefined8 *)(FVar13.Data + 8) = uVar12;
    *(undefined4 *)(FVar13.Data + 0x10) = local_208;
    atexit(`FFoveatedImageGenerator::PrepareImages'::__l2::
           _dynamic_atexit_destructor_for__kFoveationFullRateCutoffs__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), uVar12 = _UNK_151013488,
     uVar11 = ___xmm_3f0ccccd3f4000003f6666663f800000, ::_TSS1 == -1)) {
    local_1f0 = 0x3f0ccccd;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&kFoveationHalfRateCutoffs.AllocatorInstance,5,
               &kFoveationHalfRateCutoffs.ArrayMax);
    FVar13 = kFoveationHalfRateCutoffs.AllocatorInstance;
    local_200 = uVar11;
    uStack_1f8 = uVar12;
    *(undefined8 *)kFoveationHalfRateCutoffs.AllocatorInstance.Data = uVar11;
    *(undefined8 *)(FVar13.Data + 8) = uVar12;
    *(undefined4 *)(FVar13.Data + 0x10) = local_1f0;
    atexit(`FFoveatedImageGenerator::PrepareImages'::__l2::
           _dynamic_atexit_destructor_for__kFoveationHalfRateCutoffs__);
    _Init_thread_footer(&::_TSS1);
  }
  fVar32 = __real_3f000000;
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS2) &&
     (_Init_thread_header(&::_TSS2), uVar12 = _UNK_150689628,
     uVar11 = ___xmm_3f0000003f0000003f0000003f000000, ::_TSS2 == -1)) {
    local_1d8 = 0x3f000000;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&kFixedFoveationCenterX.AllocatorInstance,5,&kFixedFoveationCenterX.ArrayMax)
    ;
    FVar13 = kFixedFoveationCenterX.AllocatorInstance;
    local_1e8 = uVar11;
    uStack_1e0 = uVar12;
    *(undefined8 *)kFixedFoveationCenterX.AllocatorInstance.Data = uVar11;
    *(undefined8 *)(FVar13.Data + 8) = uVar12;
    *(undefined4 *)(FVar13.Data + 0x10) = local_1d8;
    atexit(`FFoveatedImageGenerator::PrepareImages'::__l2::
           _dynamic_atexit_destructor_for__kFixedFoveationCenterX__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS3) &&
     (_Init_thread_header(&::_TSS3), uVar12 = _UNK_150689628,
     uVar11 = ___xmm_3f0000003f0000003f0000003f000000, ::_TSS3 == -1)) {
    local_1c0 = 0x3ed70a3d;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&kFixedFoveationCenterY.AllocatorInstance,5,&kFixedFoveationCenterY.ArrayMax)
    ;
    FVar13 = kFixedFoveationCenterY.AllocatorInstance;
    local_1d0 = uVar11;
    uStack_1c8 = uVar12;
    *(undefined8 *)kFixedFoveationCenterY.AllocatorInstance.Data = uVar11;
    *(undefined8 *)(FVar13.Data + 8) = uVar12;
    *(undefined4 *)(FVar13.Data + 0x10) = local_1c0;
    atexit(`FFoveatedImageGenerator::PrepareImages'::__l2::
           _dynamic_atexit_destructor_for__kFixedFoveationCenterY__);
    _Init_thread_footer(&::_TSS3);
  }
  pTVar14 = CVarFoveationLevel.Ref;
  bVar17 = IsInParallelGameThread();
  if (bVar17) {
LAB_145781d77:
    puVar23 = puVar29;
  }
  else {
    bVar17 = IsInGameThread();
    puVar23 = (undefined8 *)&DAT_00000004;
    if (bVar17) goto LAB_145781d77;
  }
  pTVar15 = CVarDynamicFoveation.Ref;
  fVar40 = __real_3f800000;
  uVar20 = 4;
  if (*(int *)((longlong)puVar23 + (longlong)pTVar14) < 4) {
    uVar20 = *(uint *)((longlong)puVar23 + (longlong)pTVar14);
  }
  uVar43 = uVar28;
  if (0 < (int)uVar20) {
    uVar43 = uVar20;
  }
  bVar17 = IsInParallelGameThread();
  if ((bVar17) || (bVar17 = IsInGameThread(), puVar23 = (undefined8 *)&DAT_00000004, bVar17)) {
    puVar23 = puVar29;
  }
  dVar10 = __real_3fe0000000000000;
  if (*(int *)((longlong)puVar23 + (longlong)pTVar15) == 0) {
    if ((int)uVar43 < 1) goto LAB_1457829df;
  }
  else {
    if ((int)uVar43 < 1) goto LAB_1457829df;
    if (GFrameNumber != (this->DynamicVRSData).LastUpdateFrame) {
      (this->DynamicVRSData).LastUpdateFrame = GFrameNumber;
      uVar20 = RHIGetGPUFrameCycles(0);
      dVar9 = __real_3fb999999999999a;
      iVar21 = (this->DynamicVRSData).NumFramesStored;
      dVar33 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 *
                              (double)uVar20);
      if (iVar21 < 10) {
        (this->DynamicVRSData).NumFramesStored = iVar21 + 1;
        (this->DynamicVRSData).SumBusyTime = dVar33 + (this->DynamicVRSData).SumBusyTime;
        if (iVar21 + 1 == 10) {
LAB_145781e5e:
          dVar9 = (this->DynamicVRSData).SumBusyTime * dVar9;
          bVar17 = IsMobilePlatform((FStaticShaderPlatform)
                                    GRHIGlobals.ShaderPlatformForFeatureLevel
                                    [(int)GMaxRHIFeatureLevel]);
          dVar33 = __real_4029000000000000;
          if (bVar17) {
            dVar33 = __real_4030a8f5c28f5c29;
          }
          fVar31 = (this->DynamicVRSData).VRSAmount;
          if ((dVar9 <= dVar33 + dVar10) || (fVar40 <= fVar31)) {
            if ((dVar33 - dVar10 <= dVar9) || (fVar31 <= 0.0)) goto LAB_145781ee8;
            fVar31 = fVar31 - __real_3dcccccd;
          }
          else {
            fVar31 = fVar31 + __real_3dcccccd;
          }
          if (fVar40 <= fVar31) {
            fVar31 = fVar40;
          }
          (this->DynamicVRSData).NumFramesStored = 0;
          (this->DynamicVRSData).SumBusyTime = 0.0;
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
          }
          (this->DynamicVRSData).VRSAmount = fVar31;
        }
      }
      else if (iVar21 == 10) {
        dVar30 = (this->DynamicVRSData).SumBusyTime;
        (this->DynamicVRSData).SumBusyTime = (dVar30 - dVar30 * __real_3fb999999999999a) + dVar33;
        goto LAB_145781e5e;
      }
    }
LAB_145781ee8:
    fVar40 = (this->DynamicVRSData).VRSAmount;
  }
  if (0.0 < fVar40) {
    uVar20 = uVar28;
    if ((int)uVar43 < kFoveationFullRateCutoffs.ArrayNum) {
      uVar20 = ~uVar43 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar13.Data = kFoveationFullRateCutoffs.AllocatorInstance.Data;
    if ((kFoveationFullRateCutoffs.ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar20 = uVar28;
    if ((int)uVar43 < kFoveationHalfRateCutoffs.ArrayNum) {
      uVar20 = ~uVar43 >> 0x1f;
    }
    fVar31 = (*(float *)(FVar13.Data + (longlong)(int)uVar43 * 4) -
             *(float *)kFoveationFullRateCutoffs.AllocatorInstance.Data) * fVar40 +
             *(float *)kFoveationFullRateCutoffs.AllocatorInstance.Data;
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar13.Data = kFoveationHalfRateCutoffs.AllocatorInstance.Data;
    if ((kFoveationHalfRateCutoffs.ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar40 = (*(float *)(FVar13.Data + (longlong)(int)uVar43 * 4) -
             *(float *)kFoveationHalfRateCutoffs.AllocatorInstance.Data) * fVar40 +
             *(float *)kFoveationHalfRateCutoffs.AllocatorInstance.Data;
    uVar20 = 0;
    if ((int)uVar43 < kFixedFoveationCenterX.ArrayNum) {
      uVar20 = ~uVar43 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar37 = *(float *)(kFixedFoveationCenterX.AllocatorInstance.Data + (longlong)(int)uVar43 * 4);
    uVar20 = 0;
    if ((int)uVar43 < kFixedFoveationCenterY.ArrayNum) {
      uVar20 = ~uVar43 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar35 = *(float *)(kFixedFoveationCenterY.AllocatorInstance.Data + (longlong)(int)uVar43 * 4);
    bVar17 = IsGazeTrackingEnabled(this);
    if (bVar17) {
      pTVar4 = (GEngine->EyeTrackingDevice).SharedReferenceCount.ReferenceController;
      pIVar5 = (GEngine->EyeTrackingDevice).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2c0 = 0.0;
      local_308 = 0;
      uStack_300 = 0;
      local_2f8 = 0;
      dStack_2f0 = 0.0;
      local_2c8 = 0;
      local_2e8 = 0.0;
      dStack_2e0 = 0.0;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2bc = 0;
      local_2b8 = 0;
      if ((pIVar5 == (IEyeTracker *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      cVar18 = (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_308);
      pUVar16 = GEngine;
      if ((cVar18 != '\0') && (fVar32 < local_2c0)) {
        if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pIVar6 = (pUVar16->XRSystem).Object;
        (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6,0);
        pUVar16 = GEngine;
        uVar20 = (uint)__xmm_80000000000000008000000000000000;
        uVar38 = (uint)local_2a8[1].Metadata ^ uVar20;
        uVar43 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar39 = (uint)((ulonglong)local_2a8[1].Metadata >> 0x20) ^ uVar43;
        uVar41 = (uint)local_278 ^ uVar20;
        uVar42 = (uint)((ulonglong)local_278 >> 0x20) ^ uVar43;
        uVar20 = (uint)local_2a8[1].Layout.Reference ^ uVar20;
        uVar43 = (uint)((ulonglong)local_2a8[1].Layout.Reference >> 0x20) ^ uVar43;
        dVar9 = (double)CONCAT44(uVar39,uVar38) * dStack_2e0 -
                (double)CONCAT44(uVar42,uVar41) * local_2e8;
        dVar9 = dVar9 + dVar9;
        dVar36 = (double)CONCAT44(uVar42,uVar41) * dStack_2f0 -
                 (double)CONCAT44(uVar43,uVar20) * dStack_2e0;
        dVar36 = dVar36 + dVar36;
        dVar34 = (double)CONCAT44(uVar43,uVar20) * local_2e8 -
                 (double)CONCAT44(uVar39,uVar38) * dStack_2f0;
        dVar34 = dVar34 + dVar34;
        dVar30 = ((double)CONCAT44(uVar39,uVar38) * dVar34 -
                 (double)CONCAT44(uVar42,uVar41) * dVar36) + local_270 * dVar9 + dStack_2f0;
        dVar33 = ((double)CONCAT44(uVar43,uVar20) * dVar36 - (double)CONCAT44(uVar39,uVar38) * dVar9
                 ) + local_270 * dVar34 + dStack_2e0;
        dVar9 = ((double)CONCAT44(uVar42,uVar41) * dVar9 - (double)CONCAT44(uVar43,uVar20) * dVar34)
                + local_270 * dVar36 + local_2e8;
        if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pIVar7 = (pUVar16->StereoRenderingDevice).Object;
        (**(code **)((longlong)*pIVar7 + 0x60))(pIVar7,&local_168);
        fVar37 = (float)((dVar33 * local_160 + dVar9 * local_168 + dVar30 * local_158 +
                          local_150 * 0.0 + __real_3ff0000000000000) * dVar10);
        fVar35 = (float)(dVar10 - (dVar33 * local_140 + dVar9 * local_148 + dVar30 * local_138 +
                                  local_130 * 0.0) * dVar10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    if (((0x38 < GRHIGlobals.VariableRateShading.ImageTileMinWidth - 8U) ||
        (0x38 < GRHIGlobals.VariableRateShading.ImageTileMinHeight - 8U)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("GRHIGlobals.VariableRateShading.ImageTileMinWidth >= 8 && GRHIGlobals.VariableRateShading.ImageTileMinWidth <= 64 && GRHIGlobals.VariableRateShading.ImageTileMinHeight >= 8 && GRHIGlobals.VariableRateShading.ImageTileMinHeight <= 64"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\FoveatedImageGenerator.cpp"
                            ,199,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVariableRateShadingImageManager::GetSRIDesc((FRDGTextureDesc *)local_1b8,param_2,false);
    pFVar22 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)local_1b8,L"FoveatedShadingRateTexture",None);
    puVar23 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
    if (puVar23 == (undefined8 *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      puVar23[2] = 0;
      *puVar23 = &
                 ___7__TObject_VFParameters_FComputeVariableRateShadingImageGeneration___FRDGAllocator__6B_
      ;
      puVar29 = puVar23;
    }
    local_368 = puVar29;
    if ((((undefined8 **)param_1->_padding_ <= &local_368) &&
        (&local_368 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar21 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar21 == *piVar1) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    puVar2 = (uchar *)(puVar29 + 2);
    *(int *)&param_1->_padding_ = iVar21 + 1;
    local_358._padding_._1_1_ = 0;
    local_358._padding_._2_4_ = 0;
    local_358._padding_._6_1_ = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar21 * 8) = local_368;
    local_358._padding_._0_1_ = (pFVar22->Desc).field_0x34;
    local_358._padding_._0_1_ = 0;
    local_358.Texture = pFVar22;
    pFVar24 = FRDGBuilder::CreateUAV(param_1,&local_358,None);
    *(FRDGTextureUAV **)puVar2 = pFVar24;
    ((TVector2<float>_u_0 *)(puVar29 + 3))->_s_0 =
         (TVector2<float>_u_0_s_0)HMDFieldOfView.field0_0x0;
    *(float *)((longlong)puVar29 + 0x34) = fVar31 * fVar31;
    fVar32 = __real_40000000;
    if (GRHIGlobals.VariableRateShading.SupportsLargerSizes != false) {
      fVar32 = fVar40 * fVar40;
    }
    *(float *)(puVar29 + 7) = fVar32;
    local_360 = (float)(int)local_1b8._36_4_ * fVar37;
    fStack_35c = (float)(int)local_1b8._40_4_ * fVar35;
    puVar29[4] = CONCAT44(fStack_35c,local_360);
    puVar29[5] = CONCAT44(fStack_35c,local_360);
    if (((param_2->Views).ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar17 = IStereoRendering::IsStereoEyeView
                       (*(FSceneView **)(param_2->Views).AllocatorInstance.Data);
    if (bVar17) {
      uVar28 = 3;
      fVar32 = *(float *)(puVar29 + 4) / (float)(param_2->Views).ArrayNum;
      *(float *)(puVar29 + 4) = fVar32;
      *(float *)(puVar29 + 5) = (float)((int)local_1b8._36_4_ / (param_2->Views).ArrayNum) + fVar32;
    }
    iVar21 = (param_2->Views).ArrayNum;
    *(uint *)((longlong)puVar29 + 0x3c) = uVar28;
    fVar32 = (float)((int)local_1b8._36_4_ / iVar21);
    *(float *)(puVar29 + 6) =
         (fVar32 * fVar32 + (float)(int)local_1b8._40_4_ * (float)(int)local_1b8._40_4_) *
         __real_3e800000;
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar25 = (FShaderType *)FComputeVariableRateShadingImageGeneration::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_340,pFVar25,0);
    if (local_340.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_268);
      ::FName::ToString((FName *)this_01,&local_258);
      FComputeVariableRateShadingImageGeneration::GetStaticType();
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FComputeVariableRateShadingImageGeneration::GetStaticType();
    pFStack_328 = local_340.ShaderContent;
    local_320 = local_340.ShaderMap;
    local_310 = 1;
    iStack_318 = (int)(local_1b8._36_4_ + 7 + (local_1b8._36_4_ + 7 >> 0x1f & 7U)) >> 3;
    iStack_314 = (int)(local_1b8._40_4_ + 7 + (local_1b8._40_4_ + 7 >> 0x1f & 7U)) >> 3;
    local_330 = puVar2;
    this_02 = FRDGEventName::FRDGEventName(local_248,1,L"GenerateFoveatedVRSImage");
    pFVar26 = FComputeVariableRateShadingImageGeneration::FParameters::FTypeInfo::GetStructMetadata
                        ();
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,puVar2,pFVar26,this_02,Compute);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar27 = FRDGEventName::GetTCHAR(this_02);
    EVar19 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Compute);
    this_03 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
    local_2a8[0].Contents = puVar2;
    if (((pFVar26->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_2a8[0].Layout.Reference = (pFVar26->Layout).Reference;
    if (local_2a8[0].Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_2a8[0].Layout.Reference);
    }
    local_2a8[0].Metadata = pFVar26;
    FRDGPass::FRDGPass(this_03,this_02,local_2a8,EVar19,Async);
    this_03->_padding_ =
         (longlong)
         &TRDGLambdaPass<FComputeVariableRateShadingImageGeneration::FParameters,`FFoveatedImageGenerator::PrepareImages'::`2'::<lambda_1>_>
          ::_vftable_;
    this_03[1]._padding_ = (longlong)local_330;
    this_03[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_328;
    *(uchar **)&this_03[1].Name.FormattedEventName.Data.ArrayNum = puVar2;
    *(FShaderMapBase **)&this_03[1].FullPathIfDebug.Data.ArrayNum = local_320;
    this_03[1].Name.EventFormat = (wchar_t *)CONCAT44(iStack_314,iStack_318);
    this_03[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)CONCAT44(uStack_30c,local_310);
    FRDGBuilder::ClobberPassOutputs(param_1,this_03);
    iVar21 = (param_1->Passes).Array.ArrayNum;
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    if (iVar21 == *piVar1) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar21 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar21] = this_03;
    (this_03->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(param_1,this_03);
    if (local_248[0].FormattedEventName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248[0].FormattedEventName.Data.AllocatorInstance.Data);
    }
    this->CachedImage = pFVar22;
    if ((void *)local_1b8._64_8_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1b8._64_8_);
    return;
  }
LAB_1457829df:
  this->CachedImage = (FRDGTexture *)0x0;
  return;
}

// UpdateDynamicVRSAmount @ 145794360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

float __thiscall FFoveatedImageGenerator::UpdateDynamicVRSAmount(FFoveatedImageGenerator *this)

{
  int iVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  if (GFrameNumber == (this->DynamicVRSData).LastUpdateFrame) {
    return (this->DynamicVRSData).VRSAmount;
  }
  (this->DynamicVRSData).LastUpdateFrame = GFrameNumber;
  uVar5 = RHIGetGPUFrameCycles(0);
  dVar3 = __real_3fb999999999999a;
  iVar1 = (this->DynamicVRSData).NumFramesStored;
  dVar7 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000 *
                         (double)uVar5);
  if (iVar1 < 10) {
    dVar7 = dVar7 + (this->DynamicVRSData).SumBusyTime;
    (this->DynamicVRSData).NumFramesStored = iVar1 + 1;
    (this->DynamicVRSData).SumBusyTime = dVar7;
    if (iVar1 + 1 == 10) {
LAB_1457943fe:
      bVar4 = IsMobilePlatform((FStaticShaderPlatform)
                               GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
      fVar2 = __real_3f800000;
      dVar8 = __real_4029000000000000;
      if (bVar4) {
        dVar8 = __real_4030a8f5c28f5c29;
      }
      if ((dVar8 + __real_3fe0000000000000 < dVar7 * dVar3) &&
         (fVar6 = (this->DynamicVRSData).VRSAmount, fVar6 < __real_3f800000)) {
        fVar6 = fVar6 + __real_3dcccccd;
        (this->DynamicVRSData).SumBusyTime = 0.0;
        (this->DynamicVRSData).NumFramesStored = 0;
        if (fVar2 <= fVar6) {
          fVar6 = fVar2;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        (this->DynamicVRSData).VRSAmount = fVar6;
        return fVar6;
      }
      fVar6 = (this->DynamicVRSData).VRSAmount;
      if (dVar8 - __real_3fe0000000000000 <= dVar7 * dVar3) {
        return fVar6;
      }
      if (fVar6 <= 0.0) {
        return fVar6;
      }
      fVar6 = fVar6 - __real_3dcccccd;
      (this->DynamicVRSData).SumBusyTime = 0.0;
      (this->DynamicVRSData).NumFramesStored = 0;
      if (fVar2 <= fVar6) {
        fVar6 = fVar2;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      (this->DynamicVRSData).VRSAmount = fVar6;
      return fVar6;
    }
  }
  else if (iVar1 == 10) {
    dVar8 = (this->DynamicVRSData).SumBusyTime;
    dVar7 = (dVar8 - dVar8 * __real_3fb999999999999a) + dVar7;
    (this->DynamicVRSData).SumBusyTime = dVar7;
    goto LAB_1457943fe;
  }
  return (this->DynamicVRSData).VRSAmount;
}

