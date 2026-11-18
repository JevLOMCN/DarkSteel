// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414de870

EAutomationTestFlags __thiscall
FStringPathConcatCompoundOperatorTest::GetTestFlags(FStringPathConcatCompoundOperatorTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414de880

bool __thiscall
FStringPathConcatCompoundOperatorTest::IsStressTest(FStringPathConcatCompoundOperatorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414de890

uint __thiscall
FStringPathConcatCompoundOperatorTest::GetRequiredDeviceNum
          (FStringPathConcatCompoundOperatorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414de8a0

FString * __thiscall
FStringPathConcatCompoundOperatorTest::GetTestSourceFileName
          (FStringPathConcatCompoundOperatorTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414de940

int __thiscall
FStringPathConcatCompoundOperatorTest::GetTestSourceFileLine
          (FStringPathConcatCompoundOperatorTest *this)

{
  return 0x235;
}

// GetTests @ 1414de950

/* WARNING: Removing unreachable block (ram,0x0001414dea99) */
/* WARNING: Removing unreachable block (ram,0x0001414deb64) */

void __thiscall
FStringPathConcatCompoundOperatorTest::GetTests
          (FStringPathConcatCompoundOperatorTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x2e,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2e,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x2e,"System.Core.String.PathConcatCompoundOperator",0x2e);
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

// RunTest @ 1414deb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStringPathConcatCompoundOperatorTest::RunTest
          (FStringPathConcatCompoundOperatorTest *this,FString *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  void *pvVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_3d8 [32];
  FString local_3a8;
  FString local_398;
  TStringBuilderBase<wchar_t> local_388;
  wchar_t local_368 [128];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_148.Base = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = local_128;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_148.End = (wchar_t *)local_28;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)&local_148;
  pvVar4 = FGenericPlatformString::Memcpy(local_248,L"File.txt",0x10);
  local_268.CurPos = (wchar_t *)((longlong)pvVar4 + 0x10);
  local_388.bIsDynamic = false;
  local_388.bIsExternal = false;
  local_388.Base = local_368;
  local_388.CurPos = local_368;
  local_388.End = (wchar_t *)&local_268;
  pvVar4 = FGenericPlatformString::Memcpy(local_368,L"/File.txt",0x12);
  local_388.CurPos = (wchar_t *)((longlong)pvVar4 + 0x12);
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,(wchar_t *)0x0,0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"NullString: EmptyPath/EmptyFilename to be empty",
             local_3a8.Data.ArrayNum < 2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,(wchar_t *)0x0,0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EmptyString: EmptyPath/EmptyFilename to be empty",
             local_3a8.Data.ArrayNum < 2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,(wchar_t *)0x0,0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"EmptyAnsiLiteralString: EmptyPath/EmptyFilename to be empty",
             local_3a8.Data.ArrayNum < 2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,L"",0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EmptyLiteralString: EmptyPath/EmptyFilename to be empty",
             local_3a8.Data.ArrayNum < 2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,(wchar_t *)0x0,0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"NullStringView: EmptyPath/EmptyFilename to be empty",
             local_3a8.Data.ArrayNum < 2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,L"",0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EmptyStringView: EmptyPath/EmptyFilename to be empty",
             local_3a8.Data.ArrayNum < 2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend
            (&local_3a8,local_148.Base,
             (int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1));
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"EmptyStringBuilder: EmptyPath/EmptyFilename to be empty",
             local_3a8.Data.ArrayNum < 2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_398,0,&local_398.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_398,&local_398.Data.ArrayNum,&local_398.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_398.Data.AllocatorInstance.Data,L"../Path",0x10);
  ::FString::PathAppend(&local_398,(wchar_t *)0x0,0);
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,0,&local_3a8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,&local_3a8.Data.ArrayNum,&local_3a8.Data.ArrayMax
            );
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_3a8.Data.AllocatorInstance.Data,L"../Path/",0x12);
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar9.Data = FVar2.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar6.Data = local_398.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"NullString: ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_398,0,&local_398.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_398,&local_398.Data.ArrayNum,&local_398.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_398.Data.AllocatorInstance.Data,L"../Path/",0x12);
  ::FString::PathAppend(&local_398,(wchar_t *)0x0,0);
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,0,&local_3a8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,&local_3a8.Data.ArrayNum,&local_3a8.Data.ArrayMax
            );
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_3a8.Data.AllocatorInstance.Data,L"../Path/",0x12);
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar9.Data = FVar2.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar6.Data = local_398.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"NullString (with extra /): ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_398,0,&local_398.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_398,&local_398.Data.ArrayNum,&local_398.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_398.Data.AllocatorInstance.Data,L"../Path",0x10);
  ::FString::PathAppend(&local_398,(wchar_t *)0x0,0);
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,0,&local_3a8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,&local_3a8.Data.ArrayNum,&local_3a8.Data.ArrayMax
            );
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_3a8.Data.AllocatorInstance.Data,L"../Path/",0x12);
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar9.Data = FVar2.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar6.Data = local_398.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"EmptyString: ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_398,0,&local_398.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_398,&local_398.Data.ArrayNum,&local_398.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_398.Data.AllocatorInstance.Data,L"../Path/",0x12);
  ::FString::PathAppend(&local_398,(wchar_t *)0x0,0);
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,0,&local_3a8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,&local_3a8.Data.ArrayNum,&local_3a8.Data.ArrayMax
            );
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_3a8.Data.AllocatorInstance.Data,L"../Path/",0x12);
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar9.Data = FVar2.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar6.Data = local_398.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"EmptyString (with extra /): ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_398,0,&local_398.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_398,&local_398.Data.ArrayNum,&local_398.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_398.Data.AllocatorInstance.Data,L"../Path",0x10);
  ::FString::PathAppend(&local_398,(wchar_t *)0x0,0);
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,0,&local_3a8.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_3a8,&local_3a8.Data.ArrayNum,&local_3a8.Data.ArrayMax
            );
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_3a8.Data.AllocatorInstance.Data,L"../Path/",0x12);
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar9.Data = FVar2.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar6.Data = local_398.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"EmptyAnsiLiteralString: ValidPath/EmptyFilename result to be",(wchar_t *)FVar6.Data,
             (wchar_t *)FVar9.Data);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_398,0,&local_398.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_398,&local_398.Data.ArrayNum,&local_398.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_398.Data.AllocatorInstance.Data,L"../Path/",0x12);
  ::FString::PathAppend(&local_398,(wchar_t *)0x0,0);
  ::FString::FString(&local_3a8,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar9.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar6.Data = local_398.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"EmptyAnsiLiteralString (with extra /): ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend(&local_3a8,L"",0);
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"EmptyLiteralString: ValidPath/EmptyFilename result to be"
             ,(wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend(&local_3a8,L"",0);
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"EmptyLiteralString (with extra /): ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend(&local_3a8,(wchar_t *)0x0,0);
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"NullStringView: ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend(&local_3a8,(wchar_t *)0x0,0);
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"NullStringView (with extra /): ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend(&local_3a8,L"",0);
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"EmptyStringView: ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend(&local_3a8,L"",0);
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"EmptyStringView (with extra /): ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend
            (&local_3a8,local_148.Base,
             (int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1));
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"EmptyStringBuilder: ValidPath/EmptyFilename result to be"
             ,(wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend
            (&local_3a8,local_148.Base,
             (int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1));
  ::FString::FString(&local_398,L"../Path/");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"EmptyStringBuilder (with extra /): ValidPath/EmptyFilename result to be",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  pFVar5 = ::FString::FString(&local_398,L"File.txt");
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  ::FString::PathAppend(&local_3a8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_398,L"File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String: EmptyPath/ValidFilename",(wchar_t *)FVar6.Data,
             (wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,L"File.txt",8);
  ::FString::FString(&local_398,L"File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"LiteralString: EmptyPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::operator/=<char>(&local_3a8,"File.txt");
  ::FString::FString(&local_398,L"File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"LiteralAnsiString: EmptyPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  ::FString::PathAppend(&local_3a8,L"File.txt",8);
  ::FString::FString(&local_398,L"File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"StringView: EmptyPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  pFVar5 = ::FString::FString(&local_398,L"File.txt");
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar8 = 0;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar8;
  }
  ::FString::PathAppend(&local_3a8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String: ValidPath/ValidFilename",(wchar_t *)FVar6.Data,
             (wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend(&local_3a8,L"File.txt",8);
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"LiteralString: ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::operator/=<char>(&local_3a8,"File.txt");
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"LiteralAnsiString: ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend(&local_3a8,L"File.txt",8);
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"StringView: ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend
            (&local_3a8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"StringBuilder: ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  pFVar5 = ::FString::FString(&local_398,L"File.txt");
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar8;
  }
  ::FString::PathAppend(&local_3a8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String (path with extra /): ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend(&local_3a8,L"File.txt",8);
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"LiteralString (path with extra /): ValidPath/ValidFilename",(wchar_t *)FVar6.Data,
             (wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::operator/=<char>(&local_3a8,"File.txt");
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"LiteralAnsiString (path with extra /): ValidPath/ValidFilename",(wchar_t *)FVar6.Data
             ,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend(&local_3a8,L"File.txt",8);
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"StringView (path with extra /): ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend
            (&local_3a8,local_268.Base,
             (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"StringBuilder (path with extra /): ValidPath/ValidFilename",(wchar_t *)FVar6.Data,
             (wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  pFVar5 = ::FString::FString(&local_398,L"/File.txt");
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar8;
  }
  ::FString::PathAppend(&local_3a8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"String (filename with extra /): ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend(&local_3a8,L"/File.txt",9);
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"LiteralString (filename with extra /): ValidPath/ValidFilename",(wchar_t *)FVar6.Data
             ,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::operator/=<char>(&local_3a8,"/File.txt");
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"LiteralAnsiString (filename with extra /): ValidPath/ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend(&local_3a8,L"/File.txt",9);
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"StringView (filename with extra /): ValidPath/ValidFilename",(wchar_t *)FVar6.Data,
             (wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path");
  ::FString::PathAppend
            (&local_3a8,local_388.Base,
             (int)((longlong)local_388.CurPos - (longlong)local_388.Base >> 1));
  ::FString::FString(&local_398,L"../Path/File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"StringBuilder (filename with extra /): ValidPath/ValidFilename",(wchar_t *)FVar6.Data
             ,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  pFVar5 = ::FString::FString(&local_398,L"/File.txt");
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar8;
  }
  ::FString::PathAppend(&local_3a8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_398,L"../Path//File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"String (path and filename with extra /): ValidPath//ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend(&local_3a8,L"/File.txt",9);
  ::FString::FString(&local_398,L"../Path//File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"LiteralString (path and filename with extra /): ValidPath//ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::operator/=<char>(&local_3a8,"/File.txt");
  ::FString::FString(&local_398,L"../Path//File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"LiteralAnsiString (path and filename with extra /): ValidPath//ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend(&local_3a8,L"/File.txt",9);
  ::FString::FString(&local_398,L"../Path//File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"StringView (path and filename with extra /): ValidPath//ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  ::FString::FString(&local_3a8,L"../Path/");
  ::FString::PathAppend
            (&local_3a8,local_388.Base,
             (int)((longlong)local_388.CurPos - (longlong)local_388.Base >> 1));
  ::FString::FString(&local_398,L"../Path//File.txt");
  FVar3.Data = local_398.Data.AllocatorInstance.Data;
  FVar2.Data = local_3a8.Data.AllocatorInstance.Data;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar9.Data = local_398.Data.AllocatorInstance.Data;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3a8.Data.ArrayNum != 0) {
    FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"StringBuilder (path and filename with extra /): ValidPath//ValidFilename",
             (wchar_t *)FVar6.Data,(wchar_t *)FVar9.Data);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_388);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return true;
}

// GetBeautifiedTestName @ 1414e06b0

FString * __thiscall
FStringPathConcatCompoundOperatorTest::GetBeautifiedTestName
          (FStringPathConcatCompoundOperatorTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2e,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2e,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x2e,
             "System.Core.String.PathConcatCompoundOperator",0x2e);
  return __return_storage_ptr__;
}

