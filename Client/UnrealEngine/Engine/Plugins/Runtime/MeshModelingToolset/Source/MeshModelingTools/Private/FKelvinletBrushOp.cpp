// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 18

// operator() @ 14cc23ac0

void __thiscall
`FKelvinletBrushOp::
DisplaceKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  longlong *plVar10;
  FBiLaplacianPullKelvinlet *this_00;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  TVector<double> *pTVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  TVector<double>_u_0 local_d8;
  TVector<double> local_c0;
  TVector<double> local_a8 [6];
  
  plVar9 = *(longlong **)((longlong)this + 8);
  lVar21 = (longlong)param_1;
  uVar18 = 0;
  if (param_1 < (int)plVar9[1]) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  plVar10 = *(longlong **)((longlong)this + 0x18);
  this_00 = *(FBiLaplacianPullKelvinlet **)this;
  uVar18 = *(uint *)(*plVar9 + lVar21 * 4);
  uVar20 = (ulonglong)(uVar18 & 0x1ff);
  lVar11 = *(longlong *)(*(longlong *)(*plVar10 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
  pdVar1 = (double *)(lVar11 + uVar20 * 0x18);
  dVar3 = *pdVar1;
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar11 + 0x10 + uVar20 * 0x18);
  dVar15 = dVar2 * (double)plVar10[5] + dVar3 * (double)plVar10[3] +
           dVar4 * (double)plVar10[4] + (double)plVar10[0x15];
  dVar14 = dVar2 * (double)plVar10[8] + dVar3 * (double)plVar10[6] +
           dVar4 * (double)plVar10[7] + (double)plVar10[0x16];
  dVar16 = dVar2 * (double)plVar10[0xb] + dVar3 * (double)plVar10[9] +
           dVar4 * (double)plVar10[10] + (double)plVar10[0x17];
  local_d8._s_0.X = dVar15;
  local_d8._s_0.Y = dVar14;
  local_d8._s_0.Z = dVar16;
  pTVar19 = UE::Geometry::FBiLaplacianPullKelvinlet::Evaluate
                      (this_00,&local_c0,(TVector<double> *)&local_d8._s_0);
  dVar2 = (double)this_00[2]._padding_;
  dVar3 = (pTVar19->field0_0x0)._s_0.X;
  dVar4 = (pTVar19->field0_0x0)._s_0.Y;
  dVar5 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = UE::Geometry::FLaplacianPullKelvinlet::Evaluate
                      ((FLaplacianPullKelvinlet *)(this_00 + 1),local_a8,
                       (TVector<double> *)&local_d8._s_0);
  dVar13 = __real_3ff0000000000000 - dVar2;
  local_d8._s_0.X = dVar13 * (pTVar19->field0_0x0)._s_0.X + dVar2 * dVar3 + dVar15;
  local_d8._s_0.Y = dVar13 * (pTVar19->field0_0x0)._s_0.Y + dVar2 * dVar4 + dVar14;
  local_d8._s_0.Z = dVar13 * (pTVar19->field0_0x0)._s_0.Z + dVar2 * dVar5 + dVar16;
  dVar22 = local_d8._s_0.X - (double)plVar10[0x15];
  dVar16 = local_d8._s_0.Y - (double)plVar10[0x16];
  dVar15 = local_d8._s_0.Z - (double)plVar10[0x17];
  dVar2 = (double)plVar10[0xc];
  dVar3 = (double)plVar10[0xd];
  plVar9 = *(longlong **)((longlong)this + 0x10);
  dVar4 = (double)plVar10[0xe];
  dVar5 = (double)plVar10[0x10];
  dVar13 = (double)plVar10[0x13];
  dVar14 = (double)plVar10[0xf];
  uVar18 = 0;
  if (param_1 < (int)plVar9[1]) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  dVar6 = (double)plVar10[0x12];
  dVar7 = (double)plVar10[0x11];
  dVar8 = (double)plVar10[0x14];
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  lVar11 = *plVar9;
  *(double *)(lVar11 + lVar21 * 0x18) = dVar16 * dVar3 + dVar22 * dVar2 + dVar15 * dVar4;
  *(double *)(lVar11 + 8 + lVar21 * 0x18) = dVar16 * dVar5 + dVar22 * dVar14 + dVar15 * dVar7;
  *(double *)(lVar11 + 0x10 + lVar21 * 0x18) = dVar16 * dVar13 + dVar22 * dVar6 + dVar15 * dVar8;
  return;
}

// operator() @ 14cc23df0

void __thiscall
`FKelvinletBrushOp::
DisplaceKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  TVector<double>_u_0 local_98;
  TVector<double> local_80 [4];
  
  plVar11 = *(longlong **)((longlong)this + 8);
  lVar22 = (longlong)param_1;
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  plVar12 = *(longlong **)((longlong)this + 0x18);
  uVar19 = *(uint *)(*plVar11 + lVar22 * 4);
  dVar2 = (double)plVar12[0x16];
  uVar21 = (ulonglong)(uVar19 & 0x1ff);
  dVar3 = (double)plVar12[0x17];
  lVar13 = *(longlong *)(*(longlong *)(*plVar12 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
  pdVar1 = (double *)(lVar13 + uVar21 * 0x18);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  dVar4 = *(double *)(lVar13 + 0x10 + uVar21 * 0x18);
  dVar15 = dVar4 * (double)plVar12[5] + dVar5 * (double)plVar12[3] +
           dVar6 * (double)plVar12[4] + (double)plVar12[0x15];
  dVar17 = dVar4 * (double)plVar12[8] + dVar5 * (double)plVar12[6] +
           dVar6 * (double)plVar12[7] + dVar2;
  dVar4 = dVar4 * (double)plVar12[0xb] + dVar5 * (double)plVar12[9] +
          dVar6 * (double)plVar12[10] + dVar3;
  local_98._s_0.X = dVar15;
  local_98._s_0.Y = dVar17;
  local_98._s_0.Z = dVar4;
  pTVar20 = UE::Geometry::
            TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
            ::Evaluate(*(TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
                         **)this,local_80,(TVector<double> *)&local_98._s_0);
  local_98._s_0.Y = dVar17 + (pTVar20->field0_0x0)._s_0.Y;
  local_98._s_0.X = dVar15 + (pTVar20->field0_0x0)._s_0.X;
  local_98._s_0.Z = dVar4 + (pTVar20->field0_0x0)._s_0.Z;
  dVar2 = local_98._s_0.Y - dVar2;
  dVar16 = local_98._s_0.X - (double)plVar12[0x15];
  dVar3 = local_98._s_0.Z - dVar3;
  dVar4 = (double)plVar12[0xd];
  dVar15 = (double)plVar12[0x10];
  dVar17 = (double)plVar12[0xc];
  dVar5 = (double)plVar12[0xe];
  dVar6 = (double)plVar12[0x13];
  dVar7 = (double)plVar12[0xf];
  dVar8 = (double)plVar12[0x12];
  dVar9 = (double)plVar12[0x11];
  dVar10 = (double)plVar12[0x14];
  plVar11 = *(longlong **)((longlong)this + 0x10);
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  lVar13 = *plVar11;
  *(double *)(lVar13 + lVar22 * 0x18) = dVar2 * dVar4 + dVar16 * dVar17 + dVar3 * dVar5;
  *(double *)(lVar13 + 8 + lVar22 * 0x18) = dVar2 * dVar15 + dVar16 * dVar7 + dVar3 * dVar9;
  *(double *)(lVar13 + 0x10 + lVar22 * 0x18) = dVar2 * dVar6 + dVar16 * dVar8 + dVar3 * dVar10;
  return;
}

// operator() @ 14cc240a0

void __thiscall
`FKelvinletBrushOp::
DisplaceKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  double *pdVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  TVector<double>_u_0 local_d8;
  TVector<double> local_c0 [6];
  
  plVar4 = *(longlong **)((longlong)this + 8);
  lVar20 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  dVar10 = __real_3ff0000000000000;
  plVar5 = *(longlong **)((longlong)this + 0x18);
  pdVar6 = *(double **)this;
  uVar17 = *(uint *)(*plVar4 + lVar20 * 4);
  dVar2 = pdVar6[0x13];
  uVar19 = (ulonglong)(uVar17 & 0x1ff);
  lVar7 = *(longlong *)(*(longlong *)(*plVar5 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
  pdVar1 = (double *)(lVar7 + uVar19 * 0x18);
  dVar22 = *pdVar1;
  dVar14 = pdVar1[1];
  dVar3 = *(double *)(lVar7 + 0x10 + uVar19 * 0x18);
  dVar11 = dVar3 * (double)plVar5[5] + dVar22 * (double)plVar5[3] +
           dVar14 * (double)plVar5[4] + (double)plVar5[0x15];
  dVar21 = __real_3ff0000000000000 / *pdVar6;
  dVar13 = dVar3 * (double)plVar5[8] + dVar22 * (double)plVar5[6] +
           dVar14 * (double)plVar5[7] + (double)plVar5[0x16];
  dVar9 = dVar11 * dVar21;
  dVar25 = dVar3 * (double)plVar5[0xb] + dVar22 * (double)plVar5[9] +
           dVar14 * (double)plVar5[10] + (double)plVar5[0x17];
  dVar14 = dVar13 * dVar21;
  dVar21 = dVar25 * dVar21;
  auVar23._0_8_ = dVar21 * dVar21;
  auVar23._8_8_ = 0;
  dVar3 = dVar14 * dVar14 + dVar9 * dVar9 + auVar23._0_8_ + __real_3ff0000000000000;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar3;
  auVar24 = sqrtpd(auVar23,auVar24);
  dVar22 = auVar24._0_8_ * dVar3;
  dVar22 = __real_3ff8000000000000 / (dVar3 * dVar22) + __real_3ff0000000000000 / dVar22;
  local_d8._s_0.X = dVar11;
  local_d8._s_0.Y = dVar13;
  local_d8._s_0.Z = dVar25;
  pTVar18 = UE::Geometry::FLaplacianPullKelvinlet::Evaluate
                      ((FLaplacianPullKelvinlet *)(pdVar6 + 0xc),local_c0,
                       (TVector<double> *)&local_d8._s_0);
  dVar10 = dVar10 - dVar2;
  local_d8._s_0.X =
       (dVar14 * pdVar6[4] + dVar9 * pdVar6[3] + dVar21 * pdVar6[5]) * dVar2 *
       dVar22 * __real_3fd999999999999a + dVar10 * (pTVar18->field0_0x0)._s_0.X + dVar11;
  plVar4 = *(longlong **)((longlong)this + 0x10);
  dVar3 = local_d8._s_0.X - (double)plVar5[0x15];
  uVar17 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  dVar11 = (double)plVar5[0xc];
  local_d8._s_0.Y =
       (dVar14 * pdVar6[7] + dVar9 * pdVar6[6] + dVar21 * pdVar6[8]) * dVar2 *
       dVar22 * __real_3fd999999999999a + dVar10 * (pTVar18->field0_0x0)._s_0.Y + dVar13;
  local_d8._s_0.Z =
       (dVar14 * pdVar6[10] + dVar9 * pdVar6[9] + dVar21 * pdVar6[0xb]) * dVar22 *
       dVar2 * __real_3fd999999999999a + dVar10 * (pTVar18->field0_0x0)._s_0.Z + dVar25;
  dVar12 = local_d8._s_0.Y - (double)plVar5[0x16];
  dVar15 = local_d8._s_0.Z - (double)plVar5[0x17];
  dVar2 = (double)plVar5[0xd];
  dVar22 = (double)plVar5[0x10];
  dVar21 = (double)plVar5[0xe];
  dVar9 = (double)plVar5[0x13];
  dVar10 = (double)plVar5[0x12];
  dVar13 = (double)plVar5[0xf];
  dVar14 = (double)plVar5[0x11];
  dVar25 = (double)plVar5[0x14];
  if (uVar17 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar7 = *plVar4;
  *(double *)(lVar7 + lVar20 * 0x18) = dVar12 * dVar2 + dVar3 * dVar11 + dVar15 * dVar21;
  *(double *)(lVar7 + 8 + lVar20 * 0x18) = dVar12 * dVar22 + dVar3 * dVar13 + dVar15 * dVar14;
  *(double *)(lVar7 + 0x10 + lVar20 * 0x18) = dVar12 * dVar9 + dVar3 * dVar10 + dVar15 * dVar25;
  return;
}

// operator() @ 14cc244d0

void __thiscall
`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  TVector<double>_u_0 local_98;
  TVector<double> local_80 [4];
  
  plVar11 = *(longlong **)((longlong)this + 8);
  lVar22 = (longlong)param_1;
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  plVar12 = *(longlong **)((longlong)this + 0x18);
  uVar19 = *(uint *)(*plVar11 + lVar22 * 4);
  dVar2 = (double)plVar12[0x16];
  uVar21 = (ulonglong)(uVar19 & 0x1ff);
  dVar3 = (double)plVar12[0x17];
  lVar13 = *(longlong *)(*(longlong *)(*plVar12 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
  pdVar1 = (double *)(lVar13 + uVar21 * 0x18);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  dVar4 = *(double *)(lVar13 + 0x10 + uVar21 * 0x18);
  dVar15 = dVar4 * (double)plVar12[5] + dVar5 * (double)plVar12[3] +
           dVar6 * (double)plVar12[4] + (double)plVar12[0x15];
  dVar17 = dVar4 * (double)plVar12[8] + dVar5 * (double)plVar12[6] +
           dVar6 * (double)plVar12[7] + dVar2;
  dVar4 = dVar4 * (double)plVar12[0xb] + dVar5 * (double)plVar12[9] +
          dVar6 * (double)plVar12[10] + dVar3;
  local_98._s_0.X = dVar15;
  local_98._s_0.Y = dVar17;
  local_98._s_0.Z = dVar4;
  pTVar20 = UE::Geometry::FBiLaplacianPullKelvinlet::Evaluate
                      (*(FBiLaplacianPullKelvinlet **)this,local_80,
                       (TVector<double> *)&local_98._s_0);
  local_98._s_0.Y = dVar17 + (pTVar20->field0_0x0)._s_0.Y;
  local_98._s_0.X = dVar15 + (pTVar20->field0_0x0)._s_0.X;
  local_98._s_0.Z = dVar4 + (pTVar20->field0_0x0)._s_0.Z;
  dVar2 = local_98._s_0.Y - dVar2;
  dVar16 = local_98._s_0.X - (double)plVar12[0x15];
  dVar3 = local_98._s_0.Z - dVar3;
  dVar4 = (double)plVar12[0xd];
  dVar15 = (double)plVar12[0x10];
  dVar17 = (double)plVar12[0xc];
  dVar5 = (double)plVar12[0xe];
  dVar6 = (double)plVar12[0x13];
  dVar7 = (double)plVar12[0xf];
  dVar8 = (double)plVar12[0x12];
  dVar9 = (double)plVar12[0x11];
  dVar10 = (double)plVar12[0x14];
  plVar11 = *(longlong **)((longlong)this + 0x10);
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  lVar13 = *plVar11;
  *(double *)(lVar13 + lVar22 * 0x18) = dVar2 * dVar4 + dVar16 * dVar17 + dVar3 * dVar5;
  *(double *)(lVar13 + 8 + lVar22 * 0x18) = dVar2 * dVar15 + dVar16 * dVar7 + dVar3 * dVar9;
  *(double *)(lVar13 + 0x10 + lVar22 * 0x18) = dVar2 * dVar6 + dVar16 * dVar8 + dVar3 * dVar10;
  return;
}

// operator() @ 14cc24780

void __thiscall
`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FLaplacianPullKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  TVector<double>_u_0 local_98;
  TVector<double> local_80 [4];
  
  plVar11 = *(longlong **)((longlong)this + 8);
  lVar22 = (longlong)param_1;
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  plVar12 = *(longlong **)((longlong)this + 0x18);
  uVar19 = *(uint *)(*plVar11 + lVar22 * 4);
  dVar2 = (double)plVar12[0x16];
  uVar21 = (ulonglong)(uVar19 & 0x1ff);
  dVar3 = (double)plVar12[0x17];
  lVar13 = *(longlong *)(*(longlong *)(*plVar12 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
  pdVar1 = (double *)(lVar13 + uVar21 * 0x18);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  dVar4 = *(double *)(lVar13 + 0x10 + uVar21 * 0x18);
  dVar15 = dVar4 * (double)plVar12[5] + dVar5 * (double)plVar12[3] +
           dVar6 * (double)plVar12[4] + (double)plVar12[0x15];
  dVar17 = dVar4 * (double)plVar12[8] + dVar5 * (double)plVar12[6] +
           dVar6 * (double)plVar12[7] + dVar2;
  dVar4 = dVar4 * (double)plVar12[0xb] + dVar5 * (double)plVar12[9] +
          dVar6 * (double)plVar12[10] + dVar3;
  local_98._s_0.X = dVar15;
  local_98._s_0.Y = dVar17;
  local_98._s_0.Z = dVar4;
  pTVar20 = UE::Geometry::FLaplacianPullKelvinlet::Evaluate
                      (*(FLaplacianPullKelvinlet **)this,local_80,(TVector<double> *)&local_98._s_0)
  ;
  local_98._s_0.Y = dVar17 + (pTVar20->field0_0x0)._s_0.Y;
  local_98._s_0.X = dVar15 + (pTVar20->field0_0x0)._s_0.X;
  local_98._s_0.Z = dVar4 + (pTVar20->field0_0x0)._s_0.Z;
  dVar2 = local_98._s_0.Y - dVar2;
  dVar16 = local_98._s_0.X - (double)plVar12[0x15];
  dVar3 = local_98._s_0.Z - dVar3;
  dVar4 = (double)plVar12[0xd];
  dVar15 = (double)plVar12[0x10];
  dVar17 = (double)plVar12[0xc];
  dVar5 = (double)plVar12[0xe];
  dVar6 = (double)plVar12[0x13];
  dVar7 = (double)plVar12[0xf];
  dVar8 = (double)plVar12[0x12];
  dVar9 = (double)plVar12[0x11];
  dVar10 = (double)plVar12[0x14];
  plVar11 = *(longlong **)((longlong)this + 0x10);
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  lVar13 = *plVar11;
  *(double *)(lVar13 + lVar22 * 0x18) = dVar2 * dVar4 + dVar16 * dVar17 + dVar3 * dVar5;
  *(double *)(lVar13 + 8 + lVar22 * 0x18) = dVar2 * dVar15 + dVar16 * dVar7 + dVar3 * dVar9;
  *(double *)(lVar13 + 0x10 + lVar22 * 0x18) = dVar2 * dVar6 + dVar16 * dVar8 + dVar3 * dVar10;
  return;
}

// operator() @ 14cc24a30

void __thiscall
`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FPinchKelvinlet>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  TVector<double>_u_0 local_98;
  TVector<double> local_80 [4];
  
  plVar11 = *(longlong **)((longlong)this + 8);
  lVar22 = (longlong)param_1;
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  plVar12 = *(longlong **)((longlong)this + 0x18);
  uVar19 = *(uint *)(*plVar11 + lVar22 * 4);
  dVar2 = (double)plVar12[0x16];
  uVar21 = (ulonglong)(uVar19 & 0x1ff);
  dVar3 = (double)plVar12[0x17];
  lVar13 = *(longlong *)(*(longlong *)(*plVar12 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
  pdVar1 = (double *)(lVar13 + uVar21 * 0x18);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  dVar4 = *(double *)(lVar13 + 0x10 + uVar21 * 0x18);
  dVar15 = dVar4 * (double)plVar12[5] + dVar5 * (double)plVar12[3] +
           dVar6 * (double)plVar12[4] + (double)plVar12[0x15];
  dVar17 = dVar4 * (double)plVar12[8] + dVar5 * (double)plVar12[6] +
           dVar6 * (double)plVar12[7] + dVar2;
  dVar4 = dVar4 * (double)plVar12[0xb] + dVar5 * (double)plVar12[9] +
          dVar6 * (double)plVar12[10] + dVar3;
  local_98._s_0.X = dVar15;
  local_98._s_0.Y = dVar17;
  local_98._s_0.Z = dVar4;
  pTVar20 = UE::Geometry::FPinchKelvinlet::Evaluate
                      (*(FPinchKelvinlet **)this,local_80,(TVector<double> *)&local_98._s_0);
  local_98._s_0.Y = dVar17 + (pTVar20->field0_0x0)._s_0.Y;
  local_98._s_0.X = dVar15 + (pTVar20->field0_0x0)._s_0.X;
  local_98._s_0.Z = dVar4 + (pTVar20->field0_0x0)._s_0.Z;
  dVar2 = local_98._s_0.Y - dVar2;
  dVar16 = local_98._s_0.X - (double)plVar12[0x15];
  dVar3 = local_98._s_0.Z - dVar3;
  dVar4 = (double)plVar12[0xd];
  dVar15 = (double)plVar12[0x10];
  dVar17 = (double)plVar12[0xc];
  dVar5 = (double)plVar12[0xe];
  dVar6 = (double)plVar12[0x13];
  dVar7 = (double)plVar12[0xf];
  dVar8 = (double)plVar12[0x12];
  dVar9 = (double)plVar12[0x11];
  dVar10 = (double)plVar12[0x14];
  plVar11 = *(longlong **)((longlong)this + 0x10);
  uVar19 = 0;
  if (param_1 < (int)plVar11[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  lVar13 = *plVar11;
  *(double *)(lVar13 + lVar22 * 0x18) = dVar2 * dVar4 + dVar16 * dVar17 + dVar3 * dVar5;
  *(double *)(lVar13 + 8 + lVar22 * 0x18) = dVar2 * dVar15 + dVar16 * dVar7 + dVar3 * dVar9;
  *(double *)(lVar13 + 0x10 + lVar22 * 0x18) = dVar2 * dVar6 + dVar16 * dVar8 + dVar3 * dVar10;
  return;
}

// operator() @ 14cc24ce0

void __thiscall
`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  bool bVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 in_XMM2 [16];
  undefined8 uVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  
  uVar24 = in_XMM2._8_8_;
  plVar6 = *(longlong **)((longlong)this + 8);
  lVar17 = (longlong)param_1;
  uVar15 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar24 = in_XMM2._8_8_;
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  plVar7 = *(longlong **)((longlong)this + 0x18);
  uVar15 = *(uint *)(*plVar6 + lVar17 * 4);
  uVar16 = (ulonglong)(uVar15 & 0x1ff);
  lVar8 = *(longlong *)(*(longlong *)(*plVar7 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
  auVar23 = *(undefined1 (*) [16])(lVar8 + uVar16 * 0x18);
  dVar1 = *(double *)(lVar8 + 0x10 + uVar16 * 0x18);
  dVar18 = auVar23._0_8_;
  auVar13._4_8_ = uVar24;
  auVar13._0_4_ = auVar23._4_4_;
  auVar21._0_8_ = auVar13._0_8_ << 0x20;
  auVar21._8_4_ = auVar23._8_4_;
  auVar21._12_4_ = auVar23._12_4_;
  dVar2 = **(double **)this;
  auVar22._0_8_ = auVar21._8_8_ * (double)plVar7[10] + (double)plVar7[0x17];
  auVar22._8_8_ = auVar23._8_8_;
  dVar11 = dVar1 * (double)plVar7[5] + dVar18 * (double)plVar7[3] +
           auVar23._8_8_ * (double)plVar7[4] + (double)plVar7[0x15];
  dVar19 = __real_3ff0000000000000 / dVar2;
  dVar12 = dVar1 * (double)plVar7[0xb] + dVar18 * (double)plVar7[9] + auVar22._0_8_;
  dVar10 = dVar1 * (double)plVar7[8] + dVar18 * (double)plVar7[6] +
           auVar21._8_8_ * (double)plVar7[7] + (double)plVar7[0x16];
  dVar25 = dVar11 * dVar19;
  dVar18 = dVar12 * dVar19;
  dVar19 = dVar10 * dVar19;
  dVar1 = dVar19 * dVar19 + dVar25 * dVar25 + dVar18 * dVar18 + __real_3ff0000000000000;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar1;
  auVar23 = sqrtpd(auVar22,auVar23);
  dVar20 = auVar23._0_8_ * dVar1;
  dVar1 = (__real_3fc999999999999a / (dVar20 * dVar1) + __real_3fc1111111111111 / dVar20) *
          dVar2 * (*(double **)this)[3];
  dVar25 = (dVar1 * dVar25 + dVar11) - (double)plVar7[0x15];
  dVar20 = (dVar1 * dVar19 + dVar10) - (double)plVar7[0x16];
  dVar11 = (dVar1 * dVar18 + dVar12) - (double)plVar7[0x17];
  dVar1 = (double)plVar7[0xd];
  plVar6 = *(longlong **)((longlong)this + 0x10);
  dVar2 = (double)plVar7[0x10];
  dVar19 = (double)plVar7[0xc];
  dVar18 = (double)plVar7[0xe];
  dVar10 = (double)plVar7[0x13];
  uVar15 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  dVar12 = (double)plVar7[0xf];
  dVar3 = (double)plVar7[0x12];
  dVar4 = (double)plVar7[0x11];
  dVar5 = (double)plVar7[0x14];
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *plVar6;
  *(double *)(lVar8 + lVar17 * 0x18) = dVar20 * dVar1 + dVar25 * dVar19 + dVar11 * dVar18;
  *(double *)(lVar8 + 8 + lVar17 * 0x18) = dVar20 * dVar2 + dVar25 * dVar12 + dVar11 * dVar4;
  *(double *)(lVar8 + 0x10 + lVar17 * 0x18) = dVar20 * dVar10 + dVar25 * dVar3 + dVar11 * dVar5;
  return;
}

// operator() @ 14cc24ff0

void __thiscall
`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  
  plVar7 = *(longlong **)((longlong)this + 8);
  lVar19 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  plVar8 = *(longlong **)((longlong)this + 0x18);
  uVar17 = *(uint *)(*plVar7 + lVar19 * 4);
  uVar18 = (ulonglong)(uVar17 & 0x1ff);
  lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
  pdVar1 = (double *)(lVar9 + uVar18 * 0x18);
  dVar12 = *pdVar1;
  dVar14 = pdVar1[1];
  dVar2 = *(double *)(lVar9 + 0x10 + uVar18 * 0x18);
  pdVar1 = *(double **)this;
  dVar23 = dVar2 * (double)plVar8[5] + dVar12 * (double)plVar8[3] +
           dVar14 * (double)plVar8[4] + (double)plVar8[0x15];
  dVar11 = __real_3ff0000000000000 / *pdVar1;
  dVar15 = dVar2 * (double)plVar8[0xb] + dVar12 * (double)plVar8[9] +
           dVar14 * (double)plVar8[10] + (double)plVar8[0x17];
  dVar24 = dVar11 * dVar23;
  dVar14 = dVar2 * (double)plVar8[8] + dVar12 * (double)plVar8[6] +
           dVar14 * (double)plVar8[7] + (double)plVar8[0x16];
  dVar12 = dVar11 * dVar15;
  dVar11 = dVar11 * dVar14;
  auVar21._0_8_ = dVar12 * dVar12;
  auVar21._8_8_ = 0;
  dVar2 = dVar11 * dVar11 + dVar24 * dVar24 + auVar21._0_8_ + __real_3ff0000000000000;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = dVar2;
  auVar22 = sqrtpd(auVar21,auVar22);
  dVar20 = auVar22._0_8_ * dVar2;
  dVar20 = __real_3ff8000000000000 / (dVar20 * dVar2) + __real_3ff0000000000000 / dVar20;
  dVar23 = ((dVar11 * pdVar1[4] + dVar24 * pdVar1[3] + dVar12 * pdVar1[5]) * dVar20 *
            __real_3fd999999999999a + dVar23) - (double)plVar8[0x15];
  plVar7 = *(longlong **)((longlong)this + 0x10);
  dVar2 = (double)plVar8[0xc];
  uVar17 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  dVar13 = ((dVar11 * pdVar1[7] + dVar24 * pdVar1[6] + dVar12 * pdVar1[8]) * dVar20 *
            __real_3fd999999999999a + dVar14) - (double)plVar8[0x16];
  dVar14 = (double)plVar8[0xd];
  dVar3 = (double)plVar8[0x10];
  dVar4 = (double)plVar8[0x13];
  dVar5 = (double)plVar8[0xf];
  dVar6 = (double)plVar8[0x12];
  dVar20 = ((dVar11 * pdVar1[10] + dVar24 * pdVar1[9] + dVar12 * pdVar1[0xb]) * dVar20 *
            __real_3fd999999999999a + dVar15) - (double)plVar8[0x17];
  dVar11 = (double)plVar8[0xe];
  dVar12 = (double)plVar8[0x11];
  dVar15 = (double)plVar8[0x14];
  if (uVar17 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar9 = *plVar7;
  *(double *)(lVar9 + lVar19 * 0x18) = dVar13 * dVar14 + dVar23 * dVar2 + dVar20 * dVar11;
  *(double *)(lVar9 + 8 + lVar19 * 0x18) = dVar13 * dVar3 + dVar23 * dVar5 + dVar20 * dVar12;
  *(double *)(lVar9 + 0x10 + lVar19 * 0x18) = dVar13 * dVar4 + dVar23 * dVar6 + dVar20 * dVar15;
  return;
}

// operator() @ 14cc25360

void __thiscall
`FKelvinletBrushOp::
IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
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
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
  *this_00;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  TVector<double> local_78 [3];
  
  plVar12 = *(longlong **)((longlong)this + 8);
  lVar20 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  plVar13 = *(longlong **)((longlong)this + 0x28);
  dVar22 = (double)plVar13[0x15];
  uVar17 = *(uint *)(*plVar12 + lVar20 * 4);
  dVar2 = (double)plVar13[0x16];
  uVar19 = (ulonglong)(uVar17 & 0x1ff);
  lVar14 = *(longlong *)(*(longlong *)(*plVar13 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
  pdVar1 = (double *)(lVar14 + uVar19 * 0x18);
  local_90 = *pdVar1;
  dStack_88 = pdVar1[1];
  local_80 = *(double *)(lVar14 + 0x10 + uVar19 * 0x18);
  uVar17 = *(uint *)((longlong)this + 0x20);
  local_a8._s_0.X =
       local_80 * (double)plVar13[5] + local_90 * (double)plVar13[3] +
       dStack_88 * (double)plVar13[4] + dVar22;
  local_a8._s_0.Y =
       dStack_88 * (double)plVar13[7] + local_80 * (double)plVar13[8] +
       local_90 * (double)plVar13[6] + dVar2;
  local_a8._s_0.Z =
       dStack_88 * (double)plVar13[10] + local_80 * (double)plVar13[0xb] +
       local_90 * (double)plVar13[9] + (double)plVar13[0x17];
  if (0 < (int)uVar17) {
    dVar3 = *(double *)((longlong)this + 0x18);
    uVar19 = (ulonglong)uVar17;
    this_00 = *(TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
                **)this;
    do {
      pTVar18 = UE::Geometry::
                TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
                ::IntegrateRK3(this_00,local_78,(TVector<double> *)&local_a8._s_0,
                               dVar3 / (double)(int)uVar17);
      local_a8._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
      local_a8._s_0.X = (pTVar18->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (pTVar18->field0_0x0)._s_0.Y;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  dVar21 = local_a8._s_0.Z - (double)plVar13[0x17];
  plVar12 = *(longlong **)((longlong)this + 0x10);
  dVar2 = local_a8._s_0.Y - dVar2;
  dVar22 = local_a8._s_0.X - dVar22;
  dVar3 = (double)plVar13[0xe];
  dVar4 = (double)plVar13[0xd];
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  dVar5 = (double)plVar13[0x10];
  dVar6 = (double)plVar13[0xc];
  dVar7 = (double)plVar13[0x13];
  dVar8 = (double)plVar13[0xf];
  dVar9 = (double)plVar13[0x12];
  dVar10 = (double)plVar13[0x11];
  dVar11 = (double)plVar13[0x14];
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar14 = *plVar12;
  *(double *)(lVar14 + lVar20 * 0x18) = dVar2 * dVar4 + dVar22 * dVar6 + dVar21 * dVar3;
  *(double *)(lVar14 + 8 + lVar20 * 0x18) = dVar2 * dVar5 + dVar22 * dVar8 + dVar21 * dVar10;
  *(double *)(lVar14 + 0x10 + lVar20 * 0x18) = dVar2 * dVar7 + dVar22 * dVar9 + dVar21 * dVar11;
  return;
}

// operator() @ 14cc25670

void __thiscall
`FKelvinletBrushOp::
IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
  *this_00;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  
  plVar10 = *(longlong **)((longlong)this + 8);
  lVar29 = (longlong)param_1;
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar11 = *(longlong **)((longlong)this + 0x28);
  uVar28 = *(uint *)(*plVar10 + lVar29 * 4);
  dVar2 = (double)plVar11[0x16];
  uVar30 = (ulonglong)(uVar28 & 0x1ff);
  lVar12 = *(longlong *)(*(longlong *)(*plVar11 + 0x10) + (ulonglong)(uVar28 >> 9) * 8);
  pdVar1 = (double *)(lVar12 + uVar30 * 0x18);
  local_f8 = *pdVar1;
  dStack_f0 = pdVar1[1];
  local_e8 = *(double *)(lVar12 + 0x10 + uVar30 * 0x18);
  uVar28 = *(uint *)((longlong)this + 0x20);
  dVar18 = local_e8 * (double)plVar11[5] + local_f8 * (double)plVar11[3] +
           dStack_f0 * (double)plVar11[4] + (double)plVar11[0x15];
  dVar15 = dStack_f0 * (double)plVar11[7] + local_e8 * (double)plVar11[8] +
           local_f8 * (double)plVar11[6] + dVar2;
  dVar16 = dStack_f0 * (double)plVar11[10] + local_e8 * (double)plVar11[0xb] +
           local_f8 * (double)plVar11[9] + (double)plVar11[0x17];
  if (0 < (int)uVar28) {
    uVar30 = (ulonglong)uVar28;
    this_00 = *(TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
                **)this;
    uVar31 = SUB84(__real_4000000000000000,0);
    uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
    dVar20 = *(double *)((longlong)this + 0x18) / (double)(int)uVar28;
    dVar14 = dVar20 * __real_3fe0000000000000;
    do {
      local_188._s_0.X = dVar18;
      local_188._s_0.Y = dVar15;
      local_188._s_0.Z = dVar16;
      UE::Geometry::
      TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
      ::Evaluate(this_00,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_188._s_0);
      uVar23 = local_170._s_0.Z;
      uVar22 = local_170._s_0.Y;
      uVar21 = local_170._s_0.X;
      local_158._s_0.X = local_170._s_0.X * dVar14 + dVar18;
      local_158._s_0.Y = local_170._s_0.Y * dVar14 + dVar15;
      local_158._s_0.Z = local_170._s_0.Z * dVar14 + dVar16;
      UE::Geometry::
      TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
      ::Evaluate(this_00,(TVector<double> *)&local_140._s_0,(TVector<double> *)&local_158._s_0);
      uVar26 = local_140._s_0.Z;
      uVar25 = local_140._s_0.Y;
      uVar24 = local_140._s_0.X;
      local_128._s_0.X =
           (local_140._s_0.X * (double)CONCAT44(uVar32,uVar31) - (double)uVar21) * dVar20 + dVar18;
      local_128._s_0.Y =
           (local_140._s_0.Y * (double)CONCAT44(uVar32,uVar31) - (double)uVar22) * dVar20 + dVar15;
      local_128._s_0.Z =
           (local_140._s_0.Z * __real_4000000000000000 - (double)uVar23) * dVar20 + dVar16;
      UE::Geometry::
      TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
      ::Evaluate(this_00,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0);
      dVar18 = dVar18 + (local_110._s_0.X * __real_3fc5555555555555 +
                         (double)uVar21 * __real_3fc5555555555555 +
                        (double)uVar24 * __real_3fe5555555555555) * dVar20;
      dVar15 = dVar15 + (local_110._s_0.Y * __real_3fc5555555555555 +
                         (double)uVar22 * __real_3fc5555555555555 +
                        (double)uVar25 * __real_3fe5555555555555) * dVar20;
      uVar31 = SUB84(__real_4000000000000000,0);
      uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
      dVar16 = dVar16 + (local_110._s_0.Z * __real_3fc5555555555555 +
                         (double)uVar23 * __real_3fc5555555555555 +
                        (double)uVar26 * __real_3fe5555555555555) * dVar20;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  dVar19 = dVar18 - (double)plVar11[0x15];
  dVar17 = dVar16 - (double)plVar11[0x17];
  dVar2 = dVar15 - dVar2;
  dVar14 = (double)plVar11[0xc];
  dVar20 = (double)plVar11[0xe];
  dVar3 = (double)plVar11[0xd];
  dVar4 = (double)plVar11[0x10];
  dVar5 = (double)plVar11[0x13];
  dVar6 = (double)plVar11[0x12];
  dVar7 = (double)plVar11[0xf];
  dVar8 = (double)plVar11[0x14];
  dVar9 = (double)plVar11[0x11];
  plVar10 = *(longlong **)((longlong)this + 0x10);
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (local_188._s_0.X = dVar18, local_188._s_0.Y = dVar15, local_188._s_0.Z = dVar16,
     bVar27 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar12 = *plVar10;
  *(double *)(lVar12 + lVar29 * 0x18) = dVar2 * dVar3 + dVar19 * dVar14 + dVar17 * dVar20;
  *(double *)(lVar12 + 8 + lVar29 * 0x18) = dVar2 * dVar4 + dVar19 * dVar7 + dVar17 * dVar9;
  *(double *)(lVar12 + 0x10 + lVar29 * 0x18) = dVar2 * dVar5 + dVar19 * dVar6 + dVar17 * dVar8;
  return;
}

// operator() @ 14cc25b90

void __thiscall
`FKelvinletBrushOp::
IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
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
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
  *this_00;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  TVector<double> local_78 [3];
  
  plVar12 = *(longlong **)((longlong)this + 8);
  lVar20 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  plVar13 = *(longlong **)((longlong)this + 0x28);
  dVar22 = (double)plVar13[0x15];
  uVar17 = *(uint *)(*plVar12 + lVar20 * 4);
  dVar2 = (double)plVar13[0x16];
  uVar19 = (ulonglong)(uVar17 & 0x1ff);
  lVar14 = *(longlong *)(*(longlong *)(*plVar13 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
  pdVar1 = (double *)(lVar14 + uVar19 * 0x18);
  local_90 = *pdVar1;
  dStack_88 = pdVar1[1];
  local_80 = *(double *)(lVar14 + 0x10 + uVar19 * 0x18);
  uVar17 = *(uint *)((longlong)this + 0x20);
  local_a8._s_0.X =
       local_80 * (double)plVar13[5] + local_90 * (double)plVar13[3] +
       dStack_88 * (double)plVar13[4] + dVar22;
  local_a8._s_0.Y =
       dStack_88 * (double)plVar13[7] + local_80 * (double)plVar13[8] +
       local_90 * (double)plVar13[6] + dVar2;
  local_a8._s_0.Z =
       dStack_88 * (double)plVar13[10] + local_80 * (double)plVar13[0xb] +
       local_90 * (double)plVar13[9] + (double)plVar13[0x17];
  if (0 < (int)uVar17) {
    dVar3 = *(double *)((longlong)this + 0x18);
    uVar19 = (ulonglong)uVar17;
    this_00 = *(TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
                **)this;
    do {
      pTVar18 = UE::Geometry::
                TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
                ::IntegrateRK3(this_00,local_78,(TVector<double> *)&local_a8._s_0,
                               dVar3 / (double)(int)uVar17);
      local_a8._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
      local_a8._s_0.X = (pTVar18->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (pTVar18->field0_0x0)._s_0.Y;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  dVar21 = local_a8._s_0.Z - (double)plVar13[0x17];
  plVar12 = *(longlong **)((longlong)this + 0x10);
  dVar2 = local_a8._s_0.Y - dVar2;
  dVar22 = local_a8._s_0.X - dVar22;
  dVar3 = (double)plVar13[0xe];
  dVar4 = (double)plVar13[0xd];
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  dVar5 = (double)plVar13[0x10];
  dVar6 = (double)plVar13[0xc];
  dVar7 = (double)plVar13[0x13];
  dVar8 = (double)plVar13[0xf];
  dVar9 = (double)plVar13[0x12];
  dVar10 = (double)plVar13[0x11];
  dVar11 = (double)plVar13[0x14];
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar14 = *plVar12;
  *(double *)(lVar14 + lVar20 * 0x18) = dVar2 * dVar4 + dVar22 * dVar6 + dVar21 * dVar3;
  *(double *)(lVar14 + 8 + lVar20 * 0x18) = dVar2 * dVar5 + dVar22 * dVar8 + dVar21 * dVar10;
  *(double *)(lVar14 + 0x10 + lVar20 * 0x18) = dVar2 * dVar7 + dVar22 * dVar9 + dVar21 * dVar11;
  return;
}

// operator() @ 14cc25ea0

void __thiscall
`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  FBiLaplacianPullKelvinlet *this_00;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  
  plVar10 = *(longlong **)((longlong)this + 8);
  lVar29 = (longlong)param_1;
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar11 = *(longlong **)((longlong)this + 0x28);
  uVar28 = *(uint *)(*plVar10 + lVar29 * 4);
  dVar2 = (double)plVar11[0x16];
  uVar30 = (ulonglong)(uVar28 & 0x1ff);
  lVar12 = *(longlong *)(*(longlong *)(*plVar11 + 0x10) + (ulonglong)(uVar28 >> 9) * 8);
  pdVar1 = (double *)(lVar12 + uVar30 * 0x18);
  local_f8 = *pdVar1;
  dStack_f0 = pdVar1[1];
  local_e8 = *(double *)(lVar12 + 0x10 + uVar30 * 0x18);
  uVar28 = *(uint *)((longlong)this + 0x20);
  dVar18 = local_e8 * (double)plVar11[5] + local_f8 * (double)plVar11[3] +
           dStack_f0 * (double)plVar11[4] + (double)plVar11[0x15];
  dVar15 = dStack_f0 * (double)plVar11[7] + local_e8 * (double)plVar11[8] +
           local_f8 * (double)plVar11[6] + dVar2;
  dVar16 = dStack_f0 * (double)plVar11[10] + local_e8 * (double)plVar11[0xb] +
           local_f8 * (double)plVar11[9] + (double)plVar11[0x17];
  if (0 < (int)uVar28) {
    uVar30 = (ulonglong)uVar28;
    this_00 = *(FBiLaplacianPullKelvinlet **)this;
    uVar31 = SUB84(__real_4000000000000000,0);
    uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
    dVar20 = *(double *)((longlong)this + 0x18) / (double)(int)uVar28;
    dVar14 = dVar20 * __real_3fe0000000000000;
    do {
      local_188._s_0.X = dVar18;
      local_188._s_0.Y = dVar15;
      local_188._s_0.Z = dVar16;
      UE::Geometry::FBiLaplacianPullKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_188._s_0);
      uVar23 = local_170._s_0.Z;
      uVar22 = local_170._s_0.Y;
      uVar21 = local_170._s_0.X;
      local_158._s_0.X = local_170._s_0.X * dVar14 + dVar18;
      local_158._s_0.Y = local_170._s_0.Y * dVar14 + dVar15;
      local_158._s_0.Z = local_170._s_0.Z * dVar14 + dVar16;
      UE::Geometry::FBiLaplacianPullKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_140._s_0,(TVector<double> *)&local_158._s_0);
      uVar26 = local_140._s_0.Z;
      uVar25 = local_140._s_0.Y;
      uVar24 = local_140._s_0.X;
      local_128._s_0.X =
           (local_140._s_0.X * (double)CONCAT44(uVar32,uVar31) - (double)uVar21) * dVar20 + dVar18;
      local_128._s_0.Y =
           (local_140._s_0.Y * (double)CONCAT44(uVar32,uVar31) - (double)uVar22) * dVar20 + dVar15;
      local_128._s_0.Z =
           (local_140._s_0.Z * __real_4000000000000000 - (double)uVar23) * dVar20 + dVar16;
      UE::Geometry::FBiLaplacianPullKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0);
      dVar18 = dVar18 + (local_110._s_0.X * __real_3fc5555555555555 +
                         (double)uVar21 * __real_3fc5555555555555 +
                        (double)uVar24 * __real_3fe5555555555555) * dVar20;
      dVar15 = dVar15 + (local_110._s_0.Y * __real_3fc5555555555555 +
                         (double)uVar22 * __real_3fc5555555555555 +
                        (double)uVar25 * __real_3fe5555555555555) * dVar20;
      uVar31 = SUB84(__real_4000000000000000,0);
      uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
      dVar16 = dVar16 + (local_110._s_0.Z * __real_3fc5555555555555 +
                         (double)uVar23 * __real_3fc5555555555555 +
                        (double)uVar26 * __real_3fe5555555555555) * dVar20;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  dVar19 = dVar18 - (double)plVar11[0x15];
  dVar17 = dVar16 - (double)plVar11[0x17];
  dVar2 = dVar15 - dVar2;
  dVar14 = (double)plVar11[0xc];
  dVar20 = (double)plVar11[0xe];
  dVar3 = (double)plVar11[0xd];
  dVar4 = (double)plVar11[0x10];
  dVar5 = (double)plVar11[0x13];
  dVar6 = (double)plVar11[0x12];
  dVar7 = (double)plVar11[0xf];
  dVar8 = (double)plVar11[0x14];
  dVar9 = (double)plVar11[0x11];
  plVar10 = *(longlong **)((longlong)this + 0x10);
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (local_188._s_0.X = dVar18, local_188._s_0.Y = dVar15, local_188._s_0.Z = dVar16,
     bVar27 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar12 = *plVar10;
  *(double *)(lVar12 + lVar29 * 0x18) = dVar2 * dVar3 + dVar19 * dVar14 + dVar17 * dVar20;
  *(double *)(lVar12 + 8 + lVar29 * 0x18) = dVar2 * dVar4 + dVar19 * dVar7 + dVar17 * dVar9;
  *(double *)(lVar12 + 0x10 + lVar29 * 0x18) = dVar2 * dVar5 + dVar19 * dVar6 + dVar17 * dVar8;
  return;
}

// operator() @ 14cc263c0

void __thiscall
`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FLaplacianPullKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  FLaplacianPullKelvinlet *this_00;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  
  plVar10 = *(longlong **)((longlong)this + 8);
  lVar29 = (longlong)param_1;
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar11 = *(longlong **)((longlong)this + 0x28);
  uVar28 = *(uint *)(*plVar10 + lVar29 * 4);
  dVar2 = (double)plVar11[0x16];
  uVar30 = (ulonglong)(uVar28 & 0x1ff);
  lVar12 = *(longlong *)(*(longlong *)(*plVar11 + 0x10) + (ulonglong)(uVar28 >> 9) * 8);
  pdVar1 = (double *)(lVar12 + uVar30 * 0x18);
  local_f8 = *pdVar1;
  dStack_f0 = pdVar1[1];
  local_e8 = *(double *)(lVar12 + 0x10 + uVar30 * 0x18);
  uVar28 = *(uint *)((longlong)this + 0x20);
  dVar18 = local_e8 * (double)plVar11[5] + local_f8 * (double)plVar11[3] +
           dStack_f0 * (double)plVar11[4] + (double)plVar11[0x15];
  dVar15 = dStack_f0 * (double)plVar11[7] + local_e8 * (double)plVar11[8] +
           local_f8 * (double)plVar11[6] + dVar2;
  dVar16 = dStack_f0 * (double)plVar11[10] + local_e8 * (double)plVar11[0xb] +
           local_f8 * (double)plVar11[9] + (double)plVar11[0x17];
  if (0 < (int)uVar28) {
    uVar30 = (ulonglong)uVar28;
    this_00 = *(FLaplacianPullKelvinlet **)this;
    uVar31 = SUB84(__real_4000000000000000,0);
    uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
    dVar20 = *(double *)((longlong)this + 0x18) / (double)(int)uVar28;
    dVar14 = dVar20 * __real_3fe0000000000000;
    do {
      local_188._s_0.X = dVar18;
      local_188._s_0.Y = dVar15;
      local_188._s_0.Z = dVar16;
      UE::Geometry::FLaplacianPullKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_188._s_0);
      uVar23 = local_170._s_0.Z;
      uVar22 = local_170._s_0.Y;
      uVar21 = local_170._s_0.X;
      local_158._s_0.X = local_170._s_0.X * dVar14 + dVar18;
      local_158._s_0.Y = local_170._s_0.Y * dVar14 + dVar15;
      local_158._s_0.Z = local_170._s_0.Z * dVar14 + dVar16;
      UE::Geometry::FLaplacianPullKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_140._s_0,(TVector<double> *)&local_158._s_0);
      uVar26 = local_140._s_0.Z;
      uVar25 = local_140._s_0.Y;
      uVar24 = local_140._s_0.X;
      local_128._s_0.X =
           (local_140._s_0.X * (double)CONCAT44(uVar32,uVar31) - (double)uVar21) * dVar20 + dVar18;
      local_128._s_0.Y =
           (local_140._s_0.Y * (double)CONCAT44(uVar32,uVar31) - (double)uVar22) * dVar20 + dVar15;
      local_128._s_0.Z =
           (local_140._s_0.Z * __real_4000000000000000 - (double)uVar23) * dVar20 + dVar16;
      UE::Geometry::FLaplacianPullKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0);
      dVar18 = dVar18 + (local_110._s_0.X * __real_3fc5555555555555 +
                         (double)uVar21 * __real_3fc5555555555555 +
                        (double)uVar24 * __real_3fe5555555555555) * dVar20;
      dVar15 = dVar15 + (local_110._s_0.Y * __real_3fc5555555555555 +
                         (double)uVar22 * __real_3fc5555555555555 +
                        (double)uVar25 * __real_3fe5555555555555) * dVar20;
      uVar31 = SUB84(__real_4000000000000000,0);
      uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
      dVar16 = dVar16 + (local_110._s_0.Z * __real_3fc5555555555555 +
                         (double)uVar23 * __real_3fc5555555555555 +
                        (double)uVar26 * __real_3fe5555555555555) * dVar20;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  dVar19 = dVar18 - (double)plVar11[0x15];
  dVar17 = dVar16 - (double)plVar11[0x17];
  dVar2 = dVar15 - dVar2;
  dVar14 = (double)plVar11[0xc];
  dVar20 = (double)plVar11[0xe];
  dVar3 = (double)plVar11[0xd];
  dVar4 = (double)plVar11[0x10];
  dVar5 = (double)plVar11[0x13];
  dVar6 = (double)plVar11[0x12];
  dVar7 = (double)plVar11[0xf];
  dVar8 = (double)plVar11[0x14];
  dVar9 = (double)plVar11[0x11];
  plVar10 = *(longlong **)((longlong)this + 0x10);
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (local_188._s_0.X = dVar18, local_188._s_0.Y = dVar15, local_188._s_0.Z = dVar16,
     bVar27 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar12 = *plVar10;
  *(double *)(lVar12 + lVar29 * 0x18) = dVar2 * dVar3 + dVar19 * dVar14 + dVar17 * dVar20;
  *(double *)(lVar12 + 8 + lVar29 * 0x18) = dVar2 * dVar4 + dVar19 * dVar7 + dVar17 * dVar9;
  *(double *)(lVar12 + 0x10 + lVar29 * 0x18) = dVar2 * dVar5 + dVar19 * dVar6 + dVar17 * dVar8;
  return;
}

// operator() @ 14cc268e0

void __thiscall
`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FPinchKelvinlet>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  FPinchKelvinlet *this_00;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  
  plVar10 = *(longlong **)((longlong)this + 8);
  lVar29 = (longlong)param_1;
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  plVar11 = *(longlong **)((longlong)this + 0x28);
  uVar28 = *(uint *)(*plVar10 + lVar29 * 4);
  dVar2 = (double)plVar11[0x16];
  uVar30 = (ulonglong)(uVar28 & 0x1ff);
  lVar12 = *(longlong *)(*(longlong *)(*plVar11 + 0x10) + (ulonglong)(uVar28 >> 9) * 8);
  pdVar1 = (double *)(lVar12 + uVar30 * 0x18);
  local_f8 = *pdVar1;
  dStack_f0 = pdVar1[1];
  local_e8 = *(double *)(lVar12 + 0x10 + uVar30 * 0x18);
  uVar28 = *(uint *)((longlong)this + 0x20);
  dVar18 = local_e8 * (double)plVar11[5] + local_f8 * (double)plVar11[3] +
           dStack_f0 * (double)plVar11[4] + (double)plVar11[0x15];
  dVar15 = dStack_f0 * (double)plVar11[7] + local_e8 * (double)plVar11[8] +
           local_f8 * (double)plVar11[6] + dVar2;
  dVar16 = dStack_f0 * (double)plVar11[10] + local_e8 * (double)plVar11[0xb] +
           local_f8 * (double)plVar11[9] + (double)plVar11[0x17];
  if (0 < (int)uVar28) {
    uVar30 = (ulonglong)uVar28;
    this_00 = *(FPinchKelvinlet **)this;
    uVar31 = SUB84(__real_4000000000000000,0);
    uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
    dVar20 = *(double *)((longlong)this + 0x18) / (double)(int)uVar28;
    dVar14 = dVar20 * __real_3fe0000000000000;
    do {
      local_188._s_0.X = dVar18;
      local_188._s_0.Y = dVar15;
      local_188._s_0.Z = dVar16;
      UE::Geometry::FPinchKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_188._s_0);
      uVar23 = local_170._s_0.Z;
      uVar22 = local_170._s_0.Y;
      uVar21 = local_170._s_0.X;
      local_158._s_0.X = local_170._s_0.X * dVar14 + dVar18;
      local_158._s_0.Y = local_170._s_0.Y * dVar14 + dVar15;
      local_158._s_0.Z = local_170._s_0.Z * dVar14 + dVar16;
      UE::Geometry::FPinchKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_140._s_0,(TVector<double> *)&local_158._s_0);
      uVar26 = local_140._s_0.Z;
      uVar25 = local_140._s_0.Y;
      uVar24 = local_140._s_0.X;
      local_128._s_0.X =
           (local_140._s_0.X * (double)CONCAT44(uVar32,uVar31) - (double)uVar21) * dVar20 + dVar18;
      local_128._s_0.Y =
           (local_140._s_0.Y * (double)CONCAT44(uVar32,uVar31) - (double)uVar22) * dVar20 + dVar15;
      local_128._s_0.Z =
           (local_140._s_0.Z * __real_4000000000000000 - (double)uVar23) * dVar20 + dVar16;
      UE::Geometry::FPinchKelvinlet::Evaluate
                (this_00,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0);
      dVar18 = dVar18 + (local_110._s_0.X * __real_3fc5555555555555 +
                         (double)uVar21 * __real_3fc5555555555555 +
                        (double)uVar24 * __real_3fe5555555555555) * dVar20;
      dVar15 = dVar15 + (local_110._s_0.Y * __real_3fc5555555555555 +
                         (double)uVar22 * __real_3fc5555555555555 +
                        (double)uVar25 * __real_3fe5555555555555) * dVar20;
      uVar31 = SUB84(__real_4000000000000000,0);
      uVar32 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
      dVar16 = dVar16 + (local_110._s_0.Z * __real_3fc5555555555555 +
                         (double)uVar23 * __real_3fc5555555555555 +
                        (double)uVar26 * __real_3fe5555555555555) * dVar20;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  dVar19 = dVar18 - (double)plVar11[0x15];
  dVar17 = dVar16 - (double)plVar11[0x17];
  dVar2 = dVar15 - dVar2;
  dVar14 = (double)plVar11[0xc];
  dVar20 = (double)plVar11[0xe];
  dVar3 = (double)plVar11[0xd];
  dVar4 = (double)plVar11[0x10];
  dVar5 = (double)plVar11[0x13];
  dVar6 = (double)plVar11[0x12];
  dVar7 = (double)plVar11[0xf];
  dVar8 = (double)plVar11[0x14];
  dVar9 = (double)plVar11[0x11];
  plVar10 = *(longlong **)((longlong)this + 0x10);
  uVar28 = 0;
  if (param_1 < (int)plVar10[1]) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (local_188._s_0.X = dVar18, local_188._s_0.Y = dVar15, local_188._s_0.Z = dVar16,
     bVar27 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  lVar12 = *plVar10;
  *(double *)(lVar12 + lVar29 * 0x18) = dVar2 * dVar3 + dVar19 * dVar14 + dVar17 * dVar20;
  *(double *)(lVar12 + 8 + lVar29 * 0x18) = dVar2 * dVar4 + dVar19 * dVar7 + dVar17 * dVar9;
  *(double *)(lVar12 + 0x10 + lVar29 * 0x18) = dVar2 * dVar5 + dVar19 * dVar6 + dVar17 * dVar8;
  return;
}

// operator() @ 14cc26e00

void __thiscall
`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
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
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet> *this_00;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  TVector<double> local_78 [3];
  
  plVar12 = *(longlong **)((longlong)this + 8);
  lVar20 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  plVar13 = *(longlong **)((longlong)this + 0x28);
  dVar22 = (double)plVar13[0x15];
  uVar17 = *(uint *)(*plVar12 + lVar20 * 4);
  dVar2 = (double)plVar13[0x16];
  uVar19 = (ulonglong)(uVar17 & 0x1ff);
  lVar14 = *(longlong *)(*(longlong *)(*plVar13 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
  pdVar1 = (double *)(lVar14 + uVar19 * 0x18);
  local_90 = *pdVar1;
  dStack_88 = pdVar1[1];
  local_80 = *(double *)(lVar14 + 0x10 + uVar19 * 0x18);
  uVar17 = *(uint *)((longlong)this + 0x20);
  local_a8._s_0.X =
       local_80 * (double)plVar13[5] + local_90 * (double)plVar13[3] +
       dStack_88 * (double)plVar13[4] + dVar22;
  local_a8._s_0.Y =
       dStack_88 * (double)plVar13[7] + local_80 * (double)plVar13[8] +
       local_90 * (double)plVar13[6] + dVar2;
  local_a8._s_0.Z =
       dStack_88 * (double)plVar13[10] + local_80 * (double)plVar13[0xb] +
       local_90 * (double)plVar13[9] + (double)plVar13[0x17];
  if (0 < (int)uVar17) {
    dVar3 = *(double *)((longlong)this + 0x18);
    uVar19 = (ulonglong)uVar17;
    this_00 = *(TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet> **)this;
    do {
      pTVar18 = UE::Geometry::TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet>::IntegrateRK3
                          (this_00,local_78,(TVector<double> *)&local_a8._s_0,
                           dVar3 / (double)(int)uVar17);
      local_a8._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
      local_a8._s_0.X = (pTVar18->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (pTVar18->field0_0x0)._s_0.Y;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  dVar21 = local_a8._s_0.Z - (double)plVar13[0x17];
  plVar12 = *(longlong **)((longlong)this + 0x10);
  dVar2 = local_a8._s_0.Y - dVar2;
  dVar22 = local_a8._s_0.X - dVar22;
  dVar3 = (double)plVar13[0xe];
  dVar4 = (double)plVar13[0xd];
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  dVar5 = (double)plVar13[0x10];
  dVar6 = (double)plVar13[0xc];
  dVar7 = (double)plVar13[0x13];
  dVar8 = (double)plVar13[0xf];
  dVar9 = (double)plVar13[0x12];
  dVar10 = (double)plVar13[0x11];
  dVar11 = (double)plVar13[0x14];
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar14 = *plVar12;
  *(double *)(lVar14 + lVar20 * 0x18) = dVar2 * dVar4 + dVar22 * dVar6 + dVar21 * dVar3;
  *(double *)(lVar14 + 8 + lVar20 * 0x18) = dVar2 * dVar5 + dVar22 * dVar8 + dVar21 * dVar10;
  *(double *)(lVar14 + 0x10 + lVar20 * 0x18) = dVar2 * dVar7 + dVar22 * dVar9 + dVar21 * dVar11;
  return;
}

// operator() @ 14cc27110

void __thiscall
`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
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
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet> *this_00;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  TVector<double> local_78 [3];
  
  plVar12 = *(longlong **)((longlong)this + 8);
  lVar20 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  plVar13 = *(longlong **)((longlong)this + 0x28);
  dVar22 = (double)plVar13[0x15];
  uVar17 = *(uint *)(*plVar12 + lVar20 * 4);
  dVar2 = (double)plVar13[0x16];
  uVar19 = (ulonglong)(uVar17 & 0x1ff);
  lVar14 = *(longlong *)(*(longlong *)(*plVar13 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
  pdVar1 = (double *)(lVar14 + uVar19 * 0x18);
  local_90 = *pdVar1;
  dStack_88 = pdVar1[1];
  local_80 = *(double *)(lVar14 + 0x10 + uVar19 * 0x18);
  uVar17 = *(uint *)((longlong)this + 0x20);
  local_a8._s_0.X =
       local_80 * (double)plVar13[5] + local_90 * (double)plVar13[3] +
       dStack_88 * (double)plVar13[4] + dVar22;
  local_a8._s_0.Y =
       dStack_88 * (double)plVar13[7] + local_80 * (double)plVar13[8] +
       local_90 * (double)plVar13[6] + dVar2;
  local_a8._s_0.Z =
       dStack_88 * (double)plVar13[10] + local_80 * (double)plVar13[0xb] +
       local_90 * (double)plVar13[9] + (double)plVar13[0x17];
  if (0 < (int)uVar17) {
    dVar3 = *(double *)((longlong)this + 0x18);
    uVar19 = (ulonglong)uVar17;
    this_00 = *(TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet> **)this;
    do {
      pTVar18 = UE::Geometry::TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet>::IntegrateRK3
                          (this_00,local_78,(TVector<double> *)&local_a8._s_0,
                           dVar3 / (double)(int)uVar17);
      local_a8._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
      local_a8._s_0.X = (pTVar18->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (pTVar18->field0_0x0)._s_0.Y;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  dVar21 = local_a8._s_0.Z - (double)plVar13[0x17];
  plVar12 = *(longlong **)((longlong)this + 0x10);
  dVar2 = local_a8._s_0.Y - dVar2;
  dVar22 = local_a8._s_0.X - dVar22;
  dVar3 = (double)plVar13[0xe];
  dVar4 = (double)plVar13[0xd];
  uVar17 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  dVar5 = (double)plVar13[0x10];
  dVar6 = (double)plVar13[0xc];
  dVar7 = (double)plVar13[0x13];
  dVar8 = (double)plVar13[0xf];
  dVar9 = (double)plVar13[0x12];
  dVar10 = (double)plVar13[0x11];
  dVar11 = (double)plVar13[0x14];
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar14 = *plVar12;
  *(double *)(lVar14 + lVar20 * 0x18) = dVar2 * dVar4 + dVar22 * dVar6 + dVar21 * dVar3;
  *(double *)(lVar14 + 8 + lVar20 * 0x18) = dVar2 * dVar5 + dVar22 * dVar8 + dVar21 * dVar10;
  *(double *)(lVar14 + 0x10 + lVar20 * 0x18) = dVar2 * dVar7 + dVar22 * dVar9 + dVar21 * dVar11;
  return;
}

// ApplyBrush @ 14cc36590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FKelvinletBrushOp::ApplyBrush
          (FKelvinletBrushOp *this,FKelvinletBrushOpProperties *param_1,TMatrix<double> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  <lambda_1> local_res8;
  TVector<double>_u_0 local_868;
  code *local_850;
  double **local_848;
  TArrayView<std::nullptr_t,int> local_840;
  code *local_830;
  double **local_828;
  TArrayView<std::nullptr_t,int> local_820;
  code *local_810;
  double **local_808;
  TArrayView<std::nullptr_t,int> local_800;
  code *local_7f0;
  double **local_7e8;
  TArrayView<std::nullptr_t,int> local_7e0;
  code *local_7d0;
  double **local_7c8;
  TArrayView<std::nullptr_t,int> local_7c0;
  code *local_7b0;
  double **local_7a8;
  TArrayView<std::nullptr_t,int> local_7a0;
  code *local_790;
  double **local_788;
  TArrayView<std::nullptr_t,int> local_780;
  code *local_770;
  double **local_768;
  TArrayView<std::nullptr_t,int> local_760;
  code *local_750;
  double **local_748;
  TArrayView<std::nullptr_t,int> local_740;
  code *local_730;
  double **local_728;
  TArrayView<std::nullptr_t,int> local_720;
  code *local_710;
  double **local_708;
  TArrayView<std::nullptr_t,int> local_700;
  code *local_6f0;
  double **local_6e8;
  code *local_6e0;
  double **local_6d8;
  code *local_6d0;
  double **local_6c8;
  code *local_6c0;
  double **local_6b8;
  code *local_6b0;
  double **local_6a8;
  TArrayView<std::nullptr_t,int> local_6a0;
  double local_690;
  double local_688;
  double local_680;
  double local_678;
  double local_670;
  double local_668;
  double local_660;
  double local_658;
  double local_650;
  double local_648;
  double local_640;
  double local_638;
  double local_630;
  double local_628;
  double local_620;
  double local_618;
  double local_610;
  double local_608;
  double *local_600;
  TArray<int,TSizedDefaultAllocator<32>_> *local_5f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_5f0;
  FKelvinletBrushOp *local_5e8;
  double *local_5e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_5d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_5d0;
  FKelvinletBrushOp *local_5c8;
  double *local_5c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_5b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_5b0;
  FKelvinletBrushOp *local_5a8;
  double *local_5a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_598;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_590;
  FKelvinletBrushOp *local_588;
  double *local_580;
  TArray<int,TSizedDefaultAllocator<32>_> *local_578;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_570;
  FKelvinletBrushOp *local_568;
  double *local_560;
  TArray<int,TSizedDefaultAllocator<32>_> *local_558;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_550;
  FKelvinletBrushOp *local_548;
  double *local_540;
  TArray<int,TSizedDefaultAllocator<32>_> *local_538;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_530;
  FKelvinletBrushOp *local_528;
  double *local_520;
  TArray<int,TSizedDefaultAllocator<32>_> *local_518;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_510;
  FKelvinletBrushOp *local_508;
  double *local_500;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_4f0;
  double local_4e8;
  int local_4e0;
  FKelvinletBrushOp *local_4d8;
  double *local_4d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_4c0;
  double local_4b8;
  int local_4b0;
  FKelvinletBrushOp *local_4a8;
  double *local_4a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_498;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_490;
  double local_488;
  int local_480;
  FKelvinletBrushOp *local_478;
  double *local_470;
  TArray<int,TSizedDefaultAllocator<32>_> *local_468;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_460;
  double local_458;
  int local_450;
  FKelvinletBrushOp *local_448;
  double *local_440;
  TArray<int,TSizedDefaultAllocator<32>_> *local_438;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_430;
  double local_428;
  int local_420;
  FKelvinletBrushOp *local_418;
  double *local_410;
  TArray<int,TSizedDefaultAllocator<32>_> *local_408;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_400;
  double local_3f8;
  int local_3f0;
  FKelvinletBrushOp *local_3e8;
  double *local_3e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3d0;
  double local_3c8;
  int local_3c0;
  FKelvinletBrushOp *local_3b8;
  double *local_3b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3a0;
  double local_398;
  int local_390;
  FKelvinletBrushOp *local_388;
  double local_378;
  double local_370;
  double local_368;
  undefined8 local_360;
  undefined8 local_358;
  uint local_350;
  uint uStack_34c;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  uint local_328;
  uint uStack_324;
  undefined8 local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  double local_2f0;
  undefined8 local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  undefined8 local_2b8;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  undefined8 local_238;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  uint local_140;
  uint uStack_13c;
  double dStack_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  
  ExtractTransform(this,param_2);
  iVar4 = param_1->NumSteps;
  this->NumSteps = (double)iVar4;
  uVar12 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  switch(param_1->Mode) {
  case ScaleKelvinlet:
    local_688 = __real_3fb45f306446f9b4 / param_1->Mu;
    iVar5 = param_3->ArrayNum;
    dVar1 = this->TimeStep;
    local_680 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_678 = (param_1->Direction).field0_0x0._s_0.X;
    local_690 = param_1->Size;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_600 = &local_690;
    if (iVar4 == 0) {
      local_850 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_848 = &local_600;
      local_6a0.DataPtr = (void **)0x0;
      local_6a0.ArrayNum = 0;
      local_5f0 = param_4;
      local_5f8 = param_3;
      local_5e8 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_850,
                 local_res8,None,&local_6a0);
    }
    else {
      local_830 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_828 = &local_500;
      local_840.DataPtr = (void **)0x0;
      local_840.ArrayNum = 0;
      local_4f0 = param_4;
      local_500 = local_600;
      local_4f8 = param_3;
      local_4e8 = dVar1;
      local_4e0 = iVar4;
      local_4d8 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_830,
                 local_res8,None,&local_840);
    }
    break;
  case PinchKelvinlet:
    auVar3 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
    iVar5 = param_3->ArrayNum;
    local_310 = __real_3fb45f306446f9b4 / param_1->Mu;
    dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
    local_308 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_318 = param_1->Size;
    uVar10 = auVar3._8_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    uVar11 = auVar3._12_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_300 = __real_3ff0000000000000 /
                (local_308 * __real_4010000000000000 - __real_4014000000000000);
    local_2f0 = dVar1 * __real_3fe0000000000000 + dVar1 * __real_3fe0000000000000;
    local_2e8 = CONCAT44(uVar11,uVar10);
    local_2c8 = CONCAT44(uVar11,uVar10);
    dVar1 = this->TimeStep;
    local_2d0 = auVar3._0_8_ * __real_3fe0000000000000 + auVar3._0_8_ * __real_3fe0000000000000;
    local_2f8 = 0;
    local_2d8 = 0;
    local_2b8 = 0;
    local_2e0 = local_2f0;
    local_2c0 = local_2d0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_540 = &local_318;
    if (iVar4 == 0) {
      local_6d8 = &local_540;
      local_6e0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FPinchKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_530 = param_4;
      local_538 = param_3;
      local_528 = this;
      ParallelFor(iVar5,(TFunctionRef<void___cdecl(int)> *)&local_6e0,false,false);
    }
    else {
      local_6c8 = &local_410;
      local_6d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FPinchKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_400 = param_4;
      local_410 = local_540;
      local_408 = param_3;
      local_3f8 = dVar1;
      local_3f0 = iVar4;
      local_3e8 = this;
      ParallelFor(iVar5,(TFunctionRef<void___cdecl(int)> *)&local_6d0,false,false);
    }
    break;
  case TwistKelvinlet:
    local_370 = __real_3fb45f306446f9b4 / param_1->Mu;
    iVar5 = param_3->ArrayNum;
    local_328 = *(uint *)&(param_1->Direction).field0_0x0;
    uStack_324 = *(uint *)((longlong)&(param_1->Direction).field0_0x0 + 4);
    local_350 = *(uint *)((longlong)&(param_1->Direction).field0_0x0 + 8);
    uStack_34c = *(uint *)((longlong)&(param_1->Direction).field0_0x0 + 0xc);
    local_348 = *(undefined8 *)((longlong)&(param_1->Direction).field0_0x0 + 0x10);
    dVar1 = this->TimeStep;
    local_368 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_360 = 0;
    local_378 = param_1->Size;
    local_358 = CONCAT44((uint)((ulonglong)local_348 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         (uint)local_348 ^ (uint)__xmm_80000000000000008000000000000000);
    local_338 = CONCAT44(uStack_324 ^ __xmm_80000000000000008000000000000000._4_4_,
                         local_328 ^ (uint)__xmm_80000000000000008000000000000000);
    local_340 = 0;
    local_330 = CONCAT44(uStack_34c ^ __xmm_80000000000000008000000000000000._4_4_,
                         local_350 ^ (uint)__xmm_80000000000000008000000000000000);
    local_320 = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_560 = &local_378;
    if (iVar4 == 0) {
      local_710 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_708 = &local_560;
      local_720.DataPtr = (void **)0x0;
      local_720.ArrayNum = 0;
      local_550 = param_4;
      local_558 = param_3;
      local_548 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_710,
                 local_res8,None,&local_720);
    }
    else {
      local_6f0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_6e8 = &local_440;
      local_700.DataPtr = (void **)0x0;
      local_700.ArrayNum = 0;
      local_430 = param_4;
      local_440 = local_560;
      local_438 = param_3;
      local_428 = dVar1;
      local_420 = iVar4;
      local_418 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_6f0,
                 local_res8,None,&local_700);
    }
    break;
  case PullKelvinlet:
    local_290 = (param_1->Direction).field0_0x0._s_0.X;
    local_288 = (param_1->Direction).field0_0x0._s_0.Y;
    iVar5 = param_3->ArrayNum;
    local_280 = (param_1->Direction).field0_0x0._s_0.Z;
    local_2a8 = param_1->Size;
    local_2a0 = __real_3fb45f306446f9b4 / param_1->Mu;
    local_298 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_240 = __real_3ff0000000000000 / (__real_4008000000000000 - (local_298 + local_298));
    local_278 = local_240 * __real_3f93813813813814;
    local_240 = local_240 * __real_3fd999999999999a;
    dVar1 = this->TimeStep;
    dVar2 = param_1->FallOff;
    uVar8 = SUB84(dVar2,0);
    uVar9 = (int)((ulonglong)dVar2 >> 0x20);
    if (__real_3ff0000000000000 <= dVar2) {
      uVar8 = SUB84(__real_3ff0000000000000,0);
      uVar9 = uVar12;
    }
    if ((double)CONCAT44(uVar9,uVar8) <= 0.0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    local_238 = CONCAT44(uVar9,uVar8);
    local_270 = local_2a8;
    local_268 = local_2a0;
    local_260 = local_298;
    local_258 = local_290;
    local_250 = local_288;
    local_248 = local_280;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_5e0 = &local_2a8;
    if (iVar4 == 0) {
      local_810 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_808 = &local_5e0;
      local_820.DataPtr = (void **)0x0;
      local_820.ArrayNum = 0;
      local_5d0 = param_4;
      local_5d8 = param_3;
      local_5c8 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_810,
                 local_res8,None,&local_820);
    }
    else {
      local_7f0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_7e8 = &local_4d0;
      local_800.DataPtr = (void **)0x0;
      local_800.ArrayNum = 0;
      local_4c0 = param_4;
      local_4d0 = local_5e0;
      local_4c8 = param_3;
      local_4b8 = dVar1;
      local_4b0 = iVar4;
      local_4a8 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_7f0,
                 local_res8,None,&local_800);
    }
    break;
  case LaplacianPullKelvinlet:
    local_630 = __real_3fb45f306446f9b4 / param_1->Mu;
    iVar5 = param_3->ArrayNum;
    local_620 = (param_1->Direction).field0_0x0._s_0.X;
    local_618 = (param_1->Direction).field0_0x0._s_0.Y;
    local_610 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar1 = this->TimeStep;
    local_628 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_638 = param_1->Size;
    local_608 = __real_3fd999999999999a / (__real_4008000000000000 - (local_628 + local_628));
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_5a0 = &local_638;
    if (iVar4 == 0) {
      local_790 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FLaplacianPullKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_788 = &local_5a0;
      local_7a0.DataPtr = (void **)0x0;
      local_7a0.ArrayNum = 0;
      local_590 = param_4;
      local_598 = param_3;
      local_588 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_790,
                 local_res8,None,&local_7a0);
    }
    else {
      local_770 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FLaplacianPullKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_768 = &local_3b0;
      local_780.DataPtr = (void **)0x0;
      local_780.ArrayNum = 0;
      local_3a0 = param_4;
      local_3b0 = local_5a0;
      local_3a8 = param_3;
      local_398 = dVar1;
      local_390 = iVar4;
      local_388 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_770,
                 local_res8,None,&local_780);
    }
    break;
  case BiLaplacianPullKelvinlet:
    local_668 = __real_3fb45f306446f9b4 / param_1->Mu;
    iVar5 = param_3->ArrayNum;
    local_658 = (param_1->Direction).field0_0x0._s_0.X;
    local_650 = (param_1->Direction).field0_0x0._s_0.Y;
    local_648 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar1 = this->TimeStep;
    local_660 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_670 = param_1->Size;
    local_640 = __real_3f93813813813814 / (__real_4008000000000000 - (local_660 + local_660));
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_580 = &local_670;
    if (iVar4 == 0) {
      local_750 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_748 = &local_580;
      local_760.DataPtr = (void **)0x0;
      local_760.ArrayNum = 0;
      local_570 = param_4;
      local_578 = param_3;
      local_568 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_750,
                 local_res8,None,&local_760);
    }
    else {
      local_730 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_728 = &local_470;
      local_740.DataPtr = (void **)0x0;
      local_740.ArrayNum = 0;
      local_460 = param_4;
      local_470 = local_580;
      local_468 = param_3;
      local_458 = dVar1;
      local_450 = iVar4;
      local_448 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_730,
                 local_res8,None,&local_740);
    }
    break;
  default:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\KelvinletBrushOp.h"
                       ,0x29e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    break;
  case LaplacianTwistPullKelvinlet:
    local_868._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
    local_868._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
    local_868._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
    UE::Geometry::Normalize<double>((TVector<double> *)&local_868._s_0,0.0);
    dVar1 = param_1->Speed;
    local_188 = param_1->Size;
    dStack_180 = __real_3fb45f306446f9b4 / param_1->Mu;
    iVar5 = param_3->ArrayNum;
    local_110 = (param_1->Direction).field0_0x0._s_0.X;
    local_108 = (param_1->Direction).field0_0x0._s_0.Y;
    local_100 = (param_1->Direction).field0_0x0._s_0.Z;
    dStack_138 = local_868._s_0.X * dVar1;
    uVar10 = SUB84(local_868._s_0.Z * dVar1,0);
    uVar11 = (uint)((ulonglong)(local_868._s_0.Z * dVar1) >> 0x20);
    dVar1 = local_868._s_0.Y * dVar1;
    local_178 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_140 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uStack_13c = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    uStack_148 = CONCAT44((uint)((ulonglong)dStack_138 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dStack_138,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_130 = 0;
    uStack_168 = CONCAT44(uVar11 ^ __xmm_80000000000000008000000000000000._4_4_,
                          uVar10 ^ (uint)__xmm_80000000000000008000000000000000);
    local_170 = 0;
    dVar2 = this->TimeStep;
    local_150 = 0;
    local_160._8_4_ = uVar10;
    local_160._0_8_ = dVar1;
    local_160._12_4_ = uVar11;
    local_f8 = __real_3fd999999999999a / (__real_4008000000000000 - (local_178 + local_178));
    local_f0 = __real_3fe0000000000000;
    local_128 = local_188;
    local_120 = dStack_180;
    local_118 = local_178;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_520 = &local_188;
    if (iVar4 == 0) {
      local_6b8 = &local_520;
      local_6c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_510 = param_4;
      local_518 = param_3;
      local_508 = this;
      ParallelFor(iVar5,(TFunctionRef<void___cdecl(int)> *)&local_6c0,false,false);
    }
    else {
      local_6a8 = &local_3e0;
      local_6b0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_3d0 = param_4;
      local_3e0 = local_520;
      local_3d8 = param_3;
      local_3c8 = dVar2;
      local_3c0 = iVar4;
      local_3b8 = this;
      ParallelFor(iVar5,(TFunctionRef<void___cdecl(int)> *)&local_6b0,false,false);
    }
    break;
  case SharpPullKelvinlet:
    local_210 = (param_1->Direction).field0_0x0._s_0.X;
    local_208 = (param_1->Direction).field0_0x0._s_0.Y;
    iVar5 = param_3->ArrayNum;
    local_200 = (param_1->Direction).field0_0x0._s_0.Z;
    local_228 = param_1->Size;
    local_220 = __real_3fb45f306446f9b4 / param_1->Mu;
    local_218 = __real_3fd0000000000000 / (__real_3ff0000000000000 - param_1->Nu);
    local_1c0 = __real_3ff0000000000000 / (__real_4008000000000000 - (local_218 + local_218));
    local_1f8 = local_1c0 * ___real_3f6a01a01a01a01a;
    local_1c0 = local_1c0 * __real_3fb999999999999a;
    dVar1 = this->TimeStep;
    dVar2 = param_1->FallOff;
    uVar8 = SUB84(dVar2,0);
    uVar9 = (int)((ulonglong)dVar2 >> 0x20);
    if (__real_3ff0000000000000 <= dVar2) {
      uVar8 = SUB84(__real_3ff0000000000000,0);
      uVar9 = uVar12;
    }
    if ((double)CONCAT44(uVar9,uVar8) <= 0.0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    local_1b8 = CONCAT44(uVar9,uVar8);
    local_1f0 = local_228;
    local_1e8 = local_220;
    local_1e0 = local_218;
    local_1d8 = local_210;
    local_1d0 = local_208;
    local_1c8 = local_200;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
    local_5c0 = &local_228;
    if (iVar4 == 0) {
      local_7d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_7c8 = &local_5c0;
      local_7e0.DataPtr = (void **)0x0;
      local_7e0.ArrayNum = 0;
      local_5b0 = param_4;
      local_5b8 = param_3;
      local_5a8 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_7d0,
                 local_res8,None,&local_7e0);
    }
    else {
      local_7b0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_7a8 = &local_4a0;
      local_7c0.DataPtr = (void **)0x0;
      local_7c0.ArrayNum = 0;
      local_490 = param_4;
      local_4a0 = local_5c0;
      local_498 = param_3;
      local_488 = dVar1;
      local_480 = iVar4;
      local_478 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_7b0,
                 local_res8,None,&local_7c0);
    }
  }
  return;
}

// ExtractTransform @ 14cc574e0

void __thiscall
FKelvinletBrushOp::ExtractTransform(FKelvinletBrushOp *this,TMatrix<double> *param_1)

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
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  
  (this->WorldToBrushMat).Row0.field0_0x0._s_0.X = param_1->M[0][0];
  (this->WorldToBrushMat).Row0.field0_0x0._s_0.Y = param_1->M[0][1];
  (this->WorldToBrushMat).Row0.field0_0x0._s_0.Z = param_1->M[0][2];
  (this->WorldToBrushMat).Row1.field0_0x0._s_0.X = param_1->M[1][0];
  (this->WorldToBrushMat).Row1.field0_0x0._s_0.Y = param_1->M[1][1];
  (this->WorldToBrushMat).Row1.field0_0x0._s_0.Z = param_1->M[1][2];
  (this->WorldToBrushMat).Row2.field0_0x0._s_0.X = param_1->M[2][0];
  (this->WorldToBrushMat).Row2.field0_0x0._s_0.Y = param_1->M[2][1];
  (this->WorldToBrushMat).Row2.field0_0x0._s_0.Z = param_1->M[2][2];
  (this->Translation).field0_0x0._s_0.X = param_1->M[3][0];
  (this->Translation).field0_0x0._s_0.Y = param_1->M[3][1];
  (this->Translation).field0_0x0._s_0.Z = param_1->M[3][2];
  dVar1 = param_1->M[0][2];
  dVar2 = param_1->M[0][3];
  dVar3 = param_1->M[1][2];
  dVar4 = param_1->M[2][3];
  dVar5 = param_1->M[2][2];
  dVar6 = param_1->M[3][3];
  dVar7 = param_1->M[3][2];
  dVar8 = param_1->M[1][3];
  dVar9 = param_1->M[2][1];
  dVar17 = param_1->M[3][1];
  dVar15 = dVar1 * dVar8 - dVar2 * dVar3;
  dVar13 = dVar4 * dVar1 - dVar5 * dVar2;
  dVar10 = param_1->M[1][1];
  dVar14 = dVar4 * dVar3 - dVar5 * dVar8;
  dVar11 = param_1->M[0][1];
  dVar2 = dVar6 * dVar1 - dVar7 * dVar2;
  dVar1 = dVar6 * dVar5 - dVar7 * dVar4;
  dVar3 = dVar6 * dVar3 - dVar7 * dVar8;
  dVar1 = ((((dVar1 * dVar10 - dVar3 * dVar9) + dVar14 * dVar17) * param_1->M[0][0] -
           ((dVar1 * dVar11 - dVar2 * dVar9) + dVar13 * dVar17) * param_1->M[1][0]) +
          ((dVar3 * dVar11 - dVar2 * dVar10) + dVar15 * dVar17) * param_1->M[2][0]) -
          ((dVar14 * dVar11 - dVar13 * dVar10) + dVar15 * dVar9) * param_1->M[3][0];
  uVar18 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar19,uVar18) < __real_3f1a36e2eb1c432d ||
       (double)CONCAT44(uVar19,uVar18) == __real_3f1a36e2eb1c432d) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::Abs(WorldToBrush.Determinant()) > 1.e-4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\KelvinletBrushOp.h"
                          ,0x223,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  dVar1 = (this->WorldToBrushMat).Row1.field0_0x0._s_0.Z;
  dVar2 = (this->WorldToBrushMat).Row0.field0_0x0._s_0.Y;
  dVar3 = (this->WorldToBrushMat).Row0.field0_0x0._s_0.Z;
  dVar4 = (this->WorldToBrushMat).Row2.field0_0x0._s_0.Y;
  dVar5 = (this->WorldToBrushMat).Row2.field0_0x0._s_0.Z;
  dVar6 = (this->WorldToBrushMat).Row2.field0_0x0._s_0.X;
  dVar7 = (this->WorldToBrushMat).Row1.field0_0x0._s_0.X;
  dVar8 = (this->WorldToBrushMat).Row1.field0_0x0._s_0.Y;
  dVar9 = (this->WorldToBrushMat).Row0.field0_0x0._s_0.X;
  dVar10 = dVar5 * dVar8 - dVar4 * dVar1;
  dVar11 = dVar4 * dVar3 - dVar5 * dVar2;
  dVar13 = dVar1 * dVar2 - dVar8 * dVar3;
  dVar17 = dVar7 * dVar11 + dVar9 * dVar10 + dVar6 * dVar13;
  if (((double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       __real_3cb0000000000000) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8115802994596904758>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MatrixTypes.h"
                          ,0xca,"TMathUtil<RealType>::Abs(det) >= TMathUtil<RealType>::Epsilon"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  dVar17 = __real_3ff0000000000000 / dVar17;
  (this->BrushToWorldMat).Row0.field0_0x0._s_0.X = dVar17 * dVar10;
  (this->BrushToWorldMat).Row0.field0_0x0._s_0.Y = dVar17 * dVar11;
  (this->BrushToWorldMat).Row0.field0_0x0._s_0.Z = dVar17 * dVar13;
  (this->BrushToWorldMat).Row1.field0_0x0._s_0.X = dVar17 * (dVar6 * dVar1 - dVar5 * dVar7);
  (this->BrushToWorldMat).Row1.field0_0x0._s_0.Y = (dVar5 * dVar9 - dVar6 * dVar3) * dVar17;
  (this->BrushToWorldMat).Row1.field0_0x0._s_0.Z = dVar17 * (dVar7 * dVar3 - dVar1 * dVar9);
  (this->BrushToWorldMat).Row2.field0_0x0._s_0.X = (dVar4 * dVar7 - dVar6 * dVar8) * dVar17;
  (this->BrushToWorldMat).Row2.field0_0x0._s_0.Y = dVar17 * (dVar6 * dVar2 - dVar4 * dVar9);
  (this->BrushToWorldMat).Row2.field0_0x0._s_0.Z = (dVar8 * dVar9 - dVar7 * dVar2) * dVar17;
  return;
}

