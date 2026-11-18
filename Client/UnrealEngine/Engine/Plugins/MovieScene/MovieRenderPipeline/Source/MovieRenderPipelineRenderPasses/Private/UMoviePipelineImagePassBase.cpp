// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 35

// StaticClass @ 14ddbb1b0

UClass * __cdecl UMoviePipelineImagePassBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImagePassBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImagePassBase",
               &Z_Registration_Info_UClass_UMoviePipelineImagePassBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImagePassBase,0x178,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineImagePassBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineImagePassBase>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImagePassBase.InnerSingleton;
}

// UMoviePipelineImagePassBase @ 14ddc83b0

UMoviePipelineImagePassBase * __thiscall
UMoviePipelineImagePassBase::UMoviePipelineImagePassBase
          (UMoviePipelineImagePassBase *this,FVTableHelper *param_1)

{
  UMoviePipelineRenderPass::UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineImagePassBase__6B_;
  *(undefined8 *)&this->TileRenderTargets = 0;
  *(undefined8 *)&(this->TileRenderTargets).field_0x8 = 0;
  *(undefined8 *)&(this->TileRenderTargets).field_0x20 = 0;
  *(undefined4 *)&(this->TileRenderTargets).field_0x28 = 0;
  *(undefined4 *)&(this->TileRenderTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TileRenderTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TileRenderTargets).field_0x34 = 0;
  *(undefined8 *)&(this->TileRenderTargets).field_0x40 = 0;
  *(undefined4 *)&(this->TileRenderTargets).field_0x48 = 0;
  (this->ViewState)._padding_ = (longlong)&___7FSceneViewStateReference__6B_;
  (this->ViewState).Reference = (FSceneViewStateInterface *)0x0;
  (this->ViewState).GlobalListLink._padding_ = 0;
  (this->ViewState).GlobalListLink._padding_ = 0;
  (this->ViewState).ShareOriginTarget = (FSceneViewStateReference *)0x0;
  (this->ViewState).ShareOriginRefCount = 0;
  *(undefined8 *)&this->SurfaceQueues = 0;
  *(undefined8 *)&(this->SurfaceQueues).field_0x8 = 0;
  *(undefined8 *)&(this->SurfaceQueues).field_0x20 = 0;
  *(undefined4 *)&(this->SurfaceQueues).field_0x28 = 0;
  *(undefined4 *)&(this->SurfaceQueues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SurfaceQueues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SurfaceQueues).field_0x34 = 0;
  *(undefined8 *)&(this->SurfaceQueues).field_0x40 = 0;
  *(undefined4 *)&(this->SurfaceQueues).field_0x48 = 0;
  (this->PassIdentifier).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassIdentifier).Name.Data.ArrayNum = 0;
  (this->PassIdentifier).Name.Data.ArrayMax = 0;
  (this->PassIdentifier).CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassIdentifier).CameraName.Data.ArrayNum = 0;
  (this->PassIdentifier).CameraName.Data.ArrayMax = 0;
  (this->OutstandingTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  (this->OutstandingTasks).ArrayNum = 0;
  (this->OutstandingTasks).ArrayMax = 4;
  return this;
}

// UMoviePipelineImagePassBase @ 14ddc84b0

UMoviePipelineImagePassBase * __thiscall
UMoviePipelineImagePassBase::UMoviePipelineImagePassBase(UMoviePipelineImagePassBase *this)

{
  FString *pFVar1;
  FMoviePipelinePassIdentifier *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FString local_68;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  UMoviePipelineRenderPass::UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineImagePassBase__6B_;
  *(undefined8 *)&this->TileRenderTargets = 0;
  *(undefined8 *)&(this->TileRenderTargets).field_0x8 = 0;
  *(undefined8 *)&(this->TileRenderTargets).field_0x20 = 0;
  *(undefined4 *)&(this->TileRenderTargets).field_0x28 = 0;
  *(undefined4 *)&(this->TileRenderTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TileRenderTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TileRenderTargets).field_0x34 = 0;
  *(undefined8 *)&(this->TileRenderTargets).field_0x40 = 0;
  *(undefined4 *)&(this->TileRenderTargets).field_0x48 = 0;
  (this->ViewState)._padding_ = (longlong)&___7FSceneViewStateReference__6B_;
  (this->ViewState).Reference = (FSceneViewStateInterface *)0x0;
  (this->ViewState).GlobalListLink._padding_ = 0;
  (this->ViewState).GlobalListLink._padding_ = 0;
  (this->ViewState).ShareOriginTarget = (FSceneViewStateReference *)0x0;
  (this->ViewState).ShareOriginRefCount = 0;
  *(undefined8 *)&this->SurfaceQueues = 0;
  *(undefined8 *)&(this->SurfaceQueues).field_0x8 = 0;
  *(undefined8 *)&(this->SurfaceQueues).field_0x20 = 0;
  *(undefined4 *)&(this->SurfaceQueues).field_0x28 = 0;
  *(undefined4 *)&(this->SurfaceQueues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SurfaceQueues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SurfaceQueues).field_0x34 = 0;
  *(undefined8 *)&(this->SurfaceQueues).field_0x40 = 0;
  *(undefined4 *)&(this->SurfaceQueues).field_0x48 = 0;
  this->bAllowCameraAspectRatio = true;
  pFVar2 = &this->PassIdentifier;
  (pFVar2->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassIdentifier).Name.Data.ArrayNum = 0;
  (this->PassIdentifier).Name.Data.ArrayMax = 0;
  pFVar1 = &(this->PassIdentifier).CameraName;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassIdentifier).CameraName.Data.ArrayNum = 0;
  (this->PassIdentifier).CameraName.Data.ArrayMax = 0;
  (this->OutstandingTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  (this->OutstandingTasks).ArrayNum = 0;
  (this->OutstandingTasks).ArrayMax = 4;
  ::FString::FString(&local_58,L"camera");
  ::FString::FString(&local_68,"ImagePassBase");
  FVar4.Data = local_68.Data.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_68.Data.ArrayNum;
  local_40 = CONCAT44(local_40._4_4_,iVar5);
  if (iVar5 == 0) {
    local_40 = local_68.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_48,iVar5,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,FVar4.Data,(longlong)iVar5 * 2);
  }
  FVar4.Data = local_58.Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_58.Data.ArrayNum;
  local_30 = CONCAT44(local_30._4_4_,iVar5);
  if (iVar5 == 0) {
    local_30 = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,FVar4.Data,(longlong)iVar5 * 2);
  }
  if (pFVar2 != (FMoviePipelinePassIdentifier *)&local_48) {
    pFVar3 = (pFVar2->Name).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Name).Data.AllocatorInstance.Data = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    (this->PassIdentifier).Name.Data.ArrayNum = (int)local_40;
    (this->PassIdentifier).Name.Data.ArrayMax = local_40._4_4_;
    local_40 = 0;
  }
  if (pFVar1 != (FString *)&local_38) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    (this->PassIdentifier).CameraName.Data.ArrayNum = (int)local_30;
    (this->PassIdentifier).CameraName.Data.ArrayMax = local_30._4_4_;
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UMoviePipelineImagePassBase @ 14ddcbca0

void __thiscall
UMoviePipelineImagePassBase::~UMoviePipelineImagePassBase(UMoviePipelineImagePassBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  
  this->_padding_ = (longlong)&___7UMoviePipelineImagePassBase__6B_;
  FVar3 = (this->OutstandingTasks).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar3 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->OutstandingTasks;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar3,(this->OutstandingTasks).ArrayNum);
  FVar3 = (this->OutstandingTasks).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar1 = (this->PassIdentifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PassIdentifier).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SurfaceQueues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SurfaceQueues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SurfaceQueues);
  FSceneViewStateReference::~FSceneViewStateReference(&this->ViewState);
  *(undefined4 *)&(this->TileRenderTargets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TileRenderTargets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TileRenderTargets);
  UMoviePipelineRenderPass::~UMoviePipelineRenderPass((UMoviePipelineRenderPass *)this);
  return;
}

// AddReferencedObjects @ 14ddd46f0

void __cdecl
UMoviePipelineImagePassBase::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UMoviePipelineImagePassBase>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
    return;
  }
  pFVar4 = GetTypeName<UMoviePipelineImagePassBase>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// AddViewExtensions @ 14ddd4aa0

void __thiscall
UMoviePipelineImagePassBase::AddViewExtensions
          (UMoviePipelineImagePassBase *this,FSceneViewFamilyContext *param_1,
          FMoviePipelineRenderPassMetrics *param_2)

{
  return;
}

// BlendPostProcessSettings @ 14ddd69a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineImagePassBase::BlendPostProcessSettings
          (UMoviePipelineImagePassBase *this,FSceneView *param_1,
          FMoviePipelineRenderPassMetrics *param_2,IViewCalcPayload *param_3)

{
  APlayerCameraManager *pAVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  UMoviePipeline *pUVar9;
  UWorld *this_00;
  APlayerController *pAVar10;
  FMinimalViewInfo *pFVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_968 [32];
  longlong local_948;
  longlong local_940;
  TArray<float,TSizedDefaultAllocator<32>_> *local_938;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *local_930 [3];
  double local_918;
  FMinimalViewInfo local_908;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_968;
  if (param_1 == (FSceneView *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImagePassBase.cpp"
                       ,0x2c6,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  this_00 = (UWorld *)(**(code **)(pUVar9->_padding_ + 0x180))(pUVar9);
  pAVar10 = UWorld::GetFirstPlayerController(this_00);
  pAVar1 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerCameraManager *)0x0) {
    APlayerCameraManager::GetCachedPostProcessBlends(pAVar1,local_930,&local_938);
    pAVar1 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
    if (pAVar1->bEnableFading != 0) {
      uVar4 = *(undefined8 *)((longlong)&(pAVar1->FadeColor).field0_0x0 + 8);
      *(undefined8 *)&(param_1->OverlayColor).field0_0x0 =
           *(undefined8 *)&(pAVar1->FadeColor).field0_0x0;
      *(undefined8 *)((longlong)&(param_1->OverlayColor).field0_0x0 + 8) = uVar4;
      fVar14 = ((pAVar10->PlayerCameraManager).field0_0x0.DebugPtr)->FadeAmount;
      if (__real_3f800000 <= fVar14) {
        fVar14 = __real_3f800000;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      (param_1->OverlayColor).field0_0x0._s_0.A = fVar14;
    }
    pAVar1 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
    if (pAVar1->bEnableColorScaling != 0) {
      dVar3 = (pAVar1->ColorScale).field0_0x0._s_0.Y;
      local_918 = (pAVar1->ColorScale).field0_0x0._s_0.Z;
      (param_1->ColorScale).field0_0x0._s_0.R = (float)(pAVar1->ColorScale).field0_0x0._s_0.X;
      (param_1->ColorScale).field0_0x0._s_0.G = (float)dVar3;
      (param_1->ColorScale).field0_0x0._s_0.B = (float)local_918;
      (param_1->ColorScale).field0_0x0._s_0.A = 1.0;
    }
    pFVar11 = (FMinimalViewInfo *)
              (**(code **)(((pAVar10->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x798))
                        ();
    FMinimalViewInfo::FMinimalViewInfo(&local_908,pFVar11);
    uVar12 = 0;
    if (0 < local_938->ArrayNum) {
      lVar13 = 0;
      do {
        pTVar5 = local_938;
        uVar8 = 0;
        if ((int)uVar12 < local_938->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_948 = (longlong)(int)uVar12;
          local_940 = (longlong)local_938->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pTVar6 = local_930[0];
        fVar14 = *(float *)((pTVar5->AllocatorInstance).Data + lVar13);
        uVar8 = 0;
        if ((int)uVar12 < local_930[0]->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_948 = (longlong)(int)uVar12;
          local_940 = (longlong)local_930[0]->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FSceneView::OverridePostProcessSettings
                  (param_1,(FPostProcessSettings *)
                           ((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x770),fVar14
                  );
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 4;
      } while ((int)uVar12 < local_938->ArrayNum);
    }
    FSceneView::OverridePostProcessSettings
              (param_1,&local_908.PostProcessSettings,local_908.PostProcessBlendWeight);
    if (local_908.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// CalcCubeFaceTransform @ 14ddd7590

TMatrix<double> * __thiscall
UMoviePipelineImagePassBase::CalcCubeFaceTransform
          (UMoviePipelineImagePassBase *this,TMatrix<double> *__return_storage_ptr__,
          ECubeFace param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  
  uVar17 = __real_3ff0000000000000;
  uVar27 = (uint)((ulonglong)YAxis.field0_0x0._16_8_ >> 0x20);
  local_e8 = YAxis.field0_0x0._s_0.Z;
  uVar29 = YAxis.field0_0x0._0_4_;
  uVar30 = YAxis.field0_0x0._4_4_;
  uVar31 = YAxis.field0_0x0._8_4_;
  uVar32 = YAxis.field0_0x0._12_4_;
  dVar4 = uStack_d0;
  uVar22 = SUB84(XAxis.field0_0x0._s_0.X,0);
  uVar23 = (undefined4)((ulonglong)XAxis.field0_0x0._0_8_ >> 0x20);
  uVar24 = SUB84(XAxis.field0_0x0._s_0.Y,0);
  uVar25 = (undefined4)((ulonglong)XAxis.field0_0x0._8_8_ >> 0x20);
  uVar26 = SUB84(XAxis.field0_0x0._s_0.Z,0);
  uVar28 = (uint)((ulonglong)XAxis.field0_0x0._16_8_ >> 0x20);
  uVar20 = (uint)__xmm_80000000000000008000000000000000;
  uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar18 = SUB84(ZAxis.field0_0x0._s_0.Z,0);
  uVar19 = (uint)((ulonglong)ZAxis.field0_0x0._16_8_ >> 0x20);
  switch(param_1) {
  case CubeFace_PosX:
    local_d8 = XAxis.field0_0x0._s_0.Y;
    break;
  case CubeFace_NegX:
    uVar24 = uVar24 ^ uVar20;
    uVar25 = uVar25 ^ uVar21;
    uVar22 = uVar22 ^ uVar20;
    uVar23 = uVar23 ^ uVar21;
    local_d8 = (double)CONCAT44(uVar25,uVar24);
    uVar26 = uVar26 ^ uVar20;
    uVar28 = uVar28 ^ uVar21;
    break;
  case CubeFace_PosY:
    local_e8 = (double)CONCAT44(uVar19 ^ uVar21,uVar18 ^ uVar20);
    uVar22 = uVar29;
    uVar23 = uVar30;
    uVar24 = uVar31;
    uVar25 = uVar32;
    uVar26 = SUB84(YAxis.field0_0x0._s_0.Z,0);
    uVar28 = uVar27;
    uVar29 = ZAxis.field0_0x0._0_4_ ^ uVar20;
    uVar30 = ZAxis.field0_0x0._4_4_ ^ uVar21;
    uVar31 = ZAxis.field0_0x0._8_4_ ^ uVar20;
    uVar32 = ZAxis.field0_0x0._12_4_ ^ uVar21;
    local_d8 = YAxis.field0_0x0._8_8_;
    break;
  case CubeFace_NegY:
    local_e8 = ZAxis.field0_0x0._s_0.Z;
    local_d8 = (double)CONCAT44(uVar32 ^ uVar21,uVar31 ^ uVar20);
    uVar22 = uVar29 ^ uVar20;
    uVar23 = uVar30 ^ uVar21;
    uVar24 = uVar31 ^ uVar20;
    uVar25 = uVar32 ^ uVar21;
    uVar26 = SUB84(YAxis.field0_0x0._s_0.Z,0) ^ uVar20;
    uVar28 = uVar27 ^ uVar21;
    uVar29 = ZAxis.field0_0x0._0_4_;
    uVar30 = ZAxis.field0_0x0._4_4_;
    uVar31 = ZAxis.field0_0x0._8_4_;
    uVar32 = ZAxis.field0_0x0._12_4_;
    break;
  case CubeFace_PosZ:
    auVar16._4_4_ = ZAxis.field0_0x0._4_4_;
    auVar16._0_4_ = ZAxis.field0_0x0._0_4_;
    auVar16._8_4_ = ZAxis.field0_0x0._8_4_;
    auVar16._12_4_ = ZAxis.field0_0x0._12_4_;
    local_d8 = auVar16._8_8_;
    uVar22 = ZAxis.field0_0x0._0_4_;
    uVar23 = ZAxis.field0_0x0._4_4_;
    uVar24 = ZAxis.field0_0x0._8_4_;
    uVar25 = ZAxis.field0_0x0._12_4_;
    uVar26 = uVar18;
    uVar28 = uVar19;
    break;
  case CubeFace_NegZ:
    uVar25 = ZAxis.field0_0x0._12_4_ ^ uVar21;
    uVar23 = ZAxis.field0_0x0._4_4_ ^ uVar21;
    local_d8 = (double)CONCAT44(uVar25,ZAxis.field0_0x0._8_4_ ^ uVar20);
    uVar22 = ZAxis.field0_0x0._0_4_ ^ uVar20;
    uVar24 = ZAxis.field0_0x0._8_4_ ^ uVar20;
    uVar26 = uVar18 ^ uVar20;
    uVar28 = uVar19 ^ uVar21;
    break;
  default:
    uVar22 = local_d8._8_4_;
    local_d8 = dVar4;
    uVar23 = uStack_d0._4_4_;
    uVar24 = uVar22;
    uVar25 = uStack_d0._4_4_;
    uVar26 = (uint)local_c8;
    uVar28 = (uint)((ulonglong)local_c8 >> 0x20);
  }
  dVar9 = (double)CONCAT44(uVar25,uVar24) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar13 = (double)CONCAT44(uVar28,uVar26) * (double)CONCAT44(uVar32,uVar31) -
           local_e8 * (double)CONCAT44(uVar25,uVar24);
  dVar14 = local_e8 * (double)CONCAT44(uVar23,uVar22) -
           (double)CONCAT44(uVar28,uVar26) * (double)CONCAT44(uVar30,uVar29);
  dVar15 = (double)CONCAT44(uVar30,uVar29) * (double)CONCAT44(uVar25,uVar24) -
           (double)CONCAT44(uVar32,uVar31) * (double)CONCAT44(uVar23,uVar22);
  dVar12 = dVar14 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar4 = dVar13 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar6 = dVar15 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = (double)CONCAT44(uVar23,uVar22) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar10 = (double)CONCAT44(uVar30,uVar29) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
           + (double)CONCAT44(uVar32,uVar31) *
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
           local_e8 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar7 = (double)CONCAT44(uVar28,uVar26) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar1._8_4_ = uVar29;
  auVar1._0_8_ = dVar13;
  auVar1._12_4_ = uVar30;
  *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar1;
  __return_storage_ptr__->M[0][2] = (double)CONCAT44(uVar23,uVar22);
  __return_storage_ptr__->M[0][3] = 0.0;
  auVar2._8_4_ = uVar31;
  auVar2._0_8_ = dVar14;
  auVar2._12_4_ = uVar32;
  *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar2;
  __return_storage_ptr__->M[1][2] = local_d8;
  __return_storage_ptr__->M[1][3] = 0.0;
  auVar3._8_4_ = SUB84(local_e8,0);
  auVar3._0_8_ = dVar15;
  auVar3._12_4_ = (int)((ulonglong)local_e8 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar3;
  __return_storage_ptr__->M[2][2] = (double)CONCAT44(uVar28,uVar26);
  __return_storage_ptr__->M[2][3] = 0.0;
  auVar11._8_4_ = SUB84(dVar10,0);
  auVar11._0_8_ = dVar12 + dVar4 + dVar6;
  auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[3] = auVar11;
  auVar8._8_4_ = (int)uVar17;
  auVar8._0_8_ = dVar9 + dVar5 + dVar7;
  auVar8._12_4_ = (int)((ulonglong)uVar17 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar8;
  return __return_storage_ptr__;
}

// CalculatePrinciplePointOffsetForTiling @ 14ddd7a20

TVector4<double> * __thiscall
UMoviePipelineImagePassBase::CalculatePrinciplePointOffsetForTiling
          (UMoviePipelineImagePassBase *this,TVector4<double> *__return_storage_ptr__,
          FMoviePipelineRenderPassMetrics *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = (param_1->TileCounts).field0_0x0._s_0.X;
  iVar2 = (param_1->TileCounts).field0_0x0._s_0.Y;
  fVar7 = ((float)(param_1->TileIndexes).field0_0x0._s_0.X + __real_3f000000) -
          (float)iVar1 * __real_3f000000;
  fVar6 = ((float)(param_1->TileIndexes).field0_0x0._s_0.Y + __real_3f000000) -
          (float)iVar2 * __real_3f000000;
  dVar4 = (double)((float)((param_1->OverlappedPad).field0_0x0._s_0.X * 2) /
                   (float)(param_1->TileSize).field0_0x0._s_0.X + __real_3f800000);
  dVar5 = dVar4 / (double)iVar1;
  dVar3 = (double)((float)((param_1->OverlappedPad).field0_0x0._s_0.Y * 2) /
                   (float)(param_1->TileSize).field0_0x0._s_0.Y + __real_3f800000);
  (__return_storage_ptr__->field0_0x0)._s_0.X = ((double)(fVar7 + fVar7) / dVar4) * dVar5;
  dVar4 = dVar3 / (double)iVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5;
  dVar3 = ((double)(fVar6 + fVar6) / dVar3) * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  return __return_storage_ptr__;
}

// CalculateViewFamily @ 14ddd7ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FSceneViewFamilyContext,1> * __thiscall
UMoviePipelineImagePassBase::CalculateViewFamily
          (UMoviePipelineImagePassBase *this,
          TSharedPtr<FSceneViewFamilyContext,1> *__return_storage_ptr__,
          FMoviePipelineRenderPassMetrics *param_1,IViewCalcPayload *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  ESceneCaptureSource EVar4;
  undefined4 uVar5;
  FSceneViewFamilyContext *pFVar6;
  UMoviePipelineExecutorShot *pUVar7;
  longlong *plVar8;
  FSceneViewExtensions *this_00;
  FSceneView *this_01;
  code *pcVar9;
  UEngine *pUVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  FStaticShaderPlatform FVar14;
  EAntiAliasingMethod EVar15;
  uint uVar16;
  TSharedPtr<FSceneViewFamilyContext,1> *pTVar17;
  UTextureRenderTarget *this_02;
  FTextureRenderTargetResource *pFVar18;
  UMoviePipeline *pUVar19;
  longlong lVar20;
  ConstructionValues *pCVar21;
  TReferenceControllerBase<1> *pTVar22;
  UMoviePipelineImagePassBase *this_03;
  FLegacyScreenPercentageDriver *pFVar23;
  UMoviePipelinePrimaryConfig *this_04;
  UClass *pUVar24;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar25;
  int iVar26;
  FStaticBasicLogRecord *pFVar27;
  uint uVar28;
  TReferenceControllerBase<1> *pTVar29;
  longlong *plVar30;
  ForAnyElementType FVar31;
  ulonglong uVar32;
  TObjectPtr<UClass>_u_0 *pTVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  TObjectPtr<UClass>_u_0 *pTVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_268 [32];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [6];
  UMoviePipelineExecutorShot *local_230;
  uint local_228;
  undefined4 local_224;
  IViewCalcPayload *local_220;
  FWeakObjectPtr local_218;
  undefined1 local_210 [24];
  int local_1f8;
  TArray<UMoviePipelineViewFamilySetting_*,TSizedDefaultAllocator<32>_> local_1f0;
  int local_1e0;
  int local_1dc;
  FSceneViewFamilyContext *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> local_1c8;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_1b8;
  FSceneViewExtensionContext local_1a8;
  TSharedPtr<FSceneViewFamilyContext,1> *local_188;
  TObjectPtr<UClass>_u_0 local_180;
  ForAnyElementType local_178;
  FEngineShowFlags local_168;
  ConstructionValues local_128;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar29 = (TReferenceControllerBase<1> *)0x0;
  local_228 = 0;
  local_168.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_168.CustomShowFlags.NumBits = 0;
  local_168.CustomShowFlags.MaxBits = 0x80;
  local_168._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_168._8_8_ = _UNK_15060db28;
  local_168._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_168._24_8_ = _UNK_15060db28;
  local_220 = param_2;
  local_210._8_8_ = this;
  local_188 = __return_storage_ptr__;
  FEngineShowFlags::InitCustomShowFlags(&local_168,ESFIM_Game);
  local_168.Pivot = 0;
  local_168.LightInfluences = 0;
  local_168.HitProxies = 0;
  local_168.Bounds = 0;
  local_168.ModeWidgets = 0;
  local_168.EditingLevelInstance = 0;
  local_168.Selection = 0;
  local_168.Splines = 0;
  local_168.Cover = 0;
  local_168.MeshEdges = 0;
  local_168.Snap = 0;
  local_168.Grid = 0;
  local_168.LargeVertices = 0;
  local_168.Editor = 0;
  local_168.Brushes = 0;
  local_168.BSPSplit = 0;
  local_168.AudioRadius = 0;
  local_168.CameraFrustums = 0;
  local_168.MassProperties = 0;
  local_168.Constraints = 0;
  local_168.StreamingBounds = 0;
  local_168.LightMapDensity = 0;
  local_168.StationaryLightOverlap = 0;
  local_168.ShaderComplexity = 0;
  local_168.LightComplexity = 0;
  local_168.VisualizeInstanceUpdates = 0;
  local_168.HISMCClusterTree = 0;
  local_168.HISMCOcclusionBounds = 0;
  local_168.Navigation = 0;
  local_168.DebugAI = 0;
  local_168.VisualizeSSS = 0;
  local_168.SelectionOutline = 0;
  local_168.VisualizeOutOfBoundsPixels = 0;
  local_168.VisualizeTSR = 0;
  local_168.VisualizeTemporalUpscaler = 0;
  local_168.VisualizeReprojection = 0;
  local_168.VisualizeMotionVectors = 0;
  local_168.VisualizeMotionBlur = 0;
  local_168.ScreenPercentage = 1;
  local_168.PhysicalMaterialMasks = 0;
  local_168.VertexColors = 0;
  local_168.VisualizeDOF = 0;
  local_168.TestImage = 0;
  local_168.OpaqueCompositeEditorPrimitives = 0;
  local_168.CompositeEditorPrimitives = 0;
  local_168.CompositeDebugPrimitives = 1;
  local_168.MotionBlur = 1;
  local_168.GBufferHints = 0;
  local_168.VectorFields = 0;
  local_168.VisualizeVirtualShadowMap = 0;
  local_168.VisualizeGroom = 0;
  local_168.VisualizeSubstrate = 0;
  local_168.VisualizeLumen = 0;
  local_168.VisualizeNanite = 0;
  local_168.VisualizeBuffer = 0;
  local_168.MaterialAmbientOcclusion = 1;
  local_168.MaterialNormal = 1;
  local_168.ReflectionOverride = 0;
  local_168.LightingOnlyOverride = 0;
  local_168.OverrideDiffuseAndSpecular = 0;
  local_168.VisualizeLocalExposure = 0;
  local_168.VisualizeLocalFogVolumes = 0;
  local_168.VisualizeSkyLightIlluminance = 0;
  local_168.VisualizeHDR = 0;
  local_168.DisableOcclusionQueries = 0;
  local_168.VisualizeInstanceOcclusionQueries = 0;
  local_168.OcclusionMeshes = 0;
  local_168.VREditing = 0;
  local_168.ServerDrawDebug = 0;
  local_168.Bones = 0;
  local_168.VisualizeVirtualTexture = 0;
  local_168.RequiredTextureResolution = 0;
  local_168.OutputMaterialTextureScales = 0;
  local_168.MaterialTextureScaleAccuracy = 0;
  local_168.MeshUVDensityAccuracy = 0;
  local_168.PrimitiveDistanceAccuracy = 0;
  local_168.ShaderComplexityWithQuadOverdraw = 0;
  local_168.QuadOverdraw = 0;
  local_168.HLODColoration = 0;
  local_168.LODColoration = 0;
  local_168.VisualizeShadingModels = 0;
  local_168.VisualizeSSR = 0;
  local_168.VisualizeLightingOnProbes = 0;
  local_168.VisualizeGlobalDistanceField = 0;
  local_168.PhysicsField = 0;
  local_168.VisualizeMeshDistanceFields = 0;
  local_168.VisualizeDistanceFieldAO = 0;
  local_168.VolumeLightingSamples = 0;
  local_168.VisualizeVolumetricLightmap = 0;
  local_168.PrecomputedVisibilityCells = 0;
  local_168.VisualizeLightCulling = 0;
  local_168.DistanceCulledPrimitives = 0;
  local_168.StereoRendering = 0;
  local_168.HMDDistortion = 0;
  local_168.HighResScreenshotMask = 0;
  local_168.CameraSafeFrames = 0;
  local_168.CameraAspectRatioBars = 0;
  local_168.CollisionPawn = 0;
  local_168.CollisionVisibility = 0;
  local_168.Collision = 0;
  local_168.ActorColoration = 0;
  local_168.Game = 1;
  local_168.Volumes = 0;
  local_168.LightRadius = 0;
  local_168.Wireframe = 0;
  local_168.ShadowFrustums = 0;
  local_168.RandomColor = 0;
  local_168.FrontBackFace = 0;
  local_168.Zebra = 0;
  local_168.Clay = 0;
  local_168.StereoMotionVectors = 0;
  local_168.AlphaInvert = 0;
  local_168.SceneCaptureCopySceneDepth = 1;
  local_168.VisualizeShadowCasters = 0;
  local_168.VisualizeLWCComplexity = 0;
  local_168.VisualizeGPUSkinCache = 0;
  local_168.LumenShortRangeAmbientOcclusion = 1;
  local_168.LumenSecondaryBounces = 1;
  local_168.LumenFarFieldTraces = 1;
  local_168.LumenGlobalTraces = 1;
  local_168.LumenDetailTraces = 1;
  local_168.LumenScreenTraces = 1;
  local_168.DebugDrawDistantVirtualSMLights = 0;
  local_168.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_168.VisualizeVolumetricCloudConservativeDensity = 0;
  local_168.VirtualTexturePrimitives = 0;
  local_168.VisualizePostProcessStack = 0;
  local_168.VisualizeCalibrationCustom = 0;
  local_168.VisualizeCalibrationGrayscale = 0;
  local_168.VisualizeCalibrationColor = 0;
  local_168.VisualizeLightFunctionAtlas = 0;
  local_168.VisualizeSkyAtmosphere = 0;
  local_168.RayTracingDebug = 0;
  local_168.PathTracing = 0;
  (**(code **)(this->_padding_ + 0x3b0))(this,&local_168,&local_224);
  (**(code **)(this->_padding_ + 0x3d0))(this,&local_168);
  (**(code **)(this->_padding_ + 0x420))(this,&local_218,&param_1->BackbufferSize,param_2);
  bVar11 = FWeakObjectPtr::IsValid(&local_218);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ViewRenderTarget.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImagePassBase.cpp"
                          ,0xb8,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  this_02 = (UTextureRenderTarget *)FWeakObjectPtr::Get(&local_218);
  pFVar18 = UTextureRenderTarget::GameThread_GetRenderTargetResource(this_02);
  pTVar22 = (TReferenceControllerBase<1> *)&pFVar18->_padding_;
  if (pFVar18 == (FTextureRenderTargetResource *)0x0) {
    pTVar22 = pTVar29;
  }
  local_230 = (UMoviePipelineExecutorShot *)&local_1b8;
  local_1b8.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  lVar20 = (**(code **)(pUVar19->_padding_ + 0x180))(pUVar19);
  pCVar21 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_128,(FRenderTarget *)pTVar22,*(FSceneInterface **)(lVar20 + 600),
                       &local_168,&local_1b8);
  fVar40 = (float)(param_1->OutputState).TimeData.FrameDeltaTime;
  dVar3 = (param_1->OutputState).TimeData.WorldSeconds;
  (pCVar21->Time).RealTimeSeconds = dVar3;
  (pCVar21->Time).WorldTimeSeconds = dVar3;
  (pCVar21->Time).DeltaRealTimeSeconds = fVar40;
  (pCVar21->Time).DeltaWorldTimeSeconds = fVar40;
  pCVar21->bRealtimeUpdate = 1;
  pCVar21->bTimesSet = 1;
  pTVar22 = ::operator_new(0x1c8);
  local_230 = (UMoviePipelineExecutorShot *)pTVar22;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    pTVar22->SharedReferenceCount = (atomic<int>)0x1;
    pTVar22->WeakReferenceCount = (atomic<int>)0x1;
    pTVar22->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSceneViewFamilyContext___00_SharedPointerInternals__6B_
    ;
    FSceneViewFamilyContext::FSceneViewFamilyContext
              ((FSceneViewFamilyContext *)(pTVar22 + 1),pCVar21);
    pTVar29 = pTVar22;
  }
  pFVar6 = (FSceneViewFamilyContext *)(pTVar29 + 1);
  local_1d8 = pFVar6;
  local_1d0 = pTVar29;
  if ((pFVar6 == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  __return_storage_ptr__->Object = pFVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar29;
  if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_228 = local_228 | 7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_128.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_128.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  EVar4 = param_1->SceneCaptureSource;
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  *(ESceneCaptureSource *)&__return_storage_ptr__->Object->field_0xcc = EVar4;
  bVar11 = param_1->bWorldIsPaused;
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  __return_storage_ptr__->Object->field_0xd5 = bVar11;
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  *(undefined4 *)&__return_storage_ptr__->Object->field_0x28 = local_224;
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  __return_storage_ptr__->Object->field_0x10a = 1;
  pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  if (pUVar19->bHasRenderedFirstViewThisFrame == false) {
    pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar19->bHasRenderedFirstViewThisFrame = true;
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    __return_storage_ptr__->Object->field_0xc7 = 1;
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    __return_storage_ptr__->Object->field_0xc0 = 0;
  }
  else {
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    __return_storage_ptr__->Object->field_0xc7 = 0;
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    __return_storage_ptr__->Object->field_0xc0 = 1;
  }
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  pFVar6 = __return_storage_ptr__->Object;
  if ((pFVar6 == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  ApplyViewMode(*(EViewModeIndex *)&__return_storage_ptr__->Object->field_0x28,true,
                (FEngineShowFlags *)&pFVar6->field_0x48);
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  pFVar6 = __return_storage_ptr__->Object;
  if ((pFVar6 == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  EngineShowFlagOverride
            (ESFIM_Game,*(EViewModeIndex *)&__return_storage_ptr__->Object->field_0x28,
             (FEngineShowFlags *)&pFVar6->field_0x48,false);
  pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  uVar35 = (param_1->OutputState).ShotIndex;
  uVar28 = 0;
  if ((int)uVar35 < (pUVar19->ActiveShotList).ArrayNum) {
    uVar28 = ~uVar35 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  pUVar7 = *(UMoviePipelineExecutorShot **)
            ((pUVar19->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar35 * 8);
  local_230 = pUVar7;
  pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  UMoviePipeline::FindSettingsForShot<UMoviePipelineGameOverrideSetting>
            (pUVar19,(TArray<UMoviePipelineGameOverrideSetting_*,TSizedDefaultAllocator<32>_> *)
                     (local_210 + 0x10),pUVar7);
  iVar26 = local_1f8;
  plVar8 = (longlong *)(local_210._16_8_ + (longlong)local_1f8 * 8);
  plVar30 = (longlong *)local_210._16_8_;
  while( true ) {
    if (local_1f8 != iVar26) {
      local_238 = 0;
      `TCheckedPointerIterator<UMoviePipelineGameOverrideSetting_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_238);
    }
    if (plVar30 == plVar8) break;
    if (*(char *)(*plVar30 + 0xa1) != '\0') {
      uVar5 = *(undefined4 *)(*plVar30 + 0xa4);
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      *(undefined4 *)&__return_storage_ptr__->Object->field_0x10c = uVar5;
    }
    plVar30 = plVar30 + 1;
  }
  if ((longlong *)local_210._16_8_ != (longlong *)0x0) {
    FMemory::Free((void *)local_210._16_8_);
  }
  if (((param_1->TileIndexes).field0_0x0._s_0.X == -1) &&
     ((param_1->TileIndexes).field0_0x0._s_0.Y == -1)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  cVar13 = (**(code **)(this->_padding_ + 0x3d8))(this);
  if ((cVar13 == '\0') || (bVar11)) {
    bVar12 = false;
    if (bVar11) {
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      puVar1 = &__return_storage_ptr__->Object->field_0x4c;
      *(uint *)puVar1 = *(uint *)puVar1 & 0xffbfffff;
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      puVar1 = &__return_storage_ptr__->Object->field_0x4c;
      *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffdff;
    }
  }
  else {
    pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UMoviePipeline::FindSettingsForShot<UMoviePipelineViewFamilySetting>
              (pUVar19,&local_1f0,local_230);
    iVar26 = local_1f0.ArrayNum;
    pFVar2 = local_1f0.AllocatorInstance.Data + (longlong)iVar26 * 8;
    FVar31.Data = local_1f0.AllocatorInstance.Data;
    while( true ) {
      if (local_1f0.ArrayNum != iVar26) {
        local_237 = 0;
        `TCheckedPointerIterator<UMoviePipelineViewFamilySetting_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_237);
      }
      this = (UMoviePipelineImagePassBase *)local_210._8_8_;
      if (FVar31.Data == pFVar2) break;
      plVar8 = *(longlong **)FVar31.Data;
      pcVar9 = *(code **)(*plVar8 + 0x348);
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      (*pcVar9)(plVar8,__return_storage_ptr__->Object);
      FVar31.Data = FVar31.Data + 8;
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    bVar12 = true;
  }
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  if (*(longlong *)&__return_storage_ptr__->Object->field_0x180 == 0) {
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    pFVar6 = __return_storage_ptr__->Object;
    this_03 = ::operator_new(0x18);
    local_210._8_8_ = this_03;
    if (this_03 == (UMoviePipelineImagePassBase *)0x0) {
      pFVar23 = (FLegacyScreenPercentageDriver *)0x0;
    }
    else {
      fVar40 = __real_3f800000;
      if (bVar12) {
        fVar40 = param_1->GlobalScreenPercentageFraction;
      }
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      pFVar23 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                          ((FLegacyScreenPercentageDriver *)this_03,
                           (FSceneViewFamily *)__return_storage_ptr__->Object,fVar40);
    }
    if ((pFVar23 == (FLegacyScreenPercentageDriver *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InScreenPercentageInterface",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                            ,0xa24,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    if ((*(longlong *)&pFVar6->field_0x180 != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScreenPercentageInterface == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                            ,0xa25,
                            L"View family already had a screen percentage interface assigned."),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    *(FLegacyScreenPercentageDriver **)&pFVar6->field_0x180 = pFVar23;
  }
  uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar3 = __real_3fe0000000000000;
  fVar40 = __real_322bcc77;
  iVar26 = 1;
  if (param_1->bAutoExposureCubePass != false) {
    iVar26 = 6;
  }
  local_230 = (UMoviePipelineExecutorShot *)CONCAT44(local_230._4_4_,iVar26);
  iVar34 = 0;
  do {
    param_1->AutoExposureCubeFace = (schar)iVar34;
    lVar20 = (**(code **)(this->_padding_ + 0x410))
                       (this,__return_storage_ptr__->Object,param_1,local_220);
    (**(code **)(this->_padding_ + 0x3c8))(this,lVar20);
    if (&local_1e0 != (int *)(lVar20 + 0x125c)) {
      *(int *)(lVar20 + 0x125c) = param_1->FrameIndex;
      *(undefined1 *)(lVar20 + 0x1260) = 1;
    }
    if (&local_1dc != (int *)(lVar20 + 0x1264)) {
      *(int *)(lVar20 + 0x1264) = (param_1->OutputState).OutputFrameNumber;
      *(undefined1 *)(lVar20 + 0x1268) = 1;
    }
    *(bool *)(lVar20 + 0x11cc) = param_1->bCameraCut;
    *(undefined1 *)(lVar20 + 0x11ef) = 1;
    cVar13 = (**(code **)(this->_padding_ + 0x3e0))(this);
    if (cVar13 == '\0') {
      EVar15 = AAM_None;
    }
    else {
      EVar15 = param_1->AntiAliasingMethod;
    }
    *(EAntiAliasingMethod *)(lVar20 + 0x1b90) = EVar15;
    pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    this_04 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar19);
    UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UMoviePipelinePrimaryConfig::GetEffectiveFrameRate(this_04,(ULevelSequence *)local_210);
    fVar38 = (param_1->OutputState).TimeData.TimeDilation;
    if (fVar38 <= fVar40) {
      fVar38 = fVar40;
    }
    *(int *)(lVar20 + 0x1a00) =
         (int)((longlong)
               ROUND(((double)(int)local_210._0_4_ + (double)(int)local_210._0_4_) /
                     ((double)fVar38 * (double)(int)local_210._4_4_) + dVar3) >> 1);
    *(float *)(lVar20 + 0x19f8) = (param_1->OutputState).TimeData.MotionBlurFraction;
    *(undefined4 *)(lVar20 + 0x19fc) = 0x42c80000;
    *(byte *)(lVar20 + 0x133e) = *(byte *)(lVar20 + 0x133e) | 1;
    *(byte *)(lVar20 + 0x133d) = *(byte *)(lVar20 + 0x133d) | 0xc0;
    if ((float)((uint)(param_1->OutputState).TimeData.MotionBlurFraction & uVar35) <= fVar40) {
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      puVar1 = &__return_storage_ptr__->Object->field_0x4c;
      *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffdff;
    }
    cVar13 = (**(code **)(this->_padding_ + 0x408))(this,param_1);
    if ((cVar13 == '\0') && (*(char *)(lVar20 + 0x1356) != '\x02')) {
      pUVar24 = Z_Construct_UClass_URendererSettings_NoRegister();
      if ((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar24);
      }
      if (((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr[7].field_0x8 & 0x40) != 0) {
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        *(undefined1 *)(lVar20 + 0x1356) = 2;
      }
    }
    iVar34 = iVar34 + 1;
  } while (iVar34 < iVar26);
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  pUVar10 = GEngine;
  pFVar6 = __return_storage_ptr__->Object;
  if (((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  this_00 = (pUVar10->ViewExtensions).Object;
  lVar20 = (**(code **)(this->_padding_ + 0x180))(this);
  local_1a8.Scene = *(FSceneInterface **)(lVar20 + 600);
  local_1a8._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  local_1a8.Viewport = (FViewport *)0x0;
  local_1a8.bStereoEnabled = false;
  pTVar25 = FSceneViewExtensions::GatherActiveExtensions(this_00,&local_1c8,&local_1a8);
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::
  Append<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>
            ((TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *)
             &pFVar6->field_0xe8,pTVar25);
  DestructItems<TSharedRef<ISceneViewExtension,1>,int>
            ((TSharedRef<ISceneViewExtension,1> *)local_1c8.AllocatorInstance.Data,
             local_1c8.ArrayNum);
  if ((TSharedRef<ISceneViewExtension,1> *)local_1c8.AllocatorInstance.Data !=
      (TSharedRef<ISceneViewExtension,1> *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  local_1a8._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  pcVar9 = *(code **)(this->_padding_ + 0x400);
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  (*pcVar9)(this,__return_storage_ptr__->Object,param_1);
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  pFVar6 = __return_storage_ptr__->Object;
  pTVar33 = *(TObjectPtr<UClass>_u_0 **)&pFVar6->field_0xe8;
  iVar26 = *(int *)&pFVar6->field_0xf0;
  pTVar37 = pTVar33 + (longlong)iVar26 * 2;
  while( true ) {
    if (*(int *)&pFVar6->field_0xf0 != iVar26) {
      local_236[0] = 0;
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_236);
    }
    if (pTVar33 == pTVar37) break;
    local_180 = (TObjectPtr<UClass>_u_0)pTVar33->DebugPtr;
    pUVar24 = pTVar33[1].DebugPtr;
    if (pUVar24 != (UClass *)0x0) {
      LOCK();
      *(atomic<int> *)&pUVar24->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pUVar24->_padding_ + 1);
      UNLOCK();
    }
    local_178.Data = (FScriptContainerElement *)pUVar24;
    (**(code **)(local_180.DebugPtr)->_padding_)(local_180.DebugPtr,__return_storage_ptr__->Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar24);
    pTVar33 = pTVar33 + 2;
  }
  if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
    return pTVar17;
  }
  __return_storage_ptr__->Object->field_0xca = 1;
  fVar38 = __real_bfb8aa3b;
  fVar40 = __real_3fb8aa3b;
  uVar35 = 0;
  local_220 = (IViewCalcPayload *)((ulonglong)local_230 & 0xffffffff);
  local_230 = (UMoviePipelineExecutorShot *)0x0;
  do {
    pUVar7 = local_230;
    uVar32 = 0;
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    pFVar6 = __return_storage_ptr__->Object;
    uVar28 = 0;
    if ((int)uVar35 < *(int *)&pFVar6->field_0x10) {
      uVar28 = ~uVar35 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    this_01 = *(FSceneView **)(*(longlong *)&pFVar6->field_0x8 + (longlong)pUVar7 * 8);
    uVar36 = uVar32;
    while( true ) {
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      uVar28 = (uint)uVar32;
      if (*(int *)&__return_storage_ptr__->Object->field_0xf0 <= (int)uVar28) break;
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      pFVar6 = __return_storage_ptr__->Object;
      uVar16 = 0;
      if ((int)uVar28 < *(int *)&pFVar6->field_0xf0) {
        uVar16 = ~uVar28 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      plVar8 = *(longlong **)(uVar36 + *(longlong *)&pFVar6->field_0xe8);
      (**(code **)(*plVar8 + 8))(plVar8,__return_storage_ptr__->Object,this_01);
      uVar32 = (ulonglong)(uVar28 + 1);
      uVar36 = uVar36 + 0x10;
    }
    if (this_01->AntiAliasingMethod == AAM_TemporalAA) {
      FVar14.Platform = FSceneView::GetShaderPlatform(this_01);
      bVar11 = SupportsGen4TAA(FVar14);
      if (bVar11) goto LAB_14ddd8b5c;
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        pFVar27 = &::LOG_Static;
LAB_14ddd8b89:
        UE::Logging::Private::BasicLog<2>(pFVar27,(FLogCategoryBase *)&LogMovieRenderPipeline);
      }
LAB_14ddd8b95:
      this_01->AntiAliasingMethod = AAM_None;
    }
    else {
LAB_14ddd8b5c:
      if (this_01->AntiAliasingMethod == AAM_TSR) {
        FVar14.Platform = FSceneView::GetShaderPlatform(this_01);
        bVar11 = SupportsTSR(FVar14);
        if (!bVar11) {
          if (1 < (byte)LogMovieRenderPipeline._0_1_) {
            pFVar27 = &::LOG_Static;
            goto LAB_14ddd8b89;
          }
          goto LAB_14ddd8b95;
        }
      }
    }
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    if ((((__return_storage_ptr__->Object->field_0x60 & 1) == 0) &&
        (this_01->AntiAliasingMethod != AAM_TemporalAA)) && (this_01->AntiAliasingMethod != AAM_TSR)
       ) {
      FViewMatrices::HackAddTemporalAAProjectionJitter
                (&this_01->ViewMatrices,&param_1->ProjectionMatrixJitterAmount);
    }
    if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
      return pTVar17;
    }
    if ((__return_storage_ptr__->Object->field_0x60 & 1) != 0) {
      if ((__return_storage_ptr__->Object == (FSceneViewFamilyContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar17 = (TSharedPtr<FSceneViewFamilyContext,1> *)(*pcVar9)();
        return pTVar17;
      }
      if (((*(uint *)&__return_storage_ptr__->Object->field_0x4c & 0x200) == 0) &&
         ((param_1->TileCounts).field0_0x0._s_0.Y * (param_1->TileCounts).field0_0x0._s_0.X < 2)) {
        iVar26 = param_1->SpatialSampleCount * param_1->TemporalSampleIndex +
                 param_1->SpatialSampleIndex;
        iVar34 = param_1->SpatialSampleCount * param_1->TemporalSampleCount;
      }
      else {
        iVar26 = param_1->SpatialSampleIndex;
        iVar34 = param_1->SpatialSampleCount;
      }
      puVar1 = &(this_01->FinalPostProcessSettings).field_0x30;
      *(uint *)puVar1 = *(uint *)puVar1 | 0x10;
      *(int *)&(this_01->FinalPostProcessSettings).field_0x73c = iVar34;
      this_01->bForcePathTracerReset = iVar26 == 0;
      param_1->bDiscardResult = (bool)(param_1->bDiscardResult | iVar26 != iVar34 + -1);
    }
    if (1 < (param_1->TileCounts).field0_0x0._s_0.Y * (param_1->TileCounts).field0_0x0._s_0.X) {
      this_01->bForceCameraVisibilityReset = true;
    }
    fVar39 = logf((float)(param_1->TileCounts).field0_0x0._s_0.X);
    this_01->MaterialTextureMipBias = fVar39 * fVar38;
    this_01->MaterialTextureMipBias = param_1->TextureSharpnessBias - fVar39 * fVar40;
    uVar35 = uVar35 + 1;
    local_230 = (UMoviePipelineExecutorShot *)((longlong)local_230 + 1);
    if ((longlong)local_220 <= (longlong)local_230) {
      if (local_168.CustomShowFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_168.CustomShowFlags.AllocatorInstance.SecondaryData);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// CreateSurfaceQueueImpl @ 14ddda610

TSharedPtr<FMoviePipelineSurfaceQueue,1> * __thiscall
UMoviePipelineImagePassBase::CreateSurfaceQueueImpl
          (UMoviePipelineImagePassBase *this,
          TSharedPtr<FMoviePipelineSurfaceQueue,1> *__return_storage_ptr__,TIntPoint<int> *param_1,
          IViewCalcPayload *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FMoviePipelineSurfaceQueue,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMoviePipelineSurfaceQueue___00_SharedPointerInternals__6B_
    ;
    FMoviePipelineSurfaceQueue::FMoviePipelineSurfaceQueue
              ((FMoviePipelineSurfaceQueue *)(pTVar3 + 1),(TIntPoint<int>)(param_1->field0_0x0)._s_0
               ,PF_FloatRGBA,3,true);
  }
  if ((FMoviePipelineSurfaceQueue *)(pTVar3 + 1) == (FMoviePipelineSurfaceQueue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FMoviePipelineSurfaceQueue,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (FMoviePipelineSurfaceQueue *)(pTVar3 + 1);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateViewRenderTargetImpl @ 14ddda960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr> __thiscall
UMoviePipelineImagePassBase::CreateViewRenderTargetImpl
          (UMoviePipelineImagePassBase *this,TIntPoint<int> *param_1,IViewCalcPayload *param_2)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UTextureRenderTarget2D *this_00;
  FUObjectItem *this_01;
  UMoviePipeline *pUVar4;
  UTexture *pUVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  UObject *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar1 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar2);
  local_b8._8_8_ = pUVar1;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  param_1->field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_c8[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_c8);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  *(undefined8 *)&pUVar3[8].field_0x20 = 0;
  *(undefined8 *)(pUVar3 + 9) = 0;
  fVar7 = UTextureRenderTarget::GetDefaultDisplayGamma();
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  *(float *)&pUVar3[8].field_0x10 = fVar7;
  this_00 = (UTextureRenderTarget2D *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  UTextureRenderTarget2D::InitCustomFormat
            (this_00,*(uint *)param_2,*(uint *)(param_2 + 4),PF_FloatRGBA,false);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
  FUObjectItem::SetRootFlags(this_01,RootSet);
  pUVar4 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar5 = (UTexture *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (pUVar4->PreviewTexture).field0_0x0.DebugPtr = pUVar5;
  return (TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GatherOutputPassesImpl @ 14dddd440

void __thiscall
UMoviePipelineImagePassBase::GatherOutputPassesImpl
          (UMoviePipelineImagePassBase *this,
          TArray<FMoviePipelinePassIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  FMoviePipelinePassIdentifier *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = &this->PassIdentifier;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x20)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
  ::FString::FString((FString *)pFVar5,&pFVar1->Name);
  ::FString::FString((FString *)(pFVar5 + 0x10),&(this->PassIdentifier).CameraName);
  return;
}

// GetCameraInfo @ 14dddf860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FImagePassCameraViewData * __thiscall
UMoviePipelineImagePassBase::GetCameraInfo
          (UMoviePipelineImagePassBase *this,FImagePassCameraViewData *__return_storage_ptr__,
          FMoviePipelineRenderPassMetrics *param_1,IViewCalcPayload *param_2)

{
  TOptional<UE::Math::TTransform<double>_> *pTVar1;
  double dVar2;
  int iVar3;
  UCineCameraComponent *pUVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  UMoviePipeline *pUVar14;
  UWorld *pUVar15;
  APlayerController *pAVar16;
  FMinimalViewInfo *pFVar17;
  TQuat<double> *pTVar18;
  AActor *pAVar19;
  UClass *pUVar20;
  TQuat<double> local_88;
  undefined8 local_68 [12];
  
  UE::MoviePipeline::FImagePassCameraViewData::FImagePassCameraViewData(__return_storage_ptr__);
  pUVar14 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar15 = (UWorld *)(**(code **)(pUVar14->_padding_ + 0x180))(pUVar14);
  pAVar16 = UWorld::GetFirstPlayerController(pUVar15);
  if ((pAVar16->PlayerCameraManager).field0_0x0.DebugPtr != (APlayerCameraManager *)0x0) {
    pUVar14 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar15 = (UWorld *)(**(code **)(pUVar14->_padding_ + 0x180))(pUVar14);
    pAVar16 = UWorld::GetFirstPlayerController(pUVar15);
    pFVar17 = (FMinimalViewInfo *)
              (**(code **)(((pAVar16->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x798))
                        ();
    FMinimalViewInfo::operator=(&__return_storage_ptr__->ViewInfo,pFVar17);
    dVar2 = (param_1->FrameInfo).CurrViewLocation.field0_0x0._s_0.Y;
    (__return_storage_ptr__->ViewInfo).Location.field0_0x0._s_0.X =
         (param_1->FrameInfo).CurrViewLocation.field0_0x0._s_0.X;
    (__return_storage_ptr__->ViewInfo).Location.field0_0x0._s_0.Y = dVar2;
    (__return_storage_ptr__->ViewInfo).Location.field0_0x0._s_0.Z =
         (param_1->FrameInfo).CurrViewLocation.field0_0x0._s_0.Z;
    dVar2 = (param_1->FrameInfo).CurrViewRotation.Yaw;
    (__return_storage_ptr__->ViewInfo).Rotation.Pitch = (param_1->FrameInfo).CurrViewRotation.Pitch;
    (__return_storage_ptr__->ViewInfo).Rotation.Yaw = dVar2;
    (__return_storage_ptr__->ViewInfo).Rotation.Roll = (param_1->FrameInfo).CurrViewRotation.Roll;
    pTVar18 = UE::Math::TRotator<double>::Quaternion
                        (&(param_1->FrameInfo).PrevViewRotation,&local_88);
    dVar13 = _UNK_150689688;
    dVar12 = ___xmm_3ff00000000000003ff0000000000000;
    dVar11 = _UNK_150689518;
    dVar10 = ___xmm_00000000000000003ff0000000000000;
    dVar5 = pTVar18->Y;
    dVar6 = pTVar18->Z;
    dVar7 = pTVar18->W;
    dVar8 = (param_1->FrameInfo).PrevViewLocation.field0_0x0._s_0.X;
    dVar9 = (param_1->FrameInfo).PrevViewLocation.field0_0x0._s_0.Y;
    dVar2 = (param_1->FrameInfo).PrevViewLocation.field0_0x0._s_0.Z;
    pTVar1 = &(__return_storage_ptr__->ViewInfo).PreviousViewTransform;
    if ((TOptional<UE::Math::TTransform<double>_> *)local_68 != pTVar1) {
      (pTVar1->TypedValue).Rotation.XY.m128d_f64[0] = pTVar18->X;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Rotation.XY.m128d_f64[1] =
           dVar5;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[0] =
           dVar6;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64[1] =
           dVar7;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64
      [0] = dVar8;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Translation.XY.m128d_f64
      [1] = dVar9;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64
      [0] = dVar2;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Translation.ZW.m128d_f64
      [1] = 0.0;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[0] =
           dVar12;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1] =
           dVar13;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[0] =
           dVar10;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64[1] =
           dVar11;
      (__return_storage_ptr__->ViewInfo).PreviousViewTransform.bIsSet = true;
    }
    pUVar14 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar15 = (UWorld *)(**(code **)(pUVar14->_padding_ + 0x180))(pUVar14);
    pAVar16 = UWorld::GetFirstPlayerController(pUVar15);
    pAVar19 = (AActor *)(**(code **)(pAVar16->_padding_ + 0x7e0))(pAVar16);
    __return_storage_ptr__->ViewActor = pAVar19;
    pUVar15 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar16 = UWorld::GetFirstPlayerController(pUVar15);
    pAVar19 = APlayerCameraManager::GetViewTarget
                        ((pAVar16->PlayerCameraManager).field0_0x0.DebugPtr);
    if (pAVar19 != (AActor *)0x0) {
      pUVar20 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar3 = (int)pUVar20->_padding_;
      if (((iVar3 <= *(int *)(pAVar19->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar19->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar20->_padding_)) &&
         (pUVar4 = (UCineCameraComponent *)pAVar19[3].InstanceComponents.AllocatorInstance.Data,
         pUVar4 != (UCineCameraComponent *)0x0)) {
        UE::MoviePipeline::GetMetadataFromCineCamera
                  (pUVar4,&(this->PassIdentifier).CameraName,&(this->PassIdentifier).Name,
                   &__return_storage_ptr__->FileMetadata);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetExposureSceneViewStateInterface @ 14dddffe0

FSceneViewStateInterface * __thiscall
UMoviePipelineImagePassBase::GetExposureSceneViewStateInterface
          (UMoviePipelineImagePassBase *this,IViewCalcPayload *param_1,int param_2)

{
  return (FSceneViewStateInterface *)0x0;
}

// GetOrCreateSurfaceQueue @ 14dde2ab0

TSharedPtr<FMoviePipelineSurfaceQueue,1> * __thiscall
UMoviePipelineImagePassBase::GetOrCreateSurfaceQueue
          (UMoviePipelineImagePassBase *this,
          TSharedPtr<FMoviePipelineSurfaceQueue,1> *__return_storage_ptr__,TIntPoint<int> *param_1,
          IViewCalcPayload *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FMoviePipelineSurfaceQueue *local_40;
  TReferenceControllerBase<1> *local_38;
  TIntPoint<int> *local_30;
  FMoviePipelineSurfaceQueue **local_28;
  
  iVar10 = (param_1->field0_0x0)._s_0.X;
  uVar9 = (param_1->field0_0x0)._s_0.Y;
  uVar8 = iVar10 - uVar9 ^ uVar9 >> 0xd;
  uVar2 = (-0x61c88647 - uVar8) - uVar9 ^ uVar8 << 8;
  uVar6 = (uVar9 - uVar8) - uVar2 ^ uVar2 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar2 = (uVar2 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar8 ^ uVar2 >> 5;
  uVar8 = (uVar8 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar8) - uVar6 ^ uVar8 << 10;
  if (*(int *)&(this->SurfaceQueues).field_0x8 != *(int *)&(this->SurfaceQueues).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SurfaceQueues).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SurfaceQueues).field_0x38;
    }
    iVar7 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SurfaceQueues).field_0x48 - 1U &
                              ((uVar6 - uVar2) - uVar8 ^ uVar2 >> 0xf)) * 4);
    if (iVar7 != -1) {
      do {
        puVar5 = (undefined8 *)
                 ((longlong)iVar7 * 0x20 + *(longlong *)&(this->SurfaceQueues).field_0x0);
        if (((int)*puVar5 == iVar10) && ((uint)((ulonglong)*puVar5 >> 0x20) == uVar9)) {
          if (iVar7 != -1) {
            puVar3 = puVar5 + 1;
            if (puVar5 == (undefined8 *)0x0) {
              puVar3 = (undefined8 *)0x0;
            }
            if (puVar3 != (undefined8 *)0x0) {
              __return_storage_ptr__->Object = (FMoviePipelineSurfaceQueue *)*puVar3;
              pTVar1 = (TReferenceControllerBase<1> *)puVar3[1];
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
              if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
                return __return_storage_ptr__;
              }
              LOCK();
              pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
              UNLOCK();
              return __return_storage_ptr__;
            }
          }
          break;
        }
        iVar7 = *(int *)(puVar5 + 3);
      } while (iVar7 != -1);
    }
  }
  (**(code **)(this->_padding_ + 0x438))(this,&local_40,param_1,param_2);
  local_28 = &local_40;
  local_30 = param_1;
  TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>_>
            ((TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
              *)&this->SurfaceQueues,
             (TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>
              *)&stack0x00000008,(bool *)&local_30);
  __return_storage_ptr__->Object = local_40;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_38;
  if (local_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return __return_storage_ptr__;
}

// GetOrCreateViewRenderTarget @ 14dde2c90

TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr> __thiscall
UMoviePipelineImagePassBase::GetOrCreateViewRenderTarget
          (UMoviePipelineImagePassBase *this,TIntPoint<int> *param_1,IViewCalcPayload *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  TIntPoint<int>_u_0 *pTVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TIntPoint<int>_u_0 local_res18 [2];
  IViewCalcPayload *local_38;
  TIntPoint<int>_u_0 *local_30;
  
  iVar6 = (int)*(undefined8 *)param_2;
  uVar10 = (uint)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  uVar9 = iVar6 - uVar10 ^ uVar10 >> 0xd;
  uVar4 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
  uVar7 = (uVar10 - uVar9) - uVar4 ^ uVar4 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar9 ^ uVar4 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar9) - uVar7 ^ uVar9 << 10;
  if (*(int *)&(this->TileRenderTargets).field_0x8 != *(int *)&(this->TileRenderTargets).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->TileRenderTargets).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->TileRenderTargets).field_0x38;
    }
    iVar8 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->TileRenderTargets).field_0x48 - 1U &
                              ((uVar7 - uVar4) - uVar9 ^ uVar4 >> 0xf)) * 4);
    if (iVar8 != -1) {
      do {
        uVar2 = *(undefined8 *)(*(longlong *)&this->TileRenderTargets + (longlong)iVar8 * 0x18);
        lVar1 = *(longlong *)&this->TileRenderTargets + (longlong)iVar8 * 0x18;
        if (((int)uVar2 == iVar6) && ((uint)((ulonglong)uVar2 >> 0x20) == uVar10)) {
          if (iVar8 != -1) {
            pTVar3 = (TIntPoint<int>_u_0 *)(lVar1 + 8);
            if (lVar1 == 0) {
              pTVar3 = (TIntPoint<int>_u_0 *)0x0;
            }
            if (pTVar3 != (TIntPoint<int>_u_0 *)0x0) {
              local_res18[0] = *pTVar3;
              goto LAB_14dde2de7;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  (**(code **)(this->_padding_ + 0x430))(this,local_res18,param_2);
  local_30 = local_res18;
  local_38 = param_2;
  TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_const_&>_>
            ((TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->TileRenderTargets,
             (TPairInitializer<UE::Math::TIntPoint<int>_const_&,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_const_&>
              *)&stack0x00000008,(bool *)&local_38);
LAB_14dde2de7:
  param_1->field0_0x0 = local_res18[0];
  return (TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetOutputFileSortingOrder @ 14dde2e90

int __thiscall
UMoviePipelineImagePassBase::GetOutputFileSortingOrder(UMoviePipelineImagePassBase *this)

{
  return -1;
}

// GetPrivateStaticClass @ 14dde4020

UClass * __cdecl UMoviePipelineImagePassBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImagePassBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImagePassBase",
               &Z_Registration_Info_UClass_UMoviePipelineImagePassBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImagePassBase,0x178,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineImagePassBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineImagePassBase>,local_res8,
               UMoviePipelineRenderPass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImagePassBase.InnerSingleton;
}

// GetSceneViewForSampleState @ 14dde47a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FSceneView * __thiscall
UMoviePipelineImagePassBase::GetSceneViewForSampleState
          (UMoviePipelineImagePassBase *this,FSceneViewFamily *param_1,
          FMoviePipelineRenderPassMetrics *param_2,IViewCalcPayload *param_3)

{
  int *piVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FSceneViewFamily *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UMoviePipeline *pUVar11;
  UWorld *this_01;
  FSceneView *pFVar12;
  TInverseRotationMatrix<double> *pTVar13;
  TReversedZPerspectiveMatrix<double> *pTVar14;
  FString *pFVar15;
  uint uVar16;
  uint uVar17;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auStackY_1328 [32];
  FSceneView *local_12d8;
  float local_12d0;
  float local_12cc;
  float local_12c8;
  double local_12c0;
  uint local_12b8;
  uint uStack_12b4;
  double local_12b0;
  double local_12a8;
  FSceneView *local_12a0;
  FSceneViewFamily *local_1298;
  undefined1 local_1290 [8];
  undefined1 local_1288 [8];
  TPairInitializer<FString_&&,FString_&&> local_1280;
  TIntRect<int>_u_0 local_1270;
  FString *local_1260;
  FString *local_1258;
  FString local_1250;
  FString *local_1240;
  FString *local_1238;
  FString local_1230;
  FString *local_1220;
  FString *local_1218;
  FString local_1210;
  FString *local_1200;
  FString *local_11f8;
  FString local_11f0;
  FString *local_11e0;
  FString *local_11d8;
  FString local_11d0;
  TIntRect<int> local_11c0;
  FString local_11b0;
  FString local_11a0;
  FString local_1190;
  FString local_1180;
  FString local_1170;
  TVector<double>_u_0 local_1158;
  double local_1138;
  double dStack_1130;
  double local_1128;
  undefined8 uStack_1120;
  double local_1118;
  double dStack_1110;
  double local_1108;
  undefined8 uStack_1100;
  double local_10f8;
  double dStack_10f0;
  double local_10e8;
  undefined8 uStack_10e0;
  double local_10d8;
  double dStack_10d0;
  double local_10c8;
  double dStack_10c0;
  TReversedZPerspectiveMatrix<double> local_10b8;
  TVector<double>_u_0 local_1038;
  TMatrix<double> local_1018;
  double local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  uint local_f18;
  uint uStack_f14;
  TIntPoint<int>_u_0 local_f10;
  uint local_ef0;
  uint uStack_eec;
  TIntPoint<int>_u_0 local_ee8;
  FSceneViewFamily *local_ee0;
  undefined8 local_ed8;
  undefined8 local_ed0;
  FSceneViewOwner local_ec8 [9];
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e38;
  void *local_df8;
  undefined4 local_df0;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_de8;
  void *local_da8;
  undefined4 local_da0;
  float local_d6c;
  float local_d68;
  TVector<double>_u_0 local_d28;
  TRotator<double> local_d10;
  float local_cf8;
  float local_ce8;
  float local_ccc;
  uchar local_cc8;
  char local_cc4;
  uint local_cc0;
  char local_cbc;
  void *local_550;
  double local_538;
  double local_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  char local_4c8;
  float local_498;
  undefined1 local_458 [72];
  undefined4 local_410;
  AActor *local_408;
  char local_400;
  double local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  TInverseRotationMatrix<double> local_178;
  ulonglong local_f8;
  undefined8 local_48;
  
  local_48 = 0x14dde47bf;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1328;
  local_12a0 = (FSceneView *)param_3;
  local_1298 = param_1;
  pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  this_01 = (UWorld *)(**(code **)(pUVar11->_padding_ + 0x180))(pUVar11);
  UWorld::GetFirstPlayerController(this_01);
  if (((param_2->TileIndexes).field0_0x0._s_0.X == -1) &&
     ((param_2->TileIndexes).field0_0x0._s_0.Y == -1)) {
    bVar6 = true;
    if (param_2->bAutoExposureCubePass == false) {
      uVar17 = (param_2->EffectiveOutputResolution).field0_0x0._s_0.X /
               (param_2->TileCounts).field0_0x0._s_0.X;
      uVar9 = (param_2->EffectiveOutputResolution).field0_0x0._s_0.Y /
              (param_2->TileCounts).field0_0x0._s_0.Y;
      if (((param_2->BackbufferSize).field0_0x0._s_0.X < (int)uVar17) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TileSizeX <= InOutSampleState.BackbufferSize.X",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImagePassBase.cpp"
                             ,0x1ee,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FSceneView *)(*pcVar5)();
        return pFVar12;
      }
      if (((param_2->BackbufferSize).field0_0x0._s_0.Y < (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TileSizeY <= InOutSampleState.BackbufferSize.Y",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImagePassBase.cpp"
                             ,0x1ef,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FSceneView *)(*pcVar5)();
        return pFVar12;
      }
      param_2->OverscanPercentage = 0.0;
    }
    else {
      TVar3 = (param_2->BackbufferSize).field0_0x0._s_0;
      uVar9 = TVar3.Y / 2;
      iVar10 = TVar3.X;
      uVar17 = iVar10 / 3 + (iVar10 >> 0x1f) +
               (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
      if ((int)uVar17 < (int)uVar9) {
        uVar9 = uVar17;
      }
      uVar9 = uVar9 & 0xfffffff8;
      if (((int)uVar9 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CubeCaptureSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImagePassBase.cpp"
                             ,0x1e0,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FSceneView *)(*pcVar5)();
        return pFVar12;
      }
      param_2->OverscanPercentage = 0.0;
      uVar17 = uVar9;
    }
  }
  else {
    bVar6 = false;
    uVar17 = (param_2->BackbufferSize).field0_0x0._s_0.X;
    uVar9 = (param_2->BackbufferSize).field0_0x0._s_0.Y;
  }
  (**(code **)(this->_padding_ + 0x418))(this,&local_d28,param_2);
  fVar29 = (float)(int)uVar17 / (float)(int)uVar9;
  local_12cc = fVar29;
  if (this->bAllowCameraAspectRatio != false) {
    local_12cc = local_ccc;
  }
  if (param_2->bAutoExposureCubePass == false) {
    uVar16 = 0;
    uVar19 = 0;
  }
  else {
    local_1280._4_8_ = GCubeFaceViewRectOffsets[param_2->AutoExposureCubeFace].field0_0x0._s_0;
    uVar19 = (int)local_1280.Value * uVar9;
    uVar16 = local_1280.Key._4_4_ * uVar17;
  }
  local_12c8 = fVar29;
  FSceneViewInitOptions::FSceneViewInitOptions((FSceneViewInitOptions *)&local_1038._s_0);
  local_ee0 = local_1298;
  local_1038._s_0.X = local_d28._s_0.X;
  local_1038._s_0.Y = local_d28._s_0.Y;
  local_1038._s_0.Z = local_d28._s_0.Z;
  local_1270._12_4_ = uVar19 + uVar9;
  local_1270._8_4_ = uVar16 + uVar17;
  local_f10 = (TIntPoint<int>_u_0)local_1270._s_0.Max.field0_0x0;
  local_ee8 = (TIntPoint<int>_u_0)local_1270._s_0.Max.field0_0x0;
  local_ef0 = uVar16;
  uStack_eec = uVar19;
  local_f18 = uVar16;
  uStack_f14 = uVar19;
  local_1270._0_4_ = uVar16;
  local_1270._4_4_ = uVar19;
  local_12b8 = uVar16;
  uStack_12b4 = uVar19;
  pTVar13 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      (&local_178,&local_d10);
  local_1018.M[0][0] = *(double *)pTVar13;
  local_1018.M[0][1] = *(double *)&pTVar13->field_0x8;
  local_1018.M[0][2] = *(double *)&pTVar13->field_0x10;
  local_1018.M[0][3] = *(double *)&pTVar13->field_0x18;
  local_1018.M[1][0] = *(double *)&pTVar13->field_0x20;
  local_1018.M[1][1] = *(double *)&pTVar13->field_0x28;
  local_1018.M[1][2] = *(double *)&pTVar13->field_0x30;
  local_1018.M[1][3] = *(double *)&pTVar13->field_0x38;
  local_1018.M[2][0] = *(double *)&pTVar13->field_0x40;
  local_1018.M[2][1] = *(double *)&pTVar13->field_0x48;
  local_1018.M[2][2] = *(double *)&pTVar13->field_0x50;
  local_1018.M[2][3] = *(double *)&pTVar13->field_0x58;
  local_1018.M[3][0] = *(double *)&pTVar13->field_0x60;
  local_1018.M[3][1] = *(double *)&pTVar13->field_0x68;
  local_1018.M[3][2] = *(double *)&pTVar13->field_0x70;
  local_1018.M[3][3] = *(double *)&pTVar13->field_0x78;
  FSceneViewOwner::operator=(local_ec8,local_408);
  local_378.M[0][0] = 0.0;
  local_378.M[0][1] = 0.0;
  local_378.M[0][2] = ___xmm_00000000000000003ff0000000000000;
  local_378.M[0][3] = _UNK_150689518;
  local_378.M[1][0] = ___xmm_00000000000000003ff0000000000000;
  local_378.M[1][1] = _UNK_150689518;
  local_378.M[1][2] = 0.0;
  local_378.M[1][3] = 0.0;
  local_378.M[2][0] = ___xmm_3ff00000000000000000000000000000;
  local_378.M[2][1] = _UNK_15061cbc8;
  local_378.M[2][2] = 0.0;
  local_378.M[2][3] = 0.0;
  local_378.M[3][0] = 0.0;
  local_378.M[3][1] = 0.0;
  local_378.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_378.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_2f8,&local_1018,&local_378);
  dVar24 = __real_3ff0000000000000;
  local_1018.M[0][0] = local_2f8.M[0][0];
  local_1018.M[0][1] = local_2f8.M[0][1];
  local_1018.M[0][2] = local_2f8.M[0][2];
  local_1018.M[0][3] = local_2f8.M[0][3];
  local_1018.M[1][0] = local_2f8.M[1][0];
  local_1018.M[1][1] = local_2f8.M[1][1];
  local_1018.M[1][2] = local_2f8.M[1][2];
  local_1018.M[1][3] = local_2f8.M[1][3];
  local_1018.M[2][0] = local_2f8.M[2][0];
  local_1018.M[2][1] = local_2f8.M[2][1];
  local_1018.M[2][2] = local_2f8.M[2][2];
  local_1018.M[2][3] = local_2f8.M[2][3];
  local_1018.M[3][0] = local_2f8.M[3][0];
  local_1018.M[3][1] = local_2f8.M[3][1];
  local_1018.M[3][2] = local_2f8.M[3][2];
  local_1018.M[3][3] = local_2f8.M[3][3];
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (param_2->bAutoExposureCubePass != false) {
    local_12b0 = YAxis.field0_0x0._s_0.X;
    uVar27 = (uint)((ulonglong)YAxis.field0_0x0._0_8_ >> 0x20);
    uVar31 = SUB84(YAxis.field0_0x0._s_0.Y,0);
    uVar34 = (uint)((ulonglong)YAxis.field0_0x0._8_8_ >> 0x20);
    local_12a8 = YAxis.field0_0x0._s_0.Y;
    local_12c0 = YAxis.field0_0x0._s_0.Z;
    uVar23 = (uint)((ulonglong)YAxis.field0_0x0._16_8_ >> 0x20);
    uVar38 = (uint)((ulonglong)XAxis.field0_0x0._0_8_ >> 0x20);
    uVar41 = (uint)((ulonglong)XAxis.field0_0x0._8_8_ >> 0x20);
    uVar44 = (uint)((ulonglong)XAxis.field0_0x0._16_8_ >> 0x20);
    uVar26 = SUB84(ZAxis.field0_0x0._s_0.X,0);
    uVar28 = (uint)((ulonglong)ZAxis.field0_0x0._0_8_ >> 0x20);
    uVar32 = SUB84(ZAxis.field0_0x0._s_0.Y,0);
    uVar35 = (uint)((ulonglong)ZAxis.field0_0x0._8_8_ >> 0x20);
    uVar21 = SUB84(ZAxis.field0_0x0._s_0.Z,0);
    uVar16 = (uint)((ulonglong)ZAxis.field0_0x0._16_8_ >> 0x20);
    uVar19 = uVar31;
    uVar36 = uVar34;
    uVar37 = local_12b8;
    uVar39 = uStack_12b4;
    uVar40 = local_12b8;
    uVar42 = uStack_12b4;
    uVar43 = local_12b8;
    uVar45 = uStack_12b4;
    switch(param_2->AutoExposureCubeFace) {
    case '\0':
      uVar37 = SUB84(XAxis.field0_0x0._s_0.X,0);
      uVar39 = uVar38;
      uVar40 = SUB84(XAxis.field0_0x0._s_0.Y,0);
      uVar42 = uVar41;
      uVar43 = SUB84(XAxis.field0_0x0._s_0.Z,0);
      uVar45 = uVar44;
      break;
    case '\x01':
      uVar37 = SUB84(XAxis.field0_0x0._s_0.X,0) ^ uVar17;
      uVar39 = uVar38 ^ uVar9;
      uVar40 = SUB84(XAxis.field0_0x0._s_0.Y,0) ^ uVar17;
      uVar42 = uVar41 ^ uVar9;
      uVar43 = SUB84(XAxis.field0_0x0._s_0.Z,0) ^ uVar17;
      uVar45 = uVar44 ^ uVar9;
      break;
    case '\x02':
      local_12b0 = (double)CONCAT44(uVar28 ^ uVar9,uVar26 ^ uVar17);
      local_12a8 = (double)CONCAT44(uVar35 ^ uVar9,uVar32 ^ uVar17);
      local_12c0 = (double)CONCAT44(uVar16 ^ uVar9,uVar21 ^ uVar17);
      uVar19 = uVar32 ^ uVar17;
      uVar36 = uVar35 ^ uVar9;
      uVar37 = SUB84(YAxis.field0_0x0._s_0.X,0);
      uVar39 = uVar27;
      uVar40 = uVar31;
      uVar42 = uVar34;
      uVar43 = SUB84(YAxis.field0_0x0._s_0.Z,0);
      uVar45 = uVar23;
      break;
    case '\x03':
      local_12b0 = ZAxis.field0_0x0._s_0.X;
      local_12a8 = ZAxis.field0_0x0._s_0.Y;
      local_12c0 = ZAxis.field0_0x0._s_0.Z;
      uVar19 = uVar32;
      uVar36 = uVar35;
      uVar37 = SUB84(YAxis.field0_0x0._s_0.X,0) ^ uVar17;
      uVar39 = uVar27 ^ uVar9;
      uVar40 = uVar31 ^ uVar17;
      uVar42 = uVar34 ^ uVar9;
      uVar43 = SUB84(YAxis.field0_0x0._s_0.Z,0) ^ uVar17;
      uVar45 = uVar23 ^ uVar9;
      break;
    case '\x04':
      uVar37 = uVar26;
      uVar39 = uVar28;
      uVar40 = uVar32;
      uVar42 = uVar35;
      uVar43 = uVar21;
      uVar45 = uVar16;
      break;
    case '\x05':
      uVar37 = uVar26 ^ uVar17;
      uVar39 = uVar28 ^ uVar9;
      uVar40 = uVar32 ^ uVar17;
      uVar42 = uVar35 ^ uVar9;
      uVar43 = uVar21 ^ uVar17;
      uVar45 = uVar16 ^ uVar9;
    }
    local_10f8 = local_12b0 * (double)CONCAT44(uVar42,uVar40) -
                 (double)CONCAT44(uVar36,uVar19) * (double)CONCAT44(uVar39,uVar37);
    local_1118 = local_12c0 * (double)CONCAT44(uVar39,uVar37) -
                 local_12b0 * (double)CONCAT44(uVar45,uVar43);
    local_1138 = (double)CONCAT44(uVar36,uVar19) * (double)CONCAT44(uVar45,uVar43) -
                 local_12c0 * (double)CONCAT44(uVar42,uVar40);
    local_10d8 = local_1138 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                 local_1118 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                 local_10f8 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_10d0 = (double)CONCAT44(uVar36,uVar19) *
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                  local_12b0 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                  local_12c0 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_10c8 = (double)CONCAT44(uVar39,uVar37) *
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                 (double)CONCAT44(uVar42,uVar40) *
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                 (double)CONCAT44(uVar45,uVar43) *
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_1130 = local_12b0;
    local_278.M[0][1] = local_12b0;
    local_1128 = (double)CONCAT44(uVar39,uVar37);
    uStack_1120 = 0;
    local_278.M[0][3] = 0.0;
    dStack_1110 = local_12a8;
    local_278.M[1][1] = local_12a8;
    local_1108 = (double)CONCAT44(uVar42,uVar40);
    uStack_1100 = 0;
    local_278.M[1][3] = 0.0;
    dStack_10f0 = local_12c0;
    local_278.M[2][1] = local_12c0;
    local_10e8 = (double)CONCAT44(uVar45,uVar43);
    uStack_10e0 = 0;
    local_278.M[2][3] = 0.0;
    dStack_10c0 = __real_3ff0000000000000;
    local_278.M[3][3] = __real_3ff0000000000000;
    local_278.M[0][0] = local_1138;
    local_278.M[0][2] = local_1128;
    local_278.M[1][0] = local_1118;
    local_278.M[1][2] = local_1108;
    local_278.M[2][0] = local_10f8;
    local_278.M[2][2] = local_10e8;
    local_278.M[3][0] = local_10d8;
    local_278.M[3][1] = dStack_10d0;
    local_278.M[3][2] = local_10c8;
    VectorMatrixMultiply(&local_1f8,&local_1018,&local_278);
    local_1018.M[0][0] = local_1f8.M[0][0];
    local_1018.M[0][1] = local_1f8.M[0][1];
    local_1018.M[0][2] = local_1f8.M[0][2];
    local_1018.M[0][3] = local_1f8.M[0][3];
    local_1018.M[1][0] = local_1f8.M[1][0];
    local_1018.M[1][1] = local_1f8.M[1][1];
    local_1018.M[1][2] = local_1f8.M[1][2];
    local_1018.M[1][3] = local_1f8.M[1][3];
    local_1018.M[2][0] = local_1f8.M[2][0];
    local_1018.M[2][1] = local_1f8.M[2][1];
    local_1018.M[2][2] = local_1f8.M[2][2];
    local_1018.M[2][3] = local_1f8.M[2][3];
    local_1018.M[3][0] = local_1f8.M[3][0];
    local_1018.M[3][1] = local_1f8.M[3][1];
    local_1018.M[3][2] = local_1f8.M[3][2];
    local_1018.M[3][3] = local_1f8.M[3][3];
    fVar29 = local_12c8;
  }
  if (bVar6) {
    FMinimalViewInfo::ClearOverscan((FMinimalViewInfo *)&local_d28._s_0);
  }
  else if (param_2->bOverrideCameraOverscan == false) {
    pUVar11 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    fVar20 = UMoviePipeline::GetCachedCameraOverscan(pUVar11,(param_2->OutputState).CameraIndex);
    if (((local_498 != fVar20) && ((param_2->OutputState).TemporalSampleIndex == 0)) &&
       (2 < (byte)LogMovieRenderPipeline._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    param_2->OverscanPercentage = fVar20;
  }
  else {
    FMinimalViewInfo::ClearOverscan((FMinimalViewInfo *)&local_d28._s_0);
    FMinimalViewInfo::ApplyOverscan
              ((FMinimalViewInfo *)&local_d28._s_0,param_2->OverscanPercentage,false,false);
  }
  fVar20 = __real_3f800000;
  local_d6c = local_cf8;
  local_d68 = local_cf8;
  local_12d0 = 1.0;
  if (param_2->bAutoExposureCubePass == false) {
    if (local_400 == '\0') {
      TVar18.Value = '\x01';
      if (local_cc4 != '\0') {
        TVar18.Value = local_cc8;
      }
      if ((1 < (param_2->TileCounts).field0_0x0._s_0.X * (param_2->TileCounts).field0_0x0._s_0.Y) &&
         ((local_cc0 & 1) != 0)) {
        if (fVar29 <= local_12cc) {
          if (fVar29 < local_12cc) {
            TVar18.Value = '\x01';
            local_530 = local_530 * (double)(fVar29 / local_12cc);
          }
        }
        else {
          TVar18.Value = '\0';
          local_ce8 = local_ce8 * (fVar29 / local_12cc);
          local_538 = local_538 * (double)(local_12cc / fVar29);
        }
        local_cc0 = local_cc0 & 0xfffffffe;
      }
      FViewport::CalculateViewExtents
                (&local_11c0,local_ccc,fVar29,(TIntRect<int> *)&local_1270._s_0,
                 &param_2->BackbufferSize);
      FMinimalViewInfo::CalculateProjectionMatrixGivenViewRectangle
                ((FMinimalViewInfo *)&local_d28._s_0,TVar18,&local_11c0,
                 (FSceneViewProjectionData *)&local_1038._s_0);
      if (bVar6) goto LAB_14dde529b;
      bVar8 = local_cbc == '\x01';
    }
    else {
      local_f98 = local_3f8;
      uStack_f90 = uStack_3f0;
      local_f88 = local_3e8;
      uStack_f80 = uStack_3e0;
      local_f78 = local_3d8;
      uStack_f70 = uStack_3d0;
      local_f68 = local_3c8;
      uStack_f60 = uStack_3c0;
      local_f58 = local_3b8;
      uStack_f50 = uStack_3b0;
      local_f48 = local_3a8;
      uStack_f40 = uStack_3a0;
      local_f38 = local_398;
      uStack_f30 = uStack_390;
      local_f28 = local_388;
      uStack_f20 = uStack_380;
      if (bVar6) goto LAB_14dde529b;
      bVar8 = false;
    }
    (**(code **)(this->_padding_ + 0x3a0))(this,param_2,bVar8,&local_f98);
  }
  else {
    local_d6c = 90.0;
    local_d68 = 90.0;
    pTVar14 = UE::Math::TReversedZPerspectiveMatrix<double>::TReversedZPerspectiveMatrix<double>
                        (&local_10b8,__real_3fe921fb60000000,__real_3fe921fb60000000,dVar24,dVar24,
                         (double)GNearClippingPlane,(double)GNearClippingPlane);
    local_f98 = *(double *)pTVar14;
    uStack_f90 = *(undefined8 *)&pTVar14->field_0x8;
    local_f88 = *(undefined8 *)&pTVar14->field_0x10;
    uStack_f80 = *(undefined8 *)&pTVar14->field_0x18;
    local_f78 = *(undefined8 *)&pTVar14->field_0x20;
    uStack_f70 = *(undefined8 *)&pTVar14->field_0x28;
    local_f68 = *(undefined8 *)&pTVar14->field_0x30;
    uStack_f60 = *(undefined8 *)&pTVar14->field_0x38;
    local_f58 = *(undefined8 *)&pTVar14->field_0x40;
    uStack_f50 = *(undefined8 *)&pTVar14->field_0x48;
    local_f48 = *(undefined8 *)&pTVar14->field_0x50;
    uStack_f40 = *(undefined8 *)&pTVar14->field_0x58;
    local_f38 = *(undefined8 *)&pTVar14->field_0x60;
    uStack_f30 = *(undefined8 *)&pTVar14->field_0x68;
    local_f28 = *(undefined8 *)&pTVar14->field_0x70;
    uStack_f20 = *(undefined8 *)&pTVar14->field_0x78;
  }
LAB_14dde529b:
  pFVar12 = local_12a0;
  local_12d0 = local_12d0 * (param_2->OverscanPercentage + fVar20);
  local_ed8 = (**(code **)(this->_padding_ + 0x3f0))(this,local_12a0);
  if (!bVar6) {
    local_ed0 = (**(code **)(this->_padding_ + 0x3f8))(this,pFVar12,0xffffffff);
  }
  local_12a0 = ::operator_new(0x1c30);
  if (local_12a0 == (FSceneView *)0x0) {
    local_12d8 = (FSceneView *)0x0;
  }
  else {
    local_12d8 = FSceneView::FSceneView(local_12a0,(FSceneViewInitOptions *)&local_1038._s_0);
  }
  pFVar7 = local_1298;
  pFVar4 = (local_1298->Views).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_12d8) &&
      ((FScriptContainerElement *)&local_12d8 < pFVar4 + (longlong)(local_1298->Views).ArrayMax * 8)
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FSceneView *)(*pcVar5)();
    return pFVar12;
  }
  piVar1 = &(pFVar7->Views).ArrayMax;
  iVar10 = (pFVar7->Views).ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(pFVar7->Views).AllocatorInstance,piVar1);
  }
  (pFVar7->Views).ArrayNum = iVar10 + 1;
  *(FSceneView **)((pFVar7->Views).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_12d8;
  (local_12d8->ViewLocation).field0_0x0._s_0.X = local_d28._s_0.X;
  (local_12d8->ViewLocation).field0_0x0._s_0.Y = local_d28._s_0.Y;
  (local_12d8->ViewLocation).field0_0x0._s_0.Z = local_d28._s_0.Z;
  (local_12d8->ViewRotation).Pitch = local_d10.Pitch;
  (local_12d8->ViewRotation).Yaw = local_d10.Yaw;
  (local_12d8->ViewRotation).Roll = local_d10.Roll;
  if ((TOptional<UE::Math::TTransform<double>_> *)&local_528 != &local_12d8->PreviousViewTransform)
  {
    if (local_4c8 == '\0') {
      if ((local_12d8->PreviousViewTransform).bIsSet != false) {
        (local_12d8->PreviousViewTransform).bIsSet = false;
      }
    }
    else {
      (local_12d8->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] = local_528;
      (local_12d8->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dStack_520;
      (local_12d8->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] = local_518;
      (local_12d8->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dStack_510;
      (local_12d8->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] = local_508;
      (local_12d8->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dStack_500;
      (local_12d8->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] = local_4f8;
      (local_12d8->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dStack_4f0;
      (local_12d8->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] = local_4e8;
      (local_12d8->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dStack_4e0;
      (local_12d8->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] = local_4d8;
      (local_12d8->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dStack_4d0;
      (local_12d8->PreviousViewTransform).bIsSet = true;
    }
  }
  local_1158._s_0.X = (local_12d8->ViewLocation).field0_0x0._s_0.X;
  local_1158._s_0.Y = (local_12d8->ViewLocation).field0_0x0._s_0.Y;
  local_1158._s_0.Z = (local_12d8->ViewLocation).field0_0x0._s_0.Z;
  FSceneView::StartFinalPostprocessSettings(local_12d8,(TVector<double> *)&local_1158._s_0);
  (**(code **)(this->_padding_ + 0x3c0))(this,local_12d8,param_2,pFVar12);
  *(float *)&(local_12d8->FinalPostProcessSettings).field_0x658 =
       local_12d0 * *(float *)&(local_12d8->FinalPostProcessSettings).field_0x658;
  if (bVar6) {
    local_12d8->AntiAliasingMethod = AAM_None;
    local_12d8->PrimaryScreenPercentageMethod = SpatialUpscale;
  }
  else {
    iVar10 = (param_2->TileCounts).field0_0x0._s_0.X;
    fVar33 = ((float)(param_2->TileIndexes).field0_0x0._s_0.X + __real_3f000000) -
             (float)iVar10 * __real_3f000000;
    iVar2 = (param_2->TileCounts).field0_0x0._s_0.Y;
    fVar30 = ((float)(param_2->TileIndexes).field0_0x0._s_0.Y + __real_3f000000) -
             (float)iVar2 * __real_3f000000;
    fVar22 = (float)((param_2->OverlappedPad).field0_0x0._s_0.X * 2) /
             (float)(param_2->TileSize).field0_0x0._s_0.X + fVar20;
    dVar24 = (double)((float)((param_2->OverlappedPad).field0_0x0._s_0.Y * 2) /
                      (float)(param_2->TileSize).field0_0x0._s_0.Y + fVar20);
    fVar29 = fVar22 / (float)iVar10;
    dVar25 = dVar24 / (double)iVar2;
    (local_12d8->LensPrincipalPointOffsetScale).field0_0x0._s_0.X =
         ((fVar33 + fVar33) / fVar22) * fVar29;
    dVar24 = ((double)(fVar30 + fVar30) / dVar24) * dVar25;
    (local_12d8->LensPrincipalPointOffsetScale).field0_0x0._s_0.Y =
         (float)(double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^ uVar9,SUB84(dVar24,0) ^ uVar17)
    ;
    (local_12d8->LensPrincipalPointOffsetScale).field0_0x0._s_0.Z = fVar29;
    (local_12d8->LensPrincipalPointOffsetScale).field0_0x0._s_0.W = (float)dVar25;
  }
  FSceneView::EndFinalPostprocessSettings(local_12d8,(FSceneViewInitOptions *)&local_1038._s_0);
  this_00 = &(param_2->OutputState).FileMetadata;
  pFVar15 = ::FString::SanitizeFloat
                      (&local_11b0,
                       (double)*(float *)&(local_12d8->FinalPostProcessSettings).field_0x488,1);
  ::FString::PrintfImpl(&local_1250,L"unreal/%s/%s/fstop");
  local_1260 = &local_1250;
  local_1258 = pFVar15;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FString_&&,FString_&&> *)local_1290,(bool *)&local_1260);
  if (local_1250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1250.Data.AllocatorInstance.Data);
  }
  if (local_11b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11b0.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::SanitizeFloat(&local_11a0,(double)local_d6c,1);
  ::FString::PrintfImpl(&local_1230,L"unreal/%s/%s/fov");
  local_1240 = &local_1230;
  local_1238 = pFVar15;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FString_&&,FString_&&> *)(local_1290 + 4),
             (bool *)&local_1240);
  if (local_1230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1230.Data.AllocatorInstance.Data);
  }
  if (local_11a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11a0.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::SanitizeFloat
                      (&local_1190,
                       (double)*(float *)&(local_12d8->FinalPostProcessSettings).field_0x660,1);
  ::FString::PrintfImpl(&local_1210,L"unreal/%s/%s/focalDistance");
  local_1220 = &local_1210;
  local_1218 = pFVar15;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this_00,&local_1280,(bool *)&local_1220);
  if (local_1210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1210.Data.AllocatorInstance.Data);
  }
  if (local_1190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1190.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::SanitizeFloat
                      (&local_1180,
                       (double)*(float *)&(local_12d8->FinalPostProcessSettings).field_0x658,1);
  ::FString::PrintfImpl(&local_11f0,L"unreal/%s/%s/sensorWidth");
  local_1200 = &local_11f0;
  local_11f8 = pFVar15;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FString_&&,FString_&&> *)local_1288,(bool *)&local_1200);
  if (local_11f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11f0.Data.AllocatorInstance.Data);
  }
  if (local_1180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1180.Data.AllocatorInstance.Data);
  }
  pFVar15 = ::FString::SanitizeFloat(&local_1170,(double)param_2->OverscanPercentage,1);
  ::FString::PrintfImpl(&local_11d0,L"unreal/%s/%s/overscanPercent");
  local_11e0 = &local_11d0;
  local_11d8 = pFVar15;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FString_&&,FString_&&> *)(local_1288 + 4),
             (bool *)&local_11e0);
  if (local_11d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11d0.Data.AllocatorInstance.Data);
  }
  if (local_1170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1170.Data.AllocatorInstance.Data);
  }
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>
            (this_00,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_458);
  pFVar12 = local_12d8;
  if (local_de8._12_4_ != -1) {
    local_da0 = 0;
    if (local_da8 != (void *)0x0) {
      FMemory::Free(local_da8);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_de8);
  }
  local_df0 = 0;
  if (local_df8 != (void *)0x0) {
    FMemory::Free(local_df8);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e38);
  local_410 = 0;
  if ((void *)local_458._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_458._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_458);
  if (local_550 != (void *)0x0) {
    FMemory::Free(local_550);
  }
  return pFVar12;
}

// GetSceneViewStateInterface @ 14dde5d10

FSceneViewStateInterface * __thiscall
UMoviePipelineImagePassBase::GetSceneViewStateInterface
          (UMoviePipelineImagePassBase *this,IViewCalcPayload *param_1)

{
  return (this->ViewState).Reference;
}

// GetViewRenderTarget @ 14dde63c0

UTextureRenderTarget2D * __thiscall
UMoviePipelineImagePassBase::GetViewRenderTarget
          (UMoviePipelineImagePassBase *this,IViewCalcPayload *param_1)

{
  return (UTextureRenderTarget2D *)0x0;
}

// GetViewShowFlags @ 14dde68e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMoviePipelineImagePassBase::GetViewShowFlags
          (UMoviePipelineImagePassBase *this,FEngineShowFlags *param_1,EViewModeIndex *param_2)

{
  undefined1 auStack_78 [32];
  FEngineShowFlags local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.CustomShowFlags.NumBits = 0;
  local_58.CustomShowFlags.MaxBits = 0x80;
  local_58._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_58._8_8_ = _UNK_15060db28;
  local_58._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_58._24_8_ = _UNK_15060db28;
  FEngineShowFlags::InitCustomShowFlags(&local_58,ESFIM_Game);
  local_58.Pivot = 0;
  local_58.LightInfluences = 0;
  local_58.HitProxies = 0;
  local_58.Bounds = 0;
  local_58.ModeWidgets = 0;
  local_58.EditingLevelInstance = 0;
  local_58.Selection = 0;
  local_58.Splines = 0;
  local_58.Cover = 0;
  local_58.MeshEdges = 0;
  local_58.Snap = 0;
  local_58.Grid = 0;
  local_58.LargeVertices = 0;
  local_58.Editor = 0;
  local_58.Brushes = 0;
  local_58.BSPSplit = 0;
  local_58.AudioRadius = 0;
  local_58.CameraFrustums = 0;
  local_58.MassProperties = 0;
  local_58.Constraints = 0;
  local_58.StreamingBounds = 0;
  local_58.LightMapDensity = 0;
  local_58.StationaryLightOverlap = 0;
  local_58.ShaderComplexity = 0;
  local_58.LightComplexity = 0;
  local_58.VisualizeInstanceUpdates = 0;
  local_58.HISMCClusterTree = 0;
  local_58.HISMCOcclusionBounds = 0;
  local_58.Navigation = 0;
  local_58.DebugAI = 0;
  local_58.VisualizeSSS = 0;
  local_58.SelectionOutline = 0;
  local_58.VisualizeOutOfBoundsPixels = 0;
  local_58.VisualizeTSR = 0;
  local_58.VisualizeTemporalUpscaler = 0;
  local_58.VisualizeReprojection = 0;
  local_58.VisualizeMotionVectors = 0;
  local_58.VisualizeMotionBlur = 0;
  local_58.ScreenPercentage = 1;
  local_58.PhysicalMaterialMasks = 0;
  local_58.VertexColors = 0;
  local_58.VisualizeDOF = 0;
  local_58.TestImage = 0;
  local_58.OpaqueCompositeEditorPrimitives = 0;
  local_58.CompositeEditorPrimitives = 0;
  local_58.CompositeDebugPrimitives = 1;
  local_58.MotionBlur = 1;
  local_58.GBufferHints = 0;
  local_58.VectorFields = 0;
  local_58.VisualizeVirtualShadowMap = 0;
  local_58.VisualizeGroom = 0;
  local_58.VisualizeSubstrate = 0;
  local_58.VisualizeLumen = 0;
  local_58.VisualizeNanite = 0;
  local_58.VisualizeBuffer = 0;
  local_58.MaterialAmbientOcclusion = 1;
  local_58.MaterialNormal = 1;
  local_58.ReflectionOverride = 0;
  local_58.LightingOnlyOverride = 0;
  local_58.OverrideDiffuseAndSpecular = 0;
  local_58.VisualizeLocalExposure = 0;
  local_58.VisualizeLocalFogVolumes = 0;
  local_58.VisualizeSkyLightIlluminance = 0;
  local_58.VisualizeHDR = 0;
  local_58.DisableOcclusionQueries = 0;
  local_58.VisualizeInstanceOcclusionQueries = 0;
  local_58.OcclusionMeshes = 0;
  local_58.VREditing = 0;
  local_58.ServerDrawDebug = 0;
  local_58.Bones = 0;
  local_58.VisualizeVirtualTexture = 0;
  local_58.RequiredTextureResolution = 0;
  local_58.OutputMaterialTextureScales = 0;
  local_58.MaterialTextureScaleAccuracy = 0;
  local_58.MeshUVDensityAccuracy = 0;
  local_58.PrimitiveDistanceAccuracy = 0;
  local_58.ShaderComplexityWithQuadOverdraw = 0;
  local_58.QuadOverdraw = 0;
  local_58.HLODColoration = 0;
  local_58.LODColoration = 0;
  local_58.VisualizeShadingModels = 0;
  local_58.VisualizeSSR = 0;
  local_58.VisualizeLightingOnProbes = 0;
  local_58.VisualizeGlobalDistanceField = 0;
  local_58.PhysicsField = 0;
  local_58.VisualizeMeshDistanceFields = 0;
  local_58.VisualizeDistanceFieldAO = 0;
  local_58.VolumeLightingSamples = 0;
  local_58.VisualizeVolumetricLightmap = 0;
  local_58.PrecomputedVisibilityCells = 0;
  local_58.VisualizeLightCulling = 0;
  local_58.DistanceCulledPrimitives = 0;
  local_58.StereoRendering = 0;
  local_58.HMDDistortion = 0;
  local_58.HighResScreenshotMask = 0;
  local_58.CameraSafeFrames = 0;
  local_58.CameraAspectRatioBars = 0;
  local_58.CollisionPawn = 0;
  local_58.CollisionVisibility = 0;
  local_58.Collision = 0;
  local_58.ActorColoration = 0;
  local_58.Game = 1;
  local_58.Volumes = 0;
  local_58.LightRadius = 0;
  local_58.Wireframe = 0;
  local_58.ShadowFrustums = 0;
  local_58.RandomColor = 0;
  local_58.FrontBackFace = 0;
  local_58.Zebra = 0;
  local_58.Clay = 0;
  local_58.StereoMotionVectors = 0;
  local_58.AlphaInvert = 0;
  local_58.SceneCaptureCopySceneDepth = 1;
  local_58.VisualizeShadowCasters = 0;
  local_58.VisualizeLWCComplexity = 0;
  local_58.VisualizeGPUSkinCache = 0;
  local_58.LumenShortRangeAmbientOcclusion = 1;
  local_58.LumenSecondaryBounces = 1;
  local_58.LumenFarFieldTraces = 1;
  local_58.LumenGlobalTraces = 1;
  local_58.LumenDetailTraces = 1;
  local_58.LumenScreenTraces = 1;
  local_58.DebugDrawDistantVirtualSMLights = 0;
  local_58.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_58.VisualizeVolumetricCloudConservativeDensity = 0;
  local_58.VirtualTexturePrimitives = 0;
  local_58.VisualizePostProcessStack = 0;
  local_58.VisualizeCalibrationCustom = 0;
  local_58.VisualizeCalibrationGrayscale = 0;
  local_58.VisualizeCalibrationColor = 0;
  local_58.VisualizeLightFunctionAtlas = 0;
  local_58.VisualizeSkyAtmosphere = 0;
  local_58.RayTracingDebug = 0;
  local_58.PathTracing = 0;
  FEngineShowFlags::operator=(param_1,&local_58);
  if (local_58.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_58.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  *param_2 = VMI_Lit;
  return;
}

// IsAntiAliasingSupported @ 14dde7ce0

bool __thiscall
UMoviePipelineImagePassBase::IsAntiAliasingSupported(UMoviePipelineImagePassBase *this)

{
  return true;
}

// IsAutoExposureAllowed @ 14dde7de0

bool __thiscall
UMoviePipelineImagePassBase::IsAutoExposureAllowed
          (UMoviePipelineImagePassBase *this,FMoviePipelineRenderPassMetrics *param_1)

{
  return true;
}

// IsScreenPercentageSupported @ 14dde7eb0

bool __thiscall
UMoviePipelineImagePassBase::IsScreenPercentageSupported(UMoviePipelineImagePassBase *this)

{
  return true;
}

// ModifyProjectionMatrixForTiling @ 14dde89e0

void __thiscall
UMoviePipelineImagePassBase::ModifyProjectionMatrixForTiling
          (UMoviePipelineImagePassBase *this,FMoviePipelineRenderPassMetrics *param_1,bool param_2,
          TMatrix<double> *param_3,float *param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = __real_3f000000;
  iVar2 = (param_1->OverlappedPad).field0_0x0._s_0.X;
  fVar13 = __real_3f800000;
  fVar12 = __real_3f800000;
  if ((0 < iVar2) && (iVar3 = (param_1->OverlappedPad).field0_0x0._s_0.Y, 0 < iVar3)) {
    iVar4 = (param_1->TileSize).field0_0x0._s_0.X;
    iVar5 = (param_1->TileSize).field0_0x0._s_0.Y;
    fVar12 = (float)(iVar4 + iVar2 * 2) / (float)iVar4;
    fVar13 = (float)(iVar5 + iVar3 * 2) / (float)iVar5;
  }
  fVar9 = fVar12 / (float)(param_1->TileCounts).field0_0x0._s_0.X;
  dVar11 = __real_3ff0000000000000 / (double)fVar9;
  dVar10 = __real_3ff0000000000000 /
           (double)(fVar13 / (float)(param_1->TileCounts).field0_0x0._s_0.Y);
  param_3->M[0][0] = dVar11 * param_3->M[0][0];
  param_3->M[1][1] = dVar10 * param_3->M[1][1];
  *param_4 = fVar9;
  fVar9 = (float)(param_1->TileCounts).field0_0x0._s_0.X * fVar8 -
          ((float)(param_1->TileIndexes).field0_0x0._s_0.X + fVar8);
  fVar8 = ((float)(param_1->TileIndexes).field0_0x0._s_0.Y + fVar8) -
          (float)(param_1->TileCounts).field0_0x0._s_0.Y * fVar8;
  dVar6 = (double)((fVar9 + fVar9) / fVar12);
  dVar7 = (double)((fVar8 + fVar8) / fVar13);
  if (param_2) {
    dVar1 = param_3->M[3][1];
    param_3->M[3][0] = dVar11 * param_3->M[3][0] + dVar6;
    param_3->M[3][1] = dVar10 * dVar1 + dVar7;
    return;
  }
  dVar1 = param_3->M[2][1];
  param_3->M[2][0] = dVar11 * param_3->M[2][0] + dVar6;
  param_3->M[2][1] = dVar10 * dVar1 + dVar7;
  return;
}

// MoviePipelineRenderShowFlagOverride @ 14dde8b80

void __thiscall
UMoviePipelineImagePassBase::MoviePipelineRenderShowFlagOverride
          (UMoviePipelineImagePassBase *this,FEngineShowFlags *param_1)

{
  return;
}

// OnFrameStartImpl @ 14dde93d0

void __thiscall UMoviePipelineImagePassBase::OnFrameStartImpl(UMoviePipelineImagePassBase *this)

{
  TMap<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *pTVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  pTVar1 = &this->SurfaceQueues;
  TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  local_10 = '\0';
  cStack_f = '\0';
  uVar7 = local_78._24_8_ >> 0x20;
  uVar6 = local_78._28_4_;
  local_18 = (TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if ((int)uVar6 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar3 = local_48;
      lVar8 = *local_48;
      if ((*(longlong *)((longlong)(int)uVar6 * 0x20 + 8 + lVar8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar4 = FMoviePipelineSurfaceQueue::IsStale
                        (*(FMoviePipelineSurfaceQueue **)((longlong)(int)uVar7 * 0x20 + lVar8 + 8));
      if (bVar4) {
        lVar8 = *plVar3 + (longlong)(int)uVar6 * 0x20;
        if ((*(longlong *)(lVar8 + 8) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FMoviePipelineSurfaceQueue::Shutdown(*(FMoviePipelineSurfaceQueue **)(lVar8 + 8));
        TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar6);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
      uVar6 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
  }
  if ((local_10 != '\0') && (cStack_f != '\0')) {
    uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
    if (uVar6 < 4) {
      iVar5 = 1;
    }
    else {
      uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((0 < (int)uVar6) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
      local_18->HashSize = iVar5;
      TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
      ::Rehash(local_18);
    }
  }
  return;
}

// RenderSample_GameThreadImpl @ 14ddfb7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineImagePassBase::RenderSample_GameThreadImpl
          (UMoviePipelineImagePassBase *this,FMoviePipelineRenderPassMetrics *param_1)

{
  int *piVar1;
  TMap<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  TMap<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *pTVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_MoviePipeline_WaitForAvailableSurface> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  FNameEntryId FVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  int local_res20;
  FName local_e8;
  FName local_d8;
  TMap<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  TMap<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName local_58;
  undefined8 local_50;
  FMoviePipelineSurfaceQueue *local_48;
  TReferenceControllerBase<1> *local_40;
  
  iVar19 = 0;
  FVar16 = StatPtr_STAT_MoviePipeline_WaitForAvailableSurface;
  if (StatPtr_STAT_MoviePipeline_WaitForAvailableSurface ==
      (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_WaitForAvailableSurface>)0x0) {
    pFVar15 = ::FName::FName(&local_58,"STAT_MoviePipeline_WaitForAvailableSurface");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_WaitForAvailableSurface>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MoviePipeline_WaitForAvailableSurface,*pFVar15,
                        L"STAT_MoviePipeline_WaitForAvailableSurface","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  FVar7 = *(FName *)FVar16;
  FVar22 = FVar7.ComparisonIndex.Value;
  uVar23 = FVar7.Number;
  if ((FVar22.Value != 0) || (uVar23 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar22.Value;
        local_d8.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImagePassBase.cpp"
                   ,0x6d);
        bVar11 = true;
        bVar10 = true;
      }
    }
    bVar12 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar22.Value;
      uStackX_c = uVar23;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      bVar12 = true;
      local_e8 = FVar7;
    }
  }
  pTVar2 = &this->SurfaceQueues;
  uStack_c4 = 1;
  puVar3 = &(this->SurfaceQueues).field_0x10;
  iVar5 = *(int *)&(this->SurfaceQueues).field_0x28;
  iStack_b4 = 0;
  local_b0 = 0;
  if (iVar5 != 0) {
    puVar25 = *(uint **)&(this->SurfaceQueues).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar3;
    }
    uVar23 = *puVar25;
    iVar19 = 0;
    while (uVar23 == 0) {
      lVar17 = (longlong)iVar19;
      iVar19 = iVar19 + 1;
      local_b0 = local_b0 + 0x20;
      iStack_b4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ddfb99e;
      uVar23 = puVar25[lVar17 + 1];
    }
    uStack_c4 = ~(uVar23 - 1) & uVar23;
    uVar4 = (ulonglong)uStack_c4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res20 = (int)lVar17;
    iStack_b4 = local_res20 + -1 + local_b0;
    if (iVar5 < iStack_b4) {
      iStack_b4 = iVar5;
    }
  }
LAB_14ddfb99e:
  uStack_b8 = 0xffffffff;
  iStack_a8 = *(int *)&(this->SurfaceQueues).field_0x8 - *(int *)&(this->SurfaceQueues).field_0x34;
  TStack_80._padding_ = CONCAT44(uStack_c4,iVar19);
  TStack_80.CurrentBitIndex = iStack_b4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = iStack_b4;
  TStack_80.BaseBitIndex = local_b0;
  uStack_60 = CONCAT44(uStack_a4,iStack_a8);
  uVar23 = *(uint *)&(this->SurfaceQueues).field_0x28;
  iVar20 = (int)uVar23 >> 5;
  uVar21 = uVar23 & 0xffffffe0;
  local_d0 = pTVar2;
  iStack_c8 = iVar19;
  local_c0 = puVar3;
  iStack_ac = iStack_b4;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar23 < 0) || (iVar5 < (int)uVar23)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->SurfaceQueues).field_0x28;
  if (uVar23 != uVar6) {
    puVar24 = *(undefined1 **)&(this->SurfaceQueues).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar3;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
    while (uVar23 == 0) {
      lVar17 = (longlong)iVar20;
      iVar20 = iVar20 + 1;
      uVar21 = uVar21 + 0x20;
      uVar23 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14ddfbab0;
      uVar23 = *(uint *)(puVar24 + lVar17 * 4 + 4);
    }
    uVar4 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar23 = (int)lVar17 + -1 + uVar21;
    if ((int)uVar6 < (int)uVar23) {
      uVar23 = uVar6;
    }
  }
LAB_14ddfbab0:
  while( true ) {
    pTVar13 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar23) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar13 == pTVar2))
    break;
    puVar18 = (undefined8 *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar13);
    local_50 = *puVar18;
    local_48 = (FMoviePipelineSurfaceQueue *)puVar18[1];
    pTVar8 = (TReferenceControllerBase<1> *)puVar18[2];
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40 = pTVar8;
    if (local_48 != (FMoviePipelineSurfaceQueue *)0x0) {
      FMoviePipelineSurfaceQueue::BlockUntilAnyAvailable(local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar12) && (local_e8 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = local_e8.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = local_e8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetupImpl @ 14ddfeec0

void __thiscall
UMoviePipelineImagePassBase::SetupImpl
          (UMoviePipelineImagePassBase *this,FMoviePipelineRenderPassInitSettings *param_1)

{
  FSceneViewStateReference::Allocate(&this->ViewState,param_1->FeatureLevel);
  return;
}

// SetupViewForViewModeOverride @ 14ddfeee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMoviePipelineImagePassBase::SetupViewForViewModeOverride
          (UMoviePipelineImagePassBase *this,FSceneView *param_1)

{
  UE::MovieRenderPipeline::UpdateSceneViewForShowFlags(param_1);
  return;
}

// StaticRegisterNativesUMoviePipelineImagePassBase @ 14ddff280

void __cdecl UMoviePipelineImagePassBase::StaticRegisterNativesUMoviePipelineImagePassBase(void)

{
  return;
}

// TeardownImpl @ 14de004d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMoviePipelineImagePassBase::TeardownImpl(UMoviePipelineImagePassBase *this)

{
  undefined1 *puVar1;
  TMap<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>_>
  *this_00;
  ulonglong uVar2;
  TMap<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>_>
  *this_01;
  int iVar3;
  uint uVar4;
  FSceneViewStateInterface *pFVar5;
  code *pcVar6;
  TMap<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>_>
  *pTVar7;
  bool bVar8;
  UObject *pUVar9;
  FUObjectItem *this_02;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TMap<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->TileRenderTargets).field_0x28;
  puVar1 = &(this->TileRenderTargets).field_0x10;
  iStack_90 = 0;
  this_00 = &this->TileRenderTargets;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->TileRenderTargets).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14de0056d;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14de0056d:
  uVar12 = *(uint *)&(this->TileRenderTargets).field_0x28;
  uVar15 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(this->TileRenderTargets).field_0x8 -
              *(int *)&(this->TileRenderTargets).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this_00;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->TileRenderTargets).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->TileRenderTargets).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14de00670;
      uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14de00670:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)(&local_68->field_0x0 + 8) - *(int *)(&local_68->field_0x0 + 0x34) != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == this_00))
    break;
    lVar10 = *(longlong *)&pTVar7->field_0x0 + (longlong)TStack_60.CurrentBitIndex * 0x18;
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar10 + 8));
    if (bVar8) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar10 + 8));
      this_02 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar9->field_0xc);
      FUObjectItem::ClearRootFlags(this_02,RootSet);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this_01 = &this->SurfaceQueues;
  bVar8 = 1 < *(int *)&(this->SurfaceQueues).field_0x48;
  if (!bVar8) {
    TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->SurfaceQueues).field_0x8);
  puVar1 = &(this->SurfaceQueues).field_0xc;
  *(undefined4 *)&(this->SurfaceQueues).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SurfaceQueues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SurfaceQueues).field_0x34 = 0;
  iVar3 = *(int *)&(this->SurfaceQueues).field_0x2c;
  *(undefined4 *)&(this->SurfaceQueues).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SurfaceQueues).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SurfaceQueues).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->SurfaceQueues).field_0x48 = 1;
    TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  bVar8 = 1 < *(int *)&(this->TileRenderTargets).field_0x48;
  if (!bVar8) {
    TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->TileRenderTargets).field_0xc;
  *(undefined4 *)&(this->TileRenderTargets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TileRenderTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TileRenderTargets).field_0x34 = 0;
  iVar3 = *(int *)&(this->TileRenderTargets).field_0x2c;
  *(undefined4 *)&(this->TileRenderTargets).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TileRenderTargets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TileRenderTargets).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->TileRenderTargets).field_0x48 = 1;
    TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  pFVar5 = (this->ViewState).Reference;
  if (pFVar5 != (FSceneViewStateInterface *)0x0) {
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,&local_a8);
  }
  FSceneViewStateReference::Destroy(&this->ViewState);
  return;
}

// WaitUntilTasksComplete @ 14de03180

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineImagePassBase::WaitUntilTasksComplete(UMoviePipelineImagePassBase *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FMoviePipelineSurfaceQueue *this_00;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UMoviePipeline *pUVar12;
  FTaskGraphInterface *pFVar13;
  longlong lVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pUVar12 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  (pUVar12->PreviewTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  iVar17 = 0;
  uVar10 = 1;
  puVar2 = &(this->SurfaceQueues).field_0x10;
  iVar19 = 0;
  iVar5 = *(int *)&(this->SurfaceQueues).field_0x28;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->SurfaceQueues).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      iVar17 = iVar17 + 1;
      iVar19 = iVar19 + 0x20;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14de0323e;
      uVar16 = puVar20[lVar14 + 1];
    }
    uVar10 = ~(uVar16 - 1) & uVar16;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iVar11 = local_res10 + -1 + iVar19;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_14de0323e:
  TStack_68._padding_ = CONCAT44(uVar10,iVar17);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar19;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->SurfaceQueues).field_0x8 -
                       *(int *)&(this->SurfaceQueues).field_0x34);
  uVar10 = *(uint *)&(this->SurfaceQueues).field_0x28;
  iVar17 = (int)uVar10 >> 5;
  uVar16 = uVar10 & 0xffffffe0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar5 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->SurfaceQueues).field_0x28;
  if (uVar10 != uVar6) {
    puVar18 = *(undefined1 **)&(this->SurfaceQueues).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar10 == 0) {
      lVar14 = (longlong)iVar17;
      iVar17 = iVar17 + 1;
      uVar16 = uVar16 + 0x20;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14de03340;
      uVar10 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(~(uVar10 - 1) & uVar10) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar10 = (int)lVar14 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14de03340:
  while( true ) {
    if (*(int *)&(this->SurfaceQueues).field_0x8 - *(int *)&(this->SurfaceQueues).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar10) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    lVar14 = (longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)&this->SurfaceQueues;
    this_00 = *(FMoviePipelineSurfaceQueue **)(lVar14 + 8);
    pTVar7 = *(TReferenceControllerBase<1> **)(lVar14 + 0x10);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FMoviePipelineSurfaceQueue *)0x0) {
      FMoviePipelineSurfaceQueue::Shutdown(this_00);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pFVar13 = FTaskGraphInterface::Get();
  pTVar3 = &this->OutstandingTasks;
  (**(code **)((longlong)*pFVar13 + 0x60))(pFVar13,pTVar3);
  piVar1 = &(this->OutstandingTasks).ArrayMax;
  iVar5 = (this->OutstandingTasks).ArrayNum;
  FVar15 = (this->OutstandingTasks).AllocatorInstance.SecondaryData;
  if (*piVar1 < 0) {
    if (FVar15 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar3;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar15,iVar5);
    (this->OutstandingTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (FVar15 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar3;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar15,iVar5);
    (this->OutstandingTasks).ArrayNum = 0;
  }
  return;
}

