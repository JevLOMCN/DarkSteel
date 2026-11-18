// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FastConeAABBIntersection<FStaticSpatialIndex::FSpatialIndexProfile2D> @ 148a78b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FStaticSpatialIndex::FastConeAABBIntersection<FStaticSpatialIndex::FSpatialIndexProfile2D>
          (TVector2<double> *param_1,double param_2,TVector2<double> *param_3,double param_4,
          double param_5,double param_6,TBox2<double> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_7->Max).field0_0x0._s_0.Y;
  dVar2 = (param_7->Max).field0_0x0._s_0.X;
  dVar3 = (param_7->Min).field0_0x0._s_0.Y;
  dVar12 = dVar1;
  if (dVar10 <= dVar1) {
    dVar12 = dVar10;
  }
  dVar4 = (param_7->Min).field0_0x0._s_0.X;
  dVar13 = dVar2;
  if (dVar11 <= dVar2) {
    dVar13 = dVar11;
  }
  if (dVar12 <= dVar3) {
    dVar12 = dVar3;
  }
  if (dVar13 <= dVar4) {
    dVar13 = dVar4;
  }
  if (param_2 < (dVar12 - dVar10) * (dVar12 - dVar10) + (dVar13 - dVar11) * (dVar13 - dVar11)) {
LAB_148a78fc9:
    bVar7 = false;
  }
  else {
    dVar4 = dVar4 - dVar11;
    dVar3 = dVar3 - dVar10;
    dVar10 = dVar4 * dVar4 + dVar3 * dVar3;
    if (dVar10 <= __real_3e45798ee0000000) {
      dVar10 = 0.0;
      dVar12 = 0.0;
    }
    else {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar10);
      dVar10 = dVar4 * dVar12;
      dVar12 = dVar3 * dVar12;
    }
    dVar2 = dVar2 - dVar11;
    dVar11 = dVar2 * dVar2 + dVar3 * dVar3;
    if (dVar11 <= __real_3e45798ee0000000) {
      dVar11 = 0.0;
      dVar3 = 0.0;
    }
    else {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar11);
      dVar11 = dVar2 * dVar13;
      dVar3 = dVar3 * dVar13;
    }
    dVar1 = dVar1 - (param_1->field0_0x0)._s_0.Y;
    dVar13 = dVar1 * dVar1 + dVar2 * dVar2;
    if (dVar13 <= __real_3e45798ee0000000) {
      dVar2 = 0.0;
      dVar13 = 0.0;
    }
    else {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      dVar2 = dVar2 * dVar13;
      dVar13 = dVar1 * dVar13;
    }
    dVar15 = dVar1 * dVar1 + dVar4 * dVar4;
    if (dVar15 <= __real_3e45798ee0000000) {
      dVar4 = 0.0;
      dVar1 = 0.0;
    }
    else {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
      dVar4 = dVar4 * dVar15;
      dVar1 = dVar1 * dVar15;
    }
    if (__real_4066800000000000 < param_4) {
      dVar15 = (param_3->field0_0x0)._s_0.X;
      dVar5 = (param_3->field0_0x0)._s_0.Y;
      if ((((dVar10 * dVar15 + dVar12 * dVar5 < 0.0) && (dVar15 * dVar11 + dVar5 * dVar3 < 0.0)) &&
          (dVar15 * dVar2 + dVar5 * dVar13 < 0.0)) && (dVar15 * dVar4 + dVar5 * dVar1 < 0.0)) {
        dVar9 = sin((__real_4076800000000000 - param_4) * ___real_3f81df46aaaaaaab);
        uVar17 = SUB84(dVar15,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar18 = (uint)((ulonglong)dVar15 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar19 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar20 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        dVar15 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000);
        dVar12 = dVar12 * (double)CONCAT44(uVar18,uVar17) - dVar10 * (double)CONCAT44(uVar20,uVar19)
        ;
        dVar11 = dVar3 * (double)CONCAT44(uVar18,uVar17) - dVar11 * (double)CONCAT44(uVar20,uVar19);
        dVar2 = dVar13 * (double)CONCAT44(uVar18,uVar17) - dVar2 * (double)CONCAT44(uVar20,uVar19);
        dVar10 = dVar1 * (double)CONCAT44(uVar18,uVar17) - dVar4 * (double)CONCAT44(uVar20,uVar19);
        if (((((dVar15 < dVar12) && (dVar15 < dVar11)) &&
             ((dVar15 < dVar2 && ((dVar15 < dVar10 && (dVar12 < dVar9)))))) && (dVar11 < dVar9)) &&
           (dVar2 < dVar9)) {
          bVar7 = dVar10 < dVar9;
          goto LAB_148a78fc3;
        }
      }
    }
    else {
      dVar15 = (param_3->field0_0x0)._s_0.Y;
      dVar5 = (param_3->field0_0x0)._s_0.X;
      dVar14 = dVar12 * dVar5 - dVar10 * dVar15;
      dVar16 = dVar3 * dVar5 - dVar11 * dVar15;
      dVar9 = dVar13 * dVar5 - dVar2 * dVar15;
      dVar6 = dVar1 * dVar5 - dVar4 * dVar15;
      dVar8 = (double)CONCAT44((uint)((ulonglong)param_5 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(param_5,0) ^ (uint)__xmm_80000000000000008000000000000000);
      if (((((dVar14 < dVar8) && (dVar16 < dVar8)) && (dVar9 < dVar8)) && (dVar6 < dVar8)) ||
         (((param_5 < dVar14 && (param_5 < dVar16)) && ((param_5 < dVar9 && (param_5 < dVar6))))))
      goto LAB_148a78fc9;
      if (((dVar10 * dVar5 + dVar12 * dVar15 < 0.0) && (dVar11 * dVar5 + dVar3 * dVar15 < 0.0)) &&
         (dVar2 * dVar5 + dVar13 * dVar15 < 0.0)) {
        bVar7 = dVar4 * dVar5 + dVar1 * dVar15 < 0.0;
LAB_148a78fc3:
        if (bVar7) goto LAB_148a78fc9;
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

// FastConeAABBIntersection<FStaticSpatialIndex::FSpatialIndexProfile3D> @ 148a79020

bool __cdecl
FStaticSpatialIndex::FastConeAABBIntersection<FStaticSpatialIndex::FSpatialIndexProfile3D>
          (TVector<double> *param_1,double param_2,TVector<double> *param_3,double param_4,
          double param_5,double param_6,TBox<double> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar12 = (param_1->field0_0x0)._s_0.Z;
  dVar15 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_7->Max).field0_0x0._s_0.Y;
  dVar3 = (param_7->Max).field0_0x0._s_0.X;
  dVar4 = (param_7->Max).field0_0x0._s_0.Z;
  dVar9 = dVar2;
  if (dVar15 <= dVar2) {
    dVar9 = dVar15;
  }
  dVar5 = (param_7->Min).field0_0x0._s_0.Y;
  dVar11 = (param_7->Min).field0_0x0._s_0.X;
  dVar6 = dVar3;
  if (dVar1 <= dVar3) {
    dVar6 = dVar1;
  }
  dVar16 = (param_7->Min).field0_0x0._s_0.Z;
  if (dVar9 <= dVar5) {
    dVar9 = dVar5;
  }
  dVar8 = dVar4;
  if (dVar12 <= dVar4) {
    dVar8 = dVar12;
  }
  if (dVar6 <= dVar11) {
    dVar6 = dVar11;
  }
  if (dVar8 <= dVar16) {
    dVar8 = dVar16;
  }
  auVar13._0_8_ = (dVar6 - dVar1) * (dVar6 - dVar1);
  auVar13._8_8_ = 0;
  if ((dVar9 - dVar15) * (dVar9 - dVar15) + auVar13._0_8_ + (dVar8 - dVar12) * (dVar8 - dVar12) <=
      param_2) {
    dVar9 = (param_3->field0_0x0)._s_0.X;
    dVar6 = (param_3->field0_0x0)._s_0.Y;
    dVar8 = ((dVar2 - dVar5) * (dVar2 - dVar5) + (dVar3 - dVar11) * (dVar3 - dVar11) +
            (dVar4 - dVar16) * (dVar4 - dVar16)) * __real_3fd0000000000000;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar8;
    auVar13 = sqrtpd(auVar13,auVar7);
    dVar10 = auVar13._0_8_ * (__real_3ff0000000000000 / param_5);
    dVar3 = (dVar3 + dVar11) * __real_3fe0000000000000;
    dVar14 = (dVar2 + dVar5) * __real_3fe0000000000000;
    dVar2 = (dVar4 + dVar16) * __real_3fe0000000000000;
    dVar4 = dVar3 - (dVar1 - dVar10 * dVar9);
    dVar16 = dVar14 - (dVar15 - dVar10 * (param_3->field0_0x0)._s_0.Y);
    dVar5 = dVar2 - (dVar12 - dVar10 * (param_3->field0_0x0)._s_0.Z);
    dVar11 = dVar16 * dVar6 + dVar4 * dVar9 + dVar5 * (param_3->field0_0x0)._s_0.Z;
    if ((0.0 < dVar11) &&
       ((dVar16 * dVar16 + dVar4 * dVar4 + dVar5 * dVar5) * param_6 * param_6 <= dVar11 * dVar11)) {
      dVar14 = dVar14 - dVar15;
      dVar3 = dVar3 - dVar1;
      dVar2 = dVar2 - dVar12;
      dVar12 = dVar14 * dVar14 + dVar3 * dVar3 + dVar2 * dVar2;
      dVar15 = dVar14 * dVar6 + dVar3 * dVar9 + dVar2 * (param_3->field0_0x0)._s_0.Z;
      if ((dVar15 < __real_8000000000000000) && (param_5 * param_5 * dVar12 <= dVar15 * dVar15)) {
        return dVar12 <= dVar8;
      }
      return true;
    }
  }
  return false;
}

