// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Media
// Functions: 2

// UEOpEquals<IMediaClockSink> @ 146bede80

bool __thiscall
TWeakPtr<IMediaClockSink,1>::UEOpEquals<IMediaClockSink>
          (TWeakPtr<IMediaClockSink,1> *this,TWeakPtr<IMediaClockSink,1> *param_1)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bedec1;
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
LAB_146bedec1:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bedee2;
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
LAB_146bedee2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

// UEOpEquals<IMediaTickable> @ 146bedf20

bool __thiscall
TWeakPtr<IMediaTickable,1>::UEOpEquals<IMediaTickable>
          (TWeakPtr<IMediaTickable,1> *this,TWeakPtr<IMediaTickable,1> *param_1)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bedf61;
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
LAB_146bedf61:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bedf82;
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
LAB_146bedf82:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

