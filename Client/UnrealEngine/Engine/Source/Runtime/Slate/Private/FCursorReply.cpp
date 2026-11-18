// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// operator= @ 1427030f0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall FCursorReply::operator=(FCursorReply *this,FCursorReply *param_1)

{
  TSharedPtr<SWindow,1> *pTVar1;
  TSharedPtr<SWidget,1> *pTVar2;
  longlong *plVar3;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  plVar3 = &param_1->_padding_;
  if (&this->_padding_ != plVar3) {
    this->_padding_ = *plVar3;
    *plVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,(FSharedReferencer<1> *)&param_1->_padding_)
    ;
  }
  pTVar1 = &param_1->CursorWindow;
  if (&this->CursorWindow != pTVar1) {
    (this->CursorWindow).Object = pTVar1->Object;
    pTVar1->Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CursorWindow).SharedReferenceCount,
               &(param_1->CursorWindow).SharedReferenceCount);
  }
  pTVar2 = &param_1->CursorWidget;
  if (&this->CursorWidget != pTVar2) {
    (this->CursorWidget).Object = pTVar2->Object;
    pTVar2->Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CursorWidget).SharedReferenceCount,
               &(param_1->CursorWidget).SharedReferenceCount);
  }
  this->MouseCursor = param_1->MouseCursor;
  return this;
}

