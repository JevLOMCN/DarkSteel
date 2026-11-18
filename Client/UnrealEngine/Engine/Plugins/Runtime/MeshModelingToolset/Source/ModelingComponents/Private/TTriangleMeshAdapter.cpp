// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ~TTriangleMeshAdapter<double> @ 14cad14a0

void __thiscall
UE::Geometry::TTriangleMeshAdapter<double>::~TTriangleMeshAdapter<double>
          (TTriangleMeshAdapter<double> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->GetVertex != 0) {
    plVar1 = *(longlong **)&(this->GetVertex).field_0x28;
    plVar2 = (longlong *)&(this->GetVertex).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->GetTriangle != 0) {
    plVar1 = *(longlong **)&(this->GetTriangle).field_0x28;
    plVar2 = (longlong *)&(this->GetTriangle).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->GetChangeStamp != 0) {
    plVar1 = *(longlong **)&(this->GetChangeStamp).field_0x28;
    plVar2 = (longlong *)&(this->GetChangeStamp).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->VertexCount != 0) {
    plVar1 = *(longlong **)&(this->VertexCount).field_0x28;
    plVar2 = (longlong *)&(this->VertexCount).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->TriangleCount != 0) {
    plVar1 = *(longlong **)&(this->TriangleCount).field_0x28;
    plVar2 = (longlong *)&(this->TriangleCount).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->MaxVertexID != 0) {
    plVar1 = *(longlong **)&(this->MaxVertexID).field_0x28;
    plVar2 = (longlong *)&(this->MaxVertexID).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->MaxTriangleID != 0) {
    plVar1 = *(longlong **)&(this->MaxTriangleID).field_0x28;
    plVar2 = (longlong *)&(this->MaxTriangleID).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->IsVertex != 0) {
    plVar1 = *(longlong **)&(this->IsVertex).field_0x28;
    plVar2 = (longlong *)&(this->IsVertex).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->IsTriangle != 0) {
    plVar1 = *(longlong **)&(this->IsTriangle).field_0x28;
    plVar2 = (longlong *)&(this->IsTriangle).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cad15ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

