// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ComputeSquaredDistanceFromBoxToPoint @ 149340690

double __thiscall
UE::Math::TBoxSphereBounds<double,double>::ComputeSquaredDistanceFromBoxToPoint
          (TBoxSphereBounds<double,double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (this->BoxExtent).field0_0x0._s_0.X;
  dVar5 = 0.0;
  dVar8 = (this->BoxExtent).field0_0x0._s_0.Y;
  dVar6 = (this->BoxExtent).field0_0x0._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (this->Origin).field0_0x0._s_0.Z - dVar6;
  dVar6 = dVar6 + (this->Origin).field0_0x0._s_0.Z;
  dVar3 = (this->Origin).field0_0x0._s_0.Y - dVar8;
  dVar8 = dVar8 + (this->Origin).field0_0x0._s_0.Y;
  dVar4 = (this->Origin).field0_0x0._s_0.X - dVar7;
  dVar7 = dVar7 + (this->Origin).field0_0x0._s_0.X;
  if ((dVar1 < dVar4) || (dVar4 = dVar7, dVar7 < dVar1)) {
    dVar5 = (dVar1 - dVar4) * (dVar1 - dVar4);
  }
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  if ((dVar7 < dVar3) || (dVar3 = dVar8, dVar8 < dVar7)) {
    dVar5 = dVar5 + (dVar7 - dVar3) * (dVar7 - dVar3);
  }
  dVar7 = (param_1->field0_0x0)._s_0.Z;
  if ((dVar7 < dVar2) || (dVar2 = dVar6, dVar6 < dVar7)) {
    dVar5 = dVar5 + (dVar7 - dVar2) * (dVar7 - dVar2);
  }
  return dVar5;
}

