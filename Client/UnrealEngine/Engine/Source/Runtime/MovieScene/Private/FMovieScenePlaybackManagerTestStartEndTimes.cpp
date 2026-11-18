// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146255610

EAutomationTestFlags __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::GetTestFlags
          (FMovieScenePlaybackManagerTestStartEndTimes *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146255620

bool __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::IsStressTest
          (FMovieScenePlaybackManagerTestStartEndTimes *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146255630

uint __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::GetRequiredDeviceNum
          (FMovieScenePlaybackManagerTestStartEndTimes *this)

{
  return 1;
}

// GetTestSourceFileName @ 146255640

FString * __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::GetTestSourceFileName
          (FMovieScenePlaybackManagerTestStartEndTimes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146255670

int __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::GetTestSourceFileLine
          (FMovieScenePlaybackManagerTestStartEndTimes *this)

{
  return 0x4c;
}

// GetTests @ 1462556c0

/* WARNING: Removing unreachable block (ram,0x0001462557ad) */
/* WARNING: Removing unreachable block (ram,0x000146255878) */

void __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::GetTests
          (FMovieScenePlaybackManagerTestStartEndTimes *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.PlaybackManager.StartEndTimes");
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

// RunTest @ 1462558a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::RunTest
          (FMovieScenePlaybackManagerTestStartEndTimes *this,FString *param_1)

{
  UMovieScene *pUVar1;
  bool bVar2;
  UPackage *pUVar3;
  UTestMovieSceneSequence *pUVar4;
  TRange<FFrameTime> *pTVar5;
  FFrameTime local_res18;
  undefined8 local_res20;
  FString local_128;
  uint local_118;
  undefined4 uStack_114;
  float fStack_110;
  TRange<FFrameTime> local_10c;
  TRange<FFrameTime> local_f4;
  FMovieScenePlaybackManager local_d8;
  
  pUVar3 = GetTransientPackage();
  pUVar4 = NewObject<UTestMovieSceneSequence>((UObject *)pUVar3);
  local_res18.FrameNumber.Value = 0x1e;
  local_res18.SubFrame = 1.4013e-45;
  pUVar1 = (pUVar4->MovieScene).field0_0x0.DebugPtr;
  (pUVar1->DisplayRate).Numerator = 0x1e;
  (pUVar1->DisplayRate).Denominator = 1;
  UMovieScene::SetTickResolutionDirectly
            ((pUVar4->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x10000ea60);
  UMovieScene::SetPlaybackRange
            ((pUVar4->MovieScene).field0_0x0.DebugPtr,(FFrameNumber)0x0,600000,true);
  FMovieScenePlaybackManager::FMovieScenePlaybackManager(&local_d8,(UMovieSceneSequence *)pUVar4);
  local_128.Data.AllocatorInstance.Data._0_4_ =
       (uint)local_128.Data.AllocatorInstance.Data & 0xffffff00;
  local_res18.FrameNumber.Value = 300;
  local_res18.SubFrame = 0.0;
  local_128.Data.AllocatorInstance.Data._4_4_ = 300;
  local_128.Data.ArrayNum = 0;
  local_res20 = 0;
  uStack_114 = 0;
  fStack_110 = 0.0;
  local_10c.LowerBound.Value.SubFrame = 0.0;
  local_118 = CONCAT31(local_118._1_3_,1);
  local_10c.LowerBound._0_8_ = ZEXT48(local_118);
  local_10c.UpperBound.Value.FrameNumber.Value = 300;
  local_10c.UpperBound._0_4_ = (uint)local_128.Data.AllocatorInstance.Data;
  local_10c.UpperBound.Value.SubFrame = 0.0;
  pTVar5 = FMovieScenePlaybackManager::GetEffectivePlaybackRange(&local_d8,&local_f4);
  ::FString::FString(&local_128,"PlaybackRange");
  bVar2 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                    ((FAutomationTestBase *)this,&local_128,pTVar5,&local_10c);
  if ((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                       (uint)local_128.Data.AllocatorInstance.Data) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                                   (uint)local_128.Data.AllocatorInstance.Data));
  }
  if (bVar2) {
    local_res18.FrameNumber.Value = 0x1e;
    local_res18.SubFrame = 0.0;
    FMovieScenePlaybackManager::SetStartOffset(&local_d8,&local_res18);
    local_128.Data.AllocatorInstance.Data._0_4_ =
         CONCAT31(local_128.Data.AllocatorInstance.Data._1_3_,1);
    local_res18.FrameNumber.Value = 300;
    local_res18.SubFrame = 0.0;
    uStack_114 = 300;
    fStack_110 = 0.0;
    local_res20 = 0x1e;
    local_128.Data.AllocatorInstance.Data._4_4_ = 0x1e;
    local_128.Data.ArrayNum = 0;
    local_10c.LowerBound._0_8_ = CONCAT44(0x1e,(uint)local_128.Data.AllocatorInstance.Data);
    local_10c.LowerBound.Value.SubFrame = 0.0;
    local_118 = local_118 & 0xffffff00;
    local_10c.UpperBound.Value.FrameNumber.Value = 300;
    local_10c.UpperBound._0_4_ = local_118;
    local_10c.UpperBound.Value.SubFrame = 0.0;
    pTVar5 = FMovieScenePlaybackManager::GetEffectivePlaybackRange(&local_d8,&local_f4);
    ::FString::FString(&local_128,"PlaybackRange");
    bVar2 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                      ((FAutomationTestBase *)this,&local_128,pTVar5,&local_10c);
    if ((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                         (uint)local_128.Data.AllocatorInstance.Data) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                                     (uint)local_128.Data.AllocatorInstance.Data));
    }
    if (bVar2) {
      local_res18.SubFrame = ::FFrameTime::MaxSubframe;
      if (__real_3f000000 <= ::FFrameTime::MaxSubframe) {
        local_res18.SubFrame = __real_3f000000;
      }
      if (local_res18.SubFrame <= 0.0) {
        local_res18.SubFrame = 0.0;
      }
      local_res18.FrameNumber.Value = 0x3c;
      FMovieScenePlaybackManager::SetEndOffset(&local_d8,&local_res18);
      fStack_110 = ::FFrameTime::MaxSubframe;
      if (__real_3f000000 <= ::FFrameTime::MaxSubframe) {
        fStack_110 = __real_3f000000;
      }
      local_128.Data.AllocatorInstance.Data._0_4_ =
           CONCAT31(local_128.Data.AllocatorInstance.Data._1_3_,1);
      local_res20 = 0x1e;
      local_118 = local_118 & 0xffffff00;
      if (fStack_110 <= 0.0) {
        fStack_110 = 0.0;
      }
      local_res18.SubFrame = fStack_110;
      local_res18.FrameNumber.Value = 0xef;
      uStack_114 = 0xef;
      local_128.Data.AllocatorInstance.Data._4_4_ = 0x1e;
      local_128.Data.ArrayNum = 0;
      local_10c.LowerBound._0_8_ = CONCAT44(0x1e,(uint)local_128.Data.AllocatorInstance.Data);
      local_10c.UpperBound.Value.FrameNumber.Value = 0xef;
      local_10c.UpperBound._0_4_ = local_118;
      local_10c.LowerBound.Value.SubFrame = 0.0;
      local_10c.UpperBound.Value.SubFrame = fStack_110;
      pTVar5 = FMovieScenePlaybackManager::GetEffectivePlaybackRange(&local_d8,&local_f4);
      ::FString::FString(&local_128,"PlaybackRange");
      bVar2 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                        ((FAutomationTestBase *)this,&local_128,pTVar5,&local_10c);
      if ((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                           (uint)local_128.Data.AllocatorInstance.Data) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                                       (uint)local_128.Data.AllocatorInstance.Data));
      }
      if (bVar2) {
        local_res18.FrameNumber.Value = 0xf0;
        local_res18.SubFrame = 0.0;
        FMovieScenePlaybackManager::SetEndOffsetAsTime(&local_d8,&local_res18);
        local_128.Data.AllocatorInstance.Data._0_4_ =
             CONCAT31(local_128.Data.AllocatorInstance.Data._1_3_,1);
        local_res18.FrameNumber.Value = 0xf0;
        local_res18.SubFrame = 0.0;
        uStack_114 = 0xf0;
        fStack_110 = 0.0;
        local_res20 = 0x1e;
        local_128.Data.AllocatorInstance.Data._4_4_ = 0x1e;
        local_128.Data.ArrayNum = 0;
        local_10c.LowerBound._0_8_ = CONCAT44(0x1e,(uint)local_128.Data.AllocatorInstance.Data);
        local_10c.LowerBound.Value.SubFrame = 0.0;
        local_118 = local_118 & 0xffffff00;
        local_10c.UpperBound.Value.FrameNumber.Value = 0xf0;
        local_10c.UpperBound._0_4_ = local_118;
        local_10c.UpperBound.Value.SubFrame = 0.0;
        pTVar5 = FMovieScenePlaybackManager::GetEffectivePlaybackRange(&local_d8,&local_f4);
        ::FString::FString(&local_128,"PlaybackRange");
        bVar2 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                          ((FAutomationTestBase *)this,&local_128,pTVar5,&local_10c);
        if ((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                             (uint)local_128.Data.AllocatorInstance.Data) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_128.Data.AllocatorInstance.Data._4_4_,
                                         (uint)local_128.Data.AllocatorInstance.Data));
        }
        if (bVar2) {
          bVar2 = true;
          goto LAB_146255c2e;
        }
      }
    }
  }
  bVar2 = false;
LAB_146255c2e:
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_d8.TimeTransform.NestedTransforms.AllocatorInstance.Data,
             local_d8.TimeTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_d8.TimeTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_d8.TimeTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 146255c70

FString * __thiscall
FMovieScenePlaybackManagerTestStartEndTimes::GetBeautifiedTestName
          (FMovieScenePlaybackManagerTestStartEndTimes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.PlaybackManager.StartEndTimes")
  ;
  return __return_storage_ptr__;
}

