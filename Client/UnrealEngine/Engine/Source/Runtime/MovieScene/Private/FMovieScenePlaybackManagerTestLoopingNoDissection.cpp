// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146255da0

EAutomationTestFlags __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::GetTestFlags
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146255db0

bool __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::IsStressTest
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146255dc0

uint __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::GetRequiredDeviceNum
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this)

{
  return 1;
}

// GetTestSourceFileName @ 146255dd0

FString * __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::GetTestSourceFileName
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146255e00

int __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::GetTestSourceFileLine
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this)

{
  return 0x73;
}

// GetTests @ 146255e10

/* WARNING: Removing unreachable block (ram,0x000146255efd) */
/* WARNING: Removing unreachable block (ram,0x000146255fc8) */

void __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::GetTests
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.PlaybackManager.Looping.NoDissection");
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

// RunTest @ 146255ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::RunTest
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this,FString *param_1)

{
  byte bVar1;
  int iVar2;
  UMovieScene *pUVar3;
  code *pcVar4;
  Type TVar5;
  bool bVar6;
  undefined1 uVar7;
  UPackage *pUVar8;
  UTestMovieSceneSequence *pUVar9;
  ForElementType<FMovieSceneContext> FVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_8c8 [32];
  FFrameTime local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined8 local_810;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined8 local_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined8 local_7f0;
  undefined8 local_7e8;
  uint local_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 local_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  uint local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 local_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  uint local_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 local_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  uint local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 local_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 local_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 local_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 local_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 local_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 local_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  uint local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  uint local_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  FString local_720;
  FString local_710;
  FString local_700;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FString local_550;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  TRange<FFrameTime> local_4c0;
  TRange<FFrameTime> local_4a8;
  TRange<FFrameTime> local_490;
  TRange<FFrameTime> local_478;
  TRange<FFrameTime> local_460;
  TRange<FFrameTime> local_448;
  TRange<FFrameTime> local_430;
  TRange<FFrameTime> local_418;
  FMovieScenePlaybackManager local_3f8;
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
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  pUVar8 = GetTransientPackage();
  pUVar9 = NewObject<UTestMovieSceneSequence>((UObject *)pUVar8);
  pUVar3 = (pUVar9->MovieScene).field0_0x0.DebugPtr;
  (pUVar3->DisplayRate).Numerator = 0x1e;
  (pUVar3->DisplayRate).Denominator = 1;
  UMovieScene::SetTickResolutionDirectly
            ((pUVar9->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x10000ea60);
  UMovieScene::SetPlaybackRange
            ((pUVar9->MovieScene).field0_0x0.DebugPtr,(FFrameNumber)0x0,600000,true);
  FMovieScenePlaybackManager::FMovieScenePlaybackManager(&local_3f8,(UMovieSceneSequence *)pUVar9);
  local_3f8.DissectLooping = None;
  FMovieScenePlaybackManager::SetNumLoopsToPlay(&local_3f8,4);
  iVar2 = local_3f8.NumLoopsCompleted;
  local_3f8.PlaybackStatus = Playing;
  local_138.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneContext>)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 2;
  ::FString::FString(&local_720,"NumLoops");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_720.Data.ArrayNum != 0) {
    FVar11.Data = local_720.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar2,0)
  ;
  if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_720.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if (local_138.ArrayMax < 0) {
      FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar10 = local_138.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar10,local_138.ArrayNum);
      local_138.ArrayNum = 0;
      if (local_138.ArrayMax != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                  (0x80,8,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
      }
    }
    else {
      FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar10 = local_138.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar10,local_138.ArrayNum);
      local_138.ArrayNum = 0;
    }
    FMovieScenePlaybackManager::UpdateTo(&local_3f8,(FFrameTime)0x96,&local_138);
    iVar2 = local_138.ArrayNum;
    ::FString::FString(&local_710,"NumContexts");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_710.Data.ArrayNum != 0) {
      FVar11.Data = local_710.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar2,1);
    if (local_710.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_710.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      uStack_7d0 = 300000;
      uStack_7cc = 0;
      uStack_7dc = 0;
      uStack_7d8 = 0;
      local_4a8.LowerBound.Value.SubFrame = 0.0;
      local_7e0 = CONCAT31(local_7e0._1_3_,1);
      local_4a8.LowerBound._0_8_ = ZEXT48(local_7e0);
      local_4a8.UpperBound.Value.SubFrame = 0.0;
      local_7d4 = CONCAT31(local_7d4._1_3_,1);
      local_4a8.UpperBound.Value.FrameNumber.Value = 300000;
      local_4a8.UpperBound._0_4_ = local_7d4;
      if ((local_138.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar10 = local_138.AllocatorInstance.SecondaryData;
      }
      local_150.LowerBound._0_8_ = *(undefined8 *)FVar10;
      local_150._8_8_ = *(longlong *)((longlong)FVar10 + 8);
      local_150.UpperBound.Value = *(FFrameTime *)((longlong)FVar10 + 0x10);
      ::FString::FString(&local_288,"Context0");
      bVar6 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                        ((FAutomationTestBase *)this,&local_288,&local_150,&local_4a8);
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        if ((local_138.ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
        if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
          FVar10 = local_138.AllocatorInstance.SecondaryData;
        }
        bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
        ::FString::FString(&local_700,"Context0_Jumped");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_700.Data.ArrayNum != 0) {
          FVar11.Data = local_700.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestFalse
                          ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,(bool)(bVar1 & 1));
        if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_700.Data.AllocatorInstance.Data);
        }
        iVar2 = local_3f8.NumLoopsCompleted;
        if (bVar6) {
          ::FString::FString(&local_6f0,"NumLoops");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_6f0.Data.ArrayNum != 0) {
            FVar11.Data = local_6f0.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar2,0);
          if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
          }
          TVar5 = local_3f8.PlaybackStatus;
          if (bVar6) {
            ::FString::FString(&local_6e0,"Status");
            if (TVar5 == Playing) {
              bVar6 = false;
            }
            else {
              pcVar4 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_278,L"%s: The two values are not equal.");
              (*pcVar4)(this,&local_278);
              if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Data.AllocatorInstance.Data);
              }
              bVar6 = true;
            }
            if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
            }
            if (!bVar6) {
              if (local_138.ArrayMax < 0) {
                FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                if (local_138.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMovieSceneContext>)0x0) {
                  FVar10 = local_138.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMovieSceneContext,int>
                          ((FMovieSceneContext *)FVar10,local_138.ArrayNum);
                local_138.ArrayNum = 0;
                if (local_138.ArrayMax != 0) {
                  UE::Core::Private::
                  ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                            (0x80,8,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
                }
              }
              else {
                FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                if (local_138.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMovieSceneContext>)0x0) {
                  FVar10 = local_138.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMovieSceneContext,int>
                          ((FMovieSceneContext *)FVar10,local_138.ArrayNum);
                local_138.ArrayNum = 0;
              }
              FMovieScenePlaybackManager::UpdateTo(&local_3f8,(FFrameTime)0x168,&local_138);
              iVar2 = local_138.ArrayNum;
              ::FString::FString(&local_6d0,"NumContexts");
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_6d0.Data.ArrayNum != 0) {
                FVar11.Data = local_6d0.Data.AllocatorInstance.Data;
              }
              bVar6 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar2,1);
              if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
              }
              if (bVar6) {
                uStack_7b8 = 120000;
                uStack_7b4 = 0;
                uStack_7c4 = 0;
                uStack_7c0 = 0;
                local_490.LowerBound.Value.SubFrame = 0.0;
                local_7c8 = CONCAT31(local_7c8._1_3_,1);
                local_490.LowerBound._0_8_ = ZEXT48(local_7c8);
                local_490.UpperBound.Value.SubFrame = 0.0;
                local_7bc = CONCAT31(local_7bc._1_3_,1);
                local_490.UpperBound.Value.FrameNumber.Value = 120000;
                local_490.UpperBound._0_4_ = local_7bc;
                if ((local_138.ArrayNum < 1) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                if (local_138.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMovieSceneContext>)0x0) {
                  FVar10 = local_138.AllocatorInstance.SecondaryData;
                }
                local_1f8.LowerBound._0_8_ = *(undefined8 *)FVar10;
                local_1f8._8_8_ = *(longlong *)((longlong)FVar10 + 8);
                local_1f8.UpperBound.Value = *(FFrameTime *)((longlong)FVar10 + 0x10);
                ::FString::FString(&local_268,"Context0");
                bVar6 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                  ((FAutomationTestBase *)this,&local_268,&local_1f8,&local_490);
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                }
                if (bVar6) {
                  if ((local_138.ArrayNum < 1) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    uVar7 = (*pcVar4)();
                    return (bool)uVar7;
                  }
                  FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                  if (local_138.AllocatorInstance.SecondaryData !=
                      (ForElementType<FMovieSceneContext>)0x0) {
                    FVar10 = local_138.AllocatorInstance.SecondaryData;
                  }
                  bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
                  ::FString::FString(&local_6c0,"Context0_Jumped");
                  FVar11.Data = (FScriptContainerElement *)L"";
                  if (local_6c0.Data.ArrayNum != 0) {
                    FVar11.Data = local_6c0.Data.AllocatorInstance.Data;
                  }
                  bVar6 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                                     (bool)(bVar1 & 1));
                  if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
                  }
                  iVar2 = local_3f8.NumLoopsCompleted;
                  if (bVar6) {
                    ::FString::FString(&local_6b0,"NumLoops");
                    FVar11.Data = (FScriptContainerElement *)L"";
                    if (local_6b0.Data.ArrayNum != 0) {
                      FVar11.Data = local_6b0.Data.AllocatorInstance.Data;
                    }
                    bVar6 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar2,1);
                    if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
                    }
                    TVar5 = local_3f8.PlaybackStatus;
                    if (bVar6) {
                      ::FString::FString(&local_6a0,"Status");
                      if (TVar5 == Playing) {
                        bVar6 = false;
                      }
                      else {
                        pcVar4 = *(code **)(*(longlong *)this + 0x28);
                        ::FString::PrintfImpl(&local_248,L"%s: The two values are not equal.");
                        (*pcVar4)(this,&local_248);
                        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_248.Data.AllocatorInstance.Data);
                        }
                        bVar6 = true;
                      }
                      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
                      }
                      if (!bVar6) {
                        if (local_138.ArrayMax < 0) {
                          FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                          if (local_138.AllocatorInstance.SecondaryData !=
                              (ForElementType<FMovieSceneContext>)0x0) {
                            FVar10 = local_138.AllocatorInstance.SecondaryData;
                          }
                          DestructItems<FMovieSceneContext,int>
                                    ((FMovieSceneContext *)FVar10,local_138.ArrayNum);
                          local_138.ArrayNum = 0;
                          if (local_138.ArrayMax != 0) {
                            UE::Core::Private::
                            ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                      (0x80,8,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
                          }
                        }
                        else {
                          FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                          if (local_138.AllocatorInstance.SecondaryData !=
                              (ForElementType<FMovieSceneContext>)0x0) {
                            FVar10 = local_138.AllocatorInstance.SecondaryData;
                          }
                          DestructItems<FMovieSceneContext,int>
                                    ((FMovieSceneContext *)FVar10,local_138.ArrayNum);
                          local_138.ArrayNum = 0;
                        }
                        FMovieScenePlaybackManager::UpdateTo
                                  (&local_3f8,(FFrameTime)0x2b2,&local_138);
                        iVar2 = local_138.ArrayNum;
                        ::FString::FString(&local_690,"NumContexts");
                        FVar11.Data = (FScriptContainerElement *)L"";
                        if (local_690.Data.ArrayNum != 0) {
                          FVar11.Data = local_690.Data.AllocatorInstance.Data;
                        }
                        bVar6 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar2,
                                           1);
                        if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_690.Data.AllocatorInstance.Data);
                        }
                        if (bVar6) {
                          uStack_7a0 = 180000;
                          uStack_79c = 0;
                          uStack_7ac = 0;
                          uStack_7a8 = 0;
                          local_478.LowerBound.Value.SubFrame = 0.0;
                          local_7b0 = CONCAT31(local_7b0._1_3_,1);
                          local_478.LowerBound._0_8_ = ZEXT48(local_7b0);
                          local_478.UpperBound.Value.SubFrame = 0.0;
                          local_7a4 = CONCAT31(local_7a4._1_3_,1);
                          local_478.UpperBound.Value.FrameNumber.Value = 180000;
                          local_478.UpperBound._0_4_ = local_7a4;
                          if ((local_138.ArrayNum < 1) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar4 = (code *)swi(3);
                            uVar7 = (*pcVar4)();
                            return (bool)uVar7;
                          }
                          FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                          if (local_138.AllocatorInstance.SecondaryData !=
                              (ForElementType<FMovieSceneContext>)0x0) {
                            FVar10 = local_138.AllocatorInstance.SecondaryData;
                          }
                          local_1e0.LowerBound._0_8_ = *(undefined8 *)FVar10;
                          local_1e0._8_8_ = *(longlong *)((longlong)FVar10 + 8);
                          local_1e0.UpperBound.Value = *(FFrameTime *)((longlong)FVar10 + 0x10);
                          ::FString::FString(&local_238,"Context0");
                          bVar6 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                            ((FAutomationTestBase *)this,&local_238,&local_1e0,
                                             &local_478);
                          if (local_238.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_238.Data.AllocatorInstance.Data);
                          }
                          if (bVar6) {
                            if ((local_138.ArrayNum < 1) &&
                               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                              pcVar4 = (code *)swi(3);
                              uVar7 = (*pcVar4)();
                              return (bool)uVar7;
                            }
                            FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                            if (local_138.AllocatorInstance.SecondaryData !=
                                (ForElementType<FMovieSceneContext>)0x0) {
                              FVar10 = local_138.AllocatorInstance.SecondaryData;
                            }
                            bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
                            ::FString::FString(&local_680,"Context0_Jumped");
                            FVar11.Data = (FScriptContainerElement *)L"";
                            if (local_680.Data.ArrayNum != 0) {
                              FVar11.Data = local_680.Data.AllocatorInstance.Data;
                            }
                            bVar6 = FAutomationTestBase::TestTrue
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                                               (bool)(bVar1 & 1));
                            if (local_680.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_680.Data.AllocatorInstance.Data);
                            }
                            iVar2 = local_3f8.NumLoopsCompleted;
                            if (bVar6) {
                              ::FString::FString(&local_670,"NumLoops");
                              FVar11.Data = (FScriptContainerElement *)L"";
                              if (local_670.Data.ArrayNum != 0) {
                                FVar11.Data = local_670.Data.AllocatorInstance.Data;
                              }
                              bVar6 = FAutomationTestBase::TestEqual
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                                                 iVar2,3);
                              if (local_670.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_670.Data.AllocatorInstance.Data);
                              }
                              TVar5 = local_3f8.PlaybackStatus;
                              if (bVar6) {
                                ::FString::FString(&local_660,"Status");
                                if (TVar5 == Playing) {
                                  bVar6 = false;
                                }
                                else {
                                  pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                  ::FString::PrintfImpl
                                            (&local_228,L"%s: The two values are not equal.");
                                  (*pcVar4)(this,&local_228);
                                  if (local_228.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_228.Data.AllocatorInstance.Data);
                                  }
                                  bVar6 = true;
                                }
                                if (local_660.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_660.Data.AllocatorInstance.Data);
                                }
                                if (!bVar6) {
                                  if (local_138.ArrayMax < 0) {
                                    FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                                    if (local_138.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMovieSceneContext>)0x0) {
                                      FVar10 = local_138.AllocatorInstance.SecondaryData;
                                    }
                                    DestructItems<FMovieSceneContext,int>
                                              ((FMovieSceneContext *)FVar10,local_138.ArrayNum);
                                    local_138.ArrayNum = 0;
                                    if (local_138.ArrayMax != 0) {
                                      UE::Core::Private::
                                      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                                (0x80,8,0,&local_138.AllocatorInstance,0,
                                                 &local_138.ArrayMax);
                                    }
                                  }
                                  else {
                                    FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                                    if (local_138.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMovieSceneContext>)0x0) {
                                      FVar10 = local_138.AllocatorInstance.SecondaryData;
                                    }
                                    DestructItems<FMovieSceneContext,int>
                                              ((FMovieSceneContext *)FVar10,local_138.ArrayNum);
                                    local_138.ArrayNum = 0;
                                  }
                                  FMovieScenePlaybackManager::UpdateTo
                                            (&local_3f8,(FFrameTime)0x14a,&local_138);
                                  iVar2 = local_138.ArrayNum;
                                  ::FString::FString(&local_650,"NumContexts");
                                  FVar11.Data = (FScriptContainerElement *)L"";
                                  if (local_650.Data.ArrayNum != 0) {
                                    FVar11.Data = local_650.Data.AllocatorInstance.Data;
                                  }
                                  bVar6 = FAutomationTestBase::TestEqual
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar11.Data,iVar2,1);
                                  if (local_650.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_650.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar6) {
                                    uStack_788 = 599999;
                                    uStack_784 = 0;
                                    uStack_794 = 180000;
                                    uStack_790 = 0;
                                    local_4c0.LowerBound.Value.SubFrame = 0.0;
                                    local_798 = local_798 & 0xffffff00;
                                    local_4c0.LowerBound.Value.FrameNumber.Value = 180000;
                                    local_4c0.LowerBound._0_4_ = local_798;
                                    local_4c0.UpperBound.Value.SubFrame = 0.0;
                                    local_78c = CONCAT31(local_78c._1_3_,1);
                                    local_4c0.UpperBound.Value.FrameNumber.Value = 599999;
                                    local_4c0.UpperBound._0_4_ = local_78c;
                                    if ((local_138.ArrayNum < 1) &&
                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                      pcVar4 = (code *)swi(3);
                                      uVar7 = (*pcVar4)();
                                      return (bool)uVar7;
                                    }
                                    FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                                    if (local_138.AllocatorInstance.SecondaryData !=
                                        (ForElementType<FMovieSceneContext>)0x0) {
                                      FVar10 = local_138.AllocatorInstance.SecondaryData;
                                    }
                                    local_1c8.LowerBound._0_8_ = *(undefined8 *)FVar10;
                                    local_1c8._8_8_ = *(longlong *)((longlong)FVar10 + 8);
                                    local_1c8.UpperBound.Value =
                                         *(FFrameTime *)((longlong)FVar10 + 0x10);
                                    ::FString::FString(&local_218,"Context0");
                                    bVar6 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                                                      ((FAutomationTestBase *)this,&local_218,
                                                       &local_1c8,&local_4c0);
                                    if (local_218.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_218.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar6) {
                                      if ((local_138.ArrayNum < 1) &&
                                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                        pcVar4 = (code *)swi(3);
                                        uVar7 = (*pcVar4)();
                                        return (bool)uVar7;
                                      }
                                      FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
                                      if (local_138.AllocatorInstance.SecondaryData !=
                                          (ForElementType<FMovieSceneContext>)0x0) {
                                        FVar10 = local_138.AllocatorInstance.SecondaryData;
                                      }
                                      bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
                                      ::FString::FString(&local_640,"Context0_Jumped");
                                      FVar11.Data = (FScriptContainerElement *)L"";
                                      if (local_640.Data.ArrayNum != 0) {
                                        FVar11.Data = local_640.Data.AllocatorInstance.Data;
                                      }
                                      bVar6 = FAutomationTestBase::TestFalse
                                                        ((FAutomationTestBase *)this,
                                                         (wchar_t *)FVar11.Data,(bool)(bVar1 & 1));
                                      if (local_640.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_640.Data.AllocatorInstance.Data);
                                      }
                                      iVar2 = local_3f8.NumLoopsCompleted;
                                      if (bVar6) {
                                        ::FString::FString(&local_630,"NumLoops");
                                        FVar11.Data = (FScriptContainerElement *)L"";
                                        if (local_630.Data.ArrayNum != 0) {
                                          FVar11.Data = local_630.Data.AllocatorInstance.Data;
                                        }
                                        bVar6 = FAutomationTestBase::TestEqual
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar11.Data,iVar2,4);
                                        if (local_630.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_630.Data.AllocatorInstance.Data);
                                        }
                                        TVar5 = local_3f8.PlaybackStatus;
                                        if (bVar6) {
                                          ::FString::FString(&local_620,"Status");
                                          if (TVar5 == Stopped) {
                                            bVar6 = false;
                                          }
                                          else {
                                            pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                            ::FString::PrintfImpl
                                                      (&local_208,
                                                       L"%s: The two values are not equal.");
                                            (*pcVar4)(this,&local_208);
                                            if (local_208.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_208.Data.AllocatorInstance.Data);
                                            }
                                            bVar6 = true;
                                          }
                                          if (local_620.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_620.Data.AllocatorInstance.Data);
                                          }
                                          if (!bVar6) {
                                            local_3f8.NumLoopsCompleted = 0;
                                            local_3f8.PlayDirection = Backwards;
                                            local_3f8.PlaybackStatus = Playing;
                                            ::FString::FString(&local_610,"NumLoops");
                                            FVar11.Data = (FScriptContainerElement *)L"";
                                            if (local_610.Data.ArrayNum != 0) {
                                              FVar11.Data = local_610.Data.AllocatorInstance.Data;
                                            }
                                            bVar6 = FAutomationTestBase::TestEqual
                                                              ((FAutomationTestBase *)this,
                                                               (wchar_t *)FVar11.Data,0,0);
                                            if (local_610.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_610.Data.AllocatorInstance.Data);
                                            }
                                            if (bVar6) {
                                              local_830.FrameNumber.Value = 300;
                                              local_830.SubFrame = 0.0;
                                              FMovieScenePlaybackManager::SetCurrentTime
                                                        (&local_3f8,&local_830);
                                              if (local_138.ArrayMax < 0) {
                                                FVar10 = (ForElementType<FMovieSceneContext>)
                                                         &local_138;
                                                if (local_138.AllocatorInstance.SecondaryData !=
                                                    (ForElementType<FMovieSceneContext>)0x0) {
                                                  FVar10 = local_138.AllocatorInstance.SecondaryData
                                                  ;
                                                }
                                                DestructItems<FMovieSceneContext,int>
                                                          ((FMovieSceneContext *)FVar10,
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
                                                FVar10 = (ForElementType<FMovieSceneContext>)
                                                         &local_138;
                                                if (local_138.AllocatorInstance.SecondaryData !=
                                                    (ForElementType<FMovieSceneContext>)0x0) {
                                                  FVar10 = local_138.AllocatorInstance.SecondaryData
                                                  ;
                                                }
                                                DestructItems<FMovieSceneContext,int>
                                                          ((FMovieSceneContext *)FVar10,
                                                           local_138.ArrayNum);
                                                local_138.ArrayNum = 0;
                                              }
                                              local_828 = 0x96;
                                              FMovieScenePlaybackManager::UpdateTo
                                                        (&local_3f8,(FFrameTime)0x96,&local_138);
                                              iVar2 = local_138.ArrayNum;
                                              ::FString::FString(&local_600,"NumContexts");
                                              FVar11.Data = (FScriptContainerElement *)L"";
                                              if (local_600.Data.ArrayNum != 0) {
                                                FVar11.Data = local_600.Data.AllocatorInstance.Data;
                                              }
                                              bVar6 = FAutomationTestBase::TestEqual
                                                                ((FAutomationTestBase *)this,
                                                                 (wchar_t *)FVar11.Data,iVar2,1);
                                              if (local_600.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_600.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              if (bVar6) {
                                                uStack_770 = 599999;
                                                uStack_76c = 0;
                                                local_820 = 300000;
                                                uStack_77c = 300000;
                                                uStack_778 = 0;
                                                local_460.LowerBound.Value.SubFrame = 0.0;
                                                local_780 = CONCAT31(local_780._1_3_,1);
                                                local_460.LowerBound.Value.FrameNumber.Value =
                                                     300000;
                                                local_460.LowerBound._0_4_ = local_780;
                                                local_460.UpperBound.Value.SubFrame = 0.0;
                                                local_774 = CONCAT31(local_774._1_3_,1);
                                                local_460.UpperBound.Value.FrameNumber.Value =
                                                     599999;
                                                local_460.UpperBound._0_4_ = local_774;
                                                if ((local_138.ArrayNum < 1) &&
                                                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                  pcVar4 = (code *)swi(3);
                                                  uVar7 = (*pcVar4)();
                                                  return (bool)uVar7;
                                                }
                                                FVar10 = (ForElementType<FMovieSceneContext>)
                                                         &local_138;
                                                if (local_138.AllocatorInstance.SecondaryData !=
                                                    (ForElementType<FMovieSceneContext>)0x0) {
                                                  FVar10 = local_138.AllocatorInstance.SecondaryData
                                                  ;
                                                }
                                                local_1b0.LowerBound._0_8_ = *(undefined8 *)FVar10;
                                                local_1b0._8_8_ =
                                                     *(longlong *)((longlong)FVar10 + 8);
                                                local_1b0.UpperBound.Value =
                                                     *(FFrameTime *)((longlong)FVar10 + 0x10);
                                                ::FString::FString(&local_338,"Context0");
                                                bVar6 = FAutomationTestBase::
                                                        TestEqual<TRange<FFrameTime>_>
                                                                  ((FAutomationTestBase *)this,
                                                                   &local_338,&local_1b0,&local_460)
                                                ;
                                                if (local_338.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_338.Data.AllocatorInstance.
                                                                Data);
                                                }
                                                if (bVar6) {
                                                  if ((local_138.ArrayNum < 1) &&
                                                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
                                                  ::FString::FString(&local_5f0,"Context0_Jumped");
                                                  FVar11.Data = (FScriptContainerElement *)L"";
                                                  if (local_5f0.Data.ArrayNum != 0) {
                                                    FVar11.Data = local_5f0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar6 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar11.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_5f0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5f0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar10 + 0x20);
                                                  ::FString::FString(&local_5e0,"Context0_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar6 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_258,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_258,0);
                                                    if (local_258.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_258.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar6 = true;
                                                  }
                                                  if (local_5e0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5e0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_3f8.NumLoopsCompleted;
                                                  if (!bVar6) {
                                                    ::FString::FString(&local_5d0,"NumLoops");
                                                    FVar11.Data = (FScriptContainerElement *)L"";
                                                    if (local_5d0.Data.ArrayNum != 0) {
                                                      FVar11.Data = local_5d0.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar6 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar11.Data,iVar2,
                                                                       0);
                                                    if (local_5d0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_5d0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar5 = local_3f8.PlaybackStatus;
                                                    if (bVar6) {
                                                      ::FString::FString(&local_5c0,"Status");
                                                      if (TVar5 == Playing) {
                                                        bVar6 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_328,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_328);
                                                  if (local_328.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_328.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar6 = true;
                                                  }
                                                  if (local_5c0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5c0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar6) {
                                                    if (local_138.ArrayMax < 0) {
                                                      FVar10 = (ForElementType<FMovieSceneContext>)
                                                               &local_138;
                                                      if (local_138.AllocatorInstance.SecondaryData
                                                          != (ForElementType<FMovieSceneContext>)0x0
                                                         ) {
                                                        FVar10 = local_138.AllocatorInstance.
                                                                 SecondaryData;
                                                      }
                                                      DestructItems<FMovieSceneContext,int>
                                                                ((FMovieSceneContext *)FVar10,
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
                                                    FVar10 = (ForElementType<FMovieSceneContext>)
                                                             &local_138;
                                                    if (local_138.AllocatorInstance.SecondaryData !=
                                                        (ForElementType<FMovieSceneContext>)0x0) {
                                                      FVar10 = local_138.AllocatorInstance.
                                                               SecondaryData;
                                                    }
                                                    DestructItems<FMovieSceneContext,int>
                                                              ((FMovieSceneContext *)FVar10,
                                                               local_138.ArrayNum);
                                                    local_138.ArrayNum = 0;
                                                  }
                                                  local_818 = 0xffffffc4;
                                                  uStack_814 = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_3f8,(FFrameTime)0xffffffc4,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_5b0,"NumContexts");
                                                  FVar11.Data = (FScriptContainerElement *)L"";
                                                  if (local_5b0.Data.ArrayNum != 0) {
                                                    FVar11.Data = local_5b0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar6 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar11.Data,iVar2,1)
                                                  ;
                                                  if (local_5b0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5b0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    uStack_758 = 599999;
                                                    uStack_754 = 0;
                                                    local_810 = 480000;
                                                    uStack_764 = 480000;
                                                    uStack_760 = 0;
                                                    local_448.LowerBound.Value.SubFrame = 0.0;
                                                    local_768 = CONCAT31(local_768._1_3_,1);
                                                    local_448.LowerBound.Value.FrameNumber.Value =
                                                         480000;
                                                    local_448.LowerBound._0_4_ = local_768;
                                                    local_448.UpperBound.Value.SubFrame = 0.0;
                                                    local_75c = CONCAT31(local_75c._1_3_,1);
                                                    local_448.UpperBound.Value.FrameNumber.Value =
                                                         599999;
                                                    local_448.UpperBound._0_4_ = local_75c;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_198.LowerBound._0_8_ = *(undefined8 *)FVar10
                                                  ;
                                                  local_198._8_8_ =
                                                       *(longlong *)((longlong)FVar10 + 8);
                                                  local_198.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar10 + 0x10);
                                                  ::FString::FString(&local_318,"Context0");
                                                  bVar6 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_318,&local_198,
                                                                     &local_448);
                                                  if (local_318.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_318.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
                                                  ::FString::FString(&local_5a0,"Context0_Jumped");
                                                  FVar11.Data = (FScriptContainerElement *)L"";
                                                  if (local_5a0.Data.ArrayNum != 0) {
                                                    FVar11.Data = local_5a0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar6 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar11.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_5a0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_5a0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar10 + 0x20);
                                                  ::FString::FString(&local_590,"Context0_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar6 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_308,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_308,0);
                                                    if (local_308.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_308.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar6 = true;
                                                  }
                                                  if (local_590.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_590.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_3f8.NumLoopsCompleted;
                                                  if (!bVar6) {
                                                    ::FString::FString(&local_580,"NumLoops");
                                                    FVar11.Data = (FScriptContainerElement *)L"";
                                                    if (local_580.Data.ArrayNum != 0) {
                                                      FVar11.Data = local_580.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar6 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar11.Data,iVar2,
                                                                       1);
                                                    if (local_580.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_580.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar5 = local_3f8.PlaybackStatus;
                                                    if (bVar6) {
                                                      ::FString::FString(&local_570,"Status");
                                                      if (TVar5 == Playing) {
                                                        bVar6 = false;
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
                                                  bVar6 = true;
                                                  }
                                                  if (local_570.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_570.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar6) {
                                                    if (local_138.ArrayMax < 0) {
                                                      FVar10 = (ForElementType<FMovieSceneContext>)
                                                               &local_138;
                                                      if (local_138.AllocatorInstance.SecondaryData
                                                          != (ForElementType<FMovieSceneContext>)0x0
                                                         ) {
                                                        FVar10 = local_138.AllocatorInstance.
                                                                 SecondaryData;
                                                      }
                                                      DestructItems<FMovieSceneContext,int>
                                                                ((FMovieSceneContext *)FVar10,
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
                                                    FVar10 = (ForElementType<FMovieSceneContext>)
                                                             &local_138;
                                                    if (local_138.AllocatorInstance.SecondaryData !=
                                                        (ForElementType<FMovieSceneContext>)0x0) {
                                                      FVar10 = local_138.AllocatorInstance.
                                                               SecondaryData;
                                                    }
                                                    DestructItems<FMovieSceneContext,int>
                                                              ((FMovieSceneContext *)FVar10,
                                                               local_138.ArrayNum);
                                                    local_138.ArrayNum = 0;
                                                  }
                                                  local_808 = 0xfffffe7a;
                                                  uStack_804 = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_3f8,(FFrameTime)0xfffffe7a,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_560,"NumContexts");
                                                  FVar11.Data = (FScriptContainerElement *)L"";
                                                  if (local_560.Data.ArrayNum != 0) {
                                                    FVar11.Data = local_560.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar6 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar11.Data,iVar2,1)
                                                  ;
                                                  if (local_560.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_560.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    uStack_740 = 599999;
                                                    uStack_73c = 0;
                                                    local_800 = 420000;
                                                    uStack_74c = 420000;
                                                    uStack_748 = 0;
                                                    local_430.LowerBound.Value.SubFrame = 0.0;
                                                    local_750 = CONCAT31(local_750._1_3_,1);
                                                    local_430.LowerBound.Value.FrameNumber.Value =
                                                         420000;
                                                    local_430.LowerBound._0_4_ = local_750;
                                                    local_430.UpperBound.Value.SubFrame = 0.0;
                                                    local_744 = CONCAT31(local_744._1_3_,1);
                                                    local_430.UpperBound.Value.FrameNumber.Value =
                                                         599999;
                                                    local_430.UpperBound._0_4_ = local_744;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_180.LowerBound._0_8_ = *(undefined8 *)FVar10
                                                  ;
                                                  local_180._8_8_ =
                                                       *(longlong *)((longlong)FVar10 + 8);
                                                  local_180.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar10 + 0x10);
                                                  ::FString::FString(&local_2e8,"Context0");
                                                  bVar6 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_2e8,&local_180,
                                                                     &local_430);
                                                  if (local_2e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2e8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
                                                  ::FString::FString(&local_550,"Context0_Jumped");
                                                  FVar11.Data = (FScriptContainerElement *)L"";
                                                  if (local_550.Data.ArrayNum != 0) {
                                                    FVar11.Data = local_550.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar6 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar11.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_550.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_550.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar10 + 0x20);
                                                  ::FString::FString(&local_540,"Context0_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar6 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_2d8,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_2d8,0);
                                                    if (local_2d8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_2d8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar6 = true;
                                                  }
                                                  if (local_540.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_540.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_3f8.NumLoopsCompleted;
                                                  if (!bVar6) {
                                                    ::FString::FString(&local_530,"NumLoops");
                                                    FVar11.Data = (FScriptContainerElement *)L"";
                                                    if (local_530.Data.ArrayNum != 0) {
                                                      FVar11.Data = local_530.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar6 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar11.Data,iVar2,
                                                                       3);
                                                    if (local_530.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_530.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar5 = local_3f8.PlaybackStatus;
                                                    if (bVar6) {
                                                      ::FString::FString(&local_520,"Status");
                                                      if (TVar5 == Playing) {
                                                        bVar6 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_2c8,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_2c8);
                                                  if (local_2c8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2c8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar6 = true;
                                                  }
                                                  if (local_520.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_520.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar6) {
                                                    if (local_138.ArrayMax < 0) {
                                                      FVar10 = (ForElementType<FMovieSceneContext>)
                                                               &local_138;
                                                      if (local_138.AllocatorInstance.SecondaryData
                                                          != (ForElementType<FMovieSceneContext>)0x0
                                                         ) {
                                                        FVar10 = local_138.AllocatorInstance.
                                                                 SecondaryData;
                                                      }
                                                      DestructItems<FMovieSceneContext,int>
                                                                ((FMovieSceneContext *)FVar10,
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
                                                    FVar10 = (ForElementType<FMovieSceneContext>)
                                                             &local_138;
                                                    if (local_138.AllocatorInstance.SecondaryData !=
                                                        (ForElementType<FMovieSceneContext>)0x0) {
                                                      FVar10 = local_138.AllocatorInstance.
                                                               SecondaryData;
                                                    }
                                                    DestructItems<FMovieSceneContext,int>
                                                              ((FMovieSceneContext *)FVar10,
                                                               local_138.ArrayNum);
                                                    local_138.ArrayNum = 0;
                                                  }
                                                  local_7f8 = 0xffffffe2;
                                                  uStack_7f4 = 0;
                                                  FMovieScenePlaybackManager::UpdateTo
                                                            (&local_3f8,(FFrameTime)0xffffffe2,
                                                             &local_138);
                                                  iVar2 = local_138.ArrayNum;
                                                  ::FString::FString(&local_510,"NumContexts");
                                                  FVar11.Data = (FScriptContainerElement *)L"";
                                                  if (local_510.Data.ArrayNum != 0) {
                                                    FVar11.Data = local_510.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar6 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar11.Data,iVar2,1)
                                                  ;
                                                  if (local_510.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_510.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    local_7f0 = 420000;
                                                    uStack_728 = 420000;
                                                    uStack_724 = 0;
                                                    uStack_734 = 0;
                                                    uStack_730 = 0;
                                                    local_418.LowerBound.Value.SubFrame = 0.0;
                                                    local_738 = CONCAT31(local_738._1_3_,1);
                                                    local_418.LowerBound._0_8_ = ZEXT48(local_738);
                                                    local_418.UpperBound.Value.SubFrame = 0.0;
                                                    local_72c = local_72c & 0xffffff00;
                                                    local_418.UpperBound.Value.FrameNumber.Value =
                                                         420000;
                                                    local_418.UpperBound._0_4_ = local_72c;
                                                    local_7e8 = 0;
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  local_168.LowerBound._0_8_ = *(undefined8 *)FVar10
                                                  ;
                                                  local_168._8_8_ =
                                                       *(longlong *)((longlong)FVar10 + 8);
                                                  local_168.UpperBound.Value =
                                                       *(FFrameTime *)((longlong)FVar10 + 0x10);
                                                  ::FString::FString(&local_2b8,"Context0");
                                                  bVar6 = FAutomationTestBase::
                                                          TestEqual<TRange<FFrameTime>_>
                                                                    ((FAutomationTestBase *)this,
                                                                     &local_2b8,&local_168,
                                                                     &local_418);
                                                  if (local_2b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar1 = *(uchar *)((longlong)FVar10 + 0x7c);
                                                  ::FString::FString(&local_500,"Context0_Jumped");
                                                  FVar11.Data = (FScriptContainerElement *)L"";
                                                  if (local_500.Data.ArrayNum != 0) {
                                                    FVar11.Data = local_500.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar6 = FAutomationTestBase::TestFalse
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar11.Data,
                                                                     (bool)(bVar1 & 1));
                                                  if (local_500.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_500.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar6) {
                                                    if ((local_138.ArrayNum < 1) &&
                                                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                                    pcVar4 = (code *)swi(3);
                                                    uVar7 = (*pcVar4)();
                                                    return (bool)uVar7;
                                                  }
                                                  FVar10 = (ForElementType<FMovieSceneContext>)
                                                           &local_138;
                                                  if (local_138.AllocatorInstance.SecondaryData !=
                                                      (ForElementType<FMovieSceneContext>)0x0) {
                                                    FVar10 = local_138.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  iVar2 = *(int *)((longlong)FVar10 + 0x20);
                                                  ::FString::FString(&local_4f0,"Context0_Backwards"
                                                                    );
                                                  if (iVar2 == 1) {
                                                    bVar6 = false;
                                                  }
                                                  else {
                                                    pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                                    ::FString::PrintfImpl
                                                              (&local_2a8,
                                                               L"%s: The two values are not equal.")
                                                    ;
                                                    (*pcVar4)(this,&local_2a8,0);
                                                    if (local_2a8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_2a8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    bVar6 = true;
                                                  }
                                                  if (local_4f0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_4f0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  iVar2 = local_3f8.NumLoopsCompleted;
                                                  if (!bVar6) {
                                                    ::FString::FString(&local_4e0,"NumLoops");
                                                    FVar11.Data = (FScriptContainerElement *)L"";
                                                    if (local_4e0.Data.ArrayNum != 0) {
                                                      FVar11.Data = local_4e0.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar6 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar11.Data,iVar2,
                                                                       4);
                                                    if (local_4e0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_4e0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    TVar5 = local_3f8.PlaybackStatus;
                                                    if (bVar6) {
                                                      ::FString::FString(&local_4d0,"Status");
                                                      if (TVar5 == Stopped) {
                                                        bVar6 = false;
                                                      }
                                                      else {
                                                        pcVar4 = *(code **)(*(longlong *)this + 0x28
                                                                           );
                                                        ::FString::PrintfImpl
                                                                  (&local_298,
                                                                                                                                      
                                                  L"%s: The two values are not equal.");
                                                  (*pcVar4)(this,&local_298,0);
                                                  if (local_298.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_298.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  bVar6 = true;
                                                  }
                                                  if (local_4d0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_4d0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (!bVar6) {
                                                    bVar6 = true;
                                                    goto LAB_146258121;
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
  bVar6 = false;
LAB_146258121:
  FVar10 = (ForElementType<FMovieSceneContext>)&local_138;
  if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
    FVar10 = local_138.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar10,local_138.ArrayNum);
  if (local_138.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
    FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_3f8.TimeTransform.NestedTransforms.AllocatorInstance.Data,
             local_3f8.TimeTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_3f8.TimeTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_3f8.TimeTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 1462581c0

FString * __thiscall
FMovieScenePlaybackManagerTestLoopingNoDissection::GetBeautifiedTestName
          (FMovieScenePlaybackManagerTestLoopingNoDissection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.PlaybackManager.Looping.NoDissection");
  return __return_storage_ptr__;
}

