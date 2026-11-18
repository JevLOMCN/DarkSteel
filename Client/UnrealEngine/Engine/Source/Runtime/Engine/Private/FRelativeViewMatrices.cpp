// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Create @ 14851f460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRelativeViewMatrices * __cdecl
FRelativeViewMatrices::Create(FRelativeViewMatrices *__return_storage_ptr__,FInitializer *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  double dVar17;
  undefined8 uVar18;
  TMatrix<float> *pTVar19;
  double dVar20;
  undefined1 unaff_XMM7 [16];
  double dVar21;
  undefined1 unaff_XMM8 [16];
  double dVar22;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_e8 [32];
  TVector<double>_u_0 local_c8;
  TMatrix<float> local_a8;
  ulonglong local_68;
  
  dVar5 = __real_3ed0000000000000;
  dVar20 = __real_3fc0000000000000;
  dVar4 = __real_3fe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_e8;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = (param_1->ViewToWorld).M[3][0] * __real_3ed0000000000000 + __real_3fe0000000000000
  ;
  auVar23 = roundpd(unaff_XMM9,auVar23,1);
  dVar22 = auVar23._0_8_ * __real_3fc0000000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (param_1->ViewToWorld).M[3][1] * __real_3ed0000000000000 + __real_3fe0000000000000;
  auVar23 = roundpd(unaff_XMM8,auVar2,1);
  dVar1 = (param_1->ViewToWorld).M[3][2];
  (__return_storage_ptr__->TilePosition).field0_0x0._s_0.X = (float)dVar22;
  dVar21 = auVar23._0_8_ * dVar20;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar1 * dVar5 + dVar4;
  auVar23 = roundpd(unaff_XMM7,auVar3,1);
  dVar20 = auVar23._0_8_ * dVar20;
  (__return_storage_ptr__->TilePosition).field0_0x0._s_0.Y = (float)dVar21;
  (__return_storage_ptr__->TilePosition).field0_0x0._s_0.Z = (float)dVar20;
  dVar22 = dVar22 * __real_4140000000000000;
  dVar21 = dVar21 * __real_4140000000000000;
  dVar20 = dVar20 * __real_4140000000000000;
  local_c8._s_0.X = dVar22;
  local_c8._s_0.Y = dVar21;
  local_c8._s_0.Z = dVar20;
  pTVar19 = TLargeWorldRenderScalar<double>::MakeFromRelativeWorldMatrix
                      (&local_a8,(TVector<double> *)&local_c8._s_0,&param_1->WorldToView);
  uVar18 = *(undefined8 *)(pTVar19->M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[0] = *(undefined8 *)pTVar19->M[0];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[0] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[1] = *(undefined8 *)pTVar19->M[1];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[1] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[2] = *(undefined8 *)pTVar19->M[2];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[2] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[3] + 2);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToView).M[3] = *(undefined8 *)pTVar19->M[3];
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToView).M[3] + 2) = uVar18;
  local_c8._s_0.X = dVar22;
  local_c8._s_0.Y = dVar21;
  local_c8._s_0.Z = dVar20;
  pTVar19 = TLargeWorldRenderScalar<double>::MakeToRelativeWorldMatrix
                      (&local_a8,(TVector<double> *)&local_c8._s_0,&param_1->ViewToWorld);
  uVar18 = *(undefined8 *)(pTVar19->M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[0] = *(undefined8 *)pTVar19->M[0];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[0] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[1] = *(undefined8 *)pTVar19->M[1];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[1] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[2] = *(undefined8 *)pTVar19->M[2];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[2] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[3] + 2);
  *(undefined8 *)(__return_storage_ptr__->ViewToRelativeWorld).M[3] = *(undefined8 *)pTVar19->M[3];
  *(undefined8 *)((__return_storage_ptr__->ViewToRelativeWorld).M[3] + 2) = uVar18;
  dVar1 = (param_1->ViewToClip).M[1][2];
  dVar4 = (param_1->ViewToClip).M[1][3];
  dVar5 = (param_1->ViewToClip).M[1][0];
  dVar6 = (param_1->ViewToClip).M[1][1];
  dVar7 = (param_1->ViewToClip).M[2][2];
  dVar8 = (param_1->ViewToClip).M[2][3];
  dVar9 = (param_1->ViewToClip).M[2][0];
  dVar10 = (param_1->ViewToClip).M[2][1];
  dVar11 = (param_1->ViewToClip).M[3][2];
  dVar12 = (param_1->ViewToClip).M[3][3];
  dVar13 = (param_1->ViewToClip).M[3][0];
  dVar14 = (param_1->ViewToClip).M[3][1];
  dVar15 = (param_1->ViewToClip).M[0][2];
  dVar16 = (param_1->ViewToClip).M[0][3];
  dVar17 = (param_1->ViewToClip).M[0][1];
  (__return_storage_ptr__->ViewToClip).M[0][0] = (float)(param_1->ViewToClip).M[0][0];
  (__return_storage_ptr__->ViewToClip).M[0][1] = (float)dVar17;
  (__return_storage_ptr__->ViewToClip).M[0][2] = (float)dVar15;
  (__return_storage_ptr__->ViewToClip).M[0][3] = (float)dVar16;
  (__return_storage_ptr__->ViewToClip).M[1][0] = (float)dVar5;
  (__return_storage_ptr__->ViewToClip).M[1][1] = (float)dVar6;
  (__return_storage_ptr__->ViewToClip).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->ViewToClip).M[1][3] = (float)dVar4;
  (__return_storage_ptr__->ViewToClip).M[2][0] = (float)dVar9;
  (__return_storage_ptr__->ViewToClip).M[2][1] = (float)dVar10;
  (__return_storage_ptr__->ViewToClip).M[2][2] = (float)dVar7;
  (__return_storage_ptr__->ViewToClip).M[2][3] = (float)dVar8;
  (__return_storage_ptr__->ViewToClip).M[3][0] = (float)dVar13;
  (__return_storage_ptr__->ViewToClip).M[3][1] = (float)dVar14;
  (__return_storage_ptr__->ViewToClip).M[3][2] = (float)dVar11;
  (__return_storage_ptr__->ViewToClip).M[3][3] = (float)dVar12;
  dVar1 = (param_1->ClipToView).M[1][2];
  dVar4 = (param_1->ClipToView).M[1][3];
  dVar5 = (param_1->ClipToView).M[1][0];
  dVar6 = (param_1->ClipToView).M[1][1];
  dVar7 = (param_1->ClipToView).M[2][2];
  dVar8 = (param_1->ClipToView).M[2][3];
  dVar9 = (param_1->ClipToView).M[2][0];
  dVar10 = (param_1->ClipToView).M[2][1];
  dVar11 = (param_1->ClipToView).M[3][2];
  dVar12 = (param_1->ClipToView).M[3][3];
  dVar13 = (param_1->ClipToView).M[3][0];
  dVar14 = (param_1->ClipToView).M[3][1];
  dVar15 = (param_1->ClipToView).M[0][2];
  dVar16 = (param_1->ClipToView).M[0][3];
  dVar17 = (param_1->ClipToView).M[0][1];
  (__return_storage_ptr__->ClipToView).M[0][0] = (float)(param_1->ClipToView).M[0][0];
  (__return_storage_ptr__->ClipToView).M[0][1] = (float)dVar17;
  (__return_storage_ptr__->ClipToView).M[0][2] = (float)dVar15;
  (__return_storage_ptr__->ClipToView).M[0][3] = (float)dVar16;
  (__return_storage_ptr__->ClipToView).M[1][0] = (float)dVar5;
  (__return_storage_ptr__->ClipToView).M[1][1] = (float)dVar6;
  (__return_storage_ptr__->ClipToView).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->ClipToView).M[1][3] = (float)dVar4;
  (__return_storage_ptr__->ClipToView).M[2][0] = (float)dVar9;
  (__return_storage_ptr__->ClipToView).M[2][1] = (float)dVar10;
  (__return_storage_ptr__->ClipToView).M[2][2] = (float)dVar7;
  (__return_storage_ptr__->ClipToView).M[2][3] = (float)dVar8;
  (__return_storage_ptr__->ClipToView).M[3][0] = (float)dVar13;
  (__return_storage_ptr__->ClipToView).M[3][1] = (float)dVar14;
  (__return_storage_ptr__->ClipToView).M[3][2] = (float)dVar11;
  (__return_storage_ptr__->ClipToView).M[3][3] = (float)dVar12;
  VectorMatrixMultiply
            (&local_a8,&__return_storage_ptr__->RelativeWorldToView,
             &__return_storage_ptr__->ViewToClip);
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[0] = local_a8.M[0]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[0] + 2) = local_a8.M[0]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[1] = local_a8.M[1]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[1] + 2) = local_a8.M[1]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[2] = local_a8.M[2]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[2] + 2) = local_a8.M[2]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->RelativeWorldToClip).M[3] = local_a8.M[3]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->RelativeWorldToClip).M[3] + 2) = local_a8.M[3]._8_8_;
  VectorMatrixMultiply
            (&local_a8,&__return_storage_ptr__->ClipToView,
             &__return_storage_ptr__->ViewToRelativeWorld);
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[0] = local_a8.M[0]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[0] + 2) = local_a8.M[0]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[1] = local_a8.M[1]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[1] + 2) = local_a8.M[1]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[2] = local_a8.M[2]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[2] + 2) = local_a8.M[2]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->ClipToRelativeWorld).M[3] = local_a8.M[3]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->ClipToRelativeWorld).M[3] + 2) = local_a8.M[3]._8_8_;
  local_c8._s_0.X = dVar22;
  local_c8._s_0.Y = dVar21;
  local_c8._s_0.Z = dVar20;
  pTVar19 = TLargeWorldRenderScalar<double>::MakeClampedToRelativeWorldMatrix
                      (&local_a8,(TVector<double> *)&local_c8._s_0,&param_1->PrevViewToWorld);
  uVar18 = *(undefined8 *)(pTVar19->M[0] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[0] =
       *(undefined8 *)pTVar19->M[0];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[0] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[1] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[1] =
       *(undefined8 *)pTVar19->M[1];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[1] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[2] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[2] =
       *(undefined8 *)pTVar19->M[2];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[2] + 2) = uVar18;
  uVar18 = *(undefined8 *)(pTVar19->M[3] + 2);
  *(undefined8 *)(__return_storage_ptr__->PrevViewToRelativeWorld).M[3] =
       *(undefined8 *)pTVar19->M[3];
  *(undefined8 *)((__return_storage_ptr__->PrevViewToRelativeWorld).M[3] + 2) = uVar18;
  dVar1 = (param_1->PrevClipToView).M[1][2];
  dVar4 = (param_1->PrevClipToView).M[1][3];
  dVar5 = (param_1->PrevClipToView).M[1][0];
  dVar6 = (param_1->PrevClipToView).M[1][1];
  dVar7 = (param_1->PrevClipToView).M[2][2];
  dVar8 = (param_1->PrevClipToView).M[2][3];
  dVar9 = (param_1->PrevClipToView).M[2][0];
  dVar10 = (param_1->PrevClipToView).M[2][1];
  dVar11 = (param_1->PrevClipToView).M[3][2];
  dVar12 = (param_1->PrevClipToView).M[3][3];
  dVar13 = (param_1->PrevClipToView).M[3][0];
  dVar14 = (param_1->PrevClipToView).M[3][1];
  dVar15 = (param_1->PrevClipToView).M[0][2];
  dVar16 = (param_1->PrevClipToView).M[0][3];
  dVar17 = (param_1->PrevClipToView).M[0][1];
  (__return_storage_ptr__->PrevClipToView).M[0][0] = (float)(param_1->PrevClipToView).M[0][0];
  (__return_storage_ptr__->PrevClipToView).M[0][1] = (float)dVar17;
  (__return_storage_ptr__->PrevClipToView).M[0][2] = (float)dVar15;
  (__return_storage_ptr__->PrevClipToView).M[0][3] = (float)dVar16;
  (__return_storage_ptr__->PrevClipToView).M[1][0] = (float)dVar5;
  (__return_storage_ptr__->PrevClipToView).M[1][1] = (float)dVar6;
  (__return_storage_ptr__->PrevClipToView).M[1][2] = (float)dVar1;
  (__return_storage_ptr__->PrevClipToView).M[1][3] = (float)dVar4;
  (__return_storage_ptr__->PrevClipToView).M[2][0] = (float)dVar9;
  (__return_storage_ptr__->PrevClipToView).M[2][1] = (float)dVar10;
  (__return_storage_ptr__->PrevClipToView).M[2][2] = (float)dVar7;
  (__return_storage_ptr__->PrevClipToView).M[2][3] = (float)dVar8;
  (__return_storage_ptr__->PrevClipToView).M[3][0] = (float)dVar13;
  (__return_storage_ptr__->PrevClipToView).M[3][1] = (float)dVar14;
  (__return_storage_ptr__->PrevClipToView).M[3][2] = (float)dVar11;
  (__return_storage_ptr__->PrevClipToView).M[3][3] = (float)dVar12;
  VectorMatrixMultiply
            (&local_a8,&__return_storage_ptr__->PrevClipToView,
             &__return_storage_ptr__->PrevViewToRelativeWorld);
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[0] = local_a8.M[0]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[0] + 2) = local_a8.M[0]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[1] = local_a8.M[1]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[1] + 2) = local_a8.M[1]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[2] = local_a8.M[2]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[2] + 2) = local_a8.M[2]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->PrevClipToRelativeWorld).M[3] = local_a8.M[3]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->PrevClipToRelativeWorld).M[3] + 2) = local_a8.M[3]._8_8_;
  return __return_storage_ptr__;
}

// Create @ 14851f8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRelativeViewMatrices * __cdecl
FRelativeViewMatrices::Create
          (FRelativeViewMatrices *__return_storage_ptr__,FViewMatrices *param_1,
          FViewMatrices *param_2)

{
  undefined1 auStack_338 [32];
  FInitializer local_318;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_318.ViewToWorld.M[0][0] = (param_1->InvViewMatrix).M[0][0];
  local_318.ViewToWorld.M[0][1] = (param_1->InvViewMatrix).M[0][1];
  local_318.ViewToWorld.M[0][2] = (param_1->InvViewMatrix).M[0][2];
  local_318.ViewToWorld.M[0][3] = (param_1->InvViewMatrix).M[0][3];
  local_318.ViewToWorld.M[1][0] = (param_1->InvViewMatrix).M[1][0];
  local_318.ViewToWorld.M[1][1] = (param_1->InvViewMatrix).M[1][1];
  local_318.ViewToWorld.M[1][2] = (param_1->InvViewMatrix).M[1][2];
  local_318.ViewToWorld.M[1][3] = (param_1->InvViewMatrix).M[1][3];
  local_318.ViewToWorld.M[2][0] = (param_1->InvViewMatrix).M[2][0];
  local_318.ViewToWorld.M[2][1] = (param_1->InvViewMatrix).M[2][1];
  local_318.ViewToWorld.M[2][2] = (param_1->InvViewMatrix).M[2][2];
  local_318.ViewToWorld.M[2][3] = (param_1->InvViewMatrix).M[2][3];
  local_318.ViewToWorld.M[3][0] = (param_1->InvViewMatrix).M[3][0];
  local_318.ViewToWorld.M[3][1] = (param_1->InvViewMatrix).M[3][1];
  local_318.ViewToWorld.M[3][2] = (param_1->InvViewMatrix).M[3][2];
  local_318.ViewToWorld.M[3][3] = (param_1->InvViewMatrix).M[3][3];
  local_318.WorldToView.M[0][0] = (param_1->ViewMatrix).M[0][0];
  local_318.WorldToView.M[0][1] = (param_1->ViewMatrix).M[0][1];
  local_318.WorldToView.M[0][2] = (param_1->ViewMatrix).M[0][2];
  local_318.WorldToView.M[0][3] = (param_1->ViewMatrix).M[0][3];
  local_318.WorldToView.M[1][0] = (param_1->ViewMatrix).M[1][0];
  local_318.WorldToView.M[1][1] = (param_1->ViewMatrix).M[1][1];
  local_318.WorldToView.M[1][2] = (param_1->ViewMatrix).M[1][2];
  local_318.WorldToView.M[1][3] = (param_1->ViewMatrix).M[1][3];
  local_318.WorldToView.M[2][0] = (param_1->ViewMatrix).M[2][0];
  local_318.WorldToView.M[2][1] = (param_1->ViewMatrix).M[2][1];
  local_318.WorldToView.M[2][2] = (param_1->ViewMatrix).M[2][2];
  local_318.WorldToView.M[2][3] = (param_1->ViewMatrix).M[2][3];
  local_318.WorldToView.M[3][0] = (param_1->ViewMatrix).M[3][0];
  local_318.WorldToView.M[3][1] = (param_1->ViewMatrix).M[3][1];
  local_318.WorldToView.M[3][2] = (param_1->ViewMatrix).M[3][2];
  local_318.WorldToView.M[3][3] = (param_1->ViewMatrix).M[3][3];
  local_318.ViewToClip.M[0][0] = (param_1->ProjectionMatrix).M[0][0];
  local_318.ViewToClip.M[0][1] = (param_1->ProjectionMatrix).M[0][1];
  local_318.ViewToClip.M[0][2] = (param_1->ProjectionMatrix).M[0][2];
  local_318.ViewToClip.M[0][3] = (param_1->ProjectionMatrix).M[0][3];
  local_318.ViewToClip.M[1][0] = (param_1->ProjectionMatrix).M[1][0];
  local_318.ViewToClip.M[1][1] = (param_1->ProjectionMatrix).M[1][1];
  local_318.ViewToClip.M[1][2] = (param_1->ProjectionMatrix).M[1][2];
  local_318.ViewToClip.M[1][3] = (param_1->ProjectionMatrix).M[1][3];
  local_318.ViewToClip.M[2][0] = (param_1->ProjectionMatrix).M[2][0];
  local_318.ViewToClip.M[2][1] = (param_1->ProjectionMatrix).M[2][1];
  local_318.ViewToClip.M[2][2] = (param_1->ProjectionMatrix).M[2][2];
  local_318.ViewToClip.M[2][3] = (param_1->ProjectionMatrix).M[2][3];
  local_318.ViewToClip.M[3][0] = (param_1->ProjectionMatrix).M[3][0];
  local_318.ViewToClip.M[3][1] = (param_1->ProjectionMatrix).M[3][1];
  local_318.ViewToClip.M[3][2] = (param_1->ProjectionMatrix).M[3][2];
  local_318.ViewToClip.M[3][3] = (param_1->ProjectionMatrix).M[3][3];
  local_318.ClipToView.M[0][0] = (param_1->InvProjectionMatrix).M[0][0];
  local_318.ClipToView.M[0][1] = (param_1->InvProjectionMatrix).M[0][1];
  local_318.ClipToView.M[0][2] = (param_1->InvProjectionMatrix).M[0][2];
  local_318.ClipToView.M[0][3] = (param_1->InvProjectionMatrix).M[0][3];
  local_318.ClipToView.M[1][0] = (param_1->InvProjectionMatrix).M[1][0];
  local_318.ClipToView.M[1][1] = (param_1->InvProjectionMatrix).M[1][1];
  local_318.ClipToView.M[1][2] = (param_1->InvProjectionMatrix).M[1][2];
  local_318.ClipToView.M[1][3] = (param_1->InvProjectionMatrix).M[1][3];
  local_318.ClipToView.M[2][0] = (param_1->InvProjectionMatrix).M[2][0];
  local_318.ClipToView.M[2][1] = (param_1->InvProjectionMatrix).M[2][1];
  local_318.ClipToView.M[2][2] = (param_1->InvProjectionMatrix).M[2][2];
  local_318.ClipToView.M[2][3] = (param_1->InvProjectionMatrix).M[2][3];
  local_318.ClipToView.M[3][0] = (param_1->InvProjectionMatrix).M[3][0];
  local_318.ClipToView.M[3][1] = (param_1->InvProjectionMatrix).M[3][1];
  local_318.ClipToView.M[3][2] = (param_1->InvProjectionMatrix).M[3][2];
  local_318.ClipToView.M[3][3] = (param_1->InvProjectionMatrix).M[3][3];
  local_318.PrevViewToWorld.M[0][0] = (param_2->InvViewMatrix).M[0][0];
  local_318.PrevViewToWorld.M[0][1] = (param_2->InvViewMatrix).M[0][1];
  local_318.PrevViewToWorld.M[0][2] = (param_2->InvViewMatrix).M[0][2];
  local_318.PrevViewToWorld.M[0][3] = (param_2->InvViewMatrix).M[0][3];
  local_318.PrevViewToWorld.M[1][0] = (param_2->InvViewMatrix).M[1][0];
  local_318.PrevViewToWorld.M[1][1] = (param_2->InvViewMatrix).M[1][1];
  local_318.PrevViewToWorld.M[1][2] = (param_2->InvViewMatrix).M[1][2];
  local_318.PrevViewToWorld.M[1][3] = (param_2->InvViewMatrix).M[1][3];
  local_318.PrevViewToWorld.M[2][0] = (param_2->InvViewMatrix).M[2][0];
  local_318.PrevViewToWorld.M[2][1] = (param_2->InvViewMatrix).M[2][1];
  local_318.PrevViewToWorld.M[2][2] = (param_2->InvViewMatrix).M[2][2];
  local_318.PrevViewToWorld.M[2][3] = (param_2->InvViewMatrix).M[2][3];
  local_318.PrevViewToWorld.M[3][0] = (param_2->InvViewMatrix).M[3][0];
  local_318.PrevViewToWorld.M[3][1] = (param_2->InvViewMatrix).M[3][1];
  local_318.PrevViewToWorld.M[3][2] = (param_2->InvViewMatrix).M[3][2];
  local_318.PrevViewToWorld.M[3][3] = (param_2->InvViewMatrix).M[3][3];
  local_318.PrevClipToView.M[0][0] = (param_2->InvProjectionMatrix).M[0][0];
  local_318.PrevClipToView.M[0][1] = (param_2->InvProjectionMatrix).M[0][1];
  local_318.PrevClipToView.M[0][2] = (param_2->InvProjectionMatrix).M[0][2];
  local_318.PrevClipToView.M[0][3] = (param_2->InvProjectionMatrix).M[0][3];
  local_318.PrevClipToView.M[1][0] = (param_2->InvProjectionMatrix).M[1][0];
  local_318.PrevClipToView.M[1][1] = (param_2->InvProjectionMatrix).M[1][1];
  local_318.PrevClipToView.M[1][2] = (param_2->InvProjectionMatrix).M[1][2];
  local_318.PrevClipToView.M[1][3] = (param_2->InvProjectionMatrix).M[1][3];
  local_318.PrevClipToView.M[2][0] = (param_2->InvProjectionMatrix).M[2][0];
  local_318.PrevClipToView.M[2][1] = (param_2->InvProjectionMatrix).M[2][1];
  local_318.PrevClipToView.M[2][2] = (param_2->InvProjectionMatrix).M[2][2];
  local_318.PrevClipToView.M[2][3] = (param_2->InvProjectionMatrix).M[2][3];
  local_318.PrevClipToView.M[3][0] = (param_2->InvProjectionMatrix).M[3][0];
  local_318.PrevClipToView.M[3][1] = (param_2->InvProjectionMatrix).M[3][1];
  local_318.PrevClipToView.M[3][2] = (param_2->InvProjectionMatrix).M[3][2];
  local_318.PrevClipToView.M[3][3] = (param_2->InvProjectionMatrix).M[3][3];
  Create(__return_storage_ptr__,&local_318);
  return __return_storage_ptr__;
}

