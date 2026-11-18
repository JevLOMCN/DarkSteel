// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc0e80

EAutomationTestFlags __thiscall FParsingUnitTests::GetTestFlags(FParsingUnitTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc0e90

bool __thiscall FParsingUnitTests::IsStressTest(FParsingUnitTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc0ea0

uint __thiscall FParsingUnitTests::GetRequiredDeviceNum(FParsingUnitTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc0eb0

FString * __thiscall
FParsingUnitTests::GetTestSourceFileName(FParsingUnitTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\UnitConversionTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc0ee0

int __thiscall FParsingUnitTests::GetTestSourceFileLine(FParsingUnitTests *this)

{
  return 0x76;
}

// GetTests @ 141bc10c0

/* WARNING: Removing unreachable block (ram,0x000141bc123e) */

void __thiscall
FParsingUnitTests::GetTests
          (FParsingUnitTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc1290

bool __thiscall FParsingUnitTests::RunTest(FParsingUnitTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc12c0

FString * __thiscall
FParsingUnitTests::GetBeautifiedTestName(FParsingUnitTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FParsingUnitTests @ 141be5710

FParsingUnitTests * __thiscall
FParsingUnitTests::FParsingUnitTests(FParsingUnitTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FParsingUnitTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::Unit Parsing");
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

// TestBody @ 141c29c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FParsingUnitTests::TestBody(FParsingUnitTests *this,FString *param_1)

{
  char *pcVar1;
  ITextData *pIVar2;
  EUnit EVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  bool bVar9;
  FAutomationTestFramework *pFVar10;
  ForAnyElementType FVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_298 [32];
  ITextData *local_278;
  FNumericUnit<double> local_268;
  FString local_258;
  FString local_248;
  double local_238;
  EUnit local_230;
  undefined8 local_228;
  undefined1 local_220;
  wchar_t *local_218;
  undefined8 local_210;
  undefined1 local_208;
  char local_1f0 [8];
  wchar_t *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1c0;
  wchar_t *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_190;
  wchar_t *local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined1 local_160;
  wchar_t *local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_130;
  wchar_t *local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_100;
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  char local_98 [24];
  TValueOrError<FNumericUnit<double>,FText> local_80;
  ulonglong local_68;
  
  dVar8 = __real_3eb0c6f7a0000000;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_218 = L"10.7cm";
  local_1e8 = L"0.7 m";
  local_210 = __real_4025666666666666;
  local_1b8 = L"2m - 1m";
  local_1b0 = __real_4059000000000000;
  local_188 = L"10.4865 MetersPerSecond";
  local_180 = __real_4024f916872b020c;
  local_158 = L"10.8 cd";
  local_150 = __real_402599999999999a;
  local_128 = L"4.8 cd + 1.2cd";
  local_120 = __real_4018000000000000;
  local_f8 = L"1cd/m2 + 0.5 CandelaPerMeter2";
  local_f0 = __real_3ff8000000000000;
  local_c8 = L"+=0.7 m";
  local_1e0 = __real_4051800000000000;
  local_c0 = __real_4061800000000000;
  local_b0 = __real_4051800000000000;
  local_208 = 2;
  local_1f0[0] = '\0';
  local_1d8 = 2;
  local_1c0 = 0;
  local_1a8 = 2;
  local_190 = 0;
  local_178 = 0xd;
  local_160 = 0;
  local_148 = 0x37;
  local_130 = 0;
  local_118 = 0x37;
  local_100 = 0;
  local_e8 = 0x39;
  local_d0 = 0;
  local_b8 = 2;
  local_a8 = 0x4c;
  local_a0 = 1;
  pcVar12 = local_1f0;
  do {
    if (*pcVar12 == '\0') {
      local_228 = 0;
      local_268.Value = 0.0;
      local_220 = 0x4c;
      local_268.Units = Unspecified;
    }
    else {
      local_268.Units = pcVar12[-8];
      local_268.Value = *(double *)(pcVar12 + -0x10);
      local_238 = local_268.Value;
      local_230 = local_268.Units;
    }
    UnitConversion::TryParseExpression
              (&local_80,*(wchar_t **)(pcVar12 + -0x28),pcVar12[-0x18],&local_268);
    uVar13 = (ulonglong)local_80.Variant.TypeIndex;
    if ((2 < uVar13) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar2 = *(ITextData **)(pcVar12 + -0x20);
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FNumericUnit<double>,FNumericUnit<double>,TValueOrError<FNumericUnit<double>,FText>::FWrapErrorType,TValueOrError<struct_FNumericUnit<double>,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar13) == '\0') {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar4 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
      if ((local_80.Variant.TypeIndex != 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FText::ToString((FText *)&local_80);
      local_278 = pIVar2;
      ::FString::PrintfImpl
                (&local_248,L"Parsing of expression \"%s\" was incorrect (%s). Expected %f.");
      (*pcVar5)(pFVar4,&local_248,0);
      FVar11.Data = local_248.Data.AllocatorInstance.Data;
LAB_141c2a098:
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
    }
    else {
      if ((local_80.Variant.TypeIndex != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar3 = pcVar12[-0x18];
      if ((EUnit)local_80.Variant._padding_ == Unspecified) {
        uVar14 = (undefined4)local_80.Variant._padding_;
        uVar16 = (undefined4)((ulonglong)local_80.Variant._padding_ >> 0x20);
        bVar9 = true;
      }
      else {
        bVar9 = FUnitConversion::AreUnitsCompatible((EUnit)local_80.Variant._padding_,EVar3);
        if (bVar9) {
          dVar15 = FUnitConversion::Convert<double>
                             ((double)local_80.Variant._padding_,(EUnit)local_80.Variant._padding_,
                              EVar3);
          uVar14 = SUB84(dVar15,0);
          uVar16 = (undefined4)((ulonglong)dVar15 >> 0x20);
          bVar9 = true;
        }
        else {
          uVar14 = (undefined4)local_98._0_8_;
          uVar16 = SUB84(local_98._0_8_,4);
          bVar9 = false;
        }
      }
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar15 = (double)CONCAT44(uVar16,uVar14) - (double)pIVar2;
      uVar17 = SUB84(dVar15,0) & uVar6;
      uVar18 = (uint)((ulonglong)dVar15 >> 0x20) & uVar7;
      if (dVar8 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar8) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar4 = pFVar10->CurrentTest;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
        if ((local_80.Variant.TypeIndex != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_278 = (ITextData *)local_80.Variant._padding_;
        ::FString::PrintfImpl
                  (&local_258,L"Parsing of expression \"%s\" failed. Expected %f but got %f.");
        (*pcVar5)(pFVar4,&local_258,0);
        FVar11.Data = local_258.Data.AllocatorInstance.Data;
        goto LAB_141c2a098;
      }
    }
    uVar13 = (ulonglong)local_80.Variant.TypeIndex;
    if ((2 < local_80.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FNumericUnit<double>,TValueOrError<FNumericUnit<double>,FText>::FWrapErrorType,TValueOrError<struct_FNumericUnit<double>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(&local_80);
    pcVar1 = pcVar12 + 8;
    pcVar12 = pcVar12 + 0x30;
    if (pcVar1 == local_98) {
      return;
    }
  } while( true );
}

