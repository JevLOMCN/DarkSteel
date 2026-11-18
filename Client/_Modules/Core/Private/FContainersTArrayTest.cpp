// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 1414e2810

EAutomationTestFlags __thiscall FContainersTArrayTest::GetTestFlags(FContainersTArrayTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414e2820

bool __thiscall FContainersTArrayTest::IsStressTest(FContainersTArrayTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414e2830

uint __thiscall FContainersTArrayTest::GetRequiredDeviceNum(FContainersTArrayTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414e2840

FString * __thiscall
FContainersTArrayTest::GetTestSourceFileName
          (FContainersTArrayTest *this,FString *__return_storage_ptr__)

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

// GetTestSourceFileLine @ 1414e28e0

int __thiscall FContainersTArrayTest::GetTestSourceFileLine(FContainersTArrayTest *this)

{
  return 0x5d5;
}

// GetTests @ 1414e28f0

/* WARNING: Removing unreachable block (ram,0x0001414e2a39) */
/* WARNING: Removing unreachable block (ram,0x0001414e2b04) */

void __thiscall
FContainersTArrayTest::GetTests
          (FContainersTArrayTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
            (2,2,0x1e,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1e,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x1e,"System.Core.Containers.TArray",0x1e);
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

// RunTest @ 1414e2b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FContainersTArrayTest::RunTest(FContainersTArrayTest *this,FString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  int iVar15;
  undefined1 auStackY_198 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_148;
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 local_90;
  undefined8 local_68;
  ulonglong local_60;
  
  uVar6 = _UNK_150631e38;
  pFVar5 = ___xmm_00000004000000030000000200000001;
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FVar11.Data = (FScriptContainerElement *)0x0;
  local_b8.Data = local_b8.Data & 0xffffffff00000000;
  local_a8 = 5;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  iVar15 = local_a8;
  iVar10 = local_158.ArrayNum;
  FVar7.Data = local_158.AllocatorInstance.Data;
  lVar12 = (longlong)local_158.ArrayNum;
  local_a8 = 5;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(int *)(local_158.AllocatorInstance.Data + 0x10) = iVar15;
  local_b8.Data = pFVar5;
  uStack_b0 = (undefined1 *)uVar6;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  FVar13.Data = local_158.AllocatorInstance.Data;
  local_b8.Data = pFVar5;
  uStack_b0 = (undefined1 *)uVar6;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(int *)(local_158.AllocatorInstance.Data + 0x10) = local_a8;
  if ((iVar10 == local_158.ArrayNum) &&
     ((iVar10 == 0 ||
      (iVar10 = memcmp(FVar7.Data,local_158.AllocatorInstance.Data,lVar12 << 2), iVar10 == 0)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Move constructing an array relocates the elements",bVar9)
  ;
  FMemory::Free(FVar13.Data);
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  local_a8 = 5;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  iVar10 = local_158.ArrayNum;
  FVar7.Data = local_158.AllocatorInstance.Data;
  lVar12 = (longlong)local_158.ArrayNum;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(int *)(local_158.AllocatorInstance.Data + 0x10) = local_a8;
  local_b8.Data = (FScriptContainerElement *)&DAT_200000001;
  uStack_b0 = &DAT_400000003;
  local_a8 = 5;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  FVar13.Data = local_158.AllocatorInstance.Data;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = local_b8.Data;
  *(undefined1 **)(local_158.AllocatorInstance.Data + 8) = uStack_b0;
  *(int *)(local_158.AllocatorInstance.Data + 0x10) = local_a8;
  if ((iVar10 == local_158.ArrayNum) &&
     ((iVar10 == 0 ||
      (iVar10 = memcmp(FVar7.Data,local_158.AllocatorInstance.Data,lVar12 << 2), iVar10 == 0)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Move constructing an array relocates the elements with bitwise compatible elements",
             bVar9);
  FMemory::Free(FVar13.Data);
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  local_a8 = 5;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  FVar7.Data = local_158.AllocatorInstance.Data;
  iVar10 = local_158.ArrayNum;
  lVar12 = (longlong)local_158.ArrayNum;
  bVar9 = true;
  local_b8.Data = (FScriptContainerElement *)0x0;
  uStack_b0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_b0._0_4_ = local_158.ArrayNum;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(int *)(local_158.AllocatorInstance.Data + 0x10) = local_a8;
  iVar15 = local_158.ArrayNum;
  if (local_158.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_158.ArrayNum,0,&local_b8,local_158.ArrayNum,
               (int *)((longlong)&uStack_b0 + 4));
    FVar11.Data = local_b8.Data;
    ConstructItems<__int64,int,int>(local_b8.Data,(int *)FVar7.Data,iVar10);
    iVar15 = (int)uStack_b0;
  }
  local_90 = 5;
  local_b8.Data = (FScriptContainerElement *)0x0;
  uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,5);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_b8,5,(int *)((longlong)&uStack_b0 + 4));
  FVar7.Data = local_b8.Data;
  *(FScriptContainerElement **)local_b8.Data = pFVar5;
  *(undefined8 *)(local_b8.Data + 8) = uVar6;
  *(undefined4 *)(local_b8.Data + 0x10) = local_90;
  if ((iVar10 == (int)uStack_b0) &&
     ((iVar10 == 0 ||
      (iVar10 = memcmp(local_158.AllocatorInstance.Data,local_b8.Data,lVar12 << 2), iVar10 == 0))))
  {
    uVar4 = _UNK_150631d68;
    uVar3 = ___xmm_00000000000000040000000000000003;
    uVar2 = _UNK_150631d58;
    uVar1 = ___xmm_00000000000000020000000000000001;
    local_68 = 5;
    local_b8.Data = (FScriptContainerElement *)0x0;
    uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,5);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,5,0,&local_b8,5,(int *)((longlong)&uStack_b0 + 4));
    FVar13.Data = local_b8.Data;
    *(undefined8 *)local_b8.Data = uVar1;
    *(undefined8 *)(local_b8.Data + 8) = uVar2;
    *(undefined8 *)(local_b8.Data + 0x10) = uVar3;
    *(undefined8 *)(local_b8.Data + 0x18) = uVar4;
    *(undefined8 *)(local_b8.Data + 0x20) = local_68;
    if ((iVar15 != (int)uStack_b0) ||
       ((iVar15 != 0 &&
        (iVar10 = memcmp(FVar11.Data,local_b8.Data,(longlong)iVar15 << 3), iVar10 != 0))))
    goto LAB_1414e2f95;
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"Move constructing an array does not relocate the elements with bitwise incompatible elements"
               ,true);
LAB_1414e2fac:
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
  }
  else {
    bVar9 = false;
    FVar13.Data = local_b8.Data;
LAB_1414e2f95:
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"Move constructing an array does not relocate the elements with bitwise incompatible elements"
               ,false);
    if (bVar9) goto LAB_1414e2fac;
  }
  FMemory::Free(FVar7.Data);
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  FMemory::Free(local_158.AllocatorInstance.Data);
  local_90 = 5;
  FVar11.Data = (FScriptContainerElement *)0x0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  uVar8 = local_90;
  iVar10 = local_158.ArrayNum;
  FVar7.Data = local_158.AllocatorInstance.Data;
  lVar12 = (longlong)local_158.ArrayNum;
  local_90 = 5;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(undefined4 *)(local_158.AllocatorInstance.Data + 0x10) = uVar8;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  FVar13.Data = local_158.AllocatorInstance.Data;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(undefined4 *)(local_158.AllocatorInstance.Data + 0x10) = local_90;
  if ((iVar10 == local_158.ArrayNum) &&
     ((iVar10 == 0 ||
      (iVar10 = memcmp(FVar7.Data,local_158.AllocatorInstance.Data,lVar12 << 2), iVar10 == 0)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Move constructing an array when adding const relocates the elements",bVar9);
  FMemory::Free(FVar13.Data);
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  local_90 = 5;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  FVar7.Data = local_158.AllocatorInstance.Data;
  iVar10 = local_158.ArrayNum;
  lVar12 = (longlong)local_158.ArrayNum;
  local_b8.Data = (FScriptContainerElement *)0x0;
  uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,local_158.ArrayNum);
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(undefined4 *)(local_158.AllocatorInstance.Data + 0x10) = local_90;
  iVar15 = 0;
  if (local_158.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_158.ArrayNum,0,&local_b8,local_158.ArrayNum,
               (int *)((longlong)&uStack_b0 + 4));
    FVar11.Data = local_b8.Data;
    memcpy(local_b8.Data,FVar7.Data,lVar12 << 2);
    iVar15 = (int)uStack_b0;
  }
  local_90 = 5;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 5;
  bVar9 = false;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
  FVar13.Data = local_158.AllocatorInstance.Data;
  *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
  *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
  *(undefined4 *)(local_158.AllocatorInstance.Data + 0x10) = local_90;
  FVar14.Data = local_158.AllocatorInstance.Data;
  if ((iVar10 == local_158.ArrayNum) &&
     ((iVar10 == 0 ||
      (iVar10 = memcmp(FVar7.Data,local_158.AllocatorInstance.Data,lVar12 << 2),
      FVar14.Data = local_158.AllocatorInstance.Data, iVar10 == 0)))) {
    local_a8 = 5;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 5;
    bVar9 = true;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&local_158.AllocatorInstance,5,&local_158.ArrayMax);
    FVar14.Data = local_158.AllocatorInstance.Data;
    local_b8.Data = pFVar5;
    uStack_b0 = (undefined1 *)uVar6;
    *(FScriptContainerElement **)local_158.AllocatorInstance.Data = pFVar5;
    *(undefined8 *)(local_158.AllocatorInstance.Data + 8) = uVar6;
    *(int *)(local_158.AllocatorInstance.Data + 0x10) = local_a8;
    if ((iVar15 != local_158.ArrayNum) ||
       ((iVar15 != 0 &&
        (iVar10 = memcmp(FVar11.Data,local_158.AllocatorInstance.Data,(longlong)iVar15 << 2),
        iVar10 != 0)))) goto LAB_1414e32af;
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"Move constructing an array when removing conts copies the elements",true);
  }
  else {
LAB_1414e32af:
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"Move constructing an array when removing conts copies the elements",false);
    if (!bVar9) goto LAB_1414e32d3;
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
LAB_1414e32d3:
  FMemory::Free(FVar13.Data);
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  FMemory::Free(FVar7.Data);
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)this;
  `FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
  operator()<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_b8,&local_158,Default);
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  `FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
  operator()<TArray<int,TSizedNonshrinkingAllocator<32>_>_>
            (&local_b8,(TArray<int,TSizedNonshrinkingAllocator<32>_> *)&local_158,No);
  local_148.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0x20;
  `FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
  operator()<TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
            (&local_b8,&local_148,Default);
  local_148.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0x20;
  `FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
  operator()<TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>_>
            (&local_b8,
             (TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *)
             &local_148,No);
  bVar9 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar9;
}

// GetBeautifiedTestName @ 1414e33c0

FString * __thiscall
FContainersTArrayTest::GetBeautifiedTestName
          (FContainersTArrayTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1e,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1e,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x1e,
             "System.Core.Containers.TArray",0x1e);
  return __return_storage_ptr__;
}

// operator()<TArray<int,TSizedDefaultAllocator<32>_>_> @ 1414e3c40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
operator()<TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,EAllowShrinking param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  bool bVar13;
  int local_res18 [4];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_198;
  TArray<int,TSizedDefaultAllocator<32>_> local_188;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  TArray<int,TSizedDefaultAllocator<32>_> local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_128,1000,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_128,1,Default);
  bVar13 = param_2 == Default;
  if (bVar13 != local_128.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_118,1000,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_118,1,Default);
  if (bVar13 != local_118.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_e8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1a8,1000,Default);
  iVar7 = local_1a8.ArrayNum;
  if (local_1a8.ArrayNum < 1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1 - local_1a8.ArrayNum,&local_1a8.AllocatorInstance,&local_1a8.ArrayNum,
               &local_1a8.ArrayMax);
  }
  else if (1 < local_1a8.ArrayNum) {
    iVar12 = local_1a8.ArrayNum + -1;
    if (iVar12 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (iVar12 == 0) goto LAB_1414e3e66;
    iVar7 = iVar7 - iVar12;
    if (iVar7 + -1 != 0) {
      memmove(local_1a8.AllocatorInstance.Data + 4,
              local_1a8.AllocatorInstance.Data + 4 + (longlong)iVar12 * 4,
              (longlong)(iVar7 + -1) << 2);
    }
    local_1a8.ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_1a8.AllocatorInstance,iVar7,&local_1a8.ArrayMax);
  }
LAB_1414e3e66:
  if (bVar13 != local_1a8.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_d8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_178,1000,Default);
  lVar10 = 1000;
  do {
    iVar7 = local_178.ArrayNum;
    if ((local_178.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar12 = iVar7 + -1;
    iVar7 = (iVar7 - iVar12) + -1;
    if (iVar7 != 0) {
      memmove(local_178.AllocatorInstance.Data + (longlong)iVar12 * 4,
              local_178.AllocatorInstance.Data + (longlong)iVar12 * 4 + 4,(longlong)iVar7 << 2);
    }
    local_178.ArrayNum = iVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_178.AllocatorInstance,iVar12,&local_178.ArrayMax);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (bVar13 != local_178.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_c8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_168,1000,Default);
  iVar12 = 999;
  iVar7 = 999;
  lVar10 = 999;
  do {
    iVar5 = local_168.ArrayNum;
    if ((local_168.ArrayNum <= iVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (iVar5 - iVar7) + -1;
    if (iVar4 != 0) {
      memmove(local_168.AllocatorInstance.Data + lVar10 * 4,
              local_168.AllocatorInstance.Data + lVar10 * 4 + 4,(longlong)iVar4 << 2);
    }
    local_168.ArrayNum = iVar5 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_168.AllocatorInstance,local_168.ArrayNum,&local_168.ArrayMax);
    lVar10 = lVar10 + -1;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  if (bVar13 != local_168.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_b8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_158,1000,Default);
  lVar10 = 999;
  do {
    iVar7 = local_158.ArrayNum;
    if ((local_158.ArrayNum < iVar12 + 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (iVar7 - iVar12) + -1;
    if (iVar5 != 0) {
      memmove(local_158.AllocatorInstance.Data + lVar10 * 4,
              local_158.AllocatorInstance.Data + lVar10 * 4 + 4,(longlong)iVar5 << 2);
    }
    local_158.ArrayNum = iVar7 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_158.AllocatorInstance,local_158.ArrayNum,&local_158.ArrayMax);
    lVar10 = lVar10 + -1;
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  if (bVar13 != local_158.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_1b8,&local_1b0,&iStack_1ac);
  FVar11.Data = local_1b8.Data;
  memset(local_1b8.Data + (longlong)iVar7 * 4,0,4000);
  lVar10 = 1000;
  do {
    iVar7 = local_1b0;
    if ((local_1b0 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = iVar7 + -1;
    iVar12 = iVar5;
    if (1 < iVar5) {
      iVar12 = 1;
    }
    if (iVar12 != 0) {
      memmove(FVar11.Data,FVar11.Data + (longlong)(iVar7 - iVar12) * 4,(longlong)iVar12 << 2);
    }
    local_1b0 = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_1b8,iVar5,&iStack_1ac);
    lVar10 = lVar10 + -1;
    FVar11.Data = local_1b8.Data;
  } while (lVar10 != 0);
  if (bVar13 != iStack_1ac < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_98,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_148,1000,Default);
  lVar10 = 1000;
  do {
    iVar7 = local_148.ArrayNum;
    if ((local_148.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = iVar7 + -1;
    iVar12 = iVar5;
    if (1 < iVar5) {
      iVar12 = 1;
    }
    if (iVar12 != 0) {
      memmove(local_148.AllocatorInstance.Data,
              local_148.AllocatorInstance.Data + (longlong)(iVar7 - iVar12) * 4,
              (longlong)iVar12 << 2);
    }
    local_148.ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_148.AllocatorInstance,iVar5,&local_148.ArrayMax);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (bVar13 != local_148.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_138,1000,Default);
  lVar10 = 1000;
  do {
    iVar7 = local_138.ArrayNum;
    if ((local_138.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = iVar7 + -1;
    iVar12 = iVar5;
    if (1 < iVar5) {
      iVar12 = 1;
    }
    if (iVar12 != 0) {
      memmove(local_138.AllocatorInstance.Data,
              local_138.AllocatorInstance.Data + (longlong)(iVar7 - iVar12) * 4,
              (longlong)iVar12 << 2);
    }
    local_138.ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_138.AllocatorInstance,iVar5,&local_138.ArrayMax);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (bVar13 != local_138.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_78,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_188,1000,Default);
  iVar7 = local_188.ArrayNum;
  if (0 < local_188.ArrayNum) {
    do {
      if (iVar7 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((iVar7 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar12 = iVar7 + -1;
      iVar5 = iVar12;
      if (1 < iVar12) {
        iVar5 = 1;
      }
      if (iVar5 != 0) {
        memmove(local_188.AllocatorInstance.Data,
                local_188.AllocatorInstance.Data + (longlong)(iVar7 - iVar5) * 4,
                (longlong)iVar5 << 2);
      }
      local_188.ArrayNum = iVar12;
      iVar7 = iVar12;
    } while (0 < iVar12);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_188.AllocatorInstance,iVar12,&local_188.ArrayMax);
  }
  if (bVar13 != local_188.ArrayMax < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_198,1000,Default);
  lVar10 = 1000;
  FVar11.Data = local_198.AllocatorInstance.Data;
  iVar7 = local_198.ArrayNum;
  do {
    for (pFVar9 = FVar11.Data; pFVar9 != FVar11.Data + (longlong)iVar7 * 4; pFVar9 = pFVar9 + 4) {
      if (*(int *)pFVar9 == 0) {
        uVar8 = (uint)((longlong)pFVar9 - (longlong)FVar11.Data >> 2);
        if (uVar8 != 0xffffffff) {
          uVar6 = 0;
          if ((int)(uVar8 + 1) <= iVar7) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar12 = (iVar7 - uVar8) + -1;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            memmove(FVar11.Data + (longlong)(int)uVar8 * 4,
                    FVar11.Data + (longlong)(iVar7 - iVar12) * 4,(longlong)iVar12 << 2);
          }
          local_198.ArrayNum = iVar7 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_198.AllocatorInstance,iVar7 + -1,&local_198.ArrayMax);
          FVar11.Data = local_198.AllocatorInstance.Data;
          iVar7 = local_198.ArrayNum;
        }
        break;
      }
    }
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      if (bVar13 != local_198.ArrayMax < 1000) {
        plVar1 = *(longlong **)this;
        pcVar2 = *(code **)(*plVar1 + 0x28);
        ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
        (*pcVar2)(plVar1,&local_58,0);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_108,1000,Default);
      local_res18[0] = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::RemoveSwap(&local_108,local_res18,Default);
      if (bVar13 != local_108.ArrayMax < 1000) {
        plVar1 = *(longlong **)this;
        pcVar2 = *(code **)(*plVar1 + 0x28);
        ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
        (*pcVar2)(plVar1,&local_48,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      return;
    }
  } while( true );
}

// operator()<TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_> @ 1414e4900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
operator()<TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_1
          ,EAllowShrinking param_2)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  ForElementType<int> FVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStackY_818 [32];
  int local_7d8 [2];
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_708;
  ForElementType<int> local_678;
  int local_5f0;
  int local_5ec;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_5e8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_558;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_4c8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_438;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_3a8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_318;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_288;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_1f8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_168;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_818;
  local_1f8.ArrayMax = 0x20;
  local_1f8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_1f8.ArrayNum = 0;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_1f8,1000,Default);
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_1f8,1,Default);
  bVar15 = param_2 == Default;
  if (bVar15 != local_1f8.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_7d0,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_7d0,0);
    if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
  }
  local_168.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_168,1000,Default);
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&local_168,1,Default);
  if (bVar15 != local_168.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_7c0,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_7c0,0);
    if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
    }
  }
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  local_5e8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_5e8.ArrayNum = 0;
  local_5e8.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_5e8,1000,Default);
  iVar13 = local_5e8.ArrayNum;
  if (local_5e8.ArrayNum < 1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,1 - local_5e8.ArrayNum,&local_5e8.AllocatorInstance,&local_5e8.ArrayNum,
               &local_5e8.ArrayMax);
  }
  else if (1 < local_5e8.ArrayNum) {
    iVar5 = local_5e8.ArrayNum + -1;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar5 == 0) goto LAB_1414e4bad;
    FVar9 = (ForElementType<int>)&local_5e8;
    if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_5e8.AllocatorInstance.SecondaryData;
    }
    iVar7 = (iVar13 - iVar5) + -1;
    if (iVar7 != 0) {
      memmove((uchar *)((longlong)FVar9 + 4),(uchar *)((longlong)FVar9 + 4) + (longlong)iVar5 * 4,
              (longlong)iVar7 << 2);
      iVar13 = local_5e8.ArrayNum;
    }
    local_5e8.ArrayNum = iVar13 - iVar5;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_5e8.AllocatorInstance,local_5e8.ArrayNum,&local_5e8.ArrayMax);
  }
LAB_1414e4bad:
  if (bVar15 != local_5e8.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_7b0,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_7b0,0);
    if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
    }
  }
  if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_5e8.AllocatorInstance.SecondaryData);
  }
  local_4c8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_4c8.ArrayNum = 0;
  local_4c8.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_4c8,1000,Default);
  lVar14 = 1000;
  do {
    iVar13 = local_4c8.ArrayNum;
    if ((local_4c8.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_4c8;
    if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_4c8.AllocatorInstance.SecondaryData;
    }
    pvVar1 = (void *)((longlong)FVar9 + (longlong)(iVar13 + -1) * 4);
    iVar5 = (iVar13 - (iVar13 + -1)) + -1;
    if (iVar5 != 0) {
      memmove(pvVar1,(void *)((longlong)pvVar1 + 4),(longlong)iVar5 << 2);
      iVar13 = local_4c8.ArrayNum;
    }
    local_4c8.ArrayNum = iVar13 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_4c8.AllocatorInstance,local_4c8.ArrayNum,&local_4c8.ArrayMax);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_4c8.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_7a0,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_7a0,0);
    if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
    }
  }
  if (local_4c8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_4c8.AllocatorInstance.SecondaryData);
  }
  local_438.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_438.ArrayNum = 0;
  local_438.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_438,1000,Default);
  iVar5 = 999;
  iVar13 = 999;
  lVar14 = 999;
  do {
    iVar7 = local_438.ArrayNum;
    if ((local_438.ArrayNum <= iVar13) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_438;
    if (local_438.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_438.AllocatorInstance.SecondaryData;
    }
    pvVar1 = (void *)((longlong)FVar9 + lVar14 * 4);
    iVar6 = (iVar7 - iVar13) + -1;
    if (iVar6 != 0) {
      memmove(pvVar1,(void *)((longlong)pvVar1 + 4),(longlong)iVar6 << 2);
      iVar7 = local_438.ArrayNum;
    }
    local_438.ArrayNum = iVar7 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_438.AllocatorInstance,local_438.ArrayNum,&local_438.ArrayMax);
    lVar14 = lVar14 + -1;
    iVar13 = iVar13 + -1;
  } while (-1 < iVar13);
  if (bVar15 != local_438.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_790,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_790,0);
    if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_790.Data.AllocatorInstance.Data);
    }
  }
  if (local_438.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_438.AllocatorInstance.SecondaryData);
  }
  local_3a8.ArrayMax = 0x20;
  local_3a8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_3a8.ArrayNum = 0;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_3a8,1000,Default);
  lVar14 = 999;
  do {
    iVar13 = local_3a8.ArrayNum;
    if ((local_3a8.ArrayNum < iVar5 + 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_3a8;
    if (local_3a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_3a8.AllocatorInstance.SecondaryData;
    }
    pvVar1 = (void *)((longlong)FVar9 + lVar14 * 4);
    iVar7 = (iVar13 - iVar5) + -1;
    if (iVar7 != 0) {
      memmove(pvVar1,(void *)((longlong)pvVar1 + 4),(longlong)iVar7 << 2);
      iVar13 = local_3a8.ArrayNum;
    }
    local_3a8.ArrayNum = iVar13 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_3a8.AllocatorInstance,local_3a8.ArrayNum,&local_3a8.ArrayMax);
    lVar14 = lVar14 + -1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  if (bVar15 != local_3a8.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_780,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_780,0);
    if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_780.Data.AllocatorInstance.Data);
    }
  }
  if (local_3a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_3a8.AllocatorInstance.SecondaryData);
  }
  local_678.SecondaryData = (ForElementType<int>)0x0;
  local_5f0 = 0;
  local_5ec = 0x20;
  iVar13 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                     (4,4,1000,&local_678,&local_5f0,&local_5ec);
  FVar9 = (ForElementType<int>)&local_678;
  if (local_678.SecondaryData != (ForElementType<int>)0x0) {
    FVar9 = local_678.SecondaryData;
  }
  memset((void *)((longlong)FVar9 + (longlong)iVar13 * 4),0,4000);
  lVar14 = 1000;
  do {
    iVar13 = local_5f0;
    if ((local_5f0 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_678;
    if (local_678.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_678.SecondaryData;
    }
    iVar5 = iVar13 + -1;
    if (1 < iVar5) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      memmove((void *)FVar9,(void *)((longlong)FVar9 + (longlong)(iVar13 - iVar5) * 4),
              (longlong)iVar5 << 2);
      iVar13 = local_5f0;
    }
    local_5f0 = iVar13 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_678,local_5f0,&local_5ec);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_5ec < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_770,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_770,0);
    if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_770.Data.AllocatorInstance.Data);
    }
  }
  if (local_678.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_678.SecondaryData);
  }
  local_318.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_318.ArrayNum = 0;
  local_318.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_318,1000,Default);
  lVar14 = 1000;
  do {
    iVar13 = local_318.ArrayNum;
    if ((local_318.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_318;
    if (local_318.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_318.AllocatorInstance.SecondaryData;
    }
    iVar5 = iVar13 + -1;
    if (1 < iVar5) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      memmove((void *)FVar9,(void *)((longlong)FVar9 + (longlong)(iVar13 - iVar5) * 4),
              (longlong)iVar5 << 2);
      iVar13 = local_318.ArrayNum;
    }
    local_318.ArrayNum = iVar13 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_318.AllocatorInstance,local_318.ArrayNum,&local_318.ArrayMax);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_318.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_760,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_760,0);
    if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_760.Data.AllocatorInstance.Data);
    }
  }
  if (local_318.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_318.AllocatorInstance.SecondaryData);
  }
  local_288.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_288,1000,Default);
  lVar14 = 1000;
  do {
    iVar13 = local_288.ArrayNum;
    if ((local_288.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_288;
    if (local_288.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_288.AllocatorInstance.SecondaryData;
    }
    iVar5 = iVar13 + -1;
    if (1 < iVar5) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      memmove((void *)FVar9,(void *)((longlong)FVar9 + (longlong)(iVar13 - iVar5) * 4),
              (longlong)iVar5 << 2);
      iVar13 = local_288.ArrayNum;
    }
    local_288.ArrayNum = iVar13 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_288.AllocatorInstance,local_288.ArrayNum,&local_288.ArrayMax);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_288.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_750,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_750,0);
    if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_750.Data.AllocatorInstance.Data);
    }
  }
  if (local_288.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_288.AllocatorInstance.SecondaryData);
  }
  local_558.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_558.ArrayNum = 0;
  local_558.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_558,1000,Default);
  if (0 < local_558.ArrayNum) {
    do {
      FVar9 = (ForElementType<int>)&local_558;
      if (local_558.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_558.AllocatorInstance.SecondaryData;
      }
      iVar13 = local_558.ArrayNum + -1;
      if (1 < iVar13) {
        iVar13 = 1;
      }
      if (iVar13 != 0) {
        memmove((void *)FVar9,
                (void *)((longlong)FVar9 + (longlong)(local_558.ArrayNum - iVar13) * 4),
                (longlong)iVar13 << 2);
      }
      local_558.ArrayNum = local_558.ArrayNum + -1;
    } while (0 < local_558.ArrayNum);
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,&local_558.AllocatorInstance,local_558.ArrayNum,&local_558.ArrayMax);
  }
  if (bVar15 != local_558.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_740,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_740,0);
    if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_740.Data.AllocatorInstance.Data);
    }
  }
  if (local_558.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_558.AllocatorInstance.SecondaryData);
  }
  local_708.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_708.ArrayNum = 0;
  local_708.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&local_708,1000,Default);
  lVar14 = 1000;
  FVar9 = local_708.AllocatorInstance.SecondaryData;
  iVar13 = local_708.ArrayNum;
  do {
    FVar10 = (ForElementType<int>)&local_708;
    if (FVar9 != (ForElementType<int>)0x0) {
      FVar10 = FVar9;
    }
    for (FVar12 = FVar10; FVar12 != (ForElementType<int>)((longlong)FVar10 + (longlong)iVar13 * 4);
        FVar12 = (ForElementType<int>)((longlong)FVar12 + 4)) {
      if (*(int *)FVar12 == 0) {
        uVar11 = (uint)((longlong)FVar12 - (longlong)FVar10 >> 2);
        if (uVar11 != 0xffffffff) {
          uVar8 = 0;
          if ((int)(uVar11 + 1) <= iVar13) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), FVar9 = local_708.AllocatorInstance.SecondaryData,
             iVar13 = local_708.ArrayNum, bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar10 = (ForElementType<int>)&local_708;
          if (FVar9 != (ForElementType<int>)0x0) {
            FVar10 = FVar9;
          }
          iVar5 = (iVar13 - uVar11) + -1;
          if (1 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            memmove((int *)((longlong)FVar10 + (longlong)(int)uVar11 * 4),
                    (int *)((longlong)FVar10 + (longlong)(iVar13 - iVar5) * 4),(longlong)iVar5 << 2)
            ;
            iVar13 = local_708.ArrayNum;
          }
          local_708.ArrayNum = iVar13 + -1;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&local_708.AllocatorInstance,local_708.ArrayNum,&local_708.ArrayMax);
          FVar9 = local_708.AllocatorInstance.SecondaryData;
          iVar13 = local_708.ArrayNum;
        }
        break;
      }
    }
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) {
      if (bVar15 != local_708.ArrayMax < 1000) {
        plVar2 = *(longlong **)this;
        pcVar3 = *(code **)(*plVar2 + 0x28);
        ::FString::PrintfImpl(&local_730,L"%s: The two values are not equal.");
        (*pcVar3)(plVar2,&local_730,0);
        FVar9 = local_708.AllocatorInstance.SecondaryData;
        if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_730.Data.AllocatorInstance.Data);
          FVar9 = local_708.AllocatorInstance.SecondaryData;
        }
      }
      if (FVar9 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar9);
      }
      local_d8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0x20;
      TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
                (&local_d8,1000,Default);
      local_7d8[0] = 0;
      TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::RemoveSwap
                (&local_d8,local_7d8,Default);
      if (bVar15 != local_d8.ArrayMax < 1000) {
        plVar2 = *(longlong **)this;
        pcVar3 = *(code **)(*plVar2 + 0x28);
        ::FString::PrintfImpl(&local_720,L"%s: The two values are not equal.");
        (*pcVar3)(plVar2,&local_720,0);
        if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_720.Data.AllocatorInstance.Data);
        }
      }
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
      }
      FVar9 = (param_1->AllocatorInstance).SecondaryData;
      if (FVar9 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar9);
      }
      return;
    }
  } while( true );
}

// operator()<TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>_> @ 1414e57c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
operator()<TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>_>
          (void *this,
          TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *param_1,
          EAllowShrinking param_2)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<int> FVar9;
  ForElementType<int> FVar10;
  uint uVar11;
  ForElementType<int> FVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStackY_818 [32];
  int local_7d8 [2];
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> *local_7d0;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_708;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_678;
  ForElementType<int> local_5e8;
  int local_560;
  int local_55c;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_558;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_4c8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_438;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_3a8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_318;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_288;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_1f8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_168;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_818;
  local_1f8.ArrayMax = 0x20;
  local_1f8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_1f8.ArrayNum = 0;
  local_7d0 = param_1;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_1f8,1000,No);
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_1f8,1,No);
  bVar15 = param_2 == Default;
  if (bVar15 != local_1f8.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_7c8,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_7c8);
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
  }
  local_168.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_168,1000,No);
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNumZeroed
            (&local_168,1,No);
  if (bVar15 != local_168.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_7b8,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_7b8);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  local_678.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_678.ArrayNum = 0;
  local_678.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_678,1000,No);
  iVar13 = local_678.ArrayNum;
  if (local_678.ArrayNum < 1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>_>
              (4,4,1 - local_678.ArrayNum,&local_678.AllocatorInstance,&local_678.ArrayNum,
               &local_678.ArrayMax);
  }
  else if (1 < local_678.ArrayNum) {
    iVar5 = local_678.ArrayNum + -1;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar5 == 0) goto LAB_1414e59c1;
    FVar10 = (ForElementType<int>)&local_678;
    if (local_678.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar10 = local_678.AllocatorInstance.SecondaryData;
    }
    iVar7 = (iVar13 - iVar5) + -1;
    if (iVar7 != 0) {
      memmove((uchar *)((longlong)FVar10 + 4),(uchar *)((longlong)FVar10 + 4) + (longlong)iVar5 * 4,
              (longlong)iVar7 << 2);
      iVar13 = local_678.ArrayNum;
    }
    local_678.ArrayNum = iVar13 - iVar5;
  }
LAB_1414e59c1:
  FVar10 = local_678.AllocatorInstance.SecondaryData;
  if (bVar15 != local_678.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_7a8,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_7a8);
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
  }
  if (FVar10 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_558.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_558.ArrayNum = 0;
  local_558.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_558,1000,No);
  lVar14 = 1000;
  FVar10 = local_558.AllocatorInstance.SecondaryData;
  do {
    iVar13 = local_558.ArrayNum;
    if ((local_558.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_558;
    if (FVar10 != (ForElementType<int>)0x0) {
      FVar9 = FVar10;
    }
    pvVar1 = (void *)((longlong)FVar9 + (longlong)(iVar13 + -1) * 4);
    iVar5 = (iVar13 - (iVar13 + -1)) + -1;
    if (iVar5 != 0) {
      memmove(pvVar1,(void *)((longlong)pvVar1 + 4),(longlong)iVar5 << 2);
      FVar10 = local_558.AllocatorInstance.SecondaryData;
      iVar13 = local_558.ArrayNum;
    }
    local_558.ArrayNum = iVar13 + -1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_558.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_798,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_798);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  if (FVar10 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_4c8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_4c8.ArrayNum = 0;
  local_4c8.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_4c8,1000,No);
  iVar5 = 999;
  iVar13 = 999;
  lVar14 = 999;
  FVar10 = local_4c8.AllocatorInstance.SecondaryData;
  do {
    iVar7 = local_4c8.ArrayNum;
    if ((local_4c8.ArrayNum <= iVar13) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_4c8;
    if (FVar10 != (ForElementType<int>)0x0) {
      FVar9 = FVar10;
    }
    pvVar1 = (void *)((longlong)FVar9 + lVar14 * 4);
    iVar6 = (iVar7 - iVar13) + -1;
    if (iVar6 != 0) {
      memmove(pvVar1,(void *)((longlong)pvVar1 + 4),(longlong)iVar6 << 2);
      FVar10 = local_4c8.AllocatorInstance.SecondaryData;
      iVar7 = local_4c8.ArrayNum;
    }
    local_4c8.ArrayNum = iVar7 + -1;
    lVar14 = lVar14 + -1;
    iVar13 = iVar13 + -1;
  } while (-1 < iVar13);
  if (bVar15 != local_4c8.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_788,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_788);
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
  }
  if (FVar10 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_438.ArrayMax = 0x20;
  local_438.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_438.ArrayNum = 0;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_438,1000,No);
  lVar14 = 999;
  FVar10 = local_438.AllocatorInstance.SecondaryData;
  do {
    iVar13 = local_438.ArrayNum;
    if ((local_438.ArrayNum < iVar5 + 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar9 = (ForElementType<int>)&local_438;
    if (FVar10 != (ForElementType<int>)0x0) {
      FVar9 = FVar10;
    }
    pvVar1 = (void *)((longlong)FVar9 + lVar14 * 4);
    iVar7 = (iVar13 - iVar5) + -1;
    if (iVar7 != 0) {
      memmove(pvVar1,(void *)((longlong)pvVar1 + 4),(longlong)iVar7 << 2);
      FVar10 = local_438.AllocatorInstance.SecondaryData;
      iVar13 = local_438.ArrayNum;
    }
    local_438.ArrayNum = iVar13 + -1;
    lVar14 = lVar14 + -1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  if (bVar15 != local_438.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_778,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  if (FVar10 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_5e8.SecondaryData = (ForElementType<int>)0x0;
  local_560 = 0;
  local_55c = 0x20;
  iVar13 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>::ForElementType<int>_>
                     (4,4,1000,&local_5e8,&local_560,&local_55c);
  FVar10 = (ForElementType<int>)&local_5e8;
  if (local_5e8.SecondaryData != (ForElementType<int>)0x0) {
    FVar10 = local_5e8.SecondaryData;
  }
  memset((void *)((longlong)FVar10 + (longlong)iVar13 * 4),0,4000);
  lVar14 = 1000;
  FVar10 = local_5e8.SecondaryData;
  do {
    iVar13 = local_560;
    if ((local_560 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = iVar13 + -1;
    FVar9 = (ForElementType<int>)&local_5e8;
    if (FVar10 != (ForElementType<int>)0x0) {
      FVar9 = FVar10;
    }
    if (1 < iVar5) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      memmove((void *)FVar9,(void *)((longlong)FVar9 + (longlong)(iVar13 - iVar5) * 4),
              (longlong)iVar5 << 2);
      FVar10 = local_5e8.SecondaryData;
      iVar13 = local_560;
    }
    local_560 = iVar13 + -1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_55c < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_768,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_768);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  if (FVar10 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_3a8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_3a8.ArrayNum = 0;
  local_3a8.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_3a8,1000,No);
  lVar14 = 1000;
  FVar10 = local_3a8.AllocatorInstance.SecondaryData;
  do {
    iVar13 = local_3a8.ArrayNum;
    if ((local_3a8.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = iVar13 + -1;
    FVar9 = (ForElementType<int>)&local_3a8;
    if (FVar10 != (ForElementType<int>)0x0) {
      FVar9 = FVar10;
    }
    if (1 < iVar5) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      memmove((void *)FVar9,(void *)((longlong)FVar9 + (longlong)(iVar13 - iVar5) * 4),
              (longlong)iVar5 << 2);
      FVar10 = local_3a8.AllocatorInstance.SecondaryData;
      iVar13 = local_3a8.ArrayNum;
    }
    local_3a8.ArrayNum = iVar13 + -1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_3a8.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_758,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_758);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
  }
  if (FVar10 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_318.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_318.ArrayNum = 0;
  local_318.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_318,1000,No);
  lVar14 = 1000;
  FVar10 = local_318.AllocatorInstance.SecondaryData;
  do {
    iVar13 = local_318.ArrayNum;
    if ((local_318.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = iVar13 + -1;
    FVar9 = (ForElementType<int>)&local_318;
    if (FVar10 != (ForElementType<int>)0x0) {
      FVar9 = FVar10;
    }
    if (1 < iVar5) {
      iVar5 = 1;
    }
    if (iVar5 != 0) {
      memmove((void *)FVar9,(void *)((longlong)FVar9 + (longlong)(iVar13 - iVar5) * 4),
              (longlong)iVar5 << 2);
      FVar10 = local_318.AllocatorInstance.SecondaryData;
      iVar13 = local_318.ArrayNum;
    }
    local_318.ArrayNum = iVar13 + -1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (bVar15 != local_318.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_748,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_748);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  if (FVar10 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_288.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNum
            (&local_288,1000,No);
  for (; 0 < local_288.ArrayNum; local_288.ArrayNum = local_288.ArrayNum + -1) {
    FVar10 = (ForElementType<int>)&local_288;
    if (local_288.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar10 = local_288.AllocatorInstance.SecondaryData;
    }
    iVar13 = local_288.ArrayNum + -1;
    if (1 < iVar13) {
      iVar13 = 1;
    }
    if (iVar13 != 0) {
      memmove((void *)FVar10,
              (void *)((longlong)FVar10 + (longlong)(local_288.ArrayNum - iVar13) * 4),
              (longlong)iVar13 << 2);
    }
  }
  if (bVar15 != local_288.ArrayMax < 1000) {
    plVar2 = *(longlong **)this;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_738,L"%s: The two values are not equal.");
    (*pcVar3)(plVar2,&local_738);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  if (local_288.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_288.AllocatorInstance.SecondaryData);
  }
  local_708.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_708.ArrayNum = 0;
  local_708.ArrayMax = 0x20;
  TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNumZeroed
            (&local_708,1000,No);
  lVar14 = 1000;
  FVar10 = local_708.AllocatorInstance.SecondaryData;
  iVar13 = local_708.ArrayNum;
  do {
    FVar9 = (ForElementType<int>)&local_708;
    if (FVar10 != (ForElementType<int>)0x0) {
      FVar9 = FVar10;
    }
    for (FVar12 = FVar9; FVar12 != (ForElementType<int>)((longlong)FVar9 + (longlong)iVar13 * 4);
        FVar12 = (ForElementType<int>)((longlong)FVar12 + 4)) {
      if (*(int *)FVar12 == 0) {
        uVar11 = (uint)((longlong)FVar12 - (longlong)FVar9 >> 2);
        if (uVar11 != 0xffffffff) {
          uVar8 = 0;
          if ((int)(uVar11 + 1) <= iVar13) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), FVar10 = local_708.AllocatorInstance.SecondaryData,
             iVar13 = local_708.ArrayNum, bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar9 = (ForElementType<int>)&local_708;
          if (FVar10 != (ForElementType<int>)0x0) {
            FVar9 = FVar10;
          }
          iVar5 = (iVar13 - uVar11) + -1;
          if (1 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            memmove((int *)((longlong)FVar9 + (longlong)(int)uVar11 * 4),
                    (int *)((longlong)FVar9 + (longlong)(iVar13 - iVar5) * 4),(longlong)iVar5 << 2);
            FVar10 = local_708.AllocatorInstance.SecondaryData;
            iVar13 = local_708.ArrayNum;
          }
          iVar13 = iVar13 + -1;
          local_708.ArrayNum = iVar13;
        }
        break;
      }
    }
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) {
      if (bVar15 != local_708.ArrayMax < 1000) {
        plVar2 = *(longlong **)this;
        pcVar3 = *(code **)(*plVar2 + 0x28);
        ::FString::PrintfImpl(&local_728,L"%s: The two values are not equal.");
        (*pcVar3)(plVar2,&local_728,0);
        FVar10 = local_708.AllocatorInstance.SecondaryData;
        if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_728.Data.AllocatorInstance.Data);
          FVar10 = local_708.AllocatorInstance.SecondaryData;
        }
      }
      if (FVar10 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar10);
      }
      local_d8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0x20;
      TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::SetNumZeroed
                (&local_d8,1000,No);
      local_7d8[0] = 0;
      TArray<int,TSizedInlineAllocator<32,32,TSizedNonshrinkingAllocator<32>_>_>::RemoveSwap
                (&local_d8,local_7d8,No);
      if (bVar15 != local_d8.ArrayMax < 1000) {
        plVar2 = *(longlong **)this;
        pcVar3 = *(code **)(*plVar2 + 0x28);
        ::FString::PrintfImpl(&local_718,L"%s: The two values are not equal.");
        (*pcVar3)(plVar2,&local_718,0);
        if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_718.Data.AllocatorInstance.Data);
        }
      }
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
      }
      FVar10 = (local_7d0->AllocatorInstance).SecondaryData;
      if (FVar10 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar10);
      }
      return;
    }
  } while( true );
}

// operator()<TArray<int,TSizedNonshrinkingAllocator<32>_>_> @ 1414e65c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FContainersTArrayTest::RunTest'::__l2::<lambda_1>::
operator()<TArray<int,TSizedNonshrinkingAllocator<32>_>_>
          (void *this,TArray<int,TSizedNonshrinkingAllocator<32>_> *param_1,EAllowShrinking param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  int iVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  bool bVar14;
  int local_res18 [2];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  ForAnyElementType local_198;
  int local_190;
  int iStack_18c;
  ForAnyElementType local_188;
  int local_180;
  int iStack_17c;
  ForAnyElementType local_178;
  undefined8 local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  ForAnyElementType local_118;
  int local_110;
  int iStack_10c;
  TArray<int,TSizedNonshrinkingAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_1b8,&local_1b0,&iStack_1ac);
  FVar12.Data = local_1b8.Data;
  memset(local_1b8.Data + (longlong)iVar5 * 4,0,4000);
  iVar5 = local_1b0;
  if (local_1b0 < 1) {
    iVar8 = 1 - local_1b0;
    iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar8,&local_1b8,&local_1b0,&iStack_1ac);
    FVar12.Data = local_1b8.Data;
    memset(local_1b8.Data + (longlong)iVar5 * 4,0,(longlong)iVar8 << 2);
    iVar5 = local_1b0;
  }
  else if (1 < local_1b0) {
    iVar8 = local_1b0 + -1;
    if (iVar8 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (iVar8 == 0) goto LAB_1414e6708;
    iVar5 = iVar5 - iVar8;
    if (iVar5 + -1 != 0) {
      memmove(FVar12.Data + 4,FVar12.Data + 4 + (longlong)iVar8 * 4,(longlong)(iVar5 + -1) << 2);
    }
  }
LAB_1414e6708:
  local_1b0 = iVar5;
  bVar14 = param_2 == Default;
  if (bVar14 != iStack_1ac < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  iStack_19c = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_1a8,&local_1a0,&iStack_19c);
  FVar12.Data = local_1a8.Data;
  memset(local_1a8.Data + (longlong)iVar5 * 4,0,4000);
  iVar5 = local_1a0;
  if (local_1a0 < 1) {
    iVar8 = 1 - local_1a0;
    iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar8,&local_1a8,&local_1a0,&iStack_19c);
    FVar12.Data = local_1a8.Data;
    memset(local_1a8.Data + (longlong)iVar5 * 4,0,(longlong)iVar8 << 2);
    iVar5 = local_1a0;
  }
  else if (1 < local_1a0) {
    iVar8 = local_1a0 + -1;
    if (iVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (iVar8 == 0) goto LAB_1414e6881;
    iVar5 = iVar5 - iVar8;
    if (iVar5 + -1 != 0) {
      memmove(FVar12.Data + 4,FVar12.Data + 4 + (longlong)iVar8 * 4,(longlong)(iVar5 + -1) << 2);
    }
  }
LAB_1414e6881:
  local_1a0 = iVar5;
  if (bVar14 != iStack_19c < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_e8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  iStack_18c = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_198,&local_190,&iStack_18c);
  FVar12.Data = local_198.Data;
  memset(local_198.Data + (longlong)iVar5 * 4,0,4000);
  iVar5 = local_190;
  if (local_190 < 1) {
    UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1 - local_190,&local_198,&local_190,&iStack_18c);
    FVar12.Data = local_198.Data;
    iVar5 = local_190;
  }
  else if (1 < local_190) {
    iVar8 = local_190 + -1;
    if (iVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (iVar8 == 0) goto LAB_1414e69d6;
    iVar5 = iVar5 - iVar8;
    if (iVar5 + -1 != 0) {
      memmove(FVar12.Data + 4,FVar12.Data + 4 + (longlong)iVar8 * 4,(longlong)(iVar5 + -1) << 2);
    }
  }
LAB_1414e69d6:
  local_190 = iVar5;
  if (bVar14 != iStack_18c < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_d8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_178,(int *)&local_170,(int *)((longlong)&local_170 + 4));
  FVar12.Data = local_178.Data;
  memset(local_178.Data + (longlong)iVar5 * 4,0,4000);
  lVar13 = 1000;
  iVar5 = (int)local_170;
  do {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = iVar5 + -1;
    iVar5 = (iVar5 - iVar8) + -1;
    if (iVar5 != 0) {
      memmove(FVar12.Data + (longlong)iVar8 * 4,FVar12.Data + (longlong)iVar8 * 4 + 4,
              (longlong)iVar5 << 2);
    }
    local_170 = CONCAT44(local_170._4_4_,iVar8);
    lVar13 = lVar13 + -1;
    iVar5 = iVar8;
  } while (lVar13 != 0);
  if (bVar14 != local_170._4_4_ < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_c8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_168,(int *)&local_160,(int *)((longlong)&local_160 + 4));
  FVar12.Data = local_168.Data;
  memset(local_168.Data + (longlong)iVar5 * 4,0,4000);
  iVar11 = 999;
  iVar8 = 999;
  lVar13 = 999;
  iVar5 = (int)local_160;
  do {
    if ((iVar5 <= iVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (iVar5 - iVar8) + -1;
    if (iVar6 != 0) {
      memmove(FVar12.Data + lVar13 * 4,FVar12.Data + lVar13 * 4 + 4,(longlong)iVar6 << 2);
    }
    iVar5 = iVar5 + -1;
    lVar13 = lVar13 + -1;
    iVar8 = iVar8 + -1;
    local_160 = CONCAT44(local_160._4_4_,iVar5);
  } while (-1 < iVar8);
  if (bVar14 != local_160._4_4_ < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_b8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_b8,0);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_158,(int *)&local_150,(int *)((longlong)&local_150 + 4));
  FVar12.Data = local_158.Data;
  memset(local_158.Data + (longlong)iVar5 * 4,0,4000);
  lVar13 = 999;
  iVar5 = (int)local_150;
  do {
    if ((iVar5 < iVar11 + 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = (iVar5 - iVar11) + -1;
    if (iVar8 != 0) {
      memmove(FVar12.Data + lVar13 * 4,FVar12.Data + lVar13 * 4 + 4,(longlong)iVar8 << 2);
    }
    iVar5 = iVar5 + -1;
    lVar13 = lVar13 + -1;
    iVar11 = iVar11 + -1;
    local_150 = CONCAT44(local_150._4_4_,iVar5);
  } while (-1 < iVar11);
  if (bVar14 != local_150._4_4_ < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_148,(int *)&local_140,(int *)((longlong)&local_140 + 4));
  FVar12.Data = local_148.Data;
  memset(local_148.Data + (longlong)iVar5 * 4,0,4000);
  lVar13 = 1000;
  iVar5 = (int)local_140;
  do {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = iVar5 + -1;
    iVar11 = iVar8;
    if (1 < iVar8) {
      iVar11 = 1;
    }
    if (iVar11 != 0) {
      memmove(FVar12.Data,FVar12.Data + (longlong)(iVar5 - iVar11) * 4,(longlong)iVar11 << 2);
    }
    local_140 = CONCAT44(local_140._4_4_,iVar8);
    lVar13 = lVar13 + -1;
    iVar5 = iVar8;
  } while (lVar13 != 0);
  if (bVar14 != local_140._4_4_ < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_98,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_98,0);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_138,(int *)&local_130,(int *)((longlong)&local_130 + 4));
  FVar12.Data = local_138.Data;
  memset(local_138.Data + (longlong)iVar5 * 4,0,4000);
  lVar13 = 1000;
  iVar5 = (int)local_130;
  do {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = iVar5 + -1;
    iVar11 = iVar8;
    if (1 < iVar8) {
      iVar11 = 1;
    }
    if (iVar11 != 0) {
      memmove(FVar12.Data,FVar12.Data + (longlong)(iVar5 - iVar11) * 4,(longlong)iVar11 << 2);
    }
    local_130 = CONCAT44(local_130._4_4_,iVar8);
    lVar13 = lVar13 + -1;
    iVar5 = iVar8;
  } while (lVar13 != 0);
  if (bVar14 != local_130._4_4_ < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_128,(int *)&local_120,(int *)((longlong)&local_120 + 4));
  FVar12.Data = local_128.Data;
  memset(local_128.Data + (longlong)iVar5 * 4,0,4000);
  lVar13 = 1000;
  iVar5 = (int)local_120;
  do {
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = iVar5 + -1;
    iVar11 = iVar8;
    if (1 < iVar8) {
      iVar11 = 1;
    }
    if (iVar11 != 0) {
      memmove(FVar12.Data,FVar12.Data + (longlong)(iVar5 - iVar11) * 4,(longlong)iVar11 << 2);
    }
    local_120 = CONCAT44(local_120._4_4_,iVar8);
    lVar13 = lVar13 + -1;
    iVar5 = iVar8;
  } while (lVar13 != 0);
  if (bVar14 != local_120._4_4_ < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_78,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_78,0);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  iStack_17c = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_188,&local_180,&iStack_17c);
  FVar12.Data = local_188.Data;
  memset(local_188.Data + (longlong)iVar5 * 4,0,4000);
  iVar5 = local_180;
  while (iVar8 = iVar5, local_180 = iVar8, 0 < iVar8) {
    if (iVar8 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((iVar8 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = iVar8 + -1;
    iVar11 = iVar5;
    if (1 < iVar5) {
      iVar11 = 1;
    }
    if (iVar11 != 0) {
      memmove(FVar12.Data,FVar12.Data + (longlong)(iVar8 - iVar11) * 4,(longlong)iVar11 << 2);
    }
  }
  if (bVar14 != iStack_17c < 1000) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_68,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_68,0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  iStack_10c = 0;
  iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1000,&local_118,&local_110,&iStack_10c);
  FVar12.Data = local_118.Data;
  memset(local_118.Data + (longlong)iVar5 * 4,0,4000);
  lVar13 = 1000;
  iVar5 = local_110;
  do {
    for (FVar10.Data = FVar12.Data; FVar10.Data != FVar12.Data + (longlong)iVar5 * 4;
        FVar10.Data = FVar10.Data + 4) {
      if (*(int *)FVar10.Data == 0) {
        uVar9 = (uint)((longlong)FVar10.Data - (longlong)FVar12.Data >> 2);
        if (uVar9 != 0xffffffff) {
          uVar7 = 0;
          if ((int)(uVar9 + 1) <= iVar5) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = (iVar5 - uVar9) + -1;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove(FVar12.Data + (longlong)(int)uVar9 * 4,
                    FVar12.Data + (longlong)(iVar5 - iVar8) * 4,(longlong)iVar8 << 2);
          }
          iVar5 = iVar5 + -1;
          local_110 = iVar5;
        }
        break;
      }
    }
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) {
      if (bVar14 != iStack_10c < 1000) {
        plVar1 = *(longlong **)this;
        pcVar2 = *(code **)(*plVar1 + 0x28);
        ::FString::PrintfImpl(&local_58,L"%s: The two values are not equal.");
        (*pcVar2)(plVar1,&local_58,0);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      iVar5 = UE::Core::Private::ReallocGrow<0,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,1000,&local_108.AllocatorInstance,&local_108.ArrayNum,
                         &local_108.ArrayMax);
      memset(local_108.AllocatorInstance.Data + (longlong)iVar5 * 4,0,4000);
      local_res18[0] = 0;
      TArray<int,TSizedNonshrinkingAllocator<32>_>::RemoveSwap(&local_108,local_res18,No);
      if (bVar14 != local_108.ArrayMax < 1000) {
        plVar1 = *(longlong **)this;
        pcVar2 = *(code **)(*plVar1 + 0x28);
        ::FString::PrintfImpl(&local_48,L"%s: The two values are not equal.");
        (*pcVar2)(plVar1,&local_48,0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return;
    }
  } while( true );
}

