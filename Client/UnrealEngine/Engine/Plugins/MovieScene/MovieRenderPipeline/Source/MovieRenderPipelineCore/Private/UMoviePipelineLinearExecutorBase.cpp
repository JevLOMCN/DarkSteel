// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 16

// StaticClass @ 14dd5e7d0

UClass * __cdecl UMoviePipelineLinearExecutorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineLinearExecutorBase",
               &Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineLinearExecutorBase,0x170,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineLinearExecutorBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineLinearExecutorBase>,local_res8,
               UMoviePipelineExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton;
}

// UMoviePipelineLinearExecutorBase @ 14dd6b2f0

UMoviePipelineLinearExecutorBase * __thiscall
UMoviePipelineLinearExecutorBase::UMoviePipelineLinearExecutorBase
          (UMoviePipelineLinearExecutorBase *this,FVTableHelper *param_1)

{
  UMoviePipelineExecutorBase::UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMoviePipelineLinearExecutorBase__6B_;
  (this->Queue).field0_0x0.DebugPtr = (UMoviePipelineQueue *)0x0;
  (this->ActiveMoviePipeline).field0_0x0.DebugPtr = (UMoviePipelineBase *)0x0;
  (this->InitializationTime).Ticks = 0;
  return this;
}

// ~UMoviePipelineLinearExecutorBase @ 14dd6c280

void __thiscall
UMoviePipelineLinearExecutorBase::~UMoviePipelineLinearExecutorBase
          (UMoviePipelineLinearExecutorBase *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineLinearExecutorBase__6B_;
  UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase((UMoviePipelineExecutorBase *)this);
  return;
}

// CancelAllJobs_Implementation @ 14dd7a8b0

void __thiscall
UMoviePipelineLinearExecutorBase::CancelAllJobs_Implementation
          (UMoviePipelineLinearExecutorBase *this)

{
  code *pcVar1;
  UMoviePipelineBase *pUVar2;
  FText *pFVar3;
  FText local_18;
  
  this->bIsCanceling = true;
  pcVar1 = *(code **)(this->_padding_ + 0x2b8);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MoviePipelineLinearExecutorBase",L"CancelingExecutorQueue",
                      L"Executor asked to cancel all jobs.");
  (*pcVar1)(this,0,1,pFVar3);
  pUVar2 = (this->ActiveMoviePipeline).field0_0x0.DebugPtr;
  if (pUVar2 != (UMoviePipelineBase *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,1);
  }
  return;
}

// CancelCurrentJob_Implementation @ 14dd7a9e0

void __thiscall
UMoviePipelineLinearExecutorBase::CancelCurrentJob_Implementation
          (UMoviePipelineLinearExecutorBase *this)

{
  code *pcVar1;
  UMoviePipelineBase *pUVar2;
  FText *pFVar3;
  FText local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x2b8);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MoviePipelineLinearExecutorBase",L"CancelingExecutorJob",
                      L"Executor canceling current job.");
  (*pcVar1)(this,0,1,pFVar3);
  pUVar2 = (this->ActiveMoviePipeline).field0_0x0.DebugPtr;
  if (pUVar2 != (UMoviePipelineBase *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,1);
  }
  return;
}

// Execute_Implementation @ 14dd80960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineLinearExecutorBase::Execute_Implementation
          (UMoviePipelineLinearExecutorBase *this,UMoviePipelineQueue *param_1)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  FText *pFVar3;
  FDateTime FVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UMoviePipelineQueue *)0x0) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pwVar7 = L"Executor asked to execute a null queue, not supported!";
    pwVar6 = L"NullPipelineError";
  }
  else {
    _Src = (param_1->Jobs).AllocatorInstance.Data;
    local_18.ArrayNum = (param_1->Jobs).ArrayNum;
    lVar5 = (longlong)local_18.ArrayNum;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.ArrayNum == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
                 &local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,lVar5 << 3);
    }
    iVar2 = local_18.ArrayNum;
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    if (iVar2 != 0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->Queue).field0_0x0.DebugPtr = param_1;
      FVar4 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
      (this->InitializationTime).Ticks = *FVar4.Ticks;
      this->JobsStarted = 0;
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UMoviePipelineQueue::GetJobs(param_1,&local_18);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014dd80b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x308))(this,0);
      return;
    }
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pwVar7 = L"Executor asked to execute empty list of jobs. This was probably not intended!";
    pwVar6 = L"EmptyPipelineError";
  }
  pcVar1 = *(code **)(this->_padding_ + 0x2b8);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"MoviePipelineLinearExecutorBase",pwVar6,pwVar7);
  (*pcVar1)(this,0,1,pFVar3);
                    /* WARNING: Could not recover jumptable at 0x00014dd809d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// GetCompletionPercentageFromActivePipeline @ 14dd875d0

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

float __thiscall
UMoviePipelineLinearExecutorBase::GetCompletionPercentageFromActivePipeline
          (UMoviePipelineLinearExecutorBase *this)

{
  TObjectPtr<UMoviePipelineBase> *this_00;
  bool bVar1;
  UClass *pUVar2;
  float fVar3;
  
  this_00 = &this->ActiveMoviePipeline;
  if ((this_00->field0_0x0).DebugPtr != (UMoviePipelineBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UMoviePipeline_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) && ((UMoviePipeline *)(this_00->field0_0x0).DebugPtr != (UMoviePipeline *)0x0)) {
      fVar3 = UMoviePipelineBlueprintLibrary::GetCompletionPercentage
                        ((UMoviePipeline *)(this_00->field0_0x0).DebugPtr);
      return fVar3;
    }
    if ((this_00->field0_0x0).DebugPtr != (UMoviePipelineBase *)0x0) {
      pUVar2 = Z_Construct_UClass_UMovieGraphPipeline_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((bVar1) &&
         ((UMovieGraphPipeline *)(this_00->field0_0x0).DebugPtr != (UMovieGraphPipeline *)0x0)) {
        fVar3 = UMovieGraphBlueprintLibrary::GetCompletionPercentage
                          ((UMovieGraphPipeline *)(this_00->field0_0x0).DebugPtr);
        return fVar3;
      }
    }
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14dd8be90

UClass * __cdecl UMoviePipelineLinearExecutorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineLinearExecutorBase",
               &Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineLinearExecutorBase,0x170,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineLinearExecutorBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineLinearExecutorBase>,local_res8,
               UMoviePipelineExecutorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.InnerSingleton;
}

// GetWindowTitle @ 14dd8e720

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UMoviePipelineLinearExecutorBase::GetWindowTitle
          (UMoviePipelineLinearExecutorBase *this,FText *__return_storage_ptr__)

{
  UMoviePipelineQueue *pUVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TTuple<FString,FFormatArgumentValue> *pTVar8;
  longlong lVar9;
  float fVar10;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FNumberFormattingOptions local_d8;
  TSharedPtr<FCulture,1> local_c0;
  TSharedPtr<FCulture,1> local_b0;
  TSharedPtr<FCulture,1> local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50 [2];
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_d8);
  local_d8.MinimumIntegralDigits = 1;
  local_d8.MaximumIntegralDigits = 3;
  local_d8.MaximumFractionalDigits = 0;
  local_d8.RoundingMode = HalfFromZero;
  fVar10 = (float)(**(code **)(this->_padding_ + 800))(this);
  fVar10 = fVar10 * __real_42c80000;
  FText::AsLocalizable_Advanced_LocText
            (&local_90,L"MoviePipelineLinearExecutorBase",L"MoviePreviewWindowTitleFormat",
             L"Movie Pipeline Render (Preview) [Job {CurrentCount}/{TotalCount} Total] Current Job: {PercentComplete}% Completed."
            );
  local_a0.Object = (FCulture *)0x0;
  local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsNumber(&local_60,fVar10,&local_d8,&local_a0);
  pUVar1 = (this->Queue).field0_0x0.DebugPtr;
  local_b0.Object = (FCulture *)0x0;
  local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = (pUVar1->Jobs).ArrayNum;
  lVar9 = (longlong)local_e0;
  _Src = (pUVar1->Jobs).AllocatorInstance.Data;
  if (local_e0 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_e0,0,&local_e8,local_e0,&local_dc);
    memcpy(local_e8.Data,_Src,lVar9 << 3);
  }
  pFVar5 = FText::AsNumber(&local_70,local_e0,(FNumberFormattingOptions *)0x0,&local_b0);
  local_c0.Object = (FCulture *)0x0;
  local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar6 = FText::AsNumber(&local_80,this->CurrentPipelineIndex + 1,(FNumberFormattingOptions *)0x0,
                           &local_c0);
  pFVar7 = FTextFormat::FTextFormat(local_50,&local_90,Default);
  local_f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Pairs.ArrayNum = 0;
  local_f8.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,3,(ForAnyElementType *)&local_f8,0,&local_f8.Pairs.ArrayMax);
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[13]>
                     (&local_f8,(wchar_t (*) [13])L"CurrentCount");
  ::FString::FString((FString *)pTVar8,L"CurrentCount");
  *(undefined4 *)&pTVar8->field_0x10 = 4;
  FText::FText((FText *)&pTVar8->field_0x20,pFVar6);
  if (*(longlong *)&pTVar8->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[11]>
                     (&local_f8,(wchar_t (*) [11])L"TotalCount");
  ::FString::FString((FString *)pTVar8,L"TotalCount");
  *(undefined4 *)&pTVar8->field_0x10 = 4;
  FText::FText((FText *)&pTVar8->field_0x20,pFVar5);
  if (*(longlong *)&pTVar8->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[16]>
                     (&local_f8,(wchar_t (*) [16])L"PercentComplete");
  ::FString::FString((FString *)pTVar8,L"PercentComplete");
  *(undefined4 *)&pTVar8->field_0x10 = 4;
  FText::FText((FText *)&pTVar8->field_0x20,pFVar4);
  if (*(longlong *)&pTVar8->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  FText::FormatNamedImpl(__return_storage_ptr__,pFVar7,&local_f8);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_f8.Pairs.AllocatorInstance.Data,
             local_f8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_f8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_f8.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.SharedReferenceCount.ReferenceController);
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsRendering_Implementation @ 14dd8ff30

bool __thiscall
UMoviePipelineLinearExecutorBase::IsRendering_Implementation(UMoviePipelineLinearExecutorBase *this)

{
  return this->bIsRendering;
}

// OnExecutorFinishedImpl @ 14dd912a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineLinearExecutorBase::OnExecutorFinishedImpl(UMoviePipelineLinearExecutorBase *this)

{
  FDateTime FVar1;
  FTimespan local_res8 [4];
  FString local_18;
  
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    FVar1 = FDateTime::UtcNow();
    local_res8[0].Ticks = *(longlong *)FVar1.Ticks - (this->InitializationTime).Ticks;
    FTimespan::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bIsRendering = false;
  TMulticastDelegate<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
             *)&this->_padding_,(UMoviePipelineExecutorBase *)this,(char)this->_padding_ == '\0');
  FOnMoviePipelineExecutorFinished_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (UMoviePipelineExecutorBase *)this,(char)this->_padding_ == '\0');
  return;
}

// OnIndividualPipelineFinished @ 14dd914f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineLinearExecutorBase::OnIndividualPipelineFinished
          (UMoviePipelineLinearExecutorBase *this,UMoviePipeline *param_1)

{
  int iVar1;
  UMoviePipelineQueue *pUVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  longlong lVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pUVar2 = (this->Queue).field0_0x0.DebugPtr;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = (pUVar2->Jobs).ArrayNum;
  lVar4 = (longlong)local_10;
  _Src = (pUVar2->Jobs).AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar4 << 3);
  }
  iVar1 = this->CurrentPipelineIndex;
  iVar3 = local_10 + -1;
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if ((iVar1 < iVar3) && (this->bIsCanceling == false)) {
                    /* WARNING: Could not recover jumptable at 0x00014dd915a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x308))(this,this->CurrentPipelineIndex + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd915c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// OnPipelineErrored @ 14dd92100

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineLinearExecutorBase::OnPipelineErrored
          (UMoviePipelineLinearExecutorBase *this,UMoviePipeline *param_1,bool param_2,
          FText *param_3)

{
  code *pcVar1;
  ITextData *pIVar2;
  undefined7 in_register_00000081;
  undefined1 local_res8 [8];
  ITextData *local_28;
  uint local_20;
  
  local_28 = (param_3->TextData).Reference;
  pcVar1 = *(code **)(this->_padding_ + 0x2b8);
  if (local_28 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28 + 8))
              (local_28,local_res8,CONCAT71(in_register_00000081,param_2));
  }
  local_20 = param_3->Flags;
  (*pcVar1)(this,param_1,param_2,&local_28);
  pIVar2 = (param_3->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// Start @ 14dda60e0

void __thiscall
UMoviePipelineLinearExecutorBase::Start
          (UMoviePipelineLinearExecutorBase *this,UMoviePipelineExecutorJob *param_1)

{
  return;
}

// StartPipelineByIndex @ 14dda60f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineLinearExecutorBase::StartPipelineByIndex
          (UMoviePipelineLinearExecutorBase *this,int param_1)

{
  uint uVar1;
  UMoviePipelineQueue *pUVar2;
  FScriptContainerElement *pFVar3;
  UObject *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  UFunction *this_01;
  UClass *pUVar7;
  FText *pFVar8;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  longlong lVar11;
  char cVar12;
  uint local_res10 [2];
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> local_38;
  FText local_28;
  
  bVar6 = false;
  local_res10[0] = 0;
  if (-1 < param_1) {
    pUVar2 = (this->Queue).field0_0x0.DebugPtr;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = (pUVar2->Jobs).ArrayNum;
    lVar11 = (longlong)local_70;
    pFVar3 = (pUVar2->Jobs).AllocatorInstance.Data;
    if (local_70 == 0) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_70,0,&local_78,local_70,&local_6c);
      memcpy(local_78.Data,pFVar3,lVar11 << 3);
    }
    bVar6 = true;
    if (param_1 < local_70) {
      bVar5 = false;
      goto LAB_14dda619a;
    }
  }
  bVar5 = true;
LAB_14dda619a:
  if ((bVar6) && (local_78.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data);
  }
  if ((bVar5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPipelineIndex >= 0 && InPipelineIndex < Queue->GetJobs().Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineLinearExecutor.cpp"
                         ,0x30,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar2 = (this->Queue).field0_0x0.DebugPtr;
  this->CurrentPipelineIndex = param_1;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = (pUVar2->Jobs).ArrayNum;
  lVar11 = (longlong)local_60;
  pFVar3 = (pUVar2->Jobs).AllocatorInstance.Data;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_60,0,&local_68,local_60,&local_5c);
    memcpy(local_68.Data,pFVar3,lVar11 << 3);
  }
  uVar1 = this->CurrentPipelineIndex;
  uVar10 = 0;
  if ((int)uVar1 < local_60) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = UMoviePipelineExecutorJob::IsEnabled
                    (*(UMoviePipelineExecutorJob **)(local_68.Data + (longlong)(int)uVar1 * 8));
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (bVar6) {
    pUVar2 = (this->Queue).field0_0x0.DebugPtr;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = (pUVar2->Jobs).ArrayNum;
    lVar11 = (longlong)local_50;
    pFVar3 = (pUVar2->Jobs).AllocatorInstance.Data;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_50,0,&local_58,local_50,&local_4c);
      memcpy(local_58.Data,pFVar3,lVar11 << 3);
    }
    uVar1 = this->CurrentPipelineIndex;
    uVar10 = 0;
    if ((int)uVar1 < local_50) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(UObject **)(local_58.Data + (longlong)(int)uVar1 * 8);
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UMoviePipelineExecutorJob_IsConsumed);
    pUVar7 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar7->ClassFlags & CLASS_Native) == CLASS_None) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,local_res10);
      cVar12 = (char)local_res10[0] != '\0';
    }
    else {
      cVar12 = (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (cVar12 == '\0') {
      pUVar2 = (this->Queue).field0_0x0.DebugPtr;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = (pUVar2->Jobs).ArrayNum;
      lVar11 = (longlong)local_80;
      pFVar3 = (pUVar2->Jobs).AllocatorInstance.Data;
      if (local_80 == 0) {
        local_7c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_80,0,&local_88,local_80,&local_7c);
        memcpy(local_88.Data,pFVar3,lVar11 << 3);
      }
      uVar1 = this->CurrentPipelineIndex;
      uVar10 = 0;
      if ((int)uVar1 < local_80) {
        uVar10 = ~uVar1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = *(longlong *)(*(longlong *)(local_88.Data + (longlong)(int)uVar1 * 8) + 0x100);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if (lVar11 == 0) {
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        pcVar4 = *(code **)(this->_padding_ + 0x2b8);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_28,L"MoviePipelineLinearExecutorBase",L"NullConfigError",
                            L"Found null config in list of configs to render with. Does your config have the wrong outer?"
                           );
        (*pcVar4)(this,0,1,pFVar8);
        (**(code **)(this->_padding_ + 0x2b0))(this);
        return;
      }
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UMoviePipelineQueue::GetJobs((this->Queue).field0_0x0.DebugPtr,&local_48);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
      pcVar4 = *(code **)(this->_padding_ + 0x310);
      pTVar9 = UMoviePipelineQueue::GetJobs((this->Queue).field0_0x0.DebugPtr,&local_38);
      uVar1 = this->CurrentPipelineIndex;
      uVar10 = 0;
      if ((int)uVar1 < pTVar9->ArrayNum) {
        uVar10 = ~uVar1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(this,*(undefined8 *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar1 * 8));
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      this->JobsStarted = this->JobsStarted + 1;
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x328))(this,0);
  return;
}

// StaticRegisterNativesUMoviePipelineLinearExecutorBase @ 14dda66f0

void __cdecl
UMoviePipelineLinearExecutorBase::StaticRegisterNativesUMoviePipelineLinearExecutorBase(void)

{
  return;
}

