// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 1422fc340

EAutomationTestFlags __thiscall
FPublicExportMapIterationTest::GetTestFlags(FPublicExportMapIterationTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1422fc350

bool __thiscall FPublicExportMapIterationTest::IsStressTest(FPublicExportMapIterationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422fc360

uint __thiscall
FPublicExportMapIterationTest::GetRequiredDeviceNum(FPublicExportMapIterationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422fc370

FString * __thiscall
FPublicExportMapIterationTest::GetTestSourceFileName
          (FPublicExportMapIterationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422fc3a0

int __thiscall
FPublicExportMapIterationTest::GetTestSourceFileLine(FPublicExportMapIterationTest *this)

{
  return 0x3045;
}

// GetTests @ 1422fc3b0

/* WARNING: Removing unreachable block (ram,0x0001422fc49d) */
/* WARNING: Removing unreachable block (ram,0x0001422fc568) */

void __thiscall
FPublicExportMapIterationTest::GetTests
          (FPublicExportMapIterationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Loading.FPublicExportMap.Iteration");
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

// RunTest @ 1422fc590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPublicExportMapIterationTest::RunTest(FPublicExportMapIterationTest *this,FString *param_1)

{
  FPublicExportMap_u_0 *pFVar1;
  uchar *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  FPublicExportMap_u_0 FVar17;
  uchar *puVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ForElementType<FSetElementId> FVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6 [6];
  ForAnyElementType local_1c0;
  uint local_1b8;
  int local_1b4;
  FPublicExportMap_u_0 local_1b0;
  undefined8 local_1a8;
  uchar local_1a0 [8];
  ForAnyElementType local_198;
  uint local_190;
  int local_18c;
  undefined4 local_188;
  int local_184;
  uint local_180;
  FAutomationTestBase *local_178;
  undefined8 local_170;
  FPublicExportMap_u_0 local_168;
  FScriptContainerElement *local_160;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_158;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_108;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar14 = 0;
  local_1a0[0] = 0xff;
  local_1a0[1] = 0xff;
  local_1a0[2] = 0xff;
  local_1a0[3] = 0xff;
  local_1b0.Allocation = (uchar *)0x0;
  local_1a8 = 0;
  local_b8 = 1;
  uStack_b0 = 2;
  local_a8 = 3;
  uStack_a0 = 4;
  local_98 = 5;
  uStack_90 = 6;
  local_88 = 7;
  uStack_80 = 8;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 8;
  local_178 = (FAutomationTestBase *)this;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,0,&local_1c0,8,&local_1b4);
  uVar8 = _UNK_150631ed8;
  uVar7 = ___xmm_00000008000000070000000600000005;
  uVar6 = _UNK_150631e38;
  uVar5 = ___xmm_00000004000000030000000200000001;
  *(ulonglong *)local_1c0.Data = local_b8;
  *(ulonglong *)(local_1c0.Data + 8) = uStack_b0;
  *(ulonglong *)(local_1c0.Data + 0x10) = local_a8;
  *(ulonglong *)(local_1c0.Data + 0x18) = uStack_a0;
  *(ulonglong *)(local_1c0.Data + 0x20) = local_98;
  *(ulonglong *)(local_1c0.Data + 0x28) = uStack_90;
  *(ulonglong *)(local_1c0.Data + 0x30) = local_88;
  *(ulonglong *)(local_1c0.Data + 0x38) = uStack_80;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,8,0,&local_198,8,&local_18c);
  local_78 = uVar5;
  uStack_70 = uVar6;
  local_68 = uVar7;
  uStack_60 = uVar8;
  *(undefined8 *)local_198.Data = uVar5;
  *(undefined8 *)(local_198.Data + 8) = uVar6;
  *(undefined8 *)(local_198.Data + 0x10) = uVar7;
  *(undefined8 *)(local_198.Data + 0x18) = uVar8;
  if ((local_1b8 != local_190) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Keys.Num() == Values.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x304d,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Empty map has no elements",(int)local_1a8,0);
  uVar20 = uVar14;
  uVar27 = uVar14;
  if (0 < (int)local_1b8) {
    do {
      uVar15 = (uint)uVar14;
      uVar13 = 0;
      if ((int)uVar15 < (int)local_190) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      iVar21 = *(int *)(local_198.Data + uVar20);
      uVar13 = 0;
      if ((int)uVar15 < (int)local_1b8) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      FLoadedPackageRef::FPublicExportMap::Store
                ((FPublicExportMap *)&local_1b0,*(ulong64 *)(local_1c0.Data + uVar27),iVar21);
      uVar14 = (ulonglong)(uVar15 + 1);
      uVar20 = uVar20 + 4;
      this = (FPublicExportMapIterationTest *)local_178;
      uVar27 = uVar27 + 8;
    } while ((int)(uVar15 + 1) < (int)local_1b8);
  }
  FVar17 = local_1b0;
  iVar21 = local_1a8._4_4_;
  local_158.Elements._0_8_ = 0;
  local_158.Elements._8_8_ = 0;
  local_158.Elements._32_8_ = 0;
  local_158.Elements._40_4_ = 0;
  local_158.Elements._44_4_ = 0x80;
  local_158.Elements._48_4_ = 0xffffffff;
  local_158.Elements._52_4_ = 0;
  local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_158.HashSize = 0;
  if (local_1a8._4_4_ == 1) {
    FVar17.Allocation = (uchar *)&local_1b0;
  }
  else if (local_1a8 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  pFVar1 = (FPublicExportMap_u_0 *)(FVar17.Allocation + (longlong)iVar21 * 8);
  iVar21 = local_1a8._4_4_;
  if ((FPublicExportMap_u_0 *)FVar17.Allocation != pFVar1) {
    do {
                    /* WARNING: Load size is inaccurate */
      local_168.Allocation = *FVar17.Allocation;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64_const_&>(&local_158,&local_170,(bool *)&local_168);
      FVar17.Allocation = (uchar *)(FVar17.SingleItemKey + 8);
    } while ((FPublicExportMap_u_0 *)FVar17.Allocation != pFVar1);
    iVar21 = local_1a8._4_4_;
  }
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._48_4_ = 0xffffffff;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  iVar22 = iVar21;
  if (iVar21 == 1) {
    puVar18 = local_1a0;
  }
  else {
    puVar18 = local_1b0.Allocation + (longlong)iVar21 * 8;
    if (iVar21 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      iVar22 = local_1a8._4_4_;
    }
  }
  puVar2 = puVar18 + (longlong)iVar21 * 4;
  if (puVar18 != puVar2) {
    do {
      local_188 = *(undefined4 *)puVar18;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_108,(int *)((longlong)&local_170 + 4),(bool *)&local_188);
      puVar18 = puVar18 + 4;
    } while (puVar18 != puVar2);
    iVar22 = local_1a8._4_4_;
  }
  uVar10 = local_158.Elements._52_4_;
  uVar9 = local_158.Elements._8_4_;
  if (((iVar22 != 1) && (iVar22 < 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Stored keys matches expected count",iVar22,uVar9 - uVar10
            );
  uVar13 = local_1b8;
  uVar14 = (ulonglong)(int)local_1b8;
  pFVar3 = local_1c0.Data + uVar14 * 8;
  FVar19.Data = local_1c0.Data;
  while( true ) {
    if ((uint)uVar14 != uVar13) {
      local_1c8 = 0;
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1c8);
    }
    uVar9 = local_108.Elements._52_4_;
    if (FVar19.Data == pFVar3) break;
    uVar14 = *(ulonglong *)FVar19.Data;
    if (local_158.Elements._8_4_ != local_158.Elements._52_4_) {
      FVar25 = (ForElementType<FSetElementId>)&local_158.Hash;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar25 = local_158.Hash.SecondaryData;
      }
      for (iVar21 = *(int *)((longlong)FVar25 +
                            ((uVar14 >> 0x20) * 0x17 + uVar14 & (ulonglong)(local_158.HashSize - 1))
                            * 4); iVar21 != -1;
          iVar21 = *(int *)(local_158.Elements._0_8_ + 8 + (longlong)iVar21 * 0x10)) {
        if (*(ulonglong *)(local_158.Elements._0_8_ + (longlong)iVar21 * 0x10) == uVar14)
        goto LAB_1422fca5a;
      }
    }
    iVar21 = -1;
LAB_1422fca5a:
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"All stored keys can be found",iVar21 != -1);
    uVar14 = (ulonglong)local_1b8;
    FVar19.Data = FVar19.Data + 8;
  }
  iVar21 = local_1a8._4_4_;
  uVar10 = local_108.Elements._8_4_;
  if (((local_1a8._4_4_ != 1) && (local_1a8 < 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Stored values matches expected count",iVar21,
             uVar10 - uVar9);
  uVar13 = local_1b8;
  pFVar3 = local_1c0.Data + (longlong)(int)local_1b8 * 8;
  FVar19.Data = local_1c0.Data;
  while( true ) {
    if (local_1b8 != uVar13) {
      local_1c7 = 0;
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1c7);
    }
    if (FVar19.Data == pFVar3) break;
    uVar14 = *(ulonglong *)FVar19.Data;
    if (local_158.Elements._8_4_ != local_158.Elements._52_4_) {
      FVar25 = (ForElementType<FSetElementId>)&local_158.Hash;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar25 = local_158.Hash.SecondaryData;
      }
      for (iVar21 = *(int *)((longlong)FVar25 +
                            ((uVar14 >> 0x20) * 0x17 + uVar14 & (ulonglong)(local_158.HashSize - 1))
                            * 4); iVar21 != -1;
          iVar21 = *(int *)(local_158.Elements._0_8_ + 8 + (longlong)iVar21 * 0x10)) {
        if (*(ulonglong *)(local_158.Elements._0_8_ + (longlong)iVar21 * 0x10) == uVar14)
        goto LAB_1422fcb5a;
      }
    }
    iVar21 = -1;
LAB_1422fcb5a:
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"All stored values can be found",iVar21 != -1);
    FVar19.Data = FVar19.Data + 8;
  }
  uVar14 = (ulonglong)(int)local_1b8;
  local_180 = local_1b8;
  local_160 = local_1c0.Data + uVar14 * 8;
  FVar19.Data = local_1c0.Data;
  do {
    pFVar3 = local_160;
    if (local_1b8 != (uint)uVar14) {
      local_1c6[0] = 0;
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1c6);
    }
    if (FVar19.Data == pFVar3) {
      local_108.HashSize = 0;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108.Elements);
      local_158.HashSize = 0;
      if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_158.Elements);
      if (local_198.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data);
      }
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
      if (1 < (int)local_1a8._4_4_) {
        FMemory::Free(local_1b0.Allocation);
      }
      return true;
    }
    uVar14 = *(ulonglong *)FVar19.Data;
    uVar15 = (int)uVar14 - 1;
    uVar13 = 0;
    if ((int)uVar15 < (int)local_190) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    FVar17 = local_1b0;
    uVar13 = local_1a8._4_4_;
    local_184 = *(int *)(local_198.Data + (longlong)(int)uVar15 * 4);
    uVar15 = uVar13;
    if (local_1a8._4_4_ == 1) {
      FVar17.Allocation = (uchar *)&local_1b0;
      uVar16 = local_1a8._4_4_;
      uVar24 = 0;
LAB_1422fcc71:
      do {
        uVar26 = uVar15 >> 1;
        uVar23 = uVar24;
        if (*(ulonglong *)(FVar17.Allocation + (longlong)(int)(uVar26 + uVar24) * 8) < uVar14) {
          uVar23 = uVar26 + uVar24 + (uVar15 & 1);
        }
        uVar15 = uVar26;
        uVar24 = uVar23;
      } while (uVar26 != 0);
    }
    else {
      if (local_1a8 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
      }
      uVar24 = 0;
      uVar23 = 0;
      uVar16 = local_1a8._4_4_;
      if (0 < (int)uVar13) goto LAB_1422fcc71;
    }
    if ((int)uVar23 < (int)uVar16) {
      uVar15 = 0;
      if ((int)uVar23 < (int)uVar13) {
        uVar15 = ~uVar23 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        uVar16 = local_1a8._4_4_;
      }
      this = (FPublicExportMapIterationTest *)local_178;
      if (*(ulonglong *)(FVar17.Allocation + (longlong)(int)uVar23 * 8) != uVar14)
      goto LAB_1422fcd8d;
      if (uVar16 == 1) {
        puVar18 = local_1a0;
      }
      else {
        puVar18 = local_1b0.Allocation + (longlong)(int)uVar16 * 8;
        if (((int)uVar16 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
      }
      uVar13 = 0;
      if ((int)uVar23 < (int)uVar16) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      iVar21 = *(int *)(puVar18 + (longlong)(int)uVar23 * 4);
      this = (FPublicExportMapIterationTest *)local_178;
    }
    else {
LAB_1422fcd8d:
      iVar21 = -1;
    }
    FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"Lookup works",iVar21,local_184);
    uVar14 = (ulonglong)local_180;
    FVar19.Data = FVar19.Data + 8;
  } while( true );
}

// GetBeautifiedTestName @ 1422fce60

FString * __thiscall
FPublicExportMapIterationTest::GetBeautifiedTestName
          (FPublicExportMapIterationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Loading.FPublicExportMap.Iteration");
  return __return_storage_ptr__;
}

