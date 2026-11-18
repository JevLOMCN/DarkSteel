// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141ccd410

EAutomationTestFlags __thiscall
FPathViewsAppendPathTest::GetTestFlags(FPathViewsAppendPathTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccd420

bool __thiscall FPathViewsAppendPathTest::IsStressTest(FPathViewsAppendPathTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ccd430

uint __thiscall FPathViewsAppendPathTest::GetRequiredDeviceNum(FPathViewsAppendPathTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ccd440

FString * __thiscall
FPathViewsAppendPathTest::GetTestSourceFileName
          (FPathViewsAppendPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ccd470

int __thiscall FPathViewsAppendPathTest::GetTestSourceFileLine(FPathViewsAppendPathTest *this)

{
  return 0x368;
}

// GetTests @ 141ccd480

/* WARNING: Removing unreachable block (ram,0x000141ccd5fe) */

void __thiscall
FPathViewsAppendPathTest::GetTests
          (FPathViewsAppendPathTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccd620

bool __thiscall FPathViewsAppendPathTest::RunTest(FPathViewsAppendPathTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccd650

FString * __thiscall
FPathViewsAppendPathTest::GetBeautifiedTestName
          (FPathViewsAppendPathTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsAppendPathTest @ 141ce88e0

FPathViewsAppendPathTest * __thiscall
FPathViewsAppendPathTest::FPathViewsAppendPathTest(FPathViewsAppendPathTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsAppendPathTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::AppendPath");
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

// operator() @ 141cf3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  longlong lVar7;
  FAutomationTestFramework *pFVar8;
  ulong64 uVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  wchar_t *local_190;
  wchar_t *local_188;
  TStringView<wchar_t> local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  iVar4 = 0;
  local_168.End = (wchar_t *)local_48;
  iVar3 = 0;
  local_168.CurPos = local_148;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    iVar3 = (int)sVar5;
  }
  uVar9 = (ulong64)iVar3;
  pwVar10 = local_148;
  if (local_48 < local_148 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
    pwVar10 = local_168.CurPos;
  }
  if (iVar3 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pwVar10,param_1,uVar9 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
  }
  local_178.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_2);
    iVar4 = (int)sVar5;
  }
  local_178.Size = iVar4;
  FPathViews::AppendPath(&local_168,&local_178);
  lVar7 = (longlong)local_168.CurPos - (longlong)local_168.Base >> 1;
  iVar3 = (int)lVar7;
  if (iVar3 == 0) {
    bVar11 = *param_3 == (wchar_t)lVar7;
LAB_141cf3f21:
    if (bVar11) goto LAB_141cf3f87;
  }
  else {
    iVar4 = FGenericPlatformStricmp::Strnicmp(local_168.Base,param_3,(longlong)iVar3);
    if (iVar4 == 0) {
      bVar11 = param_3[iVar3] == L'\0';
      goto LAB_141cf3f21;
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  local_190 = local_168.Base;
  local_198 = (undefined4)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
  local_188 = param_3;
  ::FString::PrintfImpl
            ((FString *)&local_178,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
  (*pcVar2)(pFVar1,&local_178,0);
  if (local_178.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_178.DataPtr);
  }
LAB_141cf3f87:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return;
}

// TestBody @ 141d35750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPathViewsAppendPathTest::TestBody(FPathViewsAppendPathTest *this,FString *param_1)

{
  wchar_t *_Str;
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  FAutomationTestFramework *pFVar7;
  longlong lVar8;
  ulong64 uVar9;
  TStringBuilderBase<wchar_t> *pTVar10;
  wchar_t **ppwVar11;
  undefined1 auStack_c78 [32];
  undefined4 local_c58;
  TStringBuilderBase<wchar_t> *local_c50;
  wchar_t *local_c48;
  undefined1 local_c38 [16];
  TStringView<wchar_t> local_c28;
  wchar_t *local_c18;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  FString local_c08;
  wchar_t *local_bf8;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  FString local_be8;
  wchar_t *local_bd8;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  FString local_bc8;
  wchar_t *local_bb8;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  FString local_ba8;
  wchar_t *local_b98;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  FString local_b88;
  wchar_t *local_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  FString local_b68;
  wchar_t *local_b58;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  FString local_b48;
  wchar_t *local_b38;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  FString local_b28;
  wchar_t *local_b18;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  FString local_b08;
  TStringBuilderBase<wchar_t> local_af8;
  TStringBuilderBase<wchar_t> local_ad8 [8];
  TStringBuilderBase<wchar_t> local_9d8;
  TStringBuilderBase<wchar_t> local_9b8 [8];
  TStringBuilderBase<wchar_t> local_8b8;
  TStringBuilderBase<wchar_t> local_898 [8];
  TStringBuilderBase<wchar_t> local_798;
  TStringBuilderBase<wchar_t> local_778 [8];
  TStringBuilderBase<wchar_t> local_678;
  TStringBuilderBase<wchar_t> local_658 [8];
  TStringBuilderBase<wchar_t> local_558;
  TStringBuilderBase<wchar_t> local_538 [8];
  TStringBuilderBase<wchar_t> local_438;
  TStringBuilderBase<wchar_t> local_418 [8];
  TStringBuilderBase<wchar_t> local_318;
  TStringBuilderBase<wchar_t> local_2f8 [8];
  TStringBuilderBase<wchar_t> local_1f8;
  TStringBuilderBase<wchar_t> local_1d8 [8];
  wchar_t *local_d8 [19];
  wchar_t *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c78;
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"",L"A",L"A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"",L"A/B",L"A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"",L"A\\B",L"A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"Root",L"A",L"Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"Root",L"A/B",L"Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"Root",L"A\\B",L"Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"/",L"A",L"/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"/",L"A/B",L"/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"/",L"A\\B",L"/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"\\",L"A",L"\\A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\",L"A/B",L"\\A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\",L"A\\B",L"\\A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"/Root",L"A",L"/Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"/Root",L"A/B",L"/Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"/Root",L"A\\B",L"/Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\Root",L"A",L"\\Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\Root",L"A/B",L"\\Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\Root",L"A\\B",L"\\Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"/Root/",L"A",L"/Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"/Root/",L"A/B",L"/Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"/Root/",L"A\\B",L"/Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\Root\\",L"A",L"\\Root\\A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\Root\\",L"A/B",L"\\Root\\A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\Root\\",L"A\\B",L"\\Root\\A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"//",L"A",L"//A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//",L"A/B",L"//A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//",L"A\\B",L"//A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\",L"A",L"\\\\A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\",L"A/B",L"\\\\A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\",L"A\\B",L"\\\\A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//Root",L"A",L"//Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//Root",L"A/B",L"//Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//Root",L"A\\B",L"//Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\Root",L"A",L"\\\\Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\Root",L"A/B",L"\\\\Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\Root",L"A\\B",L"\\\\Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//Root/",L"A",L"//Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//Root/",L"A/B",L"//Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"//Root/",L"A\\B",L"//Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\Root\\",L"A",L"\\\\Root\\A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\Root\\",L"A/B",L"\\\\Root\\A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"\\\\Root\\",L"A\\B",L"\\\\Root\\A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()(local_c38,L"C:/",L"A",L"C:/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/",L"A/B",L"C:/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/",L"A\\B",L"C:/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\",L"A",L"C:\\A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\",L"A/B",L"C:\\A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\",L"A\\B",L"C:\\A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/Root",L"A",L"C:/Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/Root",L"A/B",L"C:/Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/Root",L"A\\B",L"C:/Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\Root",L"A",L"C:\\Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\Root",L"A/B",L"C:\\Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\Root",L"A\\B",L"C:\\Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/Root/",L"A",L"C:/Root/A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/Root/",L"A/B",L"C:/Root/A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:/Root/",L"A\\B",L"C:/Root/A\\B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\Root\\",L"A",L"C:\\Root\\A");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\Root\\",L"A/B",L"C:\\Root\\A/B");
  `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
            (local_c38,L"C:\\Root\\",L"A\\B",L"C:\\Root\\A\\B");
  local_d8[0] = L"";
  local_d8[1] = L"/";
  local_d8[2] = L"\\";
  local_d8[3] = L"/Root";
  local_d8[4] = L"\\Root";
  local_d8[5] = L"/Root/";
  local_d8[6] = L"\\Root\\";
  local_d8[7] = L"//";
  local_d8[8] = L"\\\\";
  local_d8[9] = L"//Root";
  local_d8[10] = L"\\\\Root";
  local_d8[0xe] = L"C:\\";
  ppwVar11 = local_d8;
  local_d8[0xb] = L"//Root/";
  local_d8[0xc] = L"\\\\Root\\";
  local_d8[0xd] = L"C:/";
  local_d8[0xf] = L"C:/Root";
  local_d8[0x10] = L"C:\\Root";
  local_d8[0x11] = L"C:/Root/";
  local_d8[0x12] = L"C:\\Root\\";
  do {
    _Str = *ppwVar11;
    local_af8.Base = (wchar_t *)local_ad8;
    iVar3 = 0;
    local_af8.bIsDynamic = false;
    local_af8.bIsExternal = false;
    local_af8.End = (wchar_t *)&local_9d8;
    local_af8.CurPos = (wchar_t *)local_ad8;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_ad8;
    if (&local_9d8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_ad8[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_af8,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_af8.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_af8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_c10 = 2;
    local_c18 = L"/A";
    local_c28._12_4_ = uStack_c0c;
    local_c28.Size = 2;
    local_c28.DataPtr = L"/A";
    FPathViews::AppendPath(&local_af8,&local_c28);
    iVar3 = (int)((longlong)local_af8.CurPos - (longlong)local_af8.Base >> 1);
    if (iVar3 == 0) {
LAB_141d36045:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"/A";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_af8.Base;
      local_c58 = (undefined4)((longlong)local_af8.CurPos - (longlong)local_af8.Base >> 1);
      ::FString::PrintfImpl(&local_c08,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_c08,0);
      if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c08.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_af8.Base,L"/A",(longlong)iVar3);
      if ((iVar4 != 0) || (L"/A"[iVar3] != L'\0')) goto LAB_141d36045;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_af8);
    local_9d8.Base = (wchar_t *)local_9b8;
    local_9d8.bIsDynamic = false;
    local_9d8.bIsExternal = false;
    iVar3 = 0;
    local_9d8.End = (wchar_t *)&local_8b8;
    local_9d8.CurPos = (wchar_t *)local_9b8;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_9b8;
    if (&local_8b8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_9b8[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_9d8,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_9d8.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_9d8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_bf0 = 2;
    local_bf8 = L"\\A";
    local_c28._12_4_ = uStack_bec;
    local_c28.Size = 2;
    local_c28.DataPtr = L"\\A";
    FPathViews::AppendPath(&local_9d8,&local_c28);
    iVar3 = (int)((longlong)local_9d8.CurPos - (longlong)local_9d8.Base >> 1);
    if (iVar3 == 0) {
LAB_141d361a8:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"\\A";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_9d8.Base;
      local_c58 = (undefined4)((longlong)local_9d8.CurPos - (longlong)local_9d8.Base >> 1);
      ::FString::PrintfImpl(&local_be8,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_be8,0);
      if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_be8.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_9d8.Base,L"\\A",(longlong)iVar3);
      if ((iVar4 != 0) || (L"\\A"[iVar3] != L'\0')) goto LAB_141d361a8;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_9d8);
    local_8b8.Base = (wchar_t *)local_898;
    local_8b8.bIsDynamic = false;
    local_8b8.bIsExternal = false;
    iVar3 = 0;
    local_8b8.End = (wchar_t *)&local_798;
    local_8b8.CurPos = (wchar_t *)local_898;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_898;
    if (&local_798 < (TStringBuilderBase<wchar_t> *)((longlong)&local_898[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_8b8,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_8b8.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_8b8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_bd0 = 4;
    local_bd8 = L"/A/B";
    local_c28._12_4_ = uStack_bcc;
    local_c28.Size = 4;
    local_c28.DataPtr = L"/A/B";
    FPathViews::AppendPath(&local_8b8,&local_c28);
    iVar3 = (int)((longlong)local_8b8.CurPos - (longlong)local_8b8.Base >> 1);
    if (iVar3 == 0) {
LAB_141d36308:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"/A/B";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_8b8.Base;
      local_c58 = (undefined4)((longlong)local_8b8.CurPos - (longlong)local_8b8.Base >> 1);
      ::FString::PrintfImpl(&local_bc8,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_bc8,0);
      if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_8b8.Base,L"/A/B",(longlong)iVar3);
      if ((iVar4 != 0) || (L"/A/B"[iVar3] != L'\0')) goto LAB_141d36308;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8b8);
    local_798.Base = (wchar_t *)local_778;
    local_798.bIsDynamic = false;
    local_798.bIsExternal = false;
    iVar3 = 0;
    local_798.End = (wchar_t *)&local_678;
    local_798.CurPos = (wchar_t *)local_778;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_778;
    if (&local_678 < (TStringBuilderBase<wchar_t> *)((longlong)&local_778[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_798,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_798.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_798.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_bb0 = 4;
    local_bb8 = L"\\A\\B";
    local_c28._12_4_ = uStack_bac;
    local_c28.Size = 4;
    local_c28.DataPtr = L"\\A\\B";
    FPathViews::AppendPath(&local_798,&local_c28);
    iVar3 = (int)((longlong)local_798.CurPos - (longlong)local_798.Base >> 1);
    if (iVar3 == 0) {
LAB_141d36468:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"\\A\\B";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_798.Base;
      local_c58 = (undefined4)((longlong)local_798.CurPos - (longlong)local_798.Base >> 1);
      ::FString::PrintfImpl(&local_ba8,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_ba8,0);
      if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_798.Base,L"\\A\\B",(longlong)iVar3);
      if ((iVar4 != 0) || (L"\\A\\B"[iVar3] != L'\0')) goto LAB_141d36468;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_798);
    local_678.Base = (wchar_t *)local_658;
    local_678.bIsDynamic = false;
    local_678.bIsExternal = false;
    iVar3 = 0;
    local_678.End = (wchar_t *)&local_558;
    local_678.CurPos = (wchar_t *)local_658;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_658;
    if (&local_558 < (TStringBuilderBase<wchar_t> *)((longlong)&local_658[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_678,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_678.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_678.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_b90 = 3;
    local_b98 = L"//A";
    local_c28._12_4_ = uStack_b8c;
    local_c28.Size = 3;
    local_c28.DataPtr = L"//A";
    FPathViews::AppendPath(&local_678,&local_c28);
    iVar3 = (int)((longlong)local_678.CurPos - (longlong)local_678.Base >> 1);
    if (iVar3 == 0) {
LAB_141d365c8:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"//A";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_678.Base;
      local_c58 = (undefined4)((longlong)local_678.CurPos - (longlong)local_678.Base >> 1);
      ::FString::PrintfImpl(&local_b88,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_b88,0);
      if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b88.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_678.Base,L"//A",(longlong)iVar3);
      if ((iVar4 != 0) || (L"//A"[iVar3] != L'\0')) goto LAB_141d365c8;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_678);
    local_558.Base = (wchar_t *)local_538;
    local_558.bIsDynamic = false;
    local_558.bIsExternal = false;
    iVar3 = 0;
    local_558.End = (wchar_t *)&local_438;
    local_558.CurPos = (wchar_t *)local_538;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_538;
    if (&local_438 < (TStringBuilderBase<wchar_t> *)((longlong)&local_538[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_558,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_558.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_558.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_b70 = 3;
    local_b78 = L"\\\\A";
    local_c28._12_4_ = uStack_b6c;
    local_c28.Size = 3;
    local_c28.DataPtr = L"\\\\A";
    FPathViews::AppendPath(&local_558,&local_c28);
    iVar3 = (int)((longlong)local_558.CurPos - (longlong)local_558.Base >> 1);
    if (iVar3 == 0) {
LAB_141d36728:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"\\\\A";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_558.Base;
      local_c58 = (undefined4)((longlong)local_558.CurPos - (longlong)local_558.Base >> 1);
      ::FString::PrintfImpl(&local_b68,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_b68,0);
      if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b68.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_558.Base,L"\\\\A",(longlong)iVar3);
      if ((iVar4 != 0) || (L"\\\\A"[iVar3] != L'\0')) goto LAB_141d36728;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_558);
    local_438.Base = (wchar_t *)local_418;
    local_438.bIsDynamic = false;
    local_438.bIsExternal = false;
    iVar3 = 0;
    local_438.End = (wchar_t *)&local_318;
    local_438.CurPos = (wchar_t *)local_418;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_418;
    if (&local_318 < (TStringBuilderBase<wchar_t> *)((longlong)&local_418[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_438.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_438.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_b50 = 5;
    local_b58 = L"//A/B";
    local_c28._12_4_ = uStack_b4c;
    local_c28.Size = 5;
    local_c28.DataPtr = L"//A/B";
    FPathViews::AppendPath(&local_438,&local_c28);
    iVar3 = (int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1);
    if (iVar3 == 0) {
LAB_141d36888:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"//A/B";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_438.Base;
      local_c58 = (undefined4)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1);
      ::FString::PrintfImpl(&local_b48,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_b48,0);
      if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_438.Base,L"//A/B",(longlong)iVar3);
      if ((iVar4 != 0) || (L"//A/B"[iVar3] != L'\0')) goto LAB_141d36888;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
    local_318.Base = (wchar_t *)local_2f8;
    local_318.bIsDynamic = false;
    local_318.bIsExternal = false;
    iVar3 = 0;
    local_318.End = (wchar_t *)&local_1f8;
    local_318.CurPos = (wchar_t *)local_2f8;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_2f8;
    if (&local_1f8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_2f8[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_318,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_318.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_318.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_b30 = 5;
    local_b38 = L"\\\\A\\B";
    local_c28._12_4_ = uStack_b2c;
    local_c28.Size = 5;
    local_c28.DataPtr = L"\\\\A\\B";
    FPathViews::AppendPath(&local_318,&local_c28);
    iVar3 = (int)((longlong)local_318.CurPos - (longlong)local_318.Base >> 1);
    if (iVar3 == 0) {
LAB_141d369e8:
      pFVar7 = FAutomationTestFramework::Get();
      local_c48 = L"\\\\A\\B";
      pFVar1 = pFVar7->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      local_c50 = (TStringBuilderBase<wchar_t> *)local_318.Base;
      local_c58 = (undefined4)((longlong)local_318.CurPos - (longlong)local_318.Base >> 1);
      ::FString::PrintfImpl(&local_b28,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
      (*pcVar2)(pFVar1,&local_b28,0);
      if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_318.Base,L"\\\\A\\B",(longlong)iVar3);
      if ((iVar4 != 0) || (L"\\\\A\\B"[iVar3] != L'\0')) goto LAB_141d369e8;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_318);
    `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
              (local_c38,_Str,L"C:/A",L"C:/A");
    `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
              (local_c38,_Str,L"C:\\A",L"C:\\A");
    `FPathViewsAppendPathTest::TestBody'::__l2::<lambda_1>::operator()
              (local_c38,_Str,L"C:/A/B",L"C:/A/B");
    local_1f8.Base = (wchar_t *)local_1d8;
    local_1f8.bIsDynamic = false;
    local_1f8.bIsExternal = false;
    iVar3 = 0;
    local_1f8.End = (wchar_t *)local_d8;
    local_1f8.CurPos = (wchar_t *)local_1d8;
    if (_Str != (wchar_t *)0x0) {
      sVar5 = wcslen(_Str);
      iVar3 = (int)sVar5;
    }
    uVar9 = (ulong64)iVar3;
    pTVar10 = local_1d8;
    if (local_d8 < (wchar_t **)((longlong)&local_1d8[0].Base + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1f8,uVar9);
      pTVar10 = (TStringBuilderBase<wchar_t> *)local_1f8.CurPos;
    }
    if (iVar3 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy(pTVar10,_Str,uVar9 * 2);
      local_1f8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    }
    uStack_b10 = 6;
    local_b18 = L"C:\\A\\B";
    local_c28._12_4_ = uStack_b0c;
    local_c28.Size = 6;
    local_c28.DataPtr = L"C:\\A\\B";
    FPathViews::AppendPath(&local_1f8,&local_c28);
    lVar8 = (longlong)local_1f8.CurPos - (longlong)local_1f8.Base >> 1;
    iVar3 = (int)lVar8;
    if (iVar3 == 0) {
      if (u_C__A_B[0] != (wchar_t)lVar8) {
LAB_141d36bad:
        pFVar7 = FAutomationTestFramework::Get();
        local_c48 = L"C:\\A\\B";
        pFVar1 = pFVar7->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        local_c50 = (TStringBuilderBase<wchar_t> *)local_1f8.Base;
        local_c58 = (undefined4)((longlong)local_1f8.CurPos - (longlong)local_1f8.Base >> 1);
        ::FString::PrintfImpl
                  (&local_b08,L"AppendPath(\"%s\", \"%s\") == \"%.*s\", expected \"%s\".");
        (*pcVar2)(pFVar1,&local_b08,0);
        if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b08.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      iVar4 = FGenericPlatformStricmp::Strnicmp(local_1f8.Base,L"C:\\A\\B",(longlong)iVar3);
      if ((iVar4 != 0) || (L"C:\\A\\B"[iVar3] != L'\0')) goto LAB_141d36bad;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1f8);
    ppwVar11 = ppwVar11 + 1;
    if (ppwVar11 == &local_40) {
      return;
    }
  } while( true );
}

