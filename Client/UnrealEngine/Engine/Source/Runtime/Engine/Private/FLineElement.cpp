// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// PopulateElement @ 147571d00

bool __thiscall
FLineElement::PopulateElement(FLineElement *this,float param_1,FEditorElement *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  if ((this->Start).Position <= param_1) {
    if (param_1 < (this->End).Position || param_1 == (this->End).Position) {
      param_2->Indices[0] = (this->End).Index;
      fVar2 = (param_1 - (this->Start).Position) / this->Range;
      param_2->Weights[0] = fVar2;
      param_2->Indices[1] = (this->Start).Index;
      param_2->Weights[1] = fVar1 - fVar2;
      return true;
    }
    if (this->bIsLast != false) {
      param_2->Indices[0] = (this->End).Index;
      param_2->Weights[0] = 1.0;
      return true;
    }
  }
  else if (this->bIsFirst != false) {
    param_2->Indices[0] = (this->Start).Index;
    param_2->Weights[0] = 1.0;
    return true;
  }
  return false;
}

