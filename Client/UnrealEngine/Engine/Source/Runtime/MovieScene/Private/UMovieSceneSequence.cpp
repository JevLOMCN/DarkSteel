// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 51

// StaticClass @ 1461e32c0

UClass * __cdecl UMovieSceneSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequence",
               &Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequence,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequence>,
               InternalVTableHelperCtorCaller<UMovieSceneSequence>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton;
}

// UMovieSceneSequence @ 1461fe070

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
UMovieSceneSequence::UMovieSceneSequence(UMovieSceneSequence *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UMovieSceneSequence__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CompiledData).field0_0x0.DebugPtr = (UMovieSceneCompiledData *)0x0;
  return this;
}

// UMovieSceneSequence @ 1461fe0c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
UMovieSceneSequence::UMovieSceneSequence(UMovieSceneSequence *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->bParentContextsAreSignificant = false;
  this->bPlayableDirectly = true;
  this->_padding_ = (longlong)&___7UMovieSceneSequence__6B_;
  (this->CompiledData).field0_0x0.DebugPtr = (UMovieSceneCompiledData *)0x0;
  this->SequenceFlags = None;
  if ((this->_padding_ & 0x10) != 0) {
    UMovieSceneCompiledDataManager::GetPrecompiledData();
  }
  return this;
}

// ~UMovieSceneSequence @ 1461ffd30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSequence::~UMovieSceneSequence(UMovieSceneSequence *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneSignedObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AllowsCustomBindings @ 1462071b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMovieSceneSequence::AllowsCustomBindings(UMovieSceneSequence *this)

{
  return false;
}

// AllowsSpawnableObjects @ 1462071c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMovieSceneSequence::AllowsSpawnableObjects(UMovieSceneSequence *this)

{
  return false;
}

// BeginDestroy @ 1462084b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSequence::BeginDestroy(UMovieSceneSequence *this)

{
  UObject::BeginDestroy((UObject *)this);
  if ((GExitPurge == false) && ((this->_padding_ & 0x10) == 0)) {
    UMovieSceneCompiledDataManager::ReportSequenceDestroyed(this);
    return;
  }
  return;
}

// BindPossessableObject @ 1462085b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::BindPossessableObject
          (UMovieSceneSequence *this,FGuid *param_1,UObject *param_2,UObject *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h"
             ,0x77,L"Pure virtual not implemented (%s)");
  return;
}

// CanAnimateObject @ 14620a7f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMovieSceneSequence::CanAnimateObject(UMovieSceneSequence *this,UObject *param_1)

{
  return true;
}

// CanPossessObject @ 14620ab60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSequence::CanPossessObject(UMovieSceneSequence *this,UObject *param_1,UObject *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h"
             ,0x80,L"Pure virtual not implemented (%s)");
  return false;
}

// CanRebindPossessable @ 14620ab90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSequence::CanRebindPossessable(UMovieSceneSequence *this,FMovieScenePossessable *param_1)

{
  return false;
}

// CreateDirectorInstance @ 14620da00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSequence::CreateDirectorInstance
          (UMovieSceneSequence *this,IMovieScenePlayer *param_1,FMovieSceneSequenceID param_2)

{
  code *pcVar1;
  FSharedPlaybackState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  UObject *pUVar6;
  FSharedPlaybackState *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0x358);
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_1->_padding_ + 0x18))(param_1);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar1)();
      return pUVar6;
    }
  }
  pFVar2 = pTVar5->Object;
  pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar2 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar1)();
      return pUVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pFVar2;
  local_30 = pTVar3;
  pUVar6 = (UObject *)(*pcVar1)(this,&local_38,param_2.Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return pUVar6;
}

// CreateDirectorInstance @ 14620db00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSequence::CreateDirectorInstance
          (UMovieSceneSequence *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}

// CreatePossessable @ 14620de20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
UMovieSceneSequence::CreatePossessable
          (UMovieSceneSequence *this,FGuid *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// CreateSpawnable @ 14620de40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
UMovieSceneSequence::CreateSpawnable
          (UMovieSceneSequence *this,FGuid *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// FindBindingByTag @ 146210f70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneObjectBindingID * __thiscall
UMovieSceneSequence::FindBindingByTag
          (UMovieSceneSequence *this,FMovieSceneObjectBindingID *__return_storage_ptr__,
          FName param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FTokenizedMessage *this_00;
  undefined8 uVar3;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *pTVar4;
  FMessageLog *this_01;
  FText *pFVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  TSharedRef<FUObjectToken,1> *pTVar7;
  FName local_res20;
  TSharedRef<IMessageToken,1> local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  TSharedRef<FUObjectToken,1> local_78;
  FText local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  pTVar4 = FindBindingsByTag(this,param_1);
  if (pTVar4->ArrayNum < 1) {
    ::FName::FName(&local_res20,"PIE");
    this_01 = FMessageLog::FMessageLog(&local_38,&local_res20);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UMovieSceneSequence",L"FindNamedBinding_Warning",
                        L"Attempted to find a named binding that did not exist");
    pTVar6 = FMessageLog::Warning(this_01,&local_58,pFVar5);
    this_00 = pTVar6->Object;
    pFVar5 = FText::FText(&local_68);
    pTVar7 = FUObjectToken::Create(&local_78,(UObject *)this,pFVar5);
    local_98.Object = (IMessageToken *)pTVar7->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this_00,&local_88,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
    __return_storage_ptr__->ResolveParentIndex = -1;
    (__return_storage_ptr__->Guid).A = 0;
    (__return_storage_ptr__->Guid).B = 0;
    (__return_storage_ptr__->Guid).C = 0;
    (__return_storage_ptr__->Guid).D = 0;
    __return_storage_ptr__->SequenceID = 0;
  }
  else {
    pFVar2 = (pTVar4->AllocatorInstance).Data;
    uVar1 = *(undefined8 *)pFVar2;
    uVar3 = *(undefined8 *)(pFVar2 + 8);
    (__return_storage_ptr__->Guid).A = (int)uVar1;
    (__return_storage_ptr__->Guid).B = (int)((ulonglong)uVar1 >> 0x20);
    (__return_storage_ptr__->Guid).C = (int)uVar3;
    (__return_storage_ptr__->Guid).D = (int)((ulonglong)uVar3 >> 0x20);
    uVar1 = *(undefined8 *)(pFVar2 + 0x10);
    __return_storage_ptr__->SequenceID = (int)uVar1;
    __return_storage_ptr__->ResolveParentIndex = (int)((ulonglong)uVar1 >> 0x20);
  }
  return __return_storage_ptr__;
}

// FindBindingFromObject @ 1462111b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
UMovieSceneSequence::FindBindingFromObject
          (UMovieSceneSequence *this,FGuid *__return_storage_ptr__,UObject *param_1,UObject *param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *pFVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar3;
  longlong lVar4;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  if ((param_1 != (UObject *)0x0) && (param_2 != (UObject *)0x0)) {
    pTVar3 = MovieSceneHelpers::CreateTransientSharedPlaybackState(&local_18,param_2,this);
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar3->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      lVar4 = this->_padding_;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      lVar4 = this->_padding_;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar2;
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    (**(code **)(lVar4 + 0x2e0))(this,__return_storage_ptr__,param_1,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// FindBindingFromObject @ 1462112a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
UMovieSceneSequence::FindBindingFromObject
          (UMovieSceneSequence *this,FGuid *__return_storage_ptr__,UObject *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// FindBindingsByTag @ 1462112d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneSequence::FindBindingsByTag(UMovieSceneSequence *this,FName param_1)

{
  longlong lVar1;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *pTVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x2f8))();
  if ((lVar1 != 0) &&
     (pTVar2 = &TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
                ::Find((TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
                        *)(lVar1 + 0xa8),param_1)->IDs,
     pTVar2 != (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)0x0)) {
    return pTVar2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UMovieSceneSequence::FindBindingsByTag'::__l2::
           _dynamic_atexit_destructor_for__EmptyBindings__);
    _Init_thread_footer(&::_TSS0);
  }
  return &EmptyBindings;
}

// FindPossessableObjectId @ 146212440

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
UMovieSceneSequence::FindPossessableObjectId
          (UMovieSceneSequence *this,FGuid *__return_storage_ptr__,UObject *param_1,UObject *param_2
          )

{
  FMovieSceneEvaluationState *this_00;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_28;
  FGuid local_18;
  
  MovieSceneHelpers::CreateTransientSharedPlaybackState(&local_28,param_2,this);
  this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                      (local_28.Object);
  if (this_00 != (FMovieSceneEvaluationState *)0x0) {
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneEvaluationState::FindObjectId
              (this_00,&local_18,param_1,&MovieSceneSequenceID::Root,
               (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)&local_28);
    __return_storage_ptr__->A = local_18.A;
    __return_storage_ptr__->B = local_18.B;
    __return_storage_ptr__->C = local_18.C;
    __return_storage_ptr__->D = local_18.D;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GatherExpiredObjects @ 146215490

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::GatherExpiredObjects
          (UMovieSceneSequence *this,FMovieSceneObjectCache *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetBindingReferences @ 146216770

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingReferences * __thiscall
UMovieSceneSequence::GetBindingReferences(UMovieSceneSequence *this)

{
  FMovieSceneBindingReferences *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146216773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMovieSceneBindingReferences *)(**(code **)(this->_padding_ + 0x2b8))();
  return pFVar1;
}

// GetBindingReferences @ 146216780

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingReferences * __thiscall
UMovieSceneSequence::GetBindingReferences(UMovieSceneSequence *this)

{
  return (FMovieSceneBindingReferences *)0x0;
}

// GetCompiledData @ 146217360

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneCompiledData * __thiscall UMovieSceneSequence::GetCompiledData(UMovieSceneSequence *this)

{
  return (this->CompiledData).field0_0x0.DebugPtr;
}

// GetEarliestTimecodeSource @ 1462182d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneTimecodeSource * __thiscall
UMovieSceneSequence::GetEarliestTimecodeSource
          (UMovieSceneSequence *this,FMovieSceneTimecodeSource *__return_storage_ptr__)

{
  UMovieScene *this_00;
  
  this_00 = (UMovieScene *)(**(code **)(this->_padding_ + 0x2f8))();
  if (this_00 == (UMovieScene *)0x0) {
    (__return_storage_ptr__->Timecode).Hours = 0;
    (__return_storage_ptr__->Timecode).Minutes = 0;
    (__return_storage_ptr__->Timecode).Seconds = 0;
    (__return_storage_ptr__->Timecode).Frames = 0;
    (__return_storage_ptr__->Timecode).Subframe = 0.0;
    (__return_storage_ptr__->Timecode).bDropFrameFormat = false;
    return __return_storage_ptr__;
  }
  UMovieScene::GetEarliestTimecodeSource(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMovieScene @ 146219690

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieScene * __thiscall UMovieSceneSequence::GetMovieScene(UMovieSceneSequence *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h"
             ,0xd9,L"Pure virtual not implemented (%s)");
  return (UMovieScene *)0x0;
}

// GetOrCreateCompiledData @ 146219f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCompiledData * __thiscall
UMovieSceneSequence::GetOrCreateCompiledData(UMovieSceneSequence *this)

{
  FName FVar1;
  UClass *pUVar2;
  UMovieSceneCompiledData *pUVar3;
  FName *pFVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->CompiledData).field0_0x0.DebugPtr == (UMovieSceneCompiledData *)0x0) {
    local_a8.DataPtr = L"CompiledData";
    local_a8.Size = 0xc;
    pUVar2 = Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();
    pUVar3 = (UMovieSceneCompiledData *)StaticFindObject(pUVar2,(UObject *)this,&local_a8,None);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar3 == (UMovieSceneCompiledData *)0x0)) {
      (this->CompiledData).field0_0x0.DebugPtr = pUVar3;
      if (pUVar3 == (UMovieSceneCompiledData *)0x0) {
        pFVar4 = ::FName::FName((FName *)&local_a8,"CompiledData");
        FVar1 = *pFVar4;
        if (FVar1 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar2 = Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_98,pUVar2);
        local_98._24_4_ = RF_NoFlags;
        local_98._40_8_ = (UObject *)0x0;
        local_98[0x20] = false;
        local_98._48_8_ = (FObjectInstancingGraph *)0x0;
        local_98._56_8_ = (UPackage *)0x0;
        local_98._8_8_ = this;
        local_98._16_8_ = FVar1;
        pUVar3 = (UMovieSceneCompiledData *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
        if (local_98._64_8_ != 0) {
          plVar5 = (longlong *)(local_98 + 0x50);
          if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
            plVar5 = (longlong *)local_98._104_8_;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UMovieSceneCompiledData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        (this->CompiledData).field0_0x0.DebugPtr = pUVar3;
        return pUVar3;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (this->CompiledData).field0_0x0.DebugPtr = pUVar3;
    }
    UMovieSceneCompiledData::Reset(pUVar3);
    pUVar3 = (this->CompiledData).field0_0x0.DebugPtr;
  }
  else {
    pUVar3 = (this->CompiledData).field0_0x0.DebugPtr;
  }
  return pUVar3;
}

// GetParentObject @ 14621a340

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSequence::GetParentObject(UMovieSceneSequence *this,UObject *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h"
             ,0xe1,L"Pure virtual not implemented (%s)");
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 14621bda0

UClass * __cdecl UMovieSceneSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequence",
               &Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequence,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequence>,
               InternalVTableHelperCtorCaller<UMovieSceneSequence>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequence.InnerSingleton;
}

// IsCompatibleAsSubSequence @ 1462224a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSequence::IsCompatibleAsSubSequence
          (UMovieSceneSequence *this,UMovieSceneSequence *param_1)

{
  return true;
}

// IsCompatibleSubSequence @ 1462224b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSequence::IsCompatibleSubSequence(UMovieSceneSequence *this,UMovieSceneSequence *param_1)

{
  return true;
}

// IsSubSequenceCompatible @ 146222a30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSequence::IsSubSequenceCompatible(UMovieSceneSequence *this,UMovieSceneSequence *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x368))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000146222a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1->_padding_ + 0x370))(param_1,this);
    return (bool)uVar2;
  }
  return false;
}

// LocateBoundObjects @ 146222e10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::LocateBoundObjects
          (UMovieSceneSequence *this,FGuid *param_1,FResolveParams *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// LocateBoundObjects @ 146222e40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::LocateBoundObjects
          (UMovieSceneSequence *this,FGuid *param_1,FResolveParams *param_2,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  FMovieSceneBindingReferences *this_00;
  
  this_00 = (FMovieSceneBindingReferences *)(**(code **)(this->_padding_ + 0x2b8))();
  if (this_00 == (FMovieSceneBindingReferences *)0x0) {
    (**(code **)(this->_padding_ + 0x2d8))(this,param_1,param_2->Context);
  }
  else {
    FMovieSceneBindingReferences::ResolveBinding(this_00,param_1,param_2,param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// LocateBoundObjects @ 146222ec0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::LocateBoundObjects
          (UMovieSceneSequence *this,FGuid *param_1,UObject *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  return;
}

// MakeLocatorForObject @ 146222ed0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSequence::MakeLocatorForObject
          (UMovieSceneSequence *this,UObject *param_1,UObject *param_2,
          FUniversalObjectLocator *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2c8))();
  if (cVar1 != '\0') {
    FUniversalObjectLocator::Reset(param_3,param_1,param_2,(UObject *)0x0);
    return true;
  }
  return false;
}

// MakeSpawnableTemplateFromInstance @ 1462233f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSequence::MakeSpawnableTemplateFromInstance
          (UMovieSceneSequence *this,UObject *param_1,FName param_2)

{
  return (UObject *)0x0;
}

// OverrideNetworkMask @ 146227220

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

EMovieSceneServerClientMask __thiscall
UMovieSceneSequence::OverrideNetworkMask
          (UMovieSceneSequence *this,EMovieSceneServerClientMask param_1)

{
  return param_1;
}

// PostDuplicate @ 1462282a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSequence::PostDuplicate(UMovieSceneSequence *this,bool param_1)

{
  UMovieSceneCompiledDataManager *this_00;
  
  if (param_1) {
    this_00 = UMovieSceneCompiledDataManager::GetPrecompiledData();
    UMovieSceneCompiledDataManager::Compile(this_00,(UMovieSceneSequence *)&stack0x00000010);
  }
  return;
}

// PostLoad @ 146228970

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSequence::PostLoad(UMovieSceneSequence *this)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  undefined4 extraout_var;
  UMovieSceneSequence *local_res10;
  
  this_00 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  if ((this->_padding_ & 0x10) == 0) {
    UMovieSceneCompiledDataManager::LoadCompiledData(this_00,this);
    (this->CompiledData).field0_0x0.DebugPtr = (UMovieSceneCompiledData *)0x0;
  }
  if (((this->SequenceFlags & InheritedFlags) == None) && ((this->_padding_ & 0x30) == 0)) {
    FVar1 = UMovieSceneCompiledDataManager::FindDataID
                      (this_00,(UMovieSceneSequence *)&stack0x00000008);
    if (*(int *)CONCAT44(extraout_var,FVar1.Value) == -1) {
      local_res10 = this;
      `UMovieSceneSequence::PostLoad'::__l8::<lambda_1>::operator()(&local_res10);
    }
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// PreSave @ 146229b80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::PreSave(UMovieSceneSequence *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Serialize @ 146234150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSequence::Serialize(UMovieSceneSequence *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMovieSceneEvaluationCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 1462341c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::Serialize(UMovieSceneSequence *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FMovieSceneEvaluationCustomVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FReleaseObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUMovieSceneSequence @ 146237c90

void __cdecl UMovieSceneSequence::StaticRegisterNativesUMovieSceneSequence(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneSequence_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnbindInvalidObjects @ 14623a990

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::UnbindInvalidObjects(UMovieSceneSequence *this,FGuid *param_1,UObject *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h"
             ,0x108,L"Pure virtual not implemented (%s)");
  return;
}

// UnbindObjects @ 14623a9c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::UnbindObjects
          (UMovieSceneSequence *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h"
             ,0x100,L"Pure virtual not implemented (%s)");
  return;
}

// UnbindPossessableObjects @ 14623a9f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequence::UnbindPossessableObjects(UMovieSceneSequence *this,FGuid *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h"
             ,0xf7,L"Pure virtual not implemented (%s)");
  return;
}

// execFindBindingByTag @ 146241f00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneSequence::execFindBindingByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  FTokenizedMessage *this;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *pTVar3;
  FMessageLog *this_00;
  FText *pFVar4;
  TSharedRef<FTokenizedMessage,1> *pTVar5;
  TSharedRef<FUObjectToken,1> *pTVar6;
  undefined8 uVar7;
  FName local_res10;
  FName local_res18;
  FText local_b8;
  TSharedRef<IMessageToken,1> local_a0;
  TSharedRef<FTokenizedMessage,1> local_90;
  TSharedRef<FUObjectToken,1> local_80;
  FText local_70;
  TSharedRef<FTokenizedMessage,1> local_60;
  FMessageLog local_50;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = FindBindingsByTag((UMovieSceneSequence *)param_1,local_res10);
  if (pTVar3->ArrayNum < 1) {
    ::FName::FName(&local_res18,"PIE");
    this_00 = FMessageLog::FMessageLog(&local_50,&local_res18);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_b8,L"UMovieSceneSequence",L"FindNamedBinding_Warning",
                        L"Attempted to find a named binding that did not exist");
    pTVar5 = FMessageLog::Warning(this_00,&local_60,pFVar4);
    this = pTVar5->Object;
    pFVar4 = FText::FText(&local_70);
    pTVar6 = FUObjectToken::Create(&local_80,param_1,pFVar4);
    local_a0.Object = (IMessageToken *)pTVar6->Object;
    local_a0.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this,&local_90,&local_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_50);
    local_b8.TextData.Reference._0_4_ = 0;
    local_b8.TextData.Reference._4_4_ = 0;
    local_b8.Flags = 0;
    local_b8._12_4_ = 0;
    uVar7 = 0xffffffff00000000;
  }
  else {
    pFVar2 = (pTVar3->AllocatorInstance).Data;
    local_b8.TextData.Reference._0_4_ = *(undefined4 *)pFVar2;
    local_b8.TextData.Reference._4_4_ = *(undefined4 *)(pFVar2 + 4);
    local_b8.Flags = *(uint *)(pFVar2 + 8);
    local_b8._12_4_ = *(undefined4 *)(pFVar2 + 0xc);
    uVar7 = *(undefined8 *)(pFVar2 + 0x10);
  }
  *(undefined4 *)param_3 = local_b8.TextData.Reference._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_b8.TextData.Reference._4_4_;
  *(uint *)((longlong)param_3 + 8) = local_b8.Flags;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_b8._12_4_;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar7;
  return;
}

// execFindBindingsByTag @ 1462420c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneSequence::execFindBindingsByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FScriptContainerElement *_Src;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *pTVar4;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = FindBindingsByTag((UMovieSceneSequence *)param_1,local_res10);
  if (param_3 != pTVar4) {
    iVar2 = pTVar4->ArrayNum;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    _Src = (pTVar4->AllocatorInstance).Data;
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar2,*piVar1,param_3,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar2 * 0x18);
    }
  }
  return;
}

// execGetEarliestTimecodeSource @ 146242560

void __cdecl
UMovieSceneSequence::execGetEarliestTimecodeSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieScene *this;
  FTimecode local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (UMovieScene *)(**(code **)(*(longlong *)param_1 + 0x2f8))();
  if (this == (UMovieScene *)0x0) {
    local_28.Hours = 0;
    local_28.Minutes = 0;
    local_28.Seconds = 0;
    local_28.Frames = 0;
    local_28.Subframe = 0.0;
    local_28._20_4_ = local_28._20_4_ & 0xffffff00;
  }
  else {
    UMovieScene::GetEarliestTimecodeSource(this,(FMovieSceneTimecodeSource *)&local_28);
  }
  *(undefined8 *)param_3 = local_28._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_28._8_8_;
  *(ulonglong *)((longlong)param_3 + 0x10) = CONCAT44(local_28._20_4_,local_28.Subframe);
  return;
}

// operator() @ 1504e7330

bool __thiscall `UMovieSceneSequence::PostLoad'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4230895429144805506>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4230895429144805506>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e73a5;
    }
  }
  bVar2 = false;
LAB_1504e73a5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

