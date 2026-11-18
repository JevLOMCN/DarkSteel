// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 1414de380

EAutomationTestFlags __thiscall FStringEqualityTest::GetTestFlags(FStringEqualityTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414de390

bool __thiscall FStringEqualityTest::IsStressTest(FStringEqualityTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414de3a0

uint __thiscall FStringEqualityTest::GetRequiredDeviceNum(FStringEqualityTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414de3b0

FString * __thiscall
FStringEqualityTest::GetTestSourceFileName
          (FStringEqualityTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x57,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StringTest.cpp"
             ,0x57);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414de450

int __thiscall FStringEqualityTest::GetTestSourceFileLine(FStringEqualityTest *this)

{
  return 0x20e;
}

// GetTests @ 1414de460

/* WARNING: Removing unreachable block (ram,0x0001414de5a9) */
/* WARNING: Removing unreachable block (ram,0x0001414de674) */

void __thiscall
FStringEqualityTest::GetTests
          (FStringEqualityTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x1c,"System.Core.String.Equality",0x1c);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414de6a0

bool __thiscall FStringEqualityTest::RunTest(FStringEqualityTest *this,FString *param_1)

{
  wchar_t **ppwVar1;
  FStringEqualityTest *local_res8;
  FStringEqualityTest *local_res18;
  wchar_t *local_58;
  undefined *local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  wchar_t *local_38;
  wchar_t *local_30;
  wchar_t *local_28;
  wchar_t *local_20;
  wchar_t *local_18;
  wchar_t *local_10;
  
  local_58 = L"";
  ppwVar1 = &local_58;
  local_50 = &::u__;
  local_48 = L"a";
  local_40 = L"A";
  local_38 = L"aa";
  local_30 = L"aA";
  local_28 = L"az";
  local_20 = L"AZ";
  local_18 = L"@[";
  local_10 = L"@]";
  local_res8 = this;
  local_res18 = this;
  do {
    `FStringEqualityTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,*ppwVar1);
    `FStringEqualityTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,ppwVar1[1]);
    `FStringEqualityTest::RunTest'::__l2::<lambda_2>::operator()(&local_res18,*ppwVar1,ppwVar1[1]);
    ppwVar1 = ppwVar1 + 2;
  } while (ppwVar1 != (wchar_t **)&stack0xfffffffffffffff8);
  return true;
}

// GetBeautifiedTestName @ 1414de790

FString * __thiscall
FStringEqualityTest::GetBeautifiedTestName
          (FStringEqualityTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1c,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x1c,
             "System.Core.String.Equality",0x1c);
  return __return_storage_ptr__;
}

// operator() @ 1415933c0

void __thiscall
`FStringEqualityTest::RunTest'::__l2::<lambda_1>::operator()(void *this,wchar_t *param_1)

{
  FAutomationTestBase *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  int iVar12;
  bool bVar13;
  ForAnyElementType local_48;
  int local_40 [2];
  ForAnyElementType local_38;
  int local_30 [2];
  
  pFVar1 = *(FAutomationTestBase **)this;
  pwVar10 = L"";
  FVar7.Data = (FScriptContainerElement *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  iVar4 = 0;
  FVar9.Data = FVar7.Data;
  if ((param_1 == (wchar_t *)0x0) ||
     (FVar9.Data = (FScriptContainerElement *)0x0, *param_1 == L'\0')) {
LAB_141593476:
    pwVar6 = L"";
  }
  else {
    sVar5 = wcslen(param_1);
    uVar8 = (int)sVar5 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_48,0,local_40 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,&local_48,local_40,local_40 + 1);
    pwVar6 = (wchar_t *)local_48.Data;
    FGenericPlatformString::Memcpy(local_48.Data,param_1,(longlong)(int)uVar8 * 2);
    FVar9.Data = (FScriptContainerElement *)pwVar6;
    if (local_40[0] == 0) goto LAB_141593476;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar6,param_1);
  FAutomationTestBase::TestTrue(pFVar1,L"Self Equality C string",iVar2 == 0);
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  pFVar1 = *(FAutomationTestBase **)this;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  FVar9.Data = FVar7.Data;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar5 = wcslen(param_1);
    uVar8 = (int)sVar5 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_48,0,local_40 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,&local_48,local_40,local_40 + 1);
    FVar9.Data = local_48.Data;
    FGenericPlatformString::Memcpy(local_48.Data,param_1,(longlong)(int)uVar8 * 2);
    if (local_40[0] != 0) {
      pwVar10 = (wchar_t *)FVar9.Data;
    }
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar10,param_1);
  FAutomationTestBase::TestTrue(pFVar1,L"Self Equality C string",iVar2 == 0);
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  pFVar1 = *(FAutomationTestBase **)this;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  iVar3 = 0;
  iVar2 = iVar3;
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    local_48.Data = (FScriptContainerElement *)0x0;
    FVar9.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    FVar11.Data = FVar7.Data;
    iVar12 = iVar4;
    if (param_1 != (wchar_t *)0x0) goto LAB_141593620;
  }
  else {
    sVar5 = wcslen(param_1);
    uVar8 = (int)sVar5 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_38,0,local_30 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,&local_38,local_30,local_30 + 1);
    FVar11.Data = local_38.Data;
    FGenericPlatformString::Memcpy(local_38.Data,param_1,(longlong)(int)uVar8 * 2);
    iVar12 = local_30[0];
LAB_141593620:
    local_40[0] = 0;
    local_40[1] = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    FVar9.Data = FVar7.Data;
    if (*param_1 != L'\0') {
      sVar5 = wcslen(param_1);
      uVar8 = (int)sVar5 + 1;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (0 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,&local_48,0,local_40 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_48,local_40,local_40 + 1);
      FVar9.Data = local_48.Data;
      FGenericPlatformString::Memcpy(local_48.Data,param_1,(longlong)(int)uVar8 * 2);
      iVar2 = local_40[0];
    }
  }
  if (iVar12 == iVar2) {
    if (iVar12 < 2) {
      bVar13 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)FVar11.Data,(wchar_t *)FVar9.Data);
      bVar13 = iVar2 == 0;
    }
  }
  else {
    bVar13 = iVar2 + iVar12 == 1;
  }
  FAutomationTestBase::TestTrue(pFVar1,L"Self Equality CaseSensitive",bVar13);
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  pFVar1 = *(FAutomationTestBase **)this;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  iVar2 = iVar3;
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    local_48.Data = (FScriptContainerElement *)0x0;
    FVar9.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    FVar11.Data = FVar7.Data;
    iVar12 = iVar3;
    if (param_1 == (wchar_t *)0x0) goto LAB_14159381c;
  }
  else {
    sVar5 = wcslen(param_1);
    uVar8 = (int)sVar5 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_38,0,local_30 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,&local_38,local_30,local_30 + 1);
    FVar11.Data = local_38.Data;
    FGenericPlatformString::Memcpy(local_38.Data,param_1,(longlong)(int)uVar8 * 2);
    iVar4 = local_30[0];
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  FVar9.Data = FVar7.Data;
  iVar12 = iVar4;
  if (*param_1 != L'\0') {
    sVar5 = wcslen(param_1);
    uVar8 = (int)sVar5 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_48,0,local_40 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,&local_48,local_40,local_40 + 1);
    FVar9.Data = local_48.Data;
    FGenericPlatformString::Memcpy(local_48.Data,param_1,(longlong)(int)uVar8 * 2);
    iVar2 = local_40[0];
  }
LAB_14159381c:
  if (iVar12 == iVar2) {
    if (iVar12 < 2) {
      bVar13 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,(wchar_t *)FVar9.Data);
      bVar13 = iVar4 == 0;
    }
  }
  else {
    bVar13 = iVar2 + iVar12 == 1;
  }
  FAutomationTestBase::TestTrue(pFVar1,L"Self Equality IgnoreCase",bVar13);
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  FVar9.Data = FVar7.Data;
  iVar4 = iVar3;
  iVar2 = 0;
  if ((param_1 != (wchar_t *)0x0) && (iVar2 = 0, *param_1 != L'\0')) {
    sVar5 = wcslen(param_1);
    uVar8 = (int)sVar5 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_48,0,local_40 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,&local_48,local_40,local_40 + 1);
    FVar9.Data = local_48.Data;
    FGenericPlatformString::Memcpy(local_48.Data,param_1,(longlong)(int)uVar8 * 2);
    iVar4 = local_40[1];
    iVar2 = local_40[0];
  }
  if (iVar4 < 0x65) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0x65,&local_48,iVar2,local_40 + 1);
    FVar9.Data = local_48.Data;
    iVar2 = local_40[0];
  }
  pFVar1 = *(FAutomationTestBase **)this;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar5 = wcslen(param_1);
    uVar8 = (int)sVar5 + 1;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,&local_38,0,local_30 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,&local_38,local_30,local_30 + 1);
    FVar7.Data = local_38.Data;
    FGenericPlatformString::Memcpy(local_38.Data,param_1,(longlong)(int)uVar8 * 2);
    iVar3 = local_30[0];
  }
  if (iVar2 == iVar3) {
    if (iVar2 < 2) {
      bVar13 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,(wchar_t *)FVar7.Data);
      bVar13 = iVar4 == 0;
    }
  }
  else {
    bVar13 = iVar3 + iVar2 == 1;
  }
  FAutomationTestBase::TestTrue(pFVar1,L"Self Equality slack",bVar13);
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// operator() @ 141596130

void __thiscall
`FStringEqualityTest::RunTest'::__l2::<lambda_2>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  FString local_48;
  
  plVar1 = *(longlong **)this;
  FVar8.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar10.Data = FVar8.Data;
  iVar5 = 0;
  if ((param_1 != (wchar_t *)0x0) &&
     (FVar10.Data = (FScriptContainerElement *)0x0, *param_1 != L'\0')) {
    sVar6 = wcslen(param_1);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_1,(longlong)(int)uVar7 * 2);
    iVar5 = local_48.Data.ArrayNum;
  }
  iVar3 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar9.Data = FVar8.Data;
  iVar4 = iVar3;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar6 = wcslen(param_2);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_2,(longlong)(int)uVar7 * 2);
    iVar4 = local_48.Data.ArrayNum;
  }
  if (iVar5 == iVar4) {
    if (iVar5 < 2) {
      bVar11 = true;
    }
    else {
      iVar5 = wcscmp((wchar_t *)FVar10.Data,(wchar_t *)FVar9.Data);
      bVar11 = iVar5 == 0;
    }
  }
  else {
    bVar11 = iVar4 + iVar5 == 1;
  }
  iVar5 = wcscmp(param_1,param_2);
  if ((iVar5 == 0) != bVar11) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  plVar1 = *(longlong **)this;
  FVar10.Data = FVar8.Data;
  iVar5 = iVar3;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar6 = wcslen(param_2);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_2,(longlong)(int)uVar7 * 2);
    iVar5 = local_48.Data.ArrayNum;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar9.Data = FVar8.Data;
  iVar4 = iVar3;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar6 = wcslen(param_1);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_1,(longlong)(int)uVar7 * 2);
    iVar4 = local_48.Data.ArrayNum;
  }
  if (iVar5 == iVar4) {
    if (iVar5 < 2) {
      bVar11 = true;
    }
    else {
      iVar5 = wcscmp((wchar_t *)FVar10.Data,(wchar_t *)FVar9.Data);
      bVar11 = iVar5 == 0;
    }
  }
  else {
    bVar11 = iVar4 + iVar5 == 1;
  }
  iVar5 = wcscmp(param_2,param_1);
  if ((iVar5 == 0) != bVar11) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  plVar1 = *(longlong **)this;
  FVar10.Data = FVar8.Data;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar6 = wcslen(param_1);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_1,(longlong)(int)uVar7 * 2);
    iVar3 = local_48.Data.ArrayNum;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar9.Data = FVar8.Data;
  iVar5 = iVar4;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar6 = wcslen(param_2);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_2,(longlong)(int)uVar7 * 2);
    iVar5 = local_48.Data.ArrayNum;
  }
  if (iVar3 == iVar5) {
    if (iVar3 < 2) {
      bVar11 = true;
    }
    else {
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar9.Data);
      bVar11 = iVar5 == 0;
    }
  }
  else {
    bVar11 = iVar5 + iVar3 == 1;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(param_1,param_2);
  if ((iVar5 == 0) != bVar11) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  plVar1 = *(longlong **)this;
  FVar10.Data = FVar8.Data;
  iVar5 = iVar4;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar6 = wcslen(param_2);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_2,(longlong)(int)uVar7 * 2);
    iVar5 = local_48.Data.ArrayNum;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    sVar6 = wcslen(param_1);
    uVar7 = (int)sVar6 + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (0 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,(ForAnyElementType *)&local_48,&local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_48.Data.AllocatorInstance.Data,param_1,(longlong)(int)uVar7 * 2);
    iVar4 = local_48.Data.ArrayNum;
  }
  if (iVar5 == iVar4) {
    if (iVar5 < 2) {
      bVar11 = true;
    }
    else {
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar8.Data);
      bVar11 = iVar5 == 0;
    }
  }
  else {
    bVar11 = iVar4 + iVar5 == 1;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(param_2,param_1);
  if ((iVar5 == 0) != bVar11) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return;
}

