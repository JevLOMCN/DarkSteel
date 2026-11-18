// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14166d680

EAutomationTestFlags __thiscall FTopologicalSortTest::GetTestFlags(FTopologicalSortTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14166d690

bool __thiscall FTopologicalSortTest::IsStressTest(FTopologicalSortTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14166d6a0

uint __thiscall FTopologicalSortTest::GetRequiredDeviceNum(FTopologicalSortTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14166d6b0

FString * __thiscall
FTopologicalSortTest::GetTestSourceFileName
          (FTopologicalSortTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTrackerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14166d6e0

int __thiscall FTopologicalSortTest::GetTestSourceFileLine(FTopologicalSortTest *this)

{
  return 0x5f;
}

// GetTests @ 14166d6f0

/* WARNING: Removing unreachable block (ram,0x00014166d7dd) */
/* WARNING: Removing unreachable block (ram,0x00014166d8a8) */

void __thiscall
FTopologicalSortTest::GetTests
          (FTopologicalSortTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.LLM.TopologicalSort");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14166d8d0

/* WARNING: Removing unreachable block (ram,0x00014166e5e9) */
/* WARNING: Removing unreachable block (ram,0x00014166e055) */
/* WARNING: Removing unreachable block (ram,0x00014166db30) */
/* WARNING: Removing unreachable block (ram,0x00014166da1f) */
/* WARNING: Removing unreachable block (ram,0x00014166df37) */
/* WARNING: Removing unreachable block (ram,0x00014166e4ca) */
/* WARNING: Removing unreachable block (ram,0x00014166e717) */

bool __thiscall FTopologicalSortTest::RunTest(FTopologicalSortTest *this,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
  *(undefined1 **)local_b8.AllocatorInstance.Data = &DAT_200000001;
  if (((local_d8.Data <= &local_b8) &&
      (&local_b8 <
       (TArray<int,TSizedDefaultAllocator<32>_> *)(local_d8.Data + (longlong)local_d0._4_4_ * 0x10))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_d0;
  if ((int)local_d0 == local_d0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
  }
  pFVar7 = local_d8.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(FScriptContainerElement **)&pFVar7->field_0x0 = local_b8.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_b8.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_b8.ArrayMax;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  local_d0._0_4_ = iVar5 + 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  *(undefined4 *)local_a8.AllocatorInstance.Data = 2;
  if (((local_d8.Data <= &local_a8) &&
      (&local_a8 <
       (TArray<int,TSizedDefaultAllocator<32>_> *)(local_d8.Data + (longlong)local_d0._4_4_ * 0x10))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((int)local_d0 == local_d0._4_4_) {
    local_d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
  }
  iVar5 = (int)local_d0 + 1;
  pFVar7 = local_d8.Data + (longlong)(int)local_d0 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(FScriptContainerElement **)&pFVar7->field_0x0 = local_a8.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_a8.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_a8.ArrayMax;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (iVar5 == local_d0._4_4_) {
    local_d0._0_4_ = iVar5;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
  }
  local_d0 = CONCAT44(local_d0._4_4_,iVar5 + 1);
  *(undefined8 *)&local_d8.Data[(longlong)iVar5 * 0x10].field_0x0 = 0;
  *(undefined8 *)(local_d8.Data + (longlong)iVar5 * 0x10 + 8) = 0;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,(int)local_100);
  FVar2.Data = local_d8.Data;
  iVar5 = (int)local_d0;
  local_100 = CONCAT44(local_100._4_4_,(int)local_d0);
  if (((int)local_d0 != 0) || (iVar8 = 0, local_100._4_4_ != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_d0,local_100._4_4_,&local_108,(int)local_d0,
               (int *)((longlong)&local_100 + 4));
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              (local_108.Data,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar2.Data,iVar5);
    iVar8 = (int)local_100;
  }
  LLMAlgoImpl::
  TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,_FTopologicalSortTest::RunTest_::__l2::<lambda_1>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,iVar8,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &local_108,RootToLeaf);
  if (((int)local_100 == (int)local_d0) &&
     (bVar3 = CompareItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.Data,(int)local_100),
     bVar3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"SimpleCase pre-sorted RootToLeaf remains stable sorted",
             bVar3);
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  uVar11 = (int)local_d0 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    while( true ) {
      uVar6 = 0;
      if ((int)uVar11 < (int)local_d0) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_d8.Data + lVar12);
      if (((local_e8.Data <= pTVar9) &&
          (pTVar9 < (TArray<int,TSizedDefaultAllocator<32>_> *)
                    (local_e8.Data + (longlong)iStack_dc * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (local_e0 == iStack_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_e8,&iStack_dc);
      }
      pFVar10 = local_e8.Data + (longlong)local_e0 * 0x10;
      local_e0 = local_e0 + 1;
      *(FScriptContainerElement **)&pFVar10->field_0x0 = (FScriptContainerElement *)0x0;
      iVar5 = pTVar9->ArrayNum;
      pFVar7 = (pTVar9->AllocatorInstance).Data;
      *(int *)(pFVar10 + 8) = iVar5;
      if (iVar5 == 0) {
        *(int *)(pFVar10 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar5,0,(ForAnyElementType *)pFVar10,iVar5,(int *)(pFVar10 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar10->field_0x0,pFVar7,(longlong)iVar5 << 2);
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
      if ((int)uVar11 < 0) break;
    }
  }
  LLMAlgoImpl::
  TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,_FTopologicalSortTest::RunTest_::__l2::<lambda_1>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,(int)local_100,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &local_108,LeafToRoot);
  if (((int)local_100 == local_e0) &&
     (bVar3 = CompareItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.Data,(int)local_100),
     bVar3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"SimpleCase reverse-sorted RootToLeaf sorts into reverse order",bVar3);
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 1;
  *(undefined8 *)&local_c8.Data[(longlong)iVar5 * 0x10].field_0x0 = 0;
  *(undefined8 *)(local_c8.Data + (longlong)iVar5 * 0x10 + 8) = 0;
  local_c0._0_4_ = iVar5 + 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
  *(undefined4 *)local_98.AllocatorInstance.Data = 0;
  if (((local_c8.Data <= &local_98) &&
      (&local_98 <
       (TArray<int,TSizedDefaultAllocator<32>_> *)(local_c8.Data + (longlong)local_c0._4_4_ * 0x10))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((int)local_c0 == local_c0._4_4_) {
    local_c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
  }
  pFVar7 = local_c8.Data + (longlong)(int)local_c0 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(FScriptContainerElement **)&pFVar7->field_0x0 = local_98.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_98.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_98.ArrayMax;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  local_c0._0_4_ = (int)local_c0 + 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  *(undefined8 *)local_88.AllocatorInstance.Data = 1;
  if (((local_c8.Data <= &local_88) &&
      (&local_88 <
       (TArray<int,TSizedDefaultAllocator<32>_> *)(local_c8.Data + (longlong)local_c0._4_4_ * 0x10))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_c0;
  if ((int)local_c0 == local_c0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
  }
  local_c0 = CONCAT44(local_c0._4_4_,iVar5 + 1);
  pFVar7 = local_c8.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(FScriptContainerElement **)&pFVar7->field_0x0 = local_88.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_88.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_88.ArrayMax;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,(int)local_100);
  FVar2.Data = local_c8.Data;
  iVar5 = (int)local_c0;
  local_100 = CONCAT44(local_100._4_4_,(int)local_c0);
  if (((int)local_c0 == 0) && (local_100._4_4_ == 0)) {
    local_100 = local_c0 & 0xffffffff;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_c0,local_100._4_4_,&local_108,(int)local_c0,
               (int *)((longlong)&local_100 + 4));
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              (local_108.Data,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar2.Data,iVar5);
    iVar5 = (int)local_100;
  }
  LLMAlgoImpl::
  TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,_FTopologicalSortTest::RunTest_::__l2::<lambda_1>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,iVar5,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &local_108,LeafToRoot);
  if (((int)local_100 == (int)local_c0) &&
     (bVar3 = CompareItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.Data,(int)local_100),
     bVar3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"SimpleCase pre-sorted LeafToRoof remains stable sorted",
             bVar3);
  if (iStack_dc < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.Data,local_e0);
    local_e0 = 0;
    if (iStack_dc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_e8,0,&iStack_dc);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.Data,local_e0);
    local_e0 = 0;
  }
  uVar11 = (int)local_c0 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    while( true ) {
      uVar6 = 0;
      if ((int)uVar11 < (int)local_c0) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_c8.Data + lVar12);
      if (((local_e8.Data <= pTVar9) &&
          (pTVar9 < (TArray<int,TSizedDefaultAllocator<32>_> *)
                    (local_e8.Data + (longlong)iStack_dc * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (local_e0 == iStack_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_e8,&iStack_dc);
      }
      pFVar10 = local_e8.Data + (longlong)local_e0 * 0x10;
      local_e0 = local_e0 + 1;
      *(FScriptContainerElement **)&pFVar10->field_0x0 = (FScriptContainerElement *)0x0;
      iVar5 = pTVar9->ArrayNum;
      pFVar7 = (pTVar9->AllocatorInstance).Data;
      *(int *)(pFVar10 + 8) = iVar5;
      if (iVar5 == 0) {
        *(int *)(pFVar10 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar5,0,(ForAnyElementType *)pFVar10,iVar5,(int *)(pFVar10 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar10->field_0x0,pFVar7,(longlong)iVar5 << 2);
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
      if ((int)uVar11 < 0) break;
    }
  }
  LLMAlgoImpl::
  TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,_FTopologicalSortTest::RunTest_::__l2::<lambda_1>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,(int)local_100,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &local_108,RootToLeaf);
  if (((int)local_100 == local_e0) &&
     (bVar3 = CompareItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.Data,(int)local_100),
     bVar3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"SimpleCase reverse-sorted LeafToRoof sorts into reverse order",bVar3);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.Data,(int)local_c0);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_c8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.Data,local_e0);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_e8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.Data,(int)local_d0);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_48 = 1;
  uStack_44 = 2;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_78.AllocatorInstance,2,&local_78.ArrayMax);
  *(ulonglong *)local_78.AllocatorInstance.Data = CONCAT44(uStack_44,local_48);
  if (((local_f8.Data <= &local_78) &&
      (&local_78 <
       (TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  pFVar7 = local_f8.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(FScriptContainerElement **)&pFVar7->field_0x0 = local_78.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_78.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_78.ArrayMax;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 1;
  local_f0._0_4_ = iVar5 + 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
  *(undefined4 *)local_68.AllocatorInstance.Data = 2;
  if (((local_f8.Data <= &local_68) &&
      (&local_68 <
       (TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((int)local_f0 == local_f0._4_4_) {
    local_f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  pFVar7 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(FScriptContainerElement **)&pFVar7->field_0x0 = local_68.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_68.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_68.ArrayMax;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  uStack_3c = 3;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 2;
  local_f0._0_4_ = (int)local_f0 + 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_58.AllocatorInstance,2,&local_58.ArrayMax);
  *(ulonglong *)local_58.AllocatorInstance.Data = CONCAT44(uStack_3c,local_40);
  if (((local_f8.Data <= &local_58) &&
      (&local_58 <
       (TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x10))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((int)local_f0 == local_f0._4_4_) {
    local_f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  iVar5 = (int)local_f0 + 1;
  pFVar7 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(FScriptContainerElement **)&pFVar7->field_0x0 = local_58.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_58.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_58.ArrayMax;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (iVar5 == local_f0._4_4_) {
    local_f0._0_4_ = iVar5;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  local_f0 = CONCAT44(local_f0._4_4_,iVar5 + 1);
  *(undefined8 *)&local_f8.Data[(longlong)iVar5 * 0x10].field_0x0 = 0;
  *(undefined8 *)(local_f8.Data + (longlong)iVar5 * 0x10 + 8) = 0;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,(int)local_100);
  FVar2.Data = local_f8.Data;
  iVar5 = (int)local_f0;
  local_100 = CONCAT44(local_100._4_4_,(int)local_f0);
  if (((int)local_f0 == 0) && (local_100._4_4_ == 0)) {
    local_100 = local_f0 & 0xffffffff;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_f0,local_100._4_4_,&local_108,(int)local_f0,
               (int *)((longlong)&local_100 + 4));
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              (local_108.Data,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar2.Data,iVar5);
    iVar5 = (int)local_100;
  }
  LLMAlgoImpl::
  TopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>,_FTopologicalSortTest::RunTest_::__l2::<lambda_1>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,iVar5,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &local_108,LeafToRoot);
  if (((int)local_100 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  FVar2.Data = local_108.Data;
  if (((int)local_f0 < 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(FVar2.Data + 8);
  if ((iVar5 == *(int *)(local_f8.Data + 0x38)) &&
     ((iVar5 == 0 ||
      (iVar5 = memcmp(*(void **)FVar2.Data,
                      (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + 0x30))->
                      AllocatorInstance).Data,(longlong)iVar5 << 2), iVar5 == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Cycle correctly sorts target of cycle first in LeafToRoot order",bVar3);
  if (((int)local_100 < 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  FVar2.Data = local_108.Data;
  if (((int)local_f0 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(FVar2.Data + 0x38);
  if ((iVar5 == *(int *)(local_f8.Data + 8)) &&
     ((iVar5 == 0 ||
      (iVar5 = memcmp((((TArray<int,TSizedDefaultAllocator<32>_> *)(FVar2.Data + 0x30))->
                      AllocatorInstance).Data,*(void **)local_f8.Data,(longlong)iVar5 << 2),
      iVar5 == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Cycle correctly sorts referencer of cycle last in LeafToRoot order",bVar3);
  if (((int)local_100 < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  FVar2.Data = local_108.Data;
  if (((int)local_f0 < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(FVar2.Data + 0x18);
  if ((iVar5 == *(int *)(local_f8.Data + 0x18)) &&
     ((iVar5 == 0 ||
      (iVar5 = memcmp((((TArray<int,TSizedDefaultAllocator<32>_> *)(FVar2.Data + 0x10))->
                      AllocatorInstance).Data,
                      (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + 0x10))->
                      AllocatorInstance).Data,(longlong)iVar5 << 2), iVar5 == 0)))) {
LAB_14166eabd:
    bVar3 = true;
  }
  else {
    if (((int)local_100 < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FVar2.Data = local_108.Data;
    if (((int)local_f0 < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = *(int *)(FVar2.Data + 0x18);
    if ((iVar5 == *(int *)(local_f8.Data + 0x28)) &&
       ((iVar5 == 0 ||
        (iVar5 = memcmp((((TArray<int,TSizedDefaultAllocator<32>_> *)(FVar2.Data + 0x10))->
                        AllocatorInstance).Data,
                        (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + 0x20))->
                        AllocatorInstance).Data,(longlong)iVar5 << 2), iVar5 == 0))))
    goto LAB_14166eabd;
    bVar3 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Cycle correctly sorts vertex1 of cycle at an unspecified location into the middle",
             bVar3);
  if (((int)local_100 < 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  FVar2.Data = local_108.Data;
  if (((int)local_f0 < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(FVar2.Data + 0x28);
  if ((iVar5 == *(int *)(local_f8.Data + 0x18)) &&
     ((iVar5 == 0 ||
      (iVar5 = memcmp((((TArray<int,TSizedDefaultAllocator<32>_> *)(FVar2.Data + 0x20))->
                      AllocatorInstance).Data,
                      (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + 0x10))->
                      AllocatorInstance).Data,(longlong)iVar5 << 2), iVar5 == 0)))) {
LAB_14166ec3a:
    if (((int)local_100 < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FVar2.Data = local_108.Data;
    if (((int)local_100 < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = *(int *)(FVar2.Data + 0x28);
    if ((iVar5 != *(int *)(local_108.Data + 0x18)) ||
       ((iVar5 != 0 &&
        (iVar5 = memcmp((((TArray<int,TSizedDefaultAllocator<32>_> *)(FVar2.Data + 0x20))->
                        AllocatorInstance).Data,
                        (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_108.Data + 0x10))->
                        AllocatorInstance).Data,(longlong)iVar5 << 2), iVar5 != 0)))) {
      bVar3 = true;
      goto LAB_14166eced;
    }
  }
  else {
    if (((int)local_100 < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FVar2.Data = local_108.Data;
    if (((int)local_f0 < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = *(int *)(FVar2.Data + 0x28);
    if ((iVar5 == *(int *)(local_f8.Data + 0x28)) &&
       ((iVar5 == 0 ||
        (iVar5 = memcmp((((TArray<int,TSizedDefaultAllocator<32>_> *)(FVar2.Data + 0x20))->
                        AllocatorInstance).Data,
                        (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_f8.Data + 0x20))->
                        AllocatorInstance).Data,(longlong)iVar5 << 2), iVar5 == 0))))
    goto LAB_14166ec3a;
  }
  bVar3 = false;
LAB_14166eced:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Cycle correctly sorts vertex2 of cycle at an unspecified location into the middle",
             bVar3);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_f8.Data,(int)local_f0);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_f8.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  bVar3 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data,(int)local_100);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_108.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_108.Data);
  }
  return !bVar3;
}

// GetBeautifiedTestName @ 14166ed60

FString * __thiscall
FTopologicalSortTest::GetBeautifiedTestName
          (FTopologicalSortTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.LLM.TopologicalSort");
  return __return_storage_ptr__;
}

