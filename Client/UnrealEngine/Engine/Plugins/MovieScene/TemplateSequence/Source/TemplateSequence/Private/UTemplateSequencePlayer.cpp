// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 10

// StaticClass @ 14ac63e30

UClass * __cdecl UTemplateSequencePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePlayer",
               &Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton,
               StaticRegisterNativesUTemplateSequencePlayer,0x4b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTemplateSequencePlayer>,
               InternalVTableHelperCtorCaller<UTemplateSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton;
}

// UTemplateSequencePlayer @ 14ac70700

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePlayer * __thiscall
UTemplateSequencePlayer::UTemplateSequencePlayer
          (UTemplateSequencePlayer *this,FVTableHelper *param_1)

{
  UMovieSceneSequencePlayer::UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UTemplateSequencePlayer @ 14ac70750

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePlayer * __thiscall
UTemplateSequencePlayer::UTemplateSequencePlayer
          (UTemplateSequencePlayer *this,FObjectInitializer *param_1)

{
  UMovieSceneSequencePlayer::UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UTemplateSequencePlayer @ 14ac716f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTemplateSequencePlayer::~UTemplateSequencePlayer(UTemplateSequencePlayer *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  UMovieSceneSequencePlayer::~UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this);
  return;
}

// CreateTemplateSequencePlayer @ 14ac745f0

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

UTemplateSequencePlayer * __cdecl
UTemplateSequencePlayer::CreateTemplateSequencePlayer
          (UObject *param_1,UTemplateSequence *param_2,FMovieSceneSequencePlaybackSettings *param_3,
          ATemplateSequenceActor **param_4)

{
  FUtf8String *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FMovieSceneSequenceLoopCount FVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  EMovieSceneCompletionModeOverride EVar10;
  undefined7 uVar11;
  UWorld *this;
  UClass *pUVar12;
  ATemplateSequenceActor *pAVar13;
  FString *pFVar14;
  UTemplateSequencePlayer *pUVar15;
  longlong *plVar16;
  ATemplateSequenceActor *this_00;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  undefined1 auStackY_178 [32];
  FSoftObjectPath local_148;
  FString local_128;
  FString local_118;
  undefined1 local_108 [112];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_2 == (UTemplateSequence *)0x0) ||
     (this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
     this == (UWorld *)0x0)) {
    pUVar15 = (UTemplateSequencePlayer *)0x0;
  }
  else {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_108);
    local_108._52_4_ = local_108._52_4_ | RF_Transient;
    local_108[0x32] = local_108[0x32] | 0xc;
    local_108[0x30] = AlwaysSpawn;
    pUVar12 = ATemplateSequenceActor::StaticClass();
    pAVar13 = (ATemplateSequenceActor *)
              UWorld::SpawnActor(this,pUVar12,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                 (FActorSpawnParameters *)local_108);
    this_00 = (ATemplateSequenceActor *)0x0;
    if (pAVar13 != (ATemplateSequenceActor *)0x0) {
      pUVar12 = ATemplateSequenceActor::StaticClass();
      iVar2 = (int)pUVar12->_padding_;
      if ((*(int *)(pAVar13->_padding_ + 0x38) < iVar2) ||
         (this_00 = pAVar13,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar12->_padding_)) {
        pFVar14 = GetTypeName<ATemplateSequenceActor>(&local_128);
        pwVar17 = L"";
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        pFVar14 = GetFullNameForCastLogError<AActor>(&local_118,(AActor *)pAVar13);
        if ((pFVar14->Data).ArrayNum != 0) {
          pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar17,pwVar18);
      }
    }
    FVar5.Value = (param_3->LoopCount).Value;
    fVar6 = (param_3->TickInterval).TickIntervalSeconds;
    fVar7 = (param_3->TickInterval).EvaluationBudgetMicroseconds;
    uVar4 = *(undefined8 *)&(param_3->TickInterval).bTickWhenPaused;
    fVar8 = param_3->StartTime;
    uVar9 = *(undefined4 *)&param_3->field_0x1c;
    local_148.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_148.AssetPath.PackageName.Number = 0;
    *(undefined4 *)&(this_00->PlaybackSettings).field_0x0 = *(undefined4 *)&param_3->field_0x0;
    (this_00->PlaybackSettings).LoopCount = (FMovieSceneSequenceLoopCount)FVar5.Value;
    (this_00->PlaybackSettings).TickInterval.TickIntervalSeconds = fVar6;
    (this_00->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = fVar7;
    local_148.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_148.AssetPath.AssetName.Number = 0;
    EVar10 = param_3->FinishCompletionStateOverride;
    uVar11 = *(undefined7 *)&param_3->field_0x21;
    *(undefined8 *)&(this_00->PlaybackSettings).TickInterval.bTickWhenPaused = uVar4;
    (this_00->PlaybackSettings).StartTime = fVar8;
    *(undefined4 *)&(this_00->PlaybackSettings).field_0x1c = uVar9;
    local_148.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->PlaybackSettings).FinishCompletionStateOverride = EVar10;
    *(undefined7 *)&(this_00->PlaybackSettings).field_0x21 = uVar11;
    local_148.SubPathString.Data.ArrayNum = 0;
    local_148.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_148,(UObject *)param_2);
    pFVar1 = &(this_00->TemplateSequence).SubPathString;
    (this_00->TemplateSequence).AssetPath.PackageName = local_148.AssetPath.PackageName;
    (this_00->TemplateSequence).AssetPath.AssetName = local_148.AssetPath.AssetName;
    if (pFVar1 != &local_148.SubPathString) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_148.SubPathString.Data.AllocatorInstance.Data;
      (this_00->TemplateSequence).SubPathString.Data.ArrayNum =
           local_148.SubPathString.Data.ArrayNum;
      (this_00->TemplateSequence).SubPathString.Data.ArrayMax =
           local_148.SubPathString.Data.ArrayMax;
      local_148.SubPathString.Data.ArrayNum = 0;
      local_148.SubPathString.Data.ArrayMax = 0;
      local_148.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_148.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.SubPathString.Data.AllocatorInstance.Data);
    }
    ATemplateSequenceActor::InitializePlayer(this_00);
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
    pUVar15 = (this_00->SequencePlayer).field0_0x0.DebugPtr;
    if (local_108._64_8_ != 0) {
      plVar16 = (longlong *)(local_108 + 0x50);
      if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_108._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  return pUVar15;
}

// GetPlaybackContext @ 14ac77560

UObject * __thiscall UTemplateSequencePlayer::GetPlaybackContext(UTemplateSequencePlayer *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  return pUVar1;
}

// GetPrivateStaticClass @ 14ac77ef0

UClass * __cdecl UTemplateSequencePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePlayer",
               &Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton,
               StaticRegisterNativesUTemplateSequencePlayer,0x4b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTemplateSequencePlayer>,
               InternalVTableHelperCtorCaller<UTemplateSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton;
}

// Initialize @ 14ac79c30

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
UTemplateSequencePlayer::Initialize
          (UTemplateSequencePlayer *this,UMovieSceneSequence *param_1,UWorld *param_2,
          FMovieSceneSequencePlaybackSettings *param_3)

{
  code *pcVar1;
  bool bVar2;
  FLevelSequenceSpawnRegister *this_00;
  TRawPtrProxy<FTemplateSequenceSpawnRegister> local_res8;
  UWorld *local_res18;
  
  this_00 = ::operator_new(0x80);
  if (this_00 == (FLevelSequenceSpawnRegister *)0x0) {
    this_00 = (FLevelSequenceSpawnRegister *)0x0;
  }
  else {
    FLevelSequenceSpawnRegister::FLevelSequenceSpawnRegister(this_00);
    this_00->_padding_ = (longlong)&___7FTemplateSequenceSpawnRegister__6B_;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res8.Object = (FTemplateSequenceSpawnRegister *)this_00;
  TSharedPtr<FMovieSceneSpawnRegister,1>::operator=<FTemplateSequenceSpawnRegister>
            ((TSharedPtr<FMovieSceneSpawnRegister,1> *)&this->_padding_,&local_res8);
  local_res18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res18);
  UMovieSceneSequencePlayer::Initialize((UMovieSceneSequencePlayer *)this,param_1,param_3);
  return;
}

// StaticRegisterNativesUTemplateSequencePlayer @ 14ac80550

void __cdecl UTemplateSequencePlayer::StaticRegisterNativesUTemplateSequencePlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UTemplateSequencePlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateTemplateSequencePlayer @ 14ac82610

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

void __cdecl
UTemplateSequencePlayer::execCreateTemplateSequencePlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  UObject *pUVar9;
  UWorld *this;
  UClass *pUVar10;
  UTemplateSequencePlayer *pUVar11;
  FString *pFVar12;
  longlong *plVar13;
  UTemplateSequencePlayer *this_00;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  TObjectPtr<UTemplateSequencePlayer>_u_0 *pTVar16;
  undefined1 auStackY_1e8 [32];
  FSoftObjectPath local_1b8;
  TObjectPtr<UTemplateSequencePlayer>_u_0 local_198;
  UObject *local_190;
  UObject *local_188;
  uint local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined2 local_170;
  undefined2 uStack_16e;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  FString local_158;
  FString local_148;
  undefined1 local_138 [112];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = (UTemplateSequencePlayer *)0x0;
  local_188 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_190 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_180 = local_180 & 0xfffffffe;
  uStack_164 = uStack_164 & 0xffffffc0;
  uStack_15c = uStack_15c & 0xfffffffa | 2;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  local_170 = 0x100;
  uStack_16c = 0x3f800000;
  uStack_168 = 0;
  local_160 = local_160 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_198.DebugPtr = (UTemplateSequencePlayer *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  pUVar9 = local_190;
  lVar4 = CONCAT44(uStack_17c,local_180);
  lVar5 = CONCAT44(uStack_174,uStack_178);
  pTVar16 = &local_198;
  if ((TObjectPtr<UTemplateSequencePlayer>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UTemplateSequencePlayer>_u_0 *)0x0) {
    pTVar16 = (TObjectPtr<UTemplateSequencePlayer>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  lVar6 = CONCAT44(uStack_16c,CONCAT22(uStack_16e,local_170));
  lVar7 = CONCAT44(uStack_164,uStack_168);
  lVar8 = CONCAT44(uStack_15c,local_160);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_190 != (UObject *)0x0) &&
     (this = UEngine::GetWorldFromContextObject(GEngine,local_188,LogAndReturnNull),
     this != (UWorld *)0x0)) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_138);
    local_138._52_4_ = local_138._52_4_ | RF_Transient;
    local_138[0x32] = local_138[0x32] | 0xc;
    local_138[0x30] = AlwaysSpawn;
    pUVar10 = ATemplateSequenceActor::StaticClass();
    pUVar11 = (UTemplateSequencePlayer *)
              UWorld::SpawnActor(this,pUVar10,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                 (FActorSpawnParameters *)local_138);
    if (pUVar11 != (UTemplateSequencePlayer *)0x0) {
      pUVar10 = ATemplateSequenceActor::StaticClass();
      iVar2 = (int)pUVar10->_padding_;
      if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar2) ||
         (this_00 = pUVar11,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar10->_padding_)) {
        pFVar12 = GetTypeName<ATemplateSequenceActor>(&local_158);
        pwVar14 = L"";
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<AActor>(&local_148,(AActor *)pUVar11);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar14,pwVar15);
      }
    }
    this_00->_padding_ = lVar4;
    this_00->_padding_ = lVar5;
    this_00->_padding_ = lVar6;
    this_00->_padding_ = lVar7;
    local_1b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1b8.AssetPath.PackageName.Number = 0;
    this_00->_padding_ = lVar8;
    local_1b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1b8.AssetPath.AssetName.Number = 0;
    local_1b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.SubPathString.Data.ArrayNum = 0;
    local_1b8.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_1b8,pUVar9);
    plVar13 = &this_00->_padding_;
    this_00->_padding_ = (longlong)local_1b8.AssetPath.PackageName;
    this_00->_padding_ = (longlong)local_1b8.AssetPath.AssetName;
    if ((FUtf8String *)plVar13 != &local_1b8.SubPathString) {
      if ((void *)*plVar13 != (void *)0x0) {
        FMemory::Free((void *)*plVar13);
      }
      *plVar13 = (longlong)local_1b8.SubPathString.Data.AllocatorInstance.Data;
      *(int *)&this_00->_padding_ = local_1b8.SubPathString.Data.ArrayNum;
      *(int *)((longlong)&this_00->_padding_ + 4) = local_1b8.SubPathString.Data.ArrayMax;
      local_1b8.SubPathString.Data.ArrayNum = 0;
      local_1b8.SubPathString.Data.ArrayMax = 0;
      local_1b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
    }
    ATemplateSequenceActor::InitializePlayer((ATemplateSequenceActor *)this_00);
    pTVar16->DebugPtr = this_00;
    local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_c8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_c8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    AActor::FinishSpawning
              ((AActor *)this_00,&local_c8,false,(FComponentInstanceDataCache *)0x0,
               OverrideRootScale);
    this_00 = (UTemplateSequencePlayer *)this_00->_padding_;
    if (local_138._64_8_ != 0) {
      plVar13 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  *(UTemplateSequencePlayer **)param_3 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pTVar16->DebugPtr != (UTemplateSequencePlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pTVar16->DebugPtr);
  }
  return;
}

