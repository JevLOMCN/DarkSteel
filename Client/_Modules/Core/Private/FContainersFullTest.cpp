// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414c7100

EAutomationTestFlags __thiscall FContainersFullTest::GetTestFlags(FContainersFullTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414c7110

bool __thiscall FContainersFullTest::IsStressTest(FContainersFullTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414c7120

uint __thiscall FContainersFullTest::GetRequiredDeviceNum(FContainersFullTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414c7130

FString * __thiscall
FContainersFullTest::GetTestSourceFileName
          (FContainersFullTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414c71d0

int __thiscall FContainersFullTest::GetTestSourceFileLine(FContainersFullTest *this)

{
  return 0x438;
}

// GetTests @ 1414c71e0

/* WARNING: Removing unreachable block (ram,0x0001414c7329) */
/* WARNING: Removing unreachable block (ram,0x0001414c73f4) */

void __thiscall
FContainersFullTest::GetTests
          (FContainersFullTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            ((wchar_t *)local_28.Data,0x1c,"System.Core.Containers.Full",0x1c);
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

// RunTest @ 1414c7420

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall FContainersFullTest::RunTest(FContainersFullTest *this,FString *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_> local_88;
  int local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_> *local_48;
  undefined4 uStack_40;
  
  ::`anonymous_namespace'::
  RunMapTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<FName,_anonymous_namespace_::FContainerTestValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,_anonymous_namespace_::FContainerTestValueType,0>_>,FName>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<FString,_anonymous_namespace_::FContainerTestValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,_anonymous_namespace_::FContainerTestValueType,0>_>,FString>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,TFixedSetAllocator<64>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TMap<FString,_anonymous_namespace_::FContainerTestValueType,FDefaultSetAllocator,A0x0e4c616a::FCaseSensitiveLookupKeyFuncs<_anonymous_namespace_::FContainerTestValueType>_>,FString>
            ();
  ::`anonymous_namespace'::
  RunMapConsistencyTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapConsistencyTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapConsistencyTests<TMap<int,_anonymous_namespace_::FContainerTestValueType,TFixedSetAllocator<64>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TSortedMap<int,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<int_const_>_>,int>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TSortedMap<FName,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,FNameLexicalLess>,FName>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedDefaultAllocator<32>,TLess<FString_const_&>_>,FString>
            ();
  ::`anonymous_namespace'::
  RunMapTests<TSortedMap<FString,_anonymous_namespace_::FContainerTestValueType,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,TLess<FString_const_&>_>,FString>
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
  ::`anonymous_namespace'::
  RunSetTests<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FString,0>();
  ::`anonymous_namespace'::
  RunSetTests<TSet<FString,DefaultKeyFuncs<FString,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>,FString,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<FString,DefaultKeyFuncs<FString,0>,TFixedSetAllocator<64>_>,FString,0>();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<FString,TSizedDefaultAllocator<32>,TLess<FString>_>,FString,1>();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<FString,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<FString>_>,FString,1>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<FString,TFixedAllocator<64>,TLess<FString>_>,FString,1>();
  ::`anonymous_namespace'::
  RunSetTests<TSet<TTuple<int,short>,DefaultKeyFuncs<TTuple<int,short>,0>,FDefaultSetAllocator>,TTuple<int,short>,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<TTuple<int,short>,DefaultKeyFuncs<TTuple<int,short>,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>,TTuple<int,short>,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<TTuple<int,short>,DefaultKeyFuncs<TTuple<int,short>,0>,TFixedSetAllocator<64>_>,TTuple<int,short>,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<TTuple<int,short>,TSizedDefaultAllocator<32>,TLess<TTuple<int,short>_>_>,TTuple<int,short>,1>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<TTuple<int,short>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<int,short>_>_>,TTuple<int,short>,1>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<TTuple<int,short>,TFixedAllocator<64>,TLess<TTuple<int,short>_>_>,TTuple<int,short>,1>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<TTuple<FString,FString>,DefaultKeyFuncs<TTuple<FString,FString>,0>,FDefaultSetAllocator>,TTuple<FString,FString>,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<TTuple<FString,FString>,DefaultKeyFuncs<TTuple<FString,FString>,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>,TTuple<FString,FString>,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSet<TTuple<FString,FString>,DefaultKeyFuncs<TTuple<FString,FString>,0>,TFixedSetAllocator<64>_>,TTuple<FString,FString>,0>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<TTuple<FString,FString>,TSizedDefaultAllocator<32>,TLess<TTuple<FString,FString>_>_>,TTuple<FString,FString>,1>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<TTuple<FString,FString>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>,TLess<TTuple<FString,FString>_>_>,TTuple<FString,FString>,1>
            ();
  ::`anonymous_namespace'::
  RunSetTests<TSortedSet<TTuple<FString,FString>,TFixedAllocator<64>,TLess<TTuple<FString,FString>_>_>,TTuple<FString,FString>,1>
            ();
  RunSetEmplaceSingleTestsWithType<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>();
  RunSetEmplaceSingleTestsWithType<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FString>
            ();
  RunSetEmplaceSingleTestsWithType<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FName>
            ();
  RunSetEmplaceDoubleTestsWithType<TSet<TTuple<FString,int>,DefaultKeyFuncs<TTuple<FString,int>,0>,FDefaultSetAllocator>,FString,int>
            ();
  RunSetEmplaceDoubleTestsWithType<TSet<TTuple<int,FString>,DefaultKeyFuncs<TTuple<int,FString>,0>,FDefaultSetAllocator>,int,FString>
            ();
  RunSetEmplaceDoubleTestsWithType<TSet<TTuple<FName,FName>,DefaultKeyFuncs<TTuple<FName,FName>,0>,FDefaultSetAllocator>,FName,FName>
            ();
  uVar15 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res18);
  uStack_74 = 0;
  iVar13 = *(int *)CONCAT44(extraout_var,FVar5.Value);
  uVar12 = 0;
  uVar6 = local_88.ArrayNum;
  uVar10 = uVar15;
  if (0 < local_88.ArrayNum) {
    do {
      uVar8 = uVar6 >> 1;
      iVar14 = uVar8 + uVar10;
      iVar7 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar14 * 0xc) - iVar13;
      if (iVar7 == 0) {
        iVar7 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar14 * 0xc + 4);
      }
      uVar12 = uVar10;
      if (iVar7 < 0) {
        uVar12 = iVar14 + (uVar6 & 1);
      }
      uVar6 = uVar8;
      uVar10 = uVar12;
    } while (uVar8 != 0);
  }
  local_78 = iVar13;
  if (((int)uVar12 < 0) || (local_88.ArrayNum < (int)uVar12)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (-1 < (int)uVar12) {
      goto LAB_1414c75c6;
    }
LAB_1414c7638:
    TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
              (&local_88,uVar12,1);
    pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
  }
  else {
LAB_1414c75c6:
    if (local_88.ArrayNum <= (int)uVar12) goto LAB_1414c7638;
    uVar6 = 0;
    if ((int)uVar12 < local_88.ArrayNum) {
      uVar6 = ~uVar12 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar13 = iVar13 - *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc);
    pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
    if (iVar13 == 0) {
      iVar13 = -*(int *)(pFVar11 + 4);
    }
    if (iVar13 < 0) goto LAB_1414c7638;
  }
  *(ulonglong *)pFVar11 = CONCAT44(uStack_74,local_78);
  *(undefined4 *)(pFVar11 + 8) = 0;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
  uVar6 = 0;
  uStack_6c = 0;
  iVar13 = *(int *)CONCAT44(extraout_var_00,FVar5.Value);
  uVar12 = uVar6;
  uVar10 = local_88.ArrayNum;
  uVar8 = uVar15;
  if (0 < local_88.ArrayNum) {
    do {
      uVar9 = uVar10 >> 1;
      iVar14 = uVar9 + uVar8;
      iVar7 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar14 * 0xc) - iVar13;
      if (iVar7 == 0) {
        iVar7 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar14 * 0xc + 4);
      }
      uVar12 = uVar8;
      if (iVar7 < 0) {
        uVar12 = iVar14 + (uVar10 & 1);
      }
      uVar10 = uVar9;
      uVar8 = uVar12;
    } while (uVar9 != 0);
  }
  local_70 = iVar13;
  if (((int)uVar12 < 0) || (local_88.ArrayNum < (int)uVar12)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (-1 < (int)uVar12) {
      goto LAB_1414c76fe;
    }
LAB_1414c7770:
    TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
              (&local_88,uVar12,1);
    pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
  }
  else {
LAB_1414c76fe:
    if (local_88.ArrayNum <= (int)uVar12) goto LAB_1414c7770;
    uVar10 = uVar6;
    if ((int)uVar12 < local_88.ArrayNum) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar13 = iVar13 - *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc);
    pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
    if (iVar13 == 0) {
      iVar13 = -*(int *)(pFVar11 + 4);
    }
    if (iVar13 < 0) goto LAB_1414c7770;
  }
  *(ulonglong *)pFVar11 = CONCAT44(uStack_6c,local_70);
  *(undefined4 *)(pFVar11 + 8) = 0;
  local_68 = 0;
  uVar12 = uVar6;
  uVar10 = local_88.ArrayNum;
  uVar8 = uVar15;
  if (0 < local_88.ArrayNum) {
    do {
      uVar9 = uVar10 >> 1;
      iVar7 = uVar9 + uVar8;
      iVar13 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar7 * 0xc);
      if (iVar13 == 0) {
        iVar13 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar7 * 0xc + 4);
      }
      uVar12 = uVar8;
      if (iVar13 < 0) {
        uVar12 = iVar7 + (uVar10 & 1);
      }
      uVar10 = uVar9;
      uVar8 = uVar12;
    } while (uVar9 != 0);
  }
  if (((int)uVar12 < 0) || (local_88.ArrayNum < (int)uVar12)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (-1 < (int)uVar12) {
      goto LAB_1414c781e;
    }
LAB_1414c7891:
    TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
              (&local_88,uVar12,1);
    pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
  }
  else {
LAB_1414c781e:
    if (local_88.ArrayNum <= (int)uVar12) goto LAB_1414c7891;
    if ((int)uVar12 < local_88.ArrayNum) {
      uVar6 = ~uVar12 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
    iVar13 = -*(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc);
    if (iVar13 == 0) {
      iVar13 = -*(int *)(pFVar11 + 4);
    }
    if (iVar13 < 0) goto LAB_1414c7891;
  }
  *(undefined8 *)pFVar11 = local_68;
  *(undefined4 *)(pFVar11 + 8) = 0;
  FVar5 = FNameEntryId::FromValidEName((EName)local_58);
  uStack_5c = 0;
  iVar13 = *(int *)CONCAT44(extraout_var_01,FVar5.Value);
  uVar12 = 0;
  uVar6 = local_88.ArrayNum;
  if (0 < local_88.ArrayNum) {
    do {
      uVar10 = uVar6 >> 1;
      iVar14 = uVar10 + uVar15;
      iVar7 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar14 * 0xc) - iVar13;
      if (iVar7 == 0) {
        iVar7 = *(int *)(local_88.AllocatorInstance.Data + (longlong)iVar14 * 0xc + 4);
      }
      uVar12 = uVar15;
      if (iVar7 < 0) {
        uVar12 = iVar14 + (uVar6 & 1);
      }
      uVar6 = uVar10;
      uVar15 = uVar12;
    } while (uVar10 != 0);
  }
  local_60 = iVar13;
  if (((int)uVar12 < 0) || (local_88.ArrayNum < (int)uVar12)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (-1 < (int)uVar12) {
      goto LAB_1414c794e;
    }
  }
  else {
LAB_1414c794e:
    if ((int)uVar12 < local_88.ArrayNum) {
      uVar6 = 0;
      if ((int)uVar12 < local_88.ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar13 = iVar13 - *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc);
      pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
      if (iVar13 == 0) {
        iVar13 = -*(int *)(pFVar11 + 4);
      }
      if (-1 < iVar13) goto LAB_1414c79dd;
    }
  }
  TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl(&local_88,uVar12,1)
  ;
  pFVar11 = local_88.AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc;
LAB_1414c79dd:
  *(ulonglong *)pFVar11 = CONCAT44(uStack_5c,local_60);
  local_48 = &local_88;
  *(undefined4 *)(pFVar11 + 8) = 0;
  uStack_40 = 0;
  if ((local_88.ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(longlong *)local_88.AllocatorInstance.Data != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("It->Key == NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x465,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_88.ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar1 = *(ulonglong *)(local_88.AllocatorInstance.Data + 0xc);
  FVar5 = FNameEntryId::FromValidEName((EName)local_54);
  if ((uVar1 != *(uint *)CONCAT44(extraout_var_02,FVar5.Value)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("It->Key == NAME_IntProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x466,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_88.ArrayNum < 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar1 = *(ulonglong *)(local_88.AllocatorInstance.Data + 0x18);
  FVar5 = FNameEntryId::FromValidEName((EName)local_50);
  if ((uVar1 != *(uint *)CONCAT44(extraout_var_03,FVar5.Value)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("It->Key == NAME_FloatProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x467,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_88.ArrayNum < 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar1 = *(ulonglong *)(local_88.AllocatorInstance.Data + 0x24);
  FVar5 = FNameEntryId::FromValidEName((EName)local_4c);
  if ((uVar1 != *(uint *)CONCAT44(extraout_var_04,FVar5.Value)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("It->Key == NAME_NameProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x468,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((4 < local_88.ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!It",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x469,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  ::`anonymous_namespace'::RunGetRefTests();
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1414c7c60

FString * __thiscall
FContainersFullTest::GetBeautifiedTestName
          (FContainersFullTest *this,FString *__return_storage_ptr__)

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
             "System.Core.Containers.Full",0x1c);
  return __return_storage_ptr__;
}

