// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// DistanceSquared @ 14cc533b0

double __thiscall
UE::Geometry::TSegment2<double>::DistanceSquared
          (TSegment2<double> *this,TVector2<double> *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ((param_1->field0_0x0)._s_0.X - (this->Center).field0_0x0._s_0.X) *
          (this->Direction).field0_0x0._s_0.X +
          ((param_1->field0_0x0)._s_0.Y - (this->Center).field0_0x0._s_0.Y) *
          (this->Direction).field0_0x0._s_0.Y;
  *param_2 = dVar3;
  dVar1 = this->Extent;
  if (dVar1 <= dVar3) {
    *param_2 = dVar1;
    dVar1 = (this->Extent * (this->Direction).field0_0x0._s_0.Y + (this->Center).field0_0x0._s_0.Y)
            - (param_1->field0_0x0)._s_0.Y;
    dVar3 = (this->Extent * (this->Direction).field0_0x0._s_0.X + (this->Center).field0_0x0._s_0.X)
            - (param_1->field0_0x0)._s_0.X;
    return dVar1 * dVar1 + dVar3 * dVar3;
  }
  dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  if (dVar3 <= dVar1) {
    *param_2 = dVar1;
    dVar3 = ((this->Center).field0_0x0._s_0.X - this->Extent * (this->Direction).field0_0x0._s_0.X)
            - (param_1->field0_0x0)._s_0.X;
    dVar1 = ((this->Center).field0_0x0._s_0.Y - this->Extent * (this->Direction).field0_0x0._s_0.Y)
            - (param_1->field0_0x0)._s_0.Y;
    return dVar1 * dVar1 + dVar3 * dVar3;
  }
  dVar2 = (param_1->field0_0x0)._s_0.X -
          (dVar3 * (this->Direction).field0_0x0._s_0.X + (this->Center).field0_0x0._s_0.X);
  dVar1 = (param_1->field0_0x0)._s_0.Y -
          (dVar3 * (this->Direction).field0_0x0._s_0.Y + (this->Center).field0_0x0._s_0.Y);
  return dVar1 * dVar1 + dVar2 * dVar2;
}

