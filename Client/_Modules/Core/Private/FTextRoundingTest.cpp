// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141bc8e00

EAutomationTestFlags __thiscall FTextRoundingTest::GetTestFlags(FTextRoundingTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc8e10

bool __thiscall FTextRoundingTest::IsStressTest(FTextRoundingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc8e20

uint __thiscall FTextRoundingTest::GetRequiredDeviceNum(FTextRoundingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc8e30

FString * __thiscall
FTextRoundingTest::GetTestSourceFileName(FTextRoundingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\TextTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc8e60

int __thiscall FTextRoundingTest::GetTestSourceFileLine(FTextRoundingTest *this)

{
  return 0x2d3;
}

// GetTests @ 141bc8e70

/* WARNING: Removing unreachable block (ram,0x000141bc8fee) */

void __thiscall
FTextRoundingTest::GetTests
          (FTextRoundingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc9010

bool __thiscall FTextRoundingTest::RunTest(FTextRoundingTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc9040

FString * __thiscall
FTextRoundingTest::GetBeautifiedTestName(FTextRoundingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTextRoundingTest @ 141be9ed0

FTextRoundingTest * __thiscall
FTextRoundingTest::FTextRoundingTest(FTextRoundingTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTextRoundingTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TextRounding");
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
  ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
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

// operator() @ 141befcf0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
`FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,double param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FString *pFVar5;
  FAutomationTestFramework *pFVar6;
  bool bVar7;
  FText local_38;
  TSharedPtr<FCulture,1> local_28 [2];
  
  local_28[0].Object = (FCulture *)0x0;
  local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(&local_38,param_1,*(FNumberFormattingOptions **)this,local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  pFVar5 = FText::ToString(&local_38);
  iVar4 = (param_2->Data).ArrayNum;
  iVar1 = (pFVar5->Data).ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) goto LAB_141befe14;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar7 = iVar4 == 0;
  }
  else {
    bVar7 = iVar4 + iVar1 == 1;
  }
  if (!bVar7) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    FText::ToString(&local_38);
    ::FString::PrintfImpl
              ((FString *)local_28,
               L"Text rounding failure: source \'%f\' - expected \'%s\' - result \'%s\'. %s.");
    (*pcVar3)(pFVar2,local_28,0);
    if (local_28[0].Object != (FCulture *)0x0) {
      FMemory::Free(local_28[0].Object);
    }
  }
LAB_141befe14:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 141bf2fa0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
`FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(void *this,ERoundingMode param_1)

{
  undefined8 *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FString *pFVar5;
  FAutomationTestFramework *pFVar6;
  double *pdVar7;
  uint uVar8;
  wchar_t **ppwVar9;
  bool bVar10;
  FString local_88;
  FText local_78;
  FString local_68;
  TSharedPtr<FCulture,1> local_58;
  FString local_48 [2];
  
  pdVar7 = InputValues;
  uVar8 = 0;
  *(ERoundingMode *)(*(longlong *)this + 4) = param_1;
  ppwVar9 = OutputValues[0] + (int)param_1;
  do {
    puVar1 = *(undefined8 **)((longlong)this + 8);
    ::FString::FString(&local_68,RoundingModeNames[(int)param_1]);
    ::FString::FString(&local_88,*ppwVar9);
    local_58.Object = (FCulture *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FText::AsNumber(&local_78,*pdVar7,(FNumberFormattingOptions *)*puVar1,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pFVar5 = FText::ToString(&local_78);
    iVar4 = (pFVar5->Data).ArrayNum;
    if (iVar4 == local_88.Data.ArrayNum) {
      if (1 < iVar4) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                           (wchar_t *)local_88.Data.AllocatorInstance.Data);
        bVar10 = iVar4 == 0;
        goto LAB_141bf3076;
      }
    }
    else {
      bVar10 = local_88.Data.ArrayNum + iVar4 == 1;
LAB_141bf3076:
      if (!bVar10) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        FText::ToString(&local_78);
        ::FString::PrintfImpl
                  (local_48,
                   L"Text rounding failure: source \'%f\' - expected \'%s\' - result \'%s\'. %s.");
        (*pcVar3)(pFVar2,local_48,0);
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    uVar8 = uVar8 + 1;
    ppwVar9 = ppwVar9 + 7;
    pdVar7 = pdVar7 + 1;
    if (0x17 < uVar8) {
      return;
    }
  } while( true );
}

// TestBody @ 141c409f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FTextRoundingTest::TestBody(FTextRoundingTest *this,FString *param_1)

{
  FInternationalization *this_00;
  FNumberFormattingOptions *pFVar1;
  ulonglong *local_res18 [2];
  undefined1 local_78 [16];
  void *local_68 [3];
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  FCultureStateSnapshot local_38;
  
  this_00 = FInternationalization::Get();
  local_38.Language.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Language.Data.ArrayNum = 0;
  local_38.Language.Data.ArrayMax = 0;
  local_38.Locale.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Locale.Data.ArrayNum = 0;
  local_38.Locale.Data.ArrayMax = 0;
  local_38.AssetGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AssetGroups.ArrayNum = 0;
  local_38.AssetGroups.ArrayMax = 0;
  FInternationalization::BackupCultureState(this_00,&local_38);
  ::FString::FString((FString *)local_78,L"en");
  FInternationalization::SetCurrentCulture(this_00,(FString *)local_78);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_68);
  pFVar1->UseGrouping = false;
  pFVar1->MaximumFractionalDigits = 3;
  local_50._0_1_ = pFVar1->AlwaysSign;
  local_50._1_1_ = pFVar1->UseGrouping;
  local_50._2_1_ = pFVar1->IndicateNearlyInteger;
  local_50._3_1_ = pFVar1->field_0x3;
  local_50._4_4_ = pFVar1->RoundingMode;
  uStack_48._0_4_ = pFVar1->MinimumIntegralDigits;
  uStack_48._4_4_ = pFVar1->MaximumIntegralDigits;
  local_40._0_4_ = pFVar1->MinimumFractionalDigits;
  local_40._4_4_ = pFVar1->MaximumFractionalDigits;
  local_res18[0] = &local_50;
  local_78._0_8_ = &local_50;
  local_78._8_8_ = local_res18;
  `FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(local_78,HalfToEven);
  `FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(local_78,HalfFromZero);
  `FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(local_78,HalfToZero);
  `FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(local_78,FromZero);
  `FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(local_78,ToZero);
  `FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(local_78,ToNegativeInfinity);
  `FTextRoundingTest::TestBody'::__l2::<lambda_2>::operator()(local_78,ToPositiveInfinity);
  local_50 = local_50 & 0xffffffff;
  ::FString::FString((FString *)local_68,L"HalfToEven");
  ::FString::FString((FString *)local_78,L"1000.125");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_408f40ff290abb45,(FString *)local_78,(FString *)local_68);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  ::FString::FString((FString *)local_78,L"HalfToEven");
  ::FString::FString((FString *)local_68,L"1000.125");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_408f40ff138bcdff,(FString *)local_68,(FString *)local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  ::FString::FString((FString *)local_78,L"HalfToEven");
  ::FString::FString((FString *)local_68,L"1000.125");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_408f40ff14983d79,(FString *)local_68,(FString *)local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  ::FString::FString((FString *)local_78,L"HalfToEven");
  ::FString::FString((FString *)local_68,L"1000.125");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_408f40feff195033,(FString *)local_68,(FString *)local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  ::FString::FString((FString *)local_78,L"HalfToEven");
  ::FString::FString((FString *)local_68,L"1000.125");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_408f40fef9db2641,(FString *)local_68,(FString *)local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  ::FString::FString((FString *)local_78,L"HalfToEven");
  ::FString::FString((FString *)local_68,L"1000.124");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_408f40fef9db22d1,(FString *)local_68,(FString *)local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  ::FString::FString((FString *)local_78,L"HalfToEven");
  ::FString::FString((FString *)local_68,L"513");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_408007ffcb923a2a,(FString *)local_68,(FString *)local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  ::FString::FString((FString *)local_78,L"HalfToEven");
  ::FString::FString((FString *)local_68,L"-513");
  `FTextRoundingTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,__real_c08007ffcb923a2a,(FString *)local_68,(FString *)local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  FInternationalization::RestoreCultureState(this_00,&local_38);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_38.AssetGroups.AllocatorInstance.Data,
             local_38.AssetGroups.ArrayNum);
  if ((TTuple<FName,FString> *)local_38.AssetGroups.AllocatorInstance.Data !=
      (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_38.AssetGroups.AllocatorInstance.Data);
  }
  if (local_38.Locale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Locale.Data.AllocatorInstance.Data);
  }
  if (local_38.Language.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Language.Data.AllocatorInstance.Data);
  }
  return;
}

