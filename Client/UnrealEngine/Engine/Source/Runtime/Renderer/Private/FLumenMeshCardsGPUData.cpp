// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FillData @ 144c41020

void __cdecl FLumenMeshCardsGPUData::FillData(FLumenMeshCards *param_1,TVector4<float> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  dVar1 = (param_1->LocalToWorld).M[3][0];
  dVar2 = (param_1->LocalToWorld).M[3][1];
  dVar3 = (param_1->LocalToWorld).M[3][2];
  fVar14 = (float)dVar1;
  fVar15 = (float)dVar2;
  (param_2->field0_0x0)._s_0.X = fVar14;
  (param_2->field0_0x0)._s_0.Y = fVar15;
  fVar16 = (float)dVar3;
  (param_2->field0_0x0)._s_0.Z = fVar16;
  (param_2->field0_0x0)._s_0.W = 1.0;
  bVar10 = param_1->bMostlyTwoSided;
  dVar4 = (param_1->WorldToLocalRotation).M[0][1];
  dVar5 = (param_1->WorldToLocalRotation).M[0][2];
  bVar11 = param_1->bHeightfield;
  dVar6 = (param_1->WorldToLocalRotation).M[1][0];
  uVar13 = param_1->NumCards;
  dVar7 = (param_1->WorldToLocalRotation).M[1][1];
  dVar8 = (param_1->WorldToLocalRotation).M[1][2];
  dVar9 = (param_1->WorldToLocalRotation).M[2][1];
  param_2[1].field0_0x0._s_0.X = (float)(param_1->WorldToLocalRotation).M[0][0];
  param_2[1].field0_0x0._s_0.Y = (float)dVar4;
  param_2[1].field0_0x0._s_0.Z = (float)dVar5;
  param_2[1].field0_0x0._s_0.W = (float)(dVar1 - (double)fVar14);
  dVar1 = (param_1->WorldToLocalRotation).M[2][0];
  dVar4 = (param_1->WorldToLocalRotation).M[2][2];
  fVar14 = (float)param_1->CardLookup[0];
  fVar12 = (float)param_1->FirstCardIndex;
  param_2[2].field0_0x0._s_0.X = (float)dVar6;
  param_2[2].field0_0x0._s_0.Y = (float)dVar7;
  param_2[2].field0_0x0._s_0.Z = (float)dVar8;
  param_2[2].field0_0x0._s_0.W = (float)(dVar2 - (double)fVar15);
  param_2[3].field0_0x0._s_0.X = (float)dVar1;
  param_2[3].field0_0x0._s_0.Y = (float)dVar9;
  param_2[3].field0_0x0._s_0.Z = (float)dVar4;
  param_2[3].field0_0x0._s_0.W = (float)(dVar3 - (double)fVar16);
  fVar15 = (float)param_1->CardLookup[1];
  param_2[4].field0_0x0._s_0.X = fVar12;
  param_2[4].field0_0x0._s_0.Y =
       (float)(-(uint)(bVar10 != false) & 0x20000 | -(uint)(bVar11 != false) & 0x10000 |
              (uint)(ushort)uVar13);
  param_2[4].field0_0x0._s_0.Z = fVar14;
  param_2[4].field0_0x0._s_0.W = fVar15;
  fVar14 = (float)param_1->CardLookup[3];
  fVar12 = (float)param_1->CardLookup[4];
  fVar15 = (float)param_1->CardLookup[5];
  param_2[5].field0_0x0._s_0.X = (float)param_1->CardLookup[2];
  param_2[5].field0_0x0._s_0.Y = fVar14;
  param_2[5].field0_0x0._s_0.Z = fVar12;
  param_2[5].field0_0x0._s_0.W = fVar15;
  return;
}

