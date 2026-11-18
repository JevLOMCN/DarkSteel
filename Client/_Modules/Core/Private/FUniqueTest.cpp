// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ace590

EAutomationTestFlags __thiscall FUniqueTest::GetTestFlags(FUniqueTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ace5a0

bool __thiscall FUniqueTest::IsStressTest(FUniqueTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ace5b0

uint __thiscall FUniqueTest::GetRequiredDeviceNum(FUniqueTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ace5c0

FString * __thiscall
FUniqueTest::GetTestSourceFileName(FUniqueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Algo\\UniqueTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ace5f0

int __thiscall FUniqueTest::GetTestSourceFileLine(FUniqueTest *this)

{
  return 0xc;
}

// GetTests @ 141ace600

/* WARNING: Removing unreachable block (ram,0x000141ace77e) */

void __thiscall
FUniqueTest::GetTests
          (FUniqueTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ace7a0

bool __thiscall FUniqueTest::RunTest(FUniqueTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ace7d0

FString * __thiscall
FUniqueTest::GetBeautifiedTestName(FUniqueTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FUniqueTest @ 141b287b0

FUniqueTest * __thiscall FUniqueTest::FUniqueTest(FUniqueTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FUniqueTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Algo::Unique");
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

// TestBody @ 141ba4310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUniqueTest::TestBody(FUniqueTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  FAutomationTestFramework *pFVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  undefined1 auStackY_c8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  FString local_58;
  undefined1 *local_48;
  undefined8 uStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68 = 1;
  uStack_64 = 2;
  local_60 = 3;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_88.AllocatorInstance,3,&local_88.ArrayMax);
  *(ulonglong *)local_88.AllocatorInstance.Data = CONCAT44(uStack_64,local_68);
  *(int *)(local_88.AllocatorInstance.Data + 8) = local_60;
  iVar9 = local_88.ArrayNum;
  if (1 < local_88.ArrayNum) {
    FVar12.Data = local_88.AllocatorInstance.Data;
    FVar3.Data = local_88.AllocatorInstance.Data;
    while (FVar3.Data = FVar3.Data + 4,
          FVar3.Data != local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 4) {
      if ((*(int *)FVar12.Data != *(int *)FVar3.Data) &&
         (FVar12.Data = FVar12.Data + 4, FVar12.Data != FVar3.Data)) {
        *(int *)FVar12.Data = *(int *)FVar3.Data;
      }
    }
    iVar9 = (int)((longlong)(FVar12.Data + (4 - (longlong)local_88.AllocatorInstance.Data)) >> 2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_88,iVar9,Default);
  local_68 = 1;
  uStack_64 = 2;
  local_60 = 3;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,(ForAnyElementType *)&local_58,3,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_64,local_68);
  *(int *)(local_58.Data.AllocatorInstance.Data + 8) = local_60;
  if ((local_88.ArrayNum == local_58.Data.ArrayNum) &&
     ((local_88.ArrayNum == 0 ||
      (iVar9 = memcmp(local_88.AllocatorInstance.Data,local_58.Data.AllocatorInstance.Data,
                      (longlong)local_88.ArrayNum << 2), iVar9 == 0)))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (bVar13) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"Uniqued container with no duplicates must remain unchanged");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  uVar8 = _UNK_15071d2a8;
  uVar7 = ___xmm_00000003000000030000000300000002;
  uVar5 = _UNK_15071d298;
  pFVar4 = ___xmm_00000002000000020000000100000001;
  local_38 = 3;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,9,0,&local_88.AllocatorInstance,9,&local_88.ArrayMax);
  uVar6 = _UNK_15071d298;
  local_58.Data.AllocatorInstance.Data = pFVar4;
  _UNK_15071d298 = (int)uVar5;
  _UNK_15071d29c = SUB84(uVar5,4);
  local_58.Data.ArrayNum = _UNK_15071d298;
  local_58.Data.ArrayMax = _UNK_15071d29c;
  _UNK_15071d298 = uVar6;
  *(FScriptContainerElement **)local_88.AllocatorInstance.Data = pFVar4;
  *(undefined8 *)(local_88.AllocatorInstance.Data + 8) = uVar5;
  *(undefined8 *)(local_88.AllocatorInstance.Data + 0x10) = uVar7;
  *(undefined8 *)(local_88.AllocatorInstance.Data + 0x18) = uVar8;
  *(int *)(local_88.AllocatorInstance.Data + 0x20) = local_38;
  local_48 = (undefined1 *)uVar7;
  uStack_40 = uVar8;
  iVar9 = local_88.ArrayNum;
  if (1 < local_88.ArrayNum) {
    FVar12.Data = local_88.AllocatorInstance.Data;
    FVar3.Data = local_88.AllocatorInstance.Data;
    while (FVar3.Data = FVar3.Data + 4,
          FVar3.Data != local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 4) {
      if ((*(int *)FVar12.Data != *(int *)FVar3.Data) &&
         (FVar12.Data = FVar12.Data + 4, FVar12.Data != FVar3.Data)) {
        *(int *)FVar12.Data = *(int *)FVar3.Data;
      }
    }
    iVar9 = (int)((longlong)(FVar12.Data + (4 - (longlong)local_88.AllocatorInstance.Data)) >> 2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_88,iVar9,Default);
  local_68 = 1;
  uStack_64 = 2;
  local_60 = 3;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,(ForAnyElementType *)&local_58,3,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_64,local_68);
  *(int *)(local_58.Data.AllocatorInstance.Data + 8) = local_60;
  if ((local_88.ArrayNum == local_58.Data.ArrayNum) &&
     ((local_88.ArrayNum == 0 ||
      (iVar9 = memcmp(local_88.AllocatorInstance.Data,local_58.Data.AllocatorInstance.Data,
                      (longlong)local_88.ArrayNum << 2), iVar9 == 0)))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (bVar13) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,L"`Unique` with multiple duplicates must return correct result");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  uVar5 = _UNK_150631e18;
  pFVar4 = ___xmm_00000003000000020000000100000001;
  local_48 = &DAT_300000003;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_88.AllocatorInstance,6,&local_88.ArrayMax);
  uVar6 = _UNK_150631e18;
  local_58.Data.AllocatorInstance.Data = pFVar4;
  _UNK_150631e18 = (int)uVar5;
  _UNK_150631e1c = SUB84(uVar5,4);
  local_58.Data.ArrayNum = _UNK_150631e18;
  local_58.Data.ArrayMax = _UNK_150631e1c;
  _UNK_150631e18 = uVar6;
  *(FScriptContainerElement **)local_88.AllocatorInstance.Data = pFVar4;
  *(undefined8 *)(local_88.AllocatorInstance.Data + 8) = uVar5;
  *(undefined1 **)(local_88.AllocatorInstance.Data + 0x10) = local_48;
  iVar9 = local_88.ArrayNum;
  if (1 < local_88.ArrayNum) {
    FVar12.Data = local_88.AllocatorInstance.Data;
    FVar3.Data = local_88.AllocatorInstance.Data;
    while (FVar3.Data = FVar3.Data + 4,
          FVar3.Data != local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 4) {
      if ((*(int *)FVar12.Data != *(int *)FVar3.Data) &&
         (FVar12.Data = FVar12.Data + 4, FVar12.Data != FVar3.Data)) {
        *(int *)FVar12.Data = *(int *)FVar3.Data;
      }
    }
    iVar9 = (int)((longlong)(FVar12.Data + (4 - (longlong)local_88.AllocatorInstance.Data)) >> 2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_88,iVar9,Default);
  local_68 = 1;
  uStack_64 = 2;
  local_60 = 3;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,(ForAnyElementType *)&local_58,3,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_64,local_68);
  *(int *)(local_58.Data.AllocatorInstance.Data + 8) = local_60;
  if ((local_88.ArrayNum == local_58.Data.ArrayNum) &&
     ((local_88.ArrayNum == 0 ||
      (iVar9 = memcmp(local_88.AllocatorInstance.Data,local_58.Data.AllocatorInstance.Data,
                      (longlong)local_88.ArrayNum << 2), iVar9 == 0)))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (bVar13) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,
                       L"`Unique` with duplicates and unique items must return correct result");
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"aa");
  iVar9 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  if (1 < iVar9) {
    FVar12.Data = local_78.Data.AllocatorInstance.Data;
    FVar3.Data = local_78.Data.AllocatorInstance.Data;
    while (FVar3.Data = FVar3.Data + 2,
          FVar3.Data != local_78.Data.AllocatorInstance.Data + (longlong)iVar9 * 2) {
      if ((*(short *)FVar12.Data != *(short *)FVar3.Data) &&
         (FVar12.Data = FVar12.Data + 2, FVar12.Data != FVar3.Data)) {
        *(short *)FVar12.Data = *(short *)FVar3.Data;
      }
    }
    iVar9 = (int)((longlong)(FVar12.Data + (2 - (longlong)local_78.Data.AllocatorInstance.Data)) >>
                 1);
  }
  pFVar11 = ::FString::Mid(&local_78,&local_58,0,iVar9);
  if (&local_78 != pFVar11) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (pFVar11->Data).ArrayNum;
    local_78.Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar11 = ::FString::FString(&local_58,L"a");
  iVar9 = (pFVar11->Data).ArrayNum;
  if (local_78.Data.ArrayNum == iVar9) {
    if (local_78.Data.ArrayNum < 2) {
      bVar13 = false;
    }
    else {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_78.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
      bVar13 = iVar9 != 0;
    }
  }
  else {
    bVar13 = local_78.Data.ArrayNum + iVar9 != 1;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_58,
                       L"`Unique` on `FString` as an example of arbitrary random-access container must compile and return correct result"
                      );
    (*pcVar2)(pFVar1,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_68 = 1;
  uStack_64 = 1;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,(ForAnyElementType *)&local_58,2,&local_58.Data.ArrayMax);
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_64,local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

