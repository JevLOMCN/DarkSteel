// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// Clip @ 14338ddc0

bool __cdecl
UE::Geometry::TIntrRay3AxisAlignedBox3<double>::Clip
          (double param_1,double param_2,double *param_3,double *param_4)

{
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) {
      return param_2 <= 0.0;
    }
    if (param_1 * *param_3 < param_2) {
      return false;
    }
    if (param_1 * *param_4 < param_2) {
      *param_4 = param_2 / param_1;
    }
  }
  else {
    if (param_1 * *param_4 < param_2) {
      return false;
    }
    if (param_1 * *param_3 < param_2) {
      *param_3 = param_2 / param_1;
      return true;
    }
  }
  return true;
}

// DoClipping @ 14339b5b0

bool __cdecl
UE::Geometry::TIntrRay3AxisAlignedBox3<double>::DoClipping
          (double *param_1,double *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TAxisAlignedBox3<double> *param_5,bool param_6,int *param_7,TVector<double> *param_8,
          TVector<double> *param_9,EIntersectionType *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  double dVar12;
  
  dVar12 = (param_4->field0_0x0)._s_0.X;
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar1 = *param_1;
  dVar2 = *param_2;
  dVar3 = (param_5->Max).field0_0x0._s_0.X;
  dVar4 = (param_5->Max).field0_0x0._s_0.Y;
  dVar5 = (param_5->Max).field0_0x0._s_0.Z;
  dVar9 = (dVar3 - (param_5->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar15 = (param_3->field0_0x0)._s_0.X -
           (dVar3 + (param_5->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar7 = (dVar4 - (param_5->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar14 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar17,SUB84(dVar15,0) ^ uVar16) -
           dVar9;
  dVar3 = (param_3->field0_0x0)._s_0.Y -
          (dVar4 + (param_5->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar8 = (dVar5 - (param_5->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar4 = (param_3->field0_0x0)._s_0.Z -
          (dVar5 + (param_5->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  if (dVar12 <= 0.0) {
    if (0.0 <= dVar12) {
      if (dVar14 <= 0.0) goto LAB_14339b715;
    }
    else if (dVar14 <= dVar1 * dVar12) {
      if (dVar2 * dVar12 < dVar14) {
        *param_2 = dVar14 / dVar12;
        dVar12 = *(double *)&param_4->field0_0x0;
      }
LAB_14339b715:
      uVar11 = SUB84(dVar12,0) ^ uVar16;
      uVar13 = (uint)((ulonglong)dVar12 >> 0x20) ^ uVar17;
      dVar12 = (double)CONCAT44(uVar13,uVar11);
      dVar15 = dVar15 - dVar9;
      if (dVar12 <= 0.0) {
        if (0.0 <= dVar12) {
          if (dVar15 <= 0.0) goto LAB_14339b77f;
        }
        else if (dVar15 <= (double)CONCAT44(uVar13,uVar11) * *param_1) {
          if ((double)CONCAT44(uVar13,uVar11) * *param_2 < dVar15) {
            *param_2 = dVar15 / dVar12;
          }
LAB_14339b77f:
          bVar10 = Clip((param_4->field0_0x0)._s_0.Y,
                        (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar17,
                                         SUB84(dVar3,0) ^ uVar16) - dVar7,param_1,param_2);
          if (bVar10) {
            uVar6 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
            bVar10 = Clip((double)CONCAT44((uint)((ulonglong)uVar6 >> 0x20) ^ uVar17,
                                           (uint)uVar6 ^ uVar16),dVar3 - dVar7,param_1,param_2);
            if (bVar10) {
              bVar10 = Clip((param_4->field0_0x0)._s_0.Z,
                            (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar17,
                                             SUB84(dVar4,0) ^ uVar16) - dVar8,param_1,param_2);
              if (bVar10) {
                uVar6 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 0x10);
                bVar10 = Clip((double)CONCAT44((uint)((ulonglong)uVar6 >> 0x20) ^ uVar17,
                                               (uint)uVar6 ^ uVar16),dVar4 - dVar8,param_1,param_2);
                if ((bVar10) && (((param_6 || (dVar1 != *param_1)) || (dVar2 != *param_2)))) {
                  if (*param_2 <= *param_1) {
                    *param_10 = Point;
                    *param_7 = 1;
                    dVar12 = *param_1;
                    dVar1 = (param_4->field0_0x0)._s_0.Y;
                    dVar2 = (param_4->field0_0x0)._s_0.Z;
                    dVar3 = (param_3->field0_0x0)._s_0.Y;
                    dVar4 = (param_3->field0_0x0)._s_0.Z;
                    (param_8->field0_0x0)._s_0.X =
                         dVar12 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
                    (param_8->field0_0x0)._s_0.Y = dVar12 * dVar1 + dVar3;
                    (param_8->field0_0x0)._s_0.Z = dVar12 * dVar2 + dVar4;
                  }
                  else {
                    *param_10 = Segment;
                    *param_7 = 2;
                    dVar12 = *param_1;
                    dVar1 = (param_4->field0_0x0)._s_0.Y;
                    dVar2 = (param_4->field0_0x0)._s_0.Z;
                    dVar3 = (param_3->field0_0x0)._s_0.Y;
                    dVar4 = (param_3->field0_0x0)._s_0.Z;
                    (param_8->field0_0x0)._s_0.X =
                         dVar12 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
                    (param_8->field0_0x0)._s_0.Y = dVar12 * dVar1 + dVar3;
                    (param_8->field0_0x0)._s_0.Z = dVar12 * dVar2 + dVar4;
                    dVar12 = *param_2;
                    dVar1 = (param_4->field0_0x0)._s_0.Y;
                    dVar2 = (param_4->field0_0x0)._s_0.Z;
                    dVar3 = (param_3->field0_0x0)._s_0.Y;
                    dVar4 = (param_3->field0_0x0)._s_0.Z;
                    (param_9->field0_0x0)._s_0.X =
                         dVar12 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
                    (param_9->field0_0x0)._s_0.Y = dVar12 * dVar1 + dVar3;
                    (param_9->field0_0x0)._s_0.Z = dVar12 * dVar2 + dVar4;
                  }
                  goto LAB_14339b930;
                }
              }
            }
          }
        }
      }
      else if (dVar15 <= (double)CONCAT44(uVar13,uVar11) * *param_2) {
        if ((double)CONCAT44(uVar13,uVar11) * *param_1 < dVar15) {
          *param_1 = dVar15 / dVar12;
        }
        goto LAB_14339b77f;
      }
    }
  }
  else if (dVar14 <= dVar2 * dVar12) {
    if (dVar1 * dVar12 < dVar14) {
      *param_1 = dVar14 / dVar12;
      dVar12 = *(double *)&param_4->field0_0x0;
    }
    goto LAB_14339b715;
  }
  *param_7 = 0;
  *param_10 = Empty;
LAB_14339b930:
  return *param_10 != Empty;
}

