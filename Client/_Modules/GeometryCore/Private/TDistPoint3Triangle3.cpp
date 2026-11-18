// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ComputeResult @ 143391fe0

/* WARNING: Type propagation algorithm not settling */

double __thiscall
UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult(TDistPoint3Triangle3<double> *this)

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
  
  dVar10 = (this->Triangle).V[0].field0_0x0._s_0.X;
  dVar1 = (this->Triangle).V[0].field0_0x0._s_0.Y;
  dVar11 = (this->Triangle).V[0].field0_0x0._s_0.Z;
  dVar15 = (this->Point).field0_0x0._s_0.X - dVar10;
  dVar13 = (this->Point).field0_0x0._s_0.Z - dVar11;
  dVar14 = (this->Point).field0_0x0._s_0.Y - dVar1;
  dVar2 = (this->Triangle).V[2].field0_0x0._s_0.X - dVar10;
  dVar4 = (this->Triangle).V[2].field0_0x0._s_0.Y - dVar1;
  dVar1 = (this->Triangle).V[1].field0_0x0._s_0.Y - dVar1;
  dVar10 = (this->Triangle).V[1].field0_0x0._s_0.X - dVar10;
  dVar7 = (this->Triangle).V[1].field0_0x0._s_0.Z - dVar11;
  dVar11 = (this->Triangle).V[2].field0_0x0._s_0.Z - dVar11;
  dVar6 = dVar4 * dVar1 + dVar2 * dVar10 + dVar11 * dVar7;
  dVar5 = dVar4 * dVar4 + dVar2 * dVar2 + dVar11 * dVar11;
  dVar16 = dVar1 * dVar14 + dVar10 * dVar15 + dVar7 * dVar13;
  dVar12 = 0.0;
  uVar17 = SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar18 = (uint)((ulonglong)dVar16 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar16 = dVar4 * dVar14 + dVar2 * dVar15 + dVar11 * dVar13;
  dVar13 = (double)CONCAT44(uVar18,uVar17) + dVar6;
  uVar19 = SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar20 = (uint)((ulonglong)dVar16 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar16 = dVar1 * dVar1 + dVar10 * dVar10 + dVar7 * dVar7 + (double)CONCAT44(uVar18,uVar17);
  if ((double)CONCAT44(uVar18,uVar17) < 0.0) {
    if (dVar13 <= 0.0) {
      if (0.0 < dVar16) {
        dVar14 = (double)CONCAT44(uVar18,uVar17) / ((double)CONCAT44(uVar18,uVar17) - dVar16);
        dVar9 = dVar13 / (dVar13 - dVar16);
        dVar3 = __real_3ff0000000000000 - dVar9;
        dVar15 = (dVar14 * dVar6 + (double)CONCAT44(uVar20,uVar19)) * dVar3;
        if (0.0 <= dVar15) goto LAB_1433924ea;
        dVar8 = (dVar9 * dVar6 + dVar3 * dVar5 + (double)CONCAT44(uVar20,uVar19)) * dVar3;
        if (0.0 < dVar8) {
          dVar15 = dVar15 / (dVar15 - dVar8);
          dVar14 = dVar14 * (__real_3ff0000000000000 - dVar15) + dVar15 * dVar9;
          dVar12 = dVar15 * dVar3;
          goto LAB_1433924ea;
        }
      }
LAB_1433921f9:
      dVar16 = ((double)CONCAT44(uVar20,uVar19) + dVar6) - dVar16;
      if (dVar16 < 0.0) {
        dVar13 = ((double)CONCAT44(uVar20,uVar19) + dVar5) - dVar13;
        if (dVar13 <= 0.0) {
          dVar14 = __real_3ff0000000000000 - __real_3ff0000000000000;
          dVar12 = __real_3ff0000000000000;
          goto LAB_1433924ea;
        }
        dVar12 = dVar16 / (dVar16 - dVar13);
      }
      dVar14 = __real_3ff0000000000000 - dVar12;
      goto LAB_1433924ea;
    }
    dVar15 = (double)CONCAT44(uVar18,uVar17) / ((double)CONCAT44(uVar18,uVar17) - dVar13);
    if (0.0 < dVar16) {
      dVar14 = (double)CONCAT44(uVar18,uVar17) / ((double)CONCAT44(uVar18,uVar17) - dVar16);
      dVar16 = (dVar14 * dVar6 + (double)CONCAT44(uVar20,uVar19)) * dVar15;
      if (0.0 <= dVar16) goto LAB_1433924ea;
      dVar13 = (dVar5 * dVar15 + (double)CONCAT44(uVar20,uVar19)) * dVar15;
      if (0.0 < dVar13) {
        dVar16 = dVar16 / (dVar16 - dVar13);
        dVar14 = dVar14 * (__real_3ff0000000000000 - dVar16);
        dVar12 = dVar16 * dVar15;
        goto LAB_1433924ea;
      }
    }
    else {
      dVar14 = dVar13 / (dVar13 - dVar16);
      dVar3 = __real_3ff0000000000000 - dVar14;
      dVar9 = (dVar15 * dVar5 + (double)CONCAT44(uVar20,uVar19)) * (dVar3 - dVar15);
      if (dVar9 < 0.0) {
        dVar8 = (dVar14 * dVar6 + dVar3 * dVar5 + (double)CONCAT44(uVar20,uVar19)) *
                (dVar3 - dVar15);
        if (dVar8 <= 0.0) {
          dVar16 = ((double)CONCAT44(uVar20,uVar19) + dVar6) - dVar16;
          if (dVar16 < 0.0) {
            dVar13 = ((double)CONCAT44(uVar20,uVar19) + dVar5) - dVar13;
            if (dVar13 <= 0.0) {
              dVar14 = __real_3ff0000000000000 - __real_3ff0000000000000;
              dVar12 = __real_3ff0000000000000;
              goto LAB_1433924ea;
            }
            dVar12 = dVar16 / (dVar16 - dVar13);
          }
          dVar14 = __real_3ff0000000000000 - dVar12;
        }
        else {
          dVar9 = dVar9 / (dVar9 - dVar8);
          dVar14 = dVar9 * dVar14;
          dVar12 = (__real_3ff0000000000000 - dVar9) * dVar15 + dVar9 * dVar3;
        }
        goto LAB_1433924ea;
      }
    }
  }
  else if (dVar13 < 0.0) {
    dVar15 = (double)CONCAT44(uVar18,uVar17) / ((double)CONCAT44(uVar18,uVar17) - dVar13);
    dVar14 = dVar13 / (dVar13 - dVar16);
    dVar9 = __real_3ff0000000000000 - dVar14;
    dVar3 = (dVar15 * dVar5 + (double)CONCAT44(uVar20,uVar19)) * (dVar9 - dVar15);
    if (dVar3 < 0.0) {
      dVar8 = (dVar14 * dVar6 + dVar9 * dVar5 + (double)CONCAT44(uVar20,uVar19)) * (dVar9 - dVar15);
      if (0.0 < dVar8) {
        dVar3 = dVar3 / (dVar3 - dVar8);
        dVar14 = dVar3 * dVar14;
        dVar12 = (__real_3ff0000000000000 - dVar3) * dVar15 + dVar3 * dVar9;
        goto LAB_1433924ea;
      }
      goto LAB_1433921f9;
    }
  }
  dVar14 = 0.0;
  if (((double)CONCAT44(uVar20,uVar19) < 0.0) &&
     (dVar14 = 0.0, dVar12 = __real_3ff0000000000000, 0.0 < (double)CONCAT44(uVar20,uVar19) + dVar5)
     ) {
    dVar14 = 0.0;
    dVar12 = (__real_bff0000000000000 / dVar5) * (double)CONCAT44(uVar20,uVar19);
  }
LAB_1433924ea:
  (this->TriangleBaryCoords).field0_0x0._s_0.X = (__real_3ff0000000000000 - dVar14) - dVar12;
  (this->TriangleBaryCoords).field0_0x0._s_0.Y = dVar14;
  (this->TriangleBaryCoords).field0_0x0._s_0.Z = dVar12;
  dVar1 = dVar1 * dVar14 + (this->Triangle).V[0].field0_0x0._s_0.Y + dVar4 * dVar12;
  dVar11 = dVar7 * dVar14 + (this->Triangle).V[0].field0_0x0._s_0.Z + dVar11 * dVar12;
  (this->ClosestTrianglePoint).field0_0x0._s_0.X =
       dVar10 * dVar14 + (this->Triangle).V[0].field0_0x0._s_0.X + dVar2 * dVar12;
  (this->ClosestTrianglePoint).field0_0x0._s_0.Y = dVar1;
  (this->ClosestTrianglePoint).field0_0x0._s_0.Z = dVar11;
  dVar1 = dVar1 - (this->Point).field0_0x0._s_0.Y;
  dVar11 = dVar11 - (this->Point).field0_0x0._s_0.Z;
  dVar10 = (this->ClosestTrianglePoint).field0_0x0._s_0.X - (this->Point).field0_0x0._s_0.X;
  return dVar1 * dVar1 + dVar10 * dVar10 + dVar11 * dVar11;
}

