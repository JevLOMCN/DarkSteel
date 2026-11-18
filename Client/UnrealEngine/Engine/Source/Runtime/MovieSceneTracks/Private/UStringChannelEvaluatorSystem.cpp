// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 146881e20

UClass * __cdecl UStringChannelEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"StringChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUStringChannelEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStringChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UStringChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton;
}

// UStringChannelEvaluatorSystem @ 14689f5d0

/* WARNING: Enum "Type": Some values do not have unique names */

UStringChannelEvaluatorSystem * __thiscall
UStringChannelEvaluatorSystem::UStringChannelEvaluatorSystem
          (UStringChannelEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UStringChannelEvaluatorSystem__6B_;
  return this;
}

// UStringChannelEvaluatorSystem @ 14689f600

/* WARNING: Enum "Type": Some values do not have unique names */

UStringChannelEvaluatorSystem * __thiscall
UStringChannelEvaluatorSystem::UStringChannelEvaluatorSystem
          (UStringChannelEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  UObject *local_res8 [2];
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined4 *)&this->field_0x38 = 4;
  *(undefined ***)this = &___7UStringChannelEvaluatorSystem__6B_;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(TComponentTypeID<UE::MovieScene::FSourceStringChannel> *)&this->field_0x30 =
       pFVar1->StringChannel;
  this->field_0x32 = 8;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8[0] = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UStringChannelEvaluatorSystem @ 1468a1200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStringChannelEvaluatorSystem::~UStringChannelEvaluatorSystem(UStringChannelEvaluatorSystem *this)

{
  *(undefined ***)this = &___7UStringChannelEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 1468b8ab0

UClass * __cdecl UStringChannelEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"StringChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUStringChannelEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStringChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UStringChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStringChannelEvaluatorSystem.InnerSingleton;
}

// OnRun @ 1468c2400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStringChannelEvaluatorSystem::OnRun
          (UStringChannelEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FComponentTypeID *pFVar1;
  int iVar2;
  FBuiltInComponentTypes *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask> FVar5;
  undefined1 auStackY_228 [32];
  ushort local_1c8;
  FComponentTypeID aFStack_1c6 [7];
  undefined1 local_1b8 [24];
  undefined8 local_1a0;
  TStatIdData *pTStack_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined4 uStack_188;
  uint uStack_184;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> local_180;
  TComponentTypeID<FFrameTime> TStack_17e;
  TComponentTypeID<FString> TStack_17c;
  undefined2 uStack_17a;
  uchar auStack_178 [8];
  TStatIdData *pTStack_170;
  ForElementType<unsigned_int> FStack_168;
  undefined8 uStack_160;
  undefined1 local_158 [4];
  FComponentAccess aFStack_154 [2];
  undefined8 uStack_150;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask> local_148;
  ForElementType<unsigned_int> FStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  int local_80;
  int local_7c;
  int local_48;
  int local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pTStack_198 = &TStatId::TStatId_NAME_None;
  local_1a0 = 0;
  local_180 = pFVar3->StringChannel;
  TStack_17e = pFVar3->EvalTime;
  TStack_17c = pFVar3->StringResult;
  local_1c8 = (pFVar3->Tags).Ignored.Value;
  auStack_178[0] = '\0';
  auStack_178[1] = '\0';
  auStack_178[2] = '\0';
  auStack_178[3] = '\0';
  auStack_178[4] = '\0';
  auStack_178[5] = '\0';
  auStack_178[6] = '\0';
  auStack_178[7] = '\0';
  pTStack_170 = &TStatId::TStatId_NAME_None;
  uStack_188 = 0x6ff;
  local_158._2_2_ = TStack_17e;
  local_158._0_2_ = local_180;
  unique0x1000028d = TStack_17c;
  unique0x1000028f = uStack_17a;
  uStack_184 = uStack_184 & 0xffffff00;
  FStack_168 = (ForElementType<unsigned_int>)(CONCAT71(uStack_18f,local_190) & 0xffffffffffffffe0);
  uStack_160._4_4_ = uStack_184;
  uStack_160._0_4_ = 0x6ff;
  uStack_150 = 0;
  local_130.AllMask.Bits.NumBits = 0;
  local_130.AllMask.Bits.MaxBits = 0x180;
  local_148 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask>)
              &TStatId::TStatId_NAME_None;
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_7c = 0x180;
  local_48 = 0;
  local_44 = 0x180;
  local_190 = local_190 & 0xe0;
  FStack_140 = FStack_168;
  local_138 = uStack_160;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_158,&local_130);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
  local_1b8._0_8_ = &local_1c8;
  local_1b8._8_8_ = aFStack_1c6;
  UE::MovieScene::FComponentMask::SetAll
            (&local_130.NoneMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_1b8);
  FVar5 = StatPtr_MovieSceneEval_EvaluateStringChannelTask;
  if (StatPtr_MovieSceneEval_EvaluateStringChannelTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask>)0x0) {
    pFVar4 = ::FName::FName((FName *)local_1b8,"MovieSceneEval_EvaluateStringChannelTask");
    FVar5 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_MovieSceneEval_EvaluateStringChannelTask,*pFVar4,
                       L"MovieScene: Evaluate string channels","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  local_148 = FVar5;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
  ::Dispatch_PerEntity<UE::MovieScene::FEvaluateStringChannels>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
              *)local_158,(FEntityManager *)local_1b8,
             (FSystemTaskPrerequisites *)(*(longlong *)&this->field_0x28 + 0x28),
             (FSystemSubsequentTasks *)param_1);
  if ((FName)local_1b8._0_8_ != (FName)0x0) {
    LOCK();
    pFVar1 = (FComponentTypeID *)(local_1b8._0_8_ + 0x30);
    iVar2 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_1b8._0_8_)(local_1b8._0_8_,1);
    }
  }
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnSchedulePersistentTasks @ 1468c3450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStringChannelEvaluatorSystem::OnSchedulePersistentTasks
          (UStringChannelEvaluatorSystem *this,IEntitySystemScheduler *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask> FVar3;
  undefined1 auStackY_228 [32];
  ushort local_1c8;
  FComponentTypeID local_1c6 [3];
  undefined1 local_1c0 [8];
  undefined8 uStack_1b8;
  TStatIdData *pTStack_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined1 local_198 [16];
  code *local_188;
  undefined1 local_180;
  TComponentTypeID<UE::MovieScene::FSourceStringChannel> local_178;
  TComponentTypeID<FFrameTime> TStack_176;
  TComponentTypeID<FString> TStack_174;
  undefined2 uStack_172;
  undefined8 uStack_170;
  TStatIdData *pTStack_168;
  ulonglong uStack_160;
  uchar auStack_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask> local_138;
  ulonglong uStack_130;
  uchar local_128 [8];
  FEntityComponentFilter local_120;
  int local_70;
  int local_6c;
  int local_38;
  int local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pTStack_1b0 = &TStatId::TStatId_NAME_None;
  uStack_1b8._0_1_ = '\0';
  uStack_1b8._1_7_ = 0;
  local_178 = pFVar1->StringChannel;
  TStack_176 = pFVar1->EvalTime;
  TStack_174 = pFVar1->StringResult;
  local_1c8 = (pFVar1->Tags).Ignored.Value;
  uStack_170 = 0;
  pTStack_168 = &TStatId::TStatId_NAME_None;
  uStack_1a0 = 0x6ff;
  local_148._2_2_ = TStack_176;
  local_148._0_2_ = local_178;
  local_148._4_2_ = TStack_174;
  local_148._6_2_ = uStack_172;
  uStack_19c = uStack_19c & 0xffffff00;
  uStack_160 = CONCAT71(uStack_1a7,local_1a8) & 0xffffffffffffffe0;
  auStack_158[4] = (undefined1)uStack_19c;
  auStack_158[5] = uStack_19c._1_1_;
  auStack_158[6] = uStack_19c._2_1_;
  auStack_158[7] = uStack_19c._3_1_;
  auStack_158[0] = 0xff;
  auStack_158[1] = '\x06';
  auStack_158[2] = '\0';
  auStack_158[3] = '\0';
  uStack_140 = 0;
  local_120.AllMask.Bits.NumBits = 0;
  local_120.AllMask.Bits.MaxBits = 0x180;
  local_138 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask>)
              &TStatId::TStatId_NAME_None;
  local_120.NoneMask.Bits.NumBits = 0;
  local_120.NoneMask.Bits.MaxBits = 0x180;
  local_120.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ComplexMasks.ArrayNum = 0;
  local_120.ComplexMasks.ArrayMax = 0;
  local_70 = 0;
  local_6c = 0x180;
  local_38 = 0;
  local_34 = 0x180;
  local_1a8 = local_1a8 & 0xe0;
  uStack_130 = uStack_160;
  local_128 = (uchar  [8])auStack_158._0_8_;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)&local_148,&local_120);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)((longlong)&local_148 + 2),&local_120);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)((longlong)&local_148 + 4),&local_120);
  local_198._0_8_ = &local_1c8;
  local_198._8_8_ = local_1c6;
  UE::MovieScene::FComponentMask::SetAll
            (&local_120.NoneMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_198);
  FVar3 = StatPtr_MovieSceneEval_EvaluateStringChannelTask;
  if (StatPtr_MovieSceneEval_EvaluateStringChannelTask ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask>)0x0) {
    pFVar2 = ::FName::FName((FName *)local_198,"MovieSceneEval_EvaluateStringChannelTask");
    FVar3 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateStringChannelTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_MovieSceneEval_EvaluateStringChannelTask,*pFVar2,
                       L"MovieScene: Evaluate string channels","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  local_180 = 3;
  pTStack_1b0 = (TStatIdData *)(uStack_130 & 0xfffffffffffffffd);
  local_1c0 = (undefined1  [8])0x15135b110;
  local_188 = UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
              ::ScheduledRun_PerEntity;
  uStack_1b8 = FVar3;
  local_138 = FVar3;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
  ::ScheduleImpl<UE::MovieScene::FEvaluateStringChannels>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
              *)&local_148,(FEntityManager *)local_198,
             (IEntitySystemScheduler *)(*(longlong *)&this->field_0x28 + 0x28),
             (FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_1c0);
  if (local_120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUStringChannelEvaluatorSystem @ 1468d02d0

void __cdecl UStringChannelEvaluatorSystem::StaticRegisterNativesUStringChannelEvaluatorSystem(void)

{
  return;
}

