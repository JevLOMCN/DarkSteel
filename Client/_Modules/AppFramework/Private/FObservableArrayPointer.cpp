// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 20

// FObservableArrayPointer<TSharedPtr<FTestData,1>_> @ 142f2abf0

FObservableArrayPointer<TSharedPtr<FTestData,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::
FObservableArrayPointer<TSharedPtr<FTestData,1>_>
          (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,TObservableArray<TSharedPtr<FTestData,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &___7__FObservableArrayPointer_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
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
          ::AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTestData,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *)&stack0x00000008,
                     (pmf_e192241d)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_> @ 142f2ac70

FObservableArrayPointer<TSharedPtr<ESelectionMode::Type,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::
FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>
          (void *this,TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  *(TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> **)((longlong)this + 8) = param_2;
  *(undefined ***)this =
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_W4Type_ESelectionMode___00___ItemsSource_Slate_UE__6B_
  ;
  *(STableViewBase **)((longlong)this + 0x10) = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x20) = 0;
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_ESelectionMode::Type,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>_>
                    (&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<ESelectionMode::Type,1>_> *)
                     &stack0x00000008,(pmf_9d25321d)this);
  *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FObservableArrayPointer<TSharedPtr<FTestData,1>_> @ 142f37330

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::
~FObservableArrayPointer<TSharedPtr<FTestData,1>_>
          (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)
       &___7__FObservableArrayPointer_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142f373bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_> @ 142f373d0

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::
~FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  *(undefined ***)this =
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_W4Type_ESelectionMode___00___ItemsSource_Slate_UE__6B_
  ;
  if (((*(longlong *)((longlong)this + 0x10) == 0) || (*(longlong *)((longlong)this + 0x18) == 0))
     || (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(ulong64 *)((longlong)this + 0x20) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 8) + 0x10),
               (FDelegateHandle)*(ulong64 *)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142f3745b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetItems @ 142fd35e0

TArrayView<TSharedPtr<FTestData,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::GetItems
          (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this,
          TArrayView<TSharedPtr<FTestData,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FTestData,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FTestData,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// GetItems @ 142fd3640

TArrayView<TSharedPtr<ESelectionMode::Type,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::GetItems
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

// HandleArrayChanged @ 142fdb720

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::HandleArrayChanged
          (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this,
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
        goto LAB_142fdb750;
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
LAB_142fdb750:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142fdb790

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::
HandleArrayChanged(void *this,
                  TObservableArrayChangedArgs<TSharedPtr<ESelectionMode::Type,1>_> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142fdb7c0;
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
    if (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x248))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_142fdb7c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// IsSame @ 142fe5070

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::IsSame
          (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

// IsSame @ 142fe5090

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::IsSame
          (void *this,void *param_1)

{
  return param_1 == (void *)((longlong)this + 8);
}

// FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> @ 1430543c0

FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::
FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>
          (FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFFontFamily_FTextStyles___00___ItemsSource_Slate_UE__6B_
  ;
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
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *)
                     &stack0x00000008,(pmf_1b662015)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> @ 143054440

FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
          (FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ItemsSource_Slate_UE__6B_
  ;
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
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)
                     &stack0x00000008,(pmf_b9e98c1d)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> @ 14305d610

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::
~FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>
          (FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFFontFamily_FTextStyles___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014305d69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> @ 14305d6b0

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
~FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
          (FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014305d73b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// GetItems @ 1430c9790

TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetItems
          (FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// GetItems @ 1430c97f0

TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
GetItems(FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,
        TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// HandleArrayChanged @ 1430cee70

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::
HandleArrayChanged(FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
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
        goto LAB_1430ceea0;
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
LAB_1430ceea0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 1430ceee0

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
HandleArrayChanged(FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,
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
        goto LAB_1430cef10;
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
LAB_1430cef10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 1430d5020

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::IsSame
          (FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

// IsSame @ 1430d5040

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
IsSame(FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

