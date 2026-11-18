// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FBoneSocketSkinnedDataOutputHandler @ 148f7e700

FBoneSocketSkinnedDataOutputHandler * __thiscall
FBoneSocketSkinnedDataOutputHandler::FBoneSocketSkinnedDataOutputHandler
          (FBoneSocketSkinnedDataOutputHandler *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Position,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&this->Rotation,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Scale,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&this->Velocity,param_1);
  if ((((this->Position).X.AdvanceOffset < 1) && ((this->Position).Y.AdvanceOffset < 1)) &&
     ((this->Position).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsPosition = bVar1;
  if ((((this->Rotation).X.AdvanceOffset < 1) && ((this->Rotation).Y.AdvanceOffset < 1)) &&
     (((this->Rotation).Z.AdvanceOffset < 1 && ((this->Rotation).W.AdvanceOffset < 1)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsRotation = bVar1;
  if ((((this->Scale).X.AdvanceOffset < 1) && ((this->Scale).Y.AdvanceOffset < 1)) &&
     ((this->Scale).Z.AdvanceOffset < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bNeedsScale = bVar1;
  if ((((this->Velocity).X.AdvanceOffset < 1) && ((this->Velocity).Y.AdvanceOffset < 1)) &&
     ((this->Velocity).Z.AdvanceOffset < 1)) {
    this->bNeedsVelocity = false;
    return this;
  }
  this->bNeedsVelocity = true;
  return this;
}

