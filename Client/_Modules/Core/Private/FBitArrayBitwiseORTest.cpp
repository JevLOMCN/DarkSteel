// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141add8d0

EAutomationTestFlags __thiscall FBitArrayBitwiseORTest::GetTestFlags(FBitArrayBitwiseORTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141add8e0

bool __thiscall FBitArrayBitwiseORTest::IsStressTest(FBitArrayBitwiseORTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141add8f0

uint __thiscall FBitArrayBitwiseORTest::GetRequiredDeviceNum(FBitArrayBitwiseORTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141add900

FString * __thiscall
FBitArrayBitwiseORTest::GetTestSourceFileName
          (FBitArrayBitwiseORTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141add930

int __thiscall FBitArrayBitwiseORTest::GetTestSourceFileLine(FBitArrayBitwiseORTest *this)

{
  return 0x7b1;
}

// GetTests @ 141add940

/* WARNING: Removing unreachable block (ram,0x000141addabe) */

void __thiscall
FBitArrayBitwiseORTest::GetTests
          (FBitArrayBitwiseORTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141addae0

bool __thiscall FBitArrayBitwiseORTest::RunTest(FBitArrayBitwiseORTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141addb10

FString * __thiscall
FBitArrayBitwiseORTest::GetBeautifiedTestName
          (FBitArrayBitwiseORTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayBitwiseORTest @ 141b19d30

FBitArrayBitwiseORTest * __thiscall
FBitArrayBitwiseORTest::FBitArrayBitwiseORTest(FBitArrayBitwiseORTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayBitwiseORTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::BitwiseOR");
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

// TestBody @ 141b5f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayBitwiseORTest::TestBody(FBitArrayBitwiseORTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FAutomationTestFramework *pFVar6;
  ForElementType<unsigned_int> FVar7;
  ForElementType<unsigned_int> _Buf1;
  ForElementType<unsigned_int> FVar8;
  ForElementType<unsigned_int> _Buf2;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined **ppuVar12;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1d8 [8];
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_160 = &s_1;
  local_158 = &s_1;
  ppuVar12 = &local_168;
  local_150 = &s_1;
  local_148 = &s_1;
  local_140 = &s_1;
  local_120 = "00011100";
  local_118 = "11111111";
  local_110 = "11111111";
  local_108 = "11111111 001110";
  local_f8 = "11111111 001111";
  local_f0 = "11111111 00111011 111";
  local_168 = &s_0;
  local_138 = &s_0;
  local_130 = &s_0;
  local_128 = &s_0;
  local_e0 = "11111111 001111 11111";
  local_100 = "10000100 001111";
  local_e8 = "10000100 001111";
  do {
    uVar9 = 0;
    UE::BitArrayTest::ConstructBitArray(&local_78,*ppuVar12,0x7fffffff);
    UE::BitArrayTest::ConstructBitArray(&local_58,ppuVar12[1],0x7fffffff);
    UE::BitArrayTest::ConstructBitArray(&local_b8,ppuVar12[2],0x7fffffff);
    local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_d8.NumBits = 0;
    local_d8.MaxBits = 0x80;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              (&local_78,&local_58,&local_d8,MaxSize,local_1d8);
    if (local_d8.NumBits == local_b8.NumBits) {
      FVar8 = (ForElementType<unsigned_int>)&local_b8;
      if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar8 = local_b8.AllocatorInstance.SecondaryData;
      }
      FVar7 = (ForElementType<unsigned_int>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_d8.AllocatorInstance.SecondaryData;
      }
      iVar3 = memcmp((void *)FVar7,(void *)FVar8,(ulonglong)(local_d8.NumBits + 0x1fU >> 5) << 2);
      if (iVar3 != 0) goto LAB_141b5fb4a;
    }
    else {
LAB_141b5fb4a:
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = 1;
      local_1d0.Data.ArrayNum = 0;
      local_1d0.Data.ArrayMax = 0;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      uVar10 = uVar9;
      if (0 < local_d8.NumBits) {
        do {
          if (uVar9 != 0) {
            uVar4 = uVar9 & 0x80000007;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
            }
            if (uVar4 == 0) {
              ::FString::AppendChar(&local_1d0,L' ');
            }
          }
          FVar8 = (ForElementType<unsigned_int>)&local_d8;
          if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_d8.AllocatorInstance.SecondaryData;
          }
          ::FString::AppendChar
                    (&local_1d0,
                     (ushort)((*(uint *)((longlong)FVar8 + (longlong)(int)uVar10 * 4) & uVar11) != 0
                             ) + L'0');
          uVar4 = uVar11 * 2;
          uVar9 = uVar9 + 1;
          uVar5 = uVar10 + 1;
          if (uVar4 != 0) {
            uVar5 = uVar10;
          }
          uVar11 = 1;
          if (uVar4 != 0) {
            uVar11 = uVar4;
          }
          uVar10 = uVar5;
        } while ((int)uVar9 < local_d8.NumBits);
      }
      ::FString::PrintfImpl
                (&local_1a0,
                 L"BitwiseOR: Unexpected result for source %hs | %hs. Expected: %hs, Actual: %s");
      (*pcVar2)(pFVar1,&local_1a0,0);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
    }
    uVar9 = 0;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.NumBits = 0;
    local_98.MaxBits = 0x80;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              (&local_58,&local_78,&local_98,MaxSize,local_1d8);
    if (local_98.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      local_d8.AllocatorInstance.InlineData[0] = local_98.AllocatorInstance.InlineData[0];
      local_d8.AllocatorInstance.InlineData[1] = local_98.AllocatorInstance.InlineData[1];
      local_d8.AllocatorInstance.InlineData[2] = local_98.AllocatorInstance.InlineData[2];
      local_d8.AllocatorInstance.InlineData[3] = local_98.AllocatorInstance.InlineData[3];
      local_d8.AllocatorInstance.InlineData[4] = local_98.AllocatorInstance.InlineData[4];
      local_d8.AllocatorInstance.InlineData[5] = local_98.AllocatorInstance.InlineData[5];
      local_d8.AllocatorInstance.InlineData[6] = local_98.AllocatorInstance.InlineData[6];
      local_d8.AllocatorInstance.InlineData[7] = local_98.AllocatorInstance.InlineData[7];
      local_d8.AllocatorInstance.InlineData[8] = local_98.AllocatorInstance.InlineData[8];
      local_d8.AllocatorInstance.InlineData[9] = local_98.AllocatorInstance.InlineData[9];
      local_d8.AllocatorInstance.InlineData[10] = local_98.AllocatorInstance.InlineData[10];
      local_d8.AllocatorInstance.InlineData[0xb] = local_98.AllocatorInstance.InlineData[0xb];
      local_d8.AllocatorInstance.InlineData[0xc] = local_98.AllocatorInstance.InlineData[0xc];
      local_d8.AllocatorInstance.InlineData[0xd] = local_98.AllocatorInstance.InlineData[0xd];
      local_d8.AllocatorInstance.InlineData[0xe] = local_98.AllocatorInstance.InlineData[0xe];
      local_d8.AllocatorInstance.InlineData[0xf] = local_98.AllocatorInstance.InlineData[0xf];
    }
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
    }
    uVar11 = local_98.MaxBits;
    local_d8.AllocatorInstance.SecondaryData = local_98.AllocatorInstance.SecondaryData;
    local_d8.NumBits = local_98.NumBits;
    local_d8.MaxBits = local_98.MaxBits;
    if (local_98.NumBits == local_b8.NumBits) {
      FVar8 = (ForElementType<unsigned_int>)&local_b8;
      if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar8 = local_b8.AllocatorInstance.SecondaryData;
      }
      FVar7 = (ForElementType<unsigned_int>)&local_d8;
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_98.AllocatorInstance.SecondaryData;
      }
      iVar3 = memcmp((void *)FVar7,(void *)FVar8,(ulonglong)(local_98.NumBits + 0x1fU >> 5) << 2);
      if (iVar3 != 0) goto LAB_141b5fd0c;
    }
    else {
LAB_141b5fd0c:
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = 1;
      local_1c0.Data.ArrayNum = 0;
      local_1c0.Data.ArrayMax = 0;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      uVar10 = uVar9;
      if (0 < local_d8.NumBits) {
        do {
          if (uVar9 != 0) {
            uVar4 = uVar9 & 0x80000007;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
            }
            if (uVar4 == 0) {
              ::FString::AppendChar(&local_1c0,L' ');
            }
          }
          FVar8 = (ForElementType<unsigned_int>)&local_d8;
          if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_d8.AllocatorInstance.SecondaryData;
          }
          ::FString::AppendChar
                    (&local_1c0,
                     (ushort)((*(uint *)((longlong)FVar8 + (longlong)(int)uVar10 * 4) & uVar11) != 0
                             ) + L'0');
          uVar4 = uVar11 * 2;
          uVar9 = uVar9 + 1;
          uVar5 = uVar10 + 1;
          if (uVar4 != 0) {
            uVar5 = uVar10;
          }
          uVar11 = 1;
          if (uVar4 != 0) {
            uVar11 = uVar4;
          }
          uVar10 = uVar5;
        } while ((int)uVar9 < local_d8.NumBits);
      }
      ::FString::PrintfImpl
                (&local_190,
                 L"BitwiseOR: Unexpected result for source %hs | %hs. Expected: %hs, Actual: %s");
      (*pcVar2)(pFVar1,&local_190,0);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      uVar11 = local_d8.MaxBits;
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        uVar11 = local_d8.MaxBits;
      }
    }
    uVar10 = 0;
    local_d8.NumBits = 0;
    iVar3 = local_78.NumBits;
    uVar9 = iVar3 + 0x1fU & 0xffffffe0;
    if (((int)uVar11 < (int)uVar9) || (0x80 < (int)uVar11)) {
      local_d8.MaxBits = 0x80;
      if (0x80 < (int)uVar9) {
        local_d8.MaxBits = uVar9;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
      iVar3 = local_78.NumBits;
    }
    local_d8.NumBits = iVar3;
    if (iVar3 != 0) {
      FVar8 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar8 = local_78.AllocatorInstance.SecondaryData;
      }
      FVar7 = (ForElementType<unsigned_int>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_d8.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar7,(void *)FVar8,(ulonglong)(iVar3 + 0x1fU >> 5) << 2);
    }
    UE::Core::Private::
    BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              (&local_58,&local_d8,MaxSize,(<lambda_1> *)local_1d8);
    FVar7 = local_b8.AllocatorInstance.SecondaryData;
    FVar8 = local_d8.AllocatorInstance.SecondaryData;
    if (local_d8.NumBits == local_b8.NumBits) {
      _Buf2 = (ForElementType<unsigned_int>)&local_b8;
      if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Buf2 = local_b8.AllocatorInstance.SecondaryData;
      }
      _Buf1 = (ForElementType<unsigned_int>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Buf1 = local_d8.AllocatorInstance.SecondaryData;
      }
      iVar3 = memcmp((void *)_Buf1,(void *)_Buf2,(ulonglong)(local_d8.NumBits + 0x1fU >> 5) << 2);
      if (iVar3 != 0) goto LAB_141b5feeb;
    }
    else {
LAB_141b5feeb:
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar9 = 1;
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      uVar11 = uVar10;
      if (0 < local_d8.NumBits) {
        do {
          if (uVar10 != 0) {
            uVar4 = uVar10 & 0x80000007;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
            }
            if (uVar4 == 0) {
              ::FString::AppendChar(&local_1b0,L' ');
            }
          }
          FVar8 = (ForElementType<unsigned_int>)&local_d8;
          if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar8 = local_d8.AllocatorInstance.SecondaryData;
          }
          ::FString::AppendChar
                    (&local_1b0,
                     (ushort)((*(uint *)((longlong)FVar8 + (longlong)(int)uVar11 * 4) & uVar9) != 0)
                     + L'0');
          uVar4 = uVar9 * 2;
          uVar10 = uVar10 + 1;
          uVar5 = uVar11 + 1;
          if (uVar4 != 0) {
            uVar5 = uVar11;
          }
          uVar9 = 1;
          if (uVar4 != 0) {
            uVar9 = uVar4;
          }
          uVar11 = uVar5;
        } while ((int)uVar10 < local_d8.NumBits);
      }
      ::FString::PrintfImpl
                (&local_180,
                 L"CombineWithBitwiseOR: Unexpected result for source %hs | %hs. Expected: %hs, Actual: %s"
                );
      (*pcVar2)(pFVar1,&local_180,0);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      FVar7 = local_b8.AllocatorInstance.SecondaryData;
      FVar8 = local_d8.AllocatorInstance.SecondaryData;
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        FVar7 = local_b8.AllocatorInstance.SecondaryData;
        FVar8 = local_d8.AllocatorInstance.SecondaryData;
      }
    }
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar8);
      FVar7 = local_b8.AllocatorInstance.SecondaryData;
    }
    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
    ppuVar12 = ppuVar12 + 3;
    if ((TBitArray<FDefaultBitArrayAllocator> *)ppuVar12 == &local_d8) {
      return;
    }
  } while( true );
}

