// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// GetTestFlags @ 14687e0d0

EAutomationTestFlags __thiscall
FMovieScenePartialEvaluationTest::GetTestFlags(FMovieScenePartialEvaluationTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14687e0e0

bool __thiscall
FMovieScenePartialEvaluationTest::IsStressTest(FMovieScenePartialEvaluationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14687e0f0

uint __thiscall
FMovieScenePartialEvaluationTest::GetRequiredDeviceNum(FMovieScenePartialEvaluationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14687e100

FString * __thiscall
FMovieScenePartialEvaluationTest::GetTestSourceFileName
          (FMovieScenePartialEvaluationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieScenePartialEvaluationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14687e130

int __thiscall
FMovieScenePartialEvaluationTest::GetTestSourceFileLine(FMovieScenePartialEvaluationTest *this)

{
  return 0x1b;
}

// GetTests @ 14687e140

/* WARNING: Removing unreachable block (ram,0x00014687e22d) */
/* WARNING: Removing unreachable block (ram,0x00014687e2f8) */

void __thiscall
FMovieScenePartialEvaluationTest::GetTests
          (FMovieScenePartialEvaluationTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.PartialEvaluation");
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

// RunTest @ 14687e320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FMovieScenePartialEvaluationTest::RunTest(FMovieScenePartialEvaluationTest *this,FString *param_1)

{
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TVar1;
  FInstanceHandle FVar2;
  ERunnerFlushState EVar3;
  int iVar4;
  UMovieSceneSubTrack *this_00;
  FObjectPtr_u_0 FVar5;
  UMovieSceneTestSequence *pUVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  UEngine *pUVar12;
  FMovieSceneEntitySystemRunner *this_01;
  bool bVar13;
  undefined1 uVar14;
  FRootInstanceHandle FVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  UObjectBase *pUVar18;
  TObjectPtr<UMovieSceneTestSequence> TVar19;
  FSequenceBuilder *pFVar20;
  FSequenceTrackBuilder<UMovieSceneSubTrack> *pFVar21;
  FObjectPtr_u_0 FVar22;
  UMovieSceneSequence *pUVar23;
  UMovieSceneCompiledDataManager *this_02;
  UPackage *pUVar24;
  UMovieSceneEntitySystemLinker *pUVar25;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar26;
  undefined4 extraout_var;
  longlong lVar27;
  FMovieSceneEvaluationRange *pFVar28;
  FBuiltInComponentTypes *pFVar29;
  FOutputDeviceRedirector *pFVar30;
  FGuid *pFVar31;
  FName *pFVar32;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar33;
  TObjectPtr<UMovieSceneSection>_u_0 TVar34;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar35;
  FString *pFVar36;
  longlong *plVar37;
  wchar_t *pwVar38;
  FObjectPtr_u_0 FVar39;
  wchar_t *pwVar40;
  FObjectPtr_u_0 FVar41;
  FMovieScenePartialEvaluationTest *pFVar42;
  undefined1 auStack_988 [32];
  FObjectPtr_u_0 local_958;
  UMovieSceneEntitySystemLinker *local_950;
  FComponentTypeID local_948;
  FComponentTypeID local_946;
  FComponentTypeID local_944;
  FComponentTypeID local_942;
  FWeakObjectPtr local_940;
  FObjectPtr_u_0 *local_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  FSequenceTrackBuilder<UMovieSceneSubTrack> *local_928;
  FObjectPtr_u_0 local_920;
  FSequenceTrackBuilder<UMovieSceneSubTrack> *local_918;
  FObjectPtr_u_0 local_910;
  FWeakObjectPtr local_908;
  UObjectBase **local_900;
  FWeakObjectPtr local_8f8;
  FMovieScenePartialEvaluationTest *local_8f0;
  UObjectBase *local_8e8;
  FMovieSceneEntitySystemRunner *local_8e0;
  TReferenceControllerBase<1> *local_8d8;
  FInstanceRegistry *local_8d0;
  undefined8 local_8c8;
  undefined1 local_8c0;
  undefined4 local_8bc;
  undefined1 local_8b8;
  undefined4 local_8b4;
  undefined1 local_8b0 [4];
  undefined4 local_8ac;
  undefined1 local_8a8;
  undefined4 local_8a4;
  undefined1 local_8a0 [4];
  undefined4 local_89c;
  undefined1 local_898;
  undefined4 local_894;
  undefined1 local_890;
  undefined4 local_88c;
  undefined1 local_888;
  undefined4 local_884;
  UMovieSceneTestSequence *local_880;
  FEntityManager *local_878;
  undefined1 local_870 [56];
  int local_838;
  wchar_t *local_828;
  TStatIdData *pTStack_820;
  byte local_818;
  undefined7 uStack_817;
  TObjectPtr<UMovieSceneCompiledData>_u_0 aTStack_810 [2];
  wchar_t *local_800;
  TStatIdData *pTStack_7f8;
  byte local_7f0;
  undefined7 uStack_7ef;
  Type TStack_7e8;
  uint uStack_7e4;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined4 local_7c0;
  FObjectPtr_u_0 *local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  FObjectPtr_u_0 *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  FObjectPtr_u_0 local_798;
  FObjectPtr_u_0 local_790;
  FObjectPtr_u_0 local_788;
  FObjectPtr_u_0 local_780;
  FComponentTypeID *local_778;
  FComponentTypeID *pFStack_770;
  FString local_768;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_758;
  FComponentTypeID *local_748;
  FComponentTypeID *pFStack_740;
  FString local_738;
  FString local_728;
  <lambda_5> local_718;
  <lambda_6> local_700;
  FMovieSceneContext local_6e8;
  FMovieScenePartialEvaluationTest *local_668;
  FMovieSceneEntitySystemRunner **local_660;
  UMovieSceneEntitySystemLinker **local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined4 local_630;
  FInstanceRegistry *local_628;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
  local_618;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
  local_5f0;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_5c8;
  TArrayView<UMovieSceneSubSection_*_const,int> local_5b8;
  TArrayView<UMovieSceneSubSection_*_const,int> local_5a8;
  TArrayView<UMovieSceneSubSection_*_const,int> local_598;
  TArrayView<UMovieSceneSubSection_*_const,int> local_588;
  initializer_list<UE::MovieScene::FComponentTypeID> local_578;
  FString local_568;
  initializer_list<UE::MovieScene::FComponentTypeID> local_558;
  FName local_548 [3];
  FSequenceTrackBuilder<UMovieSceneSubTrack> local_530;
  FGuid local_520;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FSequenceBuilder local_4d0;
  FSequenceBuilder local_4b8;
  FMovieSceneEvaluationRange local_4a0;
  undefined1 local_478 [128];
  undefined1 local_3f8 [128];
  IMovieScenePlayer local_378;
  FMovieSceneRootEvaluationTemplateInstance local_188;
  UMovieSceneEntitySystemLinker *local_168;
  FEntityComponentFilter local_158;
  FEntityComponentFilter local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_988;
  local_8f0 = this;
  pUVar16 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar16,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar17 = UMovieScenePartialEvaluationTestObject::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_478,pUVar17);
  local_478._8_8_ = pUVar16;
  pUVar18 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_478);
  if (local_478._64_8_ != 0) {
    plVar37 = (longlong *)(local_478 + 0x50);
    if ((longlong *)local_478._104_8_ != (longlong *)0x0) {
      plVar37 = (longlong *)local_478._104_8_;
    }
    (**(code **)(*plVar37 + 0x10))();
  }
  FVar41.Handle = (UObject *)0x0;
  local_8e8 = (UObjectBase *)0x0;
  if (pUVar18 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(pUVar18);
    local_8e8 = pUVar18;
  }
  local_900 = &local_8e8;
  TVar19 = `FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_1>::operator()(&local_900);
  local_870._8_8_ = *(undefined8 *)TVar19.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_870._8_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_870._8_8_);
  }
  local_940.ObjectIndex = 0;
  local_940.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_870._8_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_870._8_8_);
  }
  FWeakObjectPtr::operator=(&local_940,(FObjectPtr)((longlong)local_870 + 8));
  TVar19 = `FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_1>::operator()(&local_900);
  local_870._16_8_ = *(undefined8 *)TVar19.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_870._16_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_870._16_8_);
  }
  local_908.ObjectIndex = 0;
  local_908.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_870._16_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_870._16_8_);
  }
  FWeakObjectPtr::operator=(&local_908,(FObjectPtr)((longlong)local_870 + 0x10));
  pFVar20 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_4d0);
  pFVar21 = UE::MovieScene::Test::FSequenceBuilder::AddRootTrack<UMovieSceneSubTrack>
                      (pFVar20,&local_530);
  this_00 = (pFVar21->Track).field0_0x0.DebugPtr;
  FVar22.Handle = (UObject *)(**(code **)(this_00->_padding_ + 0x358))(this_00);
  local_8c0 = 1;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 5000;
  (**(code **)(*(longlong *)FVar22.Handle + 0x2c8))(FVar22.Handle);
  UMovieSceneSection::SetRowIndex((UMovieSceneSection *)FVar22.Handle,0);
  plVar37 = &((pFVar21->Track).field0_0x0.DebugPtr)->_padding_;
  (**(code **)*plVar37)(plVar37,FVar22.Handle);
  local_928 = pFVar21;
  local_920.Handle = FVar22.Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar22.Handle);
  }
  local_870._24_4_ = local_940.ObjectIndex;
  local_870._28_4_ = local_940.ObjectSerialNumber;
  if ((UMovieSceneSubSection *)local_920.Handle == (UMovieSceneSubSection *)0x0) {
LAB_14687e55a:
    FVar22.Handle = FVar41.Handle;
  }
  else {
    pUVar17 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_920,pUVar17);
    FVar22 = local_920;
    if (!bVar13) goto LAB_14687e55a;
  }
  pUVar23 = (UMovieSceneSequence *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_870 + 0x18));
  UMovieSceneSubSection::SetSequence((UMovieSceneSubSection *)FVar22.Handle,pUVar23);
  if ((UMovieSceneSubSection *)local_920.Handle == (UMovieSceneSubSection *)0x0) {
LAB_14687e593:
    local_958.Handle = FVar41.Handle;
  }
  else {
    pUVar17 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_920,pUVar17);
    local_958 = local_920;
    if (!bVar13) goto LAB_14687e593;
  }
  pFVar21 = local_928;
  FVar22.Handle =
       (UObject *)(**(code **)(((local_928->Track).field0_0x0.DebugPtr)->_padding_ + 0x358))();
  local_8b0[0] = 1;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 5000;
  (**(code **)(*(longlong *)FVar22.Handle + 0x2c8))(FVar22.Handle,local_8b0);
  UMovieSceneSection::SetRowIndex((UMovieSceneSection *)FVar22.Handle,1);
  plVar37 = &((pFVar21->Track).field0_0x0.DebugPtr)->_padding_;
  (**(code **)*plVar37)(plVar37,FVar22.Handle);
  local_918 = pFVar21;
  local_910.Handle = FVar22.Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar22.Handle);
  }
  local_870._32_4_ = local_908.ObjectIndex;
  local_870._36_4_ = local_908.ObjectSerialNumber;
  if ((UMovieSceneSubSection *)local_910.Handle == (UMovieSceneSubSection *)0x0) {
LAB_14687e63c:
    FVar22.Handle = FVar41.Handle;
  }
  else {
    pUVar17 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_910,pUVar17);
    FVar22 = local_910;
    if (!bVar13) goto LAB_14687e63c;
  }
  pUVar23 = (UMovieSceneSequence *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_870 + 0x20));
  UMovieSceneSubSection::SetSequence((UMovieSceneSubSection *)FVar22.Handle,pUVar23);
  if ((UMovieSceneSubSection *)local_910.Handle != (UMovieSceneSubSection *)0x0) {
    pUVar17 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
    bVar13 = FObjectPtr::IsA((FObjectPtr *)&local_910,pUVar17);
    FVar22 = local_910;
    if (bVar13) goto LAB_14687e678;
  }
  FVar22.Handle = FVar41.Handle;
LAB_14687e678:
  FVar5 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)local_918->Parent)->Handle;
  FVar39.Handle = FVar41.Handle;
  if ((UMovieSceneSubSection *)FVar5.Handle != (UMovieSceneSubSection *)0x0) {
    UObjectBase::AddRef((UObjectBase *)FVar5.Handle);
    FVar39 = FVar5;
  }
  this_02 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  pUVar24 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar24,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar17 = Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_3f8,pUVar17);
  local_3f8._8_8_ = pUVar24;
  pUVar25 = (UMovieSceneEntitySystemLinker *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3f8);
  if (local_3f8._64_8_ != 0) {
    plVar37 = (longlong *)(local_3f8 + 0x50);
    if ((longlong *)local_3f8._104_8_ != (longlong *)0x0) {
      plVar37 = (longlong *)local_3f8._104_8_;
    }
    (**(code **)(*plVar37 + 0x10))();
  }
  local_950 = (UMovieSceneEntitySystemLinker *)0x0;
  pwVar38 = L"";
  if (pUVar25 == (UMovieSceneEntitySystemLinker *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
  }
  else {
    UObjectBase::AddRef((UObjectBase *)pUVar25);
    local_950 = pUVar25;
  }
  pTVar26 = UMovieSceneEntitySystemLinker::GetRunner(local_950,&local_5c8);
  local_8e0 = pTVar26->Object;
  local_8d8 = (pTVar26->SharedReferenceCount).ReferenceController;
  if (local_8d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_8d8->SharedReferenceCount = (atomic<int>)((int)local_8d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8.SharedReferenceCount.ReferenceController);
  if ((local_950 == (UMovieSceneEntitySystemLinker *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  local_878 = UE::MovieScene::GEntityManagerForDebuggingVisualizers;
  UE::MovieScene::GEntityManagerForDebuggingVisualizers = &local_950->EntityManager;
  IMovieScenePlayer::IMovieScenePlayer(&local_378);
  local_378._padding_ =
       (longlong)&`FMovieScenePartialEvaluationTest::RunTest'::`2'::FLocalPlayer::_vftable_;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance(&local_188);
  local_168 = local_950;
  UMovieSceneCompiledDataManager::Compile(this_02,(UMovieSceneSequence *)local_870);
  if (((UMovieSceneSubSection *)FVar39.Handle == (UMovieSceneSubSection *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x61,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  FMovieSceneRootEvaluationTemplateInstance::Initialize
            (&local_188,(UMovieSceneSequence *)FVar39.Handle,&local_378,this_02);
  local_7e0 = ___xmm_00000020000000100000000400000001;
  uStack_7d8 = _UNK_15135c108;
  local_7c0 = 0x400;
  local_7d0 = ___xmm_00000200000001000000008000000040;
  uStack_7c8 = _UNK_15135c118;
  if ((local_8e0 == (FMovieSceneEntitySystemRunner *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  this_01 = local_8e0;
  FVar15 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle(&local_188);
  FVar2 = *(FInstanceHandle *)CONCAT44(extraout_var,FVar15);
  if (((UMovieSceneSubSection *)FVar39.Handle == (UMovieSceneSubSection *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  lVar27 = (**(code **)(*(longlong *)FVar39.Handle + 0x2f8))(FVar39.Handle);
  local_8c8 = 0;
  pFVar28 = FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                      (&local_4a0,(FFrameTime)0x0,*(FFrameRate *)(lVar27 + 0x138));
  local_6e8._padding_._0_1_ = (pFVar28->EvaluationRange).LowerBound.Type;
  local_6e8._padding_._1_3_ = *(undefined3 *)&(pFVar28->EvaluationRange).LowerBound.field_0x1;
  local_6e8._padding_._4_4_ = (pFVar28->EvaluationRange).LowerBound.Value.FrameNumber;
  local_6e8._padding_ = *(longlong *)&(pFVar28->EvaluationRange).LowerBound.Value.SubFrame;
  local_6e8._padding_ = *(longlong *)&(pFVar28->EvaluationRange).UpperBound.Value;
  local_6e8._padding_ = *(longlong *)&pFVar28->CurrentFrameRate;
  local_6e8._padding_._0_4_ = pFVar28->Direction;
  local_6e8._padding_._4_4_ = pFVar28->TimeOverride;
  local_6e8.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
  local_6e8.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
  local_6e8.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
  local_6e8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_6e8.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
  local_6e8.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_6e8.RootToSequenceWarpCounter);
  local_6e8.bHasPostRollStartTime = false;
  local_6e8.bHasPreRollEndTime = false;
  local_6e8.bSectionPostRoll = false;
  local_6e8.bSectionPreRoll = false;
  local_6e8.bSilent = false;
  local_6e8.bHasLooped = false;
  local_6e8.bHasJumped = false;
  local_6e8.Status = Playing;
  local_6e8.PrePostRollStartEndTime.Value = -0x80000000;
  local_6e8.HierarchicalBias = 0;
  FMovieSceneEntitySystemRunner::QueueUpdate(this_01,&local_6e8,FVar2,None);
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_6e8.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_6e8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_6e8.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_6e8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_6e8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  if ((local_950 == (UMovieSceneEntitySystemLinker *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  pUVar25 = local_950;
  if (((local_950->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  pFVar42 = local_8f0;
  FVar5 = local_958;
  local_8d0 = (pUVar25->InstanceRegistry).Ptr;
  local_660 = &local_8e0;
  local_658 = &local_950;
  local_630 = local_7c0;
  local_668 = local_8f0;
  local_650 = local_7e0;
  uStack_648 = uStack_7d8;
  local_640 = local_7d0;
  uStack_638 = uStack_7c8;
  local_628 = local_8d0;
  bVar13 = UMovieSceneSection::TryModify((UMovieSceneSection *)local_958.Handle,true);
  if (bVar13) {
    *(uint *)&FVar5.Handle[5].field_0x10 = (uint)*(longlong *)&FVar5.Handle[5].field_0x10 | 1;
  }
  local_7b8 = &local_958;
  uStack_7b0 = 1;
  local_5b8._12_4_ = uStack_7ac;
  local_5b8.ArrayNum = 1;
  local_5b8.DataPtr = (UMovieSceneSubSection **)local_7b8;
  `FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_4>::operator()(&local_668,&local_5b8);
  FVar5 = local_958;
  bVar13 = UMovieSceneSection::TryModify((UMovieSceneSection *)local_958.Handle,true);
  if (bVar13) {
    *(uint *)&FVar5.Handle[5].field_0x10 =
         (uint)*(longlong *)&FVar5.Handle[5].field_0x10 & 0xfffffffe;
  }
  local_7a8 = &local_958;
  uStack_7a0 = 1;
  local_5a8._12_4_ = uStack_79c;
  local_5a8.ArrayNum = 1;
  local_5a8.DataPtr = (UMovieSceneSubSection **)local_7a8;
  `FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_4>::operator()(&local_668,&local_5a8);
  FVar5 = local_958;
  bVar13 = UMovieSceneSection::TryModify((UMovieSceneSection *)local_958.Handle,true);
  if (bVar13) {
    *(uint *)&FVar5.Handle[5].field_0x10 = (uint)*(longlong *)&FVar5.Handle[5].field_0x10 | 1;
  }
  bVar13 = UMovieSceneSection::TryModify((UMovieSceneSection *)FVar22.Handle,true);
  if (bVar13) {
    *(uint *)&FVar22.Handle[5].field_0x10 =
         (uint)*(longlong *)&FVar22.Handle[5].field_0x10 & 0xfffffffe;
  }
  local_798.Handle = local_958.Handle;
  local_938 = &local_798;
  uStack_930 = 2;
  local_598._12_4_ = uStack_92c;
  local_598.ArrayNum = 2;
  local_790 = FVar22;
  local_598.DataPtr = (UMovieSceneSubSection **)local_938;
  `FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_4>::operator()(&local_668,&local_598);
  FVar5 = local_958;
  bVar13 = UMovieSceneSection::TryModify((UMovieSceneSection *)local_958.Handle,true);
  if (bVar13) {
    *(uint *)&FVar5.Handle[5].field_0x10 =
         (uint)*(longlong *)&FVar5.Handle[5].field_0x10 & 0xfffffffe;
  }
  bVar13 = UMovieSceneSection::TryModify((UMovieSceneSection *)FVar22.Handle,true);
  if (bVar13) {
    *(uint *)&FVar22.Handle[5].field_0x10 =
         (uint)*(longlong *)&FVar22.Handle[5].field_0x10 & 0xfffffffe;
  }
  local_788.Handle = local_958.Handle;
  local_938 = &local_788;
  uStack_930 = 2;
  local_588._12_4_ = uStack_92c;
  local_588.ArrayNum = 2;
  local_780 = FVar22;
  local_588.DataPtr = (UMovieSceneSubSection **)local_938;
  `FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_4>::operator()(&local_668,&local_588);
  fVar11 = __real_42c80000;
  local_938 = (FObjectPtr_u_0 *)&local_7e0;
  while( true ) {
    EVar3 = *(ERunnerFlushState *)local_938;
    ::FString::PrintfImpl(&local_728,L"GC: Instance Handle should be valid before Flush State %d");
    ::FString::PrintfImpl(&local_738,L"GC: Instance Handle should be valid after Flush State %d");
    local_7f0 = local_7f0 & 0xe0;
    local_800 = (wchar_t *)0x0;
    pTStack_7f8 = &TStatId::TStatId_NAME_None;
    TStack_7e8 = AnyHiPriThreadHiPriTask;
    uStack_7e4 = uStack_7e4 & 0xffffff00;
    pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
    TVar1 = pFVar29->InstanceHandle;
    local_618.CommonParams.TaskParams._17_7_ = uStack_7ef;
    local_618.CommonParams.TaskParams._16_1_ = local_7f0;
    local_618.CommonParams._28_4_ = uStack_7e4;
    local_618.CommonParams.DesiredThread = TStack_7e8;
    local_718.InstanceRegistry = local_8d0;
    local_718.BeforeString = &local_728;
    local_618.CommonParams.TaskParams.DebugName = local_800;
    local_618.CommonParams.TaskParams.StatId.StatIdPtr = pTStack_7f8;
    local_718.__this = pFVar42;
    local_618.Accessors =
         (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)TVar1;
    if ((local_950 == (UMovieSceneEntitySystemLinker *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    pUVar25 = local_950;
    local_158.AllMask.Bits.NumBits = 0;
    local_158.NoneMask.Bits.NumBits = 0;
    local_158.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ComplexMasks.ArrayNum = 0;
    local_158.ComplexMasks.ArrayMax = 0;
    local_158.AllMask.Bits.MaxBits = 0x180;
    local_158.NoneMask.Bits.MaxBits = 0x180;
    if ((TVar1 == (TComponentTypeID<UE::MovieScene::FInstanceHandle>)0xffff) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("In->ComponentType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                            ,0x1a8,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    local_778 = &local_948;
    pFStack_770 = &local_946;
    local_948.Value = (ushort)TVar1;
    local_578._First = local_778;
    local_578._Last = pFStack_770;
    UE::MovieScene::FComponentMask::SetAll(&local_158.AllMask,&local_578);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
    ::Iterate_PerEntityImpl<_FMovieScenePartialEvaluationTest::RunTest_::__l4::<lambda_5>_&>
              (&local_618,&pUVar25->EntityManager,&local_158,&local_718);
    if (local_158.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.ComplexMasks.AllocatorInstance.Data);
    }
    if ((local_8e0 == (FMovieSceneEntitySystemRunner *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    FMovieSceneEntitySystemRunner::Flush(local_8e0,0.0,EVar3);
    (**(code **)(this_00->_padding_ + 8))(&this_00->_padding_,local_958.Handle);
    UMovieSceneSignedObject::MarkAsChanged((UMovieSceneSignedObject *)this_00);
    UMovieSceneTrack::GetEvaluationField((UMovieSceneTrack *)this_00);
    local_958.Handle = (UObject *)0x0;
    CollectGarbage(RF_NoFlags,true);
    pUVar16 = FWeakObjectPtr::Get(&local_940);
    pFVar42 = local_8f0;
    if (pUVar16 != (UObject *)0x0) {
      pcVar7 = *(code **)(*(longlong *)local_8f0 + 0x28);
      ::FString::FString(&local_768,L"Sub Sequence should have been garbage collected but was not!")
      ;
      (*pcVar7)(pFVar42,&local_768);
      if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.Data.AllocatorInstance.Data);
      }
      pUVar12 = GEngine;
      pcVar7 = *(code **)(GEngine->_padding_ + 8);
      pFVar30 = GetGlobalLogSingleton();
      pUVar16 = FWeakObjectPtr::Get(&local_940);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar16,&local_568,(UObject *)0x0);
      ::FString::PrintfImpl((FString *)(local_870 + 0x30),L"obj refs name=\"%s\"");
      pwVar40 = L"";
      if (local_838 != 0) {
        pwVar40 = (wchar_t *)local_870._48_8_;
      }
      (*pcVar7)(&pUVar12->_padding_,0,pwVar40,pFVar30);
      if ((wchar_t *)local_870._48_8_ != (wchar_t *)0x0) {
        FMemory::Free((void *)local_870._48_8_);
      }
      if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data.AllocatorInstance.Data);
      }
    }
    pFVar20 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_4b8);
    pUVar18 = *local_900;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObjectBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    pUVar6 = (pFVar20->Sequence).field0_0x0.DebugPtr;
    local_870._40_8_ = pUVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObjectBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    pFVar31 = UMovieSceneTestSequence::AddObjectBinding
                        (pUVar6,&local_520,(TObjectPtr<UObject>)((longlong)local_870 + 0x28));
    uVar8 = pFVar31->B;
    uVar9 = pFVar31->C;
    uVar10 = pFVar31->D;
    (pFVar20->CurrentBinding).A = pFVar31->A;
    (pFVar20->CurrentBinding).B = uVar8;
    (pFVar20->CurrentBinding).C = uVar9;
    (pFVar20->CurrentBinding).D = uVar10;
    pFVar32 = ::FName::FName(local_548,0xd,L"FloatProperty",FNAME_Add);
    pFVar33 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                        (pFVar20,&local_510,*pFVar32);
    TVar34.DebugPtr =
         (UMovieSceneSection *)
         (**(code **)(*(longlong *)(pFVar33->Track).field0_0x0.DebugPtr + 0x358))();
    local_8a0[0] = 1;
    local_89c = 0;
    local_898 = 0;
    local_894 = 5000;
    (**(code **)((TVar34.DebugPtr)->_padding_ + 0x2c8))(TVar34.DebugPtr,local_8a0);
    (*(code *)**(undefined8 **)&((pFVar33->Track).field0_0x0.DebugPtr)->field_0x70)();
    local_758.Parent = pFVar33;
    local_758.Section.field0_0x0 =
         (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar34.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar34.DebugPtr);
    }
    pFVar35 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
              AddKey<FMovieSceneFloatChannel,float>(&local_758,0,(FFrameNumber)0x0,fVar11,Auto);
    pUVar6 = (pFVar35->Parent->Parent->Sequence).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UMovieSceneTestSequence *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UMovieSceneTestSequence *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_8f8.ObjectIndex = 0;
    local_8f8.ObjectSerialNumber = 0;
    local_880 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMovieSceneTestSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_8f8,(FObjectPtr)&local_880);
    local_940 = local_8f8;
    FVar22.Handle = (UObject *)(**(code **)(this_00->_padding_ + 0x358))(this_00);
    if ((UMovieSceneSubSection *)FVar22.Handle == (UMovieSceneSubSection *)0x0) {
      pFVar36 = GetTypeName<UMovieSceneSubSection>(&local_4f0);
      if ((pFVar36->Data).ArrayNum != 0) {
        pwVar38 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar38);
    }
    pUVar17 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
    iVar4 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)&(FVar22.Handle)->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(FVar22.Handle)->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar17->_padding_)) {
      pFVar36 = GetTypeName<UMovieSceneSubSection>(&local_500);
      if ((pFVar36->Data).ArrayNum == 0) {
        pwVar40 = L"";
      }
      else {
        pwVar40 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
      }
      pFVar36 = GetFullNameForCastLogError<UMovieSceneSection>
                          (&local_4e0,(UMovieSceneSection *)FVar22.Handle);
      if ((pFVar36->Data).ArrayNum != 0) {
        pwVar38 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar38,pwVar40);
    }
    local_890 = 1;
    local_88c = 0;
    local_888 = 0;
    local_884 = 5000;
    local_958.Handle = FVar22.Handle;
    (**(code **)(*(longlong *)FVar22.Handle + 0x2c8))(FVar22.Handle);
    UMovieSceneSection::SetRowIndex((UMovieSceneSection *)local_958.Handle,0);
    pUVar23 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&local_940);
    UMovieSceneSubSection::SetSequence((UMovieSceneSubSection *)local_958.Handle,pUVar23);
    (**(code **)this_00->_padding_)(&this_00->_padding_,local_958.Handle);
    local_818 = local_818 & 0xe0;
    pTStack_820 = &TStatId::TStatId_NAME_None;
    local_828 = (wchar_t *)0x0;
    aTStack_810[0]._0_4_ = 0x6ff;
    aTStack_810[0]._4_4_ = aTStack_810[0]._4_4_ & 0xffffff00;
    pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar42 = local_8f0;
    TVar1 = pFVar29->InstanceHandle;
    local_5f0.CommonParams.TaskParams._17_7_ = uStack_817;
    local_5f0.CommonParams.TaskParams._16_1_ = local_818;
    local_5f0.CommonParams._28_4_ = aTStack_810[0]._4_4_;
    local_5f0.CommonParams.DesiredThread = aTStack_810[0]._0_4_;
    local_700.InstanceRegistry = local_8d0;
    local_700.AfterString = &local_738;
    local_5f0.CommonParams.TaskParams.DebugName = local_828;
    local_5f0.CommonParams.TaskParams.StatId.StatIdPtr = pTStack_820;
    local_700.__this = local_8f0;
    local_5f0.Accessors =
         (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)TVar1;
    if ((local_950 == (UMovieSceneEntitySystemLinker *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar13)) break;
    pUVar25 = local_950;
    local_d8.AllMask.Bits.NumBits = 0;
    local_d8.NoneMask.Bits.NumBits = 0;
    local_d8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ComplexMasks.ArrayNum = 0;
    local_d8.ComplexMasks.ArrayMax = 0;
    local_d8.AllMask.Bits.MaxBits = 0x180;
    local_d8.NoneMask.Bits.MaxBits = 0x180;
    if ((TVar1 == (TComponentTypeID<UE::MovieScene::FInstanceHandle>)0xffff) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("In->ComponentType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                            ,0x1a8,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    local_748 = &local_944;
    pFStack_740 = &local_942;
    local_944.Value = (ushort)TVar1;
    local_558._First = local_748;
    local_558._Last = pFStack_740;
    UE::MovieScene::FComponentMask::SetAll(&local_d8.AllMask,&local_558);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
    ::Iterate_PerEntityImpl<_FMovieScenePartialEvaluationTest::RunTest_::__l4::<lambda_6>_&>
              (&local_5f0,&pUVar25->EntityManager,&local_d8,&local_700);
    if (local_d8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
    local_938 = (FObjectPtr_u_0 *)((longlong)local_938 + 4);
    FVar41._0_4_ = FVar41._0_4_ + 1;
    FVar41._4_4_ = 0;
    if (8 < FVar41._0_4_) {
      FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
                (&local_188);
      IMovieScenePlayer::~IMovieScenePlayer(&local_378);
      UE::MovieScene::GEntityManagerForDebuggingVisualizers = local_878;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8d8)
      ;
      if (local_950 != (UMovieSceneEntitySystemLinker *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_950);
        local_950 = (UMovieSceneEntitySystemLinker *)0x0;
      }
      if ((UMovieSceneSubSection *)FVar39.Handle != (UMovieSceneSubSection *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(FVar39.Handle);
      }
      if (local_8e8 != (UObjectBase *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_8e8);
      }
      return true;
    }
  }
  pcVar7 = (code *)swi(3);
  uVar14 = (*pcVar7)();
  return (bool)uVar14;
}

// GetBeautifiedTestName @ 14687f3f0

FString * __thiscall
FMovieScenePartialEvaluationTest::GetBeautifiedTestName
          (FMovieScenePartialEvaluationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.PartialEvaluation");
  return __return_storage_ptr__;
}

// operator() @ 1468a1830

TObjectPtr<UMovieSceneTestSequence> __thiscall
`FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_1>::operator()(void *this)

{
  UMovieSceneTestSequence *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FSequenceBuilder *this_00;
  FGuid *pFVar5;
  FName *pFVar6;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar7;
  TObjectPtr<UMovieSceneSection>_u_0 TVar8;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> *pFVar9;
  TObjectPtr<UMovieSceneTestSequence>_u_0 in_RDX;
  FName local_res8;
  FGuid local_58;
  FSequenceSectionBuilder<UMovieSceneFloatTrack> local_48;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> local_38;
  FSequenceBuilder local_28;
  
  this_00 = UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(&local_28);
  local_res8 = **(FName **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar1 = (this_00->Sequence).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar5 = UMovieSceneTestSequence::AddObjectBinding
                     (pUVar1,&local_58,(TObjectPtr<UObject>)&local_res8);
  uVar2 = pFVar5->B;
  uVar3 = pFVar5->C;
  uVar4 = pFVar5->D;
  (this_00->CurrentBinding).A = pFVar5->A;
  (this_00->CurrentBinding).B = uVar2;
  (this_00->CurrentBinding).C = uVar3;
  (this_00->CurrentBinding).D = uVar4;
  pFVar6 = ::FName::FName(&local_res8,0xd,L"FloatProperty",FNAME_Add);
  pFVar7 = UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
                     (this_00,&local_38,*pFVar6);
  TVar8.DebugPtr =
       (UMovieSceneSection *)
       (**(code **)(*(longlong *)(pFVar7->Track).field0_0x0.DebugPtr + 0x358))();
  local_58.A._0_1_ = 1;
  local_58.B = 0;
  local_58.C._0_1_ = 0;
  local_58.D = 5000;
  (**(code **)((TVar8.DebugPtr)->_padding_ + 0x2c8))(TVar8.DebugPtr,&local_58);
  (*(code *)**(undefined8 **)&((pFVar7->Track).field0_0x0.DebugPtr)->field_0x70)();
  local_48.Parent = pFVar7;
  local_48.Section.field0_0x0 =
       (TObjectPtr<UMovieSceneSection>_u_0)(TObjectPtr<UMovieSceneSection>_u_0)TVar8.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
  }
  pFVar9 = UE::MovieScene::Test::FSequenceSectionBuilder<UMovieSceneFloatTrack>::
           AddKey<FMovieSceneFloatChannel,float>(&local_48,0,(FFrameNumber)0x0,__real_42c80000,Auto)
  ;
  pUVar1 = (pFVar9->Parent->Parent->Sequence).field0_0x0.DebugPtr;
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMovieSceneTestSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TObjectPtr<UMovieSceneTestSequence>)in_RDX;
}

// operator() @ 1468a19c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FMovieScenePartialEvaluationTest::RunTest'::__l2::<lambda_4>::operator()
          (void *this,TArrayView<UMovieSceneSubSection_*_const,int> *param_1)

{
  UMovieSceneSubSection **ppUVar1;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TVar2;
  ERunnerFlushState EVar3;
  longlong *plVar4;
  longlong lVar5;
  UMovieSceneSubSection *this_00;
  code *pcVar6;
  TArrayView<UMovieSceneSubSection_*_const,int> *pTVar7;
  bool bVar8;
  FBuiltInComponentTypes *pFVar9;
  ERunnerFlushState *pEVar10;
  UMovieSceneSubSection **ppUVar11;
  uint uVar12;
  undefined1 auStack_2a8 [32];
  FComponentTypeID local_288;
  FComponentTypeID local_286;
  FComponentTypeID local_284;
  FComponentTypeID local_282;
  ERunnerFlushState *local_280;
  TArrayView<UMovieSceneSubSection_*_const,int> *local_278;
  wchar_t *local_268;
  TStatIdData *pTStack_260;
  byte local_258;
  undefined7 uStack_257;
  Type TStack_250;
  uint uStack_24c;
  wchar_t *local_240;
  TStatIdData *pTStack_238;
  byte local_230;
  undefined7 uStack_22f;
  Type TStack_228;
  uint uStack_224;
  initializer_list<UE::MovieScene::FComponentTypeID> local_218;
  initializer_list<UE::MovieScene::FComponentTypeID> local_208;
  FString local_1f8;
  FString local_1e8;
  <lambda_1> local_1d8;
  <lambda_2> local_1c0;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
  local_1a8;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
  local_180;
  FEntityComponentFilter local_158;
  FEntityComponentFilter local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pEVar10 = (ERunnerFlushState *)((longlong)this + 0x18);
  uVar12 = 0;
  local_278 = param_1;
  while( true ) {
    pTVar7 = local_278;
    EVar3 = *pEVar10;
    local_280 = pEVar10;
    ::FString::PrintfImpl
              (&local_1e8,L"VOLATILITY: Instance Handle should be valid before Flush State %d");
    ::FString::PrintfImpl
              (&local_1f8,L"VOLATILITY: Instance Handle should be valid after Flush State %d");
    local_258 = local_258 & 0xe0;
    local_268 = (wchar_t *)0x0;
    pTStack_260 = &TStatId::TStatId_NAME_None;
    TStack_250 = AnyHiPriThreadHiPriTask;
    uStack_24c = uStack_24c & 0xffffff00;
    pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
    plVar4 = *(longlong **)((longlong)this + 0x10);
    TVar2 = pFVar9->InstanceHandle;
    local_1d8.__this = *(FMovieScenePartialEvaluationTest **)this;
    local_1a8.CommonParams.TaskParams._17_7_ = uStack_257;
    local_1a8.CommonParams.TaskParams._16_1_ = local_258;
    local_1a8.CommonParams._28_4_ = uStack_24c;
    local_1a8.CommonParams.DesiredThread = TStack_250;
    local_1d8.InstanceRegistry = *(FInstanceRegistry **)((longlong)this + 0x40);
    local_1d8.BeforeString = &local_1e8;
    local_1a8.CommonParams.TaskParams.DebugName = local_268;
    local_1a8.CommonParams.TaskParams.StatId.StatIdPtr = pTStack_260;
    local_1a8.Accessors =
         (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)TVar2;
    if ((*plVar4 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *plVar4;
    local_158.AllMask.Bits.NumBits = 0;
    local_158.NoneMask.Bits.NumBits = 0;
    local_158.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ComplexMasks.ArrayNum = 0;
    local_158.ComplexMasks.ArrayMax = 0;
    local_158.AllMask.Bits.MaxBits = 0x180;
    local_158.NoneMask.Bits.MaxBits = 0x180;
    if ((TVar2 == (TComponentTypeID<UE::MovieScene::FInstanceHandle>)0xffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                           ,0x1a8,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_218._First = &local_288;
    local_218._Last = &local_286;
    local_288.Value = (ushort)TVar2;
    UE::MovieScene::FComponentMask::SetAll(&local_158.AllMask,&local_218);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
    ::
    Iterate_PerEntityImpl<__FMovieScenePartialEvaluationTest::RunTest_::__l2::<lambda_4>::operator()_::__l5::<lambda_1>_&>
              (&local_1a8,(FEntityManager *)(lVar5 + 0x28),&local_158,&local_1d8);
    if (local_158.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.ComplexMasks.AllocatorInstance.Data);
    }
    ppUVar11 = pTVar7->DataPtr;
    ppUVar1 = ppUVar11 + pTVar7->ArrayNum;
    for (; ppUVar11 != ppUVar1; ppUVar11 = ppUVar11 + 1) {
      this_00 = *ppUVar11;
      lVar5 = this_00->_padding_;
      bVar8 = UMovieSceneSection::TryModify((UMovieSceneSection *)this_00,true);
      if (bVar8) {
        *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ & 0xfffffffe;
        *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | (byte)lVar5 & 1 ^ 1;
      }
      pEVar10 = local_280;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((*plVar4 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FMovieSceneEntitySystemRunner::Flush((FMovieSceneEntitySystemRunner *)*plVar4,0.0,EVar3);
    local_230 = local_230 & 0xe0;
    pTStack_238 = &TStatId::TStatId_NAME_None;
    local_240 = (wchar_t *)0x0;
    TStack_228 = AnyHiPriThreadHiPriTask;
    uStack_224 = uStack_224 & 0xffffff00;
    pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
    plVar4 = *(longlong **)((longlong)this + 0x10);
    TVar2 = pFVar9->InstanceHandle;
    local_1c0.__this = *(FMovieScenePartialEvaluationTest **)this;
    local_180.CommonParams.TaskParams._17_7_ = uStack_22f;
    local_180.CommonParams.TaskParams._16_1_ = local_230;
    local_180.CommonParams._28_4_ = uStack_224;
    local_180.CommonParams.DesiredThread = TStack_228;
    local_1c0.InstanceRegistry = *(FInstanceRegistry **)((longlong)this + 0x40);
    local_1c0.AfterString = &local_1f8;
    local_180.CommonParams.TaskParams.DebugName = local_240;
    local_180.CommonParams.TaskParams.StatId.StatIdPtr = pTStack_238;
    local_180.Accessors =
         (TTuple<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>)TVar2;
    if ((*plVar4 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *plVar4;
    local_d8.AllMask.Bits.NumBits = 0;
    local_d8.AllMask.Bits.MaxBits = 0x180;
    local_d8.NoneMask.Bits.NumBits = 0;
    local_d8.NoneMask.Bits.MaxBits = 0x180;
    local_d8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ComplexMasks.ArrayNum = 0;
    local_d8.ComplexMasks.ArrayMax = 0;
    if ((TVar2 == (TComponentTypeID<UE::MovieScene::FInstanceHandle>)0xffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                           ,0x1a8,L""), bVar8)) break;
    local_208._First = &local_284;
    local_208._Last = &local_282;
    local_284.Value = (ushort)TVar2;
    UE::MovieScene::FComponentMask::SetAll(&local_d8.AllMask,&local_208);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>_>
    ::
    Iterate_PerEntityImpl<__FMovieScenePartialEvaluationTest::RunTest_::__l2::<lambda_4>::operator()_::__l5::<lambda_2>_&>
              (&local_180,(FEntityManager *)(lVar5 + 0x28),&local_d8,&local_1c0);
    if (local_d8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    pEVar10 = pEVar10 + 1;
    uVar12 = uVar12 + 1;
    if (8 < uVar12) {
      return;
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

