// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// FNode @ 1471db740

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FNode * __thiscall FMassProcessorDependencySolver::FNode::FNode(FNode *this,FNode *param_1)

{
  UMassProcessor *pUVar1;
  
  this->Name = param_1->Name;
  pUVar1 = param_1->Processor;
  (this->OriginalDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Processor = pUVar1;
  (this->OriginalDependencies).AllocatorInstance.Data =
       (param_1->OriginalDependencies).AllocatorInstance.Data;
  (param_1->OriginalDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDependencies).ArrayNum = (param_1->OriginalDependencies).ArrayNum;
  (this->OriginalDependencies).ArrayMax = (param_1->OriginalDependencies).ArrayMax;
  (param_1->OriginalDependencies).ArrayNum = 0;
  (param_1->OriginalDependencies).ArrayMax = 0;
  (this->TransientDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientDependencies).AllocatorInstance.Data =
       (param_1->TransientDependencies).AllocatorInstance.Data;
  (param_1->TransientDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientDependencies).ArrayNum = (param_1->TransientDependencies).ArrayNum;
  (this->TransientDependencies).ArrayMax = (param_1->TransientDependencies).ArrayMax;
  (param_1->TransientDependencies).ArrayNum = 0;
  (param_1->TransientDependencies).ArrayMax = 0;
  (this->ExecuteBefore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteBefore).AllocatorInstance.Data = (param_1->ExecuteBefore).AllocatorInstance.Data;
  (param_1->ExecuteBefore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteBefore).ArrayNum = (param_1->ExecuteBefore).ArrayNum;
  (this->ExecuteBefore).ArrayMax = (param_1->ExecuteBefore).ArrayMax;
  (param_1->ExecuteBefore).ArrayNum = 0;
  (param_1->ExecuteBefore).ArrayMax = 0;
  (this->ExecuteAfter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteAfter).AllocatorInstance.Data = (param_1->ExecuteAfter).AllocatorInstance.Data;
  (param_1->ExecuteAfter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteAfter).ArrayNum = (param_1->ExecuteAfter).ArrayNum;
  (this->ExecuteAfter).ArrayMax = (param_1->ExecuteAfter).ArrayMax;
  (param_1->ExecuteAfter).ArrayNum = 0;
  (param_1->ExecuteAfter).ArrayMax = 0;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->Requirements,(FBitSetContainer *)&param_1->Requirements);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).Fragments.Write,
             (FBitSetContainer *)&(param_1->Requirements).Fragments.Write);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).ChunkFragments,
             (FBitSetContainer *)&(param_1->Requirements).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).ChunkFragments.Write,
             (FBitSetContainer *)&(param_1->Requirements).ChunkFragments.Write);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).SharedFragments,
             (FBitSetContainer *)&(param_1->Requirements).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).SharedFragments.Write,
             (FBitSetContainer *)&(param_1->Requirements).SharedFragments.Write);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).ConstSharedFragments,
             (FBitSetContainer *)&(param_1->Requirements).ConstSharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).RequiredSubsystems,
             (FBitSetContainer *)&(param_1->Requirements).RequiredSubsystems);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).RequiredSubsystems.Write,
             (FBitSetContainer *)&(param_1->Requirements).RequiredSubsystems.Write);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).RequiredAllTags,
             (FBitSetContainer *)&(param_1->Requirements).RequiredAllTags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).RequiredAnyTags,
             (FBitSetContainer *)&(param_1->Requirements).RequiredAnyTags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&(this->Requirements).RequiredNoneTags,
             (FBitSetContainer *)&(param_1->Requirements).RequiredNoneTags);
  (this->Requirements).ResourcesUsedCount = (param_1->Requirements).ResourcesUsedCount;
  this->NodeIndex = param_1->NodeIndex;
  this->TotalWaitingNodes = param_1->TotalWaitingNodes;
  this->MaxExecutionPriority = param_1->MaxExecutionPriority;
  this->SequencePositionIndex = param_1->SequencePositionIndex;
  (this->SubNodeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubNodeIndices).AllocatorInstance.Data = (param_1->SubNodeIndices).AllocatorInstance.Data;
  (param_1->SubNodeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubNodeIndices).ArrayNum = (param_1->SubNodeIndices).ArrayNum;
  (this->SubNodeIndices).ArrayMax = (param_1->SubNodeIndices).ArrayMax;
  (param_1->SubNodeIndices).ArrayNum = 0;
  (param_1->SubNodeIndices).ArrayMax = 0;
  (this->ValidArchetypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidArchetypes).AllocatorInstance.Data = (param_1->ValidArchetypes).AllocatorInstance.Data
  ;
  (param_1->ValidArchetypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidArchetypes).ArrayNum = (param_1->ValidArchetypes).ArrayNum;
  (this->ValidArchetypes).ArrayMax = (param_1->ValidArchetypes).ArrayMax;
  (param_1->ValidArchetypes).ArrayNum = 0;
  (param_1->ValidArchetypes).ArrayMax = 0;
  return this;
}

// IncreaseWaitingNodesCount @ 14722b210

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassProcessorDependencySolver::FNode::IncreaseWaitingNodesCount
          (FNode *this,TArrayView<FMassProcessorDependencySolver::FNode,int> *param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_48 [4];
  uint local_44;
  FScriptContainerElement *local_40;
  TArrayView<FMassProcessorDependencySolver::FNode,int> local_38;
  
  if (param_2 < 0) {
    piVar1 = &this->NodeIndex;
    pFVar10 = (param_3->AllocatorInstance).Data;
    if (((pFVar10 <= piVar1) && (piVar1 < pFVar10 + (longlong)param_3->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar7 = param_3->ArrayNum;
    if (iVar7 == param_3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar7 + 1;
    *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
    return false;
  }
  this->TotalWaitingNodes = this->TotalWaitingNodes + 1;
  pFVar10 = (this->OriginalDependencies).AllocatorInstance.Data;
  local_44 = (this->OriginalDependencies).ArrayNum;
  uVar9 = (ulonglong)(int)local_44;
  local_40 = pFVar10 + uVar9 * 4;
  while( true ) {
    pFVar4 = local_40;
    if ((this->OriginalDependencies).ArrayNum != (int)uVar9) {
      local_48[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_48);
    }
    if (pFVar10 == pFVar4) {
      return true;
    }
    uVar2 = *(uint *)pFVar10;
    uVar8 = 0;
    if ((int)uVar2 < param_1->ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    if ((param_1->DataPtr + (int)uVar2 == this) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&InAllNodes[DependencyIndex] != this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                           ,0x170,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar8 = 0;
    if ((int)uVar2 < param_1->ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_38.DataPtr = param_1->DataPtr;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar5 = IncreaseWaitingNodesCount(param_1->DataPtr + (int)uVar2,&local_38,param_2 + -1,param_3);
    if (!bVar5) {
      pFVar10 = (param_3->AllocatorInstance).Data;
      piVar1 = &this->NodeIndex;
      if (((pFVar10 <= piVar1) && (piVar1 < pFVar10 + (longlong)param_3->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar7 + 1;
      *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
      return false;
    }
    uVar9 = (ulonglong)local_44;
    pFVar10 = pFVar10 + 4;
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return (bool)uVar6;
}

// IncreaseWaitingNodesCountAndPriority @ 14722b4e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassProcessorDependencySolver::FNode::IncreaseWaitingNodesCountAndPriority
          (FNode *this,TArrayView<FMassProcessorDependencySolver::FNode,int> *param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_48 [4];
  uint local_44;
  FScriptContainerElement *local_40;
  TArrayView<FMassProcessorDependencySolver::FNode,int> local_38;
  
  if (param_2 < 0) {
    piVar1 = &this->NodeIndex;
    pFVar10 = (param_3->AllocatorInstance).Data;
    if (((pFVar10 <= piVar1) && (piVar1 < pFVar10 + (longlong)param_3->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar7 = param_3->ArrayNum;
    if (iVar7 == param_3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar7 + 1;
    *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
    return false;
  }
  this->TotalWaitingNodes = this->TotalWaitingNodes + 1;
  iVar7 = this->MaxExecutionPriority;
  if (this->MaxExecutionPriority < param_4 + 1) {
    iVar7 = param_4 + 1;
  }
  this->MaxExecutionPriority = iVar7;
  local_44 = (this->OriginalDependencies).ArrayNum;
  uVar9 = (ulonglong)(int)local_44;
  pFVar10 = (this->OriginalDependencies).AllocatorInstance.Data;
  local_40 = pFVar10 + uVar9 * 4;
  while( true ) {
    pFVar4 = local_40;
    if ((this->OriginalDependencies).ArrayNum != (int)uVar9) {
      local_48[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_48);
    }
    if (pFVar10 == pFVar4) {
      return true;
    }
    uVar2 = *(uint *)pFVar10;
    uVar8 = 0;
    if ((int)uVar2 < param_1->ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((param_1->DataPtr + (int)uVar2 == this) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&InAllNodes[DependencyIndex] != this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessorDependencySolver.cpp"
                           ,0x18a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar8 = 0;
    if ((int)uVar2 < param_1->ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    local_38.DataPtr = param_1->DataPtr;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar5 = IncreaseWaitingNodesCountAndPriority
                      (param_1->DataPtr + (int)uVar2,&local_38,param_2 + -1,param_3,
                       this->MaxExecutionPriority);
    if (!bVar5) {
      pFVar10 = (param_3->AllocatorInstance).Data;
      piVar1 = &this->NodeIndex;
      if (((pFVar10 <= piVar1) && (piVar1 < pFVar10 + (longlong)param_3->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar7 + 1;
      *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
      return false;
    }
    uVar9 = (ulonglong)local_44;
    pFVar10 = pFVar10 + 4;
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return (bool)uVar6;
}

