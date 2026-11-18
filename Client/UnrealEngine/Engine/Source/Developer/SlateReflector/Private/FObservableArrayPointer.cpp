// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 30

// FObservableArrayPointer<TSharedPtr<int,1>_> @ 142dfdd40

FObservableArrayPointer<TSharedPtr<int,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::
FObservableArrayPointer<TSharedPtr<int,1>_>
          (FObservableArrayPointer<TSharedPtr<int,1>_> *this,TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<int,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)&___7__FObservableArrayPointer_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
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
          ::AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<int,1>_> *)&stack0x00000008,
                     (pmf_8c89a71d)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> @ 142dfddc0

FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
          (FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FNavigationSimulationWidgetNode,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)
                     &stack0x00000008,(pmf_7e17fd1d)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> @ 142dfde40

FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
          (FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
                      *)&stack0x00000008,(pmf_30e6fed5)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> @ 142dfdec0

FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>
          (FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)
                     &stack0x00000008,(pmf_406f0a55)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> @ 142dfdf40

FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *
__thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
          (FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
                      *)&stack0x00000008,(pmf_a48f1555)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> @ 142dfdfc0

FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::
FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>
          (FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<STableViewBase,1> *param_1,
          TObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDelegateHandle FVar2;
  
  this->ItemsSource = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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
  FVar2 = TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
          ::
          AddRaw<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<FWidgetReflectorNodeBase,1>_>),FDefaultDelegateUserPolicy>
                      *)&param_2->ArrayChangedDelegate,
                     (FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *)
                     &stack0x00000008,(pmf_23a1d815)this);
                    /* WARNING: Load size is inaccurate */
  (this->ArrayChangedHandle).ID = *FVar2.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FObservableArrayPointer<TSharedPtr<int,1>_> @ 142e0cd90

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::
~FObservableArrayPointer<TSharedPtr<int,1>_>(FObservableArrayPointer<TSharedPtr<int,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)&___7__FObservableArrayPointer_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
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
                    /* WARNING: Could not recover jumptable at 0x000142e0ce1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> @ 142e0ce30

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
~FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
          (FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this)

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
       ___7__FObservableArrayPointer_V__TSharedPtr_UFNavigationSimulationWidgetNode___00___ItemsSource_Slate_UE__6B_
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
                    /* WARNING: Could not recover jumptable at 0x000142e0cebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> @ 142e0ced0

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
~FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
          (FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this)

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
       ___7__FObservableArrayPointer_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ItemsSource_Slate_UE__6B_
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
                    /* WARNING: Could not recover jumptable at 0x000142e0cf5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> @ 142e0cf70

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
~FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>
          (FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this)

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
       ___7__FObservableArrayPointer_V__TSharedPtr_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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
                    /* WARNING: Could not recover jumptable at 0x000142e0cffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> @ 142e0d010

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
~FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
          (FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this)

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
       ___7__FObservableArrayPointer_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00___ItemsSource_Slate_UE__6B_
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
                    /* WARNING: Could not recover jumptable at 0x000142e0d09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> @ 142e0d0b0

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::
~FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>
          (FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this)

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
       ___7__FObservableArrayPointer_V__TSharedRef_VFWidgetReflectorNodeBase___00___ItemsSource_Slate_UE__6B_
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
                    /* WARNING: Could not recover jumptable at 0x000142e0d13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// GetItems @ 142e9fbb0

TArrayView<TSharedPtr<int,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::GetItems
          (FObservableArrayPointer<TSharedPtr<int,1>_> *this,
          TArrayView<TSharedPtr<int,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<int,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<int,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// GetItems @ 142e9fc10

TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
GetItems(FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
        TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> *__return_storage_ptr__
        )

{
  int iVar1;
  TObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// GetItems @ 142e9fc70

TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetItems
          (FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// GetItems @ 142e9fcd0

TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetItems
          (FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// GetItems @ 142e9fd30

TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GetItems
          (FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int>
                 *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// GetItems @ 142e9fd90

TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::GetItems
          (FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
          TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int> *pTVar5;
  
  pTVar2 = this->ItemsSource;
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

// HandleArrayChanged @ 142ead3d0

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::HandleArrayChanged
          (FObservableArrayPointer<TSharedPtr<int,1>_> *this,
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
        goto LAB_142ead400;
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
LAB_142ead400:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead440

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
HandleArrayChanged(FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,
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
        goto LAB_142ead470;
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
LAB_142ead470:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead4b0

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
HandleArrayChanged(FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
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
        goto LAB_142ead4e0;
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
LAB_142ead4e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead520

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
HandleArrayChanged(FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
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
        goto LAB_142ead550;
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
LAB_142ead550:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead590

void __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
HandleArrayChanged(FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
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
        goto LAB_142ead5c0;
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
LAB_142ead5c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// HandleArrayChanged @ 142ead600

void __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::
HandleArrayChanged(FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,
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
        goto LAB_142ead630;
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
LAB_142ead630:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// IsSame @ 142ebef30

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::IsSame
          (FObservableArrayPointer<TSharedPtr<int,1>_> *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

// IsSame @ 142ebef50

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
IsSame(FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

// IsSame @ 142ebef70

bool __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::IsSame
          (FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          void *param_1)

{
  return param_1 == &this->ItemsSource;
}

// IsSame @ 142ebef90

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>::IsSame
          (FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

// IsSame @ 142ebefb0

bool __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::IsSame
          (FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

// IsSame @ 142ebefd0

bool __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>::IsSame
          (FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> *this,void *param_1)

{
  return param_1 == &this->ItemsSource;
}

