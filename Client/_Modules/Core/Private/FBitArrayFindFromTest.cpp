// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac6300

EAutomationTestFlags __thiscall FBitArrayFindFromTest::GetTestFlags(FBitArrayFindFromTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac6310

bool __thiscall FBitArrayFindFromTest::IsStressTest(FBitArrayFindFromTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac6320

uint __thiscall FBitArrayFindFromTest::GetRequiredDeviceNum(FBitArrayFindFromTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac6330

FString * __thiscall
FBitArrayFindFromTest::GetTestSourceFileName
          (FBitArrayFindFromTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac6360

int __thiscall FBitArrayFindFromTest::GetTestSourceFileLine(FBitArrayFindFromTest *this)

{
  return 0x837;
}

// GetTests @ 141ac6370

/* WARNING: Removing unreachable block (ram,0x000141ac64ee) */

void __thiscall
FBitArrayFindFromTest::GetTests
          (FBitArrayFindFromTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac6510

bool __thiscall FBitArrayFindFromTest::RunTest(FBitArrayFindFromTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac6540

FString * __thiscall
FBitArrayFindFromTest::GetBeautifiedTestName
          (FBitArrayFindFromTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayFindFromTest @ 141b1a2a0

FBitArrayFindFromTest * __thiscall
FBitArrayFindFromTest::FBitArrayFindFromTest(FBitArrayFindFromTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayFindFromTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::FindFrom");
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

// TestBody @ 141b60ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141b618a1) */
/* WARNING: Removing unreachable block (ram,0x000141b6187a) */

void __thiscall FBitArrayFindFromTest::TestBody(FBitArrayFindFromTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FAutomationTestFramework *pFVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  FCheckScope local_c8;
  uint local_b0 [4];
  uint *local_a0;
  int local_98;
  undefined4 local_94;
  uint local_90 [4];
  uint *local_80;
  int local_78;
  undefined4 local_74;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  uint local_50 [4];
  uint *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FCheckScope::FCheckScope(&local_c8);
  FCheckScope::GetCount(&local_c8);
  FCheckScope::~FCheckScope(&local_c8);
  FCheckScope::FCheckScope(&local_c8);
  FCheckScope::GetCount(&local_c8);
  FCheckScope::~FCheckScope(&local_c8);
  uVar17 = 1;
  local_34 = 0x80;
  local_38 = 1;
  uVar16 = 0;
  local_40 = (uint *)0x0;
  uVar15 = 1;
  local_50[0] = 1;
  FCheckScope::FCheckScope(&local_c8);
  uVar12 = 0x80000000;
  puVar8 = local_50;
  if (local_40 != (uint *)0x0) {
    puVar8 = local_40;
  }
  uVar10 = 0x80000000;
  uVar13 = 0x80000000;
  uVar6 = uVar16;
  if (local_38 + 0x1fU >> 5 != 0) {
    do {
      if ((*puVar8 & uVar13) != 0) break;
      uVar3 = (int)uVar6 + 1;
      puVar8 = puVar8 + 1;
      uVar6 = (ulonglong)uVar3;
      uVar13 = 0xffffffff;
    } while ((int)uVar3 < (int)(local_38 + 0x1fU >> 5));
  }
  FCheckScope::GetCount(&local_c8);
  FCheckScope::~FCheckScope(&local_c8);
  FCheckScope::FCheckScope(&local_c8);
  iVar5 = local_38 + 1;
  puVar8 = local_50;
  if (local_40 != (uint *)0x0) {
    puVar8 = local_40;
  }
  uVar13 = local_38 + 0x1fU >> 5;
  iVar4 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
  if (iVar4 < (int)uVar13) {
    puVar8 = puVar8 + iVar4;
    uVar3 = -1 << ((byte)iVar5 & 0x1f);
    do {
      if ((*puVar8 & uVar3) != 0) break;
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
      uVar3 = 0xffffffff;
    } while (iVar4 < (int)uVar13);
  }
  FCheckScope::GetCount(&local_c8);
  FCheckScope::~FCheckScope(&local_c8);
  if (local_40 != (uint *)0x0) {
    FMemory::Free(local_40);
  }
  local_a0 = (uint *)0x0;
  local_94 = 0x80;
  local_98 = 0x20;
  local_b0[0] = 0xffffffff;
  puVar8 = local_b0;
  uVar6 = uVar16;
  while (*puVar8 == 0) {
    uVar13 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar13;
    puVar8 = puVar8 + 1;
    if (0 < (int)uVar13) goto LAB_141b610e0;
  }
  puVar8 = local_b0 + uVar6;
  iVar5 = 0;
  bVar18 = *puVar8 != 0;
  if (bVar18) {
    for (; (*puVar8 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
    }
  }
  iVar4 = 0x20;
  if (bVar18) {
    iVar4 = iVar5;
  }
  iVar4 = iVar4 + (int)uVar6 * 0x20;
  if ((0x1f < iVar4) || (iVar4 != 0)) {
LAB_141b610e0:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find true in an array full of true, starting at index 0");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  uVar13 = 0xfffffffe;
  puVar8 = local_b0;
  if (local_a0 != (uint *)0x0) {
    puVar8 = local_a0;
  }
  uVar11 = 0xfffffffe;
  uVar3 = 0xfffffffe;
  puVar9 = puVar8;
  uVar6 = uVar16;
  if (local_98 + 0x1fU >> 5 == 0) {
LAB_141b61184:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find true in an array full of true, starting at index 1");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  else {
    while ((*puVar9 & uVar3) == 0) {
      uVar14 = (int)uVar6 + 1;
      puVar9 = puVar9 + 1;
      uVar6 = (ulonglong)uVar14;
      uVar3 = 0xffffffff;
      if ((int)(local_98 + 0x1fU >> 5) <= (int)uVar14) goto LAB_141b61184;
    }
    uVar3 = puVar8[uVar6] & uVar3;
    iVar5 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar3 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + (int)uVar6 * 0x20;
    if ((local_98 <= iVar4) || (iVar4 != 1)) goto LAB_141b61184;
  }
  puVar8 = local_b0;
  if (local_a0 != (uint *)0x0) {
    puVar8 = local_a0;
  }
  uVar3 = 0xffffffff;
  puVar9 = puVar8;
  uVar6 = uVar16;
  if (local_98 + 0x1fU >> 5 == 0) {
LAB_141b61222:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find true in an array full of true, starting at index 31");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  else {
    while ((*puVar9 & uVar10) == 0) {
      uVar14 = (int)uVar6 + 1;
      puVar9 = puVar9 + 1;
      uVar6 = (ulonglong)uVar14;
      uVar10 = uVar3;
      if ((int)(local_98 + 0x1fU >> 5) <= (int)uVar14) goto LAB_141b61222;
    }
    uVar10 = puVar8[uVar6] & uVar10;
    iVar5 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar10 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + (int)uVar6 * 0x20;
    if ((local_98 <= iVar4) || (iVar4 != 0x1f)) goto LAB_141b61222;
  }
  puVar8 = local_b0;
  if (local_a0 != (uint *)0x0) {
    puVar8 = local_a0;
  }
  uVar10 = local_98 + 0x1fU >> 5;
  puVar9 = puVar8;
  if (1 < uVar10) {
LAB_141b61283:
    if (puVar9[1] == 0) goto code_r0x000141b61288;
    iVar5 = 0;
    bVar18 = puVar8[uVar15] != 0;
    if (bVar18) {
      for (; (puVar8[uVar15] >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (bVar18) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + uVar15 * 0x20;
    if ((iVar4 < local_98) && (iVar4 != -1)) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_c8,
                         L"Find true in an array full of true, starting at index 32");
      (*pcVar2)(pFVar1,&local_c8,0);
      if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
        FMemory::Free(local_c8.DeviceError);
      }
    }
  }
LAB_141b612fb:
  puVar8 = local_b0;
  if (local_a0 != (uint *)0x0) {
    puVar8 = local_a0;
  }
  puVar9 = puVar8;
  uVar6 = uVar16;
  if (local_98 + 0x1fU >> 5 != 0) {
LAB_141b61320:
    if ((uVar11 & *puVar9) == uVar11) goto code_r0x000141b6132a;
    uVar11 = ~puVar8[uVar6] & uVar11;
    iVar5 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar11 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + (int)uVar6 * 0x20;
    if ((iVar4 < local_98) && (iVar4 != -1)) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_c8,
                         L"Find false in an array full of true, starting at index 1");
      (*pcVar2)(pFVar1,&local_c8,0);
      if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
        FMemory::Free(local_c8.DeviceError);
      }
    }
  }
LAB_141b613a6:
  uVar10 = 1;
  uVar15 = 1;
  puVar8 = local_b0;
  if (local_a0 != (uint *)0x0) {
    puVar8 = local_a0;
  }
  uVar11 = local_98 + 0x1fU >> 5;
  puVar9 = puVar8;
  if (1 < uVar11) {
LAB_141b613c7:
    if (puVar9[1] == 0xffffffff) goto code_r0x000141b613cb;
    uVar11 = ~puVar8[uVar15];
    iVar5 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar11 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + uVar15 * 0x20;
    if ((iVar4 < local_98) && (iVar4 != -1)) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_c8,
                         L"Find false in an array full of true, starting at index 32");
      (*pcVar2)(pFVar1,&local_c8,0);
      if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
        FMemory::Free(local_c8.DeviceError);
      }
    }
  }
LAB_141b6143f:
  if (local_a0 != (uint *)0x0) {
    FMemory::Free(local_a0);
  }
  local_80 = (uint *)0x0;
  local_74 = 0x80;
  local_78 = 0x20;
  local_90[0] = 0;
  puVar8 = local_90;
  uVar6 = uVar16;
LAB_141b61480:
  if (*puVar8 == 0xffffffff) goto code_r0x000141b61484;
  uVar15 = ~local_90[uVar6];
  iVar5 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
    }
  }
  iVar4 = 0x20;
  if (uVar15 != 0) {
    iVar4 = iVar5;
  }
  iVar4 = iVar4 + (int)uVar6 * 0x20;
  if ((0x1f < iVar4) || (iVar4 != 0)) goto LAB_141b614b3;
  goto LAB_141b614f7;
code_r0x000141b61288:
  uVar15 = uVar15 + 1;
  puVar9 = puVar9 + 1;
  if ((int)uVar10 <= (int)uVar15) goto LAB_141b612fb;
  goto LAB_141b61283;
code_r0x000141b6132a:
  uVar15 = (int)uVar6 + 1;
  puVar9 = puVar9 + 1;
  uVar6 = (ulonglong)uVar15;
  uVar11 = uVar3;
  if ((int)(local_98 + 0x1fU >> 5) <= (int)uVar15) goto LAB_141b613a6;
  goto LAB_141b61320;
code_r0x000141b613cb:
  uVar15 = uVar15 + 1;
  puVar9 = puVar9 + 1;
  if ((int)uVar11 <= (int)uVar15) goto LAB_141b6143f;
  goto LAB_141b613c7;
code_r0x000141b61484:
  uVar15 = (int)uVar6 + 1;
  uVar6 = (ulonglong)uVar15;
  puVar8 = puVar8 + 1;
  if (0 < (int)uVar15) goto LAB_141b614b3;
  goto LAB_141b61480;
code_r0x000141b61674:
  uVar10 = uVar10 + 1;
  puVar9 = puVar9 + 1;
  if ((int)uVar12 <= (int)uVar10) goto LAB_141b616eb;
  goto LAB_141b61670;
code_r0x000141b61715:
  uVar12 = (int)uVar16 + 1;
  uVar16 = (ulonglong)uVar12;
  puVar9 = puVar9 + 1;
  uVar13 = uVar3;
  if ((int)(local_78 + 0x1fU >> 5) <= (int)uVar12) goto LAB_141b61790;
  goto LAB_141b61710;
LAB_141b614b3:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar1 = pFVar7->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString((FString *)&local_c8,
                     L"Find false in an array full of false, starting at index 0");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
    FMemory::Free(local_c8.DeviceError);
  }
LAB_141b614f7:
  uVar15 = 0xfffffffe;
  puVar8 = local_90;
  if (local_80 != (uint *)0x0) {
    puVar8 = local_80;
  }
  puVar9 = puVar8;
  uVar6 = uVar16;
  if (local_78 + 0x1fU >> 5 == 0) {
LAB_141b61562:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find false in an array full of false, starting at index 1");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  else {
    while ((*puVar9 & uVar15) == uVar15) {
      uVar11 = (int)uVar6 + 1;
      puVar9 = puVar9 + 1;
      uVar6 = (ulonglong)uVar11;
      uVar15 = uVar3;
      if ((int)(local_78 + 0x1fU >> 5) <= (int)uVar11) goto LAB_141b61562;
    }
    uVar15 = ~puVar8[uVar6] & uVar15;
    iVar5 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar15 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + (int)uVar6 * 0x20;
    if ((local_78 <= iVar4) || (iVar4 != 1)) goto LAB_141b61562;
  }
  puVar8 = local_90;
  if (local_80 != (uint *)0x0) {
    puVar8 = local_80;
  }
  puVar9 = puVar8;
  uVar6 = uVar16;
  if (local_78 + 0x1fU >> 5 == 0) {
LAB_141b61607:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find false in an array full of false, starting at index 31");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  else {
    while ((uVar12 & *puVar9) == uVar12) {
      uVar15 = (int)uVar6 + 1;
      puVar9 = puVar9 + 1;
      uVar6 = (ulonglong)uVar15;
      uVar12 = uVar3;
      if ((int)(local_78 + 0x1fU >> 5) <= (int)uVar15) goto LAB_141b61607;
    }
    uVar12 = ~puVar8[uVar6] & uVar12;
    iVar5 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar12 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + (int)uVar6 * 0x20;
    if ((local_78 <= iVar4) || (iVar4 != 0x1f)) goto LAB_141b61607;
  }
  puVar8 = local_90;
  if (local_80 != (uint *)0x0) {
    puVar8 = local_80;
  }
  uVar12 = local_78 + 0x1fU >> 5;
  puVar9 = puVar8;
  if (1 < uVar12) {
LAB_141b61670:
    if (puVar9[1] == 0xffffffff) goto code_r0x000141b61674;
    uVar12 = ~puVar8[uVar10];
    iVar5 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar12 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + uVar10 * 0x20;
    if ((iVar4 < local_78) && (iVar4 != -1)) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_c8,
                         L"Find false in an array full of false, starting at index 32");
      (*pcVar2)(pFVar1,&local_c8,0);
      if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
        FMemory::Free(local_c8.DeviceError);
      }
    }
  }
LAB_141b616eb:
  puVar8 = local_90;
  if (local_80 != (uint *)0x0) {
    puVar8 = local_80;
  }
  puVar9 = puVar8;
  if (local_78 + 0x1fU >> 5 != 0) {
LAB_141b61710:
    if ((*puVar9 & uVar13) == 0) goto code_r0x000141b61715;
    uVar13 = puVar8[uVar16] & uVar13;
    iVar5 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    iVar4 = 0x20;
    if (uVar13 != 0) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + (int)uVar16 * 0x20;
    if ((iVar4 < local_78) && (iVar4 != -1)) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)&local_c8,
                         L"Find true in an array full of false, starting at index 1");
      (*pcVar2)(pFVar1,&local_c8,0);
      if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
        FMemory::Free(local_c8.DeviceError);
      }
    }
  }
LAB_141b61790:
  puVar8 = local_90;
  if (local_80 != (uint *)0x0) {
    puVar8 = local_80;
  }
  uVar12 = local_78 + 0x1fU >> 5;
  puVar9 = puVar8;
  if (1 < uVar12) {
    do {
      if (puVar9[1] != 0) {
        iVar5 = 0;
        bVar18 = puVar8[uVar17] != 0;
        if (bVar18) {
          for (; (puVar8[uVar17] >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        iVar4 = 0x20;
        if (bVar18) {
          iVar4 = iVar5;
        }
        iVar4 = iVar4 + uVar17 * 0x20;
        if ((iVar4 < local_78) && (iVar4 != -1)) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar1 = pFVar7->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString((FString *)&local_c8,
                             L"Find false in an array full of false, starting at index 32");
          (*pcVar2)(pFVar1,&local_c8,0);
          if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
            FMemory::Free(local_c8.DeviceError);
          }
        }
        break;
      }
      uVar17 = uVar17 + 1;
      puVar9 = puVar9 + 1;
    } while ((int)uVar17 < (int)uVar12);
  }
  if (local_80 != (uint *)0x0) {
    FMemory::Free(local_80);
  }
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70.MaxBits = 0x80;
  local_70.AllocatorInstance.InlineData[0] = '\0';
  local_70.AllocatorInstance.InlineData[1] = '\0';
  local_70.AllocatorInstance.InlineData[2] = '\0';
  local_70.AllocatorInstance.InlineData[3] = '\0';
  local_70.NumBits = 0x40;
  TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_70,0x20,0x20,true);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl(&local_70,true,0x20,local_70.NumBits);
  if (iVar5 != 0x20) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find true in an array containing 32 false and then 32 true, starting after all of the false"
                      );
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl(&local_70,false,0x20,local_70.NumBits);
  if (iVar5 != -1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find false in an array containing 32 false and then 32 true, starting after all of the false"
                      );
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70.MaxBits = 0x80;
  local_70.NumBits = 0x20;
  local_70.AllocatorInstance.InlineData[0] = 0xff;
  local_70.AllocatorInstance.InlineData[1] = 0xff;
  local_70.AllocatorInstance.InlineData[2] = 0xff;
  local_70.AllocatorInstance.InlineData[3] = 0xff;
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_70,0x20);
  TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_70,iVar5,0x20,false);
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl(&local_70,true,0x20,local_70.NumBits);
  if (iVar5 != -1) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find true in an array containing 32 true and then 32 false, starting after all of the true"
                      );
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl(&local_70,false,0x20,local_70.NumBits);
  if (iVar5 != 0x20) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,
                       L"Find false in an array containing 32 true and then 32 false, starting after all of the true"
                      );
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.DeviceError != (FCheckScopeOutputDeviceError *)0x0) {
      FMemory::Free(local_c8.DeviceError);
    }
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return;
}

