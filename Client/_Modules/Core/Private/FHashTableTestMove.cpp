// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac6040

EAutomationTestFlags __thiscall FHashTableTestMove::GetTestFlags(FHashTableTestMove *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac6050

bool __thiscall FHashTableTestMove::IsStressTest(FHashTableTestMove *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac6060

uint __thiscall FHashTableTestMove::GetRequiredDeviceNum(FHashTableTestMove *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac6070

FString * __thiscall
FHashTableTestMove::GetTestSourceFileName(FHashTableTestMove *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\HashTableTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac60a0

int __thiscall FHashTableTestMove::GetTestSourceFileLine(FHashTableTestMove *this)

{
  return 8;
}

// GetTests @ 141ac60b0

/* WARNING: Removing unreachable block (ram,0x000141ac622e) */

void __thiscall
FHashTableTestMove::GetTests
          (FHashTableTestMove *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac6250

bool __thiscall FHashTableTestMove::RunTest(FHashTableTestMove *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac6280

FString * __thiscall
FHashTableTestMove::GetBeautifiedTestName(FHashTableTestMove *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FHashTableTestMove @ 141b21b30

FHashTableTestMove * __thiscall
FHashTableTestMove::FHashTableTestMove(FHashTableTestMove *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FHashTableTestMove__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::HashTable::Move");
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

// TestBody @ 141b884d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FHashTableTestMove::TestBody(FHashTableTestMove *this,FString *param_1)

{
  ulonglong uVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong64 uVar9;
  FAutomationTestFramework *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  FHashTable local_98;
  FString local_78;
  uint local_68;
  FString local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_40[0] = 5;
  local_98.HashMask = 3;
  local_50 = ___xmm_00000004000000030000000200000001;
  uStack_48 = _UNK_150631e38;
  local_98.HashSize = 4;
  local_98.IndexSize = 0x10;
  local_98.Hash = operator_new__(0x10);
  uVar9 = SUB168(ZEXT816(4) * ZEXT416(local_98.IndexSize),0);
  if (SUB168(ZEXT816(4) * ZEXT416(local_98.IndexSize),8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  local_98.NextIndex = operator_new__(uVar9);
  memset(local_98.Hash,0xff,(ulonglong)(local_98.HashSize * 4));
  uVar11 = ((uint)((ulonglong)&local_50 >> 0x14) & 0xffff ^ (uint)((ulonglong)&local_50 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (local_98.IndexSize == 0) {
    for (lVar4 = 0x3f; 1UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
    if (uVar12 < 0x20) {
      uVar12 = 0x20;
    }
    FHashTable::Resize(&local_98,uVar12);
  }
  uVar12 = 0;
  uVar11 = local_98.HashMask & (uVar11 >> 0x10 ^ uVar11);
  *local_98.NextIndex = local_98.Hash[uVar11];
  local_98.Hash[uVar11] = 0;
  uVar11 = ((uint)((longlong)&local_50 + 4U >> 0x14) & 0xffff ^
           (uint)((longlong)&local_50 + 4U >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (local_98.IndexSize < 2) {
    for (lVar4 = 0x3f; 3UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
    if (uVar13 < 0x20) {
      uVar13 = 0x20;
    }
    FHashTable::Resize(&local_98,uVar13);
  }
  uVar11 = local_98.HashMask & (uVar11 >> 0x10 ^ uVar11);
  local_98.NextIndex[1] = local_98.Hash[uVar11];
  local_98.Hash[uVar11] = 1;
  uVar11 = ((uint)((ulonglong)&uStack_48 >> 0x14) & 0xffff ^ (uint)((ulonglong)&uStack_48 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (local_98.IndexSize < 3) {
    for (lVar4 = 0x3f; 5UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
    if (uVar13 < 0x20) {
      uVar13 = 0x20;
    }
    FHashTable::Resize(&local_98,uVar13);
  }
  uVar11 = local_98.HashMask & (uVar11 >> 0x10 ^ uVar11);
  local_98.NextIndex[2] = local_98.Hash[uVar11];
  local_98.Hash[uVar11] = 2;
  uVar11 = ((uint)((longlong)&uStack_48 + 4U >> 0x14) & 0xffff ^
           (uint)((longlong)&uStack_48 + 4U >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (local_98.IndexSize < 4) {
    for (lVar4 = 0x3f; 7UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
    if (uVar13 < 0x20) {
      uVar13 = 0x20;
    }
    FHashTable::Resize(&local_98,uVar13);
  }
  uVar11 = local_98.HashMask & (uVar11 >> 0x10 ^ uVar11);
  local_98.NextIndex[3] = local_98.Hash[uVar11];
  local_98.Hash[uVar11] = 3;
  uVar11 = ((uint)((ulonglong)local_40 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_40 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (local_98.IndexSize < 5) {
    for (lVar4 = 0x3f; 9UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
    if (uVar13 < 0x20) {
      uVar13 = 0x20;
    }
    FHashTable::Resize(&local_98,uVar13);
  }
  puVar8 = local_98.NextIndex;
  puVar7 = local_98.Hash;
  uVar6 = local_98.IndexSize;
  uVar5 = local_98.HashMask;
  uVar13 = local_98.HashSize;
  local_98.HashMask = local_98.HashMask & (uVar11 >> 0x10 ^ uVar11);
  local_98.NextIndex[4] = local_98.Hash[local_98.HashMask];
  local_98.Hash[local_98.HashMask] = 4;
  local_68 = local_98.IndexSize;
  local_98.HashSize = 0;
  local_98.HashMask = 0;
  local_98.IndexSize = 0;
  local_98.Hash = FHashTable::EmptyHash;
  local_98.NextIndex = (uint *)0x0;
  if (uVar6 != 0x10) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar2 = pFVar10->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar3)(pFVar2,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (uVar13 != 4) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar2 = pFVar10->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_78,L"Condition failed");
    (*pcVar3)(pFVar2,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  do {
    uVar1 = (longlong)&local_50 + (longlong)(int)uVar12 * 4;
    uVar11 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar13 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    uVar13 = uVar13 >> 0x10 ^ uVar13;
    for (uVar11 = local_98.Hash[local_98.HashMask & uVar13]; uVar11 != 0xffffffff;
        uVar11 = local_98.NextIndex[uVar11]) {
      if (uVar11 == uVar12) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_78,L"Condition expected to return false but returned true");
        (*pcVar3)(pFVar2,&local_78,0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        break;
      }
    }
    for (uVar11 = puVar7[uVar13 & uVar5]; uVar11 != 0xffffffff; uVar11 = puVar8[uVar11]) {
      if (uVar11 == uVar12) goto LAB_141b8894f;
    }
    pFVar10 = FAutomationTestFramework::Get();
    pFVar2 = pFVar10->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar3)(pFVar2,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
LAB_141b8894f:
    uVar12 = uVar12 + 1;
    if (4 < uVar12) {
      if (local_68 != 0) {
        operator_delete__(puVar7);
        operator_delete__(puVar8);
      }
      if (local_98.IndexSize != 0) {
        local_98.HashMask = 0;
        local_98.IndexSize = 0;
        operator_delete__(local_98.Hash);
        local_98.Hash = FHashTable::EmptyHash;
        operator_delete__(local_98.NextIndex);
      }
      return;
    }
  } while( true );
}

