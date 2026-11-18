// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// FMenuInHostWidget @ 1426a7d20

FMenuInHostWidget * __thiscall
FMenuInHostWidget::FMenuInHostWidget
          (FMenuInHostWidget *this,TSharedRef<IMenuHost,1> *param_1,TSharedRef<SWidget,1> *param_2,
          bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  atomic<int> *paVar3;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar2 = param_2->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMenuBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  *(undefined1 *)&this->_padding_ = 0;
  *(bool *)((longlong)&this->_padding_ + 1) = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7FMenuInHostWidget__6B_;
  (this->MenuHost).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->MenuHost).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMenuInHostWidget @ 1426aab30

void __thiscall FMenuInHostWidget::~FMenuInHostWidget(FMenuInHostWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMenuInHostWidget__6B_;
  pTVar3 = (this->MenuHost).WeakReferenceCount.ReferenceController;
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
  FMenuBase::~FMenuBase((FMenuBase *)this);
  return;
}

// Dismiss @ 1426b6e40

void __thiscall FMenuInHostWidget::Dismiss(FMenuInHostWidget *this)

{
  IMenuHost *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<FMenuBase,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedRef<IMenu,1> local_28;
  TSharedRef<FMenuBase,1> local_18;
  
  if ((char)this->_padding_ == '\0') {
    *(undefined1 *)&this->_padding_ = 1;
    pTVar5 = (this->MenuHost).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar5->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1426b6e81;
        }
        LOCK();
        aVar3 = pTVar5->SharedReferenceCount;
        bVar6 = aVar2 == aVar3;
        if (bVar6) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar6);
      pIVar1 = (this->MenuHost).Object;
      if (pIVar1 != (IMenuHost *)0x0) {
        (**(code **)(pIVar1->_padding_ + 8))();
      }
    }
LAB_1426b6e81:
    pTVar4 = TSharedFromThis<FMenuBase,1>::AsShared
                       ((TSharedFromThis<FMenuBase,1> *)&this->_padding_,&local_18);
    local_28.Object = (IMenu *)pTVar4->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TMulticastDelegate<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy> *)
               &this->_padding_,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// GetOwnedWindow @ 1426be910

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FMenuInHostWidget::GetOwnedWindow
          (FMenuInHostWidget *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetParentWindow @ 1426be980

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FMenuInHostWidget::GetParentWindow
          (FMenuInHostWidget *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  IMenuHost *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->MenuHost).WeakReferenceCount.ReferenceController;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1426be9b4;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pIVar1 = (this->MenuHost).Object;
    pTVar4 = pTVar5;
    if (pIVar1 != (IMenuHost *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,__return_storage_ptr__);
      goto LAB_1426be9bb;
    }
  }
LAB_1426be9b4:
  __return_storage_ptr__->Object = (SWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar4;
LAB_1426be9bb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// GetPopupMethod @ 1426bea80

EPopupMethod __thiscall FMenuInHostWidget::GetPopupMethod(FMenuInHostWidget *this)

{
  return UseCurrentWindow;
}

// UsingApplicationMenuStack @ 1426e5040

bool __thiscall FMenuInHostWidget::UsingApplicationMenuStack(FMenuInHostWidget *this)

{
  IMenuHost *pIVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->MenuHost).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1426e5070;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pIVar1 = (this->MenuHost).Object;
    if (pIVar1 != (IMenuHost *)0x0) {
      uVar3 = (**(code **)(pIVar1->_padding_ + 0x10))();
      goto LAB_1426e5073;
    }
  }
LAB_1426e5070:
  uVar3 = 1;
LAB_1426e5073:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (bool)uVar3;
}

