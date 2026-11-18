// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// FSimulatedReply @ 142e0aa50

FSimulatedReply * __thiscall
FSlateNavigationEventSimulator::FSimulatedReply::FSimulatedReply
          (FSimulatedReply *this,FNavigationReply *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->EventHandler).Object = (param_1->EventHandler).Object;
  pTVar1 = (param_1->EventHandler).SharedReferenceCount.ReferenceController;
  (this->EventHandler).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->FocusRecipient).Object = (param_1->FocusRecipient).Object;
  pTVar1 = (param_1->FocusRecipient).SharedReferenceCount.ReferenceController;
  (this->FocusRecipient).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->BoundaryRule = param_1->BoundaryRule;
  return this;
}

// operator= @ 142e18140

FSimulatedReply * __thiscall
FSlateNavigationEventSimulator::FSimulatedReply::operator=
          (FSimulatedReply *this,FSimulatedReply *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  
  if (this != param_1) {
    (this->EventHandler).Object = (param_1->EventHandler).Object;
    (param_1->EventHandler).Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EventHandler).SharedReferenceCount,
               &(param_1->EventHandler).SharedReferenceCount);
  }
  pTVar1 = &param_1->FocusRecipient;
  if (&this->FocusRecipient != pTVar1) {
    (this->FocusRecipient).Object = pTVar1->Object;
    pTVar1->Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FocusRecipient).SharedReferenceCount,
               &(param_1->FocusRecipient).SharedReferenceCount);
  }
  this->BoundaryRule = param_1->BoundaryRule;
  return this;
}

