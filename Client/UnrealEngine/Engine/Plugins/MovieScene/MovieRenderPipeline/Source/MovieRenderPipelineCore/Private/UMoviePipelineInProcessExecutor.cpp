// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 15

// StaticClass @ 14dd5ec00

UClass * __cdecl UMoviePipelineInProcessExecutor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineInProcessExecutor",
               &Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton,
               StaticRegisterNativesUMoviePipelineInProcessExecutor,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineInProcessExecutor>,
               InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutor>,local_res8,
               UMoviePipelineLinearExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton;
}

// UMoviePipelineInProcessExecutor @ 14dd6b260

UMoviePipelineInProcessExecutor * __thiscall
UMoviePipelineInProcessExecutor::UMoviePipelineInProcessExecutor
          (UMoviePipelineInProcessExecutor *this,FVTableHelper *param_1)

{
  UMoviePipelineExecutorBase::UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutor__6B_;
  (this->SavedState).FixedDeltaTime = 1.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SavedState).bBackedUp = false;
  (this->SavedState).bCinematicMode = false;
  (this->SavedState).bHidePlayer = false;
  (this->SavedState).bUseFixedTimeStep = false;
  (this->SavedState).WindowTitle.field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->SavedState).WindowTitle.field0_0x0.TypedValue.Flags = 0;
  *(undefined8 *)&this->OnIndividualJobFinishedDelegateNative = 0;
  *(undefined8 *)&(this->OnIndividualJobFinishedDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnIndividualJobFinishedDelegateNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnIndividualJobFinishedDelegateNative).field_0x18 = 2;
  return this;
}

// ~UMoviePipelineInProcessExecutor @ 14dd6c200

void __thiscall
UMoviePipelineInProcessExecutor::~UMoviePipelineInProcessExecutor
          (UMoviePipelineInProcessExecutor *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutor__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnIndividualJobFinishedDelegateNative).field_0x8,
             *(int *)&(this->OnIndividualJobFinishedDelegateNative).field_0x10);
  pvVar1 = *(void **)&(this->OnIndividualJobFinishedDelegateNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIndividualJobFinishedDelegateNative);
  plVar2 = *(longlong **)&(this->SavedState).WindowTitle.field0_0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMoviePipelineLinearExecutorBase__6B_;
  UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this);
  return;
}

// BackupState @ 14dd77a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMoviePipelineInProcessExecutor::BackupState(UMoviePipelineInProcessExecutor *this)

{
  int iVar1;
  UGameInstance *this_00;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  UEngine *pUVar7;
  char cVar8;
  atomic<int> aVar9;
  UWorld *pUVar10;
  APlayerController *pAVar11;
  UClass *pUVar12;
  TReferenceControllerBase<1> *pTVar13;
  TOptional<FText> *this_01;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  FText local_68;
  FText local_58;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  (this->SavedState).bBackedUp = true;
  (this->SavedState).bUseFixedTimeStep = FApp::bUseFixedTimeStep;
  (this->SavedState).FixedDeltaTime = (double)FApp::FixedDeltaTime;
  pUVar10 = MoviePipeline::FindCurrentWorld();
  if (((pUVar10 != (UWorld *)0x0) &&
      (this_00 = (pUVar10->OwningGameInstance).field0_0x0.DebugPtr, this_00 != (UGameInstance *)0x0)
      ) && (pAVar11 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0),
           pAVar11 != (APlayerController *)0x0)) {
    (this->SavedState).bCinematicMode = pAVar11->bCinematicMode;
    (this->SavedState).bHidePlayer = pAVar11->bHidePawnInCinematicMode;
  }
  plVar2 = *(longlong **)&(this->SavedState).WindowTitle.field0_0x0;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    (this->SavedState).WindowTitle.field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
    (this->SavedState).WindowTitle.field0_0x0.TypedValue.Flags = 0;
  }
  pUVar7 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar12 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar12->_padding_)) {
      pTVar3 = (TReferenceControllerBase<1> *)pUVar7[1]._padding_;
      pTVar13 = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar3->SharedReferenceCount;
        do {
          pTVar13 = pTVar14;
          if (aVar6 == (atomic<int>)0x0) goto LAB_14dd77b11;
          LOCK();
          aVar9 = pTVar3->SharedReferenceCount;
          bVar15 = aVar6 == aVar9;
          if (bVar15) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar15);
        lVar4 = pUVar7[1]._padding_;
        pTVar13 = pTVar3;
        if (lVar4 != 0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x390),
                     &local_48);
          if (((*(int *)(lVar4 + 0x3a0) == 0) || (*(longlong **)(lVar4 + 0x398) == (longlong *)0x0))
             || (cVar8 = (**(code **)(**(longlong **)(lVar4 + 0x398) + 0x38))(), cVar8 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_48);
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_48);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar4 + 0x390),
                       &local_30);
            if (*(int *)(lVar4 + 0x3a0) != 0) {
              pTVar14 = *(TReferenceControllerBase<1> **)(lVar4 + 0x398);
            }
            (**(code **)(pTVar14->_padding_ + 0x60))(pTVar14,&local_58);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_30);
            FText::operator=((FText *)(lVar4 + 0x378),&local_58);
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
            }
          }
          local_68.TextData.Reference = (((FText *)(lVar4 + 0x378))->TextData).Reference;
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 8))
                      (local_68.TextData.Reference,local_res8);
          }
          local_68.Flags = *(uint *)(lVar4 + 0x380);
          this_01 = &(this->SavedState).WindowTitle;
          if (&local_68 != (FText *)this_01) {
            if (*(longlong **)&this_01->field0_0x0 != (longlong *)0x0) {
              (**(code **)(**(longlong **)&this_01->field0_0x0 + 0x10))();
            }
            FText::FText((FText *)this_01,&local_68);
            if (((this_01->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x171,
                                    L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                   ), bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
        }
      }
LAB_14dd77b11:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  return;
}

// CancelAllJobs_Implementation @ 14dd7a890

void __thiscall
UMoviePipelineInProcessExecutor::CancelAllJobs_Implementation(UMoviePipelineInProcessExecutor *this)

{
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  UMoviePipelineExecutorBase::CancelCurrentJob((UMoviePipelineExecutorBase *)this);
  return;
}

// CancelCurrentJob_Implementation @ 14dd7a960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineInProcessExecutor::CancelCurrentJob_Implementation
          (UMoviePipelineInProcessExecutor *this)

{
  char cVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
    if (cVar1 != '\x04') {
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))((longlong *)this->_padding_,0);
                    /* WARNING: Could not recover jumptable at 0x00014dd7a9c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this->_padding_ + 0x2b8))((longlong *)this->_padding_,0);
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14dd8bdd0

UClass * __cdecl UMoviePipelineInProcessExecutor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineInProcessExecutor",
               &Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton,
               StaticRegisterNativesUMoviePipelineInProcessExecutor,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineInProcessExecutor>,
               InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutor>,local_res8,
               UMoviePipelineLinearExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.InnerSingleton;
}

// ModifyState @ 14dd90410

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
UMoviePipelineInProcessExecutor::ModifyState
          (UMoviePipelineInProcessExecutor *this,UMoviePipelineExecutorJob *param_1)

{
  int iVar1;
  UGameInstance *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  APlayerController *pAVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UMoviePipelineOutputSetting *pUVar8;
  longlong lVar9;
  FString *pFVar10;
  FFrameRate FVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar4 = MoviePipeline::FindCurrentWorld();
  if ((pUVar4 != (UWorld *)0x0) &&
     (this_00 = (pUVar4->OwningGameInstance).field0_0x0.DebugPtr, this_00 != (UGameInstance *)0x0))
  {
    pAVar5 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0);
    if (pAVar5 != (APlayerController *)0x0) {
      (**(code **)(pAVar5->_padding_ + 0xc18))(pAVar5,1,1,1,1,1);
    }
  }
  pUVar6 = FSoftObjectPath::TryLoad(&param_1->Sequence,(FUObjectSerializeContext *)0x0);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      FApp::bUseFixedTimeStep = true;
      pUVar8 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                         ((UMoviePipelineConfigBase *)(param_1->Configuration).field0_0x0.DebugPtr,
                          false);
      if (pUVar8 == (UMoviePipelineOutputSetting *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputSettings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                           ,0xa4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pUVar8->bUseCustomFrameRate == false) {
        lVar9 = (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6);
        FVar11 = *(FFrameRate *)(lVar9 + 0x140);
      }
      else {
        FVar11 = pUVar8->OutputFrameRate;
      }
      FApp::FixedDeltaTime = (atomic<double>)((double)FVar11.Denominator / (double)FVar11.Numerator)
      ;
      return;
    }
    pFVar10 = GetTypeName<ULevelSequence>(&local_28);
    pwVar12 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UObject>(&local_18,pUVar6);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  pFVar10 = GetTypeName<ULevelSequence>(&local_38);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar12);
}

// OnApplicationQuit @ 14dd905f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineInProcessExecutor::OnApplicationQuit(UMoviePipelineInProcessExecutor *this)

{
  char cVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
    if (cVar1 != '\x04') {
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))((longlong *)this->_padding_,0);
      (**(code **)(*(longlong *)this->_padding_ + 0x2b8))((longlong *)this->_padding_,0);
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        return;
      }
    }
  }
  return;
}

// OnMapLoadFinished @ 14dd917b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineInProcessExecutor::OnMapLoadFinished
          (UMoviePipelineInProcessExecutor *this,UWorld *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  UMovieGraphConfig *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  TMulticastDelegateRegistration<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
  *this_00;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_01;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> *pTVar11;
  UMovieGraphPipeline *this_02;
  FMovieGraphInitConfig *pFVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  UMoviePipeline *this_03;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_198;
  int local_190;
  int local_18c;
  ForAnyElementType local_188;
  int local_180;
  int local_17c [3];
  FString local_170;
  undefined1 local_160 [4];
  FName local_15c;
  FText local_150;
  ITextData *local_140;
  uint local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [24];
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> local_108;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> local_f8;
  FMovieGraphInitConfig local_e8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    if (param_1 == (UWorld *)0x0) {
      ::FString::FString(&local_170,L"None");
    }
    else {
      local_15c = (FName)param_1->_padding_;
      ::FName::ToString(&local_15c,&local_170);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  if (param_1 == (UWorld *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
               this);
    return;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,this);
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = *(int *)(this->_padding_ + 0x30);
  lVar15 = (longlong)local_180;
  pvVar3 = *(void **)(this->_padding_ + 0x28);
  if (local_180 == 0) {
    local_17c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_180,0,&local_188,local_180,local_17c);
    memcpy(local_188.Data,pvVar3,lVar15 << 3);
  }
  iVar2 = local_180;
  lVar15 = this->_padding_;
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (iVar2 <= (int)lVar15) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
               this);
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UMoviePipelineQueue::GetJobs
                ((UMoviePipelineQueue *)this->_padding_,
                 (TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> *)(local_120 + 8))
      ;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if ((void *)local_120._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_120._8_8_);
      }
    }
    FText::AsLocalizable_Advanced_LocText
              (&local_150,L"MoviePipelineInProcessExecutor",L"OutOfBoundsFailureDialog",
               L"The job index is out of bounds, did you clear the Queue while rendering was happening? See log for details."
              );
    local_140 = local_150.TextData.Reference;
    pcVar4 = *(code **)(this->_padding_ + 0x330);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 8))
                (local_150.TextData.Reference,local_160);
    }
    local_138 = local_150.Flags;
    (*pcVar4)(this,0,1,&local_140);
    (**(code **)(this->_padding_ + 0x2b0))(this);
    if (local_150.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    return;
  }
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = *(int *)(this->_padding_ + 0x30);
  lVar15 = (longlong)local_190;
  pvVar3 = *(void **)(this->_padding_ + 0x28);
  if (local_190 == 0) {
    local_18c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_190,0,&local_198,local_190,&local_18c);
    memcpy(local_198.Data,pvVar3,lVar15 << 3);
  }
  uVar1 = (uint)this->_padding_;
  uVar13 = 0;
  if ((int)uVar1 < local_190) {
    uVar13 = ~uVar1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar15 = *(longlong *)(local_198.Data + (longlong)(int)uVar1 * 8);
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  lVar5 = this->_padding_;
  if ((lVar5 == 0) ||
     (pUVar7 = Z_Construct_UClass_UMoviePipeline_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14dd91af6:
    pUVar7 = Z_Construct_UClass_UMoviePipeline_NoRegister();
  }
  else {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((!bVar6) || (pUVar7 = (UClass *)this->_padding_, pUVar7 == (UClass *)0x0))
    goto LAB_14dd91af6;
  }
  pUVar8 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     ((TSoftObjectPtr<UMovieGraphConfig> *)(lVar15 + 0x138));
  if (pUVar8 != (UMovieGraphConfig *)0x0) {
    pUVar9 = Z_Construct_UClass_UMovieGraphPipeline_NoRegister();
    if (pUVar9 != (UClass *)0x0) {
      iVar2 = (int)pUVar9->_padding_;
      if (((int)pUVar7->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) goto LAB_14dd91b4e;
    }
    pUVar7 = Z_Construct_UClass_UMovieGraphPipeline_NoRegister();
  }
LAB_14dd91b4e:
  local_17c[1] = 0;
  local_17c[2] = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UMoviePipelineBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar9,pUVar7);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar7);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._16_4_ = 0;
  local_c8._20_4_ = 0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = param_1;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar14 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar10 == (UObject *)0x0)) {
    this->_padding_ = (longlong)pUVar10;
    if (pUVar10 != (UObject *)0x0) goto LAB_14dd91c01;
LAB_14dd91c55:
    this_03 = (UMoviePipeline *)0x0;
  }
  else {
    UE::GC::MarkAsReachable(pUVar10);
    this->_padding_ = (longlong)pUVar10;
LAB_14dd91c01:
    pUVar7 = Z_Construct_UClass_UMoviePipeline_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (!bVar6) goto LAB_14dd91c55;
    this_03 = (UMoviePipeline *)this->_padding_;
    if (this_03 != (UMoviePipeline *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)this->_padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this->_padding_);
      }
      (this_03->ViewportInitArgs).DebugWidgetClass.Class.field0_0x0 =
           (TObjectPtr<UClass>_u_0)this->_padding_;
      (this_03->ViewportInitArgs).bRenderViewport = SUB81(this->_padding_,0);
    }
  }
  pUVar7 = Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar10 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMoviePipelineInProcessExecutor>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(UMoviePipelineInProcessExecutor *)local_130,
             (pmf_df1d7ef2)this);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
             *)(**(code **)(*(longlong *)this->_padding_ + 0x2d0))();
  TMulticastDelegateRegistration<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
  ::AddUObject<UMoviePipelineInProcessExecutor>
            (this_00,(UMoviePipelineInProcessExecutor *)(local_130 + 8),(pmf_3b9098df)this);
  this_01 = FCoreDelegates::GetApplicationWillTerminateDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddUObject<UMoviePipelineInProcessExecutor>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             this_01,(UMoviePipelineInProcessExecutor *)local_120,(pmf_df1d7ef2)this);
  *(undefined1 *)&this->_padding_ = 1;
  iVar2 = *(int *)&pUVar10[2].field_0x10;
  if (iVar2 != 0) {
    this->RemainingInitializationFrames = iVar2;
    return;
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if (this_03 == (UMoviePipeline *)0x0) {
    this_02 = Cast<UMovieGraphPipeline,UMoviePipelineBase>
                        ((TObjectPtr<UMoviePipelineBase> *)&this->_padding_);
    if (this_02 == (UMovieGraphPipeline *)0x0) goto LAB_14dd91e32;
    pFVar12 = FMovieGraphInitConfig::FMovieGraphInitConfig(&local_e8);
    pTVar11 = UMoviePipelineQueue::GetJobs((UMoviePipelineQueue *)this->_padding_,&local_f8);
    uVar1 = (uint)this->_padding_;
    uVar13 = 0;
    if ((int)uVar1 < pTVar11->ArrayNum) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UMovieGraphPipeline::Initialize
              (this_02,*(UMoviePipelineExecutorJob **)
                        ((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar1 * 8),pFVar12);
    local_108.AllocatorInstance.Data = local_f8.AllocatorInstance.Data;
  }
  else {
    pTVar11 = UMoviePipelineQueue::GetJobs((UMoviePipelineQueue *)this->_padding_,&local_108);
    uVar1 = (uint)this->_padding_;
    uVar13 = 0;
    if ((int)uVar1 < pTVar11->ArrayNum) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UMoviePipeline::Initialize
              (this_03,*(UMoviePipelineExecutorJob **)
                        ((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar1 * 8));
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_14dd91e32:
  this->RemainingInitializationFrames = -1;
  return;
}

// OnMoviePipelineFinished @ 14dd91f30

void __thiscall
UMoviePipelineInProcessExecutor::OnMoviePipelineFinished
          (UMoviePipelineInProcessExecutor *this,FMoviePipelineOutputData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMoviePipelineOutputData *pFVar4;
  FMoviePipelineOutputData *pFVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  UClass *pUVar6;
  UMoviePipelineBase *pUVar7;
  FMoviePipelineOutputData local_78;
  FMoviePipelineOutputData local_40;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
             this);
  pFVar4 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_78,param_1);
  pFVar5 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_40,pFVar4);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>,FMoviePipelineOutputData>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnIndividualJobFinishedDelegateNative,pFVar5);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(pFVar4->GraphData).AllocatorInstance.Data,
             (pFVar4->GraphData).ArrayNum);
  pFVar1 = (pFVar4->GraphData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(pFVar4->ShotData).AllocatorInstance.Data,
             (pFVar4->ShotData).ArrayNum);
  pFVar1 = (pFVar4->ShotData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)this->_padding_ + 0x2d0))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  }
  pUVar7 = (UMoviePipelineBase *)0x0;
  this->_padding_ = 0;
  RestoreState(this);
  pcVar2 = *(code **)(this->_padding_ + 0x328);
  if ((param_1->Pipeline).field0_0x0.DebugPtr != (UMoviePipelineBase *)0x0) {
    pUVar6 = Z_Construct_UClass_UMoviePipeline_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar6);
    if (bVar3) {
      pUVar7 = (param_1->Pipeline).field0_0x0.DebugPtr;
    }
  }
  (*pcVar2)(this,pUVar7);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
             (param_1->GraphData).ArrayNum);
  pFVar1 = (param_1->GraphData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
             (param_1->ShotData).ArrayNum);
  pFVar1 = (param_1->ShotData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnTick @ 14dd95170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMoviePipelineInProcessExecutor::OnTick(UMoviePipelineInProcessExecutor *this)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  UMoviePipeline *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  UEngine *pUVar6;
  bool bVar7;
  atomic<int> aVar8;
  UClass *pUVar9;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  FText local_28;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (-1 < this->RemainingInitializationFrames) {
    if (this->RemainingInitializationFrames == 0) {
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      if (this->_padding_ != 0) {
        pUVar9 = Z_Construct_UClass_UMoviePipeline_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
        if ((bVar7) &&
           (this_00 = (UMoviePipeline *)this->_padding_, this_00 != (UMoviePipeline *)0x0)) {
          pTVar10 = UMoviePipelineQueue::GetJobs((UMoviePipelineQueue *)this->_padding_,&local_18);
          uVar2 = (uint)this->_padding_;
          uVar11 = 0;
          if ((int)uVar2 < pTVar10->ArrayNum) {
            uVar11 = ~uVar2 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UMoviePipeline::Initialize
                    (this_00,*(UMoviePipelineExecutorJob **)
                              ((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar2 * 8));
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
        }
        else if (this->_padding_ != 0) {
          pUVar9 = Z_Construct_UClass_UMovieGraphPipeline_NoRegister();
          FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
        }
      }
    }
    this->RemainingInitializationFrames = this->RemainingInitializationFrames + -1;
  }
  (**(code **)(this->_padding_ + 0x318))(this,&local_28);
  UKismetSystemLibrary::SetWindowTitle(&local_28);
  pUVar6 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar9 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar9->_padding_)) {
      pTVar12 = (TReferenceControllerBase<1> *)pUVar6[1]._padding_;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar12->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar12 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14dd95316;
          }
          LOCK();
          aVar8 = pTVar12->SharedReferenceCount;
          bVar7 = aVar5 == aVar8;
          if (bVar7) {
            pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar8 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar8;
        } while (!bVar7);
        if (pUVar6[1]._padding_ != 0) {
          pbVar1 = (byte *)(pUVar6[1]._padding_ + 0x3ea);
          *pbVar1 = *pbVar1 & 0xef;
        }
      }
LAB_14dd95316:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// RestoreState @ 14dd9cc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMoviePipelineInProcessExecutor::RestoreState(UMoviePipelineInProcessExecutor *this)

{
  byte *pbVar1;
  int iVar2;
  UGameInstance *this_00;
  longlong *plVar3;
  atomic<int> aVar4;
  UEngine *pUVar5;
  atomic<int> aVar6;
  UWorld *pUVar7;
  APlayerController *pAVar8;
  UClass *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  
  if ((this->SavedState).bBackedUp != false) {
    FApp::bUseFixedTimeStep = (this->SavedState).bUseFixedTimeStep;
    (this->SavedState).bBackedUp = false;
    FApp::FixedDeltaTime = (atomic<double>)(this->SavedState).FixedDeltaTime;
    pUVar7 = MoviePipeline::FindCurrentWorld();
    if (((pUVar7 != (UWorld *)0x0) &&
        (this_00 = (pUVar7->OwningGameInstance).field0_0x0.DebugPtr, this_00 != (UGameInstance *)0x0
        )) && (pAVar8 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0),
              pAVar8 != (APlayerController *)0x0)) {
      (**(code **)(pAVar8->_padding_ + 0xc18))
                (pAVar8,(this->SavedState).bCinematicMode,(this->SavedState).bHidePlayer,1,1,1);
      (**(code **)(pAVar8->_padding_ + 0x888))(pAVar8);
    }
    if ((this->SavedState).WindowTitle.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
    {
      UKismetSystemLibrary::SetWindowTitle((FText *)&(this->SavedState).WindowTitle);
      plVar3 = *(longlong **)&(this->SavedState).WindowTitle.field0_0x0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        (this->SavedState).WindowTitle.field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
        (this->SavedState).WindowTitle.field0_0x0.TypedValue.Flags = 0;
      }
    }
  }
  pUVar5 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar9 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) {
      pTVar10 = (TReferenceControllerBase<1> *)pUVar5[1]._padding_;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar10->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14dd9cd83;
          }
          LOCK();
          aVar6 = pTVar10->SharedReferenceCount;
          bVar11 = aVar4 == aVar6;
          if (bVar11) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar11);
        if (pUVar5[1]._padding_ != 0) {
          pbVar1 = (byte *)(pUVar5[1]._padding_ + 0x3ea);
          *pbVar1 = *pbVar1 | 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          return;
        }
      }
LAB_14dd9cd83:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return;
    }
  }
  return;
}

// Start @ 14dda5c40

/* WARNING: Removing unreachable block (ram,0x00014dda5ef7) */
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
UMoviePipelineInProcessExecutor::Start
          (UMoviePipelineInProcessExecutor *this,UMoviePipelineExecutorJob *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  UWorld *pUVar4;
  UWorld *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  FName *pFVar9;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FName FVar15;
  FScriptContainerElement *pFVar16;
  FName FVar17;
  FName _Src;
  FName local_res8;
  FText local_58;
  FTopLevelAssetPath local_48;
  FString local_38;
  
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  pUVar4 = MoviePipeline::FindCurrentWorld();
  if (this->bUseCurrentLevel != false) {
    if (pUVar4 == (UWorld *)0x0) {
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      (**(code **)(this->_padding_ + 0x328))(this,0);
      return;
    }
    pUVar5 = (UWorld *)FSoftObjectPath::ResolveObject(&param_1->Map);
    if ((pUVar4 != pUVar5) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
      local_48.PackageName = (param_1->Map).AssetPath.PackageName;
      local_48.AssetName = (param_1->Map).AssetPath.AssetName;
      FTopLevelAssetPath::ToString(&local_48,&local_38);
      local_res8 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if ((FName)local_58.TextData.Reference != (FName)0x0) {
        FMemory::Free(local_58.TextData.Reference);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      local_res8 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_58);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if ((FName)local_58.TextData.Reference != (FName)0x0) {
        FMemory::Free(local_58.TextData.Reference);
      }
    }
  }
  pUVar6 = FSoftObjectPath::TryLoad(&param_1->Sequence,(FUObjectSerializeContext *)0x0);
  if (pUVar6 == (UObject *)0x0) {
LAB_14dda6006:
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      FSoftObjectPath::ToString(&param_1->Sequence,&local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FText::AsLocalizable_Advanced_LocText
              (&local_58,L"MoviePipelineInProcessExecutor",L"InvalidSequenceFailureDialog",
               L"One or more jobs in the queue has an invalid/null sequence. See log for details.");
    local_48.PackageName = (FName)local_58.TextData.Reference;
    pcVar1 = *(code **)(this->_padding_ + 0x330);
    if ((FName)local_58.TextData.Reference != (FName)0x0) {
      (**(code **)(*(longlong *)local_58.TextData.Reference + 8))
                (local_58.TextData.Reference,&local_res8);
    }
    local_48.AssetName.ComparisonIndex.Value = local_58.Flags;
    (*pcVar1)(this,0,1,&local_48);
    (**(code **)(this->_padding_ + 0x2b0))(this);
    if ((FName)local_58.TextData.Reference != (FName)0x0) {
      (**(code **)(*(longlong *)local_58.TextData.Reference + 0x10))();
    }
    return;
  }
  pUVar7 = Z_Construct_UClass_ULevelSequence_NoRegister();
  iVar12 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar12) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
      &pUVar7->_padding_)) goto LAB_14dda6006;
  BackupState(this);
  UMoviePipelinePrimaryConfig::InitializeTransientSettings
            ((param_1->Configuration).field0_0x0.DebugPtr);
  ModifyState(this,param_1);
  if (this->bUseCurrentLevel != false) {
    OnMapLoadFinished(this,pUVar4);
    return;
  }
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  UMovieGraphGlobalGameOverridesNode::GetGameModeOverride((UMoviePipelineExecutorJob *)&local_res8);
  FVar10 = local_res8;
  _Src = FVar15;
  if ((local_res8 != (FName)0x0) &&
     (pUVar7 = Z_Construct_UClass_AGameModeBase_NoRegister(), FVar3 = local_res8,
     pUVar7 != (UClass *)0x0)) {
    iVar12 = (int)pUVar7->_padding_;
    if ((*(int *)((longlong)FVar10 + 0x38) < iVar12) ||
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar10 + 0x30) + (longlong)iVar12 * 8)
        != &pUVar7->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    _Src = FVar17;
    if ((bVar2) && (FVar15 = FVar14, local_res8 != (FName)0x0)) {
      pUVar7 = Z_Construct_UClass_AGameModeBase_NoRegister();
      if (pUVar7 == (UClass *)0x0) {
LAB_14dda5e9b:
        FVar10.ComparisonIndex.Value = 0;
        FVar10.Number = 0;
      }
      else {
        iVar12 = (int)pUVar7->_padding_;
        if ((*(int *)((longlong)FVar3 + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar3 + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar7->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        FVar10 = local_res8;
        if (!bVar2) goto LAB_14dda5e9b;
      }
      pFVar8 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)FVar10,&local_38,(UObject *)0x0);
      ::FString::ConcatCF((FString *)&local_58,L"?game=",pFVar8);
      _Src = (FName)local_58.TextData;
      FVar13.Value = local_58.Flags;
      FVar15 = (FName)(local_58._8_8_ & 0xffffffff);
      local_58.TextData.Reference = (ITextData *)0x0;
      local_58._8_8_ = 0;
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_14dda5ee0;
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FVar13 = FVar15.ComparisonIndex.Value;
LAB_14dda5ee0:
  pFVar11 = (FScriptContainerElement *)0x0;
  local_res8 = (param_1->Map).AssetPath.PackageName;
  if (local_res8 == (FName)0x0) {
    iVar12 = 0;
  }
  else {
    pFVar8 = ::FName::ToString(&local_res8,&local_38);
    pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
  AddUObject<UMoviePipelineInProcessExecutor>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,
             (UMoviePipelineInProcessExecutor *)&local_res8,(pmf_8e4edfc1)this);
  local_58.Flags = FVar13.Value;
  local_58.TextData.Reference = (ITextData *)0x0;
  if (FVar13.Value == 0) {
    local_58.Flags = 0;
    local_58._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FVar13.Value,0,(ForAnyElementType *)&local_58,FVar13.Value,
               (int *)&local_58.field_0xc);
    memcpy(local_58.TextData.Reference,(void *)_Src,(longlong)(int)FVar13.Value * 2);
  }
  pFVar16 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar16 = pFVar11;
  }
  pFVar9 = ::FName::FName(&local_res8,(wchar_t *)pFVar16);
  UGameplayStatics::OpenLevel((UObject *)pUVar4,*pFVar9,true,(FString *)&local_58);
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (_Src == (FName)0x0) {
    return;
  }
  FMemory::Free((void *)_Src);
  return;
}

// StaticRegisterNativesUMoviePipelineInProcessExecutor @ 14dda66e0

void __cdecl
UMoviePipelineInProcessExecutor::StaticRegisterNativesUMoviePipelineInProcessExecutor(void)

{
  return;
}

