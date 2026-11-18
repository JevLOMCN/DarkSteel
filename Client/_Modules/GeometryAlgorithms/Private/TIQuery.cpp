// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 2

// operator() @ 149508fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __thiscall
gte::TIQuery<float,gte::AlignedBox<3,float>,gte::Cylinder3<float>_>::operator()
          (TIQuery<float,gte::AlignedBox<3,float>,gte::Cylinder3<float>_> *this,
          AlignedBox<3,float> *param_1,Cylinder3<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 *in_R9;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_7f8 [32];
  undefined1 local_778 [16];
  float local_768;
  float local_764;
  uint local_760;
  uint local_75c;
  undefined8 local_758;
  undefined8 local_750;
  float local_748;
  float local_744;
  float local_740;
  uint local_73c;
  uint local_738;
  uint local_734;
  uint local_730;
  uint local_72c;
  float local_728;
  float local_724;
  float local_720;
  uint local_71c;
  uint local_718;
  uint local_714;
  uint local_710;
  float local_70c;
  float local_708;
  float local_704;
  float local_700;
  uint local_6fc;
  uint local_6f8;
  uint local_6f4;
  uint local_6f0;
  float local_6ec;
  float local_6e8;
  float local_6e4;
  float local_6e0;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  float local_6c8;
  float local_6c4;
  float local_6c0;
  undefined4 local_6bc;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  float local_6a8;
  float local_6a4;
  float local_6a0;
  undefined4 local_69c;
  undefined8 local_698;
  undefined8 uStack_690;
  float local_688;
  float local_684;
  float local_680;
  undefined4 local_67c;
  undefined1 local_678 [16];
  uint local_668;
  uint local_664;
  uint local_660;
  undefined4 local_65c;
  undefined1 local_658 [16];
  float local_648 [4];
  undefined1 local_638 [8];
  float *local_630;
  Vector<3,float> local_628;
  Vector<3,float> local_618;
  float local_608;
  float local_604;
  float local_600;
  float local_5e8 [8];
  LCPSolverShared<float> local_5c8;
  Variable local_578 [9];
  Variable local_4a0 [9];
  float local_3c8 [144];
  float local_188 [9];
  float local_164 [9];
  float local_140 [10];
  float *local_118 [8];
  ulonglong local_d8;
  
  uVar6 = __xmm_80000000800000008000000080000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  fVar1 = (param_2->axis).origin.mTuple._Elems[0];
  fVar2 = (param_2->axis).origin.mTuple._Elems[1];
  fVar3 = (param_2->axis).origin.mTuple._Elems[2];
  local_750 = *(undefined8 *)(param_2->axis).direction.mTuple._Elems;
  fVar4 = *(float *)((longlong)in_R9 + 0x14);
  fVar5 = (param_2->axis).direction.mTuple._Elems[2];
  fVar22 = *(float *)((longlong)in_R9 + 0x1c) * __real_3f000000;
  fVar9 = (float)((ulonglong)*in_R9 >> 0x20);
  fVar19 = (float)*in_R9 - fVar1;
  fVar15 = (float)((ulonglong)*(undefined8 *)((longlong)in_R9 + 0xc) >> 0x20);
  local_638._0_4_ = (undefined4)*(undefined8 *)((longlong)in_R9 + 0xc);
  uVar7 = local_638._0_4_;
  fVar16 = fVar9 - fVar2;
  local_758 = CONCAT44(fVar9,fVar16);
  fVar17 = *(float *)(in_R9 + 1) - fVar3;
  fVar20 = __real_3f800000 - (float)local_638._0_4_ * (float)local_638._0_4_;
  fVar9 = (float)((uint)(fVar15 * (float)local_638._0_4_) ^ __xmm_80000000800000008000000080000000);
  fVar10 = (float)((uint)(fVar4 * (float)local_638._0_4_) ^ __xmm_80000000800000008000000080000000);
  fVar11 = (float)((uint)(fVar15 * (float)local_638._0_4_) ^ __xmm_80000000800000008000000080000000)
  ;
  fVar21 = __real_3f800000 - fVar15 * fVar15;
  fVar12 = (float)((uint)(fVar4 * fVar15) ^ __xmm_80000000800000008000000080000000);
  fVar13 = (float)((uint)(fVar4 * (float)local_638._0_4_) ^ __xmm_80000000800000008000000080000000);
  fVar14 = (float)((uint)(fVar15 * fVar4) ^ __xmm_80000000800000008000000080000000);
  fVar18 = __real_3f800000 - fVar4 * fVar4;
  fVar23 = fVar16 * fVar15 + fVar19 * (float)local_638._0_4_ + fVar17 * fVar4;
  local_638 = (undefined1  [8])local_648;
  local_648[0] = -1.0;
  local_630 = local_648 + 3;
  local_648[1] = 0.0;
  local_648[2] = 0.0;
  Vector<3,float>::Vector<3,float>(&local_628,(initializer_list<float> *)local_638);
  local_638 = (undefined1  [8])local_648;
  local_648[0] = 0.0;
  local_630 = local_648 + 3;
  local_648[1] = -1.0;
  local_648[2] = 0.0;
  Vector<3,float>::Vector<3,float>(&local_618,(initializer_list<float> *)local_638);
  local_778._0_8_ = local_648;
  local_648[0] = 0.0;
  local_648[1] = 0.0;
  local_778._8_8_ = local_648 + 3;
  local_648[2] = -1.0;
  Vector<3,float>::Vector<3,float>
            ((Vector<3,float> *)local_638,(initializer_list<float> *)local_778);
  local_730 = uVar7 ^ uVar6;
  local_710 = (uint)fVar15 ^ uVar6;
  local_6f0 = (uint)fVar4 ^ uVar6;
  local_73c = (uint)local_628.mTuple._Elems[0] ^ uVar6;
  local_738 = (uint)local_618.mTuple._Elems[0] ^ uVar6;
  local_734 = local_638._0_4_ ^ __xmm_80000000800000008000000080000000;
  local_72c = local_730 ^ __xmm_80000000800000008000000080000000;
  local_71c = (uint)local_628.mTuple._Elems[1] ^ __xmm_80000000800000008000000080000000;
  local_714 = local_638._4_4_ ^ __xmm_80000000800000008000000080000000;
  local_718 = (uint)local_618.mTuple._Elems[1] ^ __xmm_80000000800000008000000080000000;
  local_6fc = (uint)local_628.mTuple._Elems[2] ^ __xmm_80000000800000008000000080000000;
  local_6e0 = local_628.mTuple._Elems[2];
  local_6f8 = (uint)local_618.mTuple._Elems[2] ^ __xmm_80000000800000008000000080000000;
  local_6c0 = local_618.mTuple._Elems[2];
  local_6f4 = (uint)local_630._0_4_ ^ __xmm_80000000800000008000000080000000;
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  local_698 = 0;
  uStack_690 = 0;
  local_678 = ZEXT416(0);
  local_6e8 = local_628.mTuple._Elems[0];
  local_6c4 = local_618.mTuple._Elems[1];
  fVar16 = (float)local_758;
  local_6a8 = (float)local_638._0_4_;
  local_6dc = 0;
  local_6bc = 0;
  local_6c8 = local_618.mTuple._Elems[0];
  local_69c = 0;
  local_67c = 0;
  local_6a0 = local_630._0_4_;
  local_6e4 = local_628.mTuple._Elems[1];
  local_6a4 = (float)local_638._4_4_;
  local_65c = 0;
  local_688 = (float)uVar7;
  local_778._4_4_ =
       (uint)(fVar16 * fVar21 + fVar19 * fVar11 + fVar17 * fVar12) ^
       __xmm_80000000800000008000000080000000;
  local_778._0_4_ =
       (uint)(fVar16 * fVar9 + fVar19 * fVar20 + fVar17 * fVar10) ^
       __xmm_80000000800000008000000080000000;
  local_5c8.mVarBasic = local_578;
  local_5c8.mMaxIterations = 0x40;
  local_5c8.mNumIterations = 0;
  local_5c8.mVarNonbasic = local_4a0;
  local_5c8.mAugmented = local_3c8;
  local_5c8.mQMin = local_188;
  local_5c8.mDimension = 8;
  local_5c8.mMinRatio = local_164;
  local_768 = local_750._4_4_ - fVar2;
  local_760 = (uint)(fVar23 - fVar22) ^ __xmm_80000000800000008000000080000000;
  local_5c8.mRatio = local_140;
  local_764 = fVar5 - fVar3;
  local_5c8.mPoly = local_118;
  local_778._12_4_ = (float)local_750 - fVar1;
  local_778._8_4_ =
       (uint)(fVar16 * fVar14 + fVar19 * fVar13 + fVar17 * fVar18) ^
       __xmm_80000000800000008000000080000000;
  local_75c = (uint)((float)((uint)fVar23 ^ uVar6) - fVar22) ^
              __xmm_80000000800000008000000080000000;
  local_5c8.mNumCols = 0x12;
  local_748 = fVar20;
  local_744 = fVar9;
  local_740 = fVar10;
  local_728 = fVar11;
  local_724 = fVar21;
  local_720 = fVar12;
  local_70c = fVar15;
  local_708 = fVar13;
  local_704 = fVar14;
  local_700 = fVar18;
  local_6ec = fVar4;
  local_684 = fVar15;
  local_680 = fVar4;
  local_668 = local_730;
  local_664 = local_710;
  local_660 = local_6f0;
  local_658 = local_678;
  bVar8 = LCPSolverShared<float>::Solve
                    (&local_5c8,(float *)local_778,&local_748,local_5e8,&local_608,(Result *)0x0);
  if (bVar8) {
    local_600 = local_600 - fVar17;
    local_608 = local_608 - fVar19;
    local_604 = local_604 - fVar16;
    *(bool *)(param_1->min).mTuple._Elems =
         (local_608 * fVar11 + local_604 * fVar21 + local_600 * fVar12) * local_604 +
         (local_608 * fVar20 + local_604 * fVar9 + local_600 * fVar10) * local_608 +
         (local_608 * fVar13 + local_604 * fVar14 + local_600 * fVar18) * local_600 <=
         *(float *)(in_R9 + 3) * *(float *)(in_R9 + 3);
  }
  else {
    *(undefined1 *)(param_1->min).mTuple._Elems = 0;
  }
  return (Result)SUB81(param_1,0);
}

// operator() @ 1495097a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Result __thiscall
gte::TIQuery<double,gte::AlignedBox<3,double>,gte::Cylinder3<double>_>::operator()
          (TIQuery<double,gte::AlignedBox<3,double>,gte::Cylinder3<double>_> *this,
          AlignedBox<3,double> *param_1,Cylinder3<double> *param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  bool bVar3;
  undefined1 (*in_R9) [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackY_bb8 [32];
  double local_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  double local_b10;
  double local_b08;
  double local_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined1 local_ae8 [16];
  double local_ab8;
  double local_ab0;
  double local_aa8;
  double local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  double local_a80;
  double local_a78;
  double local_a70;
  double local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  double local_a40;
  double local_a38;
  double local_a30;
  double local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  double local_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  double local_938;
  double local_930;
  double local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  double local_8b8;
  double local_8b0;
  double local_8a8;
  double local_878 [8];
  LCPSolverShared<double> local_838;
  Variable local_7e8 [9];
  Variable local_710 [9];
  double local_638 [144];
  double local_1b8 [9];
  double local_170 [9];
  double local_128 [9];
  double *local_e0 [9];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_bb8;
  auVar10 = *(undefined1 (*) [16])(in_R9[1] + 8);
  uVar23 = (uint)__xmm_80000000000000008000000000000000;
  uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a00 = *(double *)(in_R9[2] + 8);
  auVar11 = *in_R9;
  dVar22 = *(double *)in_R9[1] - (param_2->axis).origin.mTuple._Elems[2];
  dVar13 = auVar11._0_8_ - (param_2->axis).origin.mTuple._Elems[0];
  dVar14 = *(double *)(in_R9[3] + 8) * __real_3fe0000000000000;
  local_a80 = auVar10._0_8_;
  dVar12 = auVar11._8_8_ - (param_2->axis).origin.mTuple._Elems[1];
  dVar17 = __real_3ff0000000000000 - local_a80 * local_a80;
  local_a40 = auVar10._8_8_;
  dVar4 = (double)CONCAT44((uint)((ulonglong)(local_a80 * local_a40) >> 0x20) ^ uVar24,
                           SUB84(local_a80 * local_a40,0) ^ uVar23);
  local_a88 = CONCAT44(auVar10._4_4_ ^ uVar24,auVar10._0_4_ ^ uVar23);
  local_ae8._8_4_ = auVar11._8_4_;
  local_ae8._0_8_ = dVar12;
  local_ae8._12_4_ = auVar11._12_4_;
  dVar5 = (double)CONCAT44((uint)((ulonglong)(local_a80 * local_a00) >> 0x20) ^ uVar24,
                           SUB84(local_a80 * local_a00,0) ^ uVar23);
  uVar20 = auVar10._8_4_ ^ uVar23;
  uVar21 = auVar10._12_4_ ^ uVar24;
  dVar6 = (double)CONCAT44((uint)((ulonglong)(local_a80 * local_a40) >> 0x20) ^ uVar24,
                           SUB84(local_a80 * local_a40,0) ^ uVar23);
  dVar18 = __real_3ff0000000000000 - local_a40 * local_a40;
  dVar7 = (double)CONCAT44((uint)((ulonglong)(local_a40 * local_a00) >> 0x20) ^ uVar24,
                           SUB84(local_a40 * local_a00,0) ^ uVar23);
  dVar8 = (double)CONCAT44((uint)((ulonglong)(local_a80 * local_a00) >> 0x20) ^ uVar24,
                           SUB84(local_a80 * local_a00,0) ^ uVar23);
  dVar9 = (double)CONCAT44((uint)((ulonglong)(local_a00 * local_a40) >> 0x20) ^ uVar24,
                           SUB84(local_a00 * local_a40,0) ^ uVar23);
  dVar19 = __real_3ff0000000000000 - local_a00 * local_a00;
  auVar1._4_8_ = local_a00;
  auVar1._0_4_ = (int)((ulonglong)(dVar12 * local_a40) >> 0x20);
  auVar10._0_8_ = auVar1._0_8_ << 0x20;
  auVar10._8_4_ = SUB84(dVar22 * local_a00,0);
  auVar10._12_4_ = (int)((ulonglong)(dVar22 * local_a00) >> 0x20);
  local_a08 = CONCAT44((uint)((ulonglong)local_a00 >> 0x20) ^ uVar24,SUB84(local_a00,0) ^ uVar23);
  dVar15 = dVar12 * local_a40 + auVar10._8_8_ + dVar13 * local_a80;
  dVar16 = dVar15 - dVar14;
  local_aa0 = __real_3ff0000000000000;
  dVar14 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar24,SUB84(dVar15,0) ^ uVar23) -
           dVar14;
  local_a98 = __xmm_80000000000000008000000000000000;
  uStack_a90 = _UNK_15066df78;
  local_a58 = ___xmm_80000000000000003ff0000000000000;
  uStack_a50 = _UNK_151e59888;
  local_a60 = __real_8000000000000000;
  local_a20 = __real_8000000000000000;
  local_9f8 = ___xmm_0000000000000000bff0000000000000;
  uStack_9f0 = _UNK_15076ad98;
  local_968 = ___xmm_0000000000000000bff0000000000000;
  uStack_960 = _UNK_15076ad98;
  local_a18 = ___xmm_3ff00000000000008000000000000000;
  uStack_a10 = _UNK_151be7c48;
  local_920 = 0;
  local_8e0 = 0;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9a8 = 0;
  uStack_9a0 = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_958 = 0;
  uStack_950 = 0;
  local_918 = 0;
  uStack_910 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_9d8 = 0;
  uStack_9d0 = 0;
  local_a48 = CONCAT44(uVar21,uVar20);
  local_8f0 = CONCAT44(uVar21,uVar20);
  local_9b8 = ___xmm_bff00000000000000000000000000000;
  uStack_9b0 = _UNK_1508ffb28;
  local_998 = 0;
  uStack_990 = 0;
  local_978 = 0;
  uStack_970 = 0;
  local_948 = 0;
  uStack_940 = 0;
  local_908 = 0;
  uStack_900 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_838.mMaxIterations = 0x40;
  local_838.mNumIterations = 0;
  local_838.mVarBasic = local_7e8;
  local_838.mDimension = 8;
  local_838.mVarNonbasic = local_710;
  dVar15 = dVar12 * dVar4 + dVar13 * dVar17 + dVar22 * dVar5;
  local_838.mNumCols = 0x12;
  local_838.mAugmented = local_638;
  local_838.mQMin = local_1b8;
  local_838.mMinRatio = local_170;
  local_838.mRatio = local_128;
  local_b28 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar24,SUB84(dVar15,0) ^ uVar23);
  local_838.mPoly = local_e0;
  dVar15 = dVar12 * dVar18 + dVar13 * dVar6 + dVar22 * dVar7;
  local_af8 = CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar24,SUB84(dVar16,0) ^ uVar23);
  local_af0 = CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar24,SUB84(dVar14,0) ^ uVar23);
  local_b20 = CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar24,SUB84(dVar15,0) ^ uVar23);
  local_b10 = (param_2->axis).direction.mTuple._Elems[0] - (param_2->axis).origin.mTuple._Elems[0];
  local_b08 = (param_2->axis).direction.mTuple._Elems[1] - (param_2->axis).origin.mTuple._Elems[1];
  dVar16 = dVar12 * dVar9 + dVar13 * dVar8 + dVar22 * dVar19;
  local_b00 = (param_2->axis).direction.mTuple._Elems[2] - (param_2->axis).origin.mTuple._Elems[2];
  local_b18 = CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar24,SUB84(dVar16,0) ^ uVar23);
  local_ab8 = dVar17;
  local_ab0 = dVar4;
  local_aa8 = dVar5;
  local_a78 = dVar6;
  local_a70 = dVar18;
  local_a68 = dVar7;
  local_a38 = dVar8;
  local_a30 = dVar9;
  local_a28 = dVar19;
  local_938 = local_a80;
  local_930 = local_a40;
  local_928 = local_a00;
  local_8f8 = local_a88;
  local_8e8 = local_a08;
  bVar3 = LCPSolverShared<double>::Solve
                    (&local_838,&local_b28,&local_ab8,local_878,&local_8b8,(Result *)0x0);
  if (bVar3) {
    local_8b0 = local_8b0 - dVar12;
    local_8a8 = local_8a8 - dVar22;
    local_8b8 = local_8b8 - dVar13;
    dVar12 = (local_8b8 * dVar6 + local_8b0 * dVar18 + local_8a8 * dVar7) * local_8b0;
    dVar13 = (local_8b0 * dVar9 + local_8b8 * dVar8 + local_8a8 * dVar19) * local_8a8;
    auVar2._4_8_ = local_8a8;
    auVar2._0_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar11._0_8_ = auVar2._0_8_ << 0x20;
    auVar11._8_4_ = SUB84(dVar13,0);
    auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(bool *)(param_1->min).mTuple._Elems =
         dVar12 + auVar11._8_8_ +
         (local_8b0 * dVar4 + dVar17 * local_8b8 + local_8a8 * dVar5) * local_8b8 <=
         *(double *)in_R9[3] * *(double *)in_R9[3];
  }
  else {
    *(undefined1 *)(param_1->min).mTuple._Elems = 0;
  }
  return (Result)SUB81(param_1,0);
}

