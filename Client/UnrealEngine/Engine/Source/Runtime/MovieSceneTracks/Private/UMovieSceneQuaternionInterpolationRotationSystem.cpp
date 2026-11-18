// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467cee30

UClass * __cdecl UMovieSceneQuaternionInterpolationRotationSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneQuaternionInterpolationRotationSystem",
               &Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneQuaternionInterpolationRotationSystem
               ,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneQuaternionInterpolationRotationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneQuaternionInterpolationRotationSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.InnerSingleton;
}

// UMovieSceneQuaternionInterpolationRotationSystem @ 14680b9e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneQuaternionInterpolationRotationSystem * __thiscall
UMovieSceneQuaternionInterpolationRotationSystem::UMovieSceneQuaternionInterpolationRotationSystem
          (UMovieSceneQuaternionInterpolationRotationSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneQuaternionInterpolationRotationSystem__6B_;
  return this;
}

// UMovieSceneQuaternionInterpolationRotationSystem @ 14680ba10

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneQuaternionInterpolationRotationSystem * __thiscall
UMovieSceneQuaternionInterpolationRotationSystem::UMovieSceneQuaternionInterpolationRotationSystem
          (UMovieSceneQuaternionInterpolationRotationSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined4 *)&this->field_0x38 = 4;
  *(undefined ***)this = &___7UMovieSceneQuaternionInterpolationRotationSystem__6B_;
  this->field_0x32 = 8;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8 = *(UObject **)&this->field_0x10;
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
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = *(ushort *)(pFVar2->DoubleResult + 3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = *(ushort *)(pFVar2->DoubleResult + 4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = *(ushort *)(pFVar2->DoubleResult + 5);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneQuaternionInterpolationRotationSystem @ 14680fd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneQuaternionInterpolationRotationSystem::~UMovieSceneQuaternionInterpolationRotationSystem
          (UMovieSceneQuaternionInterpolationRotationSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneQuaternionInterpolationRotationSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836d20

UClass * __cdecl UMovieSceneQuaternionInterpolationRotationSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneQuaternionInterpolationRotationSystem",
               &Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneQuaternionInterpolationRotationSystem
               ,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneQuaternionInterpolationRotationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneQuaternionInterpolationRotationSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.InnerSingleton;
}

// IsRelevantImpl @ 14683f250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneQuaternionInterpolationRotationSystem::IsRelevantImpl
          (UMovieSceneQuaternionInterpolationRotationSystem *this,
          UMovieSceneEntitySystemLinker *param_1)

{
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> TVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FComponentMask *pFVar3;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *pTVar4;
  undefined1 auStack_38 [32];
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_18 [3];
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_12;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_18[0] = pFVar2->QuaternionRotationChannel[0];
  local_18[1] = pFVar2->QuaternionRotationChannel[1];
  local_18[2] = pFVar2->QuaternionRotationChannel[2];
  pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  pTVar4 = local_18;
  while( true ) {
    TVar1 = *pTVar4;
    if (((TVar1 != (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>)0xffff) &&
        ((int)(uint)(ushort)TVar1 < (pFVar3->Bits).NumBits)) &&
       ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[(ushort)TVar1 >> 5].Pad >>
         ((ushort)TVar1 & 0x1f) & 1) != 0)) break;
    pTVar4 = pTVar4 + 1;
    if (pTVar4 == &local_12) {
      return false;
    }
  }
  return true;
}

// OnRun @ 14684b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneQuaternionInterpolationRotationSystem::OnRun
          (UMovieSceneQuaternionInterpolationRotationSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask> FVar8;
  undefined1 auStackY_128 [32];
  TComponentTypeID<double> local_c8;
  undefined2 uStack_c6;
  TComponentTypeID<double> local_c0;
  undefined2 uStack_be;
  uint uStack_bc;
  undefined8 local_b0;
  TStatIdData *pTStack_a8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined4 uStack_98;
  uint uStack_94;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_90;
  undefined2 uStack_8e;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> TStack_8c;
  undefined2 uStack_8a;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_88;
  undefined2 uStack_86;
  TComponentTypeID<FFrameTime> local_78;
  undefined8 local_76;
  undefined4 local_6e;
  uint local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined8 local_58;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask> FStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  bVar2 = local_a0 & 0xe0;
  pTStack_a8 = &TStatId::TStatId_NAME_None;
  local_90 = pFVar6->QuaternionRotationChannel[0];
  TStack_8c = pFVar6->QuaternionRotationChannel[1];
  uStack_86 = 0x7fff;
  local_88 = pFVar6->QuaternionRotationChannel[2];
  local_c0 = pFVar5->DoubleResult[5];
  local_78 = pFVar5->EvalTime;
  local_6e = _local_88;
  local_6a = (ushort)pFVar5->DoubleResult[3] | 0x7fff0000;
  uStack_c6 = 0x7fff;
  local_c8 = pFVar5->DoubleResult[4];
  local_66 = _local_c8;
  uStack_8e = 0x7fff;
  uStack_8a = 0x7fff;
  local_76._2_2_ = 0x7fff;
  local_76._0_2_ = local_90;
  local_76._4_2_ = TStack_8c;
  local_76._6_2_ = 0x7fff;
  uStack_be = 0x7fff;
  local_62._2_2_ = 0x7fff;
  local_62._0_2_ = local_c0;
  local_b0 = 0;
  uStack_98 = 0x6ff;
  uStack_94 = uStack_94 & 0xffffff00;
  local_48 = CONCAT71(uStack_9f,local_a0) & 0xffffffffffffffe0;
  uStack_40._4_4_ = uStack_94;
  uStack_40._0_4_ = 0x6ff;
  local_58 = 0;
  FStack_50 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask>)
              &TStatId::TStatId_NAME_None;
  FVar8 = StatPtr_MovieSceneEval_EvaluateQuatInterpRotChannelTask;
  local_a0 = bVar2;
  if (StatPtr_MovieSceneEval_EvaluateQuatInterpRotChannelTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_c0,"MovieSceneEval_EvaluateQuatInterpRotChannelTask");
    FVar8 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_MovieSceneEval_EvaluateQuatInterpRotChannelTask,*pFVar7,
                       L"MovieScene: Evaluate quat-interp-rot channels","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  FStack_50 = FVar8;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::Dispatch_PerAllocation<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              *)&local_78,(FEntityManager *)&local_c0,
             (FSystemTaskPrerequisites *)(*(longlong *)&this->field_0x28 + 0x28),
             (FSystemSubsequentTasks *)param_1);
  puVar4 = (undefined8 *)CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0));
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 146850340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneQuaternionInterpolationRotationSystem::OnSchedulePersistentTasks
          (UMovieSceneQuaternionInterpolationRotationSystem *this,IEntitySystemScheduler *param_1)

{
  byte bVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask> FVar5;
  undefined1 auStackY_118 [32];
  TComponentTypeID<double> local_b8;
  undefined2 uStack_b6;
  undefined1 local_b4 [12];
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  TStatIdData *pTStack_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 local_80;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_78;
  undefined2 uStack_76;
  TComponentTypeID<FFrameTime> local_68;
  undefined8 local_66;
  undefined4 local_5e;
  uint local_5a;
  undefined4 local_56;
  uint local_52;
  undefined8 local_48;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask> FStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  bVar1 = local_90 & 0xe0;
  pTStack_98 = &TStatId::TStatId_NAME_None;
  uStack_76 = 0x7fff;
  local_78 = pFVar3->QuaternionRotationChannel[2];
  local_68 = pFVar2->EvalTime;
  local_5e = _local_78;
  local_5a = (ushort)pFVar2->DoubleResult[3] | 0x7fff0000;
  uStack_b6 = 0x7fff;
  local_b8 = pFVar2->DoubleResult[4];
  local_56 = _local_b8;
  local_80._2_2_ = 0x7fff;
  local_80._0_2_ = pFVar3->QuaternionRotationChannel[0];
  local_80._4_2_ = pFVar3->QuaternionRotationChannel[1];
  local_80._6_2_ = 0x7fff;
  local_b4._2_2_ = 0x7fff;
  local_b4._0_2_ = pFVar2->DoubleResult[5];
  uStack_a0._0_1_ = '\0';
  uStack_a0._1_7_ = 0;
  uStack_88 = 0x6ff;
  uStack_84 = uStack_84 & 0xffffff00;
  local_38 = CONCAT71(uStack_8f,local_90) & 0xffffffffffffffe0;
  uStack_30._4_4_ = uStack_84;
  uStack_30._0_4_ = 0x6ff;
  local_52 = local_b4._0_4_;
  local_66 = local_80;
  local_48 = 0;
  FStack_40 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask>)
              &TStatId::TStatId_NAME_None;
  FVar5 = StatPtr_MovieSceneEval_EvaluateQuatInterpRotChannelTask;
  local_90 = bVar1;
  if (StatPtr_MovieSceneEval_EvaluateQuatInterpRotChannelTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask>)0x0) {
    pFVar4 = ::FName::FName((FName *)local_b4,"MovieSceneEval_EvaluateQuatInterpRotChannelTask");
    FVar5 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateQuatInterpRotChannelTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_MovieSceneEval_EvaluateQuatInterpRotChannelTask,*pFVar4,
                       L"MovieScene: Evaluate quat-interp-rot channels","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  pTStack_98 = (TStatIdData *)(local_38 & 0xfffffffffffffffd);
  local_a8 = (undefined1  [8])0x151340eb0;
  local_80 = UE::MovieScene::
             TScheduledEntityTask<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
             ::ScheduledRun_PerAllocation;
  local_78._0_1_ = 3;
  uStack_a0 = FVar5;
  FStack_40 = FVar5;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::ScheduleImpl<UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              *)&local_68,(FEntityManager *)local_b4,
             (IEntitySystemScheduler *)(*(longlong *)&this->field_0x28 + 0x28),
             (FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_a8);
  return;
}

// StaticRegisterNativesUMovieSceneQuaternionInterpolationRotationSystem @ 14686cc30

void __cdecl
UMovieSceneQuaternionInterpolationRotationSystem::
StaticRegisterNativesUMovieSceneQuaternionInterpolationRotationSystem(void)

{
  return;
}

