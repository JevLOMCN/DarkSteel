// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414e0790

EAutomationTestFlags __thiscall FContainersTMapTest::GetTestFlags(FContainersTMapTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414e07a0

bool __thiscall FContainersTMapTest::IsStressTest(FContainersTMapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414e07b0

uint __thiscall FContainersTMapTest::GetRequiredDeviceNum(FContainersTMapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414e07c0

FString * __thiscall
FContainersTMapTest::GetTestSourceFileName
          (FContainersTMapTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414e0860

int __thiscall FContainersTMapTest::GetTestSourceFileLine(FContainersTMapTest *this)

{
  return 0x575;
}

// GetTests @ 1414e0870

/* WARNING: Removing unreachable block (ram,0x0001414e09b9) */
/* WARNING: Removing unreachable block (ram,0x0001414e0a84) */

void __thiscall
FContainersTMapTest::GetTests
          (FContainersTMapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            ((wchar_t *)local_28.Data,0x1c,"System.Core.Containers.TMap",0x1c);
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

// RunTest @ 1414e0ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FContainersTMapTest::RunTest(FContainersTMapTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  int *piVar9;
  wchar_t *pwVar10;
  void *pvVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_158 [32];
  int local_128 [2];
  uint local_120 [2];
  int local_118 [2];
  undefined1 local_110 [16];
  int local_100;
  int *local_f8;
  FString *local_f0;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [32];
  int *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pvVar11 = (void *)0x0;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = 0;
  local_48 = 0xffffffff;
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"FindArbitraryElement returns null on an empty map",
             (void *)0x0);
  local_30 = 0;
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,0);
  iVar4 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_f8 = local_128;
  local_c8._0_8_ = 0;
  local_f0 = &local_e8;
  local_c8._8_8_ = 0;
  local_a8 = (int *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_128[0] = 0;
  do {
    ::FString::PrintfImpl(&local_e8,L"%d");
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)local_c8,(TPairInitializer<int_const_&,FString_&&> *)local_110,(bool *)&local_f8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    local_128[0] = local_128[0] + 1;
  } while (local_128[0] != 100);
  local_128[0] = 100;
  pvVar8 = pvVar11;
  do {
    uVar7 = (uint)pvVar8;
    if ((uVar7 != 0x17) &&
       (((local_120[0] = uVar7, local_c8._8_4_ == local_94 ||
         (iVar4 = TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                  ::RemoveImpl<int>((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                                     *)local_c8,uVar7,(int *)local_120), iVar4 != 1)) &&
        (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("Map.Remove(I) == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                            ,0x58d,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pvVar8 = (void *)(ulonglong)(uVar7 + 1);
  } while (uVar7 + 1 != 100);
  if (local_94 == 0) {
    iVar4 = local_c8._8_4_ + -1;
  }
  else {
    piVar9 = (int *)(local_c8 + 0x10);
    if (local_a8 != (int *)0x0) {
      piVar9 = local_a8;
    }
    piVar6 = piVar9;
    pvVar8 = pvVar11;
    if (local_a0 + 0x1fU >> 5 != 0) {
LAB_1414e0cb4:
      if (*piVar6 == 0) goto code_r0x0001414e0cb9;
      local_110._4_4_ = 0;
      bVar2 = piVar9[(longlong)pvVar8] != 0;
      if (bVar2) {
        for (; ((uint)piVar9[(longlong)pvVar8] >> local_110._4_4_ & 1) == 0;
            local_110._4_4_ = local_110._4_4_ + 1) {
        }
      }
      iVar4 = 0x20;
      if (bVar2) {
        iVar4 = local_110._4_4_;
      }
      iVar4 = iVar4 + (int)pvVar8 * 0x20;
      if (local_a0 <= iVar4) goto LAB_1414e0cdf;
      goto LAB_1414e0ce4;
    }
LAB_1414e0cdf:
    iVar4 = -1;
  }
LAB_1414e0ce4:
  if ((iVar4 == -1) ||
     (piVar9 = (int *)((longlong)iVar4 * 0x20 + local_c8._0_8_), piVar9 == (int *)0x0)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_d8,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_d8,0);
    local_110._8_8_ = local_d8.Data.AllocatorInstance.Data;
  }
  else {
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"FindArbitraryElement finds the correct key on a highly sparse map",*piVar9,0x17);
    ::FString::PrintfImpl((FString *)(local_110 + 8),L"%d");
    pFVar12 = (FScriptContainerElement *)L"";
    if (local_100 != 0) {
      pFVar12 = (FScriptContainerElement *)local_110._8_8_;
    }
    if (piVar9[4] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)(piVar9 + 2);
    }
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,
               L"FindArbitraryElement finds the correct value on a highly sparse map",pwVar10,
               (wchar_t *)pFVar12);
  }
  if ((FScriptContainerElement *)local_110._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_110._8_8_);
  }
  local_118[0] = 0x17;
  if (((local_c8._8_4_ == local_94) ||
      (iVar4 = TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
               ::RemoveImpl<int>((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                                  *)local_c8,0x17,local_118), iVar4 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Map.Remove(IndexToKeep) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x59b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (local_94 == 0) {
    iVar5 = local_c8._8_4_ + -1;
  }
  else {
    piVar9 = (int *)(local_c8 + 0x10);
    if (local_a8 != (int *)0x0) {
      piVar9 = local_a8;
    }
    piVar6 = piVar9;
    pvVar8 = pvVar11;
    if (local_a0 + 0x1fU >> 5 != 0) {
LAB_1414e0e17:
      if (*piVar6 == 0) goto code_r0x0001414e0e1c;
      iVar4 = 0;
      bVar2 = piVar9[(longlong)pvVar8] != 0;
      if (bVar2) {
        for (; ((uint)piVar9[(longlong)pvVar8] >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      iVar5 = 0x20;
      if (bVar2) {
        iVar5 = iVar4;
      }
      iVar5 = iVar5 + (int)pvVar8 * 0x20;
      if (iVar5 < local_a0) goto LAB_1414e0e42;
    }
LAB_1414e0e3d:
    iVar5 = -1;
  }
LAB_1414e0e42:
  if (iVar5 != -1) {
    pvVar11 = (void *)((longlong)iVar5 * 0x20 + local_c8._0_8_);
  }
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"FindArbitraryElement returns null on an emptied map",
             pvVar11);
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar2;
code_r0x0001414e0cb9:
  uVar7 = (int)pvVar8 + 1;
  piVar6 = piVar6 + 1;
  pvVar8 = (void *)(ulonglong)uVar7;
  if ((int)(local_a0 + 0x1fU >> 5) <= (int)uVar7) goto LAB_1414e0cdf;
  goto LAB_1414e0cb4;
code_r0x0001414e0e1c:
  uVar7 = (int)pvVar8 + 1;
  piVar6 = piVar6 + 1;
  pvVar8 = (void *)(ulonglong)uVar7;
  if ((int)(local_a0 + 0x1fU >> 5) <= (int)uVar7) goto LAB_1414e0e3d;
  goto LAB_1414e0e17;
}

// GetBeautifiedTestName @ 1414e0ec0

FString * __thiscall
FContainersTMapTest::GetBeautifiedTestName
          (FContainersTMapTest *this,FString *__return_storage_ptr__)

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
             "System.Core.Containers.TMap",0x1c);
  return __return_storage_ptr__;
}

