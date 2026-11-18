// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 5

// GetTriangleSingularValues @ 14951b3c0

TVector2<float> __cdecl
UVMetricsLocals::GetTriangleSingularValues
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector2<float> param_4,TVector2<float> param_5,TVector2<float> param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  float in_stack_00000038;
  float in_stack_0000003c;
  
  dVar2 = (double)(param_6.field0_0x0._s_0.Y - in_stack_0000003c);
  dVar1 = (double)(param_5.field0_0x0._s_0.Y - param_6.field0_0x0._s_0.Y);
  dVar11 = (double)(in_stack_0000003c - param_5.field0_0x0._s_0.Y);
  dVar4 = (double)((in_stack_0000003c - param_5.field0_0x0._s_0.Y) *
                   (param_6.field0_0x0._s_0.X - param_5.field0_0x0._s_0.X) -
                  (param_6.field0_0x0._s_0.Y - param_5.field0_0x0._s_0.Y) *
                  (in_stack_00000038 - param_5.field0_0x0._s_0.X)) * __real_3fe0000000000000;
  dVar4 = __real_3ff0000000000000 /
          (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar7 = ((param_3->field0_0x0)._s_0.X * dVar11 + (param_2->field0_0x0)._s_0.X * dVar2 +
          *(double *)param_4.field0_0x0 * dVar1) * dVar4;
  dVar3 = ((param_3->field0_0x0)._s_0.Y * dVar11 + (param_2->field0_0x0)._s_0.Y * dVar2 +
          *(double *)((longlong)param_4.field0_0x0 + 8) * dVar1) * dVar4;
  dVar10 = (double)(in_stack_00000038 - param_6.field0_0x0._s_0.X);
  dVar11 = ((param_3->field0_0x0)._s_0.Z * dVar11 + (param_2->field0_0x0)._s_0.Z * dVar2 +
           *(double *)((longlong)param_4.field0_0x0 + 0x10) * dVar1) * dVar4;
  dVar8 = (double)(param_6.field0_0x0._s_0.X - param_5.field0_0x0._s_0.X);
  dVar1 = (double)(param_5.field0_0x0._s_0.X - in_stack_00000038);
  dVar12 = (dVar1 * (param_3->field0_0x0)._s_0.X + dVar10 * (param_2->field0_0x0)._s_0.X +
           dVar8 * *(double *)param_4.field0_0x0) * dVar4;
  dVar2 = (dVar1 * (param_3->field0_0x0)._s_0.Y + dVar10 * (param_2->field0_0x0)._s_0.Y +
          dVar8 * *(double *)((longlong)param_4.field0_0x0 + 8)) * dVar4;
  dVar4 = (dVar1 * (param_3->field0_0x0)._s_0.Z + dVar10 * (param_2->field0_0x0)._s_0.Z +
          dVar8 * *(double *)((longlong)param_4.field0_0x0 + 0x10)) * dVar4;
  dVar8 = dVar3 * dVar3 + dVar7 * dVar7 + dVar11 * dVar11;
  dVar11 = dVar2 * dVar3 + dVar12 * dVar7 + dVar4 * dVar11;
  dVar1 = dVar2 * dVar2 + dVar12 * dVar12 + dVar4 * dVar4;
  dVar4 = dVar8 - dVar1;
  dVar1 = dVar1 + dVar8;
  auVar9._0_8_ = dVar11 * dVar11 * __real_4010000000000000 + dVar4 * dVar4;
  auVar9._8_8_ = 0;
  auVar9 = sqrtpd(auVar9,auVar9);
  auVar5._0_8_ = (dVar1 + auVar9._0_8_) * __real_3fe0000000000000;
  auVar5._8_8_ = 0;
  auVar5 = sqrtpd(auVar5,auVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (dVar1 - auVar9._0_8_) * __real_3fe0000000000000;
  auVar6 = sqrtpd(auVar5,auVar6);
  *(float *)&param_1->field0_0x0 = (float)auVar5._0_8_;
  *(float *)((longlong)&param_1->field0_0x0 + 4) = (float)auVar6._0_8_;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Triangle2DArea @ 1495285d0

double __cdecl
UVMetricsLocals::Triangle2DArea
          (TVector2<float> param_1,TVector2<float> param_2,TVector2<float> param_3)

{
  double dVar1;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  uStackX_1c = param_3.field0_0x0._4_4_;
  uStackX_c = param_1.field0_0x0._4_4_;
  local_res10 = param_2.field0_0x0._0_4_;
  local_res8 = param_1.field0_0x0._0_4_;
  uStackX_14 = param_2.field0_0x0._4_4_;
  local_res18 = param_3.field0_0x0._0_4_;
  dVar1 = (double)((uStackX_1c - uStackX_c) * (local_res10 - local_res8) -
                  (uStackX_14 - uStackX_c) * (local_res18 - local_res8)) * __real_3fe0000000000000;
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// Triangle2DPerimeter @ 149528630

double __cdecl
UVMetricsLocals::Triangle2DPerimeter
          (TVector2<float> param_1,TVector2<float> param_2,TVector2<float> param_3)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  uStackX_14 = param_2.field0_0x0._4_4_;
  local_res10 = param_2.field0_0x0._0_4_;
  uStackX_1c = param_3.field0_0x0._4_4_;
  uStackX_c = param_1.field0_0x0._4_4_;
  local_res18 = param_3.field0_0x0._0_4_;
  local_res8 = param_1.field0_0x0._0_4_;
  return (double)(SQRT((uStackX_1c - uStackX_c) * (uStackX_1c - uStackX_c) +
                       (local_res18 - local_res8) * (local_res18 - local_res8)) +
                  SQRT((uStackX_14 - uStackX_c) * (uStackX_14 - uStackX_c) +
                       (local_res10 - local_res8) * (local_res10 - local_res8)) +
                 SQRT((uStackX_1c - uStackX_14) * (uStackX_1c - uStackX_14) +
                      (local_res18 - local_res10) * (local_res18 - local_res10)));
}

// Triangle3DArea @ 1495286f0

double __cdecl
UVMetricsLocals::Triangle3DArea
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = dVar9 * dVar8 - dVar7 * dVar3;
  auVar5._0_8_ = dVar4 * dVar8;
  auVar5._8_8_ = 0;
  dVar7 = dVar7 * dVar2 - auVar5._0_8_;
  dVar2 = dVar4 * dVar3 - dVar9 * dVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1 * dVar1 + dVar7 * dVar7 + dVar2 * dVar2;
  auVar6 = sqrtpd(auVar5,auVar6);
  return auVar6._0_8_ * __real_3fe0000000000000;
}

// Triangle3DPerimeter @ 1495287b0

double __cdecl
UVMetricsLocals::Triangle3DPerimeter
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  dVar5 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar7 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar10 = dVar1 - (param_1->field0_0x0)._s_0.Z;
  dVar1 = dVar1 - (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = dVar2 - (param_1->field0_0x0)._s_0.X;
  dVar2 = dVar2 - (param_2->field0_0x0)._s_0.X;
  dVar4 = dVar3 - (param_1->field0_0x0)._s_0.Y;
  dVar3 = dVar3 - (param_2->field0_0x0)._s_0.Y;
  auVar11._0_8_ = dVar10 * dVar10;
  auVar11._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar8 * dVar8 + dVar7 * dVar7 + dVar5 * dVar5;
  auVar9 = sqrtpd(in_XMM0,auVar9);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar4 * dVar4 + dVar6 * dVar6 + auVar11._0_8_;
  auVar12 = sqrtpd(auVar11,auVar12);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  auVar13 = sqrtpd(auVar12,auVar13);
  return auVar9._0_8_ + auVar12._0_8_ + auVar13._0_8_;
}

