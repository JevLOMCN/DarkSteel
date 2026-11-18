// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414c6c90

EAutomationTestFlags __thiscall FContainersSmokeTest::GetTestFlags(FContainersSmokeTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414c6ca0

bool __thiscall FContainersSmokeTest::IsStressTest(FContainersSmokeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414c6cb0

uint __thiscall FContainersSmokeTest::GetRequiredDeviceNum(FContainersSmokeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414c6cc0

FString * __thiscall
FContainersSmokeTest::GetTestSourceFileName
          (FContainersSmokeTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414c6d60

int __thiscall FContainersSmokeTest::GetTestSourceFileLine(FContainersSmokeTest *this)

{
  return 0x422;
}

// GetTests @ 1414c6d70

/* WARNING: Removing unreachable block (ram,0x0001414c6eb9) */
/* WARNING: Removing unreachable block (ram,0x0001414c6f84) */

void __thiscall
FContainersSmokeTest::GetTests
          (FContainersSmokeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x1d,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1d,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x1d,"System.Core.Containers.Smoke",0x1d);
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

// RunTest @ 1414c6fb0

bool __thiscall FContainersSmokeTest::RunTest(FContainersSmokeTest *this,FString *param_1)

{
  ::`anonymous_namespace'::
  RunMapTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,TFixedSetAllocator<64>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<int_const_>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TFixedAllocator<64>,TLess<int_const_>_>,int>
            ();
  ::`anonymous_namespace'::RunSetTests<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<int,DefaultKeyFuncs<int,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>,int,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<int,DefaultKeyFuncs<int,0>,TFixedSetAllocator<64>_>,int,0>();
  ::`anonymous_namespace'::RunSetTests<TSortedSet<int,TSizedDefaultAllocator<32>,TLess<int>_>,int,1>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<int>_>,int,1>
            ();
  ::`anonymous_namespace'::RunSetTests<TSortedSet<int,TFixedAllocator<64>,TLess<int>_>,int,1>();
  RunSetEmplaceSingleTestsWithType<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>();
  RunSetEmplaceSingleTestsWithType<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FString>
            ();
  RunSetEmplaceDoubleTestsWithType<TSet<TTuple<int,FString>,DefaultKeyFuncs<TTuple<int,FString>,0>,FDefaultSetAllocator>,int,FString>
            ();
  RunSetEmplaceDoubleTestsWithType<TSet<TTuple<FName,FName>,DefaultKeyFuncs<TTuple<FName,FName>,0>,FDefaultSetAllocator>,FName,FName>
            ();
  return true;
}

// GetBeautifiedTestName @ 1414c7020

FString * __thiscall
FContainersSmokeTest::GetBeautifiedTestName
          (FContainersSmokeTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1d,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1d,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x1d,
             "System.Core.Containers.Smoke",0x1d);
  return __return_storage_ptr__;
}

