// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ComputeResult @ 1433925f0

double __thiscall
UE::Geometry::TDistTriangle3Triangle3<double>::ComputeResult(TDistTriangle3Triangle3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  longlong lVar13;
  bool bVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong local_res8;
  TVector<double>_u_0 TStack_2d0;
  double local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  TVector<double>_u_0 TStack_298;
  double local_280;
  TVector<double>_u_0 local_278;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  undefined8 local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  
  uVar12 = __real_bff0000000000000;
  dVar11 = __real_3fe0000000000000;
  dVar10 = __real_3e45798ee2308c3a;
  dVar9 = __real_3ff0000000000000;
  dVar1 = this->DistanceSquared;
  uVar21 = SUB84(dVar1,0);
  uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 < 0.0) {
    pdVar16 = &this->Triangle[0].V[0].field0_0x0._s_0.Y;
    lVar19 = 3;
    lVar18 = 3;
    iVar20 = 0;
    uVar21 = (undefined4)__real_7fefffffffffffff;
    uVar22 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    lVar15 = 0x30;
    local_res8 = 2;
    lVar13 = 0;
    do {
      lVar17 = lVar13;
      dVar1 = ((TVector<double>_u_0_s_0 *)(pdVar16 + -1))->X;
      dVar2 = *pdVar16;
      dVar3 = *(double *)((longlong)&this->Triangle[0].V[0].field0_0x0 + lVar15);
      dVar4 = pdVar16[1];
      dVar5 = *(double *)((longlong)&this->Triangle[0].V[0].field0_0x0 + lVar15 + 8);
      TStack_2d0._s_0.X = dVar1 - *(double *)((longlong)&this->Triangle[0].V[0].field0_0x0 + lVar15)
      ;
      TStack_2d0._s_0.Y =
           dVar2 - *(double *)((longlong)&this->Triangle[0].V[0].field0_0x0 + lVar15 + 8);
      local_2b8 = 0.0;
      dVar6 = *(double *)((longlong)&this->Triangle[0].V[0].field0_0x0 + lVar15 + 0x10);
      TStack_2d0._s_0.Z =
           dVar4 - *(double *)((longlong)&this->Triangle[0].V[0].field0_0x0 + lVar15 + 0x10);
      dVar8 = Normalize<double>((TVector<double> *)&TStack_2d0._s_0,0.0);
      local_230 = this->Triangle[1].V[0].field0_0x0._s_0.Z;
      dStack_228 = this->Triangle[1].V[1].field0_0x0._s_0.X;
      local_258 = TStack_2d0._s_0.Y;
      dStack_250 = TStack_2d0._s_0.Z;
      local_240 = this->Triangle[1].V[0].field0_0x0._s_0.X;
      dStack_238 = this->Triangle[1].V[0].field0_0x0._s_0.Y;
      dVar8 = dVar8 * dVar11;
      local_220 = this->Triangle[1].V[1].field0_0x0._s_0.Y;
      dStack_218 = this->Triangle[1].V[1].field0_0x0._s_0.Z;
      local_210 = this->Triangle[1].V[2].field0_0x0._s_0.X;
      dStack_208 = this->Triangle[1].V[2].field0_0x0._s_0.Y;
      local_200 = this->Triangle[1].V[2].field0_0x0._s_0.Z;
      local_1f8 = uVar12;
      dStack_260 = TStack_2d0._s_0.X;
      local_2b8 = dVar8;
      local_278._s_0.X = (dVar1 + dVar3) * dVar11;
      local_278._s_0.Y = (dVar2 + dVar5) * dVar11;
      local_278._s_0.Z = (dVar4 + dVar6) * dVar11;
      local_248 = dVar8;
      dVar1 = TDistSegment3Triangle3<double>::GetSquared
                        ((TDistSegment3Triangle3<double> *)&local_278._s_0);
      if (dVar1 < (double)CONCAT44(uVar22,uVar21)) {
        this->TriangleClosest[0].field0_0x0._s_0.X = local_1b8;
        this->TriangleClosest[0].field0_0x0._s_0.Y = dStack_1b0;
        this->TriangleClosest[1].field0_0x0._s_0.X = local_1e8;
        this->TriangleClosest[1].field0_0x0._s_0.Y = dStack_1e0;
        this->TriangleClosest[0].field0_0x0._s_0.Z = local_1a8;
        this->TriangleClosest[1].field0_0x0._s_0.Z = local_1d8;
        dVar2 = (dVar9 - local_1f0 / dVar8) * dVar11;
        this->TriangleBaryCoords[0].field0_0x0.XYZ[local_res8] = dVar2;
        this->TriangleBaryCoords[0].field0_0x0.XYZ[lVar17] = dVar9 - dVar2;
        if ((2 < (ulonglong)(lVar18 - local_res8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          dVar1 = (double)(*pcVar7)();
          return dVar1;
        }
        *(undefined8 *)((longlong)this + (lVar18 - local_res8) * 8 + 0x38) = 0;
        this->TriangleBaryCoords[1].field0_0x0._s_0.X = local_1d0;
        this->TriangleBaryCoords[1].field0_0x0._s_0.Y = dStack_1c8;
        this->TriangleBaryCoords[1].field0_0x0._s_0.Z = local_1c0;
        uVar21 = SUB84(dVar1,0);
        uVar22 = (int)((ulonglong)dVar1 >> 0x20);
        if (dVar1 <= dVar10) goto LAB_143392b75;
      }
      lVar15 = (-0x70 - (longlong)this) + (longlong)pdVar16;
      pdVar16 = pdVar16 + 3;
      iVar20 = iVar20 + 1;
      lVar18 = lVar18 + -1;
      lVar13 = lVar17 + 1;
      local_res8 = lVar17;
    } while (iVar20 < 3);
    iVar20 = 0;
    pdVar16 = &this->Triangle[1].V[0].field0_0x0._s_0.Z;
    lVar18 = 0x30;
    lVar13 = 0;
    lVar15 = 2;
    do {
      lVar17 = lVar13;
      dVar1 = *(double *)((longlong)&this->Triangle[1].V[0].field0_0x0 + lVar18);
      dVar2 = *(double *)((longlong)&this->Triangle[1].V[0].field0_0x0 + lVar18 + 8);
      dVar3 = *(double *)((longlong)&this->Triangle[1].V[0].field0_0x0 + lVar18 + 0x10);
      TStack_298._s_0.X = ((TVector<double>_u_0_s_0 *)(pdVar16 + -2))->X - dVar1;
      local_280 = 0.0;
      local_2b0 = (((TVector<double>_u_0_s_0 *)(pdVar16 + -2))->X + dVar1) * dVar11;
      TStack_298._s_0.Y = pdVar16[-1] - dVar2;
      dStack_2a8 = (pdVar16[-1] + dVar2) * dVar11;
      TStack_298._s_0.Z = *pdVar16 - dVar3;
      local_2a0 = (*pdVar16 + dVar3) * dVar11;
      dVar1 = Normalize<double>((TVector<double> *)&TStack_298._s_0,0.0);
      local_198._s_0.X = local_2b0;
      local_198._s_0.Y = dStack_2a8;
      local_150 = this->Triangle[0].V[0].field0_0x0._s_0.Z;
      dStack_148 = this->Triangle[0].V[1].field0_0x0._s_0.X;
      local_178 = TStack_298._s_0.Y;
      dStack_170 = TStack_298._s_0.Z;
      local_160 = this->Triangle[0].V[0].field0_0x0._s_0.X;
      dStack_158 = this->Triangle[0].V[0].field0_0x0._s_0.Y;
      dVar1 = dVar1 * dVar11;
      local_140 = this->Triangle[0].V[1].field0_0x0._s_0.Y;
      dStack_138 = this->Triangle[0].V[1].field0_0x0._s_0.Z;
      local_130 = this->Triangle[0].V[2].field0_0x0._s_0.X;
      dStack_128 = this->Triangle[0].V[2].field0_0x0._s_0.Y;
      local_120 = this->Triangle[0].V[2].field0_0x0._s_0.Z;
      local_118 = uVar12;
      local_198._s_0.Z = local_2a0;
      dStack_180 = TStack_298._s_0.X;
      local_280 = dVar1;
      local_168 = dVar1;
      dVar2 = TDistSegment3Triangle3<double>::GetSquared
                        ((TDistSegment3Triangle3<double> *)&local_198._s_0);
      if (dVar2 < (double)CONCAT44(uVar22,uVar21)) {
        this->TriangleClosest[0].field0_0x0._s_0.X = local_d8;
        this->TriangleClosest[0].field0_0x0._s_0.Y = dStack_d0;
        this->TriangleClosest[0].field0_0x0._s_0.Z = local_c8;
        this->TriangleClosest[1].field0_0x0._s_0.X = local_108;
        this->TriangleClosest[1].field0_0x0._s_0.Y = dStack_100;
        this->TriangleClosest[1].field0_0x0._s_0.Z = local_f8;
        dVar1 = (dVar9 - local_110 / dVar1) * dVar11;
        this->TriangleBaryCoords[1].field0_0x0.XYZ[lVar15] = dVar1;
        this->TriangleBaryCoords[1].field0_0x0.XYZ[lVar17] = dVar9 - dVar1;
        if ((2 < (ulonglong)(lVar19 - lVar15)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          dVar1 = (double)(*pcVar7)();
          return dVar1;
        }
        *(undefined8 *)((longlong)this + (lVar19 - lVar15) * 8 + 0x50) = 0;
        this->TriangleBaryCoords[0].field0_0x0._s_0.X = local_f0;
        this->TriangleBaryCoords[0].field0_0x0._s_0.Y = dStack_e8;
        this->TriangleBaryCoords[0].field0_0x0._s_0.Z = local_e0;
        uVar21 = SUB84(dVar2,0);
        uVar22 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= dVar10) goto LAB_143392b75;
      }
      lVar18 = (-0xc0 - (longlong)this) + (longlong)pdVar16;
      iVar20 = iVar20 + 1;
      pdVar16 = pdVar16 + 3;
      lVar19 = lVar19 + -1;
      lVar13 = lVar17 + 1;
      lVar15 = lVar17;
    } while (iVar20 < 3);
    this->DistanceSquared = (double)CONCAT44(uVar22,uVar21);
  }
LAB_143392b62:
  return (double)CONCAT44(uVar22,uVar21);
LAB_143392b75:
  this->DistanceSquared = 0.0;
  uVar21 = 0;
  uVar22 = 0;
  goto LAB_143392b62;
}

