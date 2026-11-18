// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Compute1DGaussianFilterKernel @ 14486a920

uint __cdecl
FGaussianFiltering::Compute1DGaussianFilterKernel
          (TVector2<double> *param_1,uint param_2,uint param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  double *pdVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_bf000000;
  fVar18 = __real_3f800000;
  uVar9 = 0;
  uVar5 = 0;
  fVar17 = 0.0;
  fVar16 = (float)param_2;
  if ((float)param_3 <= (float)param_2) {
    fVar16 = (float)param_3;
  }
  if (fVar16 <= __real_3f800000) {
    fVar16 = __real_3f800000;
  }
  iVar6 = (int)(float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
  fVar14 = (float)iVar6;
  if (fVar14 <= fVar16) {
    iVar10 = iVar6 + 1;
    fVar15 = __real_3f800000 / param_4;
    uVar4 = uVar9;
    do {
      fVar11 = expf((float)((uint)(fVar14 * fVar14) & uVar8) * fVar15 * fVar15 * fVar2);
      fVar12 = 0.0;
      if (fVar14 != fVar16) {
        fVar12 = expf((float)((uint)((float)iVar10 * (float)iVar10) & uVar8) * fVar15 *
                      fVar15 * fVar2);
      }
      fVar11 = fVar12 + fVar11;
      iVar6 = iVar6 + 2;
      uVar5 = (int)uVar4 + 1;
      iVar10 = iVar10 + 2;
      fVar12 = fVar12 / fVar11 + fVar14;
      fVar14 = (float)iVar6;
      param_1[uVar4].field0_0x0._s_0.Y = (double)fVar11;
      fVar17 = fVar17 + fVar11;
      param_1[uVar4].field0_0x0._s_0.X = (double)fVar12;
      uVar4 = (ulonglong)uVar5;
    } while (fVar14 <= fVar16);
  }
  fVar18 = fVar18 / fVar17;
  if (uVar5 != 0) {
    if (3 < uVar5) {
      uVar4 = uVar9;
      uVar8 = 2;
      do {
        uVar7 = (int)uVar4 + 4;
        uVar9 = (ulonglong)uVar7;
        dVar13 = param_1[uVar4].field0_0x0._s_0.Y;
        param_1[uVar8 - 1].field0_0x0._s_0.Y = param_1[uVar8 - 1].field0_0x0._s_0.Y * (double)fVar18
        ;
        param_1[uVar4].field0_0x0._s_0.Y = dVar13 * (double)fVar18;
        dVar13 = param_1[uVar8 + 1].field0_0x0._s_0.Y;
        param_1[uVar8].field0_0x0._s_0.Y = param_1[uVar8].field0_0x0._s_0.Y * (double)fVar18;
        param_1[uVar8 + 1].field0_0x0._s_0.Y = dVar13 * (double)fVar18;
        uVar4 = uVar9;
        uVar8 = uVar8 + 4;
      } while (uVar7 < (uVar5 & 0xfffffffc));
    }
    uVar8 = (uint)uVar9;
    if (uVar8 < uVar5) {
      dVar13 = (double)fVar18;
      if (3 < uVar5 - uVar8) {
        lVar1 = uVar9 + 1;
        uVar7 = ((uVar5 - uVar8) - 4 >> 2) + 1;
        uVar4 = (ulonglong)uVar7;
        uVar8 = uVar8 + uVar7 * 4;
        uVar9 = uVar9 + (ulonglong)uVar7 * 4;
        pdVar3 = &param_1[lVar1].field0_0x0._s_0.Y;
        do {
          pdVar3[-2] = dVar13 * pdVar3[-2];
          *pdVar3 = dVar13 * *pdVar3;
          pdVar3[2] = dVar13 * pdVar3[2];
          pdVar3[4] = dVar13 * pdVar3[4];
          uVar4 = uVar4 - 1;
          pdVar3 = pdVar3 + 8;
        } while (uVar4 != 0);
        if (uVar5 <= uVar8) {
          return uVar5;
        }
      }
      uVar4 = (ulonglong)(uVar5 - uVar8);
      pdVar3 = &param_1[uVar9].field0_0x0._s_0.Y;
      do {
        *pdVar3 = dVar13 * *pdVar3;
        uVar4 = uVar4 - 1;
        pdVar3 = pdVar3 + 2;
      } while (uVar4 != 0);
    }
  }
  return uVar5;
}

