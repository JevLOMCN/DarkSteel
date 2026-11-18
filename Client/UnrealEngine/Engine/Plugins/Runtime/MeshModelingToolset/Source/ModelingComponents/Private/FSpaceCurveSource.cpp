// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ~FSpaceCurveSource @ 14cad1b40

void __thiscall FSpaceCurveSource::~FSpaceCurveSource(FSpaceCurveSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->IsLoop != 0) {
    plVar1 = *(longlong **)&(this->IsLoop).field_0x28;
    plVar2 = (longlong *)&(this->IsLoop).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->GetPoint != 0) {
    plVar1 = *(longlong **)&(this->GetPoint).field_0x28;
    plVar2 = (longlong *)&(this->GetPoint).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->GetPointCount != 0) {
    plVar1 = *(longlong **)&(this->GetPointCount).field_0x28;
    plVar2 = (longlong *)&(this->GetPointCount).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cad1b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

