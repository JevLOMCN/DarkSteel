// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acdd50

EAutomationTestFlags __thiscall FBitArrayTestFor::GetTestFlags(FBitArrayTestFor *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acdd60

bool __thiscall FBitArrayTestFor::IsStressTest(FBitArrayTestFor *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acdd70

uint __thiscall FBitArrayTestFor::GetRequiredDeviceNum(FBitArrayTestFor *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acdd80

FString * __thiscall
FBitArrayTestFor::GetTestSourceFileName(FBitArrayTestFor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acddb0

int __thiscall FBitArrayTestFor::GetTestSourceFileLine(FBitArrayTestFor *this)

{
  return 0x618;
}

// GetTests @ 141acddc0

/* WARNING: Removing unreachable block (ram,0x000141acdf3e) */

void __thiscall
FBitArrayTestFor::GetTests
          (FBitArrayTestFor *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141acdf60

bool __thiscall FBitArrayTestFor::RunTest(FBitArrayTestFor *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acdf90

FString * __thiscall
FBitArrayTestFor::GetBeautifiedTestName(FBitArrayTestFor *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayTestFor @ 141b1b380

FBitArrayTestFor * __thiscall
FBitArrayTestFor::FBitArrayTestFor(FBitArrayTestFor *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayTestFor__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::For");
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

// TestBody @ 141b65a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayTestFor::TestBody(FBitArrayTestFor *this,FString *param_1)

{
  uint *puVar1;
  byte bVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  FAutomationTestFramework *pFVar11;
  byte bVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  undefined1 auStack_98 [32];
  FString local_78;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  byte local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pbVar18 = local_40;
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
    bVar2 = *pbVar18;
    if (local_60.NumBits == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = (int)((local_60.NumBits + -1 >> 0x1f & 0x1fU) + local_60.NumBits + -1) >> 5;
    }
    uVar16 = local_60.NumBits >> 0x1f & 0x1f;
    iVar6 = local_60.NumBits + uVar16;
    bVar12 = ((byte)iVar6 & 0x1f) - (char)uVar16;
    iVar6 = iVar6 >> 5;
    if (iVar6 == iVar7) {
      local_60.NumBits = local_60.NumBits + 1;
    }
    else {
      if (local_60.MaxBits < local_60.NumBits + 1) {
        uVar16 = local_60.MaxBits + 0x1fU >> 5;
        uVar8 = local_60.NumBits + 0x20U >> 5;
        if (uVar8 < 5) {
          local_60.MaxBits = 4;
        }
        else {
          uVar13 = (ulonglong)uVar8;
          if (uVar16 < 5) {
            uVar16 = 0;
          }
          if (uVar16 == 0) {
            uVar17 = 4;
            if (4 < uVar13) {
              uVar17 = uVar13;
            }
          }
          else {
            uVar17 = ((ulonglong)uVar8 * 3 >> 3) + 0x10 + uVar13;
          }
          uVar10 = FMemory::QuantizeSize(uVar17 * 4,0);
          local_60.MaxBits = (int)(uVar10 >> 2);
          if (local_60.MaxBits < (int)uVar8) {
            local_60.MaxBits = 0x7fffffff;
          }
        }
        local_60.MaxBits = local_60.MaxBits << 5;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,local_60.NumBits);
      }
      local_60.NumBits = local_60.NumBits + 1;
      uVar8 = local_60.NumBits >> 0x1f & 0x1f;
      uVar16 = local_60.NumBits + uVar8;
      iVar7 = (uVar16 & 0x1f) - uVar8;
      if (iVar7 != 0) {
        FVar14 = (ForElementType<unsigned_int>)&local_60;
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_60.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uint *)((longlong)FVar14 + (longlong)((int)uVar16 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
    }
    FVar14 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_60.AllocatorInstance.SecondaryData;
    }
    pbVar18 = pbVar18 + 1;
    puVar1 = (uint *)((longlong)FVar14 + (longlong)iVar6 * 4);
    *puVar1 = ~(1 << (bVar12 & 0x1f)) & *puVar1 | (uint)bVar2 << (bVar12 & 0x1f);
  } while (pbVar18 != local_40 + 6);
  uVar16 = 1;
  iVar6 = local_60.NumBits >> 5;
  uVar8 = 1 << ((byte)local_60.NumBits & 0x1f);
  FVar14 = local_60.AllocatorInstance.SecondaryData;
  pbVar18 = local_40;
  local_78.Data.AllocatorInstance.Data._0_4_ = iVar6;
  local_78.Data.AllocatorInstance.Data._4_4_ = uVar8;
  iVar7 = 0;
  if (uVar8 != 1 || iVar6 != 0) {
    do {
      FVar15 = (ForElementType<unsigned_int>)&local_60;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = FVar14;
      }
      if (((*(uint *)((longlong)FVar15 + (longlong)iVar7 * 4) & uVar16) != 0) != (bool)*pbVar18) {
        pFVar11 = FAutomationTestFramework::Get();
        pFVar3 = pFVar11->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_78,L"Condition failed");
        (*pcVar4)(pFVar3,&local_78,0);
        FVar14 = local_60.AllocatorInstance.SecondaryData;
        if ((void *)CONCAT44(local_78.Data.AllocatorInstance.Data._4_4_,
                             (int)local_78.Data.AllocatorInstance.Data) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_78.Data.AllocatorInstance.Data._4_4_,
                                         (int)local_78.Data.AllocatorInstance.Data));
          FVar14 = local_60.AllocatorInstance.SecondaryData;
        }
      }
      uVar5 = uVar16 * 2;
      iVar9 = iVar7 + 1;
      if (uVar5 != 0) {
        iVar9 = iVar7;
      }
      uVar16 = 1;
      if (uVar5 != 0) {
        uVar16 = uVar5;
      }
      pbVar18 = pbVar18 + 1;
      iVar7 = iVar9;
    } while (iVar6 != iVar9 || uVar8 != uVar16);
  }
  if (FVar14 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar14);
  }
  return;
}

