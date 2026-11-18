// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// Split @ 142f0ca00

TSharedRef<FTabManager::FSplitter,1> * __thiscall
FTabManager::FSplitter::Split
          (FSplitter *this,TSharedRef<FTabManager::FSplitter,1> *__return_storage_ptr__,
          TSharedRef<FTabManager::FLayoutNode,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTabManager::FSplitter,1> *pTVar6;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  pTVar7 = (TSharedRef<FTabManager::FLayoutNode,1> *)(this->ChildNodes).AllocatorInstance.Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ChildNodes).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTabManager::FSplitter,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->ChildNodes).ArrayNum;
  piVar1 = &(this->ChildNodes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ChildNodes).AllocatorInstance,piVar1);
  }
  (this->ChildNodes).ArrayNum = iVar5 + 1;
  pFVar8 = (this->ChildNodes).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FLayoutNode **)pFVar8 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FSplitter *)pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

