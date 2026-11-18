// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateTangent @ 148142390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBeamParticleModifierPayloadData::UpdateTangent
          (FBeamParticleModifierPayloadData *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_b8;
  TQuat<double> local_98 [4];
  
  if (this->bModifyTangent != 0) {
    if (param_2) {
      dVar2 = (this->Tangent).field0_0x0._s_0.X;
      dVar6 = (this->Tangent).field0_0x0._s_0.Y;
      dVar1 = (this->Tangent).field0_0x0._s_0.Z;
    }
    else {
      local_b8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_b8._s_0.Y = _UNK_150689518;
      local_b8._s_0.Z = 0.0;
      UE::Math::TQuat<double>::FindBetweenNormals
                (local_98,(TVector<double> *)&local_b8._s_0,param_1);
      dVar2 = (this->Tangent).field0_0x0._s_0.X;
      dVar5 = (this->Tangent).field0_0x0._s_0.Y;
      dVar1 = (this->Tangent).field0_0x0._s_0.Z;
      dVar3 = dVar1 * local_98[0].Y - dVar5 * local_98[0].Z;
      dVar3 = dVar3 + dVar3;
      dVar4 = dVar2 * local_98[0].Z - dVar1 * local_98[0].X;
      dVar4 = dVar4 + dVar4;
      dVar6 = dVar5 * local_98[0].X - dVar2 * local_98[0].Y;
      dVar6 = dVar6 + dVar6;
      dVar2 = (dVar6 * local_98[0].Y - dVar4 * local_98[0].Z) + dVar3 * local_98[0].W + dVar2;
      dVar1 = (dVar4 * local_98[0].X - dVar3 * local_98[0].Y) + dVar6 * local_98[0].W + dVar1;
      dVar6 = (dVar3 * local_98[0].Z - dVar6 * local_98[0].X) + dVar4 * local_98[0].W + dVar5;
    }
    dVar3 = (param_1->field0_0x0)._s_0.X;
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_1->field0_0x0)._s_0.Z;
    if (this->bScaleTangent == 0) {
      dVar3 = dVar3 + dVar2;
      dVar4 = dVar4 + dVar6;
      dVar5 = dVar5 + dVar1;
    }
    else {
      dVar3 = dVar3 * dVar2;
      dVar4 = dVar4 * dVar6;
      dVar5 = dVar5 * dVar1;
    }
    (param_1->field0_0x0)._s_0.Z = dVar5;
    (param_1->field0_0x0)._s_0.Y = dVar4;
    (param_1->field0_0x0)._s_0.X = dVar3;
  }
  return;
}

