// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FGetTriCoordSkinnedDataOutputHandler @ 148f7e7f0

FGetTriCoordSkinnedDataOutputHandler * __thiscall
FGetTriCoordSkinnedDataOutputHandler::FGetTriCoordSkinnedDataOutputHandler
          (FGetTriCoordSkinnedDataOutputHandler *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Position,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Velocity,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Normal,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Binormal,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Tangent,param_1);
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
  if ((((this->Normal).X.AdvanceOffset < 1) && ((this->Normal).Y.AdvanceOffset < 1)) &&
     ((this->Normal).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsNorm = bVar1;
  if ((((this->Binormal).X.AdvanceOffset < 1) && ((this->Binormal).Y.AdvanceOffset < 1)) &&
     ((this->Binormal).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsBinorm = bVar1;
  if ((((this->Tangent).X.AdvanceOffset < 1) && ((this->Tangent).Y.AdvanceOffset < 1)) &&
     ((this->Tangent).Z.AdvanceOffset < 1)) {
    this->bNeedsTangent = false;
    return this;
  }
  this->bNeedsTangent = true;
  return this;
}

