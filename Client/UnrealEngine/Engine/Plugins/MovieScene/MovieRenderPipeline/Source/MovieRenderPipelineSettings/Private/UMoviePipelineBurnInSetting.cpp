// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 13

// StaticClass @ 14ddafa60

UClass * __cdecl UMoviePipelineBurnInSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineBurnInSetting",
               &Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBurnInSetting,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineBurnInSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineBurnInSetting>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton;
}

// UMoviePipelineBurnInSetting @ 14ddb1800

UMoviePipelineBurnInSetting * __thiscall
UMoviePipelineBurnInSetting::UMoviePipelineBurnInSetting
          (UMoviePipelineBurnInSetting *this,FVTableHelper *param_1)

{
  UMoviePipelineRenderPass::UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineBurnInSetting__6B_;
  *(undefined8 *)&this->BurnInClass = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  (this->WidgetRenderer).Object = (FWidgetRenderer *)0x0;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VirtualWindow).Object = (SVirtualWindow *)0x0;
  (this->VirtualWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->BurnInWidgetInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurnInWidgetInstances).ArrayNum = 0;
  (this->BurnInWidgetInstances).ArrayMax = 0;
  return this;
}

// ~UMoviePipelineBurnInSetting @ 14ddb1bd0

void __thiscall
UMoviePipelineBurnInSetting::~UMoviePipelineBurnInSetting(UMoviePipelineBurnInSetting *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineBurnInSetting__6B_;
  pFVar1 = (this->BurnInWidgetInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UMoviePipelineRenderPass::~UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this);
  return;
}

// operator() @ 14ddb2340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>::operator()
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
  pFVar4->SortingOrder = 4;
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

// GatherOutputPassesImpl @ 14ddb34b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineBurnInSetting::GatherOutputPassesImpl
          (UMoviePipelineBurnInSetting *this,
          TArray<FMoviePipelinePassIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  UMoviePipelineExecutorShot *pUVar4;
  code *pcVar5;
  UMoviePipelineSetting *pUVar6;
  ForAnyElementType _Src;
  FScriptContainerElement *_Src_00;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UMoviePipeline *pUVar11;
  UMoviePipeline *pUVar12;
  UMoviePipelinePrimaryConfig *pUVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  UClass *local_res18;
  UMoviePipelineSetting *local_res20;
  ForAnyElementType local_68;
  undefined8 local_60;
  FString local_58;
  FScriptContainerElement *local_48;
  ulonglong local_40;
  
  if ((*(longlong *)&this->BurnInClass != 0) &&
     ((this->WidgetRenderer).Object != (FWidgetRenderer *)0x0)) {
    pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar12 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    iVar17 = 0;
    uVar2 = pUVar12->CurrentShotIndex;
    uVar8 = 0;
    if ((int)uVar2 < (pUVar11->ActiveShotList).ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar4 = *(UMoviePipelineExecutorShot **)
              ((pUVar11->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
    pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar13 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar11);
    local_res18 = Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    local_res20 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                            ((TSubclassOf<UMoviePipelineSetting>)&local_res18,pUVar13,pUVar4);
    if ((char)local_res20[1]._padding_ == '\0') {
      iVar9 = 1;
    }
    else {
      iVar9 = (pUVar4->SidecarCameras).ArrayNum;
    }
    if (0 < iVar9) {
      do {
        pUVar6 = local_res20;
        piVar15 = &param_1->ArrayMax;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_48 = (void *)0x0;
        local_40 = 0;
        ::FString::operator=(&local_58,L"BurnInOverlay");
        iVar10 = -1;
        if ((char)pUVar6[1]._padding_ != '\0') {
          iVar10 = iVar17;
        }
        if ((iVar10 < 0) || ((pUVar4->SidecarCameras).ArrayNum <= iVar10)) {
          iVar3 = (pUVar4->InnerName).Data.ArrayNum;
          pFVar14 = (pUVar4->InnerName).Data.AllocatorInstance.Data;
          local_60 = CONCAT44(local_60._4_4_,iVar3);
          if (iVar3 != 0) goto LAB_14ddb367b;
LAB_14ddb37ab:
          local_68.Data = (FScriptContainerElement *)0x0;
          local_60 = local_60 & 0xffffffff;
        }
        else {
          if ((iVar10 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar14 = (pUVar4->SidecarCameras).AllocatorInstance.Data;
          iVar3 = *(int *)(pFVar14 + (longlong)iVar10 * 0x28 + 0x20);
          pFVar14 = *(FScriptContainerElement **)(pFVar14 + (longlong)iVar10 * 0x28 + 0x18);
          local_60 = CONCAT44(local_60._4_4_,iVar3);
          if (iVar3 == 0) goto LAB_14ddb37ab;
LAB_14ddb367b:
          local_68.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,0,&local_68,iVar3,(int *)((longlong)&local_60 + 4));
          memcpy(local_68.Data,pFVar14,(longlong)iVar3 * 2);
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        pFVar14 = (param_1->AllocatorInstance).Data;
        local_48 = local_68.Data;
        local_40 = local_60;
        local_68.Data = (FScriptContainerElement *)0x0;
        local_60 = 0;
        if (((pFVar14 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < pFVar14 + (longlong)*piVar15 * 0x20)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar15) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&param_1->AllocatorInstance,piVar15);
        }
        _Src.Data = local_58.Data.AllocatorInstance.Data;
        pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x20;
        param_1->ArrayNum = iVar10 + 1;
        *(undefined8 *)&pFVar14->field_0x0 = 0;
        lVar16 = (longlong)local_58.Data.ArrayNum;
        *(int *)&pFVar14[8].field_0x0 = local_58.Data.ArrayNum;
        if (local_58.Data.ArrayNum == 0) {
          *(int *)(pFVar14 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                     local_58.Data.ArrayNum,(int *)(pFVar14 + 0xc));
          memcpy(*(void **)&pFVar14->field_0x0,_Src.Data,lVar16 * 2);
        }
        _Src_00 = local_48;
        pFVar1 = pFVar14 + 0x10;
        *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
        lVar16 = (longlong)(int)local_40;
        *(int *)&pFVar14[0x18].field_0x0 = (int)local_40;
        if ((int)local_40 == 0) {
          *(int *)(pFVar14 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_40,0,(ForAnyElementType *)pFVar1,(int)local_40,
                     (int *)(pFVar14 + 0x1c));
          memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,_Src_00,lVar16 * 2);
        }
        if (local_48 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar9);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14ddb4160

UClass * __cdecl UMoviePipelineBurnInSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineBurnInSetting",
               &Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBurnInSetting,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineBurnInSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineBurnInSetting>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.InnerSingleton;
}

// IsValidOnPrimary @ 14ddb44e0

bool __thiscall UMoviePipelineBurnInSetting::IsValidOnPrimary(UMoviePipelineBurnInSetting *this)

{
  return true;
}

// IsValidOnShots @ 14ddb4510

bool __thiscall UMoviePipelineBurnInSetting::IsValidOnShots(UMoviePipelineBurnInSetting *this)

{
  return false;
}

// RenderSample_GameThreadImpl @ 14ddb4b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl
          (UMoviePipelineBurnInSetting *this,FMoviePipelineRenderPassMetrics *param_1)

{
  double dVar1;
  int iVar2;
  UWidget *this_00;
  SVirtualWindow *pSVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  FWidgetRenderer *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMoviePipelineOutputMerger *pFVar7;
  code *pcVar8;
  float fVar9;
  ForAnyElementType _Src;
  bool bVar10;
  UMoviePipeline *pUVar11;
  UMoviePipeline *pUVar12;
  TSharedRef<SWidget,1> *pTVar13;
  UFunction *pUVar14;
  FHittestGrid *pFVar15;
  FTextureRenderTargetResource *pFVar16;
  code **ppcVar17;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar23;
  UMoviePipelineExecutorShot *pUVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  undefined1 auStackY_4c8 [32];
  ForAnyElementType local_488;
  undefined8 local_480;
  uint local_478;
  int local_474;
  FString local_470;
  FScriptContainerElement *local_460;
  ulonglong local_458;
  FMoviePipelineRenderPassMetrics *local_450;
  UMoviePipeline *local_448;
  UMoviePipelineExecutorShot *local_440;
  UMoviePipelineCameraSetting *local_438;
  TSharedRef<SWindow,1> local_430;
  TSharedRef<SWindow,1> local_420;
  TVector2<double>_u_0 local_408;
  TVector2<double>_u_0 local_3f8;
  TSharedRef<SWidget,1> local_3e8;
  code *local_3d8 [2];
  code *local_3c8 [3];
  code **local_3b0;
  undefined1 local_3a8 [40];
  code **local_380;
  byte local_378;
  FMoviePipelineRenderPassMetrics local_368;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong *local_a8;
  FMoviePipelineOutputMerger *local_a0;
  TReferenceControllerBase<1> *local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if ((param_1->bDiscardResult == false) &&
     ((this->WidgetRenderer).Object != (FWidgetRenderer *)0x0)) {
    if (((param_1->TileIndexes).field0_0x0._s_0.Y * (param_1->TileCounts).field0_0x0._s_0.Y +
         (param_1->TileIndexes).field0_0x0._s_0.X == 0) &&
       ((param_1->SpatialSampleIndex == param_1->SpatialSampleCount + -1 &&
        (param_1->TemporalSampleIndex == param_1->TemporalSampleCount + -1)))) {
      local_450 = param_1;
      pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      pUVar12 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      uVar19 = pUVar12->CurrentShotIndex;
      uVar22 = 0;
      if ((int)uVar19 < (pUVar11->ActiveShotList).ArrayNum) {
        uVar22 = ~uVar19 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar24 = *(UMoviePipelineExecutorShot **)
                 ((pUVar11->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar19 * 8);
      local_440 = pUVar24;
      pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      local_438 = UMoviePipeline::FindOrAddSettingForShot<UMoviePipelineCameraSetting>
                            (pUVar11,pUVar24);
      fVar9 = __real_3f800000;
      if (local_438->bRenderAllCameras == false) {
        local_474 = 1;
      }
      else {
        local_474 = (pUVar24->SidecarCameras).ArrayNum;
      }
      local_478 = 0;
      if (0 < local_474) {
        do {
          local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_470.Data.ArrayNum = 0;
          local_470.Data.ArrayMax = 0;
          uVar19 = 0xffffffff;
          if (local_438->bRenderAllCameras != false) {
            uVar19 = local_478;
          }
          local_460 = (void *)0x0;
          local_458 = 0;
          ::FString::operator=(&local_470,L"BurnInOverlay");
          if (((int)uVar19 < 0) || ((pUVar24->SidecarCameras).ArrayNum <= (int)uVar19)) {
            iVar2 = (pUVar24->InnerName).Data.ArrayNum;
            pFVar25 = (pUVar24->InnerName).Data.AllocatorInstance.Data;
            local_480 = CONCAT44(local_480._4_4_,iVar2);
            if (iVar2 != 0) goto LAB_14ddb4db1;
LAB_14ddb5256:
            local_488.Data = (FScriptContainerElement *)0x0;
            local_480 = local_480 & 0xffffffff;
          }
          else {
            if (((int)uVar19 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar25 = (pUVar24->SidecarCameras).AllocatorInstance.Data;
            iVar2 = *(int *)(pFVar25 + (longlong)(int)uVar19 * 0x28 + 0x20);
            pFVar25 = *(FScriptContainerElement **)(pFVar25 + (longlong)(int)uVar19 * 0x28 + 0x18);
            local_480 = CONCAT44(local_480._4_4_,iVar2);
            if (iVar2 == 0) goto LAB_14ddb5256;
LAB_14ddb4db1:
            local_488.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar2,0,&local_488,iVar2,(int *)((longlong)&local_480 + 4));
            memcpy(local_488.Data,pFVar25,(longlong)iVar2 * 2);
          }
          if (local_460 != (void *)0x0) {
            FMemory::Free(local_460);
          }
          plVar23 = (longlong *)0x0;
          if (0 < (int)uVar19) {
            plVar23 = (longlong *)(ulonglong)uVar19;
          }
          local_460 = local_488.Data;
          uVar22 = (uint)plVar23;
          local_458 = local_480;
          local_488.Data = (FScriptContainerElement *)0x0;
          uVar19 = 0;
          if ((int)uVar22 < (this->BurnInWidgetInstances).ArrayNum) {
            uVar19 = ~uVar22 >> 0x1f;
          }
          local_480 = 0;
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this_00 = *(UWidget **)
                     ((this->BurnInWidgetInstances).AllocatorInstance.Data +
                     (longlong)(int)uVar22 * 8);
          if (((this->VirtualWindow).Object == (SVirtualWindow *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pSVar3 = (this->VirtualWindow).Object;
          pTVar13 = UWidget::TakeWidget(this_00,&local_3e8);
          SWindow::SetContent((SWindow *)pSVar3,pTVar13);
          local_448 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
          pUVar14 = UObject::FindFunctionChecked
                              ((UObject *)this_00,
                               NAME_UMoviePipelineBurnInWidget_OnOutputFrameStarted);
          (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar14,&local_448);
          if (((this->WidgetRenderer).Object == (FWidgetRenderer *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TVar4 = (this->OutputResolution).field0_0x0._s_0;
          dVar1 = (param_1->OutputState).TimeData.FrameDeltaTime;
          pFVar5 = (this->WidgetRenderer).Object;
          dVar26 = (double)TVar4.Y;
          if (((this->VirtualWindow).Object == (SVirtualWindow *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar6 = (this->VirtualWindow).SharedReferenceCount.ReferenceController;
          pSVar3 = (this->VirtualWindow).Object;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pSVar3 == (SVirtualWindow *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_430.Object = (SWindow *)pSVar3;
          local_430.SharedReferenceCount.ReferenceController = pTVar6;
          if (((this->VirtualWindow).Object == (SVirtualWindow *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar15 = SWindow::GetHittestGrid((SWindow *)(this->VirtualWindow).Object);
          local_408._8_4_ = SUB84(dVar26,0);
          local_408._s_0.X = (double)TVar4.X;
          local_408._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
          FWidgetRenderer::DrawWindow
                    (pFVar5,(this->RenderTarget).field0_0x0.DebugPtr,pFVar15,&local_430,fVar9,
                     (TVector2<double> *)&local_408._s_0,(float)dVar1,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          if ((param_1->OutputState).ShotOutputFrameNumber == 0) {
            if (((this->WidgetRenderer).Object == (FWidgetRenderer *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            TVar4 = (this->OutputResolution).field0_0x0._s_0;
            dVar1 = (param_1->OutputState).TimeData.FrameDeltaTime;
            pFVar5 = (this->WidgetRenderer).Object;
            dVar26 = (double)TVar4.Y;
            if (((this->VirtualWindow).Object == (SVirtualWindow *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar6 = (this->VirtualWindow).SharedReferenceCount.ReferenceController;
            pSVar3 = (this->VirtualWindow).Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pSVar3 == (SVirtualWindow *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_420.Object = (SWindow *)pSVar3;
            local_420.SharedReferenceCount.ReferenceController = pTVar6;
            if (((this->VirtualWindow).Object == (SVirtualWindow *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar15 = SWindow::GetHittestGrid((SWindow *)(this->VirtualWindow).Object);
            local_3f8._8_4_ = SUB84(dVar26,0);
            local_3f8._s_0.X = (double)TVar4.X;
            local_3f8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            FWidgetRenderer::DrawWindow
                      (pFVar5,(this->RenderTarget).field0_0x0.DebugPtr,pFVar15,&local_420,fVar9,
                       (TVector2<double> *)&local_3f8._s_0,(float)dVar1,false);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
          }
          pFVar16 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                              ((UTextureRenderTarget *)(this->RenderTarget).field0_0x0.DebugPtr);
          plVar23 = &pFVar16->_padding_;
          if (pFVar16 == (FTextureRenderTargetResource *)0x0) {
            plVar23 = (longlong *)0x0;
          }
          pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
          pTVar6 = (pUVar11->OutputBuilder).SharedReferenceCount.ReferenceController;
          pFVar7 = (pUVar11->OutputBuilder).Object;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar10 = this->bCompositeOntoFinalImage;
          FMoviePipelineRenderPassMetrics::FMoviePipelineRenderPassMetrics(&local_368,local_450);
          _Src.Data = local_470.Data.AllocatorInstance.Data;
          lVar20 = (longlong)local_470.Data.ArrayNum;
          local_d0.Data = (FScriptContainerElement *)0x0;
          local_c8 = CONCAT44(local_c8._4_4_,local_470.Data.ArrayNum);
          if (local_470.Data.ArrayNum == 0) {
            local_c8 = local_470.Data._8_8_ & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_470.Data.ArrayNum,0,&local_d0,local_470.Data.ArrayNum,
                       (int *)((longlong)&local_c8 + 4));
            memcpy(local_d0.Data,_Src.Data,lVar20 * 2);
          }
          pFVar25 = local_460;
          lVar20 = (longlong)(int)local_458;
          local_c0.Data = (FScriptContainerElement *)0x0;
          local_b8 = CONCAT44(local_b8._4_4_,(int)local_458);
          if ((int)local_458 == 0) {
            local_b8 = local_458 & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,(int)local_458,0,&local_c0,(int)local_458,
                       (int *)((longlong)&local_b8 + 4));
            memcpy(local_c0.Data,pFVar25,lVar20 * 2);
          }
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3d8[0] = (code *)0x0;
          local_3b0 = (code **)0x0;
          local_b0 = bVar10;
          local_a8 = plVar23;
          local_a0 = pFVar7;
          local_98 = pTVar6;
          ppcVar17 = FMemory::Malloc(0x2e0,8);
          *ppcVar17 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::`13'::<lambda_1>,1,1>
                               ::_vftable_;
          local_3b0 = ppcVar17;
          FMoviePipelineRenderPassMetrics::FMoviePipelineRenderPassMetrics
                    ((FMoviePipelineRenderPassMetrics *)(ppcVar17 + 1),&local_368);
          ppcVar17[0x54] = (code *)0x0;
          ppcVar17[0x54] = (code *)local_d0.Data;
          local_d0.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(ppcVar17 + 0x55) = (undefined4)local_c8;
          *(undefined4 *)((longlong)ppcVar17 + 0x2ac) = local_c8._4_4_;
          local_c8 = 0;
          ppcVar17[0x56] = (code *)0x0;
          ppcVar17[0x56] = (code *)local_c0.Data;
          local_c0.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(ppcVar17 + 0x57) = (undefined4)local_b8;
          *(undefined4 *)((longlong)ppcVar17 + 700) = local_b8._4_4_;
          local_b8 = 0;
          *(undefined1 *)(ppcVar17 + 0x58) = local_b0;
          ppcVar17[0x59] = (code *)local_a8;
          ppcVar17[0x5a] = (code *)local_a0;
          ppcVar17[0x5b] = (code *)local_98;
          if ((FMoviePipelineRenderPassMetrics *)(ppcVar17 + 1) !=
              (FMoviePipelineRenderPassMetrics *)0x0) {
            local_3d8[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::<lambda_1>,void,FRHICommandListImmediate_&>
                           ::Call;
          }
          local_98 = (TReferenceControllerBase<1> *)0x0;
          local_a0 = (FMoviePipelineOutputMerger *)0x0;
          this_01 = FRenderCommandList::GetInstanceTLS();
          if (this_01 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl_::__l13::TSTR_BurnInRenderTargetResolveCommand101>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_3d8);
          }
          else {
            this_02 = FRenderCommandList::GetRenderThread(this_01);
            local_3a8._0_8_ = local_3d8[0];
            local_380 = local_3b0;
            local_3b0 = (code **)0x0;
            local_3a8._16_8_ = local_3c8[0];
            local_3a8._24_8_ = local_3c8[1];
            local_3a8._32_8_ = local_3c8[2];
            local_3d8[0] = (code *)0x0;
            local_378 = 2;
            pFVar18 = (FRenderCommandTag *)
                      TRenderCommandTag<`UMoviePipelineBurnInSetting::RenderSample_GameThreadImpl'::__l13::TSTR_BurnInRenderTargetResolveCommand101>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_3a8,pFVar18);
            uVar21 = (ulonglong)local_378;
            if ((2 < uVar21) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar21] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_3a8._0_8_ != (code *)0x0) {
                ppcVar17 = (code **)(local_3a8 + 0x10);
                if (local_380 != (code **)0x0) {
                  ppcVar17 = local_380;
                }
                (**(code **)(*ppcVar17 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar21])(local_3a8);
            }
          }
          if (local_3d8[0] != (code *)0x0) {
            ppcVar17 = local_3d8 + 2;
            if (local_3b0 != (code **)0x0) {
              ppcVar17 = local_3b0;
            }
            (**(code **)(*ppcVar17 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98);
          if (local_c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data);
          }
          if (local_d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data);
          }
          FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics(&local_368);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          if (local_460 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_460);
          }
          if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_470.Data.AllocatorInstance.Data);
          }
          local_478 = local_478 + 1;
          pUVar24 = local_440;
          param_1 = local_450;
        } while ((int)local_478 < local_474);
      }
    }
  }
  return;
}

// SetupImpl @ 14ddb6090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UMoviePipelineBurnInSetting::SetupImpl
          (UMoviePipelineBurnInSetting *this,FMoviePipelineRenderPassInitSettings *param_1)

{
  byte *pbVar1;
  TArray<TObjectPtr<UMoviePipelineBurnInWidget>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<SVirtualWindow,1> *pTVar3;
  UMoviePipelineExecutorShot *pUVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SVirtualWindow *pSVar7;
  code *pcVar8;
  TIntPoint<int>_u_0 TVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  UMoviePipeline *pUVar17;
  UMoviePipeline *pUVar18;
  UMoviePipelinePrimaryConfig *pUVar19;
  FString *pFVar20;
  size_t sVar21;
  UClass *pUVar22;
  UMoviePipelineCameraSetting *pUVar23;
  UWorld *pUVar24;
  FArguments *pFVar25;
  FSlateApplication *this_00;
  UObject *pUVar26;
  UTextureRenderTarget2D *pUVar27;
  UClass *pUVar28;
  FWidgetRenderer *pFVar29;
  ulonglong uVar30;
  uint uVar31;
  float fVar32;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  int local_res20;
  int iStackX_24;
  UMoviePipelineBurnInWidget *local_338;
  longlong *local_330;
  FSharedReferencer<1> FStack_328;
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> local_320;
  undefined8 local_308;
  SVirtualWindow *local_300;
  FSharedReferencer<1> local_2f8;
  TIntRect<int>_u_0 local_2f0;
  UMoviePipelineBurnInSetting *local_2e0;
  UClass *local_2d8;
  FName local_2d0;
  FMemScope local_2c8 [2];
  FScriptContainerElement *local_2b8;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  TSharedRef<SWindow,1> local_298;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  FString local_268;
  FArguments local_258;
  
  if (*(longlong *)&this->BurnInClass == 0) {
    return;
  }
  pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  fVar32 = UMoviePipeline::GetCachedCameraOverscan(pUVar17,-1);
  pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar28 = (UClass *)0x0;
  uVar15 = pUVar18->CurrentShotIndex;
  uVar31 = 0;
  uVar14 = uVar31;
  if ((int)uVar15 < (pUVar17->ActiveShotList).ArrayNum) {
    uVar14 = ~uVar15 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar4 = *(UMoviePipelineExecutorShot **)
            ((pUVar17->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
  pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar19 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar17);
  UMoviePipelineBlueprintLibrary::GetOverscanCropRectangle
            ((TIntRect<int> *)&local_2f0._s_0,pUVar19,pUVar4,fVar32);
  local_res20 = local_2f0._8_4_ - local_2f0._0_4_;
  iStackX_24 = local_2f0._12_4_ - local_2f0._4_4_;
  TVar9._s_0.Y = iStackX_24;
  TVar9._s_0.X = local_res20;
  (this->OutputResolution).field0_0x0 = TVar9;
  if ((GRHIGlobals.MaxTextureDimensions.Value < local_res20) ||
     (GRHIGlobals.MaxTextureDimensions.Value < iStackX_24)) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    (**(code **)(pUVar17->_padding_ + 0x2b8))(pUVar17,1);
    return;
  }
  pUVar22 = pUVar28;
  if (*(longlong *)&this->BurnInClass == 0) {
LAB_14ddb624c:
    local_2e0 = this;
    bVar11 = `UMoviePipelineBurnInSetting::SetupImpl'::__l27::<lambda_1>::operator()(&local_2e0);
    if (!bVar11) {
      return;
    }
  }
  else {
    local_2a8 = (wchar_t *)0x0;
    iStack_2a0 = 0;
    pFVar20 = FSoftObjectPath::ToString((FSoftObjectPath *)&this->BurnInClass,&local_268);
    if ((pFVar20->Data).ArrayNum == 0) {
      local_2b8 = (FScriptContainerElement *)0x15060d16c;
LAB_14ddb61f6:
      sVar21 = wcslen((wchar_t *)local_2b8);
      uStack_2b0 = (uint)sVar21;
    }
    else {
      local_2b8 = (pFVar20->Data).AllocatorInstance.Data;
      uStack_2b0 = uVar31;
      if (local_2b8 != (FScriptContainerElement *)0x0) goto LAB_14ddb61f6;
    }
    pUVar22 = UMoviePipelineBurnInWidget::StaticClass();
    local_288._12_4_ = uStack_29c;
    local_288.Size = iStack_2a0;
    local_278._12_4_ = uStack_2ac;
    local_278.Size = uStack_2b0;
    local_288.DataPtr = local_2a8;
    local_278.DataPtr = (wchar_t *)local_2b8;
    pUVar22 = StaticLoadClass(pUVar22,(UObject *)0x0,&local_278,&local_288,0,(UPackageMap *)0x0);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (pUVar22 == (UClass *)0x0) goto LAB_14ddb624c;
  }
  pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar15 = pUVar18->CurrentShotIndex;
  if ((int)uVar15 < (pUVar17->ActiveShotList).ArrayNum) {
    uVar31 = ~uVar15 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar4 = *(UMoviePipelineExecutorShot **)
            ((pUVar17->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
  pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar23 = UMoviePipeline::FindOrAddSettingForShot<UMoviePipelineCameraSetting>(pUVar17,pUVar4);
  if (pUVar23->bRenderAllCameras == false) {
    uVar15 = 1;
LAB_14ddb6304:
    pTVar2 = &this->BurnInWidgetInstances;
    uVar30 = (ulonglong)uVar15;
    local_308 = 0;
    do {
      local_2d8 = pUVar22;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar22);
      }
      pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      local_338 = CreateWidget<UMoviePipelineBurnInWidget,UWorld_*>
                            (pUVar24,(TSubclassOf<UUserWidget>)&local_2d8,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_338 != (UMoviePipelineBurnInWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_338);
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_338) &&
          ((FScriptContainerElement *)&local_338 <
           pFVar5 + (longlong)(this->BurnInWidgetInstances).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (this->BurnInWidgetInstances).ArrayNum;
      if (iVar16 == (this->BurnInWidgetInstances).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,&(this->BurnInWidgetInstances).ArrayMax
                           );
      }
      (this->BurnInWidgetInstances).ArrayNum = iVar16 + 1;
      *(UMoviePipelineBurnInWidget **)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 8) =
           local_338;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_338 != (UMoviePipelineBurnInWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_338);
      }
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  else {
    uVar15 = (pUVar4->SidecarCameras).ArrayNum;
    if (0 < (int)uVar15) goto LAB_14ddb6304;
  }
  pFVar25 = SVirtualWindow::FArguments::FArguments(&local_258);
  iVar16 = (this->OutputResolution).field0_0x0._s_0.Y;
  (pFVar25->_Size).field0_0x0._s_0.X = (double)(this->OutputResolution).field0_0x0._s_0.X;
  (pFVar25->_Size).field0_0x0._s_0.Y = (double)iVar16;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_2c8,&local_2d0,true);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
            (&local_320,"SVirtualWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineSettings\\Private\\MoviePipelineBurnInSetting.cpp"
             ,0xa6,local_res8);
  FMemScope::~FMemScope(local_2c8);
  FLLMScope::~FLLMScope(local_res18);
  pSVar7 = local_320._Widget.Object;
  if ((local_320._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_320._Widget.Object,(FSlateBaseNamedArgs *)pFVar25);
  SVirtualWindow::Construct(local_320._Widget.Object,pFVar25);
  if ((local_320._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_320._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_320._Widget.Object)->_padding_ + 0x228))(local_320._Widget.Object);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14ddb6573;
  }
  bVar13 = 0x20;
LAB_14ddb6573:
  *(byte *)&(local_320._Widget.Object)->_padding_ =
       (byte)(local_320._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_320._Widget.Object)->_padding_ =
       (byte)(local_320._Widget.Object)->_padding_ | bVar13;
  if ((local_320._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_320._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_320._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar10.ReferenceController = local_320._Widget.SharedReferenceCount.ReferenceController;
  local_320._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_320._Widget.Object = (SVirtualWindow *)0x0;
  if ((pSVar7 == (SVirtualWindow *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_300 = pSVar7;
  local_2f8.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->VirtualWindow;
  if (pTVar3 != (TSharedPtr<SVirtualWindow,1> *)&local_300) {
    pTVar3->Object = pSVar7;
    local_300 = (SVirtualWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VirtualWindow).SharedReferenceCount,&local_2f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    if ((pTVar3->Object == (SVirtualWindow *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar6 = (this->VirtualWindow).SharedReferenceCount.ReferenceController;
    pSVar7 = pTVar3->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar7 == (SVirtualWindow *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_298.Object = (SWindow *)pSVar7;
    local_298.SharedReferenceCount.ReferenceController = pTVar6;
    FSlateApplication::RegisterVirtualWindow(this_00,&local_298);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  pUVar26 = GetTransientPackageAsObject();
  pUVar27 = NewObject<UTextureRenderTarget2D>(pUVar26);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar27 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar27);
  }
  (this->RenderTarget).field0_0x0.DebugPtr = pUVar27;
  (pUVar27->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0
  ;
  UTextureRenderTarget2D::InitCustomFormat
            ((this->RenderTarget).field0_0x0.DebugPtr,(this->OutputResolution).field0_0x0._s_0.X,
             (this->OutputResolution).field0_0x0._s_0.Y,PF_B8G8R8A8,false);
  pUVar22 = ::operator_new(0x50);
  if (pUVar22 == (UClass *)0x0) {
    local_330 = ___xmm_00000000000000000000000000000010;
    pFVar29 = (FWidgetRenderer *)&DAT_00000010;
    FStack_328.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)&pUVar22->_padding_ = 1;
    *(undefined4 *)((longlong)&pUVar22->_padding_ + 4) = 1;
    pUVar22->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWidgetRenderer___00_SharedPointerInternals__6B_;
    FWidgetRenderer::FWidgetRenderer((FWidgetRenderer *)&pUVar22->_padding_,false,true);
    pFVar29 = (FWidgetRenderer *)&pUVar22->_padding_;
    if ((pFVar29 == (FWidgetRenderer *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    *(int *)&pUVar22->_padding_ = (int)pUVar22->_padding_ + 1;
    UNLOCK();
    FStack_328.ReferenceController = (TReferenceControllerBase<1> *)pUVar22;
    pUVar28 = pUVar22;
    local_330 = (longlong *)pFVar29;
  }
  if (&this->WidgetRenderer != (TSharedPtr<FWidgetRenderer,1> *)&local_330) {
    (this->WidgetRenderer).Object = pFVar29;
    local_330 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetRenderer).SharedReferenceCount,&FStack_328);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_328.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar28);
  return;
}

// StaticRegisterNativesUMoviePipelineBurnInSetting @ 14ddb6b50

void __cdecl UMoviePipelineBurnInSetting::StaticRegisterNativesUMoviePipelineBurnInSetting(void)

{
  return;
}

// TeardownImpl @ 14ddb6bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipelineBurnInSetting::TeardownImpl(UMoviePipelineBurnInSetting *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SVirtualWindow *pSVar2;
  code *pcVar3;
  bool bVar4;
  FSlateApplication *this_00;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<SWindow,1> local_18;
  
  FlushRenderingCommands();
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->VirtualWindow).Object != (SVirtualWindow *)0x0)) {
    this_00 = FSlateApplication::Get();
    if ((this->VirtualWindow).Object == (SVirtualWindow *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar1 = (this->VirtualWindow).SharedReferenceCount.ReferenceController;
    pSVar2 = (this->VirtualWindow).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar2 == (SVirtualWindow *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = (SWindow *)pSVar2;
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    FSlateApplication::UnregisterVirtualWindow(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VirtualWindow != (TSharedPtr<SVirtualWindow,1> *)&local_38) {
    (this->VirtualWindow).Object = (SVirtualWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VirtualWindow).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->WidgetRenderer != (TSharedPtr<FWidgetRenderer,1> *)&local_28) {
    (this->WidgetRenderer).Object = (FWidgetRenderer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetRenderer).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->BurnInWidgetInstances).ArrayNum = 0;
  if ((this->BurnInWidgetInstances).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BurnInWidgetInstances).AllocatorInstance,0,
               &(this->BurnInWidgetInstances).ArrayMax);
  }
  return;
}

// operator() @ 15058f0f0

bool __thiscall `UMoviePipelineBurnInSetting::SetupImpl'::__l27::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5722028351133056871>);
  if (bVar2) {
    if (((FTopLevelAssetPath *)(*(longlong *)this + 0x48))->PackageName == (FName)0x0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
    }
    else {
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(*(longlong *)this + 0x48),&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5722028351133056871>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058f16d;
    }
  }
  bVar2 = false;
LAB_15058f16d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

