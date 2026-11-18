// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// GetTestFlags @ 146270910

EAutomationTestFlags __thiscall
FMovieSceneBlendTargetComponentTest::GetTestFlags(FMovieSceneBlendTargetComponentTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146270920

bool __thiscall
FMovieSceneBlendTargetComponentTest::IsStressTest(FMovieSceneBlendTargetComponentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146270930

uint __thiscall
FMovieSceneBlendTargetComponentTest::GetRequiredDeviceNum(FMovieSceneBlendTargetComponentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146270940

FString * __thiscall
FMovieSceneBlendTargetComponentTest::GetTestSourceFileName
          (FMovieSceneBlendTargetComponentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146270970

int __thiscall
FMovieSceneBlendTargetComponentTest::GetTestSourceFileLine
          (FMovieSceneBlendTargetComponentTest *this)

{
  return 0x162;
}

// GetTests @ 146270980

/* WARNING: Removing unreachable block (ram,0x000146270a6d) */
/* WARNING: Removing unreachable block (ram,0x000146270b38) */

void __thiscall
FMovieSceneBlendTargetComponentTest::GetTests
          (FMovieSceneBlendTargetComponentTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.EntitySystem.BlendTargetComponent");
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

// RunTest @ 146270ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneBlendTargetComponentTest::RunTest
          (FMovieSceneBlendTargetComponentTest *this,FString *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  float fVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FHierarchicalBlendTarget *pFVar10;
  TArrayView<short_const_,int> *pTVar11;
  byte bVar12;
  short sVar13;
  longlong lVar14;
  short sVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_578 [32];
  FIdentityFunctor local_558 [8];
  FMovieSceneBlendTargetComponentTest *local_550;
  short local_548 [2];
  short local_544 [2];
  short local_540 [2];
  short local_53c [2];
  undefined4 **local_538;
  undefined4 **local_530;
  undefined4 **local_528;
  undefined4 **local_520;
  undefined4 *local_518;
  TArray<short,TSizedDefaultAllocator<32>_> local_510;
  TArray<short,TSizedDefaultAllocator<32>_> local_500;
  undefined4 local_4f0;
  undefined4 local_4ec;
  TArray<short,TSizedDefaultAllocator<32>_> local_4e8;
  TArray<short,TSizedDefaultAllocator<32>_> local_4d8;
  short local_4c8 [2];
  short local_4c4 [2];
  int local_4c0;
  short local_4bc [2];
  short local_4b8 [2];
  int local_4b4;
  longlong *local_4b0;
  uint uStack_4a8;
  uint uStack_4a4;
  TBitArray<FDefaultBitArrayAllocator> *local_4a0;
  undefined4 uStack_498;
  uint uStack_494;
  uint local_490;
  undefined4 uStack_48c;
  int iStack_488;
  undefined4 uStack_484;
  longlong *local_480;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_478;
  undefined8 uStack_458;
  FScriptContainerElement *local_448;
  int iStack_440;
  FScriptContainerElement *local_438;
  int iStack_430;
  FScriptContainerElement *local_428;
  int iStack_420;
  FScriptContainerElement *local_418;
  int iStack_410;
  FScriptContainerElement *local_408;
  int iStack_400;
  FScriptContainerElement *local_3f8;
  int iStack_3f0;
  FScriptContainerElement *local_3e8;
  int iStack_3e0;
  FScriptContainerElement *local_3d8;
  int iStack_3d0;
  short *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  short *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  short *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  TArrayView<short_const_,int> local_398;
  TArrayView<short_const_,int> local_388;
  TArrayView<short_const_,int> local_378;
  TArrayView<short_const_,int> local_368;
  TArrayView<short_const_,int> local_358;
  TArrayView<short_const_,int> local_348;
  TArrayView<short_const_,int> local_338;
  TArrayView<short_const_,int> local_328;
  TArrayView<short_const_,int> local_318;
  TArrayView<short_const_,int> local_308;
  TArrayView<short_const_,int> local_2f8;
  TArrayView<short_const_,int> local_2e8;
  TArrayView<short_const_,int> local_2d8;
  TArrayView<short_const_,int> local_2c8;
  TArrayView<short_const_,int> local_2b8 [2];
  undefined4 local_28c;
  FHierarchicalBlendTarget local_288;
  FHierarchicalBlendTarget local_278;
  FHierarchicalBlendTarget local_268;
  short local_258 [8];
  short local_248 [8];
  short local_238 [8];
  FHierarchicalBlendTarget local_228;
  FHierarchicalBlendTarget local_218;
  FHierarchicalBlendTarget local_208;
  FHierarchicalBlendTarget local_1f8;
  undefined1 local_1e8 [32];
  uint *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  FHierarchicalBlendTarget local_198;
  FHierarchicalBlendTarget local_188;
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> local_178;
  FHierarchicalBlendTarget local_128;
  FHierarchicalBlendTarget local_118;
  FHierarchicalBlendTarget local_108;
  FHierarchicalBlendTarget local_f8;
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> local_e8;
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_578;
  local_550 = this;
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_278);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_278,0);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_278,100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_278,-100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_278,-10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_278,10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_278,500);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_278,1000);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Inline Basic Capacity",(uint)local_278.Capacity,7);
  local_3b8 = local_248;
  uStack_3b0 = 7;
  local_338._12_4_ = uStack_3ac;
  local_338.ArrayNum = 7;
  local_248[0] = 1000;
  local_248[1] = 500;
  local_248[2] = 100;
  local_248[3] = 10;
  local_248[4] = 0;
  local_248[5] = -10;
  local_248[6] = 0xff9c;
  local_338.DataPtr = local_3b8;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_278,&local_338,L"Inline Basic");
  UE::MovieScene::GetTypeHash(&local_278);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_278);
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_288);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,0);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,-100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,-10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,500);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,1000);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,0);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,-100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,-10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,500);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_288,1000);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Inline Duplicate Capacity",(uint)local_288.Capacity,7);
  local_3a8 = local_238;
  uStack_3a0 = 7;
  local_328._12_4_ = uStack_39c;
  local_328.ArrayNum = 7;
  local_238[0] = 1000;
  local_238[1] = 500;
  local_238[2] = 100;
  local_238[3] = 10;
  local_238[4] = 0;
  local_238[5] = -10;
  local_238[6] = 0xff9c;
  local_328.DataPtr = local_3a8;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_288,&local_328,L"Inline Duplicate");
  UE::MovieScene::GetTypeHash(&local_288);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_288);
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_268);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_268,0);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_268,100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_268,-100);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_268,-10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_268,10);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_268,500);
  UE::MovieScene::FHierarchicalBlendTarget::Add(&local_268,1000);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Inline Basic Capacity",(uint)local_268.Capacity,7);
  local_3c8 = local_258;
  uStack_3c0 = 7;
  local_318._12_4_ = uStack_3bc;
  local_318.ArrayNum = 7;
  local_258[0] = 1000;
  local_258[1] = 500;
  local_258[2] = 100;
  local_258[3] = 10;
  local_258[4] = 0;
  local_258[5] = -10;
  local_258[6] = 0xff9c;
  local_318.DataPtr = local_3c8;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_268,&local_318,L"Inline Basic");
  UE::MovieScene::GetTypeHash(&local_268);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_268);
  rand();
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_1f8);
  fVar4 = __real_3f1c4339;
  lVar19 = 0x19;
  lVar14 = 0x19;
  local_178.Elements._0_8_ = 0;
  local_178.Elements._8_8_ = 0;
  local_178.Elements._32_8_ = 0;
  uVar17 = 0;
  local_178.Elements._40_4_ = 0;
  local_178.Elements._44_4_ = 0x80;
  local_178.Elements._48_4_ = 0xffffffff;
  local_178.Elements._52_4_ = 0;
  local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_178.HashSize = 0;
  do {
    uVar8 = rand();
    iVar9 = (int)((float)(uVar8 & 0x7fff) * fVar4);
    local_548[0] = 20000;
    if (iVar9 < 20000) {
      local_548[0] = (short)iVar9;
    }
    local_548[0] = local_548[0] + -10000;
    UE::MovieScene::FHierarchicalBlendTarget::Add(&local_1f8,local_548[0]);
    TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Emplace<short_const_&>
              (&local_178,local_4c8,(bool *)local_548);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Array(&local_178,&local_4d8);
  AlgoImpl::IntroSortInternal<short,int,FIdentityFunctor,TGreater<void>_>
            ((short *)local_4d8.AllocatorInstance.Data,local_4d8.ArrayNum,local_558[0],
             (TGreater<void>)local_558[0]);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Basic Heap Capacity",(uint)local_1f8.Capacity,0x20);
  local_438 = local_4d8.AllocatorInstance.Data;
  if ((local_4d8.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iStack_430 = local_4d8.ArrayNum;
  local_308.DataPtr = (short *)local_438;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_1f8,&local_308,L"Basic Heap");
  UE::MovieScene::GetTypeHash(&local_1f8);
  if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.AllocatorInstance.Data);
  }
  local_178.HashSize = 0;
  if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178.Elements);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_1f8);
  rand();
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_208);
  local_1e8._0_8_ = 0;
  lVar14 = 0x19;
  local_1e8._8_8_ = 0;
  local_1c8 = (uint *)0x0;
  local_1c0 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  do {
    uVar8 = rand();
    iVar9 = (int)((float)(uVar8 & 0x7fff) * fVar4);
    local_544[0] = 20000;
    if (iVar9 < 20000) {
      local_544[0] = (short)iVar9;
    }
    local_544[0] = local_544[0] + -10000;
    UE::MovieScene::FHierarchicalBlendTarget::Add(&local_208,local_544[0]);
    TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Emplace<short_const_&>
              ((TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> *)local_1e8,local_4c4,
               (bool *)local_544);
    uVar8 = local_1c0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uStack_4a4 = 1;
  local_490 = 0;
  uStack_494 = local_490;
  if (local_1c0 != 0) {
    puVar18 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar18 = local_1c8;
    }
    uVar20 = *puVar18;
    local_490 = 0;
    uVar17 = 0;
    while (uVar20 == 0) {
      lVar14 = (longlong)(int)uVar17;
      local_490 = local_490 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_494 = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_146271290;
      uVar20 = (puVar18 + 1)[lVar14];
    }
    uStack_4a4 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_4a4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_4c0 = (int)lVar14;
    uStack_494 = (local_490 - 1) + local_4c0;
    if ((int)local_1c0 < (int)uStack_494) {
      uStack_494 = local_1c0;
    }
  }
LAB_146271290:
  local_4b0 = (longlong *)local_1e8;
  uStack_48c = local_28c;
  local_4a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
  uVar20 = local_1c0 & 0xffffffe0;
  iStack_488 = local_1e8._8_4_ - local_1b4;
  uStack_498 = 0xffffffff;
  TStack_478.CurrentBitIndex = uStack_494;
  TStack_478.UnvisitedBitMask = 0xffffffff;
  TStack_478._padding_ = CONCAT44(uStack_4a4,uVar17);
  iVar9 = (int)local_1c0 >> 5;
  TStack_478._28_4_ = local_28c;
  TStack_478.BaseBitIndex = local_490;
  uStack_458 = CONCAT44(uStack_484,iStack_488);
  bVar12 = (byte)local_1c0;
  uStack_4a8 = uVar17;
  local_480 = local_4b0;
  TStack_478.Array = local_4a0;
  if (((int)local_1c0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (uVar8 != local_1c0) {
    puVar18 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar18 = local_1c8;
    }
    uVar17 = -1 << (bVar12 & 0x1f) & puVar18[iVar9];
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar9;
      uVar20 = uVar20 + 0x20;
      iVar9 = iVar9 + 1;
      uVar8 = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1462713a3;
      uVar17 = (puVar18 + 1)[lVar14];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_4b4 = (int)lVar14;
    uVar8 = (uVar20 - 1) + local_4b4;
    if ((int)local_1c0 < (int)uVar8) {
      uVar8 = local_1c0;
    }
  }
LAB_1462713a3:
  while( true ) {
    plVar5 = local_480;
    if ((int)local_480[1] - *(int *)((longlong)local_480 + 0x34) != (int)uStack_458) {
      local_558[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_558);
    }
    if (((TStack_478.CurrentBitIndex == uVar8) &&
        (TStack_478.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10))) &&
       (plVar5 == (longlong *)local_1e8)) break;
    UE::MovieScene::FHierarchicalBlendTarget::Add
              (&local_208,*(short *)(*plVar5 + (longlong)TStack_478.CurrentBitIndex * 0xc));
    TStack_478.UnvisitedBitMask = TStack_478.UnvisitedBitMask & ~TStack_478._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_478);
  }
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Array
            ((TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> *)local_1e8,&local_4e8);
  AlgoImpl::IntroSortInternal<short,int,FIdentityFunctor,TGreater<void>_>
            ((short *)local_4e8.AllocatorInstance.Data,local_4e8.ArrayNum,local_558[0],
             (TGreater<void>)local_558[0]);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Duplicate Heap Capacity",(uint)local_208.Capacity,0x20);
  local_428 = local_4e8.AllocatorInstance.Data;
  if ((local_4e8.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iStack_420 = local_4e8.ArrayNum;
  local_2f8.DataPtr = (short *)local_428;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_208,&local_2f8,L"Duplicate Heap");
  UE::MovieScene::GetTypeHash(&local_208);
  if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.AllocatorInstance.Data);
  }
  local_1a0 = 0;
  if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8);
  }
  TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1e8);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_208);
  rand();
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_108);
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_f8);
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  do {
    uVar17 = rand();
    iVar9 = (int)((float)(uVar17 & 0x7fff) * fVar4);
    sVar15 = 20000;
    if (iVar9 < 20000) {
      sVar15 = (short)iVar9;
    }
    local_540[0] = sVar15 + -10000;
    uVar17 = rand();
    iVar9 = (int)((float)(uVar17 & 0x7fff) * fVar4);
    sVar13 = 20000;
    if (iVar9 < 20000) {
      sVar13 = (short)iVar9;
    }
    local_53c[0] = sVar13 + -10000;
    UE::MovieScene::FHierarchicalBlendTarget::Add(&local_108,sVar15 + -10000);
    TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Emplace<short_const_&>
              (&local_e8,local_4bc,(bool *)local_540);
    UE::MovieScene::FHierarchicalBlendTarget::Add(&local_f8,sVar13 + -10000);
    TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Emplace<short_const_&>
              (&local_98,local_4b8,(bool *)local_53c);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Array(&local_e8,&local_510);
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Array(&local_98,&local_500);
  AlgoImpl::IntroSortInternal<short,int,FIdentityFunctor,TGreater<void>_>
            ((short *)local_510.AllocatorInstance.Data,local_510.ArrayNum,local_558[0],
             (TGreater<void>)local_558[0]);
  AlgoImpl::IntroSortInternal<short,int,FIdentityFunctor,TGreater<void>_>
            ((short *)local_500.AllocatorInstance.Data,local_500.ArrayNum,local_558[0],
             (TGreater<void>)local_558[0]);
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_218,&local_108);
  iStack_410 = local_510.ArrayNum;
  local_418 = local_510.AllocatorInstance.Data;
  if ((local_510.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_2e8.DataPtr = (short *)local_418;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_218,&local_2e8,L"Copy 1");
  iStack_400 = local_510.ArrayNum;
  local_408 = local_510.AllocatorInstance.Data;
  if ((local_510.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_388.DataPtr = (short *)local_408;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_108,&local_388,L"Copied From 2");
  UE::MovieScene::GetTypeHash(&local_218);
  UE::MovieScene::GetTypeHash(&local_108);
  UE::MovieScene::FHierarchicalBlendTarget::operator=(&local_218,&local_f8);
  iStack_3f0 = local_500.ArrayNum;
  local_3f8 = local_500.AllocatorInstance.Data;
  if ((local_500.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_378.DataPtr = (short *)local_3f8;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_218,&local_378,L"Copy 2");
  iStack_3e0 = local_500.ArrayNum;
  local_3e8 = local_500.AllocatorInstance.Data;
  if ((local_500.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_398.DataPtr = (short *)local_3e8;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_f8,&local_398,L"Copied From 2");
  UE::MovieScene::GetTypeHash(&local_218);
  UE::MovieScene::GetTypeHash(&local_f8);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_218);
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_198,&local_108);
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_188,&local_f8);
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_228,&local_198);
  local_3d8 = local_510.AllocatorInstance.Data;
  if ((local_510.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iStack_3d0 = local_510.ArrayNum;
  local_348.DataPtr = (short *)local_3d8;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_228,&local_348,L"Move 1");
  pFVar10 = UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_118);
  pTVar11 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(pFVar10,&local_2c8);
  local_358.DataPtr = pTVar11->DataPtr;
  local_358.ArrayNum = pTVar11->ArrayNum;
  local_358._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_198,&local_358,L"Moved From 1");
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_118);
  UE::MovieScene::GetTypeHash(&local_228);
  UE::MovieScene::GetTypeHash(&local_198);
  UE::MovieScene::FHierarchicalBlendTarget::operator=(&local_228,&local_188);
  local_448 = local_500.AllocatorInstance.Data;
  if ((local_500.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iStack_440 = local_500.ArrayNum;
  local_368.DataPtr = (short *)local_448;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_228,&local_368,L"Move 2");
  pFVar10 = UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_128);
  pTVar11 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(pFVar10,local_2b8);
  local_2d8.DataPtr = pTVar11->DataPtr;
  local_2d8.ArrayNum = pTVar11->ArrayNum;
  local_2d8._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_550,&local_188,&local_2d8,L"Moved From 2");
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_128);
  UE::MovieScene::GetTypeHash(&local_228);
  UE::MovieScene::GetTypeHash(&local_188);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_228);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_188);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_198);
  puVar16 = &local_4f0;
  lVar14 = 2;
  do {
    puVar1 = (undefined8 *)(puVar16 + -4);
    puVar16 = puVar16 + -4;
    lVar14 = lVar14 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar14 != 0);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_f8);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_108);
  local_518 = &local_4f0;
  local_4f0 = 0xfeedbeef;
  local_538 = &local_518;
  local_4ec = 0xfeedbeef;
  local_530 = &local_518;
  local_528 = &local_518;
  local_520 = &local_518;
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_3>::operator()(&local_538,5);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_4>::operator()(&local_530,5,7);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_5>::operator()(&local_528,5);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_6>::operator()(&local_520,5,7);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_3>::operator()(&local_538,5);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_4>::operator()(&local_530,5,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_5>::operator()(&local_528,5);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_6>::operator()(&local_520,5,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_3>::operator()(&local_538,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_4>::operator()(&local_530,0xf,5);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_5>::operator()(&local_528,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_6>::operator()(&local_520,0xf,5);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_3>::operator()(&local_538,9);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_4>::operator()(&local_530,9,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_5>::operator()(&local_528,9);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_6>::operator()(&local_520,9,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_3>::operator()(&local_538,0x23);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_4>::operator()(&local_530,0x23,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_5>::operator()(&local_528,0x23);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_6>::operator()(&local_520,0x23,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_3>::operator()(&local_538,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_4>::operator()(&local_530,0xf,0x23);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_5>::operator()(&local_528,0xf);
  `FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_6>::operator()(&local_520,0xf,0x23);
  return true;
}

// GetBeautifiedTestName @ 146271da0

FString * __thiscall
FMovieSceneBlendTargetComponentTest::GetBeautifiedTestName
          (FMovieSceneBlendTargetComponentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.EntitySystem.BlendTargetComponent");
  return __return_storage_ptr__;
}

// operator() @ 14629e270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FHierarchicalBlendTarget *param_1,TArrayView<short_const_,int> *param_2,
          wchar_t *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  short *psVar6;
  short *psVar7;
  undefined1 auStack_1a8 [32];
  TArrayView<short_const_,int> local_188;
  FString local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [3];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  UE::MovieScene::FHierarchicalBlendTarget::AsArray(param_1,&local_188);
  if ((local_188.ArrayNum != param_2->ArrayNum) ||
     ((local_188.ArrayNum != 0 &&
      (iVar4 = memcmp(local_188.DataPtr,param_2->DataPtr,(longlong)local_188.ArrayNum * 2),
      iVar4 != 0)))) {
    local_168.Base = local_148;
    local_168.CurPos = local_148;
    local_168.End = (wchar_t *)local_48;
    local_168.bIsDynamic = false;
    local_168.bIsExternal = false;
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_168,L"Test %s: Blend Target does not match the expected result (");
    bVar3 = true;
    for (psVar6 = local_188.DataPtr; psVar6 != local_188.DataPtr + local_188.ArrayNum;
        psVar6 = psVar6 + 1) {
      if (bVar3) {
        bVar3 = false;
      }
      else {
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        pvVar5 = FGenericPlatformString::Memcpy(local_168.CurPos,L",",2);
        local_168.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"%d");
    }
    if (local_168.End < local_168.CurPos + 4) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,4);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_168.CurPos,L" != ",8);
    psVar7 = param_2->DataPtr;
    bVar3 = true;
    local_168.CurPos = (wchar_t *)((longlong)pvVar5 + 8);
    psVar6 = psVar7 + param_2->ArrayNum;
    for (; psVar7 != psVar6; psVar7 = psVar7 + 1) {
      if (bVar3) {
        bVar3 = false;
      }
      else {
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        pvVar5 = FGenericPlatformString::Memcpy(local_168.CurPos,L",",2);
        local_168.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"%d");
    }
    if (local_168.End < local_168.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_168.CurPos,L")",2);
    plVar1 = *(longlong **)this;
    local_168.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
    pcVar2 = *(code **)(*plVar1 + 0x28);
    if (local_168.End < (wchar_t *)((longlong)pvVar5 + 4U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    }
    *local_168.CurPos = L'\0';
    ::FString::FString(&local_178,local_168.Base);
    (*pcVar2)(plVar1,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  }
  return;
}

// operator() @ 14629fa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  short *psVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TArrayView<short_const_,int> *pTVar8;
  undefined1 auStack_98 [32];
  TArrayView<short_const_,int> local_78;
  TArrayView<short_const_,int> local_68;
  FHierarchicalBlendTarget local_58;
  FHierarchicalBlendTarget local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)this;
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_58);
  fVar5 = __real_46fffe00;
  fVar4 = __real_3f800000;
  while (param_1 = param_1 + -1, -1 < param_1) {
    uVar7 = *(int *)(*plVar1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*plVar1 + 4) = uVar7;
    UE::MovieScene::FHierarchicalBlendTarget::Add
              (&local_58,(short)(int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar5));
  }
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_48,&local_58);
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_58,&local_78);
  psVar2 = pTVar8->DataPtr;
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_48,&local_68);
  if ((psVar2 == pTVar8->DataPtr) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.AsArray().GetData() != B.AsArray().GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                         ,0x23c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_48);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_58);
  return;
}

// operator() @ 14629fb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_4>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  short *psVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TArrayView<short_const_,int> *pTVar8;
  undefined1 auStack_98 [32];
  TArrayView<short_const_,int> local_78;
  TArrayView<short_const_,int> local_68;
  FHierarchicalBlendTarget local_58;
  FHierarchicalBlendTarget local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)this;
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_48);
  fVar5 = __real_46fffe00;
  fVar4 = __real_3f800000;
  while (param_1 = param_1 + -1, -1 < param_1) {
    uVar7 = *(int *)(*plVar1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*plVar1 + 4) = uVar7;
    UE::MovieScene::FHierarchicalBlendTarget::Add
              (&local_48,(short)(int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar5));
  }
  plVar1 = *(longlong **)this;
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_58);
  while (param_2 = param_2 + -1, -1 < param_2) {
    uVar7 = *(int *)(*plVar1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*plVar1 + 4) = uVar7;
    UE::MovieScene::FHierarchicalBlendTarget::Add
              (&local_58,(short)(int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar5));
  }
  UE::MovieScene::FHierarchicalBlendTarget::operator=(&local_48,&local_58);
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_48,&local_78);
  psVar2 = pTVar8->DataPtr;
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_58,&local_68);
  if ((psVar2 == pTVar8->DataPtr) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.AsArray().GetData() != B.AsArray().GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                         ,0x244,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_58);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_48);
  return;
}

// operator() @ 14629fce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_5>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  short *psVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TArrayView<short_const_,int> *pTVar8;
  undefined1 auStack_98 [32];
  TArrayView<short_const_,int> local_78;
  TArrayView<short_const_,int> local_68;
  FHierarchicalBlendTarget local_58;
  FHierarchicalBlendTarget local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)this;
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_58);
  fVar5 = __real_46fffe00;
  fVar4 = __real_3f800000;
  while (param_1 = param_1 + -1, -1 < param_1) {
    uVar7 = *(int *)(*plVar1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*plVar1 + 4) = uVar7;
    UE::MovieScene::FHierarchicalBlendTarget::Add
              (&local_58,(short)(int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar5));
  }
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_48,&local_58);
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_58,&local_78);
  psVar2 = pTVar8->DataPtr;
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_48,&local_68);
  if ((psVar2 == pTVar8->DataPtr) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.AsArray().GetData() != B.AsArray().GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                         ,0x24b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_48);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_58);
  return;
}

// operator() @ 14629fe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneBlendTargetComponentTest::RunTest'::__l2::<lambda_6>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  short *psVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TArrayView<short_const_,int> *pTVar8;
  undefined1 auStack_98 [32];
  TArrayView<short_const_,int> local_78;
  TArrayView<short_const_,int> local_68;
  FHierarchicalBlendTarget local_58;
  FHierarchicalBlendTarget local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)this;
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_48);
  fVar5 = __real_46fffe00;
  fVar4 = __real_3f800000;
  while (param_1 = param_1 + -1, -1 < param_1) {
    uVar7 = *(int *)(*plVar1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*plVar1 + 4) = uVar7;
    UE::MovieScene::FHierarchicalBlendTarget::Add
              (&local_48,(short)(int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar5));
  }
  plVar1 = *(longlong **)this;
  UE::MovieScene::FHierarchicalBlendTarget::FHierarchicalBlendTarget(&local_58);
  while (param_2 = param_2 + -1, -1 < param_2) {
    uVar7 = *(int *)(*plVar1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*plVar1 + 4) = uVar7;
    UE::MovieScene::FHierarchicalBlendTarget::Add
              (&local_58,(short)(int)(((float)(uVar7 >> 9 | 0x3f800000) - fVar4) * fVar5));
  }
  UE::MovieScene::FHierarchicalBlendTarget::operator=(&local_48,&local_58);
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_48,&local_78);
  psVar2 = pTVar8->DataPtr;
  pTVar8 = UE::MovieScene::FHierarchicalBlendTarget::AsArray(&local_58,&local_68);
  if ((psVar2 == pTVar8->DataPtr) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.AsArray().GetData() != B.AsArray().GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                         ,0x253,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_58);
  UE::MovieScene::FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_48);
  return;
}

