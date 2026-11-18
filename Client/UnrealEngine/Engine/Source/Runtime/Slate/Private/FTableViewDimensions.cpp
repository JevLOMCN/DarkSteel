// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FTableViewDimensions @ 142a17e70

FTableViewDimensions * __thiscall
FTableViewDimensions::FTableViewDimensions(FTableViewDimensions *this,EOrientation param_1)

{
  this->Orientation = param_1;
  this->ScrollAxis = 0.0;
  this->LineAxis = 0.0;
  return this;
}

// FTableViewDimensions @ 142a17e90

FTableViewDimensions * __thiscall
FTableViewDimensions::FTableViewDimensions
          (FTableViewDimensions *this,EOrientation param_1,FDeprecateVector2DParameter *param_2)

{
  this->Orientation = param_1;
  this->ScrollAxis = 0.0;
  this->LineAxis = 0.0;
  if (param_1 == Orient_Vertical) {
    this->LineAxis = *(float *)param_2;
    this->ScrollAxis = *(float *)&param_2->field_0x4;
    return this;
  }
  this->ScrollAxis = *(float *)param_2;
  this->LineAxis = *(float *)&param_2->field_0x4;
  return this;
}

// FTableViewDimensions @ 142a17ed0

FTableViewDimensions * __thiscall
FTableViewDimensions::FTableViewDimensions
          (FTableViewDimensions *this,EOrientation param_1,float param_2,float param_3)

{
  this->Orientation = param_1;
  if (param_1 == Orient_Vertical) {
    this->LineAxis = param_2;
    this->ScrollAxis = param_3;
    return this;
  }
  this->LineAxis = param_3;
  this->ScrollAxis = param_2;
  return this;
}

