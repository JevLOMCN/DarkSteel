// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acf730

EAutomationTestFlags __thiscall
FBitArrayCountSetBitsTest::GetTestFlags(FBitArrayCountSetBitsTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acf740

bool __thiscall FBitArrayCountSetBitsTest::IsStressTest(FBitArrayCountSetBitsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acf7a0

uint __thiscall FBitArrayCountSetBitsTest::GetRequiredDeviceNum(FBitArrayCountSetBitsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acf7b0

FString * __thiscall
FBitArrayCountSetBitsTest::GetTestSourceFileName
          (FBitArrayCountSetBitsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acf7e0

int __thiscall FBitArrayCountSetBitsTest::GetTestSourceFileLine(FBitArrayCountSetBitsTest *this)

{
  return 0x69f;
}

// GetTests @ 141acf7f0

/* WARNING: Removing unreachable block (ram,0x000141acf96e) */

void __thiscall
FBitArrayCountSetBitsTest::GetTests
          (FBitArrayCountSetBitsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141acf990

bool __thiscall FBitArrayCountSetBitsTest::RunTest(FBitArrayCountSetBitsTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141acf9c0

FString * __thiscall
FBitArrayCountSetBitsTest::GetBeautifiedTestName
          (FBitArrayCountSetBitsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayCountSetBitsTest @ 141b1a0d0

FBitArrayCountSetBitsTest * __thiscall
FBitArrayCountSetBitsTest::FBitArrayCountSetBitsTest
          (FBitArrayCountSetBitsTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayCountSetBitsTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::CountSetBits");
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

// TestBody @ 141b60780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBitArrayCountSetBitsTest::TestBody(FBitArrayCountSetBitsTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined **ppuVar15;
  code *pcVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_268 [32];
  uint local_248;
  int local_240;
  int local_238;
  undefined **local_228;
  FString local_220;
  FString local_210;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  char *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  char *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  char *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  char *local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  char *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [8];
  undefined *local_118;
  undefined4 local_110;
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined4 local_90;
  char *local_88;
  undefined4 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_100 = 2;
  local_110 = 0;
  local_118 = &s_0;
  ppuVar15 = &local_118;
  local_f0 = 2;
  local_108 = "10010";
  local_e0 = 0;
  local_f8 = "100001";
  local_d0 = 1;
  local_e8 = "00000000";
  local_d8 = "10000000";
  local_c8 = "00000001";
  local_b8 = "00000000 1";
  local_a8 = "00000000 0";
  local_98 = "10000001 1";
  local_88 = "01011101 11101000 10000001 00101100";
  local_c0 = 1;
  local_b0 = 1;
  local_a0 = 0;
  local_90 = 3;
  local_80 = 0xe;
  do {
    uVar8 = 0;
    local_228 = ppuVar15;
    UE::BitArrayTest::ConstructBitArray(&local_78,*ppuVar15,0x7fffffff);
    uVar17 = 0;
    FVar9 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_78.AllocatorInstance.SecondaryData;
    }
    iVar3 = (int)(local_78.NumBits + 0x1fU + ((int)(local_78.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5
    ;
    uVar12 = local_78.NumBits & 0x8000001f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
    }
    uVar10 = 0xffffffff >> ((byte)(0x20 - uVar12) & 0x1f);
    if (0x1f < (int)(0x20 - uVar12)) {
      uVar10 = 0xffffffff;
    }
    uVar12 = 0xffffffff;
    if (iVar3 == 1) {
      uVar12 = uVar10;
    }
    uVar7 = uVar8;
    uVar19 = uVar8;
    if (0 < iVar3) {
      do {
        uVar17 = *(uint *)((longlong)FVar9 + uVar7 * 4);
        uVar11 = uVar17 & uVar12;
        if (uVar12 == 0xffffffff) {
          uVar11 = uVar17;
        }
        uVar14 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar11 - ((ulonglong)(uVar11 >> 1) & 0x5555555555555555);
        uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
        uVar17 = (int)uVar19 +
                 (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                             );
        uVar12 = 0xffffffff;
        if (uVar14 == iVar3 - 1U) {
          uVar12 = uVar10;
        }
        uVar7 = (ulonglong)uVar14;
        ppuVar15 = local_228;
        uVar19 = (ulonglong)uVar17;
      } while ((int)uVar14 < iVar3);
    }
    if (uVar17 != *(uint *)(ppuVar15 + 1)) {
      pFVar6 = FAutomationTestFramework::Get();
      uVar12 = 1;
      pFVar2 = pFVar6->CurrentTest;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      local_228 = *(undefined ***)(pFVar2->_padding_ + 0x28);
      uVar7 = uVar8;
      if (0 < local_78.NumBits) {
        do {
          uVar11 = (uint)uVar7;
          uVar10 = (uint)uVar8;
          if (uVar10 != 0) {
            uVar14 = uVar10 & 0x80000007;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
            }
            if (uVar14 == 0) {
              ::FString::AppendChar(&local_220,L' ');
            }
          }
          FVar9 = (ForElementType<unsigned_int>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar9 = local_78.AllocatorInstance.SecondaryData;
          }
          ::FString::AppendChar
                    (&local_220,
                     (ushort)((*(uint *)((longlong)FVar9 + (longlong)(int)uVar11 * 4) & uVar12) != 0
                             ) + L'0');
          uVar14 = uVar12 * 2;
          uVar8 = (ulonglong)(uVar10 + 1);
          uVar4 = uVar11 + 1;
          if (uVar14 != 0) {
            uVar4 = uVar11;
          }
          uVar12 = 1;
          if (uVar14 != 0) {
            uVar12 = uVar14;
          }
          uVar7 = (ulonglong)uVar4;
        } while ((int)(uVar10 + 1) < local_78.NumBits);
      }
      local_248 = uVar17;
      ::FString::PrintfImpl
                (&local_210,
                 L"CountSetBits: Unexpected number of set bits for array %s. Expected: %i, Actual: %i"
                );
      (*(code *)local_228)(pFVar2,&local_210,0);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
    ppuVar15 = ppuVar15 + 2;
  } while ((TBitArray<FDefaultBitArrayAllocator> *)ppuVar15 != &local_78);
  local_1f0 = 0;
  local_1f8 = &s_0;
  pcVar16 = (code *)&local_1f0;
  local_1e0 = &s_0;
  local_1c8 = "10000000";
  local_1b0 = "00000001";
  local_198 = "00000000 1";
  local_180 = "01011101 11101000 10000001 00101100";
  local_168 = "01011101 11101000 10000001 00101100";
  local_150 = "01011101 11101000 10000001 00101100";
  local_138 = "01011101 11101000 10000001 00101100";
  local_1ec = 1;
  local_1d8 = 0;
  local_1d4 = 1;
  local_1c0 = 1;
  local_1bc = 8;
  local_1a8 = 1;
  local_1a4 = 8;
  local_1a0 = 1;
  local_190 = 8;
  local_18c = 9;
  local_188 = 1;
  local_178 = 0x18;
  local_174 = 0x20;
  local_170 = 3;
  local_160 = 8;
  local_15c = 0x18;
  local_158 = 6;
  local_148 = 0xc;
  local_144 = 0x12;
  local_140 = 2;
  local_130 = 4;
  local_12c = 0x1e;
  local_128 = 0xc;
  do {
    local_228 = (undefined **)pcVar16;
    UE::BitArrayTest::ConstructBitArray(&local_58,*(char **)(pcVar16 + -8),0x7fffffff);
    iVar3 = 0;
    iVar18 = 0;
    uVar17 = *(uint *)(pcVar16 + 4);
    if (*(uint *)(pcVar16 + 4) == 0xffffffff) {
      uVar17 = local_58.NumBits;
    }
    FVar9 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar9 = local_58.AllocatorInstance.SecondaryData;
    }
    uVar12 = *(int *)pcVar16 >> 0x1f & 0x1f;
    iVar5 = *(int *)pcVar16 + uVar12;
    iVar13 = iVar5 >> 5;
    uVar12 = -1 << (((byte)iVar5 & 0x1f) - (char)uVar12 & 0x1f);
    iVar5 = (int)(((int)(uVar17 + 0x1f) >> 0x1f & 0x1fU) + uVar17 + 0x1f) >> 5;
    uVar17 = uVar17 & 0x8000001f;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
    }
    iVar1 = iVar5 + -1;
    uVar10 = 0xffffffff >> ((byte)(0x20 - uVar17) & 0x1f);
    if (0x1f < (int)(0x20 - uVar17)) {
      uVar10 = 0xffffffff;
    }
    uVar11 = uVar10 & uVar12;
    uVar17 = uVar11;
    if (iVar13 != iVar1) {
      uVar17 = uVar10;
    }
    ppuVar15 = (undefined **)pcVar16;
    if (iVar13 < iVar5) {
      if (iVar13 != iVar1) {
        uVar11 = uVar12;
      }
      do {
        uVar12 = *(uint *)((longlong)FVar9 + (longlong)iVar13 * 4);
        uVar10 = uVar12 & uVar11;
        if (uVar11 == 0xffffffff) {
          uVar10 = uVar12;
        }
        iVar13 = iVar13 + 1;
        uVar8 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
        uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
        iVar18 = iVar3 + (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                     >> 0x38);
        uVar11 = 0xffffffff;
        if (iVar13 == iVar1) {
          uVar11 = uVar17;
        }
        ppuVar15 = local_228;
        iVar3 = iVar18;
      } while (iVar13 < iVar5);
    }
    iVar3 = *(int *)((longlong)ppuVar15 + 8);
    if (iVar18 != iVar3) {
      pFVar6 = FAutomationTestFramework::Get();
      uVar17 = 1;
      pFVar2 = pFVar6->CurrentTest;
      local_228 = *(undefined ***)(pFVar2->_padding_ + 0x28);
      uVar10 = 0;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      uVar12 = uVar10;
      if (0 < local_58.NumBits) {
        do {
          if (uVar10 != 0) {
            uVar11 = uVar10 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            if (uVar11 == 0) {
              ::FString::AppendChar(&local_220,L' ');
            }
          }
          FVar9 = (ForElementType<unsigned_int>)&local_58;
          if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar9 = local_58.AllocatorInstance.SecondaryData;
          }
          ::FString::AppendChar
                    (&local_220,
                     (ushort)((*(uint *)((longlong)FVar9 + (longlong)(int)uVar12 * 4) & uVar17) != 0
                             ) + L'0');
          uVar11 = uVar17 * 2;
          uVar10 = uVar10 + 1;
          uVar14 = uVar12 + 1;
          if (uVar11 != 0) {
            uVar14 = uVar12;
          }
          uVar17 = 1;
          if (uVar11 != 0) {
            uVar17 = uVar11;
          }
          uVar12 = uVar14;
        } while ((int)uVar10 < local_58.NumBits);
      }
      local_248 = *(uint *)((longlong)ppuVar15 + 4);
      local_240 = iVar3;
      local_238 = iVar18;
      ::FString::PrintfImpl
                (&local_210,
                 L"CountSetBits: Unexpected number of set bits for array %s between index %d and %d. Expected: %i, Actual: %i"
                );
      (*(code *)local_228)(pFVar2,&local_210,0);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
    pcVar16 = (code *)((longlong)ppuVar15 + 0x18);
  } while ((code *)((longlong)ppuVar15 + 0x10) != (code *)local_120);
  return;
}

