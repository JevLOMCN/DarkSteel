// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1414d61d0

EAutomationTestFlags __thiscall
FStringConstructFromPtrSizeWithSlackTest::GetTestFlags
          (FStringConstructFromPtrSizeWithSlackTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414d61e0

bool __thiscall
FStringConstructFromPtrSizeWithSlackTest::IsStressTest
          (FStringConstructFromPtrSizeWithSlackTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414d61f0

uint __thiscall
FStringConstructFromPtrSizeWithSlackTest::GetRequiredDeviceNum
          (FStringConstructFromPtrSizeWithSlackTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414d6200

FString * __thiscall
FStringConstructFromPtrSizeWithSlackTest::GetTestSourceFileName
          (FStringConstructFromPtrSizeWithSlackTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414d62a0

int __thiscall
FStringConstructFromPtrSizeWithSlackTest::GetTestSourceFileLine
          (FStringConstructFromPtrSizeWithSlackTest *this)

{
  return 0x386;
}

// GetTests @ 1414d62b0

/* WARNING: Removing unreachable block (ram,0x0001414d63f9) */
/* WARNING: Removing unreachable block (ram,0x0001414d64c4) */

void __thiscall
FStringConstructFromPtrSizeWithSlackTest::GetTests
          (FStringConstructFromPtrSizeWithSlackTest *this,
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
            (2,2,0x31,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x31,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x31,"System.Core.String.ConstructFromPtrSizeWithSlack",0x31);
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

// RunTest @ 1414d64f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStringConstructFromPtrSizeWithSlackTest::RunTest
          (FStringConstructFromPtrSizeWithSlackTest *this,FString *param_1)

{
  ForAnyElementType FVar1;
  undefined1 auStackY_a8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FStringConstructFromPtrSizeWithSlackTest *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_50 = 0x610000;
  uStack_4c = 0x630062;
  uStack_48 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 5;
  local_58 = this;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,0,&local_68.AllocatorInstance,5,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(undefined2 *)(local_68.AllocatorInstance.Data + 8) = 0;
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"",4,0,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x610000;
  uStack_4c = 0x630062;
  uStack_48 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,0,&local_68.AllocatorInstance,5,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(undefined2 *)(local_68.AllocatorInstance.Data + 8) = 0;
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"",4,0x2f,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  uStack_4c = 99;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,0,&local_68.AllocatorInstance,4,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",3,0,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  uStack_4c = 99;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,0,&local_68.AllocatorInstance,4,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",3,0x2f,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  uStack_4c = 99;
  uStack_48 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,0,&local_68.AllocatorInstance,5,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(undefined2 *)(local_68.AllocatorInstance.Data + 8) = 0;
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",4,0,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  uStack_4c = 99;
  uStack_48 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,0,&local_68.AllocatorInstance,5,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(undefined2 *)(local_68.AllocatorInstance.Data + 8) = 0;
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",4,0x2f,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_4c = 99;
  uStack_48 = 100;
  uStack_46 = 0x65;
  uStack_44 = 0x66;
  local_68.ArrayNum = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,0,&local_68.AllocatorInstance,8,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(local_68.AllocatorInstance.Data + 8) =
       CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",7,0,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_4c = 99;
  uStack_48 = 100;
  uStack_46 = 0x65;
  uStack_44 = 0x66;
  local_68.ArrayNum = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,0,&local_68.AllocatorInstance,8,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(local_68.AllocatorInstance.Data + 8) =
       CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",7,0x2f,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  local_40 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_4c = 99;
  uStack_48 = 100;
  uStack_46 = 0x65;
  uStack_44 = 0x66;
  local_68.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,0,&local_68.AllocatorInstance,9,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(local_68.AllocatorInstance.Data + 8) =
       CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
  *(undefined2 *)(local_68.AllocatorInstance.Data + 0x10) = local_40;
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",8,0,&local_68);
  FMemory::Free(FVar1.Data);
  local_50 = 0x620061;
  local_40 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_4c = 99;
  uStack_48 = 100;
  uStack_46 = 0x65;
  uStack_44 = 0x66;
  local_68.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,0,&local_68.AllocatorInstance,9,&local_68.ArrayMax);
  FVar1.Data = local_68.AllocatorInstance.Data;
  *(ulonglong *)local_68.AllocatorInstance.Data = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(local_68.AllocatorInstance.Data + 8) =
       CONCAT44(uStack_44,CONCAT22(uStack_46,uStack_48));
  *(undefined2 *)(local_68.AllocatorInstance.Data + 0x10) = local_40;
  `FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_58,L"abc",8,0x2f,&local_68);
  FMemory::Free(FVar1.Data);
  return true;
}

// GetBeautifiedTestName @ 1414d6ae0

FString * __thiscall
FStringConstructFromPtrSizeWithSlackTest::GetBeautifiedTestName
          (FStringConstructFromPtrSizeWithSlackTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x31,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x31,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x31,
             "System.Core.String.ConstructFromPtrSizeWithSlack",0x31);
  return __return_storage_ptr__;
}

// operator() @ 141593280

void __thiscall
`FStringConstructFromPtrSizeWithSlackTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,int param_2,int param_3,
          TArray<wchar_t,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FString local_38;
  
  ::FString::ConstructFromPtrSizeWithSlack(&local_38,param_1,param_2,param_3);
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  if ((local_38.Data.ArrayNum != param_4->ArrayNum) ||
     (((local_38.Data.ArrayNum != 0 &&
       (iVar4 = memcmp(local_38.Data.AllocatorInstance.Data,(param_4->AllocatorInstance).Data,
                       (longlong)local_38.Data.ArrayNum * 2), iVar4 != 0)) ||
      (local_38.Data.ArrayMax - local_38.Data.ArrayNum < param_3)))) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl
              (&local_38,
               L"FString::ConstructFromPtrSizeWithSlack(TEXT(\"%s\"), %d) failure: result \'%s\' (expected \'%.*s\'), slack \'%d\' (expected \'%d\')"
              );
    (*pcVar2)(plVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

