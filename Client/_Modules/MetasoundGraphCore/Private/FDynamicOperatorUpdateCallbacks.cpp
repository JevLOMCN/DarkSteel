// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// ~FDynamicOperatorUpdateCallbacks @ 14ad3da50

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorUpdateCallbacks::~FDynamicOperatorUpdateCallbacks
          (FDynamicOperatorUpdateCallbacks *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->OnOutputRemoved != 0) {
    plVar1 = *(longlong **)&(this->OnOutputRemoved).field_0x28;
    plVar2 = (longlong *)&(this->OnOutputRemoved).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnOutputUpdated != 0) {
    plVar1 = *(longlong **)&(this->OnOutputUpdated).field_0x28;
    plVar2 = (longlong *)&(this->OnOutputUpdated).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnOutputAdded != 0) {
    plVar1 = *(longlong **)&(this->OnOutputAdded).field_0x28;
    plVar2 = (longlong *)&(this->OnOutputAdded).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnInputRemoved != 0) {
    plVar1 = *(longlong **)&(this->OnInputRemoved).field_0x28;
    plVar2 = (longlong *)&(this->OnInputRemoved).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnInputAdded != 0) {
    plVar1 = *(longlong **)&(this->OnInputAdded).field_0x28;
    plVar2 = (longlong *)&(this->OnInputAdded).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ad3daf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

