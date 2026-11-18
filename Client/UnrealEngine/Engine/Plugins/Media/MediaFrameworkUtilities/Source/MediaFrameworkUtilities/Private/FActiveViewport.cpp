// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 1

// GetSceneViewport @ 14d7db0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<FSceneViewport,1> * __thiscall
MediaProfilePlaybackManager::FActiveViewport::GetSceneViewport
          (FActiveViewport *this,TSharedPtr<FSceneViewport,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSceneViewport *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->Viewport).WeakReferenceCount.ReferenceController;
  pFVar3 = (FSceneViewport *)0x0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d7db0f2;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    pFVar3 = (this->Viewport).Object;
  }
  if (pFVar3 != (FSceneViewport *)0x0) {
    __return_storage_ptr__->Object = pFVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
LAB_14d7db0f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  __return_storage_ptr__->Object = (FSceneViewport *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

