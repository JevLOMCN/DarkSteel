// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FMenuInWindow @ 1426a7e70

/* WARNING: Enum "Type": Some values do not have unique names */

FMenuInWindow * __thiscall
FMenuInWindow::FMenuInWindow
          (FMenuInWindow *this,TSharedRef<SWindow,1> *param_1,TSharedRef<SWidget,1> *param_2,
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
  this->_padding_ = (longlong)&___7FMenuInWindow__6B_;
  (this->Window).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Window).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMenuInWindow @ 1426aaba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuInWindow::~FMenuInWindow(FMenuInWindow *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FMenuInWindow__6B_;
  pTVar3 = (this->Window).WeakReferenceCount.ReferenceController;
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

// Dismiss @ 1426b6f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMenuInWindow::Dismiss(FMenuInWindow *this)

{
  SWindow *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TSharedRef<FMenuBase,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<IMenu,1> local_28;
  TSharedRef<FMenuBase,1> local_18;
  
  if ((char)this->_padding_ == '\0') {
    *(undefined1 *)&this->_padding_ = 1;
    pTVar3 = TSharedFromThis<FMenuBase,1>::AsShared
                       ((TSharedFromThis<FMenuBase,1> *)&this->_padding_,&local_18);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    local_28.Object = (IMenu *)pTVar3->Object;
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
    pTVar4 = (this->Window).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar4->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1426b6fd0;
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
      this_00 = (this->Window).Object;
      if (this_00 != (SWindow *)0x0) {
        SWindow::RequestDestroyWindow(this_00);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        return;
      }
    }
LAB_1426b6fd0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// GetOwnedWindow @ 1426be950

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FMenuInWindow::GetOwnedWindow(FMenuInWindow *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x10))();
  return __return_storage_ptr__;
}

// GetParentWindow @ 1426bea30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FMenuInWindow::GetParentWindow(FMenuInWindow *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SWindow *)0x0;
  pTVar1 = (this->Window).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->Window).Object;
  }
  return __return_storage_ptr__;
}

// GetPopupMethod @ 1426beaa0

/* WARNING: Enum "Type": Some values do not have unique names */

EPopupMethod __thiscall FMenuInWindow::GetPopupMethod(FMenuInWindow *this)

{
  return CreateNewWindow;
}

