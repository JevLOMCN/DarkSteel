// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 146881b70

UClass * __cdecl UWeightAndEasingEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"WeightAndEasingEvaluatorSystem",
               &Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUWeightAndEasingEvaluatorSystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeightAndEasingEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UWeightAndEasingEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton;
}

// UWeightAndEasingEvaluatorSystem @ 14689f770

/* WARNING: Enum "Type": Some values do not have unique names */

UWeightAndEasingEvaluatorSystem * __thiscall
UWeightAndEasingEvaluatorSystem::UWeightAndEasingEvaluatorSystem
          (UWeightAndEasingEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UWeightAndEasingEvaluatorSystem__6B_;
  (this->PreAllocatedComputationData).Channels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreAllocatedComputationData).Channels.ArrayNum = 0;
  (this->PreAllocatedComputationData).Channels.ArrayMax = 0;
  (this->PreAllocatedComputationData).BlendTargetStartIndex = -1;
  return this;
}

// UWeightAndEasingEvaluatorSystem @ 14689f7b0

/* WARNING: Enum "Type": Some values do not have unique names */

UWeightAndEasingEvaluatorSystem * __thiscall
UWeightAndEasingEvaluatorSystem::UWeightAndEasingEvaluatorSystem
          (UWeightAndEasingEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&___7UWeightAndEasingEvaluatorSystem__6B_;
  (this->PreAllocatedComputationData).Channels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreAllocatedComputationData).Channels.ArrayNum = 0;
  (this->PreAllocatedComputationData).Channels.ArrayMax = 0;
  (this->PreAllocatedComputationData).BlendTargetStartIndex = -1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->WeightResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->EasingResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->WeightAndEasingResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UWeightAndEasingEvaluatorSystem @ 1468a1240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWeightAndEasingEvaluatorSystem::~UWeightAndEasingEvaluatorSystem
          (UWeightAndEasingEvaluatorSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWeightAndEasingEvaluatorSystem__6B_;
  pFVar1 = (this->PreAllocatedComputationData).Channels.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetComputationBuffer @ 1468b5a80

FHierarchicalEasingChannelBuffer * __thiscall
UWeightAndEasingEvaluatorSystem::GetComputationBuffer(UWeightAndEasingEvaluatorSystem *this)

{
  return &this->PreAllocatedComputationData;
}

// GetPrivateStaticClass @ 1468b8c30

UClass * __cdecl UWeightAndEasingEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"WeightAndEasingEvaluatorSystem",
               &Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUWeightAndEasingEvaluatorSystem,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeightAndEasingEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UWeightAndEasingEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.InnerSingleton;
}

// IsRelevantImpl @ 1468bca00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWeightAndEasingEvaluatorSystem::IsRelevantImpl
          (UWeightAndEasingEvaluatorSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  TComponentTypeID<double> TVar1;
  FBuiltInComponentTypes *pFVar2;
  FComponentMask *pFVar3;
  TComponentTypeID<double> *pTVar4;
  TComponentTypeID<double> local_18;
  TComponentTypeID<double> local_16 [7];
  
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_18 = pFVar2->WeightAndEasingResult;
  pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  pTVar4 = &local_18;
  while( true ) {
    TVar1 = *pTVar4;
    if (((TVar1 != (TComponentTypeID<double>)0xffff) &&
        ((int)(uint)(ushort)TVar1 < (pFVar3->Bits).NumBits)) &&
       ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[(ushort)TVar1 >> 5].Pad >>
         ((ushort)TVar1 & 0x1f) & 1) != 0)) break;
    pTVar4 = pTVar4 + 1;
    if (pTVar4 == local_16) {
      return false;
    }
  }
  return true;
}

// OnLink @ 1468c0e30

void __thiscall UWeightAndEasingEvaluatorSystem::OnLink(UWeightAndEasingEvaluatorSystem *this)

{
  int *piVar1;
  
  piVar1 = &(this->PreAllocatedComputationData).Channels.ArrayMax;
  (this->PreAllocatedComputationData).Channels.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->PreAllocatedComputationData,0,piVar1);
  }
  (this->PreAllocatedComputationData).BlendTargetStartIndex = -1;
  return;
}

// OnRun @ 1468c2840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWeightAndEasingEvaluatorSystem::OnRun
          (UWeightAndEasingEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask> FVar9;
  FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask> FVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar12;
  undefined1 auStackY_688 [32];
  FComponentTypeID local_628;
  FComponentTypeID local_626;
  FComponentTypeID local_624;
  FComponentTypeID local_622;
  undefined1 local_620 [8];
  undefined1 local_618 [8];
  undefined1 local_610 [8];
  undefined1 local_608 [16];
  undefined1 local_5f8 [32];
  byte local_5d8;
  uchar auStack_5d7 [7];
  undefined8 uStack_5d0;
  ForElementType<unsigned_int> local_5c0;
  TStatIdData *pTStack_5b8;
  byte local_5b0;
  undefined7 uStack_5af;
  undefined1 auStack_5a8 [24];
  TStatIdData *pTStack_590;
  byte local_588;
  undefined7 uStack_587;
  undefined1 auStack_580 [16];
  undefined1 local_570 [16];
  byte local_560;
  undefined7 uStack_55f;
  undefined4 uStack_558;
  uint uStack_554;
  undefined1 local_548 [16];
  byte local_538;
  undefined7 uStack_537;
  undefined4 uStack_530;
  uint uStack_52c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_528;
  initializer_list<UE::MovieScene::FComponentTypeID> local_518;
  TComponentTypeID<FFrameTime> local_508;
  TComponentTypeID<FEasingComponentData> local_506;
  TComponentTypeID<double> local_504;
  undefined1 local_500 [16];
  ulonglong local_4f0;
  undefined1 auStack_4e8 [10];
  TComponentTypeID<unsigned_short> TStack_4de;
  undefined4 uStack_4dc;
  undefined1 auStack_4d8 [16];
  ulonglong uStack_4c8;
  undefined1 auStack_4c0 [10];
  TComponentTypeID<double> TStack_4b6;
  undefined4 uStack_4b4;
  undefined1 auStack_4b0 [16];
  ulonglong uStack_4a0;
  undefined8 uStack_498;
  FName local_490;
  FName local_488;
  FName local_480;
  FName local_478;
  FName local_470;
  TComponentTypeID<double> local_468;
  undefined8 local_460;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask> FStack_458;
  ulonglong local_450;
  TTypeCompatibleBytes<unsigned_int> aTStack_448 [2];
  TComponentTypeID<double> local_440;
  uchar auStack_43e [2];
  TComponentTypeID<double> TStack_43c;
  uchar auStack_43a [2];
  undefined1 local_438 [16];
  undefined8 local_428;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask> FStack_420;
  ulonglong local_418;
  TTypeCompatibleBytes<unsigned_int> aTStack_410 [2];
  FSystemTaskPrerequisites local_408;
  FSystemTaskPrerequisites local_388;
  FSystemTaskPrerequisites local_308;
  undefined1 local_288 [8];
  undefined8 uStack_280;
  FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask> local_278;
  ulonglong uStack_270;
  undefined1 local_268 [8];
  FEntityComponentFilter local_260;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_174;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask> local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_688;
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  if (*(longlong *)(this->_padding_ + 0x580) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar3 = local_5d8 & 0xe0;
  local_5f8._24_8_ = &TStatId::TStatId_NAME_None;
  local_468 = pFVar7->WeightAndEasingResult;
  uStack_5d0._0_4_ = 0x6ff;
  local_5f8._16_8_ = 0;
  uStack_5d0._4_4_ = uStack_5d0._4_4_ & 0xffffff00;
  local_450 = CONCAT71(auStack_5d7,local_5d8) & 0xffffffffffffffe0;
  aTStack_448[1].Pad[0] = uStack_5d0._4_1_;
  aTStack_448[1].Pad[1] = uStack_5d0._5_1_;
  aTStack_448[1].Pad[2] = uStack_5d0._6_1_;
  aTStack_448[1].Pad[3] = uStack_5d0._7_1_;
  aTStack_448[0].Pad[0] = 0xff;
  aTStack_448[0].Pad[1] = '\x06';
  aTStack_448[0].Pad[2] = '\0';
  aTStack_448[0].Pad[3] = '\0';
  local_460._0_1_ = '\0';
  local_460._1_1_ = '\0';
  local_460._2_1_ = '\0';
  local_460._3_1_ = '\0';
  local_460._4_1_ = '\0';
  local_460._5_1_ = '\0';
  local_460._6_1_ = '\0';
  local_460._7_1_ = '\0';
  FStack_458 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
               &TStatId::TStatId_NAME_None;
  FVar9 = StatPtr_MovieSceneEval_EvaluateEasingTask;
  local_5d8 = bVar3;
  if (StatPtr_MovieSceneEval_EvaluateEasingTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)0x0) {
    pFVar8 = ::FName::FName(&local_490,"MovieSceneEval_EvaluateEasingTask");
    FVar9 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateEasingTask,
                       *pFVar8,L"Weights: Evaluate easing","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  FStack_458 = FVar9;
  UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::
  Dispatch_PerEntity<UE::MovieScene::FResetFinalWeightResults>
            ((TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_> *)&local_468,
             (FEntityManager *)local_608,(FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
             (FSystemSubsequentTasks *)param_1);
  UE::MovieScene::FSystemTaskPrerequisites::FSystemTaskPrerequisites(&local_408,param_1);
  UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
            (&local_408,(FComponentTypeID)*(ushort *)&pFVar7->WeightAndEasingResult,
             (TRefCountPtr<FBaseGraphTask> *)local_608);
  bVar3 = local_5b0 & 0xe0;
  pTStack_5b8 = &TStatId::TStatId_NAME_None;
  local_508 = pFVar7->EvalTime;
  local_506 = pFVar7->Easing;
  local_504 = pFVar7->EasingResult;
  local_5c0 = (ForElementType<unsigned_int>)0x0;
  auStack_5a8._0_4_ = 0x6ff;
  auStack_5a8._4_4_ = auStack_5a8._4_4_ & 0xffffff00;
  local_4f0 = CONCAT71(uStack_5af,local_5b0) & 0xffffffffffffffe0;
  auStack_4e8._4_4_ = auStack_5a8._4_4_;
  auStack_4e8._0_4_ = 0x6ff;
  local_500._0_8_ = 0;
  local_500._8_8_ = &TStatId::TStatId_NAME_None;
  FVar9 = StatPtr_MovieSceneEval_EvaluateEasingTask;
  local_5b0 = bVar3;
  if (StatPtr_MovieSceneEval_EvaluateEasingTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)0x0) {
    pFVar8 = ::FName::FName(&local_488,"MovieSceneEval_EvaluateEasingTask");
    FVar9 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateEasingTask,
                       *pFVar8,L"Weights: Evaluate easing","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  local_500._8_8_ = FVar9;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
  ::Dispatch_PerEntity<UE::MovieScene::FEvaluateEasings>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
              *)&local_508,(FEntityManager *)local_620,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
             (FSystemSubsequentTasks *)&local_408);
  UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
            (&local_408,(FComponentTypeID)*(ushort *)&pFVar7->EasingResult,
             (TRefCountPtr<FBaseGraphTask> *)local_620);
  bVar3 = local_588 & 0xe0;
  pTStack_590 = &TStatId::TStatId_NAME_None;
  local_440 = pFVar7->WeightResult;
  TStack_43c = pFVar7->EasingResult;
  auStack_43e[0] = 0xff;
  auStack_43e[1] = '\x7f';
  auStack_43a[0] = 0xff;
  auStack_43a[1] = '\x7f';
  local_438._2_2_ = 0x7fff;
  local_438._0_2_ = local_440;
  local_438._4_2_ = TStack_43c;
  local_438._6_2_ = 0x7fff;
  local_438._8_2_ = pFVar7->WeightAndEasingResult;
  auStack_5a8._16_8_ = 0;
  auStack_580._0_4_ = 0x6ff;
  auStack_580._4_4_ = auStack_580._4_4_ & 0xffffff00;
  local_418 = CONCAT71(uStack_587,local_588) & 0xffffffffffffffe0;
  aTStack_410[1].Pad[0] = auStack_580[4];
  aTStack_410[1].Pad[1] = auStack_580[5];
  aTStack_410[1].Pad[2] = auStack_580[6];
  aTStack_410[1].Pad[3] = auStack_580[7];
  aTStack_410[0].Pad[0] = 0xff;
  aTStack_410[0].Pad[1] = '\x06';
  aTStack_410[0].Pad[2] = '\0';
  aTStack_410[0].Pad[3] = '\0';
  local_428._0_1_ = '\0';
  local_428._1_1_ = '\0';
  local_428._2_1_ = '\0';
  local_428._3_1_ = '\0';
  local_428._4_1_ = '\0';
  local_428._5_1_ = '\0';
  local_428._6_1_ = '\0';
  local_428._7_1_ = '\0';
  FStack_420 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
               &TStatId::TStatId_NAME_None;
  FVar9 = StatPtr_MovieSceneEval_EvaluateEasingTask;
  local_588 = bVar3;
  if (StatPtr_MovieSceneEval_EvaluateEasingTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)0x0) {
    pFVar8 = ::FName::FName(&local_480,"MovieSceneEval_EvaluateEasingTask");
    FVar9 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateEasingTask,
                       *pFVar8,L"Weights: Evaluate easing","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  FStack_420 = FVar9;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  ::Dispatch_PerAllocation<UE::MovieScene::FAccumulateManualWeights>
            ((TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
              *)local_438,(FEntityManager *)local_610,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
             (FSystemSubsequentTasks *)&local_408);
  if ((this->PreAllocatedComputationData).Channels.ArrayNum != 0) {
    UE::MovieScene::FSystemTaskPrerequisites::FSystemTaskPrerequisites(&local_388,param_1);
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (&local_388,(FComponentTypeID)*(ushort *)&pFVar7->WeightAndEasingResult,
               (TRefCountPtr<FBaseGraphTask> *)local_620);
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (&local_388,(FComponentTypeID)*(ushort *)&pFVar7->WeightAndEasingResult,
               (TRefCountPtr<FBaseGraphTask> *)local_610);
    local_570._8_8_ = &TStatId::TStatId_NAME_None;
    auStack_4e8._8_2_ = pFVar7->WeightAndEasingResult;
    TStack_4de = pFVar7->HierarchicalEasingChannel;
    local_628.Value = *(ushort *)&pFVar7->HierarchicalEasingProvider;
    local_570._0_8_ = 0;
    uStack_558 = 0x6ff;
    uStack_554 = uStack_554 & 0xffffff00;
    uStack_4c8 = CONCAT71(uStack_55f,local_560) & 0xffffffffffffffe0;
    auStack_4c0._4_4_ = uStack_554;
    auStack_4c0._0_4_ = 0x6ff;
    auStack_4d8._0_8_ = 0;
    auStack_4d8._8_8_ = &TStatId::TStatId_NAME_None;
    local_260.AllMask.Bits.NumBits = 0;
    local_288._2_2_ = TStack_4de;
    local_288._0_2_ = auStack_4e8._8_2_;
    local_288._4_4_ = uStack_4dc;
    local_260.AllMask.Bits.MaxBits = 0x180;
    local_260.NoneMask.Bits.NumBits = 0;
    local_260.NoneMask.Bits.MaxBits = 0x180;
    uStack_280 = 0;
    local_278 = (FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask>)
                &TStatId::TStatId_NAME_None;
    local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ComplexMasks.ArrayNum = 0;
    local_260.ComplexMasks.ArrayMax = 0;
    local_1b0 = 0;
    local_1ac = 0x180;
    local_178 = 0;
    local_174 = 0x180;
    local_560 = local_560 & 0xe0;
    uStack_270 = uStack_4c8;
    local_268 = (undefined1  [8])auStack_4c0._0_8_;
    UE::MovieScene::AddAccessorToFilter
              ((FComponentAccess *)local_288,(FEntityComponentFilter *)(local_268 + 8));
    UE::MovieScene::AddAccessorToFilter
              ((FComponentAccess *)(local_288 + 2),(FEntityComponentFilter *)(local_268 + 8));
    local_528._First = &local_628;
    local_528._Last = &local_626;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(local_268 + 8),&local_528);
    FVar10 = StatPtr_MovieSceneEval_HarvestEasingTask;
    if (StatPtr_MovieSceneEval_HarvestEasingTask ==
        (FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask>)0x0) {
      pFVar8 = ::FName::FName(&local_478,"MovieSceneEval_HarvestEasingTask");
      FVar10 = (FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_HarvestEasingTask,
                          *pFVar8,L"Weights: Harvest hierarchical easing","STATGROUP_MovieSceneECS",
                          "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                          true,false,MCR_Invalid);
    }
    local_608._8_8_ = &this->PreAllocatedComputationData;
    local_278 = FVar10;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::FHarvestHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_*>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
                *)local_288,(FEntityManager *)local_618,
               (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
               (FSystemSubsequentTasks *)&local_388,
               (TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>
                **)0x0);
    if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
    }
    UE::MovieScene::FSystemTaskPrerequisites::FSystemTaskPrerequisites(&local_308,param_1);
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (&local_308,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_618);
    local_548._8_8_ = &TStatId::TStatId_NAME_None;
    auStack_4c0._8_2_ = pFVar7->HierarchicalEasingChannel;
    TStack_4b6 = pFVar7->WeightAndEasingResult;
    local_624.Value = *(ushort *)&pFVar7->HierarchicalEasingProvider;
    local_548._0_8_ = 0;
    uStack_530 = 0x6ff;
    uStack_52c = uStack_52c & 0xffffff00;
    uStack_4a0 = CONCAT71(uStack_537,local_538) & 0xffffffffffffffe0;
    uStack_498._4_4_ = uStack_52c;
    uStack_498._0_4_ = 0x6ff;
    auStack_4b0._0_8_ = 0;
    auStack_4b0._8_8_ = &TStatId::TStatId_NAME_None;
    local_140.AllMask.Bits.NumBits = 0;
    local_168._2_2_ = TStack_4b6;
    local_168._0_2_ = auStack_4c0._8_2_;
    local_168._4_4_ = uStack_4b4;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    uStack_160 = 0;
    local_158 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
                &TStatId::TStatId_NAME_None;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    local_538 = local_538 & 0xe0;
    uStack_150 = uStack_4a0;
    local_148 = uStack_498;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_168,&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_140);
    local_518._First = &local_624;
    local_518._Last = &local_622;
    UE::MovieScene::FComponentMask::SetAll(&local_140.NoneMask,&local_518);
    FVar9 = StatPtr_MovieSceneEval_EvaluateEasingTask;
    if (StatPtr_MovieSceneEval_EvaluateEasingTask ==
        (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)0x0) {
      pFVar8 = ::FName::FName(&local_470,"MovieSceneEval_EvaluateEasingTask");
      FVar9 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateEasingTask,
                         *pFVar8,L"Weights: Evaluate easing","STATGROUP_MovieSceneECS",
                         "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                         true,false,MCR_Invalid);
    }
    local_158 = FVar9;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
    ::
    Dispatch_PerAllocation<UE::MovieScene::FPropagateHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
                *)local_168,(FEntityManager *)local_5f8,
               (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
               (FSystemSubsequentTasks *)&local_308,
               (TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_> *
               )param_2);
    if ((undefined8 *)local_5f8._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_5f8._0_8_ + 0x30);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)local_5f8._0_8_)(local_5f8._0_8_,1);
      }
    }
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_308.AllTasks;
    if (local_308.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = local_308.AllTasks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_308.AllTasks.ArrayNum);
    if (local_308.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_308.AllTasks.AllocatorInstance.SecondaryData);
    }
    FVar12 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_308;
    if (local_308.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar12 = local_308.Prereqs.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((FPrerequisite *)FVar12,local_308.Prereqs.ArrayNum);
    if (local_308.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FMemory::Free((void *)local_308.Prereqs.AllocatorInstance.SecondaryData);
    }
    if (local_618 != (undefined1  [8])0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)local_618 + 0x30);
      iVar4 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_618 != (undefined1  [8])0x0)) {
        (*(code *)**(undefined8 **)local_618)(local_618,1);
      }
    }
    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_388.AllTasks;
    if (local_388.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = local_388.AllTasks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_388.AllTasks.ArrayNum);
    if (local_388.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_388.AllTasks.AllocatorInstance.SecondaryData);
    }
    FVar12 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_388;
    if (local_388.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar12 = local_388.Prereqs.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((FPrerequisite *)FVar12,local_388.Prereqs.ArrayNum);
    if (local_388.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FMemory::Free((void *)local_388.Prereqs.AllocatorInstance.SecondaryData);
    }
  }
  if (local_610 != (undefined1  [8])0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)local_610 + 0x30);
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_610 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_610)(local_610,1);
    }
  }
  if (local_620 != (undefined1  [8])0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)local_620 + 0x30);
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_620 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_620)(local_620,1);
    }
  }
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_408.AllTasks;
  if (local_408.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = local_408.AllTasks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_408.AllTasks.ArrayNum);
  if (local_408.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_408.AllTasks.AllocatorInstance.SecondaryData);
  }
  FVar12 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_408;
  if (local_408.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar12 = local_408.Prereqs.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar12,local_408.Prereqs.ArrayNum);
  if (local_408.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)local_408.Prereqs.AllocatorInstance.SecondaryData);
  }
  if ((FBaseGraphTask *)local_608._0_8_ != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = (undefined1 *)(local_608._0_8_ + 0x30);
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && ((FBaseGraphTask *)local_608._0_8_ != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_608._0_8_)(local_608._0_8_,1);
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 1468c38d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWeightAndEasingEvaluatorSystem::OnSchedulePersistentTasks
          (UWeightAndEasingEvaluatorSystem *this,IEntitySystemScheduler *param_1)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  FName *pFVar6;
  undefined1 auStackY_5d8 [32];
  FComponentTypeID local_578;
  FComponentTypeID local_576;
  FComponentTypeID local_574;
  FComponentTypeID local_572;
  FTaskID local_570;
  FTaskID local_56c;
  FTaskID local_568;
  FTaskID local_564;
  FTaskID local_560;
  FHierarchicalEasingChannelBuffer *local_558;
  undefined8 local_550;
  FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask> FStack_548;
  byte local_540;
  undefined7 uStack_53f;
  TComponentTypeID<FFrameTime> local_538;
  TComponentTypeID<FEasingComponentData> local_536;
  TComponentTypeID<double> local_534;
  uchar local_530 [8];
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask> FStack_528;
  ForElementType<unsigned_int> local_520;
  ForElementType<unsigned_int> FStack_518;
  undefined1 local_510 [16];
  ulonglong local_500;
  undefined1 local_4f8 [16];
  ulonglong local_4e8;
  undefined1 local_4e0 [16];
  ulonglong local_4d0;
  undefined1 local_4c8 [16];
  ulonglong local_4b8;
  undefined1 local_4b0 [16];
  ulonglong local_4a0;
  undefined1 local_490 [16];
  byte local_480;
  undefined7 uStack_47f;
  undefined4 uStack_478;
  uint uStack_474;
  TComponentTypeID<double> local_470;
  undefined8 local_468;
  FThreadSafeStaticStat<FStat_MovieSceneEval_ResetWeightsTask> FStack_460;
  ulonglong local_458;
  undefined1 auStack_450 [24];
  TStatIdData *pTStack_438;
  byte local_430;
  undefined7 uStack_42f;
  undefined4 uStack_428;
  uint uStack_424;
  undefined1 local_418 [16];
  byte local_408;
  undefined7 uStack_407;
  undefined4 uStack_400;
  uint uStack_3fc;
  undefined8 local_3f0;
  TStatIdData *pTStack_3e8;
  byte local_3e0;
  undefined7 uStack_3df;
  undefined4 uStack_3d8;
  uint uStack_3d4;
  undefined8 local_3c8;
  TStatIdData *pTStack_3c0;
  byte local_3b8;
  TTypeCompatibleBytes<unsigned_int> TStack_3b7;
  TTypeCompatibleBytes<unsigned_int> TStack_3b0;
  TTypeCompatibleBytes<unsigned_int> TStack_3ac;
  code *local_3a8;
  uchar local_3a0;
  code *local_398;
  uchar local_390;
  code *local_388;
  uchar local_380;
  initializer_list<UE::MovieScene::FComponentTypeID> local_378;
  TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_> *local_368;
  uchar local_360;
  initializer_list<UE::MovieScene::FComponentTypeID> local_358;
  TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_> local_348;
  TComponentTypeID<double> local_338;
  TComponentTypeID<unsigned_short> TStack_336;
  TTypeCompatibleBytes<unsigned_int> TStack_334;
  undefined8 uStack_330;
  TStatIdData *pTStack_328;
  ForAnyElementType FStack_320;
  ForAnyElementType FStack_318;
  TComponentTypeID<unsigned_short> local_310;
  TComponentTypeID<double> TStack_30e;
  int iStack_30c;
  ForAnyElementType FStack_308;
  TStatIdData *pTStack_300;
  ForAnyElementType FStack_2f8;
  ulong64 uStack_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  TComponentTypeID<double> local_2c0;
  undefined2 uStack_2be;
  TComponentTypeID<double> TStack_2bc;
  undefined2 uStack_2ba;
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  FThreadSafeStaticStat<FStat_MovieSceneEval_AccumulateManualWeights> FStack_2a0;
  ulonglong local_298;
  undefined8 uStack_290;
  undefined1 local_288 [8];
  undefined8 uStack_280;
  FThreadSafeStaticStat<FStat_MovieSceneEval_PropagateEasing> local_278;
  FScriptContainerElement *pFStack_270;
  ulong64 local_268;
  FEntityComponentFilter local_260;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_174;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask> local_158;
  FScriptContainerElement *pFStack_150;
  FScriptContainerElement *local_148;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  if (*(longlong *)(this->_padding_ + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_470 = pFVar5->WeightAndEasingResult;
  bVar1 = local_480 & 0xe0;
  local_490._8_8_ = &TStatId::TStatId_NAME_None;
  local_490._0_8_ = 0;
  uStack_474 = uStack_474 & 0xffffff00;
  uStack_478 = 0x6ff;
  local_458 = CONCAT71(uStack_47f,local_480) & 0xffffffffffffffe0;
  auStack_450._4_4_ = uStack_474;
  auStack_450._0_4_ = 0x6ff;
  local_468 = 0;
  FStack_460 = (FThreadSafeStaticStat<FStat_MovieSceneEval_ResetWeightsTask>)
               &TStatId::TStatId_NAME_None;
  local_4b0._8_8_ = StatPtr_MovieSceneEval_ResetWeightsTask;
  local_480 = bVar1;
  if (StatPtr_MovieSceneEval_ResetWeightsTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_ResetWeightsTask>)0x0) {
    pFVar6 = ::FName::FName(&local_2d0,"MovieSceneEval_ResetWeightsTask");
    local_4b0._8_8_ =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ResetWeightsTask,*pFVar6,
                    L"Weights: Reset","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                    L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_3a0 = '\x03';
  local_4a0 = local_458 & 0xfffffffffffffffd;
  local_4b0._0_8_ = L"struct UE::MovieScene::FResetFinalWeightResults";
  local_3a8 = UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
              ::ScheduledRun_PerEntity;
  FStack_460 = (FThreadSafeStaticStat<FStat_MovieSceneEval_ResetWeightsTask>)local_4b0._8_8_;
  UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_>::
  ScheduleImpl<UE::MovieScene::FResetFinalWeightResults>
            ((TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_> *)&local_470,
             (FEntityManager *)&local_56c,(IEntitySystemScheduler *)(this->_padding_ + 0x28),
             (FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_4b0);
  local_538 = pFVar5->EvalTime;
  bVar1 = local_430 & 0xe0;
  local_536 = pFVar5->Easing;
  local_534 = pFVar5->EasingResult;
  auStack_450._16_8_ = 0;
  pTStack_438 = &TStatId::TStatId_NAME_None;
  uStack_428 = 0x6ff;
  uStack_424 = uStack_424 & 0xffffff00;
  local_520 = (ForElementType<unsigned_int>)(CONCAT71(uStack_42f,local_430) & 0xffffffffffffffe0);
  FStack_518._4_4_ = uStack_424;
  FStack_518._0_4_ = 0x6ff;
  local_530[0] = '\0';
  local_530[1] = '\0';
  local_530[2] = '\0';
  local_530[3] = '\0';
  local_530[4] = '\0';
  local_530[5] = '\0';
  local_530[6] = '\0';
  local_530[7] = '\0';
  FStack_528 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)
               &TStatId::TStatId_NAME_None;
  local_4c8._8_8_ = StatPtr_MovieSceneEval_EvaluateEasingTask;
  local_430 = bVar1;
  if (StatPtr_MovieSceneEval_EvaluateEasingTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)0x0) {
    pFVar6 = ::FName::FName(&local_2d8,"MovieSceneEval_EvaluateEasingTask");
    local_4c8._8_8_ =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateEasingTask,*pFVar6,
                    L"Weights: Evaluate easing","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                    L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_390 = '\x03';
  local_4b8 = (ulonglong)local_520 & 0xfffffffffffffffd;
  local_4c8._0_8_ = L"struct UE::MovieScene::FEvaluateEasings";
  local_398 = UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
              ::ScheduledRun_PerEntity;
  FStack_528 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateEasingTask>)local_4c8._8_8_;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
  ::ScheduleImpl<UE::MovieScene::FEvaluateEasings>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
              *)&local_538,(FEntityManager *)&local_568,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_4c8);
  local_2c0 = pFVar5->WeightResult;
  bVar1 = local_408 & 0xe0;
  TStack_2bc = pFVar5->EasingResult;
  uStack_2be = 0x7fff;
  uStack_2ba = 0x7fff;
  local_2b8._2_2_ = 0x7fff;
  local_2b8._0_2_ = local_2c0;
  local_2b8._4_2_ = TStack_2bc;
  local_2b8._6_2_ = 0x7fff;
  local_2b8._8_2_ = pFVar5->WeightAndEasingResult;
  local_418._0_8_ = 0;
  local_418._8_8_ = &TStatId::TStatId_NAME_None;
  uStack_400 = 0x6ff;
  uStack_3fc = uStack_3fc & 0xffffff00;
  local_298 = CONCAT71(uStack_407,local_408) & 0xffffffffffffffe0;
  uStack_290._4_4_ = uStack_3fc;
  uStack_290._0_4_ = 0x6ff;
  local_2a8 = 0;
  FStack_2a0 = (FThreadSafeStaticStat<FStat_MovieSceneEval_AccumulateManualWeights>)
               &TStatId::TStatId_NAME_None;
  local_4e0._8_8_ = StatPtr_MovieSceneEval_AccumulateManualWeights;
  local_408 = bVar1;
  if (StatPtr_MovieSceneEval_AccumulateManualWeights ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_AccumulateManualWeights>)0x0) {
    pFVar6 = ::FName::FName(&local_2e0,"MovieSceneEval_AccumulateManualWeights");
    local_4e0._8_8_ =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AccumulateManualWeights,
                    *pFVar6,L"Weights: Accumulate manual weights","STATGROUP_MovieSceneECS",
                    "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_380 = '\x03';
  local_4d0 = local_298 & 0xfffffffffffffffd;
  local_4e0._0_8_ = L"struct UE::MovieScene::FAccumulateManualWeights";
  local_388 = UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FAccumulateManualWeights,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
              ::ScheduledRun_PerAllocation;
  FStack_2a0 = (FThreadSafeStaticStat<FStat_MovieSceneEval_AccumulateManualWeights>)local_4e0._8_8_;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
  ::ScheduleImpl<UE::MovieScene::FAccumulateManualWeights>
            ((TEntityTaskComponents<UE::MovieScene::TReadOneOrMoreOfAccessor<double,double>,UE::MovieScene::TWriteAccess<double>_>
              *)local_2b8,(FEntityManager *)&local_570,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_4e0);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_56c,local_570);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_568,local_570);
  if ((this->PreAllocatedComputationData).Channels.ArrayNum != 0) {
    pTStack_3e8 = &TStatId::TStatId_NAME_None;
    local_338 = pFVar5->WeightAndEasingResult;
    TStack_336 = pFVar5->HierarchicalEasingChannel;
    local_578.Value = *(ushort *)&pFVar5->HierarchicalEasingProvider;
    local_3f0 = 0;
    uStack_3d8 = 0x6ff;
    uStack_3d4 = uStack_3d4 & 0xffffff00;
    FStack_320.Data =
         (FScriptContainerElement *)(CONCAT71(uStack_3df,local_3e0) & 0xffffffffffffffe0);
    FStack_318.Data = (FScriptContainerElement *)CONCAT44(uStack_3d4,0x6ff);
    uStack_330._0_1_ = '\0';
    uStack_330._1_1_ = '\0';
    uStack_330._2_1_ = '\0';
    uStack_330._3_1_ = '\0';
    uStack_330._4_1_ = '\0';
    uStack_330._5_1_ = '\0';
    uStack_330._6_1_ = '\0';
    uStack_330._7_1_ = '\0';
    pTStack_328 = &TStatId::TStatId_NAME_None;
    local_140.AllMask.Bits.NumBits = 0;
    local_168._2_2_ = TStack_336;
    local_168._0_2_ = local_338;
    local_168[4] = TStack_334.Pad[0];
    local_168[5] = TStack_334.Pad[1];
    local_168[6] = TStack_334.Pad[2];
    local_168[7] = TStack_334.Pad[3];
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    uStack_160 = 0;
    local_158 = (FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask>)
                &TStatId::TStatId_NAME_None;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    local_3e0 = local_3e0 & 0xe0;
    pFStack_150 = FStack_320.Data;
    local_148 = FStack_318.Data;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_168,&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_140);
    local_378._First = &local_578;
    local_378._Last = &local_576;
    UE::MovieScene::FComponentMask::SetAll(&local_140.AllMask,&local_378);
    FStack_548 = StatPtr_MovieSceneEval_HarvestEasingTask;
    if (StatPtr_MovieSceneEval_HarvestEasingTask ==
        (FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask>)0x0) {
      pFVar6 = ::FName::FName(&local_2e8,"MovieSceneEval_HarvestEasingTask");
      FStack_548 = (FThreadSafeStaticStat<FStat_MovieSceneEval_HarvestEasingTask>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_HarvestEasingTask
                              ,*pFVar6,L"Weights: Harvest hierarchical easing",
                              "STATGROUP_MovieSceneECS","STATCAT_Advanced",
                              L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
                              MCR_Invalid);
    }
    local_550 = 0;
    uVar3 = CONCAT71(uStack_53f,local_540) & 0xffffffffffffffe4;
    pFStack_150 = (FScriptContainerElement *)(uVar3 | 4);
    local_4e8._1_7_ = (undefined7)(uVar3 >> 8);
    local_4e8 = CONCAT71(local_4e8._1_7_,local_540) & 0xffffffffffffffe4 | 6;
    local_4f8._0_8_ = L"struct UE::MovieScene::FHarvestHierarchicalEasings";
    local_368 = (TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>
                 *)UE::MovieScene::
                   TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
                   ::ScheduledRun_PerEntity;
    uStack_160 = 0;
    local_360 = '\x03';
    local_558 = &this->PreAllocatedComputationData;
    local_540 = local_540 & 0xe4 | 4;
    local_4f8._8_8_ = FStack_548;
    local_158 = FStack_548;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
    ::
    ScheduleImpl<UE::MovieScene::FHarvestHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_*>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
                *)local_168,(FEntityManager *)&local_560,
               (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_4f8,&local_368);
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
    pTStack_3c0 = &TStatId::TStatId_NAME_None;
    local_310 = pFVar5->HierarchicalEasingChannel;
    TStack_30e = pFVar5->WeightAndEasingResult;
    local_574.Value = *(ushort *)&pFVar5->HierarchicalEasingProvider;
    local_3c8._0_1_ = '\0';
    local_3c8._1_1_ = '\0';
    local_3c8._2_1_ = '\0';
    local_3c8._3_1_ = '\0';
    local_3c8._4_1_ = '\0';
    local_3c8._5_1_ = '\0';
    local_3c8._6_1_ = '\0';
    local_3c8._7_1_ = '\0';
    TStack_3b0.Pad[0] = 0xff;
    TStack_3b0.Pad[1] = '\x06';
    TStack_3b0.Pad[2] = '\0';
    TStack_3b0.Pad[3] = '\0';
    TStack_3ac.Pad = TStack_3ac.Pad & 0xffffff00;
    FStack_2f8.Data =
         (FScriptContainerElement *)(CONCAT71(_TStack_3b7,local_3b8) & 0xffffffffffffffe0);
    uStack_2f0 = CONCAT44(TStack_3ac.Pad,0x6ff);
    FStack_308.Data = (FScriptContainerElement *)0x0;
    pTStack_300 = &TStatId::TStatId_NAME_None;
    local_260.AllMask.Bits.NumBits = 0;
    local_288._2_2_ = TStack_30e;
    local_288._0_2_ = local_310;
    local_288._4_4_ = iStack_30c;
    local_260.AllMask.Bits.MaxBits = 0x180;
    local_260.NoneMask.Bits.NumBits = 0;
    local_260.NoneMask.Bits.MaxBits = 0x180;
    uStack_280 = 0;
    local_278 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PropagateEasing>)
                &TStatId::TStatId_NAME_None;
    local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ComplexMasks.ArrayNum = 0;
    local_260.ComplexMasks.ArrayMax = 0;
    local_1b0 = 0;
    local_1ac = 0x180;
    local_178 = 0;
    local_174 = 0x180;
    local_3b8 = local_3b8 & 0xe0;
    pFStack_270 = FStack_2f8.Data;
    local_268 = uStack_2f0;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_288,&local_260);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_288 + 2),&local_260);
    local_358._First = &local_574;
    local_358._Last = &local_572;
    UE::MovieScene::FComponentMask::SetAll(&local_260.NoneMask,&local_358);
    local_510._8_8_ = StatPtr_MovieSceneEval_PropagateEasing;
    if (StatPtr_MovieSceneEval_PropagateEasing ==
        (FThreadSafeStaticStat<FStat_MovieSceneEval_PropagateEasing>)0x0) {
      pFVar6 = ::FName::FName(&local_2c8,"MovieSceneEval_PropagateEasing");
      local_510._8_8_ =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PropagateEasing,*pFVar6,
                      L"Weights: Propagate hierarchical easing","STATGROUP_MovieSceneECS",
                      "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                      false,MCR_Invalid);
    }
    local_500 = (ulonglong)pFStack_270 & 0xfffffffffffffffd;
    local_510._0_8_ = L"struct UE::MovieScene::FPropagateHierarchicalEasings";
    local_348.AllocatorInstance.Data =
         (FScriptContainerElement *)
         UE::MovieScene::
         TScheduledEntityTask<UE::MovieScene::FPropagateHierarchicalEasings,UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
         ::ScheduledRun_PerAllocation;
    local_348.ArrayNum._0_1_ = '\x03';
    local_278 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PropagateEasing>)local_510._8_8_;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
    ::
    ScheduleImpl<UE::MovieScene::FPropagateHierarchicalEasings,TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<unsigned_short>,UE::MovieScene::TWriteAccess<double>_>
                *)local_288,(FEntityManager *)&local_564,
               (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_510,&local_348);
    if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
    }
    UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_560,local_564);
  }
  return;
}

// OnUnlink @ 1468c42d0

void __thiscall UWeightAndEasingEvaluatorSystem::OnUnlink(UWeightAndEasingEvaluatorSystem *this)

{
  int *piVar1;
  
  piVar1 = &(this->PreAllocatedComputationData).Channels.ArrayMax;
  (this->PreAllocatedComputationData).Channels.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->PreAllocatedComputationData,0,piVar1);
  }
  (this->PreAllocatedComputationData).BlendTargetStartIndex = -1;
  return;
}

// StaticRegisterNativesUWeightAndEasingEvaluatorSystem @ 1468d02f0

void __cdecl
UWeightAndEasingEvaluatorSystem::StaticRegisterNativesUWeightAndEasingEvaluatorSystem(void)

{
  return;
}

