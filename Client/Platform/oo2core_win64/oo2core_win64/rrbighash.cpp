// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 20

// rrIsAligned<unsigned___int64> @ 14f39d1e0

bool __cdecl oo2::rrIsAligned<unsigned___int64>(ulong64 param_1,long64 param_2)

{
  return (~(param_2 - 1U) & param_1) == param_1;
}

// rrIsAlignedPointer<void_const_> @ 14f39d200

bool __cdecl oo2::rrIsAlignedPointer<void_const_>(void *param_1,long64 param_2)

{
  return (void *)(~(param_2 - 1U) & (ulonglong)param_1) == param_1;
}

// t_u32quad @ 14f39d220

t_u32quad * __thiscall oo2::t_u32quad::t_u32quad(t_u32quad *this,__m128i *param_1)

{
  long64 lVar1;
  
  lVar1 = param_1->m128i_i64[1];
  (this->data).m128i_i64[0] = param_1->m128i_i64[0];
  (this->data).m128i_i64[1] = lVar1;
  return this;
}

// t_u32quad @ 14f39d240

t_u32quad * __thiscall oo2::t_u32quad::t_u32quad(t_u32quad *this)

{
  return this;
}

// operator+= @ 14f39d250

void __thiscall oo2::t_u32quad::operator+=(t_u32quad *this,t_u32quad *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (param_1->data).m128i_i32[1];
  iVar2 = (param_1->data).m128i_i32[2];
  iVar3 = (param_1->data).m128i_i32[3];
  iVar4 = (this->data).m128i_i32[1];
  iVar5 = (this->data).m128i_i32[2];
  iVar6 = (this->data).m128i_i32[3];
  (this->data).m128i_i32[0] = (param_1->data).m128i_i32[0] + (this->data).m128i_i32[0];
  (this->data).m128i_i32[1] = iVar1 + iVar4;
  (this->data).m128i_i32[2] = iVar2 + iVar5;
  (this->data).m128i_i32[3] = iVar3 + iVar6;
  return;
}

// operator-= @ 14f39d270

void __thiscall oo2::t_u32quad::operator-=(t_u32quad *this,t_u32quad *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (this->data).m128i_i32[1];
  iVar2 = (this->data).m128i_i32[2];
  iVar3 = (this->data).m128i_i32[3];
  iVar4 = (param_1->data).m128i_i32[1];
  iVar5 = (param_1->data).m128i_i32[2];
  iVar6 = (param_1->data).m128i_i32[3];
  (this->data).m128i_i32[0] = (this->data).m128i_i32[0] - (param_1->data).m128i_i32[0];
  (this->data).m128i_i32[1] = iVar1 - iVar4;
  (this->data).m128i_i32[2] = iVar2 - iVar5;
  (this->data).m128i_i32[3] = iVar3 - iVar6;
  return;
}

// operator^= @ 14f39d290

void __thiscall oo2::t_u32quad::operator^=(t_u32quad *this,t_u32quad *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_1->data).m128i_u64[1];
  uVar2 = (this->data).m128i_u64[1];
  (this->data).m128i_u64[0] = (param_1->data).m128i_u64[0] ^ (this->data).m128i_u64[0];
  (this->data).m128i_u64[1] = uVar1 ^ uVar2;
  return;
}

// LoadVec @ 14f39d2b0

t_u32quad * __cdecl oo2::LoadVec(t_u32quad *__return_storage_ptr__,uchar *param_1,int param_2)

{
  undefined1 in_XMM1 [16];
  undefined1 auVar1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar2 [16];
  
  auVar1 = pshuflw(in_XMM1,*(undefined1 (*) [16])(param_1 + param_2),0xb1);
  auVar1 = pshufhw(in_XMM2,auVar1,0xb1);
  auVar2._0_2_ = auVar1._0_2_ >> 8;
  auVar2._2_2_ = auVar1._2_2_ >> 8;
  auVar2._4_2_ = auVar1._4_2_ >> 8;
  auVar2._6_2_ = auVar1._6_2_ >> 8;
  auVar2._8_2_ = auVar1._8_2_ >> 8;
  auVar2._10_2_ = auVar1._10_2_ >> 8;
  auVar2._12_2_ = auVar1._12_2_ >> 8;
  auVar2._14_2_ = auVar1._14_2_ >> 8;
  auVar1 = psllw(auVar1,8);
  __return_storage_ptr__->data = (__m128i)(auVar1 | auVar2);
  return __return_storage_ptr__;
}

// LoadVec_Aligned16 @ 14f39d2f0

t_u32quad * __cdecl
oo2::LoadVec_Aligned16(t_u32quad *__return_storage_ptr__,uchar *param_1,int param_2)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = pshuflw(in_XMM0,*(undefined1 (*) [16])(param_1 + param_2),0xb1);
  auVar1 = pshufhw(in_XMM1,auVar1,0xb1);
  auVar2._0_2_ = auVar1._0_2_ >> 8;
  auVar2._2_2_ = auVar1._2_2_ >> 8;
  auVar2._4_2_ = auVar1._4_2_ >> 8;
  auVar2._6_2_ = auVar1._6_2_ >> 8;
  auVar2._8_2_ = auVar1._8_2_ >> 8;
  auVar2._10_2_ = auVar1._10_2_ >> 8;
  auVar2._12_2_ = auVar1._12_2_ >> 8;
  auVar2._14_2_ = auVar1._14_2_ >> 8;
  auVar1 = psllw(auVar1,8);
  __return_storage_ptr__->data = (__m128i)(auVar1 | auVar2);
  return __return_storage_ptr__;
}

// MakeShuffle @ 14f39d320

void * __cdecl oo2::MakeShuffle(void *param_1)

{
  return (void *)0x0;
}

// StoreVec @ 14f39d330

void __cdecl oo2::StoreVec(void *param_1,t_u32quad *param_2)

{
  long64 lVar1;
  
  lVar1 = (param_2->data).m128i_i64[1];
  *(long64 *)param_1 = (param_2->data).m128i_i64[0];
  *(long64 *)((longlong)param_1 + 8) = lVar1;
  return;
}

// _mm_bswap32 @ 14f39d340

__m128i * __cdecl oo2::_mm_bswap32(__m128i *__return_storage_ptr__,__m128i *param_1)

{
  __m128i *in_RAX;
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16];
  
  auVar1 = pshuflw(in_XMM0,(undefined1  [16])*__return_storage_ptr__,0xb1);
  auVar1 = pshufhw(in_XMM1,auVar1,0xb1);
  psllw(auVar1,8);
  return in_RAX;
}

// rrAlignDown64 @ 14f39d370

ulong64 __cdecl oo2::rrAlignDown64(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrAlignDownA @ 14f39d390

ulong64 __cdecl oo2::rrAlignDownA(ulong64 param_1,long64 param_2)

{
  return ~(param_2 - 1U) & param_1;
}

// rrBigHash64_Combine @ 14f39d3b0

ulong64 __cdecl oo2::rrBigHash64_Combine(ulong64 param_1,ulong64 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (uint)param_1;
  iVar1 = (int)(param_1 >> 0x20);
  iVar2 = uVar4 + iVar1;
  uVar4 = (uVar4 << 4 | uVar4 >> 0x1c) ^ 0x5768b525 - uVar4;
  iVar5 = uVar4 + iVar2;
  uVar4 = (uVar4 << 6 | uVar4 >> 0x1a) ^ iVar1 - uVar4;
  iVar1 = uVar4 + iVar5;
  uVar4 = (uVar4 << 8 | uVar4 >> 0x18) ^ iVar2 - uVar4;
  iVar2 = uVar4 + iVar1;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x10) ^ iVar5 - uVar4;
  iVar5 = uVar4 + iVar2;
  uVar4 = (uVar4 << 0x13 | uVar4 >> 0xd) ^ iVar1 - uVar4;
  iVar1 = uVar4 + (int)(param_2 >> 0x20) + iVar5;
  uVar4 = ((uVar4 << 4 | uVar4 >> 0x1c) ^ iVar2 - uVar4) + (int)param_2;
  iVar6 = uVar4 + iVar1;
  uVar4 = (uVar4 * 0x10 | uVar4 >> 0x1c) ^ (iVar5 - uVar4) + 0x206f85b3;
  iVar2 = uVar4 + iVar6;
  uVar4 = (uVar4 << 6 | uVar4 >> 0x1a) ^ iVar1 - uVar4;
  iVar1 = uVar4 + iVar2;
  uVar4 = (uVar4 << 8 | uVar4 >> 0x18) ^ iVar6 - uVar4;
  iVar5 = uVar4 + iVar1;
  uVar3 = (uVar4 << 0x10 | uVar4 >> 0x10) ^ iVar2 - uVar4;
  uVar4 = (uVar3 << 0x13 | uVar3 >> 0xd) ^ iVar1 - uVar3;
  return CONCAT44(uVar4 + iVar5 + uVar3,(uVar4 << 4 | uVar4 >> 0x1c) ^ iVar5 - uVar4);
}

// rrBigHash64_SIMD @ 14f39d4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl oo2::rrBigHash64_SIMD(void *param_1,long64 param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar25;
  int iVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar27;
  undefined1 auVar24 [16];
  int iVar28;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  undefined1 auVar29 [16];
  int iVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint uVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar2 = (int)param_2 + 0xdeadbeef;
  iVar3 = 0x5768b525 - (int)param_2;
  auVar39._4_4_ = iVar3;
  auVar39._0_4_ = iVar3;
  auVar39._8_4_ = iVar3;
  auVar39._12_4_ = iVar3;
  auVar29 = ___xmm_206f85b3206f85b3206f85b3206f85b3;
  uVar31 = uVar2;
  uVar33 = uVar2;
  uVar35 = uVar2;
  if ((void *)((ulonglong)param_1 & 0xfffffffffffffff0) == param_1) {
    if (0x17f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x180;
      param_2 = (ulonglong)param_2 % 0x180;
      do {
        lVar4 = 8;
        do {
          auVar6 = pshuflw(in_XMM0,*(undefined1 (*) [16])param_1,0xb1);
          auVar20 = pshufhw(in_XMM5,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
          auVar22 = pshufhw(auVar29,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x20),0xb1);
          auVar6 = pshufhw(in_XMM3,auVar6,0xb1);
          param_1 = (void *)((longlong)param_1 + 0x30);
          auVar23 = psllw(auVar22,8);
          auVar10._0_2_ = auVar6._0_2_ >> 8;
          auVar10._2_2_ = auVar6._2_2_ >> 8;
          auVar10._4_2_ = auVar6._4_2_ >> 8;
          auVar10._6_2_ = auVar6._6_2_ >> 8;
          auVar10._8_2_ = auVar6._8_2_ >> 8;
          auVar10._10_2_ = auVar6._10_2_ >> 8;
          auVar10._12_2_ = auVar6._12_2_ >> 8;
          auVar10._14_2_ = auVar6._14_2_ >> 8;
          in_XMM2._0_2_ = auVar22._0_2_ >> 8;
          in_XMM2._2_2_ = auVar22._2_2_ >> 8;
          in_XMM2._4_2_ = auVar22._4_2_ >> 8;
          in_XMM2._6_2_ = auVar22._6_2_ >> 8;
          in_XMM2._8_2_ = auVar22._8_2_ >> 8;
          in_XMM2._10_2_ = auVar22._10_2_ >> 8;
          in_XMM2._12_2_ = auVar22._12_2_ >> 8;
          in_XMM2._14_2_ = auVar22._14_2_ >> 8;
          auVar6 = psllw(auVar6,8);
          auVar23 = auVar23 | in_XMM2;
          in_XMM5 = psllw(auVar20,8);
          in_XMM3 = auVar6 | auVar10;
          in_XMM4._0_2_ = auVar20._0_2_ >> 8;
          in_XMM4._2_2_ = auVar20._2_2_ >> 8;
          in_XMM4._4_2_ = auVar20._4_2_ >> 8;
          in_XMM4._6_2_ = auVar20._6_2_ >> 8;
          in_XMM4._8_2_ = auVar20._8_2_ >> 8;
          in_XMM4._10_2_ = auVar20._10_2_ >> 8;
          in_XMM4._12_2_ = auVar20._12_2_ >> 8;
          in_XMM4._14_2_ = auVar20._14_2_ >> 8;
          iVar3 = auVar23._0_4_ + auVar29._0_4_;
          iVar25 = auVar23._4_4_ + auVar29._4_4_;
          iVar26 = auVar23._8_4_ + auVar29._8_4_;
          iVar27 = auVar23._12_4_ + auVar29._12_4_;
          uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
          uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
          uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
          uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
          auVar29 = in_XMM5 | in_XMM4;
          iVar37 = uVar36 + iVar3;
          iVar44 = uVar43 + iVar25;
          iVar46 = uVar45 + iVar26;
          iVar48 = uVar47 + iVar27;
          uVar2 = (auVar29._0_4_ + uVar2) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
          uVar36 = (auVar29._4_4_ + uVar31) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
          uVar43 = (auVar29._8_4_ + uVar33) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
          uVar45 = (auVar29._12_4_ + uVar35) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
          iVar28 = uVar2 + iVar37;
          iVar30 = uVar36 + iVar44;
          iVar32 = uVar43 + iVar46;
          iVar34 = uVar45 + iVar48;
          uVar31 = iVar3 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
          uVar33 = iVar25 - uVar36 ^ (uVar36 << 6 | uVar36 >> 0x1a);
          uVar35 = iVar26 - uVar43 ^ (uVar43 << 6 | uVar43 >> 0x1a);
          uVar2 = iVar27 - uVar45 ^ (uVar45 << 6 | uVar45 >> 0x1a);
          iVar3 = uVar31 + iVar28;
          iVar25 = uVar33 + iVar30;
          iVar26 = uVar35 + iVar32;
          iVar27 = uVar2 + iVar34;
          uVar31 = iVar37 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
          uVar33 = iVar44 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
          uVar35 = iVar46 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
          uVar2 = iVar48 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
          iVar37 = uVar31 + iVar3;
          iVar44 = uVar33 + iVar25;
          iVar46 = uVar35 + iVar26;
          iVar48 = uVar2 + iVar27;
          uVar36 = iVar28 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
          uVar43 = iVar30 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
          uVar45 = iVar32 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
          uVar47 = iVar34 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
          uVar2 = uVar36 + iVar37;
          uVar31 = uVar43 + iVar44;
          uVar33 = uVar45 + iVar46;
          uVar35 = uVar47 + iVar48;
          uVar36 = iVar3 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
          uVar43 = iVar25 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
          uVar45 = iVar26 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
          uVar47 = iVar27 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
          in_XMM0._0_4_ = uVar36 >> 0x1c;
          in_XMM0._4_4_ = uVar43 >> 0x1c;
          in_XMM0._8_4_ = uVar45 >> 0x1c;
          in_XMM0._12_4_ = uVar47 >> 0x1c;
          auVar38._0_4_ = iVar37 - uVar36;
          auVar38._4_4_ = iVar44 - uVar43;
          auVar38._8_4_ = iVar46 - uVar45;
          auVar38._12_4_ = iVar48 - uVar47;
          auVar11._0_4_ = uVar36 << 4;
          auVar11._4_4_ = uVar43 << 4;
          auVar11._8_4_ = uVar45 << 4;
          auVar11._12_4_ = uVar47 << 4;
          auVar29._0_4_ = uVar2 + uVar36;
          auVar29._4_4_ = uVar31 + uVar43;
          auVar29._8_4_ = uVar33 + uVar45;
          auVar29._12_4_ = uVar35 + uVar47;
          in_XMM1 = auVar11 | in_XMM0;
          auVar39 = auVar38 ^ in_XMM1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0x2f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x30;
      param_2 = (ulonglong)param_2 % 0x30;
      do {
        auVar6 = pshuflw(in_XMM0,*(undefined1 (*) [16])param_1,0xb1);
        auVar22 = pshufhw(auVar29,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
        auVar20 = pshufhw(in_XMM4,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x20),0xb1);
        auVar6 = pshufhw(in_XMM3,auVar6,0xb1);
        param_1 = (void *)((longlong)param_1 + 0x30);
        auVar23 = psllw(auVar22,8);
        auVar12._0_2_ = auVar6._0_2_ >> 8;
        auVar12._2_2_ = auVar6._2_2_ >> 8;
        auVar12._4_2_ = auVar6._4_2_ >> 8;
        auVar12._6_2_ = auVar6._6_2_ >> 8;
        auVar12._8_2_ = auVar6._8_2_ >> 8;
        auVar12._10_2_ = auVar6._10_2_ >> 8;
        auVar12._12_2_ = auVar6._12_2_ >> 8;
        auVar12._14_2_ = auVar6._14_2_ >> 8;
        auVar6 = psllw(auVar6,8);
        auVar21._0_2_ = auVar22._0_2_ >> 8;
        auVar21._2_2_ = auVar22._2_2_ >> 8;
        auVar21._4_2_ = auVar22._4_2_ >> 8;
        auVar21._6_2_ = auVar22._6_2_ >> 8;
        auVar21._8_2_ = auVar22._8_2_ >> 8;
        auVar21._10_2_ = auVar22._10_2_ >> 8;
        auVar21._12_2_ = auVar22._12_2_ >> 8;
        auVar21._14_2_ = auVar22._14_2_ >> 8;
        in_XMM3 = auVar6 | auVar12;
        in_XMM2._0_2_ = auVar20._0_2_ >> 8;
        in_XMM2._2_2_ = auVar20._2_2_ >> 8;
        in_XMM2._4_2_ = auVar20._4_2_ >> 8;
        in_XMM2._6_2_ = auVar20._6_2_ >> 8;
        in_XMM2._8_2_ = auVar20._8_2_ >> 8;
        in_XMM2._10_2_ = auVar20._10_2_ >> 8;
        in_XMM2._12_2_ = auVar20._12_2_ >> 8;
        in_XMM2._14_2_ = auVar20._14_2_ >> 8;
        uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
        uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
        uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
        uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
        auVar39 = psllw(auVar20,8);
        auVar23 = auVar23 | auVar21;
        in_XMM4 = auVar39 | in_XMM2;
        uVar2 = (auVar23._0_4_ + uVar2) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
        uVar31 = (auVar23._4_4_ + uVar31) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
        uVar33 = (auVar23._8_4_ + uVar33) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
        uVar35 = (auVar23._12_4_ + uVar35) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
        iVar28 = auVar29._0_4_ + in_XMM4._0_4_;
        iVar30 = auVar29._4_4_ + in_XMM4._4_4_;
        iVar32 = auVar29._8_4_ + in_XMM4._8_4_;
        iVar34 = auVar29._12_4_ + in_XMM4._12_4_;
        iVar37 = uVar36 + iVar28;
        iVar44 = uVar43 + iVar30;
        iVar46 = uVar45 + iVar32;
        iVar48 = uVar47 + iVar34;
        iVar3 = uVar2 + iVar37;
        iVar25 = uVar31 + iVar44;
        iVar26 = uVar33 + iVar46;
        iVar27 = uVar35 + iVar48;
        uVar2 = iVar28 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
        uVar31 = iVar30 - uVar31 ^ (uVar31 << 6 | uVar31 >> 0x1a);
        uVar33 = iVar32 - uVar33 ^ (uVar33 << 6 | uVar33 >> 0x1a);
        uVar35 = iVar34 - uVar35 ^ (uVar35 << 6 | uVar35 >> 0x1a);
        iVar28 = uVar2 + iVar3;
        iVar30 = uVar31 + iVar25;
        iVar32 = uVar33 + iVar26;
        iVar34 = uVar35 + iVar27;
        uVar2 = iVar37 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
        uVar31 = iVar44 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
        uVar33 = iVar46 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
        uVar35 = iVar48 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
        iVar37 = uVar2 + iVar28;
        iVar44 = uVar31 + iVar30;
        iVar46 = uVar33 + iVar32;
        iVar48 = uVar35 + iVar34;
        uVar36 = iVar3 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
        uVar43 = iVar25 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
        uVar45 = iVar26 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
        uVar47 = iVar27 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
        uVar2 = iVar37 + uVar36;
        uVar31 = iVar44 + uVar43;
        uVar33 = iVar46 + uVar45;
        uVar35 = iVar48 + uVar47;
        uVar36 = iVar28 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
        uVar43 = iVar30 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
        uVar45 = iVar32 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
        uVar47 = iVar34 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
        in_XMM0._0_4_ = uVar36 >> 0x1c;
        in_XMM0._4_4_ = uVar43 >> 0x1c;
        in_XMM0._8_4_ = uVar45 >> 0x1c;
        in_XMM0._12_4_ = uVar47 >> 0x1c;
        auVar40._0_4_ = iVar37 - uVar36;
        auVar40._4_4_ = iVar44 - uVar43;
        auVar40._8_4_ = iVar46 - uVar45;
        auVar40._12_4_ = iVar48 - uVar47;
        auVar13._0_4_ = uVar36 << 4;
        auVar13._4_4_ = uVar43 << 4;
        auVar13._8_4_ = uVar45 << 4;
        auVar13._12_4_ = uVar47 << 4;
        auVar29._0_4_ = uVar36 + uVar2;
        auVar29._4_4_ = uVar43 + uVar31;
        auVar29._8_4_ = uVar45 + uVar33;
        auVar29._12_4_ = uVar47 + uVar35;
        in_XMM1 = auVar13 | in_XMM0;
        auVar39 = auVar40 ^ in_XMM1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (0x17f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x180;
      param_2 = (ulonglong)param_2 % 0x180;
      do {
        lVar4 = 8;
        do {
          auVar6 = pshuflw(in_XMM1,*(undefined1 (*) [16])param_1,0xb1);
          auVar22 = pshufhw(in_XMM5,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
          pauVar1 = (undefined1 (*) [16])((longlong)param_1 + 0x20);
          param_1 = (void *)((longlong)param_1 + 0x30);
          auVar23 = pshufhw(auVar29,auVar6,0xb1);
          auVar6 = pshuflw(auVar6,*pauVar1,0xb1);
          auVar20 = pshufhw(in_XMM3,auVar6,0xb1);
          auVar24 = psllw(auVar23,8);
          auVar6._0_2_ = auVar20._0_2_ >> 8;
          auVar6._2_2_ = auVar20._2_2_ >> 8;
          auVar6._4_2_ = auVar20._4_2_ >> 8;
          auVar6._6_2_ = auVar20._6_2_ >> 8;
          auVar6._8_2_ = auVar20._8_2_ >> 8;
          auVar6._10_2_ = auVar20._10_2_ >> 8;
          auVar6._12_2_ = auVar20._12_2_ >> 8;
          auVar6._14_2_ = auVar20._14_2_ >> 8;
          in_XMM2._0_2_ = auVar23._0_2_ >> 8;
          in_XMM2._2_2_ = auVar23._2_2_ >> 8;
          in_XMM2._4_2_ = auVar23._4_2_ >> 8;
          in_XMM2._6_2_ = auVar23._6_2_ >> 8;
          in_XMM2._8_2_ = auVar23._8_2_ >> 8;
          in_XMM2._10_2_ = auVar23._10_2_ >> 8;
          in_XMM2._12_2_ = auVar23._12_2_ >> 8;
          in_XMM2._14_2_ = auVar23._14_2_ >> 8;
          auVar20 = psllw(auVar20,8);
          auVar24 = auVar24 | in_XMM2;
          in_XMM5 = psllw(auVar22,8);
          iVar3 = auVar24._0_4_ + auVar29._0_4_;
          iVar25 = auVar24._4_4_ + auVar29._4_4_;
          iVar26 = auVar24._8_4_ + auVar29._8_4_;
          iVar27 = auVar24._12_4_ + auVar29._12_4_;
          auVar23._0_2_ = auVar22._0_2_ >> 8;
          auVar23._2_2_ = auVar22._2_2_ >> 8;
          auVar23._4_2_ = auVar22._4_2_ >> 8;
          auVar23._6_2_ = auVar22._6_2_ >> 8;
          auVar23._8_2_ = auVar22._8_2_ >> 8;
          auVar23._10_2_ = auVar22._10_2_ >> 8;
          auVar23._12_2_ = auVar22._12_2_ >> 8;
          auVar23._14_2_ = auVar22._14_2_ >> 8;
          in_XMM3 = auVar20 | auVar6;
          uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
          uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
          uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
          uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
          auVar23 = in_XMM5 | auVar23;
          iVar37 = uVar36 + iVar3;
          iVar44 = uVar43 + iVar25;
          iVar46 = uVar45 + iVar26;
          iVar48 = uVar47 + iVar27;
          uVar2 = (auVar23._0_4_ + uVar2) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
          uVar36 = (auVar23._4_4_ + uVar31) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
          uVar43 = (auVar23._8_4_ + uVar33) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
          uVar45 = (auVar23._12_4_ + uVar35) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
          iVar28 = uVar2 + iVar37;
          iVar30 = uVar36 + iVar44;
          iVar32 = uVar43 + iVar46;
          iVar34 = uVar45 + iVar48;
          uVar31 = iVar3 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
          uVar33 = iVar25 - uVar36 ^ (uVar36 << 6 | uVar36 >> 0x1a);
          uVar35 = iVar26 - uVar43 ^ (uVar43 << 6 | uVar43 >> 0x1a);
          uVar2 = iVar27 - uVar45 ^ (uVar45 << 6 | uVar45 >> 0x1a);
          iVar3 = uVar31 + iVar28;
          iVar25 = uVar33 + iVar30;
          iVar26 = uVar35 + iVar32;
          iVar27 = uVar2 + iVar34;
          uVar31 = iVar37 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
          uVar33 = iVar44 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
          uVar35 = iVar46 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
          uVar2 = iVar48 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
          iVar37 = uVar31 + iVar3;
          iVar44 = uVar33 + iVar25;
          iVar46 = uVar35 + iVar26;
          iVar48 = uVar2 + iVar27;
          uVar36 = iVar28 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
          uVar43 = iVar30 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
          uVar45 = iVar32 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
          uVar47 = iVar34 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
          uVar2 = uVar36 + iVar37;
          uVar31 = uVar43 + iVar44;
          uVar33 = uVar45 + iVar46;
          uVar35 = uVar47 + iVar48;
          uVar36 = iVar3 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
          uVar43 = iVar25 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
          uVar45 = iVar26 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
          uVar47 = iVar27 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
          auVar20._0_4_ = uVar36 >> 0x1c;
          auVar20._4_4_ = uVar43 >> 0x1c;
          auVar20._8_4_ = uVar45 >> 0x1c;
          auVar20._12_4_ = uVar47 >> 0x1c;
          auVar24._0_4_ = iVar37 - uVar36;
          auVar24._4_4_ = iVar44 - uVar43;
          auVar24._8_4_ = iVar46 - uVar45;
          auVar24._12_4_ = iVar48 - uVar47;
          auVar22._0_4_ = uVar36 << 4;
          auVar22._4_4_ = uVar43 << 4;
          auVar22._8_4_ = uVar45 << 4;
          auVar22._12_4_ = uVar47 << 4;
          auVar29._0_4_ = uVar2 + uVar36;
          auVar29._4_4_ = uVar31 + uVar43;
          auVar29._8_4_ = uVar33 + uVar45;
          auVar29._12_4_ = uVar35 + uVar47;
          in_XMM1 = auVar22 | auVar20;
          auVar39 = auVar24 ^ in_XMM1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0x2f < (ulonglong)param_2) {
      uVar5 = (ulonglong)param_2 / 0x30;
      param_2 = (ulonglong)param_2 % 0x30;
      do {
        auVar6 = pshuflw(in_XMM1,*(undefined1 (*) [16])param_1,0xb1);
        auVar20 = pshufhw(in_XMM5,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])((longlong)param_1 + 0x10),0xb1);
        pauVar1 = (undefined1 (*) [16])((longlong)param_1 + 0x20);
        param_1 = (void *)((longlong)param_1 + 0x30);
        auVar22 = pshufhw(auVar29,auVar6,0xb1);
        auVar6 = pshuflw(auVar6,*pauVar1,0xb1);
        auVar6 = pshufhw(in_XMM3,auVar6,0xb1);
        auVar23 = psllw(auVar22,8);
        auVar7._0_2_ = auVar6._0_2_ >> 8;
        auVar7._2_2_ = auVar6._2_2_ >> 8;
        auVar7._4_2_ = auVar6._4_2_ >> 8;
        auVar7._6_2_ = auVar6._6_2_ >> 8;
        auVar7._8_2_ = auVar6._8_2_ >> 8;
        auVar7._10_2_ = auVar6._10_2_ >> 8;
        auVar7._12_2_ = auVar6._12_2_ >> 8;
        auVar7._14_2_ = auVar6._14_2_ >> 8;
        auVar6 = psllw(auVar6,8);
        auVar19._0_2_ = auVar20._0_2_ >> 8;
        auVar19._2_2_ = auVar20._2_2_ >> 8;
        auVar19._4_2_ = auVar20._4_2_ >> 8;
        auVar19._6_2_ = auVar20._6_2_ >> 8;
        auVar19._8_2_ = auVar20._8_2_ >> 8;
        auVar19._10_2_ = auVar20._10_2_ >> 8;
        auVar19._12_2_ = auVar20._12_2_ >> 8;
        auVar19._14_2_ = auVar20._14_2_ >> 8;
        in_XMM3 = auVar6 | auVar7;
        auVar6 = psllw(auVar20,8);
        uVar36 = auVar39._0_4_ + in_XMM3._0_4_;
        uVar43 = auVar39._4_4_ + in_XMM3._4_4_;
        uVar45 = auVar39._8_4_ + in_XMM3._8_4_;
        uVar47 = auVar39._12_4_ + in_XMM3._12_4_;
        in_XMM2._0_2_ = auVar22._0_2_ >> 8;
        in_XMM2._2_2_ = auVar22._2_2_ >> 8;
        in_XMM2._4_2_ = auVar22._4_2_ >> 8;
        in_XMM2._6_2_ = auVar22._6_2_ >> 8;
        in_XMM2._8_2_ = auVar22._8_2_ >> 8;
        in_XMM2._10_2_ = auVar22._10_2_ >> 8;
        in_XMM2._12_2_ = auVar22._12_2_ >> 8;
        in_XMM2._14_2_ = auVar22._14_2_ >> 8;
        auVar23 = auVar23 | in_XMM2;
        iVar3 = auVar23._0_4_ + auVar29._0_4_;
        iVar25 = auVar23._4_4_ + auVar29._4_4_;
        iVar26 = auVar23._8_4_ + auVar29._8_4_;
        iVar27 = auVar23._12_4_ + auVar29._12_4_;
        in_XMM5 = auVar6 | auVar19;
        iVar28 = uVar36 + iVar3;
        iVar30 = uVar43 + iVar25;
        iVar32 = uVar45 + iVar26;
        iVar34 = uVar47 + iVar27;
        uVar2 = (uVar2 + in_XMM5._0_4_) - uVar36 ^ (uVar36 * 0x10 | uVar36 >> 0x1c);
        uVar36 = (uVar31 + in_XMM5._4_4_) - uVar43 ^ (uVar43 * 0x10 | uVar43 >> 0x1c);
        uVar43 = (uVar33 + in_XMM5._8_4_) - uVar45 ^ (uVar45 * 0x10 | uVar45 >> 0x1c);
        uVar45 = (uVar35 + in_XMM5._12_4_) - uVar47 ^ (uVar47 * 0x10 | uVar47 >> 0x1c);
        iVar37 = uVar2 + iVar28;
        iVar44 = uVar36 + iVar30;
        iVar46 = uVar43 + iVar32;
        iVar48 = uVar45 + iVar34;
        uVar31 = iVar3 - uVar2 ^ (uVar2 << 6 | uVar2 >> 0x1a);
        uVar33 = iVar25 - uVar36 ^ (uVar36 << 6 | uVar36 >> 0x1a);
        uVar35 = iVar26 - uVar43 ^ (uVar43 << 6 | uVar43 >> 0x1a);
        uVar2 = iVar27 - uVar45 ^ (uVar45 << 6 | uVar45 >> 0x1a);
        iVar3 = iVar37 + uVar31;
        iVar25 = iVar44 + uVar33;
        iVar26 = iVar46 + uVar35;
        iVar27 = iVar48 + uVar2;
        uVar31 = iVar28 - uVar31 ^ (uVar31 << 8 | uVar31 >> 0x18);
        uVar33 = iVar30 - uVar33 ^ (uVar33 << 8 | uVar33 >> 0x18);
        uVar35 = iVar32 - uVar35 ^ (uVar35 << 8 | uVar35 >> 0x18);
        uVar2 = iVar34 - uVar2 ^ (uVar2 << 8 | uVar2 >> 0x18);
        iVar28 = uVar31 + iVar3;
        iVar30 = uVar33 + iVar25;
        iVar32 = uVar35 + iVar26;
        iVar34 = uVar2 + iVar27;
        uVar36 = iVar37 - uVar31 ^ (uVar31 << 0x10 | uVar31 >> 0x10);
        uVar43 = iVar44 - uVar33 ^ (uVar33 << 0x10 | uVar33 >> 0x10);
        uVar45 = iVar46 - uVar35 ^ (uVar35 << 0x10 | uVar35 >> 0x10);
        uVar47 = iVar48 - uVar2 ^ (uVar2 << 0x10 | uVar2 >> 0x10);
        uVar2 = uVar36 + iVar28;
        uVar31 = uVar43 + iVar30;
        uVar33 = uVar45 + iVar32;
        uVar35 = uVar47 + iVar34;
        uVar36 = iVar3 - uVar36 ^ (uVar36 << 0x13 | uVar36 >> 0xd);
        uVar43 = iVar25 - uVar43 ^ (uVar43 << 0x13 | uVar43 >> 0xd);
        uVar45 = iVar26 - uVar45 ^ (uVar45 << 0x13 | uVar45 >> 0xd);
        uVar47 = iVar27 - uVar47 ^ (uVar47 << 0x13 | uVar47 >> 0xd);
        auVar8._0_4_ = uVar36 >> 0x1c;
        auVar8._4_4_ = uVar43 >> 0x1c;
        auVar8._8_4_ = uVar45 >> 0x1c;
        auVar8._12_4_ = uVar47 >> 0x1c;
        auVar41._0_4_ = iVar28 - uVar36;
        auVar41._4_4_ = iVar30 - uVar43;
        auVar41._8_4_ = iVar32 - uVar45;
        auVar41._12_4_ = iVar34 - uVar47;
        auVar14._0_4_ = uVar36 << 4;
        auVar14._4_4_ = uVar43 << 4;
        auVar14._8_4_ = uVar45 << 4;
        auVar14._12_4_ = uVar47 << 4;
        auVar29._0_4_ = uVar36 + uVar2;
        auVar29._4_4_ = uVar43 + uVar31;
        auVar29._8_4_ = uVar45 + uVar33;
        auVar29._12_4_ = uVar47 + uVar35;
        in_XMM1 = auVar14 | auVar8;
        auVar39 = auVar41 ^ in_XMM1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  if (param_2 != 0) {
    rrMemSetZero(local_88,0x30);
    memcpy(local_88,param_1,param_2);
    auVar6 = pshuflw(extraout_XMM0,local_88,0xb1);
    auVar20 = pshuflw(in_XMM1,local_78,0xb1);
    auVar23 = pshufhw(in_XMM3,auVar6,0xb1);
    auVar6 = pshuflw(auVar6,local_68,0xb1);
    auVar22 = pshufhw(in_XMM2,auVar20,0xb1);
    auVar6 = pshufhw(auVar20,auVar6,0xb1);
    auVar16._0_2_ = auVar22._0_2_ >> 8;
    auVar16._2_2_ = auVar22._2_2_ >> 8;
    auVar16._4_2_ = auVar22._4_2_ >> 8;
    auVar16._6_2_ = auVar22._6_2_ >> 8;
    auVar16._8_2_ = auVar22._8_2_ >> 8;
    auVar16._10_2_ = auVar22._10_2_ >> 8;
    auVar16._12_2_ = auVar22._12_2_ >> 8;
    auVar16._14_2_ = auVar22._14_2_ >> 8;
    auVar15._0_2_ = auVar6._0_2_ >> 8;
    auVar15._2_2_ = auVar6._2_2_ >> 8;
    auVar15._4_2_ = auVar6._4_2_ >> 8;
    auVar15._6_2_ = auVar6._6_2_ >> 8;
    auVar15._8_2_ = auVar6._8_2_ >> 8;
    auVar15._10_2_ = auVar6._10_2_ >> 8;
    auVar15._12_2_ = auVar6._12_2_ >> 8;
    auVar15._14_2_ = auVar6._14_2_ >> 8;
    auVar20 = psllw(auVar6,8);
    auVar20 = auVar20 | auVar15;
    auVar6 = psllw(auVar22,8);
    uVar36 = auVar20._0_4_ + auVar39._0_4_;
    uVar43 = auVar20._4_4_ + auVar39._4_4_;
    uVar45 = auVar20._8_4_ + auVar39._8_4_;
    uVar47 = auVar20._12_4_ + auVar39._12_4_;
    auVar6 = auVar6 | auVar16;
    iVar3 = auVar6._0_4_ + auVar29._0_4_;
    iVar25 = auVar6._4_4_ + auVar29._4_4_;
    iVar26 = auVar6._8_4_ + auVar29._8_4_;
    iVar27 = auVar6._12_4_ + auVar29._12_4_;
    auVar29 = psllw(auVar23,8);
    auVar18._0_2_ = auVar23._0_2_ >> 8;
    auVar18._2_2_ = auVar23._2_2_ >> 8;
    auVar18._4_2_ = auVar23._4_2_ >> 8;
    auVar18._6_2_ = auVar23._6_2_ >> 8;
    auVar18._8_2_ = auVar23._8_2_ >> 8;
    auVar18._10_2_ = auVar23._10_2_ >> 8;
    auVar18._12_2_ = auVar23._12_2_ >> 8;
    auVar18._14_2_ = auVar23._14_2_ >> 8;
    auVar29 = auVar29 | auVar18;
    iVar28 = uVar36 + iVar3;
    iVar30 = uVar43 + iVar25;
    iVar32 = uVar45 + iVar26;
    iVar34 = uVar47 + iVar27;
    uVar2 = (auVar29._0_4_ + uVar2) - uVar36 ^ (uVar36 >> 0x1c | uVar36 * 0x10);
    uVar36 = (auVar29._4_4_ + uVar31) - uVar43 ^ (uVar43 >> 0x1c | uVar43 * 0x10);
    uVar43 = (auVar29._8_4_ + uVar33) - uVar45 ^ (uVar45 >> 0x1c | uVar45 * 0x10);
    uVar45 = (auVar29._12_4_ + uVar35) - uVar47 ^ (uVar47 >> 0x1c | uVar47 * 0x10);
    iVar37 = uVar2 + iVar28;
    iVar44 = uVar36 + iVar30;
    iVar46 = uVar43 + iVar32;
    iVar48 = uVar45 + iVar34;
    uVar31 = (uVar2 >> 0x1a | uVar2 << 6) ^ iVar3 - uVar2;
    uVar33 = (uVar36 >> 0x1a | uVar36 << 6) ^ iVar25 - uVar36;
    uVar35 = (uVar43 >> 0x1a | uVar43 << 6) ^ iVar26 - uVar43;
    uVar2 = (uVar45 >> 0x1a | uVar45 << 6) ^ iVar27 - uVar45;
    iVar3 = uVar31 + iVar37;
    iVar25 = uVar33 + iVar44;
    iVar26 = uVar35 + iVar46;
    iVar27 = uVar2 + iVar48;
    uVar31 = (uVar31 >> 0x18 | uVar31 << 8) ^ iVar28 - uVar31;
    uVar33 = (uVar33 >> 0x18 | uVar33 << 8) ^ iVar30 - uVar33;
    uVar35 = (uVar35 >> 0x18 | uVar35 << 8) ^ iVar32 - uVar35;
    uVar2 = (uVar2 >> 0x18 | uVar2 << 8) ^ iVar34 - uVar2;
    iVar28 = uVar31 + iVar3;
    iVar30 = uVar33 + iVar25;
    iVar32 = uVar35 + iVar26;
    iVar34 = uVar2 + iVar27;
    uVar36 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar37 - uVar31;
    uVar43 = (uVar33 << 0x10 | uVar33 >> 0x10) ^ iVar44 - uVar33;
    uVar45 = (uVar35 << 0x10 | uVar35 >> 0x10) ^ iVar46 - uVar35;
    uVar47 = (uVar2 << 0x10 | uVar2 >> 0x10) ^ iVar48 - uVar2;
    uVar2 = uVar36 + iVar28;
    uVar31 = uVar43 + iVar30;
    uVar33 = uVar45 + iVar32;
    uVar35 = uVar47 + iVar34;
    uVar36 = (uVar36 << 0x13 | uVar36 >> 0xd) ^ iVar3 - uVar36;
    uVar43 = (uVar43 << 0x13 | uVar43 >> 0xd) ^ iVar25 - uVar43;
    uVar45 = (uVar45 << 0x13 | uVar45 >> 0xd) ^ iVar26 - uVar45;
    uVar47 = (uVar47 << 0x13 | uVar47 >> 0xd) ^ iVar27 - uVar47;
    auVar42._0_4_ = uVar36 >> 0x1c;
    auVar42._4_4_ = uVar43 >> 0x1c;
    auVar42._8_4_ = uVar45 >> 0x1c;
    auVar42._12_4_ = uVar47 >> 0x1c;
    auVar17._0_4_ = iVar28 - uVar36;
    auVar17._4_4_ = iVar30 - uVar43;
    auVar17._8_4_ = iVar32 - uVar45;
    auVar17._12_4_ = iVar34 - uVar47;
    auVar9._0_4_ = uVar36 << 4;
    auVar9._4_4_ = uVar43 << 4;
    auVar9._8_4_ = uVar45 << 4;
    auVar9._12_4_ = uVar47 << 4;
    auVar29._0_4_ = uVar36 + uVar2;
    auVar29._4_4_ = uVar43 + uVar31;
    auVar29._8_4_ = uVar45 + uVar33;
    auVar29._12_4_ = uVar47 + uVar35;
    auVar39 = (auVar42 | auVar9) ^ auVar17;
  }
  uVar2 = (uVar33 << 4 | uVar33 >> 0x1c) ^ uVar2 - uVar33;
  iVar26 = uVar2 + uVar33 + uVar31;
  uVar2 = (uVar2 << 6 | uVar2 >> 0x1a) ^ uVar31 - uVar2;
  iVar25 = uVar2 + iVar26;
  uVar31 = (uVar2 << 8 | uVar2 >> 0x18) ^ (uVar33 + uVar31) - uVar2;
  iVar3 = uVar31 + iVar25;
  uVar31 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar26 - uVar31;
  iVar26 = uVar31 + iVar3;
  uVar31 = (uVar31 << 0x13 | uVar31 >> 0xd) ^ iVar25 - uVar31;
  iVar25 = uVar31 + auVar29._0_4_ + iVar26;
  uVar31 = ((uVar31 << 4 | uVar31 >> 0x1c) ^ iVar3 - uVar31) + auVar29._4_4_;
  iVar27 = uVar31 + iVar25;
  uVar31 = (uVar31 * 0x10 | uVar31 >> 0x1c) ^ (iVar26 - uVar31) + uVar35;
  iVar26 = uVar31 + iVar27;
  uVar31 = (uVar31 << 6 | uVar31 >> 0x1a) ^ iVar25 - uVar31;
  iVar3 = uVar31 + iVar26;
  uVar31 = (uVar31 << 8 | uVar31 >> 0x18) ^ iVar27 - uVar31;
  iVar25 = uVar31 + iVar3;
  uVar31 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar26 - uVar31;
  iVar26 = uVar31 + iVar25;
  uVar31 = (uVar31 << 0x13 | uVar31 >> 0xd) ^ iVar3 - uVar31;
  iVar3 = uVar31 + auVar29._12_4_ + iVar26;
  uVar31 = ((uVar31 << 4 | uVar31 >> 0x1c) ^ iVar25 - uVar31) + auVar39._0_4_;
  iVar25 = uVar31 + iVar3;
  uVar31 = (uVar31 * 0x10 | uVar31 >> 0x1c) ^ (iVar26 - uVar31) + auVar29._8_4_;
  iVar26 = uVar31 + iVar25;
  uVar31 = (uVar31 << 6 | uVar31 >> 0x1a) ^ iVar3 - uVar31;
  iVar3 = uVar31 + iVar26;
  uVar31 = (uVar31 << 8 | uVar31 >> 0x18) ^ iVar25 - uVar31;
  iVar25 = uVar31 + iVar3;
  uVar31 = (uVar31 << 0x10 | uVar31 >> 0x10) ^ iVar26 - uVar31;
  iVar26 = uVar31 + iVar25;
  uVar31 = (uVar31 << 0x13 | uVar31 >> 0xd) ^ iVar3 - uVar31;
  uVar35 = uVar31 + auVar39._8_4_ + iVar26;
  uVar33 = (((uVar31 << 4 | uVar31 >> 0x1c) ^ iVar25 - uVar31) + auVar39._12_4_ ^ uVar35) -
           (uVar35 * 0x4000 | uVar35 >> 0x12);
  uVar31 = (auVar39._4_4_ + iVar26 ^ uVar33) - (uVar33 * 0x800 | uVar33 >> 0x15);
  uVar35 = (uVar35 ^ uVar31) - (uVar31 * 0x2000000 | uVar31 >> 7);
  uVar33 = (uVar33 ^ uVar35) - (uVar35 * 0x10000 | uVar35 >> 0x10);
  uVar31 = (uVar33 ^ uVar31) - (uVar33 * 0x10 | uVar33 >> 0x1c);
  uVar31 = (uVar35 ^ uVar31) - (uVar31 * 0x4000 | uVar31 >> 0x12);
  return CONCAT44(uVar31,(uVar33 ^ uVar31) - (uVar31 * 0x1000000 | uVar31 >> 8));
}

// rrBurtleQuad48 @ 14f39df10

void __cdecl
oo2::rrBurtleQuad48(uchar *param_1,t_u32quad *param_2,t_u32quad *param_3,t_u32quad *param_4,
                   void *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar15;
  uint uVar16;
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar17;
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  
  auVar10 = pshuflw(in_XMM1,*(undefined1 (*) [16])param_1,0xb1);
  auVar13 = pshufhw(in_XMM2,auVar10,0xb1);
  auVar10 = pshuflw(auVar10,*(undefined1 (*) [16])(param_1 + 0x10),0xb1);
  auVar18 = pshufhw(in_XMM3,auVar10,0xb1);
  auVar11 = pshuflw(auVar10,*(undefined1 (*) [16])(param_1 + 0x20),0xb1);
  auVar10 = psllw(auVar13,8);
  auVar19 = pshufhw(in_XMM4,auVar11,0xb1);
  auVar11 = psllw(auVar18,8);
  auVar14._0_2_ = auVar13._0_2_ >> 8;
  auVar14._2_2_ = auVar13._2_2_ >> 8;
  auVar14._4_2_ = auVar13._4_2_ >> 8;
  auVar14._6_2_ = auVar13._6_2_ >> 8;
  auVar14._8_2_ = auVar13._8_2_ >> 8;
  auVar14._10_2_ = auVar13._10_2_ >> 8;
  auVar14._12_2_ = auVar13._12_2_ >> 8;
  auVar14._14_2_ = auVar13._14_2_ >> 8;
  auVar10 = auVar10 | auVar14;
  auVar13._0_2_ = auVar18._0_2_ >> 8;
  auVar13._2_2_ = auVar18._2_2_ >> 8;
  auVar13._4_2_ = auVar18._4_2_ >> 8;
  auVar13._6_2_ = auVar18._6_2_ >> 8;
  auVar13._8_2_ = auVar18._8_2_ >> 8;
  auVar13._10_2_ = auVar18._10_2_ >> 8;
  auVar13._12_2_ = auVar18._12_2_ >> 8;
  auVar13._14_2_ = auVar18._14_2_ >> 8;
  iVar6 = (param_2->data).m128i_i32[1];
  iVar7 = (param_2->data).m128i_i32[2];
  iVar8 = (param_2->data).m128i_i32[3];
  auVar11 = auVar11 | auVar13;
  (param_2->data).m128i_i32[0] = auVar10._0_4_ + (param_2->data).m128i_i32[0];
  (param_2->data).m128i_i32[1] = auVar10._4_4_ + iVar6;
  (param_2->data).m128i_i32[2] = auVar10._8_4_ + iVar7;
  (param_2->data).m128i_i32[3] = auVar10._12_4_ + iVar8;
  iVar6 = (param_3->data).m128i_i32[1];
  iVar7 = (param_3->data).m128i_i32[2];
  iVar8 = (param_3->data).m128i_i32[3];
  (param_3->data).m128i_i32[0] = auVar11._0_4_ + (param_3->data).m128i_i32[0];
  (param_3->data).m128i_i32[1] = auVar11._4_4_ + iVar6;
  (param_3->data).m128i_i32[2] = auVar11._8_4_ + iVar7;
  (param_3->data).m128i_i32[3] = auVar11._12_4_ + iVar8;
  auVar10 = psllw(auVar19,8);
  auVar11._0_2_ = auVar19._0_2_ >> 8;
  auVar11._2_2_ = auVar19._2_2_ >> 8;
  auVar11._4_2_ = auVar19._4_2_ >> 8;
  auVar11._6_2_ = auVar19._6_2_ >> 8;
  auVar11._8_2_ = auVar19._8_2_ >> 8;
  auVar11._10_2_ = auVar19._10_2_ >> 8;
  auVar11._12_2_ = auVar19._12_2_ >> 8;
  auVar11._14_2_ = auVar19._14_2_ >> 8;
  auVar10 = auVar10 | auVar11;
  iVar6 = auVar10._0_4_ + (param_4->data).m128i_i32[0];
  iVar7 = auVar10._4_4_ + (param_4->data).m128i_i32[1];
  iVar8 = auVar10._8_4_ + (param_4->data).m128i_i32[2];
  iVar9 = auVar10._12_4_ + (param_4->data).m128i_i32[3];
  (param_4->data).m128i_i32[0] = iVar6;
  (param_4->data).m128i_i32[1] = iVar7;
  (param_4->data).m128i_i32[2] = iVar8;
  (param_4->data).m128i_i32[3] = iVar9;
  uVar12 = (param_2->data).m128i_i32[0] - iVar6;
  uVar15 = (param_2->data).m128i_i32[1] - iVar7;
  uVar16 = (param_2->data).m128i_i32[2] - iVar8;
  uVar17 = (param_2->data).m128i_i32[3] - iVar9;
  (param_2->data).m128i_u32[0] = uVar12;
  (param_2->data).m128i_u32[1] = uVar15;
  (param_2->data).m128i_u32[2] = uVar16;
  (param_2->data).m128i_u32[3] = uVar17;
  uVar1 = (param_4->data).m128i_u32[1];
  uVar2 = (param_4->data).m128i_u32[2];
  uVar3 = (param_4->data).m128i_u32[3];
  (param_2->data).m128i_u32[0] =
       ((param_4->data).m128i_u32[0] >> 0x1c | (param_4->data).m128i_u32[0] << 4) ^ uVar12;
  (param_2->data).m128i_u32[1] = (uVar1 >> 0x1c | uVar1 << 4) ^ uVar15;
  (param_2->data).m128i_u32[2] = (uVar2 >> 0x1c | uVar2 << 4) ^ uVar16;
  (param_2->data).m128i_u32[3] = (uVar3 >> 0x1c | uVar3 << 4) ^ uVar17;
  iVar6 = (param_3->data).m128i_i32[1];
  iVar7 = (param_3->data).m128i_i32[2];
  iVar8 = (param_3->data).m128i_i32[3];
  iVar9 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_4->data).m128i_i32[0] = (param_3->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_4->data).m128i_i32[1] = iVar6 + iVar9;
  (param_4->data).m128i_i32[2] = iVar7 + iVar4;
  (param_4->data).m128i_i32[3] = iVar8 + iVar5;
  uVar12 = (param_3->data).m128i_i32[0] - (param_2->data).m128i_i32[0];
  uVar15 = (param_3->data).m128i_i32[1] - (param_2->data).m128i_i32[1];
  uVar16 = (param_3->data).m128i_i32[2] - (param_2->data).m128i_i32[2];
  uVar17 = (param_3->data).m128i_i32[3] - (param_2->data).m128i_i32[3];
  (param_3->data).m128i_u32[0] = uVar12;
  (param_3->data).m128i_u32[1] = uVar15;
  (param_3->data).m128i_u32[2] = uVar16;
  (param_3->data).m128i_u32[3] = uVar17;
  uVar1 = (param_2->data).m128i_u32[1];
  uVar2 = (param_2->data).m128i_u32[2];
  uVar3 = (param_2->data).m128i_u32[3];
  (param_3->data).m128i_u32[0] =
       ((param_2->data).m128i_u32[0] >> 0x1a | (param_2->data).m128i_u32[0] << 6) ^ uVar12;
  (param_3->data).m128i_u32[1] = (uVar1 >> 0x1a | uVar1 << 6) ^ uVar15;
  (param_3->data).m128i_u32[2] = (uVar2 >> 0x1a | uVar2 << 6) ^ uVar16;
  (param_3->data).m128i_u32[3] = (uVar3 >> 0x1a | uVar3 << 6) ^ uVar17;
  iVar6 = (param_2->data).m128i_i32[1];
  iVar7 = (param_2->data).m128i_i32[2];
  iVar8 = (param_2->data).m128i_i32[3];
  iVar9 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_2->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_2->data).m128i_i32[1] = iVar6 + iVar9;
  (param_2->data).m128i_i32[2] = iVar7 + iVar4;
  (param_2->data).m128i_i32[3] = iVar8 + iVar5;
  uVar12 = (param_4->data).m128i_i32[0] - (param_3->data).m128i_i32[0];
  uVar15 = (param_4->data).m128i_i32[1] - (param_3->data).m128i_i32[1];
  uVar16 = (param_4->data).m128i_i32[2] - (param_3->data).m128i_i32[2];
  uVar17 = (param_4->data).m128i_i32[3] - (param_3->data).m128i_i32[3];
  (param_4->data).m128i_u32[0] = uVar12;
  (param_4->data).m128i_u32[1] = uVar15;
  (param_4->data).m128i_u32[2] = uVar16;
  (param_4->data).m128i_u32[3] = uVar17;
  uVar1 = (param_3->data).m128i_u32[1];
  uVar2 = (param_3->data).m128i_u32[2];
  uVar3 = (param_3->data).m128i_u32[3];
  (param_4->data).m128i_u32[0] =
       ((param_3->data).m128i_u32[0] >> 0x18 | (param_3->data).m128i_u32[0] << 8) ^ uVar12;
  (param_4->data).m128i_u32[1] = (uVar1 >> 0x18 | uVar1 << 8) ^ uVar15;
  (param_4->data).m128i_u32[2] = (uVar2 >> 0x18 | uVar2 << 8) ^ uVar16;
  (param_4->data).m128i_u32[3] = (uVar3 >> 0x18 | uVar3 << 8) ^ uVar17;
  iVar6 = (param_2->data).m128i_i32[1];
  iVar7 = (param_2->data).m128i_i32[2];
  iVar8 = (param_2->data).m128i_i32[3];
  iVar9 = (param_3->data).m128i_i32[1];
  iVar4 = (param_3->data).m128i_i32[2];
  iVar5 = (param_3->data).m128i_i32[3];
  (param_3->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_3->data).m128i_i32[0];
  (param_3->data).m128i_i32[1] = iVar6 + iVar9;
  (param_3->data).m128i_i32[2] = iVar7 + iVar4;
  (param_3->data).m128i_i32[3] = iVar8 + iVar5;
  uVar12 = (param_2->data).m128i_i32[0] - (param_4->data).m128i_i32[0];
  uVar15 = (param_2->data).m128i_i32[1] - (param_4->data).m128i_i32[1];
  uVar16 = (param_2->data).m128i_i32[2] - (param_4->data).m128i_i32[2];
  uVar17 = (param_2->data).m128i_i32[3] - (param_4->data).m128i_i32[3];
  (param_2->data).m128i_u32[0] = uVar12;
  (param_2->data).m128i_u32[1] = uVar15;
  (param_2->data).m128i_u32[2] = uVar16;
  (param_2->data).m128i_u32[3] = uVar17;
  uVar1 = (param_4->data).m128i_u32[1];
  uVar2 = (param_4->data).m128i_u32[2];
  uVar3 = (param_4->data).m128i_u32[3];
  (param_2->data).m128i_u32[0] =
       ((param_4->data).m128i_u32[0] << 0x10 | (param_4->data).m128i_u32[0] >> 0x10) ^ uVar12;
  (param_2->data).m128i_u32[1] = (uVar1 << 0x10 | uVar1 >> 0x10) ^ uVar15;
  (param_2->data).m128i_u32[2] = (uVar2 << 0x10 | uVar2 >> 0x10) ^ uVar16;
  (param_2->data).m128i_u32[3] = (uVar3 << 0x10 | uVar3 >> 0x10) ^ uVar17;
  iVar6 = (param_3->data).m128i_i32[1];
  iVar7 = (param_3->data).m128i_i32[2];
  iVar8 = (param_3->data).m128i_i32[3];
  iVar9 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_4->data).m128i_i32[0] = (param_3->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_4->data).m128i_i32[1] = iVar6 + iVar9;
  (param_4->data).m128i_i32[2] = iVar7 + iVar4;
  (param_4->data).m128i_i32[3] = iVar8 + iVar5;
  uVar12 = (param_3->data).m128i_i32[0] - (param_2->data).m128i_i32[0];
  uVar15 = (param_3->data).m128i_i32[1] - (param_2->data).m128i_i32[1];
  uVar16 = (param_3->data).m128i_i32[2] - (param_2->data).m128i_i32[2];
  uVar17 = (param_3->data).m128i_i32[3] - (param_2->data).m128i_i32[3];
  (param_3->data).m128i_u32[0] = uVar12;
  (param_3->data).m128i_u32[1] = uVar15;
  (param_3->data).m128i_u32[2] = uVar16;
  (param_3->data).m128i_u32[3] = uVar17;
  uVar1 = (param_2->data).m128i_u32[1];
  uVar2 = (param_2->data).m128i_u32[2];
  uVar3 = (param_2->data).m128i_u32[3];
  (param_3->data).m128i_u32[0] =
       ((param_2->data).m128i_u32[0] << 0x13 | (param_2->data).m128i_u32[0] >> 0xd) ^ uVar12;
  (param_3->data).m128i_u32[1] = (uVar1 << 0x13 | uVar1 >> 0xd) ^ uVar15;
  (param_3->data).m128i_u32[2] = (uVar2 << 0x13 | uVar2 >> 0xd) ^ uVar16;
  (param_3->data).m128i_u32[3] = (uVar3 << 0x13 | uVar3 >> 0xd) ^ uVar17;
  iVar6 = (param_2->data).m128i_i32[1];
  iVar7 = (param_2->data).m128i_i32[2];
  iVar8 = (param_2->data).m128i_i32[3];
  iVar9 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_2->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_2->data).m128i_i32[1] = iVar6 + iVar9;
  (param_2->data).m128i_i32[2] = iVar7 + iVar4;
  (param_2->data).m128i_i32[3] = iVar8 + iVar5;
  uVar12 = (param_4->data).m128i_i32[0] - (param_3->data).m128i_i32[0];
  uVar15 = (param_4->data).m128i_i32[1] - (param_3->data).m128i_i32[1];
  uVar16 = (param_4->data).m128i_i32[2] - (param_3->data).m128i_i32[2];
  uVar17 = (param_4->data).m128i_i32[3] - (param_3->data).m128i_i32[3];
  (param_4->data).m128i_u32[0] = uVar12;
  (param_4->data).m128i_u32[1] = uVar15;
  (param_4->data).m128i_u32[2] = uVar16;
  (param_4->data).m128i_u32[3] = uVar17;
  uVar1 = (param_3->data).m128i_u32[1];
  uVar2 = (param_3->data).m128i_u32[2];
  uVar3 = (param_3->data).m128i_u32[3];
  (param_4->data).m128i_u32[0] =
       ((param_3->data).m128i_u32[0] >> 0x1c | (param_3->data).m128i_u32[0] << 4) ^ uVar12;
  (param_4->data).m128i_u32[1] = (uVar1 >> 0x1c | uVar1 << 4) ^ uVar15;
  (param_4->data).m128i_u32[2] = (uVar2 >> 0x1c | uVar2 << 4) ^ uVar16;
  (param_4->data).m128i_u32[3] = (uVar3 >> 0x1c | uVar3 << 4) ^ uVar17;
  iVar6 = (param_2->data).m128i_i32[1];
  iVar7 = (param_2->data).m128i_i32[2];
  iVar8 = (param_2->data).m128i_i32[3];
  iVar9 = (param_3->data).m128i_i32[1];
  iVar4 = (param_3->data).m128i_i32[2];
  iVar5 = (param_3->data).m128i_i32[3];
  (param_3->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_3->data).m128i_i32[0];
  (param_3->data).m128i_i32[1] = iVar6 + iVar9;
  (param_3->data).m128i_i32[2] = iVar7 + iVar4;
  (param_3->data).m128i_i32[3] = iVar8 + iVar5;
  return;
}

// rrBurtleQuad48_Aligned16 @ 14f39e100

void __cdecl
oo2::rrBurtleQuad48_Aligned16
          (uchar *param_1,t_u32quad *param_2,t_u32quad *param_3,t_u32quad *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar9;
  int iVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  int iVar11;
  uint uVar12;
  uint uVar15;
  uint uVar16;
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar17;
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  
  auVar6 = pshuflw(in_XMM0,*(undefined1 (*) [16])param_1,0xb1);
  auVar8 = pshuflw(in_XMM1,*(undefined1 (*) [16])(param_1 + 0x10),0xb1);
  auVar18 = pshufhw(in_XMM3,auVar8,0xb1);
  auVar13 = pshufhw(in_XMM2,auVar6,0xb1);
  auVar6 = pshuflw(auVar6,*(undefined1 (*) [16])(param_1 + 0x20),0xb1);
  auVar8 = psllw(auVar13,8);
  auVar19 = pshufhw(in_XMM4,auVar6,0xb1);
  auVar6 = psllw(auVar18,8);
  auVar14._0_2_ = auVar13._0_2_ >> 8;
  auVar14._2_2_ = auVar13._2_2_ >> 8;
  auVar14._4_2_ = auVar13._4_2_ >> 8;
  auVar14._6_2_ = auVar13._6_2_ >> 8;
  auVar14._8_2_ = auVar13._8_2_ >> 8;
  auVar14._10_2_ = auVar13._10_2_ >> 8;
  auVar14._12_2_ = auVar13._12_2_ >> 8;
  auVar14._14_2_ = auVar13._14_2_ >> 8;
  auVar8 = auVar8 | auVar14;
  auVar13._0_2_ = auVar18._0_2_ >> 8;
  auVar13._2_2_ = auVar18._2_2_ >> 8;
  auVar13._4_2_ = auVar18._4_2_ >> 8;
  auVar13._6_2_ = auVar18._6_2_ >> 8;
  auVar13._8_2_ = auVar18._8_2_ >> 8;
  auVar13._10_2_ = auVar18._10_2_ >> 8;
  auVar13._12_2_ = auVar18._12_2_ >> 8;
  auVar13._14_2_ = auVar18._14_2_ >> 8;
  iVar7 = (param_2->data).m128i_i32[1];
  iVar9 = (param_2->data).m128i_i32[2];
  iVar10 = (param_2->data).m128i_i32[3];
  auVar6 = auVar6 | auVar13;
  (param_2->data).m128i_i32[0] = auVar8._0_4_ + (param_2->data).m128i_i32[0];
  (param_2->data).m128i_i32[1] = auVar8._4_4_ + iVar7;
  (param_2->data).m128i_i32[2] = auVar8._8_4_ + iVar9;
  (param_2->data).m128i_i32[3] = auVar8._12_4_ + iVar10;
  iVar7 = (param_3->data).m128i_i32[1];
  iVar9 = (param_3->data).m128i_i32[2];
  iVar10 = (param_3->data).m128i_i32[3];
  (param_3->data).m128i_i32[0] = auVar6._0_4_ + (param_3->data).m128i_i32[0];
  (param_3->data).m128i_i32[1] = auVar6._4_4_ + iVar7;
  (param_3->data).m128i_i32[2] = auVar6._8_4_ + iVar9;
  (param_3->data).m128i_i32[3] = auVar6._12_4_ + iVar10;
  auVar6 = psllw(auVar19,8);
  auVar8._0_2_ = auVar19._0_2_ >> 8;
  auVar8._2_2_ = auVar19._2_2_ >> 8;
  auVar8._4_2_ = auVar19._4_2_ >> 8;
  auVar8._6_2_ = auVar19._6_2_ >> 8;
  auVar8._8_2_ = auVar19._8_2_ >> 8;
  auVar8._10_2_ = auVar19._10_2_ >> 8;
  auVar8._12_2_ = auVar19._12_2_ >> 8;
  auVar8._14_2_ = auVar19._14_2_ >> 8;
  auVar6 = auVar6 | auVar8;
  iVar7 = auVar6._0_4_ + (param_4->data).m128i_i32[0];
  iVar9 = auVar6._4_4_ + (param_4->data).m128i_i32[1];
  iVar10 = auVar6._8_4_ + (param_4->data).m128i_i32[2];
  iVar11 = auVar6._12_4_ + (param_4->data).m128i_i32[3];
  (param_4->data).m128i_i32[0] = iVar7;
  (param_4->data).m128i_i32[1] = iVar9;
  (param_4->data).m128i_i32[2] = iVar10;
  (param_4->data).m128i_i32[3] = iVar11;
  uVar12 = (param_2->data).m128i_i32[0] - iVar7;
  uVar15 = (param_2->data).m128i_i32[1] - iVar9;
  uVar16 = (param_2->data).m128i_i32[2] - iVar10;
  uVar17 = (param_2->data).m128i_i32[3] - iVar11;
  (param_2->data).m128i_u32[0] = uVar12;
  (param_2->data).m128i_u32[1] = uVar15;
  (param_2->data).m128i_u32[2] = uVar16;
  (param_2->data).m128i_u32[3] = uVar17;
  uVar1 = (param_4->data).m128i_u32[1];
  uVar2 = (param_4->data).m128i_u32[2];
  uVar3 = (param_4->data).m128i_u32[3];
  (param_2->data).m128i_u32[0] =
       ((param_4->data).m128i_u32[0] >> 0x1c | (param_4->data).m128i_u32[0] << 4) ^ uVar12;
  (param_2->data).m128i_u32[1] = (uVar1 >> 0x1c | uVar1 << 4) ^ uVar15;
  (param_2->data).m128i_u32[2] = (uVar2 >> 0x1c | uVar2 << 4) ^ uVar16;
  (param_2->data).m128i_u32[3] = (uVar3 >> 0x1c | uVar3 << 4) ^ uVar17;
  iVar7 = (param_3->data).m128i_i32[1];
  iVar9 = (param_3->data).m128i_i32[2];
  iVar10 = (param_3->data).m128i_i32[3];
  iVar11 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_4->data).m128i_i32[0] = (param_3->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_4->data).m128i_i32[1] = iVar7 + iVar11;
  (param_4->data).m128i_i32[2] = iVar9 + iVar4;
  (param_4->data).m128i_i32[3] = iVar10 + iVar5;
  uVar12 = (param_3->data).m128i_i32[0] - (param_2->data).m128i_i32[0];
  uVar15 = (param_3->data).m128i_i32[1] - (param_2->data).m128i_i32[1];
  uVar16 = (param_3->data).m128i_i32[2] - (param_2->data).m128i_i32[2];
  uVar17 = (param_3->data).m128i_i32[3] - (param_2->data).m128i_i32[3];
  (param_3->data).m128i_u32[0] = uVar12;
  (param_3->data).m128i_u32[1] = uVar15;
  (param_3->data).m128i_u32[2] = uVar16;
  (param_3->data).m128i_u32[3] = uVar17;
  uVar1 = (param_2->data).m128i_u32[1];
  uVar2 = (param_2->data).m128i_u32[2];
  uVar3 = (param_2->data).m128i_u32[3];
  (param_3->data).m128i_u32[0] =
       ((param_2->data).m128i_u32[0] >> 0x1a | (param_2->data).m128i_u32[0] << 6) ^ uVar12;
  (param_3->data).m128i_u32[1] = (uVar1 >> 0x1a | uVar1 << 6) ^ uVar15;
  (param_3->data).m128i_u32[2] = (uVar2 >> 0x1a | uVar2 << 6) ^ uVar16;
  (param_3->data).m128i_u32[3] = (uVar3 >> 0x1a | uVar3 << 6) ^ uVar17;
  iVar7 = (param_2->data).m128i_i32[1];
  iVar9 = (param_2->data).m128i_i32[2];
  iVar10 = (param_2->data).m128i_i32[3];
  iVar11 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_2->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_2->data).m128i_i32[1] = iVar7 + iVar11;
  (param_2->data).m128i_i32[2] = iVar9 + iVar4;
  (param_2->data).m128i_i32[3] = iVar10 + iVar5;
  uVar12 = (param_4->data).m128i_i32[0] - (param_3->data).m128i_i32[0];
  uVar15 = (param_4->data).m128i_i32[1] - (param_3->data).m128i_i32[1];
  uVar16 = (param_4->data).m128i_i32[2] - (param_3->data).m128i_i32[2];
  uVar17 = (param_4->data).m128i_i32[3] - (param_3->data).m128i_i32[3];
  (param_4->data).m128i_u32[0] = uVar12;
  (param_4->data).m128i_u32[1] = uVar15;
  (param_4->data).m128i_u32[2] = uVar16;
  (param_4->data).m128i_u32[3] = uVar17;
  uVar1 = (param_3->data).m128i_u32[1];
  uVar2 = (param_3->data).m128i_u32[2];
  uVar3 = (param_3->data).m128i_u32[3];
  (param_4->data).m128i_u32[0] =
       ((param_3->data).m128i_u32[0] >> 0x18 | (param_3->data).m128i_u32[0] << 8) ^ uVar12;
  (param_4->data).m128i_u32[1] = (uVar1 >> 0x18 | uVar1 << 8) ^ uVar15;
  (param_4->data).m128i_u32[2] = (uVar2 >> 0x18 | uVar2 << 8) ^ uVar16;
  (param_4->data).m128i_u32[3] = (uVar3 >> 0x18 | uVar3 << 8) ^ uVar17;
  iVar7 = (param_2->data).m128i_i32[1];
  iVar9 = (param_2->data).m128i_i32[2];
  iVar10 = (param_2->data).m128i_i32[3];
  iVar11 = (param_3->data).m128i_i32[1];
  iVar4 = (param_3->data).m128i_i32[2];
  iVar5 = (param_3->data).m128i_i32[3];
  (param_3->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_3->data).m128i_i32[0];
  (param_3->data).m128i_i32[1] = iVar7 + iVar11;
  (param_3->data).m128i_i32[2] = iVar9 + iVar4;
  (param_3->data).m128i_i32[3] = iVar10 + iVar5;
  uVar12 = (param_2->data).m128i_i32[0] - (param_4->data).m128i_i32[0];
  uVar15 = (param_2->data).m128i_i32[1] - (param_4->data).m128i_i32[1];
  uVar16 = (param_2->data).m128i_i32[2] - (param_4->data).m128i_i32[2];
  uVar17 = (param_2->data).m128i_i32[3] - (param_4->data).m128i_i32[3];
  (param_2->data).m128i_u32[0] = uVar12;
  (param_2->data).m128i_u32[1] = uVar15;
  (param_2->data).m128i_u32[2] = uVar16;
  (param_2->data).m128i_u32[3] = uVar17;
  uVar1 = (param_4->data).m128i_u32[1];
  uVar2 = (param_4->data).m128i_u32[2];
  uVar3 = (param_4->data).m128i_u32[3];
  (param_2->data).m128i_u32[0] =
       ((param_4->data).m128i_u32[0] << 0x10 | (param_4->data).m128i_u32[0] >> 0x10) ^ uVar12;
  (param_2->data).m128i_u32[1] = (uVar1 << 0x10 | uVar1 >> 0x10) ^ uVar15;
  (param_2->data).m128i_u32[2] = (uVar2 << 0x10 | uVar2 >> 0x10) ^ uVar16;
  (param_2->data).m128i_u32[3] = (uVar3 << 0x10 | uVar3 >> 0x10) ^ uVar17;
  iVar7 = (param_3->data).m128i_i32[1];
  iVar9 = (param_3->data).m128i_i32[2];
  iVar10 = (param_3->data).m128i_i32[3];
  iVar11 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_4->data).m128i_i32[0] = (param_3->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_4->data).m128i_i32[1] = iVar7 + iVar11;
  (param_4->data).m128i_i32[2] = iVar9 + iVar4;
  (param_4->data).m128i_i32[3] = iVar10 + iVar5;
  uVar12 = (param_3->data).m128i_i32[0] - (param_2->data).m128i_i32[0];
  uVar15 = (param_3->data).m128i_i32[1] - (param_2->data).m128i_i32[1];
  uVar16 = (param_3->data).m128i_i32[2] - (param_2->data).m128i_i32[2];
  uVar17 = (param_3->data).m128i_i32[3] - (param_2->data).m128i_i32[3];
  (param_3->data).m128i_u32[0] = uVar12;
  (param_3->data).m128i_u32[1] = uVar15;
  (param_3->data).m128i_u32[2] = uVar16;
  (param_3->data).m128i_u32[3] = uVar17;
  uVar1 = (param_2->data).m128i_u32[1];
  uVar2 = (param_2->data).m128i_u32[2];
  uVar3 = (param_2->data).m128i_u32[3];
  (param_3->data).m128i_u32[0] =
       ((param_2->data).m128i_u32[0] << 0x13 | (param_2->data).m128i_u32[0] >> 0xd) ^ uVar12;
  (param_3->data).m128i_u32[1] = (uVar1 << 0x13 | uVar1 >> 0xd) ^ uVar15;
  (param_3->data).m128i_u32[2] = (uVar2 << 0x13 | uVar2 >> 0xd) ^ uVar16;
  (param_3->data).m128i_u32[3] = (uVar3 << 0x13 | uVar3 >> 0xd) ^ uVar17;
  iVar7 = (param_2->data).m128i_i32[1];
  iVar9 = (param_2->data).m128i_i32[2];
  iVar10 = (param_2->data).m128i_i32[3];
  iVar11 = (param_4->data).m128i_i32[1];
  iVar4 = (param_4->data).m128i_i32[2];
  iVar5 = (param_4->data).m128i_i32[3];
  (param_2->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_4->data).m128i_i32[0];
  (param_2->data).m128i_i32[1] = iVar7 + iVar11;
  (param_2->data).m128i_i32[2] = iVar9 + iVar4;
  (param_2->data).m128i_i32[3] = iVar10 + iVar5;
  uVar12 = (param_4->data).m128i_i32[0] - (param_3->data).m128i_i32[0];
  uVar15 = (param_4->data).m128i_i32[1] - (param_3->data).m128i_i32[1];
  uVar16 = (param_4->data).m128i_i32[2] - (param_3->data).m128i_i32[2];
  uVar17 = (param_4->data).m128i_i32[3] - (param_3->data).m128i_i32[3];
  (param_4->data).m128i_u32[0] = uVar12;
  (param_4->data).m128i_u32[1] = uVar15;
  (param_4->data).m128i_u32[2] = uVar16;
  (param_4->data).m128i_u32[3] = uVar17;
  uVar1 = (param_3->data).m128i_u32[1];
  uVar2 = (param_3->data).m128i_u32[2];
  uVar3 = (param_3->data).m128i_u32[3];
  (param_4->data).m128i_u32[0] =
       ((param_3->data).m128i_u32[0] >> 0x1c | (param_3->data).m128i_u32[0] << 4) ^ uVar12;
  (param_4->data).m128i_u32[1] = (uVar1 >> 0x1c | uVar1 << 4) ^ uVar15;
  (param_4->data).m128i_u32[2] = (uVar2 >> 0x1c | uVar2 << 4) ^ uVar16;
  (param_4->data).m128i_u32[3] = (uVar3 >> 0x1c | uVar3 << 4) ^ uVar17;
  iVar7 = (param_2->data).m128i_i32[1];
  iVar9 = (param_2->data).m128i_i32[2];
  iVar10 = (param_2->data).m128i_i32[3];
  iVar11 = (param_3->data).m128i_i32[1];
  iVar4 = (param_3->data).m128i_i32[2];
  iVar5 = (param_3->data).m128i_i32[3];
  (param_3->data).m128i_i32[0] = (param_2->data).m128i_i32[0] + (param_3->data).m128i_i32[0];
  (param_3->data).m128i_i32[1] = iVar7 + iVar11;
  (param_3->data).m128i_i32[2] = iVar9 + iVar4;
  (param_3->data).m128i_i32[3] = iVar10 + iVar5;
  return;
}

// rrBurtleQuad_Final @ 14f39e2e0

ulong64 __cdecl oo2::rrBurtleQuad_Final(t_u32quad *param_1,t_u32quad *param_2,t_u32quad *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (param_1->data).m128i_u32[2];
  uVar4 = (uVar2 << 4 | uVar2 >> 0x1c) ^ (param_1->data).m128i_i32[0] - uVar2;
  iVar1 = uVar2 + (param_1->data).m128i_i32[1];
  iVar5 = uVar4 + iVar1;
  uVar2 = (uVar4 << 6 | uVar4 >> 0x1a) ^ (param_1->data).m128i_i32[1] - uVar4;
  iVar3 = uVar2 + iVar5;
  uVar2 = (uVar2 << 8 | uVar2 >> 0x18) ^ iVar1 - uVar2;
  iVar1 = uVar2 + iVar3;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x10) ^ iVar5 - uVar2;
  iVar5 = uVar2 + iVar1;
  uVar2 = (uVar2 << 0x13 | uVar2 >> 0xd) ^ iVar3 - uVar2;
  iVar3 = uVar2 + (param_2->data).m128i_i32[0] + iVar5;
  uVar2 = ((uVar2 << 4 | uVar2 >> 0x1c) ^ iVar1 - uVar2) + (param_2->data).m128i_i32[1];
  iVar6 = uVar2 + iVar3;
  uVar2 = (uVar2 * 0x10 | uVar2 >> 0x1c) ^ ((param_1->data).m128i_i32[3] - uVar2) + iVar5;
  iVar5 = uVar2 + iVar6;
  uVar2 = (uVar2 << 6 | uVar2 >> 0x1a) ^ iVar3 - uVar2;
  iVar1 = uVar2 + iVar5;
  uVar2 = (uVar2 << 8 | uVar2 >> 0x18) ^ iVar6 - uVar2;
  iVar3 = uVar2 + iVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x10) ^ iVar5 - uVar2;
  iVar5 = uVar2 + iVar3;
  uVar2 = (uVar2 << 0x13 | uVar2 >> 0xd) ^ iVar1 - uVar2;
  iVar1 = uVar2 + (param_2->data).m128i_i32[3] + iVar5;
  uVar2 = ((uVar2 << 4 | uVar2 >> 0x1c) ^ iVar3 - uVar2) + (param_3->data).m128i_i32[0];
  iVar3 = uVar2 + iVar1;
  uVar2 = (uVar2 * 0x10 | uVar2 >> 0x1c) ^ ((param_2->data).m128i_i32[2] - uVar2) + iVar5;
  iVar5 = uVar2 + iVar3;
  uVar2 = (uVar2 << 6 | uVar2 >> 0x1a) ^ iVar1 - uVar2;
  iVar1 = uVar2 + iVar5;
  uVar2 = (uVar2 << 8 | uVar2 >> 0x18) ^ iVar3 - uVar2;
  iVar3 = uVar2 + iVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x10) ^ iVar5 - uVar2;
  iVar5 = uVar2 + iVar3;
  uVar2 = (uVar2 << 0x13 | uVar2 >> 0xd) ^ iVar1 - uVar2;
  uVar7 = uVar2 + (param_3->data).m128i_i32[2] + iVar5;
  uVar4 = ((param_3->data).m128i_i32[3] + ((uVar2 << 4 | uVar2 >> 0x1c) ^ iVar3 - uVar2) ^ uVar7) -
          (uVar7 * 0x4000 | uVar7 >> 0x12);
  uVar2 = ((param_3->data).m128i_i32[1] + iVar5 ^ uVar4) - (uVar4 * 0x800 | uVar4 >> 0x15);
  uVar7 = (uVar7 ^ uVar2) - (uVar2 * 0x2000000 | uVar2 >> 7);
  uVar4 = (uVar4 ^ uVar7) - (uVar7 * 0x10000 | uVar7 >> 0x10);
  uVar2 = (uVar4 ^ uVar2) - (uVar4 * 0x10 | uVar4 >> 0x1c);
  uVar2 = (uVar7 ^ uVar2) - (uVar2 * 0x4000 | uVar2 >> 0x12);
  return CONCAT44(uVar2,(uVar4 ^ uVar2) - (uVar2 * 0x1000000 | uVar2 >> 8));
}

// rrBurtleQuad_Init @ 14f39e4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
oo2::rrBurtleQuad_Init(t_u32quad *param_1,t_u32quad *param_2,t_u32quad *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long64 lVar4;
  long64 lVar5;
  long64 lVar6;
  long64 lVar7;
  long64 lVar8;
  
  lVar8 = _UNK_1531dd678;
  lVar7 = ___xmm_5768b5255768b5255768b5255768b525;
  lVar6 = _UNK_1531dd668;
  lVar5 = ___xmm_206f85b3206f85b3206f85b3206f85b3;
  lVar4 = _UNK_153073808;
  (param_1->data).m128i_i64[0] = ___xmm_deadbeefdeadbeefdeadbeefdeadbeef;
  (param_1->data).m128i_i64[1] = lVar4;
  (param_2->data).m128i_i64[0] = lVar5;
  (param_2->data).m128i_i64[1] = lVar6;
  (param_3->data).m128i_i64[0] = lVar7;
  (param_3->data).m128i_i64[1] = lVar8;
  iVar1 = (param_1->data).m128i_i32[1];
  iVar2 = (param_1->data).m128i_i32[2];
  iVar3 = (param_1->data).m128i_i32[3];
  (param_1->data).m128i_i32[0] = param_4 + (param_1->data).m128i_i32[0];
  (param_1->data).m128i_i32[1] = param_4 + iVar1;
  (param_1->data).m128i_i32[2] = param_4 + iVar2;
  (param_1->data).m128i_i32[3] = param_4 + iVar3;
  iVar1 = (param_3->data).m128i_i32[1];
  iVar2 = (param_3->data).m128i_i32[2];
  iVar3 = (param_3->data).m128i_i32[3];
  (param_3->data).m128i_i32[0] = (param_3->data).m128i_i32[0] - param_4;
  (param_3->data).m128i_i32[1] = iVar1 - param_4;
  (param_3->data).m128i_i32[2] = iVar2 - param_4;
  (param_3->data).m128i_i32[3] = iVar3 - param_4;
  return;
}

