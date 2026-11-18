// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141c5adb0

EAutomationTestFlags __thiscall
FColorConversionHeavyTest::GetTestFlags(FColorConversionHeavyTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5adc0

bool __thiscall FColorConversionHeavyTest::IsStressTest(FColorConversionHeavyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5add0

uint __thiscall FColorConversionHeavyTest::GetRequiredDeviceNum(FColorConversionHeavyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5ade0

FString * __thiscall
FColorConversionHeavyTest::GetTestSourceFileName
          (FColorConversionHeavyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\UnrealMathTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5ae10

int __thiscall FColorConversionHeavyTest::GetTestSourceFileLine(FColorConversionHeavyTest *this)

{
  return 0x13c1;
}

// GetTests @ 141c5ae20

/* WARNING: Removing unreachable block (ram,0x000141c5af9e) */

void __thiscall
FColorConversionHeavyTest::GetTests
          (FColorConversionHeavyTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5afc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FColorConversionHeavyTest::RunTest(FColorConversionHeavyTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  undefined1 auStackY_d8 [32];
  <lambda_1> local_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  _RTL_CRITICAL_SECTION *local_78;
  TArrayView<std::nullptr_t,int> local_70;
  _RTL_CRITICAL_SECTION local_58;
  char local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  local_30 = '\0';
  local_78 = &local_58;
  local_2c = 0;
  local_70.DataPtr = (void **)0x0;
  local_90._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FColorConversionHeavyTest::TestBody'::__l2::<lambda_1>,void,int>::Call;
  local_90._8_8_ = &local_80;
  local_70.ArrayNum = 0;
  local_80 = 0x100;
  local_7c = 0x1000000;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",0x100,1,(TFunctionRef<void___cdecl(int)> *)local_90,local_98,None,
             &local_70);
  if (local_30 != '\0') {
    if (local_24 != local_20) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_90,L"Conversion heavy sRGB CurrentBits=0x%08x");
      (*pcVar2)(pFVar1,local_90,0);
      if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_90._0_8_);
      }
    }
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_90,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,local_90,0);
    if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
  }
  DeleteCriticalSection(&local_58);
  bVar3 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar3;
}

// GetBeautifiedTestName @ 141c5b150

FString * __thiscall
FColorConversionHeavyTest::GetBeautifiedTestName
          (FColorConversionHeavyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FColorConversionHeavyTest @ 141c8aec0

FColorConversionHeavyTest * __thiscall
FColorConversionHeavyTest::FColorConversionHeavyTest
          (FColorConversionHeavyTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FColorConversionHeavyTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter][Slow]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::ColorConversionHeavy");
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
  ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter][Slow]");
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

// operator() @ 141c8f2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FColorConversionHeavyTest::TestBody'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  char cVar2;
  LPCRITICAL_SECTION p_Var3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint local_res20;
  FLinearColor_u_0 local_78 [5];
  
  fVar8 = __real_437f0000;
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  uVar13 = *(uint *)((longlong)this + 4);
  uVar11 = 0;
  if (uVar13 != 0) {
    do {
      fVar1 = (float)(uVar13 * param_1 + uVar11);
      local_78[0]._4_4_ = (uint)fVar1 ^ 0x12d687;
      local_78[0]._8_4_ = (uint)fVar1 ^ 0x53c7fa;
      local_78[0]._0_4_ = fVar1;
      local_78[0]._12_4_ = fVar1;
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_78[0]._s_0);
      uVar5 = local_78[0]._s_0.R;
      if ((float)local_78[0]._0_4_ <= __real_39000000) {
        uVar5 = __real_39000000;
      }
      if (__real_3f7fffff <= (float)uVar5) {
        uVar5 = __real_3f7fffff;
      }
      uVar14 = local_78[0]._s_0.G;
      if ((float)local_78[0]._4_4_ <= __real_39000000) {
        uVar14 = __real_39000000;
      }
      if (__real_3f7fffff <= (float)uVar14) {
        uVar14 = __real_3f7fffff;
      }
      uVar13 = ((uint)uVar5 >> 0xc & 0xff) *
               (UnrealMathTestInternal::stb_fp32_to_srgb8_tab4[uVar5 + 0xc7000000 >> 0x14] & 0xffff)
               + (UnrealMathTestInternal::stb_fp32_to_srgb8_tab4[uVar5 + 0xc7000000 >> 0x14] >> 7 &
                 0x1fffe00);
      uVar5 = local_78[0]._s_0.B;
      if ((float)local_78[0]._8_4_ <= __real_39000000) {
        uVar5 = __real_39000000;
      }
      if (__real_3f7fffff <= (float)uVar5) {
        uVar5 = __real_3f7fffff;
      }
      uVar12 = ((uint)uVar14 >> 0xc & 0xff) *
               (UnrealMathTestInternal::stb_fp32_to_srgb8_tab4[uVar14 + 0xc7000000 >> 0x14] & 0xffff
               ) + (UnrealMathTestInternal::stb_fp32_to_srgb8_tab4[uVar14 + 0xc7000000 >> 0x14] >> 7
                   & 0x1fffe00);
      uVar14 = local_78[0]._s_0.A;
      if ((float)local_78[0]._12_4_ <= 0.0) {
        uVar14 = 0.0;
      }
      if (fVar6 <= (float)uVar14) {
        uVar14 = fVar6;
      }
      uVar10 = ((uint)uVar5 >> 0xc & 0xff) *
               (UnrealMathTestInternal::stb_fp32_to_srgb8_tab4[uVar5 + 0xc7000000 >> 0x14] & 0xffff)
               + (UnrealMathTestInternal::stb_fp32_to_srgb8_tab4[uVar5 + 0xc7000000 >> 0x14] >> 7 &
                 0x1fffe00);
      uVar9 = (uint)((float)uVar14 * fVar8 + fVar7);
      if (local_res20 !=
          ((((uVar9 & 0xff) << 8 | uVar13 >> 0x10 & 0xff) << 8 | uVar12 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x10 & 0xff)) {
        p_Var3 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
        if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(p_Var3);
        if (*(char *)(*(longlong *)((longlong)this + 8) + 0x28) == '\0') {
          *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x28) = 1;
          *(float *)(*(longlong *)((longlong)this + 8) + 0x30) = fVar1;
          *(uint *)(*(longlong *)((longlong)this + 8) + 0x34) = local_res20;
          *(uint *)(*(longlong *)((longlong)this + 8) + 0x38) =
               CONCAT13((char)uVar9,
                        (int3)CONCAT31(CONCAT21((short)(uVar13 >> 0x10),(char)(uVar12 >> 0x10)),
                                       (char)(uVar10 >> 0x10)));
        }
        LeaveCriticalSection(p_Var3);
        break;
      }
      uVar13 = *(uint *)((longlong)this + 4);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar13);
  }
  p_Var3 = *(LPCRITICAL_SECTION *)((longlong)this + 8);
  if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var3);
  lVar4 = *(longlong *)((longlong)this + 8);
  cVar2 = *(char *)(lVar4 + 0x28);
  *(int *)(lVar4 + 0x2c) = *(int *)(lVar4 + 0x2c) + 1;
  LeaveCriticalSection(p_Var3);
  if ((cVar2 == '\0') && (4 < (byte)LogUnrealMathTest._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
  }
  return;
}

// TestBody @ 141c9bb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FColorConversionHeavyTest::TestBody(FColorConversionHeavyTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  undefined1 auStackY_d8 [32];
  <lambda_1> local_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  _RTL_CRITICAL_SECTION *local_78;
  TArrayView<std::nullptr_t,int> local_70;
  _RTL_CRITICAL_SECTION local_58;
  char local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  local_30 = '\0';
  local_78 = &local_58;
  local_2c = 0;
  local_70.DataPtr = (void **)0x0;
  local_90._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FColorConversionHeavyTest::TestBody'::__l2::<lambda_1>,void,int>::Call;
  local_90._8_8_ = &local_80;
  local_70.ArrayNum = 0;
  local_80 = 0x100;
  local_7c = 0x1000000;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",0x100,1,(TFunctionRef<void___cdecl(int)> *)local_90,local_98,None,
             &local_70);
  if (local_30 != '\0') {
    if (local_24 != local_20) {
      pFVar3 = FAutomationTestFramework::Get();
      pFVar1 = pFVar3->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_90,L"Conversion heavy sRGB CurrentBits=0x%08x");
      (*pcVar2)(pFVar1,local_90,0);
      if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_90._0_8_);
      }
    }
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_90,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,local_90,0);
    if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
  }
  DeleteCriticalSection(&local_58);
  return;
}

