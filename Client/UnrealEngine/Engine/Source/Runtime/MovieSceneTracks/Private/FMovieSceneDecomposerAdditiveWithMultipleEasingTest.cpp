// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 146879760

EAutomationTestFlags __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::GetTestFlags
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146879770

bool __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::IsStressTest
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146879780

uint __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::GetRequiredDeviceNum
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146879790

FString * __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::GetTestSourceFileName
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468797c0

int __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::GetTestSourceFileLine
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this)

{
  return 0x19a;
}

// GetTests @ 1468797d0

/* WARNING: Removing unreachable block (ram,0x0001468798bd) */
/* WARNING: Removing unreachable block (ram,0x000146879988) */

void __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::GetTests
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.AdditiveWithMultipleEasing");
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

// RunTest @ 1468799b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::RunTest
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this,FString *param_1)

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
  TObjectPtr<UMovieSceneSection> TVar11;
  bool bVar12;
  undefined1 uVar13;
  UObject *pUVar14;
  UMovieSceneDecomposerTestObject *pUVar15;
  FSequenceBuilder *this_01;
  FGuid *pFVar16;
  FName *pFVar17;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar18;
  TObjectPtr<UMovieSceneSection>_u_0 TVar19;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar20;
  UClass *pUVar21;
  FMovieSceneTracksComponentTypes *pFVar22;
  undefined1 *puVar23;
  ForElementType<double> FVar24;
  ForAnyElementType FVar25;
  TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *pTVar26;
  undefined1 auStackY_248 [32];
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_1d0;
  undefined1 local_1c0 [4];
  undefined4 local_1bc;
  undefined1 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0 [4];
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined4 local_1a4;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_1a0;
  UMovieSceneDecomposerTestObject *local_190;
  TObjectPtr<UMovieSceneSection>_u_0 local_188;
  double local_180;
  TObjectPtr<UMovieSceneSection>_u_0 local_178;
  double local_170;
  TObjectPtr<UMovieSceneSection>_u_0 local_168;
  double local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_f8;
  FName local_e8;
  FGuid local_e0;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_d0;
  FSequenceBuilder local_c0;
  TRecompositionResult<double> local_a8;
  TRecompositionResult<double> local_90;
  TRecompositionResult<double> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pUVar14 = GetTransientPackageAsObject();
  pUVar15 = NewObject<UMovieSceneDecomposerTestObject>(pUVar14);
  this_01 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_c0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  this_00 = (this_01->Sequence).field0_0x0.DebugPtr;
  local_190 = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pFVar16 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_e0,(TObjectPtr<UObject>)&local_190);
  uVar7 = pFVar16->B;
  uVar8 = pFVar16->C;
  uVar9 = pFVar16->D;
  (this_01->CurrentBinding).A = pFVar16->A;
  (this_01->CurrentBinding).B = uVar7;
  (this_01->CurrentBinding).C = uVar8;
  (this_01->CurrentBinding).D = uVar9;
  pFVar17 = ::FName::FName(&local_e8,0xd,L"FloatProperty",FNAME_Add);
  pFVar18 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_01,&local_d0,*pFVar17);
  pUVar4 = (pFVar18->Track).field0_0x0.DebugPtr;
  TVar19.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4);
  local_1c0[0] = 1;
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 5000;
  (**(code **)((TVar19.DebugPtr)->_padding_ + 0x2c8))(TVar19.DebugPtr,local_1c0);
  pUVar4 = (pFVar18->Track).field0_0x0.DebugPtr;
  (*(code *)**(undefined8 **)&pUVar4->field_0x70)(&pUVar4->field_0x70,TVar19.DebugPtr);
  local_f8.Parent = pFVar18;
  local_f8.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar19.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar19.DebugPtr);
  }
  pFVar20 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseIn
                      (&local_f8,1000,Linear);
  pFVar20 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseOut
                      (pFVar20,500,Linear);
  pFVar20 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>(pFVar20,0,(FFrameNumber)0x0,__real_42c80000,Auto);
  pFVar18 = pFVar20->Parent;
  TVar19.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar18->Track).field0_0x0.DebugPtr + 0x358))();
  local_1b0[0] = 1;
  local_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 5000;
  (**(code **)((TVar19.DebugPtr)->_padding_ + 0x2c8))(TVar19.DebugPtr,local_1b0);
  UMovieSceneSection::SetRowIndex(TVar19.DebugPtr,1);
  puVar23 = &((pFVar18->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar23)(puVar23,TVar19.DebugPtr);
  local_1a0.Parent = pFVar18;
  local_1a0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar19.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar19.DebugPtr);
  }
  TVar11.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_1a0.Section;
  (**(code **)(*(longlong *)local_1a0.Section.field0_0x0 + 0x2e8))
            (local_1a0.Section.field0_0x0.DebugPtr,2);
  lVar5 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_1a0.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_1a0.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_1a0.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 500;
  if (lVar5 != 0) {
    pUVar21 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar3 = (int)pUVar21->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar21->_padding_)) {
      *(undefined1 *)(lVar5 + 0x30) = 0;
    }
  }
  pFVar20 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseOut
                      (&local_1a0,1000,Linear);
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKey<FMovieSceneFloatChannel,float>(pFVar20,0,(FFrameNumber)0x0,__real_41200000,Auto);
  pFVar22 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  dVar2 = __real_4049000000000000;
  local_180 = __real_4049000000000000;
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 1;
  local_188 = TVar11.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_1f0.AllocatorInstance,1,&local_1f0.ArrayMax);
  pTVar26 = &pFVar22->Float;
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1f0.AllocatorInstance.Data =
       (UMovieSceneSection *)local_188;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_a8,(UObject *)pUVar15,&local_1f0,pTVar26,&local_180,(FFrameTime)0xfa);
  iVar3 = local_a8.Values.ArrayNum;
  ::FString::FString(&local_158,"Recomposed values");
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar25.Data = local_158.Data.AllocatorInstance.Data;
  }
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,iVar3,1);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    if (local_a8.Values.ArrayNum < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
    }
    FVar24 = (ForElementType<double>)&local_a8;
    if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar24 = local_a8.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar24;
    ::FString::FString(&local_148,"Value to key");
    dVar10 = __real_3f1a36e2e0000000;
    FVar25.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar25.Data = local_148.Data.AllocatorInstance.Data;
    }
    bVar12 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,dVar1,dVar2,
                        __real_3f1a36e2e0000000);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      local_170 = __real_4059000000000000;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 1;
      local_178 = TVar11.field0_0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_1e0.AllocatorInstance,1,&local_1e0.ArrayMax);
      *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1e0.AllocatorInstance.Data =
           (UMovieSceneSection *)local_178;
      UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                (&local_90,(UObject *)pUVar15,&local_1e0,pTVar26,&local_170,(FFrameTime)0x2ee);
      if (local_90.Values.AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
        local_a8.Values.AllocatorInstance.InlineData[0] =
             local_90.Values.AllocatorInstance.InlineData[0];
        local_a8.Values.AllocatorInstance.InlineData[1] =
             local_90.Values.AllocatorInstance.InlineData[1];
        local_a8.Values.AllocatorInstance.InlineData[2] =
             local_90.Values.AllocatorInstance.InlineData[2];
        local_a8.Values.AllocatorInstance.InlineData[3] =
             local_90.Values.AllocatorInstance.InlineData[3];
        local_a8.Values.AllocatorInstance.InlineData[4] =
             local_90.Values.AllocatorInstance.InlineData[4];
        local_a8.Values.AllocatorInstance.InlineData[5] =
             local_90.Values.AllocatorInstance.InlineData[5];
        local_a8.Values.AllocatorInstance.InlineData[6] =
             local_90.Values.AllocatorInstance.InlineData[6];
        local_a8.Values.AllocatorInstance.InlineData[7] =
             local_90.Values.AllocatorInstance.InlineData[7];
      }
      FVar24 = local_90.Values.AllocatorInstance.SecondaryData;
      if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_a8.Values.AllocatorInstance.SecondaryData);
        FVar24 = local_90.Values.AllocatorInstance.SecondaryData;
      }
      iVar3 = local_90.Values.ArrayNum;
      local_90.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      local_a8.Values.ArrayNum = local_90.Values.ArrayNum;
      local_a8.Values.ArrayMax = local_90.Values.ArrayMax;
      local_90.Values.ArrayNum = 0;
      local_90.Values.ArrayMax = 1;
      local_a8.Values.AllocatorInstance.SecondaryData = FVar24;
      ::FString::FString(&local_138,"Recomposed values");
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar25.Data = local_138.Data.AllocatorInstance.Data;
      }
      bVar12 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,iVar3,1);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        if (local_a8.Values.ArrayNum < 1) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        FVar24 = (ForElementType<double>)&local_a8;
        if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar24 = local_a8.Values.AllocatorInstance.SecondaryData;
        }
        dVar2 = *(double *)FVar24;
        ::FString::FString(&local_128,"Value to key");
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_128.Data.ArrayNum != 0) {
          FVar25.Data = local_128.Data.AllocatorInstance.Data;
        }
        bVar12 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,dVar2,
                            __real_4039000000000000,dVar10);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        dVar2 = __real_405e000000000000;
        if (bVar12) {
          local_160 = __real_405e000000000000;
          local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.ArrayNum = 1;
          local_168 = TVar11.field0_0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_1d0.AllocatorInstance,1,&local_1d0.ArrayMax);
          *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1d0.AllocatorInstance.Data =
               (UMovieSceneSection *)local_168;
          UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                    (&local_78,(UObject *)pUVar15,&local_1d0,pTVar26,&local_160,(FFrameTime)0x0);
          if (local_78.Values.AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
            local_a8.Values.AllocatorInstance.InlineData[0] =
                 local_78.Values.AllocatorInstance.InlineData[0];
            local_a8.Values.AllocatorInstance.InlineData[1] =
                 local_78.Values.AllocatorInstance.InlineData[1];
            local_a8.Values.AllocatorInstance.InlineData[2] =
                 local_78.Values.AllocatorInstance.InlineData[2];
            local_a8.Values.AllocatorInstance.InlineData[3] =
                 local_78.Values.AllocatorInstance.InlineData[3];
            local_a8.Values.AllocatorInstance.InlineData[4] =
                 local_78.Values.AllocatorInstance.InlineData[4];
            local_a8.Values.AllocatorInstance.InlineData[5] =
                 local_78.Values.AllocatorInstance.InlineData[5];
            local_a8.Values.AllocatorInstance.InlineData[6] =
                 local_78.Values.AllocatorInstance.InlineData[6];
            local_a8.Values.AllocatorInstance.InlineData[7] =
                 local_78.Values.AllocatorInstance.InlineData[7];
          }
          FVar24 = local_78.Values.AllocatorInstance.SecondaryData;
          if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FMemory::Free((void *)local_a8.Values.AllocatorInstance.SecondaryData);
            FVar24 = local_78.Values.AllocatorInstance.SecondaryData;
          }
          iVar3 = local_78.Values.ArrayNum;
          local_78.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
          local_a8.Values.ArrayNum = local_78.Values.ArrayNum;
          local_a8.Values.ArrayMax = local_78.Values.ArrayMax;
          local_78.Values.ArrayNum = 0;
          local_78.Values.ArrayMax = 1;
          local_a8.Values.AllocatorInstance.SecondaryData = FVar24;
          ::FString::FString(&local_118,"Recomposed values");
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_118.Data.ArrayNum != 0) {
            FVar25.Data = local_118.Data.AllocatorInstance.Data;
          }
          bVar12 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,iVar3,1);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (bVar12) {
            if (local_a8.Values.ArrayNum < 1) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar6 = (code *)swi(3);
                uVar13 = (*pcVar6)();
                return (bool)uVar13;
              }
            }
            FVar24 = (ForElementType<double>)&local_a8;
            if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
              FVar24 = local_a8.Values.AllocatorInstance.SecondaryData;
            }
            dVar1 = *(double *)FVar24;
            ::FString::FString(&local_108,"Value to key");
            FVar25.Data = (FScriptContainerElement *)L"";
            if (local_108.Data.ArrayNum != 0) {
              FVar25.Data = local_108.Data.AllocatorInstance.Data;
            }
            bVar12 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,dVar1,dVar2,
                                dVar10);
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              bVar12 = true;
              goto LAB_14687a183;
            }
          }
        }
      }
    }
  }
  bVar12 = false;
LAB_14687a183:
  if (local_a8.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_a8.Values.AllocatorInstance.SecondaryData);
  }
  return bVar12;
}

// GetBeautifiedTestName @ 14687a200

FString * __thiscall
FMovieSceneDecomposerAdditiveWithMultipleEasingTest::GetBeautifiedTestName
          (FMovieSceneDecomposerAdditiveWithMultipleEasingTest *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.Decomposer.AdditiveWithMultipleEasing");
  return __return_storage_ptr__;
}

