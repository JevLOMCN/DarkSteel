// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TransformBy @ 147d33cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSphere<double> * __thiscall
UE::Math::TSphere<double>::TransformBy
          (TSphere<double> *this,TSphere<double> *__return_storage_ptr__,TTransform<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar12 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar13 = auVar12._0_8_;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar2 = (param_1->Scale3D).XY.m128d_f64[0] * (this->Center).field0_0x0._s_0.X;
  dVar3 = (param_1->Scale3D).XY.m128d_f64[1] * (this->Center).field0_0x0._s_0.Y;
  uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar7 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar29._8_4_ = SUB84(dVar3,0);
  auVar29._0_8_ = dVar2;
  auVar29._12_4_ = uVar27;
  dVar4 = (this->Center).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar16 = blendpd(auVar7,auVar12,2);
  auVar30._0_8_ = auVar29._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar2;
  auVar30._8_8_ = dVar4 * auVar7._8_8_ - dVar13 * dVar3;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = uVar27;
  auVar31._8_4_ = SUB84(dVar5,0);
  auVar31._0_8_ = dVar4;
  auVar31._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar7 = blendpd(auVar22,auVar31,2);
  auVar8._0_8_ = auVar7._0_8_ * dVar13 - auVar16._0_8_ * dVar4;
  auVar8._8_8_ = auVar7._8_8_ * auVar12._8_8_ - auVar16._8_8_ * dVar5;
  auVar7 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar31 = blendpd(auVar30,auVar8,2);
  dVar5 = auVar30._8_8_ + auVar30._8_8_;
  dVar1 = auVar8._0_8_ + auVar8._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar20._8_4_ = SUB84(dVar1,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = uVar27;
  auVar18._8_4_ = SUB84(dVar1,0);
  auVar18._0_8_ = dVar5;
  auVar18._12_4_ = uVar27;
  auVar31 = blendpd(auVar7,auVar12,2);
  auVar21._0_8_ = auVar20._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar5;
  auVar21._8_8_ = auVar32._0_8_ * auVar7._8_8_ - dVar13 * dVar1;
  auVar7 = blendpd(auVar18,auVar32,2);
  auVar19._0_8_ = auVar7._0_8_ * dVar13 - auVar31._0_8_ * auVar32._0_8_;
  auVar19._8_8_ = auVar7._8_8_ * auVar12._8_8_ - auVar31._8_8_ * auVar32._8_8_;
  auVar16._8_4_ = SUB84(auVar21._8_8_,0);
  auVar16._0_8_ = auVar21._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
  auVar22 = blendpd(auVar21,auVar19,2);
  dVar1 = dVar1 * dVar6 + dVar3 + auVar19._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  auVar12._8_4_ = SUB84(dVar1,0);
  auVar12._0_8_ = dVar5 * dVar6 + dVar2 + auVar16._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  auVar12._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Center).field0_0x0 = auVar12;
  uVar24 = *(uint *)(param_1->Scale3D).XY.m128d_f64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar26 = *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
  uVar28 = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
  auVar9._4_4_ = uVar25;
  auVar9._0_4_ = uVar24;
  auVar9._8_4_ = uVar26;
  auVar9._12_4_ = uVar28;
  auVar17._4_4_ = uVar25;
  auVar17._0_4_ = uVar24;
  auVar17._8_4_ = uVar26;
  auVar17._12_4_ = uVar28;
  auVar23._0_8_ =
       CONCAT44(*(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                *(uint *)(param_1->Scale3D).ZW.m128d_f64 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar23._8_4_ = *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
  auVar23._12_4_ = *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
  auVar10._8_8_ = auVar23._0_8_;
  auVar10._0_8_ = auVar9._8_8_;
  auVar7 = maxpd(auVar17,auVar10);
  auVar14._12_4_ = uVar25;
  auVar14._8_4_ = uVar24;
  auVar14._0_8_ = auVar23._0_8_;
  auVar11._4_4_ = uVar25;
  auVar11._0_4_ = uVar24;
  auVar11._8_4_ = uVar26;
  auVar11._12_4_ = uVar28;
  auVar12 = blendpd(auVar11,auVar23,2);
  auVar31 = maxpd(auVar7,auVar14);
  auVar15._8_4_ = auVar23._8_4_;
  auVar15._0_8_ = auVar23._0_8_;
  auVar15._12_4_ = auVar23._12_4_;
  auVar7._4_4_ = uVar28;
  auVar7._0_4_ = uVar26;
  auVar12 = maxpd(auVar15,auVar12);
  auVar7._8_4_ = auVar23._8_4_;
  auVar7._12_4_ = auVar23._12_4_;
  maxpd(auVar12,auVar7);
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       auVar32._0_8_ * dVar6 + dVar4 + auVar22._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  __return_storage_ptr__->W = (double)(float)auVar31._0_8_ * this->W;
  return __return_storage_ptr__;
}

