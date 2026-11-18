// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad4940

EAutomationTestFlags __thiscall
FDynamicCompactHashTableTest::GetTestFlags(FDynamicCompactHashTableTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad4950

bool __thiscall FDynamicCompactHashTableTest::IsStressTest(FDynamicCompactHashTableTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad4960

uint __thiscall
FDynamicCompactHashTableTest::GetRequiredDeviceNum(FDynamicCompactHashTableTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad4970

FString * __thiscall
FDynamicCompactHashTableTest::GetTestSourceFileName
          (FDynamicCompactHashTableTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\CompactHashTableTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad49a0

int __thiscall
FDynamicCompactHashTableTest::GetTestSourceFileLine(FDynamicCompactHashTableTest *this)

{
  return 0xbf;
}

// GetTests @ 141ad4a50

/* WARNING: Removing unreachable block (ram,0x000141ad4bce) */

void __thiscall
FDynamicCompactHashTableTest::GetTests
          (FDynamicCompactHashTableTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad4c30

bool __thiscall
FDynamicCompactHashTableTest::RunTest(FDynamicCompactHashTableTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad4e00

FString * __thiscall
FDynamicCompactHashTableTest::GetBeautifiedTestName
          (FDynamicCompactHashTableTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDynamicCompactHashTableTest @ 141b21790

FDynamicCompactHashTableTest * __thiscall
FDynamicCompactHashTableTest::FDynamicCompactHashTableTest
          (FDynamicCompactHashTableTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDynamicCompactHashTableTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][CompactHashTable]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::CompactHashTable::Dynamic");
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
  ::FString::FString(&local_18,"[Core][Containers][CompactHashTable]");
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

// TestBody @ 141b873b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicCompactHashTableTest::TestBody(FDynamicCompactHashTableTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  uint uVar4;
  char *pcVar5;
  FScriptContainerElement *pFVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined1 auStack_eb8 [32];
  undefined1 local_e98 [16];
  undefined4 local_e88;
  undefined4 local_e84;
  undefined1 local_e80 [16];
  undefined1 *local_e70;
  undefined8 uStack_e68;
  FScriptContainerElement local_e60 [16];
  undefined1 *local_e50;
  undefined8 uStack_e48;
  undefined1 *local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined1 *local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined1 *local_e00;
  undefined8 uStack_df8;
  undefined1 *local_df0;
  undefined8 uStack_de8;
  FScriptContainerElement local_de0 [16];
  undefined1 *local_dd0;
  undefined8 uStack_dc8;
  undefined1 *local_dc0;
  undefined8 uStack_db8;
  char local_da8 [255];
  undefined1 *local_ca9;
  undefined8 uStack_ca1;
  undefined1 *local_c99;
  undefined8 uStack_c91;
  undefined1 *local_c89;
  undefined8 uStack_c81;
  undefined1 *local_c79;
  undefined8 uStack_c71;
  undefined1 *local_c69;
  undefined8 uStack_c61;
  undefined1 *local_c59;
  undefined8 uStack_c51;
  undefined1 *local_c49;
  undefined8 uStack_c41;
  undefined1 *local_c39;
  undefined8 uStack_c31;
  char local_c29;
  FScriptContainerElement local_c28 [255];
  undefined1 *local_b29;
  undefined8 uStack_b21;
  undefined1 *local_b19;
  undefined8 uStack_b11;
  undefined1 *local_b09;
  undefined8 uStack_b01;
  undefined1 *local_af9;
  undefined8 uStack_af1;
  undefined1 *local_ae9;
  undefined8 uStack_ae1;
  undefined1 *local_ad9;
  undefined8 uStack_ad1;
  undefined1 *local_ac9;
  undefined8 uStack_ac1;
  undefined1 *local_ab9;
  undefined8 uStack_ab1;
  undefined1 local_a28 [512];
  FScriptContainerElement local_828 [255];
  undefined1 *local_729;
  undefined8 uStack_721;
  undefined1 *local_719;
  undefined8 uStack_711;
  undefined1 *local_709;
  undefined8 uStack_701;
  undefined1 *local_6f9;
  undefined8 uStack_6f1;
  undefined1 *local_6e9;
  undefined8 uStack_6e1;
  undefined1 *local_6d9;
  undefined8 uStack_6d1;
  undefined1 *local_6c9;
  undefined8 uStack_6c1;
  undefined1 *local_6b9;
  undefined8 uStack_6b1;
  undefined1 local_628 [512];
  ulonglong local_428 [64];
  ulonglong local_228 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_eb8;
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)local_e80,L"Constructor Behavior");
  (*pcVar2)(pFVar1,local_e80,0,0);
  if ((FScriptContainerElement *)local_e80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e80._0_8_);
  }
  pcVar5 = (char *)&local_e30;
  local_e30 = ___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_e28 = _UNK_15071d428;
  local_e20 = (undefined1 *)___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_e18 = _UNK_15071d428;
  do {
    if (*pcVar5 != -0x10) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e80,L"Condition failed");
      (*pcVar2)(pFVar1,local_e80,0);
      if ((FScriptContainerElement *)local_e80._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e80._0_8_);
      }
    }
    pcVar5 = pcVar5 + 1;
  } while (pcVar5 != (char *)&local_e10);
  pcVar5 = (char *)&local_e30;
  uVar8 = 0;
  local_e20 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_e18 = _UNK_15060db28;
  uVar4 = 0;
  do {
    if (uVar4 < 0x10) {
      if (*pcVar5 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e80,L"Condition failed");
        (*pcVar2)(pFVar1,local_e80);
        pFVar6 = (FScriptContainerElement *)local_e80._0_8_;
LAB_141b87526:
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
      }
    }
    else if (*pcVar5 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e98,L"Condition failed");
      (*pcVar2)(pFVar1,local_e98,0);
      pFVar6 = (FScriptContainerElement *)local_e98._0_8_;
      goto LAB_141b87526;
    }
    uVar4 = uVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (uVar4 < 0x20);
  pFVar6 = (FScriptContainerElement *)&local_e10;
  local_e10 = ___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_e08 = _UNK_15071d428;
  local_e00 = (undefined1 *)___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_df8 = _UNK_15071d428;
  local_df0 = (undefined1 *)___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_de8 = _UNK_15071d428;
  do {
    if (*pFVar6 != (FScriptContainerElement)0xf0) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e98,L"Condition failed");
      (*pcVar2)(pFVar1,local_e98,0);
      if ((FScriptContainerElement *)local_e98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e98._0_8_);
      }
    }
    pFVar6 = pFVar6 + 1;
  } while (pFVar6 != local_de0);
  pcVar5 = (char *)&local_e10;
  local_e00 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_df8 = _UNK_15060db28;
  uVar4 = 0;
  local_df0 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_de8 = _UNK_15060db28;
  do {
    if (uVar4 < 0x10) {
      if (*pcVar5 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e98,L"Condition failed");
        (*pcVar2)(pFVar1,local_e98);
        pFVar6 = (FScriptContainerElement *)local_e98._0_8_;
LAB_141b8763f:
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
      }
    }
    else if (*pcVar5 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e80,L"Condition failed");
      (*pcVar2)(pFVar1,local_e80,0);
      pFVar6 = (FScriptContainerElement *)local_e80._0_8_;
      goto LAB_141b8763f;
    }
    uVar4 = uVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (uVar4 < 0x30);
  memset(local_428,0xf0,0x400);
  puVar7 = local_428;
  do {
    if ((char)*puVar7 != -0x10) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e98,L"Condition failed");
      (*pcVar2)(pFVar1,local_e98,0);
      if ((FScriptContainerElement *)local_e98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e98._0_8_);
      }
    }
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
  } while (puVar7 != local_28);
  memset(local_428 + 0x40,0xff,0x200);
  uVar4 = 0;
  puVar7 = local_428;
  do {
    if (uVar4 < 0x200) {
      if ((char)*puVar7 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e98,L"Condition failed");
        (*pcVar2)(pFVar1,local_e98);
        pFVar6 = (FScriptContainerElement *)local_e98._0_8_;
LAB_141b87772:
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
      }
    }
    else if ((char)*puVar7 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e80,L"Condition failed");
      (*pcVar2)(pFVar1,local_e80,0);
      pFVar6 = (FScriptContainerElement *)local_e80._0_8_;
      goto LAB_141b87772;
    }
    uVar4 = uVar4 + 1;
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
  } while (uVar4 < 0x400);
  memset(local_da8,0xf0,0x17f);
  pcVar5 = local_da8;
  do {
    if (*pcVar5 != -0x10) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e98,L"Condition failed");
      (*pcVar2)(pFVar1,local_e98,0);
      if ((FScriptContainerElement *)local_e98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e98._0_8_);
      }
    }
    pcVar5 = pcVar5 + 1;
  } while (pcVar5 != &local_c29);
  pcVar5 = local_da8;
  local_ca9 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_ca1 = _UNK_15060db28;
  local_c99 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c91 = _UNK_15060db28;
  local_c89 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c81 = _UNK_15060db28;
  local_c79 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c71 = _UNK_15060db28;
  local_c69 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c61 = _UNK_15060db28;
  local_c59 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c51 = _UNK_15060db28;
  local_c49 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c41 = _UNK_15060db28;
  local_c39 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_c31 = _UNK_15060db28;
  do {
    if (uVar8 < 0xff) {
      if (*pcVar5 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e98,L"Condition failed");
        (*pcVar2)(pFVar1,local_e98);
        pFVar6 = (FScriptContainerElement *)local_e98._0_8_;
LAB_141b878c2:
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
      }
    }
    else if (*pcVar5 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e80,L"Condition failed");
      (*pcVar2)(pFVar1,local_e80,0);
      pFVar6 = (FScriptContainerElement *)local_e80._0_8_;
      goto LAB_141b878c2;
    }
    uVar8 = uVar8 + 1;
    pcVar5 = pcVar5 + 1;
    if (0x17e < uVar8) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
      ::FString::FString((FString *)local_e98,L"Add Behavior");
      (*pcVar2)(pFVar1,local_e98,0,0);
      if ((FScriptContainerElement *)local_e98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e98._0_8_);
      }
      local_e98._0_8_ = local_e80;
      local_e98._8_8_ = &local_e70;
      local_e88 = 0x10;
      local_e84 = 0x10;
      local_e70 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_e68 = _UNK_15060db28;
      FCommonCompactHashTableTests::TestAddRemove<16,FCompactHashTableView>
                ((FCompactHashTableView *)local_e98);
      local_e98._0_8_ = local_e60;
      local_e98._8_8_ = &local_e50;
      local_e88 = 0x10;
      local_e84 = 0x20;
      local_e50 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_e48 = _UNK_15060db28;
      local_e40 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_e38 = _UNK_15060db28;
      FCommonCompactHashTableTests::TestAddRemove<16,FCompactHashTableView>
                ((FCompactHashTableView *)local_e98);
      local_e98._0_8_ = local_828;
      local_e88 = 0x100;
      local_e98._8_8_ = local_628;
      local_e84 = 0x100;
      memset(local_628,0xff,0x200);
      FCommonCompactHashTableTests::TestAddRemove<256,FCompactHashTableView>
                ((FCompactHashTableView *)local_e98);
      local_e98._0_8_ = local_c28;
      local_e98._8_8_ = &local_b29;
      local_e88 = 0xff;
      local_e84 = 0x80;
      local_b29 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_b21 = _UNK_15060db28;
      local_b19 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_b11 = _UNK_15060db28;
      local_b09 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_b01 = _UNK_15060db28;
      local_af9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_af1 = _UNK_15060db28;
      local_ae9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ae1 = _UNK_15060db28;
      local_ad9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ad1 = _UNK_15060db28;
      local_ac9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ac1 = _UNK_15060db28;
      local_ab9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ab1 = _UNK_15060db28;
      FCommonCompactHashTableTests::TestAddRemove<255,FCompactHashTableView>
                ((FCompactHashTableView *)local_e98);
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
      ::FString::FString((FString *)local_e98,L"Synched Tables Behavior");
      (*pcVar2)(pFVar1,local_e98,0,0);
      if ((FScriptContainerElement *)local_e98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e98._0_8_);
      }
      local_e80._0_8_ = local_de0;
      local_e80._8_8_ = &local_dd0;
      local_e98._0_8_ = local_e60;
      local_e70 = (undefined1 *)0x1000000010;
      local_e98._8_8_ = &local_e50;
      local_dd0 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_dc8 = _UNK_15060db28;
      local_e88 = 0x10;
      local_e84 = 0x10;
      local_e50 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_e48 = _UNK_15060db28;
      FCommonCompactHashTableTests::TestSynchedTables<16,FCompactHashTableView>
                ((FCompactHashTableView *)local_e80,(FCompactHashTableView *)local_e98);
      local_e80._0_8_ = local_e60;
      local_e80._8_8_ = &local_e50;
      local_e98._0_8_ = local_de0;
      local_e70 = (undefined1 *)0x2000000010;
      local_e98._8_8_ = &local_dd0;
      local_e50 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_e48 = _UNK_15060db28;
      local_e88 = 0x10;
      local_e40 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_e38 = _UNK_15060db28;
      local_e84 = 0x20;
      local_dd0 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_dc8 = _UNK_15060db28;
      local_dc0 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_db8 = _UNK_15060db28;
      FCommonCompactHashTableTests::TestSynchedTables<16,FCompactHashTableView>
                ((FCompactHashTableView *)local_e80,(FCompactHashTableView *)local_e98);
      local_e80._0_8_ = local_828;
      local_e80._8_8_ = local_628;
      local_e70 = &DAT_10000000100;
      memset(local_628,0xff,0x200);
      local_e98._0_8_ = local_c28;
      local_e88 = 0x100;
      local_e98._8_8_ = local_a28;
      local_e84 = 0x100;
      memset(local_a28,0xff,0x200);
      FCommonCompactHashTableTests::TestSynchedTables<256,FCompactHashTableView>
                ((FCompactHashTableView *)local_e80,(FCompactHashTableView *)local_e98);
      local_e80._0_8_ = local_c28;
      local_e80._8_8_ = &local_b29;
      local_e98._0_8_ = local_828;
      local_e98._8_8_ = &local_729;
      local_e70 = (undefined1 *)0x80000000ff;
      local_b29 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_b21 = _UNK_15060db28;
      local_e88 = 0xff;
      local_b19 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_b11 = _UNK_15060db28;
      local_b09 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_b01 = _UNK_15060db28;
      local_af9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_af1 = _UNK_15060db28;
      local_ae9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ae1 = _UNK_15060db28;
      local_ad9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ad1 = _UNK_15060db28;
      local_ac9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ac1 = _UNK_15060db28;
      local_ab9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_ab1 = _UNK_15060db28;
      local_e84 = 0x80;
      local_729 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_721 = _UNK_15060db28;
      local_719 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_711 = _UNK_15060db28;
      local_709 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_701 = _UNK_15060db28;
      local_6f9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_6f1 = _UNK_15060db28;
      local_6e9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_6e1 = _UNK_15060db28;
      local_6d9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_6d1 = _UNK_15060db28;
      local_6c9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_6c1 = _UNK_15060db28;
      local_6b9 = ___xmm_ffffffffffffffffffffffffffffffff;
      uStack_6b1 = _UNK_15060db28;
      FCommonCompactHashTableTests::TestSynchedTables<255,FCompactHashTableView>
                ((FCompactHashTableView *)local_e80,(FCompactHashTableView *)local_e98);
      return;
    }
  } while( true );
}

