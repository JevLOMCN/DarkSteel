// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146261100

EAutomationTestFlags __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::GetTestFlags
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146261110

bool __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::IsStressTest
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146261120

uint __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::GetRequiredDeviceNum
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this)

{
  return 1;
}

// GetTestSourceFileName @ 146261130

FString * __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::GetTestSourceFileName
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146261160

int __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::GetTestSourceFileLine
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this)

{
  return 0xde;
}

// GetTests @ 146261170

/* WARNING: Removing unreachable block (ram,0x00014626125d) */
/* WARNING: Removing unreachable block (ram,0x000146261328) */

void __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::GetTests
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.PlaybackManager.Looping.DissectOne");
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

// RunTest @ 146261350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::RunTest
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this,FString *param_1)

{
  byte bVar1;
  int iVar2;
  UMovieScene *pUVar3;
  code *pcVar4;
  FFrameNumber FVar5;
  float fVar6;
  Type TVar7;
  bool bVar8;
  undefined1 uVar9;
  UPackage *pUVar10;
  UTestMovieSceneSequence *pUVar11;
  ForElementType<FMovieSceneContext> FVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_ab8 [32];
  Type local_a88;
  Type local_a84;
  EPlayDirection local_a80;
  EPlayDirection local_a7c;
  Type local_a78;
  Type local_a74 [31];
  FFrameTime local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined4 local_9e0;
  undefined4 uStack_9dc;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined4 local_9a0;
  undefined4 uStack_99c;
  undefined8 local_998;
  undefined8 local_990;
  uint local_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 local_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  uint local_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  undefined4 local_964;
  FFrameNumber FStack_960;
  float fStack_95c;
  uint local_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 local_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  uint local_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 local_934;
  int iStack_930;
  float fStack_92c;
  uint local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 local_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  uint local_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 local_904;
  int iStack_900;
  float fStack_8fc;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 local_8ec;
  int iStack_8e8;
  float fStack_8e4;
  uint local_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  uint local_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 local_8bc;
  int iStack_8b8;
  float fStack_8b4;
  uint local_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  uint local_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 local_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 local_88c;
  int iStack_888;
  float fStack_884;
  uint local_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  uint local_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  TRange<FFrameTime> local_5a8;
  TRange<FFrameTime> local_590;
  TRange<FFrameTime> local_578;
  TRange<FFrameTime> local_560;
  TRange<FFrameTime> local_548;
  TRange<FFrameTime> local_530;
  TRange<FFrameTime> local_518;
  TRange<FFrameTime> local_500;
  TRange<FFrameTime> local_4e8;
  TRange<FFrameTime> local_4d0;
  TRange<FFrameTime> local_4b8;
  TRange<FFrameTime> local_4a0;
  FMovieScenePlaybackManager local_488;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  TRange<FFrameTime> local_258;
  TRange<FFrameTime> local_240;
  TRange<FFrameTime> local_228;
  TRange<FFrameTime> local_210;
  TRange<FFrameTime> local_1f8;
  TRange<FFrameTime> local_1e0;
  TRange<FFrameTime> local_1c8;
  TRange<FFrameTime> local_1b0;
  TRange<FFrameTime> local_198;
  TRange<FFrameTime> local_180;
  TRange<FFrameTime> local_168;
  TRange<FFrameTime> local_150;
  TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_ab8;
  pUVar10 = GetTransientPackage();
  pUVar11 = NewObject<UTestMovieSceneSequence>((UObject *)pUVar10);
  local_a74[1] = 0x1e;
  local_a74[2] = 1;
  pUVar3 = (pUVar11->MovieScene).field0_0x0.DebugPtr;
  (pUVar3->DisplayRate).Numerator = 0x1e;
  (pUVar3->DisplayRate).Denominator = 1;
  UMovieScene::SetTickResolutionDirectly
            ((pUVar11->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x10000ea60);
  UMovieScene::SetPlaybackRange
            ((pUVar11->MovieScene).field0_0x0.DebugPtr,(FFrameNumber)0x0,600000,true);
  FMovieScenePlaybackManager::FMovieScenePlaybackManager(&local_488,(UMovieSceneSequence *)pUVar11);
  local_488.DissectLooping = DissectOne;
  FMovieScenePlaybackManager::SetNumLoopsToPlay(&local_488,4);
  iVar2 = local_488.NumLoopsCompleted;
  local_488.PlaybackStatus = Playing;
  local_a74[0xb] = 599999;
  local_a74[0xc] = Stopped;
  local_138.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneContext>)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 2;
  ::FString::FString(&local_868,"NumLoops");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_868.Data.ArrayNum != 0) {
    FVar13.Data = local_868.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,0)
  ;
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    if (local_138.ArrayMax < 0) {
      FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar12 = local_138.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar12,local_138.ArrayNum);
      local_138.ArrayNum = 0;
      if (local_138.ArrayMax != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                  (0x80,8,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
      }
    }
    else {
      FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar12 = local_138.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar12,local_138.ArrayNum);
      local_138.ArrayNum = 0;
    }
    local_a74[3] = 0x96;
    local_a74[4] = Stopped;
    FMovieScenePlaybackManager::UpdateTo(&local_488,(FFrameTime)0x96,&local_138);
    iVar2 = local_138.ArrayNum;
    ::FString::FString(&local_858,"NumContexts");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_858.Data.ArrayNum != 0) {
      FVar13.Data = local_858.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,1);
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      local_a74[5] = 300000;
      local_a74[6] = Stopped;
      uStack_978 = 300000;
      uStack_974 = 0;
      uStack_984 = 0;
      uStack_980 = 0;
      local_5a8.LowerBound.Value.SubFrame = 0.0;
      local_988 = CONCAT31(local_988._1_3_,1);
      local_5a8.LowerBound._0_8_ = ZEXT48(local_988);
      local_5a8.UpperBound.Value.SubFrame = 0.0;
      local_97c = CONCAT31(local_97c._1_3_,1);
      local_5a8.UpperBound.Value.FrameNumber.Value = 300000;
      local_5a8.UpperBound._0_4_ = local_97c;
      local_a74[7] = Stopped;
      local_a74[8] = Stopped;
      if ((local_138.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar12 = local_138.AllocatorInstance.SecondaryData;
      }
      local_150.LowerBound._0_8_ = *(undefined8 *)FVar12;
      local_150._8_8_ = *(longlong *)((longlong)FVar12 + 8);
      local_150.UpperBound.Value = *(FFrameTime *)((longlong)FVar12 + 0x10);
      ::FString::FString(&local_308,"Context0");
      bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                        ((FAutomationTestBase *)this,&local_308,&local_150,&local_5a8);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        if ((local_138.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
        if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
          FVar12 = local_138.AllocatorInstance.SecondaryData;
        }
        bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
        ::FString::FString(&local_848,"Context0_Jumped");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_848.Data.ArrayNum != 0) {
          FVar13.Data = local_848.Data.AllocatorInstance.Data;
        }
        bVar8 = FAutomationTestBase::TestFalse
                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,(bool)(bVar1 & 1));
        if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_848.Data.AllocatorInstance.Data);
        }
        iVar2 = local_488.NumLoopsCompleted;
        if (bVar8) {
          ::FString::FString(&local_838,"NumLoops");
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_838.Data.ArrayNum != 0) {
            FVar13.Data = local_838.Data.AllocatorInstance.Data;
          }
          bVar8 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,0);
          if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_838.Data.AllocatorInstance.Data);
          }
          TVar7 = local_488.PlaybackStatus;
          if (bVar8) {
            ::FString::FString(&local_828,"Status");
            if (TVar7 == Playing) {
              bVar8 = false;
            }
            else {
              pcVar4 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_2f8,L"%s: The two values are not equal.");
              (*pcVar4)(this,&local_2f8);
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
              bVar8 = true;
            }
            if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_828.Data.AllocatorInstance.Data);
            }
            if (!bVar8) {
              if (local_138.ArrayMax < 0) {
                FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                if (local_138.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMovieSceneContext>)0x0) {
                  FVar12 = local_138.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMovieSceneContext,int>
                          ((FMovieSceneContext *)FVar12,local_138.ArrayNum);
                local_138.ArrayNum = 0;
                if (local_138.ArrayMax != 0) {
                  UE::Core::Private::
                  ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                            (0x80,8,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
                }
              }
              else {
                FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                if (local_138.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMovieSceneContext>)0x0) {
                  FVar12 = local_138.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMovieSceneContext,int>
                          ((FMovieSceneContext *)FVar12,local_138.ArrayNum);
                local_138.ArrayNum = 0;
              }
              local_a74[9] = 0x168;
              local_a74[10] = Stopped;
              FMovieScenePlaybackManager::UpdateTo(&local_488,(FFrameTime)0x168,&local_138);
              iVar2 = local_138.ArrayNum;
              ::FString::FString(&local_818,"NumContexts");
              FVar13.Data = (FScriptContainerElement *)L"";
              if (local_818.Data.ArrayNum != 0) {
                FVar13.Data = local_818.Data.AllocatorInstance.Data;
              }
              bVar8 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,2);
              if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_818.Data.AllocatorInstance.Data);
              }
              if (bVar8) {
                FStack_960.Value = (int)local_a74._44_8_;
                FVar5.Value = FStack_960.Value;
                fStack_95c = SUB84(local_a74._44_8_,4);
                fVar6 = fStack_95c;
                local_a74[0xd] = 300000;
                local_a74[0xe] = Stopped;
                uStack_96c = 300000;
                uStack_968 = 0;
                local_590.LowerBound.Value.SubFrame = 0.0;
                local_970 = local_970 & 0xffffff00;
                local_590.LowerBound.Value.FrameNumber.Value = 300000;
                local_590.LowerBound._0_4_ = local_970;
                local_590.UpperBound.Value.SubFrame = fStack_95c;
                local_964 = CONCAT31(local_964._1_3_,1);
                local_590.UpperBound.Value.FrameNumber.Value = FStack_960.Value;
                local_590.UpperBound._0_4_ = local_964;
                if ((local_138.ArrayNum < 1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                if (local_138.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMovieSceneContext>)0x0) {
                  FVar12 = local_138.AllocatorInstance.SecondaryData;
                }
                local_258.LowerBound._0_8_ = *(undefined8 *)FVar12;
                local_258._8_8_ = *(longlong *)((longlong)FVar12 + 8);
                local_258.UpperBound.Value = *(FFrameTime *)((longlong)FVar12 + 0x10);
                ::FString::FString(&local_2e8,"Context0");
                bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                  ((FAutomationTestBase *)this,&local_2e8,&local_258,&local_590);
                if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
                }
                if (bVar8) {
                  if ((local_138.ArrayNum < 1) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    uVar9 = (*pcVar4)();
                    return (bool)uVar9;
                  }
                  FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                  if (local_138.AllocatorInstance.SecondaryData !=
                      (ForElementType<FMovieSceneContext>)0x0) {
                    FVar12 = local_138.AllocatorInstance.SecondaryData;
                  }
                  bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
                  ::FString::FString(&local_808,"Context0_Jumped");
                  FVar13.Data = (FScriptContainerElement *)L"";
                  if (local_808.Data.ArrayNum != 0) {
                    FVar13.Data = local_808.Data.AllocatorInstance.Data;
                  }
                  bVar8 = FAutomationTestBase::TestFalse
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                     (bool)(bVar1 & 1));
                  if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_808.Data.AllocatorInstance.Data);
                  }
                  if (bVar8) {
                    local_a74[0xf] = 120000;
                    local_a74[0x10] = Stopped;
                    uStack_948 = 120000;
                    uStack_944 = 0;
                    uStack_954 = 0;
                    uStack_950 = 0;
                    local_548.LowerBound.Value.SubFrame = 0.0;
                    local_958 = CONCAT31(local_958._1_3_,1);
                    local_548.LowerBound._0_8_ = ZEXT48(local_958);
                    local_548.UpperBound.Value.SubFrame = 0.0;
                    local_94c = CONCAT31(local_94c._1_3_,1);
                    local_548.UpperBound.Value.FrameNumber.Value = 120000;
                    local_548.UpperBound._0_4_ = local_94c;
                    local_a74[0x11] = Stopped;
                    local_a74[0x12] = Stopped;
                    if ((local_138.ArrayNum < 2) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      uVar9 = (*pcVar4)();
                      return (bool)uVar9;
                    }
                    FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                    if (local_138.AllocatorInstance.SecondaryData !=
                        (ForElementType<FMovieSceneContext>)0x0) {
                      FVar12 = local_138.AllocatorInstance.SecondaryData;
                    }
                    local_240.LowerBound._0_8_ =
                         ((FMovieSceneContext *)((longlong)FVar12 + 0x80))->_padding_;
                    local_240._8_8_ = *(longlong *)((longlong)FVar12 + 0x88);
                    local_240.UpperBound.Value = *(FFrameTime *)((longlong)FVar12 + 0x90);
                    ::FString::FString(&local_2d8,"Context1");
                    bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                      ((FAutomationTestBase *)this,&local_2d8,&local_240,&local_548)
                    ;
                    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
                    }
                    if (bVar8) {
                      if ((local_138.ArrayNum < 2) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        uVar9 = (*pcVar4)();
                        return (bool)uVar9;
                      }
                      FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                      if (local_138.AllocatorInstance.SecondaryData !=
                          (ForElementType<FMovieSceneContext>)0x0) {
                        FVar12 = local_138.AllocatorInstance.SecondaryData;
                      }
                      bVar1 = *(uchar *)((longlong)FVar12 + 0xfc);
                      ::FString::FString(&local_7f8,"Context1_Jumped");
                      FVar13.Data = (FScriptContainerElement *)L"";
                      if (local_7f8.Data.ArrayNum != 0) {
                        FVar13.Data = local_7f8.Data.AllocatorInstance.Data;
                      }
                      bVar8 = FAutomationTestBase::TestTrue
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                         (bool)(bVar1 & 1));
                      if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
                      }
                      iVar2 = local_488.NumLoopsCompleted;
                      if (bVar8) {
                        ::FString::FString(&local_7e8,"NumLoops");
                        FVar13.Data = (FScriptContainerElement *)L"";
                        if (local_7e8.Data.ArrayNum != 0) {
                          FVar13.Data = local_7e8.Data.AllocatorInstance.Data;
                        }
                        bVar8 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,
                                           1);
                        if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
                        }
                        TVar7 = local_488.PlaybackStatus;
                        if (bVar8) {
                          ::FString::FString(&local_7d8,"Status");
                          if (TVar7 == Playing) {
                            bVar8 = false;
                          }
                          else {
                            pcVar4 = *(code **)(*(longlong *)this + 0x28);
                            ::FString::PrintfImpl(&local_2a8,L"%s: The two values are not equal.");
                            (*pcVar4)(this,&local_2a8);
                            if (local_2a8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                            }
                            bVar8 = true;
                          }
                          if (local_7d8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
                          }
                          if (!bVar8) {
                            if (local_138.ArrayMax < 0) {
                              FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                              if (local_138.AllocatorInstance.SecondaryData !=
                                  (ForElementType<FMovieSceneContext>)0x0) {
                                FVar12 = local_138.AllocatorInstance.SecondaryData;
                              }
                              DestructItems<FMovieSceneContext,int>
                                        ((FMovieSceneContext *)FVar12,local_138.ArrayNum);
                              local_138.ArrayNum = 0;
                              if (local_138.ArrayMax != 0) {
                                UE::Core::Private::
                                ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                          (0x80,8,0,&local_138.AllocatorInstance,0,
                                           &local_138.ArrayMax);
                              }
                            }
                            else {
                              FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                              if (local_138.AllocatorInstance.SecondaryData !=
                                  (ForElementType<FMovieSceneContext>)0x0) {
                                FVar12 = local_138.AllocatorInstance.SecondaryData;
                              }
                              DestructItems<FMovieSceneContext,int>
                                        ((FMovieSceneContext *)FVar12,local_138.ArrayNum);
                              local_138.ArrayNum = 0;
                            }
                            local_a74[0x13] = 0x2b2;
                            local_a74[0x14] = Stopped;
                            FMovieScenePlaybackManager::UpdateTo
                                      (&local_488,(FFrameTime)0x2b2,&local_138);
                            iVar2 = local_138.ArrayNum;
                            ::FString::FString(&local_7c8,"NumContexts");
                            FVar13.Data = (FScriptContainerElement *)L"";
                            if (local_7c8.Data.ArrayNum != 0) {
                              FVar13.Data = local_7c8.Data.AllocatorInstance.Data;
                            }
                            bVar8 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                               iVar2,2);
                            if (local_7c8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
                            }
                            if (bVar8) {
                              local_a74[0x15] = 120000;
                              local_a74[0x16] = Stopped;
                              uStack_93c = 120000;
                              uStack_938 = 0;
                              local_530.LowerBound.Value.SubFrame = 0.0;
                              local_940 = local_940 & 0xffffff00;
                              local_530.LowerBound.Value.FrameNumber.Value = 120000;
                              local_530.LowerBound._0_4_ = local_940;
                              local_530.UpperBound.Value.SubFrame = fVar6;
                              local_934 = CONCAT31(local_934._1_3_,1);
                              local_530.UpperBound.Value.FrameNumber.Value = FVar5.Value;
                              local_530.UpperBound._0_4_ = local_934;
                              iStack_930 = FVar5.Value;
                              fStack_92c = fVar6;
                              if ((local_138.ArrayNum < 1) &&
                                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                pcVar4 = (code *)swi(3);
                                uVar9 = (*pcVar4)();
                                return (bool)uVar9;
                              }
                              FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                              if (local_138.AllocatorInstance.SecondaryData !=
                                  (ForElementType<FMovieSceneContext>)0x0) {
                                FVar12 = local_138.AllocatorInstance.SecondaryData;
                              }
                              local_228.LowerBound._0_8_ = *(undefined8 *)FVar12;
                              local_228._8_8_ = *(longlong *)((longlong)FVar12 + 8);
                              local_228.UpperBound.Value = *(FFrameTime *)((longlong)FVar12 + 0x10);
                              ::FString::FString(&local_298,"Context0");
                              bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                                ((FAutomationTestBase *)this,&local_298,&local_228,
                                                 &local_530);
                              if (local_298.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_298.Data.AllocatorInstance.Data);
                              }
                              if (bVar8) {
                                if ((local_138.ArrayNum < 1) &&
                                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                  pcVar4 = (code *)swi(3);
                                  uVar9 = (*pcVar4)();
                                  return (bool)uVar9;
                                }
                                FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                                if (local_138.AllocatorInstance.SecondaryData !=
                                    (ForElementType<FMovieSceneContext>)0x0) {
                                  FVar12 = local_138.AllocatorInstance.SecondaryData;
                                }
                                bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
                                ::FString::FString(&local_7b8,"Context0_Jumped");
                                FVar13.Data = (FScriptContainerElement *)L"";
                                if (local_7b8.Data.ArrayNum != 0) {
                                  FVar13.Data = local_7b8.Data.AllocatorInstance.Data;
                                }
                                bVar8 = FAutomationTestBase::TestFalse
                                                  ((FAutomationTestBase *)this,
                                                   (wchar_t *)FVar13.Data,(bool)(bVar1 & 1));
                                if (local_7b8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
                                }
                                if (bVar8) {
                                  local_a74[0x17] = 180000;
                                  local_a74[0x18] = Stopped;
                                  uStack_918 = 180000;
                                  uStack_914 = 0;
                                  uStack_924 = 0;
                                  uStack_920 = 0;
                                  local_518.LowerBound.Value.SubFrame = 0.0;
                                  local_928 = CONCAT31(local_928._1_3_,1);
                                  local_518.LowerBound._0_8_ = ZEXT48(local_928);
                                  local_518.UpperBound.Value.SubFrame = 0.0;
                                  local_91c = CONCAT31(local_91c._1_3_,1);
                                  local_518.UpperBound.Value.FrameNumber.Value = 180000;
                                  local_518.UpperBound._0_4_ = local_91c;
                                  local_a74[0x19] = Stopped;
                                  local_a74[0x1a] = Stopped;
                                  if ((local_138.ArrayNum < 2) &&
                                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                    pcVar4 = (code *)swi(3);
                                    uVar9 = (*pcVar4)();
                                    return (bool)uVar9;
                                  }
                                  FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                                  if (local_138.AllocatorInstance.SecondaryData !=
                                      (ForElementType<FMovieSceneContext>)0x0) {
                                    FVar12 = local_138.AllocatorInstance.SecondaryData;
                                  }
                                  local_210.LowerBound._0_8_ =
                                       ((FMovieSceneContext *)((longlong)FVar12 + 0x80))->_padding_;
                                  local_210._8_8_ = *(longlong *)((longlong)FVar12 + 0x88);
                                  local_210.UpperBound.Value =
                                       *(FFrameTime *)((longlong)FVar12 + 0x90);
                                  ::FString::FString(&local_318,"Context1");
                                  bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                                    ((FAutomationTestBase *)this,&local_318,
                                                     &local_210,&local_518);
                                  if (local_318.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_318.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar8) {
                                    if ((local_138.ArrayNum < 2) &&
                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                      pcVar4 = (code *)swi(3);
                                      uVar9 = (*pcVar4)();
                                      return (bool)uVar9;
                                    }
                                    FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                                    if (local_138.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMovieSceneContext>)0x0) {
                                      FVar12 = local_138.AllocatorInstance.SecondaryData;
                                    }
                                    bVar1 = *(uchar *)((longlong)FVar12 + 0xfc);
                                    ::FString::FString(&local_7a8,"Context1_Jumped");
                                    FVar13.Data = (FScriptContainerElement *)L"";
                                    if (local_7a8.Data.ArrayNum != 0) {
                                      FVar13.Data = local_7a8.Data.AllocatorInstance.Data;
                                    }
                                    bVar8 = FAutomationTestBase::TestTrue
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar13.Data,(bool)(bVar1 & 1));
                                    if (local_7a8.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
                                    }
                                    iVar2 = local_488.NumLoopsCompleted;
                                    if (bVar8) {
                                      ::FString::FString(&local_798,"NumLoops");
                                      FVar13.Data = (FScriptContainerElement *)L"";
                                      if (local_798.Data.ArrayNum != 0) {
                                        FVar13.Data = local_798.Data.AllocatorInstance.Data;
                                      }
                                      bVar8 = FAutomationTestBase::TestEqual
                                                        ((FAutomationTestBase *)this,
                                                         (wchar_t *)FVar13.Data,iVar2,3);
                                      if (local_798.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_798.Data.AllocatorInstance.Data);
                                      }
                                      TVar7 = local_488.PlaybackStatus;
                                      if (bVar8) {
                                        ::FString::FString(&local_788,"Status");
                                        if (TVar7 == Playing) {
                                          bVar8 = false;
                                        }
                                        else {
                                          pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                          ::FString::PrintfImpl
                                                    (&local_288,L"%s: The two values are not equal."
                                                    );
                                          (*pcVar4)(this,&local_288);
                                          if (local_288.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_288.Data.AllocatorInstance.Data);
                                          }
                                          bVar8 = true;
                                        }
                                        if (local_788.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_788.Data.AllocatorInstance.Data);
                                        }
                                        if (!bVar8) {
                                          if (local_138.ArrayMax < 0) {
                                            FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                                            if (local_138.AllocatorInstance.SecondaryData !=
                                                (ForElementType<FMovieSceneContext>)0x0) {
                                              FVar12 = local_138.AllocatorInstance.SecondaryData;
                                            }
                                            DestructItems<FMovieSceneContext,int>
                                                      ((FMovieSceneContext *)FVar12,
                                                       local_138.ArrayNum);
                                            local_138.ArrayNum = 0;
                                            if (local_138.ArrayMax != 0) {
                                              UE::Core::Private::
                                              ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                                        (0x80,8,0,&local_138.AllocatorInstance,0,
                                                         &local_138.ArrayMax);
                                            }
                                          }
                                          else {
                                            FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                                            if (local_138.AllocatorInstance.SecondaryData !=
                                                (ForElementType<FMovieSceneContext>)0x0) {
                                              FVar12 = local_138.AllocatorInstance.SecondaryData;
                                            }
                                            DestructItems<FMovieSceneContext,int>
                                                      ((FMovieSceneContext *)FVar12,
                                                       local_138.ArrayNum);
                                            local_138.ArrayNum = 0;
                                          }
                                          local_a74[0x1b] = 0x14a;
                                          local_a74[0x1c] = Stopped;
                                          FMovieScenePlaybackManager::UpdateTo
                                                    (&local_488,(FFrameTime)0x14a,&local_138);
                                          iVar2 = local_138.ArrayNum;
                                          ::FString::FString(&local_778,"NumContexts");
                                          FVar13.Data = (FScriptContainerElement *)L"";
                                          if (local_778.Data.ArrayNum != 0) {
                                            FVar13.Data = local_778.Data.AllocatorInstance.Data;
                                          }
                                          bVar8 = FAutomationTestBase::TestEqual
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar13.Data,iVar2,1);
                                          if (local_778.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_778.Data.AllocatorInstance.Data);
                                          }
                                          if (bVar8) {
                                            local_a74[0x1d] = 180000;
                                            local_a74[0x1e] = Stopped;
                                            uStack_90c = 180000;
                                            uStack_908 = 0;
                                            local_500.LowerBound.Value.SubFrame = 0.0;
                                            local_910 = local_910 & 0xffffff00;
                                            local_500.LowerBound.Value.FrameNumber.Value = 180000;
                                            local_500.LowerBound._0_4_ = local_910;
                                            local_500.UpperBound.Value.SubFrame = fVar6;
                                            local_904 = CONCAT31(local_904._1_3_,1);
                                            local_500.UpperBound.Value.FrameNumber.Value =
                                                 FVar5.Value;
                                            local_500.UpperBound._0_4_ = local_904;
                                            iStack_900 = FVar5.Value;
                                            fStack_8fc = fVar6;
                                            if ((local_138.ArrayNum < 1) &&
                                               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                  (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                              pcVar4 = (code *)swi(3);
                                              uVar9 = (*pcVar4)();
                                              return (bool)uVar9;
                                            }
                                            FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
                                            if (local_138.AllocatorInstance.SecondaryData !=
                                                (ForElementType<FMovieSceneContext>)0x0) {
                                              FVar12 = local_138.AllocatorInstance.SecondaryData;
                                            }
                                            local_1f8.LowerBound._0_8_ = *(undefined8 *)FVar12;
                                            local_1f8._8_8_ = *(longlong *)((longlong)FVar12 + 8);
                                            local_1f8.UpperBound.Value =
                                                 *(FFrameTime *)((longlong)FVar12 + 0x10);
                                            ::FString::FString(&local_278,"Context0");
                                            bVar8 = FAutomationTestBase::
                                                    TestEqual<TRange<FFrameTime>_>
                                                              ((FAutomationTestBase *)this,
                                                               &local_278,&local_1f8,&local_500);
                                            if (local_278.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_278.Data.AllocatorInstance.Data);
                                            }
                                            if (bVar8) {
                                              if ((local_138.ArrayNum < 1) &&
                                                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                pcVar4 = (code *)swi(3);
                                                uVar9 = (*pcVar4)();
                                                return (bool)uVar9;
                                              }
                                              FVar12 = (ForElementType<FMovieSceneContext>)
                                                       &local_138;
                                              if (local_138.AllocatorInstance.SecondaryData !=
                                                  (ForElementType<FMovieSceneContext>)0x0) {
                                                FVar12 = local_138.AllocatorInstance.SecondaryData;
                                              }
                                              bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
                                              ::FString::FString(&local_768,"Context0_Jumped");
                                              FVar13.Data = (FScriptContainerElement *)L"";
                                              if (local_768.Data.ArrayNum != 0) {
                                                FVar13.Data = local_768.Data.AllocatorInstance.Data;
                                              }
                                              bVar8 = FAutomationTestBase::TestFalse
                                                                ((FAutomationTestBase *)this,
                                                                 (wchar_t *)FVar13.Data,
                                                                 (bool)(bVar1 & 1));
                                              if (local_768.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_768.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              iVar2 = local_488.NumLoopsCompleted;
                                              if (bVar8) {
                                                ::FString::FString(&local_758,"NumLoops");
                                                FVar13.Data = (FScriptContainerElement *)L"";
                                                if (local_758.Data.ArrayNum != 0) {
                                                  FVar13.Data = local_758.Data.AllocatorInstance.
                                                                Data;
                                                }
                                                bVar8 = FAutomationTestBase::TestEqual
                                                                  ((FAutomationTestBase *)this,
                                                                   (wchar_t *)FVar13.Data,iVar2,4);
                                                if (local_758.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_758.Data.AllocatorInstance.
                                                                Data);
                                                }
                                                TVar7 = local_488.PlaybackStatus;
                                                if (bVar8) {
                                                  ::FString::FString(&local_748,"Status");
                                                  if (TVar7 == Stopped) {
                                                    bVar8 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_268,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_268);
                                                    if (local_268.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_268.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar8 = true;
                                                  }
                                                  if (local_748.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_748.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    local_488.NumLoopsCompleted = 0;
                                                    local_488.PlayDirection = Backwards;
                                                    local_488.PlaybackStatus = Playing;
                                                    ::FString::FString(&local_738,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_738.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_738.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,0,0);
                                                    if (local_738.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_738.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar8) {
                                                      local_9f8.FrameNumber.Value = 300;
                                                      local_9f8.SubFrame = 0.0;
                                                      FMovieScenePlaybackManager::SetCurrentTime
                                                                (&local_488,&local_9f8);
                                                      if (local_138.ArrayMax < 0) {
                                                        FVar12 = (ForElementType<FMovieSceneContext>
                                                                 )&local_138;
                                                        if (local_138.AllocatorInstance.
                                                            SecondaryData !=
                                                            (ForElementType<FMovieSceneContext>)0x0)
                                                        {
                                                          FVar12 = local_138.AllocatorInstance.
                                                                   SecondaryData;
                                                        }
                                                        DestructItems<FMovieSceneContext,int>
                                                                  ((FMovieSceneContext *)FVar12,
                                                                   local_138.ArrayNum);
                                                        local_138.ArrayNum = 0;
                                                        if (local_138.ArrayMax != 0) {
                                                          UE::Core::Private::
                                                                                                                    
                                                  ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                                            (0x80,8,0,&local_138.AllocatorInstance,0
                                                             ,&local_138.ArrayMax);
                                                  }
                                                  }
                                                  else {
                                                    FVar12 = (ForElementType<FMovieSceneContext>)
                                                             &local_138;
                                                    if (local_138.AllocatorInstance.SecondaryData !=
                                                        (ForElementType<FMovieSceneContext>)0x0) {
                                                      FVar12 = local_138.AllocatorInstance.
                                                               SecondaryData;
                                                    }
                                                    DestructItems<FMovieSceneContext,int>
                                                              ((FMovieSceneContext *)FVar12,
                                                               local_138.ArrayNum);
                                                    local_138.ArrayNum = 0;
                                                  }
                                                  local_9f0 = 0x96;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_488,(FFrameTime)0x96,&local_138)
                                                  ;
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_728,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_728.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_728.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,1)
                                                  ;
                                                  if (local_728.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_728.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_9e8 = 300000;
                                                    uStack_8f4 = 300000;
                                                    uStack_8f0 = 0;
                                                    local_560.LowerBound.Value.SubFrame = 0.0;
                                                    local_8f8 = CONCAT31(local_8f8._1_3_,1);
                                                    local_560.LowerBound.Value.FrameNumber.Value =
                                                         300000;
                                                    local_560.LowerBound._0_4_ = local_8f8;
                                                    local_560.UpperBound.Value.SubFrame = fVar6;
                                                    local_8ec = CONCAT31(local_8ec._1_3_,1);
                                                    local_560.UpperBound.Value.FrameNumber.Value =
                                                         FVar5.Value;
                                                    local_560.UpperBound._0_4_ = local_8ec;
                                                    iStack_8e8 = FVar5.Value;
                                                    fStack_8e4 = fVar6;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_1e0.LowerBound._0_8_ = *(undefined8 *)FVar12
                                                  ;
                                                  local_1e0._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 8);
                                                  local_1e0.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x10);
                                                  ::FString::FString(&local_2c8,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_2c8,&local_1e0,
                                                                     &local_560);
                                                  if (local_2c8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2c8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
                                                  ::FString::FString(&local_718,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_718.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_718.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_718.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_718.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar12 + 0x20);
                                                  ::FString::FString(&local_708,"Context0_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar8 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_3c8,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_3c8,0);
                                                    if (local_3c8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_3c8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar8 = true;
                                                  }
                                                  if (local_708.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_708.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_488.NumLoopsCompleted;
                                                  if (!bVar8) {
                                                    ::FString::FString(&local_6f8,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_6f8.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_6f8.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       0);
                                                    if (local_6f8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_6f8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar7 = local_488.PlaybackStatus;
                                                    if (bVar8) {
                                                      ::FString::FString(&local_6e8,"Status");
                                                      if (TVar7 == Playing) {
                                                        bVar8 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_3b8,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_3b8);
                                                  if (local_3b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar8 = true;
                                                  }
                                                  if (local_6e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6e8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    if (local_138.ArrayMax < 0) {
                                                      FVar12 = (ForElementType<FMovieSceneContext>)
                                                               &local_138;
                                                      if (local_138.AllocatorInstance.SecondaryData
                                                          != (ForElementType<FMovieSceneContext>)0x0
                                                         ) {
                                                        FVar12 = local_138.AllocatorInstance.
                                                                 SecondaryData;
                                                      }
                                                      DestructItems<FMovieSceneContext,int>
                                                                ((FMovieSceneContext *)FVar12,
                                                                 local_138.ArrayNum);
                                                      local_138.ArrayNum = 0;
                                                      if (local_138.ArrayMax != 0) {
                                                        UE::Core::Private::
                                                                                                                
                                                  ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                                            (0x80,8,0,&local_138.AllocatorInstance,0
                                                             ,&local_138.ArrayMax);
                                                  }
                                                  }
                                                  else {
                                                    FVar12 = (ForElementType<FMovieSceneContext>)
                                                             &local_138;
                                                    if (local_138.AllocatorInstance.SecondaryData !=
                                                        (ForElementType<FMovieSceneContext>)0x0) {
                                                      FVar12 = local_138.AllocatorInstance.
                                                               SecondaryData;
                                                    }
                                                    DestructItems<FMovieSceneContext,int>
                                                              ((FMovieSceneContext *)FVar12,
                                                               local_138.ArrayNum);
                                                    local_138.ArrayNum = 0;
                                                  }
                                                  local_9e0 = 0xffffffc4;
                                                  uStack_9dc = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_488,(FFrameTime)0xffffffc4,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_6d8,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_6d8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_6d8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,2)
                                                  ;
                                                  if (local_6d8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6d8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_9d8 = 300000;
                                                    uStack_8d0 = 300000;
                                                    uStack_8cc = 0;
                                                    uStack_8dc = 0;
                                                    uStack_8d8 = 0;
                                                    local_578.LowerBound.Value.SubFrame = 0.0;
                                                    local_8e0 = CONCAT31(local_8e0._1_3_,1);
                                                    local_578.LowerBound._0_8_ = ZEXT48(local_8e0);
                                                    local_578.UpperBound.Value.SubFrame = 0.0;
                                                    local_8d4 = local_8d4 & 0xffffff00;
                                                    local_578.UpperBound.Value.FrameNumber.Value =
                                                         300000;
                                                    local_578.UpperBound._0_4_ = local_8d4;
                                                    local_9d0 = 0;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_1c8.LowerBound._0_8_ = *(undefined8 *)FVar12
                                                  ;
                                                  local_1c8._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 8);
                                                  local_1c8.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x10);
                                                  ::FString::FString(&local_3a8,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_3a8,&local_1c8,
                                                                     &local_578);
                                                  if (local_3a8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3a8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
                                                  ::FString::FString(&local_6c8,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_6c8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_6c8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_6c8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6c8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar12 + 0x20);
                                                  ::FString::FString(&local_6b8,"Context0_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar8 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_398,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_398,0);
                                                    if (local_398.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_398.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar8 = true;
                                                  }
                                                  if (local_6b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    local_9c8 = 480000;
                                                    uStack_8c4 = 480000;
                                                    uStack_8c0 = 0;
                                                    local_4e8.LowerBound.Value.SubFrame = 0.0;
                                                    local_8c8 = CONCAT31(local_8c8._1_3_,1);
                                                    local_4e8.LowerBound.Value.FrameNumber.Value =
                                                         480000;
                                                    local_4e8.LowerBound._0_4_ = local_8c8;
                                                    local_4e8.UpperBound.Value.SubFrame = fVar6;
                                                    local_8bc = CONCAT31(local_8bc._1_3_,1);
                                                    local_4e8.UpperBound.Value.FrameNumber.Value =
                                                         FVar5.Value;
                                                    local_4e8.UpperBound._0_4_ = local_8bc;
                                                    iStack_8b8 = FVar5.Value;
                                                    fStack_8b4 = fVar6;
                                                    if ((local_138.ArrayNum < 2) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_1b0.LowerBound._0_8_ =
                                                       ((FMovieSceneContext *)
                                                       ((longlong)FVar12 + 0x80))->_padding_;
                                                  local_1b0._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 0x88);
                                                  local_1b0.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x90);
                                                  ::FString::FString(&local_388,"Context1");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_388,&local_1b0,
                                                                     &local_4e8);
                                                  if (local_388.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_388.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 2) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar12 + 0xfc);
                                                  ::FString::FString(&local_6a8,"Context1_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_6a8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_6a8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_6a8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6a8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 2) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar12 + 0xa0);
                                                  ::FString::FString(&local_698,"Context1_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar8 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_378,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_378,0);
                                                    if (local_378.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_378.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar8 = true;
                                                  }
                                                  if (local_698.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_698.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_488.NumLoopsCompleted;
                                                  if (!bVar8) {
                                                    ::FString::FString(&local_688,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_688.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_688.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       1);
                                                    if (local_688.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_688.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar7 = local_488.PlaybackStatus;
                                                    if (bVar8) {
                                                      ::FString::FString(&local_678,"Status");
                                                      if (TVar7 == Playing) {
                                                        bVar8 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_368,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_368);
                                                  if (local_368.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_368.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar8 = true;
                                                  }
                                                  if (local_678.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_678.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    if (local_138.ArrayMax < 0) {
                                                      FVar12 = (ForElementType<FMovieSceneContext>)
                                                               &local_138;
                                                      if (local_138.AllocatorInstance.SecondaryData
                                                          != (ForElementType<FMovieSceneContext>)0x0
                                                         ) {
                                                        FVar12 = local_138.AllocatorInstance.
                                                                 SecondaryData;
                                                      }
                                                      DestructItems<FMovieSceneContext,int>
                                                                ((FMovieSceneContext *)FVar12,
                                                                 local_138.ArrayNum);
                                                      local_138.ArrayNum = 0;
                                                      if (local_138.ArrayMax != 0) {
                                                        UE::Core::Private::
                                                                                                                
                                                  ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                                            (0x80,8,0,&local_138.AllocatorInstance,0
                                                             ,&local_138.ArrayMax);
                                                  }
                                                  }
                                                  else {
                                                    FVar12 = (ForElementType<FMovieSceneContext>)
                                                             &local_138;
                                                    if (local_138.AllocatorInstance.SecondaryData !=
                                                        (ForElementType<FMovieSceneContext>)0x0) {
                                                      FVar12 = local_138.AllocatorInstance.
                                                               SecondaryData;
                                                    }
                                                    DestructItems<FMovieSceneContext,int>
                                                              ((FMovieSceneContext *)FVar12,
                                                               local_138.ArrayNum);
                                                    local_138.ArrayNum = 0;
                                                  }
                                                  local_9c0 = 0xfffffe7a;
                                                  uStack_9bc = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_488,(FFrameTime)0xfffffe7a,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_668,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_668.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_668.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,2)
                                                  ;
                                                  if (local_668.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_668.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_9b8 = 480000;
                                                    uStack_8a0 = 480000;
                                                    uStack_89c = 0;
                                                    uStack_8ac = 0;
                                                    uStack_8a8 = 0;
                                                    local_4d0.LowerBound.Value.SubFrame = 0.0;
                                                    local_8b0 = CONCAT31(local_8b0._1_3_,1);
                                                    local_4d0.LowerBound._0_8_ = ZEXT48(local_8b0);
                                                    local_4d0.UpperBound.Value.SubFrame = 0.0;
                                                    local_8a4 = local_8a4 & 0xffffff00;
                                                    local_4d0.UpperBound.Value.FrameNumber.Value =
                                                         480000;
                                                    local_4d0.UpperBound._0_4_ = local_8a4;
                                                    local_9b0 = 0;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_198.LowerBound._0_8_ = *(undefined8 *)FVar12
                                                  ;
                                                  local_198._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 8);
                                                  local_198.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x10);
                                                  ::FString::FString(&local_2b8,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_2b8,&local_198,
                                                                     &local_4d0);
                                                  if (local_2b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
                                                  ::FString::FString(&local_658,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_658.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_658.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_658.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_658.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar12 + 0x20);
                                                  ::FString::FString(&local_648,"Context0_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar8 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_358,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_358,0);
                                                    if (local_358.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_358.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar8 = true;
                                                  }
                                                  if (local_648.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_648.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    local_9a8 = 420000;
                                                    uStack_894 = 420000;
                                                    uStack_890 = 0;
                                                    local_4b8.LowerBound.Value.SubFrame = 0.0;
                                                    local_898 = CONCAT31(local_898._1_3_,1);
                                                    local_4b8.LowerBound.Value.FrameNumber.Value =
                                                         420000;
                                                    local_4b8.LowerBound._0_4_ = local_898;
                                                    local_4b8.UpperBound.Value.SubFrame = fVar6;
                                                    local_88c = CONCAT31(local_88c._1_3_,1);
                                                    local_4b8.UpperBound.Value.FrameNumber.Value =
                                                         FVar5.Value;
                                                    local_4b8.UpperBound._0_4_ = local_88c;
                                                    iStack_888 = FVar5.Value;
                                                    fStack_884 = fVar6;
                                                    if ((local_138.ArrayNum < 2) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_180.LowerBound._0_8_ =
                                                       ((FMovieSceneContext *)
                                                       ((longlong)FVar12 + 0x80))->_padding_;
                                                  local_180._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 0x88);
                                                  local_180.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x90);
                                                  ::FString::FString(&local_348,"Context1");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_348,&local_180,
                                                                     &local_4b8);
                                                  if (local_348.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_348.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 2) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar12 + 0xfc);
                                                  ::FString::FString(&local_638,"Context1_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_638.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_638.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_638.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_638.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 2) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar12 + 0xa0);
                                                  ::FString::FString(&local_628,"Context1_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar8 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_338,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_338,0);
                                                    if (local_338.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_338.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar8 = true;
                                                  }
                                                  if (local_628.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_628.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_488.NumLoopsCompleted;
                                                  if (!bVar8) {
                                                    ::FString::FString(&local_618,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_618.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_618.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       3);
                                                    if (local_618.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_618.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar8) {
                                                      local_a84 = local_488.PlaybackStatus;
                                                      local_a88 = Playing;
                                                      ::FString::FString(&local_608,"Status");
                                                      FVar13.Data = (FScriptContainerElement *)L"";
                                                      if (local_608.Data.ArrayNum != 0) {
                                                        FVar13.Data = local_608.Data.
                                                                      AllocatorInstance.Data;
                                                      }
                                                      bVar8 = FAutomationTestBase::
                                                                                                                            
                                                  TestEqual<enum_EMovieScenePlayerStatus::Type>
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar13.Data,&local_a84,
                                                             &local_a88);
                                                  if (local_608.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_608.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                                                                        
                                                  TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                                                  ::Reset(&local_138,0);
                                                  local_9a0 = 0xffffffe2;
                                                  uStack_99c = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_488,(FFrameTime)0xffffffe2,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_5f8,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_5f8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_5f8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,1)
                                                  ;
                                                  if (local_5f8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5f8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_998 = 420000;
                                                    uStack_870 = 420000;
                                                    uStack_86c = 0;
                                                    uStack_87c = 0;
                                                    uStack_878 = 0;
                                                    local_4a0.LowerBound.Value.SubFrame = 0.0;
                                                    local_880 = CONCAT31(local_880._1_3_,1);
                                                    local_4a0.LowerBound._0_8_ = ZEXT48(local_880);
                                                    local_4a0.UpperBound.Value.SubFrame = 0.0;
                                                    local_874 = local_874 & 0xffffff00;
                                                    local_4a0.UpperBound.Value.FrameNumber.Value =
                                                         420000;
                                                    local_4a0.UpperBound._0_4_ = local_874;
                                                    local_990 = 0;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_168.LowerBound._0_8_ = *(undefined8 *)FVar12
                                                  ;
                                                  local_168._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 8);
                                                  local_168.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x10);
                                                  ::FString::FString(&local_328,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_328,&local_168,
                                                                     &local_4a0);
                                                  if (local_328.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_328.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar12 + 0x7c);
                                                  ::FString::FString(&local_5e8,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_5e8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_5e8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_5e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5e8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_a80 = Backwards;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar9 = (*pcVar4)();
                                                    return (bool)uVar9;
                                                  }
                                                  FVar12 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar12 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_a7c = *(EPlayDirection *)
                                                               ((longlong)FVar12 + 0x20);
                                                  ::FString::FString(&local_5d8,"Context0_Backwards"
                                                                    );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_5d8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_5d8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<enum_EPlayDirection>
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     &local_a7c,&local_a80);
                                                  if (local_5d8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5d8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_488.NumLoopsCompleted;
                                                  if (bVar8) {
                                                    ::FString::FString(&local_5c8,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_5c8.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_5c8.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       4);
                                                    if (local_5c8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_5c8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar8) {
                                                      local_a74[0] = local_488.PlaybackStatus;
                                                      local_a78 = Stopped;
                                                      ::FString::FString(&local_5b8,"Status");
                                                      FVar13.Data = (FScriptContainerElement *)L"";
                                                      if (local_5b8.Data.ArrayNum != 0) {
                                                        FVar13.Data = local_5b8.Data.
                                                                      AllocatorInstance.Data;
                                                      }
                                                      bVar8 = FAutomationTestBase::
                                                                                                                            
                                                  TestEqual<enum_EMovieScenePlayerStatus::Type>
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar13.Data,local_a74,
                                                             &local_a78);
                                                  if (local_5b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    bVar8 = true;
                                                    goto LAB_146263d01;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar8 = false;
LAB_146263d01:
  FVar12 = (ForElementType<FMovieSceneContext>)&local_138;
  if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
    FVar12 = local_138.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar12,local_138.ArrayNum);
  if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
    FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_488.TimeTransform.NestedTransforms.AllocatorInstance.Data,
             local_488.TimeTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_488.TimeTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_488.TimeTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 146263da0

FString * __thiscall
FMovieScenePlaybackManagerTestLoopingDissectOne::GetBeautifiedTestName
          (FMovieScenePlaybackManagerTestLoopingDissectOne *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.PlaybackManager.Looping.DissectOne");
  return __return_storage_ptr__;
}

