// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Derivative @ 1460bc520

FConstantValue * __thiscall
UE::MovieScene::Interpolation::FConstantValue::Derivative
          (FConstantValue *this,FConstantValue *__return_storage_ptr__)

{
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  __return_storage_ptr__->Value = 0.0;
  return __return_storage_ptr__;
}

// Integral @ 1460d6a50

FLinearInterpolation * __thiscall
UE::MovieScene::Interpolation::FConstantValue::Integral
          (FConstantValue *this,FLinearInterpolation *__return_storage_ptr__,double param_1)

{
  __return_storage_ptr__->Coefficient = this->Value;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  __return_storage_ptr__->Constant = param_1;
  return __return_storage_ptr__;
}

