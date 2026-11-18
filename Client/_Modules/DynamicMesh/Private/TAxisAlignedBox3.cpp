// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Contain @ 14c727330

void __thiscall
UE::Geometry::TAxisAlignedBox3<double>::Contain
          (TAxisAlignedBox3<double> *this,TVector<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if (dVar2 < (this->Min).field0_0x0._s_0.X) {
    (this->Min).field0_0x0._s_0.X = dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if ((this->Max).field0_0x0._s_0.X <= dVar2 && dVar2 != (this->Max).field0_0x0._s_0.X) {
    (this->Max).field0_0x0._s_0.X = dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  if (dVar2 < (this->Min).field0_0x0._s_0.Y) {
    (this->Min).field0_0x0._s_0.Y = dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  pdVar1 = &(this->Max).field0_0x0._s_0.Y;
  if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
    (this->Max).field0_0x0._s_0.Y = dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  if (dVar2 < (this->Min).field0_0x0._s_0.Z) {
    (this->Min).field0_0x0._s_0.Z = dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  pdVar1 = &(this->Max).field0_0x0._s_0.Z;
  if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
    (this->Max).field0_0x0._s_0.Z = dVar2;
  }
  return;
}

