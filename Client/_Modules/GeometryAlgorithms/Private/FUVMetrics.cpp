// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 3

// ReedBeta @ 1495227e0

double __cdecl UE::Geometry::FUVMetrics::ReedBeta(FDynamicMesh3 *param_1,int param_2,int param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FDynamicMeshAttributeSet *pFVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  TVector2<float> TVar18;
  TVector2<float> TVar19;
  ulonglong uVar20;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar21;
  ulonglong uVar22;
  FDynamicMeshAttributeSet *this;
  double dVar23;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [5];
  
  uVar20 = (ulonglong)(param_3 & 0x1ff);
  pFVar8 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  lVar9 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_3 >> 9) * 8
           );
  uVar5 = *(uint *)(lVar9 + uVar20 * 0xc);
  uVar22 = (ulonglong)(uVar5 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar22 * 0x18);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  dVar23 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar22 * 0x18);
  uVar5 = *(uint *)(lVar9 + 4 + uVar20 * 0xc);
  uVar22 = (ulonglong)(uVar5 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar22 * 0x18);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  dVar3 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar22 * 0x18);
  uVar5 = *(uint *)(lVar9 + 8 + uVar20 * 0xc);
  uVar20 = (ulonglong)(uVar5 & 0x1ff);
  puVar2 = (undefined8 *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
  uVar16 = *puVar2;
  uVar17 = puVar2[1];
  uVar4 = *(undefined8 *)
           (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
  pFVar10 = (param_1->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar10;
  }
  pTVar21 = FDynamicMeshAttributeSet::GetUVLayer(this,param_2);
  uVar7 = param_3 * 3;
  lVar9 = *(longlong *)&pTVar21->field_0x78;
  lVar11 = *(longlong *)&pTVar21->field_0x48;
  uVar5 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                   (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
  uVar7 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                   (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
  local_res8 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
  uStackX_c = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
  TVar18.field0_0x0._s_0.Y =
       (float)*(undefined4 *)
               (*(longlong *)(lVar11 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4);
  TVar18.field0_0x0._s_0.X =
       (float)*(undefined4 *)
               (*(longlong *)(lVar11 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar6 * 2 & 0x1ff) * 4);
  TVar19.field0_0x0._s_0.Y =
       (float)*(undefined4 *)
               (*(longlong *)(lVar11 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
  TVar19.field0_0x0._s_0.X =
       (float)*(undefined4 *)
               (*(longlong *)(lVar11 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
  local_c8 = uVar16;
  uStack_c0 = uVar17;
  local_b8 = uVar4;
  local_a8._s_0.X = dVar14;
  local_a8._s_0.Y = dVar15;
  local_a8._s_0.Z = dVar3;
  local_88[0]._0_8_ = dVar12;
  local_88[0]._8_8_ = dVar13;
  local_88[0]._16_8_ = dVar23;
  UVMetricsLocals::GetTriangleSingularValues
            ((TVector<double> *)&stack0x00000008,(TVector<double> *)&local_88[0]._s_0,
             (TVector<double> *)&local_a8._s_0,(TVector2<float>)&local_c8,TVar19,TVar18);
  if (__real_3cb0000000000000 <=
      (double)CONCAT44((uint)((ulonglong)(double)(float)local_res8 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84((double)(float)local_res8,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar23 = (double)SQRT(__real_3f800000 -
                          ((float)uStackX_c / (float)local_res8) *
                          ((float)uStackX_c / (float)local_res8));
  }
  else {
    dVar23 = 0.0;
  }
  return dVar23;
}

// Sander @ 1495231d0

double __cdecl
UE::Geometry::FUVMetrics::Sander(FDynamicMesh3 *param_1,int param_2,int param_3,bool param_4)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FDynamicMeshAttributeSet *pFVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong uVar27;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar28;
  ulonglong uVar29;
  FDynamicMeshAttributeSet *this;
  double dVar30;
  double dVar31;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  double dVar32;
  
  uVar27 = (ulonglong)(param_3 & 0x1ff);
  pFVar8 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  lVar9 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_3 >> 9) * 8
           );
  uVar7 = *(uint *)(lVar9 + uVar27 * 0xc);
  uVar29 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar7 >> 9) * 8) + uVar29 * 0x18);
  dVar25 = *pdVar1;
  dVar26 = pdVar1[1];
  dVar32 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar7 >> 9) * 8) + 0x10 + uVar29 * 0x18);
  uVar7 = *(uint *)(lVar9 + 4 + uVar27 * 0xc);
  uVar29 = (ulonglong)(uVar7 & 0x1ff);
  dVar6 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar7 >> 9) * 8) + 0x10 + uVar29 * 0x18);
  pdVar1 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar7 >> 9) * 8) + uVar29 * 0x18);
  dVar41 = *pdVar1;
  dVar23 = pdVar1[1];
  uVar7 = *(uint *)(lVar9 + 8 + uVar27 * 0xc);
  uVar27 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar7 >> 9) * 8) + uVar27 * 0x18);
  dVar40 = *pdVar1;
  dVar24 = pdVar1[1];
  dVar38 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar7 >> 9) * 8) + 0x10 + uVar27 * 0x18);
  pFVar10 = (param_1->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar10;
  }
  pTVar28 = FDynamicMeshAttributeSet::GetUVLayer(this,param_2);
  uVar22 = param_3 * 3;
  lVar9 = *(longlong *)&pTVar28->field_0x78;
  lVar11 = *(longlong *)&pTVar28->field_0x48;
  uVar7 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar22 >> 9) * 8) +
                   (ulonglong)(uVar22 & 0x1ff) * 4);
  uVar27 = (ulonglong)(uVar7 * 2 & 0x1ff);
  lVar12 = *(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8);
  fVar2 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
  uVar7 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                   (ulonglong)(uVar22 + 1 & 0x1ff) * 4);
  uVar29 = (ulonglong)(uVar7 * 2 & 0x1ff);
  lVar13 = *(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8);
  fVar3 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
  fVar45 = *(float *)(lVar13 + uVar29 * 4) - *(float *)(lVar12 + uVar27 * 4);
  dVar18 = (dVar38 - dVar32) * (dVar23 - dVar26) - (dVar24 - dVar26) * (dVar6 - dVar32);
  uVar7 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar22 + 2 >> 9) * 8) +
                   (ulonglong)(uVar22 + 2 & 0x1ff) * 4);
  dVar30 = (dVar40 - dVar25) * (dVar6 - dVar32) - (dVar38 - dVar32) * (dVar41 - dVar25);
  fVar4 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
  dVar39 = (double)(fVar2 - fVar3);
  fVar5 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
  dVar31 = (dVar24 - dVar26) * (dVar41 - dVar25) - (dVar40 - dVar25) * (dVar23 - dVar26);
  fVar44 = fVar5 - fVar2;
  dVar15 = (double)fVar44;
  dVar19 = (double)(fVar3 - fVar5);
  dVar36 = (double)(fVar45 * fVar44 - (fVar4 - *(float *)(lVar12 + uVar27 * 4)) * (fVar3 - fVar2)) *
           __real_3fe0000000000000;
  dVar17 = __real_3ff0000000000000 /
           (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar36 = (double)fVar45;
  dVar43 = dVar17 * __real_3fe0000000000000;
  dVar42 = (double)(fVar4 - *(float *)(lVar13 + uVar29 * 4));
  dVar16 = (dVar15 * dVar41 + dVar19 * dVar25 + dVar39 * dVar40) * dVar43;
  dVar37 = (double)(*(float *)(lVar12 + uVar27 * 4) - fVar4);
  dVar20 = (dVar19 * dVar32 + dVar15 * dVar6 + dVar39 * dVar38) * dVar43;
  dVar15 = (dVar19 * dVar26 + dVar15 * dVar23 + dVar39 * dVar24) * dVar43;
  dVar40 = (dVar37 * dVar41 + dVar42 * dVar25 + dVar36 * dVar40) * dVar43;
  dVar41 = (dVar42 * dVar26 + dVar37 * dVar23 + dVar36 * dVar24) * dVar43;
  dVar43 = (dVar42 * dVar32 + dVar37 * dVar6 + dVar36 * dVar38) * dVar43;
  dVar38 = dVar15 * dVar15 + dVar16 * dVar16 + dVar20 * dVar20;
  dVar32 = dVar41 * dVar15 + dVar40 * dVar16 + dVar43 * dVar20;
  dVar6 = dVar41 * dVar41 + dVar40 * dVar40 + dVar43 * dVar43;
  dVar41 = dVar38 - dVar6;
  dVar6 = (dVar6 + dVar38) * __real_3fe0000000000000;
  auVar33._0_8_ = dVar30 * dVar30 + dVar18 * dVar18 + dVar31 * dVar31;
  auVar33._8_8_ = 0;
  auVar33 = sqrtpd(auVar33,auVar33);
  auVar34._8_8_ = auVar33._8_8_;
  auVar34._0_8_ = auVar33._0_8_ * __real_3fe0000000000000 * dVar17;
  auVar33 = sqrtpd(auVar34,auVar34);
  if (param_4) {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar6;
    auVar34 = sqrtpd(auVar33,auVar21);
    dVar32 = auVar34._0_8_;
  }
  else {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar32 * dVar32 * __real_4010000000000000 + dVar41 * dVar41;
    auVar34 = sqrtpd(auVar33,auVar14);
    auVar35._8_8_ = auVar34._8_8_;
    auVar35._0_8_ = auVar34._0_8_ * __real_3fe0000000000000 + dVar6;
    auVar34 = sqrtpd(auVar35,auVar35);
    dVar32 = auVar34._0_8_;
  }
  return dVar32 * (__real_3ff0000000000000 / auVar33._0_8_);
}

// TexelDensity @ 149528270

double __cdecl
UE::Geometry::FUVMetrics::TexelDensity(FDynamicMesh3 *param_1,int param_2,int param_3,int param_4)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FDynamicMeshAttributeSet *pFVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  ulonglong uVar15;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar16;
  ulonglong uVar17;
  FDynamicMeshAttributeSet *this;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar15 = (ulonglong)(param_3 & 0x1ff);
  pFVar8 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  lVar9 = *(longlong *)
           ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_3 >> 9) * 8
           );
  uVar6 = *(uint *)(lVar9 + uVar15 * 0xc);
  uVar17 = (ulonglong)(uVar6 & 0x1ff);
  auVar20 = *(undefined1 (*) [16])
             (*(longlong *)(pFVar8 + (ulonglong)(uVar6 >> 9) * 8) + uVar17 * 0x18);
  dVar4 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar17 * 0x18);
  uVar6 = *(uint *)(lVar9 + 4 + uVar15 * 0xc);
  uVar17 = (ulonglong)(uVar6 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar6 >> 9) * 8) + uVar17 * 0x18);
  dVar22 = *pdVar1;
  dVar12 = pdVar1[1];
  dVar23 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar17 * 0x18);
  uVar6 = *(uint *)(lVar9 + 8 + uVar15 * 0xc);
  uVar15 = (ulonglong)(uVar6 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar6 >> 9) * 8) + uVar15 * 0x18);
  dVar21 = *pdVar1;
  dVar13 = pdVar1[1];
  dVar5 = *(double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar15 * 0x18);
  pFVar10 = (param_1->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar10;
  }
  pTVar16 = FDynamicMeshAttributeSet::GetUVLayer(this,param_2);
  uVar7 = param_3 * 3;
  lVar9 = *(longlong *)&pTVar16->field_0x78;
  lVar11 = *(longlong *)&pTVar16->field_0x48;
  uVar6 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  fVar2 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar6 * 2 & 0x1ff) * 4);
  fVar3 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                   (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
  dVar5 = dVar5 - dVar4;
  dVar23 = dVar23 - dVar4;
  dVar22 = dVar22 - auVar20._0_8_;
  dVar21 = dVar21 - auVar20._0_8_;
  auVar14._4_8_ = extraout_XMM0_Qb;
  auVar14._0_4_ = auVar20._4_4_;
  auVar18._0_8_ = auVar14._0_8_ << 0x20;
  auVar18._8_4_ = auVar20._8_4_;
  auVar18._12_4_ = auVar20._12_4_;
  uVar7 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                   (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
  dVar13 = dVar13 - auVar18._8_8_;
  dVar12 = dVar12 - auVar18._8_8_;
  dVar4 = dVar13 * dVar22 - dVar21 * dVar12;
  dVar22 = dVar21 * dVar23 - dVar5 * dVar22;
  dVar23 = dVar5 * dVar12 - dVar13 * dVar23;
  auVar19._0_8_ = SQRT(dVar22 * dVar22 + dVar23 * dVar23 + dVar4 * dVar4);
  auVar19._8_8_ = 0;
  dVar4 = (double)((*(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4) - fVar3) *
                   (*(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar6 * 2 & 0x1ff) * 4) - fVar2) -
                  (*(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4) - fVar3) *
                  (*(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar7 * 2 & 0x1ff) * 4) - fVar2)) * __real_3fe0000000000000
  ;
  auVar20._8_8_ = 0;
  auVar20._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
       (__real_4000000000000000 / auVar19._0_8_);
  auVar20 = sqrtpd(auVar19,auVar20);
  return auVar20._0_8_ * (double)param_4;
}

