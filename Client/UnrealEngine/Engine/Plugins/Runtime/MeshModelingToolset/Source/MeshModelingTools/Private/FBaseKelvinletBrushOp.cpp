// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// operator() @ 14ccc5a90

void __thiscall
`FBaseKelvinletBrushOp::
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
  longlong lVar10;
  double *pdVar11;
  FBiLaplacianPullKelvinlet *this_00;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double> local_f0;
  TVector<double> local_d8;
  TVector<double> local_c0 [7];
  
  plVar9 = *(longlong **)((longlong)this + 8);
  lVar16 = (longlong)param_1;
  uVar14 = 0;
  if (param_1 < (int)plVar9[1]) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  uVar14 = *(uint *)(*plVar9 + lVar16 * 4);
  uVar17 = (ulonglong)(uVar14 & 0x1ff);
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70) + 0x10) +
            (ulonglong)(uVar14 >> 9) * 8);
  pdVar1 = (double *)(lVar10 + uVar17 * 0x18);
  pdVar11 = *(double **)((longlong)this + 0x18);
  dVar2 = *pdVar11;
  dVar3 = pdVar11[1];
  local_120._s_0.X = *pdVar1 - dVar2;
  dVar4 = pdVar11[2];
  local_120._s_0.Y = pdVar1[1] - dVar3;
  local_120._s_0.Z = *(double *)(lVar10 + 0x10 + uVar17 * 0x18) - dVar4;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar11 + 3),(TVector<double> *)&local_108._s_0,
             (TVector<double> *)&local_120._s_0);
  this_00 = *(FBiLaplacianPullKelvinlet **)this;
  local_138._s_0.Z = local_108._s_0.Z;
  local_138._s_0.X = local_108._s_0.X;
  local_138._s_0.Y = local_108._s_0.Y;
  pTVar15 = UE::Geometry::FBiLaplacianPullKelvinlet::Evaluate
                      (this_00,&local_f0,(TVector<double> *)&local_138._s_0);
  dVar5 = (double)this_00[2]._padding_;
  dVar6 = (pTVar15->field0_0x0)._s_0.X;
  dVar7 = (pTVar15->field0_0x0)._s_0.Y;
  dVar8 = (pTVar15->field0_0x0)._s_0.Z;
  pTVar15 = UE::Geometry::FLaplacianPullKelvinlet::Evaluate
                      ((FLaplacianPullKelvinlet *)(this_00 + 1),&local_d8,
                       (TVector<double> *)&local_138._s_0);
  dVar18 = __real_3ff0000000000000 - dVar5;
  local_138._s_0.X = dVar18 * (pTVar15->field0_0x0)._s_0.X + dVar5 * dVar6 + local_108._s_0.X;
  local_138._s_0.Y = dVar18 * (pTVar15->field0_0x0)._s_0.Y + dVar5 * dVar7 + local_108._s_0.Y;
  local_138._s_0.Z = dVar18 * (pTVar15->field0_0x0)._s_0.Z + dVar5 * dVar8 + local_108._s_0.Z;
  pTVar15 = UE::Geometry::operator*<double>
                      (local_c0,(TQuaternion<double> *)(pdVar11 + 3),
                       (TVector<double> *)&local_138._s_0);
  plVar9 = *(longlong **)((longlong)this + 0x10);
  dVar5 = (pTVar15->field0_0x0)._s_0.X;
  dVar6 = (pTVar15->field0_0x0)._s_0.Y;
  dVar7 = (pTVar15->field0_0x0)._s_0.Z;
  uVar14 = 0;
  if (param_1 < (int)plVar9[1]) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  lVar10 = *plVar9;
  *(double *)(lVar10 + lVar16 * 0x18) = dVar2 + dVar5;
  *(double *)(lVar10 + 8 + lVar16 * 0x18) = dVar3 + dVar6;
  *(double *)(lVar10 + 0x10 + lVar16 * 0x18) = dVar4 + dVar7;
  return;
}

// operator() @ 14ccc5d60

void __thiscall
`FBaseKelvinletBrushOp::
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
  longlong *plVar8;
  longlong lVar9;
  double *pdVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  ulonglong uVar16;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0;
  TVector<double> local_88 [4];
  
  plVar8 = *(longlong **)((longlong)this + 8);
  lVar15 = (longlong)param_1;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  uVar13 = *(uint *)(*plVar8 + lVar15 * 4);
  uVar16 = (ulonglong)(uVar13 & 0x1ff);
  lVar9 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70) + 0x10) +
           (ulonglong)(uVar13 >> 9) * 8);
  pdVar1 = (double *)(lVar9 + uVar16 * 0x18);
  pdVar10 = *(double **)((longlong)this + 0x18);
  dVar2 = *pdVar10;
  dVar3 = pdVar10[1];
  local_d0._s_0.X = *pdVar1 - dVar2;
  dVar4 = pdVar10[2];
  local_d0._s_0.Y = pdVar1[1] - dVar3;
  local_d0._s_0.Z = *(double *)(lVar9 + 0x10 + uVar16 * 0x18) - dVar4;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar10 + 3),(TVector<double> *)&local_b8._s_0,
             (TVector<double> *)&local_d0._s_0);
  local_e8._s_0.X = local_b8._s_0.X;
  local_e8._s_0.Y = local_b8._s_0.Y;
  local_e8._s_0.Z = local_b8._s_0.Z;
  pTVar14 = UE::Geometry::
            TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
            ::Evaluate(*(TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
                         **)this,&local_a0,(TVector<double> *)&local_e8._s_0);
  local_e8._s_0.X = local_b8._s_0.X + (pTVar14->field0_0x0)._s_0.X;
  local_e8._s_0.Y = local_b8._s_0.Y + (pTVar14->field0_0x0)._s_0.Y;
  local_e8._s_0.Z = local_b8._s_0.Z + (pTVar14->field0_0x0)._s_0.Z;
  pTVar14 = UE::Geometry::operator*<double>
                      (local_88,(TQuaternion<double> *)(pdVar10 + 3),
                       (TVector<double> *)&local_e8._s_0);
  plVar8 = *(longlong **)((longlong)this + 0x10);
  dVar5 = (pTVar14->field0_0x0)._s_0.X;
  dVar6 = (pTVar14->field0_0x0)._s_0.Y;
  dVar7 = (pTVar14->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  lVar9 = *plVar8;
  *(double *)(lVar9 + lVar15 * 0x18) = dVar2 + dVar5;
  *(double *)(lVar9 + 8 + lVar15 * 0x18) = dVar3 + dVar6;
  *(double *)(lVar9 + 0x10 + lVar15 * 0x18) = dVar4 + dVar7;
  return;
}

// operator() @ 14ccc5f80

void __thiscall
`FBaseKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  double *pdVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double> local_90 [5];
  
  plVar5 = *(longlong **)((longlong)this + 8);
  lVar16 = (longlong)param_1;
  uVar13 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar13 = *(uint *)(*plVar5 + lVar16 * 4);
  uVar15 = (ulonglong)(uVar13 & 0x1ff);
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70) + 0x10) +
           (ulonglong)(uVar13 >> 9) * 8);
  pdVar7 = *(double **)((longlong)this + 0x18);
  pdVar1 = (double *)(lVar6 + uVar15 * 0x18);
  local_c0._s_0.X = *pdVar1;
  local_c0._s_0.Y = pdVar1[1];
  dVar2 = *pdVar7;
  dVar3 = pdVar7[1];
  local_a8._s_0.X = local_c0._s_0.X - dVar2;
  dVar4 = pdVar7[2];
  local_a8._s_0.Z = *(double *)(lVar6 + 0x10 + uVar15 * 0x18) - dVar4;
  local_a8._s_0.Y = local_c0._s_0.Y - dVar3;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar7 + 3),(TVector<double> *)&local_d8._s_0,
             (TVector<double> *)&local_a8._s_0);
  dVar20 = **(double **)this;
  dVar11 = __real_3ff0000000000000 / dVar20;
  dVar21 = dVar11 * local_d8._s_0.X;
  dVar10 = dVar11 * local_d8._s_0.Y;
  dVar11 = dVar11 * local_d8._s_0.Z;
  auVar18._0_8_ = dVar11 * dVar11;
  auVar18._8_8_ = 0;
  dVar9 = dVar10 * dVar10 + dVar21 * dVar21 + auVar18._0_8_ + __real_3ff0000000000000;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar9;
  auVar19 = sqrtpd(auVar18,auVar19);
  dVar17 = auVar19._0_8_ * dVar9;
  dVar20 = (__real_3fc999999999999a / (dVar9 * dVar17) + __real_3fc1111111111111 / dVar17) *
           dVar20 * (*(double **)this)[3];
  local_c0._s_0.X = dVar20 * dVar21 + local_d8._s_0.X;
  local_c0._s_0.Y = dVar20 * dVar10 + local_d8._s_0.Y;
  local_c0._s_0.Z = dVar20 * dVar11 + local_d8._s_0.Z;
  pTVar14 = UE::Geometry::operator*<double>
                      (local_90,(TQuaternion<double> *)(pdVar7 + 3),
                       (TVector<double> *)&local_c0._s_0);
  plVar5 = *(longlong **)((longlong)this + 0x10);
  dVar20 = (pTVar14->field0_0x0)._s_0.X;
  dVar9 = (pTVar14->field0_0x0)._s_0.Y;
  dVar10 = (pTVar14->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar6 = *plVar5;
  *(double *)(lVar6 + lVar16 * 0x18) = dVar2 + dVar20;
  *(double *)(lVar6 + 8 + lVar16 * 0x18) = dVar3 + dVar9;
  *(double *)(lVar6 + 0x10 + lVar16 * 0x18) = dVar4 + dVar10;
  return;
}

// operator() @ 14ccc6220

void __thiscall
`FBaseKelvinletBrushOp::DisplaceKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  double *pdVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double> local_90 [5];
  
  plVar5 = *(longlong **)((longlong)this + 8);
  lVar16 = (longlong)param_1;
  uVar13 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar13 = *(uint *)(*plVar5 + lVar16 * 4);
  uVar15 = (ulonglong)(uVar13 & 0x1ff);
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x70) + 0x10) +
           (ulonglong)(uVar13 >> 9) * 8);
  pdVar7 = *(double **)((longlong)this + 0x18);
  pdVar1 = (double *)(lVar6 + uVar15 * 0x18);
  local_c0._s_0.X = *pdVar1;
  local_c0._s_0.Y = pdVar1[1];
  dVar2 = *pdVar7;
  dVar3 = pdVar7[1];
  local_a8._s_0.X = local_c0._s_0.X - dVar2;
  dVar4 = pdVar7[2];
  local_a8._s_0.Z = *(double *)(lVar6 + 0x10 + uVar15 * 0x18) - dVar4;
  local_a8._s_0.Y = local_c0._s_0.Y - dVar3;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar7 + 3),(TVector<double> *)&local_d8._s_0,
             (TVector<double> *)&local_a8._s_0);
  pdVar1 = *(double **)this;
  dVar10 = __real_3ff0000000000000 / *pdVar1;
  dVar11 = dVar10 * local_d8._s_0.Y;
  dVar9 = dVar10 * local_d8._s_0.X;
  dVar10 = dVar10 * local_d8._s_0.Z;
  auVar18._0_8_ = dVar9 * dVar9;
  auVar18._8_8_ = 0;
  dVar20 = dVar11 * dVar11 + auVar18._0_8_ + dVar10 * dVar10 + __real_3ff0000000000000;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar20;
  auVar19 = sqrtpd(auVar18,auVar19);
  dVar17 = auVar19._0_8_ * dVar20;
  dVar20 = __real_3ff8000000000000 / (dVar20 * dVar17) + __real_3ff0000000000000 / dVar17;
  local_c0._s_0.X =
       (dVar11 * pdVar1[4] + dVar9 * pdVar1[3] + dVar10 * pdVar1[5]) * dVar20 *
       __real_3fd999999999999a + local_d8._s_0.X;
  local_c0._s_0.Y =
       (dVar11 * pdVar1[7] + dVar9 * pdVar1[6] + dVar10 * pdVar1[8]) * dVar20 *
       __real_3fd999999999999a + local_d8._s_0.Y;
  local_c0._s_0.Z =
       (dVar11 * pdVar1[10] + dVar9 * pdVar1[9] + dVar10 * pdVar1[0xb]) * dVar20 *
       __real_3fd999999999999a + local_d8._s_0.Z;
  pTVar14 = UE::Geometry::operator*<double>
                      (local_90,(TQuaternion<double> *)(pdVar7 + 3),
                       (TVector<double> *)&local_c0._s_0);
  plVar5 = *(longlong **)((longlong)this + 0x10);
  dVar20 = (pTVar14->field0_0x0)._s_0.X;
  dVar9 = (pTVar14->field0_0x0)._s_0.Y;
  dVar10 = (pTVar14->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar6 = *plVar5;
  *(double *)(lVar6 + lVar16 * 0x18) = dVar2 + dVar20;
  *(double *)(lVar6 + 8 + lVar16 * 0x18) = dVar3 + dVar9;
  *(double *)(lVar6 + 0x10 + lVar16 * 0x18) = dVar4 + dVar10;
  return;
}

// operator() @ 14ccc6510

void __thiscall
`FBaseKelvinletBrushOp::
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
  longlong *plVar8;
  double *pdVar9;
  longlong lVar10;
  TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
  *this_00;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double> local_a0;
  TVector<double> local_88 [4];
  
  plVar8 = *(longlong **)((longlong)this + 8);
  lVar16 = (longlong)param_1;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pdVar9 = *(double **)((longlong)this + 0x18);
  dVar2 = *pdVar9;
  uVar13 = *(uint *)(*plVar8 + lVar16 * 4);
  dVar3 = pdVar9[1];
  uVar15 = (ulonglong)(uVar13 & 0x1ff);
  dVar4 = pdVar9[2];
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x70) + 0x10) +
            (ulonglong)(uVar13 >> 9) * 8);
  pdVar1 = (double *)(lVar10 + uVar15 * 0x18);
  local_b8 = *pdVar1;
  dStack_b0 = pdVar1[1];
  local_a8 = *(double *)(lVar10 + 0x10 + uVar15 * 0x18);
  local_d0._s_0.X = local_b8 - dVar2;
  local_d0._s_0.Y = dStack_b0 - dVar3;
  local_d0._s_0.Z = local_a8 - dVar4;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar9 + 3),(TVector<double> *)&local_e8._s_0,
             (TVector<double> *)&local_d0._s_0);
  uVar13 = *(uint *)((longlong)this + 0x28);
  if (0 < (int)uVar13) {
    uVar15 = (ulonglong)uVar13;
    this_00 = *(TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
                **)this;
    dVar5 = *(double *)((longlong)this + 0x20);
    do {
      pTVar14 = UE::Geometry::
                TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
                ::IntegrateRK3(this_00,&local_a0,(TVector<double> *)&local_e8._s_0,
                               dVar5 / (double)(int)uVar13);
      local_e8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      local_e8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  pTVar14 = UE::Geometry::operator*<double>
                      (local_88,(TQuaternion<double> *)(pdVar9 + 3),
                       (TVector<double> *)&local_e8._s_0);
  plVar8 = *(longlong **)((longlong)this + 0x10);
  dVar5 = (pTVar14->field0_0x0)._s_0.X;
  dVar6 = (pTVar14->field0_0x0)._s_0.Y;
  dVar7 = (pTVar14->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar10 = *plVar8;
  *(double *)(lVar10 + lVar16 * 0x18) = dVar2 + dVar5;
  *(double *)(lVar10 + 8 + lVar16 * 0x18) = dVar3 + dVar6;
  *(double *)(lVar10 + 0x10 + lVar16 * 0x18) = dVar4 + dVar7;
  return;
}

// operator() @ 14ccc6770

void __thiscall
`FBaseKelvinletBrushOp::
IntegrateKelvinlet<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  double *pdVar6;
  longlong lVar7;
  TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
  *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  TVector<double> *pTVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  TVector<double>_u_0 local_1b8;
  TQuaternion<double> *local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  double local_108;
  double dStack_100;
  double local_f8;
  TVector<double> local_f0 [7];
  
  plVar5 = *(longlong **)((longlong)this + 8);
  lVar22 = (longlong)param_1;
  uVar20 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pdVar6 = *(double **)((longlong)this + 0x18);
  dVar1 = *pdVar6;
  uVar20 = *(uint *)(*plVar5 + lVar22 * 4);
  dVar2 = pdVar6[1];
  dVar3 = pdVar6[2];
  uVar23 = (ulonglong)(uVar20 & 0x1ff);
  lVar7 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x70) + 0x10) +
           (ulonglong)(uVar20 >> 9) * 8);
  local_1a0 = (TQuaternion<double> *)(pdVar6 + 3);
  pdVar6 = (double *)(lVar7 + uVar23 * 0x18);
  local_108 = *pdVar6;
  dStack_100 = pdVar6[1];
  local_f8 = *(double *)(lVar7 + 0x10 + uVar23 * 0x18);
  local_198._s_0.X = local_108 - dVar1;
  local_198._s_0.Y = dStack_100 - dVar2;
  local_198._s_0.Z = local_f8 - dVar3;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (local_1a0,(TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_198._s_0);
  uVar20 = *(uint *)((longlong)this + 0x28);
  if (0 < (int)uVar20) {
    this_00 = *(TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
                **)this;
    uVar23 = (ulonglong)uVar20;
    uVar24 = SUB84(__real_4000000000000000,0);
    uVar25 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
    dVar9 = *(double *)((longlong)this + 0x20) / (double)(int)uVar20;
    dVar10 = dVar9 * __real_3fe0000000000000;
    do {
      uVar12 = local_1b8._s_0.Z;
      uVar11 = local_1b8._s_0.Y;
      UE::Geometry::
      TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
      ::Evaluate(this_00,(TVector<double> *)&local_180._s_0,(TVector<double> *)&local_1b8._s_0);
      uVar15 = local_180._s_0.Z;
      uVar14 = local_180._s_0.Y;
      uVar13 = local_180._s_0.X;
      local_168._s_0.X = local_180._s_0.X * dVar10 + local_1b8._s_0.X;
      local_168._s_0.Y = local_180._s_0.Y * dVar10 + (double)uVar11;
      local_168._s_0.Z = local_180._s_0.Z * dVar10 + (double)uVar12;
      UE::Geometry::
      TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
      ::Evaluate(this_00,(TVector<double> *)&local_150._s_0,(TVector<double> *)&local_168._s_0);
      uVar18 = local_150._s_0.Z;
      uVar17 = local_150._s_0.Y;
      uVar16 = local_150._s_0.X;
      local_138._s_0.X =
           (local_150._s_0.X * (double)CONCAT44(uVar25,uVar24) - (double)uVar13) * dVar9 +
           local_1b8._s_0.X;
      local_138._s_0.Y =
           (local_150._s_0.Y * (double)CONCAT44(uVar25,uVar24) - (double)uVar14) * dVar9 +
           (double)uVar11;
      local_138._s_0.Z =
           (local_150._s_0.Z * __real_4000000000000000 - (double)uVar15) * dVar9 + (double)uVar12;
      UE::Geometry::
      TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
      ::Evaluate(this_00,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0);
      local_1b8._s_0.X =
           local_1b8._s_0.X +
           (local_120._s_0.X * __real_3fc5555555555555 + (double)uVar13 * __real_3fc5555555555555 +
           (double)uVar16 * __real_3fe5555555555555) * dVar9;
      uVar24 = SUB84(__real_4000000000000000,0);
      uVar25 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
      local_1b8._s_0.Z =
           (double)uVar12 +
           (local_120._s_0.Z * __real_3fc5555555555555 + (double)uVar15 * __real_3fc5555555555555 +
           (double)uVar18 * __real_3fe5555555555555) * dVar9;
      local_1b8._s_0.Y =
           (double)uVar11 +
           (local_120._s_0.Y * __real_3fc5555555555555 + (double)uVar14 * __real_3fc5555555555555 +
           (double)uVar17 * __real_3fe5555555555555) * dVar9;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  pTVar21 = UE::Geometry::operator*<double>(local_f0,local_1a0,(TVector<double> *)&local_1b8._s_0);
  plVar5 = *(longlong **)((longlong)this + 0x10);
  dVar9 = (pTVar21->field0_0x0)._s_0.X;
  dVar10 = (pTVar21->field0_0x0)._s_0.Y;
  dVar4 = (pTVar21->field0_0x0)._s_0.Z;
  uVar20 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *plVar5;
  *(double *)(lVar7 + lVar22 * 0x18) = dVar1 + dVar9;
  *(double *)(lVar7 + 8 + lVar22 * 0x18) = dVar2 + dVar10;
  *(double *)(lVar7 + 0x10 + lVar22 * 0x18) = dVar3 + dVar4;
  return;
}

// operator() @ 14ccc6c10

void __thiscall
`FBaseKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FScaleKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  double *pdVar9;
  longlong lVar10;
  TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet> *this_00;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double> local_a0;
  TVector<double> local_88 [4];
  
  plVar8 = *(longlong **)((longlong)this + 8);
  lVar16 = (longlong)param_1;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pdVar9 = *(double **)((longlong)this + 0x18);
  dVar2 = *pdVar9;
  uVar13 = *(uint *)(*plVar8 + lVar16 * 4);
  dVar3 = pdVar9[1];
  uVar15 = (ulonglong)(uVar13 & 0x1ff);
  dVar4 = pdVar9[2];
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x70) + 0x10) +
            (ulonglong)(uVar13 >> 9) * 8);
  pdVar1 = (double *)(lVar10 + uVar15 * 0x18);
  local_b8 = *pdVar1;
  dStack_b0 = pdVar1[1];
  local_a8 = *(double *)(lVar10 + 0x10 + uVar15 * 0x18);
  local_d0._s_0.X = local_b8 - dVar2;
  local_d0._s_0.Y = dStack_b0 - dVar3;
  local_d0._s_0.Z = local_a8 - dVar4;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar9 + 3),(TVector<double> *)&local_e8._s_0,
             (TVector<double> *)&local_d0._s_0);
  uVar13 = *(uint *)((longlong)this + 0x28);
  if (0 < (int)uVar13) {
    uVar15 = (ulonglong)uVar13;
    this_00 = *(TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet> **)this;
    dVar5 = *(double *)((longlong)this + 0x20);
    do {
      pTVar14 = UE::Geometry::TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet>::IntegrateRK3
                          (this_00,&local_a0,(TVector<double> *)&local_e8._s_0,
                           dVar5 / (double)(int)uVar13);
      local_e8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      local_e8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  pTVar14 = UE::Geometry::operator*<double>
                      (local_88,(TQuaternion<double> *)(pdVar9 + 3),
                       (TVector<double> *)&local_e8._s_0);
  plVar8 = *(longlong **)((longlong)this + 0x10);
  dVar5 = (pTVar14->field0_0x0)._s_0.X;
  dVar6 = (pTVar14->field0_0x0)._s_0.Y;
  dVar7 = (pTVar14->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar10 = *plVar8;
  *(double *)(lVar10 + lVar16 * 0x18) = dVar2 + dVar5;
  *(double *)(lVar10 + 8 + lVar16 * 0x18) = dVar3 + dVar6;
  *(double *)(lVar10 + 0x10 + lVar16 * 0x18) = dVar4 + dVar7;
  return;
}

// operator() @ 14ccc6e70

void __thiscall
`FBaseKelvinletBrushOp::IntegrateKelvinlet<UE::Geometry::FTwistKelvinlet>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  double *pdVar9;
  longlong lVar10;
  TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet> *this_00;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double> local_a0;
  TVector<double> local_88 [4];
  
  plVar8 = *(longlong **)((longlong)this + 8);
  lVar16 = (longlong)param_1;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pdVar9 = *(double **)((longlong)this + 0x18);
  dVar2 = *pdVar9;
  uVar13 = *(uint *)(*plVar8 + lVar16 * 4);
  dVar3 = pdVar9[1];
  uVar15 = (ulonglong)(uVar13 & 0x1ff);
  dVar4 = pdVar9[2];
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x70) + 0x10) +
            (ulonglong)(uVar13 >> 9) * 8);
  pdVar1 = (double *)(lVar10 + uVar15 * 0x18);
  local_b8 = *pdVar1;
  dStack_b0 = pdVar1[1];
  local_a8 = *(double *)(lVar10 + 0x10 + uVar15 * 0x18);
  local_d0._s_0.X = local_b8 - dVar2;
  local_d0._s_0.Y = dStack_b0 - dVar3;
  local_d0._s_0.Z = local_a8 - dVar4;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar9 + 3),(TVector<double> *)&local_e8._s_0,
             (TVector<double> *)&local_d0._s_0);
  uVar13 = *(uint *)((longlong)this + 0x28);
  if (0 < (int)uVar13) {
    uVar15 = (ulonglong)uVar13;
    this_00 = *(TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet> **)this;
    dVar5 = *(double *)((longlong)this + 0x20);
    do {
      pTVar14 = UE::Geometry::TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet>::IntegrateRK3
                          (this_00,&local_a0,(TVector<double> *)&local_e8._s_0,
                           dVar5 / (double)(int)uVar13);
      local_e8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      local_e8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  pTVar14 = UE::Geometry::operator*<double>
                      (local_88,(TQuaternion<double> *)(pdVar9 + 3),
                       (TVector<double> *)&local_e8._s_0);
  plVar8 = *(longlong **)((longlong)this + 0x10);
  dVar5 = (pTVar14->field0_0x0)._s_0.X;
  dVar6 = (pTVar14->field0_0x0)._s_0.Y;
  dVar7 = (pTVar14->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar10 = *plVar8;
  *(double *)(lVar10 + lVar16 * 0x18) = dVar2 + dVar5;
  *(double *)(lVar10 + 8 + lVar16 * 0x18) = dVar3 + dVar6;
  *(double *)(lVar10 + 0x10 + lVar16 * 0x18) = dVar4 + dVar7;
  return;
}

// operator() @ 14ccc7510

void __thiscall
`FBaseKelvinletBrushOp::ApplyFalloff'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double local_88;
  double dStack_80;
  double local_78;
  
  plVar17 = *(longlong **)((longlong)this + 8);
  lVar19 = (longlong)param_1;
  uVar18 = (uint)~param_1 >> 0x1f;
  uVar14 = 0;
  if (param_1 < (int)plVar17[1]) {
    uVar14 = uVar18;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar5 = *(longlong *)((longlong)this + 0x18);
  uVar14 = *(uint *)(*plVar17 + lVar19 * 4);
  uVar16 = (ulonglong)(uVar14 & 0x1ff);
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
  pdVar1 = (double *)(lVar6 + uVar16 * 0x18);
  local_88 = *pdVar1;
  dStack_80 = pdVar1[1];
  local_78 = *(double *)(lVar6 + 0x10 + uVar16 * 0x18);
  if (*(longlong *)(lVar5 + 0x10) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar7 = *(undefined8 **)(lVar5 + 0x10);
  uVar8 = *(undefined8 *)this;
  UE::Core::Private::Function::CheckCallable((void *)*puVar7);
  pcVar9 = (code *)*puVar7;
  plVar17 = puVar7 + 2;
  if ((longlong *)puVar7[5] != (longlong *)0x0) {
    plVar17 = (longlong *)puVar7[5];
  }
  uVar15 = (**(code **)(*plVar17 + 8))();
  dVar20 = (double)(*pcVar9)(uVar15,uVar8,&local_88);
  dVar12 = __real_3ff0000000000000;
  plVar17 = *(longlong **)((longlong)this + 0x10);
  if (__real_3ff0000000000000 <= dVar20) {
    dVar20 = __real_3ff0000000000000;
  }
  uVar14 = 0;
  if (param_1 < (int)plVar17[1]) {
    uVar14 = uVar18;
  }
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar5 = *plVar17;
  dVar12 = dVar12 - dVar20;
  plVar17 = *(longlong **)((longlong)this + 0x10);
  dVar2 = *(double *)(lVar5 + lVar19 * 0x18);
  dVar3 = *(double *)(lVar5 + 8 + lVar19 * 0x18);
  dVar10 = dVar12 * local_88;
  dVar4 = *(double *)(lVar5 + 0x10 + lVar19 * 0x18);
  dVar11 = dVar12 * dStack_80;
  uVar14 = 0;
  if (param_1 < (int)plVar17[1]) {
    uVar14 = uVar18;
  }
  dVar12 = dVar12 * local_78;
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar5 = *plVar17;
  *(double *)(lVar5 + lVar19 * 0x18) = dVar20 * dVar2 + dVar10;
  *(double *)(lVar5 + 8 + lVar19 * 0x18) = dVar20 * dVar3 + dVar11;
  *(double *)(lVar5 + 0x10 + lVar19 * 0x18) = dVar20 * dVar4 + dVar12;
  return;
}

// ApplyStamp @ 14ccdee80

void __thiscall
FBaseKelvinletBrushOp::ApplyStamp
          (FBaseKelvinletBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// SetBaseProperties @ 14cd1e070

void __thiscall
FBaseKelvinletBrushOp::SetBaseProperties
          (FBaseKelvinletBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  this->Mesh = param_1;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar6->_padding_)) goto LAB_14cd1e130;
  }
  pUVar5 = (UObject *)0x0;
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14cd1e130:
  fVar7 = (float)(**(code **)(*(longlong *)pUVar5 + 0x300))(pUVar5);
  fVar8 = (float)(**(code **)(*(longlong *)pUVar5 + 0x308))(pUVar5);
  iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x310))(pUVar5);
  fVar2 = __real_3f000000;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = __real_3f000000 - fVar8;
  this->Mu = fVar7;
  if (fVar2 <= fVar8) {
    fVar8 = fVar2;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  this->Nu = fVar8;
  dVar9 = param_2->Radius;
  if (param_2->Radius <= __real_3f847ae147ae147b) {
    dVar9 = __real_3f847ae147ae147b;
  }
  this->NumSteps = iVar4;
  this->Size = (float)dVar9;
  return;
}

