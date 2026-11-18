// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbda20

EAutomationTestFlags __thiscall FTimespanTest::GetTestFlags(FTimespanTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbda30

bool __thiscall FTimespanTest::IsStressTest(FTimespanTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbda40

uint __thiscall FTimespanTest::GetRequiredDeviceNum(FTimespanTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbda50

FString * __thiscall
FTimespanTest::GetTestSourceFileName(FTimespanTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TimespanTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbda80

int __thiscall FTimespanTest::GetTestSourceFileLine(FTimespanTest *this)

{
  return 10;
}

// GetTests @ 141cbda90

/* WARNING: Removing unreachable block (ram,0x000141cbdc0e) */

void __thiscall
FTimespanTest::GetTests
          (FTimespanTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbdc30

bool __thiscall FTimespanTest::RunTest(FTimespanTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbdc60

FString * __thiscall
FTimespanTest::GetBeautifiedTestName(FTimespanTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTimespanTest @ 141cf0290

FTimespanTest * __thiscall FTimespanTest::FTimespanTest(FTimespanTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTimespanTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Time][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Time::Timespan");
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
  ::FString::FString(&local_18,"[Core][Time][SmokeFilter]");
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

// TestBody @ 141d4f0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FTimespanTest::TestBody(FTimespanTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  FTimespan FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  FTimespan local_res18;
  FTimespan local_res20;
  FTimespan local_88;
  FTimespan local_80;
  FTimespan local_78;
  FTimespan local_70;
  FString local_68;
  FString local_58 [2];
  
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_68,L"Constructors");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FTimespan::Assign(&local_res18,0,3,2,1,0);
  FTimespan::Assign(&local_res20,0,3,2,1,0);
  FTimespan::Assign(&local_88,0,3,2,1,0);
  if (local_res18.Ticks != local_res20.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_res18.Ticks != local_88.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_68,L"Components");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FTimespan::Assign(&local_res18,1,2,3,4,0x75bcd15);
  if ((int)(local_res18.Ticks / 864000000000) != 1) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((int)(local_res18.Ticks / 36000000000) +
      (int)((local_res18.Ticks / 36000000000) / 0x18) * -0x18 != 2) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  lVar11 = local_res18.Ticks / 600000000;
  lVar10 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar11),8) + lVar11;
  if ((int)lVar11 + ((int)(lVar10 >> 5) - (int)(lVar10 >> 0x3f)) * -0x3c != 3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = (FScriptContainerElement *)
            (local_res18.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res18.Ticks),8)
            );
  lVar10 = ((longlong)pFVar12 >> 0x17) - ((longlong)pFVar12 >> 0x3f);
  lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar10),8) + lVar10;
  if ((int)lVar10 + ((int)(lVar11 >> 5) - (int)(lVar11 >> 0x3f)) * -0x3c != 4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = (FScriptContainerElement *)
            (SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res18.Ticks),8) + local_res18.Ticks
            );
  if ((int)((longlong)
            (local_res18.Ticks +
            (((longlong)pFVar12 >> 0x17) - ((longlong)pFVar12 >> 0x3f)) * -10000000) / 10000) !=
      0x7b) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = (FScriptContainerElement *)
            (SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res18.Ticks),8) + local_res18.Ticks
            );
  if ((int)((longlong)
            (local_res18.Ticks +
            (((longlong)pFVar12 >> 0x17) - ((longlong)pFVar12 >> 0x3f)) * -10000000) / 10) !=
      0x1e240) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = (FScriptContainerElement *)
            (SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res18.Ticks),8) + local_res18.Ticks
            );
  if (((int)local_res18.Ticks +
      ((int)((longlong)pFVar12 >> 0x17) - (int)((longlong)pFVar12 >> 0x3f)) * -10000000) * 100 !=
      0x75bccbc) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_68,L"Duration");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FTimespan::Assign(&local_res18,1,2,3,4,0x75bcd15);
  FTimespan::Assign(&local_res20,-1,-2,-3,-4,-0x75bcd15);
  if (local_res18.Ticks < 0) {
    local_res18.Ticks = -local_res18.Ticks;
  }
  FVar7.Ticks = local_res20.Ticks;
  if (local_res20.Ticks < 0) {
    FVar7.Ticks = -local_res20.Ticks;
  }
  if (local_res18.Ticks != FVar7.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_68,L"FromXxx to GetTotalXxx");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  dVar3 = __real_405ec00000000000;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = __real_42d829d833d00020;
  auVar14 = roundpd(auVar14,auVar14,1);
  if ((double)(longlong)auVar14._0_8_ * __real_3d745c7fe3bc40b0 != __real_405ec00000000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  auVar21._8_8_ = 0;
  auVar21._0_8_ = __real_42901be577e00200;
  auVar14 = roundpd(auVar21,auVar21,1);
  if ((double)(longlong)auVar14._0_8_ * ___real_3dbe8abfd59a6108 != dVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = __real_42312ed2a2008000;
  auVar14 = roundpd(auVar15,auVar15,1);
  if ((double)(longlong)auVar14._0_8_ * ___real_3e1ca213d840baf8 != dVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = __real_41d25413e0200000;
  auVar14 = roundpd(auVar16,auVar16,1);
  if ((double)(longlong)auVar14._0_8_ * __real_3e7ad7f29abcaf48 != dVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = __real_4132c4b080000000;
  auVar14 = roundpd(auVar17,auVar17,1);
  if ((double)(longlong)auVar14._0_8_ * __real_3f1a36e2eb1c432d != dVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = __real_40933a0000000000;
  auVar14 = roundpd(auVar18,auVar18,1);
  if ((double)(longlong)auVar14._0_8_ * __real_3fb999999999999a != dVar3) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_68,L"ToString");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FTimespan::Assign(&local_res18,1,2,3,4,0x75bcd15);
  pFVar8 = FTimespan::ToString(&local_res18,local_58);
  pwVar13 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"+1.02:03:04.123");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FTimespan::ToString(&local_res18,local_58,L"%d.%h:%m:%s.%f");
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"+1.02:03:04.123");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FTimespan::ToString(&local_res18,local_58,L"%d.%h:%m:%s.%u");
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"+1.02:03:04.123456");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FTimespan::ToString(&local_res18,local_58,L"%D.%h:%m:%s.%n");
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar13,L"+00000001.02:03:04.123456700");
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Condition failed");
    (*pcVar2)(pFVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_68,L"Parse Valid");
  (*pcVar2)(pFVar1,&local_68,0,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_res18.Ticks = 0;
  FTimespan::Assign(&local_res20,1,2,3,4,123000000);
  FTimespan::Assign(&local_88,1,2,3,4,0x75bca00);
  FTimespan::Assign(&local_80,1,2,3,4,0x75bccbc);
  ::FString::FString(local_58,L"+1.02:03:04.123");
  bVar4 = FTimespan::Parse(local_58,&local_res18);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_res18.Ticks != local_res20.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(local_58,L"+1.02:03:04.123456");
  bVar4 = FTimespan::Parse(local_58,&local_res18);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_res18.Ticks != local_88.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(local_58,L"+1.02:03:04.123456789");
  bVar4 = FTimespan::Parse(local_58,&local_res18);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_res18.Ticks != local_80.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  FTimespan::Assign(&local_78,-1,-2,-3,-4,-123000000);
  FTimespan::Assign(&local_70,-1,-2,-3,-4,-0x75bca00);
  FTimespan::Assign((FTimespan *)&local_68,-1,-2,-3,-4,-0x75bccbc);
  ::FString::FString(local_58,L"-1.02:03:04.123");
  bVar4 = FTimespan::Parse(local_58,&local_res18);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_res18.Ticks != local_78.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(local_58,L"-1.02:03:04.123456");
  bVar4 = FTimespan::Parse(local_58,&local_res18);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if (local_res18.Ticks != local_70.Ticks) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(local_58,L"-1.02:03:04.123456789");
  bVar4 = FTimespan::Parse(local_58,&local_res18);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if ((FScriptContainerElement *)local_res18.Ticks != local_68.Data.AllocatorInstance.Data) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(local_58,L"Parse Invalid");
  (*pcVar2)(pFVar1,local_58,0,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(local_58,L"FromXxx Exact Ticks");
  (*pcVar2)(pFVar1,local_58,0,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = __real_3fe0000000000000;
  auVar14 = roundpd(auVar19,auVar19,1);
  if ((longlong)auVar14._0_8_ != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar20._8_8_ = 0;
  auVar20._0_8_ = __real_4025000000000000;
  auVar21 = roundpd(auVar20,auVar20,1);
  if ((longlong)auVar21._0_8_ != 10) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = __real_4027000000000000;
  auVar21 = roundpd(auVar22,auVar22,1);
  if ((longlong)auVar21._0_8_ != 0xb) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar23._8_8_ = 0;
  auVar23._0_8_ = __real_402f000000000000;
  auVar21 = roundpd(auVar23,auVar23,1);
  if ((longlong)auVar21._0_8_ != 0xf) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar24._8_8_ = 0;
  auVar24._0_8_ = __real_402effffffffffee;
  auVar21 = roundpd(auVar24,auVar24,1);
  if ((longlong)auVar21._0_8_ != 0xf) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = __real_402f0000035afe53;
  auVar21 = roundpd(auVar25,auVar25,1);
  if ((longlong)auVar21._0_8_ != 0xf) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar26._8_8_ = 0;
  auVar26._0_8_ = __real_c023000000000000;
  auVar21 = roundpd(auVar26,auVar26,1);
  if ((longlong)auVar21._0_8_ != -10) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar27._8_8_ = 0;
  auVar27._0_8_ = __real_c025000000000000;
  auVar21 = roundpd(auVar27,auVar27,1);
  if ((longlong)auVar21._0_8_ != -0xb) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar28._8_8_ = 0;
  auVar28._0_8_ = __real_c02d000000000000;
  auVar21 = roundpd(auVar28,auVar28,1);
  if ((longlong)auVar21._0_8_ != -0xf) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar29._8_8_ = 0;
  auVar29._0_8_ = __real_40c3884000000000;
  auVar21 = roundpd(auVar29,auVar29,1);
  if ((longlong)auVar21._0_8_ != 10000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar30._8_8_ = 0;
  auVar30._0_8_ = __real_416312d010000000;
  auVar21 = roundpd(auVar30,auVar30,1);
  if ((longlong)auVar21._0_8_ != 10000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar31._8_8_ = 0;
  auVar31._0_8_ = __real_41c1e1a300400000;
  auVar21 = roundpd(auVar31,auVar31,1);
  if ((longlong)auVar21._0_8_ != 600000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar32._8_8_ = 0;
  auVar32._0_8_ = __real_4220c388d0010000;
  auVar21 = roundpd(auVar32,auVar32,1);
  if ((longlong)auVar21._0_8_ != 36000000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  if ((longlong)auVar14._0_8_ != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar33._8_8_ = 0;
  auVar33._0_8_ = __real_4269254d38001000;
  auVar14 = roundpd(auVar33,auVar33,1);
  if ((longlong)auVar14._0_8_ != 864000000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar34._8_8_ = 0;
  auVar34._0_8_ = __real_426f6ea086001000;
  auVar14 = roundpd(auVar34,auVar34,1);
  if ((longlong)auVar14._0_8_ != 1080000000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar35._8_8_ = 0;
  auVar35._0_8_ = __real_4272dbf9ea000800;
  auVar14 = roundpd(auVar35,auVar35,1);
  if ((longlong)auVar14._0_8_ != 0x12dbf9ea000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar36._8_8_ = 0;
  auVar36._0_8_ = __real_4272dbf9ea0007f5;
  auVar14 = roundpd(auVar36,auVar36,1);
  if ((longlong)auVar14._0_8_ != 0x12dbf9ea000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar37._8_8_ = 0;
  auVar37._0_8_ = __real_c269254d37fff000;
  auVar14 = roundpd(auVar37,auVar37,1);
  if ((longlong)auVar14._0_8_ != -864000000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar38._8_8_ = 0;
  auVar38._0_8_ = __real_c26f6ea085fff000;
  auVar14 = roundpd(auVar38,auVar38,1);
  if ((longlong)auVar14._0_8_ != -1080000000000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  auVar39._8_8_ = 0;
  auVar39._0_8_ = __real_c272dbf9e9fff800;
  auVar14 = roundpd(auVar39,auVar39,1);
  if ((longlong)auVar14._0_8_ != -0x12dbf9ea000) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(local_58,L"Condition failed");
    (*pcVar2)(pFVar1,local_58,0);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

