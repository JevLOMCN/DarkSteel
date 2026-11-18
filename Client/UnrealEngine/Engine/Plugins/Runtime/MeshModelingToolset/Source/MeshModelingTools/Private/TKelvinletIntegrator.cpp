// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// IntegrateRK3 @ 14cc613b0

TVector<double> * __thiscall
UE::Geometry::
TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
::IntegrateRK3(TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
               *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,double param_2
              )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<double> *pTVar9;
  double dVar10;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double> local_d8;
  TVector<double> local_c0 [7];
  
  TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>
  ::Evaluate((TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>
              *)this,(TVector<double> *)&local_108._s_0,param_1);
  dVar10 = param_2 * __real_3fe0000000000000;
  local_f0._s_0.Z = dVar10 * local_108._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  local_f0._s_0.X = dVar10 * local_108._s_0.X + (param_1->field0_0x0)._s_0.X;
  local_f0._s_0.Y = dVar10 * local_108._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  pTVar9 = FBiLaplacianPullKelvinlet::Evaluate
                     ((FBiLaplacianPullKelvinlet *)this,&local_d8,(TVector<double> *)&local_f0._s_0)
  ;
  dVar10 = *(double *)(this + 0x70);
  dVar1 = (pTVar9->field0_0x0)._s_0.X;
  dVar2 = (pTVar9->field0_0x0)._s_0.Y;
  dVar3 = (pTVar9->field0_0x0)._s_0.Z;
  pTVar9 = FLaplacianPullKelvinlet::Evaluate
                     ((FLaplacianPullKelvinlet *)(this + 0x38),local_c0,
                      (TVector<double> *)&local_f0._s_0);
  dVar7 = __real_3ff0000000000000 - dVar10;
  dVar4 = dVar7 * (pTVar9->field0_0x0)._s_0.X + dVar10 * dVar1;
  dVar5 = dVar7 * (pTVar9->field0_0x0)._s_0.Y + dVar10 * dVar2;
  dVar6 = dVar7 * (pTVar9->field0_0x0)._s_0.Z + dVar10 * dVar3;
  local_f0._s_0.X = ((dVar4 + dVar4) - local_108._s_0.X) * param_2 + (param_1->field0_0x0)._s_0.X;
  local_f0._s_0.Y = ((dVar5 + dVar5) - local_108._s_0.Y) * param_2 + (param_1->field0_0x0)._s_0.Y;
  local_f0._s_0.Z = ((dVar6 + dVar6) - local_108._s_0.Z) * param_2 + (param_1->field0_0x0)._s_0.Z;
  pTVar9 = FBiLaplacianPullKelvinlet::Evaluate
                     ((FBiLaplacianPullKelvinlet *)this,local_c0,(TVector<double> *)&local_f0._s_0);
  dVar1 = (pTVar9->field0_0x0)._s_0.X;
  dVar2 = (pTVar9->field0_0x0)._s_0.Y;
  dVar3 = (pTVar9->field0_0x0)._s_0.Z;
  pTVar9 = FLaplacianPullKelvinlet::Evaluate
                     ((FLaplacianPullKelvinlet *)(this + 0x38),&local_d8,
                      (TVector<double> *)&local_f0._s_0);
  dVar8 = __real_3fc5555555555555;
  dVar5 = dVar5 * __real_3fe5555555555555;
  dVar6 = dVar6 * __real_3fe5555555555555;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((dVar7 * (pTVar9->field0_0x0)._s_0.X + dVar10 * dVar1 + local_108._s_0.X) *
        __real_3fc5555555555555 + dVar4 * __real_3fe5555555555555) * param_2 +
       (param_1->field0_0x0)._s_0.X;
  dVar1 = (pTVar9->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       ((dVar7 * (pTVar9->field0_0x0)._s_0.Z + dVar10 * dVar3 + local_108._s_0.Z) * dVar8 + dVar6) *
       param_2 + (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((dVar7 * dVar1 + dVar10 * dVar2 + local_108._s_0.Y) * dVar8 + dVar5) * param_2 + dVar4;
  return __return_storage_ptr__;
}

// IntegrateRK3 @ 14cc61690

TVector<double> * __thiscall
UE::Geometry::
TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
::IntegrateRK3(TKelvinletIntegrator<UE::Geometry::TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>_>
               *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,double param_2
              )

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
  TVector<double> *pTVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double> local_e8 [8];
  
  TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>::
  Evaluate((TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>
            *)this,(TVector<double> *)&local_118._s_0,param_1);
  dVar21 = __real_3ff0000000000000;
  dVar8 = param_2 * __real_3fe0000000000000;
  dVar11 = __real_3ff0000000000000 / *(double *)this;
  local_100._s_0.X = dVar8 * local_118._s_0.X + (param_1->field0_0x0)._s_0.X;
  local_100._s_0.Y = dVar8 * local_118._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  local_100._s_0.Z = dVar8 * local_118._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  dVar6 = local_100._s_0.X * dVar11;
  dVar4 = local_100._s_0.Y * dVar11;
  dVar9 = local_100._s_0.Z * dVar11;
  dVar8 = dVar4 * dVar4 + dVar6 * dVar6 + dVar9 * dVar9 + __real_3ff0000000000000;
  dVar18 = __real_3ff8000000000000 / (dVar8 * SQRT(dVar8) * dVar8) +
           __real_3ff0000000000000 / (SQRT(dVar8) * dVar8);
  pTVar17 = FLaplacianPullKelvinlet::Evaluate
                      ((FLaplacianPullKelvinlet *)(this + 0x60),local_e8,
                       (TVector<double> *)&local_100._s_0);
  dVar8 = *(double *)(this + 0x98);
  dVar21 = dVar21 - dVar8;
  dVar12 = (*(double *)(this + 0x20) * dVar4 + *(double *)(this + 0x18) * dVar6 +
           *(double *)(this + 0x28) * dVar9) * dVar8 * dVar18 * __real_3fd999999999999a +
           dVar21 * (pTVar17->field0_0x0)._s_0.X;
  dVar13 = (*(double *)(this + 0x38) * dVar4 + *(double *)(this + 0x30) * dVar6 +
           *(double *)(this + 0x40) * dVar9) * dVar8 * dVar18 * __real_3fd999999999999a +
           dVar21 * (pTVar17->field0_0x0)._s_0.Y;
  dVar3 = (*(double *)(this + 0x50) * dVar4 + *(double *)(this + 0x48) * dVar6 +
          *(double *)(this + 0x58) * dVar9) * dVar8 * dVar18 * __real_3fd999999999999a +
          dVar21 * (pTVar17->field0_0x0)._s_0.Z;
  local_100._s_0.Y = ((dVar13 + dVar13) - local_118._s_0.Y) * param_2 + (param_1->field0_0x0)._s_0.Y
  ;
  local_100._s_0.X = ((dVar12 + dVar12) - local_118._s_0.X) * param_2 + (param_1->field0_0x0)._s_0.X
  ;
  dVar7 = local_100._s_0.Y * dVar11;
  dVar5 = local_100._s_0.X * dVar11;
  local_100._s_0.Z = ((dVar3 + dVar3) - local_118._s_0.Z) * param_2 + (param_1->field0_0x0)._s_0.Z;
  auVar19._0_8_ = dVar5 * dVar5;
  auVar19._8_8_ = 0;
  dVar11 = local_100._s_0.Z * dVar11;
  dVar8 = dVar7 * dVar7 + auVar19._0_8_ + dVar11 * dVar11 + __real_3ff0000000000000;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar8;
  auVar20 = sqrtpd(auVar19,auVar20);
  dVar18 = auVar20._0_8_ * dVar8;
  dVar10 = __real_3ff8000000000000 / (dVar8 * dVar18) + __real_3ff0000000000000 / dVar18;
  pTVar17 = FLaplacianPullKelvinlet::Evaluate
                      ((FLaplacianPullKelvinlet *)(this + 0x60),local_e8,
                       (TVector<double> *)&local_100._s_0);
  dVar16 = __real_3fd999999999999a;
  dVar15 = __real_3fe5555555555555;
  dVar14 = __real_3fc5555555555555;
  dVar8 = *(double *)(this + 0x98);
  dVar13 = dVar13 * __real_3fe5555555555555;
  dVar18 = *(double *)(this + 0x30);
  dVar4 = *(double *)(this + 0x48);
  dVar6 = *(double *)(this + 0x40);
  dVar9 = *(double *)(this + 0x58);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (((dVar7 * *(double *)(this + 0x20) + dVar5 * *(double *)(this + 0x18) +
         dVar11 * *(double *)(this + 0x28)) * dVar8 * dVar10 * __real_3fd999999999999a +
         dVar21 * (pTVar17->field0_0x0)._s_0.X + local_118._s_0.X) * __real_3fc5555555555555 +
       dVar12 * __real_3fe5555555555555) * param_2 + (param_1->field0_0x0)._s_0.X;
  dVar12 = *(double *)(this + 0x38);
  dVar1 = (pTVar17->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (((dVar7 * *(double *)(this + 0x50) + dVar5 * dVar4 + dVar11 * dVar9) * dVar10 *
         dVar8 * dVar16 + dVar21 * (pTVar17->field0_0x0)._s_0.Z + local_118._s_0.Z) * dVar14 +
       dVar3 * dVar15) * param_2 + (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (((dVar7 * dVar12 + dVar5 * dVar18 + dVar11 * dVar6) * dVar10 * dVar8 * dVar16 +
         dVar21 * dVar1 + local_118._s_0.Y) * dVar14 + dVar13) * param_2 + dVar2;
  return __return_storage_ptr__;
}

// IntegrateRK3 @ 14cc61b50

TVector<double> * __thiscall
UE::Geometry::TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet>::IntegrateRK3
          (TKelvinletIntegrator<UE::Geometry::FScaleKelvinlet> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar6 = __real_3fc5555555555555;
  dVar19 = __real_3ff0000000000000 / *(double *)this;
  dVar18 = dVar19 * (param_1->field0_0x0)._s_0.X;
  dVar16 = dVar19 * (param_1->field0_0x0)._s_0.Y;
  dVar13 = dVar19 * (param_1->field0_0x0)._s_0.Z;
  dVar5 = *(double *)this * *(double *)(this + 0x18) * __real_3fc1111111111111;
  auVar10._0_8_ = dVar13 * dVar13;
  auVar10._8_8_ = 0;
  dVar3 = dVar16 * dVar16 + dVar18 * dVar18 + auVar10._0_8_ + __real_3ff0000000000000;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar3;
  auVar11 = sqrtpd(auVar10,auVar11);
  dVar9 = auVar11._0_8_ * dVar3;
  dVar7 = param_2 * __real_3fe0000000000000;
  dVar4 = (__real_3ff8000000000000 / (dVar3 * dVar9) + __real_3ff0000000000000 / dVar9) * dVar5;
  dVar18 = dVar4 * dVar18;
  dVar16 = dVar4 * dVar16;
  dVar4 = dVar4 * dVar13;
  dVar9 = (dVar18 * dVar7 + (param_1->field0_0x0)._s_0.X) * dVar19;
  dVar13 = (dVar16 * dVar7 + (param_1->field0_0x0)._s_0.Y) * dVar19;
  dVar14 = (dVar4 * dVar7 + (param_1->field0_0x0)._s_0.Z) * dVar19;
  auVar12._0_8_ = dVar14 * dVar14;
  auVar12._8_8_ = 0;
  dVar3 = dVar13 * dVar13 + dVar9 * dVar9 + auVar12._0_8_ + __real_3ff0000000000000;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar3;
  auVar11 = sqrtpd(auVar12,auVar1);
  dVar7 = auVar11._0_8_ * dVar3;
  dVar7 = (__real_3ff8000000000000 / (dVar3 * dVar7) + __real_3ff0000000000000 / dVar7) * dVar5;
  dVar9 = dVar7 * dVar9;
  dVar13 = dVar7 * dVar13;
  dVar7 = dVar7 * dVar14;
  dVar17 = (((dVar9 + dVar9) - dVar18) * param_2 + (param_1->field0_0x0)._s_0.X) * dVar19;
  dVar15 = (((dVar13 + dVar13) - dVar16) * param_2 + (param_1->field0_0x0)._s_0.Y) * dVar19;
  auVar8._0_8_ = dVar17 * dVar17;
  auVar8._8_8_ = 0;
  dVar19 = (((dVar7 + dVar7) - dVar4) * param_2 + (param_1->field0_0x0)._s_0.Z) * dVar19;
  dVar7 = dVar7 * __real_3fe5555555555555;
  dVar3 = dVar15 * dVar15 + auVar8._0_8_ + dVar19 * dVar19 + __real_3ff0000000000000;
  dVar13 = dVar13 * __real_3fe5555555555555;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar3;
  auVar11 = sqrtpd(auVar8,auVar2);
  dVar14 = auVar11._0_8_ * dVar3;
  dVar5 = (__real_3ff8000000000000 / (dVar3 * dVar14) + __real_3ff0000000000000 / dVar14) * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((dVar5 * dVar17 + dVar18) * __real_3fc5555555555555 + dVar9 * __real_3fe5555555555555) *
       param_2 + (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       ((dVar5 * dVar19 + dVar4) * dVar6 + dVar7) * param_2 + (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((dVar5 * dVar15 + dVar16) * dVar6 + dVar13) * param_2 + dVar3;
  return __return_storage_ptr__;
}

// IntegrateRK3 @ 14cc61e50

TVector<double> * __thiscall
UE::Geometry::TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet>::IntegrateRK3
          (TKelvinletIntegrator<UE::Geometry::FTwistKelvinlet> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,double param_2)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<double>_u_0 local_98 [6];
  
  FTwistKelvinlet::Evaluate((FTwistKelvinlet *)this,(TVector<double> *)&local_98[0]._s_0,param_1);
  dVar10 = __real_3fd1111111111111;
  dVar9 = __real_3fd999999999999a;
  dVar8 = __real_3fc5555555555555;
  dVar1 = param_2 * __real_3fe0000000000000;
  dVar5 = __real_3ff0000000000000 / *(double *)this;
  dVar16 = (dVar1 * (double)local_98[0]._0_8_ + (param_1->field0_0x0)._s_0.X) * dVar5;
  dVar15 = (dVar1 * (double)local_98[0]._8_8_ + (param_1->field0_0x0)._s_0.Y) * dVar5;
  dVar11 = (dVar1 * (double)local_98[0]._16_8_ + (param_1->field0_0x0)._s_0.Z) * dVar5;
  dVar1 = dVar15 * dVar15 + dVar16 * dVar16 + dVar11 * dVar11 + __real_3ff0000000000000;
  dVar14 = __real_3ff8000000000000 / (SQRT(dVar1) * dVar1 * dVar1) +
           __real_3ff0000000000000 / (SQRT(dVar1) * dVar1);
  dVar3 = (*(double *)(this + 0x20) * dVar15 + *(double *)(this + 0x18) * dVar16 +
          *(double *)(this + 0x28) * dVar11) * dVar14;
  dVar7 = (*(double *)(this + 0x38) * dVar15 + *(double *)(this + 0x30) * dVar16 +
          *(double *)(this + 0x40) * dVar11) * dVar14;
  dVar14 = (*(double *)(this + 0x50) * dVar15 + *(double *)(this + 0x48) * dVar16 +
           *(double *)(this + 0x58) * dVar11) * dVar14;
  dVar2 = ((dVar3 * __real_3fe999999999999a - (double)local_98[0]._0_8_) * param_2 +
          (param_1->field0_0x0)._s_0.X) * dVar5;
  dVar4 = ((dVar7 * __real_3fe999999999999a - (double)local_98[0]._8_8_) * param_2 +
          (param_1->field0_0x0)._s_0.Y) * dVar5;
  dVar5 = ((dVar14 * __real_3fe999999999999a - (double)local_98[0]._16_8_) * param_2 +
          (param_1->field0_0x0)._s_0.Z) * dVar5;
  auVar12._0_8_ = dVar5 * dVar5;
  auVar12._8_8_ = 0;
  dVar1 = dVar4 * dVar4 + dVar2 * dVar2 + auVar12._0_8_ + __real_3ff0000000000000;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar1;
  auVar13 = sqrtpd(auVar12,auVar13);
  dVar11 = auVar13._0_8_ * dVar1;
  dVar6 = __real_3ff8000000000000 / (dVar11 * dVar1) + __real_3ff0000000000000 / dVar11;
  dVar7 = dVar7 * __real_3fd1111111111111;
  dVar1 = *(double *)(this + 0x30);
  dVar11 = *(double *)(this + 0x48);
  dVar15 = *(double *)(this + 0x58);
  dVar16 = *(double *)(this + 0x40);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (((dVar4 * *(double *)(this + 0x20) + dVar2 * *(double *)(this + 0x18) +
         dVar5 * *(double *)(this + 0x28)) * dVar6 * __real_3fd999999999999a +
        (double)local_98[0]._0_8_) * __real_3fc5555555555555 + dVar3 * __real_3fd1111111111111) *
       param_2 + (param_1->field0_0x0)._s_0.X;
  dVar3 = *(double *)(this + 0x50);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (((dVar4 * *(double *)(this + 0x38) + dVar2 * dVar1 + dVar5 * dVar16) * dVar6 * dVar9 +
        (double)local_98[0]._8_8_) * dVar8 + dVar7) * param_2 + (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (((dVar4 * dVar3 + dVar2 * dVar11 + dVar5 * dVar15) * dVar6 * dVar9 +
        (double)local_98[0]._16_8_) * dVar8 + dVar14 * dVar10) * param_2 +
       (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

