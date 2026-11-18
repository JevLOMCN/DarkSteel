// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDistanceFieldAOParameters @ 1447f3910

FDistanceFieldAOParameters * __thiscall
FDistanceFieldAOParameters::FDistanceFieldAOParameters
          (FDistanceFieldAOParameters *this,float param_1,float param_2)

{
  float fVar1;
  
  if (__real_40000000 <= param_2) {
    param_2 = __real_40000000;
  }
  if (__real_453b8000 <= param_1) {
    param_1 = __real_453b8000;
  }
  if (param_2 <= __real_3c23d70a) {
    param_2 = __real_3c23d70a;
  }
  if (param_1 <= __real_40000000) {
    param_1 = __real_40000000;
  }
  this->Contrast = param_2;
  if (GAOGlobalDistanceField != 0) {
    fVar1 = param_1;
    if (GAOGlobalDFStartDistance <= param_1) {
      fVar1 = GAOGlobalDFStartDistance;
    }
    this->ObjectMaxOcclusionDistance = fVar1;
    if (param_1 < GAOGlobalDFStartDistance) {
      param_1 = 0.0;
    }
    this->GlobalMaxOcclusionDistance = param_1;
    return this;
  }
  this->ObjectMaxOcclusionDistance = param_1;
  this->GlobalMaxOcclusionDistance = 0.0;
  return this;
}

