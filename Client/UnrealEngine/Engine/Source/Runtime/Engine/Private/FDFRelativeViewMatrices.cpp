// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Create @ 14851edb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDFRelativeViewMatrices * __cdecl
FDFRelativeViewMatrices::Create
          (FDFRelativeViewMatrices *__return_storage_ptr__,FInitializer *param_1)

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
  undefined8 uVar16;
  FDFInverseMatrix *pFVar17;
  FDFMatrix *pFVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_c8 [32];
  TVector<float>_u_0 local_a8;
  FDFMatrix local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  fVar20 = (float)(param_1->ViewOrigin).field0_0x0._s_0.Z;
  fVar21 = (float)(param_1->ViewOrigin).field0_0x0._s_0.X;
  fVar19 = (float)(param_1->ViewOrigin).field0_0x0._s_0.Y;
  *(ulonglong *)&(__return_storage_ptr__->PositionHigh).field0_0x0 = CONCAT44(fVar19,fVar21);
  (__return_storage_ptr__->PositionHigh).field0_0x0._s_0.Z = fVar20;
  local_a8._0_8_ = CONCAT44(fVar19,fVar21);
  local_a8._s_0.Z = fVar20;
  pFVar17 = FDFInverseMatrix::MakeFromRelativeWorldMatrix
                      ((FDFInverseMatrix *)&local_98,(TVector<float> *)&local_a8._s_0,
                       &param_1->WorldToView);
  local_a8._0_8_ = CONCAT44(fVar19,fVar21);
  uVar16 = *(undefined8 *)((pFVar17->M).M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[0] =
       *(undefined8 *)(pFVar17->M).M[0];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[0] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar17->M).M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[1] =
       *(undefined8 *)(pFVar17->M).M[1];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[1] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar17->M).M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[2] =
       *(undefined8 *)(pFVar17->M).M[2];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[2] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar17->M).M[3] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[3] =
       *(undefined8 *)(pFVar17->M).M[3];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[3] + 2) = uVar16;
  local_a8._s_0.Z = fVar20;
  pFVar18 = FDFMatrix::MakeToRelativeWorldMatrix
                      (&local_98,(TVector<float> *)&local_a8._s_0,&param_1->ViewToWorld);
  uVar16 = *(undefined8 *)((pFVar18->M).M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[0] =
       *(undefined8 *)(pFVar18->M).M[0];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[0] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar18->M).M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[1] =
       *(undefined8 *)(pFVar18->M).M[1];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[1] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar18->M).M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[2] =
       *(undefined8 *)(pFVar18->M).M[2];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[2] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar18->M).M[3] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[3] =
       *(undefined8 *)(pFVar18->M).M[3];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[3] + 2) = uVar16;
  dVar1 = (param_1->ViewToClip).M[1][2];
  dVar2 = (param_1->ViewToClip).M[1][3];
  dVar3 = (param_1->ViewToClip).M[1][0];
  dVar4 = (param_1->ViewToClip).M[1][1];
  dVar5 = (param_1->ViewToClip).M[2][2];
  dVar6 = (param_1->ViewToClip).M[2][3];
  dVar7 = (param_1->ViewToClip).M[2][0];
  dVar8 = (param_1->ViewToClip).M[2][1];
  dVar9 = (param_1->ViewToClip).M[3][0];
  dVar10 = (param_1->ViewToClip).M[3][1];
  dVar11 = (param_1->ViewToClip).M[3][2];
  dVar12 = (param_1->ViewToClip).M[3][3];
  dVar13 = (param_1->ViewToClip).M[0][1];
  dVar14 = (param_1->ViewToClip).M[0][2];
  dVar15 = (param_1->ViewToClip).M[0][3];
  (__return_storage_ptr__->ViewToClip).M[0][0] = (float)(param_1->ViewToClip).M[0][0];
  (__return_storage_ptr__->ViewToClip).M[0][1] = (float)dVar13;
  (__return_storage_ptr__->ViewToClip).M[0][2] = (float)dVar14;
  (__return_storage_ptr__->ViewToClip).M[0][3] = (float)dVar15;
  (__return_storage_ptr__->ViewToClip).M[1][0] = (float)dVar3;
  (__return_storage_ptr__->ViewToClip).M[1][1] = (float)dVar4;
  (__return_storage_ptr__->ViewToClip).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->ViewToClip).M[1][3] = (float)dVar2;
  (__return_storage_ptr__->ViewToClip).M[2][0] = (float)dVar7;
  (__return_storage_ptr__->ViewToClip).M[2][1] = (float)dVar8;
  (__return_storage_ptr__->ViewToClip).M[2][2] = (float)dVar5;
  (__return_storage_ptr__->ViewToClip).M[2][3] = (float)dVar6;
  (__return_storage_ptr__->ViewToClip).M[3][0] = (float)dVar9;
  (__return_storage_ptr__->ViewToClip).M[3][1] = (float)dVar10;
  (__return_storage_ptr__->ViewToClip).M[3][2] = (float)dVar11;
  (__return_storage_ptr__->ViewToClip).M[3][3] = (float)dVar12;
  dVar1 = (param_1->ClipToView).M[1][2];
  dVar2 = (param_1->ClipToView).M[1][3];
  dVar3 = (param_1->ClipToView).M[1][0];
  dVar4 = (param_1->ClipToView).M[1][1];
  dVar5 = (param_1->ClipToView).M[2][2];
  dVar6 = (param_1->ClipToView).M[2][3];
  dVar7 = (param_1->ClipToView).M[2][0];
  dVar8 = (param_1->ClipToView).M[2][1];
  dVar9 = (param_1->ClipToView).M[3][2];
  dVar10 = (param_1->ClipToView).M[3][3];
  dVar11 = (param_1->ClipToView).M[3][0];
  dVar12 = (param_1->ClipToView).M[3][1];
  dVar13 = (param_1->ClipToView).M[0][1];
  dVar14 = (param_1->ClipToView).M[0][2];
  dVar15 = (param_1->ClipToView).M[0][3];
  (__return_storage_ptr__->ClipToView).M[0][0] = (float)(param_1->ClipToView).M[0][0];
  (__return_storage_ptr__->ClipToView).M[0][1] = (float)dVar13;
  (__return_storage_ptr__->ClipToView).M[0][2] = (float)dVar14;
  (__return_storage_ptr__->ClipToView).M[0][3] = (float)dVar15;
  (__return_storage_ptr__->ClipToView).M[1][0] = (float)dVar3;
  (__return_storage_ptr__->ClipToView).M[1][1] = (float)dVar4;
  (__return_storage_ptr__->ClipToView).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->ClipToView).M[1][3] = (float)dVar2;
  (__return_storage_ptr__->ClipToView).M[2][0] = (float)dVar7;
  (__return_storage_ptr__->ClipToView).M[2][1] = (float)dVar8;
  (__return_storage_ptr__->ClipToView).M[2][2] = (float)dVar5;
  (__return_storage_ptr__->ClipToView).M[2][3] = (float)dVar6;
  (__return_storage_ptr__->ClipToView).M[3][0] = (float)dVar11;
  (__return_storage_ptr__->ClipToView).M[3][1] = (float)dVar12;
  (__return_storage_ptr__->ClipToView).M[3][2] = (float)dVar9;
  (__return_storage_ptr__->ClipToView).M[3][3] = (float)dVar10;
  VectorMatrixMultiply
            (&local_98.M,&__return_storage_ptr__->RelativeWorldToView,
             &__return_storage_ptr__->ViewToClip);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[0] = local_98.M.M[0]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[0] + 2) = local_98.M.M[0]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[1] = local_98.M.M[1]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[1] + 2) = local_98.M.M[1]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[2] = local_98.M.M[2]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[2] + 2) = local_98.M.M[2]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[3] = local_98.M.M[3]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[3] + 2) = local_98.M.M[3]._8_8_;
  VectorMatrixMultiply
            (&local_98.M,&__return_storage_ptr__->ClipToView,
             &__return_storage_ptr__->ViewToRelativeWorld);
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[0] = local_98.M.M[0]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[0] + 2) = local_98.M.M[0]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[1] = local_98.M.M[1]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[1] + 2) = local_98.M.M[1]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[2] = local_98.M.M[2]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[2] + 2) = local_98.M.M[2]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[3] = local_98.M.M[3]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[3] + 2) = local_98.M.M[3]._8_8_;
  local_a8._0_8_ = CONCAT44(fVar19,fVar21);
  local_a8._s_0.Z = fVar20;
  pFVar18 = FDFMatrix::MakeClampedToRelativeWorldMatrix
                      (&local_98,(TVector<float> *)&local_a8._s_0,&param_1->PrevViewToWorld);
  uVar16 = *(undefined8 *)((pFVar18->M).M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[0] =
       *(undefined8 *)(pFVar18->M).M[0];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[0] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar18->M).M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[1] =
       *(undefined8 *)(pFVar18->M).M[1];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[1] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar18->M).M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[2] =
       *(undefined8 *)(pFVar18->M).M[2];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[2] + 2) = uVar16;
  uVar16 = *(undefined8 *)((pFVar18->M).M[3] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[3] =
       *(undefined8 *)(pFVar18->M).M[3];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[3] + 2) = uVar16;
  dVar1 = (param_1->PrevClipToView).M[1][2];
  dVar2 = (param_1->PrevClipToView).M[1][3];
  dVar3 = (param_1->PrevClipToView).M[1][0];
  dVar4 = (param_1->PrevClipToView).M[1][1];
  dVar5 = (param_1->PrevClipToView).M[2][2];
  dVar6 = (param_1->PrevClipToView).M[2][3];
  dVar7 = (param_1->PrevClipToView).M[2][0];
  dVar8 = (param_1->PrevClipToView).M[2][1];
  dVar9 = (param_1->PrevClipToView).M[3][2];
  dVar10 = (param_1->PrevClipToView).M[3][3];
  dVar11 = (param_1->PrevClipToView).M[3][0];
  dVar12 = (param_1->PrevClipToView).M[3][1];
  dVar13 = (param_1->PrevClipToView).M[0][2];
  dVar14 = (param_1->PrevClipToView).M[0][3];
  dVar15 = (param_1->PrevClipToView).M[0][1];
  (__return_storage_ptr__->PrevClipToView).M[0][0] = (float)(param_1->PrevClipToView).M[0][0];
  (__return_storage_ptr__->PrevClipToView).M[0][1] = (float)dVar15;
  (__return_storage_ptr__->PrevClipToView).M[0][2] = (float)dVar13;
  (__return_storage_ptr__->PrevClipToView).M[0][3] = (float)dVar14;
  (__return_storage_ptr__->PrevClipToView).M[1][0] = (float)dVar3;
  (__return_storage_ptr__->PrevClipToView).M[1][1] = (float)dVar4;
  (__return_storage_ptr__->PrevClipToView).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->PrevClipToView).M[1][3] = (float)dVar2;
  (__return_storage_ptr__->PrevClipToView).M[2][0] = (float)dVar7;
  (__return_storage_ptr__->PrevClipToView).M[2][1] = (float)dVar8;
  (__return_storage_ptr__->PrevClipToView).M[2][2] = (float)dVar5;
  (__return_storage_ptr__->PrevClipToView).M[2][3] = (float)dVar6;
  (__return_storage_ptr__->PrevClipToView).M[3][0] = (float)dVar11;
  (__return_storage_ptr__->PrevClipToView).M[3][1] = (float)dVar12;
  (__return_storage_ptr__->PrevClipToView).M[3][2] = (float)dVar9;
  (__return_storage_ptr__->PrevClipToView).M[3][3] = (float)dVar10;
  VectorMatrixMultiply
            (&local_98.M,&__return_storage_ptr__->PrevClipToView,
             &__return_storage_ptr__->PrevViewToRelativeWorld);
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[0] = local_98.M.M[0]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[0] + 2) =
       local_98.M.M[0]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[1] = local_98.M.M[1]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[1] + 2) =
       local_98.M.M[1]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[2] = local_98.M.M[2]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[2] + 2) =
       local_98.M.M[2]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[3] = local_98.M.M[3]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[3] + 2) =
       local_98.M.M[3]._8_8_;
  return __return_storage_ptr__;
}

// Create @ 14851f180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDFRelativeViewMatrices * __cdecl
FDFRelativeViewMatrices::Create
          (FDFRelativeViewMatrices *__return_storage_ptr__,FViewMatrices *param_1,
          FViewMatrices *param_2)

{
  undefined1 auStack_358 [32];
  TVector<double>_u_0 local_338;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_338._s_0.X = (param_1->ViewOrigin).field0_0x0._s_0.X;
  local_338._s_0.Y = (param_1->ViewOrigin).field0_0x0._s_0.Y;
  local_338._s_0.Z = (param_1->ViewOrigin).field0_0x0._s_0.Z;
  local_318 = (param_1->InvViewMatrix).M[0][0];
  dStack_310 = (param_1->InvViewMatrix).M[0][1];
  local_308 = (param_1->InvViewMatrix).M[0][2];
  dStack_300 = (param_1->InvViewMatrix).M[0][3];
  local_2f8 = (param_1->InvViewMatrix).M[1][0];
  dStack_2f0 = (param_1->InvViewMatrix).M[1][1];
  local_2e8 = (param_1->InvViewMatrix).M[1][2];
  dStack_2e0 = (param_1->InvViewMatrix).M[1][3];
  local_2d8 = (param_1->InvViewMatrix).M[2][0];
  dStack_2d0 = (param_1->InvViewMatrix).M[2][1];
  local_2c8 = (param_1->InvViewMatrix).M[2][2];
  dStack_2c0 = (param_1->InvViewMatrix).M[2][3];
  local_2b8 = (param_1->InvViewMatrix).M[3][0];
  dStack_2b0 = (param_1->InvViewMatrix).M[3][1];
  local_2a8 = (param_1->InvViewMatrix).M[3][2];
  dStack_2a0 = (param_1->InvViewMatrix).M[3][3];
  local_298 = (param_1->ViewMatrix).M[0][0];
  dStack_290 = (param_1->ViewMatrix).M[0][1];
  local_288 = (param_1->ViewMatrix).M[0][2];
  dStack_280 = (param_1->ViewMatrix).M[0][3];
  local_278 = (param_1->ViewMatrix).M[1][0];
  dStack_270 = (param_1->ViewMatrix).M[1][1];
  local_268 = (param_1->ViewMatrix).M[1][2];
  dStack_260 = (param_1->ViewMatrix).M[1][3];
  local_258 = (param_1->ViewMatrix).M[2][0];
  dStack_250 = (param_1->ViewMatrix).M[2][1];
  local_248 = (param_1->ViewMatrix).M[2][2];
  dStack_240 = (param_1->ViewMatrix).M[2][3];
  local_238 = (param_1->ViewMatrix).M[3][0];
  dStack_230 = (param_1->ViewMatrix).M[3][1];
  local_228 = (param_1->ViewMatrix).M[3][2];
  dStack_220 = (param_1->ViewMatrix).M[3][3];
  local_218 = (param_1->ProjectionMatrix).M[0][0];
  dStack_210 = (param_1->ProjectionMatrix).M[0][1];
  local_208 = (param_1->ProjectionMatrix).M[0][2];
  dStack_200 = (param_1->ProjectionMatrix).M[0][3];
  local_1f8 = (param_1->ProjectionMatrix).M[1][0];
  dStack_1f0 = (param_1->ProjectionMatrix).M[1][1];
  local_1e8 = (param_1->ProjectionMatrix).M[1][2];
  dStack_1e0 = (param_1->ProjectionMatrix).M[1][3];
  local_1d8 = (param_1->ProjectionMatrix).M[2][0];
  dStack_1d0 = (param_1->ProjectionMatrix).M[2][1];
  local_1c8 = (param_1->ProjectionMatrix).M[2][2];
  dStack_1c0 = (param_1->ProjectionMatrix).M[2][3];
  local_1b8 = (param_1->ProjectionMatrix).M[3][0];
  dStack_1b0 = (param_1->ProjectionMatrix).M[3][1];
  local_1a8 = (param_1->ProjectionMatrix).M[3][2];
  dStack_1a0 = (param_1->ProjectionMatrix).M[3][3];
  local_198 = (param_1->InvProjectionMatrix).M[0][0];
  dStack_190 = (param_1->InvProjectionMatrix).M[0][1];
  local_188 = (param_1->InvProjectionMatrix).M[0][2];
  dStack_180 = (param_1->InvProjectionMatrix).M[0][3];
  local_178 = (param_1->InvProjectionMatrix).M[1][0];
  dStack_170 = (param_1->InvProjectionMatrix).M[1][1];
  local_168 = (param_1->InvProjectionMatrix).M[1][2];
  dStack_160 = (param_1->InvProjectionMatrix).M[1][3];
  local_158 = (param_1->InvProjectionMatrix).M[2][0];
  dStack_150 = (param_1->InvProjectionMatrix).M[2][1];
  local_148 = (param_1->InvProjectionMatrix).M[2][2];
  dStack_140 = (param_1->InvProjectionMatrix).M[2][3];
  local_138 = (param_1->InvProjectionMatrix).M[3][0];
  dStack_130 = (param_1->InvProjectionMatrix).M[3][1];
  local_128 = (param_1->InvProjectionMatrix).M[3][2];
  dStack_120 = (param_1->InvProjectionMatrix).M[3][3];
  local_118 = (param_2->InvViewMatrix).M[0][0];
  dStack_110 = (param_2->InvViewMatrix).M[0][1];
  local_108 = (param_2->InvViewMatrix).M[0][2];
  dStack_100 = (param_2->InvViewMatrix).M[0][3];
  local_f8 = (param_2->InvViewMatrix).M[1][0];
  dStack_f0 = (param_2->InvViewMatrix).M[1][1];
  local_e8 = (param_2->InvViewMatrix).M[1][2];
  dStack_e0 = (param_2->InvViewMatrix).M[1][3];
  local_d8 = (param_2->InvViewMatrix).M[2][0];
  dStack_d0 = (param_2->InvViewMatrix).M[2][1];
  local_c8 = (param_2->InvViewMatrix).M[2][2];
  dStack_c0 = (param_2->InvViewMatrix).M[2][3];
  local_b8 = (param_2->InvViewMatrix).M[3][0];
  dStack_b0 = (param_2->InvViewMatrix).M[3][1];
  local_a8 = (param_2->InvViewMatrix).M[3][2];
  dStack_a0 = (param_2->InvViewMatrix).M[3][3];
  local_98 = (param_2->InvProjectionMatrix).M[0][0];
  dStack_90 = (param_2->InvProjectionMatrix).M[0][1];
  local_88 = (param_2->InvProjectionMatrix).M[0][2];
  dStack_80 = (param_2->InvProjectionMatrix).M[0][3];
  local_78 = (param_2->InvProjectionMatrix).M[1][0];
  dStack_70 = (param_2->InvProjectionMatrix).M[1][1];
  local_68 = (param_2->InvProjectionMatrix).M[1][2];
  dStack_60 = (param_2->InvProjectionMatrix).M[1][3];
  local_58 = (param_2->InvProjectionMatrix).M[2][0];
  dStack_50 = (param_2->InvProjectionMatrix).M[2][1];
  local_48 = (param_2->InvProjectionMatrix).M[2][2];
  dStack_40 = (param_2->InvProjectionMatrix).M[2][3];
  local_38 = (param_2->InvProjectionMatrix).M[3][0];
  dStack_30 = (param_2->InvProjectionMatrix).M[3][1];
  local_28 = (param_2->InvProjectionMatrix).M[3][2];
  dStack_20 = (param_2->InvProjectionMatrix).M[3][3];
  Create(__return_storage_ptr__,(FInitializer *)&local_338._s_0);
  return __return_storage_ptr__;
}

