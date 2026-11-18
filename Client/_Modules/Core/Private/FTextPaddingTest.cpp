// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141bc9f20

EAutomationTestFlags __thiscall FTextPaddingTest::GetTestFlags(FTextPaddingTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc9f30

bool __thiscall FTextPaddingTest::IsStressTest(FTextPaddingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc9f40

uint __thiscall FTextPaddingTest::GetRequiredDeviceNum(FTextPaddingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc9f50

FString * __thiscall
FTextPaddingTest::GetTestSourceFileName(FTextPaddingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Internationalization\\TextTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc9f80

int __thiscall FTextPaddingTest::GetTestSourceFileLine(FTextPaddingTest *this)

{
  return 0x35c;
}

// GetTests @ 141bc9f90

/* WARNING: Removing unreachable block (ram,0x000141bca10e) */

void __thiscall
FTextPaddingTest::GetTests
          (FTextPaddingTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bca130

bool __thiscall FTextPaddingTest::RunTest(FTextPaddingTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bca160

FString * __thiscall
FTextPaddingTest::GetBeautifiedTestName(FTextPaddingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTextPaddingTest @ 141be9d00

FTextPaddingTest * __thiscall
FTextPaddingTest::FTextPaddingTest(FTextPaddingTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTextPaddingTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][ClientContext][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TextPadding");
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

// operator() @ 141befba0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
`FTextPaddingTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  FString *pFVar5;
  FAutomationTestFramework *pFVar6;
  bool bVar7;
  FText local_38;
  TSharedPtr<FCulture,1> local_28;
  
  local_28.Object = (FCulture *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(&local_38,param_1,*(FNumberFormattingOptions **)this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pFVar5 = FText::ToString(&local_38);
  iVar4 = (param_2->Data).ArrayNum;
  iVar1 = (pFVar5->Data).ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) goto LAB_141befcbf;
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
              ((FString *)&local_28,
               L"Text padding failure: source \'%d\' - expected \'%s\' - result \'%s\'. %s.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Object != (FCulture *)0x0) {
      FMemory::Free(local_28.Object);
    }
  }
LAB_141befcbf:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 141bf2e40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
`FTextPaddingTest::TestBody'::__l2::<lambda_2>::operator()
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
    if (iVar1 < 2) goto LAB_141bf2f64;
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
               L"Text padding failure: source \'%f\' - expected \'%s\' - result \'%s\'. %s.");
    (*pcVar3)(pFVar2,local_28,0);
    if (local_28[0].Object != (FCulture *)0x0) {
      FMemory::Free(local_28[0].Object);
    }
  }
LAB_141bf2f64:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// TestBody @ 141c40440

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FTextPaddingTest::TestBody(FTextPaddingTest *this,FString *param_1)

{
  FInternationalization *this_00;
  FNumberFormattingOptions *pFVar1;
  FNumberFormattingOptions *local_res18;
  FNumberFormattingOptions *local_res20;
  FString local_78;
  void *local_68 [3];
  FNumberFormattingOptions local_50;
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
  ::FString::FString(&local_78,L"en");
  FInternationalization::SetCurrentCulture(this_00,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FNumberFormattingOptions::FNumberFormattingOptions(&local_50);
  local_res18 = &local_50;
  local_res20 = &local_50;
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_68);
  pFVar1->UseGrouping = false;
  pFVar1->MaximumIntegralDigits = 3;
  local_50.AlwaysSign = pFVar1->AlwaysSign;
  local_50.UseGrouping = pFVar1->UseGrouping;
  local_50.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_50._3_1_ = pFVar1->field_0x3;
  local_50.RoundingMode = pFVar1->RoundingMode;
  local_50.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_50.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_50.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_50.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  ::FString::FString((FString *)local_68,L"Truncating \'123456\' to a max of 3 integral digits");
  ::FString::FString(&local_78,L"456");
  `FTextPaddingTest::TestBody'::__l2::<lambda_1>::operator()
            (&local_res18,0x1e240,&local_78,(FString *)local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  ::FString::FString(&local_78,L"Truncating \'-123456\' to a max of 3 integral digits");
  ::FString::FString((FString *)local_68,L"-456");
  `FTextPaddingTest::TestBody'::__l2::<lambda_1>::operator()
            (&local_res18,-0x1e240,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_68);
  pFVar1->UseGrouping = false;
  pFVar1->MinimumIntegralDigits = 6;
  local_50.AlwaysSign = pFVar1->AlwaysSign;
  local_50.UseGrouping = pFVar1->UseGrouping;
  local_50.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_50._3_1_ = pFVar1->field_0x3;
  local_50.RoundingMode = pFVar1->RoundingMode;
  local_50.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_50.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_50.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_50.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  ::FString::FString(&local_78,L"Padding \'123\' to a min of 6 integral digits");
  ::FString::FString((FString *)local_68,L"000123");
  `FTextPaddingTest::TestBody'::__l2::<lambda_1>::operator()
            (&local_res18,0x7b,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"Padding \'-123\' to a min of 6 integral digits");
  ::FString::FString((FString *)local_68,L"-000123");
  `FTextPaddingTest::TestBody'::__l2::<lambda_1>::operator()
            (&local_res18,-0x7b,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_68);
  pFVar1->UseGrouping = false;
  pFVar1->MinimumFractionalDigits = 3;
  local_50.AlwaysSign = pFVar1->AlwaysSign;
  local_50.UseGrouping = pFVar1->UseGrouping;
  local_50.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_50._3_1_ = pFVar1->field_0x3;
  local_50.RoundingMode = pFVar1->RoundingMode;
  local_50.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_50.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_50.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_50.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  ::FString::FString(&local_78,L"Padding \'123\' to a min of 3 fractional digits");
  ::FString::FString((FString *)local_68,L"123.000");
  `FTextPaddingTest::TestBody'::__l2::<lambda_1>::operator()
            (&local_res18,0x7b,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"Padding \'-123\' to a min of 3 fractional digits");
  ::FString::FString((FString *)local_68,L"-123.000");
  `FTextPaddingTest::TestBody'::__l2::<lambda_1>::operator()
            (&local_res18,-0x7b,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_68);
  pFVar1->UseGrouping = false;
  pFVar1->MaximumFractionalDigits = 4;
  local_50.AlwaysSign = pFVar1->AlwaysSign;
  local_50.UseGrouping = pFVar1->UseGrouping;
  local_50.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_50._3_1_ = pFVar1->field_0x3;
  local_50.RoundingMode = pFVar1->RoundingMode;
  local_50.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_50.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_50.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_50.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  ::FString::FString(&local_78,L"Padding \'0.00123\' to a max of 4 fractional digits");
  ::FString::FString((FString *)local_68,L"0.0012");
  `FTextPaddingTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_res20,__real_3f5426fe718a86d7,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"Padding \'-0.00123\' to a max of 4 fractional digits");
  ::FString::FString((FString *)local_68,L"-0.0012");
  `FTextPaddingTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_res20,__real_bf5426fe718a86d7,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_68);
  pFVar1->UseGrouping = false;
  pFVar1->MaximumFractionalDigits = 8;
  local_50.AlwaysSign = pFVar1->AlwaysSign;
  local_50.UseGrouping = pFVar1->UseGrouping;
  local_50.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_50._3_1_ = pFVar1->field_0x3;
  local_50.RoundingMode = pFVar1->RoundingMode;
  local_50.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_50.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_50.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_50.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  ::FString::FString(&local_78,L"Padding \'0.00123\' to a max of 8 fractional digits");
  ::FString::FString((FString *)local_68,L"0.00123");
  `FTextPaddingTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_res20,__real_3f5426fe718a86d7,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"Padding \'-0.00123\' to a max of 8 fractional digits");
  ::FString::FString((FString *)local_68,L"-0.00123");
  `FTextPaddingTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_res20,__real_bf5426fe718a86d7,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_68);
  pFVar1->UseGrouping = false;
  pFVar1->MinimumFractionalDigits = 8;
  pFVar1->MaximumFractionalDigits = 8;
  local_50.AlwaysSign = pFVar1->AlwaysSign;
  local_50.UseGrouping = pFVar1->UseGrouping;
  local_50.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_50._3_1_ = pFVar1->field_0x3;
  local_50.RoundingMode = pFVar1->RoundingMode;
  local_50.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_50.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_50.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_50.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  ::FString::FString(&local_78,L"Padding \'0.00123\' to a min of 8 fractional digits");
  ::FString::FString((FString *)local_68,L"0.00123000");
  `FTextPaddingTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_res20,__real_3f5426fe718a86d7,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"Padding \'-0.00123\' to a min of 8 fractional digits");
  ::FString::FString((FString *)local_68,L"-0.00123000");
  `FTextPaddingTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_res20,__real_bf5426fe718a86d7,(FString *)local_68,&local_78);
  if (local_68[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
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

