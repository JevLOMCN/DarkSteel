// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetMatchingAllocations @ 1460cdc20

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<UE::MovieScene::FEntityAllocation_*_const,int> * __thiscall
UE::MovieScene::FCachedEntityFilterResult_Allocations::GetMatchingAllocations
          (FCachedEntityFilterResult_Allocations *this,
          TArrayView<UE::MovieScene::FEntityAllocation_*_const,int> *__return_storage_ptr__,
          FEntityManager *param_1)

{
  int *piVar1;
  TArray<UE::MovieScene::FEntityAllocation_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FEntityManager *this_00;
  bool bVar7;
  int iVar8;
  int iVar9;
  TArrayView<UE::MovieScene::FEntityAllocation_*_const,int> *pTVar10;
  FEntityAllocation *local_58;
  FEntityAllocationIteratorProxy local_50;
  FEntityAllocationProxy local_40;
  FEntityAllocationIterator local_30;
  
  uVar4 = (this->Cache).LastSystemVersion;
  if ((uVar4 == 0) || (uVar4 < param_1->StructureMutationSystemSerialNumber)) {
    pTVar2 = &this->MatchedEntityAllocations;
    (this->Cache).LastSystemVersion = param_1->SystemSerialNumber;
    piVar1 = &(this->MatchedEntityAllocations).ArrayMax;
    (this->MatchedEntityAllocations).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    FEntityManager::Iterate(param_1,&local_50,&this->Filter);
    this_00 = local_50.Manager;
    local_30.Filter = local_50.Filter;
    local_30.Manager = local_50.Manager;
    FEntityManager::EnterIteration(local_50.Manager);
    iVar8 = FEntityAllocationIterator::FindMatchingAllocationStartingAt(&local_30,0);
    iVar3 = *(int *)&((local_50.Manager)->EntityAllocationMasks).field_0x8;
    while (local_30.AllocationIndex = iVar8, iVar8 != iVar3) {
      local_40.Manager = this_00;
      local_40.AllocationIndex = iVar8;
      local_58 = FEntityAllocationProxy::GetAllocation(&local_40);
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArrayView<UE::MovieScene::FEntityAllocation_*_const,int> *)(*pcVar6)();
        return pTVar10;
      }
      iVar9 = (this->MatchedEntityAllocations).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->MatchedEntityAllocations).ArrayNum = iVar9 + 1;
      *(FEntityAllocation **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58;
      iVar8 = FEntityAllocationIterator::FindMatchingAllocationStartingAt(&local_30,iVar8 + 1);
      local_50.Filter = local_30.Filter;
    }
    if (local_50.Filter != (FEntityComponentFilter *)0x0) {
      FEntityManager::ExitIteration(this_00);
    }
  }
  iVar3 = (this->MatchedEntityAllocations).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FEntityAllocation **)(this->MatchedEntityAllocations).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArrayView<UE::MovieScene::FEntityAllocation_*_const,int> *)(*pcVar6)();
    return pTVar10;
  }
  __return_storage_ptr__->ArrayNum = iVar3;
  return __return_storage_ptr__;
}

// Invalidate @ 1460d7530

void __thiscall
UE::MovieScene::FCachedEntityFilterResult_Allocations::Invalidate
          (FCachedEntityFilterResult_Allocations *this)

{
  int *piVar1;
  
  (this->Cache).LastSystemVersion = 0;
  piVar1 = &(this->MatchedEntityAllocations).ArrayMax;
  (this->MatchedEntityAllocations).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MatchedEntityAllocations).AllocatorInstance,0,piVar1);
  }
  return;
}

