// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acd200

EAutomationTestFlags __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::GetTestFlags
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acd210

bool __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::IsStressTest
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acd220

uint __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::GetRequiredDeviceNum
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acd230

FString * __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::GetTestSourceFileName
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ChunkedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acd260

int __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::GetTestSourceFileLine
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this)

{
  return 0x16;
}

// GetTests @ 141acd270

/* WARNING: Removing unreachable block (ram,0x000141acd3ee) */

void __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::GetTests
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141acd460

bool __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::RunTest
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acd490

FString * __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::GetBeautifiedTestName
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// TChunkedArrayAddAllocatesProperAmountOfChunksTest @ 141b28980

TChunkedArrayAddAllocatesProperAmountOfChunksTest * __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::
TChunkedArrayAddAllocatesProperAmountOfChunksTest
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7TChunkedArrayAddAllocatesProperAmountOfChunksTest_Private_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][ChunkedArray][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::ChunkedArray::Add");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[Core][Containers][ChunkedArray][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141ba4a20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Private::TChunkedArrayAddAllocatesProperAmountOfChunksTest::TestBody
          (TChunkedArrayAddAllocatesProperAmountOfChunksTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FString *pFVar13;
  FString *pFVar14;
  int iVar15;
  ForAnyElementType local_158;
  uint local_150;
  undefined8 local_14c;
  ForAnyElementType local_140;
  uint local_138;
  undefined8 local_134;
  ForAnyElementType local_128;
  int local_120;
  undefined8 local_11c;
  void *local_110;
  void *local_108;
  void *local_100;
  void *local_f8;
  FString local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  FString local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  pFVar8 = FAutomationTestFramework::Get();
  pFVar2 = pFVar8->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_c0,L"One element per chunk");
  (*pcVar3)(pFVar2,&local_c0,0,0);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  pFVar13 = &local_b0;
  local_b0.Data.AllocatorInstance.Data = ___xmm_00003039000000020000000100000000;
  local_b0.Data.ArrayNum = _UNK_15071d3f8;
  local_b0.Data.ArrayMax = _UNK_15071d3fc;
  iVar15 = 0;
  do {
    iVar1 = *(int *)&(pFVar13->Data).AllocatorInstance.Data;
    local_120 = 0;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_11c = 0;
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                           ,0xf4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = local_11c._4_4_ + iVar1;
    local_11c = CONCAT44(iVar9,(int)local_11c);
    if (local_120 < iVar9) {
      uVar11 = (ulonglong)(uint)(iVar9 - local_120);
      do {
        local_110 = ::operator_new(1);
        if (((local_128.Data <= (FScriptContainerElement *)&local_110) &&
            ((FScriptContainerElement *)&local_110 < local_128.Data + (longlong)(int)local_11c * 8))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_120 == (int)local_11c) {
          local_120 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_128,(int *)&local_11c);
        }
        lVar10 = (longlong)local_120;
        local_120 = local_120 + 1;
        *(void **)(local_128.Data + lVar10 * 8) = local_110;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      iVar9 = local_11c._4_4_;
    }
    if (local_120 != iVar1) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_30,L"Required condition failed, interrupting test");
      (*pcVar3)(pFVar2,&local_30);
      local_40.Data.AllocatorInstance.Data = local_30.Data.AllocatorInstance.Data;
LAB_141ba5420:
      FVar5.Data = local_128.Data;
      FVar12.Data = local_128.Data;
      iVar15 = local_120;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        FVar5.Data = local_128.Data;
        FVar12.Data = local_128.Data;
        iVar15 = local_120;
      }
      for (; local_128.Data = FVar12.Data, iVar15 != 0; iVar15 = iVar15 + -1) {
        ::operator_delete(*(void **)FVar5.Data,1);
        FVar5.Data = FVar5.Data + 8;
        FVar12.Data = local_128.Data;
      }
      local_120 = 0;
      if ((int)local_11c != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_128,0,(int *)&local_11c);
        FVar12.Data = local_128.Data;
      }
      goto LAB_141ba53a2;
    }
    FVar5.Data = local_128.Data;
    iVar4 = local_120;
    if (iVar9 != iVar1) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_40,L"Required condition failed, interrupting test");
      (*pcVar3)(pFVar2,&local_40);
      goto LAB_141ba5420;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      ::operator_delete(*(void **)FVar5.Data,1);
      FVar5.Data = FVar5.Data + 8;
    }
    local_120 = 0;
    if ((int)local_11c != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_128,0,(int *)&local_11c);
    }
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    pFVar13 = (FString *)((longlong)&(pFVar13->Data).AllocatorInstance.Data + 4);
  } while (pFVar13 != &local_a0);
  pFVar8 = FAutomationTestFramework::Get();
  pFVar2 = pFVar8->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_a0,L"Arbitrary num elements per chunk");
  (*pcVar3)(pFVar2,&local_a0,0,0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pFVar13 = &local_d8;
  local_d8.Data.AllocatorInstance.Data = ___xmm_0000002f0000002e0000000100000000;
  local_d8.Data.ArrayNum = _UNK_15071d388;
  local_d8.Data.ArrayMax = _UNK_15071d38c;
  local_c8 = 0x30;
  local_c4 = 8999;
  while( true ) {
    iVar1 = *(int *)&(pFVar13->Data).AllocatorInstance.Data;
    local_138 = 0;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_134 = 0;
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                           ,0xf4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = local_134._4_4_ + iVar1;
    local_134 = CONCAT44(iVar9,(uint)local_134);
    iVar4 = (iVar9 + 0x2e) / 0x2f;
    if ((int)local_138 < iVar4) {
      uVar11 = (ulonglong)(iVar4 - local_138);
      do {
        local_108 = ::operator_new(0x2f);
        if (((local_140.Data <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 <
             local_140.Data + (longlong)(int)(uint)local_134 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_138 == (uint)local_134) {
          local_138 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_140,(int *)&local_134);
        }
        lVar10 = (longlong)(int)local_138;
        local_138 = local_138 + 1;
        *(void **)(local_140.Data + lVar10 * 8) = local_108;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      iVar9 = local_134._4_4_;
    }
    if (local_138 != (iVar1 + 0x2eU) / 0x2f) break;
    FVar5.Data = local_140.Data;
    uVar6 = local_138;
    if (iVar9 != iVar1) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_60,L"Required condition failed, interrupting test");
      (*pcVar3)(pFVar2,&local_60);
      goto LAB_141ba533c;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      ::operator_delete(*(void **)FVar5.Data,0x2f);
      FVar5.Data = FVar5.Data + 8;
    }
    local_138 = 0;
    if ((uint)local_134 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_140,0,(int *)&local_134);
    }
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    pFVar13 = (FString *)((longlong)&(pFVar13->Data).AllocatorInstance.Data + 4);
    if (pFVar13 == &local_c0) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
      ::FString::FString(&local_90,L"Add to non-empty array");
      (*pcVar3)(pFVar2,&local_90,0,0);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      pFVar13 = &local_f0;
      local_f0.Data.AllocatorInstance.Data = ___xmm_0000002f0000002e0000000100000000;
      local_f0.Data.ArrayNum = _UNK_15071d388;
      local_f0.Data.ArrayMax = _UNK_15071d38c;
      local_e0 = 0x30;
      local_dc = 8999;
      do {
        pFVar14 = &local_f0;
        do {
          iVar1 = *(int *)&(pFVar14->Data).AllocatorInstance.Data;
          local_150 = 0;
          local_158.Data = (FScriptContainerElement *)0x0;
          local_14c = 0;
          if ((iVar15 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Count>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                                 ,0xf4,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = local_14c._4_4_ + iVar15;
          local_14c = CONCAT44(iVar9,(uint)local_14c);
          iVar9 = (iVar9 + 0x2e) / 0x2f;
          if ((int)local_150 < iVar9) {
            uVar11 = (ulonglong)(iVar9 - local_150);
            do {
              local_100 = ::operator_new(0x2f);
              if (((local_158.Data <= (FScriptContainerElement *)&local_100) &&
                  ((FScriptContainerElement *)&local_100 <
                   local_158.Data + (longlong)(int)(uint)local_14c * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (local_150 == (uint)local_14c) {
                local_150 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_158,(int *)&local_14c);
              }
              lVar10 = (longlong)(int)local_150;
              local_150 = local_150 + 1;
              *(void **)(local_158.Data + lVar10 * 8) = local_100;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if ((iVar1 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Count>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                                 ,0xf4,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = local_14c._4_4_ + iVar1;
          local_14c = CONCAT44(iVar9,(uint)local_14c);
          iVar4 = (iVar9 + 0x2e) / 0x2f;
          if ((int)local_150 < iVar4) {
            uVar11 = (ulonglong)(iVar4 - local_150);
            do {
              local_f8 = ::operator_new(0x2f);
              if (((local_158.Data <= (FScriptContainerElement *)&local_f8) &&
                  ((FScriptContainerElement *)&local_f8 <
                   local_158.Data + (longlong)(int)(uint)local_14c * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (local_150 == (uint)local_14c) {
                local_150 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_158,(int *)&local_14c);
              }
              lVar10 = (longlong)(int)local_150;
              local_150 = local_150 + 1;
              *(void **)(local_158.Data + lVar10 * 8) = local_f8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            iVar9 = local_14c._4_4_;
          }
          if (local_150 != (iVar1 + iVar15 + 0x2eU) / 0x2f) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar2 = pFVar8->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_70,L"Required condition failed, interrupting test");
            (*pcVar3)(pFVar2,&local_70);
            local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
LAB_141ba5236:
            FVar5.Data = local_158.Data;
            uVar6 = local_150;
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
              FVar5.Data = local_158.Data;
              uVar6 = local_150;
            }
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              ::operator_delete(*(void **)FVar5.Data,0x2f);
              FVar5.Data = FVar5.Data + 8;
            }
            local_150 = 0;
            if ((uint)local_14c != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&local_158,0,(int *)&local_14c);
            }
            if (local_158.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_158.Data);
            return;
          }
          FVar5.Data = local_158.Data;
          uVar6 = local_150;
          if (iVar9 != iVar1 + iVar15) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar2 = pFVar8->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_80,L"Required condition failed, interrupting test");
            (*pcVar3)(pFVar2,&local_80);
            goto LAB_141ba5236;
          }
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            ::operator_delete(*(void **)FVar5.Data,0x2f);
            FVar5.Data = FVar5.Data + 8;
          }
          local_150 = 0;
          if ((uint)local_14c != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_158,0,(int *)&local_14c);
          }
          if (local_158.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data);
          }
          pFVar14 = (FString *)((longlong)&(pFVar14->Data).AllocatorInstance.Data + 4);
        } while (pFVar14 != &local_d8);
        pFVar13 = (FString *)((longlong)&(pFVar13->Data).AllocatorInstance.Data + 4);
        if (pFVar13 == &local_d8) {
          return;
        }
        iVar15 = *(int *)&(pFVar13->Data).AllocatorInstance.Data;
      } while( true );
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar2 = pFVar8->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_50,L"Required condition failed, interrupting test");
  (*pcVar3)(pFVar2,&local_50);
  local_60.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
LAB_141ba533c:
  FVar5.Data = local_140.Data;
  uVar6 = local_138;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
    FVar5.Data = local_140.Data;
    uVar6 = local_138;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    ::operator_delete(*(void **)FVar5.Data,0x2f);
    FVar5.Data = FVar5.Data + 8;
  }
  local_138 = 0;
  FVar12.Data = local_140.Data;
  if ((uint)local_134 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_140,0,(int *)&local_134);
    FVar12.Data = local_140.Data;
  }
LAB_141ba53a2:
  if (FVar12.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(FVar12.Data);
  return;
}

