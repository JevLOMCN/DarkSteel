// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// operator= @ 1473428b0

TWeakPtr<FQuartzTickableObjectsManager,1> * __thiscall
TWeakPtr<FQuartzTickableObjectsManager,1>::operator=
          (TWeakPtr<FQuartzTickableObjectsManager,1> *this,
          TWeakPtr<FQuartzTickableObjectsManager,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FQuartzTickableObjectsManager *)0x0;
    pTVar3 = (this->WeakReferenceCount).ReferenceController;
    (this->WeakReferenceCount).ReferenceController =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  return this;
}

// UEOpEquals<Chaos::FBaseRewindHistory> @ 1482d7c90

bool __thiscall
TWeakPtr<Chaos::FBaseRewindHistory,1>::UEOpEquals<Chaos::FBaseRewindHistory>
          (TWeakPtr<Chaos::FBaseRewindHistory,1> *this,
          TWeakPtr<Chaos::FBaseRewindHistory,1> *param_1)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1482d7cd1;
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
LAB_1482d7cd1:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1482d7cf2;
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
LAB_1482d7cf2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

// UEOpEquals<ISceneViewExtension> @ 14850b550

bool __thiscall
TWeakPtr<ISceneViewExtension,1>::UEOpEquals<ISceneViewExtension>
          (TWeakPtr<ISceneViewExtension,1> *this,TWeakPtr<ISceneViewExtension,1> *param_1)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_14850b591;
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
LAB_14850b591:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14850b5b2;
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
LAB_14850b5b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

// UEOpEquals<FSoundEffectBase> @ 148690280

bool __thiscall
TWeakPtr<FSoundEffectBase,1>::UEOpEquals<FSoundEffectBase>
          (TWeakPtr<FSoundEffectBase,1> *this,TWeakPtr<FSoundEffectBase,1> *param_1)

{
  FSoundEffectBase *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FSoundEffectBase *pFVar6;
  FSoundEffectBase *pFVar7;
  FSoundEffectBase *pFVar8;
  FSoundEffectBase *pFVar9;
  bool bVar10;
  
  pFVar1 = (FSoundEffectBase *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FSoundEffectBase *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FSoundEffectBase *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FSoundEffectBase *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1486902c1;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_1486902c1:
  pFVar1 = (FSoundEffectBase *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FSoundEffectBase *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_1486902e2;
      LOCK();
      iVar5 = (int)pFVar1->_padding_;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pFVar1->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_1486902e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

// UEOpEquals<FStreamableHandle> @ 148775a70

bool __thiscall
TWeakPtr<FStreamableHandle,1>::UEOpEquals<FStreamableHandle>
          (TWeakPtr<FStreamableHandle,1> *this,TWeakPtr<FStreamableHandle,1> *param_1)

{
  FStreamableHandle *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FStreamableHandle *pFVar6;
  FStreamableHandle *pFVar7;
  FStreamableHandle *pFVar8;
  FStreamableHandle *pFVar9;
  bool bVar10;
  
  pFVar1 = (FStreamableHandle *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FStreamableHandle *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FStreamableHandle *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FStreamableHandle *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148775ab1;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_148775ab1:
  pFVar1 = (FStreamableHandle *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FStreamableHandle *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_148775ad2;
      LOCK();
      iVar5 = (int)pFVar1->_padding_;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pFVar1->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_148775ad2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

