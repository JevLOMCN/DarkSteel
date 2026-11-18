// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 146877fb0

EAutomationTestFlags __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::GetTestFlags
          (FMovieSceneDecomposerAdditiveWithEasingTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146877fc0

bool __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::IsStressTest
          (FMovieSceneDecomposerAdditiveWithEasingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146877fd0

uint __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::GetRequiredDeviceNum
          (FMovieSceneDecomposerAdditiveWithEasingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146877fe0

FString * __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::GetTestSourceFileName
          (FMovieSceneDecomposerAdditiveWithEasingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146878010

int __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::GetTestSourceFileLine
          (FMovieSceneDecomposerAdditiveWithEasingTest *this)

{
  return 0x120;
}

// GetTests @ 146878020

/* WARNING: Removing unreachable block (ram,0x00014687810d) */
/* WARNING: Removing unreachable block (ram,0x0001468781d8) */

void __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::GetTests
          (FMovieSceneDecomposerAdditiveWithEasingTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.AdditiveWithEasing");
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

// RunTest @ 146878200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::RunTest
          (FMovieSceneDecomposerAdditiveWithEasingTest *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  UMovieSceneTestSequence *this_00;
  UMovieSceneFloatTrack *pUVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  TObjectPtr<UMovieSceneSection> TVar12;
  TObjectPtr<UMovieSceneSection> TVar13;
  bool bVar14;
  undefined1 uVar15;
  UObject *pUVar16;
  UMovieSceneDecomposerTestObject *pUVar17;
  FSequenceBuilder *this_01;
  FGuid *pFVar18;
  FName *pFVar19;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar20;
  TObjectPtr<UMovieSceneSection>_u_0 TVar21;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar22;
  UClass *pUVar23;
  FMovieSceneTracksComponentTypes *pFVar24;
  TRecompositionResult<double> *pTVar25;
  undefined1 *puVar26;
  ForElementType<double> FVar27;
  ForAnyElementType FVar28;
  TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *pTVar29;
  undefined1 auStackY_278 [32];
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_220;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_210;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_200;
  undefined1 local_1f0 [4];
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0 [4];
  undefined4 local_1dc;
  undefined1 local_1d8;
  undefined4 local_1d4;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_1d0;
  UMovieSceneDecomposerTestObject *local_1c0;
  TObjectPtr<UMovieSceneSection>_u_0 local_1b8;
  double local_1b0;
  double local_1a8;
  TObjectPtr<UMovieSceneSection>_u_0 local_1a0;
  double local_198;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TObjectPtr<UMovieSceneSection>_u_0 local_110;
  TObjectPtr<UMovieSceneSection>_u_0 TStack_108;
  FName local_100;
  FGuid local_f8;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_e8;
  FSequenceBuilder local_d8;
  TRecompositionResult<double> local_c0;
  TRecompositionResult<double> local_a8;
  TRecompositionResult<double> local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUVar16 = GetTransientPackageAsObject();
  pUVar17 = NewObject<UMovieSceneDecomposerTestObject>(pUVar16);
  this_01 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  this_00 = (this_01->Sequence).field0_0x0.DebugPtr;
  local_1c0 = pUVar17;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  pFVar18 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_f8,(TObjectPtr<UObject>)&local_1c0);
  uVar7 = pFVar18->B;
  uVar8 = pFVar18->C;
  uVar9 = pFVar18->D;
  (this_01->CurrentBinding).A = pFVar18->A;
  (this_01->CurrentBinding).B = uVar7;
  (this_01->CurrentBinding).C = uVar8;
  (this_01->CurrentBinding).D = uVar9;
  pFVar19 = ::FName::FName(&local_100,0xd,L"FloatProperty",FNAME_Add);
  pFVar20 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_01,&local_e8,*pFVar19);
  pUVar4 = (pFVar20->Track).field0_0x0.DebugPtr;
  TVar21.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4);
  local_1f0[0] = 1;
  local_1ec = 0;
  local_1e8 = 0;
  local_1e4 = 5000;
  (**(code **)((TVar21.DebugPtr)->_padding_ + 0x2c8))(TVar21.DebugPtr,local_1f0);
  pUVar4 = (pFVar20->Track).field0_0x0.DebugPtr;
  (*(code *)**(undefined8 **)&pUVar4->field_0x70)(&pUVar4->field_0x70);
  local_190.Parent = pFVar20;
  local_190.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar21.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar21.DebugPtr);
  }
  TVar13.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_190.Section;
  pFVar22 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_190,0,(FFrameNumber)0x0,__real_42c80000,Auto);
  pFVar20 = pFVar22->Parent;
  TVar21.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar20->Track).field0_0x0.DebugPtr + 0x358))();
  local_1e0[0] = 1;
  local_1dc = 0;
  local_1d8 = 0;
  local_1d4 = 5000;
  (**(code **)((TVar21.DebugPtr)->_padding_ + 0x2c8))(TVar21.DebugPtr,local_1e0);
  UMovieSceneSection::SetRowIndex(TVar21.DebugPtr,1);
  puVar26 = &((pFVar20->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar26)(puVar26,TVar21.DebugPtr);
  local_1d0.Parent = pFVar20;
  local_1d0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar21.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar21.DebugPtr);
  }
  TVar12.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_1d0.Section;
  (**(code **)(*(longlong *)local_1d0.Section.field0_0x0 + 0x2e8))
            (local_1d0.Section.field0_0x0.DebugPtr);
  lVar5 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_1d0.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_1d0.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_1d0.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 2000;
  if (lVar5 != 0) {
    pUVar23 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar3 = (int)pUVar23->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar23->_padding_)) {
      *(undefined1 *)(lVar5 + 0x30) = 0;
    }
  }
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKey<FMovieSceneFloatChannel,float>(&local_1d0,0,(FFrameNumber)0x0,__real_41200000,Auto);
  pFVar24 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  dVar2 = __real_405e000000000000;
  local_1b0 = __real_405e000000000000;
  local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.ArrayNum = 1;
  local_1b8 = TVar12.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_220.AllocatorInstance,1,&local_220.ArrayMax);
  pTVar29 = &pFVar24->Float;
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_220.AllocatorInstance.Data =
       (UMovieSceneSection *)local_1b8;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_c0,(UObject *)pUVar17,&local_220,pTVar29,&local_1b0,(FFrameTime)0x3e8);
  iVar3 = local_c0.Values.ArrayNum;
  ::FString::FString(&local_180,"Recomposed values");
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar28.Data = local_180.Data.AllocatorInstance.Data;
  }
  bVar14 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,iVar3,1);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (bVar14) {
    if (local_c0.Values.ArrayNum < 1) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
    }
    FVar27 = (ForElementType<double>)&local_c0;
    if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar27 = local_c0.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar27;
    ::FString::FString(&local_170,"Value to key");
    dVar11 = __real_4044000000000000;
    dVar10 = __real_3f1a36e2e0000000;
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar28.Data = local_170.Data.AllocatorInstance.Data;
    }
    bVar14 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,dVar1,
                        __real_4044000000000000,__real_3f1a36e2e0000000);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      local_1a8 = dVar2;
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 2;
      local_110 = TVar13.field0_0x0;
      TStack_108 = TVar12.field0_0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,2,0,&local_210.AllocatorInstance,2,&local_210.ArrayMax);
      *(TObjectPtr<UMovieSceneSection>_u_0 *)local_210.AllocatorInstance.Data =
           (UMovieSceneSection *)local_110;
      ((TObjectPtr<UMovieSceneSection>_u_0 *)(local_210.AllocatorInstance.Data + 8))->DebugPtr =
           (UMovieSceneSection *)TStack_108;
      pTVar25 = UE::MovieScene::Test::
                RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                          (&local_90,(UObject *)pUVar17,&local_210,pTVar29,&local_1a8,
                           (FFrameTime)0x3e8);
      if (&local_c0 != pTVar25) {
        if ((pTVar25->Values).AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
          local_c0.Values.AllocatorInstance.InlineData =
               *&(pTVar25->Values).AllocatorInstance.InlineData;
        }
        if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FMemory::Free((void *)local_c0.Values.AllocatorInstance.SecondaryData);
        }
        local_c0.Values.AllocatorInstance.SecondaryData =
             (pTVar25->Values).AllocatorInstance.SecondaryData;
        (pTVar25->Values).AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
        local_c0.Values.ArrayNum = (pTVar25->Values).ArrayNum;
        local_c0.Values.ArrayMax = (pTVar25->Values).ArrayMax;
        (pTVar25->Values).ArrayNum = 0;
        (pTVar25->Values).ArrayMax = 1;
      }
      if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_90.Values.AllocatorInstance.SecondaryData);
      }
      iVar3 = local_c0.Values.ArrayNum;
      ::FString::FString(&local_160,"Recomposed values");
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_160.Data.ArrayNum != 0) {
        FVar28.Data = local_160.Data.AllocatorInstance.Data;
      }
      bVar14 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,iVar3,2);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        if (local_c0.Values.ArrayNum < 1) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar6 = (code *)swi(3);
            uVar15 = (*pcVar6)();
            return (bool)uVar15;
          }
        }
        FVar27 = (ForElementType<double>)&local_c0;
        if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar27 = local_c0.Values.AllocatorInstance.SecondaryData;
        }
        dVar1 = *(double *)FVar27;
        ::FString::FString(&local_150,"Value to key");
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_150.Data.ArrayNum != 0) {
          FVar28.Data = local_150.Data.AllocatorInstance.Data;
        }
        bVar14 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,dVar1,
                            __real_4059000000000000,dVar10);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          if (local_c0.Values.ArrayNum < 2) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar6 = (code *)swi(3);
              uVar15 = (*pcVar6)();
              return (bool)uVar15;
            }
          }
          FVar27 = (ForElementType<double>)&local_c0;
          if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FVar27 = local_c0.Values.AllocatorInstance.SecondaryData;
          }
          dVar1 = *(double *)((longlong)FVar27 + 8);
          ::FString::FString(&local_140,"Value to key");
          FVar28.Data = (FScriptContainerElement *)L"";
          if (local_140.Data.ArrayNum != 0) {
            FVar28.Data = local_140.Data.AllocatorInstance.Data;
          }
          bVar14 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,dVar1,dVar11,dVar10
                             );
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (bVar14) {
            local_198 = dVar2;
            local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_200.ArrayNum = 1;
            local_1a0 = TVar12.field0_0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,0,&local_200.AllocatorInstance,1,&local_200.ArrayMax);
            *(TObjectPtr<UMovieSceneSection>_u_0 *)local_200.AllocatorInstance.Data =
                 (UMovieSceneSection *)local_1a0;
            UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                      (&local_a8,(UObject *)pUVar17,&local_200,pTVar29,&local_198,(FFrameTime)0x0);
            if (local_a8.Values.AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
              local_c0.Values.AllocatorInstance.InlineData[0] =
                   local_a8.Values.AllocatorInstance.InlineData[0];
              local_c0.Values.AllocatorInstance.InlineData[1] =
                   local_a8.Values.AllocatorInstance.InlineData[1];
              local_c0.Values.AllocatorInstance.InlineData[2] =
                   local_a8.Values.AllocatorInstance.InlineData[2];
              local_c0.Values.AllocatorInstance.InlineData[3] =
                   local_a8.Values.AllocatorInstance.InlineData[3];
              local_c0.Values.AllocatorInstance.InlineData[4] =
                   local_a8.Values.AllocatorInstance.InlineData[4];
              local_c0.Values.AllocatorInstance.InlineData[5] =
                   local_a8.Values.AllocatorInstance.InlineData[5];
              local_c0.Values.AllocatorInstance.InlineData[6] =
                   local_a8.Values.AllocatorInstance.InlineData[6];
              local_c0.Values.AllocatorInstance.InlineData[7] =
                   local_a8.Values.AllocatorInstance.InlineData[7];
            }
            FVar27 = local_a8.Values.AllocatorInstance.SecondaryData;
            if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
              FMemory::Free((void *)local_c0.Values.AllocatorInstance.SecondaryData);
              FVar27 = local_a8.Values.AllocatorInstance.SecondaryData;
            }
            iVar3 = local_a8.Values.ArrayNum;
            local_a8.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
            local_c0.Values.ArrayNum = local_a8.Values.ArrayNum;
            local_c0.Values.ArrayMax = local_a8.Values.ArrayMax;
            local_a8.Values.ArrayNum = 0;
            local_a8.Values.ArrayMax = 1;
            local_c0.Values.AllocatorInstance.SecondaryData = FVar27;
            ::FString::FString(&local_130,"Recomposed values");
            FVar28.Data = (FScriptContainerElement *)L"";
            if (local_130.Data.ArrayNum != 0) {
              FVar28.Data = local_130.Data.AllocatorInstance.Data;
            }
            bVar14 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,iVar3,1);
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            if (bVar14) {
              if (local_c0.Values.ArrayNum < 1) {
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar14) {
                  pcVar6 = (code *)swi(3);
                  uVar15 = (*pcVar6)();
                  return (bool)uVar15;
                }
              }
              FVar27 = (ForElementType<double>)&local_c0;
              if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
                FVar27 = local_c0.Values.AllocatorInstance.SecondaryData;
              }
              dVar2 = *(double *)FVar27;
              ::FString::FString(&local_120,"Value to key");
              FVar28.Data = (FScriptContainerElement *)L"";
              if (local_120.Data.ArrayNum != 0) {
                FVar28.Data = local_120.Data.AllocatorInstance.Data;
              }
              bVar14 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,dVar2,
                                  __real_4034000000000000,dVar10);
              if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120.Data.AllocatorInstance.Data);
              }
              if (bVar14) {
                bVar14 = true;
                goto LAB_146878a6b;
              }
            }
          }
        }
      }
    }
  }
  bVar14 = false;
LAB_146878a6b:
  if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_c0.Values.AllocatorInstance.SecondaryData);
  }
  return bVar14;
}

// GetBeautifiedTestName @ 146878af0

FString * __thiscall
FMovieSceneDecomposerAdditiveWithEasingTest::GetBeautifiedTestName
          (FMovieSceneDecomposerAdditiveWithEasingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.AdditiveWithEasing")
  ;
  return __return_storage_ptr__;
}

