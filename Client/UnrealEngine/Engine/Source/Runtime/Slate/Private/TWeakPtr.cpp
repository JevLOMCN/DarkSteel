// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 15

// operator=<SWindow> @ 14269c840

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SWindow,1> * __thiscall
TWeakPtr<SWindow,1>::operator=<SWindow>(TWeakPtr<SWindow,1> *this,TSharedPtr<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// UEOpEquals<SWidget> @ 1426a5660

bool __thiscall
TWeakPtr<SWidget,1>::UEOpEquals<SWidget>(TWeakPtr<SWidget,1> *this,TWeakPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  bool bVar10;
  
  pSVar1 = (SWidget *)(this->WeakReferenceCount).ReferenceController;
  pSVar9 = (SWidget *)0x0;
  pSVar7 = pSVar1;
  pSVar8 = pSVar9;
  if (pSVar1 != (SWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar7 = pSVar9;
      pSVar8 = (SWidget *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1426a56a1;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar1->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pSVar7 = pSVar1;
    pSVar8 = this->Object;
  }
LAB_1426a56a1:
  pSVar1 = (SWidget *)(param_1->WeakReferenceCount).ReferenceController;
  pSVar6 = pSVar1;
  if (pSVar1 != (SWidget *)0x0) {
    iVar3 = (int)pSVar1->_padding_;
    do {
      pSVar6 = pSVar9;
      if (iVar3 == 0) goto LAB_1426a56c2;
      LOCK();
      iVar5 = (int)pSVar1->_padding_;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pSVar1->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pSVar9 = param_1->Object;
    pSVar6 = pSVar1;
  }
LAB_1426a56c2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return pSVar8 == pSVar9;
}

// UEOpEquals<TAnimatedAttributeBase> @ 1426a5700

bool __thiscall
TWeakPtr<TAnimatedAttributeBase,1>::UEOpEquals<TAnimatedAttributeBase>
          (TWeakPtr<TAnimatedAttributeBase,1> *this,TWeakPtr<TAnimatedAttributeBase,1> *param_1)

{
  TAnimatedAttributeBase *pTVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  TAnimatedAttributeBase *pTVar6;
  TAnimatedAttributeBase *pTVar7;
  TAnimatedAttributeBase *pTVar8;
  TAnimatedAttributeBase *pTVar9;
  bool bVar10;
  
  pTVar1 = (TAnimatedAttributeBase *)(this->WeakReferenceCount).ReferenceController;
  pTVar9 = (TAnimatedAttributeBase *)0x0;
  pTVar7 = pTVar1;
  pTVar8 = pTVar9;
  if (pTVar1 != (TAnimatedAttributeBase *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar1->_padding_;
    do {
      pTVar7 = pTVar9;
      pTVar8 = (TAnimatedAttributeBase *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1426a5741;
      LOCK();
      aVar4 = *(atomic<int> *)&pTVar1->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pTVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pTVar7 = pTVar1;
    pTVar8 = this->Object;
  }
LAB_1426a5741:
  pTVar1 = (TAnimatedAttributeBase *)(param_1->WeakReferenceCount).ReferenceController;
  pTVar6 = pTVar1;
  if (pTVar1 != (TAnimatedAttributeBase *)0x0) {
    iVar3 = (int)pTVar1->_padding_;
    do {
      pTVar6 = pTVar9;
      if (iVar3 == 0) goto LAB_1426a5762;
      LOCK();
      iVar5 = (int)pTVar1->_padding_;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pTVar1->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pTVar9 = param_1->Object;
    pTVar6 = pTVar1;
  }
LAB_1426a5762:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  return pTVar8 == pTVar9;
}

// operator= @ 1426ac2a0

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SWindow,1> * __thiscall
TWeakPtr<SWindow,1>::operator=(TWeakPtr<SWindow,1> *this,TWeakPtr<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SWindow *)0x0;
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

// operator=<FTabManager> @ 1426e7eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<FTabManager,1> * __thiscall
TWeakPtr<FTabManager,1>::operator=<FTabManager>
          (TWeakPtr<FTabManager,1> *this,TSharedRef<FTabManager,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// operator=<SDockTab> @ 1426e8160

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SDockTab,1> * __thiscall
TWeakPtr<SDockTab,1>::operator=<SDockTab>
          (TWeakPtr<SDockTab,1> *this,TSharedPtr<SDockTab,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// operator=<SWindow> @ 1426e81d0

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SWindow,1> * __thiscall
TWeakPtr<SWindow,1>::operator=<SWindow>(TWeakPtr<SWindow,1> *this,TSharedRef<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// UEOpEquals<FTabSpawnerEntry> @ 1426f4df0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TWeakPtr<FTabSpawnerEntry,1>::UEOpEquals<FTabSpawnerEntry>
          (TWeakPtr<FTabSpawnerEntry,1> *this,TWeakPtr<FTabSpawnerEntry,1> *param_1)

{
  FTabSpawnerEntry *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FTabSpawnerEntry *pFVar6;
  FTabSpawnerEntry *pFVar7;
  FTabSpawnerEntry *pFVar8;
  FTabSpawnerEntry *pFVar9;
  bool bVar10;
  
  pFVar1 = (FTabSpawnerEntry *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FTabSpawnerEntry *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FTabSpawnerEntry *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FTabSpawnerEntry *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1426f4e31;
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
LAB_1426f4e31:
  pFVar1 = (FTabSpawnerEntry *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FTabSpawnerEntry *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_1426f4e52;
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
LAB_1426f4e52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

// UEOpEquals<FUICommandList> @ 1426f4e90

bool __thiscall
TWeakPtr<FUICommandList,1>::UEOpEquals<FUICommandList>
          (TWeakPtr<FUICommandList,1> *this,TWeakPtr<FUICommandList,1> *param_1)

{
  FUICommandList *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FUICommandList *pFVar6;
  FUICommandList *pFVar7;
  FUICommandList *pFVar8;
  FUICommandList *pFVar9;
  bool bVar10;
  
  pFVar1 = (FUICommandList *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FUICommandList *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FUICommandList *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FUICommandList *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1426f4ed1;
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
LAB_1426f4ed1:
  pFVar1 = (FUICommandList *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FUICommandList *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_1426f4ef2;
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
LAB_1426f4ef2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

// UEOpEquals<SDockingNode> @ 1426f4f30

bool __thiscall
TWeakPtr<SDockingNode,1>::UEOpEquals<SDockingNode>
          (TWeakPtr<SDockingNode,1> *this,TWeakPtr<SDockingNode,1> *param_1)

{
  SDockingNode *pSVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  SDockingNode *pSVar6;
  SDockingNode *pSVar7;
  SDockingNode *pSVar8;
  SDockingNode *pSVar9;
  bool bVar10;
  
  pSVar1 = (SDockingNode *)(this->WeakReferenceCount).ReferenceController;
  pSVar9 = (SDockingNode *)0x0;
  pSVar7 = pSVar1;
  pSVar8 = pSVar9;
  if (pSVar1 != (SDockingNode *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar7 = pSVar9;
      pSVar8 = (SDockingNode *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1426f4f71;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar1->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pSVar7 = pSVar1;
    pSVar8 = this->Object;
  }
LAB_1426f4f71:
  pSVar1 = (SDockingNode *)(param_1->WeakReferenceCount).ReferenceController;
  pSVar6 = pSVar1;
  if (pSVar1 != (SDockingNode *)0x0) {
    iVar3 = (int)pSVar1->_padding_;
    do {
      pSVar6 = pSVar9;
      if (iVar3 == 0) goto LAB_1426f4f92;
      LOCK();
      iVar5 = (int)pSVar1->_padding_;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pSVar1->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pSVar9 = param_1->Object;
    pSVar6 = pSVar1;
  }
LAB_1426f4f92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return pSVar8 == pSVar9;
}

// operator=<SMenuAnchor> @ 142797130

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SMenuAnchor,1> * __thiscall
TWeakPtr<SMenuAnchor,1>::operator=<SMenuAnchor>
          (TWeakPtr<SMenuAnchor,1> *this,TSharedPtr<SMenuAnchor,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// operator=<FActiveTimerHandle> @ 1428a1150

TWeakPtr<FActiveTimerHandle,1> * __thiscall
TWeakPtr<FActiveTimerHandle,1>::operator=<FActiveTimerHandle>
          (TWeakPtr<FActiveTimerHandle,1> *this,TSharedRef<FActiveTimerHandle,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// operator=<IMenu> @ 1428a11c0

TWeakPtr<IMenu,1> * __thiscall
TWeakPtr<IMenu,1>::operator=<IMenu>(TWeakPtr<IMenu,1> *this,TSharedPtr<IMenu,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->WeakReferenceCount).ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakReferenceCount).ReferenceController = pTVar3;
  }
  return this;
}

// operator= @ 1428c60c0

TWeakPtr<SWidget,1> * __thiscall
TWeakPtr<SWidget,1>::operator=(TWeakPtr<SWidget,1> *this,TWeakPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  pSVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->WeakReferenceCount).ReferenceController;
  this->Object = pSVar4;
  (this->WeakReferenceCount).ReferenceController = pTVar3;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return this;
}

// TWeakPtr<SBorder,1><SBorder> @ 142a15320

TWeakPtr<SBorder,1> * __thiscall
TWeakPtr<SBorder,1>::TWeakPtr<SBorder,1><SBorder>
          (TWeakPtr<SBorder,1> *this,TSharedRef<SBorder,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

