// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 1468822a0

EAutomationTestFlags __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::GetTestFlags
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1468822b0

bool __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::IsStressTest
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1468822c0

uint __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::GetRequiredDeviceNum
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1468822d0

FString * __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::GetTestSourceFileName
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146882300

int __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::GetTestSourceFileLine
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this)

{
  return 0x84;
}

// GetTests @ 146882310

/* WARNING: Removing unreachable block (ram,0x0001468823fd) */
/* WARNING: Removing unreachable block (ram,0x0001468824c8) */

void __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::GetTests
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.AbsoluteWithEasing");
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

// RunTest @ 1468824f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::RunTest
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this,FString *param_1)

{
  double dVar1;
  UMovieSceneTestSequence *this_00;
  UMovieSceneFloatTrack *pUVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  TObjectPtr<UMovieSceneSection> TVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  UObject *pUVar13;
  UMovieSceneDecomposerTestObject *pUVar14;
  FMovieSceneTracksComponentTypes *pFVar15;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this_01;
  FSequenceBuilder *this_02;
  FGuid *pFVar16;
  FName *pFVar17;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar18;
  TObjectPtr<UMovieSceneSection>_u_0 TVar19;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *this_03;
  undefined1 *puVar20;
  ForElementType<double> FVar21;
  ForAnyElementType FVar22;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  FFrameTime local_1a0;
  undefined8 local_198;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_190;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_180;
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined1 local_168;
  undefined4 local_164;
  undefined8 local_160;
  UMovieSceneDecomposerTestObject *local_158;
  double local_150;
  double local_148;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  TSharedPtr<UE::MovieScene::FInitialValueCache,1> local_f0;
  FName local_e0 [3];
  FGuid local_c8;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_b8;
  FSequenceBuilder local_a8;
  TRecompositionResult<double> local_90;
  TRecompositionResult<double> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UMovieSceneDecomposerTestObject>(pUVar13);
  pFVar15 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pUVar14->FloatProperty = 20.0;
  UE::MovieScene::FInitialValueCache::GetGlobalInitialValues(&local_f0);
  if (local_f0.Object == (FInitialValueCache *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
  }
  this_01 = UE::MovieScene::FInitialValueCache::GetStorage<UE::MovieScene::FFloatPropertyTraits>
                      (local_f0.Object,(FComponentTypeID)*(ushort *)&(pFVar15->Float).InitialValue);
  local_160 = __real_4034000000000000;
  UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::AddInitialValue
            (this_01,(UObject *)local_1a8,(double *)pUVar14,(ushort)&local_160);
  this_02 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_a8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  this_00 = (this_02->Sequence).field0_0x0.DebugPtr;
  local_158 = pUVar14;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pFVar16 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_c8,(TObjectPtr<UObject>)&local_158);
  uVar4 = pFVar16->B;
  uVar5 = pFVar16->C;
  uVar6 = pFVar16->D;
  (this_02->CurrentBinding).A = pFVar16->A;
  (this_02->CurrentBinding).B = uVar4;
  (this_02->CurrentBinding).C = uVar5;
  (this_02->CurrentBinding).D = uVar6;
  pFVar17 = ::FName::FName(local_e0,0xd,L"FloatProperty",FNAME_Add);
  pFVar18 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_02,&local_b8,*pFVar17);
  pUVar2 = (pFVar18->Track).field0_0x0.DebugPtr;
  TVar19.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar2 + 0x358))(pUVar2);
  local_170[0] = 1;
  local_16c = 0;
  local_168 = 0;
  local_164 = 5000;
  (**(code **)((TVar19.DebugPtr)->_padding_ + 0x2c8))(TVar19.DebugPtr,local_170);
  puVar20 = &((pFVar18->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar20)(puVar20,TVar19.DebugPtr);
  local_140.Parent = pFVar18;
  local_140.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar19.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar19.DebugPtr);
  }
  TVar9.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_140.Section;
  this_03 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseIn
                      (&local_140,1000,Linear);
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKey<FMovieSceneFloatChannel,float>(this_03,0,(FFrameNumber)0x0,__real_42c80000,Auto);
  dVar8 = __real_405e000000000000;
  local_150 = __real_405e000000000000;
  local_1a0.FrameNumber.Value = 500;
  local_1a0.SubFrame = 0.0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_190.AllocatorInstance,1,&local_190.ArrayMax);
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_190.AllocatorInstance.Data =
       (UMovieSceneSection *)TVar9.field0_0x0;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_90,(UObject *)pUVar14,&local_190,&pFVar15->Float,&local_150,local_1a0);
  iVar10 = local_90.Values.ArrayNum;
  ::FString::FString(&local_130,"Recomposed values");
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar22.Data = local_130.Data.AllocatorInstance.Data;
  }
  bVar11 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar22.Data,iVar10,1);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    if (local_90.Values.ArrayNum < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
    }
    FVar21 = (ForElementType<double>)&local_90;
    if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar21 = local_90.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar21;
    ::FString::FString(&local_120,"Value to key");
    dVar7 = __real_3f1a36e2e0000000;
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar22.Data = local_120.Data.AllocatorInstance.Data;
    }
    bVar11 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar22.Data,dVar1,
                        __real_406b800000000000,__real_3f1a36e2e0000000);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      local_148 = dVar8;
      local_198 = 0;
      local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_180.AllocatorInstance,1,&local_180.ArrayMax);
      *(TObjectPtr<UMovieSceneSection>_u_0 *)local_180.AllocatorInstance.Data =
           (UMovieSceneSection *)TVar9.field0_0x0;
      UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                (&local_78,(UObject *)pUVar14,&local_180,&pFVar15->Float,&local_148,(FFrameTime)0x0)
      ;
      if (local_78.Values.AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
        local_90.Values.AllocatorInstance.InlineData[0] =
             local_78.Values.AllocatorInstance.InlineData[0];
        local_90.Values.AllocatorInstance.InlineData[1] =
             local_78.Values.AllocatorInstance.InlineData[1];
        local_90.Values.AllocatorInstance.InlineData[2] =
             local_78.Values.AllocatorInstance.InlineData[2];
        local_90.Values.AllocatorInstance.InlineData[3] =
             local_78.Values.AllocatorInstance.InlineData[3];
        local_90.Values.AllocatorInstance.InlineData[4] =
             local_78.Values.AllocatorInstance.InlineData[4];
        local_90.Values.AllocatorInstance.InlineData[5] =
             local_78.Values.AllocatorInstance.InlineData[5];
        local_90.Values.AllocatorInstance.InlineData[6] =
             local_78.Values.AllocatorInstance.InlineData[6];
        local_90.Values.AllocatorInstance.InlineData[7] =
             local_78.Values.AllocatorInstance.InlineData[7];
      }
      FVar21 = local_78.Values.AllocatorInstance.SecondaryData;
      if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_90.Values.AllocatorInstance.SecondaryData);
        FVar21 = local_78.Values.AllocatorInstance.SecondaryData;
      }
      iVar10 = local_78.Values.ArrayNum;
      local_78.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      local_90.Values.ArrayNum = local_78.Values.ArrayNum;
      local_90.Values.ArrayMax = local_78.Values.ArrayMax;
      local_78.Values.ArrayNum = 0;
      local_78.Values.ArrayMax = 1;
      local_90.Values.AllocatorInstance.SecondaryData = FVar21;
      ::FString::FString(&local_110,"Recomposed values");
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_110.Data.ArrayNum != 0) {
        FVar22.Data = local_110.Data.AllocatorInstance.Data;
      }
      bVar11 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar22.Data,iVar10,1);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        if (local_90.Values.ArrayNum < 1) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            uVar12 = (*pcVar3)();
            return (bool)uVar12;
          }
        }
        FVar21 = (ForElementType<double>)&local_90;
        if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar21 = local_90.Values.AllocatorInstance.SecondaryData;
        }
        dVar1 = *(double *)FVar21;
        ::FString::FString(&local_100,"Value to key");
        FVar22.Data = (FScriptContainerElement *)L"";
        if (local_100.Data.ArrayNum != 0) {
          FVar22.Data = local_100.Data.AllocatorInstance.Data;
        }
        bVar11 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar22.Data,dVar1,dVar8,dVar7);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          bVar11 = true;
          goto LAB_146882a00;
        }
      }
    }
  }
  bVar11 = false;
LAB_146882a00:
  if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_90.Values.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  return bVar11;
}

// GetBeautifiedTestName @ 146882a90

FString * __thiscall
FMovieSceneDecomposerAbsoluteWithEasingTest::GetBeautifiedTestName
          (FMovieSceneDecomposerAbsoluteWithEasingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.AbsoluteWithEasing")
  ;
  return __return_storage_ptr__;
}

