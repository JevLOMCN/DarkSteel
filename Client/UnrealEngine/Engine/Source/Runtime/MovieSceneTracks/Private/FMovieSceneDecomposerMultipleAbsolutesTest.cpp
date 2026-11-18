// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 146876770

EAutomationTestFlags __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::GetTestFlags
          (FMovieSceneDecomposerMultipleAbsolutesTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146876780

bool __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::IsStressTest
          (FMovieSceneDecomposerMultipleAbsolutesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146876790

uint __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::GetRequiredDeviceNum
          (FMovieSceneDecomposerMultipleAbsolutesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468767a0

FString * __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::GetTestSourceFileName
          (FMovieSceneDecomposerMultipleAbsolutesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1468767d0

int __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::GetTestSourceFileLine
          (FMovieSceneDecomposerMultipleAbsolutesTest *this)

{
  return 0xb1;
}

// GetTests @ 1468767e0

/* WARNING: Removing unreachable block (ram,0x0001468768cd) */
/* WARNING: Removing unreachable block (ram,0x000146876998) */

void __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::GetTests
          (FMovieSceneDecomposerMultipleAbsolutesTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.MultipleAbsolutes");
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

// RunTest @ 1468769c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::RunTest
          (FMovieSceneDecomposerMultipleAbsolutesTest *this,FString *param_1)

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
  TObjectPtr<UMovieSceneSection> TVar9;
  TObjectPtr<UMovieSceneSection> TVar10;
  int iVar11;
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
  FMovieSceneTracksComponentTypes *pFVar21;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar22;
  TRecompositionResult<double> *pTVar23;
  undefined1 *puVar24;
  ForElementType<double> FVar25;
  ForAnyElementType FVar26;
  TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *pTVar27;
  undefined1 auStackY_2d8 [32];
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_278;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_268;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_258;
  undefined1 local_248 [4];
  undefined4 local_244;
  undefined1 local_240;
  undefined4 local_23c;
  undefined1 local_238 [4];
  undefined4 local_234;
  undefined1 local_230;
  undefined4 local_22c;
  UMovieSceneDecomposerTestObject *local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  TObjectPtr<UMovieSceneSection>_u_0 local_200;
  TObjectPtr<UMovieSceneSection>_u_0 local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_1c0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  initializer_list<UMovieSceneSection_*> local_138;
  FName local_128 [4];
  FGuid local_108;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_f8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_e8;
  FSequenceBuilder local_d8;
  TRecompositionResult<double> local_c0;
  TRecompositionResult<double> local_a8;
  TRecompositionResult<double> local_90;
  TRecompositionResult<double> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pUVar14 = GetTransientPackageAsObject();
  pUVar15 = NewObject<UMovieSceneDecomposerTestObject>(pUVar14);
  this_01 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  this_00 = (this_01->Sequence).field0_0x0.DebugPtr;
  local_228 = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pFVar16 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_108,(TObjectPtr<UObject>)&local_228);
  uVar5 = pFVar16->B;
  uVar6 = pFVar16->C;
  uVar7 = pFVar16->D;
  (this_01->CurrentBinding).A = pFVar16->A;
  (this_01->CurrentBinding).B = uVar5;
  (this_01->CurrentBinding).C = uVar6;
  (this_01->CurrentBinding).D = uVar7;
  pFVar17 = ::FName::FName(local_128,0xd,L"FloatProperty",FNAME_Add);
  pFVar18 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_01,&local_f8,*pFVar17);
  pUVar3 = (pFVar18->Track).field0_0x0.DebugPtr;
  TVar19.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar3 + 0x358))(pUVar3);
  local_248[0] = 1;
  local_23c = 5000;
  local_244 = 0;
  local_240 = 0;
  (**(code **)((TVar19.DebugPtr)->_padding_ + 0x2c8))(TVar19.DebugPtr,local_248);
  (*(code *)**(undefined8 **)&((pFVar18->Track).field0_0x0.DebugPtr)->field_0x70)();
  local_1c0.Parent = pFVar18;
  local_1c0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar19.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar19.DebugPtr);
  }
  TVar9.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_1c0.Section;
  pFVar20 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_1c0,0,(FFrameNumber)0x0,__real_42480000,Auto);
  pFVar18 = pFVar20->Parent;
  TVar19.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar18->Track).field0_0x0.DebugPtr + 0x358))();
  local_238[0] = 1;
  local_234 = 0;
  local_230 = 0;
  local_22c = 5000;
  (**(code **)((TVar19.DebugPtr)->_padding_ + 0x2c8))(TVar19.DebugPtr,local_238);
  puVar24 = &((pFVar18->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar24)(puVar24,TVar19.DebugPtr);
  local_1b0.Parent = pFVar18;
  local_1b0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar19.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar19.DebugPtr);
  }
  TVar10.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_1b0.Section;
  pFVar20 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseIn
                      (&local_1b0,1000,Linear);
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKey<FMovieSceneFloatChannel,float>(pFVar20,0,(FFrameNumber)0x0,__real_43160000,Auto);
  pFVar21 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  dVar2 = __real_405e000000000000;
  local_220 = __real_405e000000000000;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_258.AllocatorInstance,1,&local_258.ArrayMax);
  pTVar27 = &pFVar21->Float;
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_258.AllocatorInstance.Data =
       (UMovieSceneSection *)TVar10.field0_0x0;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_c0,(UObject *)pUVar15,&local_258,pTVar27,&local_220,(FFrameTime)0x7d0);
  iVar11 = local_c0.Values.ArrayNum;
  ::FString::FString(&local_1a0,"Recomposed values");
  FVar26.Data = (FScriptContainerElement *)L"";
  if (local_1a0.Data.ArrayNum != 0) {
    FVar26.Data = local_1a0.Data.AllocatorInstance.Data;
  }
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar11,1);
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    if ((local_c0.Values.ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    FVar25 = (ForElementType<double>)&local_c0;
    if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar25 = local_c0.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar25;
    ::FString::FString(&local_190,"Value to key");
    dVar8 = __real_3f1a36e2e0000000;
    FVar26.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar26.Data = local_190.Data.AllocatorInstance.Data;
    }
    bVar12 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar1,
                        __real_4067c00000000000,__real_3f1a36e2e0000000);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      local_218 = dVar2;
      local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_278.AllocatorInstance,1,&local_278.ArrayMax);
      *(TObjectPtr<UMovieSceneSection>_u_0 *)local_278.AllocatorInstance.Data =
           (UMovieSceneSection *)TVar9.field0_0x0;
      UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                (&local_a8,(UObject *)pUVar15,&local_278,pTVar27,&local_218,(FFrameTime)0x1f4);
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
      FVar25 = local_a8.Values.AllocatorInstance.SecondaryData;
      if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_c0.Values.AllocatorInstance.SecondaryData);
        FVar25 = local_a8.Values.AllocatorInstance.SecondaryData;
      }
      iVar11 = local_a8.Values.ArrayNum;
      local_a8.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      local_a8.Values.ArrayNum = 0;
      local_c0.Values.ArrayNum = iVar11;
      local_c0.Values.ArrayMax = local_a8.Values.ArrayMax;
      local_a8.Values.ArrayMax = 1;
      local_c0.Values.AllocatorInstance.SecondaryData = FVar25;
      ::FString::FString(&local_180,"Recomposed values");
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_180.Data.ArrayNum != 0) {
        FVar26.Data = local_180.Data.AllocatorInstance.Data;
      }
      bVar12 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar11,1);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        if ((local_c0.Values.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        FVar25 = (ForElementType<double>)&local_c0;
        if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar25 = local_c0.Values.AllocatorInstance.SecondaryData;
        }
        dVar1 = *(double *)FVar25;
        ::FString::FString(&local_170,"Value to key");
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_170.Data.ArrayNum != 0) {
          FVar26.Data = local_170.Data.AllocatorInstance.Data;
        }
        bVar12 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar1,
                            __real_405a400000000000,dVar8);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          local_210 = dVar2;
          local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_268.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_268.AllocatorInstance,1,&local_268.ArrayMax);
          *(TObjectPtr<UMovieSceneSection>_u_0 *)local_268.AllocatorInstance.Data =
               (UMovieSceneSection *)TVar10.field0_0x0;
          UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                    (&local_90,(UObject *)pUVar15,&local_268,pTVar27,&local_210,(FFrameTime)0x1f4);
          if (local_90.Values.AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
            local_c0.Values.AllocatorInstance.InlineData[0] =
                 local_90.Values.AllocatorInstance.InlineData[0];
            local_c0.Values.AllocatorInstance.InlineData[1] =
                 local_90.Values.AllocatorInstance.InlineData[1];
            local_c0.Values.AllocatorInstance.InlineData[2] =
                 local_90.Values.AllocatorInstance.InlineData[2];
            local_c0.Values.AllocatorInstance.InlineData[3] =
                 local_90.Values.AllocatorInstance.InlineData[3];
            local_c0.Values.AllocatorInstance.InlineData[4] =
                 local_90.Values.AllocatorInstance.InlineData[4];
            local_c0.Values.AllocatorInstance.InlineData[5] =
                 local_90.Values.AllocatorInstance.InlineData[5];
            local_c0.Values.AllocatorInstance.InlineData[6] =
                 local_90.Values.AllocatorInstance.InlineData[6];
            local_c0.Values.AllocatorInstance.InlineData[7] =
                 local_90.Values.AllocatorInstance.InlineData[7];
          }
          FVar25 = local_90.Values.AllocatorInstance.SecondaryData;
          if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FMemory::Free((void *)local_c0.Values.AllocatorInstance.SecondaryData);
            FVar25 = local_90.Values.AllocatorInstance.SecondaryData;
          }
          iVar11 = local_90.Values.ArrayNum;
          local_90.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
          local_90.Values.ArrayNum = 0;
          local_c0.Values.ArrayNum = iVar11;
          local_c0.Values.ArrayMax = local_90.Values.ArrayMax;
          local_90.Values.ArrayMax = 1;
          local_c0.Values.AllocatorInstance.SecondaryData = FVar25;
          ::FString::FString(&local_160,"Recomposed values");
          FVar26.Data = (FScriptContainerElement *)L"";
          if (local_160.Data.ArrayNum != 0) {
            FVar26.Data = local_160.Data.AllocatorInstance.Data;
          }
          bVar12 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar11,1);
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (bVar12) {
            if ((local_c0.Values.ArrayNum < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              uVar13 = (*pcVar4)();
              return (bool)uVar13;
            }
            FVar25 = (ForElementType<double>)&local_c0;
            if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
              FVar25 = local_c0.Values.AllocatorInstance.SecondaryData;
            }
            dVar1 = *(double *)FVar25;
            ::FString::FString(&local_150,"Value to key");
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_150.Data.ArrayNum != 0) {
              FVar26.Data = local_150.Data.AllocatorInstance.Data;
            }
            bVar12 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar1,
                                __real_4070400000000000,dVar8);
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              local_138._First = (UMovieSceneSection **)&local_200;
              local_208 = dVar2;
              local_138._Last = (UMovieSceneSection **)&local_1f0;
              local_200 = TVar9.field0_0x0;
              local_1f8 = TVar10.field0_0x0;
              pTVar22 = TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
                        TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>
                                  (&local_e8,&local_138);
              pTVar23 = UE::MovieScene::Test::
                        RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                                  (&local_78,(UObject *)pUVar15,pTVar22,pTVar27,&local_208,
                                   (FFrameTime)0x1f4);
              if (&local_c0 != pTVar23) {
                if ((pTVar23->Values).AllocatorInstance.SecondaryData == (ForElementType<double>)0x0
                   ) {
                  local_c0.Values.AllocatorInstance.InlineData =
                       *&(pTVar23->Values).AllocatorInstance.InlineData;
                }
                if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0)
                {
                  FMemory::Free((void *)local_c0.Values.AllocatorInstance.SecondaryData);
                }
                local_c0.Values.AllocatorInstance.SecondaryData =
                     (pTVar23->Values).AllocatorInstance.SecondaryData;
                (pTVar23->Values).AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
                local_c0.Values.ArrayNum = (pTVar23->Values).ArrayNum;
                local_c0.Values.ArrayMax = (pTVar23->Values).ArrayMax;
                (pTVar23->Values).ArrayNum = 0;
                (pTVar23->Values).ArrayMax = 1;
              }
              if (local_78.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
                FMemory::Free((void *)local_78.Values.AllocatorInstance.SecondaryData);
              }
              iVar11 = local_c0.Values.ArrayNum;
              ::FString::FString(&local_1f0,"Recomposed values");
              FVar26.Data = (FScriptContainerElement *)L"";
              if (local_1f0.Data.ArrayNum != 0) {
                FVar26.Data = local_1f0.Data.AllocatorInstance.Data;
              }
              bVar12 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar11,2);
              if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                if ((local_c0.Values.ArrayNum < 1) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
                FVar25 = (ForElementType<double>)&local_c0;
                if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0)
                {
                  FVar25 = local_c0.Values.AllocatorInstance.SecondaryData;
                }
                dVar2 = *(double *)FVar25;
                ::FString::FString(&local_1e0,"Value to key");
                dVar1 = __real_3f1a36e2eb1c432d;
                FVar26.Data = (FScriptContainerElement *)L"";
                if (local_1e0.Data.ArrayNum != 0) {
                  FVar26.Data = local_1e0.Data.AllocatorInstance.Data;
                }
                bVar12 = FAutomationTestBase::TestEqual
                                   ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar2,
                                    __real_4055aaaaaaae3eed,__real_3f1a36e2eb1c432d);
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  if ((local_c0.Values.ArrayNum < 2) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  FVar25 = (ForElementType<double>)&local_c0;
                  if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0
                     ) {
                    FVar25 = local_c0.Values.AllocatorInstance.SecondaryData;
                  }
                  dVar2 = *(double *)((longlong)FVar25 + 8);
                  ::FString::FString(&local_1d0,"Value to key");
                  FVar26.Data = (FScriptContainerElement *)L"";
                  if (local_1d0.Data.ArrayNum != 0) {
                    FVar26.Data = local_1d0.Data.AllocatorInstance.Data;
                  }
                  bVar12 = FAutomationTestBase::TestEqual
                                     ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,dVar2,
                                      __real_4067555555571f77,dVar1);
                  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                  }
                  if (bVar12) {
                    bVar12 = true;
                    goto LAB_14687739d;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar12 = false;
LAB_14687739d:
  if (local_c0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_c0.Values.AllocatorInstance.SecondaryData);
  }
  return bVar12;
}

// GetBeautifiedTestName @ 146877420

FString * __thiscall
FMovieSceneDecomposerMultipleAbsolutesTest::GetBeautifiedTestName
          (FMovieSceneDecomposerMultipleAbsolutesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.MultipleAbsolutes");
  return __return_storage_ptr__;
}

