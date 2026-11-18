// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414e1ff0

EAutomationTestFlags __thiscall
FContainersTSortedMapTest::GetTestFlags(FContainersTSortedMapTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414e2000

bool __thiscall FContainersTSortedMapTest::IsStressTest(FContainersTSortedMapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414e2010

uint __thiscall FContainersTSortedMapTest::GetRequiredDeviceNum(FContainersTSortedMapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414e2020

FString * __thiscall
FContainersTSortedMapTest::GetTestSourceFileName
          (FContainersTSortedMapTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414e20c0

int __thiscall FContainersTSortedMapTest::GetTestSourceFileLine(FContainersTSortedMapTest *this)

{
  return 0x5a5;
}

// GetTests @ 1414e20d0

/* WARNING: Removing unreachable block (ram,0x0001414e2219) */
/* WARNING: Removing unreachable block (ram,0x0001414e22e4) */

void __thiscall
FContainersTSortedMapTest::GetTests
          (FContainersTSortedMapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x22,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x22,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x22,"System.Core.Containers.TSortedMap",0x22);
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

// RunTest @ 1414e2310

bool __thiscall FContainersTSortedMapTest::RunTest(FContainersTSortedMapTest *this,FString *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  TTuple<int,FString> *pTVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int local_res18 [4];
  TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"FindArbitraryElement returns null on an empty map",
             (void *)0x0);
  DestructItems<TTuple<int,FString>,int>((TTuple<int,FString> *)0x0,0);
  pFVar17 = (FScriptContainerElement *)0x0;
  local_78.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = 0;
  local_78.Pairs.ArrayNum = 0;
  local_78.Pairs.ArrayMax = 0;
  do {
    ::FString::PrintfImpl(&local_58,L"%d");
    TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
    Emplace<int_const_&,FString>(&local_78,local_res18,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_res18[0] = local_res18[0] + 1;
  } while (local_res18[0] != 100);
  local_res18[0] = 100;
  pFVar10 = pFVar17;
  FVar12.Data = local_78.Pairs.AllocatorInstance.Data;
  uVar9 = local_78.Pairs.ArrayNum;
  do {
    iVar7 = (int)pFVar10;
    uVar16 = 0;
    if (iVar7 != 0x17) {
      uVar15 = (ulonglong)uVar9;
      pFVar10 = pFVar17;
      uVar14 = uVar16;
      uVar6 = uVar9;
      while (0 < (int)uVar6) {
        iVar5 = (int)uVar15;
        uVar1 = (longlong)iVar5 / 2;
        uVar15 = uVar1 & 0xffffffff;
        uVar6 = (uint)uVar1;
        iVar8 = uVar6 + (int)pFVar10;
        if (*(int *)((longlong)FVar12.Data + (longlong)iVar8 * 0x18) < iVar7) {
          pFVar10 = (FScriptContainerElement *)(ulonglong)(uint)(iVar8 + iVar5 % 2);
        }
        uVar14 = (uint)pFVar10;
      }
      if ((((int)uVar14 < (int)uVar9) &&
          (*(int *)((longlong)FVar12.Data + (longlong)(int)uVar14 * 0x18) <= iVar7)) &&
         (uVar14 != 0xffffffff)) {
        uVar6 = uVar16;
        if ((int)uVar14 < (int)uVar9) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pTVar11 = (TTuple<int,FString> *)((longlong)FVar12.Data + (longlong)(int)uVar14 * 0x18);
        if (*(void **)&pTVar11->field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar11->field_0x8);
        }
        iVar5 = ~uVar14 + uVar9;
        if (iVar5 != 0) {
          memmove(pTVar11,pTVar11 + 1,(longlong)iVar5 * 0x18);
        }
        local_78.Pairs.ArrayNum = uVar9 - 1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)&local_78,uVar9 - 1,&local_78.Pairs.ArrayMax);
        FVar12.Data = local_78.Pairs.AllocatorInstance.Data;
        uVar9 = local_78.Pairs.ArrayNum;
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Map.Remove(I) == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                           ,0x5bd,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    pFVar10 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1U);
  } while (iVar7 + 1U != 100);
  if (uVar9 != 0) {
    uVar6 = uVar16;
    if ((int)(uVar9 - 1) < (int)uVar9) {
      uVar6 = ~(uVar9 - 1) >> 0x1f;
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
    pTVar11 = (TTuple<int,FString> *)((longlong)FVar12.Data + (longlong)(int)(uVar9 - 1) * 0x18);
    if (pTVar11 != (TTuple<int,FString> *)0x0) {
      FAutomationTestBase::TestEqual
                ((FAutomationTestBase *)this,
                 L"FindArbitraryElement finds the correct key on a highly sparse map",
                 *(int *)pTVar11,0x17);
      ::FString::PrintfImpl(&local_68,L"%d");
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar12.Data = local_68.Data.AllocatorInstance.Data;
      }
      if (*(int *)&pTVar11->field_0x10 == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)&pTVar11->field_0x8;
      }
      FAutomationTestBase::TestEqual
                ((FAutomationTestBase *)this,
                 L"FindArbitraryElement finds the correct value on a highly sparse map",pwVar13,
                 (wchar_t *)FVar12.Data);
      goto LAB_1414e2623;
    }
  }
  pcVar2 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_48,L"Expected \'%s\' to be not null.");
  (*pcVar2)(this,&local_48,0);
  local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
LAB_1414e2623:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar7 = TSortedMap<int,FString,TSizedDefaultAllocator<32>,TLess<int_const_>_>::Remove
                    (&local_78,0x17);
  if ((iVar7 != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Map.Remove(IndexToKeep) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\ContainersTest.cpp"
                         ,0x5cb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar7 = local_78.Pairs.ArrayNum;
  if (local_78.Pairs.ArrayNum != 0) {
    if ((int)(local_78.Pairs.ArrayNum - 1U) < local_78.Pairs.ArrayNum) {
      uVar16 = ~(local_78.Pairs.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar17 = local_78.Pairs.AllocatorInstance.Data + (longlong)(iVar7 + -1) * 0x18;
  }
  FVar12.Data = local_78.Pairs.AllocatorInstance.Data;
  FAutomationTestBase::TestNull
            ((FAutomationTestBase *)this,L"FindArbitraryElement returns null on an emptied map",
             pFVar17);
  DestructItems<TTuple<int,FString>,int>((TTuple<int,FString> *)FVar12.Data,iVar7);
  if ((TTuple<int,FString> *)FVar12.Data != (TTuple<int,FString> *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  bVar3 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar3;
}

// GetBeautifiedTestName @ 1414e2730

FString * __thiscall
FContainersTSortedMapTest::GetBeautifiedTestName
          (FContainersTSortedMapTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x22,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x22,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x22,
             "System.Core.Containers.TSortedMap",0x22);
  return __return_storage_ptr__;
}

