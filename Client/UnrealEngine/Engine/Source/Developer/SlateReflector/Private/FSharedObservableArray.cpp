// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 30

// FSharedObservableArray<TSharedPtr<int,1>_> @ 142dfe040

FSharedObservableArray<TSharedPtr<int,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::
FSharedObservableArray<TSharedPtr<int,1>_>
          (FSharedObservableArray<TSharedPtr<int,1>_> *this,TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)&___7__FSharedObservableArray_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<int,1>_> *)&stack0x00000008,
                     (pmf_4ab16ad7)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> @ 142dfe0f0

FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
          (FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)
                     &stack0x00000008,(pmf_4c9657d7)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> @ 142dfe1a0

FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
          (FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
                      *)&stack0x00000008,(pmf_05384f83)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> @ 142dfe250

FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>
          (FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)
                     &stack0x00000008,(pmf_4d99cd9b)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> @ 142dfe300

FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *
__thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
          (FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                      *)&stack0x00000008,(pmf_02d1afcb)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> @ 142dfe3b0

FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>::
FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>
          (FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->Object->ArrayChangedDelegate,
                     (FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *)
                     &stack0x00000008,(pmf_76dc9547)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSharedObservableArray<TSharedPtr<int,1>_> @ 142e0d150

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::
~FSharedObservableArray<TSharedPtr<int,1>_>(FSharedObservableArray<TSharedPtr<int,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)&___7__FSharedObservableArray_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
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

// ~FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> @ 142e0d1b0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
~FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
          (FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ItemsSource_Slate_UE__6B_
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

// ~FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> @ 142e0d210

void __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
~FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
          (FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ItemsSource_Slate_UE__6B_
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

// ~FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> @ 142e0d270

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
~FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>
          (FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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

// ~FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> @ 142e0d2d0

void __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
~FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
          (FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ItemsSource_Slate_UE__6B_
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

// ~FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> @ 142e0d330

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>::
~FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>
          (FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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

// GetItems @ 142e9fdf0

TArrayView<TSharedPtr<int,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::GetItems
          (FSharedObservableArray<TSharedPtr<int,1>_> *this,
          TArrayView<TSharedPtr<int,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<int,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<int,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr = (TSharedPtr<int,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<int,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 142e9fe50

TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
GetItems(FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
        TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> *__return_storage_ptr__
        )

{
  int iVar1;
  TObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 142e9feb0

TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetItems
          (FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
       (pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 142e9ff10

TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetItems
          (FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedPtr<FWidgetReflectorNodeBase,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 142e9ff70

TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GetItems
          (FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int>
                 *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
       (pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetItems @ 142e9ffd0

TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetItems
          (FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *pTVar5;
  
  pTVar2 = (this->ItemsSource).Object;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->Array).AllocatorInstance.Data;
  iVar1 = (pTVar2->Array).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// HandleArrayChanged @ 142ead670

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::HandleArrayChanged
          (FSharedObservableArray<TSharedPtr<int,1>_> *this,
          TObservableArrayChangedArgs<TSharedPtr<int,1>_> *param_1)

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
        goto LAB_142ead6a0;
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
LAB_142ead6a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead6e0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
HandleArrayChanged(FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
                  TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
                  *param_1)

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
        goto LAB_142ead710;
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
LAB_142ead710:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead750

void __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
HandleArrayChanged(FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
                   *this,TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
                         *param_1)

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
        goto LAB_142ead780;
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
LAB_142ead780:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead7c0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
HandleArrayChanged(FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
                  TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_> *param_1)

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
        goto LAB_142ead7f0;
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
LAB_142ead7f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead830

void __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
HandleArrayChanged(FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                   *this,TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                         *param_1)

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
        goto LAB_142ead860;
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
LAB_142ead860:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead8a0

void __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>::
HandleArrayChanged(FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
                  TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_> *param_1)

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
        goto LAB_142ead8d0;
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
LAB_142ead8d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 142ebeff0

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::IsSame
          (FSharedObservableArray<TSharedPtr<int,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 142ebf000

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
IsSame(FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 142ebf010

bool __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::IsSame
          (FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 142ebf020

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>::IsSame
          (FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 142ebf030

bool __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::IsSame
          (FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

// IsSame @ 142ebf040

bool __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>::IsSame
          (FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,void *param_1)

{
  return param_1 == (this->ItemsSource).Object;
}

