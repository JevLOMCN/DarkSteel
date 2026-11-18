// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// TransformBy @ 145e35be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRenderBounds * __thiscall
FRenderBounds::TransformBy
          (FRenderBounds *this,FRenderBounds *__return_storage_ptr__,TMatrix<float> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dStack_c0;
  
  fVar17 = (this->Max).field0_0x0._s_0.Z;
  fVar20 = (this->Max).field0_0x0._s_0.Y;
  fVar28 = (this->Max).field0_0x0._s_0.X;
  dVar7 = (double)param_1->M[1][0];
  dVar8 = (double)param_1->M[1][1];
  dVar3 = (double)((fVar28 + (this->Min).field0_0x0._s_0.X) * __real_3f000000);
  dVar5 = (double)((fVar20 + (this->Min).field0_0x0._s_0.Y) * __real_3f000000);
  uVar18 = SUB84(dVar5,0);
  uVar19 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar1._8_4_ = uVar18;
  auVar1._0_8_ = dVar3;
  auVar1._12_4_ = uVar19;
  dVar12 = (double)param_1->M[0][0];
  dVar13 = (double)param_1->M[0][1];
  dVar26 = (double)((fVar17 + (this->Min).field0_0x0._s_0.Z) * __real_3f000000);
  dVar16 = (double)param_1->M[0][2];
  dVar14 = (double)param_1->M[1][2];
  dVar9 = (double)param_1->M[2][0];
  dVar10 = (double)param_1->M[2][1];
  dVar15 = (double)param_1->M[2][2];
  dVar25 = (double)((fVar28 - (this->Min).field0_0x0._s_0.X) * __real_3f000000);
  dVar11 = (double)((fVar20 - (this->Min).field0_0x0._s_0.Y) * __real_3f000000);
  dVar5 = auVar1._8_8_;
  dVar27 = (double)((fVar17 - (this->Min).field0_0x0._s_0.Z) * __real_3f000000);
  auVar2._8_4_ = uVar18;
  auVar2._0_8_ = dVar5;
  auVar2._12_4_ = uVar19;
  dVar23 = dVar11 * dVar7;
  dVar24 = dVar11 * dVar8;
  dVar4 = dVar25 * dVar12;
  dVar6 = dVar25 * dVar13;
  dVar21 = dVar27 * dVar9;
  dVar22 = dVar27 * dVar10;
  fVar30 = (float)((double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   + (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                  + (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                  );
  fVar31 = (float)((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar24,0) & _UNK_15061cc88) +
                   (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar6,0) & _UNK_15061cc88) +
                  (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar22,0) & _UNK_15061cc88));
  dVar11 = dVar11 * dVar14;
  dVar25 = dVar25 * dVar16;
  dVar27 = dVar27 * dVar15;
  dStack_c0 = auVar2._8_8_;
  fVar17 = (float)((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   + (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ) +
                  (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  fVar28 = (float)(dVar5 * dVar7 + dVar3 * dVar12 + dVar26 * dVar9 + (double)param_1->M[3][0]);
  fVar29 = (float)(dStack_c0 * dVar8 + dVar3 * dVar13 + dVar26 * dVar10 + (double)param_1->M[3][1]);
  fVar20 = (float)(dVar5 * dVar14 + dVar3 * dVar16 + dVar26 * dVar15 + (double)param_1->M[3][2]);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = fVar28 - fVar30;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = fVar30 + fVar28;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = fVar29 - fVar31;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = fVar31 + fVar29;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = fVar20 + fVar17;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = fVar20 - fVar17;
  return __return_storage_ptr__;
}

// TransformBy @ 145e35e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRenderBounds * __thiscall
FRenderBounds::TransformBy
          (FRenderBounds *this,FRenderBounds *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar3 = (this->Max).field0_0x0._s_0.Z;
  fVar4 = (this->Max).field0_0x0._s_0.Y;
  fVar15 = (this->Max).field0_0x0._s_0.X;
  dVar12 = (double)((fVar15 + (this->Min).field0_0x0._s_0.X) * __real_3f000000);
  dVar13 = (double)((fVar4 + (this->Min).field0_0x0._s_0.Y) * __real_3f000000);
  dVar2 = (double)((fVar3 + (this->Min).field0_0x0._s_0.Z) * __real_3f000000);
  dVar11 = (double)((fVar15 - (this->Min).field0_0x0._s_0.X) * __real_3f000000);
  dVar1 = (double)((fVar4 - (this->Min).field0_0x0._s_0.Y) * __real_3f000000);
  dVar14 = (double)((fVar3 - (this->Min).field0_0x0._s_0.Z) * __real_3f000000);
  dVar5 = dVar11 * param_1->M[0][0];
  dVar6 = dVar11 * param_1->M[0][1];
  dVar11 = dVar11 * param_1->M[0][2];
  dVar9 = dVar1 * param_1->M[1][0];
  dVar10 = dVar1 * param_1->M[1][1];
  dVar1 = dVar1 * param_1->M[1][2];
  dVar7 = dVar14 * param_1->M[2][0];
  dVar8 = dVar14 * param_1->M[2][1];
  dVar14 = dVar14 * param_1->M[2][2];
  fVar17 = (float)((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  fVar18 = (float)((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar10,0) & _UNK_15061cc88) +
                   (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar6,0) & _UNK_15061cc88) +
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar8,0) & _UNK_15061cc88));
  fVar3 = (float)((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                 (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  fVar15 = (float)(dVar13 * param_1->M[1][0] + dVar12 * param_1->M[0][0] + dVar2 * param_1->M[2][0]
                  + param_1->M[3][0]);
  fVar16 = (float)(dVar13 * param_1->M[1][1] + dVar12 * param_1->M[0][1] + dVar2 * param_1->M[2][1]
                  + param_1->M[3][1]);
  fVar4 = (float)(dVar13 * param_1->M[1][2] + dVar12 * param_1->M[0][2] + dVar2 * param_1->M[2][2] +
                 param_1->M[3][2]);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = fVar16 - fVar18;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = fVar18 + fVar16;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = fVar15 - fVar17;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = fVar17 + fVar15;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = fVar4 + fVar3;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = fVar4 - fVar3;
  return __return_storage_ptr__;
}

// TransformBy @ 145e360d0

FRenderBounds * __thiscall
FRenderBounds::TransformBy
          (FRenderBounds *this,FRenderBounds *__return_storage_ptr__,FRenderTransform *param_1)

{
  TMatrix<float> local_48;
  
  local_48.M[3]._0_8_ = *(undefined8 *)&(param_1->Origin).field0_0x0;
  local_48.M[2] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(param_1->TransformRows + 2),
                *(undefined1 (*) [16])(param_1->TransformRows + 2),8);
  local_48.M[1] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(param_1->TransformRows + 1),
                *(undefined1 (*) [16])(param_1->TransformRows + 1),8);
  local_48.M[3][3] = __real_3f800000;
  local_48.M[3][2] = (param_1->Origin).field0_0x0._s_0.Z;
  local_48.M[0] =
       (float  [4])
       insertps(*(undefined1 (*) [16])param_1->TransformRows,
                *(undefined1 (*) [16])param_1->TransformRows,8);
  TransformBy(this,__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

