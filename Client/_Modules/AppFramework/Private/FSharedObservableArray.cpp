// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 20

// FSharedObservableArray<TSharedPtr<FTestData,1>_> @ 142f2ad70

FSharedObservableArray<TSharedPtr<FTestData,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::
FSharedObservableArray<TSharedPtr<FTestData,1>_>
          (FSharedObservableArray<TSharedPtr<FTestData,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &___7__FSharedObservableArray_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
  (this->ItemsSource).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ItemsSource).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ListViewOwner).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ListViewOwner).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ArrayChangedHandle).ID = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<FTestData,1>_> *)&stack0x00000008,
                     (pmf_b64993d7)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_> @ 142f2ae20

FSharedObservableArray<TSharedPtr<ESelectionMode::Type,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>::
FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>
          (void *this,TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<ESelectionMode::Type,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  *(undefined ***)this =
       &
       ___7__FSharedObservableArray_V__TSharedPtr_W4Type_ESelectionMode___00___ItemsSource_Slate_UE__6B_
  ;
  *(TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> **)((longlong)this + 8) = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x10) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(STableViewBase **)((longlong)this + 0x18) = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x28) = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_ESelectionMode::Type,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>_>
                    (&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *)&stack0x00000008
                     ,(pmf_afb89157)this);
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSharedObservableArray<TSharedPtr<FTestData,1>_> @ 142f37470

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::
~FSharedObservableArray<TSharedPtr<FTestData,1>_>
          (FSharedObservableArray<TSharedPtr<FTestData,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &___7__FSharedObservableArray_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  return;
}

// ~FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_> @ 142f374d0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>::
~FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__FSharedObservableArray_V__TSharedPtr_W4Type_ESelectionMode___00___ItemsSource_Slate_UE__6B_
  ;
  if (*(ulong64 *)((longlong)this + 0x28) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 8) + 0x10),
               (FDelegateHandle)*(ulong64 *)((longlong)this + 0x28));
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// GetItems @ 142fd36a0

TArrayView<TSharedPtr<FTestData,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::GetItems
          (FSharedObservableArray<TSharedPtr<FTestData,1>_> *this,
          TArrayView<TSharedPtr<FTestData,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FTestData,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FTestData,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FTestData,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<FTestData,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 142fd3700

TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>::GetItems
          (void *this,
          TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> *pTVar5;
  
  puVar2 = *(undefined8 **)((longlong)this + 8);
  __return_storage_ptr__->DataPtr = (TSharedPtr<ESelectionMode::Type,1> *)*puVar2;
  iVar1 = *(int *)(puVar2 + 1);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HandleArrayChanged @ 142fdb800

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::HandleArrayChanged
          (FSharedObservableArray<TSharedPtr<FTestData,1>_> *this,
          TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_> *param_1)

{
  STableViewBase *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142fdb830;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->ListViewOwner).Object;
    if (pSVar1 != (STableViewBase *)0x0) {
      (**(code **)(*(longlong *)pSVar1 + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142fdb830:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142fdb870

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>::
HandleArrayChanged(void *this,
                  TObservableArrayChangedArgs<TSharedPtr<ESelectionMode::Type,1>_> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142fdb8a0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(longlong **)((longlong)this + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_142fdb8a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// IsSame @ 142fe50b0

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::IsSame
          (FSharedObservableArray<TSharedPtr<FTestData,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 142fe50c0

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>::IsSame
          (void *this,void *param_1)

{
  return param_1 == *(void **)((longlong)this + 8);
}

// FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> @ 1430544c0

FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>::
FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>
          (FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFFontFamily_FTextStyles___00___ItemsSource_Slate_UE__6B_
  ;
  (this->ItemsSource).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ItemsSource).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ListViewOwner).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ListViewOwner).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ArrayChangedHandle).ID = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)
                     &stack0x00000008,(pmf_029fffc7)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> @ 143054570

FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
          (FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ItemsSource_Slate_UE__6B_
  ;
  (this->ItemsSource).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ItemsSource).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ListViewOwner).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ListViewOwner).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ArrayChangedHandle).ID = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)
                     &stack0x00000008,(pmf_374e8157)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> @ 14305d750

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>::
~FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>
          (FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFFontFamily_FTextStyles___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  return;
}

// ~FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> @ 14305d7b0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
~FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
          (FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  return;
}

// GetItems @ 1430c9850

TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetItems
          (FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FTextStyles::FFontFamily,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 1430c98b0

TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
GetItems(FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,
        TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HandleArrayChanged @ 1430cef50

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>::
HandleArrayChanged(FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
                  TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_> *param_1)

{
  STableViewBase *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1430cef80;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->ListViewOwner).Object;
    if (pSVar1 != (STableViewBase *)0x0) {
      (**(code **)(*(longlong *)pSVar1 + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1430cef80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 1430cefc0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
HandleArrayChanged(FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,
                  TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *param_1
                  )

{
  STableViewBase *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1430ceff0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->ListViewOwner).Object;
    if (pSVar1 != (STableViewBase *)0x0) {
      (**(code **)(*(longlong *)pSVar1 + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1430ceff0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 1430d5060

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>::IsSame
          (FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 1430d5070

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::IsSame
          (FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

