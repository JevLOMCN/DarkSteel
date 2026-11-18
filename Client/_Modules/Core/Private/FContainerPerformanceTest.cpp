// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414cda40

EAutomationTestFlags __thiscall
FContainerPerformanceTest::GetTestFlags(FContainerPerformanceTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414cda50

bool __thiscall FContainerPerformanceTest::IsStressTest(FContainerPerformanceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414cda60

uint __thiscall FContainerPerformanceTest::GetRequiredDeviceNum(FContainerPerformanceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414cda70

FString * __thiscall
FContainerPerformanceTest::GetTestSourceFileName
          (FContainerPerformanceTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x5b,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x5b,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x5b,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
             ,0x5b);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414cdb10

int __thiscall FContainerPerformanceTest::GetTestSourceFileLine(FContainerPerformanceTest *this)

{
  return 0x470;
}

// GetTests @ 1414cdb20

/* WARNING: Removing unreachable block (ram,0x0001414cdc69) */
/* WARNING: Removing unreachable block (ram,0x0001414cdd34) */

void __thiscall
FContainerPerformanceTest::GetTests
          (FContainerPerformanceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x23,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x23,"System.Core.Containers.Performance",0x23);
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

// RunTest @ 1414cdd60

bool __thiscall FContainerPerformanceTest::RunTest(FContainerPerformanceTest *this,FString *param_1)

{
  ForAnyElementType FVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap int32",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>,int>
            (&local_18,1,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap int32",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>,int>
            (&local_18,10,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap int32",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>,int>
            (&local_18,100,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap int32",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>,int>
            (&local_18,1000,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap int32",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>,int>
            (&local_18,10000,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FName",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FName>
            (&local_18,1,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FName",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FName>
            (&local_18,10,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FName",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FName>
            (&local_18,100,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FName",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FName>
            (&local_18,1000,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FName",0x16);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FName>
            (&local_18,10000,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FString",0x1a);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,FString>
            (&local_18,1,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FString",0x1a);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,FString>
            (&local_18,10,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FString",0x1a);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,FString>
            (&local_18,100,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FString",0x1a);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,FString>
            (&local_18,1000,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xd,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax)
  ;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TMap FString",0x1a);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,FString>
            (&local_18,10000,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap int32",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>,int>
            (&local_18,1,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap int32",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>,int>
            (&local_18,10,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap int32",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>,int>
            (&local_18,100,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap int32",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>,int>
            (&local_18,1000,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap int32",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>,int>
            (&local_18,10000,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FName",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess>,FName>
            (&local_18,1,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FName",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess>,FName>
            (&local_18,10,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FName",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess>,FName>
            (&local_18,100,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FName",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess>,FName>
            (&local_18,1000,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x11,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FName",0x22);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameLexicalLess>,FName>
            (&local_18,10000,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FString",0x26);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>,FString>
            (&local_18,1,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FString",0x26);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>,FString>
            (&local_18,10,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FString",0x26);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>,FString>
            (&local_18,100,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FString",0x26);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>,FString>
            (&local_18,1000,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,0,&local_18.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x13,(ForAnyElementType *)&local_18,&local_18.Data.ArrayNum,&local_18.Data.ArrayMax
            );
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  FGenericPlatformString::Memcpy(local_18.Data.AllocatorInstance.Data,L"TSortedMap FString",0x26);
  ::`anonymous_namespace'::
  RunMapPerformanceTest<TSortedMap<FString,FString,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>,FString>
            (&local_18,10000,1000000);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  ::FString::FString(&local_18,L"TSet FName");
  ::`anonymous_namespace'::
  RunSetPerformanceTest<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FName>
            (&local_18,1,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"TSet FName");
  ::`anonymous_namespace'::
  RunSetPerformanceTest<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FName>
            (&local_18,10,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"TSet FName");
  ::`anonymous_namespace'::
  RunSetPerformanceTest<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FName>
            (&local_18,100,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"TArray FName");
  ::`anonymous_namespace'::RunSetPerformanceTest<TArray<FName,TSizedDefaultAllocator<32>_>,FName>
            (&local_18,1,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"TArray FName");
  ::`anonymous_namespace'::RunSetPerformanceTest<TArray<FName,TSizedDefaultAllocator<32>_>,FName>
            (&local_18,10,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"TArray FName");
  ::`anonymous_namespace'::RunSetPerformanceTest<TArray<FName,TSizedDefaultAllocator<32>_>,FName>
            (&local_18,100,1000000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1414cef20

FString * __thiscall
FContainerPerformanceTest::GetBeautifiedTestName
          (FContainerPerformanceTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x23,
             "System.Core.Containers.Performance",0x23);
  return __return_storage_ptr__;
}

