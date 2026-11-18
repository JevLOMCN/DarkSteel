// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// operator= @ 14cbc1d10

TOptional<UE::Math::TTransform<double>_> * __thiscall
TOptional<UE::Math::TTransform<double>_>::operator=
          (TOptional<UE::Math::TTransform<double>_> *this,
          TOptional<UE::Math::TTransform<double>_> *param_1)

{
  double dVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet == false) {
      if (this->bIsSet != false) {
        this->bIsSet = false;
        return this;
      }
    }
    else {
      dVar1 = (param_1->TypedValue).Rotation.XY.m128d_f64[1];
      (this->TypedValue).Rotation.XY.m128d_f64[0] = (param_1->TypedValue).Rotation.XY.m128d_f64[0];
      (this->TypedValue).Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->TypedValue).Rotation.ZW.m128d_f64[1];
      (this->TypedValue).Rotation.ZW.m128d_f64[0] = (param_1->TypedValue).Rotation.ZW.m128d_f64[0];
      (this->TypedValue).Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->TypedValue).Translation.XY.m128d_f64[1];
      (this->TypedValue).Translation.XY.m128d_f64[0] =
           (param_1->TypedValue).Translation.XY.m128d_f64[0];
      (this->TypedValue).Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->TypedValue).Translation.ZW.m128d_f64[1];
      (this->TypedValue).Translation.ZW.m128d_f64[0] =
           (param_1->TypedValue).Translation.ZW.m128d_f64[0];
      (this->TypedValue).Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->TypedValue).Scale3D.XY.m128d_f64[1];
      (this->TypedValue).Scale3D.XY.m128d_f64[0] = (param_1->TypedValue).Scale3D.XY.m128d_f64[0];
      (this->TypedValue).Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->TypedValue).Scale3D.ZW.m128d_f64[1];
      (this->TypedValue).Scale3D.ZW.m128d_f64[0] = (param_1->TypedValue).Scale3D.ZW.m128d_f64[0];
      (this->TypedValue).Scale3D.ZW.m128d_f64[1] = dVar1;
      this->bIsSet = true;
    }
  }
  return this;
}

