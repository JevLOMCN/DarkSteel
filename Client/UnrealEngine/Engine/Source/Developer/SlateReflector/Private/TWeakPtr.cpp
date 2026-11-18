// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 3

// operator=<SNotificationItem> @ 142de2ba0

TWeakPtr<SNotificationItem,1> * __thiscall
TWeakPtr<SNotificationItem,1>::operator=<SNotificationItem>
          (TWeakPtr<SNotificationItem,1> *this,TSharedPtr<SNotificationItem,1> *param_1)

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

// UEOpEquals<SWindow> @ 142dfd850

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TWeakPtr<SWindow,1>::UEOpEquals<SWindow>(TWeakPtr<SWindow,1> *this,TWeakPtr<SWindow,1> *param_1)

{
  SWindow *pSVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  SWindow *pSVar6;
  SWindow *pSVar7;
  SWindow *pSVar8;
  SWindow *pSVar9;
  bool bVar10;
  
  pSVar1 = (SWindow *)(this->WeakReferenceCount).ReferenceController;
  pSVar9 = (SWindow *)0x0;
  pSVar7 = pSVar1;
  pSVar8 = pSVar9;
  if (pSVar1 != (SWindow *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar7 = pSVar9;
      pSVar8 = (SWindow *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142dfd891;
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
LAB_142dfd891:
  pSVar1 = (SWindow *)(param_1->WeakReferenceCount).ReferenceController;
  pSVar6 = pSVar1;
  if (pSVar1 != (SWindow *)0x0) {
    iVar3 = (int)pSVar1->_padding_;
    do {
      pSVar6 = pSVar9;
      if (iVar3 == 0) goto LAB_142dfd8b2;
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
LAB_142dfd8b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return pSVar8 == pSVar9;
}

// operator= @ 142e180e0

TWeakPtr<SNotificationItem,1> * __thiscall
TWeakPtr<SNotificationItem,1>::operator=
          (TWeakPtr<SNotificationItem,1> *this,TWeakPtr<SNotificationItem,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SNotificationItem *)0x0;
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

