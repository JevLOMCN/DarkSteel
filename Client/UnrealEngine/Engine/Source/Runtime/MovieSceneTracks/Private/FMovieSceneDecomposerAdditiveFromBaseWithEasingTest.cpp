// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 14687ac40

EAutomationTestFlags __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::GetTestFlags
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14687ac50

bool __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::IsStressTest
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14687ac60

uint __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::GetRequiredDeviceNum
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14687ac70

FString * __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::GetTestSourceFileName
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14687aca0

int __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::GetTestSourceFileLine
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this)

{
  return 0x1f7;
}

// GetTests @ 14687acb0

/* WARNING: Removing unreachable block (ram,0x00014687ad9d) */
/* WARNING: Removing unreachable block (ram,0x00014687ae68) */

void __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::GetTests
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.AdditiveFromBaseWithEasing");
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

// RunTest @ 14687ae90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::RunTest
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this,FString *param_1)

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
  FMovieSceneTracksComponentTypes *pFVar16;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this_01;
  FSequenceBuilder *this_02;
  FGuid *pFVar17;
  FName *pFVar18;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar19;
  TObjectPtr<UMovieSceneSection>_u_0 TVar20;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar21;
  UClass *pUVar22;
  FMovieSceneChannelProxy *this_03;
  UScriptStruct *pUVar23;
  FMovieSceneChannelEntry *pFVar24;
  undefined1 *puVar25;
  ForElementType<double> FVar26;
  FMovieSceneFloatChannel *pFVar27;
  ForAnyElementType FVar28;
  undefined1 auStackY_238 [32];
  undefined1 local_1f8 [8];
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1e0;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  FFrameTime local_1c0;
  FFrameTime local_1b8;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_1b0;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_190;
  undefined1 local_180 [4];
  undefined4 local_17c;
  undefined1 local_178;
  undefined4 local_174;
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined1 local_168;
  undefined4 local_164;
  undefined8 local_160;
  UMovieSceneDecomposerTestObject *local_158;
  TObjectPtr<UMovieSceneSection>_u_0 local_150;
  double local_148;
  TObjectPtr<UMovieSceneSection>_u_0 local_140;
  double local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  TSharedPtr<UE::MovieScene::FInitialValueCache,1> local_f0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_e0;
  FName local_d0;
  FGuid local_c8;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_b8;
  FSequenceBuilder local_a8;
  TRecompositionResult<double> local_90;
  TRecompositionResult<double> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pUVar14 = GetTransientPackageAsObject();
  pUVar15 = NewObject<UMovieSceneDecomposerTestObject>(pUVar14);
  pFVar16 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pUVar15->FloatProperty = 20.0;
  UE::MovieScene::FInitialValueCache::GetGlobalInitialValues(&local_f0);
  if ((local_f0.Object == (FInitialValueCache *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  this_01 = UE::MovieScene::FInitialValueCache::GetStorage<UE::MovieScene::FFloatPropertyTraits>
                      (local_f0.Object,(FComponentTypeID)*(ushort *)&(pFVar16->Float).InitialValue);
  local_160 = __real_4034000000000000;
  UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::AddInitialValue
            (this_01,(UObject *)local_1f8,(double *)pUVar15,(ushort)&local_160);
  this_02 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_a8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  this_00 = (this_02->Sequence).field0_0x0.DebugPtr;
  local_158 = pUVar15;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pFVar17 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_c8,(TObjectPtr<UObject>)&local_158);
  uVar7 = pFVar17->B;
  uVar8 = pFVar17->C;
  uVar9 = pFVar17->D;
  (this_02->CurrentBinding).A = pFVar17->A;
  (this_02->CurrentBinding).B = uVar7;
  (this_02->CurrentBinding).C = uVar8;
  (this_02->CurrentBinding).D = uVar9;
  pFVar18 = ::FName::FName(&local_d0,0xd,L"FloatProperty",FNAME_Add);
  pFVar19 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_02,&local_b8,*pFVar18);
  pUVar4 = (pFVar19->Track).field0_0x0.DebugPtr;
  TVar20.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar4 + 0x358))(pUVar4);
  pFVar27 = (FMovieSceneFloatChannel *)0x0;
  local_180[0] = 1;
  local_17c = 0;
  local_178 = 0;
  local_174 = 5000;
  (**(code **)((TVar20.DebugPtr)->_padding_ + 0x2c8))(TVar20.DebugPtr,local_180);
  pUVar4 = (pFVar19->Track).field0_0x0.DebugPtr;
  (*(code *)**(undefined8 **)&pUVar4->field_0x70)(&pUVar4->field_0x70,TVar20.DebugPtr);
  local_e0.Parent = pFVar19;
  local_e0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  pFVar21 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseOut
                      (&local_e0,1000,Linear);
  pFVar21 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>(pFVar21,0,(FFrameNumber)0x0,__real_42c80000,Auto);
  pFVar19 = pFVar21->Parent;
  TVar20.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar19->Track).field0_0x0.DebugPtr + 0x358))();
  local_170[0] = 1;
  local_16c = 0;
  local_168 = 0;
  local_164 = 5000;
  (**(code **)((TVar20.DebugPtr)->_padding_ + 0x2c8))(TVar20.DebugPtr,local_170);
  UMovieSceneSection::SetRowIndex(TVar20.DebugPtr,1);
  puVar25 = &((pFVar19->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar25)(puVar25,TVar20.DebugPtr);
  local_1b0.Parent = pFVar19;
  local_1b0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar20.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar20.DebugPtr);
  }
  TVar11.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_1b0.Section;
  (**(code **)(*(longlong *)local_1b0.Section.field0_0x0 + 0x2e8))
            (local_1b0.Section.field0_0x0.DebugPtr,8);
  lVar5 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_1b0.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_1b0.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_1b0.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 2000;
  if (lVar5 != 0) {
    pUVar22 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar3 = (int)pUVar22->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar22->_padding_)) {
      *(undefined1 *)(lVar5 + 0x30) = 0;
    }
  }
  local_1d0 = 0x42480000;
  uStack_1cc = 0x42700000;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_1e0.AllocatorInstance,2,&local_1e0.ArrayMax);
  *(ulonglong *)local_1e0.AllocatorInstance.Data = CONCAT44(uStack_1cc,local_1d0);
  local_1c8 = 0;
  uStack_1c4 = 1000;
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_1f0.AllocatorInstance,2,&local_1f0.ArrayMax);
  *(ulonglong *)local_1f0.AllocatorInstance.Data = CONCAT44(uStack_1c4,local_1c8);
  this_03 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)local_1b0.Section.field0_0x0);
  pUVar23 = FMovieSceneFloatChannel::StaticStruct();
  pFVar24 = FMovieSceneChannelProxy::FindEntry(this_03,(FName)pUVar23->_padding_);
  if (pFVar24 != (FMovieSceneChannelEntry *)0x0) {
    iVar3 = (pFVar24->Channels).ArrayNum;
    if (iVar3 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
    }
    else if (0 < iVar3) {
      pFVar27 = *(FMovieSceneFloatChannel **)(pFVar24->Channels).AllocatorInstance.Data;
    }
  }
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKeys<FMovieSceneFloatChannel,float>(&local_1b0,pFVar27,&local_1f0,&local_1e0,Auto);
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  dVar2 = __real_405e000000000000;
  local_148 = __real_405e000000000000;
  local_1c0.FrameNumber.Value = 1000;
  local_1c0.SubFrame = 0.0;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 1;
  local_150 = TVar11.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_1a0.AllocatorInstance,1,&local_1a0.ArrayMax);
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_1a0.AllocatorInstance.Data =
       (UMovieSceneSection *)local_150;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_90,(UObject *)pUVar15,&local_1a0,&pFVar16->Float,&local_148,local_1c0);
  iVar3 = local_90.Values.ArrayNum;
  ::FString::FString(&local_130,"Recomposed values");
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar28.Data = local_130.Data.AllocatorInstance.Data;
  }
  bVar12 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,iVar3,1);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    if ((local_90.Values.ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    FVar26 = (ForElementType<double>)&local_90;
    if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar26 = local_90.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar26;
    ::FString::FString(&local_120,"Value to key");
    dVar10 = __real_3f1a36e2e0000000;
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar28.Data = local_120.Data.AllocatorInstance.Data;
    }
    bVar12 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,dVar1,
                        __real_4056800000000000,__real_3f1a36e2e0000000);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      local_138 = dVar2;
      local_1b8.FrameNumber.Value = 0x1194;
      local_1b8.SubFrame = 0.0;
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.ArrayNum = 1;
      local_140 = TVar11.field0_0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_190.AllocatorInstance,1,&local_190.ArrayMax);
      *(TObjectPtr<UMovieSceneSection>_u_0 *)local_190.AllocatorInstance.Data =
           (UMovieSceneSection *)local_140;
      UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                (&local_78,(UObject *)pUVar15,&local_190,&pFVar16->Float,&local_138,local_1b8);
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
      FVar26 = local_78.Values.AllocatorInstance.SecondaryData;
      if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_90.Values.AllocatorInstance.SecondaryData);
        FVar26 = local_78.Values.AllocatorInstance.SecondaryData;
      }
      iVar3 = local_78.Values.ArrayNum;
      local_78.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      local_90.Values.ArrayNum = local_78.Values.ArrayNum;
      local_90.Values.ArrayMax = local_78.Values.ArrayMax;
      local_78.Values.ArrayNum = 0;
      local_78.Values.ArrayMax = 1;
      local_90.Values.AllocatorInstance.SecondaryData = FVar26;
      ::FString::FString(&local_110,"Recomposed values");
      FVar28.Data = (FScriptContainerElement *)L"";
      if (local_110.Data.ArrayNum != 0) {
        FVar28.Data = local_110.Data.AllocatorInstance.Data;
      }
      bVar12 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,iVar3,1);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        if ((local_90.Values.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        FVar26 = (ForElementType<double>)&local_90;
        if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar26 = local_90.Values.AllocatorInstance.SecondaryData;
        }
        dVar2 = *(double *)FVar26;
        ::FString::FString(&local_100,"Value to key");
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_100.Data.ArrayNum != 0) {
          FVar28.Data = local_100.Data.AllocatorInstance.Data;
        }
        bVar12 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar28.Data,dVar2,
                            __real_405b800000000000,dVar10);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          bVar12 = true;
          goto LAB_14687b5f4;
        }
      }
    }
  }
  bVar12 = false;
LAB_14687b5f4:
  if (local_90.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_90.Values.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  return bVar12;
}

// GetBeautifiedTestName @ 14687b680

FString * __thiscall
FMovieSceneDecomposerAdditiveFromBaseWithEasingTest::GetBeautifiedTestName
          (FMovieSceneDecomposerAdditiveFromBaseWithEasingTest *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.Decomposer.AdditiveFromBaseWithEasing");
  return __return_storage_ptr__;
}

