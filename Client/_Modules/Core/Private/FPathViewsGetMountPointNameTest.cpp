// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141cbbee0

EAutomationTestFlags __thiscall
FPathViewsGetMountPointNameTest::GetTestFlags(FPathViewsGetMountPointNameTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbbef0

bool __thiscall FPathViewsGetMountPointNameTest::IsStressTest(FPathViewsGetMountPointNameTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbbf10

uint __thiscall
FPathViewsGetMountPointNameTest::GetRequiredDeviceNum(FPathViewsGetMountPointNameTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbbf30

FString * __thiscall
FPathViewsGetMountPointNameTest::GetTestSourceFileName
          (FPathViewsGetMountPointNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbbf70

int __thiscall
FPathViewsGetMountPointNameTest::GetTestSourceFileLine(FPathViewsGetMountPointNameTest *this)

{
  return 0x3d3;
}

// GetTests @ 141cbbfc0

/* WARNING: Removing unreachable block (ram,0x000141cbc13e) */

void __thiscall
FPathViewsGetMountPointNameTest::GetTests
          (FPathViewsGetMountPointNameTest *this,
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

// RunTest @ 141cbc300

bool __thiscall
FPathViewsGetMountPointNameTest::RunTest(FPathViewsGetMountPointNameTest *this,FString *param_1)

{
  bool bVar1;
  undefined1 local_res18 [16];
  
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()(local_res18,L"",L"",L"")
  ;
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"Root",L"",L"");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/",L"",L"/");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Root",L"Root",L"/Root");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\Root",L"",L"");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Root/",L"Root",L"/Root");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Root/A/B/",L"Root",L"/Root");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Classes/A/",L"Classes",L"/Classes");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Classes_A/B/",L"A",L"/Classes_A");
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbc440

FString * __thiscall
FPathViewsGetMountPointNameTest::GetBeautifiedTestName
          (FPathViewsGetMountPointNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsGetMountPointNameTest @ 141ce9760

FPathViewsGetMountPointNameTest * __thiscall
FPathViewsGetMountPointNameTest::FPathViewsGetMountPointNameTest
          (FPathViewsGetMountPointNameTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsGetMountPointNameTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::GetMountPointNameFromPath");
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

// operator() @ 141cf3fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> *pTVar8;
  ulong64 uVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  wchar_t *local_1c0;
  bool local_1b8 [16];
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_178.Base = local_158;
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.End = (wchar_t *)local_58;
  iVar11 = 0;
  iVar10 = iVar11;
  local_178.CurPos = local_158;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    iVar10 = (int)sVar5;
  }
  uVar9 = (ulong64)iVar10;
  pwVar12 = local_158;
  if (local_58 < local_158 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_178,uVar9);
    pwVar12 = local_178.CurPos;
  }
  if (iVar10 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pwVar12,param_1,uVar9 * 2);
    local_178.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
  }
  local_1b8[0] = false;
  local_1a8.Size = iVar11;
  local_1a8.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    local_1a8.Size = (int)sVar5;
  }
  FPathViews::GetMountPointNameFromPath(&local_198,&local_1a8,local_1b8,true);
  iVar4 = 0;
  iVar10 = iVar4;
  if (param_2 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_2);
    iVar10 = (int)sVar5;
  }
  if (local_198.Size == iVar10) {
    if ((local_198.Size != 0) && (iVar10 != 0)) {
      iVar3 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)CONCAT44(local_198.DataPtr._4_4_,local_198.DataPtr._0_4_),
                         param_2,(longlong)iVar10);
      if (iVar3 != 0) goto LAB_141cf40fb;
    }
    if (local_198.Size != iVar10) goto LAB_141cf40fb;
  }
  else {
LAB_141cf40fb:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    local_1c8 = CONCAT44(local_198.DataPtr._4_4_,local_198.DataPtr._0_4_);
    local_1c0 = param_2;
    ::FString::PrintfImpl
              ((FString *)&local_1a8,
               L"GetMountPointNameFromPath(\"%s\", &bHadClassPrefix, true) == \"%.*s\", expected \"%s\"."
              );
    (*pcVar2)(pFVar1,&local_1a8,0);
    if (local_1a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_1a8.DataPtr);
    }
  }
  local_1a8.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    iVar4 = (int)sVar5;
  }
  local_1a8.Size = iVar4;
  pTVar8 = FPathViews::GetMountPointNameFromPath(&local_188,&local_1a8,local_1b8,false);
  local_198.DataPtr._0_4_ = *(undefined4 *)&pTVar8->DataPtr;
  local_198.DataPtr._4_4_ = *(undefined4 *)((longlong)&pTVar8->DataPtr + 4);
  iVar10 = pTVar8->Size;
  local_198._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
  local_198.Size = iVar10;
  if (param_3 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_3);
    iVar11 = (int)sVar5;
  }
  if (iVar10 == iVar11) {
    if ((iVar10 != 0) && (iVar11 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)CONCAT44(local_198.DataPtr._4_4_,local_198.DataPtr._0_4_),
                         param_3,(longlong)iVar11);
      if (iVar4 != 0) goto LAB_141cf41d8;
    }
    if (iVar10 == iVar11) goto LAB_141cf422f;
  }
LAB_141cf41d8:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar1 = pFVar7->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  local_1c8 = CONCAT44(local_198.DataPtr._4_4_,local_198.DataPtr._0_4_);
  local_1c0 = param_3;
  ::FString::PrintfImpl
            ((FString *)&local_1a8,
             L"GetMountPointNameFromPath(\"%s\", &bHadClassPrefix, false) == \"%.*s\", expected \"%s\"."
            );
  (*pcVar2)(pFVar1,&local_1a8,0);
  if (local_1a8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_1a8.DataPtr);
  }
LAB_141cf422f:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  return;
}

// TestBody @ 141d37fb0

void __thiscall
FPathViewsGetMountPointNameTest::TestBody(FPathViewsGetMountPointNameTest *this,FString *param_1)

{
  undefined1 local_res18 [16];
  
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()(local_res18,L"",L"",L"")
  ;
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"Root",L"",L"");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/",L"",L"/");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Root",L"Root",L"/Root");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"\\Root",L"",L"");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Root/",L"Root",L"/Root");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Root/A/B/",L"Root",L"/Root");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Classes/A/",L"Classes",L"/Classes");
  `FPathViewsGetMountPointNameTest::TestBody'::__l2::<lambda_1>::operator()
            (local_res18,L"/Classes_A/B/",L"A",L"/Classes_A");
  return;
}

