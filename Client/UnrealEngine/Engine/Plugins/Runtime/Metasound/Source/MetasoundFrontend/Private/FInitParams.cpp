// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// ~FInitParams @ 14ae1d910

void __thiscall
Metasound::Frontend::FInputNodeController::FInitParams::~FInitParams(FInitParams *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningGraph).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->OwningGraphClassInputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ClassPtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ClassPtr).field_0x38;
    plVar2 = (longlong *)&(this->ClassPtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->NodePtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
    plVar2 = (longlong *)&(this->NodePtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1d9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// ~FInitParams @ 14ae1d9c0

void __thiscall Metasound::Frontend::FNodeController::FInitParams::~FInitParams(FInitParams *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningGraph).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ClassPtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ClassPtr).field_0x38;
    plVar2 = (longlong *)&(this->ClassPtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->NodePtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
    plVar2 = (longlong *)&(this->NodePtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1da31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// ~FInitParams @ 14ae1da50

void __thiscall
Metasound::Frontend::FOutputNodeController::FInitParams::~FInitParams(FInitParams *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningGraph).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->OwningGraphClassOutputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassOutputPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->OwningGraphClassOutputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ClassPtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ClassPtr).field_0x38;
    plVar2 = (longlong *)&(this->ClassPtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->NodePtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
    plVar2 = (longlong *)&(this->NodePtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1dae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// ~FInitParams @ 14ae1db00

void __thiscall
Metasound::Frontend::FSubgraphNodeController::FInitParams::~FInitParams(FInitParams *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningGraph).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ClassPtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->ClassPtr).field_0x38;
    plVar2 = (longlong *)&(this->ClassPtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->NodePtr).field_0x10 != 0) {
    plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
    plVar2 = (longlong *)&(this->NodePtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1db71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

