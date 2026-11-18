// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146268110

EAutomationTestFlags __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::GetTestFlags
          (FMovieScenePlaybackManagerTestUpdateToEnd *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146268120

bool __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::IsStressTest
          (FMovieScenePlaybackManagerTestUpdateToEnd *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146268130

uint __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::GetRequiredDeviceNum
          (FMovieScenePlaybackManagerTestUpdateToEnd *this)

{
  return 1;
}

// GetTestSourceFileName @ 146268140

FString * __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::GetTestSourceFileName
          (FMovieScenePlaybackManagerTestUpdateToEnd *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieScenePlaybackManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146268170

int __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::GetTestSourceFileLine
          (FMovieScenePlaybackManagerTestUpdateToEnd *this)

{
  return 0x1d0;
}

// GetTests @ 146268180

/* WARNING: Removing unreachable block (ram,0x00014626826d) */
/* WARNING: Removing unreachable block (ram,0x000146268338) */

void __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::GetTests
          (FMovieScenePlaybackManagerTestUpdateToEnd *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.PlaybackManager.UpdateToEnd");
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

// RunTest @ 146268360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::RunTest
          (FMovieScenePlaybackManagerTestUpdateToEnd *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  int iVar3;
  UMovieScene *pUVar4;
  code *pcVar5;
  uint uVar6;
  Type TVar7;
  bool bVar8;
  undefined1 uVar9;
  UPackage *pUVar10;
  UTestMovieSceneSequence *pUVar11;
  ulonglong uVar12;
  ForElementType<FMovieSceneContext> FVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_478 [32];
  undefined1 local_438 [8];
  ForAnyElementType local_430;
  uint local_428;
  int local_424;
  undefined8 local_420;
  FFrameTime local_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  FFrameTime local_400;
  undefined8 local_3f8;
  FFrameTime local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  TRange<FFrameTime> local_3d8;
  TRangeBound<FFrameTime> local_3c0;
  TRangeBound<FFrameTime> local_3b4;
  uint local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 local_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  TRange<FFrameTime> local_390;
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
  TRange<FFrameTime> local_2a8;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  TRange<FFrameTime> local_230;
  undefined1 local_218 [92];
  undefined1 *local_1bc;
  int local_198;
  ForAnyElementType local_178;
  int local_170;
  EMovieSceneLoopDissection local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  EMovieSceneLoopDissection local_150;
  TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_478;
  pUVar10 = GetTransientPackage();
  pUVar11 = NewObject<UTestMovieSceneSequence>((UObject *)pUVar10);
  local_410 = 0x1e;
  uStack_40c = 1;
  pUVar4 = (pUVar11->MovieScene).field0_0x0.DebugPtr;
  (pUVar4->DisplayRate).Numerator = 0x1e;
  (pUVar4->DisplayRate).Denominator = 1;
  UMovieScene::SetTickResolutionDirectly
            ((pUVar11->MovieScene).field0_0x0.DebugPtr,(FFrameRate)0x10000ea60);
  UMovieScene::SetPlaybackRange
            ((pUVar11->MovieScene).field0_0x0.DebugPtr,(FFrameNumber)0x0,600000,true);
  FMovieScenePlaybackManager::FMovieScenePlaybackManager
            ((FMovieScenePlaybackManager *)local_218,(UMovieSceneSequence *)pUVar11);
  FMovieScenePlaybackManager::SetNumLoopsToPlay((FMovieScenePlaybackManager *)local_218,1);
  local_408 = 599999;
  ConvertFrameTime((FFrameTime)&local_3f0,(FFrameRate)0x927bf,(FFrameRate)0x10000ea60);
  local_148.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneContext>)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 2;
  local_158 = 0;
  uStack_154 = 1;
  local_150 = DissectAll;
  local_430.Data = (FScriptContainerElement *)0x0;
  local_428 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_430,3,&local_424);
  uVar6 = local_428;
  *(ulonglong *)local_430.Data = CONCAT44(uStack_154,local_158);
  *(EMovieSceneLoopDissection *)(local_430.Data + 8) = local_150;
  uVar12 = (ulonglong)(int)local_428;
  pFVar1 = local_430.Data + uVar12 * 4;
  FVar15.Data = local_430.Data;
  while( true ) {
    if ((uint)uVar12 != uVar6) {
      local_438[0] = 0;
      `TCheckedPointerIterator<enum_EMovieSceneLoopDissection,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_438);
    }
    if (FVar15.Data == pFVar1) {
      bVar8 = true;
      goto LAB_146268f2f;
    }
    local_168 = *(EMovieSceneLoopDissection *)FVar15.Data;
    local_198 = 0;
    local_1bc = (undefined1 *)0x1;
    local_400.FrameNumber.Value = 0;
    local_400.SubFrame = 0.0;
    FMovieScenePlaybackManager::SetCurrentTime((FMovieScenePlaybackManager *)local_218,&local_400);
    iVar3 = local_198;
    ::FString::FString(&local_2b8,"NumLoops");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_2b8.Data.ArrayNum != 0) {
      FVar14.Data = local_2b8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar3,0);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    if (local_148.ArrayMax < 0) {
      FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar13 = local_148.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar13,local_148.ArrayNum);
      local_148.ArrayNum = 0;
      if (local_148.ArrayMax != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                  (0x80,8,0,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
      }
    }
    else {
      FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar13 = local_148.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar13,local_148.ArrayNum);
      local_148.ArrayNum = 0;
    }
    FMovieScenePlaybackManager::UpdateTo
              ((FMovieScenePlaybackManager *)local_218,local_3f0,&local_148);
    iVar3 = local_148.ArrayNum;
    ::FString::FString(&local_378,"NumContexts");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_378.Data.ArrayNum != 0) {
      FVar14.Data = local_378.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar3,1);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    local_3b4.Value.FrameNumber.Value = 599999;
    local_3b4.Value.SubFrame = 0.0;
    local_3f8 = 0;
    local_3c0.Value.FrameNumber.Value = 0;
    local_3c0.Value.SubFrame = 0.0;
    local_3d8.LowerBound.Value.SubFrame = 0.0;
    local_3c0.Type.Value = '\x01';
    local_3d8.UpperBound.Value.SubFrame = 0.0;
    local_3b4.Type.Value = '\x01';
    local_3d8.LowerBound.Type.Value = '\x01';
    local_3d8.LowerBound._1_3_ = local_3c0._1_3_;
    local_3d8.LowerBound.Value.FrameNumber.Value = 0;
    local_3d8.UpperBound.Type.Value = '\x01';
    local_3d8.UpperBound._1_3_ = local_3b4._1_3_;
    local_3d8.UpperBound.Value.FrameNumber.Value = 599999;
    if ((local_148.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
      FVar13 = local_148.AllocatorInstance.SecondaryData;
    }
    local_390.LowerBound._0_4_ = SUB84(*(undefined8 *)FVar13,0);
    local_390.LowerBound.Value.FrameNumber.Value = (int)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
    local_390.LowerBound.Value.SubFrame = (float)*(longlong *)((longlong)FVar13 + 8);
    local_390.UpperBound._0_4_ = SUB84((ulonglong)*(longlong *)((longlong)FVar13 + 8) >> 0x20,0);
    local_390.UpperBound.Value = *(FFrameTime *)((longlong)FVar13 + 0x10);
    ::FString::FString(&local_368,"Context0");
    bVar8 = TRange<FFrameTime>::IsEmpty(&local_390);
    if ((bVar8) && (bVar8 = TRange<FFrameTime>::IsEmpty(&local_3d8), bVar8)) goto LAB_1462687a3;
    if (local_390.LowerBound.Type.Value == local_3d8.LowerBound.Type.Value) {
      if (local_390.LowerBound.Type.Value != '\x02') {
        local_418.SubFrame = local_3d8.LowerBound.Value.SubFrame;
        local_418.FrameNumber.Value = local_3d8.LowerBound.Value.FrameNumber.Value;
        local_420 = CONCAT44(local_390.LowerBound.Value.SubFrame,
                             local_390.LowerBound.Value.FrameNumber.Value);
        if ((local_390.LowerBound.Value.FrameNumber.Value !=
             local_3d8.LowerBound.Value.FrameNumber.Value) ||
           (local_390.LowerBound.Value.SubFrame != local_3d8.LowerBound.Value.SubFrame))
        goto LAB_1462687a8;
      }
      if (local_390.UpperBound.Type.Value != local_3d8.UpperBound.Type.Value) goto LAB_1462687a8;
      if (local_390.UpperBound.Type.Value != '\x02') {
        local_420 = CONCAT44(local_3d8.UpperBound.Value.SubFrame,
                             local_3d8.UpperBound.Value.FrameNumber.Value);
        local_418 = local_390.UpperBound.Value;
        if ((local_390.UpperBound.Value.FrameNumber.Value.Value !=
             local_3d8.UpperBound.Value.FrameNumber.Value) ||
           (local_418.SubFrame = local_390.UpperBound.Value.SubFrame,
           bVar8 = local_418.SubFrame != local_3d8.UpperBound.Value.SubFrame, bVar8))
        goto LAB_1462687a8;
      }
LAB_1462687a3:
      bVar8 = false;
    }
    else {
LAB_1462687a8:
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_240,L"%s: The two values are not equal.");
      (*pcVar5)(this,&local_240,0);
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if (bVar8) break;
    if ((local_148.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
      FVar13 = local_148.AllocatorInstance.SecondaryData;
    }
    bVar2 = *(uchar *)((longlong)FVar13 + 0x7c);
    ::FString::FString(&local_358,"Context0_Jumped");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_358.Data.ArrayNum != 0) {
      FVar14.Data = local_358.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestFalse
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,(bool)(bVar2 & 1));
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    if ((local_148.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
      FVar13 = local_148.AllocatorInstance.SecondaryData;
    }
    iVar3 = *(int *)((longlong)FVar13 + 0x20);
    ::FString::FString(&local_348,"Context0_Forwards");
    if (iVar3 == 0) {
      bVar8 = false;
    }
    else {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_290,L"%s: The two values are not equal.");
      (*pcVar5)(this,&local_290,0);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    iVar3 = local_198;
    if (bVar8) break;
    ::FString::FString(&local_338,"NumLoops");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_338.Data.ArrayNum != 0) {
      FVar14.Data = local_338.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar3,1);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    TVar7 = (Type)local_1bc;
    ::FString::FString(&local_328,"Status");
    if (TVar7 == Stopped) {
      bVar8 = false;
    }
    else {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_280,L"%s: The two values are not equal.");
      (*pcVar5)(this,&local_280,0);
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    if (bVar8) break;
    local_198 = 0;
    local_1bc = &DAT_100000001;
    FMovieScenePlaybackManager::SetCurrentTime((FMovieScenePlaybackManager *)local_218,&local_3f0);
    iVar3 = local_198;
    ::FString::FString(&local_318,"NumLoops");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_318.Data.ArrayNum != 0) {
      FVar14.Data = local_318.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar3,0);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    if (local_148.ArrayMax < 0) {
      FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar13 = local_148.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar13,local_148.ArrayNum);
      local_148.ArrayNum = 0;
      if (local_148.ArrayMax != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                  (0x80,8,0,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
      }
    }
    else {
      FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar13 = local_148.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar13,local_148.ArrayNum);
      local_148.ArrayNum = 0;
    }
    local_3e8 = 0;
    FMovieScenePlaybackManager::UpdateTo
              ((FMovieScenePlaybackManager *)local_218,(FFrameTime)0x0,&local_148);
    iVar3 = local_148.ArrayNum;
    ::FString::FString(&local_308,"NumContexts");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_308.Data.ArrayNum != 0) {
      FVar14.Data = local_308.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar3,1);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    uStack_398 = 599999;
    uStack_394 = 0;
    local_3e0 = 0;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    local_2a8.LowerBound.Value.SubFrame = 0.0;
    local_3a8 = CONCAT31(local_3a8._1_3_,1);
    local_2a8.LowerBound._0_8_ = ZEXT48(local_3a8);
    local_2a8.UpperBound.Value.SubFrame = 0.0;
    local_39c = CONCAT31(local_39c._1_3_,1);
    local_2a8.UpperBound.Value.FrameNumber.Value = 599999;
    local_2a8.UpperBound._0_4_ = local_39c;
    if ((local_148.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
      FVar13 = local_148.AllocatorInstance.SecondaryData;
    }
    local_230.LowerBound._0_8_ = *(undefined8 *)FVar13;
    local_230._8_8_ = *(longlong *)((longlong)FVar13 + 8);
    local_230.UpperBound.Value = *(FFrameTime *)((longlong)FVar13 + 0x10);
    ::FString::FString(&local_270,"Context0");
    bVar8 = FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
                      ((FAutomationTestBase *)this,&local_270,&local_230,&local_2a8);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    if ((local_148.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
      FVar13 = local_148.AllocatorInstance.SecondaryData;
    }
    bVar2 = *(uchar *)((longlong)FVar13 + 0x7c);
    ::FString::FString(&local_2f8,"Context0_Jumped");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_2f8.Data.ArrayNum != 0) {
      FVar14.Data = local_2f8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestFalse
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,(bool)(bVar2 & 1));
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    if ((local_148.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
      FVar13 = local_148.AllocatorInstance.SecondaryData;
    }
    iVar3 = *(int *)((longlong)FVar13 + 0x20);
    ::FString::FString(&local_2e8,"Context0_Backwards");
    if (iVar3 == 1) {
      bVar8 = false;
    }
    else {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_260,L"%s: The two values are not equal.");
      (*pcVar5)(this,&local_260,0);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    iVar3 = local_198;
    if (bVar8) break;
    ::FString::FString(&local_2d8,"NumLoops");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_2d8.Data.ArrayNum != 0) {
      FVar14.Data = local_2d8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar3,1);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    if (!bVar8) break;
    TVar7 = (Type)local_1bc;
    ::FString::FString(&local_2c8,"Status");
    if (TVar7 == Stopped) {
      bVar8 = false;
    }
    else {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_250,L"%s: The two values are not equal.");
      (*pcVar5)(this,&local_250,0);
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if (bVar8) break;
    uVar12 = (ulonglong)local_428;
    FVar15.Data = FVar15.Data + 4;
  }
  bVar8 = false;
LAB_146268f2f:
  if (local_430.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data);
  }
  FVar13 = (ForElementType<FMovieSceneContext>)&local_148;
  if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
    FVar13 = local_148.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar13,local_148.ArrayNum);
  if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_178.Data,local_170);
  if ((FMovieSceneNestedSequenceTransform *)local_178.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 146268fd0

FString * __thiscall
FMovieScenePlaybackManagerTestUpdateToEnd::GetBeautifiedTestName
          (FMovieScenePlaybackManagerTestUpdateToEnd *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.PlaybackManager.UpdateToEnd");
  return __return_storage_ptr__;
}

