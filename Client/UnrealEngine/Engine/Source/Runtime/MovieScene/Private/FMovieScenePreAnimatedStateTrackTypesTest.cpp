// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 14624bf70

EAutomationTestFlags __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::GetTestFlags
          (FMovieScenePreAnimatedStateTrackTypesTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14624bf80

bool __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::IsStressTest
          (FMovieScenePreAnimatedStateTrackTypesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14624bf90

uint __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::GetRequiredDeviceNum
          (FMovieScenePreAnimatedStateTrackTypesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14624bfa0

FString * __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::GetTestSourceFileName
          (FMovieScenePreAnimatedStateTrackTypesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePreAnimatedStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14624bfd0

int __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::GetTestSourceFileLine
          (FMovieScenePreAnimatedStateTrackTypesTest *this)

{
  return 0x162;
}

// GetTests @ 14624bfe0

/* WARNING: Removing unreachable block (ram,0x00014624c0cd) */
/* WARNING: Removing unreachable block (ram,0x00014624c198) */

void __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::GetTests
          (FMovieScenePreAnimatedStateTrackTypesTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Pre-Animated State.Track Types");
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

// RunTest @ 14624c1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::RunTest
          (FMovieScenePreAnimatedStateTrackTypesTest *this,FString *param_1)

{
  FFrameNumber FVar1;
  int *piVar2;
  code *pcVar3;
  FFrameRate FVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UPackage *pUVar9;
  UTestMovieSceneSequence *pUVar10;
  UTestMovieSceneEvalHookTrack *pUVar11;
  UTestMovieSceneEvalHookSection *pUVar12;
  UMovieSceneCompiledDataManager *this_00;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar13;
  longlong lVar14;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FFrameNumber FVar18;
  int iVar19;
  undefined1 auStack_738 [32];
  UTestMovieSceneEvalHookSection **local_718;
  FScriptContainerElement *local_710;
  longlong local_708;
  longlong local_700;
  undefined8 local_6f8;
  UTestMovieSceneEvalHookSection *local_6e8;
  UTestMovieSceneEvalHookSection *local_6e0;
  int local_6d8;
  float fStack_6d4;
  ulonglong local_6d0;
  undefined1 local_6c8;
  undefined4 local_6c4;
  int local_6c0;
  int iStack_6bc;
  int local_6b8;
  undefined4 uStack_6b4;
  undefined8 local_6b0;
  undefined8 local_6a8;
  int local_6a0;
  undefined4 uStack_69c;
  int local_698;
  float fStack_694;
  undefined8 local_690;
  undefined8 local_688;
  undefined1 local_680 [4];
  undefined4 local_67c;
  undefined1 local_678;
  undefined4 local_674;
  undefined1 local_670 [104];
  FString local_608;
  FString local_5f8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_5a8;
  FString local_598;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_588;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_578;
  TRange<FFrameTime> local_568;
  TRange<FFrameTime> local_548;
  TRange<FFrameTime> local_528;
  TRange<FFrameTime> local_508;
  FMovieSceneContext local_4e8;
  undefined1 local_468 [72];
  FMovieSceneWarpCounter local_420;
  Type local_3f8;
  FFrameNumber local_3f4;
  int local_3f0;
  byte local_3ec;
  undefined1 local_3e8 [72];
  FMovieSceneWarpCounter local_3a0;
  Type local_378;
  FFrameNumber local_374;
  int local_370;
  byte local_36c;
  undefined1 local_368 [72];
  FMovieSceneWarpCounter local_320;
  Type local_2f8;
  FFrameNumber local_2f4;
  int local_2f0;
  byte local_2ec;
  FMovieSceneEvaluationRange local_2e8;
  FMovieSceneEvaluationRange local_2c0;
  FMovieSceneEvaluationRange local_298;
  FMovieSceneEvaluationRange local_270;
  IMovieScenePlayer local_248;
  FMovieSceneRootEvaluationTemplateInstance local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_738;
  iVar16 = 1000;
  ::Impl::TestValue1 = -0x21524111;
  local_6c0 = 1000;
  ::Impl::TestValue2 = -0x21524111;
  iStack_6bc = 1;
  pUVar9 = GetTransientPackage();
  pUVar10 = NewObject<UTestMovieSceneSequence>((UObject *)pUVar9);
  UMovieScene::SetTickResolutionDirectly
            ((pUVar10->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x1000003e8);
  pUVar11 = UMovieScene::AddTrack<UTestMovieSceneEvalHookTrack>
                      ((pUVar10->MovieScene).field0_0x0.DebugPtr);
  pUVar12 = NewObject<UTestMovieSceneEvalHookSection>((UObject *)pUVar11);
  local_6d0 = CONCAT71(local_6d0._1_7_,1);
  local_6d0 = local_6d0 & 0xffffffff;
  local_6c8 = 0;
  lVar14 = pUVar12->_padding_;
  *(undefined1 *)((longlong)&pUVar12->_padding_ + 1) = 0;
  pUVar12->StartValue = 1000;
  pUVar12->EndValue = 2000;
  iVar19 = 1000;
  local_6c4 = 1000;
  (**(code **)(lVar14 + 0x2c8))(pUVar12,&local_6d0);
  pTVar15 = &pUVar11->SectionArray;
  local_6e8 = pUVar12;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pFVar17 = (pTVar15->AllocatorInstance).Data;
  if ((pFVar17 <= (FScriptContainerElement *)&local_6e8) &&
     (lVar14 = (longlong)(pUVar11->SectionArray).ArrayMax,
     (FScriptContainerElement *)&local_6e8 < pFVar17 + lVar14 * 8)) {
    local_700 = (longlong)(pUVar11->SectionArray).ArrayNum;
    local_6f8 = 8;
    local_718 = &local_6e8;
    local_710 = pFVar17;
    local_708 = lVar14;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pUVar11->SectionArray).ArrayNum;
  piVar2 = &(pUVar11->SectionArray).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar15->AllocatorInstance,piVar2);
  }
  (pUVar11->SectionArray).ArrayNum = iVar8 + 1;
  *(UTestMovieSceneEvalHookSection **)((pTVar15->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_6e8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_6e8 != (UTestMovieSceneEvalHookSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_6e8);
  }
  pUVar11 = UMovieScene::AddTrack<UTestMovieSceneEvalHookTrack>
                      ((pUVar10->MovieScene).field0_0x0.DebugPtr);
  pUVar12 = NewObject<UTestMovieSceneEvalHookSection>((UObject *)pUVar11);
  local_680[0] = 1;
  local_67c = 2000;
  local_678 = 0;
  lVar14 = pUVar12->_padding_;
  *(undefined1 *)((longlong)&pUVar12->_padding_ + 1) = 1;
  pUVar12->StartValue = 1000;
  pUVar12->EndValue = 2000;
  local_674 = 3000;
  (**(code **)(lVar14 + 0x2c8))(pUVar12,local_680);
  pTVar15 = &pUVar11->SectionArray;
  local_6e0 = pUVar12;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pFVar17 = (pTVar15->AllocatorInstance).Data;
  if ((pFVar17 <= (FScriptContainerElement *)&local_6e0) &&
     (lVar14 = (longlong)(pUVar11->SectionArray).ArrayMax,
     (FScriptContainerElement *)&local_6e0 < pFVar17 + lVar14 * 8)) {
    local_700 = (longlong)(pUVar11->SectionArray).ArrayNum;
    local_6f8 = 8;
    local_718 = &local_6e0;
    local_710 = pFVar17;
    local_708 = lVar14;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pUVar11->SectionArray).ArrayNum;
  piVar2 = &(pUVar11->SectionArray).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar15->AllocatorInstance,piVar2);
  }
  (pUVar11->SectionArray).ArrayNum = iVar8 + 1;
  *(UTestMovieSceneEvalHookSection **)((pTVar15->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_6e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_6e0 != (UTestMovieSceneEvalHookSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_6e0);
  }
  IMovieScenePlayer::IMovieScenePlayer(&local_248);
  local_248._padding_ = (longlong)&___7FTestMovieScenePlayer_Impl__6B_;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance(&local_58);
  this_00 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  UMovieSceneCompiledDataManager::Compile(this_00,(UMovieSceneSequence *)local_670);
  FMovieSceneRootEvaluationTemplateInstance::Initialize
            (&local_58,(UMovieSceneSequence *)pUVar10,&local_248,this_00);
  FMovieSceneRootEvaluationTemplateInstance::EnableGlobalPreAnimatedStateCapture(&local_58);
  FVar4.Denominator = iStack_6bc;
  FVar4.Numerator = local_6c0;
  local_6d8 = 0;
  pFVar17 = (FScriptContainerElement *)&DAT_00000064;
  fStack_6d4 = 0.0;
  uStack_6b4 = 0;
  local_6d0 = 100;
  do {
    uVar5 = local_670._16_4_;
    local_670._12_4_ = uStack_6b4;
    local_670._24_4_ = fStack_6d4;
    local_670._20_4_ = local_6d8 + 10;
    local_670[4] = 1;
    local_670._16_4_ = local_670._16_4_ & 0xffffff00;
    local_568.LowerBound.Value.FrameNumber.Value = local_6d8;
    local_568.LowerBound._0_4_ = local_670._4_4_;
    local_568._8_8_ = CONCAT44(uVar5,uStack_6b4) & 0xffffff00ffffffff;
    local_6b8 = local_6d8;
    local_6d8 = local_6d8 + 10;
    local_670._8_4_ = local_6b8;
    local_568.UpperBound.Value = (FFrameTime)local_670._20_8_;
    FMovieSceneEvaluationRange::FMovieSceneEvaluationRange(&local_2e8,&local_568,FVar4,Forwards);
    local_4e8.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_4e8.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    local_4e8.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    local_4e8._padding_._0_1_ = local_2e8.EvaluationRange.LowerBound.Type.Value;
    local_4e8._padding_._1_3_ = local_2e8.EvaluationRange.LowerBound._1_3_;
    local_4e8._padding_._4_4_ = local_2e8.EvaluationRange.LowerBound.Value.FrameNumber.Value;
    local_4e8._padding_._0_4_ = local_2e8.EvaluationRange.LowerBound.Value.SubFrame;
    local_4e8._padding_._4_1_ = local_2e8.EvaluationRange.UpperBound.Type.Value;
    local_4e8._padding_._5_3_ = local_2e8.EvaluationRange.UpperBound._1_3_;
    local_4e8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_4e8._padding_._0_4_ = local_2e8.Direction;
    local_4e8._padding_._4_4_ = local_2e8.TimeOverride.Value;
    local_4e8._padding_._0_4_ = local_2e8.EvaluationRange.UpperBound.Value.FrameNumber.Value;
    local_4e8._padding_._4_4_ = local_2e8.EvaluationRange.UpperBound.Value.SubFrame;
    local_4e8._padding_._0_4_ = local_2e8.CurrentFrameRate.Numerator;
    local_4e8._padding_._4_4_ = local_2e8.CurrentFrameRate.Denominator;
    local_4e8.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_4e8.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_4e8.RootToSequenceWarpCounter);
    local_4e8.bHasPostRollStartTime = false;
    local_4e8.bHasPreRollEndTime = false;
    local_4e8.bSectionPostRoll = false;
    local_4e8.bSectionPreRoll = false;
    local_4e8.bSilent = false;
    local_4e8.bHasLooped = false;
    local_4e8.bHasJumped = false;
    local_4e8.Status = Stopped;
    local_4e8.PrePostRollStartEndTime.Value = -0x80000000;
    local_4e8.HierarchicalBias = 0;
    FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking(&local_58,&local_4e8);
    if (::Impl::TestValue1 != iVar19) {
      local_718 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_718._4_4_,::Impl::TestValue1);
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_5c8,L"%s. Expected %d, actual %d.");
      (*pcVar3)(this,&local_5c8,0);
      if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
      }
    }
    iVar19 = iVar19 + 1;
    pFVar17 = pFVar17 + -1;
  } while (pFVar17 != (FScriptContainerElement *)0x0);
  local_6a8 = 0x44c;
  local_670._32_4_ = 1000;
  local_670._36_4_ = 0;
  local_670._44_8_ = 0x44c;
  local_670[0x1c] = 1;
  local_670._40_4_ = local_670._40_4_ & 0xffffff00;
  local_548.LowerBound.Value.FrameNumber.Value = 1000;
  local_548.LowerBound._0_4_ = local_670._28_4_;
  local_548._8_8_ = (ulonglong)(uint)local_670._40_4_ << 0x20;
  local_6b0 = 1000;
  local_548.UpperBound.Value.FrameNumber.Value = 0x44c;
  local_548.UpperBound.Value.SubFrame = 0.0;
  FMovieSceneEvaluationRange::FMovieSceneEvaluationRange(&local_2c0,&local_548,FVar4,Forwards);
  local_468._40_4_ = 1.0;
  local_468._44_4_ = 0;
  local_468._48_4_ = 0.0;
  local_468[0] = local_2c0.EvaluationRange.LowerBound.Type.Value;
  local_468._1_3_ = local_2c0.EvaluationRange.LowerBound._1_3_;
  local_468._4_4_ = local_2c0.EvaluationRange.LowerBound.Value.FrameNumber.Value;
  local_468._8_4_ = local_2c0.EvaluationRange.LowerBound.Value.SubFrame;
  local_468[0xc] = local_2c0.EvaluationRange.UpperBound.Type.Value;
  local_468._13_3_ = local_2c0.EvaluationRange.UpperBound._1_3_;
  local_468._32_4_ = local_2c0.Direction;
  local_468._36_4_ = local_2c0.TimeOverride.Value;
  local_468._16_4_ = local_2c0.EvaluationRange.UpperBound.Value.FrameNumber.Value;
  local_468._20_4_ = local_2c0.EvaluationRange.UpperBound.Value.SubFrame;
  local_468._24_4_ = local_2c0.CurrentFrameRate.Numerator;
  local_468._28_4_ = local_2c0.CurrentFrameRate.Denominator;
  local_468._56_8_ = pFVar17;
  local_468._64_8_ = pFVar17;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_420);
  local_3ec = local_3ec & 0x80;
  local_3f8 = Stopped;
  local_3f4.Value = -0x80000000;
  local_3f0 = 0;
  FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking
            (&local_58,(FMovieSceneContext *)local_468);
  if (::Impl::TestValue1 != 2000) {
    local_718 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_718._4_4_,::Impl::TestValue1);
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_5b8,L"%s. Expected %d, actual %d.");
    (*pcVar3)(this,&local_5b8,0);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  FMovieScenePreAnimatedState::RestorePreAnimatedState(&local_248.PreAnimatedState);
  pTVar13 = IMovieScenePlayer::GetSharedPlaybackState(&local_248,&local_588);
  local_5a8.Object = pTVar13->Object;
  local_5a8.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  if (local_5a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneEvaluationState::ClearObjectCaches(&local_248.State,&local_5a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_588.SharedReferenceCount.ReferenceController);
  if (::Impl::TestValue1 != -0x21524111) {
    local_718 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_718._4_4_,::Impl::TestValue1);
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_598,L"%s. Expected %d, actual %d.");
    (*pcVar3)(this,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  fStack_694 = 0.0;
  uStack_69c = 0;
  FVar18.Value = 2000;
  do {
    uVar5 = local_670._64_4_;
    FVar1.Value = FVar18.Value + 10;
    local_670._60_4_ = uStack_69c;
    local_670._72_4_ = fStack_694;
    local_670._68_4_ = FVar1.Value;
    local_670[0x34] = 1;
    local_670._64_4_ = local_670._64_4_ & 0xffffff00;
    local_528.LowerBound.Value.FrameNumber.Value = FVar18.Value;
    local_528.LowerBound._0_4_ = local_670._52_4_;
    local_528._8_8_ = CONCAT44(uVar5,uStack_69c) & 0xffffff00ffffffff;
    local_6a0 = FVar18.Value;
    local_698 = FVar1.Value;
    local_670._56_4_ = FVar18.Value;
    local_528.UpperBound.Value = (FFrameTime)local_670._68_8_;
    FMovieSceneEvaluationRange::FMovieSceneEvaluationRange(&local_298,&local_528,FVar4,Forwards);
    local_3e8._40_4_ = 1.0;
    local_3e8._44_4_ = 0;
    local_3e8._48_4_ = 0.0;
    local_3e8[0] = local_298.EvaluationRange.LowerBound.Type.Value;
    local_3e8._1_3_ = local_298.EvaluationRange.LowerBound._1_3_;
    local_3e8._4_4_ = local_298.EvaluationRange.LowerBound.Value.FrameNumber.Value;
    local_3e8._8_4_ = local_298.EvaluationRange.LowerBound.Value.SubFrame;
    local_3e8[0xc] = local_298.EvaluationRange.UpperBound.Type.Value;
    local_3e8._13_3_ = local_298.EvaluationRange.UpperBound._1_3_;
    local_3e8._32_4_ = local_298.Direction;
    local_3e8._36_4_ = local_298.TimeOverride.Value;
    local_3e8._16_4_ = local_298.EvaluationRange.UpperBound.Value.FrameNumber.Value;
    local_3e8._20_4_ = local_298.EvaluationRange.UpperBound.Value.SubFrame;
    local_3e8._24_4_ = local_298.CurrentFrameRate.Numerator;
    local_3e8._28_4_ = local_298.CurrentFrameRate.Denominator;
    local_3e8._56_8_ = pFVar17;
    local_3e8._64_8_ = pFVar17;
    FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_3a0);
    local_36c = local_36c & 0x80;
    local_378 = Stopped;
    local_374.Value = -0x80000000;
    local_370 = 0;
    FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking
              (&local_58,(FMovieSceneContext *)local_3e8);
    if (::Impl::TestValue1 != iVar16) {
      local_718 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_718._4_4_,::Impl::TestValue1);
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_608,L"%s. Expected %d, actual %d.");
      (*pcVar3)(this,&local_608,0);
      if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data.AllocatorInstance.Data);
      }
    }
    iVar16 = iVar16 + 1;
    local_6d0 = local_6d0 - 1;
    FVar18.Value = FVar1.Value;
  } while (local_6d0 != 0);
  local_690 = 3000;
  local_670._80_4_ = 3000;
  local_670._84_4_ = 0;
  local_688 = 0xc1c;
  local_670._92_8_ = 0xc1c;
  local_670[0x4c] = 1;
  local_670._88_4_ = local_670._88_4_ & 0xffffff00;
  local_508.LowerBound.Value.FrameNumber.Value = 3000;
  local_508.LowerBound._0_4_ = local_670._76_4_;
  local_508._8_8_ = (ulonglong)(uint)local_670._88_4_ << 0x20;
  local_508.UpperBound.Value.FrameNumber.Value = 0xc1c;
  local_508.UpperBound.Value.SubFrame = 0.0;
  FMovieSceneEvaluationRange::FMovieSceneEvaluationRange(&local_270,&local_508,FVar4,Forwards);
  local_368._40_4_ = 1.0;
  local_368._44_4_ = 0;
  local_368._48_4_ = 0.0;
  local_368[0] = local_270.EvaluationRange.LowerBound.Type.Value;
  local_368._1_3_ = local_270.EvaluationRange.LowerBound._1_3_;
  local_368._4_4_ = local_270.EvaluationRange.LowerBound.Value.FrameNumber.Value;
  local_368._8_4_ = local_270.EvaluationRange.LowerBound.Value.SubFrame;
  local_368[0xc] = local_270.EvaluationRange.UpperBound.Type.Value;
  local_368._13_3_ = local_270.EvaluationRange.UpperBound._1_3_;
  local_368._32_4_ = local_270.Direction;
  local_368._36_4_ = local_270.TimeOverride.Value;
  local_368._16_4_ = local_270.EvaluationRange.UpperBound.Value.FrameNumber.Value;
  local_368._20_4_ = local_270.EvaluationRange.UpperBound.Value.SubFrame;
  local_368._24_4_ = local_270.CurrentFrameRate.Numerator;
  local_368._28_4_ = local_270.CurrentFrameRate.Denominator;
  local_368._56_8_ = pFVar17;
  local_368._64_8_ = pFVar17;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_320);
  local_2ec = local_2ec & 0x80;
  local_2f8 = Stopped;
  local_2f4.Value = -0x80000000;
  local_2f0 = 0;
  FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking
            (&local_58,(FMovieSceneContext *)local_368);
  if (::Impl::TestValue1 != -0x21524111) {
    local_718 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_718._4_4_,::Impl::TestValue1);
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_5f8,L"%s. Expected %d, actual %d.");
    (*pcVar3)(this,&local_5f8,0);
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
  }
  FMovieScenePreAnimatedState::RestorePreAnimatedState(&local_248.PreAnimatedState);
  pTVar13 = IMovieScenePlayer::GetSharedPlaybackState(&local_248,&local_578);
  local_5e8.Object = pTVar13->Object;
  local_5e8.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  if (local_5e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneEvaluationState::ClearObjectCaches(&local_248.State,&local_5e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_578.SharedReferenceCount.ReferenceController);
  if (::Impl::TestValue1 != -0x21524111) {
    local_718 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_718._4_4_,::Impl::TestValue1);
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_5d8,L"%s. Expected %d, actual %d.");
    (*pcVar3)(this,&local_5d8,0);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
  }
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance(&local_58);
  IMovieScenePlayer::~IMovieScenePlayer(&local_248);
  return true;
}

// GetBeautifiedTestName @ 14624cbb0

FString * __thiscall
FMovieScenePreAnimatedStateTrackTypesTest::GetBeautifiedTestName
          (FMovieScenePreAnimatedStateTrackTypesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Pre-Animated State.Track Types"
                    );
  return __return_storage_ptr__;
}

