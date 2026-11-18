// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ade690

EAutomationTestFlags __thiscall FBitArrayFindTest::GetTestFlags(FBitArrayFindTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ade6a0

bool __thiscall FBitArrayFindTest::IsStressTest(FBitArrayFindTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ade6b0

uint __thiscall FBitArrayFindTest::GetRequiredDeviceNum(FBitArrayFindTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ade6c0

FString * __thiscall
FBitArrayFindTest::GetTestSourceFileName(FBitArrayFindTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ade6f0

int __thiscall FBitArrayFindTest::GetTestSourceFileLine(FBitArrayFindTest *this)

{
  return 0x816;
}

// GetTests @ 141ade700

/* WARNING: Removing unreachable block (ram,0x000141ade87e) */

void __thiscall
FBitArrayFindTest::GetTests
          (FBitArrayFindTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = UE::Core::Private::
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
    iVar4 = UE::Core::Private::
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

// RunTest @ 141ade8a0

bool __thiscall FBitArrayFindTest::RunTest(FBitArrayFindTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ade8d0

FString * __thiscall
FBitArrayFindTest::GetBeautifiedTestName(FBitArrayFindTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayFindTest @ 141b1a470

FBitArrayFindTest * __thiscall
FBitArrayFindTest::FBitArrayFindTest(FBitArrayFindTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayFindTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::Find");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141b61ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141b61da5) */
/* WARNING: Removing unreachable block (ram,0x000141b61df7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff6c : 0x000141b61e1d */
/* WARNING: Removing unreachable block (ram,0x000141b61e33) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FBitArrayFindTest::TestBody(FBitArrayFindTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  uint *puVar5;
  uint *puVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  FString local_a8;
  uint local_98 [4];
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78 [4];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  uint local_58 [4];
  uint *local_48;
  int local_40;
  undefined4 local_3c;
  TBitArray<FDefaultBitArrayAllocator> local_38;
  ulonglong local_18;
  ulonglong uVar10;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar11 = 0;
  local_68 = (uint *)0x0;
  local_5c = 0x80;
  local_60 = 0x20;
  local_78[0] = 0xffffffff;
  puVar6 = local_78;
  uVar10 = uVar11;
  while (*puVar6 == 0) {
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    puVar6 = puVar6 + 1;
    if (0 < (int)uVar9) goto LAB_141b61b51;
  }
  puVar6 = local_78 + uVar10;
  iVar3 = 0;
  bVar13 = *puVar6 != 0;
  if (bVar13) {
    for (; (*puVar6 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar8 = 0x20;
  if (bVar13) {
    iVar8 = iVar3;
  }
  iVar8 = iVar8 + (int)uVar10 * 0x20;
  if ((0x1f < iVar8) || (iVar8 != 0)) {
LAB_141b61b51:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Find true in an array containing 32 true");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  puVar6 = local_78;
  if (local_68 != (uint *)0x0) {
    puVar6 = local_68;
  }
  puVar5 = puVar6;
  uVar10 = uVar11;
  if (local_60 + 0x1fU >> 5 != 0) {
LAB_141b61bb1:
    if (*puVar5 == 0xffffffff) goto code_r0x000141b61bb6;
    uVar9 = ~puVar6[uVar10];
    iVar3 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    iVar8 = 0x20;
    if (uVar9 != 0) {
      iVar8 = iVar3;
    }
    iVar8 = iVar8 + (int)uVar10 * 0x20;
    if ((iVar8 < local_60) && (iVar8 != -1)) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Find false in an array containing 32 true");
      (*pcVar2)(pFVar1,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141b61c24:
  if (local_68 != (uint *)0x0) {
    FMemory::Free(local_68);
  }
  local_48 = (uint *)0x0;
  local_3c = 0x80;
  local_40 = 0x20;
  local_58[0] = 0;
  puVar6 = local_58;
  uVar10 = uVar11;
LAB_141b61c60:
  if (*puVar6 == 0xffffffff) goto code_r0x000141b61c65;
  uVar9 = ~local_58[uVar10];
  iVar3 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar8 = 0x20;
  if (uVar9 != 0) {
    iVar8 = iVar3;
  }
  iVar8 = iVar8 + (int)uVar10 * 0x20;
  if ((0x1f < iVar8) || (iVar8 != 0)) goto LAB_141b61c91;
  goto LAB_141b61cd6;
code_r0x000141b61bb6:
  uVar9 = (int)uVar10 + 1;
  puVar5 = puVar5 + 1;
  uVar10 = (ulonglong)uVar9;
  if ((int)(local_60 + 0x1fU >> 5) <= (int)uVar9) goto LAB_141b61c24;
  goto LAB_141b61bb1;
code_r0x000141b61c65:
  uVar9 = (int)uVar10 + 1;
  uVar10 = (ulonglong)uVar9;
  puVar6 = puVar6 + 1;
  if (0 < (int)uVar9) goto LAB_141b61c91;
  goto LAB_141b61c60;
LAB_141b61c91:
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_a8,L"Find false in an array containing 32 false");
  (*pcVar2)(pFVar1,&local_a8,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_141b61cd6:
  puVar6 = local_58;
  if (local_48 != (uint *)0x0) {
    puVar6 = local_48;
  }
  puVar5 = puVar6;
  uVar10 = uVar11;
  if (local_40 + 0x1fU >> 5 != 0) {
LAB_141b61cf1:
    if (*puVar5 == 0) goto code_r0x000141b61cf5;
    iVar3 = 0;
    bVar13 = puVar6[uVar10] != 0;
    if (bVar13) {
      for (; (puVar6[uVar10] >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    iVar8 = 0x20;
    if (bVar13) {
      iVar8 = iVar3;
    }
    iVar8 = iVar8 + (int)uVar10 * 0x20;
    if ((iVar8 < local_40) && (iVar8 != -1)) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"Find true in an array containing 32 false");
      (*pcVar2)(pFVar1,&local_a8,0);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141b61d5f:
  if (local_48 != (uint *)0x0) {
    FMemory::Free(local_48);
  }
  local_88 = (void *)0x0;
  local_98[0] = 0;
  local_7c = 0x80;
  local_80 = 0x21;
  local_98[1] = local_98[1] & 1;
  local_98[1] = 1;
  puVar6 = local_98;
  uVar10 = uVar11;
LAB_141b61e45:
  if (*puVar6 == 0) goto code_r0x000141b61e49;
  puVar6 = local_98 + uVar10;
  iVar3 = 0;
  bVar13 = *puVar6 != 0;
  if (bVar13) {
    for (; (*puVar6 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar8 = 0x20;
  if (bVar13) {
    iVar8 = iVar3;
  }
  iVar8 = iVar8 + (int)uVar10 * 0x20;
  if ((0x20 < iVar8) || (iVar8 != 0x20)) goto LAB_141b61e72;
  goto LAB_141b61eb3;
code_r0x000141b61cf5:
  uVar9 = (int)uVar10 + 1;
  puVar5 = puVar5 + 1;
  uVar10 = (ulonglong)uVar9;
  if ((int)(local_40 + 0x1fU >> 5) <= (int)uVar9) goto LAB_141b61d5f;
  goto LAB_141b61cf1;
code_r0x000141b61e49:
  uVar9 = (int)uVar10 + 1;
  uVar10 = (ulonglong)uVar9;
  puVar6 = puVar6 + 1;
  if (1 < (int)uVar9) goto LAB_141b61e72;
  goto LAB_141b61e45;
LAB_141b61e72:
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_a8,
                     L"Find true in an array containing multiple false and then a single true");
  (*pcVar2)(pFVar1,&local_a8,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_141b61eb3:
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  local_38.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38.MaxBits = 0x80;
  local_38.NumBits = 0x20;
  local_38.AllocatorInstance.InlineData[0] = 0xff;
  local_38.AllocatorInstance.InlineData[1] = 0xff;
  local_38.AllocatorInstance.InlineData[2] = 0xff;
  local_38.AllocatorInstance.InlineData[3] = 0xff;
  TBitArray<FDefaultBitArrayAllocator>::Add(&local_38,false);
  FVar12 = (ForElementType<unsigned_int>)&local_38;
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar12 = local_38.AllocatorInstance.SecondaryData;
  }
  FVar7 = FVar12;
  if (local_38.NumBits + 0x1fU >> 5 != 0) {
    do {
      if (*(int *)FVar7 != -1) {
        uVar9 = ~*(uint *)((longlong)FVar12 + uVar11 * 4);
        iVar3 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        iVar8 = 0x20;
        if (uVar9 != 0) {
          iVar8 = iVar3;
        }
        iVar8 = iVar8 + (int)uVar11 * 0x20;
        if ((iVar8 < local_38.NumBits) && (iVar8 == 0x20)) goto LAB_141b61f74;
        break;
      }
      uVar9 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
      FVar7 = (ForElementType<unsigned_int>)((longlong)FVar7 + 4);
    } while ((int)uVar9 < (int)(local_38.NumBits + 0x1fU >> 5));
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_a8,
                     L"Find true in an array containing multiple true and then a single false");
  (*pcVar2)(pFVar1,&local_a8,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_141b61f74:
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
  }
  return;
}

