// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// AttachWidget @ 1427d41b0

void __thiscall FSlotBase::AttachWidget(FSlotBase *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  DetatchParentFromContent(this);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = (this->Widget).Object;
  pTVar3 = (this->Widget).SharedReferenceCount.ReferenceController;
  (this->Widget).Object = param_1->Object;
  (this->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  param_1->Object = pSVar2;
  (param_1->SharedReferenceCount).ReferenceController = pTVar3;
  AfterContentOrOwnerAssigned(this);
  return;
}

