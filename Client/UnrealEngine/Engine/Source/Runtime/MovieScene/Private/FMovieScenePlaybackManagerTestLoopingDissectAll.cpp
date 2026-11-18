// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146264c70

EAutomationTestFlags __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::GetTestFlags
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146264c80

bool __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::IsStressTest
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146264c90

uint __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::GetRequiredDeviceNum
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this)

{
  return 1;
}

// GetTestSourceFileName @ 146264ca0

FString * __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::GetTestSourceFileName
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146264cd0

int __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::GetTestSourceFileLine
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this)

{
  return 0x155;
}

// GetTests @ 146264ce0

/* WARNING: Removing unreachable block (ram,0x000146264dcd) */
/* WARNING: Removing unreachable block (ram,0x000146264e98) */

void __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::GetTests
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.PlaybackManager.Looping.DissectAll");
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

// RunTest @ 146264ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::RunTest
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this,FString *param_1)

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
  undefined1 auStackY_b88 [32];
  EPlayDirection local_b58;
  EPlayDirection local_b54 [3];
  Type local_b48;
  Type local_b44;
  EPlayDirection local_b40;
  EPlayDirection local_b3c;
  Type local_b38;
  Type local_b34 [33];
  FFrameTime local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined4 local_a78;
  undefined4 uStack_a74;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined4 local_a50;
  undefined4 uStack_a4c;
  undefined8 local_a48;
  undefined8 local_a40;
  uint local_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 local_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  uint local_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 local_a14;
  FFrameNumber FStack_a10;
  float fStack_a0c;
  uint local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 local_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  uint local_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 local_9e4;
  int iStack_9e0;
  float fStack_9dc;
  uint local_9d8;
  undefined4 uStack_9d4;
  undefined4 uStack_9d0;
  undefined4 local_9cc;
  int iStack_9c8;
  float fStack_9c4;
  uint local_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 local_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  uint local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 local_99c;
  int iStack_998;
  float fStack_994;
  undefined4 local_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 local_984;
  int iStack_980;
  float fStack_97c;
  uint local_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  uint local_96c;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined4 local_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 local_954;
  int iStack_950;
  float fStack_94c;
  uint local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  uint local_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  uint local_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 local_924;
  int iStack_920;
  float fStack_91c;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 local_90c;
  int iStack_908;
  float fStack_904;
  uint local_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  uint local_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
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
  TRange<FFrameTime> local_608;
  TRange<FFrameTime> local_5f0;
  TRange<FFrameTime> local_5d8;
  TRange<FFrameTime> local_5c0;
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
  FMovieScenePlaybackManager local_4b8;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
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
  TRange<FFrameTime> local_288;
  TRange<FFrameTime> local_270;
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b88;
  pUVar10 = GetTransientPackage();
  pUVar11 = NewObject<UTestMovieSceneSequence>((UObject *)pUVar10);
  local_b34[1] = 0x1e;
  local_b34[2] = 1;
  pUVar3 = (pUVar11->MovieScene).field0_0x0.DebugPtr;
  (pUVar3->DisplayRate).Numerator = 0x1e;
  (pUVar3->DisplayRate).Denominator = 1;
  UMovieScene::SetTickResolutionDirectly
            ((pUVar11->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x10000ea60);
  UMovieScene::SetPlaybackRange
            ((pUVar11->MovieScene).field0_0x0.DebugPtr,(FFrameNumber)0x0,600000,true);
  FMovieScenePlaybackManager::FMovieScenePlaybackManager(&local_4b8,(UMovieSceneSequence *)pUVar11);
  local_4b8.DissectLooping = DissectAll;
  FMovieScenePlaybackManager::SetNumLoopsToPlay(&local_4b8,4);
  iVar2 = local_4b8.NumLoopsCompleted;
  local_4b8.PlaybackStatus = Playing;
  local_b34[0xb] = 599999;
  local_b34[0xc] = Stopped;
  local_138.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneContext>)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 2;
  ::FString::FString(&local_8e8,"NumLoops");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_8e8.Data.ArrayNum != 0) {
    FVar13.Data = local_8e8.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,0)
  ;
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
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
    local_b34[3] = 0x96;
    local_b34[4] = Stopped;
    FMovieScenePlaybackManager::UpdateTo(&local_4b8,(FFrameTime)0x96,&local_138);
    iVar2 = local_138.ArrayNum;
    ::FString::FString(&local_8d8,"NumContexts");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_8d8.Data.ArrayNum != 0) {
      FVar13.Data = local_8d8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,1);
    if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      local_b34[5] = 300000;
      local_b34[6] = Stopped;
      uStack_a28 = 300000;
      uStack_a24 = 0;
      uStack_a34 = 0;
      uStack_a30 = 0;
      local_590.LowerBound.Value.SubFrame = 0.0;
      local_a38 = CONCAT31(local_a38._1_3_,1);
      local_590.LowerBound._0_8_ = ZEXT48(local_a38);
      local_590.UpperBound.Value.SubFrame = 0.0;
      local_a2c = CONCAT31(local_a2c._1_3_,1);
      local_590.UpperBound.Value.FrameNumber.Value = 300000;
      local_590.UpperBound._0_4_ = local_a2c;
      local_b34[7] = Stopped;
      local_b34[8] = Stopped;
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
      ::FString::FString(&local_338,"Context0");
      bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                        ((FAutomationTestBase *)this,&local_338,&local_150,&local_590);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
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
        ::FString::FString(&local_8c8,"Context0_Jumped");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_8c8.Data.ArrayNum != 0) {
          FVar13.Data = local_8c8.Data.AllocatorInstance.Data;
        }
        bVar8 = FAutomationTestBase::TestFalse
                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,(bool)(bVar1 & 1));
        if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
        }
        iVar2 = local_4b8.NumLoopsCompleted;
        if (bVar8) {
          ::FString::FString(&local_8b8,"NumLoops");
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_8b8.Data.ArrayNum != 0) {
            FVar13.Data = local_8b8.Data.AllocatorInstance.Data;
          }
          bVar8 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,0);
          if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
          }
          TVar7 = local_4b8.PlaybackStatus;
          if (bVar8) {
            ::FString::FString(&local_8a8,"Status");
            if (TVar7 == Playing) {
              bVar8 = false;
            }
            else {
              pcVar4 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_328,L"%s: The two values are not equal.");
              (*pcVar4)(this,&local_328);
              if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_328.Data.AllocatorInstance.Data);
              }
              bVar8 = true;
            }
            if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
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
              local_b34[9] = 0x168;
              local_b34[10] = Stopped;
              FMovieScenePlaybackManager::UpdateTo(&local_4b8,(FFrameTime)0x168,&local_138);
              iVar2 = local_138.ArrayNum;
              ::FString::FString(&local_898,"NumContexts");
              FVar13.Data = (FScriptContainerElement *)L"";
              if (local_898.Data.ArrayNum != 0) {
                FVar13.Data = local_898.Data.AllocatorInstance.Data;
              }
              bVar8 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,2);
              if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_898.Data.AllocatorInstance.Data);
              }
              if (bVar8) {
                FStack_a10.Value = (int)local_b34._44_8_;
                FVar5.Value = FStack_a10.Value;
                fStack_a0c = SUB84(local_b34._44_8_,4);
                fVar6 = fStack_a0c;
                local_b34[0xd] = 300000;
                local_b34[0xe] = Stopped;
                uStack_a1c = 300000;
                uStack_a18 = 0;
                local_5d8.LowerBound.Value.SubFrame = 0.0;
                local_a20 = local_a20 & 0xffffff00;
                local_5d8.LowerBound.Value.FrameNumber.Value = 300000;
                local_5d8.LowerBound._0_4_ = local_a20;
                local_5d8.UpperBound.Value.SubFrame = fStack_a0c;
                local_a14 = CONCAT31(local_a14._1_3_,1);
                local_5d8.UpperBound.Value.FrameNumber.Value = FStack_a10.Value;
                local_5d8.UpperBound._0_4_ = local_a14;
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
                local_288.LowerBound._0_8_ = *(undefined8 *)FVar12;
                local_288._8_8_ = *(longlong *)((longlong)FVar12 + 8);
                local_288.UpperBound.Value = *(FFrameTime *)((longlong)FVar12 + 0x10);
                ::FString::FString(&local_318,"Context0");
                bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                  ((FAutomationTestBase *)this,&local_318,&local_288,&local_5d8);
                if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_318.Data.AllocatorInstance.Data);
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
                  ::FString::FString(&local_888,"Context0_Jumped");
                  FVar13.Data = (FScriptContainerElement *)L"";
                  if (local_888.Data.ArrayNum != 0) {
                    FVar13.Data = local_888.Data.AllocatorInstance.Data;
                  }
                  bVar8 = FAutomationTestBase::TestFalse
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                     (bool)(bVar1 & 1));
                  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_888.Data.AllocatorInstance.Data);
                  }
                  if (bVar8) {
                    local_b34[0xf] = 120000;
                    local_b34[0x10] = Stopped;
                    uStack_9f8 = 120000;
                    uStack_9f4 = 0;
                    uStack_a04 = 0;
                    uStack_a00 = 0;
                    local_5c0.LowerBound.Value.SubFrame = 0.0;
                    local_a08 = CONCAT31(local_a08._1_3_,1);
                    local_5c0.LowerBound._0_8_ = ZEXT48(local_a08);
                    local_5c0.UpperBound.Value.SubFrame = 0.0;
                    local_9fc = CONCAT31(local_9fc._1_3_,1);
                    local_5c0.UpperBound.Value.FrameNumber.Value = 120000;
                    local_5c0.UpperBound._0_4_ = local_9fc;
                    local_b34[0x11] = Stopped;
                    local_b34[0x12] = Stopped;
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
                    local_270.LowerBound._0_8_ =
                         ((FMovieSceneContext *)((longlong)FVar12 + 0x80))->_padding_;
                    local_270._8_8_ = *(longlong *)((longlong)FVar12 + 0x88);
                    local_270.UpperBound.Value = *(FFrameTime *)((longlong)FVar12 + 0x90);
                    ::FString::FString(&local_308,"Context1");
                    bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                      ((FAutomationTestBase *)this,&local_308,&local_270,&local_5c0)
                    ;
                    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_308.Data.AllocatorInstance.Data);
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
                      ::FString::FString(&local_878,"Context1_Jumped");
                      FVar13.Data = (FScriptContainerElement *)L"";
                      if (local_878.Data.ArrayNum != 0) {
                        FVar13.Data = local_878.Data.AllocatorInstance.Data;
                      }
                      bVar8 = FAutomationTestBase::TestTrue
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                         (bool)(bVar1 & 1));
                      if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_878.Data.AllocatorInstance.Data);
                      }
                      iVar2 = local_4b8.NumLoopsCompleted;
                      if (bVar8) {
                        ::FString::FString(&local_868,"NumLoops");
                        FVar13.Data = (FScriptContainerElement *)L"";
                        if (local_868.Data.ArrayNum != 0) {
                          FVar13.Data = local_868.Data.AllocatorInstance.Data;
                        }
                        bVar8 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar2,
                                           1);
                        if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_868.Data.AllocatorInstance.Data);
                        }
                        TVar7 = local_4b8.PlaybackStatus;
                        if (bVar8) {
                          ::FString::FString(&local_858,"Status");
                          if (TVar7 == Playing) {
                            bVar8 = false;
                          }
                          else {
                            pcVar4 = *(code **)(*(longlong *)this + 0x28);
                            ::FString::PrintfImpl(&local_2d8,L"%s: The two values are not equal.");
                            (*pcVar4)(this,&local_2d8);
                            if (local_2d8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
                            }
                            bVar8 = true;
                          }
                          if (local_858.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_858.Data.AllocatorInstance.Data);
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
                            local_b34[0x13] = 0x2b2;
                            local_b34[0x14] = Stopped;
                            FMovieScenePlaybackManager::UpdateTo
                                      (&local_4b8,(FFrameTime)0x2b2,&local_138);
                            iVar2 = local_138.ArrayNum;
                            ::FString::FString(&local_848,"NumContexts");
                            FVar13.Data = (FScriptContainerElement *)L"";
                            if (local_848.Data.ArrayNum != 0) {
                              FVar13.Data = local_848.Data.AllocatorInstance.Data;
                            }
                            bVar8 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                               iVar2,3);
                            if (local_848.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_848.Data.AllocatorInstance.Data);
                            }
                            if (bVar8) {
                              local_b34[0x15] = 120000;
                              local_b34[0x16] = Stopped;
                              uStack_9ec = 120000;
                              uStack_9e8 = 0;
                              local_5f0.LowerBound.Value.SubFrame = 0.0;
                              local_9f0 = local_9f0 & 0xffffff00;
                              local_5f0.LowerBound.Value.FrameNumber.Value = 120000;
                              local_5f0.LowerBound._0_4_ = local_9f0;
                              local_5f0.UpperBound.Value.SubFrame = fVar6;
                              local_9e4 = CONCAT31(local_9e4._1_3_,1);
                              local_5f0.UpperBound.Value.FrameNumber.Value = FVar5.Value;
                              local_5f0.UpperBound._0_4_ = local_9e4;
                              iStack_9e0 = FVar5.Value;
                              fStack_9dc = fVar6;
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
                              ::FString::FString(&local_2c8,"Context0");
                              bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                                ((FAutomationTestBase *)this,&local_2c8,&local_258,
                                                 &local_5f0);
                              if (local_2c8.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
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
                                ::FString::FString(&local_838,"Context0_Jumped");
                                FVar13.Data = (FScriptContainerElement *)L"";
                                if (local_838.Data.ArrayNum != 0) {
                                  FVar13.Data = local_838.Data.AllocatorInstance.Data;
                                }
                                bVar8 = FAutomationTestBase::TestFalse
                                                  ((FAutomationTestBase *)this,
                                                   (wchar_t *)FVar13.Data,(bool)(bVar1 & 1));
                                if (local_838.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_838.Data.AllocatorInstance.Data);
                                }
                                if (bVar8) {
                                  uStack_9d4 = 0;
                                  uStack_9d0 = 0;
                                  local_578.LowerBound.Value.SubFrame = 0.0;
                                  local_9d8 = CONCAT31(local_9d8._1_3_,1);
                                  local_578.LowerBound._0_8_ = ZEXT48(local_9d8);
                                  local_578.UpperBound.Value.SubFrame = fVar6;
                                  local_9cc = CONCAT31(local_9cc._1_3_,1);
                                  local_578.UpperBound.Value.FrameNumber.Value = FVar5.Value;
                                  local_578.UpperBound._0_4_ = local_9cc;
                                  local_b34[0x17] = Stopped;
                                  local_b34[0x18] = Stopped;
                                  iStack_9c8 = FVar5.Value;
                                  fStack_9c4 = fVar6;
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
                                  local_240.UpperBound.Value =
                                       *(FFrameTime *)((longlong)FVar12 + 0x90);
                                  ::FString::FString(&local_348,"Context1");
                                  bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                                    ((FAutomationTestBase *)this,&local_348,
                                                     &local_240,&local_578);
                                  if (local_348.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_348.Data.AllocatorInstance.Data);
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
                                    ::FString::FString(&local_828,"Context1_Jumped");
                                    FVar13.Data = (FScriptContainerElement *)L"";
                                    if (local_828.Data.ArrayNum != 0) {
                                      FVar13.Data = local_828.Data.AllocatorInstance.Data;
                                    }
                                    bVar8 = FAutomationTestBase::TestTrue
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar13.Data,(bool)(bVar1 & 1));
                                    if (local_828.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_828.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar8) {
                                      local_b34[0x19] = 180000;
                                      local_b34[0x1a] = Stopped;
                                      uStack_9b0 = 180000;
                                      uStack_9ac = 0;
                                      uStack_9bc = 0;
                                      uStack_9b8 = 0;
                                      local_560.LowerBound.Value.SubFrame = 0.0;
                                      local_9c0 = CONCAT31(local_9c0._1_3_,1);
                                      local_560.LowerBound._0_8_ = ZEXT48(local_9c0);
                                      local_560.UpperBound.Value.SubFrame = 0.0;
                                      local_9b4 = CONCAT31(local_9b4._1_3_,1);
                                      local_560.UpperBound.Value.FrameNumber.Value = 180000;
                                      local_560.UpperBound._0_4_ = local_9b4;
                                      local_b34[0x1b] = Stopped;
                                      local_b34[0x1c] = Stopped;
                                      if ((local_138.ArrayNum < 3) &&
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
                                      local_228.LowerBound._0_8_ =
                                           ((FMovieSceneContext *)((longlong)FVar12 + 0x100))->
                                           _padding_;
                                      local_228._8_8_ = *(longlong *)((longlong)FVar12 + 0x108);
                                      local_228.UpperBound.Value =
                                           *(FFrameTime *)
                                            (((TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                                               *)((longlong)FVar12 + 0x110))->AllocatorInstance).
                                            InlineData;
                                      ::FString::FString(&local_2b8,"Context2");
                                      bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                                        ((FAutomationTestBase *)this,&local_2b8,
                                                         &local_228,&local_560);
                                      if (local_2b8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                                      }
                                      if (bVar8) {
                                        if ((local_138.ArrayNum < 3) &&
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
                                        bVar1 = *(uchar *)((longlong)FVar12 + 0x17c);
                                        ::FString::FString(&local_818,"Context2_Jumped");
                                        FVar13.Data = (FScriptContainerElement *)L"";
                                        if (local_818.Data.ArrayNum != 0) {
                                          FVar13.Data = local_818.Data.AllocatorInstance.Data;
                                        }
                                        bVar8 = FAutomationTestBase::TestTrue
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar13.Data,(bool)(bVar1 & 1))
                                        ;
                                        if (local_818.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_818.Data.AllocatorInstance.Data);
                                        }
                                        iVar2 = local_4b8.NumLoopsCompleted;
                                        if (bVar8) {
                                          ::FString::FString(&local_808,"NumLoops");
                                          FVar13.Data = (FScriptContainerElement *)L"";
                                          if (local_808.Data.ArrayNum != 0) {
                                            FVar13.Data = local_808.Data.AllocatorInstance.Data;
                                          }
                                          bVar8 = FAutomationTestBase::TestEqual
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar13.Data,iVar2,3);
                                          if (local_808.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_808.Data.AllocatorInstance.Data);
                                          }
                                          TVar7 = local_4b8.PlaybackStatus;
                                          if (bVar8) {
                                            ::FString::FString(&local_7f8,"Status");
                                            if (TVar7 == Playing) {
                                              bVar8 = false;
                                            }
                                            else {
                                              pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                              ::FString::PrintfImpl
                                                        (&local_2a8,
                                                         L"%s: The two values are not equal.");
                                              (*pcVar4)(this,&local_2a8);
                                              if (local_2a8.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_2a8.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              bVar8 = true;
                                            }
                                            if (local_7f8.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
                                            }
                                            if (!bVar8) {
                                              if (local_138.ArrayMax < 0) {
                                                FVar12 = (ForElementType<FMovieSceneContext>)
                                                         &local_138;
                                                if (local_138.AllocatorInstance.SecondaryData !=
                                                    (ForElementType<FMovieSceneContext>)0x0) {
                                                  FVar12 = local_138.AllocatorInstance.SecondaryData
                                                  ;
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
                                                  FVar12 = local_138.AllocatorInstance.SecondaryData
                                                  ;
                                                }
                                                DestructItems<FMovieSceneContext,int>
                                                          ((FMovieSceneContext *)FVar12,
                                                           local_138.ArrayNum);
                                                local_138.ArrayNum = 0;
                                              }
                                              local_b34[0x1d] = 0x14a;
                                              local_b34[0x1e] = Stopped;
                                              FMovieScenePlaybackManager::UpdateTo
                                                        (&local_4b8,(FFrameTime)0x14a,&local_138);
                                              iVar2 = local_138.ArrayNum;
                                              ::FString::FString(&local_7e8,"NumContexts");
                                              FVar13.Data = (FScriptContainerElement *)L"";
                                              if (local_7e8.Data.ArrayNum != 0) {
                                                FVar13.Data = local_7e8.Data.AllocatorInstance.Data;
                                              }
                                              bVar8 = FAutomationTestBase::TestEqual
                                                                ((FAutomationTestBase *)this,
                                                                 (wchar_t *)FVar13.Data,iVar2,1);
                                              if (local_7e8.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_7e8.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              if (bVar8) {
                                                local_b34[0x1f] = 180000;
                                                local_b34[0x20] = Stopped;
                                                uStack_9a4 = 180000;
                                                uStack_9a0 = 0;
                                                local_548.LowerBound.Value.SubFrame = 0.0;
                                                local_9a8 = local_9a8 & 0xffffff00;
                                                local_548.LowerBound.Value.FrameNumber.Value =
                                                     180000;
                                                local_548.LowerBound._0_4_ = local_9a8;
                                                local_548.UpperBound.Value.SubFrame = fVar6;
                                                local_99c = CONCAT31(local_99c._1_3_,1);
                                                local_548.UpperBound.Value.FrameNumber.Value =
                                                     FVar5.Value;
                                                local_548.UpperBound._0_4_ = local_99c;
                                                iStack_998 = FVar5.Value;
                                                fStack_994 = fVar6;
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
                                                  FVar12 = local_138.AllocatorInstance.SecondaryData
                                                  ;
                                                }
                                                local_210.LowerBound._0_8_ = *(undefined8 *)FVar12;
                                                local_210._8_8_ =
                                                     *(longlong *)((longlong)FVar12 + 8);
                                                local_210.UpperBound.Value =
                                                     *(FFrameTime *)((longlong)FVar12 + 0x10);
                                                ::FString::FString(&local_298,"Context0");
                                                bVar8 = FAutomationTestBase::
                                                        TestEqual<TRange<FFrameTime>_>
                                                                  ((FAutomationTestBase *)this,
                                                                   &local_298,&local_210,&local_548)
                                                ;
                                                if (local_298.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_298.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_7d8,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_7d8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_7d8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_7d8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_7d8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_4b8.NumLoopsCompleted;
                                                  if (bVar8) {
                                                    ::FString::FString(&local_7c8,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_7c8.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_7c8.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       4);
                                                    if (local_7c8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_7c8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar7 = local_4b8.PlaybackStatus;
                                                    if (bVar8) {
                                                      ::FString::FString(&local_7b8,"Status");
                                                      if (TVar7 == Stopped) {
                                                        bVar8 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_2f8,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_2f8);
                                                  if (local_2f8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2f8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar8 = true;
                                                  }
                                                  if (local_7b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_7b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    local_4b8.NumLoopsCompleted = 0;
                                                    local_4b8.PlayDirection = Backwards;
                                                    local_4b8.PlaybackStatus = Playing;
                                                    ::FString::FString(&local_7a8,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_7a8.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_7a8.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,0,0);
                                                    if (local_7a8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_7a8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar8) {
                                                      local_ab0.FrameNumber.Value = 300;
                                                      local_ab0.SubFrame = 0.0;
                                                      FMovieScenePlaybackManager::SetCurrentTime
                                                                (&local_4b8,&local_ab0);
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
                                                  local_aa8 = 0x96;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_4b8,(FFrameTime)0x96,&local_138)
                                                  ;
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_798,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_798.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_798.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,1)
                                                  ;
                                                  if (local_798.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_798.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_aa0 = 300000;
                                                    uStack_98c = 300000;
                                                    uStack_988 = 0;
                                                    local_530.LowerBound.Value.SubFrame = 0.0;
                                                    local_990 = CONCAT31(local_990._1_3_,1);
                                                    local_530.LowerBound.Value.FrameNumber.Value =
                                                         300000;
                                                    local_530.LowerBound._0_4_ = local_990;
                                                    local_530.UpperBound.Value.SubFrame = fVar6;
                                                    local_984 = CONCAT31(local_984._1_3_,1);
                                                    local_530.UpperBound.Value.FrameNumber.Value =
                                                         FVar5.Value;
                                                    local_530.UpperBound._0_4_ = local_984;
                                                    iStack_980 = FVar5.Value;
                                                    fStack_97c = fVar6;
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
                                                  local_1f8.LowerBound._0_8_ = *(undefined8 *)FVar12
                                                  ;
                                                  local_1f8._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 8);
                                                  local_1f8.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x10);
                                                  ::FString::FString(&local_3f8,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_3f8,&local_1f8,
                                                                     &local_530);
                                                  if (local_3f8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3f8.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_788,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_788.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_788.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_788.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_788.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_4b8.NumLoopsCompleted;
                                                  if (bVar8) {
                                                    ::FString::FString(&local_778,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_778.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_778.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       0);
                                                    if (local_778.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_778.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar7 = local_4b8.PlaybackStatus;
                                                    if (bVar8) {
                                                      ::FString::FString(&local_768,"Status");
                                                      if (TVar7 == Playing) {
                                                        bVar8 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_3e8,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_3e8);
                                                  if (local_3e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3e8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar8 = true;
                                                  }
                                                  if (local_768.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_768.Data.AllocatorInstance.
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
                                                  local_a98 = 0xffffffc4;
                                                  uStack_a94 = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_4b8,(FFrameTime)0xffffffc4,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_758,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_758.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_758.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,2)
                                                  ;
                                                  if (local_758.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_758.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_a90 = 300000;
                                                    uStack_968 = 300000;
                                                    uStack_964 = 0;
                                                    uStack_974 = 0;
                                                    uStack_970 = 0;
                                                    local_5a8.LowerBound.Value.SubFrame = 0.0;
                                                    local_978 = CONCAT31(local_978._1_3_,1);
                                                    local_5a8.LowerBound._0_8_ = ZEXT48(local_978);
                                                    local_5a8.UpperBound.Value.SubFrame = 0.0;
                                                    local_96c = local_96c & 0xffffff00;
                                                    local_5a8.UpperBound.Value.FrameNumber.Value =
                                                         300000;
                                                    local_5a8.UpperBound._0_4_ = local_96c;
                                                    local_a88 = 0;
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
                                                  ::FString::FString(&local_3d8,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_3d8,&local_1e0,
                                                                     &local_5a8);
                                                  if (local_3d8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3d8.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_748,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_748.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_748.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_748.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_748.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_738,"Context0_Backwards"
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
                                                  if (local_738.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_738.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    local_a80 = 480000;
                                                    uStack_95c = 480000;
                                                    uStack_958 = 0;
                                                    local_608.LowerBound.Value.SubFrame = 0.0;
                                                    local_960 = CONCAT31(local_960._1_3_,1);
                                                    local_608.LowerBound.Value.FrameNumber.Value =
                                                         480000;
                                                    local_608.LowerBound._0_4_ = local_960;
                                                    local_608.UpperBound.Value.SubFrame = fVar6;
                                                    local_954 = CONCAT31(local_954._1_3_,1);
                                                    local_608.UpperBound.Value.FrameNumber.Value =
                                                         FVar5.Value;
                                                    local_608.UpperBound._0_4_ = local_954;
                                                    iStack_950 = FVar5.Value;
                                                    fStack_94c = fVar6;
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
                                                  local_1c8.LowerBound._0_8_ =
                                                       ((FMovieSceneContext *)
                                                       ((longlong)FVar12 + 0x80))->_padding_;
                                                  local_1c8._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 0x88);
                                                  local_1c8.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x90);
                                                  ::FString::FString(&local_3b8,"Context1");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_3b8,&local_1c8,
                                                                     &local_608);
                                                  if (local_3b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3b8.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_728,"Context1_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_728.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_728.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_728.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_728.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_718,"Context1_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar8 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_3a8,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_3a8,0);
                                                    if (local_3a8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_3a8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar8 = true;
                                                  }
                                                  if (local_718.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_718.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_4b8.NumLoopsCompleted;
                                                  if (!bVar8) {
                                                    ::FString::FString(&local_708,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_708.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_708.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       1);
                                                    if (local_708.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_708.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar7 = local_4b8.PlaybackStatus;
                                                    if (bVar8) {
                                                      ::FString::FString(&local_6f8,"Status");
                                                      if (TVar7 == Playing) {
                                                        bVar8 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_398,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_398);
                                                  if (local_398.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_398.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar8 = true;
                                                  }
                                                  if (local_6f8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6f8.Data.AllocatorInstance.
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
                                                  local_a78 = 0xfffffe7a;
                                                  uStack_a74 = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_4b8,(FFrameTime)0xfffffe7a,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_6e8,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_6e8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_6e8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,3)
                                                  ;
                                                  if (local_6e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6e8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_a70 = 480000;
                                                    uStack_938 = 480000;
                                                    uStack_934 = 0;
                                                    uStack_944 = 0;
                                                    uStack_940 = 0;
                                                    local_518.LowerBound.Value.SubFrame = 0.0;
                                                    local_948 = CONCAT31(local_948._1_3_,1);
                                                    local_518.LowerBound._0_8_ = ZEXT48(local_948);
                                                    local_518.UpperBound.Value.SubFrame = 0.0;
                                                    local_93c = local_93c & 0xffffff00;
                                                    local_518.UpperBound.Value.FrameNumber.Value =
                                                         480000;
                                                    local_518.UpperBound._0_4_ = local_93c;
                                                    local_a68 = 0;
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
                                                  local_1b0.LowerBound._0_8_ = *(undefined8 *)FVar12
                                                  ;
                                                  local_1b0._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 8);
                                                  local_1b0.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x10);
                                                  ::FString::FString(&local_388,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_388,&local_1b0,
                                                                     &local_518);
                                                  if (local_388.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_388.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_6d8,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_6d8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_6d8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_6d8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6d8.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_6c8,"Context0_Backwards"
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
                                                  if (local_6c8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6c8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar8) {
                                                    uStack_92c = 0;
                                                    uStack_928 = 0;
                                                    local_500.LowerBound.Value.SubFrame = 0.0;
                                                    local_930 = CONCAT31(local_930._1_3_,1);
                                                    local_500.LowerBound._0_8_ = ZEXT48(local_930);
                                                    local_500.UpperBound.Value.SubFrame = fVar6;
                                                    local_924 = CONCAT31(local_924._1_3_,1);
                                                    local_500.UpperBound.Value.FrameNumber.Value =
                                                         FVar5.Value;
                                                    local_500.UpperBound._0_4_ = local_924;
                                                    local_a60 = 0;
                                                    iStack_920 = FVar5.Value;
                                                    fStack_91c = fVar6;
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
                                                  local_198.LowerBound._0_8_ =
                                                       ((FMovieSceneContext *)
                                                       ((longlong)FVar12 + 0x80))->_padding_;
                                                  local_198._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 0x88);
                                                  local_198.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar12 + 0x90);
                                                  ::FString::FString(&local_2e8,"Context1");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_2e8,&local_198,
                                                                     &local_500);
                                                  if (local_2e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2e8.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_6b8,"Context1_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_6b8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_6b8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_6b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_b58 = Backwards;
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
                                                  local_b54[0] = *(EPlayDirection *)
                                                                  ((longlong)FVar12 + 0xa0);
                                                  ::FString::FString(&local_6a8,"Context1_Backwards"
                                                                    );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_6a8.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_6a8.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<enum_EPlayDirection>
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     local_b54,&local_b58);
                                                  if (local_6a8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_6a8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_a58 = 420000;
                                                    uStack_914 = 420000;
                                                    uStack_910 = 0;
                                                    local_4e8.LowerBound.Value.SubFrame = 0.0;
                                                    local_918 = CONCAT31(local_918._1_3_,1);
                                                    local_4e8.LowerBound.Value.FrameNumber.Value =
                                                         420000;
                                                    local_4e8.LowerBound._0_4_ = local_918;
                                                    local_4e8.UpperBound.Value.SubFrame = fVar6;
                                                    local_90c = CONCAT31(local_90c._1_3_,1);
                                                    local_4e8.UpperBound.Value.FrameNumber.Value =
                                                         FVar5.Value;
                                                    local_4e8.UpperBound._0_4_ = local_90c;
                                                    iStack_908 = FVar5.Value;
                                                    fStack_904 = fVar6;
                                                    if ((local_138.ArrayNum < 3) &&
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
                                                       ((longlong)FVar12 + 0x100))->_padding_;
                                                  local_180._8_8_ =
                                                       *(longlong *)((longlong)FVar12 + 0x108);
                                                  local_180.UpperBound.Value =
                                                       *(FFrameTime *)
                                                        (((
                                                  TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                                                  *)((longlong)FVar12 + 0x110))->AllocatorInstance).
                                                  InlineData;
                                                  ::FString::FString(&local_368,"Context2");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_368,&local_180,
                                                                     &local_4e8);
                                                  if (local_368.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_368.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    if ((local_138.ArrayNum < 3) &&
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
                                                  bVar1 = *(uchar *)((longlong)FVar12 + 0x17c);
                                                  ::FString::FString(&local_698,"Context2_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_698.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_698.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_698.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_698.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_b54[1] = 1;
                                                    if ((local_138.ArrayNum < 3) &&
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
                                                  local_b54[2] = *(EPlayDirection *)
                                                                  ((longlong)FVar12 + 0x120);
                                                  ::FString::FString(&local_688,"Context2_Backwards"
                                                                    );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_688.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_688.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<enum_EPlayDirection>
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     local_b54 + 2,local_b54 + 1);
                                                  if (local_688.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_688.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_4b8.NumLoopsCompleted;
                                                  if (bVar8) {
                                                    ::FString::FString(&local_678,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_678.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_678.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       3);
                                                    if (local_678.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_678.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar8) {
                                                      local_b44 = local_4b8.PlaybackStatus;
                                                      local_b48 = Playing;
                                                      ::FString::FString(&local_668,"Status");
                                                      FVar13.Data = (FScriptContainerElement *)L"";
                                                      if (local_668.Data.ArrayNum != 0) {
                                                        FVar13.Data = local_668.Data.
                                                                      AllocatorInstance.Data;
                                                      }
                                                      bVar8 = FAutomationTestBase::
                                                                                                                            
                                                  TestEqual<enum_EMovieScenePlayerStatus::Type>
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar13.Data,&local_b44,
                                                             &local_b48);
                                                  if (local_668.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_668.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                                                                        
                                                  TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                                                  ::Reset(&local_138,0);
                                                  local_a50 = 0xffffffe2;
                                                  uStack_a4c = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_4b8,(FFrameTime)0xffffffe2,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_658,"NumContexts");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_658.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_658.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,iVar2,1)
                                                  ;
                                                  if (local_658.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_658.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_a48 = 420000;
                                                    uStack_8f0 = 420000;
                                                    uStack_8ec = 0;
                                                    uStack_8fc = 0;
                                                    uStack_8f8 = 0;
                                                    local_4d0.LowerBound.Value.SubFrame = 0.0;
                                                    local_900 = CONCAT31(local_900._1_3_,1);
                                                    local_4d0.LowerBound._0_8_ = ZEXT48(local_900);
                                                    local_4d0.UpperBound.Value.SubFrame = 0.0;
                                                    local_8f4 = local_8f4 & 0xffffff00;
                                                    local_4d0.UpperBound.Value.FrameNumber.Value =
                                                         420000;
                                                    local_4d0.UpperBound._0_4_ = local_8f4;
                                                    local_a40 = 0;
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
                                                  ::FString::FString(&local_358,"Context0");
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_358,&local_168,
                                                                     &local_4d0);
                                                  if (local_358.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_358.Data.AllocatorInstance.
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
                                                  ::FString::FString(&local_648,"Context0_Jumped");
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_648.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_648.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_648.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_648.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    local_b40 = Backwards;
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
                                                  local_b3c = *(EPlayDirection *)
                                                               ((longlong)FVar12 + 0x20);
                                                  ::FString::FString(&local_638,"Context0_Backwards"
                                                                    );
                                                  FVar13.Data = (FScriptContainerElement *)L"";
                                                  if (local_638.Data.ArrayNum != 0) {
                                                    FVar13.Data = local_638.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar8 = FAutomationTestBase::
                                                          TestEqual<enum_EPlayDirection>
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar13.Data,
                                                                     &local_b3c,&local_b40);
                                                  if (local_638.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_638.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_4b8.NumLoopsCompleted;
                                                  if (bVar8) {
                                                    ::FString::FString(&local_628,"NumLoops");
                                                    FVar13.Data = (FScriptContainerElement *)L"";
                                                    if (local_628.Data.ArrayNum != 0) {
                                                      FVar13.Data = local_628.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar13.Data,iVar2,
                                                                       4);
                                                    if (local_628.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_628.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar8) {
                                                      local_b34[0] = local_4b8.PlaybackStatus;
                                                      local_b38 = Stopped;
                                                      ::FString::FString(&local_618,"Status");
                                                      FVar13.Data = (FScriptContainerElement *)L"";
                                                      if (local_618.Data.ArrayNum != 0) {
                                                        FVar13.Data = local_618.Data.
                                                                      AllocatorInstance.Data;
                                                      }
                                                      bVar8 = FAutomationTestBase::
                                                                                                                            
                                                  TestEqual<enum_EMovieScenePlayerStatus::Type>
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar13.Data,local_b34,
                                                             &local_b38);
                                                  if (local_618.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_618.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar8) {
                                                    bVar8 = true;
                                                    goto LAB_146267bd8;
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
        }
      }
    }
  }
  bVar8 = false;
LAB_146267bd8:
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
             local_4b8.TimeTransform.NestedTransforms.AllocatorInstance.Data,
             local_4b8.TimeTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_4b8.TimeTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_4b8.TimeTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 146267c70

FString * __thiscall
FMovieScenePlaybackManagerTestLoopingDissectAll::GetBeautifiedTestName
          (FMovieScenePlaybackManagerTestLoopingDissectAll *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.PlaybackManager.Looping.DissectAll");
  return __return_storage_ptr__;
}

