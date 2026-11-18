// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 3

// FNavigationSimulationWidgetNodeItem @ 142e0a560

FNavigationSimulationWidgetNodeItem * __thiscall
FNavigationSimulationWidgetNodeItem::FNavigationSimulationWidgetNodeItem
          (FNavigationSimulationWidgetNodeItem *this,FNavigationSimulationWidgetNodeItem *param_1)

{
  byte bVar1;
  
  this->NavigationType = param_1->NavigationType;
  FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
            (&this->Destination,&param_1->Destination);
  FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
            (&this->ReplyEventHandler,&param_1->ReplyEventHandler);
  FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
            (&this->ReplyFocusRecipient,&param_1->ReplyFocusRecipient);
  this->ReplyBoundaryRule = param_1->ReplyBoundaryRule;
  this->RoutedReason = param_1->RoutedReason;
  FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
            (&this->WidgetThatShouldReceivedFocus,&param_1->WidgetThatShouldReceivedFocus);
  FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
            (&this->FocusedWidget,&param_1->FocusedWidget);
  bVar1 = (this->bIsDynamic ^ param_1->bIsDynamic) & 1 ^ this->field_0x218;
  this->field_0x218 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x218) & 2 ^ bVar1;
  this->field_0x218 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x218) & 4 ^ bVar1;
  this->field_0x218 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x218) & 8 ^ bVar1;
  this->field_0x218 = bVar1;
  this->field_0x218 = (bVar1 ^ param_1->field_0x218) & 0x10 ^ bVar1;
  return this;
}

// FNavigationSimulationWidgetNodeItem @ 142e0a660

/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationSimulationWidgetNodeItem * __thiscall
FNavigationSimulationWidgetNodeItem::FNavigationSimulationWidgetNodeItem
          (FNavigationSimulationWidgetNodeItem *this,FSimulationResult *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  byte bVar2;
  TSharedPtr<SWidget_const_,1> local_18;
  
  this->NavigationType = param_1->NavigationType;
  FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
            (&this->Destination,&param_1->NavigationDestination);
  pTVar1 = (param_1->NavigationReply).EventHandler.SharedReferenceCount.ReferenceController;
  local_18.Object = (param_1->NavigationReply).EventHandler.Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    (this->ReplyEventHandler).WidgetPtr = (ulong64)local_18.Object;
    (this->ReplyEventHandler).WidgetLive.Object = local_18.Object;
    (this->ReplyEventHandler).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    (this->ReplyEventHandler).WidgetPtr = (ulong64)local_18.Object;
    (this->ReplyEventHandler).WidgetLive.Object = local_18.Object;
    (this->ReplyEventHandler).WidgetLive.WeakReferenceCount.ReferenceController = pTVar1;
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName
            (&(this->ReplyEventHandler).WidgetTypeAndShortName,&local_18);
  FGeometry::FGeometry(&(this->ReplyEventHandler).WidgetGeometry);
  (this->ReplyEventHandler).bHasGeometry = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (param_1->NavigationReply).FocusRecipient.SharedReferenceCount.ReferenceController;
  local_18.Object = (param_1->NavigationReply).FocusRecipient.Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    (this->ReplyFocusRecipient).WidgetPtr = (ulong64)local_18.Object;
    (this->ReplyFocusRecipient).WidgetLive.Object = local_18.Object;
    (this->ReplyFocusRecipient).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    (this->ReplyFocusRecipient).WidgetPtr = (ulong64)local_18.Object;
    (this->ReplyFocusRecipient).WidgetLive.Object = local_18.Object;
    (this->ReplyFocusRecipient).WidgetLive.WeakReferenceCount.ReferenceController = pTVar1;
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName
            (&(this->ReplyFocusRecipient).WidgetTypeAndShortName,&local_18);
  FGeometry::FGeometry(&(this->ReplyFocusRecipient).WidgetGeometry);
  (this->ReplyFocusRecipient).bHasGeometry = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->ReplyBoundaryRule = (param_1->NavigationReply).BoundaryRule;
  this->RoutedReason = param_1->RoutedReason;
  pTVar1 = (param_1->WidgetThatShouldReceivedFocus).SharedReferenceCount.ReferenceController;
  local_18.Object = (param_1->WidgetThatShouldReceivedFocus).Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    (this->WidgetThatShouldReceivedFocus).WidgetPtr = (ulong64)local_18.Object;
    (this->WidgetThatShouldReceivedFocus).WidgetLive.Object = local_18.Object;
    (this->WidgetThatShouldReceivedFocus).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    (this->WidgetThatShouldReceivedFocus).WidgetPtr = (ulong64)local_18.Object;
    (this->WidgetThatShouldReceivedFocus).WidgetLive.Object = local_18.Object;
    (this->WidgetThatShouldReceivedFocus).WidgetLive.WeakReferenceCount.ReferenceController = pTVar1
    ;
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName
            (&(this->WidgetThatShouldReceivedFocus).WidgetTypeAndShortName,&local_18);
  FGeometry::FGeometry(&(this->WidgetThatShouldReceivedFocus).WidgetGeometry);
  (this->WidgetThatShouldReceivedFocus).bHasGeometry = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (param_1->FocusedWidgetPath).SharedReferenceCount.ReferenceController;
  local_18.Object = (param_1->FocusedWidgetPath).Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    (this->FocusedWidget).WidgetPtr = (ulong64)local_18.Object;
    (this->FocusedWidget).WidgetLive.Object = local_18.Object;
    (this->FocusedWidget).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    (this->FocusedWidget).WidgetPtr = (ulong64)local_18.Object;
    (this->FocusedWidget).WidgetLive.Object = local_18.Object;
    (this->FocusedWidget).WidgetLive.WeakReferenceCount.ReferenceController = pTVar1;
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName
            (&(this->FocusedWidget).WidgetTypeAndShortName,&local_18);
  FGeometry::FGeometry(&(this->FocusedWidget).WidgetGeometry);
  (this->FocusedWidget).bHasGeometry = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar2 = (this->bIsDynamic ^ param_1->bIsDynamic) & 1 ^ this->field_0x218;
  this->field_0x218 = bVar2;
  bVar2 = (param_1->bAlwaysHandleNavigationAttempt * '\x02' ^ bVar2) & 2 ^ bVar2;
  this->field_0x218 = bVar2;
  bVar2 = (param_1->bCanFindWidgetForSetFocus << 2 ^ bVar2) & 4 ^ bVar2;
  this->field_0x218 = bVar2;
  bVar2 = (param_1->bRoutedHandlerHasNavigationMeta << 3 ^ bVar2) & 8 ^ bVar2;
  this->field_0x218 = bVar2;
  this->field_0x218 = (param_1->bHandledByViewport << 4 ^ bVar2) & 0x10 ^ bVar2;
  return this;
}

// ResetLiveWidget @ 142efa0c0

void __thiscall
FNavigationSimulationWidgetNodeItem::ResetLiveWidget(FNavigationSimulationWidgetNodeItem *this)

{
  TWeakPtr<SWidget_const_,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  pTVar1 = &(this->Destination).WidgetLive;
  if (pTVar1 != (TWeakPtr<SWidget_const_,1> *)local_58) {
    pTVar4 = (this->Destination).WidgetLive.WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (this->Destination).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  pTVar1 = &(this->ReplyEventHandler).WidgetLive;
  if (pTVar1 != (TWeakPtr<SWidget_const_,1> *)local_48) {
    pTVar4 = (this->ReplyEventHandler).WidgetLive.WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (this->ReplyEventHandler).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  pTVar1 = &(this->ReplyFocusRecipient).WidgetLive;
  if (pTVar1 != (TWeakPtr<SWidget_const_,1> *)local_38) {
    pTVar4 = (this->ReplyFocusRecipient).WidgetLive.WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (this->ReplyFocusRecipient).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  pTVar1 = &(this->WidgetThatShouldReceivedFocus).WidgetLive;
  if (pTVar1 != (TWeakPtr<SWidget_const_,1> *)local_28) {
    pTVar4 = (this->WidgetThatShouldReceivedFocus).WidgetLive.WeakReferenceCount.ReferenceController
    ;
    pTVar1->Object = (SWidget *)0x0;
    (this->WidgetThatShouldReceivedFocus).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  pTVar1 = &(this->FocusedWidget).WidgetLive;
  if (pTVar1 != (TWeakPtr<SWidget_const_,1> *)local_18) {
    pTVar4 = (this->FocusedWidget).WidgetLive.WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (this->FocusedWidget).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return;
}

