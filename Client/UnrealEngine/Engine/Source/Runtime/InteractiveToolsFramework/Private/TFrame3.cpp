// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// TFrame3<double> @ 149682370

TFrame3<double> * __thiscall
UE::Geometry::TFrame3<double>::TFrame3<double>
          (TFrame3<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  TQuaternion<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  (this->Rotation).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).field0_0x0._s_0.Y = 0.0;
  (this->Rotation).field0_0x0._s_0.X = 0.0;
  (this->Rotation).field0_0x0._s_0.W = 1.0;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_58._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_3->field0_0x0)._s_0.X;
  local_58._s_0.Z = (param_4->field0_0x0)._s_0.X;
  local_38 = (param_3->field0_0x0)._s_0.Y;
  local_40 = (param_2->field0_0x0)._s_0.Y;
  local_28 = (param_2->field0_0x0)._s_0.Z;
  local_30 = (param_4->field0_0x0)._s_0.Y;
  local_18 = (param_4->field0_0x0)._s_0.Z;
  local_20 = (param_3->field0_0x0)._s_0.Z;
  local_78._s_0.W = __real_3ff0000000000000;
  local_78._s_0.X = 0.0;
  local_78._s_0.Y = 0.0;
  local_78._s_0.Z = 0.0;
  TQuaternion<double>::SetFromRotationMatrix
            ((TQuaternion<double> *)&local_78._s_0,(TMatrix3<double> *)&local_58._s_0);
  (this->Rotation).field0_0x0._s_0.X = local_78._s_0.X;
  (this->Rotation).field0_0x0._s_0.Y = local_78._s_0.Y;
  (this->Rotation).field0_0x0._s_0.Z = local_78._s_0.Z;
  (this->Rotation).field0_0x0._s_0.W = local_78._s_0.W;
  return this;
}

