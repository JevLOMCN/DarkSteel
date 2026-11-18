// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146251720

EAutomationTestFlags __thiscall
FMovieScenePreAnimatedStateContextChangedTest::GetTestFlags
          (FMovieScenePreAnimatedStateContextChangedTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146251730

bool __thiscall
FMovieScenePreAnimatedStateContextChangedTest::IsStressTest
          (FMovieScenePreAnimatedStateContextChangedTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146251740

uint __thiscall
FMovieScenePreAnimatedStateContextChangedTest::GetRequiredDeviceNum
          (FMovieScenePreAnimatedStateContextChangedTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146251750

FString * __thiscall
FMovieScenePreAnimatedStateContextChangedTest::GetTestSourceFileName
          (FMovieScenePreAnimatedStateContextChangedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePreAnimatedStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146251780

int __thiscall
FMovieScenePreAnimatedStateContextChangedTest::GetTestSourceFileLine
          (FMovieScenePreAnimatedStateContextChangedTest *this)

{
  return 0x1be;
}

// GetTests @ 146251790

/* WARNING: Removing unreachable block (ram,0x00014625187d) */
/* WARNING: Removing unreachable block (ram,0x000146251948) */

void __thiscall
FMovieScenePreAnimatedStateContextChangedTest::GetTests
          (FMovieScenePreAnimatedStateContextChangedTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Pre-Animated State.Context Changed");
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

// RunTest @ 146251970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieScenePreAnimatedStateContextChangedTest::RunTest
          (FMovieScenePreAnimatedStateContextChangedTest *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FFrameRate FVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FFrameNumber FVar9;
  UPackage *pUVar10;
  UTestMovieSceneSequence *pUVar11;
  UTestMovieSceneEvalHookTrack *pUVar12;
  UTestMovieSceneEvalHookSection *pUVar13;
  UMovieSceneCompiledDataManager *this_00;
  longlong lVar14;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  int iVar17;
  FFrameNumber FVar18;
  int iVar19;
  undefined1 auStack_518 [32];
  UTestMovieSceneEvalHookSection **local_4f8;
  FScriptContainerElement *local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  UTestMovieSceneEvalHookSection *local_4c8;
  int local_4c0;
  float fStack_4bc;
  int local_4b8;
  int iStack_4b4;
  int local_4b0;
  undefined4 uStack_4ac;
  int local_4a8;
  undefined4 uStack_4a4;
  int local_4a0;
  float fStack_49c;
  undefined1 local_498 [4];
  undefined4 local_494;
  undefined1 local_490;
  undefined4 local_48c;
  undefined1 local_488 [72];
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  TRange<FFrameTime> local_3d8;
  TRange<FFrameTime> local_3b8;
  FMovieSceneContext local_398;
  FMovieSceneContext local_318;
  FMovieSceneEvaluationRange local_298;
  FMovieSceneEvaluationRange local_270;
  IMovieScenePlayer local_248;
  FMovieSceneRootEvaluationTemplateInstance local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_518;
  iVar19 = 1000;
  ::Impl::TestValue1 = -0x21524111;
  local_4b8 = 1000;
  ::Impl::TestValue2 = -0x21524111;
  iStack_4b4 = 1;
  pUVar10 = GetTransientPackage();
  pUVar11 = NewObject<UTestMovieSceneSequence>((UObject *)pUVar10);
  UMovieScene::SetTickResolutionDirectly
            ((pUVar11->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x1000003e8);
  pUVar12 = UMovieScene::AddTrack<UTestMovieSceneEvalHookTrack>
                      ((pUVar11->MovieScene).field0_0x0.DebugPtr);
  pUVar13 = NewObject<UTestMovieSceneEvalHookSection>((UObject *)pUVar12);
  local_498[0] = 1;
  local_494 = 0;
  local_490 = 0;
  lVar14 = pUVar13->_padding_;
  *(undefined1 *)((longlong)&pUVar13->_padding_ + 1) = 0;
  pUVar13->StartValue = 1000;
  pUVar13->EndValue = 2000;
  iVar17 = 1000;
  local_48c = 1000;
  (**(code **)(lVar14 + 0x2c8))(pUVar13,local_498);
  pTVar15 = &pUVar12->SectionArray;
  local_4c8 = pUVar13;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pFVar2 = (pTVar15->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_4c8) &&
     (lVar14 = (longlong)(pUVar12->SectionArray).ArrayMax,
     (FScriptContainerElement *)&local_4c8 < pFVar2 + lVar14 * 8)) {
    local_4e0 = (longlong)(pUVar12->SectionArray).ArrayNum;
    local_4d8 = 8;
    local_4f8 = &local_4c8;
    local_4f0 = pFVar2;
    local_4e8 = lVar14;
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
  iVar8 = (pUVar12->SectionArray).ArrayNum;
  piVar1 = &(pUVar12->SectionArray).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar15->AllocatorInstance,piVar1);
  }
  (pUVar12->SectionArray).ArrayNum = iVar8 + 1;
  *(UTestMovieSceneEvalHookSection **)((pTVar15->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       local_4c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_4c8 != (UTestMovieSceneEvalHookSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_4c8);
  }
  IMovieScenePlayer::IMovieScenePlayer(&local_248);
  local_248._padding_ = (longlong)&___7FTestMovieScenePlayer_Impl__6B_;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance(&local_58);
  this_00 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  UMovieSceneCompiledDataManager::Compile(this_00,(UMovieSceneSequence *)local_488);
  FMovieSceneRootEvaluationTemplateInstance::Initialize
            (&local_58,(UMovieSceneSequence *)pUVar11,&local_248,this_00);
  FMovieSceneRootEvaluationTemplateInstance::EnableGlobalPreAnimatedStateCapture(&local_58);
  FVar4.Denominator = iStack_4b4;
  FVar4.Numerator = local_4b8;
  local_4c0 = 0;
  lVar16 = 5;
  fStack_4bc = 0.0;
  uStack_4ac = 0;
  lVar14 = 5;
  do {
    uVar5 = local_488._16_4_;
    local_488._12_4_ = uStack_4ac;
    local_488._24_4_ = fStack_4bc;
    local_488._20_4_ = local_4c0 + 200;
    local_488[4] = 1;
    local_488._16_4_ = local_488._16_4_ & 0xffffff00;
    local_3d8.LowerBound.Value.FrameNumber.Value = local_4c0;
    local_3d8.LowerBound._0_4_ = local_488._4_4_;
    local_3d8._8_8_ = CONCAT44(uVar5,uStack_4ac) & 0xffffff00ffffffff;
    local_4b0 = local_4c0;
    local_4c0 = local_4c0 + 200;
    local_488._8_4_ = local_4b0;
    local_3d8.UpperBound.Value = (FFrameTime)local_488._20_8_;
    FMovieSceneEvaluationRange::FMovieSceneEvaluationRange(&local_298,&local_3d8,FVar4,Forwards);
    local_398.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_398.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    local_398.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    local_398._padding_._0_1_ = local_298.EvaluationRange.LowerBound.Type.Value;
    local_398._padding_._1_3_ = local_298.EvaluationRange.LowerBound._1_3_;
    local_398._padding_._4_4_ = local_298.EvaluationRange.LowerBound.Value.FrameNumber.Value;
    local_398._padding_._0_4_ = local_298.EvaluationRange.LowerBound.Value.SubFrame;
    local_398._padding_._4_1_ = local_298.EvaluationRange.UpperBound.Type.Value;
    local_398._padding_._5_3_ = local_298.EvaluationRange.UpperBound._1_3_;
    local_398.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_398._padding_._0_4_ = local_298.Direction;
    local_398._padding_._4_4_ = local_298.TimeOverride.Value;
    local_398._padding_._0_4_ = local_298.EvaluationRange.UpperBound.Value.FrameNumber.Value;
    local_398._padding_._4_4_ = local_298.EvaluationRange.UpperBound.Value.SubFrame;
    local_398._padding_._0_4_ = local_298.CurrentFrameRate.Numerator;
    local_398._padding_._4_4_ = local_298.CurrentFrameRate.Denominator;
    local_398.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_398.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_398.RootToSequenceWarpCounter);
    local_398.bHasPostRollStartTime = false;
    local_398.bHasPreRollEndTime = false;
    local_398.bSectionPostRoll = false;
    local_398.bSectionPreRoll = false;
    local_398.bSilent = false;
    local_398.bHasLooped = false;
    local_398.bHasJumped = false;
    local_398.Status = Stopped;
    local_398.PrePostRollStartEndTime.Value = -0x80000000;
    local_398.HierarchicalBias = 0;
    FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking(&local_58,&local_398);
    if (::Impl::TestValue1 != iVar17) {
      local_4f8 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_4f8._4_4_,::Impl::TestValue1);
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)(local_488 + 0x38),L"%s. Expected %d, actual %d.");
      (*pcVar3)(this,local_488 + 0x38,0);
      if ((void *)local_488._56_8_ != (void *)0x0) {
        FMemory::Free((void *)local_488._56_8_);
      }
    }
    iVar17 = iVar17 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  FMovieSceneRootEvaluationTemplateInstance::PlaybackContextChanged(&local_58,&local_248);
  bVar6 = FMovieScenePreAnimatedState::ContainsAnyStateForSequence(&local_248.PreAnimatedState);
  if (bVar6) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_440,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_440,0);
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
  }
  if (::Impl::TestValue1 != -0x21524111) {
    local_4f8 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_4f8._4_4_,::Impl::TestValue1);
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_430,L"%s. Expected %d, actual %d.");
    (*pcVar3)(this,&local_430,0);
    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430.Data.AllocatorInstance.Data);
    }
  }
  fStack_49c = 0.0;
  uStack_4a4 = 0;
  FVar9.Value = 0;
  do {
    uVar5 = local_488._40_4_;
    FVar18.Value = FVar9.Value + 200;
    local_488._36_4_ = uStack_4a4;
    local_488._48_4_ = fStack_49c;
    local_488._44_4_ = FVar18.Value;
    local_488[0x1c] = 1;
    local_488._40_4_ = local_488._40_4_ & 0xffffff00;
    local_3b8.LowerBound.Value.FrameNumber.Value = FVar9.Value;
    local_3b8.LowerBound._0_4_ = local_488._28_4_;
    local_3b8._8_8_ = CONCAT44(uVar5,uStack_4a4) & 0xffffff00ffffffff;
    local_4a8 = FVar9.Value;
    local_4a0 = FVar18.Value;
    local_488._32_4_ = FVar9.Value;
    local_3b8.UpperBound.Value = (FFrameTime)local_488._44_8_;
    FMovieSceneEvaluationRange::FMovieSceneEvaluationRange(&local_270,&local_3b8,FVar4,Forwards);
    local_318.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_318.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    local_318.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    local_318._padding_._0_1_ = local_270.EvaluationRange.LowerBound.Type.Value;
    local_318._padding_._1_3_ = local_270.EvaluationRange.LowerBound._1_3_;
    local_318._padding_._4_4_ = local_270.EvaluationRange.LowerBound.Value.FrameNumber.Value;
    local_318._padding_._0_4_ = local_270.EvaluationRange.LowerBound.Value.SubFrame;
    local_318._padding_._4_1_ = local_270.EvaluationRange.UpperBound.Type.Value;
    local_318._padding_._5_3_ = local_270.EvaluationRange.UpperBound._1_3_;
    local_318.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_318._padding_._0_4_ = local_270.Direction;
    local_318._padding_._4_4_ = local_270.TimeOverride.Value;
    local_318._padding_._0_4_ = local_270.EvaluationRange.UpperBound.Value.FrameNumber.Value;
    local_318._padding_._4_4_ = local_270.EvaluationRange.UpperBound.Value.SubFrame;
    local_318._padding_._0_4_ = local_270.CurrentFrameRate.Numerator;
    local_318._padding_._4_4_ = local_270.CurrentFrameRate.Denominator;
    local_318.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_318.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_318.RootToSequenceWarpCounter);
    local_318.bHasPostRollStartTime = false;
    local_318.bHasPreRollEndTime = false;
    local_318.bSectionPostRoll = false;
    local_318.bSectionPreRoll = false;
    local_318.bSilent = false;
    local_318.bHasLooped = false;
    local_318.bHasJumped = false;
    local_318.Status = Stopped;
    local_318.PrePostRollStartEndTime.Value = -0x80000000;
    local_318.HierarchicalBias = 0;
    FMovieSceneRootEvaluationTemplateInstance::EvaluateSynchronousBlocking(&local_58,&local_318);
    if (::Impl::TestValue1 != iVar19) {
      local_4f8 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_4f8._4_4_,::Impl::TestValue1);
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_420,L"%s. Expected %d, actual %d.");
      (*pcVar3)(this,&local_420,0);
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
    }
    iVar19 = iVar19 + 1;
    lVar16 = lVar16 + -1;
    FVar9.Value = FVar18.Value;
  } while (lVar16 != 0);
  FMovieSceneRootEvaluationTemplateInstance::PlaybackContextChanged(&local_58,&local_248);
  bVar6 = FMovieScenePreAnimatedState::ContainsAnyStateForSequence(&local_248.PreAnimatedState);
  if (bVar6) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_410,L"%s: The two values are not equal.");
    (*pcVar3)(this,&local_410,0);
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
  }
  if (::Impl::TestValue1 != -0x21524111) {
    local_4f8 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_4f8._4_4_,::Impl::TestValue1);
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_400,L"%s. Expected %d, actual %d.");
    (*pcVar3)(this,&local_400,0);
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
  }
  if (::Impl::TestValue1 != -0x21524111) {
    local_4f8 = (UTestMovieSceneEvalHookSection **)CONCAT44(local_4f8._4_4_,::Impl::TestValue1);
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_3f0,L"%s. Expected %d, actual %d.");
    (*pcVar3)(this,&local_3f0,0);
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
  }
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance(&local_58);
  IMovieScenePlayer::~IMovieScenePlayer(&local_248);
  return true;
}

// GetBeautifiedTestName @ 146252030

FString * __thiscall
FMovieScenePreAnimatedStateContextChangedTest::GetBeautifiedTestName
          (FMovieScenePreAnimatedStateContextChangedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.Pre-Animated State.Context Changed");
  return __return_storage_ptr__;
}

