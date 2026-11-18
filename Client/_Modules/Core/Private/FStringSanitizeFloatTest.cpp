// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 1414ccaa0

EAutomationTestFlags __thiscall
FStringSanitizeFloatTest::GetTestFlags(FStringSanitizeFloatTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414ccab0

bool __thiscall FStringSanitizeFloatTest::IsStressTest(FStringSanitizeFloatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414ccac0

uint __thiscall FStringSanitizeFloatTest::GetRequiredDeviceNum(FStringSanitizeFloatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414ccad0

FString * __thiscall
FStringSanitizeFloatTest::GetTestSourceFileName
          (FStringSanitizeFloatTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414ccb70

int __thiscall FStringSanitizeFloatTest::GetTestSourceFileLine(FStringSanitizeFloatTest *this)

{
  return 0xf;
}

// GetTests @ 1414ccb80

/* WARNING: Removing unreachable block (ram,0x0001414cccc9) */
/* WARNING: Removing unreachable block (ram,0x0001414ccd94) */

void __thiscall
FStringSanitizeFloatTest::GetTests
          (FStringSanitizeFloatTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x21,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x21,"System.Core.String.SanitizeFloat",0x21);
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

// RunTest @ 1414ccdc0

bool __thiscall FStringSanitizeFloatTest::RunTest(FStringSanitizeFloatTest *this,FString *param_1)

{
  ForAnyElementType FVar1;
  FStringSanitizeFloatTest *local_res8;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_res8 = this;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,&u_0,4);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()(&local_res8,0.0,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,&u_0,4);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_8000000000000000,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100",8);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_4059000000000000,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.1",0xc);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_4059066666666666,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.101",0x10);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_40590676c8b43958,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100",10);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c059000000000000,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.1",0xe);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c059066666666666,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.101",0x12);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c0590676c8b43958,0,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.0",0xc);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_4059000000000000,1,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.1",0xc);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_4059066666666666,1,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.101",0x10);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_40590676c8b43958,1,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.0",0xe);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c059000000000000,1,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.1",0xe);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c059066666666666,1,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.101",0x12);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c0590676c8b43958,1,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.0000",0x12);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_4059000000000000,4,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.1000",0x12);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_4059066666666666,4,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"100.1010",0x12);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_40590676c8b43958,4,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,10,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,10,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.0000",0x14);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c059000000000000,4,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,10,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,10,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.1000",0x14);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c059066666666666,4,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,10,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,10,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"-100.1010",0x14);
  `FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,__real_c0590676c8b43958,4,&local_18);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1414cd960

FString * __thiscall
FStringSanitizeFloatTest::GetBeautifiedTestName
          (FStringSanitizeFloatTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x21,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x21,
             "System.Core.String.SanitizeFloat",0x21);
  return __return_storage_ptr__;
}

// operator() @ 1415945d0

void __thiscall
`FStringSanitizeFloatTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,double param_1,int param_2,FString *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FString local_48;
  FString local_38 [2];
  
  ::FString::SanitizeFloat(&local_48,param_1,param_2);
  FVar4.Data = local_48.Data.AllocatorInstance.Data;
  iVar3 = (param_3->Data).ArrayNum;
  if (local_48.Data.ArrayNum == iVar3) {
    if (local_48.Data.ArrayNum < 2) goto LAB_1415946b6;
    iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                   (wchar_t *)(param_3->Data).AllocatorInstance.Data);
    bVar5 = iVar3 == 0;
  }
  else {
    bVar5 = iVar3 + local_48.Data.ArrayNum == 1;
  }
  if (!bVar5) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(local_38,L"%f (%d digits) failure: result \'%s\' (expected \'%s\')");
    (*pcVar2)(plVar1,local_38,0);
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
LAB_1415946b6:
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return;
}

