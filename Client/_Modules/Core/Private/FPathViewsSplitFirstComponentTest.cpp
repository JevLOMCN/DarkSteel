// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141ccbc80

EAutomationTestFlags __thiscall
FPathViewsSplitFirstComponentTest::GetTestFlags(FPathViewsSplitFirstComponentTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccbc90

bool __thiscall
FPathViewsSplitFirstComponentTest::IsStressTest(FPathViewsSplitFirstComponentTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ccbca0

uint __thiscall
FPathViewsSplitFirstComponentTest::GetRequiredDeviceNum(FPathViewsSplitFirstComponentTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ccbcb0

FString * __thiscall
FPathViewsSplitFirstComponentTest::GetTestSourceFileName
          (FPathViewsSplitFirstComponentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ccbce0

int __thiscall
FPathViewsSplitFirstComponentTest::GetTestSourceFileLine(FPathViewsSplitFirstComponentTest *this)

{
  return 0x32d;
}

// GetTests @ 141ccbcf0

/* WARNING: Removing unreachable block (ram,0x000141ccbe6e) */

void __thiscall
FPathViewsSplitFirstComponentTest::GetTests
          (FPathViewsSplitFirstComponentTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccbe90

bool __thiscall
FPathViewsSplitFirstComponentTest::RunTest(FPathViewsSplitFirstComponentTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccbec0

FString * __thiscall
FPathViewsSplitFirstComponentTest::GetBeautifiedTestName
          (FPathViewsSplitFirstComponentTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsSplitFirstComponentTest @ 141cea7b0

FPathViewsSplitFirstComponentTest * __thiscall
FPathViewsSplitFirstComponentTest::FPathViewsSplitFirstComponentTest
          (FPathViewsSplitFirstComponentTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsSplitFirstComponentTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::SplitFirstComponent");
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

// operator() @ 141cf4280

void __thiscall
`FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  size_t sVar5;
  FAutomationTestFramework *pFVar6;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_28.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    local_18.Size = (int)sVar5;
  }
  FPathViews::SplitFirstComponent(&local_18,&local_28,&local_38);
  if (local_28.Size == 0) {
    wVar1 = *param_2;
  }
  else {
    iVar4 = FGenericPlatformStricmp::Strnicmp(local_28.DataPtr,param_2,(longlong)local_28.Size);
    if (iVar4 != 0) goto LAB_141cf4347;
    wVar1 = param_2[local_28.Size];
  }
  if (wVar1 == L'\0') {
    if (local_38.Size == 0) {
      wVar1 = *param_3;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_38.DataPtr,param_3,(longlong)local_38.Size);
      if (iVar4 != 0) goto LAB_141cf4347;
      wVar1 = param_3[local_38.Size];
    }
    if (wVar1 == L'\0') {
      return;
    }
  }
LAB_141cf4347:
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::PrintfImpl
            ((FString *)&local_18,
             L"SplitFirstComponent(\"%s\") == (\"%.*s\", \"%.*s\"), expected (\"%s\", \"%s\").");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// TestBody @ 141d397f0

void __thiscall
FPathViewsSplitFirstComponentTest::TestBody
          (FPathViewsSplitFirstComponentTest *this,FString *param_1)

{
  undefined1 local_res18 [16];
  
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"",L"",L"");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A",L"A",L"");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A/",L"A",L"");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A\\",L"A",L"");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A/B",L"A",L"B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A\\B",L"A",L"B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A/B/",L"A",L"B/");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A\\B\\",L"A",L"B\\");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A/B/C",L"A",L"B/C");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A\\B\\C",L"A",L"B\\C");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/A",L"/",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\A",L"\\",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/A/",L"/",L"A/");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\A\\",L"\\",L"A\\");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/A/B",L"/",L"A/B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\A\\B",L"\\",L"A\\B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"//A",L"//",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\\\A",L"\\\\",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"//A/",L"//",L"A/");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\\\A\\",L"\\\\",L"A\\");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"//A/B",L"//",L"A/B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\\\A\\B",L"\\\\",L"A\\B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/A",L"C:/",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\A",L"C:\\",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/A/",L"C:/",L"A/");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\A\\",L"C:\\",L"A\\");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:/A/B",L"C:/",L"A/B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C:\\A\\B",L"C:\\",L"A\\B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"///A",L"//",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"////////////A",L"//",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"///A",L"//",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C://A",L"C:/",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"C://////////A",L"C:/",L"A");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A//B",L"A",L"B");
  `FPathViewsSplitFirstComponentTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"A///////////B",L"A",L"B");
  return;
}

