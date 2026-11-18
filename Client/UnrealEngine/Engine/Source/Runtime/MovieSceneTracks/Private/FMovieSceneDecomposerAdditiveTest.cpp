// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 146877590

EAutomationTestFlags __thiscall
FMovieSceneDecomposerAdditiveTest::GetTestFlags(FMovieSceneDecomposerAdditiveTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1468775a0

bool __thiscall
FMovieSceneDecomposerAdditiveTest::IsStressTest(FMovieSceneDecomposerAdditiveTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1468775b0

uint __thiscall
FMovieSceneDecomposerAdditiveTest::GetRequiredDeviceNum(FMovieSceneDecomposerAdditiveTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468775c0

FString * __thiscall
FMovieSceneDecomposerAdditiveTest::GetTestSourceFileName
          (FMovieSceneDecomposerAdditiveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468775f0

int __thiscall
FMovieSceneDecomposerAdditiveTest::GetTestSourceFileLine(FMovieSceneDecomposerAdditiveTest *this)

{
  return 0xf2;
}

// GetTests @ 146877600

/* WARNING: Removing unreachable block (ram,0x0001468776ed) */
/* WARNING: Removing unreachable block (ram,0x0001468777b8) */

void __thiscall
FMovieSceneDecomposerAdditiveTest::GetTests
          (FMovieSceneDecomposerAdditiveTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.Additive");
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

// RunTest @ 1468777e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerAdditiveTest::RunTest(FMovieSceneDecomposerAdditiveTest *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  UMovieSceneTestSequence *this_00;
  UMovieSceneFloatTrack *pUVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  TObjectPtr<UMovieSceneSection> TVar10;
  TObjectPtr<UMovieSceneSection> TVar11;
  int iVar12;
  bool bVar13;
  undefined1 uVar14;
  UObject *pUVar15;
  UMovieSceneDecomposerTestObject *pUVar16;
  FSequenceBuilder *this_01;
  FGuid *pFVar17;
  FName *pFVar18;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar19;
  TObjectPtr<UMovieSceneSection>_u_0 TVar20;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar21;
  FMovieSceneTracksComponentTypes *pFVar22;
  TRecompositionResult<double> *pTVar23;
  undefined1 *puVar24;
  ForElementType<double> FVar25;
  ForAnyElementType FVar26;
  undefined1 auStackY_218 [32];
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_1b8;
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [4];
  undefined4 local_194;
  undefined1 local_190;
  undefined4 local_18c;
  UMovieSceneDecomposerTestObject *local_188;
  double local_180;
  double local_178;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_170;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  TObjectPtr<UMovieSceneSection>_u_0 local_100;
  TObjectPtr<UMovieSceneSection>_u_0 TStack_f8;
  FName local_f0 [2];
  FGuid local_e0;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_d0;
  FSequenceBuilder local_c0;
  TRecompositionResult<double> local_a8;
  TRecompositionResult<double> local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar15 = GetTransientPackageAsObject();
  pUVar16 = NewObject<UMovieSceneDecomposerTestObject>(pUVar15);
  this_01 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_c0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  this_00 = (this_01->Sequence).field0_0x0.DebugPtr;
  local_188 = pUVar16;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  pFVar17 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_e0,(TObjectPtr<UObject>)&local_188);
  uVar5 = pFVar17->B;
  uVar6 = pFVar17->C;
  uVar7 = pFVar17->D;
  (this_01->CurrentBinding).A = pFVar17->A;
  (this_01->CurrentBinding).B = uVar5;
  (this_01->CurrentBinding).C = uVar6;
  (this_01->CurrentBinding).D = uVar7;
  pFVar18 = ::FName::FName(local_f0,0xd,L"FloatProperty",FNAME_Add);
  pFVar19 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_01,&local_d0,*pFVar18);
  pUVar3 = (pFVar19->Track).field0_0x0.DebugPtr;
  TVar20.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar3 + 0x358))(pUVar3);
  local_1a8[0] = 1;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 5000;
  (**(code **)((TVar20.DebugPtr)->_padding_ + 0x2c8))(TVar20.DebugPtr,local_1a8);
  pUVar3 = (pFVar19->Track).field0_0x0.DebugPtr;
  (*(code *)**(undefined8 **)&pUVar3->field_0x70)(&pUVar3->field_0x70);
  local_170.Parent = pFVar19;
  local_170.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  TVar10.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_170.Section;
  pFVar21 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_170,0,(FFrameNumber)0x0,__real_42c80000,Auto);
  pFVar19 = pFVar21->Parent;
  TVar20.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar19->Track).field0_0x0.DebugPtr + 0x358))();
  local_198[0] = 1;
  local_194 = 0;
  local_190 = 0;
  local_18c = 5000;
  (**(code **)((TVar20.DebugPtr)->_padding_ + 0x2c8))(TVar20.DebugPtr,local_198);
  UMovieSceneSection::SetRowIndex(TVar20.DebugPtr,1);
  puVar24 = &((pFVar19->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar24)(puVar24,TVar20.DebugPtr);
  local_160.Parent = pFVar19;
  local_160.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  TVar11.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_160.Section;
  (**(code **)(*(longlong *)local_160.Section.field0_0x0 + 0x2e8))
            (local_160.Section.field0_0x0.DebugPtr);
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKey<FMovieSceneFloatChannel,float>(&local_160,0,(FFrameNumber)0x0,__real_41200000,Auto);
  pFVar22 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  dVar2 = __real_405e000000000000;
  local_180 = __real_405e000000000000;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_1c8.AllocatorInstance,1,&local_1c8.ArrayMax);
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1c8.AllocatorInstance.Data =
       (UMovieSceneSection *)TVar11.field0_0x0;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_a8,(UObject *)pUVar16,&local_1c8,&pFVar22->Float,&local_180,(FFrameTime)0x0);
  iVar12 = local_a8.Values.ArrayNum;
  ::FString::FString(&local_150,"Recomposed values");
  FVar26.Data = (FScriptContainerElement *)L"";
  if (local_150.Data.ArrayNum != 0) {
    FVar26.Data = local_150.Data.AllocatorInstance.Data;
  }
  bVar13 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar12,1);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
    if (local_a8.Values.ArrayNum < 1) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
    }
    FVar25 = (ForElementType<double>)&local_a8;
    if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar25 = local_a8.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar25;
    ::FString::FString(&local_140,"Value to key");
    dVar9 = __real_4034000000000000;
    dVar8 = __real_3f1a36e2e0000000;
    FVar26.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar26.Data = local_140.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar1,
                        __real_4034000000000000,__real_3f1a36e2e0000000);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      local_178 = dVar2;
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 2;
      local_100 = TVar10.field0_0x0;
      TStack_f8 = TVar11.field0_0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,2,0,&local_1b8.AllocatorInstance,2,&local_1b8.ArrayMax);
      *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1b8.AllocatorInstance.Data =
           (UMovieSceneSection *)local_100;
      ((TObjectPtr<UMovieSceneSection>_u_0 *)(local_1b8.AllocatorInstance.Data + 8))->DebugPtr =
           (UMovieSceneSection *)TStack_f8;
      pTVar23 = UE::MovieScene::Test::
                RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                          (&local_90,(UObject *)pUVar16,&local_1b8,&pFVar22->Float,&local_178,
                           (FFrameTime)0x0);
      if (&local_a8 != pTVar23) {
        if ((pTVar23->Values).AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
          local_a8.Values.AllocatorInstance.InlineData =
               *&(pTVar23->Values).AllocatorInstance.InlineData;
        }
        if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FMemory::Free((void *)local_a8.Values.AllocatorInstance.SecondaryData);
        }
        local_a8.Values.AllocatorInstance.SecondaryData =
             (pTVar23->Values).AllocatorInstance.SecondaryData;
        (pTVar23->Values).AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
        local_a8.Values.ArrayNum = (pTVar23->Values).ArrayNum;
        local_a8.Values.ArrayMax = (pTVar23->Values).ArrayMax;
        (pTVar23->Values).ArrayNum = 0;
        (pTVar23->Values).ArrayMax = 1;
      }
      if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_90.Values.AllocatorInstance.SecondaryData);
      }
      iVar12 = local_a8.Values.ArrayNum;
      ::FString::FString(&local_130,"Recomposed values");
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar26.Data = local_130.Data.AllocatorInstance.Data;
      }
      bVar13 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar12,2);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (bVar13) {
        if (local_a8.Values.ArrayNum < 1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
        }
        FVar25 = (ForElementType<double>)&local_a8;
        if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar25 = local_a8.Values.AllocatorInstance.SecondaryData;
        }
        dVar2 = *(double *)FVar25;
        ::FString::FString(&local_120,"Value to key");
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_120.Data.ArrayNum != 0) {
          FVar26.Data = local_120.Data.AllocatorInstance.Data;
        }
        bVar13 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar2,
                            __real_4059000000000000,dVar8);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (bVar13) {
          if (local_a8.Values.ArrayNum < 2) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar4 = (code *)swi(3);
              uVar14 = (*pcVar4)();
              return (bool)uVar14;
            }
          }
          FVar25 = (ForElementType<double>)&local_a8;
          if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FVar25 = local_a8.Values.AllocatorInstance.SecondaryData;
          }
          dVar2 = *(double *)((longlong)FVar25 + 8);
          ::FString::FString(&local_110,"Value to key");
          FVar26.Data = (FScriptContainerElement *)L"";
          if (local_110.Data.ArrayNum != 0) {
            FVar26.Data = local_110.Data.AllocatorInstance.Data;
          }
          bVar13 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar2,dVar9,dVar8);
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          if (bVar13) {
            bVar13 = true;
            goto LAB_146877df5;
          }
        }
      }
    }
  }
  bVar13 = false;
LAB_146877df5:
  if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_a8.Values.AllocatorInstance.SecondaryData);
  }
  return bVar13;
}

// GetBeautifiedTestName @ 146877e80

FString * __thiscall
FMovieSceneDecomposerAdditiveTest::GetBeautifiedTestName
          (FMovieSceneDecomposerAdditiveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.Additive");
  return __return_storage_ptr__;
}

