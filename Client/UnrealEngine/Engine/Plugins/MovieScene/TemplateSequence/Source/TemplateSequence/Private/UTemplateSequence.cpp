// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 23

// StaticClass @ 14ac64b00

UClass * __cdecl UTemplateSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequence",
               &Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton,
               StaticRegisterNativesUTemplateSequence,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTemplateSequence>,
               InternalVTableHelperCtorCaller<UTemplateSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton;
}

// UTemplateSequence @ 14ac705b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UTemplateSequence * __thiscall
UTemplateSequence::UTemplateSequence(UTemplateSequence *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this_00 = &(this->BoundActorClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTemplateSequence__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->BoundActorComponents = 0;
  *(undefined8 *)&(this->BoundActorComponents).field_0x8 = 0;
  *(undefined8 *)&(this->BoundActorComponents).field_0x20 = 0;
  *(undefined4 *)&(this->BoundActorComponents).field_0x28 = 0;
  *(undefined4 *)&(this->BoundActorComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoundActorComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoundActorComponents).field_0x34 = 0;
  *(undefined8 *)&(this->BoundActorComponents).field_0x40 = 0;
  *(undefined4 *)&(this->BoundActorComponents).field_0x48 = 0;
  return this;
}

// UTemplateSequence @ 14ac70650

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UTemplateSequence * __thiscall
UTemplateSequence::UTemplateSequence(UTemplateSequence *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this_00 = &(this->BoundActorClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTemplateSequence__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BoundActorClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->BoundActorComponents = 0;
  *(undefined8 *)&(this->BoundActorComponents).field_0x8 = 0;
  *(undefined8 *)&(this->BoundActorComponents).field_0x20 = 0;
  *(undefined4 *)&(this->BoundActorComponents).field_0x28 = 0;
  *(undefined4 *)&(this->BoundActorComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoundActorComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoundActorComponents).field_0x34 = 0;
  *(undefined8 *)&(this->BoundActorComponents).field_0x40 = 0;
  *(undefined4 *)&(this->BoundActorComponents).field_0x48 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return this;
}

// ~UTemplateSequence @ 14ac71680

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UTemplateSequence::~UTemplateSequence(UTemplateSequence *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UTemplateSequence__6B_;
  *(undefined4 *)&(this->BoundActorComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoundActorComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoundActorComponents);
  pvVar1 = *(void **)&(this->BoundActorClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  return;
}

// AllowsSpawnableObjects @ 14ac736d0

bool __thiscall UTemplateSequence::AllowsSpawnableObjects(UTemplateSequence *this)

{
  return true;
}

// BindPossessableObject @ 14ac73900

void __thiscall
UTemplateSequence::BindPossessableObject
          (UTemplateSequence *this,FGuid *param_1,UObject *param_2,UObject *param_3)

{
  int iVar1;
  UClass *pUVar2;
  TPairInitializer<FGuid_const_&,FName_const_&> local_res18;
  undefined8 local_28;
  FGuid *local_20;
  undefined8 *local_18;
  
  if (param_2 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      local_28 = *(undefined8 *)&param_2->field_0x18;
      local_18 = &local_28;
      local_20 = param_1;
      TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FGuid_const_&,FName_const_&>_>
                ((TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
                  *)&this->BoundActorComponents,&local_res18,(bool *)&local_20);
    }
  }
  return;
}

// CanPossessObject @ 14ac73cb0

bool __thiscall
UTemplateSequence::CanPossessObject(UTemplateSequence *this,UObject *param_1,UObject *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = TSoftClassPtr<AActor>::Get(&this->BoundActorClass);
  if ((pUVar3 != (UClass *)0x0) && (param_1 != (UObject *)0x0)) {
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_ && (*(longlong *)&param_1[4].field_0x8 != 0)))) {
      lVar2 = *(longlong *)(*(longlong *)&param_1[4].field_0x8 + 0x10);
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// CreatePossessable @ 14ac745d0

FGuid * __thiscall
UTemplateSequence::CreatePossessable
          (UTemplateSequence *this,FGuid *__return_storage_ptr__,UObject *param_1)

{
  FindOrAddBinding(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindOrAddBinding @ 14ac75820

/* WARNING: Type propagation algorithm not settling */
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

FGuid * __thiscall
UTemplateSequence::FindOrAddBinding
          (UTemplateSequence *this,FGuid *__return_storage_ptr__,UObject *param_1)

{
  longlong *this_00;
  FWeakObjectPtr *pFVar1;
  undefined1 auVar2 [16];
  UMovieScene *pUVar3;
  FScriptContainerElement *pFVar4;
  UClass *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FGuid *pFVar9;
  UWorld *pUVar10;
  UTemplateSequencePlayer *this_01;
  FMovieSceneEvaluationState *this_02;
  UObject *pUVar11;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar12;
  FMovieScenePossessable *this_03;
  FMovieSceneSpawnable *pFVar13;
  int iVar14;
  uint uVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_res20;
  uint local_278;
  FWeakObjectPtr local_268 [2];
  undefined8 local_258;
  undefined8 local_248;
  longlong local_240;
  UTemplateSequencePlayer *local_238;
  ATemplateSequenceActor *local_230;
  FGuid local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  uint local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined2 local_1f8;
  undefined2 uStack_1f6;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uint local_1e0;
  undefined4 uStack_1dc;
  UObject *local_1d8;
  FGuid local_1c8;
  FMovieSceneSequencePlaybackSettings local_1b8;
  undefined8 local_190;
  undefined8 uStack_188;
  FGuid local_180;
  FName local_170;
  FName local_168;
  FName local_160;
  UWorld *local_158;
  FName local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_118;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_108;
  FString local_f8;
  FMovieSceneSequencePlaybackParams local_e8;
  uchar local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  uint uStack_a4;
  uchar uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_98;
  FMovieSceneSequencePlaybackSettings local_88;
  FGuid local_58 [2];
  
  uVar17 = 0;
  local_1d8 = (UObject *)(**(code **)(this->_padding_ + 0x300))();
  if (local_1d8 == (UObject *)0x0) {
    local_190 = 0;
    uStack_188 = 0;
    local_228.A = 0;
    local_228.B = 0;
    local_228.C = 0;
    local_228.D = 0;
  }
  else {
    pFVar9 = FindOrAddBinding(this,local_58,local_1d8);
    local_228.A = pFVar9->A;
    local_228.B = pFVar9->B;
    local_228.C = pFVar9->C;
    local_228.D = pFVar9->D;
    if (((pFVar9->B == 0 && pFVar9->D == 0) && pFVar9->C == 0) && pFVar9->A == 0) {
      if (1 < (byte)LogTemplateSequence._0_1_) {
        local_170.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_170.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_170,&local_148);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemplateSequence);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      __return_storage_ptr__->A = 0;
      __return_storage_ptr__->B = 0;
      __return_storage_ptr__->C = 0;
      __return_storage_ptr__->D = 0;
      return __return_storage_ptr__;
    }
  }
  pUVar10 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  local_158 = pUVar10;
  if ((pUVar10 == (UWorld *)0x0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3206626672002465633>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\TemplateSequence.cpp"
                         ,0x9f,"World"), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FGuid *)(*pcVar6)();
    return pFVar9;
  }
  uVar18 = local_1e8;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  local_88._0_8_ = (ulonglong)local_208 & 0xfffffffffffffffe;
  local_88.TickInterval.TickIntervalSeconds = 0.0;
  local_88.TickInterval.EvaluationBudgetMicroseconds = 0.0;
  local_1f8 = 0x100;
  uStack_1f4 = 0x3f800000;
  uStack_1f0 = 0;
  local_88.TickInterval._10_2_ = uStack_1f6;
  local_88.TickInterval.bTickWhenPaused = false;
  local_88.TickInterval.bAllowRounding = true;
  local_88.PlayRate = 1.0;
  local_88._24_8_ = ((ulonglong)uStack_1ec & 0xffffffc0) << 0x20;
  local_1e8 = local_1e8 & 0xffffff00;
  local_88._32_8_ = CONCAT44(uStack_1e4,uVar18) & 0xfffffffaffffff00 | 0x200000000;
  local_230 = (ATemplateSequenceActor *)0x0;
  local_208 = local_208 & 0xfffffffe;
  uStack_1ec = uStack_1ec & 0xffffffc0;
  uStack_1e4 = uStack_1e4 & 0xfffffffa | 2;
  this_01 = UTemplateSequencePlayer::CreateTemplateSequencePlayer
                      ((UObject *)pUVar10,this,&local_88,&local_230);
  local_238 = this_01;
  if ((this_01 == (UTemplateSequencePlayer *)0x0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3206626672002465629>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\TemplateSequence.cpp"
                         ,0xa3,"Player"), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FGuid *)(*pcVar6)();
    return pFVar9;
  }
  local_1b8.bAutoPlay = 0;
  local_1b8.bDisableCameraCuts = 0;
  local_1b8.bHideHud = 0;
  local_1b8.bHidePlayer = 0;
  local_1b8.bDisableLookAtInput = 0;
  local_1b8.bDisableMovementInput = 0;
  local_1b8.bRandomStartTime = 0;
  local_1b8.LoopCount.Value = 0;
  local_1b8.TickInterval.TickIntervalSeconds = 0.0;
  (local_230->BindingOverride).bOverridesDefault = false;
  local_1b8.TickInterval.EvaluationBudgetMicroseconds = 0.0;
  local_1b8.bDynamicWeighting = 0;
  local_1b8.bInheritTickIntervalFromOwner = 1;
  local_1b8.bPauseAtEnd = 0;
  local_1b8.TickInterval.bTickWhenPaused = false;
  local_1b8.TickInterval.bAllowRounding = true;
  local_1b8.PlayRate = 1.0;
  local_1b8.StartTime = 0.0;
  local_1b8.FinishCompletionStateOverride = None;
  UTemplateSequencePlayer::Initialize(this_01,(UMovieSceneSequence *)this,pUVar10,&local_1b8);
  this_02 = IMovieScenePlayer::GetEvaluationState((IMovieScenePlayer *)&this_01->_padding_);
  FMovieSceneEvaluationState::AssignSequence
            (this_02,&MovieSceneSequenceID::Root,(UMovieSceneSequence *)this,
             (IMovieScenePlayer *)&this_01->_padding_);
  pUVar3 = (this->MovieScene).field0_0x0.DebugPtr;
  local_a8 = (pUVar3->PlaybackRange).Value.LowerBound.Type.Value;
  uStack_a7 = (pUVar3->PlaybackRange).Value.LowerBound.field_0x1;
  uStack_a6 = (pUVar3->PlaybackRange).Value.LowerBound.field_0x2;
  uStack_a5 = (pUVar3->PlaybackRange).Value.LowerBound.field_0x3;
  uStack_a4 = (pUVar3->PlaybackRange).Value.LowerBound.Value.Value;
  uStack_a0 = (pUVar3->PlaybackRange).Value.UpperBound.Type.Value;
  uStack_9f = (pUVar3->PlaybackRange).Value.UpperBound.field_0x1;
  uStack_9e = (pUVar3->PlaybackRange).Value.UpperBound.field_0x2;
  uStack_9d = (pUVar3->PlaybackRange).Value.UpperBound.field_0x3;
  uStack_9c = (undefined1)(pUVar3->PlaybackRange).Value.UpperBound.Value.Value;
  uStack_9b = *(undefined1 *)((longlong)&(pUVar3->PlaybackRange).Value.UpperBound.Value.Value + 1);
  uStack_9a = *(undefined1 *)((longlong)&(pUVar3->PlaybackRange).Value.UpperBound.Value.Value + 2);
  uStack_99 = *(undefined1 *)((longlong)&(pUVar3->PlaybackRange).Value.UpperBound.Value.Value + 3);
  if ((local_a8 == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FGuid *)(*pcVar6)();
    return pFVar9;
  }
  local_1e0 = uStack_a4;
  uStack_1dc = 0;
  local_e8.Frame.SubFrame = 0.0;
  local_e8.Frame.FrameNumber.Value = uStack_a4;
  local_e8.Time = 0.0;
  local_e8.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.MarkedFrame.Data.ArrayNum = 0;
  local_e8.MarkedFrame.Data.ArrayMax = 0;
  local_e8.Timecode.Hours = 0;
  local_e8.Timecode.Minutes = 0;
  local_e8.Timecode.Seconds = 0;
  local_e8.Timecode.Frames = 0;
  local_e8.Timecode.Subframe = 0.0;
  local_e8.Timecode.bDropFrameFormat = false;
  local_e8.PositionType = Frame;
  local_e8.UpdateMethod = Play;
  local_e8.bHasJumped = false;
  UMovieSceneSequencePlayer::PlayTo
            ((UMovieSceneSequencePlayer *)this_01,&local_e8,(FMovieSceneSequencePlayToParams)0x1);
  local_218 = 0;
  uStack_210 = 0;
  local_218._0_4_ = 0;
  local_218._4_4_ = 0;
  uStack_210._0_4_ = 0;
  uStack_210._4_4_ = 0;
  local_258 = 0;
  local_278 = 0;
  local_res20 = 0;
  local_240 = 0;
  local_248 = 0;
  uVar18 = (uint)local_218;
  uVar19 = local_218._4_4_;
  uVar20 = (uint)uStack_210;
  uVar21 = uStack_210._4_4_;
  uVar15 = uVar17;
  do {
    iVar8 = (int)((ulonglong)local_248 >> 0x20);
    iVar14 = (int)((ulonglong)local_258 >> 0x20);
    pUVar3 = (this->MovieScene).field0_0x0.DebugPtr;
    if ((pUVar3->ObjectBindings).ArrayNum <= (int)uVar17) break;
    if (((int)uVar17 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGuid *)(*pcVar6)();
      return pFVar9;
    }
    IMovieScenePlayer::FindBoundObjects
              ((IMovieScenePlayer *)&local_238->_padding_,&local_118,
               (FGuid *)((pUVar3->ObjectBindings).AllocatorInstance.Data +
                        (longlong)(int)uVar17 * 0x40 + 0x10),&MovieSceneSequenceID::Root);
    pFVar1 = &local_118.DataPtr[local_118.ArrayNum].WeakPtr;
    for (pFVar16 = &(local_118.DataPtr)->WeakPtr; pFVar16 != pFVar1; pFVar16 = pFVar16 + 1) {
      local_268[0] = *pFVar16;
      bVar7 = FWeakObjectPtr::IsValid(local_268);
      if ((bVar7) &&
         (pUVar11 = FWeakObjectPtr::Get(local_268),
         *(longlong *)&pUVar11->field_0x10 == *(longlong *)&param_1->field_0x10)) {
        if (local_1d8 == (UObject *)0x0) {
LAB_14ac75cae:
          bVar7 = true;
        }
        else {
          local_168.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_168.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_168,&local_128);
          pUVar11 = FWeakObjectPtr::Get(local_268);
          uVar15 = 3;
          local_160.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
          local_160.Number = *(uint *)&pUVar11->field_0x1c;
          ::FName::ToString(&local_160,&local_138);
          iVar8 = local_138.Data.ArrayNum;
          if (iVar8 == local_128.Data.ArrayNum) {
            if (iVar8 < 2) goto LAB_14ac75cae;
            iVar8 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_138.Data.AllocatorInstance.Data,
                               (wchar_t *)local_128.Data.AllocatorInstance.Data);
            bVar7 = iVar8 == 0;
          }
          else {
            bVar7 = iVar8 + local_128.Data.ArrayNum == 1;
          }
          if (bVar7) goto LAB_14ac75cae;
          bVar7 = false;
        }
        if (((uVar15 & 2) != 0) &&
           (uVar15 = uVar15 & 0xfffffffd,
           local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (((uVar15 & 1) != 0) &&
           (uVar15 = uVar15 & 0xfffffffe,
           local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pUVar3 = (this->MovieScene).field0_0x0.DebugPtr;
          uVar18 = 0;
          if ((int)uVar17 < (pUVar3->ObjectBindings).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar9 = (FGuid *)(*pcVar6)();
            return pFVar9;
          }
          pFVar4 = (pUVar3->ObjectBindings).AllocatorInstance.Data;
          auVar2 = *(undefined1 (*) [16])(pFVar4 + local_240 + 0x10);
          uVar18 = auVar2._0_4_;
          uVar19 = auVar2._4_4_;
          uVar20 = auVar2._8_4_;
          uVar21 = auVar2._12_4_;
          local_248 = *(undefined8 *)(pFVar4 + local_240 + 0x18);
          local_res20 = *(uint *)(pFVar4 + local_240 + 0x18);
          local_258 = auVar2._0_8_;
          local_278 = uVar18;
          break;
        }
      }
    }
    local_240 = local_240 + 0x40;
    uVar17 = uVar17 + 1;
    iVar8 = (int)((ulonglong)local_248 >> 0x20);
    iVar14 = (int)((ulonglong)local_258 >> 0x20);
  } while (((iVar14 == 0 && iVar8 == 0) && local_res20 == 0) && local_278 == 0);
  if (((iVar14 == 0 && iVar8 == 0) && local_res20 == 0) && local_278 == 0) {
    this_00 = &local_238->_padding_;
    pTVar12 = IMovieScenePlayer::GetSharedPlaybackState
                        ((IMovieScenePlayer *)&local_238->_padding_,&local_98);
    local_108.Object = pTVar12->Object;
    local_108.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneEvaluationState::FindObjectId
              ((FMovieSceneEvaluationState *)this_00,&local_1c8,param_1,&MovieSceneSequenceID::Root,
               &local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if (((local_1c8.D != 0 || local_1c8.C != 0) || local_1c8.B != 0) || local_1c8.A != 0) {
      uVar18 = local_1c8.A;
      uVar19 = local_1c8.B;
      uVar20 = local_1c8.C;
      uVar21 = local_1c8.D;
      local_res20 = local_1c8.C;
      local_278 = local_1c8.A;
    }
  }
  UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)local_238);
  if (local_230 != (ATemplateSequenceActor *)0x0) {
    UWorld::DestroyActor(local_158,(AActor *)local_230,false,true);
  }
  if (((uVar21 == 0 && local_res20 == 0) && uVar19 == 0) && local_278 == 0) {
    local_150.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_150.Number = *(uint *)&param_1->field_0x1c;
    pUVar3 = (this->MovieScene).field0_0x0.DebugPtr;
    pUVar5 = *(UClass **)&param_1->field_0x10;
    ::FName::ToString(&local_150,&local_f8);
    UMovieScene::AddPossessable(pUVar3,&local_180,&local_f8,pUVar5);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (((local_228.D != 0 || local_228.C != 0) || local_228.B != 0) || local_228.A != 0) {
      this_03 = UMovieScene::FindPossessable((this->MovieScene).field0_0x0.DebugPtr,&local_180);
      if (this_03 == (FMovieScenePossessable *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3206626672002465577>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\TemplateSequence.cpp"
                           ,0xd7,"ChildPossessable");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FGuid *)(*pcVar6)();
          return pFVar9;
        }
      }
      else {
        FMovieScenePossessable::SetParent(this_03,&local_228,(this->MovieScene).field0_0x0.DebugPtr)
        ;
      }
      pFVar13 = UMovieScene::FindSpawnable((this->MovieScene).field0_0x0.DebugPtr,&local_228);
      if (pFVar13 != (FMovieSceneSpawnable *)0x0) {
        TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
                  (&pFVar13->ChildPossessables,&local_180);
      }
    }
    (**(code **)(this->_padding_ + 0x2c0))(this,&local_180,param_1,local_1d8);
    __return_storage_ptr__->A = local_180.A;
    __return_storage_ptr__->B = local_180.B;
    __return_storage_ptr__->C = local_180.C;
    __return_storage_ptr__->D = local_180.D;
  }
  else {
    __return_storage_ptr__->A = uVar18;
    __return_storage_ptr__->B = uVar19;
    __return_storage_ptr__->C = uVar20;
    __return_storage_ptr__->D = uVar21;
  }
  return __return_storage_ptr__;
}

// GetAssetRegistryTags @ 14ac76ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UTemplateSequence::GetAssetRegistryTags
          (UTemplateSequence *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UTemplateSequence *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UTemplateSequence **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
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
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UTemplateSequence **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UTemplateSequence **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
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
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 14ac76ed0

void __thiscall
UTemplateSequence::GetAssetRegistryTags(UTemplateSequence *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  UClass *pUVar2;
  FName *pFVar3;
  FName *pFVar4;
  FName FVar5;
  FName local_res8;
  FAssetRegistryTag local_48;
  FAssetRegistryTag local_28;
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  pUVar2 = TSoftClassPtr<AActor>::Get(&this->BoundActorClass);
  if (pUVar2 == (UClass *)0x0) {
    ::FString::FString((FString *)&local_48,"(None)");
    pFVar3 = ::FName::FName(&local_res8,"BoundActorClass");
    local_28.Name = *pFVar3;
    local_28.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48.Name;
    local_28.Value.Data.ArrayNum = (uint)local_48.Value.Data.AllocatorInstance.Data;
    local_28.Value.Data.ArrayMax = local_48.Value.Data.AllocatorInstance.Data._4_4_;
    local_48.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Name.ComparisonIndex.Value = 0;
    local_48.Name.Number = 0;
    local_28.Type = TT_Alphabetical;
    local_28.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
    FVar5 = local_48.Name;
  }
  else {
    pUVar2 = TSoftClassPtr<AActor>::Get(&this->BoundActorClass);
    pFVar3 = (FName *)UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pUVar2,(FString *)&local_48,(UObject *)0x0);
    pFVar4 = ::FName::FName(&local_res8,"BoundActorClass");
    local_28.Value.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar3;
    local_28.Type = TT_Alphabetical;
    local_28.DisplayFlags = 0;
    FVar5 = *pFVar4;
    pFVar3->ComparisonIndex = 0;
    pFVar3->Number = 0;
    local_28.Value.Data.ArrayNum = pFVar3[1].ComparisonIndex.Value;
    local_28.Value.Data.ArrayMax = pFVar3[1].Number;
    pFVar3[1].ComparisonIndex = 0;
    pFVar3[1].Number = 0;
    local_28.Name = FVar5;
    if (local_48.Name != (FName)0x0) {
      FMemory::Free((void *)local_48.Name);
    }
    local_48.Name = FVar5;
    ::FString::FString(&local_48.Value,&local_28.Value);
    local_48.Type = local_28.Type;
    local_48.DisplayFlags = local_28.DisplayFlags;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
    FVar5 = (FName)local_28.Value.Data.AllocatorInstance;
  }
  if (FVar5 != (FName)0x0) {
    FMemory::Free((void *)FVar5);
  }
  return;
}

// GetMovieScene @ 14ac774e0

UMovieScene * __thiscall UTemplateSequence::GetMovieScene(UTemplateSequence *this)

{
  return (this->MovieScene).field0_0x0.DebugPtr;
}

// GetParentObject @ 14ac77510

UObject * __thiscall UTemplateSequence::GetParentObject(UTemplateSequence *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return *(UObject **)&param_1[4].field_0x8;
    }
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 14ac77e30

UClass * __cdecl UTemplateSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequence",
               &Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton,
               StaticRegisterNativesUTemplateSequence,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTemplateSequence>,
               InternalVTableHelperCtorCaller<UTemplateSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton;
}

// GetRootObjectBindingID @ 14ac78370

FGuid * __thiscall
UTemplateSequence::GetRootObjectBindingID(UTemplateSequence *this,FGuid *__return_storage_ptr__)

{
  UMovieScene *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FMovieSceneSpawnable *pFVar5;
  
  this_00 = (this->MovieScene).field0_0x0.DebugPtr;
  if (this_00 != (UMovieScene *)0x0) {
    iVar4 = UMovieScene::GetSpawnableCount(this_00);
    if (0 < iVar4) {
      pFVar5 = UMovieScene::GetSpawnable((this->MovieScene).field0_0x0.DebugPtr,0);
      uVar1 = (pFVar5->Guid).B;
      uVar2 = (pFVar5->Guid).C;
      uVar3 = (pFVar5->Guid).D;
      __return_storage_ptr__->A = (pFVar5->Guid).A;
      __return_storage_ptr__->B = uVar1;
      __return_storage_ptr__->C = uVar2;
      __return_storage_ptr__->D = uVar3;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetRootObjectSpawnableTemplate @ 14ac783e0

UObject * __thiscall UTemplateSequence::GetRootObjectSpawnableTemplate(UTemplateSequence *this)

{
  UMovieScene *this_00;
  int iVar1;
  FMovieSceneSpawnable *pFVar2;
  
  this_00 = (this->MovieScene).field0_0x0.DebugPtr;
  if (this_00 != (UMovieScene *)0x0) {
    iVar1 = UMovieScene::GetSpawnableCount(this_00);
    if (0 < iVar1) {
      pFVar2 = UMovieScene::GetSpawnable((this->MovieScene).field0_0x0.DebugPtr,0);
      return (pFVar2->ObjectTemplate).field0_0x0.DebugPtr;
    }
  }
  return (UObject *)0x0;
}

// Initialize @ 14ac79b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UTemplateSequence::Initialize(UTemplateSequence *this)

{
  UClass *pUVar1;
  UMovieScene *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieScene *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieScene *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->MovieScene).field0_0x0.DebugPtr = pUVar2;
  pUVar2->EvaluationType = WithSubFrames;
  UMovieScene::SetTickResolutionDirectly
            ((this->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x100005dc0);
  pUVar2 = (this->MovieScene).field0_0x0.DebugPtr;
  (pUVar2->DisplayRate).Numerator = 0x1e;
  (pUVar2->DisplayRate).Denominator = 1;
  return;
}

// LocateBoundObjects @ 14ac7a770

void __thiscall
UTemplateSequence::LocateBoundObjects
          (UTemplateSequence *this,FGuid *param_1,UObject *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  FName *this_00;
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  ulong64 uVar6;
  longlong lVar7;
  FString *pFVar8;
  size_t sVar9;
  ForElementType<UObject_*> FVar10;
  UObject *local_48 [2];
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if (param_2 == (UObject *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  iVar4 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar4) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
                      *)&this->BoundActorComponents,(uint)uVar6,param_1);
  if (iVar4 == -1) {
    return;
  }
  lVar7 = (longlong)iVar4 * 0x20 + *(longlong *)&this->BoundActorComponents;
  if (lVar7 == 0) {
    return;
  }
  this_00 = (FName *)(lVar7 + 0x10);
  if (this_00 == (FName *)0x0) {
    return;
  }
  pFVar8 = ::FName::ToString(this_00,&local_18);
  if ((pFVar8->Data).ArrayNum == 0) {
    local_38 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_38 = (pFVar8->Data).AllocatorInstance.Data;
    iStack_30 = 0;
    if (local_38 == (FScriptContainerElement *)0x0) goto LAB_14ac7a844;
  }
  sVar9 = wcslen((wchar_t *)local_38);
  iStack_30 = (int)sVar9;
LAB_14ac7a844:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_28._12_4_ = uStack_2c;
  local_28.Size = iStack_30;
  local_28.DataPtr = (wchar_t *)local_38;
  local_48[0] = StaticFindObject(pUVar5,param_2,&local_28,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_48[0] != (UObject *)0x0) {
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    FVar10 = (ForElementType<UObject_*>)param_3;
    if (FVar1 != (ForElementType<UObject_*>)0x0) {
      FVar10 = FVar1;
    }
    if ((ulonglong)FVar10 <= local_48) {
      FVar10 = (ForElementType<UObject_*>)param_3;
      if (FVar1 != (ForElementType<UObject_*>)0x0) {
        FVar10 = FVar1;
      }
      if ((local_48 < (UObject **)((longlong)FVar10 + (longlong)param_3->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_3->ArrayNum;
    if (iVar4 == param_3->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar4 + 1;
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<UObject_*>)0x0) {
      param_3 = (TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
    }
    *(UObject **)((longlong)param_3 + (longlong)iVar4 * 8) = local_48[0];
  }
  return;
}

// MakeSpawnableTemplateFromInstance @ 14ac7ab00

UObject * __thiscall
UTemplateSequence::MakeSpawnableTemplateFromInstance
          (UTemplateSequence *this,UObject *param_1,FName param_2)

{
  UObject *pUVar1;
  
  pUVar1 = MovieSceneHelpers::MakeSpawnableTemplateFromInstance
                     (param_1,(this->MovieScene).field0_0x0.DebugPtr,param_2);
  return pUVar1;
}

// StaticRegisterNativesUTemplateSequence @ 14ac80540

void __cdecl UTemplateSequence::StaticRegisterNativesUTemplateSequence(void)

{
  return;
}

// UnbindInvalidObjects @ 14ac80a50

void __thiscall
UTemplateSequence::UnbindInvalidObjects(UTemplateSequence *this,FGuid *param_1,UObject *param_2)

{
  ulong64 uVar1;
  
  if (*(int *)&(this->BoundActorComponents).field_0x8 !=
      *(int *)&(this->BoundActorComponents).field_0x34) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::
    RemoveImpl<FGuid>((TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
                       *)&this->BoundActorComponents,(uint)uVar1,param_1);
  }
  return;
}

// UnbindObjects @ 14ac80aa0

void __thiscall
UTemplateSequence::UnbindObjects
          (UTemplateSequence *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  ulong64 uVar1;
  
  if (*(int *)&(this->BoundActorComponents).field_0x8 !=
      *(int *)&(this->BoundActorComponents).field_0x34) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::
    RemoveImpl<FGuid>((TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
                       *)&this->BoundActorComponents,(uint)uVar1,param_1);
  }
  return;
}

// UnbindPossessableObjects @ 14ac80af0

void __thiscall UTemplateSequence::UnbindPossessableObjects(UTemplateSequence *this,FGuid *param_1)

{
  ulong64 uVar1;
  
  if (*(int *)&(this->BoundActorComponents).field_0x8 !=
      *(int *)&(this->BoundActorComponents).field_0x34) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>::
    RemoveImpl<FGuid>((TSet<TTuple<FGuid,FName>,TDefaultMapHashableKeyFuncs<FGuid,FName,0>,FDefaultSetAllocator>
                       *)&this->BoundActorComponents,(uint)uVar1,param_1);
  }
  return;
}

