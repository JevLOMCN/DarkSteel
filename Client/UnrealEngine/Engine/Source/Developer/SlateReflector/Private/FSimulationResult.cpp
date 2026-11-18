// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// FSimulationResult @ 142e0aaa0

/* WARNING: Enum "Type": Some values do not have unique names */

FSimulationResult * __thiscall
FSlateNavigationEventSimulator::FSimulationResult::FSimulationResult
          (FSimulationResult *this,FSimulationResult *param_1)

{
  SWidget *pSVar1;
  
  FWidgetPath::FWidgetPath(&this->NavigationSource,&param_1->NavigationSource);
  FWidgetPath::FWidgetPath(&this->NavigationDestination,&param_1->NavigationDestination);
  this->NavigationType = param_1->NavigationType;
  (this->NavigationReply).EventHandler.Object = (param_1->NavigationReply).EventHandler.Object;
  (this->NavigationReply).EventHandler.SharedReferenceCount.ReferenceController =
       (param_1->NavigationReply).EventHandler.SharedReferenceCount.ReferenceController;
  pSVar1 = (param_1->NavigationReply).FocusRecipient.Object;
  (param_1->NavigationReply).EventHandler.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->NavigationReply).EventHandler.Object = (SWidget *)0x0;
  (this->NavigationReply).FocusRecipient.Object = pSVar1;
  (this->NavigationReply).FocusRecipient.SharedReferenceCount.ReferenceController =
       (param_1->NavigationReply).FocusRecipient.SharedReferenceCount.ReferenceController;
  (param_1->NavigationReply).FocusRecipient.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->NavigationReply).FocusRecipient.Object = (SWidget *)0x0;
  (this->NavigationReply).BoundaryRule = (param_1->NavigationReply).BoundaryRule;
  this->RoutedReason = param_1->RoutedReason;
  (this->WidgetThatShouldReceivedFocus).Object = (param_1->WidgetThatShouldReceivedFocus).Object;
  (this->WidgetThatShouldReceivedFocus).SharedReferenceCount.ReferenceController =
       (param_1->WidgetThatShouldReceivedFocus).SharedReferenceCount.ReferenceController;
  pSVar1 = (param_1->FocusedWidgetPath).Object;
  (param_1->WidgetThatShouldReceivedFocus).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WidgetThatShouldReceivedFocus).Object = (SWidget *)0x0;
  (this->FocusedWidgetPath).Object = pSVar1;
  (this->FocusedWidgetPath).SharedReferenceCount.ReferenceController =
       (param_1->FocusedWidgetPath).SharedReferenceCount.ReferenceController;
  (param_1->FocusedWidgetPath).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->FocusedWidgetPath).Object = (SWidget *)0x0;
  this->bIsDynamic = param_1->bIsDynamic;
  this->bAlwaysHandleNavigationAttempt = param_1->bAlwaysHandleNavigationAttempt;
  this->bCanFindWidgetForSetFocus = param_1->bCanFindWidgetForSetFocus;
  this->bRoutedHandlerHasNavigationMeta = param_1->bRoutedHandlerHasNavigationMeta;
  this->bHandledByViewport = param_1->bHandledByViewport;
  return this;
}

// FSimulationResult @ 142e0abf0

/* WARNING: Enum "Type": Some values do not have unique names */

FSimulationResult * __thiscall
FSlateNavigationEventSimulator::FSimulationResult::FSimulationResult(FSimulationResult *this)

{
  FWidgetPath::FWidgetPath(&this->NavigationSource);
  FWidgetPath::FWidgetPath(&this->NavigationDestination);
  this->NavigationType = Invalid;
  (this->NavigationReply).EventHandler.Object = (SWidget *)0x0;
  (this->NavigationReply).EventHandler.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NavigationReply).FocusRecipient.Object = (SWidget *)0x0;
  (this->NavigationReply).FocusRecipient.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WidgetThatShouldReceivedFocus).Object = (SWidget *)0x0;
  (this->WidgetThatShouldReceivedFocus).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->FocusedWidgetPath).Object = (SWidget *)0x0;
  (this->FocusedWidgetPath).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsDynamic = false;
  this->bAlwaysHandleNavigationAttempt = false;
  this->bCanFindWidgetForSetFocus = false;
  this->bRoutedHandlerHasNavigationMeta = false;
  this->bHandledByViewport = false;
  this->RoutedReason = LastWidget;
  return this;
}

