// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// operator== @ 14ca6c100

bool __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats::operator==
          (FSampleStats *this,FSampleStats *param_1)

{
  if ((this->NumValid == param_1->NumValid) && (this->NumInvalid == param_1->NumInvalid)) {
    return true;
  }
  return false;
}

// operator!= @ 14ca6c190

bool __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats::operator!=
          (FSampleStats *this,FSampleStats *param_1)

{
  if ((this->NumValid == param_1->NumValid) && (this->NumInvalid == param_1->NumInvalid)) {
    return false;
  }
  return true;
}

// operator+= @ 14ca73960

FSampleStats * __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats::operator+=
          (FSampleStats *this,FSampleStats *param_1)

{
  this->NumValid = this->NumValid + param_1->NumValid;
  this->NumInvalid = this->NumInvalid + param_1->NumInvalid;
  return this;
}

// Zero @ 14caaab00

FSampleStats __cdecl UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats::Zero(void)

{
  FSampleStats FVar1;
  
  FVar1.NumValid = 0;
  FVar1.NumInvalid = 0;
  return FVar1;
}

