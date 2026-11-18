// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 5

// FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> @ 148d54340

FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::
FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>
          (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFVisualizerEvent___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)&stack0x00000008,
                     (pmf_aa68a70f)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> @ 148d57140

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::
~FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>
          (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFVisualizerEvent___00___ItemsSource_Slate_UE__6B_
  ;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
            *)&((this->ItemsSource).Object)->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  return;
}

// GetItems @ 148d7b670

TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::GetItems
          (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this,
          TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FVisualizerEvent,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HandleArrayChanged @ 148d7d970

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::HandleArrayChanged
          (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this,
          TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_> *param_1)

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
        goto LAB_148d7d9a0;
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
LAB_148d7d9a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 148d800a0

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::IsSame
          (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

