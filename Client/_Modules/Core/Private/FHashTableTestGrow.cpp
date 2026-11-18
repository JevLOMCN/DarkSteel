// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac65c0

EAutomationTestFlags __thiscall FHashTableTestGrow::GetTestFlags(FHashTableTestGrow *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac65d0

bool __thiscall FHashTableTestGrow::IsStressTest(FHashTableTestGrow *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac65e0

uint __thiscall FHashTableTestGrow::GetRequiredDeviceNum(FHashTableTestGrow *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac65f0

FString * __thiscall
FHashTableTestGrow::GetTestSourceFileName(FHashTableTestGrow *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\HashTableTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac6620

int __thiscall FHashTableTestGrow::GetTestSourceFileLine(FHashTableTestGrow *this)

{
  return 0x2a;
}

// GetTests @ 141ac6630

/* WARNING: Removing unreachable block (ram,0x000141ac67ae) */

void __thiscall
FHashTableTestGrow::GetTests
          (FHashTableTestGrow *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac67d0

bool __thiscall FHashTableTestGrow::RunTest(FHashTableTestGrow *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac6800

FString * __thiscall
FHashTableTestGrow::GetBeautifiedTestName(FHashTableTestGrow *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FHashTableTestGrow @ 141b21960

FHashTableTestGrow * __thiscall
FHashTableTestGrow::FHashTableTestGrow(FHashTableTestGrow *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FHashTableTestGrow__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::HashTable::Grow");
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

// TestBody @ 141b87d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FHashTableTestGrow::TestBody(FHashTableTestGrow *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulong64 uVar5;
  FAutomationTestFramework *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  FHashTable local_88;
  FString local_68;
  uint local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_40[0] = 5;
  local_50 = ___xmm_00000004000000030000000200000001;
  uStack_48 = _UNK_150631e38;
  local_88.HashSize = 4;
  local_88.HashMask = 3;
  local_88.IndexSize = 0x10;
  local_88.Hash = operator_new__(0x10);
  uVar5 = SUB168(ZEXT816(4) * ZEXT416(local_88.IndexSize),0);
  if (SUB168(ZEXT816(4) * ZEXT416(local_88.IndexSize),8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  local_88.NextIndex = operator_new__(uVar5);
  memset(local_88.Hash,0xff,(ulonglong)(local_88.HashSize * 4));
  uVar7 = ((uint)((ulonglong)&local_50 >> 0x14) & 0xffff ^ (uint)((ulonglong)&local_50 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (local_88.IndexSize == 0) {
    for (lVar3 = 0x3f; 1UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    uVar8 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar8 < 0x20) {
      uVar8 = 0x20;
    }
    FHashTable::Resize(&local_88,uVar8);
  }
  uVar8 = local_88.HashMask & (uVar7 >> 0x10 ^ uVar7);
  *local_88.NextIndex = local_88.Hash[uVar8];
  local_88.Hash[uVar8] = 0;
  uVar8 = ((uint)((longlong)&local_50 + 4U >> 0x14) & 0xffff ^ (uint)((longlong)&local_50 + 4U >> 4)
          ) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (local_88.IndexSize < 2) {
    for (lVar3 = 0x3f; 3UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    uVar9 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar9 < 0x20) {
      uVar9 = 0x20;
    }
    FHashTable::Resize(&local_88,uVar9);
  }
  uVar9 = local_88.HashMask & (uVar8 >> 0x10 ^ uVar8);
  local_88.NextIndex[1] = local_88.Hash[uVar9];
  local_88.Hash[uVar9] = 1;
  uVar9 = ((uint)((ulonglong)&uStack_48 >> 0x14) & 0xffff ^ (uint)((ulonglong)&uStack_48 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (local_88.IndexSize < 3) {
    for (lVar3 = 0x3f; 5UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    uVar10 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar10 < 0x20) {
      uVar10 = 0x20;
    }
    FHashTable::Resize(&local_88,uVar10);
  }
  uVar10 = local_88.HashMask & (uVar9 >> 0x10 ^ uVar9);
  local_88.NextIndex[2] = local_88.Hash[uVar10];
  local_88.Hash[uVar10] = 2;
  uVar10 = ((uint)((longlong)&uStack_48 + 4U >> 0x14) & 0xffff ^
           (uint)((longlong)&uStack_48 + 4U >> 4)) * -0x7a143595;
  local_58 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = local_58 >> 0x10 ^ local_58;
  if (local_88.IndexSize < 4) {
    for (lVar3 = 0x3f; 7UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar11 < 0x20) {
      uVar11 = 0x20;
    }
    FHashTable::Resize(&local_88,uVar11);
  }
  uVar10 = local_88.HashMask & uVar10;
  local_88.NextIndex[3] = local_88.Hash[uVar10];
  local_88.Hash[uVar10] = 3;
  uVar10 = ((uint)((ulonglong)local_40 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_40 >> 4)) *
           -0x7a143595;
  local_54 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = local_54 >> 0x10 ^ local_54;
  if (local_88.IndexSize < 5) {
    for (lVar3 = 0x3f; 9UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
    if (uVar11 < 0x20) {
      uVar11 = 0x20;
    }
    FHashTable::Resize(&local_88,uVar11);
  }
  uVar10 = local_88.HashMask & uVar10;
  local_88.NextIndex[4] = local_88.Hash[uVar10];
  local_88.Hash[uVar10] = 4;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  for (uVar10 = local_88.Hash[local_88.HashMask & uVar7]; uVar10 != 0xffffffff;
      uVar10 = local_88.NextIndex[uVar10]) {
    if (uVar10 == 0) goto LAB_141b8807b;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b8807b:
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  for (uVar10 = local_88.Hash[local_88.HashMask & uVar8]; uVar10 != 0xffffffff;
      uVar10 = local_88.NextIndex[uVar10]) {
    if (uVar10 == 1) goto LAB_141b880f4;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b880f4:
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  for (uVar10 = local_88.Hash[local_88.HashMask & uVar9]; uVar10 != 0xffffffff;
      uVar10 = local_88.NextIndex[uVar10]) {
    if (uVar10 == 2) goto LAB_141b88169;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b88169:
  uVar11 = local_58 >> 0x10 ^ local_58;
  for (uVar10 = local_88.Hash[local_88.HashMask & uVar11]; uVar10 != 0xffffffff;
      uVar10 = local_88.NextIndex[uVar10]) {
    if (uVar10 == 3) goto LAB_141b881e4;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b881e4:
  uVar4 = local_54 >> 0x10 ^ local_54;
  for (uVar10 = local_88.Hash[local_88.HashMask & uVar4]; uVar10 != 0xffffffff;
      uVar10 = local_88.NextIndex[uVar10]) {
    if (uVar10 == 4) goto LAB_141b88254;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b88254:
  FHashTable::Resize(&local_88,0x80);
  for (uVar7 = local_88.Hash[local_88.HashMask & uVar7]; uVar7 != 0xffffffff;
      uVar7 = local_88.NextIndex[uVar7]) {
    if (uVar7 == 0) goto LAB_141b882d3;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b882d3:
  for (uVar7 = local_88.Hash[local_88.HashMask & uVar8]; uVar7 != 0xffffffff;
      uVar7 = local_88.NextIndex[uVar7]) {
    if (uVar7 == 1) goto LAB_141b8833b;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b8833b:
  for (uVar7 = local_88.Hash[local_88.HashMask & uVar9]; uVar7 != 0xffffffff;
      uVar7 = local_88.NextIndex[uVar7]) {
    if (uVar7 == 2) goto LAB_141b883a4;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b883a4:
  for (uVar7 = local_88.Hash[local_88.HashMask & uVar11]; uVar7 != 0xffffffff;
      uVar7 = local_88.NextIndex[uVar7]) {
    if (uVar7 == 3) goto LAB_141b8840c;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b8840c:
  for (uVar7 = local_88.Hash[local_88.HashMask & uVar4]; uVar7 != 0xffffffff;
      uVar7 = local_88.NextIndex[uVar7]) {
    if (uVar7 == 4) goto LAB_141b88470;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Condition failed");
  (*pcVar2)(pFVar1,&local_68,0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141b88470:
  if (local_88.IndexSize != 0) {
    local_88.HashMask = 0;
    local_88.IndexSize = 0;
    operator_delete__(local_88.Hash);
    local_88.Hash = FHashTable::EmptyHash;
    operator_delete__(local_88.NextIndex);
  }
  return;
}

