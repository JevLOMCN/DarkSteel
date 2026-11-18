// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 14687a330

EAutomationTestFlags __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::GetTestFlags
          (FMovieSceneDecomposerAdditiveFromBaseTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14687a340

bool __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::IsStressTest
          (FMovieSceneDecomposerAdditiveFromBaseTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14687a350

uint __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::GetRequiredDeviceNum
          (FMovieSceneDecomposerAdditiveFromBaseTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14687a360

FString * __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::GetTestSourceFileName
          (FMovieSceneDecomposerAdditiveFromBaseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14687a390

int __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::GetTestSourceFileLine
          (FMovieSceneDecomposerAdditiveFromBaseTest *this)

{
  return 0x1d2;
}

// GetTests @ 14687a3a0

/* WARNING: Removing unreachable block (ram,0x00014687a48d) */
/* WARNING: Removing unreachable block (ram,0x00014687a558) */

void __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::GetTests
          (FMovieSceneDecomposerAdditiveFromBaseTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.AdditiveFromBase");
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

// RunTest @ 14687a580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::RunTest
          (FMovieSceneDecomposerAdditiveFromBaseTest *this,FString *param_1)

{
  double dVar1;
  int iVar2;
  UMovieSceneTestSequence *this_00;
  UMovieSceneFloatTrack *pUVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TObjectPtr<UMovieSceneSection> TVar8;
  bool bVar9;
  undefined1 uVar10;
  UObject *pUVar11;
  UMovieSceneDecomposerTestObject *pUVar12;
  FSequenceBuilder *this_01;
  FGuid *pFVar13;
  FName *pFVar14;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar15;
  TObjectPtr<UMovieSceneSection>_u_0 TVar16;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar17;
  FMovieSceneChannelProxy *this_02;
  UScriptStruct *pUVar18;
  FMovieSceneChannelEntry *pFVar19;
  FMovieSceneTracksComponentTypes *pFVar20;
  undefined1 *puVar21;
  ForElementType<double> FVar22;
  FMovieSceneFloatChannel *pFVar23;
  ForAnyElementType FVar24;
  undefined1 auStackY_198 [32];
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_158;
  TArray<float,TSizedDefaultAllocator<32>_> local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  FFrameTime local_128;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_120;
  undefined1 local_110 [4];
  undefined4 local_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100 [4];
  undefined4 local_fc;
  undefined1 local_f8;
  undefined4 local_f4;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_f0;
  UMovieSceneDecomposerTestObject *local_e0;
  double local_d8;
  FString local_d0;
  FString local_c0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_b0;
  FName local_a0 [2];
  FGuid local_90;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_80;
  FSequenceBuilder local_70;
  TRecompositionResult<double> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UMovieSceneDecomposerTestObject>(pUVar11);
  this_01 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_70);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  this_00 = (this_01->Sequence).field0_0x0.DebugPtr;
  local_e0 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UMovieSceneDecomposerTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pFVar13 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_90,(TObjectPtr<UObject>)&local_e0);
  uVar5 = pFVar13->B;
  uVar6 = pFVar13->C;
  uVar7 = pFVar13->D;
  (this_01->CurrentBinding).A = pFVar13->A;
  (this_01->CurrentBinding).B = uVar5;
  (this_01->CurrentBinding).C = uVar6;
  (this_01->CurrentBinding).D = uVar7;
  pFVar14 = ::FName::FName(local_a0,0xd,L"FloatProperty",FNAME_Add);
  pFVar15 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_01,&local_80,*pFVar14);
  pUVar3 = (pFVar15->Track).field0_0x0.DebugPtr;
  TVar16.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar3 + 0x358))(pUVar3);
  pFVar23 = (FMovieSceneFloatChannel *)0x0;
  local_110[0] = 1;
  local_10c = 0;
  local_108 = 0;
  local_104 = 5000;
  (**(code **)((TVar16.DebugPtr)->_padding_ + 0x2c8))(TVar16.DebugPtr,local_110);
  pUVar3 = (pFVar15->Track).field0_0x0.DebugPtr;
  (*(code *)**(undefined8 **)&pUVar3->field_0x70)(&pUVar3->field_0x70);
  local_b0.Parent = pFVar15;
  local_b0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar16.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
  }
  pFVar17 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_b0,0,(FFrameNumber)0x0,__real_42c80000,Auto);
  pFVar15 = pFVar17->Parent;
  TVar16.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar15->Track).field0_0x0.DebugPtr + 0x358))();
  local_100[0] = 1;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 5000;
  (**(code **)((TVar16.DebugPtr)->_padding_ + 0x2c8))(TVar16.DebugPtr,local_100);
  UMovieSceneSection::SetRowIndex(TVar16.DebugPtr,1);
  puVar21 = &((pFVar15->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar21)(puVar21,TVar16.DebugPtr);
  local_f0.Parent = pFVar15;
  local_f0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar16.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
  }
  TVar8.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_f0.Section;
  (**(code **)(*(longlong *)local_f0.Section.field0_0x0 + 0x2e8))
            (local_f0.Section.field0_0x0.DebugPtr,8);
  local_138 = 0x42480000;
  uStack_134 = 0x425c0000;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_148.AllocatorInstance,2,&local_148.ArrayMax);
  local_130 = 0;
  uStack_12c = 3000;
  *(ulonglong *)local_148.AllocatorInstance.Data = CONCAT44(uStack_134,local_138);
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_158.AllocatorInstance,2,&local_158.ArrayMax);
  *(ulonglong *)local_158.AllocatorInstance.Data = CONCAT44(uStack_12c,local_130);
  this_02 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)local_f0.Section.field0_0x0);
  pUVar18 = FMovieSceneFloatChannel::StaticStruct();
  pFVar19 = FMovieSceneChannelProxy::FindEntry(this_02,(FName)pUVar18->_padding_);
  if (pFVar19 != (FMovieSceneChannelEntry *)0x0) {
    iVar2 = (pFVar19->Channels).ArrayNum;
    if (iVar2 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
    }
    else if (0 < iVar2) {
      pFVar23 = *(FMovieSceneFloatChannel **)(pFVar19->Channels).AllocatorInstance.Data;
    }
  }
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKeys<FMovieSceneFloatChannel,float>(&local_f0,pFVar23,&local_158,&local_148,Auto);
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  pFVar20 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_d8 = __real_405e000000000000;
  local_128.FrameNumber.Value = 4000;
  local_128.SubFrame = 0.0;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_120.AllocatorInstance,1,&local_120.ArrayMax);
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_120.AllocatorInstance.Data =
       (UMovieSceneSection *)TVar8.field0_0x0;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_58,(UObject *)pUVar12,&local_120,&pFVar20->Float,&local_d8,local_128);
  iVar2 = local_58.Values.ArrayNum;
  ::FString::FString(&local_d0,"Recomposed values");
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar24.Data = local_d0.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar24.Data,iVar2,1)
  ;
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    if ((local_58.Values.ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    FVar22 = (ForElementType<double>)&local_58;
    if (local_58.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar22 = local_58.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar22;
    ::FString::FString(&local_c0,"Value to key");
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar24.Data = local_c0.Data.AllocatorInstance.Data;
    }
    bVar9 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar24.Data,dVar1,
                       __real_4051800000000000,__real_3f1a36e2e0000000);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      bVar9 = true;
      goto LAB_14687aa41;
    }
  }
  bVar9 = false;
LAB_14687aa41:
  if (local_58.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_58.Values.AllocatorInstance.SecondaryData);
  }
  return bVar9;
}

// GetBeautifiedTestName @ 14687aa90

FString * __thiscall
FMovieSceneDecomposerAdditiveFromBaseTest::GetBeautifiedTestName
          (FMovieSceneDecomposerAdditiveFromBaseTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.AdditiveFromBase");
  return __return_storage_ptr__;
}

