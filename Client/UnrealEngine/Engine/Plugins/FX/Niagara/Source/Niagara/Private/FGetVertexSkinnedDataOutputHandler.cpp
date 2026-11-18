// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FGetVertexSkinnedDataOutputHandler @ 1490218d0

FGetVertexSkinnedDataOutputHandler * __thiscall
FGetVertexSkinnedDataOutputHandler::FGetVertexSkinnedDataOutputHandler
          (FGetVertexSkinnedDataOutputHandler *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Position,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Velocity,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->TangentZ,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->TangentY,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->TangentX,param_1);
  if ((((this->Position).X.AdvanceOffset < 1) && ((this->Position).Y.AdvanceOffset < 1)) &&
     ((this->Position).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsPosition = bVar1;
  if ((((this->Velocity).X.AdvanceOffset < 1) && ((this->Velocity).Y.AdvanceOffset < 1)) &&
     ((this->Velocity).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsVelocity = bVar1;
  if ((((this->TangentX).X.AdvanceOffset < 1) && ((this->TangentX).Y.AdvanceOffset < 1)) &&
     ((this->TangentX).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsTangentX = bVar1;
  if ((((this->TangentY).X.AdvanceOffset < 1) && ((this->TangentY).Y.AdvanceOffset < 1)) &&
     ((this->TangentY).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsTangentY = bVar1;
  if ((((this->TangentZ).X.AdvanceOffset < 1) && ((this->TangentZ).Y.AdvanceOffset < 1)) &&
     ((this->TangentZ).Z.AdvanceOffset < 1)) {
    this->bNeedsTangentZ = false;
    return this;
  }
  this->bNeedsTangentZ = true;
  return this;
}

