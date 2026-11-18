// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FCompressedTransform @ 1448eca60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCompressedTransform * __thiscall
FCompressedTransform::FCompressedTransform(FCompressedTransform *this,FRenderTransform *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_d0;
  float local_c4;
  float local_b8;
  
  fVar14 = __real_3f800000;
  *(undefined8 *)&(this->Translation).field0_0x0 = *(undefined8 *)&(param_1->Origin).field0_0x0;
  (this->Translation).field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  fVar4 = __real_3f000000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar1 = *(undefined8 *)&param_1->TransformRows[0].field0_0x0;
  fVar7 = param_1->TransformRows[0].field0_0x0._s_0.Z;
  fVar21 = (float)((ulonglong)uVar1 >> 0x20);
  local_d0 = (float)uVar1;
  fVar18 = SQRT(fVar21 * fVar21 + local_d0 * local_d0 + fVar7 * fVar7);
  fVar20 = fVar14;
  if (fVar18 != 0.0) {
    fVar20 = fVar18;
  }
  fVar20 = fVar14 / fVar20;
  local_d0 = fVar20 * local_d0;
  fVar12 = param_1->TransformRows[1].field0_0x0._s_0.Z;
  fVar21 = fVar20 * fVar21;
  uVar1 = *(undefined8 *)&param_1->TransformRows[1].field0_0x0;
  fVar10 = (float)((ulonglong)uVar1 >> 0x20);
  local_c4 = (float)uVar1;
  fVar20 = fVar20 * fVar7;
  fVar19 = SQRT(fVar10 * fVar10 + local_c4 * local_c4 + fVar12 * fVar12);
  fVar7 = fVar14;
  if (fVar19 != 0.0) {
    fVar7 = fVar19;
  }
  fVar7 = fVar14 / fVar7;
  uVar1 = *(undefined8 *)&param_1->TransformRows[2].field0_0x0;
  local_b8 = (float)uVar1;
  fVar9 = (float)((ulonglong)uVar1 >> 0x20);
  fVar16 = param_1->TransformRows[2].field0_0x0._s_0.Z;
  fVar17 = SQRT(fVar9 * fVar9 + local_b8 * local_b8 + fVar16 * fVar16);
  fVar15 = fVar14;
  if (fVar17 != 0.0) {
    fVar15 = fVar17;
  }
  fVar15 = fVar14 / fVar15;
  local_b8 = fVar15 * local_b8;
  fVar16 = fVar15 * fVar16;
  fVar15 = fVar15 * fVar9;
  if (fVar16 < 0.0) {
    local_b8 = (float)((uint)local_b8 ^ __xmm_80000000800000008000000080000000);
    fVar15 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000);
    fVar16 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
    fVar17 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
  }
  fVar8 = fVar14 / ((float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                    (float)((uint)local_b8 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                   (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff));
  fVar11 = fVar14 / (fVar16 + fVar14);
  fVar13 = (float)((uint)(fVar15 * local_b8 * fVar11) ^ __xmm_80000000800000008000000080000000);
  fVar9 = ((fVar14 - local_b8 * local_b8 * fVar11) * local_d0 + fVar13 * fVar21) - local_b8 * fVar20
  ;
  fVar13 = ((fVar14 - fVar15 * fVar15 * fVar11) * fVar21 + fVar13 * local_d0) - fVar15 * fVar20;
  bVar2 = (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
          (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar11 = fVar13;
  if (!bVar2) {
    fVar11 = fVar9;
    fVar9 = fVar13;
  }
  if (fVar11 < 0.0) {
    fVar14 = __real_bf800000;
  }
  fVar9 = fVar14 * fVar9;
  fVar18 = fVar18 * fVar14;
  if ((fVar20 * fVar15 - fVar21 * fVar16) * local_c4 * fVar7 +
      (local_d0 * fVar16 - fVar20 * local_b8) * fVar10 * fVar7 +
      (fVar21 * local_b8 - local_d0 * fVar15) * fVar12 * fVar7 < 0.0) {
    fVar14 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
  }
  fVar21 = fVar9 * ___real_4735021f + __real_3f000000;
  fVar20 = (float)((uint)(fVar19 * fVar14) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar12 = (local_b8 - fVar15) * fVar8 * __real_477ffe00;
  this->Rotation[0] =
       (short)((int)ROUND((fVar15 + local_b8) * fVar8 * __real_477ffe00 + __real_3f000000) >> 1) +
       0x8000;
  fVar7 = (float)((uint)fVar18 & uVar3);
  if (fVar7 <= fVar20) {
    fVar7 = fVar20;
  }
  this->Rotation[1] = (short)((int)ROUND(fVar12 + fVar4) >> 1) + 0x8000;
  fVar20 = (float)((uint)fVar17 & uVar3);
  if (fVar7 <= fVar20) {
    fVar7 = fVar20;
  }
  this->Rotation[2] = (short)((int)ROUND(fVar21) >> 1) + 0xc000U & 0x7fff | (ushort)bVar2 * -0x8000;
  uVar5 = (ushort)((uint)fVar7 >> 0x17) & 0xff;
  uVar6 = uVar5 + 1;
  fVar20 = (float)((0xd - uVar6 & 0xff) << 0x17);
  if (((int)ROUND(fVar7 * fVar20 + fVar7 * fVar20 + fVar4) & 0xfffffffeU) == 0x10000) {
    uVar6 = uVar5 + 2;
    fVar20 = fVar20 * fVar4;
  }
  this->Scale_SharedExp[3] = uVar6;
  fVar18 = fVar18 * fVar20;
  fVar7 = fVar19 * fVar14 * fVar20;
  this->Scale_SharedExp[0] = (short)((int)ROUND(fVar18 + fVar18 + fVar4) >> 1) + 0x8000;
  this->Scale_SharedExp[1] = (short)((int)ROUND(fVar7 + fVar7 + fVar4) >> 1) + 0x8000;
  this->Scale_SharedExp[2] =
       (short)((int)ROUND(fVar17 * fVar20 + fVar17 * fVar20 + fVar4) >> 1) + 0x8000;
  return this;
}

