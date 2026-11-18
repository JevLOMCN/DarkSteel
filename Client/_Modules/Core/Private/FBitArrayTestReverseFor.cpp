// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ace8c0

EAutomationTestFlags __thiscall FBitArrayTestReverseFor::GetTestFlags(FBitArrayTestReverseFor *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ace8d0

bool __thiscall FBitArrayTestReverseFor::IsStressTest(FBitArrayTestReverseFor *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acea80

uint __thiscall FBitArrayTestReverseFor::GetRequiredDeviceNum(FBitArrayTestReverseFor *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acea90

FString * __thiscall
FBitArrayTestReverseFor::GetTestSourceFileName
          (FBitArrayTestReverseFor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141aceac0

int __thiscall FBitArrayTestReverseFor::GetTestSourceFileLine(FBitArrayTestReverseFor *this)

{
  return 0x629;
}

// GetTests @ 141aceb30

/* WARNING: Removing unreachable block (ram,0x000141acecae) */

void __thiscall
FBitArrayTestReverseFor::GetTests
          (FBitArrayTestReverseFor *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141acecd0

bool __thiscall FBitArrayTestReverseFor::RunTest(FBitArrayTestReverseFor *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141aced00

FString * __thiscall
FBitArrayTestReverseFor::GetBeautifiedTestName
          (FBitArrayTestReverseFor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayTestReverseFor @ 141b1b720

FBitArrayTestReverseFor * __thiscall
FBitArrayTestReverseFor::FBitArrayTestReverseFor(FBitArrayTestReverseFor *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayTestReverseFor__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::ReverseFor");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// TestBody @ 141b66030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTestReverseFor::TestBody(FBitArrayTestReverseFor *this,FString *param_1)

{
  uint *puVar1;
  byte bVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  ulong64 uVar7;
  FAutomationTestFramework *pFVar8;
  byte bVar9;
  ulonglong uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  undefined1 auStack_98 [32];
  FString local_78;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  byte local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pbVar16 = local_40;
  local_40[0] = 1;
  local_40[1] = 0;
  local_40[2] = 1;
  local_40[3] = 1;
  local_60.NumBits = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.MaxBits = 0x80;
  do {
    bVar2 = *pbVar16;
    if (local_60.NumBits == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = (int)((local_60.NumBits + -1 >> 0x1f & 0x1fU) + local_60.NumBits + -1) >> 5;
    }
    uVar12 = local_60.NumBits >> 0x1f & 0x1f;
    iVar6 = local_60.NumBits + uVar12;
    bVar9 = ((byte)iVar6 & 0x1f) - (char)uVar12;
    iVar6 = iVar6 >> 5;
    if (iVar6 == iVar15) {
      local_60.NumBits = local_60.NumBits + 1;
    }
    else {
      if (local_60.MaxBits < local_60.NumBits + 1) {
        uVar12 = local_60.MaxBits + 0x1fU >> 5;
        uVar17 = local_60.NumBits + 0x20U >> 5;
        if (uVar17 < 5) {
          local_60.MaxBits = 4;
        }
        else {
          uVar10 = (ulonglong)uVar17;
          if (uVar12 < 5) {
            uVar12 = 0;
          }
          if (uVar12 == 0) {
            uVar13 = 4;
            if (4 < uVar10) {
              uVar13 = uVar10;
            }
          }
          else {
            uVar13 = ((ulonglong)uVar17 * 3 >> 3) + 0x10 + uVar10;
          }
          uVar7 = FMemory::QuantizeSize(uVar13 * 4,0);
          local_60.MaxBits = (int)(uVar7 >> 2);
          if (local_60.MaxBits < (int)uVar17) {
            local_60.MaxBits = 0x7fffffff;
          }
        }
        local_60.MaxBits = local_60.MaxBits << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,local_60.NumBits);
      }
      local_60.NumBits = local_60.NumBits + 1;
      uVar17 = local_60.NumBits >> 0x1f & 0x1f;
      uVar12 = local_60.NumBits + uVar17;
      iVar15 = (uVar12 & 0x1f) - uVar17;
      if (iVar15 != 0) {
        FVar11 = (ForElementType<unsigned_int>)&local_60;
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_60.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uint *)((longlong)FVar11 + (longlong)((int)uVar12 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar15 & 0x1f);
      }
    }
    FVar11 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_60.AllocatorInstance.SecondaryData;
    }
    pbVar16 = pbVar16 + 1;
    puVar1 = (uint *)((longlong)FVar11 + (longlong)iVar6 * 4);
    *puVar1 = ~(1 << (bVar9 & 0x1f)) & *puVar1 | (uint)bVar2 << (bVar9 & 0x1f);
  } while (pbVar16 != local_40 + 6);
  uVar12 = 1 << ((byte)(local_60.NumBits + -1) & 0x1f);
  iVar15 = local_60.NumBits + -1 >> 5;
  local_78.Data.AllocatorInstance.Data._0_4_ = 0xffffffff;
  uVar10 = 0;
  local_78.Data.AllocatorInstance.Data._4_4_ = 0x80000000;
  FVar11 = local_60.AllocatorInstance.SecondaryData;
  if (iVar15 != -1 || uVar12 != 0x80000000) {
    do {
      FVar14 = (ForElementType<unsigned_int>)&local_60;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar11;
      }
      lVar5 = 5 - uVar10;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      if (((*(uint *)((longlong)FVar14 + (longlong)iVar15 * 4) & uVar12) != 0) !=
          (bool)local_40[lVar5]) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar3 = pFVar8->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_78,L"Condition failed");
        (*pcVar4)(pFVar3,&local_78,0);
        FVar11 = local_60.AllocatorInstance.SecondaryData;
        if ((void *)CONCAT44(local_78.Data.AllocatorInstance.Data._4_4_,
                             local_78.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_78.Data.AllocatorInstance.Data._4_4_,
                                         local_78.Data.AllocatorInstance.Data._0_4_));
          FVar11 = local_60.AllocatorInstance.SecondaryData;
        }
      }
      uVar17 = uVar12 >> 1;
      if (uVar17 == 0) {
        uVar17 = 0x80000000;
      }
      iVar6 = iVar15 + -1;
      if (uVar12 >> 1 != 0) {
        iVar6 = iVar15;
      }
      iVar15 = iVar6;
      uVar12 = uVar17;
    } while (iVar15 != -1 || uVar17 != 0x80000000);
  }
  if (FVar11 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  return;
}

