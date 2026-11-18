// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 14687b870

EAutomationTestFlags __thiscall
FMovieSceneDecomposerComplexTest::GetTestFlags(FMovieSceneDecomposerComplexTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14687b880

bool __thiscall
FMovieSceneDecomposerComplexTest::IsStressTest(FMovieSceneDecomposerComplexTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14687b890

uint __thiscall
FMovieSceneDecomposerComplexTest::GetRequiredDeviceNum(FMovieSceneDecomposerComplexTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14687b8a0

FString * __thiscall
FMovieSceneDecomposerComplexTest::GetTestSourceFileName
          (FMovieSceneDecomposerComplexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14687b8d0

int __thiscall
FMovieSceneDecomposerComplexTest::GetTestSourceFileLine(FMovieSceneDecomposerComplexTest *this)

{
  return 0x22c;
}

// GetTests @ 14687b8e0

/* WARNING: Removing unreachable block (ram,0x00014687b9cd) */
/* WARNING: Removing unreachable block (ram,0x00014687ba98) */

void __thiscall
FMovieSceneDecomposerComplexTest::GetTests
          (FMovieSceneDecomposerComplexTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Decomposer.Complex");
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

// RunTest @ 14687bac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDecomposerComplexTest::RunTest(FMovieSceneDecomposerComplexTest *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UMovieSceneTestSequence *this_00;
  UMovieSceneFloatTrack *pUVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  TObjectPtr<UMovieSceneSection> TVar13;
  TObjectPtr<UMovieSceneSection> TVar14;
  TObjectPtr<UMovieSceneSection> TVar15;
  TObjectPtr<UMovieSceneSection> TVar16;
  bool bVar17;
  undefined1 uVar18;
  UObject *pUVar19;
  UMovieSceneDecomposerTestObject *pUVar20;
  FMovieSceneTracksComponentTypes *pFVar21;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this_01;
  FSequenceBuilder *this_02;
  FGuid *pFVar22;
  FName *pFVar23;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar24;
  TObjectPtr<UMovieSceneSection>_u_0 TVar25;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar26;
  UClass *pUVar27;
  FMovieSceneChannelProxy *pFVar28;
  UScriptStruct *pUVar29;
  FMovieSceneChannelEntry *pFVar30;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar31;
  TRecompositionResult<double> *pTVar32;
  undefined1 *puVar33;
  ForElementType<double> FVar34;
  FMovieSceneFloatChannel *pFVar35;
  ForAnyElementType FVar36;
  undefined1 auStackY_4d8 [32];
  undefined1 local_490 [16];
  TObjectPtr<UMovieSceneSection>_u_0 local_480;
  TArray<float,TSizedDefaultAllocator<32>_> local_478;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_468;
  TArray<float,TSizedDefaultAllocator<32>_> local_458;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_448;
  TArray<float,TSizedDefaultAllocator<32>_> local_438;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_428;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  FFrameTime local_3e8;
  FFrameTime local_3e0;
  FMovieSceneTracksComponentTypes *local_3d8;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_3d0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_3c0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_3b0;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_3a0;
  undefined1 local_390 [4];
  undefined4 local_38c;
  undefined1 local_388;
  undefined4 local_384;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_380;
  undefined1 local_370 [4];
  undefined4 local_36c;
  undefined1 local_368;
  undefined4 local_364;
  undefined1 local_360 [4];
  undefined4 local_35c;
  undefined1 local_358;
  undefined4 local_354;
  undefined1 local_350 [4];
  undefined4 local_34c;
  undefined1 local_348;
  undefined4 local_344;
  undefined1 local_340 [4];
  undefined4 local_33c;
  undefined1 local_338;
  undefined4 local_334;
  undefined1 local_330 [4];
  undefined4 local_32c;
  undefined1 local_328;
  undefined4 local_324;
  undefined1 local_320 [4];
  undefined4 local_31c;
  undefined1 local_318;
  undefined4 local_314;
  undefined1 local_310 [4];
  undefined4 local_30c;
  undefined1 local_308;
  undefined4 local_304;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_300;
  undefined1 local_2f0 [4];
  undefined4 local_2ec;
  undefined1 local_2e8;
  undefined4 local_2e4;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_2e0;
  undefined8 local_2d0;
  UMovieSceneDecomposerTestObject *local_2c8;
  double local_2c0;
  double local_2b8;
  TSharedPtr<UE::MovieScene::FInitialValueCache,1> local_2b0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_2a0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_1a0;
  TObjectPtr<UMovieSceneSection>_u_0 *local_188;
  TRecompositionResult<double> *pTStack_180;
  FName local_178 [2];
  initializer_list<UMovieSceneSection_*> local_168;
  FGuid local_158;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_148;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_138;
  FSequenceBuilder local_128;
  TObjectPtr<UMovieSceneSection>_u_0 local_110;
  TObjectPtr<UMovieSceneSection>_u_0 TStack_108;
  TObjectPtr<UMovieSceneSection>_u_0 local_100;
  TObjectPtr<UMovieSceneSection>_u_0 TStack_f8;
  TObjectPtr<UMovieSceneSection>_u_0 local_f0;
  TObjectPtr<UMovieSceneSection>_u_0 TStack_e8;
  TObjectPtr<UMovieSceneSection>_u_0 local_e0;
  TObjectPtr<UMovieSceneSection>_u_0 local_d8;
  TObjectPtr<UMovieSceneSection>_u_0 local_d0;
  TObjectPtr<UMovieSceneSection>_u_0 local_c8;
  TObjectPtr<UMovieSceneSection>_u_0 local_c0;
  TObjectPtr<UMovieSceneSection>_u_0 local_b8;
  TRecompositionResult<double> local_b0;
  TRecompositionResult<double> local_98;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  pUVar19 = GetTransientPackageAsObject();
  pUVar20 = NewObject<UMovieSceneDecomposerTestObject>(pUVar19);
  pFVar21 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pUVar20->FloatProperty = 20.0;
  local_3d8 = pFVar21;
  UE::MovieScene::FInitialValueCache::GetGlobalInitialValues(&local_2b0);
  if ((local_2b0.Object == (FInitialValueCache *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    uVar18 = (*pcVar7)();
    return (bool)uVar18;
  }
  this_01 = UE::MovieScene::FInitialValueCache::GetStorage<UE::MovieScene::FFloatPropertyTraits>
                      (local_2b0.Object,(FComponentTypeID)*(ushort *)&(pFVar21->Float).InitialValue)
  ;
  local_2d0 = __real_4034000000000000;
  UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::AddInitialValue
            (this_01,(UObject *)local_490,(double *)pUVar20,(ushort)&local_2d0);
  this_02 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_128);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  this_00 = (this_02->Sequence).field0_0x0.DebugPtr;
  local_2c8 = pUVar20;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  pFVar22 = UMovieSceneTestSequence::AddObjectBinding
                      (this_00,&local_158,(TObjectPtr<UObject>)&local_2c8);
  uVar8 = pFVar22->B;
  uVar9 = pFVar22->C;
  uVar10 = pFVar22->D;
  (this_02->CurrentBinding).A = pFVar22->A;
  (this_02->CurrentBinding).B = uVar8;
  (this_02->CurrentBinding).C = uVar9;
  (this_02->CurrentBinding).D = uVar10;
  pFVar23 = ::FName::FName(local_178,0xd,L"FloatProperty",FNAME_Add);
  pFVar24 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                      (this_02,&local_148,*pFVar23);
  pUVar5 = (pFVar24->Track).field0_0x0.DebugPtr;
  TVar25.DebugPtr = (UMovieSceneSection *)(**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5);
  pFVar35 = (FMovieSceneFloatChannel *)0x0;
  local_340[0] = 1;
  local_33c = 0;
  local_338 = 0;
  local_334 = 5000;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_340);
  pUVar5 = (pFVar24->Track).field0_0x0.DebugPtr;
  (*(code *)**(undefined8 **)&pUVar5->field_0x70)(&pUVar5->field_0x70,TVar25.DebugPtr);
  local_1a0.Parent = pFVar24;
  local_1a0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseIn
                      (&local_1a0,1000,Linear);
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>(pFVar26,0,(FFrameNumber)0x0,__real_42480000,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  local_330[0] = 1;
  local_32c = 0;
  local_328 = 0;
  local_324 = 5000;
  local_490._8_8_ = TVar25.DebugPtr;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_330);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,1);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_2a0.Parent = pFVar24;
  local_2a0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
    local_490._8_8_ = local_2a0.Section.field0_0x0;
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseIn
                      (&local_2a0,1000,Linear);
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>(pFVar26,0,(FFrameNumber)0x0,__real_42700000,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  local_320[0] = 1;
  local_31c = 0;
  local_318 = 0;
  local_314 = 5000;
  local_480.DebugPtr = TVar25.DebugPtr;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_320);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,2);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_290.Parent = pFVar24;
  local_290.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
    local_480 = local_290.Section.field0_0x0;
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::SetEaseIn
                      (&local_290,1000,Linear);
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>(pFVar26,0,(FFrameNumber)0x0,__real_428c0000,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  local_310[0] = 1;
  local_30c = 0;
  local_308 = 0;
  local_304 = 5000;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_310);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,2);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_300.Parent = pFVar24;
  local_300.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
  }
  (**(code **)(*(longlong *)local_300.Section.field0_0x0 + 0x2e8))
            (local_300.Section.field0_0x0.DebugPtr);
  lVar6 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_300.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_300.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_300.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 1000;
  if (lVar6 != 0) {
    pUVar27 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar4 = (int)pUVar27->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar27->_padding_)) {
      *(undefined1 *)(lVar6 + 0x30) = 0;
    }
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_300,0,(FFrameNumber)0x0,__real_41200000,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  local_2f0[0] = 1;
  local_2ec = 0;
  local_2e8 = 0;
  local_2e4 = 5000;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_2f0);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,3);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_2e0.Parent = pFVar24;
  local_2e0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
  }
  TVar16.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_2e0.Section;
  (**(code **)(*(longlong *)local_2e0.Section.field0_0x0 + 0x2e8))
            (local_2e0.Section.field0_0x0.DebugPtr);
  lVar6 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_2e0.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_2e0.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_2e0.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 1000;
  if (lVar6 != 0) {
    pUVar27 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar4 = (int)pUVar27->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar27->_padding_)) {
      *(undefined1 *)(lVar6 + 0x30) = 0;
    }
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_2e0,0,(FFrameNumber)0x0,__real_41f00000,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  local_390[0] = 1;
  local_38c = 0;
  local_388 = 0;
  local_384 = 5000;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_390);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,4);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_380.Parent = pFVar24;
  local_380.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
  }
  TVar15.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_380.Section;
  (**(code **)(*(longlong *)local_380.Section.field0_0x0 + 0x2e8))
            (local_380.Section.field0_0x0.DebugPtr);
  lVar6 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_380.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_380.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_380.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 1000;
  if (lVar6 != 0) {
    pUVar27 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar4 = (int)pUVar27->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar27->_padding_)) {
      *(undefined1 *)(lVar6 + 0x30) = 0;
    }
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKey<FMovieSceneFloatChannel,float>
                      (&local_380,0,(FFrameNumber)0x0,__real_42200000,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  local_370[0] = 1;
  local_36c = 0;
  local_368 = 0;
  local_364 = 5000;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_370);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,5);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_3d0.Parent = pFVar24;
  local_3d0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
  }
  (**(code **)(*(longlong *)local_3d0.Section.field0_0x0 + 0x2e8))
            (local_3d0.Section.field0_0x0.DebugPtr,8);
  lVar6 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_3d0.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_3d0.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_3d0.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 1000;
  if (lVar6 != 0) {
    pUVar27 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar4 = (int)pUVar27->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar27->_padding_)) {
      *(undefined1 *)(lVar6 + 0x30) = 0;
    }
  }
  local_418 = 0x42480000;
  uStack_414 = 0x425c0000;
  local_478.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_478.AllocatorInstance,2,&local_478.ArrayMax);
  *(ulonglong *)local_478.AllocatorInstance.Data = CONCAT44(uStack_414,local_418);
  local_410 = 0;
  uStack_40c = 500;
  local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_428.AllocatorInstance,2,&local_428.ArrayMax);
  *(ulonglong *)local_428.AllocatorInstance.Data = CONCAT44(uStack_40c,local_410);
  pFVar28 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)local_3d0.Section.field0_0x0);
  pUVar29 = FMovieSceneFloatChannel::StaticStruct();
  pFVar30 = FMovieSceneChannelProxy::FindEntry(pFVar28,(FName)pUVar29->_padding_);
  if (pFVar30 != (FMovieSceneChannelEntry *)0x0) {
    iVar4 = (pFVar30->Channels).ArrayNum;
    if (iVar4 < 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
    }
    else if (0 < iVar4) {
      pFVar35 = *(FMovieSceneFloatChannel **)(pFVar30->Channels).AllocatorInstance.Data;
    }
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKeys<FMovieSceneFloatChannel,float>(&local_3d0,pFVar35,&local_428,&local_478,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  pFVar35 = (FMovieSceneFloatChannel *)0x0;
  local_360[0] = 1;
  local_35c = 0;
  local_358 = 0;
  local_354 = 5000;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_360);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,6);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_3c0.Parent = pFVar24;
  local_3c0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
  }
  TVar13.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_3c0.Section;
  (**(code **)(*(longlong *)local_3c0.Section.field0_0x0 + 0x2e8))
            (local_3c0.Section.field0_0x0.DebugPtr,8);
  lVar6 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_3c0.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_3c0.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_3c0.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 1000;
  if (lVar6 != 0) {
    pUVar27 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar4 = (int)pUVar27->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar27->_padding_)) {
      *(undefined1 *)(lVar6 + 0x30) = 0;
    }
  }
  local_408 = 0x42480000;
  uStack_404 = 0x42700000;
  local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_438.AllocatorInstance,2,&local_438.ArrayMax);
  *(ulonglong *)local_438.AllocatorInstance.Data = CONCAT44(uStack_404,local_408);
  local_400 = 0;
  uStack_3fc = 500;
  local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_448.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_448.AllocatorInstance,2,&local_448.ArrayMax);
  *(ulonglong *)local_448.AllocatorInstance.Data = CONCAT44(uStack_3fc,local_400);
  pFVar28 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)local_3c0.Section.field0_0x0);
  pUVar29 = FMovieSceneFloatChannel::StaticStruct();
  pFVar30 = FMovieSceneChannelProxy::FindEntry(pFVar28,(FName)pUVar29->_padding_);
  if (pFVar30 != (FMovieSceneChannelEntry *)0x0) {
    iVar4 = (pFVar30->Channels).ArrayNum;
    if (iVar4 < 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
    }
    else if (0 < iVar4) {
      pFVar35 = *(FMovieSceneFloatChannel **)(pFVar30->Channels).AllocatorInstance.Data;
    }
  }
  pFVar26 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
            AddKeys<FMovieSceneFloatChannel,float>(&local_3c0,pFVar35,&local_448,&local_438,Auto);
  pFVar24 = pFVar26->Parent;
  TVar25.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar24->Track).field0_0x0.DebugPtr + 0x358))();
  local_350[0] = 1;
  local_34c = 0;
  local_348 = 0;
  local_344 = 5000;
  (**(code **)((TVar25.DebugPtr)->_padding_ + 0x2c8))(TVar25.DebugPtr,local_350);
  UMovieSceneSection::SetRowIndex(TVar25.DebugPtr,7);
  puVar33 = &((pFVar24->Track).field0_0x0.DebugPtr)->field_0x70;
  (*(code *)**(undefined8 **)puVar33)(puVar33,TVar25.DebugPtr);
  local_3b0.Parent = pFVar24;
  local_3b0.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar25.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar25.DebugPtr);
  }
  TVar14.field0_0x0 = (TObjectPtr<UMovieSceneSection>_u_0)local_3b0.Section;
  (**(code **)(*(longlong *)local_3b0.Section.field0_0x0 + 0x2e8))
            (local_3b0.Section.field0_0x0.DebugPtr,8);
  lVar6 = *(longlong *)
           &((FMovieSceneEasingSettings *)((longlong)local_3b0.Section.field0_0x0 + 0x78))->EaseIn;
  ((FMovieSceneEasingSettings *)((longlong)local_3b0.Section.field0_0x0 + 0x78))->bManualEaseIn =
       true;
  ((FMovieSceneEasingSettings *)((longlong)local_3b0.Section.field0_0x0 + 0x78))->
  ManualEaseInDuration = 1000;
  if (lVar6 != 0) {
    pUVar27 = Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
    iVar4 = (int)pUVar27->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar27->_padding_)) {
      *(undefined1 *)(lVar6 + 0x30) = 0;
    }
  }
  local_3f8 = 0x42480000;
  uStack_3f4 = 0x428c0000;
  local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_458.AllocatorInstance,2,&local_458.ArrayMax);
  *(ulonglong *)local_458.AllocatorInstance.Data = CONCAT44(uStack_3f4,local_3f8);
  local_3f0 = 0;
  uStack_3ec = 500;
  local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_468.AllocatorInstance,2,&local_468.ArrayMax);
  *(ulonglong *)local_468.AllocatorInstance.Data = CONCAT44(uStack_3ec,local_3f0);
  pFVar28 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)local_3b0.Section.field0_0x0);
  pUVar29 = FMovieSceneFloatChannel::StaticStruct();
  pFVar30 = FMovieSceneChannelProxy::FindEntry(pFVar28,(FName)pUVar29->_padding_);
  if (pFVar30 == (FMovieSceneChannelEntry *)0x0) {
LAB_14687c6d8:
    pFVar35 = (FMovieSceneFloatChannel *)0x0;
  }
  else {
    iVar4 = (pFVar30->Channels).ArrayNum;
    if (iVar4 < 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      goto LAB_14687c6d8;
    }
    if (iVar4 < 1) goto LAB_14687c6d8;
    pFVar35 = *(FMovieSceneFloatChannel **)(pFVar30->Channels).AllocatorInstance.Data;
  }
  UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
  AddKeys<FMovieSceneFloatChannel,float>(&local_3b0,pFVar35,&local_468,&local_458,Auto);
  if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.AllocatorInstance.Data);
  }
  if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  if (local_448.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
  if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.AllocatorInstance.Data);
  }
  if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  dVar3 = __real_4071300000000000;
  local_110 = (TObjectPtr<UMovieSceneSection>_u_0)local_490._8_8_;
  TStack_108 = local_480;
  local_2c0 = __real_4071300000000000;
  local_3e8.FrameNumber.Value = 1000;
  local_3e8.SubFrame = 0.0;
  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.ArrayNum = 6;
  local_100 = TVar16.field0_0x0;
  TStack_f8 = TVar15.field0_0x0;
  local_f0 = TVar13.field0_0x0;
  TStack_e8 = TVar14.field0_0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,6,0,&local_3a0.AllocatorInstance,6,&local_3a0.ArrayMax);
  *(TObjectPtr<UMovieSceneSection>_u_0 *)local_3a0.AllocatorInstance.Data = local_110;
  *(TObjectPtr<UMovieSceneSection>_u_0 *)(local_3a0.AllocatorInstance.Data + 8) = TStack_108;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)(local_3a0.AllocatorInstance.Data + 0x10))->DebugPtr =
       (UMovieSceneSection *)local_100;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)(local_3a0.AllocatorInstance.Data + 0x18))->DebugPtr =
       (UMovieSceneSection *)TStack_f8;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)(local_3a0.AllocatorInstance.Data + 0x20))->DebugPtr =
       (UMovieSceneSection *)local_f0;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)(local_3a0.AllocatorInstance.Data + 0x28))->DebugPtr =
       (UMovieSceneSection *)TStack_e8;
  UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (&local_b0,(UObject *)pUVar20,&local_3a0,&local_3d8->Float,&local_2c0,local_3e8);
  iVar4 = local_b0.Values.ArrayNum;
  ::FString::FString(&local_280,"Recomposed values");
  FVar36.Data = (FScriptContainerElement *)L"";
  if (local_280.Data.ArrayNum != 0) {
    FVar36.Data = local_280.Data.AllocatorInstance.Data;
  }
  bVar17 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,iVar4,6);
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (bVar17) {
    if ((local_b0.Values.ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      uVar18 = (*pcVar7)();
      return (bool)uVar18;
    }
    FVar34 = (ForElementType<double>)&local_b0;
    if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
      FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
    }
    dVar1 = *(double *)FVar34;
    ::FString::FString(&local_270,"Value to key (absolute 1)");
    dVar12 = __real_3f1a36e2e0000000;
    dVar11 = __real_404e000000000000;
    FVar36.Data = (FScriptContainerElement *)L"";
    if (local_270.Data.ArrayNum != 0) {
      FVar36.Data = local_270.Data.AllocatorInstance.Data;
    }
    bVar17 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,dVar1,
                        __real_404e000000000000,__real_3f1a36e2e0000000);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (bVar17) {
      if ((local_b0.Values.ArrayNum < 2) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
      FVar34 = (ForElementType<double>)&local_b0;
      if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
      }
      FVar34 = *(ForElementType<double> *)((longlong)FVar34 + 8);
      ::FString::FString(&local_260,"Value to key (absolute 2)");
      dVar1 = __real_4051800000000000;
      FVar36.Data = (FScriptContainerElement *)L"";
      if (local_260.Data.ArrayNum != 0) {
        FVar36.Data = local_260.Data.AllocatorInstance.Data;
      }
      bVar17 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,(double)FVar34,
                          __real_4051800000000000,dVar12);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      if (bVar17) {
        if ((local_b0.Values.ArrayNum < 3) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          uVar18 = (*pcVar7)();
          return (bool)uVar18;
        }
        FVar34 = (ForElementType<double>)&local_b0;
        if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
          FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
        }
        dVar2 = *(double *)((longlong)FVar34 + 0x10);
        ::FString::FString(&local_250,"Value to key (additive 1)");
        FVar36.Data = (FScriptContainerElement *)L"";
        if (local_250.Data.ArrayNum != 0) {
          FVar36.Data = local_250.Data.AllocatorInstance.Data;
        }
        bVar17 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,dVar2,dVar11,dVar12);
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        if (bVar17) {
          if ((local_b0.Values.ArrayNum < 4) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            uVar18 = (*pcVar7)();
            return (bool)uVar18;
          }
          FVar34 = (ForElementType<double>)&local_b0;
          if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
          }
          dVar2 = *(double *)
                   (((TRecompositionResult<double> *)((longlong)FVar34 + 0x18))->Values).
                   AllocatorInstance.InlineData;
          ::FString::FString(&local_240,"Value to key (additive 2)");
          FVar36.Data = (FScriptContainerElement *)L"";
          if (local_240.Data.ArrayNum != 0) {
            FVar36.Data = local_240.Data.AllocatorInstance.Data;
          }
          bVar17 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,dVar2,
                              __real_4054000000000000,dVar12);
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
          if (bVar17) {
            if ((local_b0.Values.ArrayNum < 5) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              uVar18 = (*pcVar7)();
              return (bool)uVar18;
            }
            FVar34 = (ForElementType<double>)&local_b0;
            if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
              FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
            }
            FVar34 = *(ForElementType<double> *)((longlong)FVar34 + 0x20);
            ::FString::FString(&local_230,"Value to key (additive from base 1)");
            FVar36.Data = (FScriptContainerElement *)L"";
            if (local_230.Data.ArrayNum != 0) {
              FVar36.Data = local_230.Data.AllocatorInstance.Data;
            }
            bVar17 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,(double)FVar34,
                                dVar1,dVar12);
            if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_230.Data.AllocatorInstance.Data);
            }
            if (bVar17) {
              if ((local_b0.Values.ArrayNum < 6) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar7 = (code *)swi(3);
                uVar18 = (*pcVar7)();
                return (bool)uVar18;
              }
              FVar34 = (ForElementType<double>)&local_b0;
              if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
                FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
              }
              dVar2 = *(double *)((longlong)FVar34 + 0x28);
              ::FString::FString(&local_220,"Value to key (additive from base 2)");
              FVar36.Data = (FScriptContainerElement *)L"";
              if (local_220.Data.ArrayNum != 0) {
                FVar36.Data = local_220.Data.AllocatorInstance.Data;
              }
              bVar17 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,dVar2,
                                  __real_4056800000000000,dVar12);
              if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_220.Data.AllocatorInstance.Data);
              }
              if (bVar17) {
                local_e0 = (TObjectPtr<UMovieSceneSection>_u_0)local_490._8_8_;
                local_d8 = local_480;
                local_188 = &local_e0;
                pTStack_180 = &local_b0;
                local_2b8 = dVar3;
                local_3e0.FrameNumber.Value = 500;
                local_3e0.SubFrame = 0.0;
                local_168._First = (UMovieSceneSection **)local_188;
                local_168._Last = (UMovieSceneSection **)pTStack_180;
                local_d0 = TVar16.field0_0x0;
                local_c8 = TVar15.field0_0x0;
                local_c0 = TVar13.field0_0x0;
                local_b8 = TVar14.field0_0x0;
                pTVar31 = TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
                          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>
                                    (&local_138,&local_168);
                pTVar32 = UE::MovieScene::Test::
                          RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
                                    (&local_98,(UObject *)pUVar20,pTVar31,&local_3d8->Float,
                                     &local_2b8,local_3e0);
                UE::MovieScene::TRecompositionResult<double>::operator=(&local_b0,pTVar32);
                if (local_98.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0)
                {
                  FMemory::Free((void *)local_98.Values.AllocatorInstance.SecondaryData);
                }
                iVar4 = local_b0.Values.ArrayNum;
                ::FString::FString(&local_210,"Recomposed values");
                FVar36.Data = (FScriptContainerElement *)L"";
                if (local_210.Data.ArrayNum != 0) {
                  FVar36.Data = local_210.Data.AllocatorInstance.Data;
                }
                bVar17 = FAutomationTestBase::TestEqual
                                   ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,iVar4,6);
                if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_210.Data.AllocatorInstance.Data);
                }
                if (bVar17) {
                  if ((local_b0.Values.ArrayNum < 1) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar7 = (code *)swi(3);
                    uVar18 = (*pcVar7)();
                    return (bool)uVar18;
                  }
                  FVar34 = (ForElementType<double>)&local_b0;
                  if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0
                     ) {
                    FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
                  }
                  dVar3 = *(double *)FVar34;
                  ::FString::FString(&local_200,"Value to key (absolute 1)");
                  FVar36.Data = (FScriptContainerElement *)L"";
                  if (local_200.Data.ArrayNum != 0) {
                    FVar36.Data = local_200.Data.AllocatorInstance.Data;
                  }
                  bVar17 = FAutomationTestBase::TestEqual
                                     ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,dVar3,
                                      dVar11,dVar12);
                  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_200.Data.AllocatorInstance.Data);
                  }
                  if (bVar17) {
                    if ((local_b0.Values.ArrayNum < 2) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar7 = (code *)swi(3);
                      uVar18 = (*pcVar7)();
                      return (bool)uVar18;
                    }
                    FVar34 = (ForElementType<double>)&local_b0;
                    if (local_b0.Values.AllocatorInstance.SecondaryData !=
                        (ForElementType<double>)0x0) {
                      FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
                    }
                    FVar34 = *(ForElementType<double> *)((longlong)FVar34 + 8);
                    ::FString::FString(&local_1f0,"Value to key (absolute 2)");
                    FVar36.Data = (FScriptContainerElement *)L"";
                    if (local_1f0.Data.ArrayNum != 0) {
                      FVar36.Data = local_1f0.Data.AllocatorInstance.Data;
                    }
                    bVar17 = FAutomationTestBase::TestEqual
                                       ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,
                                        (double)FVar34,dVar1,dVar12);
                    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
                    }
                    if (bVar17) {
                      if ((local_b0.Values.ArrayNum < 3) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar7 = (code *)swi(3);
                        uVar18 = (*pcVar7)();
                        return (bool)uVar18;
                      }
                      FVar34 = (ForElementType<double>)&local_b0;
                      if (local_b0.Values.AllocatorInstance.SecondaryData !=
                          (ForElementType<double>)0x0) {
                        FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
                      }
                      dVar3 = *(double *)((longlong)FVar34 + 0x10);
                      ::FString::FString(&local_1e0,"Value to key (additive 1)");
                      FVar36.Data = (FScriptContainerElement *)L"";
                      if (local_1e0.Data.ArrayNum != 0) {
                        FVar36.Data = local_1e0.Data.AllocatorInstance.Data;
                      }
                      bVar17 = FAutomationTestBase::TestEqual
                                         ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,dVar3,
                                          __real_405f200000000000,dVar12);
                      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                      }
                      if (bVar17) {
                        if ((local_b0.Values.ArrayNum < 4) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar7 = (code *)swi(3);
                          uVar18 = (*pcVar7)();
                          return (bool)uVar18;
                        }
                        FVar34 = (ForElementType<double>)&local_b0;
                        if (local_b0.Values.AllocatorInstance.SecondaryData !=
                            (ForElementType<double>)0x0) {
                          FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
                        }
                        dVar3 = *(double *)
                                 (((TRecompositionResult<double> *)((longlong)FVar34 + 0x18))->
                                 Values).AllocatorInstance.InlineData;
                        ::FString::FString(&local_1d0,"Value to key (additive 2)");
                        FVar36.Data = (FScriptContainerElement *)L"";
                        if (local_1d0.Data.ArrayNum != 0) {
                          FVar36.Data = local_1d0.Data.AllocatorInstance.Data;
                        }
                        bVar17 = FAutomationTestBase::TestEqual
                                           ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,dVar3
                                            ,__real_4064c00000000000,dVar12);
                        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                        }
                        if (bVar17) {
                          if ((local_b0.Values.ArrayNum < 5) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar7 = (code *)swi(3);
                            uVar18 = (*pcVar7)();
                            return (bool)uVar18;
                          }
                          FVar34 = (ForElementType<double>)&local_b0;
                          if (local_b0.Values.AllocatorInstance.SecondaryData !=
                              (ForElementType<double>)0x0) {
                            FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
                          }
                          FVar34 = *(ForElementType<double> *)((longlong)FVar34 + 0x20);
                          ::FString::FString(&local_1c0,"Value to key (additive from base 1)");
                          FVar36.Data = (FScriptContainerElement *)L"";
                          if (local_1c0.Data.ArrayNum != 0) {
                            FVar36.Data = local_1c0.Data.AllocatorInstance.Data;
                          }
                          bVar17 = FAutomationTestBase::TestEqual
                                             ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,
                                              (double)FVar34,__real_4056e00000000000,dVar12);
                          if (local_1c0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                          }
                          if (bVar17) {
                            if ((local_b0.Values.ArrayNum < 6) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                              pcVar7 = (code *)swi(3);
                              uVar18 = (*pcVar7)();
                              return (bool)uVar18;
                            }
                            FVar34 = (ForElementType<double>)&local_b0;
                            if (local_b0.Values.AllocatorInstance.SecondaryData !=
                                (ForElementType<double>)0x0) {
                              FVar34 = local_b0.Values.AllocatorInstance.SecondaryData;
                            }
                            dVar3 = *(double *)((longlong)FVar34 + 0x28);
                            ::FString::FString(&local_1b0,"Value to key (additive from base 2)");
                            FVar36.Data = (FScriptContainerElement *)L"";
                            if (local_1b0.Data.ArrayNum != 0) {
                              FVar36.Data = local_1b0.Data.AllocatorInstance.Data;
                            }
                            bVar17 = FAutomationTestBase::TestEqual
                                               ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,
                                                dVar3,__real_4060a00000000000,dVar12);
                            if (local_1b0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                            }
                            if (bVar17) {
                              bVar17 = true;
                              goto LAB_14687d278;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar17 = false;
LAB_14687d278:
  if (local_b0.Values.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
    FMemory::Free((void *)local_b0.Values.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b0.SharedReferenceCount.ReferenceController);
  return bVar17;
}

// GetBeautifiedTestName @ 14687d320

FString * __thiscall
FMovieSceneDecomposerComplexTest::GetBeautifiedTestName
          (FMovieSceneDecomposerComplexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Decomposer.Complex");
  return __return_storage_ptr__;
}

