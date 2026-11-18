// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 146878c20

EAutomationTestFlags __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::GetTestFlags
          (FMovieSceneDecomposerOverrideWithEasingTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146878c30

bool __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::IsStressTest
          (FMovieSceneDecomposerOverrideWithEasingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146878c40

uint __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::GetRequiredDeviceNum
          (FMovieSceneDecomposerOverrideWithEasingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146878c50

FString * __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::GetTestSourceFileName
          (FMovieSceneDecomposerOverrideWithEasingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146878c80

int __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::GetTestSourceFileLine
          (FMovieSceneDecomposerOverrideWithEasingTest *this)

{
  return 0x158;
}

// GetTests @ 146878c90

/* WARNING: Removing unreachable block (ram,0x000146878d7d) */
/* WARNING: Removing unreachable block (ram,0x000146878e48) */

void __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::GetTests
          (FMovieSceneDecomposerOverrideWithEasingTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.OverrideWithEasing");
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

// RunTest @ 146878e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::RunTest
          (FMovieSceneDecomposerOverrideWithEasingTest *this,FString *param_1)

{
  double dVar1;
  int iVar2;
  UMovieSceneTestSequence *this_00;
  UMovieSceneFloatTrack *pUVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  TObjectPtr<UMovieSceneSection> TVar11;
  TObjectPtr<UMovieSceneSection> TVar12;
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
  UClass *pUVar22;
  FMovieSceneTracksComponentTypes *pFVar23;
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
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_188;
  undefined1 local_178 [4];
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_168;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  UMovieSceneDecomposerTestObject *local_148;
  TObjectPtr<UMovieSceneSection>_u_0 local_140;
  double local_138;
  TObjectPtr<UMovieSceneSection>_u_0 local_130;
  double local_128;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_d0;
  FName local_c0;
  FGuid local_b8;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_a8;
  FSequenceBuilder local_98;
  TRecompositionResult<double> local_80;
  TRecompositionResult<double> local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar15 = GetTransientPackageAsObject();
  pUVar16 = NewObject<UMovieSceneDecomposerTestObject>(pUVar15);
  this_01 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_98);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  this_00 = (this_01->Sequence).field0_0x0.DebugPtr;
  local_148 = pUVar16;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  pFVar17 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_b8,(TObjectPtr<UObject>)&local_148);
  uVar6 = pFVar17->B;
  uVar7 = pFVar17->C;
  uVar8 = pFVar17->D;
  (this_01->CurrentBinding).A = pFVar17->A;
  (this_01->CurrentBinding).B = uVar6;
  (this_01->CurrentBinding).C = uVar7;
  (this_01->CurrentBinding).D = uVar8;
  pFVar18 = ::FName::FName(&local_c0,0xd,L"FloatProperty",FNAME_Add);
  pFVar19 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_01,&local_a8,*pFVar18);
  pUVar3 = (pFVar19->Track).field0_0x0.DebugPtr;
  TVar20.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar3 + 0x358))(pUVar3);
  local_1a8[0] = 1;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 5000;
  (**(code **)((TVar20.DebugPtr)->_padding_ + 0x2c8))(TVar20.DebugPtr,local_1a8);
  pUVar3 = (pFVar19->Track).field0_0x0.DebugPtr;
  (*(code *)**(undefined8 **)&pUVar3->field_0x70)(&pUVar3->field_0x70);
  local_d0.Parent = pFVar19;
  local_d0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  fVar9 = __real_42c80000;
  pFVar21 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_d0,0,(FFrameNumber)0x0,__real_42c80000,Auto);
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
  local_188.Parent = pFVar19;
  local_188.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  (**(code **)(*(longlong *)local_188.Section.field0_0x0 + 0x2e8))
            (local_188.Section.field0_0x0.DebugPtr);
  lVar4 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_188.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_188.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_188.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 2000;
  if (lVar4 != 0) {
    pUVar22 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar2 = (int)pUVar22->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar22->_padding_)) {
      *(undefined1 *)(lVar4 + 0x30) = 0;
    }
  }
  pFVar21 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>(&local_188,0,(FFrameNumber)0x0,fVar9,Auto);
  pFVar19 = pFVar21->Parent;
  TVar20.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar19->Track).field0_0x0.DebugPtr + 0x358))();
  local_178[0] = 1;
  local_174 = 0;
  local_170 = 0;
  local_16c = 5000;
  (**(code **)((TVar20.DebugPtr)->_padding_ + 0x2c8))(TVar20.DebugPtr,local_178);
  UMovieSceneSection::SetRowIndex(TVar20.DebugPtr,1);
  puVar24 = &((pFVar19->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar24)(puVar24,TVar20.DebugPtr);
  local_168.Parent = pFVar19;
  local_168.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  TVar11.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_168.Section;
  (**(code **)(*(longlong *)local_168.Section.field0_0x0 + 0x2e8))
            (local_168.Section.field0_0x0.DebugPtr);
  lVar4 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_168.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_168.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_168.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 2000;
  if (lVar4 != 0) {
    pUVar22 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar2 = (int)pUVar22->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar22->_padding_)) {
      *(undefined1 *)(lVar4 + 0x30) = 0;
    }
  }
  pFVar21 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>(&local_168,0,(FFrameNumber)0x0,0.0,Auto);
  pFVar19 = pFVar21->Parent;
  TVar20.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar19->Track).field0_0x0.DebugPtr + 0x358))();
  local_158[0] = 1;
  local_154 = 0;
  local_150 = 0;
  local_14c = 5000;
  (**(code **)((TVar20.DebugPtr)->_padding_ + 0x2c8))(TVar20.DebugPtr,local_158);
  UMovieSceneSection::SetRowIndex(TVar20.DebugPtr,1);
  puVar24 = &((pFVar19->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar24)(puVar24,TVar20.DebugPtr);
  local_120.Parent = pFVar19;
  local_120.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  TVar12.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_120.Section;
  (**(code **)(*(longlong *)local_120.Section.field0_0x0 + 0x2e8))
            (local_120.Section.field0_0x0.DebugPtr);
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKey<FMovieSceneFloatChannel,float>(&local_120,0,(FFrameNumber)0x0,__real_41c80000,Auto);
  pFVar23 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_138 = __real_405f400000000000;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 1;
  local_140 = TVar12.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_1c8.AllocatorInstance,1,&local_1c8.ArrayMax);
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1c8.AllocatorInstance.Data =
       (UMovieSceneSection *)local_140;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_80,(UObject *)pUVar16,&local_1c8,&pFVar23->Float,&local_138,(FFrameTime)0x3e8);
  iVar2 = local_80.Values.ArrayNum;
  ::FString::FString(&local_110,"Recomposed values");
  FVar26.Data = (FScriptContainerElement *)L"";
  if (local_110.Data.ArrayNum != 0) {
    FVar26.Data = local_110.Data.AllocatorInstance.Data;
  }
  bVar13 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar2,1);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
    if (local_80.Values.ArrayNum < 1) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
    }
    FVar25 = (ForElementType<double>)&local_80;
    if (local_80.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar25 = local_80.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar25;
    ::FString::FString(&local_100,"Value to key");
    dVar10 = __real_3f1a36e2e0000000;
    FVar26.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar26.Data = local_100.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar1,
                        __real_4049000000000000,__real_3f1a36e2e0000000);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      local_128 = __real_4059000000000000;
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 1;
      local_130 = TVar11.field0_0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
      *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1b8.AllocatorInstance.Data =
           (UMovieSceneSection *)local_130;
      UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                (&local_68,(UObject *)pUVar16,&local_1b8,&pFVar23->Float,&local_128,
                 (FFrameTime)0x7d0);
      if (local_68.Values.AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
        local_80.Values.AllocatorInstance.InlineData[0] =
             local_68.Values.AllocatorInstance.InlineData[0];
        local_80.Values.AllocatorInstance.InlineData[1] =
             local_68.Values.AllocatorInstance.InlineData[1];
        local_80.Values.AllocatorInstance.InlineData[2] =
             local_68.Values.AllocatorInstance.InlineData[2];
        local_80.Values.AllocatorInstance.InlineData[3] =
             local_68.Values.AllocatorInstance.InlineData[3];
        local_80.Values.AllocatorInstance.InlineData[4] =
             local_68.Values.AllocatorInstance.InlineData[4];
        local_80.Values.AllocatorInstance.InlineData[5] =
             local_68.Values.AllocatorInstance.InlineData[5];
        local_80.Values.AllocatorInstance.InlineData[6] =
             local_68.Values.AllocatorInstance.InlineData[6];
        local_80.Values.AllocatorInstance.InlineData[7] =
             local_68.Values.AllocatorInstance.InlineData[7];
      }
      FVar25 = local_68.Values.AllocatorInstance.SecondaryData;
      if (local_80.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_80.Values.AllocatorInstance.SecondaryData);
        FVar25 = local_68.Values.AllocatorInstance.SecondaryData;
      }
      iVar2 = local_68.Values.ArrayNum;
      local_68.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      local_80.Values.ArrayNum = local_68.Values.ArrayNum;
      local_80.Values.ArrayMax = local_68.Values.ArrayMax;
      local_68.Values.ArrayNum = 0;
      local_68.Values.ArrayMax = 1;
      local_80.Values.AllocatorInstance.SecondaryData = FVar25;
      ::FString::FString(&local_f0,"Recomposed values");
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_f0.Data.ArrayNum != 0) {
        FVar26.Data = local_f0.Data.AllocatorInstance.Data;
      }
      bVar13 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar2,1);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (bVar13) {
        if (local_80.Values.ArrayNum < 1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
        }
        FVar25 = (ForElementType<double>)&local_80;
        if (local_80.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar25 = local_80.Values.AllocatorInstance.SecondaryData;
        }
        dVar1 = *(double *)FVar25;
        ::FString::FString(&local_e0,"Value to key");
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_e0.Data.ArrayNum != 0) {
          FVar26.Data = local_e0.Data.AllocatorInstance.Data;
        }
        bVar13 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar1,
                            __real_4052c00000000000,dVar10);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (bVar13) {
          bVar13 = true;
          goto LAB_1468795af;
        }
      }
    }
  }
  bVar13 = false;
LAB_1468795af:
  if (local_80.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_80.Values.AllocatorInstance.SecondaryData);
  }
  return bVar13;
}

// GetBeautifiedTestName @ 146879630

FString * __thiscall
FMovieSceneDecomposerOverrideWithEasingTest::GetBeautifiedTestName
          (FMovieSceneDecomposerOverrideWithEasingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.OverrideWithEasing")
  ;
  return __return_storage_ptr__;
}

