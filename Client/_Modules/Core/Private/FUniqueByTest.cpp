// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acfd00

EAutomationTestFlags __thiscall FUniqueByTest::GetTestFlags(FUniqueByTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acfd10

bool __thiscall FUniqueByTest::IsStressTest(FUniqueByTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acfd20

uint __thiscall FUniqueByTest::GetRequiredDeviceNum(FUniqueByTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acfd30

FString * __thiscall
FUniqueByTest::GetTestSourceFileName(FUniqueByTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Algo\\UniqueTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acfd60

int __thiscall FUniqueByTest::GetTestSourceFileLine(FUniqueByTest *this)

{
  return 0x36;
}

// GetTests @ 141acfd70

/* WARNING: Removing unreachable block (ram,0x000141acfeee) */

void __thiscall
FUniqueByTest::GetTests
          (FUniqueByTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141acff10

bool __thiscall FUniqueByTest::RunTest(FUniqueByTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acff40

FString * __thiscall
FUniqueByTest::GetBeautifiedTestName(FUniqueByTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FUniqueByTest @ 141b285e0

FUniqueByTest * __thiscall FUniqueByTest::FUniqueByTest(FUniqueByTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FUniqueByTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Algo::UniqueBy");
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

// TestBody @ 141ba3b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FUniqueByTest::TestBody(FUniqueByTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  TTuple<int,int> TVar4;
  TTuple<int,int> TVar5;
  TTuple<int,int> TVar6;
  TTuple<int,int> TVar7;
  TTuple<int,int> TVar8;
  TTuple<int,int> TVar9;
  TTuple<int,int> TVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  FAutomationTestFramework *pFVar14;
  FString *pFVar15;
  TTuple<int,int> *pTVar16;
  ForAnyElementType FVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_128 [32];
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  undefined1 local_c8 [12];
  int iStack_bc;
  TTuple<int,int> local_b8;
  TTuple<int,int> local_98;
  TTuple<int,int> TStack_90;
  TTuple<int,int> local_68;
  ulonglong local_58;
  
  TVar4 = _UNK_150631d58;
  TVar3 = ___xmm_00000000000000020000000000000001;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_b8 = (TTuple<int,int>)0x3;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,&local_e8.AllocatorInstance,3,&local_e8.ArrayMax);
  local_c8._0_8_ = TVar3;
  stack0xffffffffffffff40 = TVar4;
  *(TTuple<int,int> *)local_e8.AllocatorInstance.Data = TVar3;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 8) = TVar4;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x10) = local_b8;
  iVar13 = local_e8.ArrayNum;
  if (1 < local_e8.ArrayNum) {
    FVar18.Data = local_e8.AllocatorInstance.Data;
    FVar17.Data = local_e8.AllocatorInstance.Data;
    while (FVar17.Data = FVar17.Data + 8,
          (TTuple<int,int> *)FVar17.Data !=
          (TTuple<int,int> *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 8)) {
      if ((*(int *)FVar18.Data != *(int *)FVar17.Data) &&
         (FVar18.Data = FVar18.Data + 8, FVar18.Data != FVar17.Data)) {
        *(TTuple<int,int> *)FVar18.Data = *(TTuple<int,int> *)FVar17.Data;
      }
    }
    iVar13 = (int)((longlong)FVar18.Data + (8 - (longlong)local_e8.AllocatorInstance.Data) >> 3);
  }
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>::SetNum(&local_e8,iVar13,Default);
  TVar4 = _UNK_150631d58;
  TVar3 = ___xmm_00000000000000020000000000000001;
  local_98 = (TTuple<int,int>)0x3;
  local_c8._0_8_ = (TTuple<int,int> *)0x0;
  local_c8._8_4_ = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,(ForAnyElementType *)local_c8,3,&iStack_bc);
  uVar11 = local_c8._0_8_;
  *(TTuple<int,int> *)local_c8._0_8_ = TVar3;
  *(TTuple<int,int> *)(local_c8._0_8_ + 8) = TVar4;
  *(TTuple<int,int> *)(local_c8._0_8_ + 0x10) = local_98;
  if ((local_e8.ArrayNum == local_c8._8_4_) &&
     (bVar12 = CompareItems<TTuple<int,int>,int>
                         ((TTuple<int,int> *)local_e8.AllocatorInstance.Data,
                          (TTuple<int,int> *)local_c8._0_8_,local_e8.ArrayNum), bVar12)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((TTuple<int,int> *)uVar11 != (TTuple<int,int> *)0x0) {
    FMemory::Free((void *)uVar11);
  }
  if (bVar12) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_c8,L"`UniqueBy` with no duplicates must remain unchanged");
    (*pcVar2)(pFVar1,local_c8,0);
    if ((TTuple<int,int> *)local_c8._0_8_ != (TTuple<int,int> *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  if ((TTuple<int,int> *)local_e8.AllocatorInstance.Data != (TTuple<int,int> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  TVar10 = _UNK_15071d258;
  TVar9 = ___xmm_00000000000000030000000000000003;
  TVar8 = _UNK_15071d248;
  TVar7 = ___xmm_00000000000000030000000000000002;
  TVar6 = _UNK_15071d238;
  TVar5 = ___xmm_00000000000000020000000000000002;
  TVar4 = _UNK_15071d228;
  TVar3 = ___xmm_00000000000000010000000000000001;
  local_68 = (TTuple<int,int>)0x3;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,9,0,&local_e8.AllocatorInstance,9,&local_e8.ArrayMax);
  local_98 = TVar5;
  TStack_90 = TVar6;
  *(TTuple<int,int> *)local_e8.AllocatorInstance.Data = TVar3;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 8) = TVar4;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x10) = TVar5;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x18) = TVar6;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x20) = TVar7;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x28) = TVar8;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x30) = TVar9;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x38) = TVar10;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x40) = local_68;
  iVar13 = local_e8.ArrayNum;
  if (1 < local_e8.ArrayNum) {
    FVar17.Data = local_e8.AllocatorInstance.Data;
    for (pTVar16 = (TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 8);
        pTVar16 !=
        (TTuple<int,int> *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 8);
        pTVar16 = pTVar16 + 1) {
      if ((*(int *)FVar17.Data != *(int *)pTVar16) &&
         (FVar17.Data = FVar17.Data + 8, (TTuple<int,int> *)FVar17.Data != pTVar16)) {
        *(TTuple<int,int> *)FVar17.Data = *pTVar16;
      }
    }
    iVar13 = (int)((longlong)FVar17.Data + (8 - (longlong)local_e8.AllocatorInstance.Data) >> 3);
  }
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>::SetNum(&local_e8,iVar13,Default);
  TVar4 = _UNK_150631d58;
  TVar3 = ___xmm_00000000000000020000000000000001;
  local_98 = (TTuple<int,int>)0x3;
  local_c8._0_8_ = (TTuple<int,int> *)0x0;
  local_c8._8_4_ = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,(ForAnyElementType *)local_c8,3,&iStack_bc);
  uVar11 = local_c8._0_8_;
  *(TTuple<int,int> *)local_c8._0_8_ = TVar3;
  *(TTuple<int,int> *)(local_c8._0_8_ + 8) = TVar4;
  *(TTuple<int,int> *)(local_c8._0_8_ + 0x10) = local_98;
  if ((local_e8.ArrayNum == local_c8._8_4_) &&
     (bVar12 = CompareItems<TTuple<int,int>,int>
                         ((TTuple<int,int> *)local_e8.AllocatorInstance.Data,
                          (TTuple<int,int> *)local_c8._0_8_,local_e8.ArrayNum), bVar12)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((TTuple<int,int> *)uVar11 != (TTuple<int,int> *)0x0) {
    FMemory::Free((void *)uVar11);
  }
  if (bVar12) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_c8,
                       L"`UniqueBy` with multiple duplicates must return correct result");
    (*pcVar2)(pFVar1,local_c8,0);
    if ((TTuple<int,int> *)local_c8._0_8_ != (TTuple<int,int> *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  if ((TTuple<int,int> *)local_e8.AllocatorInstance.Data != (TTuple<int,int> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  TVar8 = _UNK_15071d258;
  TVar7 = ___xmm_00000000000000030000000000000003;
  TVar6 = _UNK_15071d248;
  TVar5 = ___xmm_00000000000000030000000000000002;
  TVar4 = _UNK_15071d228;
  TVar3 = ___xmm_00000000000000010000000000000001;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,6,0,&local_e8.AllocatorInstance,6,&local_e8.ArrayMax);
  local_98 = TVar5;
  TStack_90 = TVar6;
  *(TTuple<int,int> *)local_e8.AllocatorInstance.Data = TVar3;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 8) = TVar4;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x10) = TVar5;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x18) = TVar6;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x20) = TVar7;
  *(TTuple<int,int> *)(local_e8.AllocatorInstance.Data + 0x28) = TVar8;
  iVar13 = local_e8.ArrayNum;
  if (1 < local_e8.ArrayNum) {
    FVar18.Data = local_e8.AllocatorInstance.Data;
    FVar17.Data = local_e8.AllocatorInstance.Data;
    while (FVar17.Data = FVar17.Data + 8,
          (TTuple<int,int> *)FVar17.Data !=
          (TTuple<int,int> *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 8)) {
      if ((*(int *)FVar18.Data != *(int *)FVar17.Data) &&
         (FVar18.Data = FVar18.Data + 8, FVar18.Data != FVar17.Data)) {
        *(TTuple<int,int> *)FVar18.Data = *(TTuple<int,int> *)FVar17.Data;
      }
    }
    iVar13 = (int)((longlong)FVar18.Data + (8 - (longlong)local_e8.AllocatorInstance.Data) >> 3);
  }
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>::SetNum(&local_e8,iVar13,Default);
  TVar4 = _UNK_150631d58;
  TVar3 = ___xmm_00000000000000020000000000000001;
  local_98 = (TTuple<int,int>)0x3;
  local_c8._0_8_ = (TTuple<int,int> *)0x0;
  local_c8._8_4_ = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,(ForAnyElementType *)local_c8,3,&iStack_bc);
  uVar11 = local_c8._0_8_;
  *(TTuple<int,int> *)local_c8._0_8_ = TVar3;
  *(TTuple<int,int> *)(local_c8._0_8_ + 8) = TVar4;
  *(TTuple<int,int> *)(local_c8._0_8_ + 0x10) = local_98;
  if ((local_e8.ArrayNum == local_c8._8_4_) &&
     (bVar12 = CompareItems<TTuple<int,int>,int>
                         ((TTuple<int,int> *)local_e8.AllocatorInstance.Data,
                          (TTuple<int,int> *)local_c8._0_8_,local_e8.ArrayNum), bVar12)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((TTuple<int,int> *)uVar11 != (TTuple<int,int> *)0x0) {
    FMemory::Free((void *)uVar11);
  }
  if (bVar12) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_c8,
                       L"`UniqueBy` with duplicates and unique items must return correct result");
    (*pcVar2)(pFVar1,local_c8,0);
    if ((TTuple<int,int> *)local_c8._0_8_ != (TTuple<int,int> *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  if ((TTuple<int,int> *)local_e8.AllocatorInstance.Data != (TTuple<int,int> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8,L"aa");
  iVar13 = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  if (1 < iVar13) {
    FVar18.Data = local_d8.Data.AllocatorInstance.Data;
    FVar17.Data = local_d8.Data.AllocatorInstance.Data;
    while (FVar17.Data = FVar17.Data + 2,
          FVar17.Data != local_d8.Data.AllocatorInstance.Data + (longlong)iVar13 * 2) {
      if ((*(short *)FVar18.Data != *(short *)FVar17.Data) &&
         (FVar18.Data = FVar18.Data + 2, FVar18.Data != FVar17.Data)) {
        *(short *)FVar18.Data = *(short *)FVar17.Data;
      }
    }
    iVar13 = (int)((longlong)(FVar18.Data + (2 - (longlong)local_d8.Data.AllocatorInstance.Data)) >>
                  1);
  }
  pFVar15 = ::FString::Mid(&local_d8,(FString *)local_c8,0,iVar13);
  if (&local_d8 != pFVar15) {
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_d8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
    local_d8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
  }
  if ((TTuple<int,int> *)local_c8._0_8_ != (TTuple<int,int> *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  pFVar15 = ::FString::FString((FString *)local_c8,L"a");
  iVar13 = (pFVar15->Data).ArrayNum;
  if (local_d8.Data.ArrayNum == iVar13) {
    if (local_d8.Data.ArrayNum < 2) {
      bVar12 = false;
    }
    else {
      iVar13 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_d8.Data.AllocatorInstance.Data,
                          (wchar_t *)(pFVar15->Data).AllocatorInstance.Data);
      bVar12 = iVar13 != 0;
    }
  }
  else {
    bVar12 = local_d8.Data.ArrayNum + iVar13 != 1;
  }
  if ((TTuple<int,int> *)local_c8._0_8_ != (TTuple<int,int> *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  if (bVar12) {
    pFVar14 = FAutomationTestFramework::Get();
    pFVar1 = pFVar14->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_c8,
                       L"`UniqueBy` on `FString` as an example of arbitrary random-access container must compile and return correct result"
                      );
    (*pcVar2)(pFVar1,local_c8,0);
    if ((TTuple<int,int> *)local_c8._0_8_ != (TTuple<int,int> *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  TVar4 = _UNK_15071d228;
  TVar3 = ___xmm_00000000000000010000000000000001;
  local_c8._0_8_ = (TTuple<int,int> *)0x0;
  local_c8._8_4_ = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,(ForAnyElementType *)local_c8,2,&iStack_bc);
  *(TTuple<int,int> *)local_c8._0_8_ = TVar3;
  *(TTuple<int,int> *)(local_c8._0_8_ + 8) = TVar4;
  if ((TTuple<int,int> *)local_c8._0_8_ != (TTuple<int,int> *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

