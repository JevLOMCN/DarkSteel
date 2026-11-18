// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FClippingInfo @ 1427b0d30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FClippingInfo * __thiscall
UE::Slate::FClippingInfo::FClippingInfo(FClippingInfo *this,FClippingInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Widget).Object = (param_1->Widget).Object;
  pTVar1 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  (this->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMenuEntryResizeParams::FMenuEntryResizeParams(&this->ResizeParams,&param_1->ResizeParams);
  this->X = param_1->X;
  this->Width = param_1->Width;
  this->bIsStretchable = param_1->bIsStretchable;
  this->bAppearsInOverflow = param_1->bAppearsInOverflow;
  this->bWasClipped = param_1->bWasClipped;
  return this;
}

