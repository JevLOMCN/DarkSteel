// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141fb1e20

EAutomationTestFlags __thiscall FEnumBitfieldTest::GetTestFlags(FEnumBitfieldTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141fb1e30

bool __thiscall FEnumBitfieldTest::IsStressTest(FEnumBitfieldTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141fb1e40

uint __thiscall FEnumBitfieldTest::GetRequiredDeviceNum(FEnumBitfieldTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141fb1e50

FString * __thiscall
FEnumBitfieldTest::GetTestSourceFileName(FEnumBitfieldTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Enum.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141fb1e80

int __thiscall FEnumBitfieldTest::GetTestSourceFileLine(FEnumBitfieldTest *this)

{
  return 0x51a;
}

// GetTests @ 141fb1e90

/* WARNING: Removing unreachable block (ram,0x000141fb1f7d) */
/* WARNING: Removing unreachable block (ram,0x000141fb2048) */

void __thiscall
FEnumBitfieldTest::GetTests
          (FEnumBitfieldTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.CoreUObject.EnumBitfields");
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

// RunTest @ 141fb2070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FEnumBitfieldTest::RunTest(FEnumBitfieldTest *this,FString *param_1)

{
  int iVar1;
  UPackage *pUVar2;
  UEnum *pUVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  undefined1 auStackY_148 [32];
  FString local_108;
  ForAnyElementType local_f8;
  undefined4 local_f0;
  int local_ec;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FName local_88;
  FName FStack_80;
  FName local_78;
  FName FStack_70;
  FName local_68;
  FName FStack_60;
  FName local_58;
  FName FStack_50;
  FName local_48;
  FName FStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar2 = CreatePackage(L"/Script/TestEnumBitfieldsPackage");
  if ((atomic<unsigned_int>)((uint)pUVar2->PackageFlagsPrivate | 0x10) !=
      pUVar2->PackageFlagsPrivate) {
    LOCK();
    pUVar2->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar2->PackageFlagsPrivate | 0x10);
    UNLOCK();
  }
  ::FName::FName(&local_e8,L"EBitfieldTestEnum");
  ::FName::FName(&local_88,L"EBitfieldTestEnum::TestValue0");
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  ::FName::FName(&local_78,L"EBitfieldTestEnum::TestValue1");
  FStack_70.ComparisonIndex.Value = 1;
  FStack_70.Number = 0;
  ::FName::FName(&local_68,L"EBitfieldTestEnum::TestValue2");
  FStack_60.ComparisonIndex.Value = 2;
  FStack_60.Number = 0;
  ::FName::FName(&local_58,L"EBitfieldTestEnum::TestValue4");
  FStack_50.ComparisonIndex.Value = 4;
  FStack_50.Number = 0;
  ::FName::FName(&local_48,L"EBitfieldTestEnum::TestValue2to63");
  local_f8.Data = (FScriptContainerElement *)0x0;
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0x80000000;
  local_f0 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_f8,5,&local_ec);
  *(FName *)local_f8.Data = local_88;
  *(FName *)(local_f8.Data + 8) = FStack_80;
  *(FName *)(local_f8.Data + 0x10) = local_78;
  *(FName *)(local_f8.Data + 0x18) = FStack_70;
  *(FName *)(local_f8.Data + 0x20) = local_68;
  *(FName *)(local_f8.Data + 0x28) = FStack_60;
  *(FName *)(local_f8.Data + 0x30) = local_58;
  *(FName *)(local_f8.Data + 0x38) = FStack_50;
  *(FName *)(local_f8.Data + 0x40) = local_48;
  *(FName *)(local_f8.Data + 0x48) = FStack_40;
  pUVar3 = NewObject<UEnum>((UObject *)pUVar2,local_e8,RF_NoFlags,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3,&local_f8,2,0);
  pUVar3->EnumFlags = pUVar3->EnumFlags | Flags;
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_a0,3);
  pFVar4 = ::FString::FString(&local_108,L"TestValue1 | TestValue2");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar5.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test bitfield with value 3",(wchar_t *)FVar5.Data,pwVar6)
  ;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_b0,1);
  pFVar4 = ::FString::FString(&local_108,L"TestValue1");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar5.Data = local_b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test bitfield with value 1",(wchar_t *)FVar5.Data,pwVar6)
  ;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  iVar1 = UEnum::GetIndexByValue(pUVar3,0);
  UEnum::GetNameStringByIndex(pUVar3,&local_c0,iVar1);
  pFVar4 = ::FString::FString(&local_108,L"TestValue0");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_c0.Data.ArrayNum != 0) {
    FVar5.Data = local_c0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test bitfield with value 0",(wchar_t *)FVar5.Data,pwVar6)
  ;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_d0,-0x8000000000000000);
  pFVar4 = ::FString::FString(&local_108,L"TestValue2to63");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar5.Data = local_d0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test bitfield with value 2^63",(wchar_t *)FVar5.Data,
             pwVar6);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_e0,8);
  pFVar4 = ::FString::FString(&local_108,L"");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar5.Data = local_e0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test bitfield with invalid value 8",(wchar_t *)FVar5.Data
             ,pwVar6);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if ((FName *)local_f8.Data != (FName *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  ::FName::FName(&local_e8,L"EBitfieldTestStandardEnum");
  ::FName::FName(&local_88,L"EBitfieldTestStandardEnum::TestValue0");
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  ::FName::FName(&local_78,L"EBitfieldTestStandardEnum::TestValue1");
  FStack_70.ComparisonIndex.Value = 1;
  FStack_70.Number = 0;
  ::FName::FName(&local_68,L"EBitfieldTestStandardEnum::TestValue2");
  FStack_60.ComparisonIndex.Value = 2;
  FStack_60.Number = 0;
  ::FName::FName(&local_58,L"EBitfieldTestStandardEnum::TestValue3");
  FStack_50.ComparisonIndex.Value = 3;
  FStack_50.Number = 0;
  ::FName::FName(&local_48,L"EBitfieldTestStandardEnum::TestValue2to63");
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0x80000000;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_f8,5,&local_ec);
  *(FName *)local_f8.Data = local_88;
  *(FName *)(local_f8.Data + 8) = FStack_80;
  *(FName *)(local_f8.Data + 0x10) = local_78;
  *(FName *)(local_f8.Data + 0x18) = FStack_70;
  *(FName *)(local_f8.Data + 0x20) = local_68;
  *(FName *)(local_f8.Data + 0x28) = FStack_60;
  *(FName *)(local_f8.Data + 0x30) = local_58;
  *(FName *)(local_f8.Data + 0x38) = FStack_50;
  *(FName *)(local_f8.Data + 0x40) = local_48;
  *(FName *)(local_f8.Data + 0x48) = FStack_40;
  pUVar3 = NewObject<UEnum>((UObject *)pUVar2,local_e8,RF_NoFlags,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3,&local_f8,2,0);
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_e0,3);
  pFVar4 = ::FString::FString(&local_108,L"TestValue3");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar5.Data = local_e0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test non bitfield with value 3",(wchar_t *)FVar5.Data,
             pwVar6);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_d0,1);
  pFVar4 = ::FString::FString(&local_108,L"TestValue1");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar5.Data = local_d0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test non bitfield with value 1",(wchar_t *)FVar5.Data,
             pwVar6);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  iVar1 = UEnum::GetIndexByValue(pUVar3,0);
  UEnum::GetNameStringByIndex(pUVar3,&local_c0,iVar1);
  pFVar4 = ::FString::FString(&local_108,L"TestValue0");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_c0.Data.ArrayNum != 0) {
    FVar5.Data = local_c0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test non bitfield with value 0",(wchar_t *)FVar5.Data,
             pwVar6);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_b0,-0x8000000000000000);
  pFVar4 = ::FString::FString(&local_108,L"TestValue2to63");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar5.Data = local_b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test non bitfield with value 2^63",(wchar_t *)FVar5.Data,
             pwVar6);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  UEnum::GetValueOrBitfieldAsString(pUVar3,&local_a0,8);
  pFVar4 = ::FString::FString(&local_108,L"");
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar5.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Test non bitfield with bad value",(wchar_t *)FVar5.Data,
             pwVar6);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if ((FName *)local_f8.Data != (FName *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141fb27c0

FString * __thiscall
FEnumBitfieldTest::GetBeautifiedTestName(FEnumBitfieldTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.CoreUObject.EnumBitfields");
  return __return_storage_ptr__;
}

