// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// UEOpEquals<FMediaTextureTrackerObject> @ 146c1ba40

bool __thiscall
TWeakPtr<FMediaTextureTrackerObject,1>::UEOpEquals<FMediaTextureTrackerObject>
          (TWeakPtr<FMediaTextureTrackerObject,1> *this,
          TWeakPtr<FMediaTextureTrackerObject,1> *param_1)

{
  FMediaTextureTrackerObject *pFVar1;
  atomic<int> aVar2;
  float fVar3;
  atomic<int> aVar4;
  float fVar5;
  FMediaTextureTrackerObject *pFVar6;
  FMediaTextureTrackerObject *pFVar7;
  FMediaTextureTrackerObject *pFVar8;
  FMediaTextureTrackerObject *pFVar9;
  bool bVar10;
  
  pFVar1 = (FMediaTextureTrackerObject *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FMediaTextureTrackerObject *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FMediaTextureTrackerObject *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->MipMapLODBias;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FMediaTextureTrackerObject *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146c1ba81;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->MipMapLODBias;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->MipMapLODBias = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_146c1ba81:
  pFVar1 = (FMediaTextureTrackerObject *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMediaTextureTrackerObject *)0x0) {
    fVar3 = pFVar1->MipMapLODBias;
    do {
      pFVar6 = pFVar9;
      if (fVar3 == 0.0) goto LAB_146c1baa2;
      LOCK();
      fVar5 = pFVar1->MipMapLODBias;
      bVar10 = fVar3 == fVar5;
      if (bVar10) {
        pFVar1->MipMapLODBias = (float)((int)fVar3 + 1);
        fVar5 = fVar3;
      }
      UNLOCK();
      fVar3 = fVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_146c1baa2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

