// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbd330

EAutomationTestFlags __thiscall UE::String::FStringJoinTest::GetTestFlags(FStringJoinTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbd340

bool __thiscall UE::String::FStringJoinTest::IsStressTest(FStringJoinTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbd350

uint __thiscall UE::String::FStringJoinTest::GetRequiredDeviceNum(FStringJoinTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbd360

FString * __thiscall
UE::String::FStringJoinTest::GetTestSourceFileName
          (FStringJoinTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\String\\JoinTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbd390

int __thiscall UE::String::FStringJoinTest::GetTestSourceFileLine(FStringJoinTest *this)

{
  return 0xf;
}

// GetTests @ 141cbd3a0

/* WARNING: Removing unreachable block (ram,0x000141cbd51e) */

void __thiscall
UE::String::FStringJoinTest::GetTests
          (FStringJoinTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 141cbd540

bool __thiscall UE::String::FStringJoinTest::RunTest(FStringJoinTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbd570

FString * __thiscall
UE::String::FStringJoinTest::GetBeautifiedTestName
          (FStringJoinTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStringJoinTest @ 141ced1a0

FStringJoinTest * __thiscall
UE::String::FStringJoinTest::FStringJoinTest(FStringJoinTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringJoinTest_String_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::Join");
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
  ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141d455a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d45c5b) */
/* WARNING: Removing unreachable block (ram,0x000141d45ea1) */
/* WARNING: Removing unreachable block (ram,0x000141d46048) */
/* WARNING: Removing unreachable block (ram,0x000141d45aba) */
/* WARNING: Removing unreachable block (ram,0x000141d458fd) */
/* WARNING: Removing unreachable block (ram,0x000141d45754) */
/* WARNING: Removing unreachable block (ram,0x000141d46437) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall UE::String::FStringJoinTest::TestBody(FStringJoinTest *this,FString *param_1)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FAutomationTestBase *pFVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  TStringView<wchar_t> *pTVar12;
  bool bVar13;
  int iVar14;
  FAutomationTestFramework *pFVar15;
  void *pvVar16;
  TStringBuilderBase<wchar_t> *pTVar17;
  FString *pFVar18;
  ulong64 uVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  undefined8 **ppuVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  TArrayView<TStringView<wchar_t>_const_,int> local_2e8;
  int local_2d8 [4];
  undefined1 local_2c8 [12];
  int iStack_2bc;
  wchar_t *local_2b8;
  wchar_t (*local_2b0) [2];
  undefined1 *local_2a8;
  undefined1 local_2a0 [12];
  int iStack_294;
  undefined1 local_290 [16];
  undefined8 *local_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined8 *local_258 [2];
  FString local_248;
  wchar_t *local_238;
  undefined4 local_230;
  FString local_228;
  wchar_t *local_218;
  undefined4 local_210;
  FString local_208;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  undefined1 local_168 [32];
  TStringView<wchar_t> local_148 [16];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_318;
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)&local_2e8,L"Join");
  (*pcVar9)(pFVar8,&local_2e8,0,0);
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  local_248.Data.ArrayNum = 3;
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15071ae50;
  pwVar21 = (wchar_t *)(local_168 + 0x20);
  local_230 = 3;
  local_238 = L"DEF";
  pFVar18 = &local_248;
  local_168._0_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_168[0x18] = false;
  local_168[0x19] = false;
  bVar13 = true;
  lVar23 = 2;
  local_168._8_8_ = pwVar21;
  do {
    if (bVar13) {
      bVar13 = false;
    }
    else {
      if ((ulonglong)local_168._16_8_ < pwVar21 + 2) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,2);
        pwVar21 = (wchar_t *)local_168._8_8_;
      }
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,L", ",4);
      pwVar21 = (wchar_t *)((longlong)pvVar16 + 4);
      local_168._8_8_ = pwVar21;
    }
    uVar5 = (pFVar18->Data).ArrayNum;
    pFVar10 = (pFVar18->Data).AllocatorInstance.Data;
    uVar19 = (ulong64)(int)uVar5;
    if ((ulonglong)local_168._16_8_ < pwVar21 + uVar19) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,uVar19);
      pwVar21 = (wchar_t *)local_168._8_8_;
    }
    if (uVar5 != 0) {
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,pFVar10,uVar19 * 2);
      pwVar21 = (wchar_t *)(uVar19 * 2 + (longlong)pvVar16);
      local_168._8_8_ = pwVar21;
    }
    pFVar18 = pFVar18 + 1;
  } while (pFVar18 != &local_228);
  if (((int)((longlong)pwVar21 - local_168._0_8_ >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, DEF",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ::FString::FString(&local_1e8,L"ABC");
  ::FString::FString(&local_1d8,L"DEF");
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  pwVar21 = (wchar_t *)(local_168 + 0x20);
  local_168._16_8_ = local_48;
  pFVar18 = &local_1e8;
  bVar13 = true;
  local_168._8_8_ = pwVar21;
  do {
    if (bVar13) {
      bVar13 = false;
    }
    else {
      if ((ulonglong)local_168._16_8_ < pwVar21 + 2) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,2);
        pwVar21 = (wchar_t *)local_168._8_8_;
      }
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,L", ",4);
      pwVar21 = (wchar_t *)((longlong)pvVar16 + 4);
      local_168._8_8_ = pwVar21;
    }
    iVar4 = (pFVar18->Data).ArrayNum;
    pFVar10 = (pFVar18->Data).AllocatorInstance.Data;
    iVar14 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar14 = 0;
    }
    uVar19 = (ulong64)iVar14;
    if ((ulonglong)local_168._16_8_ < pwVar21 + uVar19) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,uVar19);
      pwVar21 = (wchar_t *)local_168._8_8_;
    }
    if (iVar14 != 0) {
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,pFVar10,uVar19 * 2);
      pwVar21 = (wchar_t *)(uVar19 * 2 + (longlong)pvVar16);
      local_168._8_8_ = pwVar21;
    }
    pFVar18 = pFVar18 + 1;
  } while (pFVar18 != &local_1c8);
  if (((int)((longlong)pwVar21 - local_168._0_8_ >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, DEF",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  pFVar18 = &local_1c8;
  lVar20 = 2;
  do {
    pFVar10 = pFVar18[-1].Data.AllocatorInstance.Data;
    pFVar18 = pFVar18 + -1;
    lVar20 = lVar20 + -1;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
  } while (lVar20 != 0);
  if (bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  local_228.Data.ArrayNum = 3;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15071ae50;
  pwVar21 = (wchar_t *)(local_168 + 0x20);
  local_210 = 3;
  local_218 = L"DEF";
  pFVar18 = &local_228;
  local_168._0_8_ = local_168 + 0x20;
  bVar13 = true;
  local_168._16_8_ = local_48;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._8_8_ = pwVar21;
  do {
    if (bVar13) {
      bVar13 = false;
    }
    else {
      if ((ulonglong)local_168._16_8_ < pwVar21 + 2) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,2);
        pwVar21 = (wchar_t *)local_168._8_8_;
      }
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,L", ",4);
      pwVar21 = (wchar_t *)((longlong)pvVar16 + 4);
      local_168._8_8_ = pwVar21;
    }
    uVar6 = (pFVar18->Data).ArrayNum;
    pFVar10 = (pFVar18->Data).AllocatorInstance.Data;
    uVar19 = (ulong64)(int)uVar6;
    if ((ulonglong)local_168._16_8_ < pwVar21 + uVar19) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,uVar19);
      pwVar21 = (wchar_t *)local_168._8_8_;
    }
    if (uVar6 != 0) {
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,pFVar10,uVar19 * 2);
      pwVar21 = (wchar_t *)(uVar19 * 2 + (longlong)pvVar16);
      local_168._8_8_ = pwVar21;
    }
    pFVar18 = pFVar18 + 1;
  } while (pFVar18 != &local_208);
  if (((int)((longlong)pwVar21 - local_168._0_8_ >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, DEF",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ::FString::FString(&local_1c8,L"ABC");
  ::FString::FString(&local_1b8,L"DEF");
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  pwVar21 = (wchar_t *)(local_168 + 0x20);
  local_168._16_8_ = local_48;
  pFVar18 = &local_1c8;
  bVar13 = true;
  local_168._8_8_ = pwVar21;
  do {
    if (bVar13) {
      bVar13 = false;
    }
    else {
      if ((ulonglong)local_168._16_8_ < pwVar21 + 2) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,2);
        pwVar21 = (wchar_t *)local_168._8_8_;
      }
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,L", ",4);
      pwVar21 = (wchar_t *)((longlong)pvVar16 + 4);
      local_168._8_8_ = pwVar21;
    }
    iVar4 = (pFVar18->Data).ArrayNum;
    pFVar10 = (pFVar18->Data).AllocatorInstance.Data;
    iVar14 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar14 = 0;
    }
    uVar19 = (ulong64)iVar14;
    if ((ulonglong)local_168._16_8_ < pwVar21 + uVar19) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,uVar19);
      pwVar21 = (wchar_t *)local_168._8_8_;
    }
    if (iVar14 != 0) {
      pvVar16 = FGenericPlatformString::Memcpy(pwVar21,pFVar10,uVar19 * 2);
      pwVar21 = (wchar_t *)(uVar19 * 2 + (longlong)pvVar16);
      local_168._8_8_ = pwVar21;
    }
    pFVar18 = pFVar18 + 1;
  } while (pFVar18 != &local_1a8);
  if (((int)((longlong)pwVar21 - local_168._0_8_ >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, DEF",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  pFVar18 = &local_1a8;
  lVar20 = 2;
  do {
    pFVar10 = pFVar18[-1].Data.AllocatorInstance.Data;
    pFVar18 = pFVar18 + -1;
    lVar20 = lVar20 + -1;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
  } while (lVar20 != 0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)&local_2e8,L"JoinBy");
  (*pcVar9)(pFVar8,&local_2e8,0,0);
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  ::FString::FString(&local_1a8,L"ABC");
  ::FString::FString(&local_198,L"DEF");
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  pFVar18 = &local_1a8;
  bVar13 = true;
  do {
    if (bVar13) {
      bVar13 = false;
    }
    else {
      if ((ulonglong)local_168._16_8_ < (wchar_t *)(local_168._8_8_ + 4)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,2);
      }
      pvVar16 = FGenericPlatformString::Memcpy((void *)local_168._8_8_,L", ",4);
      local_168._8_8_ = (longlong)pvVar16 + 4;
    }
    ::FString::ToLower(pFVar18,(FString *)&local_2e8);
    pTVar12 = local_2e8.DataPtr;
    iVar14 = local_2e8.ArrayNum + -1;
    if (local_2e8.ArrayNum == 0) {
      iVar14 = 0;
    }
    uVar19 = (ulong64)iVar14;
    if ((ulonglong)local_168._16_8_ < (wchar_t *)(local_168._8_8_ + uVar19 * 2)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_168,uVar19);
    }
    if (iVar14 != 0) {
      pvVar16 = FGenericPlatformString::Memcpy((void *)local_168._8_8_,pTVar12,uVar19 * 2);
      local_168._8_8_ = uVar19 * 2 + (longlong)pvVar16;
    }
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
    pFVar18 = pFVar18 + 1;
  } while (pFVar18 != &local_188);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"abc, def",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  pFVar18 = &local_188;
  lVar20 = 2;
  do {
    pFVar10 = pFVar18[-1].Data.AllocatorInstance.Data;
    pFVar18 = pFVar18 + -1;
    lVar20 = lVar20 + -1;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
  } while (lVar20 != 0);
  if (bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ::FString::FString(&local_188,L"ABC");
  ::FString::FString(&local_178,L"DEF");
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  pFVar18 = &local_188;
  local_168._8_8_ = local_168 + 0x20;
  bVar13 = true;
  local_168._16_8_ = local_48;
  do {
    if (bVar13) {
      bVar13 = false;
    }
    else {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)local_168,L", ",2);
    }
    ::FString::ToLower(pFVar18,(FString *)&local_2e8);
    iVar14 = local_2e8.ArrayNum + -1;
    if (local_2e8.ArrayNum == 0) {
      iVar14 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)local_168,(wchar_t *)local_2e8.DataPtr,iVar14);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
    pFVar18 = pFVar18 + 1;
  } while (pFVar18 != (FString *)local_168);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"abc, def",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  puVar24 = local_168;
  lVar20 = 2;
  do {
    puVar1 = (undefined8 *)(puVar24 + -0x10);
    puVar24 = puVar24 + -0x10;
    lVar20 = lVar20 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar20 != 0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)&local_2e8,L"JoinQuoted");
  (*pcVar9)(pFVar8,&local_2e8,0,0);
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  local_2e8.DataPtr = (TStringView<wchar_t> *)local_2c8;
  local_2b8 = L"DEF";
  local_2a0._0_8_ = &local_2e8;
  local_2c8._0_8_ = L"ABC";
  local_2c8._8_4_ = 3;
  local_2b0 = (wchar_t (*) [2])CONCAT44(local_2b0._4_4_,3);
  local_2e8.ArrayNum = 2;
  local_290._0_8_ = L", ";
  local_290._8_8_ = L"|";
  TStringBuilderWithBuffer<wchar_t,128>::
  TStringBuilderWithBuffer<wchar_t,128><UE::String::Private::TJoinQuotedBy<TArrayView<TStringView<wchar_t>_const_,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>_>
            ((TStringBuilderWithBuffer<wchar_t,128> *)local_168,InPlace,
             (TJoinQuotedBy<TArrayView<TStringView<wchar_t>_const_,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>
              *)local_2a0);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|ABC|, |DEF|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ::FString::FString((FString *)local_2a0,L"ABC");
  ::FString::FString((FString *)local_290,L"DEF");
  local_2e8.DataPtr = (TStringView<wchar_t> *)local_2a0;
  local_2e8.ArrayNum = 2;
  local_2c8._0_8_ = &local_2e8;
  local_2b8 = L", ";
  local_168._0_8_ = local_168 + 0x20;
  local_2b0 = (wchar_t (*) [2])0x150628d84;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_168[0x18] = false;
  local_168[0x19] = false;
  String::Private::
  operator<<<TArrayView<FString_const_,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168,
             (TJoinQuotedBy<TArrayView<FString_const_,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>
              *)local_2c8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|ABC|, |DEF|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  ppuVar22 = &local_280;
  lVar20 = 2;
  do {
    ppuVar2 = ppuVar22 + -2;
    ppuVar22 = ppuVar22 + -2;
    lVar20 = lVar20 + -1;
    if (*ppuVar2 != (undefined8 *)0x0) {
      FMemory::Free(*ppuVar2);
    }
  } while (lVar20 != 0);
  if (bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  local_208.Data.ArrayNum = 3;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15071ae50;
  local_168._0_8_ = local_168 + 0x20;
  local_1f8 = L"DEF";
  pFVar18 = &local_208;
  local_168._8_8_ = local_168 + 0x20;
  local_1f0 = 3;
  local_168._16_8_ = local_48;
  local_168[0x18] = false;
  local_168[0x19] = false;
  bVar13 = true;
  do {
    if (bVar13) {
      bVar13 = false;
    }
    else {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)local_168,L", ",2);
    }
    pTVar17 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        ((TStringBuilderBase<wchar_t> *)local_168,L"|",1);
    uVar7 = (pFVar18->Data).ArrayNum;
    pTVar17 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (pTVar17,(wchar_t *)(pFVar18->Data).AllocatorInstance.Data,uVar7);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar17,L"|",1);
    pFVar18 = pFVar18 + 1;
  } while (pFVar18 != &local_1e8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|ABC|, |DEF|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ::FString::FString((FString *)local_278,L"ABC");
  ::FString::FString((FString *)local_268,L"DEF");
  local_2c8._0_8_ = local_278;
  local_2b0 = (wchar_t (*) [2])0x150628d84;
  local_168._0_8_ = local_168 + 0x20;
  local_2b8 = L", ";
  local_168._8_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._16_8_ = local_48;
  String::Private::
  operator<<<FString_const_(&)[2],FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168,
             (TJoinQuotedBy<FString_const_(&)[2],FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>
              *)local_2c8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|ABC|, |DEF|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ppuVar22 = local_258;
  lVar20 = 2;
  do {
    ppuVar2 = ppuVar22 + -2;
    ppuVar22 = ppuVar22 + -2;
    lVar20 = lVar20 + -1;
    if (*ppuVar2 != (undefined8 *)0x0) {
      FMemory::Free(*ppuVar2);
    }
  } while (lVar20 != 0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)&local_2e8,L"JoinQuotedBy");
  (*pcVar9)(pFVar8,&local_2e8,0,0);
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  ::FString::FString((FString *)local_2a0,L"ABC");
  ::FString::FString((FString *)local_290,L"DEF");
  local_2e8.DataPtr = (TStringView<wchar_t> *)local_2a0;
  local_2e8.ArrayNum = 2;
  local_2c8._0_8_ = &local_2e8;
  local_2b8 = L", ";
  local_168._0_8_ = local_168 + 0x20;
  local_2b0 = (wchar_t (*) [2])0x150628d84;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_168[0x18] = false;
  local_168[0x19] = false;
  String::Private::operator<<<TArrayView<FString_const_,int>,`UE::String::FStringJoinTest::TestBody'
  ::__l37::<lambda_4>_wchar_t_const_____3__wchar_t_const_____2__wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168,
             (TJoinQuotedBy<TArrayView<FString_const_,int>,_protected:_void___cdecl_UE::String::FStringJoinTest::TestBody(FString_const_&)_::_37_::<lambda_4>,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>
              *)local_2c8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|abc|, |def|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  ppuVar22 = &local_280;
  lVar20 = 2;
  do {
    ppuVar2 = ppuVar22 + -2;
    ppuVar22 = ppuVar22 + -2;
    lVar20 = lVar20 + -1;
    if (*ppuVar2 != (undefined8 *)0x0) {
      FMemory::Free(*ppuVar2);
    }
  } while (lVar20 != 0);
  if (bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ::FString::FString((FString *)local_278,L"ABC");
  ::FString::FString((FString *)local_268,L"DEF");
  local_2c8._0_8_ = local_278;
  local_2b0 = (wchar_t (*) [2])0x150628d84;
  local_168._0_8_ = local_168 + 0x20;
  local_2b8 = L", ";
  local_168._8_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._16_8_ = local_48;
  String::Private::operator<<<FString_const_(&)[2],`UE::String::FStringJoinTest::TestBody'::__l40::
  <lambda_5>_wchar_t_const_____3__wchar_t_const_____2__wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168,
             (TJoinQuotedBy<FString_const_(&)[2],_protected:_void___cdecl_UE::String::FStringJoinTest::TestBody(FString_const_&)_::_40_::<lambda_5>,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>
              *)local_2c8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|abc|, |def|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  ppuVar22 = local_258;
  do {
    ppuVar2 = ppuVar22 + -2;
    ppuVar22 = ppuVar22 + -2;
    lVar23 = lVar23 + -1;
    if (*ppuVar2 != (undefined8 *)0x0) {
      FMemory::Free(*ppuVar2);
    }
  } while (lVar23 != 0);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)&local_2e8,L"JoinTuple");
  (*pcVar9)(pFVar8,&local_2e8,0,0);
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  local_168._0_8_ = local_168 + 0x20;
  iStack_2bc = iStack_294;
  local_2c8._8_4_ = 3;
  local_168._8_8_ = local_168 + 0x20;
  local_2c8._0_8_ = L"ABC";
  local_168._16_8_ = local_48;
  local_2f0[0] = (FScriptContainerElement)0x3;
  local_2a0._0_8_ = local_2f8;
  unique0x00009c00 = local_2f0;
  local_290._8_8_ = local_168;
  local_2b8 = (wchar_t *)CONCAT44(local_2b8._4_4_,0x7b);
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_2f8[0] = (FIdentityFunctor)0x1;
  local_290._0_8_ = L", ";
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleByTo<TTuple<TStringView<wchar_t>,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t>_::__l2::<lambda_1>,TTuple<TStringView<wchar_t>,int>_&>
            ((<lambda_1> *)local_2a0,(TTuple<TStringView<wchar_t>,int> *)local_2c8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, 123",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  pFVar18 = ::FString::FString((FString *)local_278,L"ABC");
  local_290._0_4_ = 0x7b;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_2b8 = L", ";
  local_2a0._0_8_ = (pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  unique0x10001a88 = *(undefined1 **)&(pFVar18->Data).ArrayNum;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  local_168._0_8_ = local_168 + 0x20;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_2f8[0] = local_2c8[8];
  local_2c8._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_2b0 = (wchar_t (*) [2])local_168;
  local_168[0x18] = false;
  local_168[0x19] = false;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleByTo<TTuple<FString,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t>_::__l2::<lambda_1>,TTuple<FString,int>_&>
            ((<lambda_1> *)local_2c8,(TTuple<FString,int> *)local_2a0);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, 123",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  if (bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  local_2c8._0_8_ = L"ABC";
  iStack_2bc = iStack_294;
  local_2c8._8_4_ = 3;
  local_168._0_8_ = local_168 + 0x20;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_2f8[0] = (FIdentityFunctor)0x3;
  local_2a0._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_290._8_8_ = local_168;
  local_2b8 = (wchar_t *)CONCAT44(local_2b8._4_4_,0x7b);
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_290._0_8_ = L", ";
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleByTo<TTuple<TStringView<wchar_t>,int>_const_&,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t>_::__l2::<lambda_1>,TTuple<TStringView<wchar_t>,int>_const_&>
            ((<lambda_1> *)local_2a0,(TTuple<TStringView<wchar_t>,int> *)local_2c8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, 123",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  pFVar18 = ::FString::FString((FString *)local_278,L"ABC");
  local_290._0_4_ = 0x7b;
  local_2a0._0_8_ = (pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  unique0x10001a90 = *(undefined1 **)&(pFVar18->Data).ArrayNum;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._8_8_ = local_168 + 0x20;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_168._16_8_ = local_48;
  local_2b8 = L", ";
  local_2f8[0] = local_2c8[8];
  local_2c8._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_2b0 = (wchar_t (*) [2])local_168;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleByTo<TTuple<FString,int>_const_&,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t>_::__l2::<lambda_1>,TTuple<FString,int>_const_&>
            ((<lambda_1> *)local_2c8,(TTuple<FString,int> *)local_2a0);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"ABC, 123",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)&local_2e8,L"JoinTupleBy");
  (*pcVar9)(pFVar8,&local_2e8,0,0);
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  pFVar18 = ::FString::FString((FString *)local_278,L"ABC");
  local_290._0_4_ = 0x7b;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_2b8 = L", ";
  local_2a0._0_8_ = (pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  unique0x10001a98 = *(undefined1 **)&(pFVar18->Data).ArrayNum;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  local_168._0_8_ = local_168 + 0x20;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_2f8[0] = local_2c8[8];
  local_2c8._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_2b0 = (wchar_t (*) [2])local_168;
  local_168[0x18] = false;
  local_168[0x19] = false;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleByTo<TTuple<FString,int>,_UE::String::FStringJoinTest::TestBody_::__l2::<lambda_1>,wchar_t_const_(&)[3],wchar_t>_::__l2::<lambda_1>,TTuple<FString,int>_&>
            ((<lambda_1> *)local_2c8,(TTuple<FString,int> *)local_2a0);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"abc, 123",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  if (bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  pFVar18 = ::FString::FString((FString *)local_278,L"ABC");
  local_290._0_4_ = 0x7b;
  local_2a0._0_8_ = (pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  unique0x10001aa0 = *(undefined1 **)&(pFVar18->Data).ArrayNum;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._8_8_ = local_168 + 0x20;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_168._16_8_ = local_48;
  local_2b8 = L", ";
  local_2f8[0] = local_2c8[8];
  local_2c8._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_2b0 = (wchar_t (*) [2])local_168;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleByTo<TTuple<FString,int>_const_&,_UE::String::FStringJoinTest::TestBody_::__l2::<lambda_1>,wchar_t_const_(&)[3],wchar_t>_::__l2::<lambda_1>,TTuple<FString,int>_const_&>
            ((<lambda_1> *)local_2c8,(TTuple<FString,int> *)local_2a0);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 8) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"abc, 123",(wchar_t *)local_168._0_8_,8),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2e8,L"Condition failed");
    (*pcVar9)(pFVar8,&local_2e8,0);
    if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
      FMemory::Free(local_2e8.DataPtr);
    }
  }
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)&local_2e8,L"JoinTupleQuoted");
  (*pcVar9)(pFVar8,&local_2e8,0,0);
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  local_168._0_8_ = local_168 + 0x20;
  iStack_2bc = SUB84(stack0xfffffffffffffd68,4);
  local_2c8._8_4_ = 3;
  local_168._8_8_ = local_168 + 0x20;
  local_278._0_8_ = L"|ABC|, |123|";
  local_168._16_8_ = local_48;
  local_278._8_4_ = 0xc;
  local_2f8[0] = (FIdentityFunctor)0x3;
  local_2a0._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_280 = (undefined8 *)local_168;
  local_2c8._0_8_ = L"ABC";
  local_2b8 = (wchar_t *)CONCAT44(local_2b8._4_4_,0x7b);
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_290._0_8_ = L", ";
  local_290._8_8_ = L"|";
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleQuotedByTo<TTuple<TStringView<wchar_t>,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>_::__l2::<lambda_1>,TTuple<TStringView<wchar_t>,int>_&>
            ((<lambda_1> *)local_2a0,(TTuple<TStringView<wchar_t>,int> *)local_2c8);
  local_2e8.ArrayNum = (int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1);
  local_2e8.DataPtr = (TStringView<wchar_t> *)local_168._0_8_;
  bVar13 = TStringView<wchar_t>::PrivateEquals
                     ((TStringView<wchar_t> *)local_278,(TStringView<wchar_t> *)&local_2e8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  if (!bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)local_278,L"Condition failed");
    (*pcVar9)(pFVar8,local_278,0);
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  local_2e8.DataPtr = (TStringView<wchar_t> *)0x150794038;
  local_2e8.ArrayNum = 0xc;
  pFVar18 = ::FString::FString((FString *)local_2a0,L"ABC");
  local_2b8 = (wchar_t *)CONCAT44(local_2b8._4_4_,0x7b);
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_268._0_8_ = L", ";
  local_2c8._0_8_ = (pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(pFVar18->Data).ArrayNum;
  iVar14 = *piVar3;
  uVar11 = *(undefined8 *)piVar3;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  local_168._0_8_ = local_168 + 0x20;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_2c8[8] = SUB41(iVar14,0);
  local_2f8[0] = local_2c8[8];
  local_278._0_8_ = local_2f0;
  local_278._8_8_ = local_2f8;
  local_258[0] = (undefined8 *)local_168;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_268._8_8_ = L"|";
  unique0x10003596 = (undefined1 *)uVar11;
  Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
  Do<_UE::String::JoinTupleQuotedByTo<TTuple<FString,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>_::__l2::<lambda_1>,TTuple<FString,int>_&>
            ((<lambda_1> *)local_278,(TTuple<FString,int> *)local_2c8);
  local_278._8_4_ = (int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1);
  local_278._0_8_ = local_168._0_8_;
  bVar13 = TStringView<wchar_t>::PrivateEquals
                     ((TStringView<wchar_t> *)&local_2e8,(TStringView<wchar_t> *)local_278);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  if ((TArrayView<FString_const_,int> *)local_2c8._0_8_ != (TArrayView<FString_const_,int> *)0x0) {
    FMemory::Free((void *)local_2c8._0_8_);
  }
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  if (!bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)local_278,L"Condition failed");
    (*pcVar9)(pFVar8,local_278,0);
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  local_2c8._0_8_ = L"ABC";
  iStack_2bc = iStack_294;
  local_2c8._8_4_ = 3;
  local_168._0_8_ = local_168 + 0x20;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_2f8[0] = (FIdentityFunctor)0x3;
  local_2a0._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_280 = (undefined8 *)local_168;
  local_2b8 = (wchar_t *)CONCAT44(local_2b8._4_4_,0x7b);
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_290._0_8_ = L", ";
  local_290._8_8_ = L"|";
  `UE::String::
  JoinTupleQuotedByTo<TTuple<TStringView<wchar_t>,int>_const_&,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<TStringView<wchar_t>_const_&>
            (local_2a0,(TStringView<wchar_t> *)local_2c8);
  `UE::String::
  JoinTupleQuotedByTo<TTuple<TStringView<wchar_t>,int>_const_&,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<int_const_&>(local_2a0,(int *)&local_2b8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|ABC|, |123|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)local_278,L"Condition failed");
    (*pcVar9)(pFVar8,local_278,0);
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  pFVar18 = ::FString::FString((FString *)local_2a0,L"ABC");
  local_2d8[0] = 0x7b;
  local_2e8.DataPtr = (TStringView<wchar_t> *)(pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.ArrayNum = (pFVar18->Data).ArrayNum;
  local_2e8._12_4_ = (pFVar18->Data).ArrayMax;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._8_8_ = local_168 + 0x20;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_168._16_8_ = local_48;
  local_2b8 = L", ";
  local_2f8[0] = local_2c8[8];
  local_2c8._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_2a8 = local_168;
  local_2b0 = (wchar_t (*) [2])0x150628d84;
  `UE::String::
  JoinTupleQuotedByTo<TTuple<FString,int>_const_&,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<FString_const_&>(local_2c8,(FString *)&local_2e8);
  `UE::String::
  JoinTupleQuotedByTo<TTuple<FString,int>_const_&,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<int_const_&>(local_2c8,local_2d8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|ABC|, |123|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)local_278,L"Condition failed");
    (*pcVar9)(pFVar8,local_278,0);
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  pFVar15 = FAutomationTestFramework::Get();
  pFVar8 = pFVar15->CurrentTest;
  pcVar9 = *(code **)(pFVar8->_padding_ + 0x50);
  ::FString::FString((FString *)local_278,L"JoinTupleQuotedBy");
  (*pcVar9)(pFVar8,local_278,0,0);
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  pFVar18 = ::FString::FString((FString *)local_2a0,L"ABC");
  local_268._0_4_ = 0x7b;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_2b8 = L", ";
  local_278._0_8_ = (pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278._8_4_ = (pFVar18->Data).ArrayNum;
  local_278._12_4_ = (pFVar18->Data).ArrayMax;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  local_168._0_8_ = local_168 + 0x20;
  local_168._8_8_ = local_168 + 0x20;
  local_168._16_8_ = local_48;
  local_2f8[0] = local_2c8[8];
  local_2c8._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_2a8 = local_168;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_2b0 = (wchar_t (*) [2])0x150628d84;
  `UE::String::
  JoinTupleQuotedByTo<TTuple<FString,int>,`UE::String::FStringJoinTest::TestBody'::__l2::<lambda_1>,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<FString_&>(local_2c8,(FString *)local_278);
  `UE::String::
  JoinTupleQuotedByTo<TTuple<FString,int>,`UE::String::FStringJoinTest::TestBody'::__l2::<lambda_1>,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<int_&>(local_2c8,(int *)local_268);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|abc|, |123|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)local_168);
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  if (bVar13) {
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)local_278,L"Condition failed");
    (*pcVar9)(pFVar8,local_278,0);
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  pFVar18 = ::FString::FString((FString *)local_2a0,L"ABC");
  local_2d8[0] = 0x7b;
  local_2e8.DataPtr = (TStringView<wchar_t> *)(pFVar18->Data).AllocatorInstance.Data;
  (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.ArrayNum = (pFVar18->Data).ArrayNum;
  local_2e8._12_4_ = (pFVar18->Data).ArrayMax;
  (pFVar18->Data).ArrayNum = 0;
  (pFVar18->Data).ArrayMax = 0;
  if ((TArrayView<TStringView<wchar_t>_const_,int> *)local_2a0._0_8_ !=
      (TArrayView<TStringView<wchar_t>_const_,int> *)0x0) {
    FMemory::Free((void *)local_2a0._0_8_);
  }
  local_168._0_8_ = local_168 + 0x20;
  local_168[0x18] = false;
  local_168[0x19] = false;
  local_168._8_8_ = local_168 + 0x20;
  local_2f0[0] = (FScriptContainerElement)0x1;
  local_168._16_8_ = local_48;
  local_2b8 = L", ";
  local_2f8[0] = local_2c8[8];
  local_2c8._0_8_ = local_2f0;
  unique0x00009c00 = local_2f8;
  local_2a8 = local_168;
  local_2b0 = (wchar_t (*) [2])0x150628d84;
  `UE::String::
  JoinTupleQuotedByTo<TTuple<FString,int>_const_&,`UE::String::FStringJoinTest::TestBody'::__l2::<lambda_1>,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<FString_const_&>(local_2c8,(FString *)&local_2e8);
  `UE::String::
  JoinTupleQuotedByTo<TTuple<FString,int>_const_&,`UE::String::FStringJoinTest::TestBody'::__l2::<lambda_1>,wchar_t_const_(&)[3],wchar_t_const_(&)[2],wchar_t>'
  ::__l2::<lambda_1>::operator()<int_const_&>(local_2c8,local_2d8);
  if (((int)((longlong)(local_168._8_8_ - local_168._0_8_) >> 1) == 0xc) &&
     (iVar14 = FGenericPlatformStricmp::Strnicmp(L"|abc|, |123|",(wchar_t *)local_168._0_8_,0xc),
     iVar14 == 0)) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
  }
  else {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_168);
    pFVar15 = FAutomationTestFramework::Get();
    pFVar8 = pFVar15->CurrentTest;
    pcVar9 = *(code **)(pFVar8->_padding_ + 0x28);
    ::FString::FString((FString *)local_278,L"Condition failed");
    (*pcVar9)(pFVar8,local_278,0);
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  if (local_2e8.DataPtr != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_2e8.DataPtr);
  }
  return;
}

