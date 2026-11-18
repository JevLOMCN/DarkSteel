// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 1462581f0

EAutomationTestFlags __thiscall FMovieSceneBlendingTest::GetTestFlags(FMovieSceneBlendingTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146258240

bool __thiscall FMovieSceneBlendingTest::IsStressTest(FMovieSceneBlendingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146258250

uint __thiscall FMovieSceneBlendingTest::GetRequiredDeviceNum(FMovieSceneBlendingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146258260

FString * __thiscall
FMovieSceneBlendingTest::GetTestSourceFileName
          (FMovieSceneBlendingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneBlendingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146258290

int __thiscall FMovieSceneBlendingTest::GetTestSourceFileLine(FMovieSceneBlendingTest *this)

{
  return 0x41;
}

// GetTests @ 1462582a0

/* WARNING: Removing unreachable block (ram,0x00014625838d) */
/* WARNING: Removing unreachable block (ram,0x000146258458) */

void __thiscall
FMovieSceneBlendingTest::GetTests
          (FMovieSceneBlendingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Blending.Basic");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 146258480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMovieSceneBlendingTest::RunTest(FMovieSceneBlendingTest *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FMovieSceneAnimTypeID FVar5;
  FMovieSceneEvaluationRange *pFVar6;
  TSharedRef<FInt32Actuator,1> *pTVar7;
  undefined1 auStackY_478 [32];
  undefined1 local_438 [16];
  undefined4 local_428;
  undefined1 local_424;
  undefined1 local_420 [24];
  FMovieSceneContext local_408;
  ulong64 local_388;
  FInt32Actuator *local_380;
  TReferenceControllerBase<1> *local_378;
  TSharedRef<FInt32Actuator,1> local_370;
  FPersistentEvaluationData local_360;
  FMovieSceneEvaluationRange local_330;
  undefined1 local_308 [32];
  void *local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  ForElementType<FSetElementId> local_2c8;
  int local_2c0;
  undefined1 local_2b8 [32];
  void *local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  undefined4 local_284;
  void *local_278;
  undefined4 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  IMovieScenePlayer local_258;
  FMovieSceneRootEvaluationTemplateInstance local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&`public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar5.ID = `public:_static_struct_FMovieSceneBlendingActuatorID___cdecl_FInt32Actuator::GetID(void)'
             ::__l2::TypeID.ID;
  local_438._8_8_ = (TSharedRef<IMovieSceneBlendingActuator,1> *)0xffffffffffffffff;
  local_428 = 0xffffffff;
  local_424 = 0;
  local_438._0_8_ = (FMovieSceneBlendingActuatorID *)0x0;
  pFVar6 = FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                     (&local_330,(FFrameTime)0x0,(FFrameRate)0x10000ea60);
  fVar3 = __real_3f800000;
  local_408._padding_._0_1_ = (pFVar6->EvaluationRange).LowerBound.Type;
  local_408._padding_._1_3_ = *(undefined3 *)&(pFVar6->EvaluationRange).LowerBound.field_0x1;
  local_408._padding_._4_4_ = (pFVar6->EvaluationRange).LowerBound.Value.FrameNumber;
  local_408._padding_ = *(longlong *)&(pFVar6->EvaluationRange).LowerBound.Value.SubFrame;
  local_408._padding_ = *(longlong *)&(pFVar6->EvaluationRange).UpperBound.Value;
  local_408._padding_ = *(longlong *)&pFVar6->CurrentFrameRate;
  local_408._padding_._0_4_ = pFVar6->Direction;
  local_408._padding_._4_4_ = pFVar6->TimeOverride;
  local_408.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
  local_408.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
  local_408.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
  local_408.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_408.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
  local_408.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_408.RootToSequenceWarpCounter);
  local_408.bHasPostRollStartTime = false;
  local_408.bHasPreRollEndTime = false;
  local_408.bSectionPostRoll = false;
  local_408.bSectionPreRoll = false;
  local_408.bSilent = false;
  local_408.bHasLooped = false;
  local_408.bHasJumped = false;
  local_408.Status = Stopped;
  local_408.PrePostRollStartEndTime.Value = -0x80000000;
  local_408.HierarchicalBias = 0;
  IMovieScenePlayer::IMovieScenePlayer(&local_258);
  local_258._padding_ = (longlong)&___7FNullPlayer__6B_;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance(&local_68);
  FPersistentEvaluationData::FPersistentEvaluationData(&local_360,&local_258);
  local_308._0_8_ = (FScriptContainerElement *)0x0;
  local_308._8_8_ = 0;
  local_2e8 = (void *)0x0;
  local_2e0 = 0;
  local_2dc = 0x80;
  local_2d8 = 0xffffffff;
  local_2d4 = 0;
  local_2c8 = (ForElementType<FSetElementId>)0x0;
  local_2c0 = 0;
  local_2b8._0_8_ = (FScriptContainerElement *)0x0;
  local_2b8._8_8_ = 0;
  local_298 = (void *)0x0;
  local_290 = 0;
  local_28c = 0x80;
  local_288 = 0xffffffff;
  local_284 = 0;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260._0_4_ = 0;
  local_260._4_4_ = 0;
  pTVar7 = MakeShared<FInt32Actuator,1>(&local_370);
  local_380 = pTVar7->Object;
  local_378 = (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_378 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_378->SharedReferenceCount = (atomic<int>)((int)local_378->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_420._0_8_ = &local_388;
  local_420._8_8_ = &local_380;
  local_388 = FVar5.ID;
  TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>_>
            ((TSet<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>,0>,FDefaultSetAllocator>
              *)local_308,
             (TPairInitializer<FMovieSceneBlendingActuatorID_const_&,TSharedRef<IMovieSceneBlendingActuator,1>_const_&>
              *)local_438,(bool *)local_420);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.SharedReferenceCount.ReferenceController);
  local_438._0_4_ = 1;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             fVar3,-1);
  local_438._0_4_ = 1;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Additive,
             fVar3,-1);
  fVar4 = __real_3f000000;
  local_438._0_4_ = 10;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Additive,
             __real_3f000000,-1);
  FMovieSceneBlendingAccumulator::Apply
            ((FMovieSceneBlendingAccumulator *)local_308,&local_408,&local_360,&local_258);
  if (UE::MovieScene::Test::GBlendingTestValue != 7) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_420,L"Expected result 1 to be %d, actual %d.");
    (*pcVar1)(this,local_420,0);
    if ((FScriptContainerElement *)local_420._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_420._0_8_);
    }
  }
  UE::MovieScene::Test::GBlendingTestValue = -0x10101011;
  local_438._0_4_ = 10;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Additive,
             fVar3,-1);
  local_438._0_4_ = 500;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Relative,
             fVar3,-1);
  FMovieSceneBlendingAccumulator::Apply
            ((FMovieSceneBlendingAccumulator *)local_308,&local_408,&local_360,&local_258);
  if (UE::MovieScene::Test::GBlendingTestValue != -0x10100e13) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_420,L"Expected result 2 to be %d, actual %d.");
    (*pcVar1)(this,local_420,0);
    if ((FScriptContainerElement *)local_420._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_420._0_8_);
    }
  }
  UE::MovieScene::Test::GBlendingTestValue = -0x10101011;
  local_438._0_4_ = 7;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             fVar3,-1);
  local_438._0_4_ = 0x12;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             fVar3,-1);
  local_438._0_4_ = 0x1f;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             fVar3,-1);
  local_438._0_4_ = 0x1d;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             fVar3,-1);
  FMovieSceneBlendingAccumulator::Apply
            ((FMovieSceneBlendingAccumulator *)local_308,&local_408,&local_360,&local_258);
  if (UE::MovieScene::Test::GBlendingTestValue != 0x15) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_420,L"Expected result 3 to be %d, actual %d.");
    (*pcVar1)(this,local_420,0);
    if ((FScriptContainerElement *)local_420._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_420._0_8_);
    }
  }
  UE::MovieScene::Test::GBlendingTestValue = -0x10101011;
  local_438._0_4_ = 0x7230ff;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             fVar3,-1);
  local_438._0_4_ = 0xd9;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             fVar4,-1);
  local_438._0_4_ = 0x5cf7b7f;
  FMovieSceneBlendingAccumulator::BlendToken<int>
            ((FMovieSceneBlendingAccumulator *)local_308,(FMovieSceneBlendingActuatorID)FVar5.ID,
             (FMovieSceneEvaluationScope *)(local_438 + 8),&local_408,(int *)local_438,Absolute,
             __real_3dcccccd,-1);
  FMovieSceneBlendingAccumulator::Apply
            ((FMovieSceneBlendingAccumulator *)local_308,&local_408,&local_360,&local_258);
  if (UE::MovieScene::Test::GBlendingTestValue != 0xa4569b) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_420,L"Expected result 4 to be %d, actual %d.");
    (*pcVar1)(this,local_420,0);
    if ((FScriptContainerElement *)local_420._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_420._0_8_);
    }
  }
  DestructItems<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8>,int>
            ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)local_268.Data,
             (int)local_260);
  if ((TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)local_268.Data !=
      (TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,128,8> *)0x0) {
    FMemory::Free(local_268.Data);
  }
  local_270 = 0;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2b8,0,local_2b8._8_4_);
  iVar2 = SUB84(local_2b8._8_8_,4);
  local_2b8._8_8_ = local_2b8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
  }
  local_288 = 0xffffffff;
  local_284 = 0;
  local_290 = 0;
  if (0x80 < local_28c) {
    local_28c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
  }
  if (local_298 != (void *)0x0) {
    FMemory::Free(local_298);
  }
  if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  local_2c0 = 0;
  if (local_2c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_308,0,local_308._8_4_);
  iVar2 = SUB84(local_308._8_8_,4);
  local_308._8_8_ = local_308._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_308,0,(int *)(local_308 + 0xc));
  }
  local_2d4 = 0;
  local_2e0 = 0;
  local_2d8 = 0xffffffff;
  if (0x80 < local_2dc) {
    local_2dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_308 + 0x10),0);
  }
  if (local_2e8 != (void *)0x0) {
    FMemory::Free(local_2e8);
  }
  if ((FScriptContainerElement *)local_308._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._0_8_);
  }
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance(&local_68);
  IMovieScenePlayer::~IMovieScenePlayer(&local_258);
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_408.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_408.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_408.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_408.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_408.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 146258d70

FString * __thiscall
FMovieSceneBlendingTest::GetBeautifiedTestName
          (FMovieSceneBlendingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Blending.Basic");
  return __return_storage_ptr__;
}

