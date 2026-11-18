// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// ClampMinimumScale @ 14cc48750

void __thiscall
UE::Geometry::TTransformSRT3<double>::ClampMinimumScale(TTransformSRT3<double> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar1 = *(double *)&(this->Scale3D).field0_0x0;
  uVar6 = SUB84(param_1,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (uint)((ulonglong)param_1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar3 = (double)CONCAT44(uVar7,uVar6);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < param_1) {
    dVar2 = param_1;
    if (dVar1 < 0.0) {
      dVar2 = (double)CONCAT44(uVar7,uVar6);
    }
    (this->Scale3D).field0_0x0._s_0.X = dVar2;
  }
  dVar1 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 8);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar5,SUB84(dVar1,0) & uVar4) < param_1) {
    dVar2 = param_1;
    if (dVar1 < 0.0) {
      dVar2 = dVar3;
    }
    (this->Scale3D).field0_0x0._s_0.Y = dVar2;
  }
  dVar1 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 0x10);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar5,SUB84(dVar1,0) & uVar4) < param_1) {
    if (0.0 <= dVar1) {
      dVar3 = param_1;
    }
    (this->Scale3D).field0_0x0._s_0.Z = dVar3;
  }
  return;
}

