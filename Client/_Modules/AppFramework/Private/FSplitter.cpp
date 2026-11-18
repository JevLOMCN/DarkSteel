// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// SetOrientation @ 1430efe10

TSharedRef<FTabManager::FSplitter,1> * __thiscall
FTabManager::FSplitter::SetOrientation
          (FSplitter *this,TSharedRef<FTabManager::FSplitter,1> *__return_storage_ptr__,
          EOrientation param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar2;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  this->Orientation = param_1;
  pTVar2 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FSplitter *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SetSizeCoefficient @ 1430f0220

TSharedRef<FTabManager::FSplitter,1> * __thiscall
FTabManager::FSplitter::SetSizeCoefficient
          (FSplitter *this,TSharedRef<FTabManager::FSplitter,1> *__return_storage_ptr__,
          float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar2;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  *(float *)&this->_padding_ = param_1;
  pTVar2 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FSplitter *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

