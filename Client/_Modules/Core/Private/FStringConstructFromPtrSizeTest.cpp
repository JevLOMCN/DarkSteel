// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414cf000

EAutomationTestFlags __thiscall
FStringConstructFromPtrSizeTest::GetTestFlags(FStringConstructFromPtrSizeTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414cf010

bool __thiscall FStringConstructFromPtrSizeTest::IsStressTest(FStringConstructFromPtrSizeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414cf020

uint __thiscall
FStringConstructFromPtrSizeTest::GetRequiredDeviceNum(FStringConstructFromPtrSizeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414cf030

FString * __thiscall
FStringConstructFromPtrSizeTest::GetTestSourceFileName
          (FStringConstructFromPtrSizeTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414cf0d0

int __thiscall
FStringConstructFromPtrSizeTest::GetTestSourceFileLine(FStringConstructFromPtrSizeTest *this)

{
  return 0x367;
}

// GetTests @ 1414cf0e0

/* WARNING: Removing unreachable block (ram,0x0001414cf229) */
/* WARNING: Removing unreachable block (ram,0x0001414cf2f4) */

void __thiscall
FStringConstructFromPtrSizeTest::GetTests
          (FStringConstructFromPtrSizeTest *this,
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
            ((wchar_t *)local_28.Data,0x28,"System.Core.String.ConstructFromPtrSize",0x28);
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

// RunTest @ 1414cf320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStringConstructFromPtrSizeTest::RunTest(FStringConstructFromPtrSizeTest *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  int iVar4;
  undefined1 auStackY_a8 [32];
  ForAnyElementType local_68;
  int local_60 [2];
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_48 = 0x610000;
  uStack_44 = 0x630062;
  uStack_40 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,0,(ForAnyElementType *)&local_58,5,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_44,local_48);
  *(undefined2 *)(local_58.Data.AllocatorInstance.Data + 8) = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_68,0,local_60 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_68,local_60,local_60 + 1);
  FVar2.Data = local_68.Data;
  FGenericPlatformString::Memcpy(local_68.Data,L"",8);
  *(undefined2 *)(FVar2.Data + 8) = 0;
  if ((local_60[0] != local_58.Data.ArrayNum) ||
     ((local_60[0] != 0 &&
      (iVar4 = memcmp(FVar2.Data,FVar3.Data,(longlong)local_60[0] * 2), iVar4 != 0)))) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_58,
               L"FString::ConstructFromPtrSize(TEXT(\"%s\"), %d) failure: result \'%s\' (expected \'%.*s\')"
              );
    (*pcVar1)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FMemory::Free(FVar2.Data);
  FMemory::Free(FVar3.Data);
  local_48 = 0x620061;
  uStack_44 = 99;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,0,(ForAnyElementType *)&local_58,4,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_44,local_48);
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_68,0,local_60 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_68,local_60,local_60 + 1);
  FVar2.Data = local_68.Data;
  FGenericPlatformString::Memcpy(local_68.Data,L"abc",6);
  *(undefined2 *)(FVar2.Data + 6) = 0;
  if ((local_60[0] != local_58.Data.ArrayNum) ||
     ((local_60[0] != 0 &&
      (iVar4 = memcmp(FVar2.Data,FVar3.Data,(longlong)local_60[0] * 2), iVar4 != 0)))) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_58,
               L"FString::ConstructFromPtrSize(TEXT(\"%s\"), %d) failure: result \'%s\' (expected \'%.*s\')"
              );
    (*pcVar1)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FMemory::Free(FVar2.Data);
  FMemory::Free(FVar3.Data);
  local_48 = 0x620061;
  uStack_44 = 99;
  uStack_40 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,0,(ForAnyElementType *)&local_58,5,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_44,local_48);
  *(undefined2 *)(local_58.Data.AllocatorInstance.Data + 8) = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_68,0,local_60 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_68,local_60,local_60 + 1);
  FVar2.Data = local_68.Data;
  FGenericPlatformString::Memcpy(local_68.Data,L"abc",8);
  *(undefined2 *)(FVar2.Data + 8) = 0;
  if ((local_60[0] != local_58.Data.ArrayNum) ||
     ((local_60[0] != 0 &&
      (iVar4 = memcmp(FVar2.Data,FVar3.Data,(longlong)local_60[0] * 2), iVar4 != 0)))) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_58,
               L"FString::ConstructFromPtrSize(TEXT(\"%s\"), %d) failure: result \'%s\' (expected \'%.*s\')"
              );
    (*pcVar1)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FMemory::Free(FVar2.Data);
  FMemory::Free(FVar3.Data);
  local_48 = 0x620061;
  uStack_44 = 99;
  uStack_40 = 100;
  uStack_3e = 0x65;
  uStack_3c = 0x66;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,0,(ForAnyElementType *)&local_58,8,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(local_58.Data.AllocatorInstance.Data + 8) =
       CONCAT44(uStack_3c,CONCAT22(uStack_3e,uStack_40));
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_68,0,local_60 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_68,local_60,local_60 + 1);
  FVar2.Data = local_68.Data;
  FGenericPlatformString::Memcpy(local_68.Data,L"abc",0xe);
  *(undefined2 *)(FVar2.Data + 0xe) = 0;
  if ((local_60[0] != local_58.Data.ArrayNum) ||
     ((local_60[0] != 0 &&
      (iVar4 = memcmp(FVar2.Data,FVar3.Data,(longlong)local_60[0] * 2), iVar4 != 0)))) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_58,
               L"FString::ConstructFromPtrSize(TEXT(\"%s\"), %d) failure: result \'%s\' (expected \'%.*s\')"
              );
    (*pcVar1)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FMemory::Free(FVar2.Data);
  FMemory::Free(FVar3.Data);
  local_48 = 0x620061;
  uStack_44 = 99;
  uStack_40 = 100;
  uStack_3e = 0x65;
  uStack_3c = 0x66;
  local_38 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,0,(ForAnyElementType *)&local_58,9,&local_58.Data.ArrayMax);
  FVar3.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  *(ulonglong *)local_58.Data.AllocatorInstance.Data = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(local_58.Data.AllocatorInstance.Data + 8) =
       CONCAT44(uStack_3c,CONCAT22(uStack_3e,uStack_40));
  *(undefined2 *)(local_58.Data.AllocatorInstance.Data + 0x10) = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,&local_68,0,local_60 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,&local_68,local_60,local_60 + 1);
  FVar2.Data = local_68.Data;
  FGenericPlatformString::Memcpy(local_68.Data,L"abc",0x10);
  *(undefined2 *)(FVar2.Data + 0x10) = 0;
  if ((local_60[0] != local_58.Data.ArrayNum) ||
     ((local_60[0] != 0 &&
      (iVar4 = memcmp(FVar2.Data,FVar3.Data,(longlong)local_60[0] * 2), iVar4 != 0)))) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_58,
               L"FString::ConstructFromPtrSize(TEXT(\"%s\"), %d) failure: result \'%s\' (expected \'%.*s\')"
              );
    (*pcVar1)(this,&local_58,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FMemory::Free(FVar2.Data);
  FMemory::Free(FVar3.Data);
  return true;
}

// GetBeautifiedTestName @ 1414cfa90

FString * __thiscall
FStringConstructFromPtrSizeTest::GetBeautifiedTestName
          (FStringConstructFromPtrSizeTest *this,FString *__return_storage_ptr__)

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
             "System.Core.String.ConstructFromPtrSize",0x28);
  return __return_storage_ptr__;
}

