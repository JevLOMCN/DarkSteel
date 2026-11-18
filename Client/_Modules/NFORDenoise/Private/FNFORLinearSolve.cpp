// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 1

// Update @ 14e9feff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
NFORRegressionSolverCPU::FNFORLinearSolve::Update
          (FNFORLinearSolve *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = &this->CurrentNumElements;
  if ((*piVar1 != param_1) || (this->CurrentNumFeatureChannel != param_2)) {
    *piVar1 = param_1;
    this->CurrentNumFeatureChannel = param_2;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->A,param_1 * param_2 * param_2,Default);
  }
  if (((*piVar1 != param_1) || (this->CurrentNumFeatureChannel != param_2)) ||
     (this->CurrentNumRadianceChannels != param_3)) {
    this->CurrentNumElements = param_1;
    this->CurrentNumFeatureChannel = param_2;
    this->CurrentNumRadianceChannels = param_3;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->B,param_1 * param_2 * param_3,Default);
  }
  return;
}

