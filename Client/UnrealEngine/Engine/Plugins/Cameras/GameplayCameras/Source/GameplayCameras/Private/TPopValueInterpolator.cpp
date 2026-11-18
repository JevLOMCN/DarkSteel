// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// OnRun @ 14d5c2650

void __thiscall
UE::Cameras::TPopValueInterpolator<double>::OnRun
          (TPopValueInterpolator<double> *this,FCameraValueInterpolationParams *param_1,
          FCameraValueInterpolationResult *param_2)

{
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&this->field_0x18;
  this->field_0x20 = 1;
  return;
}

// OnRun @ 14d5c2670

void __thiscall
UE::Cameras::TPopValueInterpolator<UE::Math::TVector2<double>_>::OnRun
          (TPopValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  this->field_0x30 = 1;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&this->field_0x20;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&this->field_0x28;
  return;
}

// OnRun @ 14d5c2690

void __thiscall
UE::Cameras::TPopValueInterpolator<UE::Math::TVector<double>_>::OnRun
          (TPopValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  this->field_0x40 = 1;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&this->field_0x28;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&this->field_0x30;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&this->field_0x38;
  return;
}

