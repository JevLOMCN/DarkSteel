// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// Construct @ 1428f7980

void __thiscall
TSlotBase<SRadialBox::FSlot>::Construct
          (TSlotBase<SRadialBox::FSlot> *this,FChildren *param_1,FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// Construct @ 142a1c0a0

void __thiscall
TSlotBase<SListPanel::FSlot>::Construct
          (TSlotBase<SListPanel::FSlot> *this,FChildren *param_1,FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

