// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 12

// StaticClass @ 14ddafe10

UClass * __cdecl UMoviePipelineWidgetRenderer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineWidgetRenderer",
               &Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton,
               StaticRegisterNativesUMoviePipelineWidgetRenderer,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineWidgetRenderer>,
               InternalVTableHelperCtorCaller<UMoviePipelineWidgetRenderer>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton;
}

// UMoviePipelineWidgetRenderer @ 14ddb19d0

UMoviePipelineWidgetRenderer * __thiscall
UMoviePipelineWidgetRenderer::UMoviePipelineWidgetRenderer
          (UMoviePipelineWidgetRenderer *this,FVTableHelper *param_1)

{
  UMoviePipelineRenderPass::UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineWidgetRenderer__6B_;
  (this->WidgetRenderer).Object = (FWidgetRenderer *)0x0;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  return this;
}

// ~UMoviePipelineWidgetRenderer @ 14ddb1d20

void __thiscall
UMoviePipelineWidgetRenderer::~UMoviePipelineWidgetRenderer(UMoviePipelineWidgetRenderer *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineWidgetRenderer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  UMoviePipelineRenderPass::~UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this);
  return;
}

// operator() @ 14ddb20e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FImagePixelDataPayload *pFVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  TImagePixelData<FColor> *this_00;
  TImagePixelData<FColor> *pTVar9;
  ForAnyElementType FVar10;
  TIntPoint<int>_u_0 local_res8;
  TImagePixelData<FColor> *local_res18;
  undefined1 local_res20 [8];
  TArray<FColor,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  int local_e0;
  int iStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined2 local_c8;
  ushort uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  TSharedRef<FImagePixelDataPayload,1> local_b8;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_a8;
  TIntRect<int>_u_0 local_90;
  FReadSurfaceDataFlags local_78;
  undefined1 local_58 [16];
  TSharedPtr<IImagePixelDataPayload,1> local_48;
  
  lVar6 = (**(code **)(**(longlong **)((longlong)this + 0x2c0) + 0x28))
                    (*(longlong **)((longlong)this + 0x2c0),local_res20);
  pTVar9 = (TImagePixelData<FColor> *)0x0;
  local_e8 = 0;
  iVar1 = *(int *)(lVar6 + 4);
  piVar7 = (int *)(**(code **)(**(longlong **)((longlong)this + 0x2c0) + 0x28))
                            (*(longlong **)((longlong)this + 0x2c0),local_58);
  iVar2 = *piVar7;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e0 = iVar2;
  iStack_dc = iVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNum(&local_f8,iVar2 * iVar1,Default);
  local_90._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_90._12_4_ = iStack_dc;
  local_90._8_4_ = local_e0;
  local_d8 = 6;
  uStack_d4 = 3;
  uStack_cc = 0x467a0000;
  uStack_d0 = uStack_d0 & 0xffffff00;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_78._16_8_ = (ulonglong)uStack_c6 << 0x10;
  local_78.CubeFace = CubeFace_MAX;
  local_78.CompressionMode = RCM_MinMax;
  local_78._8_4_ = uStack_d0;
  local_78.MaxDepthRange = 16000.0;
  local_78.GPUIndex = 0;
  puVar8 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 0x2c0) + 0x10))();
  FRHICommandListImmediate::ReadSurfaceData
            (param_1,(FRHITexture *)*puVar8,(TIntRect<int> *)&local_90._s_0,&local_f8,&local_78);
  MakeShared<FImagePixelDataPayload,1>(&local_b8);
  pFVar4 = local_b8.Object;
  ::FString::operator=
            (&((local_b8.Object)->PassIdentifier).Name,(FString *)((longlong)this + 0x298));
  ::FString::operator=(&(pFVar4->PassIdentifier).CameraName,(FString *)((longlong)this + 0x2a8));
  FMoviePipelineRenderPassMetrics::operator=(&pFVar4->SampleState,this);
  FVar10.Data = local_f8.AllocatorInstance.Data;
  pFVar4->bRequireTransparentOutput = true;
  pFVar4->SortingOrder = 3;
  pFVar4->bCompositeToFinalImage = *(bool *)((longlong)this + 0x2b8);
  local_a8.ArrayNum = (long64)local_f8.ArrayNum;
  local_a8.ArrayMax = (long64)local_f8.ArrayMax;
  local_a8.AllocatorInstance.Data = local_f8.AllocatorInstance.Data;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_res8._s_0.X = iVar2;
  local_res8._s_0.Y = iVar1;
  this_00 = ::operator_new(0x40);
  if (this_00 != (TImagePixelData<FColor> *)0x0) {
    local_48.Object = (IImagePixelDataPayload *)local_b8.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = TImagePixelData<FColor>::TImagePixelData<FColor>
                       (this_00,(TIntPoint<int> *)&local_res8._s_0,&local_a8,&local_48);
    FVar10.Data = local_a8.AllocatorInstance.Data;
  }
  local_res18 = pTVar9;
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (*(longlong *)((longlong)this + 0x2c8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(**(longlong **)((longlong)this + 0x2c8) + 8))
            (*(longlong **)((longlong)this + 0x2c8),&local_res18);
  if (local_res18 != (TImagePixelData<FColor> *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// GatherOutputPassesImpl @ 14ddb38b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineWidgetRenderer::GatherOutputPassesImpl
          (UMoviePipelineWidgetRenderer *this,
          TArray<FMoviePipelinePassIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  UMoviePipelineExecutorShot *pUVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  FScriptContainerElement *_Src_00;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  UMoviePipeline *pUVar10;
  UMoviePipeline *pUVar11;
  UMoviePipelinePrimaryConfig *pUVar12;
  UMoviePipelineSetting *pUVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  UClass *local_res20;
  ForAnyElementType local_70;
  undefined8 local_68;
  FString local_60;
  FScriptContainerElement *local_50;
  ulonglong local_48;
  
  pUVar10 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  iVar17 = 0;
  uVar2 = pUVar11->CurrentShotIndex;
  uVar7 = 0;
  if ((int)uVar2 < (pUVar10->ActiveShotList).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar4 = *(UMoviePipelineExecutorShot **)
            ((pUVar10->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
  pUVar10 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar12 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar10);
  local_res20 = Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar13 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_res20,pUVar12,pUVar4);
  if ((char)pUVar13[1]._padding_ == '\0') {
    iVar8 = 1;
  }
  else {
    iVar8 = (pUVar4->SidecarCameras).ArrayNum;
  }
  if (0 < iVar8) {
    do {
      piVar15 = &param_1->ArrayMax;
      local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Data.ArrayNum = 0;
      local_60.Data.ArrayMax = 0;
      local_50 = (void *)0x0;
      local_48 = 0;
      ::FString::operator=(&local_60,L"ViewportUI");
      iVar9 = -1;
      if ((char)pUVar13[1]._padding_ != '\0') {
        iVar9 = iVar17;
      }
      if ((iVar9 < 0) || ((pUVar4->SidecarCameras).ArrayNum <= iVar9)) {
        iVar3 = (pUVar4->InnerName).Data.ArrayNum;
        pFVar14 = (pUVar4->InnerName).Data.AllocatorInstance.Data;
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (iVar3 != 0) goto LAB_14ddb3a5b;
LAB_14ddb3b8b:
        local_70.Data = (FScriptContainerElement *)0x0;
        local_68 = local_68 & 0xffffffff;
      }
      else {
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = (pUVar4->SidecarCameras).AllocatorInstance.Data;
        iVar3 = *(int *)(pFVar14 + (longlong)iVar9 * 0x28 + 0x20);
        pFVar14 = *(FScriptContainerElement **)(pFVar14 + (longlong)iVar9 * 0x28 + 0x18);
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (iVar3 == 0) goto LAB_14ddb3b8b;
LAB_14ddb3a5b:
        local_70.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,0,&local_70,iVar3,(int *)((longlong)&local_68 + 4));
        memcpy(local_70.Data,pFVar14,(longlong)iVar3 * 2);
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      local_50 = local_70.Data;
      local_48 = local_68;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      if (((pFVar14 <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 < pFVar14 + (longlong)*piVar15 * 0x20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar15) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_1->AllocatorInstance,piVar15);
      }
      _Src.Data = local_60.Data.AllocatorInstance.Data;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)&pFVar14->field_0x0 = 0;
      lVar16 = (longlong)local_60.Data.ArrayNum;
      *(int *)&pFVar14[8].field_0x0 = local_60.Data.ArrayNum;
      if (local_60.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_60.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,local_60.Data.ArrayNum,
                   (int *)(pFVar14 + 0xc));
        memcpy(*(void **)&pFVar14->field_0x0,_Src.Data,lVar16 * 2);
      }
      _Src_00 = local_50;
      pFVar1 = pFVar14 + 0x10;
      *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
      lVar16 = (longlong)(int)local_48;
      *(int *)&pFVar14[0x18].field_0x0 = (int)local_48;
      if ((int)local_48 == 0) {
        *(int *)(pFVar14 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_48,0,(ForAnyElementType *)pFVar1,(int)local_48,
                   (int *)(pFVar14 + 0x1c));
        memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,_Src_00,lVar16 * 2);
      }
      if (local_50 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar8);
  }
  return;
}

// GetPrivateStaticClass @ 14ddb43a0

UClass * __cdecl UMoviePipelineWidgetRenderer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineWidgetRenderer",
               &Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton,
               StaticRegisterNativesUMoviePipelineWidgetRenderer,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineWidgetRenderer>,
               InternalVTableHelperCtorCaller<UMoviePipelineWidgetRenderer>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.InnerSingleton;
}

// IsValidOnPrimary @ 14ddb4500

bool __thiscall UMoviePipelineWidgetRenderer::IsValidOnPrimary(UMoviePipelineWidgetRenderer *this)

{
  return true;
}

// IsValidOnShots @ 14ddb4530

bool __thiscall UMoviePipelineWidgetRenderer::IsValidOnShots(UMoviePipelineWidgetRenderer *this)

{
  return true;
}

// RenderSample_GameThreadImpl @ 14ddb5620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl
          (UMoviePipelineWidgetRenderer *this,FMoviePipelineRenderPassMetrics *param_1)

{
  undefined4 uVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  UGameViewportClient *pUVar6;
  UTextureRenderTarget2D *pUVar7;
  FWidgetRenderer *this_00;
  TReferenceControllerBase<1> *pTVar8;
  FMoviePipelineOutputMerger *pFVar9;
  IGameLayerManager *pIVar10;
  code *pcVar11;
  atomic<int> aVar12;
  float fVar13;
  ForAnyElementType _Src;
  UMoviePipelineCameraSetting *pUVar14;
  bool bVar15;
  uint uVar16;
  atomic<int> aVar17;
  UMoviePipeline *pUVar18;
  UMoviePipeline *pUVar19;
  FTextureRenderTargetResource *pFVar20;
  UWorld *this_01;
  ULocalPlayer *pUVar21;
  code **ppcVar22;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar23;
  int iVar24;
  SWidget *pSVar25;
  longlong lVar26;
  ulonglong uVar27;
  TReferenceControllerBase<1> *pTVar28;
  UMoviePipelineExecutorShot *pUVar29;
  FScriptContainerElement *pFVar30;
  FRenderTarget *pFVar31;
  undefined1 auStackY_488 [32];
  ForAnyElementType local_448;
  undefined8 local_440;
  int local_438;
  int local_434;
  FString local_430;
  FScriptContainerElement *local_420;
  ulonglong local_418;
  FMoviePipelineRenderPassMetrics *local_410;
  UMoviePipelineWidgetRenderer *local_408;
  UMoviePipelineExecutorShot *local_400;
  UMoviePipelineCameraSetting *local_3f8;
  TSharedRef<SWidget,1> local_3f0;
  TVector2<double>_u_0 local_3d8;
  code *local_3c8 [2];
  code *local_3b8 [3];
  code **local_3a0;
  undefined1 local_398 [40];
  code **local_370;
  byte local_368;
  FMoviePipelineRenderPassMetrics local_358;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  FRenderTarget *local_98;
  FMoviePipelineOutputMerger *local_90;
  TReferenceControllerBase<1> *local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_488;
  if (param_1->bDiscardResult == false) {
    if ((((param_1->TileIndexes).field0_0x0._s_0.Y * (param_1->TileCounts).field0_0x0._s_0.Y +
          (param_1->TileIndexes).field0_0x0._s_0.X == 0) &&
        (param_1->SpatialSampleIndex == param_1->SpatialSampleCount + -1)) &&
       (param_1->TemporalSampleIndex == param_1->TemporalSampleCount + -1)) {
      local_410 = param_1;
      local_408 = this;
      pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      uVar4 = pUVar19->CurrentShotIndex;
      uVar16 = 0;
      if ((int)uVar4 < (pUVar18->ActiveShotList).ArrayNum) {
        uVar16 = ~uVar4 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pUVar29 = *(UMoviePipelineExecutorShot **)
                 ((pUVar18->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
      local_400 = pUVar29;
      pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      local_3f8 = UMoviePipeline::FindOrAddSettingForShot<UMoviePipelineCameraSetting>
                            (pUVar18,pUVar29);
      fVar13 = __real_3f800000;
      if (local_3f8->bRenderAllCameras == false) {
        local_434 = 1;
      }
      else {
        local_434 = (pUVar29->SidecarCameras).ArrayNum;
      }
      local_438 = 0;
      if (0 < local_434) {
        do {
          pUVar14 = local_3f8;
          iVar5 = local_438;
          local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_430.Data.ArrayNum = 0;
          local_430.Data.ArrayMax = 0;
          local_420 = (void *)0x0;
          local_418 = 0;
          ::FString::operator=(&local_430,L"ViewportUI");
          iVar24 = -1;
          if (pUVar14->bRenderAllCameras != false) {
            iVar24 = iVar5;
          }
          if ((iVar24 < 0) || ((pUVar29->SidecarCameras).ArrayNum <= iVar24)) {
            iVar5 = (pUVar29->InnerName).Data.ArrayNum;
            pFVar30 = (pUVar29->InnerName).Data.AllocatorInstance.Data;
            local_440 = CONCAT44(local_440._4_4_,iVar5);
            if (iVar5 != 0) goto LAB_14ddb5833;
LAB_14ddb5a79:
            local_448.Data = (FScriptContainerElement *)0x0;
            local_440 = local_440 & 0xffffffff;
          }
          else {
            if ((iVar24 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar30 = (pUVar29->SidecarCameras).AllocatorInstance.Data;
            iVar5 = *(int *)(pFVar30 + (longlong)iVar24 * 0x28 + 0x20);
            pFVar30 = *(FScriptContainerElement **)(pFVar30 + (longlong)iVar24 * 0x28 + 0x18);
            local_440 = CONCAT44(local_440._4_4_,iVar5);
            if (iVar5 == 0) goto LAB_14ddb5a79;
LAB_14ddb5833:
            local_448.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar5,0,&local_448,iVar5,(int *)((longlong)&local_440 + 4));
            memcpy(local_448.Data,pFVar30,(longlong)iVar5 * 2);
          }
          if (local_420 != (void *)0x0) {
            FMemory::Free(local_420);
          }
          local_420 = local_448.Data;
          local_418 = local_440;
          local_440 = 0;
          local_448.Data = (FScriptContainerElement *)0x0;
          pFVar20 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                              ((UTextureRenderTarget *)(this->RenderTarget).field0_0x0.DebugPtr);
          pFVar31 = (FRenderTarget *)&pFVar20->_padding_;
          if (pFVar20 == (FTextureRenderTargetResource *)0x0) {
            pFVar31 = (FRenderTarget *)0x0;
          }
          this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          pUVar21 = UWorld::GetFirstLocalPlayerFromController(this_01);
          pUVar6 = (pUVar21->ViewportClient).field0_0x0.DebugPtr;
          pTVar28 = (pUVar6->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
          if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ddb5905:
            pSVar25 = (SWidget *)0x0;
          }
          else {
            aVar12 = pTVar28->SharedReferenceCount;
            do {
              if (aVar12 == (atomic<int>)0x0) {
                pTVar28 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14ddb5905;
              }
              LOCK();
              aVar17 = pTVar28->SharedReferenceCount;
              bVar15 = aVar12 == aVar17;
              if (bVar15) {
                pTVar28->SharedReferenceCount = (atomic<int>)((int)aVar12 + 1);
                aVar17 = aVar12;
              }
              UNLOCK();
              aVar12 = aVar17;
            } while (!bVar15);
            pIVar10 = (pUVar6->GameLayerManagerPtr).Object;
            pSVar25 = (SWidget *)(pIVar10 + -0x55);
            if (pIVar10 == (IGameLayerManager *)0x0) {
              pSVar25 = (SWidget *)0x0;
            }
            LOCK();
            pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar28);
          if (((this->WidgetRenderer).Object == (FWidgetRenderer *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pUVar7 = (this->RenderTarget).field0_0x0.DebugPtr;
          dVar2 = (param_1->OutputState).TimeData.FrameDeltaTime;
          this_00 = (this->WidgetRenderer).Object;
          uVar1 = pUVar7->SizeX;
          uVar3 = pUVar7->SizeY;
          if ((pSVar25 == (SWidget *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pSVar25 == (SWidget *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3d8._8_4_ = SUB84((double)(int)uVar3,0);
          local_3d8._s_0.X = (double)(int)uVar1;
          local_3d8._12_4_ = (int)((ulonglong)(double)(int)uVar3 >> 0x20);
          local_3f0.Object = pSVar25;
          local_3f0.SharedReferenceCount.ReferenceController = pTVar28;
          FWidgetRenderer::DrawWidget
                    (this_00,pFVar31,&local_3f0,fVar13,(TVector2<double> *)&local_3d8._s_0,
                     (float)dVar2,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3f0.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar28);
          pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
          pTVar8 = (pUVar18->OutputBuilder).SharedReferenceCount.ReferenceController;
          pFVar9 = (pUVar18->OutputBuilder).Object;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar15 = this->bCompositeOntoFinalImage;
          FMoviePipelineRenderPassMetrics::FMoviePipelineRenderPassMetrics(&local_358,local_410);
          _Src.Data = local_430.Data.AllocatorInstance.Data;
          lVar26 = (longlong)local_430.Data.ArrayNum;
          local_c0.Data = (FScriptContainerElement *)0x0;
          local_b8 = CONCAT44(local_b8._4_4_,local_430.Data.ArrayNum);
          if (local_430.Data.ArrayNum == 0) {
            local_b8 = local_430.Data._8_8_ & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_430.Data.ArrayNum,0,&local_c0,local_430.Data.ArrayNum,
                       (int *)((longlong)&local_b8 + 4));
            memcpy(local_c0.Data,_Src.Data,lVar26 * 2);
          }
          pFVar30 = local_420;
          lVar26 = (longlong)(int)local_418;
          local_b0.Data = (FScriptContainerElement *)0x0;
          local_a8 = CONCAT44(local_a8._4_4_,(int)local_418);
          if ((int)local_418 == 0) {
            local_a8 = local_418 & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,(int)local_418,0,&local_b0,(int)local_418,
                       (int *)((longlong)&local_a8 + 4));
            memcpy(local_b0.Data,pFVar30,lVar26 * 2);
          }
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3c8[0] = (code *)0x0;
          local_3a0 = (code **)0x0;
          local_a0 = bVar15;
          local_98 = pFVar31;
          local_90 = pFVar9;
          local_88 = pTVar8;
          ppcVar22 = FMemory::Malloc(0x2e0,8);
          *ppcVar22 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::`10'::<lambda_1>,1,1>
                               ::_vftable_;
          local_3a0 = ppcVar22;
          FMoviePipelineRenderPassMetrics::FMoviePipelineRenderPassMetrics
                    ((FMoviePipelineRenderPassMetrics *)(ppcVar22 + 1),&local_358);
          ppcVar22[0x54] = (code *)0x0;
          ppcVar22[0x54] = (code *)local_c0.Data;
          local_c0.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(ppcVar22 + 0x55) = (undefined4)local_b8;
          *(undefined4 *)((longlong)ppcVar22 + 0x2ac) = local_b8._4_4_;
          local_b8 = 0;
          ppcVar22[0x56] = (code *)0x0;
          ppcVar22[0x56] = (code *)local_b0.Data;
          local_b0.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(ppcVar22 + 0x57) = (undefined4)local_a8;
          *(undefined4 *)((longlong)ppcVar22 + 700) = local_a8._4_4_;
          local_a8 = 0;
          *(undefined1 *)(ppcVar22 + 0x58) = local_a0;
          ppcVar22[0x59] = (code *)local_98;
          ppcVar22[0x5a] = (code *)local_90;
          ppcVar22[0x5b] = (code *)local_88;
          if ((FMoviePipelineRenderPassMetrics *)(ppcVar22 + 1) !=
              (FMoviePipelineRenderPassMetrics *)0x0) {
            local_3c8[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
                           ::Call;
          }
          local_88 = (TReferenceControllerBase<1> *)0x0;
          local_90 = (FMoviePipelineOutputMerger *)0x0;
          this_02 = FRenderCommandList::GetInstanceTLS();
          if (this_02 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl_::__l10::TSTR_BurnInRenderTargetResolveCommand81>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_3c8);
          }
          else {
            this_03 = FRenderCommandList::GetRenderThread(this_02);
            local_398._0_8_ = local_3c8[0];
            local_370 = local_3a0;
            local_3a0 = (code **)0x0;
            local_398._16_8_ = local_3b8[0];
            local_398._24_8_ = local_3b8[1];
            local_398._32_8_ = local_3b8[2];
            local_3c8[0] = (code *)0x0;
            local_368 = 2;
            pFVar23 = (FRenderCommandTag *)
                      TRenderCommandTag<`UMoviePipelineWidgetRenderer::RenderSample_GameThreadImpl'::__l10::TSTR_BurnInRenderTargetResolveCommand81>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_398,pFVar23);
            uVar27 = (ulonglong)local_368;
            if ((2 < uVar27) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar27] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_398._0_8_ != (code *)0x0) {
                ppcVar22 = (code **)(local_398 + 0x10);
                if (local_370 != (code **)0x0) {
                  ppcVar22 = local_370;
                }
                (**(code **)(*ppcVar22 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar27])(local_398);
            }
          }
          if (local_3c8[0] != (code *)0x0) {
            ppcVar22 = local_3c8 + 2;
            if (local_3a0 != (code **)0x0) {
              ppcVar22 = local_3a0;
            }
            (**(code **)(*ppcVar22 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88);
          if (local_b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data);
          }
          if (local_c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data);
          }
          FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics(&local_358);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar28);
          if (local_420 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_420);
          }
          if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.Data.AllocatorInstance.Data);
          }
          local_438 = local_438 + 1;
          pUVar29 = local_400;
          param_1 = local_410;
          this = local_408;
        } while (local_438 < local_434);
      }
    }
  }
  return;
}

// SetupImpl @ 14ddb68c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineWidgetRenderer::SetupImpl
          (UMoviePipelineWidgetRenderer *this,FMoviePipelineRenderPassInitSettings *param_1)

{
  uint uVar1;
  UMoviePipelineExecutorShot *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UTextureRenderTarget2D *pUVar7;
  UMoviePipeline *pUVar8;
  UMoviePipeline *pUVar9;
  UMoviePipelinePrimaryConfig *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  FWidgetRenderer *pFVar12;
  float fVar13;
  FWidgetRenderer *local_38;
  FSharedReferencer<1> FStack_30;
  TIntRect<int>_u_0 local_28 [2];
  
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UTextureRenderTarget2D>(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->RenderTarget).field0_0x0.DebugPtr = pUVar7;
  (pUVar7->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  fVar13 = UMoviePipeline::GetCachedCameraOverscan(pUVar8,-1);
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar1 = pUVar9->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar1 < (pUVar8->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = *(UMoviePipelineExecutorShot **)
            ((pUVar8->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar10 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar8);
  UMoviePipelineBlueprintLibrary::GetOverscanCropRectangle
            ((TIntRect<int> *)&local_28[0]._s_0,pUVar10,pUVar2,fVar13);
  if (((int)(local_28[0]._8_4_ - local_28[0]._0_4_) <= GRHIGlobals.MaxTextureDimensions.Value) &&
     ((int)(local_28[0]._12_4_ - local_28[0]._4_4_) <= GRHIGlobals.MaxTextureDimensions.Value)) {
    UTextureRenderTarget2D::InitCustomFormat
              ((this->RenderTarget).field0_0x0.DebugPtr,local_28[0]._8_4_ - local_28[0]._0_4_,
               local_28[0]._12_4_ - local_28[0]._4_4_,PF_B8G8R8A8,false);
    pTVar11 = ::operator_new(0x50);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar12 = (FWidgetRenderer *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFWidgetRenderer___00_SharedPointerInternals__6B_;
      FWidgetRenderer::FWidgetRenderer((FWidgetRenderer *)(pTVar11 + 1),false,true);
      pFVar12 = (FWidgetRenderer *)(pTVar11 + 1);
      if (pFVar12 == (FWidgetRenderer *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      FStack_30.ReferenceController = pTVar11;
      local_38 = pFVar12;
    }
    if (&this->WidgetRenderer != (TSharedPtr<FWidgetRenderer,1> *)&local_38) {
      (this->WidgetRenderer).Object = pFVar12;
      local_38 = (FWidgetRenderer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WidgetRenderer).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    return;
  }
  if (1 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  pUVar8 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8,1);
  return;
}

// StaticRegisterNativesUMoviePipelineWidgetRenderer @ 14ddb6bb0

void __cdecl UMoviePipelineWidgetRenderer::StaticRegisterNativesUMoviePipelineWidgetRenderer(void)

{
  return;
}

// TeardownImpl @ 14ddb6d70

void __thiscall UMoviePipelineWidgetRenderer::TeardownImpl(UMoviePipelineWidgetRenderer *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  FlushRenderingCommands();
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->WidgetRenderer != (TSharedPtr<FWidgetRenderer,1> *)&local_18) {
    (this->WidgetRenderer).Object = (FWidgetRenderer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetRenderer).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  return;
}

