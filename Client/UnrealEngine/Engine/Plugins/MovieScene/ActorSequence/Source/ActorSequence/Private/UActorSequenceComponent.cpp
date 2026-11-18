// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 19

// StaticClass @ 14eacf910

UClass * __cdecl UActorSequenceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequenceComponent",
               &Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton,
               StaticRegisterNativesUActorSequenceComponent,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorSequenceComponent>,
               InternalVTableHelperCtorCaller<UActorSequenceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton;
}

// UActorSequenceComponent @ 14ead10c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorSequenceComponent * __thiscall
UActorSequenceComponent::UActorSequenceComponent
          (UActorSequenceComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  puVar2 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  (this->Sequence).field0_0x0.DebugPtr = (UActorSequence *)0x0;
  (this->SequencePlayer).field0_0x0.DebugPtr = (UActorSequencePlayer *)0x0;
  return this;
}

// UActorSequenceComponent @ 14ead1160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorSequenceComponent * __thiscall
UActorSequenceComponent::UActorSequenceComponent
          (UActorSequenceComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  FName FVar5;
  UActorSequenceComponent *pUVar6;
  UActorSequenceComponent *pUVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UActorSequence *this_00;
  FName local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  puVar3 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  (this->Sequence).field0_0x0.DebugPtr = (UActorSequence *)0x0;
  (this->SequencePlayer).field0_0x0.DebugPtr = (UActorSequencePlayer *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar6 = (UActorSequenceComponent *)UObject::GetArchetype((UObject *)this);
    pUVar7 = GetDefault<UActorSequenceComponent>();
    if (pUVar6 != pUVar7) {
      return this;
    }
  }
  pFVar8 = ::FName::FName(&local_res8,"Sequence");
  FVar5 = *pFVar8;
  pUVar9 = UActorSequence::StaticClass();
  this_00 = (UActorSequence *)
            FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar5,pUVar9,pUVar9,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UActorSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->Sequence).field0_0x0.DebugPtr = this_00;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional|RF_Public);
  return this;
}

// ~UActorSequenceComponent @ 14ead1370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorSequenceComponent::~UActorSequenceComponent(UActorSequenceComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BeginPlay @ 14ead15b0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UActorSequenceComponent::BeginPlay(UActorSequenceComponent *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieSceneSequencePlayer *this_00;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UActorComponent::BeginPlay((UActorComponent *)this);
  if ((this->Sequence).field0_0x0.DebugPtr != (UActorSequence *)0x0) {
    pFVar2 = ::FName::FName((FName *)local_a8,"SequencePlayer");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = UActorSequencePlayer::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    this_00 = (UMovieSceneSequencePlayer *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMovieSceneSequencePlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->SequencePlayer).field0_0x0.DebugPtr = (UActorSequencePlayer *)this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_a8._0_8_ = this;
    pUVar3 = Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
    local_a8._8_8_ = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    UMovieSceneSequencePlayer::SetPlaybackClient
              (this_00,(TScriptInterface<IMovieScenePlaybackClient> *)local_a8);
    UMovieSceneSequencePlayer::InitializeForTick
              ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,
               (UObject *)this);
    UMovieSceneSequencePlayer::Initialize
              ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,
               (UMovieSceneSequence *)(this->Sequence).field0_0x0.DebugPtr,&this->PlaybackSettings);
    if ((this->PlaybackSettings).bAutoPlay != 0) {
      UMovieSceneSequencePlayer::Play
                ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr);
    }
  }
  return;
}

// EndPlay @ 14ead1fe0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorSequenceComponent::EndPlay(UActorSequenceComponent *this,Type param_1)

{
  UMovieSceneSequencePlayer *this_00;
  
  this_00 = (UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop(this_00);
    UMovieSceneSequencePlayer::TearDown
              ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr);
  }
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14ead23d0

UClass * __cdecl UActorSequenceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequenceComponent",
               &Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton,
               StaticRegisterNativesUActorSequenceComponent,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorSequenceComponent>,
               InternalVTableHelperCtorCaller<UActorSequenceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton;
}

// PauseSequence @ 14ead26a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UActorSequenceComponent::PauseSequence(UActorSequenceComponent *this)

{
  TObjectPtr<UActorSequencePlayer>_u_0 this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FRootInstanceHandle FVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UEnum *this_01;
  FMovieSceneTimeController *this_02;
  undefined4 extraout_var;
  TObjectPtr<UActorSequencePlayer>_u_0 TStackX_10;
  TObjectPtr<UActorSequencePlayer>_u_0 TStackX_18;
  FName FStackX_20;
  undefined1 auStack_1a8 [8];
  FDelegateAllocation FStack_1a0;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> TStack_188;
  TObjectPtr<UActorSequencePlayer>_u_0 TStack_178;
  FDelegateAllocation FStack_170;
  FString FStack_160;
  FString FStack_150;
  FQualifiedFrameTime FStack_140;
  FDestructionSentinel FStack_130;
  FDestructionSentinel FStack_118;
  FDelegateAllocation *pFStack_100;
  FMovieSceneContext FStack_f8;
  FMovieSceneEvaluationRange FStack_78;
  
  this_00 = (TObjectPtr<UActorSequencePlayer>_u_0)(this->SequencePlayer).field0_0x0.DebugPtr;
  if ((UMovieSceneSequencePlayer *)this_00.DebugPtr == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  if (((*(longlong *)&(this_00.DebugPtr)->field_0x220 == 0) ||
      (*(longlong *)&(this_00.DebugPtr)->field_0x228 == 0)) ||
     (cVar2 = (**(code **)(**(longlong **)&(this_00.DebugPtr)->field_0x228 + 0x10))(), cVar2 != '\0'
     )) {
    bVar3 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&(this_00.DebugPtr)->field_0x28);
    if (bVar3) {
      TStack_188.Object = (FMovieSceneEntitySystemRunner *)UMovieSceneSequencePlayer::Pause;
      TStack_188.SharedReferenceCount.ReferenceController._4_4_ = FStack_140.Rate.Denominator;
      TStack_188.SharedReferenceCount.ReferenceController._0_4_ = 0;
      FStack_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_170.DelegateSize = 0;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,&FStack_170);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UMovieSceneSequencePlayer *)this_00.DebugPtr != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        puVar5[3] = 0;
        TStackX_18 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UMovieSceneSequencePlayer *)this_00.DebugPtr != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&TStackX_18);
        puVar5[4] = TStack_188.Object;
        puVar5[5] = CONCAT44(TStack_188.SharedReferenceCount.ReferenceController._4_4_,
                             TStack_188.SharedReferenceCount.ReferenceController._0_4_);
      }
      UMovieSceneSequencePlayer::QueueLatentAction
                ((UMovieSceneSequencePlayer *)this_00.DebugPtr,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &FStack_170);
    }
    else {
      UMovieSceneSequencePlayer::GetSequenceName
                ((UMovieSceneSequencePlayer *)this_00.DebugPtr,&FStack_150,true);
      if (5 < (byte)LogMovieScene._0_1_) {
        this_01 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
        if ((this_01 == (UEnum *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UEnum::GetNameByValue(this_01,(long64)&FStackX_20);
        ::FName::ToString(&FStackX_20,&FStack_160);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (FStack_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_160.Data.AllocatorInstance.Data);
        }
      }
      if (((TEnumAsByte<EMovieScenePlayerStatus::Type> *)&(this_00.DebugPtr)->field_0x2c0)->Value ==
          '\x01') {
        ((TEnumAsByte<EMovieScenePlayerStatus::Type> *)&(this_00.DebugPtr)->field_0x2c0)->Value =
             '\x05';
        this_02 = TSharedPtr<FMovieSceneTimeController,1>::operator->
                            ((TSharedPtr<FMovieSceneTimeController,1> *)
                             &(this_00.DebugPtr)->field_0x408);
        FStack_140.Time = *(FFrameTime *)&(this_00.DebugPtr)->field_0x354;
        FStack_140.Rate =
             ((FMovieScenePlaybackPosition *)&(this_00.DebugPtr)->field_0x340)->InputRate;
        FMovieSceneTimeController::StopPlaying(this_02,&FStack_140);
        if ((bool)(this_00.DebugPtr)->field_0x488 != false) {
          (this_00.DebugPtr)->field_0x488 = false;
        }
        if ((bool)(this_00.DebugPtr)->field_0x478 != false) {
          (this_00.DebugPtr)->field_0x478 = false;
        }
        TStackX_10 = this_00;
        FMovieSceneRootEvaluationTemplateInstance::GetRunner
                  ((FMovieSceneRootEvaluationTemplateInstance *)&(this_00.DebugPtr)->field_0x318,
                   &TStack_188);
        if (TStack_188.Object == (FMovieSceneEntitySystemRunner *)0x0) {
          `UMovieSceneSequencePlayer::Pause'::__l29::<lambda_1>::operator()(&TStackX_10);
        }
        else {
          FMovieScenePlaybackPosition::GetCurrentPositionAsRange
                    ((FMovieScenePlaybackPosition *)&(this_00.DebugPtr)->field_0x340,&FStack_78);
          if ((*(longlong *)&(this_00.DebugPtr)->field_0x3d8 != 0) &&
             (*(longlong *)&(this_00.DebugPtr)->field_0x3e0 != 0)) {
            (**(code **)(**(longlong **)&(this_00.DebugPtr)->field_0x3e0 + 0x30))
                      (*(longlong **)&(this_00.DebugPtr)->field_0x3e0,&FStack_78);
          }
          FStack_f8.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
          FStack_f8.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
          FStack_f8._padding_._0_1_ = FStack_78.EvaluationRange.LowerBound.Type.Value;
          FStack_f8._padding_._1_3_ = FStack_78.EvaluationRange.LowerBound._1_3_;
          FStack_f8._padding_._4_4_ = FStack_78.EvaluationRange.LowerBound.Value.FrameNumber.Value;
          FStack_f8._padding_._0_4_ = FStack_78.EvaluationRange.LowerBound.Value.SubFrame;
          FStack_f8._padding_._4_1_ = FStack_78.EvaluationRange.UpperBound.Type.Value;
          FStack_f8._padding_._5_3_ = FStack_78.EvaluationRange.UpperBound._1_3_;
          FStack_f8._padding_._0_4_ = FStack_78.Direction;
          FStack_f8._padding_._4_4_ = FStack_78.TimeOverride.Value;
          FStack_f8._padding_._0_4_ = FStack_78.EvaluationRange.UpperBound.Value.FrameNumber.Value;
          FStack_f8._padding_._4_4_ = FStack_78.EvaluationRange.UpperBound.Value.SubFrame;
          FStack_f8._padding_._0_4_ = FStack_78.CurrentFrameRate.Numerator;
          FStack_f8._padding_._4_4_ = FStack_78.CurrentFrameRate.Denominator;
          FStack_f8.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
          FMovieSceneWarpCounter::FMovieSceneWarpCounter(&FStack_f8.RootToSequenceWarpCounter);
          FStack_f8.bHasPostRollStartTime = false;
          FStack_f8.bHasPreRollEndTime = false;
          FStack_f8.bSectionPostRoll = false;
          FStack_f8.bSectionPreRoll = false;
          FStack_f8.bSilent = false;
          FStack_f8.bHasLooped = false;
          FStack_f8.bHasJumped = false;
          FStack_f8.Status = Stopped;
          FStack_f8.PrePostRollStartEndTime.Value = -0x80000000;
          FStack_f8.HierarchicalBias = 0;
          if ((TStack_188.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          auStack_1a8 = (undefined1  [8])0x0;
          FStack_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_1a0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a8,
                     (FWriteAccessScope *)&FStack_118);
          pFStack_100 = &FStack_1a0;
          puVar5 = UE::Core::Private::DelegateAllocate(0x28,&FStack_1a0);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[2] = uVar6;
            *puVar5 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMovieSceneSequencePlayer::Pause'::`29'::<lambda_1>_>
                       ::_vftable_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
            }
            puVar5[3] = 0;
            TStack_178 = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&TStack_178);
            ((TObjectPtr<UActorSequencePlayer>_u_0 *)(puVar5 + 4))->DebugPtr =
                 (UActorSequencePlayer *)this_00;
          }
          if (FStack_118.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_118.Accessor,&FStack_118);
          }
          FVar4 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                            ((FMovieSceneRootEvaluationTemplateInstance *)
                             &(this_00.DebugPtr)->field_0x318);
          FMovieSceneEntitySystemRunner::QueueUpdate
                    (TStack_188.Object,&FStack_f8,*(FInstanceHandle *)CONCAT44(extraout_var,FVar4),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1a8,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a8,
                     (FWriteAccessScope *)&FStack_130);
          if ((FStack_1a0.DelegateSize != 0) &&
             (FStack_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_1a0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&FStack_1a0,0,0,0x10);
            FStack_1a0.DelegateSize = 0;
          }
          if (FStack_130.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_130.Accessor,&FStack_130);
          }
          if (FStack_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_1a0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_1a8);
          FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&FStack_f8.RootToSequenceWarpCounter);
          DestructItems<FMovieSceneNestedSequenceTransform,int>
                    ((FMovieSceneNestedSequenceTransform *)
                     FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                     FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayNum);
          if ((FMovieSceneNestedSequenceTransform *)
              FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
              (FMovieSceneNestedSequenceTransform *)0x0) {
            FMemory::Free(FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data)
            ;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(TStack_188.SharedReferenceCount.ReferenceController._4_4_,
                            TStack_188.SharedReferenceCount.ReferenceController._0_4_));
      }
      if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PlaySequence @ 14ead26c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UActorSequenceComponent::PlaySequence(UActorSequenceComponent *this)

{
  UMovieSceneSequencePlayer *this_00;
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *pUStackX_8;
  FDelegateAllocation FStack_18;
  
  this_00 = (UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this_00->_padding_);
  if (bVar1) {
    FStack_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      puVar2[3] = 0;
      pUStackX_8 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pUStackX_8);
      puVar2[4] = UMovieSceneSequencePlayer::Play;
      puVar2[5] = (ulonglong)(uint)FStack_18._12_4_ << 0x20;
    }
    UMovieSceneSequencePlayer::QueueLatentAction
              (this_00,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                       &FStack_18);
    return;
  }
  this_00->bReversePlayback = 0;
  UMovieSceneSequencePlayer::PlayInternal(this_00);
  return;
}

// PlaySequenceReverse @ 14ead26e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UActorSequenceComponent::PlaySequenceReverse(UActorSequenceComponent *this)

{
  UMovieSceneSequencePlayer *this_00;
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *pUStackX_8;
  FDelegateAllocation FStack_18;
  
  this_00 = (UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this_00->_padding_);
  if (bVar1) {
    FStack_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      puVar2[3] = 0;
      pUStackX_8 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pUStackX_8);
      puVar2[4] = UMovieSceneSequencePlayer::PlayReverse;
      puVar2[5] = (ulonglong)(uint)FStack_18._12_4_ << 0x20;
    }
    UMovieSceneSequencePlayer::QueueLatentAction
              (this_00,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                       &FStack_18);
    return;
  }
  this_00->bReversePlayback = 1;
  UMovieSceneSequencePlayer::PlayInternal(this_00);
  return;
}

// PostInitProperties @ 14ead2710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorSequenceComponent::PostInitProperties(UActorSequenceComponent *this)

{
  UObject::PostInitProperties((UObject *)this);
  if (((AActor *)this->_padding_ != (AActor *)0x0) &&
     (*(char *)((longlong)&this->_padding_ + 1) != '\x03')) {
    AActor::AddOwnedComponent((AActor *)this->_padding_,(UActorComponent *)this);
    return;
  }
  return;
}

// PostLoad @ 14ead2720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UActorSequenceComponent::PostLoad(UActorSequenceComponent *this)

{
  FPackageFileVersion FVar1;
  
  UObject::PostLoad((UObject *)this);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    FVar1 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
    if ((*(int *)FVar1 < 0x1bd) && ((this->_padding_ & 0x10) == 0)) {
      UActorComponent::DetermineUCSModifiedProperties((UActorComponent *)this);
      return;
    }
  }
  return;
}

// StaticRegisterNativesUActorSequenceComponent @ 14ead2cf0

void __cdecl UActorSequenceComponent::StaticRegisterNativesUActorSequenceComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UActorSequenceComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopSequence @ 14ead2d40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UActorSequenceComponent::StopSequence(UActorSequenceComponent *this)

{
  uint uVar1;
  UMovieSceneSequencePlayer *this_00;
  FFrameTime FVar2;
  FFrameTime FVar3;
  FFrameTime FVar4;
  FFrameNumber FVar5;
  float fVar6;
  
  this_00 = (UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  uVar1 = (this_00->StartTime).Value;
  if ((this_00->bReversePlayback != 0) && (0 < this_00->DurationFrames)) {
    fVar6 = this_00->DurationSubFrames;
    FVar5.Value = uVar1 + this_00->DurationFrames;
    if (0.0 < fVar6) {
      if (::FFrameTime::MaxSubframe <= fVar6) {
        fVar6 = ::FFrameTime::MaxSubframe;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      FVar2.SubFrame = fVar6;
      FVar2.FrameNumber.Value = FVar5.Value;
      UMovieSceneSequencePlayer::StopInternal(this_00,FVar2);
      return;
    }
    fVar6 = ::FFrameTime::MaxSubframe;
    if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    FVar3.SubFrame = fVar6;
    FVar3.FrameNumber.Value = FVar5.Value + -1;
    UMovieSceneSequencePlayer::StopInternal(this_00,FVar3);
    return;
  }
  FVar4.SubFrame = 0.0;
  FVar4.FrameNumber.Value = uVar1;
  UMovieSceneSequencePlayer::StopInternal(this_00,FVar4);
  return;
}

// TickComponent @ 14ead2d60

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
UActorSequenceComponent::TickComponent
          (UActorSequenceComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  if (((this->_padding_ & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRegistered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x730,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,afStackX_8);
    if ((GTickComponentLatentActionsWithTheComponent != 0) &&
       (this_00 = UActorComponent::GetWorld((UActorComponent *)this), this_00 != (UWorld *)0x0)) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

// execPauseSequence @ 14ead2f80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UActorSequenceComponent::execPauseSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  UMovieSceneSequencePlayer *this;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FRootInstanceHandle FVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UEnum *this_00;
  FMovieSceneTimeController *this_01;
  undefined4 extraout_var;
  UMovieSceneSequencePlayer *pUStackX_10;
  UMovieSceneSequencePlayer *pUStackX_18;
  FName FStackX_20;
  undefined1 auStack_1a8 [8];
  FDelegateAllocation FStack_1a0;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> TStack_188;
  UMovieSceneSequencePlayer *pUStack_178;
  FDelegateAllocation FStack_170;
  FString FStack_160;
  FString FStack_150;
  FQualifiedFrameTime FStack_140;
  FDestructionSentinel FStack_130;
  FDestructionSentinel FStack_118;
  FDelegateAllocation *pFStack_100;
  FMovieSceneContext FStack_f8;
  FMovieSceneEvaluationRange FStack_78;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UMovieSceneSequencePlayer **)(param_1 + 6);
  if (this == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  if (((*(longlong *)&this->Observer == 0) || (*(longlong *)&(this->Observer).field_0x8 == 0)) ||
     (cVar3 = (**(code **)(**(longlong **)&(this->Observer).field_0x8 + 0x10))(), cVar3 != '\0')) {
    bVar4 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
    if (bVar4) {
      TStack_188.Object = (FMovieSceneEntitySystemRunner *)UMovieSceneSequencePlayer::Pause;
      TStack_188.SharedReferenceCount.ReferenceController._4_4_ = FStack_140.Rate.Denominator;
      TStack_188.SharedReferenceCount.ReferenceController._0_4_ = 0;
      FStack_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_170.DelegateSize = 0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&FStack_170);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        pUStackX_18 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&pUStackX_18);
        puVar6[4] = TStack_188.Object;
        puVar6[5] = CONCAT44(TStack_188.SharedReferenceCount.ReferenceController._4_4_,
                             TStack_188.SharedReferenceCount.ReferenceController._0_4_);
      }
      UMovieSceneSequencePlayer::QueueLatentAction
                (this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                      &FStack_170);
    }
    else {
      UMovieSceneSequencePlayer::GetSequenceName(this,&FStack_150,true);
      if (5 < (byte)LogMovieScene._0_1_) {
        this_00 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
        if ((this_00 == (UEnum *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UEnum::GetNameByValue(this_00,(long64)&FStackX_20);
        ::FName::ToString(&FStackX_20,&FStack_160);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (FStack_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_160.Data.AllocatorInstance.Data);
        }
      }
      if ((this->Status).Value == '\x01') {
        (this->Status).Value = '\x05';
        this_01 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
        FStack_140.Time = (this->PlayPosition).CurrentPosition;
        FStack_140.Rate = (this->PlayPosition).InputRate;
        FMovieSceneTimeController::StopPlaying(this_01,&FStack_140);
        if ((this->PauseOnFrame).bIsSet != false) {
          (this->PauseOnFrame).bIsSet = false;
        }
        if ((this->LastTickGameTimeSeconds).bIsSet != false) {
          (this->LastTickGameTimeSeconds).bIsSet = false;
        }
        pUStackX_10 = this;
        FMovieSceneRootEvaluationTemplateInstance::GetRunner
                  (&this->RootTemplateInstance,&TStack_188);
        if (TStack_188.Object == (FMovieSceneEntitySystemRunner *)0x0) {
          `UMovieSceneSequencePlayer::Pause'::__l29::<lambda_1>::operator()(&pUStackX_10);
        }
        else {
          FMovieScenePlaybackPosition::GetCurrentPositionAsRange(&this->PlayPosition,&FStack_78);
          if ((*(longlong *)&this->PlaybackClient != 0) &&
             (*(longlong *)&(this->PlaybackClient).field_0x8 != 0)) {
            plVar1 = *(longlong **)&(this->PlaybackClient).field_0x8;
            (**(code **)(*plVar1 + 0x30))(plVar1,&FStack_78);
          }
          FStack_f8.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
          FStack_f8.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
          FStack_f8._padding_._0_1_ = FStack_78.EvaluationRange.LowerBound.Type.Value;
          FStack_f8._padding_._1_3_ = FStack_78.EvaluationRange.LowerBound._1_3_;
          FStack_f8._padding_._4_4_ = FStack_78.EvaluationRange.LowerBound.Value.FrameNumber.Value;
          FStack_f8._padding_._0_4_ = FStack_78.EvaluationRange.LowerBound.Value.SubFrame;
          FStack_f8._padding_._4_1_ = FStack_78.EvaluationRange.UpperBound.Type.Value;
          FStack_f8._padding_._5_3_ = FStack_78.EvaluationRange.UpperBound._1_3_;
          FStack_f8._padding_._0_4_ = FStack_78.Direction;
          FStack_f8._padding_._4_4_ = FStack_78.TimeOverride.Value;
          FStack_f8._padding_._0_4_ = FStack_78.EvaluationRange.UpperBound.Value.FrameNumber.Value;
          FStack_f8._padding_._4_4_ = FStack_78.EvaluationRange.UpperBound.Value.SubFrame;
          FStack_f8._padding_._0_4_ = FStack_78.CurrentFrameRate.Numerator;
          FStack_f8._padding_._4_4_ = FStack_78.CurrentFrameRate.Denominator;
          FStack_f8.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
          FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
          FMovieSceneWarpCounter::FMovieSceneWarpCounter(&FStack_f8.RootToSequenceWarpCounter);
          FStack_f8.bHasPostRollStartTime = false;
          FStack_f8.bHasPreRollEndTime = false;
          FStack_f8.bSectionPostRoll = false;
          FStack_f8.bSectionPreRoll = false;
          FStack_f8.bSilent = false;
          FStack_f8.bHasLooped = false;
          FStack_f8.bHasJumped = false;
          FStack_f8.Status = Stopped;
          FStack_f8.PrePostRollStartEndTime.Value = -0x80000000;
          FStack_f8.HierarchicalBias = 0;
          if ((TStack_188.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          auStack_1a8 = (undefined1  [8])0x0;
          FStack_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_1a0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a8,
                     (FWriteAccessScope *)&FStack_118);
          pFStack_100 = &FStack_1a0;
          puVar6 = UE::Core::Private::DelegateAllocate(0x28,&FStack_1a0);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMovieSceneSequencePlayer::Pause'::`29'::<lambda_1>_>
                       ::_vftable_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar6[3] = 0;
            pUStack_178 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&pUStack_178);
            puVar6[4] = this;
          }
          if (FStack_118.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_118.Accessor,&FStack_118);
          }
          FVar5 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                            (&this->RootTemplateInstance);
          FMovieSceneEntitySystemRunner::QueueUpdate
                    (TStack_188.Object,&FStack_f8,*(FInstanceHandle *)CONCAT44(extraout_var,FVar5),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1a8,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a8,
                     (FWriteAccessScope *)&FStack_130);
          if ((FStack_1a0.DelegateSize != 0) &&
             (FStack_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_1a0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&FStack_1a0,0,0,0x10);
            FStack_1a0.DelegateSize = 0;
          }
          if (FStack_130.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_130.Accessor,&FStack_130);
          }
          if (FStack_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_1a0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_1a8);
          FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&FStack_f8.RootToSequenceWarpCounter);
          DestructItems<FMovieSceneNestedSequenceTransform,int>
                    ((FMovieSceneNestedSequenceTransform *)
                     FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                     FStack_f8.RootToSequenceTransform.NestedTransforms.ArrayNum);
          if ((FMovieSceneNestedSequenceTransform *)
              FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
              (FMovieSceneNestedSequenceTransform *)0x0) {
            FMemory::Free(FStack_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data)
            ;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(TStack_188.SharedReferenceCount.ReferenceController._4_4_,
                            TStack_188.SharedReferenceCount.ReferenceController._0_4_));
      }
      if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// execPlaySequence @ 14ead2fb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UActorSequenceComponent::execPlaySequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieSceneSequencePlayer *this;
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *pUStackX_8;
  FDelegateAllocation FStack_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UMovieSceneSequencePlayer **)(param_1 + 6);
  if (this == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar1) {
    FStack_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      pUStackX_8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pUStackX_8);
      puVar2[4] = UMovieSceneSequencePlayer::Play;
      puVar2[5] = (ulonglong)(uint)FStack_18._12_4_ << 0x20;
    }
    UMovieSceneSequencePlayer::QueueLatentAction
              (this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                    &FStack_18);
    return;
  }
  this->bReversePlayback = 0;
  UMovieSceneSequencePlayer::PlayInternal(this);
  return;
}

// execPlaySequenceReverse @ 14ead2fe0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UActorSequenceComponent::execPlaySequenceReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieSceneSequencePlayer *this;
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *pUStackX_8;
  FDelegateAllocation FStack_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UMovieSceneSequencePlayer **)(param_1 + 6);
  if (this == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar1) {
    FStack_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      pUStackX_8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pUStackX_8);
      puVar2[4] = UMovieSceneSequencePlayer::PlayReverse;
      puVar2[5] = (ulonglong)(uint)FStack_18._12_4_ << 0x20;
    }
    UMovieSceneSequencePlayer::QueueLatentAction
              (this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                    &FStack_18);
    return;
  }
  this->bReversePlayback = 1;
  UMovieSceneSequencePlayer::PlayInternal(this);
  return;
}

// execStopSequence @ 14ead3010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UActorSequenceComponent::execStopSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  UMovieSceneSequencePlayer *this;
  FFrameTime FVar2;
  FFrameTime FVar3;
  FFrameTime FVar4;
  FFrameNumber FVar5;
  float fVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UMovieSceneSequencePlayer **)(param_1 + 6);
  if (this == (UMovieSceneSequencePlayer *)0x0) {
    return;
  }
  uVar1 = (this->StartTime).Value;
  if ((this->bReversePlayback != 0) && (0 < this->DurationFrames)) {
    fVar6 = this->DurationSubFrames;
    FVar5.Value = uVar1 + this->DurationFrames;
    if (0.0 < fVar6) {
      if (::FFrameTime::MaxSubframe <= fVar6) {
        fVar6 = ::FFrameTime::MaxSubframe;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      FVar2.SubFrame = fVar6;
      FVar2.FrameNumber.Value = FVar5.Value;
      UMovieSceneSequencePlayer::StopInternal(this,FVar2);
      return;
    }
    fVar6 = ::FFrameTime::MaxSubframe;
    if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    FVar3.SubFrame = fVar6;
    FVar3.FrameNumber.Value = FVar5.Value + -1;
    UMovieSceneSequencePlayer::StopInternal(this,FVar3);
    return;
  }
  FVar4.SubFrame = 0.0;
  FVar4.FrameNumber.Value = uVar1;
  UMovieSceneSequencePlayer::StopInternal(this,FVar4);
  return;
}

