// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// TBoxSphereBounds<double,double> @ 1462ccae0

TBoxSphereBounds<double,double> * __thiscall
UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
          (TBoxSphereBounds<double,double> *this,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.Z;
  dVar2 = (param_1->Min).field0_0x0._s_0.Y;
  dVar3 = (param_1->Max).field0_0x0._s_0.Y - dVar2;
  dVar9 = ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar4 = (param_1->Max).field0_0x0._s_0.Z - dVar1;
  dVar8 = dVar3 * __real_3fe0000000000000;
  dVar7 = dVar4 * __real_3fe0000000000000;
  (this->Origin).field0_0x0._s_0.X = dVar9 + (param_1->Min).field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar8 + dVar2;
  (this->Origin).field0_0x0._s_0.Z = dVar7 + dVar1;
  (this->BoxExtent).field0_0x0._s_0.X = dVar9;
  (this->BoxExtent).field0_0x0._s_0.Y = dVar8;
  (this->BoxExtent).field0_0x0._s_0.Z = dVar7;
  dVar1 = (this->BoxExtent).field0_0x0._s_0.X;
  auVar5._0_8_ = dVar1 * dVar1;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (dVar4 * dVar4 + dVar3 * dVar3) * __real_3fd0000000000000 + auVar5._0_8_;
  auVar6 = sqrtpd(auVar5,auVar6);
  this->SphereRadius = auVar6._0_8_;
  return this;
}

