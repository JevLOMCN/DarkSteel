// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbcaf0

EAutomationTestFlags __thiscall
FPathViewsToAbsoluteTest::GetTestFlags(FPathViewsToAbsoluteTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbcb00

bool __thiscall FPathViewsToAbsoluteTest::IsStressTest(FPathViewsToAbsoluteTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbcb10

uint __thiscall FPathViewsToAbsoluteTest::GetRequiredDeviceNum(FPathViewsToAbsoluteTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbcb20

FString * __thiscall
FPathViewsToAbsoluteTest::GetTestSourceFileName
          (FPathViewsToAbsoluteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbcb50

int __thiscall FPathViewsToAbsoluteTest::GetTestSourceFileLine(FPathViewsToAbsoluteTest *this)

{
  return 0x3f5;
}

// GetTests @ 141cbcb60

/* WARNING: Removing unreachable block (ram,0x000141cbccde) */

void __thiscall
FPathViewsToAbsoluteTest::GetTests
          (FPathViewsToAbsoluteTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbcd00

bool __thiscall FPathViewsToAbsoluteTest::RunTest(FPathViewsToAbsoluteTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbcd30

FString * __thiscall
FPathViewsToAbsoluteTest::GetBeautifiedTestName
          (FPathViewsToAbsoluteTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPathViewsToAbsoluteTest @ 141ceab50

FPathViewsToAbsoluteTest * __thiscall
FPathViewsToAbsoluteTest::FPathViewsToAbsoluteTest(FPathViewsToAbsoluteTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPathViewsToAbsoluteTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::ToAbsolute");
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

// TestBody @ 141d39f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPathViewsToAbsoluteTest::TestBody(FPathViewsToAbsoluteTest *this,FString *param_1)

{
  TStringView<wchar_t> *pTVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  TStringView<wchar_t> TVar6;
  TStringView<wchar_t> TVar7;
  FAutomationTestFramework *pFVar8;
  void *pvVar9;
  int iVar10;
  ulong64 uVar11;
  FTestPair *pFVar12;
  int iVar13;
  FTestPair *pFVar14;
  undefined1 auStack_2b8 [32];
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  wchar_t *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TStringBuilderBase<wchar_t> *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  TStringBuilderBase<wchar_t> local_228;
  TStringBuilderBase<wchar_t> local_208 [4];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [64];
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [6];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pFVar14 = PathTest::ExpectedRelativeToAbsolutePaths.DataPtr +
            PathTest::ExpectedRelativeToAbsolutePaths.ArrayNum;
  for (pFVar12 = PathTest::ExpectedRelativeToAbsolutePaths.DataPtr; pFVar12 != pFVar14;
      pFVar12 = pFVar12 + 1) {
    pwVar2 = (pFVar12->Input).DataPtr;
    uVar3._0_4_ = (pFVar12->Input).Size;
    uVar3._4_4_ = *(undefined4 *)&(pFVar12->Input).field_0xc;
    local_e8.Base = local_c8;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_e8.CurPos = local_c8;
    pTVar1 = &pFVar12->Expected;
    pwVar4 = pTVar1->DataPtr;
    uVar5._0_4_ = (pFVar12->Expected).Size;
    uVar5._4_4_ = *(undefined4 *)&(pFVar12->Expected).field_0xc;
    TVar7 = *pTVar1;
    TVar6 = *pTVar1;
    local_e8.End = (wchar_t *)local_48;
    local_298 = PathTest::BaseDir;
    local_288.DataPtr = pwVar2;
    local_288._8_8_ = uVar3;
    FPathViews::ToAbsolutePath(&local_298,&local_288,&local_e8);
    pFVar8 = FAutomationTestFramework::Get();
    local_278 = local_e8.Base;
    uStack_270 = (undefined4)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1);
    local_288._12_4_ = uStack_26c;
    local_288.Size = uStack_270;
    local_288.DataPtr = local_e8.Base;
    local_298 = TVar6;
    FAutomationTestBase::TestEqual(pFVar8->CurrentTest,L"ToAbsolutePath",&local_288,&local_298);
    local_228.Base = (wchar_t *)local_208;
    local_228.bIsDynamic = false;
    local_228.bIsExternal = false;
    local_228.End = (wchar_t *)&local_188;
    local_228.CurPos = (wchar_t *)local_208;
    uVar11 = (ulong64)(int)uVar3;
    if (&local_188 < (TStringBuilderBase<wchar_t> *)((longlong)&local_208[0].Base + uVar11 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_228,uVar11);
    }
    if ((int)uVar3 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(local_228.CurPos,pwVar2,uVar11 * 2);
      local_228.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
    }
    local_298 = PathTest::BaseDir;
    FPathViews::ToAbsolutePathInline(&local_298,&local_228);
    pFVar8 = FAutomationTestFramework::Get();
    local_268 = (TStringBuilderBase<wchar_t> *)local_228.Base;
    uStack_260 = (undefined4)((longlong)local_228.CurPos - (longlong)local_228.Base >> 1);
    local_288._12_4_ = uStack_25c;
    local_288.Size = uStack_260;
    local_288.DataPtr = local_228.Base;
    local_298.DataPtr = pwVar4;
    local_298._8_8_ = uVar5;
    FAutomationTestBase::TestEqual
              (pFVar8->CurrentTest,L"ToAbsolutePathInline",&local_288,&local_298);
    local_188.Base = local_168;
    local_258 = L"\\\\la/./.././la////";
    local_188.CurPos = local_168;
    iStack_250 = 0x12;
    local_188.End = (wchar_t *)&local_e8;
    local_188.bIsDynamic = false;
    local_188.bIsExternal = false;
    pvVar9 = FGenericPlatformString::Memcpy(local_168,L"\\\\la/./.././la////",0x24);
    local_188.CurPos = (wchar_t *)((longlong)pvVar9 + 0x24);
    local_288 = PathTest::BaseDir;
    local_298.DataPtr = pwVar2;
    local_298._8_8_ = uVar3;
    FPathViews::ToAbsolutePath(&local_288,&local_298,&local_188);
    pFVar8 = FAutomationTestFramework::Get();
    local_298._12_4_ = uStack_24c;
    local_298.Size = iStack_250;
    local_248 = local_188.Base;
    iVar10 = (int)((longlong)local_188.CurPos - (longlong)local_188.Base >> 1);
    local_298.DataPtr = local_258;
    if (0x12 < iVar10) {
      iVar10 = 0x12;
    }
    iStack_240 = 0;
    if (0 < iVar10) {
      iStack_240 = iVar10;
    }
    local_288._12_4_ = uStack_23c;
    local_288.Size = iStack_240;
    local_288.DataPtr = local_188.Base;
    FAutomationTestBase::TestEqual
              (pFVar8->CurrentTest,L"ToAbsolutePath non-destructive append",&local_288,&local_298);
    pFVar8 = FAutomationTestFramework::Get();
    iVar13 = (int)((longlong)local_188.CurPos - (longlong)local_188.Base >> 1);
    iVar10 = iVar13;
    if (iVar13 + -0x12 < iVar13) {
      iVar10 = iVar13 + -0x12;
    }
    iStack_230 = 0;
    if (0 < iVar10) {
      iStack_230 = iVar10;
    }
    local_238 = local_188.Base + ((longlong)iVar13 - (longlong)iStack_230);
    local_288._12_4_ = uStack_22c;
    local_288.Size = iStack_230;
    local_288.DataPtr = local_238;
    local_298 = TVar7;
    FAutomationTestBase::TestEqual
              (pFVar8->CurrentTest,L"ToAbsolutePath non-destructive append",&local_288,&local_298);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_228);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  return;
}

