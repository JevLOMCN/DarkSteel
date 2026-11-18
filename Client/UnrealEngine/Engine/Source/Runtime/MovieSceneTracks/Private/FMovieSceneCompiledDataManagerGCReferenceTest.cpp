// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// GetTestFlags @ 14687ffc0

EAutomationTestFlags __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::GetTestFlags
          (FMovieSceneCompiledDataManagerGCReferenceTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14687ffd0

bool __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::IsStressTest
          (FMovieSceneCompiledDataManagerGCReferenceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14687ffe0

uint __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::GetRequiredDeviceNum
          (FMovieSceneCompiledDataManagerGCReferenceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146880030

FString * __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::GetTestSourceFileName
          (FMovieSceneCompiledDataManagerGCReferenceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneCompiledDataManagerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146880060

int __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::GetTestSourceFileLine
          (FMovieSceneCompiledDataManagerGCReferenceTest *this)

{
  return 0x18;
}

// GetTests @ 146880070

/* WARNING: Removing unreachable block (ram,0x00014688015d) */
/* WARNING: Removing unreachable block (ram,0x000146880228) */

void __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::GetTests
          (FMovieSceneCompiledDataManagerGCReferenceTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Compilation.GCReferenceTests");
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

// RunTest @ 146880250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FMovieSceneCompiledDataManagerGCReferenceTest::RunTest
          (FMovieSceneCompiledDataManagerGCReferenceTest *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  UMovieSceneCompiledData *pUVar3;
  UMovieSceneSubTrack *pUVar4;
  code *pcVar5;
  double dVar6;
  UEngine *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  FName *pFVar10;
  UPackage *pUVar11;
  UClass *pUVar12;
  FObjectPtr_u_0 FVar13;
  UMovieScene *pUVar14;
  FObjectPtr_u_0 FVar15;
  FSequenceTrackBuilder<UMovieSceneSubTrack> *pFVar16;
  FObjectPtr_u_0 FVar17;
  UObject *pUVar18;
  UMovieScenePlayRateCurve *pUVar19;
  FMovieSceneSequenceHierarchy *pFVar20;
  FOutputDeviceRedirector *pFVar21;
  FObjectPtr_u_0 this_00;
  ForAnyElementType FVar22;
  longlong *plVar23;
  FObjectPtr_u_0 this_01;
  undefined1 auStack_438 [32];
  FMovieSceneCompiledDataID local_418;
  FWeakObjectPtr local_410;
  FWeakObjectPtr local_408;
  FWeakObjectPtr local_400;
  FWeakObjectPtr local_3f8;
  undefined1 local_3f0 [8];
  longlong local_3e8;
  FObjectPtr_u_0 local_3e0;
  TObjectPtr<UMovieSceneCompiledData>_u_0 *local_3d8;
  FObjectPtr_u_0 local_3d0;
  UMovieSceneCompiledData **local_3c8;
  FObjectPtr_u_0 local_3c0;
  TObjectPtr<UMovieSceneTestSequence>_u_0 local_3b8 [3];
  undefined1 local_3a0 [4];
  undefined4 local_39c;
  undefined1 local_398;
  undefined4 local_394;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_390;
  FObjectPtr_u_0 local_388;
  undefined1 local_380 [4];
  undefined4 local_37c;
  undefined1 local_378;
  undefined4 local_374;
  UMovieSceneCompiledData *local_370;
  FObjectPtr_u_0 local_368;
  undefined1 local_360 [4];
  undefined4 local_35c;
  undefined1 local_358;
  undefined4 local_354;
  FSequenceTrackBuilder<UMovieSceneSubTrack> *local_350;
  FObjectPtr_u_0 local_348;
  TObjectPtr<UMovieSceneTestSequence>_u_0 local_340 [3];
  UClass *local_328;
  TObjectPtr<UMovieSceneTestSequence>_u_0 local_320;
  TObjectPtr<UMovieSceneTestSequence>_u_0 local_318;
  UMovieScenePlayRateCurve *local_310;
  UMovieScenePlayRateCurve *local_308;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  UClass *local_2c0;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_268;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FName local_208;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_200;
  FSequenceTrackBuilder<UMovieSceneSubTrack> local_1e0;
  undefined1 local_1c8 [128];
  undefined1 local_148 [128];
  FMovieSceneDoubleValue local_c8;
  FMovieSceneDoubleValue local_a8;
  FMovieSceneDoubleValue local_88;
  FMovieSceneDoubleValue local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_438;
  pFVar10 = ::FName::FName(&local_208,"GCReferenceTest");
  FVar2 = *pFVar10;
  pUVar11 = GetTransientPackage();
  this_01.Handle = (UObject *)0x0;
  local_3e8 = 0;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar12 = Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,pUVar12);
  local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1c8._56_8_ = (UPackage *)0x0;
  local_1c8._24_4_ = RF_NoFlags;
  local_1c8._40_8_ = (UObject *)0x0;
  local_1c8[0x20] = false;
  local_1c8._8_8_ = pUVar11;
  local_1c8._16_8_ = FVar2;
  FVar13.Handle = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar23 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar23 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  this_00.Handle = this_01.Handle;
  if ((UMovieSceneSubSection *)FVar13.Handle != (UMovieSceneSubSection *)0x0) {
    UObjectBase::AddRef((UObjectBase *)FVar13.Handle);
    this_00.Handle = FVar13.Handle;
  }
  UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder
            ((FSequenceBuilder *)&local_3b8[0].ObjectPtr);
  pUVar14 = (UMovieScene *)(**(code **)((local_3b8[0].DebugPtr)->_padding_ + 0x2f8))();
  local_2c0 = Z_Construct_UClass_UMovieSceneTimeWarpTrack_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2c0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2c0);
  }
  local_388.Handle =
       (UObject *)UMovieScene::AddTrack(pUVar14,(TSubclassOf<UMovieSceneTrack>)&local_2c0);
  if ((UMovieSceneSubSection *)local_388.Handle == (UMovieSceneSubSection *)0x0) {
LAB_1468803c5:
    local_388.Handle = this_01.Handle;
  }
  else {
    pUVar12 = Z_Construct_UClass_UMovieSceneTimeWarpTrack_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&(local_388.Handle)->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(local_388.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        != &pUVar12->_padding_)) goto LAB_1468803c5;
  }
  local_390.DebugPtr = (UMovieSceneCompiledData *)local_3b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMovieSceneSubSection *)local_388.Handle != (UMovieSceneSubSection *)0x0)) {
    UE::GC::MarkAsReachable(local_388.Handle);
  }
  FVar13.Handle = (UObject *)(**(code **)(*(longlong *)local_388.Handle + 0x358))(local_388.Handle);
  local_3a0[0] = 1;
  local_39c = 0;
  local_398 = 0;
  local_394 = 96000;
  (**(code **)(*(longlong *)FVar13.Handle + 0x2c8))(FVar13.Handle,local_3a0);
  (*(code *)**(undefined8 **)&local_388.Handle[2].field_0x20)
            (&local_388.Handle[2].field_0x20,FVar13.Handle);
  local_3d8 = &local_390;
  local_3d0.Handle = FVar13.Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar13.Handle);
  }
  if ((UMovieSceneSubSection *)local_3d0.Handle == (UMovieSceneSubSection *)0x0) {
LAB_14688047d:
    FVar13.Handle = this_01.Handle;
  }
  else {
    pUVar12 = Z_Construct_UClass_UMovieSceneTimeWarpSection_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&local_3d0,pUVar12);
    FVar13 = local_3d0;
    if (!bVar8) goto LAB_14688047d;
  }
  pUVar3 = local_3d8->DebugPtr;
  local_3e0 = FVar13;
  pUVar14 = (UMovieScene *)(**(code **)(*(longlong *)pUVar3->_padding_ + 0x2f8))();
  local_328 = UMovieSceneFadeTrack::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_328 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_328);
  }
  local_368.Handle =
       (UObject *)UMovieScene::AddTrack(pUVar14,(TSubclassOf<UMovieSceneTrack>)&local_328);
  if ((UMovieSceneSubSection *)local_368.Handle == (UMovieSceneSubSection *)0x0) {
LAB_1468804f2:
    local_368.Handle = this_01.Handle;
  }
  else {
    pUVar12 = UMovieSceneFadeTrack::StaticClass();
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&(local_368.Handle)->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(local_368.Handle)->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        != &pUVar12->_padding_)) goto LAB_1468804f2;
  }
  local_370 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMovieSceneSubSection *)local_368.Handle != (UMovieSceneSubSection *)0x0)) {
    UE::GC::MarkAsReachable(local_368.Handle);
  }
  FVar15.Handle = (UObject *)(**(code **)(*(longlong *)local_368.Handle + 0x358))(local_368.Handle);
  local_380[0] = 1;
  local_37c = 0;
  local_378 = 0;
  local_374 = 96000;
  (**(code **)(*(longlong *)FVar15.Handle + 0x2c8))(FVar15.Handle,local_380);
  (*(code *)**(undefined8 **)&local_368.Handle[2].field_0x20)
            (&local_368.Handle[2].field_0x20,FVar15.Handle);
  local_3c8 = &local_370;
  local_3c0.Handle = FVar15.Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar15.Handle);
  }
  if ((UMovieSceneSubSection *)local_3c0.Handle == (UMovieSceneSubSection *)0x0) {
LAB_1468805a6:
    FVar15.Handle = this_01.Handle;
  }
  else {
    pUVar12 = Z_Construct_UClass_UMovieSceneFadeSection_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&local_3c0,pUVar12);
    FVar15 = local_3c0;
    if (!bVar8) goto LAB_1468805a6;
  }
  pFVar16 = UE::MovieScene::Test::FSequenceBuilder::AddRootTrack<UMovieSceneSubTrack>
                      ((FSequenceBuilder *)*local_3c8,&local_1e0);
  pUVar4 = (pFVar16->Track).field0_0x0.DebugPtr;
  FVar17.Handle = (UObject *)(**(code **)(pUVar4->_padding_ + 0x358))(pUVar4);
  local_360[0] = 1;
  local_35c = 0;
  local_358 = 0;
  local_354 = 0x960;
  (**(code **)(*(longlong *)FVar17.Handle + 0x2c8))(FVar17.Handle,local_360);
  pUVar4 = (pFVar16->Track).field0_0x0.DebugPtr;
  (**(code **)pUVar4->_padding_)(&pUVar4->_padding_,FVar17.Handle);
  local_350 = pFVar16;
  local_348.Handle = FVar17.Handle;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(FVar17.Handle);
  }
  if ((UMovieSceneSubSection *)local_348.Handle != (UMovieSceneSubSection *)0x0) {
    pUVar12 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&local_348,pUVar12);
    if (bVar8) {
      this_01 = local_348;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            (FVar15.Handle,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UMovieScenePlatformCondition_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_148,pUVar12);
  local_148._8_8_ = FVar15;
  pUVar18 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
  if (local_148._64_8_ != 0) {
    plVar23 = (longlong *)(local_148 + 0x50);
    if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
      plVar23 = (longlong *)local_148._104_8_;
    }
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar18);
  }
  *(UObject **)&FVar15.Handle[4].field_0x20 = pUVar18;
  UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder
            ((FSequenceBuilder *)&local_340[0].ObjectPtr);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_3b8[0].DebugPtr != (UMovieSceneTestSequence *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_3b8[0].DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_3b8[0].DebugPtr != (UMovieSceneTestSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3b8[0].DebugPtr);
    }
  }
  local_320.DebugPtr = local_3b8[0].DebugPtr;
  local_410.ObjectIndex = 0;
  local_410.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_3b8[0].DebugPtr != (UMovieSceneTestSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3b8[0].DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_410,(FObjectPtr)&local_320);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_340[0].DebugPtr != (UMovieSceneTestSequence *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_340[0].DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_340[0].DebugPtr != (UMovieSceneTestSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_340[0].DebugPtr);
    }
  }
  local_408.ObjectIndex = 0;
  local_408.ObjectSerialNumber = 0;
  local_318.DebugPtr = local_340[0].DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_340[0].DebugPtr != (UMovieSceneTestSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_340[0].DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_408,(FObjectPtr)&local_318);
  local_400.ObjectIndex = 0;
  local_400.ObjectSerialNumber = 0;
  local_3f8.ObjectIndex = 0;
  local_3f8.ObjectSerialNumber = 0;
  pUVar19 = NewObject<UMovieScenePlayRateCurve>(FVar13.Handle);
  local_310 = pUVar19;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UMovieScenePlayRateCurve *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  FWeakObjectPtr::operator=(&local_400,(FObjectPtr)&local_310);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_268,(FMovieSceneChannel *)&pUVar19->PlayRate,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&(pUVar19->PlayRate)._padding_,
             (FKeyHandleLookupTable *)&(pUVar19->PlayRate)._padding_);
  local_268.Values =
       (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)&(pUVar19->PlayRate)._padding_;
  if (((local_268._padding_ == 0) ||
      (local_268.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  dVar6 = __real_3ff0000000000000;
  local_c8.Value = __real_3ff0000000000000;
  local_c8.Tangent.TangentWeightMode.Value = '\0';
  local_c8.UnserializedPaddingBytes[0] = '\0';
  local_c8.Tangent.UnserializedPaddingBytes[0] = '\0';
  local_c8.Tangent.UnserializedPaddingBytes[1] = '\0';
  local_c8.Tangent.UnserializedPaddingBytes[2] = '\0';
  local_c8.InterpMode.Value = '\x02';
  local_c8.Tangent.ArriveTangent = 0.0;
  local_c8.Tangent.LeaveTangent = 0.0;
  local_c8.Tangent.ArriveTangentWeight = 0.0;
  local_c8.Tangent.LeaveTangentWeight = 0.0;
  local_c8.TangentMode.Value = '\0';
  local_c8.PaddingByte = '\0';
  TMovieSceneChannelData<FMovieSceneDoubleValue>::AddKey(&local_268,(FFrameNumber)0x0,&local_c8);
  local_68.Value = __real_3fe0000000000000;
  local_68.Tangent.TangentWeightMode.Value = '\0';
  local_68.UnserializedPaddingBytes[0] = '\0';
  local_68.Tangent.UnserializedPaddingBytes[0] = '\0';
  local_68.Tangent.UnserializedPaddingBytes[1] = '\0';
  local_68.Tangent.UnserializedPaddingBytes[2] = '\0';
  local_68.InterpMode.Value = '\x02';
  local_68.Tangent.ArriveTangent = 0.0;
  local_68.Tangent.LeaveTangent = 0.0;
  local_68.Tangent.ArriveTangentWeight = 0.0;
  local_68.Tangent.LeaveTangentWeight = 0.0;
  local_68.TangentMode.Value = '\0';
  local_68.PaddingByte = '\0';
  TMovieSceneChannelData<FMovieSceneDoubleValue>::AddKey(&local_268,(FFrameNumber)0x5dc0,&local_68);
  local_a8.Value = dVar6;
  local_a8.Tangent.TangentWeightMode.Value = '\0';
  local_a8.UnserializedPaddingBytes[0] = '\0';
  local_a8.Tangent.UnserializedPaddingBytes[0] = '\0';
  local_a8.Tangent.UnserializedPaddingBytes[1] = '\0';
  local_a8.Tangent.UnserializedPaddingBytes[2] = '\0';
  local_a8.InterpMode.Value = '\x02';
  local_a8.TangentMode.Value = '\0';
  local_a8.PaddingByte = '\0';
  local_a8.Tangent.ArriveTangent = 0.0;
  local_a8.Tangent.LeaveTangent = 0.0;
  local_a8.Tangent.ArriveTangentWeight = 0.0;
  local_a8.Tangent.LeaveTangentWeight = 0.0;
  TMovieSceneChannelData<FMovieSceneDoubleValue>::AddKey(&local_268,(FFrameNumber)0xbb80,&local_a8);
  FMovieSceneTimeWarpVariant::Set
            ((FMovieSceneTimeWarpVariant *)&local_3e0.Handle[6].field_0x20,
             (UMovieSceneTimeWarpGetter *)pUVar19);
  UMovieSceneSubSection::SetSequence
            ((UMovieSceneSubSection *)this_01.Handle,(UMovieSceneSequence *)local_340[0].DebugPtr);
  pUVar19 = NewObject<UMovieScenePlayRateCurve>(this_01.Handle);
  local_308 = pUVar19;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UMovieScenePlayRateCurve *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  FWeakObjectPtr::operator=(&local_3f8,(FObjectPtr)&local_308);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_200,(FMovieSceneChannel *)&pUVar19->PlayRate,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&(pUVar19->PlayRate)._padding_,
             (FKeyHandleLookupTable *)&(pUVar19->PlayRate)._padding_);
  local_200.Values =
       (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)&(pUVar19->PlayRate)._padding_;
  if (((local_200._padding_ == 0) ||
      (local_200.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_88.Value = __real_3fd0000000000000;
  local_88.Tangent.TangentWeightMode.Value = '\0';
  local_88.UnserializedPaddingBytes[0] = '\0';
  local_88.Tangent.UnserializedPaddingBytes[0] = '\0';
  local_88.Tangent.UnserializedPaddingBytes[1] = '\0';
  local_88.Tangent.UnserializedPaddingBytes[2] = '\0';
  local_88.InterpMode.Value = '\x02';
  local_88.Tangent.ArriveTangent = 0.0;
  local_88.Tangent.LeaveTangent = 0.0;
  local_88.Tangent.ArriveTangentWeight = 0.0;
  local_88.Tangent.LeaveTangentWeight = 0.0;
  local_88.TangentMode.Value = '\0';
  local_88.PaddingByte = '\0';
  TMovieSceneChannelData<FMovieSceneDoubleValue>::AddKey(&local_200,(FFrameNumber)0x0,&local_88);
  FMovieSceneTimeWarpVariant::Set
            ((FMovieSceneTimeWarpVariant *)&this_01.Handle[7].field_0x10,
             (UMovieSceneTimeWarpGetter *)pUVar19);
  pUVar18 = FWeakObjectPtr::Get(&local_410);
  if ((((pUVar18 == (UObject *)0x0) ||
       (pUVar18 = FWeakObjectPtr::Get(&local_408), pUVar18 == (UObject *)0x0)) ||
      (pUVar18 = FWeakObjectPtr::Get(&local_400), pUVar18 == (UObject *)0x0)) ||
     (pUVar18 = FWeakObjectPtr::Get(&local_3f8), pUVar18 == (UObject *)0x0)) {
    pcVar5 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString(&local_288,L"Test failed to initialize weak pointers correctly.");
    (*pcVar5)(this,&local_288,0);
    local_278.Data.AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
  }
  else {
    if (((UMovieSceneSubSection *)this_00.Handle == (UMovieSceneSubSection *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    UMovieSceneCompiledDataManager::Compile
              ((UMovieSceneCompiledDataManager *)this_00.Handle,(UMovieSceneSequence *)local_3f0);
    if (((UMovieSceneSubSection *)this_00.Handle == (UMovieSceneSubSection *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    UMovieSceneCompiledDataManager::FindDataID
              ((UMovieSceneCompiledDataManager *)this_00.Handle,(UMovieSceneSequence *)&local_418);
    if (((UMovieSceneSubSection *)this_00.Handle == (UMovieSceneSubSection *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    UMovieSceneCompiledDataManager::FindDataID
              ((UMovieSceneCompiledDataManager *)this_00.Handle,
               (UMovieSceneSequence *)(local_3f0 + 4));
    if ((local_418.Value == -1) || (local_3f0._4_4_ == -1)) {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString(&local_298,L"Sequence was not compiled successfully.");
      (*pcVar5)(this,&local_298,0);
      local_278.Data.AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
    }
    else {
      if (((UMovieSceneSubSection *)this_00.Handle == (UMovieSceneSubSection *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pFVar20 = UMovieSceneCompiledDataManager::FindHierarchy
                          ((UMovieSceneCompiledDataManager *)this_00.Handle,local_418);
      if (pFVar20 == (FMovieSceneSequenceHierarchy *)0x0) {
        pcVar5 = *(code **)(*(longlong *)this + 0x28);
        ::FString::FString(&local_278,L"Sequence did not compile a hierarchy when it should have.");
        (*pcVar5)(this,&local_278,0);
      }
      else {
        CollectGarbage(RF_NoFlags,true);
        pUVar18 = FWeakObjectPtr::Get(&local_410);
        if ((((pUVar18 == (UObject *)0x0) &&
             (pUVar18 = FWeakObjectPtr::Get(&local_408), pUVar18 == (UObject *)0x0)) &&
            (pUVar18 = FWeakObjectPtr::Get(&local_400), pUVar18 == (UObject *)0x0)) &&
           (pUVar18 = FWeakObjectPtr::Get(&local_3f8), pUVar18 == (UObject *)0x0)) {
          if (((UMovieSceneSubSection *)this_00.Handle == (UMovieSceneSubSection *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                                 ,0x67,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          pFVar20 = UMovieSceneCompiledDataManager::FindHierarchy
                              ((UMovieSceneCompiledDataManager *)this_00.Handle,local_418);
          if (pFVar20 == (FMovieSceneSequenceHierarchy *)0x0) {
            bVar8 = true;
            goto LAB_146880f92;
          }
          pcVar5 = *(code **)(*(longlong *)this + 0x28);
          ::FString::FString(&local_2b8,L"Compiled data was not correctly cleaned up.");
          (*pcVar5)(this,&local_2b8,0);
          local_278.Data.AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
        }
        else {
          pUVar18 = FWeakObjectPtr::Get(&local_410);
          pUVar7 = GEngine;
          if (pUVar18 != (UObject *)0x0) {
            pcVar5 = *(code **)(GEngine->_padding_ + 8);
            pFVar21 = GetGlobalLogSingleton();
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar18,&local_248,(UObject *)0x0)
            ;
            ::FString::PrintfImpl(&local_300,L"obj refs name=\"%s\"");
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_300.Data.ArrayNum != 0) {
              FVar22.Data = local_300.Data.AllocatorInstance.Data;
            }
            (*pcVar5)(&pUVar7->_padding_,0,FVar22.Data,pFVar21);
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.Data.AllocatorInstance.Data);
            }
            if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.Data.AllocatorInstance.Data);
            }
          }
          pUVar18 = FWeakObjectPtr::Get(&local_408);
          pUVar7 = GEngine;
          if (pUVar18 != (UObject *)0x0) {
            pcVar5 = *(code **)(GEngine->_padding_ + 8);
            pFVar21 = GetGlobalLogSingleton();
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar18,&local_238,(UObject *)0x0)
            ;
            ::FString::PrintfImpl(&local_2f0,L"obj refs name=\"%s\"");
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_2f0.Data.ArrayNum != 0) {
              FVar22.Data = local_2f0.Data.AllocatorInstance.Data;
            }
            (*pcVar5)(&pUVar7->_padding_,0,FVar22.Data,pFVar21);
            if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
            }
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
          }
          pUVar18 = FWeakObjectPtr::Get(&local_400);
          pUVar7 = GEngine;
          if (pUVar18 != (UObject *)0x0) {
            pcVar5 = *(code **)(GEngine->_padding_ + 8);
            pFVar21 = GetGlobalLogSingleton();
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar18,&local_228,(UObject *)0x0)
            ;
            ::FString::PrintfImpl(&local_2e0,L"obj refs name=\"%s\"");
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_2e0.Data.ArrayNum != 0) {
              FVar22.Data = local_2e0.Data.AllocatorInstance.Data;
            }
            (*pcVar5)(&pUVar7->_padding_,0,FVar22.Data,pFVar21);
            if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
            }
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
          }
          pUVar18 = FWeakObjectPtr::Get(&local_3f8);
          pUVar7 = GEngine;
          if (pUVar18 != (UObject *)0x0) {
            pcVar5 = *(code **)(GEngine->_padding_ + 8);
            pFVar21 = GetGlobalLogSingleton();
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar18,&local_218,(UObject *)0x0)
            ;
            ::FString::PrintfImpl(&local_2d0,L"obj refs name=\"%s\"");
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_2d0.Data.ArrayNum != 0) {
              FVar22.Data = local_2d0.Data.AllocatorInstance.Data;
            }
            (*pcVar5)(&pUVar7->_padding_,0,FVar22.Data,pFVar21);
            if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            }
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
          }
          pcVar5 = *(code **)(*(longlong *)this + 0x28);
          ::FString::FString(&local_2a8,
                             L"Objects were unexpectedly still alive after GC please see logs for references."
                            );
          (*pcVar5)(this,&local_2a8,0);
          local_278.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  bVar8 = false;
LAB_146880f92:
  if ((UMovieSceneSubSection *)this_00.Handle != (UMovieSceneSubSection *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(this_00.Handle);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 146880fe0

FString * __thiscall
FMovieSceneCompiledDataManagerGCReferenceTest::GetBeautifiedTestName
          (FMovieSceneCompiledDataManagerGCReferenceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Compilation.GCReferenceTests");
  return __return_storage_ptr__;
}

