// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 14624e160

EAutomationTestFlags __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::GetTestFlags
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14624e170

bool __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::IsStressTest
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14624e180

uint __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::GetRequiredDeviceNum
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14624e190

FString * __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::GetTestSourceFileName
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneTransformTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14624e1c0

int __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::GetTestSourceFileLine
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this)

{
  return 0x10e;
}

// GetTests @ 14624e1d0

/* WARNING: Removing unreachable block (ram,0x00014624e2bd) */
/* WARNING: Removing unreachable block (ram,0x00014624e388) */

void __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::GetTests
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Core.WarpingAndScalingTransforms");
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

// RunTest @ 14624e3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::RunTest
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FFrameTime FVar9;
  TOptional<FFrameTime> *pTVar10;
  FMovieSceneTimeWarpVariant *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_e18 [32];
  float fStack_dc4;
  float fStack_dbc;
  ForAnyElementType local_da8;
  undefined8 local_da0;
  FMovieSceneSequenceTransform local_d98;
  FMovieSceneSequenceTransform local_d78;
  FMovieSceneTransformBreadcrumbs local_d58;
  FMovieSceneTransformBreadcrumbs local_d40;
  FMovieSceneTransformBreadcrumbs local_d28;
  FMovieSceneTransformBreadcrumbs local_d10;
  FMovieSceneTransformBreadcrumbs local_cf8;
  FMovieSceneTransformBreadcrumbs local_ce0;
  FMovieSceneTransformBreadcrumbs local_cc8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  FMovieSceneSequenceTransform local_c30;
  FMovieSceneSequenceTransform local_c10;
  FMovieSceneSequenceTransform local_bf0;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 local_b58;
  undefined4 local_b50;
  undefined4 uStack_b4c;
  undefined4 local_b48;
  undefined4 uStack_b44;
  undefined8 local_b40;
  FFrameTime local_b38;
  undefined8 local_b30;
  FFrameTime local_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined4 uStack_b0c;
  undefined4 local_b08;
  undefined4 uStack_b04;
  undefined8 local_b00;
  FFrameTime local_af8;
  undefined8 local_af0;
  FFrameTime local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined4 local_ad0;
  undefined4 uStack_acc;
  undefined8 local_ac8;
  undefined8 local_ac0;
  FFrameTime local_ab8;
  undefined8 local_ab0;
  FFrameTime local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  FFrameTime local_a88;
  undefined8 local_a80;
  FFrameTime local_a78;
  undefined8 local_a70;
  FFrameTime local_a68;
  undefined8 local_a60;
  FFrameTime local_a58;
  FFrameNumber local_a50;
  float fStack_a4c;
  FFrameTime local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  FFrameNumber local_a20;
  float fStack_a1c;
  FFrameTime local_a18;
  undefined8 local_a10;
  FFrameTime local_a08;
  undefined8 local_a00;
  FFrameTime local_9f8;
  undefined8 local_9f0;
  FFrameTime local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  FMovieSceneSequenceTransform local_998;
  FMovieSceneSequenceTransform local_978;
  FMovieSceneSequenceTransform local_958;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined4 local_8f0;
  undefined4 uStack_8ec;
  FMovieSceneSequenceTransform local_8e8;
  TOptional<FFrameTime> local_8c8;
  TOptional<FFrameTime> local_8bc;
  TOptional<FFrameTime> local_8b0;
  TOptional<FFrameTime> local_8a4;
  TOptional<FFrameTime> local_898;
  TOptional<FFrameTime> local_88c;
  TOptional<FFrameTime> local_880;
  TOptional<FFrameTime> local_874;
  TOptional<FFrameTime> local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FMovieSceneSequenceTransform local_778;
  FMovieSceneSequenceTransform local_758;
  FMovieSceneInverseSequenceTransform local_738;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FMovieSceneInverseSequenceTransform local_478;
  TOptional<FFrameTime> local_458;
  TOptional<FFrameTime> local_44c;
  TOptional<FFrameTime> local_440;
  TOptional<FFrameTime> local_434;
  TOptional<FFrameTime> local_428;
  TOptional<FFrameTime> local_41c;
  undefined1 local_410 [8];
  undefined1 local_408 [8];
  undefined1 local_400 [8];
  undefined1 local_3f8 [8];
  undefined1 local_3f0 [8];
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [8];
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  undefined1 local_398 [8];
  FMovieSceneInverseSequenceTransform local_390;
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  undefined1 local_360 [8];
  FMovieSceneInverseSequenceTransform local_358;
  FMovieSceneInverseSequenceTransform local_338;
  FMovieSceneInverseSequenceTransform local_318;
  FMovieSceneInverseSequenceTransform local_2f8;
  FMovieSceneInverseSequenceTransform local_2d8;
  FMovieSceneInverseSequenceTransform local_2b8;
  TOptional<FFrameTime> local_298;
  TOptional<FFrameTime> local_28c;
  TOptional<FFrameTime> local_280;
  TOptional<FFrameTime> local_274;
  TOptional<FFrameTime> local_268;
  TOptional<FFrameTime> local_25c;
  TOptional<FFrameTime> local_250;
  TOptional<FFrameTime> local_244;
  TOptional<FFrameTime> local_238;
  TOptional<FFrameTime> local_22c;
  TOptional<FFrameTime> local_220;
  TOptional<FFrameTime> local_214;
  TOptional<FFrameTime> local_208;
  TOptional<FFrameTime> local_1fc;
  TOptional<FFrameTime> local_1f0;
  TOptional<FFrameTime> local_1e4;
  TOptional<FFrameTime> local_1d8;
  TOptional<FFrameTime> local_1cc;
  TOptional<FFrameTime> local_1c0;
  TOptional<FFrameTime> local_1b4;
  TOptional<FFrameTime> local_1a8;
  TOptional<FFrameTime> local_19c;
  FMovieSceneNestedSequenceTransform local_190;
  FMovieSceneNestedSequenceTransform local_170;
  FMovieSceneNestedSequenceTransform local_150;
  FMovieSceneNestedSequenceTransform local_130;
  FMovieSceneNestedSequenceTransform local_110;
  FMovieSceneNestedSequenceTransform local_f0;
  FMovieSceneNestedSequenceTransform local_d0;
  FMovieSceneNestedSequenceTransform local_b0;
  FMovieSceneNestedSequenceTransform local_90;
  FMovieSceneTimeWarpVariant local_70;
  FMovieSceneTimeWarpVariant local_60;
  FMovieSceneTimeWarpVariant local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e18;
  local_8e8.LinearTransform.TimeScale = 2.0;
  local_8e8.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8e8.LinearTransform.Offset.FrameNumber.Value = 0;
  local_8e8.LinearTransform.Offset.SubFrame = 0.0;
  local_8e8.NestedTransforms.ArrayNum = 0;
  local_8e8.NestedTransforms.ArrayMax = 0;
  local_a10 = 0;
  FMovieSceneSequenceTransform::AddLoop(&local_8e8,(FFrameNumber)0x0,(FFrameNumber)0x1e);
  local_9d0 = 10;
  local_9c8 = 0x14;
  FVar9 = ::operator*((FFrameTime)local_370,(FMovieSceneSequenceTransform *)&DAT_0000000a);
  ::FString::FString(&local_858,"Transform time 1");
  local_c38 = *(undefined8 *)FVar9;
  local_c40 = local_9c8;
  if ((int)local_c38 == 0x14) {
    local_c38._4_4_ = (float)((ulonglong)local_c38 >> 0x20);
    local_c40._4_4_ = (float)((ulonglong)local_9c8 >> 0x20);
    bVar7 = local_c38._4_4_ != local_c40._4_4_;
    if (bVar7) goto LAB_14624e4bf;
  }
  else {
LAB_14624e4bf:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_5c8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_5c8,0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  local_d40.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d40.Breadcrumbs.ArrayNum = 0;
  local_d40.Breadcrumbs.ArrayMax = 0;
  bVar7 = false;
  local_d40.Mode = Sparse;
  FMovieSceneSequenceTransform::Inverse(&local_8e8,&local_358);
  local_cb0 = 0xf;
  if (((local_d40.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_cb0) &&
      ((FScriptContainerElement *)&local_cb0 <
       local_d40.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d40.Breadcrumbs.ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d40.Breadcrumbs.ArrayNum;
  if (local_d40.Breadcrumbs.ArrayNum == local_d40.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d40,&local_d40.Breadcrumbs.ArrayMax);
  }
  local_d40.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_9c0 = 0x14;
  *(undefined8 *)(local_d40.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_cb0;
  local_9b8 = 10;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_358,&local_280,(FFrameTime)0x14,&local_d40);
  ::FString::FString(&local_7c8,"Inverse time 3");
  bVar4 = true;
  if ((pTVar10->bIsSet == true) && ((pTVar10->TypedValue).FrameNumber.Value == 10)) {
    fStack_dc4 = (pTVar10->TypedValue).SubFrame;
    fStack_dbc = (float)((ulonglong)local_9b8 >> 0x20);
    bVar6 = bVar7;
    if (fStack_dc4 != fStack_dbc) goto LAB_14624e65f;
  }
  else {
LAB_14624e65f:
    bVar6 = true;
  }
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_5b8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_5b8);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
  }
  uVar3 = local_d40.Breadcrumbs._8_8_;
  local_d40.Breadcrumbs._8_8_ = local_d40.Breadcrumbs._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_d40,0,&local_d40.Breadcrumbs.ArrayMax);
  }
  local_ca8 = 0x2d;
  if (((local_d40.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_ca8) &&
      ((FScriptContainerElement *)&local_ca8 <
       local_d40.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d40.Breadcrumbs.ArrayMax * 8))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d40.Breadcrumbs.ArrayNum;
  if (local_d40.Breadcrumbs.ArrayNum == local_d40.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d40,&local_d40.Breadcrumbs.ArrayMax);
  }
  local_d40.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_9b0 = 0x14;
  *(undefined8 *)(local_d40.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_ca8;
  local_9a8 = 0x19;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_358,&local_19c,(FFrameTime)0x14,&local_d40);
  ::FString::FString(&local_848,"Inverse time 4");
  if ((pTVar10->bIsSet == true) && ((pTVar10->TypedValue).FrameNumber.Value == 0x19)) {
    fStack_dbc = (pTVar10->TypedValue).SubFrame;
    fStack_dc4 = (float)((ulonglong)local_9a8 >> 0x20);
    bVar6 = bVar7;
    if (fStack_dbc != fStack_dc4) goto LAB_14624e80c;
  }
  else {
LAB_14624e80c:
    bVar6 = true;
  }
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_5a8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_5a8,0);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  if (local_358.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_d40.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d40.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_8e8.NestedTransforms.AllocatorInstance.Data
             ,local_8e8.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_8e8.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_8e8.NestedTransforms.AllocatorInstance.Data);
  }
  local_938 = 0x14;
  local_958.LinearTransform.Offset.FrameNumber.Value = 0x14;
  local_958.LinearTransform.Offset.SubFrame = 0.0;
  local_958.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_958.NestedTransforms.ArrayNum = 0;
  local_958.NestedTransforms.ArrayMax = 0;
  local_958.LinearTransform.TimeScale = 2.0;
  FMovieSceneSequenceTransform::AddLoop(&local_958,(FFrameNumber)0x14,(FFrameNumber)0x32);
  local_930 = 10;
  local_928 = 0x28;
  FVar9 = ::operator*((FFrameTime)local_398,(FMovieSceneSequenceTransform *)&DAT_0000000a);
  ::FString::FString(&local_7b8,"Transform time 5");
  if ((int)*(undefined8 *)FVar9 == 0x28) {
    fStack_dbc = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
    fStack_dc4 = (float)((ulonglong)local_928 >> 0x20);
    if (fStack_dbc != fStack_dc4) goto LAB_14624e968;
  }
  else {
LAB_14624e968:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_598,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
  }
  local_920 = 0x12;
  local_918 = 0x1a;
  FVar9 = ::operator*((FFrameTime)local_3a0,(FMovieSceneSequenceTransform *)&DAT_00000012);
  ::FString::FString(&local_7e8,"Transform time 6");
  if ((int)*(undefined8 *)FVar9 == 0x1a) {
    fStack_dbc = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
    fStack_dc4 = (float)((ulonglong)local_918 >> 0x20);
    if (fStack_dbc != fStack_dc4) goto LAB_14624ea37;
  }
  else {
LAB_14624ea37:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_588,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  local_d58.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d58.Breadcrumbs.ArrayNum = 0;
  local_d58.Breadcrumbs.ArrayMax = 0;
  local_d58.Mode = Sparse;
  FMovieSceneSequenceTransform::Inverse(&local_958,&local_338);
  local_ca0 = 0x23;
  if (((local_d58.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_ca0) &&
      ((FScriptContainerElement *)&local_ca0 <
       local_d58.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d58.Breadcrumbs.ArrayMax * 8))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d58.Breadcrumbs.ArrayNum;
  if (local_d58.Breadcrumbs.ArrayNum == local_d58.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d58,&local_d58.Breadcrumbs.ArrayMax);
  }
  local_d58.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_910 = 0x28;
  *(undefined8 *)(local_d58.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_ca0;
  local_908 = 10;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_338,&local_1a8,(FFrameTime)0x28,&local_d58);
  ::FString::FString(&local_7f8,"Inverse time 7");
  if ((pTVar10->bIsSet == true) && ((pTVar10->TypedValue).FrameNumber.Value == 10)) {
    fStack_dbc = (pTVar10->TypedValue).SubFrame;
    fStack_dc4 = (float)((ulonglong)local_908 >> 0x20);
    if (fStack_dbc != fStack_dc4) goto LAB_14624ebd2;
  }
  else {
LAB_14624ebd2:
    bVar7 = true;
  }
  if (bVar7) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_578,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_578);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  uVar3 = local_d58.Breadcrumbs._8_8_;
  local_d58.Breadcrumbs._8_8_ = local_d58.Breadcrumbs._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_d58,0,&local_d58.Breadcrumbs.ArrayMax);
  }
  local_c98 = 0x41;
  if (((local_d58.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c98) &&
      ((FScriptContainerElement *)&local_c98 <
       local_d58.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d58.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d58.Breadcrumbs.ArrayNum;
  if (local_d58.Breadcrumbs.ArrayNum == local_d58.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d58,&local_d58.Breadcrumbs.ArrayMax);
  }
  local_d58.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_900 = 0x28;
  *(undefined8 *)(local_d58.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c98;
  local_8f8 = 0x19;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_338,&local_1b4,(FFrameTime)0x28,&local_d58);
  ::FString::FString(&local_808,"Inverse time 8");
  bVar7 = false;
  if ((pTVar10->bIsSet == true) && ((pTVar10->TypedValue).FrameNumber.Value == 0x19)) {
    fStack_dbc = (pTVar10->TypedValue).SubFrame;
    fStack_dc4 = (float)((ulonglong)local_8f8 >> 0x20);
    bVar6 = bVar7;
    if (fStack_dbc != fStack_dc4) goto LAB_14624ed8e;
  }
  else {
LAB_14624ed8e:
    bVar6 = true;
  }
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_568,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_568,0);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.Data.AllocatorInstance.Data);
  }
  if (local_338.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_d58.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d58.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_958.NestedTransforms.AllocatorInstance.Data
             ,local_958.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_958.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_958.NestedTransforms.AllocatorInstance.Data);
  }
  local_8f0 = 0xfffffffa;
  uStack_8ec = 0;
  local_978.LinearTransform.Offset.FrameNumber.Value = -6;
  local_978.LinearTransform.Offset.SubFrame = 0.0;
  local_978.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.NestedTransforms.ArrayNum = 0;
  local_978.NestedTransforms.ArrayMax = 0;
  local_978.LinearTransform.TimeScale = 2.0;
  FMovieSceneSequenceTransform::AddLoop(&local_978,(FFrameNumber)0x0,(FFrameNumber)0x1e);
  local_bd0 = 0xd;
  local_bc8 = 0x14;
  FVar9 = ::operator*((FFrameTime)local_3a8,(FMovieSceneSequenceTransform *)&DAT_0000000d);
  ::FString::FString(&local_818,"Transform time 9");
  if ((int)*(undefined8 *)FVar9 == 0x14) {
    fStack_dbc = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
    fStack_dc4 = (float)((ulonglong)local_bc8 >> 0x20);
    if (fStack_dbc != fStack_dc4) goto LAB_14624eeee;
  }
  else {
LAB_14624eeee:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_558,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_558,0);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.Data.AllocatorInstance.Data);
  }
  local_bc0 = 0x15;
  local_bb8 = 6;
  FVar9 = ::operator*((FFrameTime)local_3b0,(FMovieSceneSequenceTransform *)&DAT_00000015);
  ::FString::FString(&local_828,"Transform time 10");
  if ((int)*(undefined8 *)FVar9 == 6) {
    fStack_dbc = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
    fStack_dc4 = (float)((ulonglong)local_bb8 >> 0x20);
    if (fStack_dbc != fStack_dc4) goto LAB_14624efbd;
  }
  else {
LAB_14624efbd:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_548,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  local_cc8.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cc8.Breadcrumbs.ArrayNum = 0;
  local_cc8.Breadcrumbs.ArrayMax = 0;
  local_cc8.Mode = Sparse;
  FMovieSceneSequenceTransform::Inverse(&local_978,&local_318);
  local_c90 = 0xf;
  if (((local_cc8.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c90) &&
      ((FScriptContainerElement *)&local_c90 <
       local_cc8.Breadcrumbs.AllocatorInstance.Data + (longlong)local_cc8.Breadcrumbs.ArrayMax * 8))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_cc8.Breadcrumbs.ArrayNum;
  if (local_cc8.Breadcrumbs.ArrayNum == local_cc8.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_cc8,&local_cc8.Breadcrumbs.ArrayMax);
  }
  local_cc8.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_bb0 = 0x14;
  *(undefined8 *)(local_cc8.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c90;
  local_ba8 = 0xd;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_318,&local_1c0,(FFrameTime)0x14,&local_cc8);
  ::FString::FString(&local_838,"Inverse time 11");
  if ((pTVar10->bIsSet == true) && ((pTVar10->TypedValue).FrameNumber.Value == 0xd)) {
    fStack_dbc = (pTVar10->TypedValue).SubFrame;
    fStack_dc4 = (float)((ulonglong)local_ba8 >> 0x20);
    bVar6 = bVar7;
    if (fStack_dbc != fStack_dc4) goto LAB_14624f167;
  }
  else {
LAB_14624f167:
    bVar6 = true;
  }
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_538,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_538);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  uVar3 = local_cc8.Breadcrumbs._8_8_;
  local_cc8.Breadcrumbs._8_8_ = local_cc8.Breadcrumbs._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_cc8,0,&local_cc8.Breadcrumbs.ArrayMax);
  }
  local_c88 = 0x2d;
  if (((local_cc8.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c88) &&
      ((FScriptContainerElement *)&local_c88 <
       local_cc8.Breadcrumbs.AllocatorInstance.Data + (longlong)local_cc8.Breadcrumbs.ArrayMax * 8))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_cc8.Breadcrumbs.ArrayNum;
  if (local_cc8.Breadcrumbs.ArrayNum == local_cc8.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_cc8,&local_cc8.Breadcrumbs.ArrayMax);
  }
  local_cc8.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_ba0 = 0x14;
  *(undefined8 *)(local_cc8.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c88;
  local_b98 = 0x1c;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_318,&local_1cc,(FFrameTime)0x14,&local_cc8);
  ::FString::FString(&local_7a8,"Inverse time 12");
  if ((pTVar10->bIsSet == true) && ((pTVar10->TypedValue).FrameNumber.Value == 0x1c)) {
    fStack_dbc = (pTVar10->TypedValue).SubFrame;
    fStack_dc4 = (float)((ulonglong)local_b98 >> 0x20);
    bVar6 = bVar7;
    if (fStack_dbc != fStack_dc4) goto LAB_14624f323;
  }
  else {
LAB_14624f323:
    bVar6 = true;
  }
  if (bVar6) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_528,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_528,0);
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
  }
  if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
  }
  if (local_318.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_cc8.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cc8.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_978.NestedTransforms.AllocatorInstance.Data
             ,local_978.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_978.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_978.NestedTransforms.AllocatorInstance.Data);
  }
  local_b90 = 0xe;
  local_998.LinearTransform.Offset.FrameNumber.Value = 0xe;
  local_998.LinearTransform.Offset.SubFrame = 0.0;
  local_998.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_998.NestedTransforms.ArrayNum = 0;
  local_998.NestedTransforms.ArrayMax = 0;
  local_998.LinearTransform.TimeScale = 2.0;
  FMovieSceneSequenceTransform::AddLoop(&local_998,(FFrameNumber)0x14,(FFrameNumber)0x32);
  local_b88 = 0xd;
  local_b80 = 0x28;
  FVar9 = ::operator*((FFrameTime)local_3b8,(FMovieSceneSequenceTransform *)&DAT_0000000d);
  ::FString::FString(&local_7d8,"Transform time 13");
  if ((int)*(undefined8 *)FVar9 == 0x28) {
    fStack_dbc = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
    fStack_dc4 = (float)((ulonglong)local_b80 >> 0x20);
    if (fStack_dbc != fStack_dc4) goto LAB_14624f47f;
  }
  else {
LAB_14624f47f:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_518,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_518,0);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
  }
  local_b78 = 0x15;
  local_b70 = 0x1a;
  FVar9 = ::operator*((FFrameTime)local_3c0,(FMovieSceneSequenceTransform *)&DAT_00000015);
  ::FString::FString(&local_798,"Transform time 14");
  if ((int)*(undefined8 *)FVar9 == 0x1a) {
    fStack_dbc = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
    fStack_dc4 = (float)((ulonglong)local_b70 >> 0x20);
    if (fStack_dbc == fStack_dc4) goto LAB_14624f58f;
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_508,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_508,0);
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
LAB_14624f58f:
  if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.Data.AllocatorInstance.Data);
  }
  local_ce0.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce0.Breadcrumbs.ArrayNum = 0;
  local_ce0.Breadcrumbs.ArrayMax = 0;
  local_ce0.Mode = Sparse;
  FMovieSceneSequenceTransform::Inverse(&local_998,&local_2f8);
  local_c80 = 0x23;
  if (((local_ce0.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c80) &&
      ((FScriptContainerElement *)&local_c80 <
       local_ce0.Breadcrumbs.AllocatorInstance.Data + (longlong)local_ce0.Breadcrumbs.ArrayMax * 8))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_ce0.Breadcrumbs.ArrayNum;
  if (local_ce0.Breadcrumbs.ArrayNum == local_ce0.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_ce0,&local_ce0.Breadcrumbs.ArrayMax);
  }
  local_ce0.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_b68 = 0x28;
  *(undefined8 *)(local_ce0.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c80;
  local_b60 = 0xd;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_2f8,&local_1fc,(FFrameTime)0x28,&local_ce0);
  ::FString::FString(&local_788,"Inverse time 15");
  if ((pTVar10->bIsSet == true) && ((pTVar10->TypedValue).FrameNumber.Value == 0xd)) {
    fStack_dbc = (pTVar10->TypedValue).SubFrame;
    fStack_dc4 = (float)((ulonglong)local_b60 >> 0x20);
    if (fStack_dbc == fStack_dc4) {
      bVar4 = bVar7;
    }
  }
  if (bVar4) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_4f8,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_4f8);
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.Data.AllocatorInstance.Data);
  }
  uVar3 = local_ce0.Breadcrumbs._8_8_;
  local_ce0.Breadcrumbs._8_8_ = local_ce0.Breadcrumbs._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_ce0,0,&local_ce0.Breadcrumbs.ArrayMax);
  }
  local_c78 = 0x41;
  if (((local_ce0.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c78) &&
      ((FScriptContainerElement *)&local_c78 <
       local_ce0.Breadcrumbs.AllocatorInstance.Data + (longlong)local_ce0.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_ce0.Breadcrumbs.ArrayNum;
  if (local_ce0.Breadcrumbs.ArrayNum == local_ce0.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_ce0,&local_ce0.Breadcrumbs.ArrayMax);
  }
  local_ce0.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_b58 = 0x28;
  *(undefined8 *)(local_ce0.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c78;
  local_8b0.TypedValue.FrameNumber.Value = 0x1c;
  local_8b0.TypedValue.SubFrame = 0.0;
  local_8b0.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_2f8,&local_214,(FFrameTime)0x28,&local_ce0);
  ::FString::FString(&local_4e8,"Inverse time 16");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_4e8,pTVar10,&local_8b0);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if (local_2f8.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_ce0.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce0.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_998.NestedTransforms.AllocatorInstance.Data
             ,local_998.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_998.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_998.NestedTransforms.AllocatorInstance.Data);
  }
  local_b50 = 0xfffffff6;
  uStack_b4c = 0;
  local_c30.LinearTransform.Offset.FrameNumber.Value = -10;
  local_c30.LinearTransform.Offset.SubFrame = 0.0;
  local_c30.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c30.NestedTransforms.ArrayNum = 0;
  local_c30.NestedTransforms.ArrayMax = 0;
  local_c30.LinearTransform.TimeScale = 1.0;
  FMovieSceneSequenceTransform::AddLoop(&local_c30,(FFrameNumber)0x0,(FFrameNumber)0x1e);
  local_b48 = 0xfffffff4;
  uStack_b44 = 0;
  iVar8 = local_c30.NestedTransforms.ArrayNum;
  if (local_c30.NestedTransforms.ArrayNum == local_c30.NestedTransforms.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_c30.NestedTransforms.AllocatorInstance,
                       &local_c30.NestedTransforms.ArrayMax);
  }
  dVar2 = __real_4000000000000000;
  local_c30.NestedTransforms.ArrayNum = iVar8 + 1;
  pFVar13 = local_c30.NestedTransforms.AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant
            ((FMovieSceneTimeWarpVariant *)pFVar13,__real_4000000000000000);
  *(ulonglong *)(pFVar13 + 0x10) = CONCAT44(uStack_b44,local_b48);
  local_b40 = 0x12;
  *(FWeakObjectPtr *)(pFVar13 + 0x18) = (FWeakObjectPtr)0x0;
  local_b38.FrameNumber.Value = 4;
  local_b38.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_3c8,(FMovieSceneSequenceTransform *)&DAT_00000012);
  ::FString::FString(&local_4d8,"Transform time 17");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_4d8,(FFrameTime *)FVar9,&local_b38);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  local_b30 = 0x37;
  local_b28.FrameNumber.Value = 0x12;
  local_b28.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_3d0,(FMovieSceneSequenceTransform *)&DAT_00000037);
  ::FString::FString(&local_4c8,"Transform time 18");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_4c8,(FFrameTime *)FVar9,&local_b28);
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  local_cf8.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cf8.Breadcrumbs.ArrayNum = 0;
  local_cf8.Breadcrumbs.ArrayMax = 0;
  local_cf8.Mode = Sparse;
  FMovieSceneSequenceTransform::Inverse(&local_c30,&local_2d8);
  local_c70 = 0xf;
  if (((local_cf8.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c70) &&
      ((FScriptContainerElement *)&local_c70 <
       local_cf8.Breadcrumbs.AllocatorInstance.Data + (longlong)local_cf8.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_cf8.Breadcrumbs.ArrayNum;
  if (local_cf8.Breadcrumbs.ArrayNum == local_cf8.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_cf8,&local_cf8.Breadcrumbs.ArrayMax);
  }
  local_cf8.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_b20 = 4;
  *(undefined8 *)(local_cf8.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c70;
  local_8a4.TypedValue.FrameNumber.Value = 0x12;
  local_8a4.TypedValue.SubFrame = 0.0;
  local_8a4.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_2d8,&local_208,(FFrameTime)0x4,&local_cf8);
  ::FString::FString(&local_4b8,"Inverse time 17");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_4b8,pTVar10,&local_8a4);
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  uVar3 = local_cf8.Breadcrumbs._8_8_;
  local_cf8.Breadcrumbs._8_8_ = local_cf8.Breadcrumbs._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_cf8,0,&local_cf8.Breadcrumbs.ArrayMax);
  }
  local_c68 = 0x2d;
  if (((local_cf8.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c68) &&
      ((FScriptContainerElement *)&local_c68 <
       local_cf8.Breadcrumbs.AllocatorInstance.Data + (longlong)local_cf8.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_cf8.Breadcrumbs.ArrayNum;
  if (local_cf8.Breadcrumbs.ArrayNum == local_cf8.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_cf8,&local_cf8.Breadcrumbs.ArrayMax);
  }
  local_cf8.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_b18 = 0x12;
  *(undefined8 *)(local_cf8.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c68;
  local_898.TypedValue.FrameNumber.Value = 0x37;
  local_898.TypedValue.SubFrame = 0.0;
  local_898.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_2d8,&local_220,(FFrameTime)0x12,&local_cf8);
  ::FString::FString(&local_608,"Inverse time 18");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_608,pTVar10,&local_898);
  if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data.AllocatorInstance.Data);
  }
  if (local_2d8.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_cf8.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf8.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_c30.NestedTransforms.AllocatorInstance.Data
             ,local_c30.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_c30.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_c30.NestedTransforms.AllocatorInstance.Data);
  }
  local_b10 = 0xfffffff6;
  uStack_b0c = 0;
  local_bf0.LinearTransform.Offset.FrameNumber.Value = -10;
  local_bf0.LinearTransform.Offset.SubFrame = 0.0;
  local_bf0.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bf0.NestedTransforms.ArrayNum = 0;
  local_bf0.NestedTransforms.ArrayMax = 0;
  local_bf0.LinearTransform.TimeScale = 1.0;
  local_b08 = 0xfffffff4;
  uStack_b04 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&local_bf0.NestedTransforms.AllocatorInstance,
                     &local_bf0.NestedTransforms.ArrayMax);
  pFVar13 = local_bf0.NestedTransforms.AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  local_bf0.NestedTransforms.ArrayNum = iVar8 + 1;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant
            ((FMovieSceneTimeWarpVariant *)pFVar13,dVar2);
  *(ulonglong *)(pFVar13 + 0x10) = CONCAT44(uStack_b04,local_b08);
  *(FWeakObjectPtr *)(pFVar13 + 0x18) = (FWeakObjectPtr)0x0;
  FMovieSceneSequenceTransform::AddLoop(&local_bf0,(FFrameNumber)0x0,(FFrameNumber)0xe);
  local_b00 = 0x13;
  local_af8.FrameNumber.Value = 6;
  local_af8.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_3d8,(FMovieSceneSequenceTransform *)&DAT_00000013);
  ::FString::FString(&local_618,"Transform time 17");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_618,(FFrameTime *)FVar9,&local_af8);
  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data.AllocatorInstance.Data);
  }
  local_af0 = 0x20;
  local_ae8.FrameNumber.Value = 4;
  local_ae8.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_3e0,(FMovieSceneSequenceTransform *)&DAT_00000020);
  ::FString::FString(&local_628,"Transform time 18");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_628,(FFrameTime *)FVar9,&local_ae8);
  if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data.AllocatorInstance.Data);
  }
  local_d28.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d28.Breadcrumbs.ArrayNum = 0;
  local_d28.Breadcrumbs.ArrayMax = 0;
  local_d28.Mode = Sparse;
  FMovieSceneSequenceTransform::Inverse(&local_bf0,&local_2b8);
  local_c60 = 7;
  if (((local_d28.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c60) &&
      ((FScriptContainerElement *)&local_c60 <
       local_d28.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d28.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d28.Breadcrumbs.ArrayNum;
  if (local_d28.Breadcrumbs.ArrayNum == local_d28.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d28,&local_d28.Breadcrumbs.ArrayMax);
  }
  local_d28.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_ae0 = 6;
  *(undefined8 *)(local_d28.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c60;
  local_88c.TypedValue.FrameNumber.Value = 0x13;
  local_88c.TypedValue.SubFrame = 0.0;
  local_88c.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_2b8,&local_22c,(FFrameTime)0x6,&local_d28);
  ::FString::FString(&local_638,"Inverse time 17");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_638,pTVar10,&local_88c);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  uVar3 = local_d28.Breadcrumbs._8_8_;
  local_d28.Breadcrumbs._8_8_ = local_d28.Breadcrumbs._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_d28,0,&local_d28.Breadcrumbs.ArrayMax);
  }
  local_c58 = 0x1c;
  if (((local_d28.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c58) &&
      ((FScriptContainerElement *)&local_c58 <
       local_d28.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d28.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d28.Breadcrumbs.ArrayNum;
  if (local_d28.Breadcrumbs.ArrayNum == local_d28.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d28,&local_d28.Breadcrumbs.ArrayMax);
  }
  local_d28.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_ad8 = 4;
  *(undefined8 *)(local_d28.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c58;
  local_880.TypedValue.FrameNumber.Value = 0x20;
  local_880.TypedValue.SubFrame = 0.0;
  local_880.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_2b8,&local_238,(FFrameTime)0x4,&local_d28);
  ::FString::FString(&local_648,"Inverse time 18");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_648,pTVar10,&local_880);
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if (local_2b8.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_d28.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_bf0.NestedTransforms.AllocatorInstance.Data
             ,local_bf0.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_bf0.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_bf0.NestedTransforms.AllocatorInstance.Data);
  }
  local_ad0 = 0xffffff9c;
  uStack_acc = 0;
  local_c10.LinearTransform.Offset.FrameNumber.Value = -100;
  local_c10.LinearTransform.Offset.SubFrame = 0.0;
  local_c10.LinearTransform.TimeScale = 1.0;
  local_c10.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c10.NestedTransforms.ArrayNum = 0;
  local_c10.NestedTransforms.ArrayMax = 0;
  local_ac8 = 0xe;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&local_c10.NestedTransforms.AllocatorInstance,
                     &local_c10.NestedTransforms.ArrayMax);
  pFVar13 = local_c10.NestedTransforms.AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  local_c10.NestedTransforms.ArrayNum = iVar8 + 1;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant
            ((FMovieSceneTimeWarpVariant *)pFVar13,dVar2);
  *(undefined8 *)(pFVar13 + 0x10) = local_ac8;
  *(FWeakObjectPtr *)(pFVar13 + 0x18) = (FWeakObjectPtr)0x0;
  FMovieSceneSequenceTransform::AddLoop(&local_c10,(FFrameNumber)0x14,(FFrameNumber)0x32);
  local_ac0 = 0x71;
  local_ab8.FrameNumber.Value = 0x28;
  local_ab8.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_3e8,(FMovieSceneSequenceTransform *)0x71);
  ::FString::FString(&local_658,"Transform time 19");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_658,(FFrameTime *)FVar9,&local_ab8);
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  local_ab0 = 0x79;
  local_aa8.FrameNumber.Value = 0x1a;
  local_aa8.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_3f0,(FMovieSceneSequenceTransform *)0x79);
  ::FString::FString(&local_668,"Transform time 20");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_668,(FFrameTime *)FVar9,&local_aa8);
  if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data.AllocatorInstance.Data);
  }
  local_d10.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d10.Breadcrumbs.ArrayNum = 0;
  local_d10.Breadcrumbs.ArrayMax = 0;
  local_d10.Mode = Sparse;
  FMovieSceneSequenceTransform::Inverse(&local_c10,&local_390);
  local_c50 = 0x23;
  if (((local_d10.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c50) &&
      ((FScriptContainerElement *)&local_c50 <
       local_d10.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d10.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d10.Breadcrumbs.ArrayNum;
  if (local_d10.Breadcrumbs.ArrayNum == local_d10.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d10,&local_d10.Breadcrumbs.ArrayMax);
  }
  local_d10.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_aa0 = 0x28;
  *(undefined8 *)(local_d10.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c50;
  local_874.TypedValue.FrameNumber.Value = 0x71;
  local_874.TypedValue.SubFrame = 0.0;
  local_874.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_390,&local_244,(FFrameTime)0x28,&local_d10);
  ::FString::FString(&local_5f8,"Inverse time 21");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_5f8,pTVar10,&local_874);
  if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
  }
  uVar3 = local_d10.Breadcrumbs._8_8_;
  local_d10.Breadcrumbs._8_8_ = local_d10.Breadcrumbs._8_8_ & 0xffffffff00000000;
  if ((longlong)uVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&local_d10,0,&local_d10.Breadcrumbs.ArrayMax);
  }
  local_c48 = 0x41;
  if (((local_d10.Breadcrumbs.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c48) &&
      ((FScriptContainerElement *)&local_c48 <
       local_d10.Breadcrumbs.AllocatorInstance.Data + (longlong)local_d10.Breadcrumbs.ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d10.Breadcrumbs.ArrayNum;
  if (local_d10.Breadcrumbs.ArrayNum == local_d10.Breadcrumbs.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&local_d10,&local_d10.Breadcrumbs.ArrayMax);
  }
  local_d10.Breadcrumbs.ArrayNum = iVar8 + 1;
  local_a98 = 0x28;
  *(undefined8 *)(local_d10.Breadcrumbs.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c48;
  local_868.TypedValue.FrameNumber.Value = 0x80;
  local_868.TypedValue.SubFrame = 0.0;
  local_868.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_390,&local_250,(FFrameTime)0x28,&local_d10);
  ::FString::FString(&local_678,"Inverse time 22");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_678,pTVar10,&local_868);
  if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.Data.AllocatorInstance.Data);
  }
  if (local_390.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_d10.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d10.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_c10.NestedTransforms.AllocatorInstance.Data
             ,local_c10.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_c10.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_c10.NestedTransforms.AllocatorInstance.Data);
  }
  dVar2 = __real_3ff0000000000000;
  local_da8.Data = (FScriptContainerElement *)0x0;
  local_da0 = 0;
  local_a90 = 0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant
            (&local_90.TimeScale,__real_3ff0000000000000);
  local_90.Offset.FrameNumber.Value = 0;
  local_90.Offset.SubFrame = 0.0;
  local_90.Warping.Start.Value = 0;
  local_90.Warping.End.Value = 0;
  if (((local_da8.Data <= &local_90) &&
      (&local_90 <
       (FMovieSceneNestedSequenceTransform *)(local_da8.Data + (longlong)local_da0._4_4_ * 0x20)))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = (int)local_da0;
  if ((int)local_da0 == local_da0._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_da8,(int *)((longlong)&local_da0 + 4));
  }
  local_da0._0_4_ = iVar8 + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)(local_da8.Data + (longlong)iVar8 * 0x20),
             &local_90);
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_90);
  pFVar11 = FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_70,0.0);
  local_190.TimeScale.Variant.Data = *&(pFVar11->Variant).Data;
  local_190.TimeScale.Variant.WeakCustomGetter.WeakPtr = (pFVar11->Variant).WeakCustomGetter.WeakPtr
  ;
  local_190.Offset.FrameNumber.Value = 0;
  local_190.Offset.SubFrame = 0.0;
  local_190.Warping.Start.Value = 0;
  local_190.Warping.End.Value = 0;
  FMovieSceneNumericVariant::MakeWeakUnsafe((FMovieSceneNumericVariant *)&local_190);
  if (((local_da8.Data <= &local_190) &&
      (&local_190 <
       (FMovieSceneNestedSequenceTransform *)(local_da8.Data + (longlong)local_da0._4_4_ * 0x20)))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((int)local_da0 == local_da0._4_4_) {
    local_da0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&local_da8,(int *)((longlong)&local_da0 + 4));
  }
  lVar12 = (longlong)(int)local_da0;
  local_da0._0_4_ = (int)local_da0 + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)(local_da8.Data + lVar12 * 0x20),&local_190);
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_190);
  local_a88.FrameNumber.Value = 0x1e;
  local_a88.SubFrame = 0.0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_b0.TimeScale,dVar2);
  local_b0.Offset = local_a88;
  local_b0.Warping.Start.Value = 0;
  local_b0.Warping.End.Value = 0;
  if (((local_da8.Data <= &local_b0) &&
      (&local_b0 <
       (FMovieSceneNestedSequenceTransform *)(local_da8.Data + (longlong)local_da0._4_4_ * 0x20)))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = (int)local_da0;
  if ((int)local_da0 == local_da0._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_da8,(int *)((longlong)&local_da0 + 4));
  }
  local_da0 = CONCAT44(local_da0._4_4_,iVar8 + 1);
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)(local_da8.Data + (longlong)iVar8 * 0x20),
             &local_b0);
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_b0);
  local_a80 = 0x28;
  local_a78.FrameNumber.Value = 0x1e;
  local_a78.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_3f8,(FMovieSceneSequenceTransform *)&DAT_00000028);
  ::FString::FString(&local_688,"Outer time 40 through 0 timescale with 30 offset");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_688,(FFrameTime *)FVar9,&local_a78);
  if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.Data.AllocatorInstance.Data);
  }
  local_a68.FrameNumber.Value = 0x1e;
  local_a68.SubFrame = 0.0;
  local_a70 = 0;
  FVar9 = ::operator*((FFrameTime)local_400,(FMovieSceneSequenceTransform *)0x0);
  ::FString::FString(&local_698,"Outer time 0 through 0 timescale with 30 offset");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_698,(FFrameTime *)FVar9,&local_a68);
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
  local_a60 = 0xad;
  local_a58.FrameNumber.Value = 0x1e;
  local_a58.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_408,(FMovieSceneSequenceTransform *)0xad);
  ::FString::FString(&local_6a8,"Outer time 173 through 0 timescale with 30 offset");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_6a8,(FFrameTime *)FVar9,&local_a58);
  if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_da8.Data,(int)local_da0);
  if ((FMovieSceneNestedSequenceTransform *)local_da8.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_da8.Data);
  }
  local_d78.LinearTransform.TimeScale = 1.0;
  local_d78.LinearTransform.Offset.FrameNumber.Value = 0;
  local_d78.LinearTransform.Offset.SubFrame = 0.0;
  local_d78.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d78.NestedTransforms.ArrayNum = 0;
  local_d78.NestedTransforms.ArrayMax = 0;
  local_a50.Value = -10;
  fStack_a4c = 0.0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_130.TimeScale,dVar2);
  local_130.Offset.SubFrame = fStack_a4c;
  local_130.Offset.FrameNumber.Value = local_a50.Value;
  local_130.Warping.Start.Value = 0;
  local_130.Warping.End.Value = 0;
  if (((local_d78.NestedTransforms.AllocatorInstance.Data <= &local_130) &&
      (&local_130 <
       (FMovieSceneNestedSequenceTransform *)
       (local_d78.NestedTransforms.AllocatorInstance.Data +
       (longlong)local_d78.NestedTransforms.ArrayMax * 0x20))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d78.NestedTransforms.ArrayNum;
  if (local_d78.NestedTransforms.ArrayNum == local_d78.NestedTransforms.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_d78.NestedTransforms.AllocatorInstance,
                       &local_d78.NestedTransforms.ArrayMax);
  }
  local_d78.NestedTransforms.ArrayNum = iVar8 + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)
             (local_d78.NestedTransforms.AllocatorInstance.Data + (longlong)iVar8 * 0x20),&local_130
            );
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_130);
  pFVar11 = FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_60,0.0);
  local_170.TimeScale.Variant.Data = *&(pFVar11->Variant).Data;
  local_170.TimeScale.Variant.WeakCustomGetter.WeakPtr = (pFVar11->Variant).WeakCustomGetter.WeakPtr
  ;
  local_170.Offset.FrameNumber.Value = 0;
  local_170.Offset.SubFrame = 0.0;
  local_170.Warping.Start.Value = 0;
  local_170.Warping.End.Value = 0;
  FMovieSceneNumericVariant::MakeWeakUnsafe((FMovieSceneNumericVariant *)&local_170);
  if (((local_d78.NestedTransforms.AllocatorInstance.Data <= &local_170) &&
      (&local_170 <
       (FMovieSceneNestedSequenceTransform *)
       (local_d78.NestedTransforms.AllocatorInstance.Data +
       (longlong)local_d78.NestedTransforms.ArrayMax * 0x20))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (local_d78.NestedTransforms.ArrayNum == local_d78.NestedTransforms.ArrayMax) {
    local_d78.NestedTransforms.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&local_d78.NestedTransforms.AllocatorInstance,
                    &local_d78.NestedTransforms.ArrayMax);
  }
  lVar12 = (longlong)local_d78.NestedTransforms.ArrayNum;
  local_d78.NestedTransforms.ArrayNum = local_d78.NestedTransforms.ArrayNum + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)
             (local_d78.NestedTransforms.AllocatorInstance.Data + lVar12 * 0x20),&local_170);
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_170);
  local_a48.FrameNumber.Value = 0x1e;
  local_a48.SubFrame = 0.0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_110.TimeScale,dVar2);
  local_110.Offset = local_a48;
  local_110.Warping.Start.Value = 0;
  local_110.Warping.End.Value = 0;
  if (((local_d78.NestedTransforms.AllocatorInstance.Data <= &local_110) &&
      (&local_110 <
       (FMovieSceneNestedSequenceTransform *)
       (local_d78.NestedTransforms.AllocatorInstance.Data +
       (longlong)local_d78.NestedTransforms.ArrayMax * 0x20))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d78.NestedTransforms.ArrayNum;
  if (local_d78.NestedTransforms.ArrayNum == local_d78.NestedTransforms.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_d78.NestedTransforms.AllocatorInstance,
                       &local_d78.NestedTransforms.ArrayMax);
  }
  local_d78.NestedTransforms.ArrayNum = iVar8 + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)
             (local_d78.NestedTransforms.AllocatorInstance.Data + (longlong)iVar8 * 0x20),&local_110
            );
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_110);
  FMovieSceneSequenceTransform::Inverse(&local_d78,&local_738);
  if (local_738.NestedTransforms.ArrayNum == 0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_6b8,L"Inverse of a transform with zero timescale is not correctly warping");
    (*pcVar1)(this,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  local_a40 = 0x28;
  local_434.bIsSet = false;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_738,&local_25c,(FFrameTime)0x28);
  ::FString::FString(&local_6c8,"Inner time 40 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_6c8,pTVar10,&local_434);
  if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
  }
  local_440.bIsSet = false;
  local_a38 = 0;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_738,&local_268,(FFrameTime)0x0);
  ::FString::FString(&local_6d8,"Inner time 0 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_6d8,pTVar10,&local_440);
  if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
  }
  local_a30 = 0xad;
  local_44c.bIsSet = false;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_738,&local_274,(FFrameTime)0xad);
  ::FString::FString(&local_6e8,"Inner time 173 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_6e8,pTVar10,&local_44c);
  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
  }
  local_a28 = 0x1e;
  local_8c8.TypedValue.FrameNumber.Value = 10;
  local_8c8.TypedValue.SubFrame = 0.0;
  local_8c8.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_738,&local_28c,(FFrameTime)0x1e);
  ::FString::FString(&local_708,"Inner time 30 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_708,pTVar10,&local_8c8);
  if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.Data.AllocatorInstance.Data);
  }
  if (local_738.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.NestedTransforms.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_d78.NestedTransforms.AllocatorInstance.Data
             ,local_d78.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_d78.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_d78.NestedTransforms.AllocatorInstance.Data);
  }
  local_d98.LinearTransform.TimeScale = 1.0;
  local_d98.LinearTransform.Offset.FrameNumber.Value = 0;
  local_d98.LinearTransform.Offset.SubFrame = 0.0;
  local_d98.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d98.NestedTransforms.ArrayNum = 0;
  local_d98.NestedTransforms.ArrayMax = 0;
  local_a20.Value = -10;
  fStack_a1c = 0.0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_f0.TimeScale,dVar2);
  local_f0.Offset.SubFrame = fStack_a1c;
  local_f0.Offset.FrameNumber.Value = local_a20.Value;
  local_f0.Warping.Start.Value = 0;
  local_f0.Warping.End.Value = 0;
  if (((local_d98.NestedTransforms.AllocatorInstance.Data <= &local_f0) &&
      (&local_f0 <
       (FMovieSceneNestedSequenceTransform *)
       (local_d98.NestedTransforms.AllocatorInstance.Data +
       (longlong)local_d98.NestedTransforms.ArrayMax * 0x20))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d98.NestedTransforms.ArrayNum;
  if (local_d98.NestedTransforms.ArrayNum == local_d98.NestedTransforms.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_d98.NestedTransforms.AllocatorInstance,
                       &local_d98.NestedTransforms.ArrayMax);
  }
  local_d98.NestedTransforms.ArrayNum = iVar8 + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)
             (local_d98.NestedTransforms.AllocatorInstance.Data + (longlong)iVar8 * 0x20),&local_f0)
  ;
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_f0);
  pFVar11 = FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_50,0.0);
  local_150.TimeScale.Variant.Data = *&(pFVar11->Variant).Data;
  local_150.TimeScale.Variant.WeakCustomGetter.WeakPtr = (pFVar11->Variant).WeakCustomGetter.WeakPtr
  ;
  local_150.Offset.FrameNumber.Value = 0;
  local_150.Offset.SubFrame = 0.0;
  local_150.Warping.Start.Value = 0;
  local_150.Warping.End.Value = 0;
  FMovieSceneNumericVariant::MakeWeakUnsafe((FMovieSceneNumericVariant *)&local_150);
  if (((local_d98.NestedTransforms.AllocatorInstance.Data <= &local_150) &&
      (&local_150 <
       (FMovieSceneNestedSequenceTransform *)
       (local_d98.NestedTransforms.AllocatorInstance.Data +
       (longlong)local_d98.NestedTransforms.ArrayMax * 0x20))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (local_d98.NestedTransforms.ArrayNum == local_d98.NestedTransforms.ArrayMax) {
    local_d98.NestedTransforms.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,&local_d98.NestedTransforms.AllocatorInstance,
                    &local_d98.NestedTransforms.ArrayMax);
  }
  lVar12 = (longlong)local_d98.NestedTransforms.ArrayNum;
  local_d98.NestedTransforms.ArrayNum = local_d98.NestedTransforms.ArrayNum + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)
             (local_d98.NestedTransforms.AllocatorInstance.Data + lVar12 * 0x20),&local_150);
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_150);
  local_a18.FrameNumber.Value = 0x1e;
  local_a18.SubFrame = 0.0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&local_d0.TimeScale,dVar2);
  local_d0.Offset = local_a18;
  local_d0.Warping.Start.Value = 0;
  local_d0.Warping.End.Value = 0;
  if (((local_d98.NestedTransforms.AllocatorInstance.Data <= &local_d0) &&
      (&local_d0 <
       (FMovieSceneNestedSequenceTransform *)
       (local_d98.NestedTransforms.AllocatorInstance.Data +
       (longlong)local_d98.NestedTransforms.ArrayMax * 0x20))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = local_d98.NestedTransforms.ArrayNum;
  if (local_d98.NestedTransforms.ArrayNum == local_d98.NestedTransforms.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_d98.NestedTransforms.AllocatorInstance,
                       &local_d98.NestedTransforms.ArrayMax);
  }
  local_d98.NestedTransforms.ArrayNum = iVar8 + 1;
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
            ((FMovieSceneNestedSequenceTransform *)
             (local_d98.NestedTransforms.AllocatorInstance.Data + (longlong)iVar8 * 0x20),&local_d0)
  ;
  FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_d0);
  local_778.LinearTransform.TimeScale = 1.0;
  local_778.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_778.NestedTransforms.ArrayNum = 0;
  local_778.NestedTransforms.ArrayMax = 0;
  local_778.LinearTransform.Offset.FrameNumber.Value = 5;
  local_778.LinearTransform.Offset.SubFrame = 0.0;
  FMovieSceneSequenceTransform::operator*(&local_778,&local_758,&local_d98);
  local_9a0 = 0x28;
  local_a08.FrameNumber.Value = 0x23;
  local_a08.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_410,(FMovieSceneSequenceTransform *)&DAT_00000028);
  ::FString::FString(&local_6f8,"Subsequence frame through zero timescale transform");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_6f8,(FFrameTime *)FVar9,&local_a08);
  if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
  }
  local_9f8.FrameNumber.Value = 0x23;
  local_9f8.SubFrame = 0.0;
  local_a00 = 0;
  FVar9 = ::operator*((FFrameTime)local_360,(FMovieSceneSequenceTransform *)0x0);
  ::FString::FString(&local_718,"Subsequence frame through zero timescale transform");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_718,(FFrameTime *)FVar9,&local_9f8);
  if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data.AllocatorInstance.Data);
  }
  local_9f0 = 0xad;
  local_9e8.FrameNumber.Value = 0x23;
  local_9e8.SubFrame = 0.0;
  FVar9 = ::operator*((FFrameTime)local_368,(FMovieSceneSequenceTransform *)0xad);
  ::FString::FString(&local_488,"Subsequence frame through zero timescale transform");
  FAutomationTestBase::TestEqual<FFrameTime>
            ((FAutomationTestBase *)this,&local_488,(FFrameTime *)FVar9,&local_9e8);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  FMovieSceneSequenceTransform::Inverse(&local_758,&local_478);
  local_9e0 = 0x28;
  local_458.bIsSet = false;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_478,&local_298,(FFrameTime)0x28);
  ::FString::FString(&local_498,"Inner time 40 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_498,pTVar10,&local_458);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  local_41c.bIsSet = false;
  local_9d8 = 0;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_478,&local_1d8,(FFrameTime)0x0);
  ::FString::FString(&local_4a8,"Inner time 0 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_4a8,pTVar10,&local_41c);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  local_c40 = 0xad;
  local_428.bIsSet = false;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_478,&local_1e4,(FFrameTime)0xad);
  ::FString::FString(&local_5d8,"Inner time 173 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_5d8,pTVar10,&local_428);
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  local_c38 = 0x23;
  local_8bc.TypedValue.FrameNumber.Value = 10;
  local_8bc.TypedValue.SubFrame = 0.0;
  local_8bc.bIsSet = true;
  pTVar10 = FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_478,&local_1f0,(FFrameTime)0x23);
  ::FString::FString(&local_5e8,"Inner time 35 through inf timescale with 10 outer offset");
  FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
            ((FAutomationTestBase *)this,&local_5e8,pTVar10,&local_8bc);
  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
  }
  if (local_478.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.NestedTransforms.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_758.NestedTransforms.AllocatorInstance.Data
             ,local_758.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_758.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_758.NestedTransforms.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_778.NestedTransforms.AllocatorInstance.Data
             ,local_778.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_778.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_778.NestedTransforms.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_d98.NestedTransforms.AllocatorInstance.Data
             ,local_d98.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_d98.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_d98.NestedTransforms.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1462516b0

FString * __thiscall
FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest::GetBeautifiedTestName
          (FMovieSceneSubSectionCoreWarpingAndScalingTransformsTest *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.Core.WarpingAndScalingTransforms");
  return __return_storage_ptr__;
}

