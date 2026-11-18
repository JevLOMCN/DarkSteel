// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad1880

EAutomationTestFlags __thiscall
FStaticCompactHashTableTest::GetTestFlags(FStaticCompactHashTableTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad1890

bool __thiscall FStaticCompactHashTableTest::IsStressTest(FStaticCompactHashTableTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad18a0

uint __thiscall FStaticCompactHashTableTest::GetRequiredDeviceNum(FStaticCompactHashTableTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad18b0

FString * __thiscall
FStaticCompactHashTableTest::GetTestSourceFileName
          (FStaticCompactHashTableTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\CompactHashTableTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad18e0

int __thiscall FStaticCompactHashTableTest::GetTestSourceFileLine(FStaticCompactHashTableTest *this)

{
  return 0x6c;
}

// GetTests @ 141ad18f0

/* WARNING: Removing unreachable block (ram,0x000141ad1a6e) */

void __thiscall
FStaticCompactHashTableTest::GetTests
          (FStaticCompactHashTableTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad1a90

bool __thiscall
FStaticCompactHashTableTest::RunTest(FStaticCompactHashTableTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad1ac0

FString * __thiscall
FStaticCompactHashTableTest::GetBeautifiedTestName
          (FStaticCompactHashTableTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStaticCompactHashTableTest @ 141b27180

FStaticCompactHashTableTest * __thiscall
FStaticCompactHashTableTest::FStaticCompactHashTableTest
          (FStaticCompactHashTableTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStaticCompactHashTableTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][CompactHashTable]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::CompactHashTable::Static");
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

// TestBody @ 141b9d2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FStaticCompactHashTableTest::TestBody(FStaticCompactHashTableTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined1 auStack_e78 [32];
  void *local_e58 [2];
  uchar local_e48 [8];
  uchar auStack_e40 [8];
  uchar local_e38 [8];
  uchar auStack_e30 [8];
  void *local_e28 [2];
  uchar local_e18 [8];
  uchar auStack_e10 [8];
  uchar local_e08 [8];
  uchar auStack_e00 [8];
  TStaticCompactHashTable<256,256> local_df8;
  TStaticCompactHashTable<256,256> local_9f8;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  char local_5a8 [383];
  char local_429;
  ulonglong local_428 [64];
  ulonglong local_228 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_e78;
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)local_e28,L"Constructor Behavior");
  (*pcVar2)(pFVar1,local_e28,0,0);
  if (local_e28[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e28[0]);
  }
  pcVar6 = (char *)&local_5f8;
  local_5f8 = ___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_5f0 = _UNK_15071d428;
  local_5e8 = ___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_5e0 = _UNK_15071d428;
  do {
    if (*pcVar6 != -0x10) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e28,L"Condition failed");
      (*pcVar2)(pFVar1,local_e28,0);
      if (local_e28[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e28[0]);
      }
    }
    pcVar6 = pcVar6 + 1;
  } while (pcVar6 != (char *)&local_5d8);
  pcVar6 = (char *)&local_5f8;
  uVar8 = 0;
  local_5e8._0_1_ = __xmm_ffffffffffffffffffffffffffffffff;
  local_5e8._1_1_ = UNK_15060db21;
  local_5e8._2_1_ = UNK_15060db22;
  local_5e8._3_1_ = UNK_15060db23;
  local_5e8._4_1_ = UNK_15060db24;
  local_5e8._5_1_ = UNK_15060db25;
  local_5e8._6_1_ = UNK_15060db26;
  local_5e8._7_1_ = UNK_15060db27;
  uStack_5e0._0_1_ = UNK_15060db28;
  uStack_5e0._1_1_ = UNK_15060db29;
  uStack_5e0._2_1_ = UNK_15060db2a;
  uStack_5e0._3_1_ = UNK_15060db2b;
  uStack_5e0._4_1_ = UNK_15060db2c;
  uStack_5e0._5_1_ = UNK_15060db2d;
  uStack_5e0._6_1_ = UNK_15060db2e;
  uStack_5e0._7_1_ = UNK_15060db2f;
  uVar5 = 0;
  do {
    if (uVar5 < 0x10) {
      if (*pcVar6 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e28,L"Condition failed");
        (*pcVar2)(pFVar1,local_e28);
        pFVar4 = local_e28[0];
LAB_141b9d453:
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
    }
    else if (*pcVar6 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e58,L"Condition failed");
      (*pcVar2)(pFVar1,local_e58,0);
      pFVar4 = local_e58[0];
      goto LAB_141b9d453;
    }
    uVar5 = uVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (uVar5 < 0x20);
  pcVar6 = (char *)&local_5d8;
  local_5d8 = ___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_5d0 = _UNK_15071d428;
  local_5c8 = ___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_5c0 = _UNK_15071d428;
  local_5b8 = ___xmm_f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0;
  uStack_5b0 = _UNK_15071d428;
  do {
    if (*pcVar6 != -0x10) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e58,L"Condition failed");
      (*pcVar2)(pFVar1,local_e58,0);
      if (local_e58[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e58[0]);
      }
    }
    pcVar6 = pcVar6 + 1;
  } while (pcVar6 != local_5a8);
  pcVar6 = (char *)&local_5d8;
  local_5c8._0_1_ = __xmm_ffffffffffffffffffffffffffffffff;
  local_5c8._1_1_ = UNK_15060db21;
  local_5c8._2_1_ = UNK_15060db22;
  local_5c8._3_1_ = UNK_15060db23;
  local_5c8._4_1_ = UNK_15060db24;
  local_5c8._5_1_ = UNK_15060db25;
  local_5c8._6_1_ = UNK_15060db26;
  local_5c8._7_1_ = UNK_15060db27;
  uStack_5c0._0_1_ = UNK_15060db28;
  uStack_5c0._1_1_ = UNK_15060db29;
  uStack_5c0._2_1_ = UNK_15060db2a;
  uStack_5c0._3_1_ = UNK_15060db2b;
  uStack_5c0._4_1_ = UNK_15060db2c;
  uStack_5c0._5_1_ = UNK_15060db2d;
  uStack_5c0._6_1_ = UNK_15060db2e;
  uStack_5c0._7_1_ = UNK_15060db2f;
  uVar5 = 0;
  local_5b8._0_1_ = __xmm_ffffffffffffffffffffffffffffffff;
  local_5b8._1_1_ = UNK_15060db21;
  local_5b8._2_1_ = UNK_15060db22;
  local_5b8._3_1_ = UNK_15060db23;
  local_5b8._4_1_ = UNK_15060db24;
  local_5b8._5_1_ = UNK_15060db25;
  local_5b8._6_1_ = UNK_15060db26;
  local_5b8._7_1_ = UNK_15060db27;
  uStack_5b0._0_1_ = UNK_15060db28;
  uStack_5b0._1_1_ = UNK_15060db29;
  uStack_5b0._2_1_ = UNK_15060db2a;
  uStack_5b0._3_1_ = UNK_15060db2b;
  uStack_5b0._4_1_ = UNK_15060db2c;
  uStack_5b0._5_1_ = UNK_15060db2d;
  uStack_5b0._6_1_ = UNK_15060db2e;
  uStack_5b0._7_1_ = UNK_15060db2f;
  do {
    if (uVar5 < 0x10) {
      if (*pcVar6 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e58,L"Condition failed");
        (*pcVar2)(pFVar1,local_e58);
        pFVar4 = local_e58[0];
LAB_141b9d583:
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
    }
    else if (*pcVar6 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e28,L"Condition failed");
      (*pcVar2)(pFVar1,local_e28,0);
      pFVar4 = local_e28[0];
      goto LAB_141b9d583;
    }
    uVar5 = uVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (uVar5 < 0x30);
  memset(local_428,0xf0,0x400);
  puVar7 = local_428;
  do {
    if ((char)*puVar7 != -0x10) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e58,L"Condition failed");
      (*pcVar2)(pFVar1,local_e58,0);
      if (local_e58[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e58[0]);
      }
    }
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
  } while (puVar7 != local_28);
  memset(local_428 + 0x40,0xff,0x200);
  uVar5 = 0;
  puVar7 = local_428;
  do {
    if (uVar5 < 0x200) {
      if ((char)*puVar7 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e58,L"Condition failed");
        (*pcVar2)(pFVar1,local_e58);
        pFVar4 = local_e58[0];
LAB_141b9d6c2:
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
    }
    else if ((char)*puVar7 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e28,L"Condition failed");
      (*pcVar2)(pFVar1,local_e28,0);
      pFVar4 = local_e28[0];
      goto LAB_141b9d6c2;
    }
    uVar5 = uVar5 + 1;
    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
  } while (uVar5 < 0x400);
  memset(local_5a8,0xf0,0x17f);
  pcVar6 = local_5a8;
  do {
    if (*pcVar6 != -0x10) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e58,L"Condition failed");
      (*pcVar2)(pFVar1,local_e58,0);
      if (local_e58[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e58[0]);
      }
    }
    pcVar6 = pcVar6 + 1;
  } while (pcVar6 != &local_429);
  pcVar6 = local_5a8;
  local_5a8[0xff] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x100] = UNK_15060db21;
  local_5a8[0x101] = UNK_15060db22;
  local_5a8[0x102] = UNK_15060db23;
  local_5a8[0x103] = UNK_15060db24;
  local_5a8[0x104] = UNK_15060db25;
  local_5a8[0x105] = UNK_15060db26;
  local_5a8[0x106] = UNK_15060db27;
  local_5a8[0x107] = UNK_15060db28;
  local_5a8[0x108] = UNK_15060db29;
  local_5a8[0x109] = UNK_15060db2a;
  local_5a8[0x10a] = UNK_15060db2b;
  local_5a8[0x10b] = UNK_15060db2c;
  local_5a8[0x10c] = UNK_15060db2d;
  local_5a8[0x10d] = UNK_15060db2e;
  local_5a8[0x10e] = UNK_15060db2f;
  local_5a8[0x10f] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x110] = UNK_15060db21;
  local_5a8[0x111] = UNK_15060db22;
  local_5a8[0x112] = UNK_15060db23;
  local_5a8[0x113] = UNK_15060db24;
  local_5a8[0x114] = UNK_15060db25;
  local_5a8[0x115] = UNK_15060db26;
  local_5a8[0x116] = UNK_15060db27;
  local_5a8[0x117] = UNK_15060db28;
  local_5a8[0x118] = UNK_15060db29;
  local_5a8[0x119] = UNK_15060db2a;
  local_5a8[0x11a] = UNK_15060db2b;
  local_5a8[0x11b] = UNK_15060db2c;
  local_5a8[0x11c] = UNK_15060db2d;
  local_5a8[0x11d] = UNK_15060db2e;
  local_5a8[0x11e] = UNK_15060db2f;
  local_5a8[0x11f] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x120] = UNK_15060db21;
  local_5a8[0x121] = UNK_15060db22;
  local_5a8[0x122] = UNK_15060db23;
  local_5a8[0x123] = UNK_15060db24;
  local_5a8[0x124] = UNK_15060db25;
  local_5a8[0x125] = UNK_15060db26;
  local_5a8[0x126] = UNK_15060db27;
  local_5a8[0x127] = UNK_15060db28;
  local_5a8[0x128] = UNK_15060db29;
  local_5a8[0x129] = UNK_15060db2a;
  local_5a8[0x12a] = UNK_15060db2b;
  local_5a8[299] = UNK_15060db2c;
  local_5a8[300] = UNK_15060db2d;
  local_5a8[0x12d] = UNK_15060db2e;
  local_5a8[0x12e] = UNK_15060db2f;
  local_5a8[0x12f] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x130] = UNK_15060db21;
  local_5a8[0x131] = UNK_15060db22;
  local_5a8[0x132] = UNK_15060db23;
  local_5a8[0x133] = UNK_15060db24;
  local_5a8[0x134] = UNK_15060db25;
  local_5a8[0x135] = UNK_15060db26;
  local_5a8[0x136] = UNK_15060db27;
  local_5a8[0x137] = UNK_15060db28;
  local_5a8[0x138] = UNK_15060db29;
  local_5a8[0x139] = UNK_15060db2a;
  local_5a8[0x13a] = UNK_15060db2b;
  local_5a8[0x13b] = UNK_15060db2c;
  local_5a8[0x13c] = UNK_15060db2d;
  local_5a8[0x13d] = UNK_15060db2e;
  local_5a8[0x13e] = UNK_15060db2f;
  local_5a8[0x13f] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x140] = UNK_15060db21;
  local_5a8[0x141] = UNK_15060db22;
  local_5a8[0x142] = UNK_15060db23;
  local_5a8[0x143] = UNK_15060db24;
  local_5a8[0x144] = UNK_15060db25;
  local_5a8[0x145] = UNK_15060db26;
  local_5a8[0x146] = UNK_15060db27;
  local_5a8[0x147] = UNK_15060db28;
  local_5a8[0x148] = UNK_15060db29;
  local_5a8[0x149] = UNK_15060db2a;
  local_5a8[0x14a] = UNK_15060db2b;
  local_5a8[0x14b] = UNK_15060db2c;
  local_5a8[0x14c] = UNK_15060db2d;
  local_5a8[0x14d] = UNK_15060db2e;
  local_5a8[0x14e] = UNK_15060db2f;
  local_5a8[0x14f] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x150] = UNK_15060db21;
  local_5a8[0x151] = UNK_15060db22;
  local_5a8[0x152] = UNK_15060db23;
  local_5a8[0x153] = UNK_15060db24;
  local_5a8[0x154] = UNK_15060db25;
  local_5a8[0x155] = UNK_15060db26;
  local_5a8[0x156] = UNK_15060db27;
  local_5a8[0x157] = UNK_15060db28;
  local_5a8[0x158] = UNK_15060db29;
  local_5a8[0x159] = UNK_15060db2a;
  local_5a8[0x15a] = UNK_15060db2b;
  local_5a8[0x15b] = UNK_15060db2c;
  local_5a8[0x15c] = UNK_15060db2d;
  local_5a8[0x15d] = UNK_15060db2e;
  local_5a8[0x15e] = UNK_15060db2f;
  local_5a8[0x15f] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x160] = UNK_15060db21;
  local_5a8[0x161] = UNK_15060db22;
  local_5a8[0x162] = UNK_15060db23;
  local_5a8[0x163] = UNK_15060db24;
  local_5a8[0x164] = UNK_15060db25;
  local_5a8[0x165] = UNK_15060db26;
  local_5a8[0x166] = UNK_15060db27;
  local_5a8[0x167] = UNK_15060db28;
  local_5a8[0x168] = UNK_15060db29;
  local_5a8[0x169] = UNK_15060db2a;
  local_5a8[0x16a] = UNK_15060db2b;
  local_5a8[0x16b] = UNK_15060db2c;
  local_5a8[0x16c] = UNK_15060db2d;
  local_5a8[0x16d] = UNK_15060db2e;
  local_5a8[0x16e] = UNK_15060db2f;
  local_5a8[0x16f] = __xmm_ffffffffffffffffffffffffffffffff;
  local_5a8[0x170] = UNK_15060db21;
  local_5a8[0x171] = UNK_15060db22;
  local_5a8[0x172] = UNK_15060db23;
  local_5a8[0x173] = UNK_15060db24;
  local_5a8[0x174] = UNK_15060db25;
  local_5a8[0x175] = UNK_15060db26;
  local_5a8[0x176] = UNK_15060db27;
  local_5a8[0x177] = UNK_15060db28;
  local_5a8[0x178] = UNK_15060db29;
  local_5a8[0x179] = UNK_15060db2a;
  local_5a8[0x17a] = UNK_15060db2b;
  local_5a8[0x17b] = UNK_15060db2c;
  local_5a8[0x17c] = UNK_15060db2d;
  local_5a8[0x17d] = UNK_15060db2e;
  local_5a8[0x17e] = UNK_15060db2f;
  do {
    if (uVar8 < 0xff) {
      if (*pcVar6 != -0x10) {
        pFVar3 = FAutomationTestFramework::Get();
        pFVar1 = pFVar3->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString((FString *)local_e58,L"Condition failed");
        (*pcVar2)(pFVar1,local_e58);
        pFVar4 = local_e58[0];
LAB_141b9d822:
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
    }
    else if (*pcVar6 != -1) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString((FString *)local_e28,L"Condition failed");
      (*pcVar2)(pFVar1,local_e28,0);
      pFVar4 = local_e28[0];
      goto LAB_141b9d822;
    }
    uVar8 = uVar8 + 1;
    pcVar6 = pcVar6 + 1;
    if (0x17e < uVar8) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
      ::FString::FString((FString *)local_e58,L"Add Behavior");
      (*pcVar2)(pFVar1,local_e58,0,0);
      if (local_e58[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e58[0]);
      }
      local_e48[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e48[1] = UNK_15060db21;
      local_e48[2] = UNK_15060db22;
      local_e48[3] = UNK_15060db23;
      local_e48[4] = UNK_15060db24;
      local_e48[5] = UNK_15060db25;
      local_e48[6] = UNK_15060db26;
      local_e48[7] = UNK_15060db27;
      auStack_e40[0] = UNK_15060db28;
      auStack_e40[1] = UNK_15060db29;
      auStack_e40[2] = UNK_15060db2a;
      auStack_e40[3] = UNK_15060db2b;
      auStack_e40[4] = UNK_15060db2c;
      auStack_e40[5] = UNK_15060db2d;
      auStack_e40[6] = UNK_15060db2e;
      auStack_e40[7] = UNK_15060db2f;
      FCommonCompactHashTableTests::TestAddRemove<16,TStaticCompactHashTable<16,16>_>
                ((TStaticCompactHashTable<16,16> *)local_e58);
      local_e48[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e48[1] = UNK_15060db21;
      local_e48[2] = UNK_15060db22;
      local_e48[3] = UNK_15060db23;
      local_e48[4] = UNK_15060db24;
      local_e48[5] = UNK_15060db25;
      local_e48[6] = UNK_15060db26;
      local_e48[7] = UNK_15060db27;
      auStack_e40[0] = UNK_15060db28;
      auStack_e40[1] = UNK_15060db29;
      auStack_e40[2] = UNK_15060db2a;
      auStack_e40[3] = UNK_15060db2b;
      auStack_e40[4] = UNK_15060db2c;
      auStack_e40[5] = UNK_15060db2d;
      auStack_e40[6] = UNK_15060db2e;
      auStack_e40[7] = UNK_15060db2f;
      local_e38[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e38[1] = UNK_15060db21;
      local_e38[2] = UNK_15060db22;
      local_e38[3] = UNK_15060db23;
      local_e38[4] = UNK_15060db24;
      local_e38[5] = UNK_15060db25;
      local_e38[6] = UNK_15060db26;
      local_e38[7] = UNK_15060db27;
      auStack_e30[0] = UNK_15060db28;
      auStack_e30[1] = UNK_15060db29;
      auStack_e30[2] = UNK_15060db2a;
      auStack_e30[3] = UNK_15060db2b;
      auStack_e30[4] = UNK_15060db2c;
      auStack_e30[5] = UNK_15060db2d;
      auStack_e30[6] = UNK_15060db2e;
      auStack_e30[7] = UNK_15060db2f;
      FCommonCompactHashTableTests::TestAddRemove<16,TStaticCompactHashTable<16,32>_>
                ((TStaticCompactHashTable<16,32> *)local_e58);
      memset(local_9f8.HashData,0xff,0x200);
      FCommonCompactHashTableTests::TestAddRemove<256,TStaticCompactHashTable<256,256>_>(&local_9f8)
      ;
      local_df8.NextIndexData._255_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._263_8_ = _UNK_15060db28;
      local_df8.NextIndexData._271_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._279_8_ = _UNK_15060db28;
      local_df8.NextIndexData._287_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._295_8_ = _UNK_15060db28;
      local_df8.NextIndexData._303_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._311_8_ = _UNK_15060db28;
      local_df8.NextIndexData._319_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._327_8_ = _UNK_15060db28;
      local_df8.NextIndexData._335_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._343_8_ = _UNK_15060db28;
      local_df8.NextIndexData._351_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._359_8_ = _UNK_15060db28;
      local_df8.NextIndexData._367_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._375_8_ = _UNK_15060db28;
      FCommonCompactHashTableTests::TestAddRemove<255,TStaticCompactHashTable<255,128>_>
                ((TStaticCompactHashTable<255,128> *)&local_df8);
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
      ::FString::FString((FString *)local_e58,L"Synched Tables Behavior");
      (*pcVar2)(pFVar1,local_e58,0,0);
      if (local_e58[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e58[0]);
      }
      local_e18[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e18[1] = UNK_15060db21;
      local_e18[2] = UNK_15060db22;
      local_e18[3] = UNK_15060db23;
      local_e18[4] = UNK_15060db24;
      local_e18[5] = UNK_15060db25;
      local_e18[6] = UNK_15060db26;
      local_e18[7] = UNK_15060db27;
      auStack_e10[0] = UNK_15060db28;
      auStack_e10[1] = UNK_15060db29;
      auStack_e10[2] = UNK_15060db2a;
      auStack_e10[3] = UNK_15060db2b;
      auStack_e10[4] = UNK_15060db2c;
      auStack_e10[5] = UNK_15060db2d;
      auStack_e10[6] = UNK_15060db2e;
      auStack_e10[7] = UNK_15060db2f;
      local_e48[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e48[1] = UNK_15060db21;
      local_e48[2] = UNK_15060db22;
      local_e48[3] = UNK_15060db23;
      local_e48[4] = UNK_15060db24;
      local_e48[5] = UNK_15060db25;
      local_e48[6] = UNK_15060db26;
      local_e48[7] = UNK_15060db27;
      auStack_e40[0] = UNK_15060db28;
      auStack_e40[1] = UNK_15060db29;
      auStack_e40[2] = UNK_15060db2a;
      auStack_e40[3] = UNK_15060db2b;
      auStack_e40[4] = UNK_15060db2c;
      auStack_e40[5] = UNK_15060db2d;
      auStack_e40[6] = UNK_15060db2e;
      auStack_e40[7] = UNK_15060db2f;
      FCommonCompactHashTableTests::TestSynchedTables<16,TStaticCompactHashTable<16,16>_>
                ((TStaticCompactHashTable<16,16> *)local_e28,
                 (TStaticCompactHashTable<16,16> *)local_e58);
      local_e18[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e18[1] = UNK_15060db21;
      local_e18[2] = UNK_15060db22;
      local_e18[3] = UNK_15060db23;
      local_e18[4] = UNK_15060db24;
      local_e18[5] = UNK_15060db25;
      local_e18[6] = UNK_15060db26;
      local_e18[7] = UNK_15060db27;
      auStack_e10[0] = UNK_15060db28;
      auStack_e10[1] = UNK_15060db29;
      auStack_e10[2] = UNK_15060db2a;
      auStack_e10[3] = UNK_15060db2b;
      auStack_e10[4] = UNK_15060db2c;
      auStack_e10[5] = UNK_15060db2d;
      auStack_e10[6] = UNK_15060db2e;
      auStack_e10[7] = UNK_15060db2f;
      local_e08[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e08[1] = UNK_15060db21;
      local_e08[2] = UNK_15060db22;
      local_e08[3] = UNK_15060db23;
      local_e08[4] = UNK_15060db24;
      local_e08[5] = UNK_15060db25;
      local_e08[6] = UNK_15060db26;
      local_e08[7] = UNK_15060db27;
      auStack_e00[0] = UNK_15060db28;
      auStack_e00[1] = UNK_15060db29;
      auStack_e00[2] = UNK_15060db2a;
      auStack_e00[3] = UNK_15060db2b;
      auStack_e00[4] = UNK_15060db2c;
      auStack_e00[5] = UNK_15060db2d;
      auStack_e00[6] = UNK_15060db2e;
      auStack_e00[7] = UNK_15060db2f;
      local_e48[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e48[1] = UNK_15060db21;
      local_e48[2] = UNK_15060db22;
      local_e48[3] = UNK_15060db23;
      local_e48[4] = UNK_15060db24;
      local_e48[5] = UNK_15060db25;
      local_e48[6] = UNK_15060db26;
      local_e48[7] = UNK_15060db27;
      auStack_e40[0] = UNK_15060db28;
      auStack_e40[1] = UNK_15060db29;
      auStack_e40[2] = UNK_15060db2a;
      auStack_e40[3] = UNK_15060db2b;
      auStack_e40[4] = UNK_15060db2c;
      auStack_e40[5] = UNK_15060db2d;
      auStack_e40[6] = UNK_15060db2e;
      auStack_e40[7] = UNK_15060db2f;
      local_e38[0] = __xmm_ffffffffffffffffffffffffffffffff;
      local_e38[1] = UNK_15060db21;
      local_e38[2] = UNK_15060db22;
      local_e38[3] = UNK_15060db23;
      local_e38[4] = UNK_15060db24;
      local_e38[5] = UNK_15060db25;
      local_e38[6] = UNK_15060db26;
      local_e38[7] = UNK_15060db27;
      auStack_e30[0] = UNK_15060db28;
      auStack_e30[1] = UNK_15060db29;
      auStack_e30[2] = UNK_15060db2a;
      auStack_e30[3] = UNK_15060db2b;
      auStack_e30[4] = UNK_15060db2c;
      auStack_e30[5] = UNK_15060db2d;
      auStack_e30[6] = UNK_15060db2e;
      auStack_e30[7] = UNK_15060db2f;
      FCommonCompactHashTableTests::TestSynchedTables<16,TStaticCompactHashTable<16,32>_>
                ((TStaticCompactHashTable<16,32> *)local_e28,
                 (TStaticCompactHashTable<16,32> *)local_e58);
      memset(local_df8.HashData,0xff,0x200);
      memset(local_9f8.HashData,0xff,0x200);
      FCommonCompactHashTableTests::TestSynchedTables<256,TStaticCompactHashTable<256,256>_>
                (&local_df8,&local_9f8);
      local_9f8.NextIndexData._255_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._263_8_ = _UNK_15060db28;
      local_9f8.NextIndexData._271_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._279_8_ = _UNK_15060db28;
      local_9f8.NextIndexData._287_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._295_8_ = _UNK_15060db28;
      local_9f8.NextIndexData._303_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._311_8_ = _UNK_15060db28;
      local_9f8.NextIndexData._319_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._327_8_ = _UNK_15060db28;
      local_9f8.NextIndexData._335_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._343_8_ = _UNK_15060db28;
      local_9f8.NextIndexData._351_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._359_8_ = _UNK_15060db28;
      local_9f8.NextIndexData._367_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_9f8.NextIndexData._375_8_ = _UNK_15060db28;
      local_df8.NextIndexData._255_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._263_8_ = _UNK_15060db28;
      local_df8.NextIndexData._271_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._279_8_ = _UNK_15060db28;
      local_df8.NextIndexData._287_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._295_8_ = _UNK_15060db28;
      local_df8.NextIndexData._303_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._311_8_ = _UNK_15060db28;
      local_df8.NextIndexData._319_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._327_8_ = _UNK_15060db28;
      local_df8.NextIndexData._335_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._343_8_ = _UNK_15060db28;
      local_df8.NextIndexData._351_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._359_8_ = _UNK_15060db28;
      local_df8.NextIndexData._367_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_df8.NextIndexData._375_8_ = _UNK_15060db28;
      FCommonCompactHashTableTests::TestSynchedTables<255,TStaticCompactHashTable<255,128>_>
                ((TStaticCompactHashTable<255,128> *)&local_9f8,
                 (TStaticCompactHashTable<255,128> *)&local_df8);
      return;
    }
  } while( true );
}

