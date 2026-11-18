// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 28

// StaticClass @ 146c43940

UClass * __cdecl ULevelSequencePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequencePlayer",
               &Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton,
               StaticRegisterNativesULevelSequencePlayer,0x5d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelSequencePlayer>,
               InternalVTableHelperCtorCaller<ULevelSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton;
}

// ULevelSequencePlayer @ 146c4ea30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ULevelSequencePlayer * __thiscall
ULevelSequencePlayer::ULevelSequencePlayer(ULevelSequencePlayer *this,FVTableHelper *param_1)

{
  UMovieSceneSequencePlayer::UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this,param_1);
  (this->CameraSettings).bOverrideAspectRatioAxisConstraint = true;
  (this->CameraSettings).AspectRatioAxisConstraint = '\x01';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  this->_padding_ = (longlong)&___7ULevelSequencePlayer__6B_;
  *(undefined8 *)&this->OnCameraCut = 0;
  *(undefined8 *)&(this->OnCameraCut).field_0x8 = 0;
  *(undefined8 *)&(this->OnCameraCut).field_0x10 = 0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Level).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SnapshotOffsetTime).bIsSet = false;
  (this->CachedCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PreviousSnapshot).bIsSet = false;
  (this->WeakStreamingWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SourceAssetPath).PackageName.ComparisonIndex = 0;
  (this->SourceAssetPath).PackageName.Number = 0;
  (this->SourceAssetPath).AssetName.ComparisonIndex = 0;
  (this->SourceAssetPath).AssetName.Number = 0;
  (this->ContainerID).Guid.A = 0;
  (this->ContainerID).Guid.B = 0;
  (this->ContainerID).Guid.C = 0;
  (this->ContainerID).Guid.D = 0;
  return this;
}

// ULevelSequencePlayer @ 146c4eaf0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ULevelSequencePlayer * __thiscall
ULevelSequencePlayer::ULevelSequencePlayer(ULevelSequencePlayer *this,FObjectInitializer *param_1)

{
  UMovieSceneSequencePlayer::UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this,param_1);
  (this->CameraSettings).bOverrideAspectRatioAxisConstraint = true;
  (this->CameraSettings).AspectRatioAxisConstraint = '\x01';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  this->_padding_ = (longlong)&___7ULevelSequencePlayer__6B_;
  *(undefined8 *)&this->OnCameraCut = 0;
  *(undefined8 *)&(this->OnCameraCut).field_0x8 = 0;
  *(undefined8 *)&(this->OnCameraCut).field_0x10 = 0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Level).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SnapshotOffsetTime).bIsSet = false;
  (this->CachedCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PreviousSnapshot).bIsSet = false;
  (this->WeakStreamingWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SourceAssetPath).PackageName.ComparisonIndex = 0;
  (this->SourceAssetPath).PackageName.Number = 0;
  (this->SourceAssetPath).AssetName.ComparisonIndex = 0;
  (this->SourceAssetPath).AssetName.Number = 0;
  (this->ContainerID).Guid.A = 0;
  (this->ContainerID).Guid.B = 0;
  (this->ContainerID).Guid.C = 0;
  (this->ContainerID).Guid.D = 0;
  return this;
}

// ~ULevelSequencePlayer @ 146c4f270

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULevelSequencePlayer::~ULevelSequencePlayer(ULevelSequencePlayer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  this->_padding_ = (longlong)&___7ULevelSequencePlayer__6B_;
  if ((this->PreviousSnapshot).bIsSet != false) {
    pvVar1 = *(void **)&(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.field_0x18
    ;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pFVar2 = (this->PreviousSnapshot).TypedValue.SourceTimecode.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this->PreviousSnapshot).TypedValue.CurrentShotName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this->PreviousSnapshot).TypedValue.RootName.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  pvVar1 = *(void **)&(this->OnCameraCut).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCameraCut);
  UMovieSceneSequencePlayer::~UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this);
  return;
}

// CanPlay @ 146c51230

bool __thiscall ULevelSequencePlayer::CanPlay(ULevelSequencePlayer *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  return bVar1;
}

// CreateLevelSequencePlayer @ 146c51db0

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
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

ULevelSequencePlayer * __cdecl
ULevelSequencePlayer::CreateLevelSequencePlayer
          (UObject *param_1,ULevelSequence *param_2,FMovieSceneSequencePlaybackSettings *param_3,
          ALevelSequenceActor **param_4)

{
  int iVar1;
  FMovieSceneSequenceLoopCount FVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined7 uVar6;
  bool bVar7;
  UWorld *this;
  UClass *pUVar8;
  ALevelSequenceActor *this_00;
  FString *pFVar9;
  ULevel *pUVar10;
  ULevelSequencePlayer *pUVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStackY_158 [32];
  FString local_128;
  FString local_118;
  undefined1 local_108 [112];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((param_2 == (ULevelSequence *)0x0) ||
      (this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
      this == (UWorld *)0x0)) || (this->bIsTearingDown != '\0')) {
    pUVar11 = (ULevelSequencePlayer *)0x0;
  }
  else {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_108);
    local_108._52_4_ = local_108._52_4_ | RF_Transient;
    local_108[0x32] = local_108[0x32] | 0xc;
    local_108[0x30] = AlwaysSpawn;
    pUVar8 = ALevelSequenceActor::StaticClass();
    this_00 = (ALevelSequenceActor *)
              UWorld::SpawnActor(this,pUVar8,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                 (FActorSpawnParameters *)local_108);
    if (this_00 == (ALevelSequenceActor *)0x0) {
      this_00 = (ALevelSequenceActor *)0x0;
    }
    else {
      pUVar8 = ALevelSequenceActor::StaticClass();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        pFVar9 = GetTypeName<ALevelSequenceActor>(&local_128);
        pwVar13 = L"";
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        pFVar9 = GetFullNameForCastLogError<AActor>(&local_118,(AActor *)this_00);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar13,pwVar14);
      }
    }
    FVar2.Value = (param_3->LoopCount).Value;
    fVar3 = (param_3->TickInterval).TickIntervalSeconds;
    fVar4 = (param_3->TickInterval).EvaluationBudgetMicroseconds;
    pUVar11 = (this_00->SequencePlayer).field0_0x0.DebugPtr;
    *(undefined4 *)&(this_00->PlaybackSettings).field_0x0 = *(undefined4 *)&param_3->field_0x0;
    (this_00->PlaybackSettings).LoopCount = (FMovieSceneSequenceLoopCount)FVar2.Value;
    (this_00->PlaybackSettings).TickInterval.TickIntervalSeconds = fVar3;
    (this_00->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = fVar4;
    fVar3 = param_3->StartTime;
    uVar5 = *(undefined4 *)&param_3->field_0x1c;
    *(undefined8 *)&(this_00->PlaybackSettings).TickInterval.bTickWhenPaused =
         *(undefined8 *)&(param_3->TickInterval).bTickWhenPaused;
    (this_00->PlaybackSettings).StartTime = fVar3;
    *(undefined4 *)&(this_00->PlaybackSettings).field_0x1c = uVar5;
    uVar6 = *(undefined7 *)&param_3->field_0x21;
    (this_00->PlaybackSettings).FinishCompletionStateOverride =
         param_3->FinishCompletionStateOverride;
    *(undefined7 *)&(this_00->PlaybackSettings).field_0x21 = uVar6;
    UMovieSceneSequencePlayer::SetPlaybackSettings((UMovieSceneSequencePlayer *)pUVar11,param_3);
    bVar7 = UMovieSceneSequencePlayer::IsPlaying
                      ((UMovieSceneSequencePlayer *)(this_00->SequencePlayer).field0_0x0.DebugPtr);
    if (!bVar7) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (this_00->LevelSequenceAsset).field0_0x0.DebugPtr = param_2;
      pUVar11 = (this_00->SequencePlayer).field0_0x0.DebugPtr;
      pUVar10 = AActor::GetLevel((AActor *)this_00);
      Initialize(pUVar11,param_2,pUVar10,&this_00->CameraSettings);
    }
    ALevelSequenceActor::InitializePlayer(this_00);
    *param_4 = this_00;
    local_98.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_98.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_98.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_98.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_98.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_98.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    AActor::FinishSpawning
              ((AActor *)this_00,&local_98,false,(FComponentInstanceDataCache *)0x0,
               OverrideRootScale);
    pUVar11 = (this_00->SequencePlayer).field0_0x0.DebugPtr;
    if (local_108._64_8_ != 0) {
      plVar12 = (longlong *)(local_108 + 0x50);
      if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_108._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  return pUVar11;
}

// EnableCinematicMode @ 146c52770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULevelSequencePlayer::EnableCinematicMode(ULevelSequencePlayer *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UWorld *this_00;
  UObject *pUVar8;
  ulonglong uVar9;
  ulonglong in_stack_ffffffffffffffd8;
  ulonglong in_stack_ffffffffffffffe0;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  if (((this->_padding_ & 0x1e) != 0) &&
     (bVar5 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr), bVar5)) {
    this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    for (; iVar4 = local_18.Index, pTVar3 = local_18.Container, -1 < local_18.Index;
        local_18.Index = local_18.Index + 1) {
      iVar1 = (local_18.Container)->ArrayNum;
      uVar9 = (ulonglong)iVar1;
      if (iVar1 <= local_18.Index) {
        return;
      }
      uVar7 = 0;
      if (local_18.Index < iVar1) {
        uVar7 = (uint)~local_18.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        in_stack_ffffffffffffffd8 = (ulonglong)local_18.Index;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        in_stack_ffffffffffffffe0 = uVar9;
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if ((pUVar8 != (UObject *)0x0) &&
         (cVar6 = (**(code **)(*(longlong *)pUVar8 + 0x7f0))(pUVar8), cVar6 != '\0')) {
        uVar7 = (uint)this->_padding_;
        in_stack_ffffffffffffffe0 =
             CONCAT71((int7)(in_stack_ffffffffffffffe0 >> 8),(char)(uVar7 >> 2)) &
             0xffffffffffffff01;
        in_stack_ffffffffffffffd8 =
             CONCAT71((int7)(in_stack_ffffffffffffffd8 >> 8),(char)(uVar7 >> 1)) &
             0xffffffffffffff01;
        (**(code **)(*(longlong *)pUVar8 + 0xc18))
                  (pUVar8,param_1,uVar7 >> 3 & 0xffffff01,uVar7 >> 4 & 0xffffff01,
                   in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0);
      }
    }
  }
  return;
}

// GetAspectRatioAxisConstraintOverride @ 146c53680

TOptional<EAspectRatioAxisConstraint> __thiscall
ULevelSequencePlayer::GetAspectRatioAxisConstraintOverride(ULevelSequencePlayer *this)

{
  TOptional<EAspectRatioAxisConstraint> in_RDX;
  
  if ((char)this->_padding_ != '\0') {
    *(uint *)in_RDX = (uint)*(byte *)((longlong)&this->_padding_ + 1);
    *(undefined1 *)((longlong)in_RDX + 4) = 1;
    return in_RDX;
  }
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetCameraBlendPlayRate @ 146c53fa0

float __thiscall ULevelSequencePlayer::GetCameraBlendPlayRate(ULevelSequencePlayer *this)

{
  return *(float *)&this[-1]._padding_;
}

// GetEventContexts @ 146c54330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULevelSequencePlayer::GetEventContexts
          (UWorld *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ULevelStreaming *this;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ALevelScriptActor *pAVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  ALevelScriptActor *local_28;
  ALevelScriptActor *local_20;
  
  pAVar7 = UWorld::GetLevelScriptActor(param_1,(ULevel *)0x0);
  if (pAVar7 != (ALevelScriptActor *)0x0) {
    local_28 = UWorld::GetLevelScriptActor(param_1,(ULevel *)0x0);
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(ALevelScriptActor **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28;
  }
  pFVar8 = (param_1->StreamingLevels).AllocatorInstance.Data;
  iVar5 = (param_1->StreamingLevels).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar5 * 8;
  while( true ) {
    if ((param_1->StreamingLevels).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    this = *(ULevelStreaming **)pFVar8;
    if (this != (ULevelStreaming *)0x0) {
      pAVar7 = ULevelStreaming::GetLevelScriptActor(this);
      if (pAVar7 != (ALevelScriptActor *)0x0) {
        local_20 = ULevelStreaming::GetLevelScriptActor(this);
        pFVar2 = (param_2->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_20) &&
           ((FScriptContainerElement *)&local_20 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(ALevelScriptActor **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_20;
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GetEventContexts @ 146c54540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
ULevelSequencePlayer::GetEventContexts
          (ULevelSequencePlayer *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  bool bVar1;
  UWorld *pUVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    GetEventContexts(pUVar2,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetPlaybackContext @ 146c552b0

UObject * __thiscall ULevelSequencePlayer::GetPlaybackContext(ULevelSequencePlayer *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = ALevelSequenceActor::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter
                     ((UObjectBaseUtility *)&this[-1].WeakStreamingWorld,pUVar1);
  if (pUVar2 == (UObject *)0x0) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    return pUVar2;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 146c55bb0

UClass * __cdecl ULevelSequencePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequencePlayer",
               &Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton,
               StaticRegisterNativesULevelSequencePlayer,0x5d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelSequencePlayer>,
               InternalVTableHelperCtorCaller<ULevelSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequencePlayer.InnerSingleton;
}

// Initialize @ 146c574b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ULevelSequencePlayer::Initialize
          (ULevelSequencePlayer *this,ULevelSequence *param_1,ULevel *param_2,
          FLevelSequenceCameraSettings *param_3)

{
  UWorld *pUVar1;
  FSharedPlaybackState *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FCameraCutPlaybackCapability *pFVar6;
  FWeakObjectPtr local_res8;
  UWorld *local_res18;
  ULevel *local_res20;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  pUVar1 = (param_2->OwningWorld).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UWorld *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  (this->World).WeakPtr = local_res8;
  local_res20 = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->Level).WeakPtr,(FObjectPtr)&local_res20);
  this->CameraSettings = *param_3;
  UMovieSceneSequencePlayer::Initialize
            ((UMovieSceneSequencePlayer *)this,(UMovieSceneSequence *)param_1);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState
                     ((FMovieSceneRootEvaluationTemplateInstance *)&this->_padding_,&local_38);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (this_00 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<FMovieSceneSpawnRegister>
            (this_00,(FMovieSceneSpawnRegister *)this->_padding_);
  pFVar6 = (FCameraCutPlaybackCapability *)&this->_padding_;
  if (this == (ULevelSequencePlayer *)0x0) {
    pFVar6 = (FCameraCutPlaybackCapability *)0x0;
  }
  UE::MovieScene::FSharedPlaybackState::
  SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability>(this_00,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// InitializeLevelSequenceRootInstance @ 146c57650

void __thiscall
ULevelSequencePlayer::InitializeLevelSequenceRootInstance
          (ULevelSequencePlayer *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  FCameraCutPlaybackCapability *pFVar1;
  
  UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<FMovieSceneSpawnRegister>
            (param_1->Object,(FMovieSceneSpawnRegister *)this->_padding_);
  pFVar1 = (FCameraCutPlaybackCapability *)&this->_padding_;
  if (this == (ULevelSequencePlayer *)0x0) {
    pFVar1 = (FCameraCutPlaybackCapability *)0x0;
  }
  UE::MovieScene::FSharedPlaybackState::
  SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability>(param_1->Object,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InitializeRootInstance @ 146c57840

void __thiscall
ULevelSequencePlayer::InitializeRootInstance
          (ULevelSequencePlayer *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *this_00;
  code *pcVar2;
  bool bVar3;
  FLevelSequenceSpawnRegister *this_01;
  FName *pFVar4;
  FModuleManager *this_02;
  IModuleInterface *pIVar5;
  FCameraCutPlaybackCapability *pFVar6;
  FName local_res8;
  TRawPtrProxy<FLevelSequenceSpawnRegister> local_res10;
  FName local_res18 [2];
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_58;
  FString local_48;
  
  this_01 = ::operator_new(0x80);
  if (this_01 == (FLevelSequenceSpawnRegister *)0x0) {
    this_01 = (FLevelSequenceSpawnRegister *)0x0;
  }
  else {
    FMovieSceneSpawnRegister::FMovieSceneSpawnRegister((FMovieSceneSpawnRegister *)this_01);
    this_01->_padding_ = (longlong)&___7FLevelSequenceSpawnRegister__6B_;
    (this_01->MovieSceneObjectSpawners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->MovieSceneObjectSpawners).ArrayNum = 0;
    (this_01->MovieSceneObjectSpawners).ArrayMax = 0;
    pFVar4 = ::FName::FName(local_res18,"LevelSequence");
    local_res8 = *pFVar4;
    this_02 = FModuleManager::Get();
    bVar3 = FModuleManager::IsModuleLoaded(this_02,local_res8);
    if (!bVar3) {
      ::FName::ToString(&local_res8,&local_48);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar5 = FModuleManager::GetModule(this_02,local_res8);
    (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,&this_01->MovieSceneObjectSpawners);
    if ((((this_01->_padding_ != 0) && (this_01->_padding_ != 0)) &&
        (0 < *(int *)(this_01->_padding_ + 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res10.Object = this_01;
  TSharedPtr<FMovieSceneSpawnRegister,1>::operator=<FLevelSequenceSpawnRegister>
            ((TSharedPtr<FMovieSceneSpawnRegister,1> *)&this->_padding_,&local_res10);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IMovieScenePlayer::InitializeRootInstance((IMovieScenePlayer *)this,&local_58);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<FMovieSceneSpawnRegister>
            (this_00,(FMovieSceneSpawnRegister *)this->_padding_);
  pFVar6 = (FCameraCutPlaybackCapability *)&this->_padding_;
  if (this == (ULevelSequencePlayer *)&DAT_00000028) {
    pFVar6 = (FCameraCutPlaybackCapability *)0x0;
  }
  UE::MovieScene::FSharedPlaybackState::
  SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability>(this_00,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnCameraCutUpdated @ 146c57cd0

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
ULevelSequencePlayer::OnCameraCutUpdated
          (ULevelSequencePlayer *this,FOnCameraCutUpdatedParams *param_1)

{
  longlong lVar1;
  UCameraComponent *local_res8;
  FReadAccessScope local_28;
  
  local_res8 = param_1->ViewTargetCamera;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UCameraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)((longlong)&this->_padding_ + 4),(FObjectPtr)&local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  lVar1 = this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < (int)lVar1) {
    local_res8 = param_1->ViewTargetCamera;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_res8)
    ;
  }
  return;
}

// OnStartedPlaying @ 146c57f10

void __thiscall ULevelSequencePlayer::OnStartedPlaying(ULevelSequencePlayer *this)

{
  EnableCinematicMode(this,true);
  return;
}

// OnStopped @ 146c57f40

void __thiscall ULevelSequencePlayer::OnStopped(ULevelSequencePlayer *this)

{
  EnableCinematicMode(this,false);
  return;
}

// ResolveBoundObjects @ 146c59930

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
ULevelSequencePlayer::ResolveBoundObjects
          (ULevelSequencePlayer *this,FResolveParams *param_1,FGuid *param_2,
          FMovieSceneSequenceID param_3,UMovieSceneSequence *param_4,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  FResolveParameterBuffer *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FMovieSceneBindingReferences *this_00;
  UScriptStruct *pUVar5;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar7;
  undefined1 auStackY_158 [32];
  FParameterTypeHandle local_128 [8];
  undefined1 local_120 [8];
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_118;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_108;
  TObjectPtr<UMovieSceneSequence>_u_0 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  UObject *local_d8;
  FResolveParameterBuffer local_d0;
  uchar local_c0 [128];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((this->_padding_ != 0) && (this->_padding_ != 0)) &&
     (cVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x10))
                        ((longlong *)this->_padding_,param_2,param_3.Value,param_5), cVar3 == '\0'))
  {
    return;
  }
  this_00 = UMovieSceneSequence::GetBindingReferences(param_4);
  if (this_00 == (FMovieSceneBindingReferences *)0x0) {
    pFVar1 = param_1->ParameterBuffer;
    if (pFVar1 == (FResolveParameterBuffer *)0x0) {
      UE::UniversalObjectLocator::FResolveParameterBuffer::FResolveParameterBuffer(&local_d0);
      local_d0.Memory = local_c0;
      local_d0.bCanFreeMemory = false;
      local_d0.Capacity = 0x80;
      param_1->ParameterBuffer = &local_d0;
      local_118.Object =
           (FSharedPlaybackState *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)
                               &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.
                                field_0x18);
      local_128[0].Handle = (uchar)FActorLocatorFragmentResolveParameter::ParameterType;
      pUVar5 = FActorLocatorFragmentResolveParameter::StaticStruct();
      pUVar5 = UE::UniversalObjectLocator::FParameterTypeHandle::Resolve(local_128,pUVar5);
      if ((pUVar5 != (UScriptStruct *)0x0) ||
         (bVar4 = `UE::UniversalObjectLocator::FResolveParameterBuffer::
                  AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>'
                  ::__l3::<lambda_1>::operator()(local_120), bVar4)) {
        UE::UniversalObjectLocator::FResolveParameterBuffer::
        AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>
                  (&local_d0,1 << (local_128[0].Handle & 0x1f),(UWorld **)&local_118,
                   (FActorContainerID *)&(this->PreviousSnapshot).TypedValue.ShotID,
                   (FTopLevelAssetPath *)
                   &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.field_0x20);
      }
      pcVar2 = *(code **)(param_4->_padding_ + 0x2d0);
      pTVar7 = IMovieScenePlayer::GetSharedPlaybackState
                         ((IMovieScenePlayer *)this,
                          (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)&local_108);
      local_118.Object = pTVar7->Object;
      local_118.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(param_4,param_2,param_1,&local_118);
      goto LAB_146c59c83;
    }
    local_118.Object =
         (FSharedPlaybackState *)
         FWeakObjectPtr::Get((FWeakObjectPtr *)
                             &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.
                              field_0x18);
    local_128[0].Handle = (uchar)FActorLocatorFragmentResolveParameter::ParameterType;
    pUVar5 = FActorLocatorFragmentResolveParameter::StaticStruct();
    pUVar5 = UE::UniversalObjectLocator::FParameterTypeHandle::Resolve(local_128,pUVar5);
    if ((pUVar5 != (UScriptStruct *)0x0) ||
       (bVar4 = `UE::UniversalObjectLocator::FResolveParameterBuffer::
                AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>'
                ::__l3::<lambda_1>::operator()(local_120), bVar4)) {
      UE::UniversalObjectLocator::FResolveParameterBuffer::
      AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>
                (pFVar1,1 << (local_128[0].Handle & 0x1f),(UWorld **)&local_118,
                 (FActorContainerID *)&(this->PreviousSnapshot).TypedValue.ShotID,
                 (FTopLevelAssetPath *)
                 &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.field_0x20);
    }
    pcVar2 = *(code **)(param_4->_padding_ + 0x2d0);
    pTVar7 = IMovieScenePlayer::GetSharedPlaybackState
                       ((IMovieScenePlayer *)this,
                        (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)&local_108);
    local_118.Object = pTVar7->Object;
    local_118.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(param_4,param_2,param_1,&local_118);
  }
  else {
    local_f8.DebugPtr = param_4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UMovieSceneSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    local_d8 = param_1->Context;
    local_f0._0_4_ = param_2->A;
    local_f0._4_4_ = param_2->B;
    uStack_e8._0_4_ = param_2->C;
    uStack_e8._4_4_ = param_2->D;
    local_e0 = param_3.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_d8);
    }
    pFVar1 = param_1->ParameterBuffer;
    if (pFVar1 == (FResolveParameterBuffer *)0x0) {
      UE::UniversalObjectLocator::FResolveParameterBuffer::FResolveParameterBuffer(&local_d0);
      local_d0.Memory = local_c0;
      local_d0.bCanFreeMemory = false;
      local_d0.Capacity = 0x80;
      param_1->ParameterBuffer = &local_d0;
      local_118.Object =
           (FSharedPlaybackState *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)
                               &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.
                                field_0x18);
      local_128[0].Handle = (uchar)FActorLocatorFragmentResolveParameter::ParameterType;
      pUVar5 = FActorLocatorFragmentResolveParameter::StaticStruct();
      pUVar5 = UE::UniversalObjectLocator::FParameterTypeHandle::Resolve(local_128,pUVar5);
      if ((pUVar5 != (UScriptStruct *)0x0) ||
         (bVar4 = `UE::UniversalObjectLocator::FResolveParameterBuffer::
                  AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>'
                  ::__l3::<lambda_1>::operator()(local_120), bVar4)) {
        UE::UniversalObjectLocator::FResolveParameterBuffer::
        AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>
                  (&local_d0,1 << (local_128[0].Handle & 0x1f),(UWorld **)&local_118,
                   (FActorContainerID *)&(this->PreviousSnapshot).TypedValue.ShotID,
                   (FTopLevelAssetPath *)
                   &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.field_0x20);
      }
      pTVar6 = IMovieScenePlayer::FindSharedPlaybackState((IMovieScenePlayer *)this,&local_108);
      local_118.Object = pTVar6->Object;
      local_118.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FMovieSceneBindingReferences::ResolveBinding
                (this_00,(FMovieSceneBindingResolveParams *)&local_f8.ObjectPtr,param_1,&local_118,
                 param_5);
LAB_146c59c83:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      param_1->ParameterBuffer = (FResolveParameterBuffer *)0x0;
      UE::UniversalObjectLocator::FResolveParameterBuffer::~FResolveParameterBuffer(&local_d0);
      return;
    }
    local_118.Object =
         (FSharedPlaybackState *)
         FWeakObjectPtr::Get((FWeakObjectPtr *)
                             &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.
                              field_0x18);
    local_128[0].Handle = (uchar)FActorLocatorFragmentResolveParameter::ParameterType;
    pUVar5 = FActorLocatorFragmentResolveParameter::StaticStruct();
    pUVar5 = UE::UniversalObjectLocator::FParameterTypeHandle::Resolve(local_128,pUVar5);
    if ((pUVar5 != (UScriptStruct *)0x0) ||
       (bVar4 = `UE::UniversalObjectLocator::FResolveParameterBuffer::
                AddParameter<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>'
                ::__l3::<lambda_1>::operator()(local_120), bVar4)) {
      UE::UniversalObjectLocator::FResolveParameterBuffer::
      AddParameterImpl<FActorLocatorFragmentResolveParameter,UWorld_*,FActorContainerID_const_&,FTopLevelAssetPath_const_&>
                (pFVar1,1 << (local_128[0].Handle & 0x1f),(UWorld **)&local_118,
                 (FActorContainerID *)&(this->PreviousSnapshot).TypedValue.ShotID,
                 (FTopLevelAssetPath *)
                 &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.field_0x20);
    }
    pTVar6 = IMovieScenePlayer::FindSharedPlaybackState((IMovieScenePlayer *)this,&local_108);
    local_118.Object = pTVar6->Object;
    local_118.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneBindingReferences::ResolveBinding
              (this_00,(FMovieSceneBindingResolveParams *)&local_f8.ObjectPtr,param_1,&local_118,
               param_5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  return;
}

// RewindForReplay @ 146c59f30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULevelSequencePlayer::RewindForReplay(ULevelSequencePlayer *this)

{
  UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  return;
}

// SetSourceActorContext @ 146c5b6a0

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
ULevelSequencePlayer::SetSourceActorContext
          (ULevelSequencePlayer *this,UWorld *param_1,FActorContainerID *param_2,
          FTopLevelAssetPath *param_3)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UWorld *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakStreamingWorld).WeakPtr,(FObjectPtr)&local_res8);
  uVar2 = (param_2->Guid).B;
  uVar3 = (param_2->Guid).C;
  uVar4 = (param_2->Guid).D;
  (this->ContainerID).Guid.A = (param_2->Guid).A;
  (this->ContainerID).Guid.B = uVar2;
  (this->ContainerID).Guid.C = uVar3;
  (this->ContainerID).Guid.D = uVar4;
  FVar1 = param_3->AssetName;
  (this->SourceAssetPath).PackageName = param_3->PackageName;
  (this->SourceAssetPath).AssetName = FVar1;
  return;
}

// ShouldUpdateCameraCut @ 146c5b730

bool __thiscall ULevelSequencePlayer::ShouldUpdateCameraCut(ULevelSequencePlayer *this)

{
  return (bool)(~(byte)((uint)this[-1]._padding_ >> 5) & 1);
}

// StaticRegisterNativesULevelSequencePlayer @ 146c5c680

void __cdecl ULevelSequencePlayer::StaticRegisterNativesULevelSequencePlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ULevelSequencePlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TakeFrameSnapshot @ 146c5c7c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ULevelSequencePlayer::TakeFrameSnapshot
          (ULevelSequencePlayer *this,FLevelSequencePlayerSnapshot *param_1)

{
  FFrameTime *pFVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FMovieSceneSequenceID FVar8;
  UClass *pUVar9;
  UMovieScene *this_00;
  UMovieSceneTrack *pUVar10;
  longlong *plVar11;
  UMovieSceneSequence *pUVar12;
  longlong lVar13;
  FFrameTime FVar14;
  FString *pFVar15;
  undefined4 extraout_var;
  ULevelSequence *pUVar16;
  char cVar17;
  char cVar18;
  float *pfVar19;
  FFrameTime *pFVar20;
  FFrameRate FVar21;
  int iVar22;
  int *piVar23;
  FFrameRate FVar24;
  FFrameTime this_01;
  undefined1 local_res18 [16];
  undefined1 local_158 [52];
  float fStack_124;
  int iStack_120;
  int iStack_11c;
  FFrameTime local_118;
  FName local_110;
  FFrameTime local_108;
  FFrameRate local_100;
  FFrameTime local_f8;
  FFrameTime local_f0;
  FFrameRate FStack_e8;
  FFrameTime local_e0;
  FFrameRate FStack_d8;
  FFrameTime local_d0;
  FFrameRate FStack_c8;
  TObjectPtr<ULevelSequence>_u_0 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  FMovieSceneSequenceTransform local_a8;
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (this->_padding_ == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6225901768132263651>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequencePlayer.cpp"
                       ,0x11d,"Sequence");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    FVar14 = *(FFrameTime *)((longlong)&this->_padding_ + 4);
    ConvertFrameTime((FFrameTime)&local_118,(FFrameRate)FVar14,(FFrameRate)this->_padding_);
    FStack_e8 = (FFrameRate)this->_padding_;
    (param_1->RootTime).Time = FVar14;
    (param_1->RootTime).Rate = FStack_e8;
    local_110 = *(FName *)(this->_padding_ + 0x18);
    local_f0 = FVar14;
    ::FName::ToString(&local_110,(FString *)local_158);
    this_01.FrameNumber.Value = 0;
    this_01.SubFrame = 0.0;
    if (param_1 != (FLevelSequencePlayerSnapshot *)local_158) {
      pFVar4 = (param_1->RootName).Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_1->RootName).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._0_8_;
      (param_1->RootName).Data.ArrayNum = local_158._8_4_;
      (param_1->RootName).Data.ArrayMax = local_158._12_4_;
      local_158._8_4_ = 0;
      local_158._12_4_ = 0;
      local_158._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._0_8_);
    }
    iVar3 = (param_1->RootName).Data.ArrayNum;
    iVar22 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar22 = 0;
    }
    ::FString::AssignRange
              (&param_1->CurrentShotName,(wchar_t *)(param_1->RootName).Data.AllocatorInstance.Data,
               iVar22);
    FStack_d8 = (FFrameRate)this->_padding_;
    (param_1->CurrentShotLocalTime).Time = FVar14;
    (param_1->CurrentShotLocalTime).Rate = FStack_d8;
    local_e0 = FVar14;
    bVar6 = FWeakObjectPtr::IsValid(&(this->CachedCameraComponent).WeakPtr);
    local_108 = this_01;
    if (bVar6) {
      local_108 = (FFrameTime)FWeakObjectPtr::Get(&(this->CachedCameraComponent).WeakPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (FFrameTime)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_108);
    }
    FSoftObjectPtr::operator=(&(param_1->CameraComponent).SoftObjectPtr,(FObjectPtr)&local_108);
    (param_1->ShotID).Value = 0xffffffff;
    FVar14 = this_01;
    if (this->_padding_ != 0) {
      pUVar9 = ULevelSequence::StaticClass();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
      if (bVar6) {
        FVar14 = (FFrameTime)this->_padding_;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar14 != (FFrameTime)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar14);
    }
    (param_1->ActiveShot).field0_0x0.DebugPtr = (ULevelSequence *)FVar14;
    this_00 = (UMovieScene *)(**(code **)(*(longlong *)this->_padding_ + 0x2f8))();
    local_100 = (FFrameRate)Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (FFrameRate)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_100);
    }
    pUVar10 = UMovieScene::FindTrack(this_00,(TSubclassOf<UMovieSceneTrack>)&local_100);
    if (pUVar10 != (UMovieSceneTrack *)0x0) {
      pUVar9 = Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
      iVar22 = (int)pUVar9->_padding_;
      if ((iVar22 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
          &pUVar9->_padding_)) {
        plVar11 = (longlong *)(**(code **)(pUVar10->_padding_ + 0x360))(pUVar10);
        pFVar20 = (FFrameTime *)*plVar11;
        lVar13 = plVar11[1];
        pFVar1 = pFVar20 + (int)lVar13;
        while( true ) {
          if ((int)plVar11[1] != (int)lVar13) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar20 == pFVar1) break;
          FVar14 = *pFVar20;
          if (FVar14 == (FFrameTime)0x0) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6225901768132263618>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequencePlayer.cpp"
                               ,0x13e,"Section");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
LAB_146c5cc8d:
            pFVar20 = pFVar20 + 1;
          }
          else {
            local_158._48_4_ = *(undefined4 *)((longlong)FVar14 + 0xb0);
            fStack_124 = *(float *)((longlong)FVar14 + 0xb4);
            iStack_11c = *(int *)((longlong)FVar14 + 0xbc);
            iStack_120 = *(int *)((longlong)FVar14 + 0xb8);
            if ((*(byte *)((longlong)FVar14 + 0xd8) & 1) == 0) goto LAB_146c5cc8d;
            local_158[0x10] = 1;
            local_158._20_4_ = local_118.FrameNumber.Value;
            cVar7 = (char)local_158._48_4_;
            cVar17 = cVar7;
            if (cVar7 == '\x02') {
              pfVar19 = &fStack_124;
            }
            else if ((int)fStack_124 < (int)local_158._20_4_) {
              pfVar19 = &fStack_124;
            }
            else if (((int)local_158._20_4_ < (int)fStack_124) || (cVar7 != '\x01')) {
              pfVar19 = (float *)(local_158 + 0x14);
              cVar17 = '\x01';
            }
            else {
              pfVar19 = &fStack_124;
            }
            if ((cVar17 != cVar7) || ((cVar17 != '\x02' && (*pfVar19 != fStack_124))))
            goto LAB_146c5cc8d;
            local_158[0x18] = 1;
            local_158._28_4_ = local_158._20_4_;
            cVar17 = (char)*(int *)((longlong)FVar14 + 0xb8);
            if (cVar17 == '\x02') {
              piVar23 = &iStack_11c;
              cVar18 = '\x02';
            }
            else if ((int)local_158._20_4_ < iStack_11c) {
              piVar23 = &iStack_11c;
              cVar18 = cVar17;
            }
            else if ((iStack_11c < (int)local_158._20_4_) || (cVar17 != '\x01')) {
              piVar23 = (int *)(local_158 + 0x1c);
              cVar18 = '\x01';
            }
            else {
              cVar18 = '\x01';
              piVar23 = &iStack_11c;
            }
            if ((cVar18 != cVar17) || ((cVar18 != '\x02' && (*piVar23 != iStack_11c))))
            goto LAB_146c5cc8d;
            if ((this_01 != (FFrameTime)0x0) &&
               (*(int *)((longlong)this_01 + 0xd0) <= *(int *)((longlong)FVar14 + 0xd0))) {
              if (*(int *)((longlong)FVar14 + 0xd0) == *(int *)((longlong)this_01 + 0xd0)) {
                local_158._32_4_ = local_158._48_4_;
                local_158._36_4_ = fStack_124;
                local_60 = *(int *)((longlong)this_01 + 0xb0);
                iStack_5c = *(int *)((longlong)this_01 + 0xb4);
                uStack_58 = *(undefined4 *)((longlong)this_01 + 0xb8);
                uStack_54 = *(undefined4 *)((longlong)this_01 + 0xbc);
                local_158._40_4_ = local_60;
                local_158._44_4_ = iStack_5c;
                if (cVar7 == '\x02') {
LAB_146c5cc3b:
                  pfVar19 = (float *)(local_158 + 0x2c);
                  iVar22 = local_60;
                }
                else {
                  iVar22 = local_158._48_4_;
                  if ((char)local_60 == '\x02') {
                    pfVar19 = (float *)(local_158 + 0x24);
                  }
                  else if (iStack_5c < (int)fStack_124) {
                    pfVar19 = (float *)(local_158 + 0x24);
                  }
                  else {
                    if (((int)fStack_124 < iStack_5c) || (cVar7 != '\0')) goto LAB_146c5cc3b;
                    pfVar19 = (float *)(local_158 + 0x24);
                  }
                }
                if (((char)iVar22 == cVar7) &&
                   (((char)iVar22 == '\x02' || (*pfVar19 == fStack_124)))) {
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
                if (bVar6) goto LAB_146c5cc5b;
              }
              goto LAB_146c5cc8d;
            }
LAB_146c5cc5b:
            pUVar9 = Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
            iVar22 = (int)pUVar9->_padding_;
            if ((*(int *)(*(longlong *)((longlong)FVar14 + 0x10) + 0x38) < iVar22) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)FVar14 + 0x10) + 0x30) +
                 (longlong)iVar22 * 8) != &pUVar9->_padding_)) {
              this_01.FrameNumber.Value = 0;
              this_01.SubFrame = 0.0;
              goto LAB_146c5cc8d;
            }
            pFVar20 = pFVar20 + 1;
            this_01 = FVar14;
          }
        }
        if (this_01 != (FFrameTime)0x0) {
          UMovieSceneSubSection::OuterToInnerTransform((UMovieSceneSubSection *)this_01,&local_a8);
          pUVar12 = UMovieSceneSubSection::GetSequence((UMovieSceneSubSection *)this_01);
          if (pUVar12 == (UMovieSceneSequence *)0x0) {
            FVar21 = (FFrameRate)this->_padding_;
            FVar24 = (FFrameRate)this->_padding_;
          }
          else {
            lVar13 = (**(code **)(pUVar12->_padding_ + 0x2f8))(pUVar12);
            FVar24 = *(FFrameRate *)(lVar13 + 0x138);
            lVar13 = (**(code **)(pUVar12->_padding_ + 0x2f8))(pUVar12);
            FVar21 = *(FFrameRate *)(lVar13 + 0x140);
          }
          FVar14 = ::operator*((FFrameTime)local_88,(FMovieSceneSequenceTransform *)local_118);
          ConvertFrameTime((FFrameTime)&local_f8,*(FFrameRate *)FVar14,FVar24);
          pFVar15 = UMovieSceneCinematicShotSection::GetShotDisplayName
                              ((UMovieSceneCinematicShotSection *)this_01,&local_80);
          pFVar2 = &param_1->CurrentShotName;
          if (pFVar2 != pFVar15) {
            pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (pFVar2->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (param_1->CurrentShotName).Data.ArrayNum = (pFVar15->Data).ArrayNum;
            (param_1->CurrentShotName).Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          local_d0 = local_f8;
          (param_1->CurrentShotLocalTime).Time = local_f8;
          (param_1->CurrentShotLocalTime).Rate = FVar21;
          FStack_c8 = FVar21;
          FVar8 = UMovieSceneSubSection::GetSequenceID((UMovieSceneSubSection *)this_01);
          (param_1->ShotID).Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
          pUVar16 = (ULevelSequence *)
                    UMovieSceneSubSection::GetSequence((UMovieSceneSubSection *)this_01);
          if (pUVar16 == (ULevelSequence *)0x0) {
LAB_146c5cde6:
            pUVar16 = (ULevelSequence *)0x0;
          }
          else {
            pUVar9 = ULevelSequence::StaticClass();
            iVar22 = (int)pUVar9->_padding_;
            if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar22) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
                &pUVar9->_padding_)) goto LAB_146c5cde6;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar16 != (ULevelSequence *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          (param_1->ActiveShot).field0_0x0.DebugPtr = pUVar16;
          local_b0 = 0;
          local_ac = 0;
          local_c0.DebugPtr = (ULevelSequence *)0x0;
          uStack_b8._0_4_ = 0;
          uStack_b8._4_4_ = 0;
          pFVar15 = FTimecode::ToString((FTimecode *)&local_c0.ObjectPtr,&local_70,false,false);
          pFVar2 = &param_1->SourceTimecode;
          if (pFVar2 != pFVar15) {
            pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (pFVar2->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (param_1->SourceTimecode).Data.ArrayNum = (pFVar15->Data).ArrayNum;
            (param_1->SourceTimecode).Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          DestructItems<FMovieSceneNestedSequenceTransform,int>
                    ((FMovieSceneNestedSequenceTransform *)
                     local_a8.NestedTransforms.AllocatorInstance.Data,
                     local_a8.NestedTransforms.ArrayNum);
          if ((FMovieSceneNestedSequenceTransform *)local_a8.NestedTransforms.AllocatorInstance.Data
              != (FMovieSceneNestedSequenceTransform *)0x0) {
            FMemory::Free(local_a8.NestedTransforms.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// UpdateMovieSceneInstance @ 146c5d340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULevelSequencePlayer::UpdateMovieSceneInstance
          (ULevelSequencePlayer *this,FMovieSceneEvaluationRange *param_1,Type param_2,
          FMovieSceneUpdateArgs *param_3)

{
  TOptional<FLevelSequencePlayerSnapshot> *this_00;
  void *pvVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  ulonglong _Size;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_1158 [32];
  undefined4 local_1138;
  undefined4 uStack_1134;
  undefined1 local_1128 [136];
  void *local_10a0;
  TObjectPtr<ULevelSequence>_u_0 local_1090;
  FMovieSceneSequenceID local_1088;
  FMovieSceneEvaluationRange local_1078;
  undefined1 auStack_104e [6];
  undefined4 local_1048;
  undefined1 local_1044 [4092];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1158;
  local_1078.EvaluationRange.LowerBound.Type.Value =
       (param_1->EvaluationRange).LowerBound.Type.Value;
  local_1078.EvaluationRange.LowerBound._1_3_ =
       *(undefined3 *)&(param_1->EvaluationRange).LowerBound.field_0x1;
  local_1078.EvaluationRange.LowerBound.Value.FrameNumber.Value =
       (param_1->EvaluationRange).LowerBound.Value.FrameNumber.Value;
  local_1078.EvaluationRange._8_8_ =
       *(undefined8 *)&(param_1->EvaluationRange).LowerBound.Value.SubFrame;
  local_1078.EvaluationRange.UpperBound.Value = (param_1->EvaluationRange).UpperBound.Value;
  local_1078.CurrentFrameRate = param_1->CurrentFrameRate;
  local_1078.Direction = param_1->Direction;
  local_1078.TimeOverride.Value = (param_1->TimeOverride).Value;
  UMovieSceneSequencePlayer::UpdateMovieSceneInstance
            ((UMovieSceneSequencePlayer *)this,&local_1078,param_2,param_3);
  FLevelSequencePlayerSnapshot::FLevelSequencePlayerSnapshot
            ((FLevelSequencePlayerSnapshot *)local_1128);
  TakeFrameSnapshot(this,(FLevelSequencePlayerSnapshot *)local_1128);
  if ((this->PreviousSnapshot).bIsSet != false) {
    iVar4 = (this->PreviousSnapshot).TypedValue.CurrentShotName.Data.ArrayNum;
    if (iVar4 == local_1128._56_4_) {
      if (iVar4 < 2) goto LAB_146c5d5b5;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         (this->PreviousSnapshot).TypedValue.CurrentShotName.Data.AllocatorInstance.
                         Data,(wchar_t *)local_1128._48_8_);
      bVar11 = iVar4 == 0;
    }
    else {
      bVar11 = iVar4 + local_1128._56_4_ == 1;
    }
    if (bVar11) goto LAB_146c5d5b5;
  }
  FCsvProfiler::RecordEventfInternal(0,L"%s");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint190 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint190,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequencePlayer.cpp"
                 ,0xbe,L"%s");
      __BookmarkPoint190 = true;
    }
    pFVar9 = (FScriptContainerElement *)L"";
    if (local_1128._56_4_ != 0) {
      pFVar9 = (FScriptContainerElement *)local_1128._48_8_;
    }
    uVar3 = CallstackTrace_GetCurrentId();
    if (pFVar9 == (FScriptContainerElement *)0x0) {
      uVar10 = 4;
      local_1048 = 0xc201;
      puVar8 = local_1044;
    }
    else {
      sVar6 = wcslen((wchar_t *)pFVar9);
      iVar4 = (int)sVar6 * 2 + 2;
      if (0xffff < iVar4) {
        iVar4 = 0xffff;
      }
      uVar10 = (longlong)iVar4 + 2;
      if (0x1000 < uVar10) goto LAB_146c5d5b5;
      local_1048 = CONCAT22(local_1048._2_2_,0xc201);
      sVar6 = wcslen((wchar_t *)pFVar9);
      uVar5 = (int)sVar6 * 2 + 2;
      uVar7 = (ulonglong)uVar5;
      if (0xffff < (int)uVar5) {
        uVar7 = 0xffff;
      }
      _Size = uVar7 & 0xffff;
      memcpy((void *)((longlong)&local_1048 + 2),pFVar9,_Size);
      if ((short)uVar7 == -1) {
        local_1138 = 0x2e002e;
        uStack_1134 = 0x2e;
        *(undefined8 *)(auStack_104e + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
      }
      puVar8 = local_1044 + (_Size - 2);
    }
    if (((longlong)puVar8 - (longlong)&local_1048 != uVar10) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PayloadBufferPtr - Buffer == FormatArgsSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                            ,0x44,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((ushort)uVar10 != 0) {
      FMiscTrace::OutputBookmarkInternal
                (&__BookmarkPoint190,uVar3,(ushort)uVar10,(uchar *)&local_1048);
    }
  }
LAB_146c5d5b5:
  this_00 = &this->PreviousSnapshot;
  if ((TOptional<FLevelSequencePlayerSnapshot> *)local_1128 != this_00) {
    if ((this->PreviousSnapshot).bIsSet != false) {
      pvVar1 = *(void **)&(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.
                          field_0x18;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      pFVar9 = (this->PreviousSnapshot).TypedValue.SourceTimecode.Data.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      pFVar9 = (this->PreviousSnapshot).TypedValue.CurrentShotName.Data.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      pFVar9 = (this_00->TypedValue).RootName.Data.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
    }
    ::FString::FString((FString *)this_00,(FString *)local_1128);
    (this->PreviousSnapshot).TypedValue.RootTime.Time.FrameNumber = (FFrameNumber)local_1128._16_4_;
    (this->PreviousSnapshot).TypedValue.RootTime.Time.SubFrame = (float)local_1128._20_4_;
    (this->PreviousSnapshot).TypedValue.RootTime.Rate.Numerator = local_1128._24_4_;
    (this->PreviousSnapshot).TypedValue.RootTime.Rate.Denominator = local_1128._28_4_;
    (this->PreviousSnapshot).TypedValue.SourceTime.Time.FrameNumber =
         (FFrameNumber)local_1128._32_4_;
    (this->PreviousSnapshot).TypedValue.SourceTime.Time.SubFrame = (float)local_1128._36_4_;
    (this->PreviousSnapshot).TypedValue.SourceTime.Rate.Numerator = local_1128._40_4_;
    (this->PreviousSnapshot).TypedValue.SourceTime.Rate.Denominator = local_1128._44_4_;
    ::FString::FString(&(this->PreviousSnapshot).TypedValue.CurrentShotName,
                       (FString *)(local_1128 + 0x30));
    (this->PreviousSnapshot).TypedValue.CurrentShotLocalTime.Time.FrameNumber =
         (FFrameNumber)local_1128._64_4_;
    (this->PreviousSnapshot).TypedValue.CurrentShotLocalTime.Time.SubFrame =
         (float)local_1128._68_4_;
    (this->PreviousSnapshot).TypedValue.CurrentShotLocalTime.Rate.Numerator = local_1128._72_4_;
    (this->PreviousSnapshot).TypedValue.CurrentShotLocalTime.Rate.Denominator = local_1128._76_4_;
    (this->PreviousSnapshot).TypedValue.CurrentShotSourceTime.Time.FrameNumber =
         (FFrameNumber)local_1128._80_4_;
    (this->PreviousSnapshot).TypedValue.CurrentShotSourceTime.Time.SubFrame =
         (float)local_1128._84_4_;
    (this->PreviousSnapshot).TypedValue.CurrentShotSourceTime.Rate.Numerator = local_1128._88_4_;
    (this->PreviousSnapshot).TypedValue.CurrentShotSourceTime.Rate.Denominator = local_1128._92_4_;
    ::FString::FString(&(this->PreviousSnapshot).TypedValue.SourceTimecode,
                       (FString *)(local_1128 + 0x60));
    *(undefined8 *)&(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr =
         local_1128._112_8_;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)
               &(this->PreviousSnapshot).TypedValue.CameraComponent.SoftObjectPtr.field_0x8,
               (FSoftObjectPath *)(local_1128 + 0x78));
    (this->PreviousSnapshot).TypedValue.ActiveShot.field0_0x0.DebugPtr =
         (ULevelSequence *)local_1090;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1090.DebugPtr != (ULevelSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1090.DebugPtr);
    }
    (this->PreviousSnapshot).TypedValue.ShotID.Value = local_1088.Value;
    (this->PreviousSnapshot).bIsSet = true;
  }
  if (local_10a0 != (void *)0x0) {
    FMemory::Free(local_10a0);
  }
  if ((FScriptContainerElement *)local_1128._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1128._96_8_);
  }
  if ((FScriptContainerElement *)local_1128._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1128._48_8_);
  }
  if ((FScriptContainerElement *)local_1128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1128._0_8_);
  }
  return;
}

// execCreateLevelSequencePlayer @ 146c5e9d0

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
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
ULevelSequencePlayer::execCreateLevelSequencePlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UMovieSceneSequencePlayer *this;
  ULevelSequencePlayer *pUVar4;
  longlong lVar5;
  longlong lVar6;
  ULevelSequence *pUVar7;
  bool bVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  AActor *pAVar11;
  FString *pFVar12;
  ULevel *pUVar13;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  AActor *pAVar17;
  wchar_t *pwVar18;
  AActor *this_01;
  ulonglong *puVar19;
  undefined1 auStackY_1d8 [32];
  ulonglong local_1a8;
  ULevelSequence *local_1a0;
  UObject *local_198;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined2 local_180;
  undefined2 uStack_17e;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_168;
  FMovieSceneSequencePlaybackSettings local_158;
  FString local_128;
  undefined1 local_118 [112];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pAVar17 = (AActor *)0x0;
  local_1a8 = local_1a8 & 0xffffffff00000000;
  local_198 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_1a0 = (ULevelSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_190 = local_190 & 0xfffffffe;
  uStack_174 = uStack_174 & 0xffffffc0;
  uStack_16c = uStack_16c & 0xfffffffa | 2;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  local_180 = 0x100;
  uStack_17c = 0x3f800000;
  uStack_178 = 0;
  local_170 = local_170 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_1a8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  pUVar7 = local_1a0;
  puVar19 = &local_1a8;
  if ((ulonglong *)param_2->MostRecentPropertyAddress != (ulonglong *)0x0) {
    puVar19 = (ulonglong *)param_2->MostRecentPropertyAddress;
  }
  local_158._0_8_ = CONCAT44(uStack_18c,local_190);
  local_158.TickInterval.TickIntervalSeconds = (float)uStack_188;
  local_158.TickInterval.EvaluationBudgetMicroseconds = (float)uStack_184;
  local_158.TickInterval.bTickWhenPaused = (bool)(char)local_180;
  local_158.TickInterval.bAllowRounding = (bool)(char)((ushort)local_180 >> 8);
  local_158.TickInterval._10_2_ = uStack_17e;
  local_158.PlayRate = (float)uStack_17c;
  local_158._24_8_ = CONCAT44(uStack_174,uStack_178);
  local_158._32_8_ = CONCAT44(uStack_16c,local_170);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_1a0 == (ULevelSequence *)0x0) ||
      (pUVar9 = UEngine::GetWorldFromContextObject(GEngine,local_198,LogAndReturnNull),
      pUVar9 == (UWorld *)0x0)) || (pUVar9->bIsTearingDown != '\0')) goto LAB_146c5ede1;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_118);
  local_118._52_4_ = local_118._52_4_ | RF_Transient;
  local_118[0x32] = local_118[0x32] | 0xc;
  local_118[0x30] = AlwaysSpawn;
  pUVar10 = ALevelSequenceActor::StaticClass();
  pAVar11 = UWorld::SpawnActor(pUVar9,pUVar10,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                               (FActorSpawnParameters *)local_118);
  this_01 = pAVar17;
  if (pAVar11 != (AActor *)0x0) {
    pUVar10 = ALevelSequenceActor::StaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar2) ||
       (this_01 = pAVar11,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar2 * 8)
       != &pUVar10->_padding_)) {
      pFVar12 = GetTypeName<ALevelSequenceActor>((FString *)&local_168);
      pwVar16 = L"";
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = GetFullNameForCastLogError<AActor>(&local_128,pAVar11);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar16,pwVar18);
    }
  }
  this = (UMovieSceneSequencePlayer *)this_01[1].PrimaryActorTick._padding_;
  this_01[1]._padding_ = local_158._0_8_;
  this_01[1]._padding_ = local_158.TickInterval._0_8_;
  this_01[1].PrimaryActorTick._padding_ = local_158._16_8_;
  this_01[1].PrimaryActorTick._padding_ = local_158._24_8_;
  this_01[1].PrimaryActorTick._padding_ = local_158._32_8_;
  UMovieSceneSequencePlayer::SetPlaybackSettings(this,&local_158);
  bVar8 = UMovieSceneSequencePlayer::IsPlaying
                    ((UMovieSceneSequencePlayer *)this_01[1].PrimaryActorTick._padding_);
  if (!bVar8) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    this_01[1].PrimaryActorTick._padding_ = (longlong)pUVar7;
    pUVar4 = (ULevelSequencePlayer *)this_01[1].PrimaryActorTick._padding_;
    pUVar13 = AActor::GetLevel(this_01);
    Initialize(pUVar4,pUVar7,pUVar13,
               (FLevelSequenceCameraSettings *)&this_01[1].PrimaryActorTick.Target);
  }
  if (this_01[1].PrimaryActorTick._padding_ != 0) {
    pUVar9 = AActor::GetWorld(this_01);
    bVar8 = UWorld::IsGameWorld(pUVar9);
    if (bVar8) {
      lVar5 = this_01[1].PrimaryActorTick._padding_;
      lVar6 = this_01[1].PrimaryActorTick._padding_;
      if (lVar6 == 0) {
        bVar8 = *(longlong *)(lVar5 + 0x2d0) == 0;
      }
      else {
        bVar8 = lVar6 == *(longlong *)(lVar5 + 0x2d0);
      }
      if (bVar8) {
        this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
                  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
        pAVar17 = (AActor *)&DAT_00000001;
        pTVar14 = FMovieSceneRootEvaluationTemplateInstance::GetRunner(this_00,&local_168);
        if (pTVar14->Object == (FMovieSceneEntitySystemRunner *)0x0) goto LAB_146c5ed1a;
        bVar8 = false;
      }
      else {
LAB_146c5ed1a:
        bVar8 = true;
      }
      if (pAVar17 != (AActor *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
      }
      if (bVar8) {
        pUVar4 = (ULevelSequencePlayer *)this_01[1].PrimaryActorTick._padding_;
        pUVar13 = AActor::GetLevel(this_01);
        Initialize(pUVar4,(ULevelSequence *)this_01[1].PrimaryActorTick._padding_,pUVar13,
                   (FLevelSequenceCameraSettings *)&this_01[1].PrimaryActorTick.Target);
      }
    }
  }
  *puVar19 = (ulonglong)this_01;
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  AActor::FinishSpawning
            (this_01,&local_a8,false,(FComponentInstanceDataCache *)0x0,OverrideRootScale);
  pAVar17 = (AActor *)this_01[1].PrimaryActorTick._padding_;
  if (local_118._64_8_ != 0) {
    plVar15 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_146c5ede1:
  *(AActor **)param_3 = pAVar17;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)*puVar19 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*puVar19);
  }
  return;
}

// execGetActiveCameraComponent @ 146c5f240

void __cdecl
ULevelSequencePlayer::execGetActiveCameraComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x1f].field_0x14);
  *(UObject **)param_3 = pUVar1;
  return;
}

