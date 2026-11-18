// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d59f00

EAutomationTestFlags __thiscall FTemplatesSortingTest::GetTestFlags(FTemplatesSortingTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d59f10

bool __thiscall FTemplatesSortingTest::IsStressTest(FTemplatesSortingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d59f20

uint __thiscall FTemplatesSortingTest::GetRequiredDeviceNum(FTemplatesSortingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d59f30

FString * __thiscall
FTemplatesSortingTest::GetTestSourceFileName
          (FTemplatesSortingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Templates\\SortingTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d59f60

int __thiscall FTemplatesSortingTest::GetTestSourceFileLine(FTemplatesSortingTest *this)

{
  return 10;
}

// GetTests @ 141d59f70

/* WARNING: Removing unreachable block (ram,0x000141d5a0ee) */

void __thiscall
FTemplatesSortingTest::GetTests
          (FTemplatesSortingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d5a110

bool __thiscall FTemplatesSortingTest::RunTest(FTemplatesSortingTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d5a140

FString * __thiscall
FTemplatesSortingTest::GetBeautifiedTestName
          (FTemplatesSortingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTemplatesSortingTest @ 141d6c8f0

FTemplatesSortingTest * __thiscall
FTemplatesSortingTest::FTemplatesSortingTest(FTemplatesSortingTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTemplatesSortingTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Templates][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Templates::Sorting");
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
  ::FString::FString(&local_18,"[Core][Templates][SmokeFilter]");
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

// TestBody @ 141d8a1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTemplatesSortingTest::TestBody(FTemplatesSortingTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_108 [32];
  FString local_c8;
  ForAnyElementType local_b8;
  int local_b0 [2];
  TRadixSortKeyCastUint64<unsigned___int64> local_a8 [8];
  FString local_a0;
  FString local_90;
  ulong64 local_80;
  FRadixSort64Test local_78;
  undefined8 local_60;
  FString local_58;
  undefined8 local_48;
  FString local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_c8,L"RadixSort64 low bits");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_00000003;
  local_90.Data.ArrayNum = 1;
  local_90.Data.ArrayMax = 0;
  local_80 = 2;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0[0] = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,&local_b8,3,local_b0 + 1);
  *(FScriptContainerElement **)local_b8.Data = local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_b8.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_b8.Data + 0x10) = local_80;
  RadixSort64<unsigned___int64,int>((ulong64 *)local_b8.Data,local_b0[0]);
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_00000001;
  local_90.Data.ArrayNum = 2;
  local_90.Data.ArrayMax = 0;
  local_80 = 3;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,(ForAnyElementType *)&local_c8,3,&local_c8.Data.ArrayMax);
  FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  *(FScriptContainerElement **)local_c8.Data.AllocatorInstance.Data =
       local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_c8.Data.AllocatorInstance.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_c8.Data.AllocatorInstance.Data + 0x10) = local_80;
  if ((local_b0[0] != local_c8.Data.ArrayNum) ||
     ((local_b0[0] != 0 &&
      (iVar4 = memcmp(local_b8.Data,local_c8.Data.AllocatorInstance.Data,(longlong)local_b0[0] << 3)
      , iVar4 != 0)))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a0,L"List incorrectly sorted.");
    (*pcVar2)(pFVar1,&local_a0,0);
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_c8,L"RadixSort64 high bits");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xaabbccdd00112233;
  local_90.Data.ArrayNum = 0x112233;
  local_90.Data.ArrayMax = -0x11006678;
  local_80 = 0x9988776600112233;
  local_b0[0] = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,&local_b8,3,local_b0 + 1);
  *(FScriptContainerElement **)local_b8.Data = local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_b8.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_b8.Data + 0x10) = local_80;
  RadixSort64<unsigned___int64,int>((ulong64 *)local_b8.Data,local_b0[0]);
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x9988776600112233;
  local_90.Data.ArrayNum = 0x112233;
  local_90.Data.ArrayMax = -0x55443323;
  local_80 = 0xeeff998800112233;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,(ForAnyElementType *)&local_c8,3,&local_c8.Data.ArrayMax);
  FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  *(FScriptContainerElement **)local_c8.Data.AllocatorInstance.Data =
       local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_c8.Data.AllocatorInstance.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_c8.Data.AllocatorInstance.Data + 0x10) = local_80;
  if ((local_b0[0] != local_c8.Data.ArrayNum) ||
     ((local_b0[0] != 0 &&
      (iVar4 = memcmp(local_b8.Data,local_c8.Data.AllocatorInstance.Data,(longlong)local_b0[0] << 3)
      , iVar4 != 0)))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a0,L"List incorrectly sorted.");
    (*pcVar2)(pFVar1,&local_a0,0);
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_c8,L"RadixSort64 all");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xaabbccdd00112233;
  local_90.Data.ArrayNum = 0x887766;
  local_90.Data.ArrayMax = -0x11006678;
  local_80 = 0x9988776600443322;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0[0] = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,&local_b8,3,local_b0 + 1);
  *(FScriptContainerElement **)local_b8.Data = local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_b8.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_b8.Data + 0x10) = local_80;
  RadixSort64<unsigned___int64,int>((ulong64 *)local_b8.Data,local_b0[0]);
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x9988776600443322;
  local_90.Data.ArrayNum = 0x112233;
  local_90.Data.ArrayMax = -0x55443323;
  local_80 = 0xeeff998800887766;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,(ForAnyElementType *)&local_c8,3,&local_c8.Data.ArrayMax);
  FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  *(FScriptContainerElement **)local_c8.Data.AllocatorInstance.Data =
       local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_c8.Data.AllocatorInstance.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_c8.Data.AllocatorInstance.Data + 0x10) = local_80;
  if ((local_b0[0] != local_c8.Data.ArrayNum) ||
     ((local_b0[0] != 0 &&
      (iVar4 = memcmp(local_b8.Data,local_c8.Data.AllocatorInstance.Data,(longlong)local_b0[0] << 3)
      , iVar4 != 0)))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a0,L"List incorrectly sorted.");
    (*pcVar2)(pFVar1,&local_a0,0);
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_c8,L"RadixSort64 all with buffer");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xaabbccdd00112233;
  local_90.Data.ArrayNum = 0x887766;
  local_90.Data.ArrayMax = -0x11006678;
  local_80 = 0x9988776600443322;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,(ForAnyElementType *)&local_a0,3,&local_a0.Data.ArrayMax);
  *(FScriptContainerElement **)local_a0.Data.AllocatorInstance.Data =
       local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_a0.Data.AllocatorInstance.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_a0.Data.AllocatorInstance.Data + 0x10) = local_80;
  lVar7 = (longlong)local_a0.Data.ArrayNum;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_a0.Data.ArrayNum,&local_b8,local_b0,local_b0 + 1);
  memset(local_b8.Data + (longlong)iVar4 * 8,0,lVar7 << 3);
  RadixSort64<0,unsigned___int64,int,TRadixSortKeyCastUint64<unsigned___int64>_>
            ((ulong64 *)local_a0.Data.AllocatorInstance.Data,(ulong64 *)local_b8.Data,
             local_a0.Data.ArrayNum,local_a8);
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x9988776600443322;
  local_90.Data.ArrayNum = 0x112233;
  local_90.Data.ArrayMax = -0x55443323;
  local_80 = 0xeeff998800887766;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,(ForAnyElementType *)&local_c8,3,&local_c8.Data.ArrayMax);
  FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  *(FScriptContainerElement **)local_c8.Data.AllocatorInstance.Data =
       local_90.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_c8.Data.AllocatorInstance.Data + 8) = local_90.Data._8_8_;
  *(ulong64 *)(local_c8.Data.AllocatorInstance.Data + 0x10) = local_80;
  if ((local_a0.Data.ArrayNum != local_c8.Data.ArrayNum) ||
     ((local_a0.Data.ArrayNum != 0 &&
      (iVar4 = memcmp(local_a0.Data.AllocatorInstance.Data,local_c8.Data.AllocatorInstance.Data,
                      (longlong)local_a0.Data.ArrayNum << 3), iVar4 != 0)))) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"List incorrectly sorted.");
    (*pcVar2)(pFVar1,&local_90,0);
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_90,L"RadixSort64 custom sort key");
  (*pcVar2)(pFVar1,&local_90,0);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  local_78.Key = 2;
  ::FString::FString(&local_78.Value,L"B");
  local_60 = 1;
  ::FString::FString(&local_58,L"A");
  local_48 = 3;
  ::FString::FString(&local_40,L"C");
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,3,0,(ForAnyElementType *)&local_a0,3,&local_a0.Data.ArrayMax);
  ConstructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            (local_a0.Data.AllocatorInstance.Data,&local_78,3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Value.Data.AllocatorInstance.Data);
  }
  iVar4 = local_a0.Data.ArrayNum;
  FVar8.Data = local_a0.Data.AllocatorInstance.Data;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,local_a0.Data.ArrayNum,&local_b8,local_b0,local_b0 + 1);
  RadixSort64<1,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int,_FTemplatesSortingTest::TestBody_::__l2::SortKey>
            ((FRadixSort64Test *)FVar8.Data,(FRadixSort64Test *)local_b8.Data,iVar4,
             (SortKey *)local_a8);
  DestructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            ((FRadixSort64Test *)local_b8.Data,local_b0[0]);
  if ((FRadixSort64Test *)local_b8.Data != (FRadixSort64Test *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_78.Key = 1;
  ::FString::FString(&local_78.Value,L"A");
  local_60 = 2;
  ::FString::FString(&local_58,L"B");
  local_48 = 3;
  ::FString::FString(&local_40,L"C");
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,3,0,(ForAnyElementType *)&local_c8,3,&local_c8.Data.ArrayMax);
  ConstructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            (local_c8.Data.AllocatorInstance.Data,&local_78,3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Value.Data.AllocatorInstance.Data);
  }
  if ((local_a0.Data.ArrayNum != local_c8.Data.ArrayNum) ||
     (bVar3 = CompareItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
                        ((FRadixSort64Test *)local_a0.Data.AllocatorInstance.Data,
                         (FRadixSort64Test *)local_c8.Data.AllocatorInstance.Data,
                         local_a0.Data.ArrayNum), !bVar3)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"List incorrectly sorted.");
    (*pcVar2)(pFVar1,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            ((FRadixSort64Test *)local_c8.Data.AllocatorInstance.Data,local_c8.Data.ArrayNum);
  if ((FRadixSort64Test *)local_c8.Data.AllocatorInstance.Data != (FRadixSort64Test *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            ((FRadixSort64Test *)local_a0.Data.AllocatorInstance.Data,local_a0.Data.ArrayNum);
  if ((FRadixSort64Test *)local_a0.Data.AllocatorInstance.Data != (FRadixSort64Test *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_90,L"RadixSort64 custom sort key and provided buffer.");
  (*pcVar2)(pFVar1,&local_90,0);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  local_78.Key = 2;
  ::FString::FString(&local_78.Value,L"B");
  local_60 = 1;
  ::FString::FString(&local_58,L"A");
  local_48 = 3;
  ::FString::FString(&local_40,L"C");
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,3,0,(ForAnyElementType *)&local_a0,3,&local_a0.Data.ArrayMax);
  ConstructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            (local_a0.Data.AllocatorInstance.Data,&local_78,3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Value.Data.AllocatorInstance.Data);
  }
  iVar4 = local_a0.Data.ArrayNum;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_a0.Data.ArrayNum,&local_b8,local_b0,local_b0 + 1);
  DefaultConstructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            (local_b8.Data + (longlong)iVar5 * 0x18,iVar4);
  RadixSort64<0,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int,_FTemplatesSortingTest::TestBody_::__l2::SortKey>
            ((FRadixSort64Test *)local_a0.Data.AllocatorInstance.Data,
             (FRadixSort64Test *)local_b8.Data,local_a0.Data.ArrayNum,(SortKey *)local_a8);
  local_78.Key = 1;
  ::FString::FString(&local_78.Value,L"A");
  local_60 = 2;
  ::FString::FString(&local_58,L"B");
  local_48 = 3;
  ::FString::FString(&local_40,L"C");
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,3,0,(ForAnyElementType *)&local_c8,3,&local_c8.Data.ArrayMax);
  ConstructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            (local_c8.Data.AllocatorInstance.Data,&local_78,3);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Value.Data.AllocatorInstance.Data);
  }
  if ((local_a0.Data.ArrayNum != local_c8.Data.ArrayNum) ||
     (bVar3 = CompareItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
                        ((FRadixSort64Test *)local_a0.Data.AllocatorInstance.Data,
                         (FRadixSort64Test *)local_c8.Data.AllocatorInstance.Data,
                         local_a0.Data.ArrayNum), !bVar3)) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"List incorrectly sorted.");
    (*pcVar2)(pFVar1,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            ((FRadixSort64Test *)local_c8.Data.AllocatorInstance.Data,local_c8.Data.ArrayNum);
  if ((FRadixSort64Test *)local_c8.Data.AllocatorInstance.Data != (FRadixSort64Test *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            ((FRadixSort64Test *)local_b8.Data,local_b0[0]);
  if ((FRadixSort64Test *)local_b8.Data != (FRadixSort64Test *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<_FTemplatesSortingTest::TestBody_::__l2::FRadixSort64Test,int>
            ((FRadixSort64Test *)local_a0.Data.AllocatorInstance.Data,local_a0.Data.ArrayNum);
  if ((FRadixSort64Test *)local_a0.Data.AllocatorInstance.Data != (FRadixSort64Test *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

