// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad1300

EAutomationTestFlags __thiscall FBitArrayBitwiseNOTTest::GetTestFlags(FBitArrayBitwiseNOTTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad1310

bool __thiscall FBitArrayBitwiseNOTTest::IsStressTest(FBitArrayBitwiseNOTTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad1320

uint __thiscall FBitArrayBitwiseNOTTest::GetRequiredDeviceNum(FBitArrayBitwiseNOTTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad1330

FString * __thiscall
FBitArrayBitwiseNOTTest::GetTestSourceFileName
          (FBitArrayBitwiseNOTTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad1360

int __thiscall FBitArrayBitwiseNOTTest::GetTestSourceFileLine(FBitArrayBitwiseNOTTest *this)

{
  return 0x6d9;
}

// GetTests @ 141ad1370

/* WARNING: Removing unreachable block (ram,0x000141ad14ee) */

void __thiscall
FBitArrayBitwiseNOTTest::GetTests
          (FBitArrayBitwiseNOTTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad1510

bool __thiscall FBitArrayBitwiseNOTTest::RunTest(FBitArrayBitwiseNOTTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad1540

FString * __thiscall
FBitArrayBitwiseNOTTest::GetBeautifiedTestName
          (FBitArrayBitwiseNOTTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayBitwiseNOTTest @ 141b19b60

FBitArrayBitwiseNOTTest * __thiscall
FBitArrayBitwiseNOTTest::FBitArrayBitwiseNOTTest(FBitArrayBitwiseNOTTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayBitwiseNOTTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::BitwiseNOT");
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

// TestBody @ 141b5f5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayBitwiseNOTTest::TestBody(FBitArrayBitwiseNOTTest *this,FString *param_1)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> _Buf1;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  ForElementType<unsigned_int> _Buf2;
  ulonglong uVar12;
  uint uVar13;
  char **ppcVar14;
  undefined1 auStack_188 [32];
  FScriptContainerElement *local_168;
  FString local_158;
  FString local_148;
  char *local_138 [20];
  TBitArray<FDefaultBitArrayAllocator> local_98;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_138[0] = "0";
  ppcVar14 = local_138;
  local_138[1] = "1";
  local_138[2] = "10010";
  local_138[3] = "01101";
  local_138[4] = "100001";
  local_138[5] = "011110";
  local_138[6] = "00000000";
  local_138[7] = "11111111";
  local_138[8] = "10000000";
  local_138[9] = "01111111";
  local_138[10] = "00000001";
  local_138[0xb] = "11111110";
  local_138[0xc] = "00000000 1";
  local_138[0xd] = "11111111 0";
  local_138[0xe] = "00000000 0";
  local_138[0xf] = "11111111 1";
  local_138[0x10] = "10000001 1";
  local_138[0x11] = "01111110 0";
  local_138[0x12] = "01011101 11101000 10000001 001011";
  local_138[0x13] = "10100010 00010111 01111110 110100";
  do {
    uVar12 = 0;
    UE::BitArrayTest::ConstructBitArray(&local_58,*ppcVar14,0x7fffffff);
    UE::BitArrayTest::ConstructBitArray(&local_78,ppcVar14[1],0x7fffffff);
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.NumBits = 0;
    local_98.MaxBits = 0;
    iVar4 = local_58.NumBits;
    uVar8 = iVar4 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar8) {
      uVar11 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar11 = uVar8;
      }
      local_98._24_8_ = (ulonglong)uVar11 << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
      iVar4 = local_58.NumBits;
    }
    local_98.NumBits = iVar4;
    uVar8 = 0;
    if (iVar4 != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_58;
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_58.AllocatorInstance.SecondaryData;
      }
      FVar9 = (ForElementType<unsigned_int>)&local_98;
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_98.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar9,(void *)FVar10,(ulonglong)(iVar4 + 0x1fU >> 5) << 2);
      uVar8 = local_98.NumBits;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_98.AllocatorInstance.SecondaryData;
    }
    iVar4 = (int)(uVar8 + 0x1f + ((int)(uVar8 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    uVar11 = uVar8 & 0x8000001f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
    }
    uVar13 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
    if (0x1f < (int)(0x20 - uVar11)) {
      uVar13 = 0xffffffff;
    }
    uVar11 = 0xffffffff;
    if (iVar4 == 1) {
      uVar11 = uVar13;
    }
    if (0 < iVar4) {
      do {
        puVar1 = (uint *)((longlong)FVar10 + uVar12 * 4);
        uVar8 = *(uint *)((longlong)FVar10 + uVar12 * 4) & uVar11;
        if (uVar11 == 0xffffffff) {
          uVar8 = *puVar1;
        }
        uVar11 = ~uVar8 & uVar13;
        if ((uint)uVar12 != iVar4 - 1U) {
          uVar11 = ~uVar8;
        }
        uVar8 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar8;
        *puVar1 = uVar11;
        uVar11 = 0xffffffff;
        if (uVar8 == iVar4 - 1U) {
          uVar11 = uVar13;
        }
      } while ((int)uVar8 < iVar4);
      uVar8 = local_98.NumBits;
    }
    FVar9 = local_78.AllocatorInstance.SecondaryData;
    FVar10 = local_98.AllocatorInstance.SecondaryData;
    if (uVar8 == local_78.NumBits) {
      _Buf2 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Buf2 = local_78.AllocatorInstance.SecondaryData;
      }
      _Buf1 = (ForElementType<unsigned_int>)&local_98;
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Buf1 = local_98.AllocatorInstance.SecondaryData;
      }
      iVar4 = memcmp((void *)_Buf1,(void *)_Buf2,(ulonglong)(uVar8 + 0x1f >> 5) << 2);
      if (iVar4 != 0) goto LAB_141b5f855;
    }
    else {
LAB_141b5f855:
      pFVar7 = FAutomationTestFramework::Get();
      uVar8 = 1;
      pFVar2 = pFVar7->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      uVar13 = 0;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      uVar11 = uVar13;
      if (local_98.NumBits < 1) {
LAB_141b5f8fc:
        local_168 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        do {
          if (uVar13 != 0) {
            uVar5 = uVar13 & 0x80000007;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
            }
            if (uVar5 == 0) {
              ::FString::AppendChar(&local_158,L' ');
            }
          }
          FVar10 = (ForElementType<unsigned_int>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar10 = local_98.AllocatorInstance.SecondaryData;
          }
          ::FString::AppendChar
                    (&local_158,
                     (ushort)((*(uint *)((longlong)FVar10 + (longlong)(int)uVar11 * 4) & uVar8) != 0
                             ) + L'0');
          uVar5 = uVar8 * 2;
          uVar13 = uVar13 + 1;
          uVar6 = uVar11 + 1;
          if (uVar5 != 0) {
            uVar6 = uVar11;
          }
          uVar8 = 1;
          if (uVar5 != 0) {
            uVar8 = uVar5;
          }
          uVar11 = uVar6;
        } while ((int)uVar13 < local_98.NumBits);
        local_168 = local_158.Data.AllocatorInstance.Data;
        if (local_158.Data.ArrayNum == 0) goto LAB_141b5f8fc;
      }
      ::FString::PrintfImpl
                (&local_148,
                 L"Bitwise NOT: Unexpected result for source %hs. Expected: %hs, Actual: %s");
      (*pcVar3)(pFVar2,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      FVar10 = local_98.AllocatorInstance.SecondaryData;
      FVar9 = local_78.AllocatorInstance.SecondaryData;
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
        FVar10 = local_98.AllocatorInstance.SecondaryData;
        FVar9 = local_78.AllocatorInstance.SecondaryData;
      }
    }
    if (FVar10 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar10);
      FVar9 = local_78.AllocatorInstance.SecondaryData;
    }
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar9);
    }
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
    ppcVar14 = ppcVar14 + 2;
    if ((TBitArray<FDefaultBitArrayAllocator> *)ppcVar14 == &local_98) {
      return;
    }
  } while( true );
}

