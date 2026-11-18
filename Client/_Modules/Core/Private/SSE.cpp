// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// atan2_ps @ 14183d000

__m128 * __cdecl SSE::atan2_ps(__m128 *__return_storage_ptr__,__m128 *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar7 = divps((undefined1  [16])*__return_storage_ptr__,(undefined1  [16])*param_1);
  fVar2 = (float)(auVar7._0_4_ & _ps_inv_sign_mask[0]);
  fVar3 = (float)(auVar7._4_4_ & _ps_inv_sign_mask[1]);
  fVar4 = (float)(auVar7._8_4_ & _ps_inv_sign_mask[2]);
  fVar5 = (float)(auVar7._12_4_ & _ps_inv_sign_mask[3]);
  auVar6._0_4_ = fVar2 - _ps_1[0];
  auVar6._4_4_ = fVar3 - _ps_1[1];
  auVar6._8_4_ = fVar4 - _ps_1[2];
  auVar6._12_4_ = fVar5 - _ps_1[3];
  auVar1._0_4_ = fVar2 + _ps_1[0];
  auVar1._4_4_ = fVar3 + _ps_1[1];
  auVar1._8_4_ = fVar4 + _ps_1[2];
  auVar1._12_4_ = fVar5 + _ps_1[3];
  auVar7._4_4_ = fVar3;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar4;
  auVar7._12_4_ = fVar5;
  divps((undefined1  [16])_ps_1,auVar7);
  divps(auVar6,auVar1);
  return (__m128 *)&stack0x00000000;
}

// atan_ps @ 14183d2d0

__m128 * __cdecl SSE::atan_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  __m128 *in_RAX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar3 = (float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]);
  fVar4 = (float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]);
  fVar5 = (float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]);
  fVar6 = (float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]);
  auVar7._0_4_ = fVar3 - _ps_1[0];
  auVar7._4_4_ = fVar4 - _ps_1[1];
  auVar7._8_4_ = fVar5 - _ps_1[2];
  auVar7._12_4_ = fVar6 - _ps_1[3];
  auVar2._4_4_ = fVar4;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = fVar5;
  auVar2._12_4_ = fVar6;
  divps((undefined1  [16])_ps_1,auVar2);
  auVar1._4_4_ = fVar4 + _ps_1[1];
  auVar1._0_4_ = fVar3 + _ps_1[0];
  auVar1._8_4_ = fVar5 + _ps_1[2];
  auVar1._12_4_ = fVar6 + _ps_1[3];
  divps(auVar7,auVar1);
  return in_RAX;
}

// cos_ps @ 14183d4b0

__m128 * __cdecl SSE::cos_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// cot_ps @ 14183d690

__m128 * __cdecl SSE::cot_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = (float)((int)((float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) *
                       _ps_cephes_FOPI[0]) + _pi32_1[0] & _pi32_inv1[0]);
  fVar3 = (float)((int)((float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) *
                       _ps_cephes_FOPI[1]) + _pi32_1[1] & _pi32_inv1[1]);
  fVar4 = (float)((int)((float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) *
                       _ps_cephes_FOPI[2]) + _pi32_1[2] & _pi32_inv1[2]);
  fVar5 = (float)((int)((float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) *
                       _ps_cephes_FOPI[3]) + _pi32_1[3] & _pi32_inv1[3]);
  fVar6 = fVar2 * _ps_minus_cephes_DP1[0] +
          (float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) +
          fVar2 * _ps_minus_cephes_DP2[0] + fVar2 * _ps_minus_cephes_DP3[0];
  fVar7 = fVar3 * _ps_minus_cephes_DP1[1] +
          (float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) +
          fVar3 * _ps_minus_cephes_DP2[1] + fVar3 * _ps_minus_cephes_DP3[1];
  fVar8 = fVar4 * _ps_minus_cephes_DP1[2] +
          (float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) +
          fVar4 * _ps_minus_cephes_DP2[2] + fVar4 * _ps_minus_cephes_DP3[2];
  fVar9 = fVar5 * _ps_minus_cephes_DP1[3] +
          (float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) +
          fVar5 * _ps_minus_cephes_DP2[3] + fVar5 * _ps_minus_cephes_DP3[3];
  fVar2 = fVar6 * fVar6;
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar9 * fVar9;
  auVar1._4_4_ = (((((fVar3 * _ps_tancof_p0[1] + _ps_tancof_p1[1]) * fVar3 + _ps_tancof_p2[1]) *
                    fVar3 + _ps_tancof_p3[1]) * fVar3 + _ps_tancof_p4[1]) * fVar3 + _ps_tancof_p5[1]
                 ) * fVar3 * fVar7 + fVar7;
  auVar1._0_4_ = (((((fVar2 * _ps_tancof_p0[0] + _ps_tancof_p1[0]) * fVar2 + _ps_tancof_p2[0]) *
                    fVar2 + _ps_tancof_p3[0]) * fVar2 + _ps_tancof_p4[0]) * fVar2 + _ps_tancof_p5[0]
                 ) * fVar2 * fVar6 + fVar6;
  auVar1._8_4_ = (((((fVar4 * _ps_tancof_p0[2] + _ps_tancof_p1[2]) * fVar4 + _ps_tancof_p2[2]) *
                    fVar4 + _ps_tancof_p3[2]) * fVar4 + _ps_tancof_p4[2]) * fVar4 + _ps_tancof_p5[2]
                 ) * fVar4 * fVar8 + fVar8;
  auVar1._12_4_ =
       (((((fVar5 * _ps_tancof_p0[3] + _ps_tancof_p1[3]) * fVar5 + _ps_tancof_p2[3]) * fVar5 +
         _ps_tancof_p3[3]) * fVar5 + _ps_tancof_p4[3]) * fVar5 + _ps_tancof_p5[3]) * fVar5 * fVar9 +
       fVar9;
  divps((undefined1  [16])_ps_1,auVar1);
  return in_RAX;
}

// exp_ps @ 14183d840

__m128 * __cdecl SSE::exp_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  undefined1 auVar1 [16];
  
  auVar1 = minps((undefined1  [16])*__return_storage_ptr__,(undefined1  [16])_ps_exp_hi);
  maxps(auVar1,(undefined1  [16])_ps_exp_lo);
  return in_RAX;
}

// log_ps @ 14183da00

__m128 * __cdecl SSE::log_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  
  maxps((undefined1  [16])*__return_storage_ptr__,(undefined1  [16])_ps_min_norm_pos);
  return in_RAX;
}

// sin_ps @ 14183dc10

__m128 * __cdecl SSE::sin_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// sincos_ps @ 14183de80

void __cdecl SSE::sincos_ps(__m128 *param_1,__m128 *param_2,__m128 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  
  uVar29 = param_1->m128_u32[1] & _ps_sign_mask[1];
  uVar30 = param_1->m128_u32[2] & _ps_sign_mask[2];
  uVar31 = param_1->m128_u32[3] & _ps_sign_mask[3];
  fVar5 = (float)(param_1->m128_u32[0] & _ps_inv_sign_mask[0]);
  fVar6 = (float)(param_1->m128_u32[1] & _ps_inv_sign_mask[1]);
  fVar7 = (float)(param_1->m128_u32[2] & _ps_inv_sign_mask[2]);
  fVar8 = (float)(param_1->m128_u32[3] & _ps_inv_sign_mask[3]);
  uVar22 = (int)(fVar5 * _ps_cephes_FOPI[0]) + _pi32_1[0] & _pi32_inv1[0];
  uVar23 = (int)(fVar6 * _ps_cephes_FOPI[1]) + _pi32_1[1] & _pi32_inv1[1];
  uVar25 = (int)(fVar7 * _ps_cephes_FOPI[2]) + _pi32_1[2] & _pi32_inv1[2];
  uVar27 = (int)(fVar8 * _ps_cephes_FOPI[3]) + _pi32_1[3] & _pi32_inv1[3];
  fVar1 = (float)(int)uVar22;
  fVar2 = (float)(int)uVar23;
  fVar3 = (float)(int)uVar25;
  fVar4 = (float)(int)uVar27;
  uVar14 = -(uint)((uVar22 & _pi32_2[0]) == 0);
  uVar16 = -(uint)((uVar23 & _pi32_2[1]) == 0);
  uVar18 = -(uint)((uVar25 & _pi32_2[2]) == 0);
  uVar20 = -(uint)((uVar27 & _pi32_2[3]) == 0);
  uVar24 = uVar23 & _pi32_4[1];
  uVar26 = uVar25 & _pi32_4[2];
  uVar28 = uVar27 & _pi32_4[3];
  uVar13 = ~(uVar22 - _pi32_2[0]) & _pi32_4[0];
  uVar23 = ~(uVar23 - _pi32_2[1]) & _pi32_4[1];
  uVar25 = ~(uVar25 - _pi32_2[2]) & _pi32_4[2];
  uVar27 = ~(uVar27 - _pi32_2[3]) & _pi32_4[3];
  fVar9 = fVar1 * _ps_minus_cephes_DP1[0] + fVar5 + fVar1 * _ps_minus_cephes_DP2[0] +
          fVar1 * _ps_minus_cephes_DP3[0];
  fVar10 = fVar2 * _ps_minus_cephes_DP1[1] + fVar6 + fVar2 * _ps_minus_cephes_DP2[1] +
           fVar2 * _ps_minus_cephes_DP3[1];
  fVar11 = fVar3 * _ps_minus_cephes_DP1[2] + fVar7 + fVar3 * _ps_minus_cephes_DP2[2] +
           fVar3 * _ps_minus_cephes_DP3[2];
  fVar12 = fVar4 * _ps_minus_cephes_DP1[3] + fVar8 + fVar4 * _ps_minus_cephes_DP2[3] +
           fVar4 * _ps_minus_cephes_DP3[3];
  fVar1 = fVar9 * fVar9;
  fVar3 = fVar10 * fVar10;
  fVar5 = fVar11 * fVar11;
  fVar7 = fVar12 * fVar12;
  fVar9 = ((fVar1 * _ps_sincof_p0[0] + _ps_sincof_p1[0]) * fVar1 + _ps_sincof_p2[0]) * fVar1 * fVar9
          + fVar9;
  fVar10 = ((fVar3 * _ps_sincof_p0[1] + _ps_sincof_p1[1]) * fVar3 + _ps_sincof_p2[1]) * fVar3 *
           fVar10 + fVar10;
  fVar11 = ((fVar5 * _ps_sincof_p0[2] + _ps_sincof_p1[2]) * fVar5 + _ps_sincof_p2[2]) * fVar5 *
           fVar11 + fVar11;
  fVar12 = ((fVar7 * _ps_sincof_p0[3] + _ps_sincof_p1[3]) * fVar7 + _ps_sincof_p2[3]) * fVar7 *
           fVar12 + fVar12;
  fVar2 = (float)((uint)fVar9 & uVar14);
  fVar4 = (float)((uint)fVar10 & uVar16);
  fVar6 = (float)((uint)fVar11 & uVar18);
  fVar8 = (float)((uint)fVar12 & uVar20);
  fVar1 = (((fVar1 * _ps_coscof_p0[0] + _ps_coscof_p1[0]) * fVar1 + _ps_coscof_p2[0]) * fVar1 *
           fVar1 - fVar1 * _ps_0p5[0]) + _ps_1[0];
  fVar3 = (((fVar3 * _ps_coscof_p0[1] + _ps_coscof_p1[1]) * fVar3 + _ps_coscof_p2[1]) * fVar3 *
           fVar3 - fVar3 * _ps_0p5[1]) + _ps_1[1];
  fVar5 = (((fVar5 * _ps_coscof_p0[2] + _ps_coscof_p1[2]) * fVar5 + _ps_coscof_p2[2]) * fVar5 *
           fVar5 - fVar5 * _ps_0p5[2]) + _ps_1[2];
  fVar7 = (((fVar7 * _ps_coscof_p0[3] + _ps_coscof_p1[3]) * fVar7 + _ps_coscof_p2[3]) * fVar7 *
           fVar7 - fVar7 * _ps_0p5[3]) + _ps_1[3];
  fVar15 = (float)(~uVar14 & (uint)fVar1);
  fVar17 = (float)(~uVar16 & (uint)fVar3);
  fVar19 = (float)(~uVar18 & (uint)fVar5);
  fVar21 = (float)(~uVar20 & (uint)fVar7);
  param_2->m128_u32[0] =
       (uVar22 & _pi32_4[0]) << 0x1d ^ param_1->m128_u32[0] & _ps_sign_mask[0] ^
       (uint)(fVar15 + fVar2);
  param_2->m128_u32[1] = uVar24 << 0x1d ^ uVar29 ^ (uint)(fVar17 + fVar4);
  param_2->m128_u32[2] = uVar26 << 0x1d ^ uVar30 ^ (uint)(fVar19 + fVar6);
  param_2->m128_u32[3] = uVar28 << 0x1d ^ uVar31 ^ (uint)(fVar21 + fVar8);
  param_3->m128_u32[0] = (uint)((fVar9 - fVar2) + (fVar1 - fVar15)) ^ uVar13 << 0x1d;
  param_3->m128_u32[1] = (uint)((fVar10 - fVar4) + (fVar3 - fVar17)) ^ uVar23 << 0x1d;
  param_3->m128_u32[2] = (uint)((fVar11 - fVar6) + (fVar5 - fVar19)) ^ uVar25 << 0x1d;
  param_3->m128_u32[3] = (uint)((fVar12 - fVar8) + (fVar7 - fVar21)) ^ uVar27 << 0x1d;
  return;
}

// tan_ps @ 14183e0d0

__m128 * __cdecl SSE::tan_ps(__m128 *__return_storage_ptr__,__m128 *param_1)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = (float)((int)((float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) *
                       _ps_cephes_FOPI[0]) + _pi32_1[0] & _pi32_inv1[0]);
  fVar3 = (float)((int)((float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) *
                       _ps_cephes_FOPI[1]) + _pi32_1[1] & _pi32_inv1[1]);
  fVar4 = (float)((int)((float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) *
                       _ps_cephes_FOPI[2]) + _pi32_1[2] & _pi32_inv1[2]);
  fVar5 = (float)((int)((float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) *
                       _ps_cephes_FOPI[3]) + _pi32_1[3] & _pi32_inv1[3]);
  fVar6 = fVar2 * _ps_minus_cephes_DP1[0] +
          (float)(__return_storage_ptr__->m128_u32[0] & _ps_inv_sign_mask[0]) +
          fVar2 * _ps_minus_cephes_DP2[0] + fVar2 * _ps_minus_cephes_DP3[0];
  fVar7 = fVar3 * _ps_minus_cephes_DP1[1] +
          (float)(__return_storage_ptr__->m128_u32[1] & _ps_inv_sign_mask[1]) +
          fVar3 * _ps_minus_cephes_DP2[1] + fVar3 * _ps_minus_cephes_DP3[1];
  fVar8 = fVar4 * _ps_minus_cephes_DP1[2] +
          (float)(__return_storage_ptr__->m128_u32[2] & _ps_inv_sign_mask[2]) +
          fVar4 * _ps_minus_cephes_DP2[2] + fVar4 * _ps_minus_cephes_DP3[2];
  fVar9 = fVar5 * _ps_minus_cephes_DP1[3] +
          (float)(__return_storage_ptr__->m128_u32[3] & _ps_inv_sign_mask[3]) +
          fVar5 * _ps_minus_cephes_DP2[3] + fVar5 * _ps_minus_cephes_DP3[3];
  fVar2 = fVar6 * fVar6;
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar9 * fVar9;
  auVar1._4_4_ = (((((fVar3 * _ps_tancof_p0[1] + _ps_tancof_p1[1]) * fVar3 + _ps_tancof_p2[1]) *
                    fVar3 + _ps_tancof_p3[1]) * fVar3 + _ps_tancof_p4[1]) * fVar3 + _ps_tancof_p5[1]
                 ) * fVar3 * fVar7 + fVar7;
  auVar1._0_4_ = (((((fVar2 * _ps_tancof_p0[0] + _ps_tancof_p1[0]) * fVar2 + _ps_tancof_p2[0]) *
                    fVar2 + _ps_tancof_p3[0]) * fVar2 + _ps_tancof_p4[0]) * fVar2 + _ps_tancof_p5[0]
                 ) * fVar2 * fVar6 + fVar6;
  auVar1._8_4_ = (((((fVar4 * _ps_tancof_p0[2] + _ps_tancof_p1[2]) * fVar4 + _ps_tancof_p2[2]) *
                    fVar4 + _ps_tancof_p3[2]) * fVar4 + _ps_tancof_p4[2]) * fVar4 + _ps_tancof_p5[2]
                 ) * fVar4 * fVar8 + fVar8;
  auVar1._12_4_ =
       (((((fVar5 * _ps_tancof_p0[3] + _ps_tancof_p1[3]) * fVar5 + _ps_tancof_p2[3]) * fVar5 +
         _ps_tancof_p3[3]) * fVar5 + _ps_tancof_p4[3]) * fVar5 + _ps_tancof_p5[3]) * fVar5 * fVar9 +
       fVar9;
  divps((undefined1  [16])_ps_1,auVar1);
  return in_RAX;
}

