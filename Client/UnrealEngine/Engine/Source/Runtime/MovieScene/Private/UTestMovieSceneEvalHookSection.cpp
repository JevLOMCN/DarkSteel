// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// StaticClass @ 1462695c0

UClass * __cdecl UTestMovieSceneEvalHookSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneEvalHookSection",
               &Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneEvalHookSection,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestMovieSceneEvalHookSection>,
               InternalVTableHelperCtorCaller<UTestMovieSceneEvalHookSection>,local_res8,
               UMovieSceneHookSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.InnerSingleton;
}

// UTestMovieSceneEvalHookSection @ 14629b200

UTestMovieSceneEvalHookSection * __thiscall
UTestMovieSceneEvalHookSection::UTestMovieSceneEvalHookSection
          (UTestMovieSceneEvalHookSection *this,FVTableHelper *param_1)

{
  UMovieSceneHookSection::UMovieSceneHookSection((UMovieSceneHookSection *)this,param_1);
  this->StartValue = 1000;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEvaluationHook__;
  (this->TriggerTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerTimes).ArrayNum = 0;
  (this->TriggerTimes).ArrayMax = 0;
  this->EndValue = 2000;
  return this;
}

// ~UTestMovieSceneEvalHookSection @ 14629bfc0

void __thiscall
UTestMovieSceneEvalHookSection::~UTestMovieSceneEvalHookSection
          (UTestMovieSceneEvalHookSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEvaluationHook__;
  pFVar1 = (this->TriggerTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneHookSection::~UMovieSceneHookSection((UMovieSceneHookSection *)this);
  return;
}

// Begin @ 1462a4890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTestMovieSceneEvalHookSection::Begin
          (UTestMovieSceneEvalHookSection *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  char cVar1;
  FMovieSceneSequenceID FVar2;
  UObject *pUVar3;
  undefined1 auStack_98 [32];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  undefined4 local_58;
  FScopedPreAnimatedCaptureSource local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  cVar1 = *(char *)((longlong)&this[-1]._padding_ + 1);
  FVar2.Value = (param_2->SequenceID).Value;
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_50,&local_68,(UObject *)&this[-1]._padding_,FVar2,cVar1 == '\x01');
  pUVar3 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  local_58 = 0;
  local_68.Object = (FSharedPlaybackState *)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_68.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&::Impl::TestValue1;
  UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedState
            ((FPreAnimatedStateExtension *)&pUVar3[0x1c].field_0x8,::Impl::AnimType1,
             (IMovieScenePreAnimatedGlobalTokenProducer *)&local_68);
  ::Impl::TestValue1 = (int)this->_padding_;
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// End @ 1462ac230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTestMovieSceneEvalHookSection::End
          (UTestMovieSceneEvalHookSection *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  char cVar1;
  FMovieSceneSequenceID FVar2;
  UObject *pUVar3;
  undefined1 auStack_98 [32];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  undefined4 local_58;
  FScopedPreAnimatedCaptureSource local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  cVar1 = *(char *)((longlong)&this[-1]._padding_ + 1);
  FVar2.Value = (param_2->SequenceID).Value;
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_50,&local_68,(UObject *)&this[-1]._padding_,FVar2,cVar1 == '\x01');
  pUVar3 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  local_58 = 0;
  local_68.Object = (FSharedPlaybackState *)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_68.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&::Impl::TestValue1;
  UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedState
            ((FPreAnimatedStateExtension *)&pUVar3[0x1c].field_0x8,::Impl::AnimType1,
             (IMovieScenePreAnimatedGlobalTokenProducer *)&local_68);
  ::Impl::TestValue1 = *(int *)((longlong)&this->_padding_ + 4);
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetPrivateStaticClass @ 1462afe20

UClass * __cdecl UTestMovieSceneEvalHookSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneEvalHookSection",
               &Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneEvalHookSection,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestMovieSceneEvalHookSection>,
               InternalVTableHelperCtorCaller<UTestMovieSceneEvalHookSection>,local_res8,
               UMovieSceneHookSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.InnerSingleton;
}

// GetTriggerTimes @ 1462b0c80

TArrayView<FFrameNumber_const_,int> * __thiscall
UTestMovieSceneEvalHookSection::GetTriggerTimes
          (UTestMovieSceneEvalHookSection *this,
          TArrayView<FFrameNumber_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FFrameNumber_const_,int> *pTVar4;
  
  iVar1 = (this->TriggerTimes).ArrayNum;
  __return_storage_ptr__->DataPtr = (FFrameNumber *)(this->TriggerTimes).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FFrameNumber_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUTestMovieSceneEvalHookSection @ 1462bdea0

void __cdecl
UTestMovieSceneEvalHookSection::StaticRegisterNativesUTestMovieSceneEvalHookSection(void)

{
  return;
}

// Trigger @ 1462be400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTestMovieSceneEvalHookSection::Trigger
          (UTestMovieSceneEvalHookSection *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  char cVar1;
  FMovieSceneSequenceID FVar2;
  UObject *pUVar3;
  undefined1 auStack_98 [32];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  undefined4 local_58;
  FScopedPreAnimatedCaptureSource local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  cVar1 = *(char *)((longlong)&this[-1]._padding_ + 1);
  FVar2.Value = (param_2->SequenceID).Value;
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_50,&local_68,(UObject *)&this[-1]._padding_,FVar2,cVar1 == '\x01');
  pUVar3 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  local_58 = 0;
  local_68.Object = (FSharedPlaybackState *)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_68.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&::Impl::TestValue1;
  UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedState
            ((FPreAnimatedStateExtension *)&pUVar3[0x1c].field_0x8,::Impl::AnimType1,
             (IMovieScenePreAnimatedGlobalTokenProducer *)&local_68);
  ::Impl::TestValue1 = ::Impl::TestValue1 + -1;
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Update @ 1462be990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTestMovieSceneEvalHookSection::Update
          (UTestMovieSceneEvalHookSection *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  char cVar1;
  FMovieSceneSequenceID FVar2;
  UObject *pUVar3;
  undefined1 auStack_98 [32];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  undefined4 local_58;
  FScopedPreAnimatedCaptureSource local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  cVar1 = *(char *)((longlong)&this[-1]._padding_ + 1);
  FVar2.Value = (param_2->SequenceID).Value;
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
            (&local_50,&local_68,(UObject *)&this[-1]._padding_,FVar2,cVar1 == '\x01');
  pUVar3 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  local_58 = 0;
  local_68.Object = (FSharedPlaybackState *)&___7FPreAnimatedTokenProducer_Impl__6B_;
  local_68.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&::Impl::TestValue1;
  UE::MovieScene::FPreAnimatedStateExtension::SavePreAnimatedState
            ((FPreAnimatedStateExtension *)&pUVar3[0x1c].field_0x8,::Impl::AnimType1,
             (IMovieScenePreAnimatedGlobalTokenProducer *)&local_68);
  ::Impl::TestValue1 = ::Impl::TestValue1 + 1;
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

