// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticClass @ 146101660

UClass * __cdecl UMovieSceneEvalTimeSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvalTimeSystem",
               &Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEvalTimeSystem,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneEvalTimeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEvalTimeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton;
}

// UMovieSceneEvalTimeSystem @ 14611b690

UMovieSceneEvalTimeSystem * __thiscall
UMovieSceneEvalTimeSystem::UMovieSceneEvalTimeSystem
          (UMovieSceneEvalTimeSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieSceneEvalTimeSystem__6B_;
  (this->EvaluatedTimes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FEvaluatedTime>)0x0;
  (this->EvaluatedTimes).ArrayNum = 0;
  (this->EvaluatedTimes).ArrayMax = 0x10;
  (this->RelevantFilter).AllMask.Bits.NumBits = 0;
  (this->RelevantFilter).AllMask.Bits.MaxBits = 0x180;
  (this->RelevantFilter).NoneMask.Bits.NumBits = 0;
  (this->RelevantFilter).NoneMask.Bits.MaxBits = 0x180;
  (this->RelevantFilter).ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelevantFilter).ComplexMasks.ArrayNum = 0;
  (this->RelevantFilter).ComplexMasks.ArrayMax = 0;
  return this;
}

// UMovieSceneEvalTimeSystem @ 14611b720

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEvalTimeSystem * __thiscall
UMovieSceneEvalTimeSystem::UMovieSceneEvalTimeSystem
          (UMovieSceneEvalTimeSystem *this,FObjectInitializer *param_1)

{
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar1;
  FComponentTypeID FVar2;
  undefined4 uVar3;
  int iVar4;
  FBuiltInComponentTypes *pFVar5;
  FScriptContainerElement *this_00;
  undefined8 local_res8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEvalTimeSystem__6B_;
  pTVar1 = &(this->RelevantFilter).ComplexMasks;
  (this->EvaluatedTimes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FEvaluatedTime>)0x0;
  (this->EvaluatedTimes).ArrayNum = 0;
  (this->EvaluatedTimes).ArrayMax = 0x10;
  (this->RelevantFilter).AllMask.Bits.NumBits = 0;
  (this->RelevantFilter).AllMask.Bits.MaxBits = 0x180;
  (this->RelevantFilter).NoneMask.Bits.NumBits = 0;
  (this->RelevantFilter).NoneMask.Bits.MaxBits = 0x180;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RelevantFilter).ComplexMasks.ArrayNum = 0;
  (this->RelevantFilter).ComplexMasks.ArrayMax = 0;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(undefined4 *)&this->_padding_ = 2;
  uVar3._0_2_ = pFVar5->EvalTime;
  uVar3._2_2_ = pFVar5->EvalSeconds;
  iVar4 = (this->RelevantFilter).ComplexMasks.ArrayNum;
  local_res8 = (UObject *)CONCAT44(local_res8._4_4_,uVar3);
  if (iVar4 == (this->RelevantFilter).ComplexMasks.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&pTVar1->AllocatorInstance,
                       &(this->RelevantFilter).ComplexMasks.ArrayMax);
  }
  (this->RelevantFilter).ComplexMasks.ArrayNum = iVar4 + 1;
  local_28._First = (FComponentTypeID *)&local_res8;
  this_00 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x3c;
  local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 4);
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_28);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UObject *)this->_padding_;
    FVar2.Value = *(ushort *)&pFVar5->EvalTime;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar2);
    local_res8 = (UObject *)this->_padding_;
    FVar2.Value = *(ushort *)&pFVar5->EvalSeconds;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar2);
  }
  return this;
}

// ~UMovieSceneEvalTimeSystem @ 14611e830

void __thiscall
UMovieSceneEvalTimeSystem::~UMovieSceneEvalTimeSystem(UMovieSceneEvalTimeSystem *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::MovieScene::FEvaluatedTime> FVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneEvalTimeSystem__6B_;
  pFVar1 = (this->RelevantFilter).ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->EvaluatedTimes).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FEvaluatedTime>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14613c380

UClass * __cdecl UMovieSceneEvalTimeSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvalTimeSystem",
               &Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEvalTimeSystem,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneEvalTimeSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEvalTimeSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.InnerSingleton;
}

// IsRelevantImpl @ 146141400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEvalTimeSystem::IsRelevantImpl
          (UMovieSceneEvalTimeSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (&this->RelevantFilter == (FEntityComponentFilter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFilter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x405,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
            (&local_20,&param_1->EntityManager,&this->RelevantFilter);
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
            (&local_38,&param_1->EntityManager);
  bVar2 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_20,&local_38);
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  return bVar2;
}

// OnRun @ 146146410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEvalTimeSystem::OnRun
          (UMovieSceneEvalTimeSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FBuiltInComponentTypes *pFVar8;
  FName *pFVar9;
  FBuiltInComponentTypes *pFVar10;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes> FVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar13;
  undefined1 auStackY_4a8 [32];
  FComponentTypeID local_448;
  FComponentTypeID local_446;
  FComponentTypeID local_444;
  FComponentTypeID local_442;
  undefined1 local_440 [16];
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_430;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_428;
  undefined1 local_420 [16];
  undefined1 local_410 [32];
  byte local_3f0;
  undefined7 uStack_3ef;
  TTypeCompatibleBytes<unsigned_int> TStack_3e8;
  TTypeCompatibleBytes<unsigned_int> TStack_3e4;
  undefined8 local_3d8;
  TStatIdData *pTStack_3d0;
  byte local_3c8;
  uchar auStack_3c7 [7];
  undefined1 auStack_3c0 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3a8;
  undefined1 local_398 [24];
  byte local_380;
  undefined1 local_378 [10];
  TComponentTypeID<FFrameTime> TStack_36e;
  TTypeCompatibleBytes<unsigned_int> TStack_36c;
  undefined8 uStack_368;
  TStatIdData *pTStack_360;
  ulonglong uStack_358;
  undefined1 auStack_350 [10];
  TComponentTypeID<double> TStack_346;
  ELockdownState EStack_344;
  undefined1 auStack_340 [16];
  ulonglong uStack_330;
  undefined8 uStack_328;
  FName local_320;
  FName local_318;
  FName local_310;
  FSystemTaskPrerequisites local_308;
  undefined1 local_288 [16];
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes> local_278;
  ulonglong uStack_270;
  TTypeCompatibleBytes<unsigned_int> local_268 [2];
  FEntityComponentFilter local_260;
  uint local_1b0;
  uint local_1ac;
  int local_178;
  FEntitySystemMaybeAtomicInt32 local_174;
  undefined1 local_168 [8];
  undefined1 auStack_160 [16];
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_308.Prereqs.ArrayMax = 4;
  local_308.Prereqs.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
  local_308.Prereqs.ArrayNum = 0;
  local_308.AllTasks.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_308.AllTasks.ArrayNum._0_1_ = '\0';
  local_308.AllTasks.ArrayNum._1_1_ = '\0';
  local_308.AllTasks.ArrayNum._2_1_ = '\0';
  local_308.AllTasks.ArrayNum._3_1_ = '\0';
  local_308.AllTasks.ArrayMax._0_1_ = '\x04';
  local_308.AllTasks.ArrayMax._1_1_ = '\0';
  local_308.AllTasks.ArrayMax._2_1_ = '\0';
  local_308.AllTasks.ArrayMax._3_1_ = '\0';
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_380 = local_380 & 0xe0;
  local_398._8_8_ = 0;
  local_378._0_4_ = 0x6ff;
  local_378[4] = 0;
  local_398._16_8_ = UE::MovieScene::StatPtr_MovieSceneEval_GatherEvalTimes;
  if (UE::MovieScene::StatPtr_MovieSceneEval_GatherEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_GatherEvalTimes>)0x0) {
    pFVar9 = ::FName::FName(&local_320,"MovieSceneEval_GatherEvalTimes");
    local_398._16_8_ =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &UE::MovieScene::StatPtr_MovieSceneEval_GatherEvalTimes,*pFVar9,
                    L"MovieScene: Gather evaluation times","STATGROUP_MovieSceneECS",
                    "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  lVar5 = this->_padding_;
  pTVar1 = &this->EvaluatedTimes;
  local_440._8_8_ = pTVar1;
  if ((*(longlong *)(lVar5 + 0x580) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_430 = *(TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                **)(lVar5 + 0x580);
  UE::MovieScene::TEntityTaskComponents<>::
  Dispatch<UE::MovieScene::FGatherTimes,UE::MovieScene::FInstanceRegistry_*,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
            ((TEntityTaskComponents<> *)local_398,(FEntityManager *)local_440,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (FInstanceRegistry **)0x0,&local_430);
  if ((FBaseGraphTask *)local_440._0_8_ != (FBaseGraphTask *)0x0) {
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (&local_308,(FComponentTypeID)*(ushort *)&pFVar8->EvalTime,
               (TRefCountPtr<FBaseGraphTask> *)local_440);
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (&local_308,(FComponentTypeID)*(ushort *)&pFVar8->EvalSeconds,
               (TRefCountPtr<FBaseGraphTask> *)local_440);
  }
  local_410._24_8_ = &TStatId::TStatId_NAME_None;
  local_378._8_2_ = pFVar8->InstanceHandle;
  TStack_36e = pFVar8->EvalTime;
  local_410[0x10] = '\0';
  local_410[0x11] = '\0';
  local_410[0x12] = '\0';
  local_410[0x13] = '\0';
  local_410[0x14] = '\0';
  local_410[0x15] = '\0';
  local_410[0x16] = '\0';
  local_410[0x17] = '\0';
  TStack_3e8.Pad[0] = 0xff;
  TStack_3e8.Pad[1] = '\x06';
  TStack_3e8.Pad[2] = '\0';
  TStack_3e8.Pad[3] = '\0';
  TStack_3e4.Pad = TStack_3e4.Pad & 0xffffff00;
  uStack_358 = CONCAT71(uStack_3ef,local_3f0) & 0xffffffffffffffe0;
  auStack_350[4] = TStack_3e4.Pad[0];
  auStack_350[5] = TStack_3e4.Pad[1];
  auStack_350[6] = TStack_3e4.Pad[2];
  auStack_350[7] = TStack_3e4.Pad[3];
  auStack_350._0_4_ = 0x6ff;
  uStack_368 = 0;
  pTStack_360 = &TStatId::TStatId_NAME_None;
  local_3f0 = local_3f0 & 0xe0;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_288._2_2_ = TStack_36e;
  local_288._0_2_ = local_378._8_2_;
  local_288[4] = TStack_36c.Pad[0];
  local_288[5] = TStack_36c.Pad[1];
  local_288[6] = TStack_36c.Pad[2];
  local_288[7] = TStack_36c.Pad[3];
  local_260.AllMask.Bits.NumBits._0_1_ = '\0';
  local_260.AllMask.Bits.NumBits._1_1_ = '\0';
  local_260.AllMask.Bits.NumBits._2_1_ = '\0';
  local_260.AllMask.Bits.NumBits._3_1_ = '\0';
  local_448.Value = (pFVar10->Tags).FixedTime.Value;
  local_288._8_8_ = uStack_368;
  local_268[1].Pad[0] = TStack_3e4.Pad[0];
  local_268[1].Pad[1] = TStack_3e4.Pad[1];
  local_268[1].Pad[2] = TStack_3e4.Pad[2];
  local_268[1].Pad[3] = TStack_3e4.Pad[3];
  local_268[0].Pad[0] = TStack_3e8.Pad[0];
  local_268[0].Pad[1] = TStack_3e8.Pad[1];
  local_268[0].Pad[2] = TStack_3e8.Pad[2];
  local_268[0].Pad[3] = TStack_3e8.Pad[3];
  local_278 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)
              pTStack_360;
  uStack_270 = uStack_358;
  local_260.AllMask.Bits.MaxBits._0_1_ = 0x80;
  local_260.AllMask.Bits.MaxBits._1_1_ = '\x01';
  local_260.AllMask.Bits.MaxBits._2_1_ = '\0';
  local_260.AllMask.Bits.MaxBits._3_1_ = '\0';
  local_260.NoneMask.Bits.NumBits._0_1_ = '\0';
  local_260.NoneMask.Bits.NumBits._1_1_ = '\0';
  local_260.NoneMask.Bits.NumBits._2_1_ = '\0';
  local_260.NoneMask.Bits.NumBits._3_1_ = '\0';
  local_260.NoneMask.Bits.MaxBits._0_1_ = 0x80;
  local_260.NoneMask.Bits.MaxBits._1_1_ = '\x01';
  local_260.NoneMask.Bits.MaxBits._2_1_ = '\0';
  local_260.NoneMask.Bits.MaxBits._3_1_ = '\0';
  local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.ComplexMasks.ArrayNum = 0;
  local_260.ComplexMasks.ArrayMax = 0;
  local_1b0 = 0;
  local_1ac = 0x180;
  local_178 = 0;
  local_174.Payload = 0x180;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_288,&local_260);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_288 + 2),&local_260);
  local_3b8._First = &local_448;
  local_3b8._Last = &local_446;
  UE::MovieScene::FComponentMask::SetAll(&local_260.NoneMask,&local_3b8);
  FVar11 = UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes;
  if (UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)0x0) {
    pFVar9 = ::FName::FName(&local_318,"MovieSceneEval_AssignEvalTimes");
    FVar11 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes,*pFVar9,
                        L"MovieScene: Assign evaluation times","STATGROUP_MovieSceneECS",
                        "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true
                        ,false,MCR_Invalid);
  }
  local_428 = pTVar1;
  local_278 = FVar11;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
  ::
  Dispatch_PerEntity<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
              *)local_288,(FEntityManager *)local_420,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
             (FSystemSubsequentTasks *)&local_308,
             (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              **)param_2);
  if ((undefined8 *)local_420._0_8_ != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_420._0_8_ + 0x30);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_420._0_8_)(local_420._0_8_,1);
    }
  }
  if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
  }
  pTStack_3d0 = &TStatId::TStatId_NAME_None;
  auStack_350._8_2_ = pFVar8->InstanceHandle;
  TStack_346 = pFVar8->EvalSeconds;
  local_3d8 = 0;
  auStack_3c0._0_4_ = 0x6ff;
  auStack_3c0._4_4_ = auStack_3c0._4_4_ & 0xffffff00;
  uStack_330 = CONCAT71(auStack_3c7,local_3c8) & 0xffffffffffffffe0;
  uStack_328._4_4_ = auStack_3c0._4_4_;
  uStack_328._0_4_ = 0x6ff;
  auStack_340._0_8_ = 0;
  auStack_340._8_8_ = &TStatId::TStatId_NAME_None;
  local_3c8 = local_3c8 & 0xe0;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_168._2_2_ = TStack_346;
  local_168._0_2_ = auStack_350._8_2_;
  local_168._4_4_ = EStack_344;
  local_140.AllMask.Bits.NumBits = 0;
  local_444.Value = (pFVar8->Tags).FixedTime.Value;
  auStack_160._0_8_ = auStack_340._0_8_;
  local_148._4_4_ = auStack_3c0._4_4_;
  local_148._0_4_ = auStack_3c0._0_4_;
  auStack_160._8_8_ = auStack_340._8_8_;
  uStack_150 = uStack_330;
  local_140.AllMask.Bits.MaxBits = 0x180;
  local_140.NoneMask.Bits.NumBits = 0;
  local_140.NoneMask.Bits.MaxBits = 0x180;
  local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ComplexMasks.ArrayNum = 0;
  local_140.ComplexMasks.ArrayMax = 0;
  local_90 = 0;
  local_8c = 0x180;
  local_58 = 0;
  local_54 = 0x180;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_168,&local_140);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_140);
  local_3a8._First = &local_444;
  local_3a8._Last = &local_442;
  UE::MovieScene::FComponentMask::SetAll(&local_140.NoneMask,&local_3a8);
  FVar11 = UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes;
  if (UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)0x0) {
    pFVar9 = ::FName::FName(&local_310,"MovieSceneEval_AssignEvalTimes");
    FVar11 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes,*pFVar9,
                        L"MovieScene: Assign evaluation times","STATGROUP_MovieSceneECS",
                        "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true
                        ,false,MCR_Invalid);
  }
  local_420._8_8_ = pTVar1;
  auStack_160._8_8_ = FVar11;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
  ::
  Dispatch_PerEntity<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
              *)local_168,(FEntityManager *)local_410,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
             (FSystemSubsequentTasks *)&local_308,
             (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              **)param_2);
  if ((undefined8 *)local_410._0_8_ != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_410._0_8_ + 0x30);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)local_410._0_8_)(local_410._0_8_,1);
    }
  }
  if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
  }
  if ((FBaseGraphTask *)local_440._0_8_ != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar3 = (undefined1 *)(local_440._0_8_ + 0x30);
    iVar4 = *(int *)puVar3;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
    if ((iVar4 == 1) && ((FBaseGraphTask *)local_440._0_8_ != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_440._0_8_)(local_440._0_8_,1);
    }
  }
  FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_308.AllTasks;
  if (local_308.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar12 = local_308.AllTasks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar12,local_308.AllTasks.ArrayNum);
  if (local_308.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_308.AllTasks.AllocatorInstance.SecondaryData);
  }
  FVar13 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_308;
  if (local_308.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar13 = local_308.Prereqs.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar13,local_308.Prereqs.ArrayNum);
  if (local_308.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)local_308.Prereqs.AllocatorInstance.SecondaryData);
  }
  return;
}

// OnSchedulePersistentTasks @ 1461484c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEvalTimeSystem::OnSchedulePersistentTasks
          (UMovieSceneEvalTimeSystem *this,IEntitySystemScheduler *param_1)

{
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FBuiltInComponentTypes *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 auStackY_478 [32];
  FComponentTypeID local_418;
  FComponentTypeID local_416;
  FComponentTypeID local_414;
  FComponentTypeID local_412;
  FTaskID local_410;
  FTaskID local_40c;
  FTaskID local_408;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_400;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_3f8;
  undefined1 local_3f0 [16];
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_3e0;
  byte local_3d0;
  undefined1 local_3c8 [16];
  ForElementType<unsigned_int> local_3b8;
  undefined1 local_3b0 [16];
  ulonglong local_3a0;
  undefined8 local_390;
  TStatIdData *pTStack_388;
  byte local_380;
  undefined7 uStack_37f;
  undefined4 uStack_378;
  uint uStack_374;
  undefined8 local_368;
  TStatIdData *pTStack_360;
  byte local_358;
  undefined7 uStack_357;
  undefined4 uStack_350;
  uint uStack_34c;
  code *local_348;
  undefined1 local_340;
  initializer_list<UE::MovieScene::FComponentTypeID> local_338;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_328;
  undefined1 local_320;
  initializer_list<UE::MovieScene::FComponentTypeID> local_318;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_308;
  undefined1 local_300;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_2f8;
  TComponentTypeID<FFrameTime> TStack_2f6;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  TStatIdData *pTStack_2e8;
  ulonglong uStack_2e0;
  undefined8 uStack_2d8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_2d0;
  TComponentTypeID<double> TStack_2ce;
  Type TStack_2cc;
  undefined8 uStack_2c8;
  TStatIdData *pTStack_2c0;
  ulonglong uStack_2b8;
  undefined1 auStack_2b0 [16];
  FName local_2a0;
  FName local_298 [2];
  undefined1 local_288 [8];
  undefined8 uStack_280;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes> local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  FEntityComponentFilter local_260;
  int local_1b0;
  int local_1ac;
  uint local_178;
  uint local_174;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes> local_158;
  ulonglong uStack_150;
  undefined1 local_148 [56];
  int local_110;
  int local_10c;
  FComponentMask local_108;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  lVar2 = this->_padding_;
  pTVar1 = &this->EvaluatedTimes;
  if ((*(longlong *)(lVar2 + 0x580) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x580);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_3e0.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)UE::MovieScene::StatPtr_MovieSceneEval_GatherEvalTimes;
  if (UE::MovieScene::StatPtr_MovieSceneEval_GatherEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_GatherEvalTimes>)0x0) {
    pFVar6 = ::FName::FName((FName *)(auStack_2b0 + 8),"MovieSceneEval_GatherEvalTimes");
    local_3e0.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &UE::MovieScene::StatPtr_MovieSceneEval_GatherEvalTimes,*pFVar6,
                    L"MovieScene: Gather evaluation times","STATGROUP_MovieSceneECS",
                    "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_3d0 = local_3d0 & 0xe0;
  local_3e0.Object = (ITaskContext *)0x151200788;
  local_340 = 0;
  local_348 = UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTimes>::Execute;
  local_3f0._8_8_ = ::operator_new(0x28);
  if ((TReferenceControllerBase<1> *)local_3f0._8_8_ == (TReferenceControllerBase<1> *)0x0) {
    local_3f0._0_8_ = ___xmm_00000000000000000000000000000010;
    local_3f0._8_8_ = _UNK_150651568;
  }
  else {
    ((TReferenceControllerBase<1> *)local_3f0._8_8_)->SharedReferenceCount = (atomic<int>)0x1;
    ((TReferenceControllerBase<1> *)local_3f0._8_8_)->WeakReferenceCount = (atomic<int>)0x1;
    ((TReferenceControllerBase<1> *)local_3f0._8_8_)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TAnonTaskWrapper_UFGatherTimes_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(local_3f0._8_8_ + 0x10))->SharedReferenceCount =
         (atomic<int>)(int)uVar3;
    ((TReferenceControllerBase<1> *)(local_3f0._8_8_ + 0x10))->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    ((TReferenceControllerBase<1> *)(local_3f0._8_8_ + 0x10))->_padding_ =
         (longlong)&___7__TAnonTaskWrapper_UFGatherTimes_MovieScene_UE___MovieScene_UE__6B_;
    ((TReferenceControllerBase<1> *)(local_3f0._8_8_ + 0x20))->_padding_ = (longlong)pTVar1;
    if (((TReferenceControllerBase<1> *)(local_3f0._8_8_ + 0x10) ==
         (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    ((TReferenceControllerBase<1> *)local_3f0._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_3f0._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = (TReferenceControllerBase<1> *)local_3f0._8_8_;
    local_3f0._0_8_ = (TReferenceControllerBase<1> *)(local_3f0._8_8_ + 0x10);
  }
  UE::MovieScene::IEntitySystemScheduler::AddTask
            (param_1,(FTaskParams *)&local_410,&local_3e0,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_3f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_390 = 0;
  uStack_378 = 0x6ff;
  pTStack_388 = &TStatId::TStatId_NAME_None;
  local_2f8 = pFVar7->InstanceHandle;
  local_418.Value = (pFVar7->Tags).FixedTime.Value;
  TStack_2f6 = pFVar7->EvalTime;
  uStack_2f0 = 0;
  pTStack_2e8 = &TStatId::TStatId_NAME_None;
  uStack_374 = uStack_374 & 0xffffff00;
  uStack_2e0 = CONCAT71(uStack_37f,local_380) & 0xffffffffffffffe0;
  uStack_2d8._4_4_ = uStack_374;
  uStack_2d8._0_4_ = 0x6ff;
  local_288._2_2_ = TStack_2f6;
  local_288._0_2_ = local_2f8;
  local_288._4_4_ = uStack_2f4;
  local_260.AllMask.Bits.NumBits = 0;
  local_260.AllMask.Bits.MaxBits._0_1_ = 0x80;
  local_260.AllMask.Bits.MaxBits._1_1_ = '\x01';
  local_260.AllMask.Bits.MaxBits._2_1_ = '\0';
  local_260.AllMask.Bits.MaxBits._3_1_ = '\0';
  local_260.NoneMask.Bits.NumBits = 0;
  uStack_280 = 0;
  local_278 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)
              &TStatId::TStatId_NAME_None;
  local_260.NoneMask.Bits.MaxBits._0_1_ = 0x80;
  local_260.NoneMask.Bits.MaxBits._1_1_ = '\x01';
  local_260.NoneMask.Bits.MaxBits._2_1_ = '\0';
  local_260.NoneMask.Bits.MaxBits._3_1_ = '\0';
  local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.ComplexMasks.ArrayNum = 0;
  local_260.ComplexMasks.ArrayMax = 0;
  local_1b0 = 0;
  local_1ac = 0x180;
  local_178 = 0;
  local_174 = 0x180;
  local_380 = local_380 & 0xe0;
  uStack_270 = uStack_2e0;
  local_268 = uStack_2d8;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_288,&local_260);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_288 + 2),&local_260);
  local_338._First = &local_418;
  local_338._Last = &local_416;
  UE::MovieScene::FComponentMask::SetAll(&local_260.NoneMask,&local_338);
  local_3c8._8_8_ = UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes;
  if (UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)0x0) {
    pFVar6 = ::FName::FName(&local_2a0,"MovieSceneEval_AssignEvalTimes");
    local_3c8._8_8_ =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes,*pFVar6,
                    L"MovieScene: Assign evaluation times","STATGROUP_MovieSceneECS",
                    "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_3b8 = (ForElementType<unsigned_int>)(uStack_270 & 0xfffffffffffffffd);
  local_3c8._0_8_ = L"struct UE::MovieScene::FAssignEvalTimesTask";
  local_328 = (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               *)UE::MovieScene::
                 TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                 ::ScheduledRun_PerEntity;
  local_320 = 3;
  local_400 = pTVar1;
  local_278 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)
              local_3c8._8_8_;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
  ::
  ScheduleImpl<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
              *)local_288,(FEntityManager *)&local_40c,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_3c8,&local_328);
  if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
  }
  pTStack_360 = &TStatId::TStatId_NAME_None;
  local_2d0 = pFVar7->InstanceHandle;
  TStack_2ce = pFVar7->EvalSeconds;
  local_414.Value = (pFVar7->Tags).FixedTime.Value;
  local_368 = 0;
  uStack_350 = 0x6ff;
  uStack_34c = uStack_34c & 0xffffff00;
  uStack_2b8 = CONCAT71(uStack_357,local_358) & 0xffffffffffffffe0;
  auStack_2b0._4_4_ = uStack_34c;
  auStack_2b0._0_4_ = 0x6ff;
  uStack_2c8 = 0;
  pTStack_2c0 = &TStatId::TStatId_NAME_None;
  local_110 = 0;
  local_168._2_2_ = TStack_2ce;
  local_168._0_2_ = local_2d0;
  local_168._4_4_ = TStack_2cc;
  local_10c = 0x180;
  local_108.Bits.NumBits = 0;
  local_108.Bits.MaxBits = 0x180;
  uStack_160 = 0;
  local_158 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)
              &TStatId::TStatId_NAME_None;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  local_90 = 0;
  local_8c = 0x180;
  local_58 = 0;
  local_54 = 0x180;
  local_358 = local_358 & 0xe0;
  uStack_150 = uStack_2b8;
  local_148._0_8_ = auStack_2b0._0_8_;
  UE::MovieScene::AddAccessorToFilter
            ((FComponentAccess *)local_168,(FEntityComponentFilter *)(local_148 + 8));
  UE::MovieScene::AddAccessorToFilter
            ((FComponentAccess *)(local_168 + 2),(FEntityComponentFilter *)(local_148 + 8));
  local_318._First = &local_414;
  local_318._Last = &local_412;
  UE::MovieScene::FComponentMask::SetAll(&local_108,&local_318);
  local_3b0._8_8_ = UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes;
  if (UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)0x0) {
    pFVar6 = ::FName::FName(local_298,"MovieSceneEval_AssignEvalTimes");
    local_3b0._8_8_ =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &UE::MovieScene::StatPtr_MovieSceneEval_AssignEvalTimes,*pFVar6,
                    L"MovieScene: Assign evaluation times","STATGROUP_MovieSceneECS",
                    "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_3a0 = uStack_150 & 0xfffffffffffffffd;
  local_3b0._0_8_ = L"struct UE::MovieScene::FAssignEvalSecondsTask";
  local_308 = (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               *)UE::MovieScene::
                 TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
                 ::ScheduledRun_PerEntity;
  local_300 = 3;
  local_3f8 = pTVar1;
  local_158 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AssignEvalTimes>)
              local_3b0._8_8_;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
              *)local_168,(FEntityManager *)&local_408,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_3b0,&local_308);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_410,local_40c);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_410,local_408);
  return;
}

// StaticRegisterNativesUMovieSceneEvalTimeSystem @ 1461557f0

void __cdecl UMovieSceneEvalTimeSystem::StaticRegisterNativesUMovieSceneEvalTimeSystem(void)

{
  return;
}

