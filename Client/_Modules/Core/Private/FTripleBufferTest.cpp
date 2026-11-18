// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbe7a0

EAutomationTestFlags __thiscall FTripleBufferTest::GetTestFlags(FTripleBufferTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbe7b0

bool __thiscall FTripleBufferTest::IsStressTest(FTripleBufferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbe810

uint __thiscall FTripleBufferTest::GetRequiredDeviceNum(FTripleBufferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbe820

FString * __thiscall
FTripleBufferTest::GetTestSourceFileName(FTripleBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TripleBufferTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbe850

int __thiscall FTripleBufferTest::GetTestSourceFileLine(FTripleBufferTest *this)

{
  return 0xe;
}

// GetTests @ 141cbe860

/* WARNING: Removing unreachable block (ram,0x000141cbe9de) */

void __thiscall
FTripleBufferTest::GetTests
          (FTripleBufferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbea00

bool __thiscall FTripleBufferTest::RunTest(FTripleBufferTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbea30

FString * __thiscall
FTripleBufferTest::GetBeautifiedTestName(FTripleBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTripleBufferTest @ 141cf0460

FTripleBufferTest * __thiscall
FTripleBufferTest::FTripleBufferTest(FTripleBufferTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTripleBufferTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TripleBuffer");
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

// TestBody @ 141d50910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d50d9d) */
/* WARNING: Removing unreachable block (ram,0x000141d50d70) */
/* WARNING: Removing unreachable block (ram,0x000141d5095a) */
/* WARNING: Removing unreachable block (ram,0x000141d50992) */
/* WARNING: Removing unreachable block (ram,0x000141d509d6) */
/* WARNING: Removing unreachable block (ram,0x000141d50a0e) */
/* WARNING: Removing unreachable block (ram,0x000141d50a6c) */
/* WARNING: Removing unreachable block (ram,0x000141d50abf) */
/* WARNING: Removing unreachable block (ram,0x000141d50b3c) */
/* WARNING: Removing unreachable block (ram,0x000141d50c3c) */
/* WARNING: Removing unreachable block (ram,0x000141d50c90) */
/* WARNING: Removing unreachable block (ram,0x000141d50cbd) */
/* WARNING: Removing unreachable block (ram,0x000141d50e61) */
/* WARNING: Removing unreachable block (ram,0x000141d50ecc) */
/* WARNING: Removing unreachable block (ram,0x000141d50acd) */
/* WARNING: Removing unreachable block (ram,0x000141d50b05) */
/* WARNING: Removing unreachable block (ram,0x000141d50b4a) */
/* WARNING: Removing unreachable block (ram,0x000141d50b82) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FTripleBufferTest::TestBody(FTripleBufferTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  void *pvVar3;
  FAutomationTestFramework *pFVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_88 [48];
  FString *local_58;
  uint local_48;
  char local_44;
  FString local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pvVar3 = operator_new__(0xc);
  local_48 = 6;
  operator_delete__(pvVar3);
  local_58 = operator_new__(0xc);
  local_48 = 6;
  local_44 = '\x01';
  *(undefined4 *)((longlong)local_58 + 8) = 1;
  *(undefined4 *)((longlong)local_58 + 4) = *(undefined4 *)((longlong)local_58 + 8);
  *(undefined4 *)local_58 = *(undefined4 *)((longlong)local_58 + 8);
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar4->CurrentTest,L"Initialized triple buffer must have correct read buffer value",
             *(int *)((longlong)local_58 + (ulonglong)(local_48 & 3) * 4),1);
  if ((local_48 >> 6 & 1) != 0) {
    local_48 = (int)local_48 >> 4 & 3U | (local_48 & 3) << 4 | local_48 & 0xc;
    LOCK();
    UNLOCK();
  }
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar4->CurrentTest,L"Initialized triple buffer must have correct temp buffer value",
             *(int *)((longlong)local_58 + (ulonglong)(local_48 & 3) * 4),1);
  uVar5 = (int)local_48 >> 2 & 0xc;
  LOCK();
  UNLOCK();
  local_48 = (int)((local_48 & 0xc | 0x10) << 2 | uVar5 | local_48 & 3) >> 4 & 3U |
             (local_48 & 3) << 4 | uVar5;
  LOCK();
  UNLOCK();
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar4->CurrentTest,L"Initialized triple buffer must have correct temp buffer value",
             *(int *)((longlong)local_58 + (ulonglong)(local_48 & 3) * 4),1);
  if (local_44 != '\0') {
    operator_delete__(local_58);
  }
  local_58 = &local_38;
  local_38.Data.AllocatorInstance.Data._0_4_ = 1;
  local_38.Data.AllocatorInstance.Data._4_4_ = 2;
  local_38.Data.ArrayNum = 3;
  local_48 = 0x46;
  local_44 = '\0';
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar4->CurrentTest,L"Pre-set triple buffer must have correct Read buffer value",3,3);
  if ((local_48 >> 6 & 1) != 0) {
    local_48 = (int)local_48 >> 4 & 3U | (local_48 & 3) << 4 | local_48 & 0xc;
    LOCK();
    UNLOCK();
  }
  iVar8 = *(int *)((longlong)&(local_58->Data).AllocatorInstance.Data +
                  (ulonglong)(local_48 & 3) * 4);
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar4->CurrentTest,L"Pre-set triple buffer must have correct Temp buffer value",iVar8,
             1);
  uVar5 = (int)local_48 >> 2 & 0xc;
  LOCK();
  UNLOCK();
  uVar6 = (int)((local_48 & 0xc | 0x10) << 2 | uVar5 | local_48 & 3) >> 4 & 3;
  local_48 = uVar6 | (local_48 & 3) << 4 | uVar5;
  LOCK();
  UNLOCK();
  iVar8 = *(int *)((longlong)&(local_58->Data).AllocatorInstance.Data + (ulonglong)uVar6 * 4);
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar4->CurrentTest,L"Pre-set triple buffer must have correct Write buffer value",iVar8
             ,2);
  if (local_44 != '\0') {
    operator_delete__(local_58);
  }
  local_58 = operator_new__(0xc);
  uVar5 = 0;
  local_48 = 6;
  iVar8 = 0;
  local_44 = '\x01';
  *(undefined4 *)((longlong)local_58 + 8) = 0;
  *(undefined4 *)((longlong)local_58 + 4) = 0;
  *(undefined4 *)local_58 = 0;
  do {
    *(int *)((longlong)local_58 + (ulonglong)((uint)((longlong)(ulonglong)local_48 >> 2) & 3) * 4) =
         iVar8;
    uVar6 = (int)local_48 >> 2 & 0xc;
    LOCK();
    UNLOCK();
    local_48 = (int)((local_48 & 0xc | 0x10) << 2 | uVar6 | local_48 & 3) >> 4 & 3U |
               (local_48 & 3) << 4 | uVar6;
    LOCK();
    UNLOCK();
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    iVar10 = *(int *)((longlong)local_58 + (ulonglong)(local_48 & 3) * 4);
    ::FString::PrintfImpl(&local_38,L"Triple buffer must read correct value (%i)");
    pwVar7 = L"";
    if (local_38.Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)
               CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                        local_38.Data.AllocatorInstance.Data._0_4_);
    }
    FAutomationTestBase::TestEqual(pFVar1,pwVar7,iVar10,iVar8);
    if ((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                         local_38.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                                     local_38.Data.AllocatorInstance.Data._0_4_));
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  iVar10 = 0;
  iVar8 = -1;
  do {
    uVar6 = uVar5 * 0xbb38435 + 0x3619636b;
    uVar5 = uVar6 & 3;
    if (uVar5 != 0) {
      do {
        *(int *)((longlong)local_58 +
                (ulonglong)((uint)((longlong)(ulonglong)local_48 >> 2) & 3) * 4) = iVar10;
        local_48 = (local_48 & 0xc | 0x10) << 2 | (int)local_48 >> 2 & 0xcU | local_48 & 3;
        LOCK();
        UNLOCK();
        uVar5 = uVar5 - 1;
      } while (0 < (int)uVar5);
    }
    uVar5 = uVar6 * 0xbb38435 + 0x3619636b;
    uVar6 = uVar5 & 3;
    iVar9 = iVar8;
    if (uVar6 != 0) {
      do {
        iVar9 = iVar8;
        if ((local_48 & 0x40) == 0) break;
        if ((local_48 >> 6 & 1) != 0) {
          local_48 = (int)local_48 >> 4 & 3U | (local_48 & 3) << 4 | local_48 & 0xc;
          LOCK();
          UNLOCK();
        }
        iVar9 = *(int *)((longlong)local_58 + (ulonglong)(local_48 & 3) * 4);
        if (iVar9 <= iVar8) {
          pFVar4 = FAutomationTestFramework::Get();
          pFVar1 = pFVar4->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_38,L"Triple buffer must read in increasing order");
          (*pcVar2)(pFVar1,&local_38,0);
          if ((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                               local_38.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                                           local_38.Data.AllocatorInstance.Data._0_4_));
          }
        }
        uVar6 = uVar6 - 1;
        iVar8 = iVar9;
      } while (0 < (int)uVar6);
    }
    iVar10 = iVar10 + 1;
    iVar8 = iVar9;
    if (99 < iVar10) {
      if (local_44 != '\0') {
        operator_delete__(local_58);
      }
      return;
    }
  } while( true );
}

