// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// CloseSummonedMenus @ 1428dc040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuOwner::CloseSummonedMenus(SMenuOwner *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  atomic<int> aVar4;
  TSharedPtr<SMenuAnchor_const_,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SMenuAnchor *pSVar7;
  TWeakPtr<SMenuAnchor,1> *pTVar8;
  bool bVar9;
  TSharedPtr<SMenuAnchor_const_,1> local_28;
  undefined8 local_18 [2];
  
  pTVar5 = GetOpenMenu(this,&local_28);
  pSVar7 = pTVar5->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pSVar7 == (SMenuAnchor *)0x0) {
    return;
  }
  pTVar8 = &this->SummonedMenuAnchor;
  pSVar7 = (SMenuAnchor *)0x0;
  pTVar6 = (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1428dc0a4;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pSVar7 = pTVar8->Object;
    if (pSVar7 != (SMenuAnchor *)0x0) goto LAB_1428dc0ca;
  }
LAB_1428dc0a4:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar9) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1428dc0ca:
  (**(code **)(pSVar7->_padding_ + 0x250))(pSVar7,0,1,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pTVar8 != (TWeakPtr<SMenuAnchor,1> *)local_18) {
    pTVar6 = (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController;
    pTVar8->Object = (SMenuAnchor *)0x0;
    (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  return;
}

// Construct @ 1428fdfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuOwner::Construct(SMenuOwner *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// GetOpenMenu @ 142946320

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SMenuAnchor_const_,1> * __thiscall
SMenuOwner::GetOpenMenu(SMenuOwner *this,TSharedPtr<SMenuAnchor_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  atomic<int> aVar5;
  int iVar6;
  TSharedPtr<SMenuAnchor_const_,1> *pTVar7;
  SMenuAnchor *pSVar8;
  SMenuAnchor *pSVar9;
  SMenuAnchor *pSVar10;
  SMenuAnchor *pSVar11;
  bool bVar12;
  uint uStackX_c;
  
  pSVar11 = (SMenuAnchor *)0x0;
  if ((((this->SummonedMenuAnchor).Object == (SMenuAnchor *)0x0) ||
      (pTVar1 = (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pSVar8 = (SMenuAnchor *)((ulonglong)uStackX_c << 0x20);
    pSVar9 = pSVar11;
  }
  else {
    pSVar8 = (SMenuAnchor *)(this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController;
    pSVar9 = pSVar11;
    pSVar10 = pSVar8;
    if (pSVar8 == (SMenuAnchor *)0x0) {
LAB_142946397:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar8 = pSVar10;
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<SMenuAnchor_const_,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pSVar8->_padding_;
      do {
        pSVar9 = (SMenuAnchor *)0x0;
        pSVar10 = pSVar11;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142946397;
        LOCK();
        aVar5 = *(atomic<int> *)&pSVar8->_padding_;
        bVar12 = aVar3 == aVar5;
        if (bVar12) {
          *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar12);
      pSVar9 = (this->SummonedMenuAnchor).Object;
      pSVar10 = pSVar8;
      if (pSVar9 == (SMenuAnchor *)0x0) goto LAB_142946397;
    }
    if ((((char)(pSVar9->MethodInUse)._padding_ != '\0') &&
        ((pSVar9->PopupMenuPtr).Object != (IMenu *)0x0)) &&
       ((pTVar1 = (pSVar9->PopupMenuPtr).WeakReferenceCount.ReferenceController,
        pTVar1 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar1->SharedReferenceCount)))) {
      bVar12 = true;
      pSVar9 = (SMenuAnchor *)&DAT_00000001;
      goto LAB_142946409;
    }
    pSVar9 = (SMenuAnchor *)&DAT_00000001;
  }
  bVar12 = false;
LAB_142946409:
  if (pSVar9 != (SMenuAnchor *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar8);
  }
  if (bVar12) {
    pSVar8 = (SMenuAnchor *)(this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController;
    if (pSVar8 == (SMenuAnchor *)0x0) {
      __return_storage_ptr__->Object = (SMenuAnchor *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      iVar4 = (int)pSVar8->_padding_;
      do {
        if (iVar4 == 0) {
          __return_storage_ptr__->Object = (SMenuAnchor *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          pSVar8 = pSVar11;
          goto LAB_142946489;
        }
        LOCK();
        iVar6 = (int)pSVar8->_padding_;
        bVar12 = iVar4 == iVar6;
        if (bVar12) {
          *(int *)&pSVar8->_padding_ = iVar4 + 1;
          iVar6 = iVar4;
        }
        UNLOCK();
        iVar4 = iVar6;
      } while (!bVar12);
      __return_storage_ptr__->Object = (this->SummonedMenuAnchor).Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)pSVar8;
      LOCK();
      *(int *)&pSVar8->_padding_ = (int)pSVar8->_padding_ + 1;
      UNLOCK();
    }
  }
  else {
    __return_storage_ptr__->Object = (SMenuAnchor *)0x0;
    pSVar8 = (SMenuAnchor *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
LAB_142946489:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return __return_storage_ptr__;
}

// SetSummonedMenu @ 14299abf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuOwner::SetSummonedMenu(SMenuOwner *this,TSharedRef<SMenuAnchor,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->SummonedMenuAnchor).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController;
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
    (this->SummonedMenuAnchor).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

