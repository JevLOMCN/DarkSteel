// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 1

// AsWeak @ 14de24bb0

TWeakPtr<FDLSSTemporalUpscalerModularFeature,1> * __thiscall
TSharedFromThis<FDLSSTemporalUpscalerModularFeature,1>::AsWeak
          (TSharedFromThis<FDLSSTemporalUpscalerModularFeature,1> *this,
          TWeakPtr<FDLSSTemporalUpscalerModularFeature,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FDLSSTemporalUpscalerModularFeature *pFVar5;
  TWeakPtr<FDLSSTemporalUpscalerModularFeature,1> *pTVar6;
  FDLSSTemporalUpscalerModularFeature *pFVar7;
  bool bVar8;
  
  __return_storage_ptr__->Object = (this->WeakThis).Object;
  pTVar1 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (__return_storage_ptr__->WeakReferenceCount).ReferenceController;
  pFVar7 = (FDLSSTemporalUpscalerModularFeature *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14de24c27;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pFVar7 = __return_storage_ptr__->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar5 = (FDLSSTemporalUpscalerModularFeature *)&pFVar7->_padding_;
  if (pFVar7 == (FDLSSTemporalUpscalerModularFeature *)0x0) {
    pFVar5 = (FDLSSTemporalUpscalerModularFeature *)0x0;
  }
  if (pFVar5 != (FDLSSTemporalUpscalerModularFeature *)this) {
LAB_14de24c27:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TWeakPtr<FDLSSTemporalUpscalerModularFeature,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

