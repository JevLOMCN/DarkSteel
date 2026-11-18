// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// SetWindow @ 1430f02d0

TSharedRef<FTabManager::FArea,1> * __thiscall
FTabManager::FArea::SetWindow
          (FArea *this,TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__,
          TVector2<double> *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  double dVar3;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar4;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  this->WindowPlacement = Placement_Specified;
  this->bIsMaximized = param_2;
  (this->UnscaledWindowPosition).field0_0x0._s_0.X = dVar2;
  (this->UnscaledWindowPosition).field0_0x0._s_0.Y = dVar3;
  pTVar4 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FArea *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
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

