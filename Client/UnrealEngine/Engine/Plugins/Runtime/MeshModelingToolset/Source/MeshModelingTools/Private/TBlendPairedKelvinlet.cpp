// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// Evaluate @ 14cc551e0

TVector<double> * __thiscall
UE::Geometry::
TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>
::Evaluate(TBlendPairedKelvinlet<UE::Geometry::FBiLaplacianPullKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>
           *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> *pTVar7;
  double dVar8;
  TVector<double> local_78;
  TVector<double> local_60 [3];
  
  pTVar7 = FBiLaplacianPullKelvinlet::Evaluate(&this->ABrush,&local_78,param_1);
  dVar1 = this->Alpha;
  dVar2 = (pTVar7->field0_0x0)._s_0.X;
  dVar3 = (pTVar7->field0_0x0)._s_0.Y;
  dVar4 = (pTVar7->field0_0x0)._s_0.Z;
  pTVar7 = FLaplacianPullKelvinlet::Evaluate(&this->BBrush,local_60,param_1);
  dVar8 = __real_3ff0000000000000 - dVar1;
  dVar5 = (pTVar7->field0_0x0)._s_0.Y;
  dVar6 = (pTVar7->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8 * (pTVar7->field0_0x0)._s_0.X + dVar1 * dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8 * dVar5 + dVar1 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar8 * dVar6 + dVar1 * dVar4;
  return __return_storage_ptr__;
}

// Evaluate @ 14cc552c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Geometry::
TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
::Evaluate(TBlendPairedKelvinlet<UE::Geometry::FSharpBiLaplacianPullKelvinlet,UE::Geometry::FSharpLaplacianPullKelvinlet>
           *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  TVector<double> *pTVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 unaff_XMM6 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar18 [16];
  TVector<double> local_c8 [3];
  
  pTVar10 = FSharpBiLaplacianPullKelvinlet::Evaluate(&this->ABrush,local_c8,param_1);
  dVar1 = this->Alpha;
  dVar13 = __real_3ff0000000000000 / (double)(this->BBrush)._padding_;
  dVar2 = (double)(this->BBrush)._padding_;
  dVar3 = (this->BBrush).F.field0_0x0._s_0.Z;
  dVar9 = dVar13 * (param_1->field0_0x0)._s_0.X;
  dVar14 = dVar13 * (param_1->field0_0x0)._s_0.Z;
  dVar13 = dVar13 * (param_1->field0_0x0)._s_0.Y;
  dVar4 = (this->BBrush).F.field0_0x0._s_0.Y;
  dVar16 = dVar13 * dVar13 + dVar9 * dVar9 + dVar14 * dVar14;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar16;
  auVar18 = sqrtpd(unaff_XMM12,auVar7);
  dVar6 = dVar16 + __real_3ff0000000000000;
  dVar12 = dVar16 * dVar16;
  dVar11 = auVar18._0_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar6;
  auVar18 = sqrtpd(unaff_XMM6,auVar18);
  dVar17 = auVar18._0_8_;
  dVar6 = dVar6 * dVar17 * dVar6;
  dVar15 = __real_402e000000000000 - dVar2 * __real_4024000000000000;
  dVar5 = (this->BBrush).F.field0_0x0._s_0.X;
  dVar8 = ((dVar11 * __real_4048000000000000 + dVar11 * __real_4048000000000000) *
           (dVar12 * dVar11 - dVar6) * (__real_3ff0000000000000 - dVar2) +
           (__real_3ff0000000000000 - dVar2) * dVar12 * __real_406e000000000000 + dVar15 +
          (dVar16 * __real_4066800000000000 - dVar2 * dVar16 * __real_4066000000000000) + dVar15) /
          dVar6;
  dVar15 = (this->BBrush).c;
  dVar16 = ((dVar17 * __real_4010000000000000 - dVar11 * __real_4014000000000000) *
            (dVar16 + dVar16) + (dVar17 - dVar11) * dVar12 * __real_4010000000000000 +
           (dVar17 * __real_4010000000000000 - dVar11 * __real_401c000000000000)) *
           (dVar2 / (dVar11 * dVar6)) *
           (dVar4 * dVar13 + dVar5 * dVar9 + dVar3 * dVar14) * ___real_c028000000000000;
  dVar12 = __real_3ff0000000000000 - dVar1;
  dVar2 = (pTVar10->field0_0x0)._s_0.Z;
  dVar6 = (pTVar10->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar9 * dVar16 + dVar5 * dVar8) * dVar15 * dVar12 + dVar1 * (pTVar10->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar14 * dVar16 + dVar3 * dVar8) * dVar15 * dVar12 + dVar1 * dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar13 * dVar16 + dVar4 * dVar8) * dVar15 * dVar12 + dVar1 * dVar6;
  return __return_storage_ptr__;
}

// Evaluate @ 14cc555d0

TVector<double> * __thiscall
UE::Geometry::
TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>::Evaluate
          (TBlendPairedKelvinlet<UE::Geometry::FTwistKelvinlet,UE::Geometry::FLaplacianPullKelvinlet>
           *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> *pTVar7;
  double dVar8;
  TVector<double> local_78;
  TVector<double> local_60 [3];
  
  pTVar7 = FTwistKelvinlet::Evaluate(&this->ABrush,&local_78,param_1);
  dVar1 = this->Alpha;
  dVar2 = (pTVar7->field0_0x0)._s_0.X;
  dVar3 = (pTVar7->field0_0x0)._s_0.Y;
  dVar4 = (pTVar7->field0_0x0)._s_0.Z;
  pTVar7 = FLaplacianPullKelvinlet::Evaluate(&this->BBrush,local_60,param_1);
  dVar8 = __real_3ff0000000000000 - dVar1;
  dVar5 = (pTVar7->field0_0x0)._s_0.Y;
  dVar6 = (pTVar7->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8 * (pTVar7->field0_0x0)._s_0.X + dVar1 * dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8 * dVar5 + dVar1 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar8 * dVar6 + dVar1 * dVar4;
  return __return_storage_ptr__;
}

