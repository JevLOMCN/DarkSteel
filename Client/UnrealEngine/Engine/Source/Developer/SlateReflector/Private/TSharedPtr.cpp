// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 32

// TSharedPtr<int,1><int> @ 142de2110

TSharedPtr<int,1> * __thiscall
TSharedPtr<int,1>::TSharedPtr<int,1><int>(TSharedPtr<int,1> *this,TRawPtrProxy<int> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  piVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_HU__DefaultDeleter_H_SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)piVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1><WidgetReflectorImpl::FWidgetSnapshotTarget> @ 142de21e0

TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> * __thiscall
TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>::
TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1><WidgetReflectorImpl::FWidgetSnapshotTarget>
          (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *this,
          TRawPtrProxy<WidgetReflectorImpl::FWidgetSnapshotTarget> *param_1)

{
  FWidgetSnapshotTarget *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFWidgetSnapshotTarget_WidgetReflectorImpl__U__DefaultDeleter_UFWidgetSnapshotTarget_WidgetReflectorImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_> @ 142de2450

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_> *param_1)

{
  TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFWidgetSnapshotRequest__VFWidgetSnapshotService____U__DefaultDeleter_V__TRawMessageHandler_UFWidgetSnapshotRequest__VFWidgetSnapshotService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_> @ 142de24c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_> *param_1
          )

{
  TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFWidgetSnapshotResponse__VFWidgetSnapshotService____U__DefaultDeleter_V__TRawMessageHandler_UFWidgetSnapshotResponse__VFWidgetSnapshotService_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SNavigationSimulationSnapshotList,1> @ 142e00bc0

TSharedPtr<SNavigationSimulationSnapshotList,1> * __thiscall
TSharedPtr<SNavigationSimulationSnapshotList,1>::TSharedPtr<SNavigationSimulationSnapshotList,1>
          (TSharedPtr<SNavigationSimulationSnapshotList,1> *this,
          TSharedPtr<SNavigationSimulationSnapshotList,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TSharedPtr<SColorBlock,1> @ 142e0fc50

void __thiscall
TSharedPtr<SColorBlock,1>::~TSharedPtr<SColorBlock,1>(TSharedPtr<SColorBlock,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SExpanderArrow,1> @ 142e0fc80

void __thiscall
TSharedPtr<SExpanderArrow,1>::~TSharedPtr<SExpanderArrow,1>(TSharedPtr<SExpanderArrow,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 142e17f50

TSharedPtr<int,1> * __thiscall
TSharedPtr<int,1>::operator=(TSharedPtr<int,1> *this,TSharedPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  piVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = piVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 142e17fa0

TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1> * __thiscall
TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1>::operator=
          (TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1> *this,
          TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FIntermediateResultNode *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 142e17ff0

TSharedPtr<FNavigationSimulationWidgetNode,1> * __thiscall
TSharedPtr<FNavigationSimulationWidgetNode,1>::operator=
          (TSharedPtr<FNavigationSimulationWidgetNode,1> *this,
          TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationSimulationWidgetNode *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 142e18040

TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> * __thiscall
TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>::operator=
          (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *this,
          TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetSnapshotTarget *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 142e18090

TSharedPtr<FWidgetReflectorNodeBase,1> * __thiscall
TSharedPtr<FWidgetReflectorNodeBase,1>::operator=
          (TSharedPtr<FWidgetReflectorNodeBase,1> *this,
          TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetReflectorNodeBase *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 142e185d0

FIntermediateResultNode * __thiscall
TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1>::operator->
          (TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FIntermediateResultNode *pFVar3;
  
  if (this->Object != (FIntermediateResultNode *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIntermediateResultNode *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142e18620

FNavigationSimulationWidgetNode * __thiscall
TSharedPtr<FNavigationSimulationWidgetNode,1>::operator->
          (TSharedPtr<FNavigationSimulationWidgetNode,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNavigationSimulationWidgetNode *pFVar3;
  
  if (this->Object != (FNavigationSimulationWidgetNode *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNavigationSimulationWidgetNode *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142e18670

FWidgetListEntry * __thiscall
TSharedPtr<FWidgetListEntry,1>::operator->(TSharedPtr<FWidgetListEntry,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWidgetListEntry *pFVar3;
  
  if (this->Object != (FWidgetListEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWidgetListEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142e186c0

FWidgetSnapshotTarget * __thiscall
TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>::operator->
          (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWidgetSnapshotTarget *pFVar3;
  
  if (this->Object != (FWidgetSnapshotTarget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWidgetSnapshotTarget *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142e18710

SComboBox<TSharedPtr<int,1>_> * __thiscall
TSharedPtr<SComboBox<TSharedPtr<int,1>_>,1>::operator->
          (TSharedPtr<SComboBox<TSharedPtr<int,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SComboBox<TSharedPtr<int,1>_> *pSVar3;
  
  if (this->Object != (SComboBox<TSharedPtr<int,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SComboBox<TSharedPtr<int,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e18760

SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __thiscall
TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::operator->
          (TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar3;
  
  if (this->Object != (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e187b0

SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __thiscall
TSharedPtr<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
          (TSharedPtr<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar3;
  
  if (this->Object != (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e18800

SListView<TSharedPtr<int,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<int,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<int,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<int,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e18850

SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e188a0

SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e188f0

SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e18940

FWidgetReflectorNodeBase * __thiscall
TSharedPtr<FWidgetReflectorNodeBase,1>::operator->(TSharedPtr<FWidgetReflectorNodeBase,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWidgetReflectorNodeBase *pFVar3;
  
  if (this->Object != (FWidgetReflectorNodeBase *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWidgetReflectorNodeBase *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142e18990

SDetailView * __thiscall
TSharedPtr<SNavigationSimulationListInternal::SDetailView,1>::operator->
          (TSharedPtr<SNavigationSimulationListInternal::SDetailView,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDetailView *pSVar3;
  
  if (this->Object != (SDetailView *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDetailView *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e189e0

SExpanderArrow * __thiscall
TSharedPtr<SExpanderArrow,1>::operator->(TSharedPtr<SExpanderArrow,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SExpanderArrow *pSVar3;
  
  if (this->Object != (SExpanderArrow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SExpanderArrow *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e18a30

SScrollableSnapshotImage * __thiscall
TSharedPtr<SScrollableSnapshotImage,1>::operator->(TSharedPtr<SScrollableSnapshotImage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SScrollableSnapshotImage *pSVar3;
  
  if (this->Object != (SScrollableSnapshotImage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SScrollableSnapshotImage *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e18a80

/* WARNING: Enum "Type": Some values do not have unique names */

SViewport * __thiscall TSharedPtr<SViewport,1>::operator->(TSharedPtr<SViewport,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SViewport *pSVar3;
  
  if (this->Object != (SViewport *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SViewport *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142e18ad0

SWidgetSnapshotVisualizer * __thiscall
TSharedPtr<SWidgetSnapshotVisualizer,1>::operator->(TSharedPtr<SWidgetSnapshotVisualizer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidgetSnapshotVisualizer *pSVar3;
  
  if (this->Object != (SWidgetSnapshotVisualizer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidgetSnapshotVisualizer *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142f0fbd0

TSharedRef<SWidget_const_,1> * __thiscall
TSharedPtr<SWidget_const_,1>::ToSharedRef
          (TSharedPtr<SWidget_const_,1> *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  
  if (this->Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142f0fc70

TSharedRef<FWidgetReflectorNodeBase,1> * __thiscall
TSharedPtr<FWidgetReflectorNodeBase,1>::ToSharedRef
          (TSharedPtr<FWidgetReflectorNodeBase,1> *this,
          TSharedRef<FWidgetReflectorNodeBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar4;
  
  if (this->Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142f0fd10

TSharedRef<SBox,1> * __thiscall
TSharedPtr<SBox,1>::ToSharedRef(TSharedPtr<SBox,1> *this,TSharedRef<SBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SBox,1> *pTVar4;
  
  if (this->Object == (SBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

