// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141ad32c0

EAutomationTestFlags __thiscall FBitArrayBitwiseANDTest::GetTestFlags(FBitArrayBitwiseANDTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad32d0

bool __thiscall FBitArrayBitwiseANDTest::IsStressTest(FBitArrayBitwiseANDTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad32e0

uint __thiscall FBitArrayBitwiseANDTest::GetRequiredDeviceNum(FBitArrayBitwiseANDTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad32f0

FString * __thiscall
FBitArrayBitwiseANDTest::GetTestSourceFileName
          (FBitArrayBitwiseANDTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad3330

int __thiscall FBitArrayBitwiseANDTest::GetTestSourceFileLine(FBitArrayBitwiseANDTest *this)

{
  return 0x704;
}

// GetTests @ 141ad33a0

/* WARNING: Removing unreachable block (ram,0x000141ad351e) */

void __thiscall
FBitArrayBitwiseANDTest::GetTests
          (FBitArrayBitwiseANDTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad36f0

bool __thiscall FBitArrayBitwiseANDTest::RunTest(FBitArrayBitwiseANDTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad3730

FString * __thiscall
FBitArrayBitwiseANDTest::GetBeautifiedTestName
          (FBitArrayBitwiseANDTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayBitwiseANDTest @ 141b19990

FBitArrayBitwiseANDTest * __thiscall
FBitArrayBitwiseANDTest::FBitArrayBitwiseANDTest(FBitArrayBitwiseANDTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayBitwiseANDTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::BitwiseAND");
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

// operator() @ 141b2d9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,
          TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestInput_const_,int>
          *param_2,TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
                   *param_3,
          TFunctionRef<TBitArray<FDefaultBitArrayAllocator>___cdecl(TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
          *param_4)

{
  char *pcVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FAutomationTestFramework *pFVar13;
  undefined8 *_Buf1;
  undefined8 *puVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<unsigned_int> _Buf2;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_1a8 [32];
  char *local_188;
  char *local_180;
  FScriptContainerElement *local_178;
  TFunctionRef<TBitArray<FDefaultBitArrayAllocator>___cdecl(TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
  *local_168;
  FString local_160;
  FString local_150;
  char *local_140;
  char *pcStack_138;
  char *local_130;
  wchar_t *local_128;
  longlong local_120;
  longlong local_118;
  TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestInput_const_,int>
  *local_110;
  TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
  *local_108;
  FString local_100;
  FString local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined4 local_c4;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_168 = param_4;
  local_128 = param_1;
  local_110 = param_2;
  local_108 = param_3;
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tests.Num() == Results.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                         ,0x71c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = param_2->ArrayNum;
  uVar17 = 0;
  if (0 < iVar8) {
    local_118 = 0;
    local_120 = 0;
    do {
      lVar5 = local_118;
      lVar4 = local_120;
      uVar7 = 0;
      if ((int)uVar17 < iVar8) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_180 = (char *)(longlong)iVar8;
        local_188 = (char *)(longlong)(int)uVar17;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar16 = 0;
      puVar14 = (undefined8 *)((longlong)&param_2->DataPtr->InputA + lVar4);
      local_140 = (char *)*puVar14;
      pcStack_138 = (char *)puVar14[1];
      uVar7 = 0;
      if ((int)uVar17 < param_3->ArrayNum) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_188 = (char *)(longlong)(int)uVar17;
        local_180 = (char *)(longlong)param_3->ArrayNum;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pcVar1 = *(char **)((longlong)&param_3->DataPtr->Expected + lVar5);
      local_130 = local_140;
      UE::BitArrayTest::ConstructBitArray(&local_60,local_140,0x7fffffff);
      local_140 = pcStack_138;
      UE::BitArrayTest::ConstructBitArray(&local_80,pcStack_138,0x7fffffff);
      UE::BitArrayTest::ConstructBitArray(&local_c0,pcVar1,0x7fffffff);
      (**(code **)param_4)(&local_e0,*(undefined8 *)&param_4->field_0x8,&local_60,&local_80);
      if (local_c8 == local_c0.NumBits) {
        FVar15 = (ForElementType<unsigned_int>)&local_c0;
        if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_c0.AllocatorInstance.SecondaryData;
        }
        puVar14 = &local_e0;
        if (local_d0 != (undefined8 *)0x0) {
          puVar14 = local_d0;
        }
        iVar8 = memcmp(puVar14,(void *)FVar15,(ulonglong)(local_c8 + 0x1fU >> 5) << 2);
        if (iVar8 != 0) goto LAB_141b2dbe0;
      }
      else {
LAB_141b2dbe0:
        pFVar13 = FAutomationTestFramework::Get();
        uVar7 = 1;
        pFVar2 = pFVar13->CurrentTest;
        local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.Data.ArrayNum = 0;
        local_160.Data.ArrayMax = 0;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        uVar11 = uVar16;
        if (local_c8 < 1) {
LAB_141b2dc8e:
          local_178 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          do {
            if (uVar16 != 0) {
              uVar9 = uVar16 & 0x80000007;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
              }
              if (uVar9 == 0) {
                ::FString::AppendChar(&local_160,L' ');
              }
            }
            puVar14 = &local_e0;
            if (local_d0 != (undefined8 *)0x0) {
              puVar14 = local_d0;
            }
            ::FString::AppendChar
                      (&local_160,
                       (ushort)((*(uint *)((longlong)puVar14 + (longlong)(int)uVar11 * 4) & uVar7)
                               != 0) + L'0');
            uVar9 = uVar7 * 2;
            uVar16 = uVar16 + 1;
            uVar10 = uVar11 + 1;
            if (uVar9 != 0) {
              uVar10 = uVar11;
            }
            uVar7 = 1;
            if (uVar9 != 0) {
              uVar7 = uVar9;
            }
            uVar11 = uVar10;
          } while ((int)uVar16 < local_c8);
          local_178 = local_160.Data.AllocatorInstance.Data;
          if (local_160.Data.ArrayNum == 0) goto LAB_141b2dc8e;
        }
        local_188 = local_140;
        local_180 = pcVar1;
        ::FString::PrintfImpl
                  (&local_100,
                   L"%s: Unexpected result for source %hs & %hs. Expected: %hs, Actual: %s");
        (*pcVar3)(pFVar2,&local_100,0);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        param_4 = local_168;
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
          param_4 = local_168;
        }
      }
      (**(code **)param_4)(&local_a0,*(undefined8 *)&param_4->field_0x8,&local_80,&local_60);
      if (local_90 == (undefined8 *)0x0) {
        local_e0 = local_a0;
        uStack_d8 = uStack_98;
      }
      puVar14 = local_90;
      if (local_d0 != (undefined8 *)0x0) {
        FMemory::Free(local_d0);
        puVar14 = local_90;
      }
      FVar15 = local_c0.AllocatorInstance.SecondaryData;
      iVar8 = (int)local_88;
      local_90 = (undefined8 *)0x0;
      local_c8 = (int)local_88;
      local_c4 = local_88._4_4_;
      local_88 = 0;
      local_d0 = puVar14;
      if (iVar8 == local_c0.NumBits) {
        _Buf2 = (ForElementType<unsigned_int>)&local_c0;
        if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Buf2 = local_c0.AllocatorInstance.SecondaryData;
        }
        _Buf1 = &local_e0;
        if (puVar14 != (undefined8 *)0x0) {
          _Buf1 = puVar14;
        }
        iVar8 = memcmp(_Buf1,(void *)_Buf2,(ulonglong)(iVar8 + 0x1fU >> 5) << 2);
        if (iVar8 != 0) goto LAB_141b2dd81;
      }
      else {
LAB_141b2dd81:
        pFVar13 = FAutomationTestFramework::Get();
        uVar16 = 0;
        uVar7 = 1;
        pFVar2 = pFVar13->CurrentTest;
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        iVar8 = 0;
        if (local_c8 < 1) {
LAB_141b2de2e:
          local_178 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          do {
            if (uVar16 != 0) {
              uVar11 = uVar16 & 0x80000007;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
              }
              if (uVar11 == 0) {
                ::FString::AppendChar(&local_150,L' ');
              }
            }
            puVar14 = &local_e0;
            if (local_d0 != (undefined8 *)0x0) {
              puVar14 = local_d0;
            }
            ::FString::AppendChar
                      (&local_150,
                       (ushort)((*(uint *)((longlong)puVar14 + (longlong)iVar8 * 4) & uVar7) != 0) +
                       L'0');
            uVar11 = uVar7 * 2;
            uVar16 = uVar16 + 1;
            iVar12 = iVar8 + 1;
            if (uVar11 != 0) {
              iVar12 = iVar8;
            }
            uVar7 = 1;
            if (uVar11 != 0) {
              uVar7 = uVar11;
            }
            iVar8 = iVar12;
          } while ((int)uVar16 < local_c8);
          local_178 = local_150.Data.AllocatorInstance.Data;
          if (local_150.Data.ArrayNum == 0) goto LAB_141b2de2e;
        }
        local_188 = local_130;
        local_180 = pcVar1;
        ::FString::PrintfImpl
                  (&local_f0,
                   L"%s: Unexpected result for source %hs & %hs. Expected: %hs, Actual: %s");
        (*pcVar3)(pFVar2,&local_f0,0);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        FVar15 = local_c0.AllocatorInstance.SecondaryData;
        puVar14 = local_d0;
        param_4 = local_168;
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
          FVar15 = local_c0.AllocatorInstance.SecondaryData;
          puVar14 = local_d0;
          param_4 = local_168;
        }
      }
      if (puVar14 != (undefined8 *)0x0) {
        FMemory::Free(puVar14);
        FVar15 = local_c0.AllocatorInstance.SecondaryData;
      }
      if (FVar15 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar15);
      }
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
      }
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
      }
      uVar17 = uVar17 + 1;
      local_120 = local_120 + 0x10;
      local_118 = local_118 + 8;
      iVar8 = local_110->ArrayNum;
      param_2 = local_110;
      param_3 = local_108;
    } while ((int)uVar17 < iVar8);
  }
  return;
}

// operator() @ 141b307c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_2>::operator()
          (void *this,wchar_t *param_1,
          TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestInput_const_,int>
          *param_2,TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
                   *param_3,
          TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
          *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
  *pTVar5;
  TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FAutomationTestFramework *pFVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<unsigned_int> _Buf1;
  ForElementType<unsigned_int> FVar15;
  ForElementType<unsigned_int> _Buf2;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStack_168 [32];
  char *local_148;
  char *local_140;
  FScriptContainerElement *local_138;
  longlong local_128;
  longlong local_120;
  FString local_118;
  TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestInput_const_,int>
  *local_108;
  char *local_100;
  char *pcStack_f8;
  char *local_f0;
  wchar_t *local_e8;
  TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
  *local_e0;
  TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
  *local_d8;
  FString local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar18 = 0;
  iVar9 = param_2->ArrayNum;
  local_e0 = param_4;
  if (0 < iVar9) {
    local_128 = 0;
    local_120 = 0;
    local_108 = param_2;
    local_e8 = param_1;
    local_d8 = param_3;
    do {
      pTVar6 = local_d8;
      pTVar5 = local_e0;
      lVar17 = local_120;
      lVar19 = local_128;
      uVar13 = 0;
      if ((int)uVar18 < iVar9) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_140 = (char *)(longlong)iVar9;
        local_148 = (char *)(longlong)(int)uVar18;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = pTVar6->ArrayNum;
      puVar1 = (undefined8 *)((longlong)&param_2->DataPtr->InputA + lVar19);
      local_100 = (char *)*puVar1;
      pcStack_f8 = (char *)puVar1[1];
      uVar13 = 0;
      if ((int)uVar18 < iVar9) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_148 = (char *)(longlong)(int)uVar18;
        local_140 = (char *)(longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pcVar2 = *(char **)((longlong)&pTVar6->DataPtr->Expected + lVar17);
      local_f0 = local_100;
      UE::BitArrayTest::ConstructBitArray(&local_80,local_100,0x7fffffff);
      local_100 = pcStack_f8;
      UE::BitArrayTest::ConstructBitArray(&local_60,pcStack_f8,0x7fffffff);
      UE::BitArrayTest::ConstructBitArray(&local_a0,pcVar2,0x7fffffff);
      local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_c0.NumBits = 0;
      local_c0.MaxBits = 0;
      iVar9 = local_80.NumBits;
      uVar13 = iVar9 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar13) {
        uVar8 = 0x80;
        if (0x80 < (int)uVar13) {
          uVar8 = uVar13;
        }
        local_c0._24_8_ = (ulonglong)uVar8 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
        iVar9 = local_80.NumBits;
      }
      local_c0.NumBits = iVar9;
      if (iVar9 != 0) {
        FVar15 = (ForElementType<unsigned_int>)&local_80;
        if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_80.AllocatorInstance.SecondaryData;
        }
        FVar14 = (ForElementType<unsigned_int>)&local_c0;
        if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_c0.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar14,(void *)FVar15,(ulonglong)(iVar9 + 0x1fU >> 5) << 2);
      }
      (**(code **)pTVar5)(*(undefined8 *)&pTVar5->field_0x8,&local_c0,&local_60);
      FVar14 = local_a0.AllocatorInstance.SecondaryData;
      FVar15 = local_c0.AllocatorInstance.SecondaryData;
      if (local_c0.NumBits == local_a0.NumBits) {
        _Buf2 = (ForElementType<unsigned_int>)&local_a0;
        if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Buf2 = local_a0.AllocatorInstance.SecondaryData;
        }
        _Buf1 = (ForElementType<unsigned_int>)&local_c0;
        if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Buf1 = local_c0.AllocatorInstance.SecondaryData;
        }
        iVar9 = memcmp((void *)_Buf1,(void *)_Buf2,(ulonglong)(local_c0.NumBits + 0x1fU >> 5) << 2);
        if (iVar9 != 0) goto LAB_141b309e7;
      }
      else {
LAB_141b309e7:
        uVar16 = 0;
        pFVar12 = FAutomationTestFramework::Get();
        uVar13 = 1;
        pFVar3 = pFVar12->CurrentTest;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        uVar8 = uVar16;
        if (local_c0.NumBits < 1) {
LAB_141b30a95:
          local_138 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          do {
            if (uVar16 != 0) {
              uVar10 = uVar16 & 0x80000007;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
              }
              if (uVar10 == 0) {
                ::FString::AppendChar(&local_118,L' ');
              }
            }
            FVar15 = (ForElementType<unsigned_int>)&local_c0;
            if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_c0.AllocatorInstance.SecondaryData;
            }
            ::FString::AppendChar
                      (&local_118,
                       (ushort)((*(uint *)((longlong)FVar15 + (longlong)(int)uVar8 * 4) & uVar13) !=
                               0) + L'0');
            uVar10 = uVar13 * 2;
            uVar16 = uVar16 + 1;
            uVar11 = uVar8 + 1;
            if (uVar10 != 0) {
              uVar11 = uVar8;
            }
            uVar13 = 1;
            if (uVar10 != 0) {
              uVar13 = uVar10;
            }
            uVar8 = uVar11;
          } while ((int)uVar16 < local_c0.NumBits);
          local_138 = local_118.Data.AllocatorInstance.Data;
          if (local_118.Data.ArrayNum == 0) goto LAB_141b30a95;
        }
        local_148 = local_100;
        local_140 = pcVar2;
        ::FString::PrintfImpl
                  (&local_d0,
                   L"%s: Unexpected result for source %hs & %hs. Expected: %hs, Actual: %s");
        (*pcVar4)(pFVar3,&local_d0,0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        FVar15 = local_c0.AllocatorInstance.SecondaryData;
        FVar14 = local_a0.AllocatorInstance.SecondaryData;
        lVar17 = local_120;
        param_2 = local_108;
        lVar19 = local_128;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          FVar15 = local_c0.AllocatorInstance.SecondaryData;
          FVar14 = local_a0.AllocatorInstance.SecondaryData;
          lVar17 = local_120;
          param_2 = local_108;
          lVar19 = local_128;
        }
      }
      if (FVar15 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar15);
        FVar14 = local_a0.AllocatorInstance.SecondaryData;
      }
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar14);
      }
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
      }
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
      }
      iVar9 = param_2->ArrayNum;
      local_128 = lVar19 + 0x10;
      local_120 = lVar17 + 8;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iVar9);
  }
  return;
}

// TestBody @ 141b5f040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBitArrayBitwiseANDTest::TestBody(FBitArrayBitwiseANDTest *this,FString *param_1)

{
  undefined1 auStackY_158 [32];
  undefined1 local_128 [16];
  TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestInput_const_,int>
  local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  FTestResult local_e8;
  undefined *local_e0;
  undefined *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  FTestInput local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8._8_4_ = 7;
  local_118.ArrayNum = 7;
  local_a8.InputA = "0";
  local_70 = "11111111";
  local_a8.InputB = "1";
  local_68 = "11111111 010";
  local_98 = &s_1;
  local_60 = "10000100 011111";
  local_90 = &s_1;
  local_58 = "11111111 001110 11111";
  local_88 = &s_0;
  local_50 = "10000100 001111";
  local_80 = &s_0;
  local_48 = "11111111 00111011 11111110 00000111 11110000 00000110 00001111 00000111 11111110";
  local_78 = "0001";
  local_40 = 
  "11111100 01111111 11100000 11110000 01100000 00001111 11100000 01111111 11011100 11111111";
  local_e8.Expected = "0";
  local_c0 = "10000100 001110";
  local_108._8_8_ = local_128;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l3::<lambda_3>,TBitArray<FDefaultBitArrayAllocator>,TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_f8._0_8_ = &local_e8;
  local_118.DataPtr = &local_a8;
  local_e0 = &s_1;
  local_d8 = &s_0;
  local_d0 = "0001";
  local_c8 = "10000100 010";
  local_b8 = "11111100 00111011 11100000 00000000 01100000 00000110 00000000 00000111 11011100";
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_1>::operator()
            (local_128,L"BitwiseAND (MinSize)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_f8,
             (TFunctionRef<TBitArray<FDefaultBitArrayAllocator>___cdecl(TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_108);
  local_108._8_4_ = 7;
  local_f8._8_8_ = local_128;
  local_118.ArrayNum = 7;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l3::<lambda_4>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_108._0_8_ = &local_e8;
  local_118.DataPtr = &local_a8;
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_2>::operator()
            (local_128,L"CombineWithBitwiseAND (MinSize)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_108,
             (TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_f8);
  local_e8.Expected = "0";
  local_d0 = "00010000";
  local_e0 = &s_1;
  local_d8 = &s_0;
  local_108._8_4_ = 7;
  local_c8 = "10000100 010000";
  local_118.ArrayNum = 7;
  local_b8 = 
  "11111100 00111011 11100000 00000000 01100000 00000110 00000000 00000111 11011100 00000000";
  local_f8._8_8_ = local_128;
  local_c0 = "10000100 001110 00000";
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l4::<lambda_5>,TBitArray<FDefaultBitArrayAllocator>,TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_108._0_8_ = &local_e8;
  local_118.DataPtr = &local_a8;
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_1>::operator()
            (local_128,L"BitwiseAND (MaxSize)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_108,
             (TFunctionRef<TBitArray<FDefaultBitArrayAllocator>___cdecl(TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_f8);
  local_108._8_4_ = 7;
  local_f8._8_8_ = local_128;
  local_118.ArrayNum = 7;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l4::<lambda_6>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_108._0_8_ = &local_e8;
  local_118.DataPtr = &local_a8;
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_2>::operator()
            (local_128,L"CombineWithBitwiseAND (MaxSize)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_108,
             (TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_f8);
  local_108._8_4_ = 7;
  local_d0 = "00011111";
  local_118.ArrayNum = 7;
  local_c8 = "10000100 010111";
  local_e8.Expected = "0";
  local_b8 = 
  "11111100 00111011 11100000 00000000 01100000 00000110 00000000 00000111 11011100 11111111";
  local_f8._8_8_ = local_128;
  local_e0 = &s_1;
  local_d8 = &s_0;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l5::<lambda_7>,TBitArray<FDefaultBitArrayAllocator>,TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_108._0_8_ = &local_e8;
  local_c0 = "10000100 001110 11111";
  local_118.DataPtr = &local_a8;
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_1>::operator()
            (local_128,L"BitwiseAND (MaxSize | OneFillMissingBits)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_108,
             (TFunctionRef<TBitArray<FDefaultBitArrayAllocator>___cdecl(TBitArray<FDefaultBitArrayAllocator>_const_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_f8);
  local_f8._8_8_ = local_128;
  local_108._8_4_ = 7;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l5::<lambda_8>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_118.ArrayNum = 7;
  local_108._0_8_ = &local_e8;
  local_118.DataPtr = &local_a8;
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_2>::operator()
            (local_128,L"CombineWithBitwiseAND (MaxSize | OneFillMissingBits)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_108,
             (TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_f8);
  local_108._8_4_ = 7;
  local_f8._8_8_ = local_128;
  local_118.ArrayNum = 7;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l6::<lambda_9>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_108._0_8_ = &local_e8;
  local_e8.Expected = "0";
  local_118.DataPtr = &local_a8;
  local_e0 = &s_1;
  local_d8 = &s_0;
  local_d0 = "0001";
  local_c8 = "10000100 010";
  local_c0 = "10000100 001110 00000";
  local_b8 = "11111100 00111011 11100000 00000000 01100000 00000110 00000000 00000111 11011100";
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_2>::operator()
            (local_128,L"CombineWithBitwiseAND (MaintainSize)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_108,
             (TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_f8);
  local_108._8_4_ = 7;
  local_f8._8_8_ = local_128;
  local_118.ArrayNum = 7;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FBitArrayBitwiseANDTest::TestBody'::__l7::<lambda_10>,void,TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&>
       ::Call;
  local_108._0_8_ = &local_e8;
  local_e8.Expected = "0";
  local_118.DataPtr = &local_a8;
  local_e0 = &s_1;
  local_d8 = &s_0;
  local_d0 = "0001";
  local_c8 = "10000100 010";
  local_c0 = "10000100 001110 11111";
  local_b8 = "11111100 00111011 11100000 00000000 01100000 00000110 00000000 00000111 11011100";
  `FBitArrayBitwiseANDTest::TestBody'::__l2::<lambda_2>::operator()
            (local_128,L"CombineWithBitwiseAND (MaintainSize | OneFillMissingBits)",&local_118,
             (TArrayView<_protected:_void___cdecl_FBitArrayBitwiseANDTest::TestBody(FString_const_&)_::_2_::FTestResult_const_,int>
              *)local_108,
             (TFunctionRef<void___cdecl(TBitArray<FDefaultBitArrayAllocator>_&,TBitArray<FDefaultBitArrayAllocator>_const_&)>
              *)local_f8);
  return;
}

