// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414dd860

EAutomationTestFlags __thiscall
FStringConstructorWithSlackTest::GetTestFlags(FStringConstructorWithSlackTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414dd870

bool __thiscall FStringConstructorWithSlackTest::IsStressTest(FStringConstructorWithSlackTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414dd880

uint __thiscall
FStringConstructorWithSlackTest::GetRequiredDeviceNum(FStringConstructorWithSlackTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414dd890

FString * __thiscall
FStringConstructorWithSlackTest::GetTestSourceFileName
          (FStringConstructorWithSlackTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414dd930

int __thiscall
FStringConstructorWithSlackTest::GetTestSourceFileLine(FStringConstructorWithSlackTest *this)

{
  return 0x1ab;
}

// GetTests @ 1414dd940

/* WARNING: Removing unreachable block (ram,0x0001414dda89) */
/* WARNING: Removing unreachable block (ram,0x0001414ddb54) */

void __thiscall
FStringConstructorWithSlackTest::GetTests
          (FStringConstructorWithSlackTest *this,
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
            (2,2,0x28,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x28,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x28,"System.Core.String.ConstructorWithSlack",0x28);
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

// RunTest @ 1414ddb80

bool __thiscall
FStringConstructorWithSlackTest::RunTest(FStringConstructorWithSlackTest *this,FString *param_1)

{
  ForAnyElementType FVar1;
  ForAnyElementType FVar2;
  ulong64 uVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  
  uVar3 = FMemory::QuantizeSize(0x4e,0);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x27,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_68.AllocatorInstance.Data,L"FooBar",0xe);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"(TCHAR: Valid string with valid slack) resulting capacity",
             (longlong)local_68.ArrayMax * 2,uVar3);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x27,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
  FVar2.Data = local_68.AllocatorInstance.Data;
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_68.AllocatorInstance.Data,7,"FooBar",7);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"(ASCII: Valid string with valid slack) resulting capacity",
             (longlong)local_68.ArrayMax * 2,uVar3);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x27,(ForAnyElementType *)&local_58,0,&local_58.Data.ArrayMax);
  ::FString::AppendChars(&local_58,L"FooBar",6);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"(FStringView: Valid string with valid slack) resulting capacity",
             (longlong)local_58.Data.ArrayMax * 2,uVar3);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
  FGenericPlatformString::Memcpy(local_68.AllocatorInstance.Data,L"FooBar",0xe);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,&local_68,0x21 - (uint)(local_68.ArrayNum != 0));
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(FString: Valid string with valid slack",
             (longlong)local_38.ArrayMax * 2,uVar3);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  uVar3 = FMemory::QuantizeSize(0xe,0);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_68.AllocatorInstance.Data,L"FooBar",0xe);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(TCHAR: Valid string with zero slack) resulting capacity"
             ,(longlong)local_68.ArrayMax * 2,uVar3);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
  FVar2.Data = local_68.AllocatorInstance.Data;
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_68.AllocatorInstance.Data,7,"FooBar",7);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(ASCII: Valid string with zero slack) resulting capacity"
             ,(longlong)local_68.ArrayMax * 2,uVar3);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_58,0,&local_58.Data.ArrayMax);
  ::FString::AppendChars(&local_58,L"FooBar",6);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"(FStringView: Valid string with zero slack) resulting capacity",
             (longlong)local_58.Data.ArrayMax * 2,uVar3);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_68.AllocatorInstance,&local_68.ArrayNum,&local_68.ArrayMax);
  FGenericPlatformString::Memcpy(local_68.AllocatorInstance.Data,L"FooBar",0xe);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,&local_68,0);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(FString: Valid string with zero slack",
             (longlong)local_38.ArrayMax * 2,uVar3);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  uVar3 = FMemory::QuantizeSize(0x42,0);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,(ForAnyElementType *)&local_48,0,&local_48.Data.ArrayMax);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(TCHAR: Empty string with slack) resulting capacity",
             (longlong)local_48.Data.ArrayMax * 2,uVar3);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(ASCII: Empty string with slack) resulting capacity",
             (longlong)local_68.ArrayMax * 2,uVar3);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,(ForAnyElementType *)&local_58,0,&local_58.Data.ArrayMax);
  ::FString::AppendChars(&local_58,L"",0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"(FStringView: Empty string with slack) resulting capacity",
             (longlong)local_58.Data.ArrayMax * 2,uVar3);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,&local_38,0x21);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(FString: Empty string with slack) resulting capacity",
             (longlong)local_28.ArrayMax * 2,uVar3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(TCHAR: Empty string with zero slack) resulting capacity"
             ,0,0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"(ASCII: Empty string with zero slack) resulting capacity"
             ,0,0);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendChars(&local_48,L"",0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"(FStringView: Empty string with zero slack) resulting capacity",
             (longlong)local_48.Data.ArrayMax * 2,0);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,&local_38,0);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,
             L"(FString: Empty string with zero slack) resulting capacity",
             (longlong)local_28.ArrayMax * 2,0);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1414de2a0

FString * __thiscall
FStringConstructorWithSlackTest::GetBeautifiedTestName
          (FStringConstructorWithSlackTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x28,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x28,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x28,
             "System.Core.String.ConstructorWithSlack",0x28);
  return __return_storage_ptr__;
}

