// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// UEOpEquals<UE::MovieScene::IPreAnimatedCaptureSource> @ 14617d8c0

bool __thiscall
TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>::
UEOpEquals<UE::MovieScene::IPreAnimatedCaptureSource>
          (TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *this,
          TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->WeakReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  pTVar6 = pTVar7;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14617d901;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = pTVar1;
    pTVar6 = (TReferenceControllerBase<1> *)this->Object;
  }
LAB_14617d901:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14617d922;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)param_1->Object;
    pTVar4 = pTVar1;
  }
LAB_14617d922:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

// UEOpEquals<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_> @ 1461fc000

bool __thiscall
TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_,1>::
UEOpEquals<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_>
          (TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_,1> *this,
          TWeakPtr<UE::MovieScene::IDeferredSignedObjectFlushSignal_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->WeakReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  pTVar6 = pTVar7;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1461fc041;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = pTVar1;
    pTVar6 = (TReferenceControllerBase<1> *)this->Object;
  }
LAB_1461fc041:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1461fc062;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)param_1->Object;
    pTVar4 = pTVar1;
  }
LAB_1461fc062:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

