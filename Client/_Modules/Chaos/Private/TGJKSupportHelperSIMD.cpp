// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Support @ 1439e1ae0

void __cdecl
Chaos::TGJKSupportHelperSIMD<__m128,1>::Support
          (FGeomGJKHelperSIMD *param_1,FGeomGJKHelperSIMD *param_2,__m128 *param_3,__m128 *param_4,
          __m128 *param_5,__m128 *param_6,__m128 *param_7)

{
  __m128 *p_Var1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FGeomGJKHelperSIMD *pFVar6;
  __m128 *p_Var7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float in_XMM2_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pFVar6 = param_2;
  p_Var7 = param_4;
  (*param_1->Func)(param_1->Geometry,param_2,in_XMM2_Da,param_4);
  p_Var1 = param_2->Geometry;
  param_6->m128_f32[0] = extraout_XMM0_Da;
  param_6->m128_f32[1] = extraout_XMM0_Db;
  param_6->m128_f32[2] = extraout_XMM0_Dc;
  param_6->m128_f32[3] = extraout_XMM0_Dd;
  fVar2 = param_5->m128_f32[0];
  fVar3 = param_5->m128_f32[1];
  fVar4 = param_5->m128_f32[2];
  fVar5 = param_5->m128_f32[3];
  (*param_2->Func)(p_Var1,pFVar6,param_4->m128_f32[1],p_Var7);
  fVar8 = extraout_XMM0_Db_00 * fVar2 - fVar3 * extraout_XMM0_Da_00;
  fVar9 = extraout_XMM0_Dc_00 * fVar3 - fVar4 * extraout_XMM0_Db_00;
  fVar10 = extraout_XMM0_Da_00 * fVar4 - fVar2 * extraout_XMM0_Dc_00;
  fVar11 = extraout_XMM0_Dd_00 * fVar5 - fVar5 * extraout_XMM0_Dd_00;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar8 = fVar8 + fVar8;
  fVar11 = fVar11 + fVar11;
  param_7->m128_f32[0] = fVar5 * fVar9 + extraout_XMM0_Da_00 + (fVar8 * fVar3 - fVar10 * fVar4);
  param_7->m128_f32[1] = fVar5 * fVar10 + extraout_XMM0_Db_00 + (fVar9 * fVar4 - fVar8 * fVar2);
  param_7->m128_f32[2] = fVar5 * fVar8 + extraout_XMM0_Dc_00 + (fVar10 * fVar2 - fVar9 * fVar3);
  param_7->m128_f32[3] = fVar5 * fVar11 + extraout_XMM0_Dd_00 + (fVar11 * fVar5 - fVar11 * fVar5);
  return;
}

// Support @ 143ed1e60

void __cdecl
Chaos::TGJKSupportHelperSIMD<VectorRegister4Double,1>::Support
          (FGeomGJKHelperSIMD *param_1,FGeomGJKHelperSIMD *param_2,VectorRegister4Double *param_3,
          VectorRegister4Double *param_4,VectorRegister4Double *param_5,
          VectorRegister4Double *param_6,VectorRegister4Double *param_7)

{
  __m128 *p_Var1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  FGeomGJKHelperSIMD *pFVar10;
  __m128 *p_Var11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_XMM2_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pFVar10 = param_2;
  p_Var11 = (__m128 *)param_4;
  (*param_1->Func)(param_1->Geometry,param_2,in_XMM2_Da,(__m128 *)param_4);
  p_Var1 = param_2->Geometry;
  auVar6._8_4_ = SUB84((double)extraout_XMM0_Db,0);
  auVar6._0_8_ = (double)extraout_XMM0_Da;
  auVar6._12_4_ = (int)((ulonglong)(double)extraout_XMM0_Db >> 0x20);
  *(undefined1 (*) [16])(param_6->XY).m128d_f64 = auVar6;
  auVar2._8_4_ = SUB84((double)extraout_XMM0_Dd,0);
  auVar2._0_8_ = (double)extraout_XMM0_Dc;
  auVar2._12_4_ = (int)((ulonglong)(double)extraout_XMM0_Dd >> 0x20);
  *(undefined1 (*) [16])(param_6->ZW).m128d_f64 = auVar2;
  dVar5 = (param_5->XY).m128d_f64[0];
  dVar7 = (param_5->XY).m128d_f64[1];
  dVar8 = (param_5->ZW).m128d_f64[0];
  dVar9 = (param_5->ZW).m128d_f64[1];
  fVar17 = (float)(0.0 - (param_3->ZW).m128d_f64[0]) * (float)(param_4->XY).m128d_f64[1] -
           (float)(param_4->ZW).m128d_f64[0] * (float)(0.0 - (param_3->XY).m128d_f64[1]);
  (*param_2->Func)(p_Var1,pFVar10,fVar17 + fVar17,p_Var11);
  fVar18 = (float)dVar5;
  fVar19 = (float)dVar7;
  fVar17 = (float)dVar8;
  fVar13 = (float)dVar9;
  fVar12 = extraout_XMM0_Db_00 * fVar18 - fVar19 * extraout_XMM0_Da_00;
  fVar14 = extraout_XMM0_Dc_00 * fVar19 - fVar17 * extraout_XMM0_Db_00;
  fVar15 = extraout_XMM0_Da_00 * fVar17 - fVar18 * extraout_XMM0_Dc_00;
  fVar16 = extraout_XMM0_Dd_00 * fVar13 - fVar13 * extraout_XMM0_Dd_00;
  fVar14 = fVar14 + fVar14;
  fVar15 = fVar15 + fVar15;
  fVar12 = fVar12 + fVar12;
  fVar16 = fVar16 + fVar16;
  dVar5 = (double)(fVar13 * fVar15 + extraout_XMM0_Db_00 + (fVar14 * fVar17 - fVar18 * fVar12));
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = (double)(fVar13 * fVar14 + extraout_XMM0_Da_00 +
                         (fVar12 * fVar19 - fVar17 * fVar15));
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_7->XY).m128d_f64 = auVar3;
  dVar5 = (double)(fVar13 * fVar16 + extraout_XMM0_Dd_00 + (fVar16 * fVar13 - fVar13 * fVar16));
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (double)(fVar13 * fVar12 + extraout_XMM0_Dc_00 +
                         (fVar15 * fVar18 - fVar19 * fVar14));
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_7->ZW).m128d_f64 = auVar4;
  return;
}

