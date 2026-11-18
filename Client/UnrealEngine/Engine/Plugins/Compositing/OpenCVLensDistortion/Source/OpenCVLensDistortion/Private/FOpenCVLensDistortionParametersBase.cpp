// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 1

// operator== @ 14d7c73e0

bool __thiscall
FOpenCVLensDistortionParametersBase::operator==
          (FOpenCVLensDistortionParametersBase *this,FOpenCVLensDistortionParametersBase *param_1)

{
  if (((((param_1->K1 == this->K1) && (param_1->K2 == this->K2)) && (param_1->P1 == this->P1)) &&
      (((param_1->P2 == this->P2 && (param_1->K3 == this->K3)) &&
       ((param_1->K4 == this->K4 && ((param_1->K5 == this->K5 && (param_1->K6 == this->K6)))))))) &&
     (((param_1->F).field0_0x0._s_0.X == (this->F).field0_0x0._s_0.X &&
      (((((param_1->F).field0_0x0._s_0.Y == (this->F).field0_0x0._s_0.Y &&
         ((param_1->C).field0_0x0._s_0.X == (this->C).field0_0x0._s_0.X)) &&
        ((param_1->C).field0_0x0._s_0.Y == (this->C).field0_0x0._s_0.Y)) &&
       (this->bUseFisheyeModel == param_1->bUseFisheyeModel)))))) {
    return true;
  }
  return false;
}

