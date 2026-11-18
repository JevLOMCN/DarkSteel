// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 146881370

EAutomationTestFlags __thiscall
FMovieSceneDecomposerAbsoluteTest::GetTestFlags(FMovieSceneDecomposerAbsoluteTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146881380

bool __thiscall
FMovieSceneDecomposerAbsoluteTest::IsStressTest(FMovieSceneDecomposerAbsoluteTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146881390

uint __thiscall
FMovieSceneDecomposerAbsoluteTest::GetRequiredDeviceNum(FMovieSceneDecomposerAbsoluteTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468813a0

FString * __thiscall
FMovieSceneDecomposerAbsoluteTest::GetTestSourceFileName
          (FMovieSceneDecomposerAbsoluteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468813d0

int __thiscall
FMovieSceneDecomposerAbsoluteTest::GetTestSourceFileLine(FMovieSceneDecomposerAbsoluteTest *this)

{
  return 0x65;
}

// GetTests @ 1468813e0

/* WARNING: Removing unreachable block (ram,0x0001468814cd) */
/* WARNING: Removing unreachable block (ram,0x000146881598) */

void __thiscall
FMovieSceneDecomposerAbsoluteTest::GetTests
          (FMovieSceneDecomposerAbsoluteTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.Absolute");
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

// RunTest @ 1468815c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerAbsoluteTest::RunTest(FMovieSceneDecomposerAbsoluteTest *this,FString *param_1)

{
  double dVar1;
  UMovieSceneTestSequence *this_00;
  UMovieSceneFloatTrack *pUVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  TObjectPtr<UMovieSceneSection> TVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  UObject *pUVar12;
  UMovieSceneDecomposerTestObject *pUVar13;
  FSequenceBuilder *this_01;
  FGuid *pFVar14;
  FName *pFVar15;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar16;
  TObjectPtr<UMovieSceneSection>_u_0 TVar17;
  FMovieSceneTracksComponentTypes *pFVar18;
  ForElementType<double> FVar19;
  ForAnyElementType FVar20;
  undefined1 auStackY_148 [32];
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_100;
  undefined1 local_f0 [4];
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  UMovieSceneDecomposerTestObject *local_e0;
  double local_d8;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_d0;
  FString local_c0;
  FString local_b0;
  FName local_a0 [2];
  FGuid local_90;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_80;
  FSequenceBuilder local_70;
  TRecompositionResult<double> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar12 = GetTransientPackageAsObject();
  pUVar13 = NewObject<UMovieSceneDecomposerTestObject>(pUVar12);
  this_01 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_70);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  this_00 = (this_01->Sequence).field0_0x0.DebugPtr;
  local_e0 = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pFVar14 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_90,(TObjectPtr<UObject>)&local_e0);
  uVar4 = pFVar14->B;
  uVar5 = pFVar14->C;
  uVar6 = pFVar14->D;
  (this_01->CurrentBinding).A = pFVar14->A;
  (this_01->CurrentBinding).B = uVar4;
  (this_01->CurrentBinding).C = uVar5;
  (this_01->CurrentBinding).D = uVar6;
  pFVar15 = ::FName::FName(local_a0,0xd,L"FloatProperty",FNAME_Add);
  pFVar16 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_01,&local_80,*pFVar15);
  pUVar2 = (pFVar16->Track).field0_0x0.DebugPtr;
  TVar17.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar2 + 0x358))(pUVar2);
  local_f0[0] = 1;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 5000;
  (**(code **)((TVar17.DebugPtr)->_padding_ + 0x2c8))(TVar17.DebugPtr,local_f0);
  (*(code *)**(undefined8 **)&((pFVar16->Track).field0_0x0.DebugPtr)->field_0x70)();
  local_d0.Parent = pFVar16;
  local_d0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar17.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar17.DebugPtr);
  }
  TVar8.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_d0.Section;
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKey<FMovieSceneFloatChannel,float>(&local_d0,0,(FFrameNumber)0x0,__real_42c80000,Auto);
  pFVar18 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  dVar7 = __real_405e000000000000;
  local_d8 = __real_405e000000000000;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_100.AllocatorInstance,1,&local_100.ArrayMax);
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_100.AllocatorInstance.Data =
       (UMovieSceneSection *)TVar8.field0_0x0;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_58,(UObject *)pUVar13,&local_100,&pFVar18->Float,&local_d8,(FFrameTime)0x0);
  iVar9 = local_58.Values.ArrayNum;
  ::FString::FString(&local_c0,"Recomposed values");
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_c0.Data.ArrayNum != 0) {
    FVar20.Data = local_c0.Data.AllocatorInstance.Data;
  }
  bVar10 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,iVar9,1);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (bVar10) {
    if (local_58.Values.ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
    }
    FVar19 = (ForElementType<double>)&local_58;
    if (local_58.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar19 = local_58.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar19;
    ::FString::FString(&local_b0,"Value to key");
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar20.Data = local_b0.Data.AllocatorInstance.Data;
    }
    bVar10 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar20.Data,dVar1,dVar7,
                        __real_3f1a36e2e0000000);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      bVar10 = true;
      goto LAB_1468818ae;
    }
  }
  bVar10 = false;
LAB_1468818ae:
  if (local_58.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_58.Values.AllocatorInstance.SecondaryData);
  }
  return bVar10;
}

// GetBeautifiedTestName @ 146881900

FString * __thiscall
FMovieSceneDecomposerAbsoluteTest::GetBeautifiedTestName
          (FMovieSceneDecomposerAbsoluteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.Absolute");
  return __return_storage_ptr__;
}

