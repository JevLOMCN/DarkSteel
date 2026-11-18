// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// GetTestFlags @ 146254200

EAutomationTestFlags __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::GetTestFlags
          (FMovieSceneMutuallyInclusiveComponentsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146254210

bool __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::IsStressTest
          (FMovieSceneMutuallyInclusiveComponentsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146254220

uint __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::GetRequiredDeviceNum
          (FMovieSceneMutuallyInclusiveComponentsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146254230

FString * __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::GetTestSourceFileName
          (FMovieSceneMutuallyInclusiveComponentsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146254260

int __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::GetTestSourceFileLine
          (FMovieSceneMutuallyInclusiveComponentsTest *this)

{
  return 0x47;
}

// GetTests @ 146254270

/* WARNING: Removing unreachable block (ram,0x00014625435d) */
/* WARNING: Removing unreachable block (ram,0x000146254428) */

void __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::GetTests
          (FMovieSceneMutuallyInclusiveComponentsTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.EntitySystem.MutuallyInclusiveComponents");
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

// RunTest @ 146254450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::RunTest
          (FMovieSceneMutuallyInclusiveComponentsTest *this,FString *param_1)

{
  TBitArray<TFixedAllocator<12>_> *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  uchar auVar3 [4];
  ushort uVar4;
  TTypeCompatibleBytes<unsigned_int> TVar5;
  code *pcVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined1 uVar10;
  FString *pFVar11;
  void *pvVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulong64 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ushort *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  TBitArray<TFixedAllocator<12>_> *pTVar27;
  TBitArray<TFixedAllocator<12>_> *pTVar28;
  FComponentTypeID *pFVar29;
  undefined1 auStackY_6b8 [32];
  undefined1 local_688 [4];
  undefined4 local_684;
  FComponentTypeID local_680;
  FComponentTypeID local_67e;
  FComponentTypeID local_67c;
  FComponentTypeID local_67a;
  undefined8 local_678;
  undefined8 local_670;
  <lambda_1> local_668 [4];
  ushort local_664 [10];
  FMovieSceneMutuallyInclusiveComponentsTest *local_650;
  FComponentTypeID *local_648;
  FComponentTypeID *pFStack_640;
  initializer_list<UE::MovieScene::FComponentTypeID> local_638;
  FString local_628;
  FString local_618;
  initializer_list<UE::MovieScene::FComponentTypeID> local_608;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5f8;
  FString local_5e8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5c8;
  FString local_5b8;
  FString local_5a8;
  ushort local_598 [4];
  ushort local_590 [4];
  ushort local_588 [12];
  ushort local_570 [8];
  ushort local_560 [8];
  ushort local_550 [12];
  TStringBuilderBase<wchar_t> local_538;
  wchar_t local_518 [32];
  TBitArray<TFixedAllocator<12>_> local_4d8;
  undefined1 local_498 [64];
  void *local_458;
  undefined4 local_450;
  undefined1 local_448 [64];
  void *local_408;
  undefined4 local_400;
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  bool local_3e8;
  FMutualComponentInitializers local_3d8;
  TBitArray<TFixedAllocator<12>_> local_3b8;
  TBitArray<TFixedAllocator<12>_> local_380;
  FComplexInclusivityFilter local_348;
  FComplexInclusivityFilter local_30c;
  TBitArray<TFixedAllocator<12>_> local_2d0;
  TBitArray<TFixedAllocator<12>_> local_298;
  TBitArray<TFixedAllocator<12>_> local_260;
  TBitArray<TFixedAllocator<12>_> local_228;
  TBitArray<TFixedAllocator<12>_> local_1f0;
  TBitArray<TFixedAllocator<12>_> local_1b8;
  TBitArray<TFixedAllocator<12>_> local_180;
  TBitArray<TFixedAllocator<12>_> local_148;
  TBitArray<TFixedAllocator<12>_> local_110;
  TBitArray<TFixedAllocator<12>_> local_d8;
  TBitArray<TFixedAllocator<12>_> local_a0;
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_638._First = (FComponentTypeID *)&local_670;
  local_498._0_8_ = 0;
  local_638._Last = (FComponentTypeID *)((longlong)&local_670 + 4);
  local_498._8_8_ = 0;
  local_498._32_8_ = 0;
  local_498._40_4_ = 0;
  local_498._44_4_ = 0x80;
  local_498._48_4_ = 0xffffffff;
  local_498._52_4_ = 0;
  local_458 = (void *)0x0;
  local_450 = 0;
  local_448._0_8_ = 0;
  local_448._8_8_ = 0;
  local_448._32_8_ = 0;
  local_448._40_4_ = 0;
  local_448._44_4_ = 0x80;
  local_448._48_4_ = 0xffffffff;
  local_448._52_4_ = 0;
  local_408 = (void *)0x0;
  local_400 = 0;
  local_3f8.Data = (FScriptContainerElement *)0x0;
  local_3f0._0_4_ = 0;
  local_3f0._4_4_ = 0;
  local_3e8 = false;
  local_670 = (TBitArray<TFixedAllocator<12>_> *)CONCAT44(local_670._4_4_,0x60005);
  local_650 = this;
  UE::MovieScene::FMutualInclusivityGraph::DefineMutualInclusionRule
            ((FMutualInclusivityGraph *)local_498,(FComponentTypeID)0x4,&local_638);
  local_608._First = &local_680;
  local_680.Value = 4;
  local_608._Last = &local_67e;
  UE::MovieScene::FMutualInclusivityGraph::DefineMutualInclusionRule
            ((FMutualInclusivityGraph *)local_498,(FComponentTypeID)0x3,&local_608);
  local_5f8._First = &local_67c;
  local_5f8._Last = &local_67a;
  local_67c.Value = 1;
  UE::MovieScene::FMutualInclusivityGraph::DefineMutualInclusionRule
            ((FMutualInclusivityGraph *)local_498,(FComponentTypeID)0x0,&local_5f8);
  local_648 = (FComponentTypeID *)&local_678;
  local_678 = (wchar_t *)CONCAT44(local_678._4_4_,0x50007);
  puVar23 = local_664;
  pFStack_640 = (FComponentTypeID *)((longlong)&local_678 + 4);
  local_664[0] = 6;
  local_664[1] = 2;
  local_3b8.NumBits = 0;
  local_3b8.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_3b8.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_3b8,false,iVar24);
    }
    if ((local_3b8.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_3b8.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_664 + 2);
  local_348.Mask.Bits.NumBits = 0;
  local_348.Mask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_348,&local_3b8);
  local_348.Mode = AllOf;
  local_5d8._First = local_648;
  local_5d8._Last = pFStack_640;
  UE::MovieScene::FMutualInclusivityGraph::DefineComplexInclusionRule
            ((FMutualInclusivityGraph *)local_498,&local_348,&local_5d8);
  local_648 = (FComponentTypeID *)&local_684;
  local_664[2] = 5;
  local_664[3] = 1;
  puVar23 = local_664 + 2;
  pFStack_640 = (FComponentTypeID *)((longlong)&local_684 + 2);
  local_380.MaxBits = 0x180;
  local_684 = CONCAT22(local_684._2_2_,8);
  local_380.NumBits = 0;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_380.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_380,false,iVar24);
    }
    if ((local_380.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_380.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_664 + 4);
  local_30c.Mask.Bits.NumBits = 0;
  local_30c.Mask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_30c,&local_380);
  local_30c.Mode = AnyOf;
  local_5c8._First = local_648;
  local_5c8._Last = pFStack_640;
  UE::MovieScene::FMutualInclusivityGraph::DefineComplexInclusionRule
            ((FMutualInclusivityGraph *)local_498,&local_30c,&local_5c8);
  local_2d0.NumBits = 0;
  local_2d0.MaxBits = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_2d0,false,1);
  if ((local_2d0.NumBits < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  auVar3 = local_2d0.AllocatorInstance.InlineData[0].Pad | 1;
  local_2d0.AllocatorInstance.InlineData[0].Pad[0] = auVar3[0];
  local_2d0.AllocatorInstance.InlineData[0].Pad[1] = auVar3[1];
  local_2d0.AllocatorInstance.InlineData[0].Pad[2] = auVar3[2];
  local_2d0.AllocatorInstance.InlineData[0].Pad[3] = auVar3[3];
  puVar23 = local_598;
  local_598[0] = 0;
  local_598[1] = 1;
  local_298.NumBits = 0;
  local_598[2] = 8;
  local_298.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_298.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_298,false,iVar24);
    }
    if ((local_298.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_298.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_598 + 3);
  local_260.NumBits = 0;
  local_260.MaxBits = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_260,false,4);
  if ((local_260.NumBits < 4) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  auVar3 = local_260.AllocatorInstance.InlineData[0].Pad | 8;
  local_260.AllocatorInstance.InlineData[0].Pad[0] = auVar3[0];
  local_260.AllocatorInstance.InlineData[0].Pad[1] = auVar3[1];
  local_260.AllocatorInstance.InlineData[0].Pad[2] = auVar3[2];
  local_260.AllocatorInstance.InlineData[0].Pad[3] = auVar3[3];
  puVar23 = local_588 + 4;
  local_588[4] = 3;
  local_588[5] = 4;
  local_228.NumBits = 0;
  local_588[6] = 5;
  local_588[7] = 6;
  local_588[8] = 8;
  local_228.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_228.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_228,false,iVar24);
    }
    if ((local_228.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_228.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_588 + 9);
  local_1f0.NumBits = 0;
  local_1f0.MaxBits = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_1f0,false,5);
  if ((local_1f0.NumBits < 5) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  auVar3 = local_1f0.AllocatorInstance.InlineData[0].Pad | 0x10;
  local_1f0.AllocatorInstance.InlineData[0].Pad[0] = auVar3[0];
  local_1f0.AllocatorInstance.InlineData[0].Pad[1] = auVar3[1];
  local_1f0.AllocatorInstance.InlineData[0].Pad[2] = auVar3[2];
  local_1f0.AllocatorInstance.InlineData[0].Pad[3] = auVar3[3];
  puVar23 = local_588;
  local_588[0] = 4;
  local_588[1] = 5;
  local_1b8.NumBits = 0;
  local_588[2] = 6;
  local_588[3] = 8;
  local_1b8.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_1b8.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_1b8,false,iVar24);
    }
    if ((local_1b8.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_1b8.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_588 + 4);
  local_664[4] = 2;
  local_664[5] = 6;
  local_180.NumBits = 0;
  puVar23 = local_664 + 4;
  local_180.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_180.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_180,false,iVar24);
    }
    if ((local_180.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_180.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_664 + 6);
  local_570[0] = 2;
  local_570[1] = 5;
  local_148.NumBits = 0;
  puVar23 = local_570;
  local_570[2] = 6;
  local_570[3] = 7;
  local_570[4] = 8;
  local_148.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_148.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar24);
    }
    if ((local_148.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_148.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_570 + 5);
  local_664[6] = 2;
  local_664[7] = 4;
  local_110.NumBits = 0;
  puVar23 = local_664 + 6;
  local_110.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_110.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,iVar24);
    }
    if ((local_110.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_110.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_664 + 8);
  local_560[0] = 2;
  local_560[1] = 4;
  local_d8.NumBits = 0;
  puVar23 = local_560;
  local_560[2] = 5;
  local_560[3] = 6;
  local_560[4] = 7;
  local_560[5] = 8;
  local_d8.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_d8.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_d8,false,iVar24);
    }
    if ((local_d8.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_d8.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_560 + 6);
  local_590[0] = 0;
  local_590[1] = 2;
  local_a0.NumBits = 0;
  puVar23 = local_590;
  local_590[2] = 6;
  local_a0.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_a0.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_a0,false,iVar24);
    }
    if ((local_a0.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_a0.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_590 + 3);
  local_550[0] = 0;
  local_550[1] = 1;
  local_68.NumBits = 0;
  puVar23 = local_550;
  local_550[2] = 2;
  local_550[3] = 5;
  local_550[4] = 6;
  local_550[5] = 7;
  local_550[6] = 8;
  local_68.MaxBits = 0x180;
  do {
    uVar4 = *puVar23;
    iVar24 = ((uint)uVar4 - local_68.NumBits) + 1;
    if (0 < iVar24) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar24);
    }
    if ((local_68.NumBits <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar4 >> 5);
    puVar23 = puVar23 + 1;
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar4 & 0x1f);
  } while (puVar23 != local_550 + 7);
  local_684 = 0;
  pTVar28 = &local_2d0;
  do {
    uVar17 = local_684;
    uVar21 = 0;
    local_4d8.NumBits = 0;
    local_3d8.Initializers.ArrayMax = 2;
    local_4d8.MaxBits = 0x180;
    local_3d8.Initializers.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
    local_3d8.Initializers.ArrayNum = 0;
    local_670 = pTVar28;
    UE::MovieScene::FMutualInclusivityGraph::ComputeMutuallyInclusiveComponents
              ((FMutualInclusivityGraph *)local_498,All,(FComponentMask *)pTVar28,
               (FComponentMask *)&local_4d8,&local_3d8);
    UE::Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (pTVar28,&local_4d8,MaxSize,local_668);
    pTVar1 = pTVar28 + 1;
    bVar9 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                      (&local_4d8,pTVar1,false);
    if (bVar9) {
      uVar19 = 0;
      uVar14 = (ulonglong)local_678 >> 0x20;
      local_678 = (wchar_t *)((ulonglong)local_678 & 0xffffffff00000000);
      iVar24 = (int)(local_4d8.NumBits + 0x1fU + ((int)(local_4d8.NumBits + 0x1fU) >> 0x1f & 0x1fU))
               >> 5;
      uVar25 = local_4d8.NumBits & 0x8000001f;
      if ((int)uVar25 < 0) {
        uVar25 = (uVar25 - 1 | 0xffffffe0) + 1;
      }
      uVar16 = 0xffffffff >> ((byte)(0x20 - uVar25) & 0x1f);
      if (0x1f < (int)(0x20 - uVar25)) {
        uVar16 = 0xffffffff;
      }
      uVar25 = 0xffffffff;
      if (iVar24 == 1) {
        uVar25 = uVar16;
      }
      pTVar27 = pTVar28;
      if (0 < iVar24) {
        do {
          uVar17 = *(uint *)local_4d8.AllocatorInstance.InlineData[uVar19].Pad;
          uVar7 = uVar25 & uVar17;
          if (uVar25 == 0xffffffff) {
            uVar7 = uVar17;
          }
          uVar19 = uVar19 + 1;
          uVar13 = (ulonglong)uVar7 - ((ulonglong)(uVar7 >> 1) & 0x5555555555555555);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar21 = uVar21 + (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                  >> 0x38);
          uVar25 = 0xffffffff;
          if (uVar19 == iVar24 - 1U) {
            uVar25 = uVar16;
          }
        } while ((int)uVar19 < iVar24);
        local_678 = (wchar_t *)CONCAT44((int)uVar14,uVar21);
        pTVar27 = local_670;
        this = local_650;
        uVar17 = local_684;
      }
      uVar25 = 0;
      uVar19 = 0;
      iVar24 = pTVar28[1].NumBits + 0x1f;
      iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x1fU)) >> 5;
      uVar16 = pTVar28[1].NumBits & 0x8000001f;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
      }
      uVar7 = 0xffffffff >> ((byte)(0x20 - uVar16) & 0x1f);
      if (0x1f < (int)(0x20 - uVar16)) {
        uVar7 = 0xffffffff;
      }
      uVar16 = 0xffffffff;
      if (iVar24 == 1) {
        uVar16 = uVar7;
      }
      pTVar28 = pTVar27;
      uVar26 = uVar25;
      if (0 < iVar24) {
        do {
          uVar17 = *(uint *)(pTVar1->AllocatorInstance).InlineData[uVar26].Pad;
          uVar21 = uVar16 & uVar17;
          if (uVar16 == 0xffffffff) {
            uVar21 = uVar17;
          }
          uVar26 = uVar26 + 1;
          uVar14 = (ulonglong)uVar21 - ((ulonglong)(uVar21 >> 1) & 0x5555555555555555);
          uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
          uVar25 = uVar19 + (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                  >> 0x38);
          uVar16 = 0xffffffff;
          if (uVar26 == iVar24 - 1U) {
            uVar16 = uVar7;
          }
          uVar19 = uVar25;
        } while ((int)uVar26 < iVar24);
        pTVar28 = local_670;
        this = local_650;
        uVar21 = (uint)local_678;
        uVar17 = local_684;
      }
      if (uVar21 != uVar25) goto LAB_1462551c9;
    }
    else {
LAB_1462551c9:
      iVar24 = 0;
      pFVar29 = *(FComponentTypeID **)(*(longlong *)this + 0x28);
      local_638._First = pFVar29;
      pFVar11 = `FMovieSceneMutuallyInclusiveComponentsTest::RunTest'::__l7::<lambda_1>::operator()
                          (local_688,&local_5a8,(FComponentMask *)pTVar1);
      if ((pFVar11->Data).ArrayNum == 0) {
        local_678 = L"";
      }
      else {
        local_678 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      local_538.Base = local_518;
      local_538.End = (wchar_t *)&local_4d8;
      local_538.CurPos = local_518;
      local_538.bIsDynamic = false;
      local_538.bIsExternal = false;
      uVar21 = 1;
      uVar19 = 0;
      iVar22 = iVar24;
      if (local_4d8.NumBits != 0) {
        TVar5.Pad = local_4d8.AllocatorInstance.InlineData[0].Pad;
        while (TVar5.Pad == (uchar  [4])0x0) {
          lVar15 = (longlong)iVar24;
          iVar22 = iVar22 + 0x20;
          iVar24 = iVar24 + 1;
          uVar21 = 1;
          uVar19 = local_4d8.NumBits;
          if ((int)((local_4d8.NumBits - 1U) + ((int)(local_4d8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5
              < iVar24) goto LAB_14625529b;
          TVar5.Pad = *&local_4d8.AllocatorInstance.InlineData[lVar15 + 1].Pad;
        }
        uVar21 = -(int)TVar5.Pad & (uint)TVar5.Pad;
        uVar14 = (ulonglong)uVar21 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar19 = (int)lVar15 + -1 + iVar22;
        if (local_4d8.NumBits < (int)uVar19) {
          uVar19 = local_4d8.NumBits;
        }
      }
LAB_14625529b:
      if ((int)uVar19 < local_4d8.NumBits) {
        uVar19 = 0xffffffff;
        do {
          if ((int)((longlong)local_538.CurPos - (longlong)local_538.Base >> 1) != 0) {
            if (local_538.End < (TBitArray<TFixedAllocator<12>_> *)(local_538.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_538,1);
            }
            pvVar12 = FGenericPlatformString::Memcpy(local_538.CurPos,L"|",2);
            local_538.CurPos = (wchar_t *)((longlong)pvVar12 + 2);
          }
          ::FString::PrintfImpl(&local_628,L"%d");
          FVar8.Data = local_628.Data.AllocatorInstance.Data;
          iVar20 = local_628.Data.ArrayNum + -1;
          if (local_628.Data.ArrayNum == 0) {
            iVar20 = 0;
          }
          uVar18 = (ulong64)iVar20;
          if (local_538.End < (TBitArray<TFixedAllocator<12>_> *)(local_538.CurPos + uVar18)) {
            TStringBuilderBase<wchar_t>::Extend(&local_538,uVar18);
          }
          if (iVar20 != 0) {
            pvVar12 = FGenericPlatformString::Memcpy(local_538.CurPos,FVar8.Data,uVar18 * 2);
            local_538.CurPos = (wchar_t *)(uVar18 * 2 + (longlong)pvVar12);
          }
          if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_628.Data.AllocatorInstance.Data);
          }
          uVar19 = uVar19 & ~uVar21;
          uVar17 = uVar19 & *(uint *)local_4d8.AllocatorInstance.InlineData[iVar24].Pad;
          while (uVar17 == 0) {
            lVar15 = (longlong)iVar24;
            iVar22 = iVar22 + 0x20;
            iVar24 = iVar24 + 1;
            uVar25 = local_4d8.NumBits;
            if ((int)((local_4d8.NumBits - 1U) + ((int)(local_4d8.NumBits - 1U) >> 0x1f & 0x1fU)) >>
                5 < iVar24) goto LAB_1462553fd;
            uVar19 = 0xffffffff;
            uVar17 = *(uint *)local_4d8.AllocatorInstance.InlineData[lVar15 + 1].Pad;
          }
          uVar21 = -uVar17 & uVar17;
          uVar14 = (ulonglong)uVar21 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar25 = (int)lVar15 + -1 + iVar22;
          if (local_4d8.NumBits < (int)uVar25) {
            uVar25 = local_4d8.NumBits;
          }
LAB_1462553fd:
          pTVar28 = local_670;
          pFVar29 = local_638._First;
          uVar17 = local_684;
        } while ((int)uVar25 < local_4d8.NumBits);
      }
      if (local_538.End < (TBitArray<TFixedAllocator<12>_> *)(local_538.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_538,1);
      }
      *local_538.CurPos = L'\0';
      ::FString::FString(&local_618,local_538.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_538);
      `FMovieSceneMutuallyInclusiveComponentsTest::RunTest'::__l7::<lambda_1>::operator()
                (local_688,&local_5b8,(FComponentMask *)pTVar28);
      ::FString::PrintfImpl(&local_5e8,L"Test %d failed: result from input %s was %s: expected %s.")
      ;
      (*(code *)pFVar29)(local_650,&local_5e8,0);
      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
      }
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Data.AllocatorInstance.Data);
      }
      this = local_650;
      if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
        this = local_650;
      }
    }
    if (local_3d8.Initializers.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
      FMemory::Free((void *)local_3d8.Initializers.AllocatorInstance.SecondaryData);
    }
    local_684 = uVar17 + 1;
    pTVar28 = pTVar28 + 2;
    if (5 < local_684) {
      local_670 = pTVar28;
      if (local_3f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data);
      }
      local_400 = 0;
      if (local_408 != (void *)0x0) {
        FMemory::Free(local_408);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_448);
      local_450 = 0;
      if (local_458 != (void *)0x0) {
        FMemory::Free(local_458);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_498);
      return true;
    }
  } while( true );
}

// GetBeautifiedTestName @ 1462555e0

FString * __thiscall
FMovieSceneMutuallyInclusiveComponentsTest::GetBeautifiedTestName
          (FMovieSceneMutuallyInclusiveComponentsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "System.Engine.Sequencer.EntitySystem.MutuallyInclusiveComponents");
  return __return_storage_ptr__;
}

// operator() @ 14629f660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
`FMovieSceneMutuallyInclusiveComponentsTest::RunTest'::__l7::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,FComponentMask *param_1)

{
  ulonglong uVar1;
  FString *this_00;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  ulong64 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  FString local_b8;
  FScriptContainerElement *local_a8;
  FString *local_a0;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [32];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_98.CurPos = local_78;
  local_98.End = (wchar_t *)local_38;
  local_98.Base = local_78;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  iVar6 = 0;
  iVar9 = (param_1->Bits).NumBits;
  iVar8 = 0;
  local_a0 = __return_storage_ptr__;
  if (iVar9 != 0) {
    uVar2 = *(uint *)(param_1->Bits).AllocatorInstance.InlineData[0].Pad;
    while (uVar2 == 0) {
      lVar3 = (longlong)iVar6;
      iVar8 = iVar8 + 0x20;
      iVar6 = iVar6 + 1;
      if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iVar6) goto LAB_14629f882;
      uVar2 = *(uint *)(param_1->Bits).AllocatorInstance.InlineData[lVar3 + 1].Pad;
    }
    uVar2 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    if ((int)lVar3 + -1 + iVar8 < iVar9) {
      uVar7 = 0xffffffff;
      do {
        if ((int)((longlong)local_98.CurPos - (longlong)local_98.Base >> 1) != 0) {
          if (local_98.End < local_98.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_98,1);
          }
          pvVar4 = FGenericPlatformString::Memcpy(local_98.CurPos,L"|",2);
          local_98.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
        }
        ::FString::PrintfImpl(&local_b8,L"%d");
        local_a8 = local_b8.Data.AllocatorInstance.Data;
        iVar9 = local_b8.Data.ArrayNum + -1;
        if (local_b8.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        uVar5 = (ulong64)iVar9;
        if (local_98.End < local_98.CurPos + uVar5) {
          TStringBuilderBase<wchar_t>::Extend(&local_98,uVar5);
        }
        if (iVar9 != 0) {
          pvVar4 = FGenericPlatformString::Memcpy(local_98.CurPos,local_a8,uVar5 * 2);
          local_98.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        iVar9 = (param_1->Bits).NumBits;
        uVar7 = uVar7 & ~uVar2;
        uVar2 = uVar7 & *(uint *)(param_1->Bits).AllocatorInstance.InlineData[iVar6].Pad;
        while (uVar2 == 0) {
          lVar3 = (longlong)iVar6;
          iVar8 = iVar8 + 0x20;
          iVar6 = iVar6 + 1;
          if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iVar6) goto LAB_14629f882;
          uVar7 = 0xffffffff;
          uVar2 = *(uint *)(param_1->Bits).AllocatorInstance.InlineData[lVar3 + 1].Pad;
        }
        uVar2 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar2 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar10 = iVar8 + -1 + (int)lVar3;
      } while ((iVar10 <= iVar9) && (iVar10 < iVar9));
    }
  }
LAB_14629f882:
  this_00 = local_a0;
  if (local_98.End < local_98.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_98,1);
  }
  *local_98.CurPos = L'\0';
  ::FString::FString(this_00,local_98.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  return this_00;
}

