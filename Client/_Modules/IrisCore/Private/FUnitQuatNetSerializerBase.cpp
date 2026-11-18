// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 14

// Dequantize @ 14432a060

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  float fVar1;
  float *pfVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = __real_3f800000;
  pfVar2 = (float *)param_2->Source;
  puVar3 = (uint *)param_2->Target;
  fVar7 = pfVar2[2] - __real_3f800000;
  fVar5 = *pfVar2 - __real_3f800000;
  fVar1 = pfVar2[3];
  fVar6 = pfVar2[1] - __real_3f800000;
  *puVar3 = ((uint)fVar1 & 0xfffffff8) << 0x1c | (uint)fVar5;
  puVar3[1] = ((uint)fVar1 & 0xfffffff0) << 0x1b | (uint)fVar6;
  fVar4 = fVar4 - (fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
  puVar3[2] = ((uint)fVar1 & 0xffffffe0) << 0x1a | (uint)fVar7;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  puVar3[3] = ((uint)fVar1 & 0xffffffc0) << 0x19 | (uint)SQRT(fVar4);
  return;
}

// Dequantize @ 14432a120

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint uVar1;
  double *pdVar2;
  ulonglong *puVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  
  dVar10 = __real_3ff0000000000000;
  pdVar2 = (double *)param_2->Source;
  puVar3 = (ulonglong *)param_2->Target;
  dVar7 = pdVar2[2] - __real_3ff0000000000000;
  dVar5 = *pdVar2 - __real_3ff0000000000000;
  uVar1 = *(uint *)(pdVar2 + 3);
  uVar8 = (ulonglong)uVar1;
  dVar6 = pdVar2[1] - __real_3ff0000000000000;
  auVar9._0_8_ = dVar7 * dVar7;
  auVar9._8_8_ = 0;
  *puVar3 = (uVar8 & 0xfffffffffffffff8) << 0x3c | (ulonglong)dVar5;
  puVar3[1] = ((ulonglong)uVar1 & 0xfffffffffffffff0) << 0x3b | (ulonglong)dVar6;
  puVar3[2] = (uVar8 & 0xffffffffffffffe0) << 0x3a | (ulonglong)dVar7;
  dVar10 = dVar10 - (dVar6 * dVar6 + dVar5 * dVar5 + auVar9._0_8_);
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar10;
  auVar9 = sqrtpd(auVar9,auVar4);
  puVar3[3] = (uVar8 & 0xffffffffffffffc0) << 0x39 | auVar9._0_8_;
  return;
}

// Deserialize @ 14432c490

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  this = param_1->BitStreamReader;
  uVar3 = 0;
  uVar5 = 0;
  uVar2 = FNetBitStreamReader::ReadBits(this,7);
  if ((uVar2 & 1) != 0) {
    uVar3 = FNetBitStreamReader::ReadBits(this,0x17);
    if (uVar3 == 0) {
      uVar3 = 0x800000;
    }
  }
  uVar4 = 0;
  if ((uVar2 & 2) != 0) {
    uVar4 = FNetBitStreamReader::ReadBits(this,0x17);
    if (uVar4 == 0) {
      uVar4 = 0x800000;
    }
  }
  if ((uVar2 & 4) != 0) {
    uVar5 = FNetBitStreamReader::ReadBits(this,0x17);
    if (uVar5 == 0) {
      uVar5 = 0x800000;
    }
  }
  puVar1 = (undefined8 *)param_2->Target;
  *puVar1 = CONCAT44(uVar4 + 0x3f800000,uVar3 + 0x3f800000);
  puVar1[1] = CONCAT44(uVar2,uVar5 + 0x3f800000);
  return;
}

// Deserialize @ 14432c580

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uStack_20;
  
  this = param_1->BitStreamReader;
  uVar2 = FNetBitStreamReader::ReadBits(this,7);
  uStack_20 = (ulonglong)uVar2;
  if ((uVar2 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar4 = FNetBitStreamReader::ReadBits(this,0x14);
    lVar6 = CONCAT44(uVar4,uVar3);
    if (lVar6 == 0) {
      lVar6 = 0x10000000000000;
    }
  }
  if ((uVar2 & 2) == 0) {
    lVar7 = 0;
  }
  else {
    uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar4 = FNetBitStreamReader::ReadBits(this,0x14);
    lVar7 = CONCAT44(uVar4,uVar3);
    if (lVar7 == 0) {
      lVar7 = 0x10000000000000;
    }
  }
  if ((uVar2 & 4) == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
    uVar3 = FNetBitStreamReader::ReadBits(this,0x14);
    lVar5 = CONCAT44(uVar3,uVar2);
    if (lVar5 == 0) {
      lVar5 = 0x10000000000000;
    }
  }
  plVar1 = (longlong *)param_2->Target;
  *plVar1 = lVar6 + 0x3ff0000000000000;
  plVar1[1] = lVar7 + 0x3ff0000000000000;
  plVar1[2] = lVar5 + 0x3ff0000000000000;
  plVar1[3] = uStack_20;
  return;
}

// GetUnitQuat @ 1443312f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::GetUnitQuat
          (TQuat<float> *__return_storage_ptr__,TQuat<float> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 in_EAX;
  int iVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar8 = param_1->X;
  fVar20 = param_1->Y;
  fVar19 = param_1->Z;
  fVar9 = param_1->W;
  __return_storage_ptr__->X = fVar8;
  __return_storage_ptr__->Y = fVar20;
  __return_storage_ptr__->Z = fVar19;
  __return_storage_ptr__->W = fVar9;
  if (fVar19 * fVar19 + fVar9 * fVar9 + fVar20 * fVar20 + fVar8 * fVar8 <= __real_322bcc77) {
    *__return_storage_ptr__ = UE::Math::TQuat<float>::Identity;
    return __return_storage_ptr__;
  }
  fVar8 = __return_storage_ptr__->X;
  fVar9 = __return_storage_ptr__->Y;
  fVar10 = __return_storage_ptr__->Z;
  fVar11 = __return_storage_ptr__->W;
  fVar14 = fVar9 * fVar9 + fVar8 * fVar8;
  fVar16 = fVar8 * fVar8 + fVar9 * fVar9;
  fVar17 = fVar11 * fVar11 + fVar10 * fVar10;
  fVar18 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar21 = fVar17 + fVar14;
  fVar22 = fVar18 + fVar16;
  fVar14 = fVar14 + fVar17;
  fVar16 = fVar16 + fVar18;
  auVar13._0_4_ = GlobalVectorConstants::FloatOne.m128_f32[0] - fVar21;
  auVar13._4_4_ = GlobalVectorConstants::FloatOne.m128_f32[1] - fVar22;
  auVar13._8_4_ = GlobalVectorConstants::FloatOne.m128_f32[2] - fVar14;
  auVar13._12_4_ = GlobalVectorConstants::FloatOne.m128_f32[3] - fVar16;
  auVar15._4_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
              (float)(_UNK_15061cc74 & (uint)auVar13._4_4_));
  auVar15._0_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
              (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)auVar13._0_4_));
  auVar15._8_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
              (float)(_UNK_15061cc78 & (uint)auVar13._8_4_));
  auVar15._12_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
              (float)(_UNK_15061cc7c & (uint)auVar13._12_4_));
  iVar12 = movmskps(in_EAX,auVar15);
  if (iVar12 != 0) {
    auVar7._4_4_ = fVar22;
    auVar7._0_4_ = fVar21;
    auVar7._8_4_ = fVar14;
    auVar7._12_4_ = fVar16;
    auVar13 = sqrtps(auVar13,auVar7);
    bVar4 = _UNK_1506895d4 <= fVar22;
    bVar5 = _UNK_1506895d8 <= fVar14;
    bVar6 = _UNK_1506895dc <= fVar16;
    auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar13);
    uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
    uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
    uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
    __return_storage_ptr__->X =
         (float)((uint)(auVar13._0_4_ * fVar8) &
                 -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= fVar21) |
                ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= fVar21) &
                GlobalVectorConstants::Float0001.m128_u32[0]);
    __return_storage_ptr__->Y =
         (float)((uint)(auVar13._4_4_ * fVar9) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1);
    __return_storage_ptr__->Z =
         (float)((uint)(auVar13._8_4_ * fVar10) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2);
    __return_storage_ptr__->W =
         (float)((uint)(auVar13._12_4_ * fVar11) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3);
    fVar20 = __return_storage_ptr__->Y;
    fVar19 = __return_storage_ptr__->Z;
  }
  if (__real_3f800000 <= fVar20) {
    fVar20 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar19) {
    fVar19 = __real_3f800000;
  }
  fVar8 = __return_storage_ptr__->X;
  if (__real_3f800000 <= __return_storage_ptr__->X) {
    fVar8 = __real_3f800000;
  }
  if (fVar20 <= __real_bf800000) {
    fVar20 = __real_bf800000;
  }
  if (fVar19 <= __real_bf800000) {
    fVar19 = __real_bf800000;
  }
  if (fVar8 <= __real_bf800000) {
    fVar8 = __real_bf800000;
  }
  __return_storage_ptr__->Y = fVar20;
  __return_storage_ptr__->Z = fVar19;
  __return_storage_ptr__->X = fVar8;
  return __return_storage_ptr__;
}

// GetUnitQuat @ 144331420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::GetUnitQuat
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined4 in_EAX;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  
  dVar1 = param_1->Y;
  __return_storage_ptr__->X = param_1->X;
  __return_storage_ptr__->Y = dVar1;
  uVar2 = param_1->Z;
  uVar3 = param_1->W;
  uVar26 = (undefined4)uVar2;
  uVar27 = (undefined4)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->Z = (double)uVar2;
  dVar17 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->W = (double)uVar3;
  dVar1 = __return_storage_ptr__->Y;
  uVar28 = SUB84(dVar1,0);
  uVar30 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (__real_3e45798ee0000000 <
      dVar1 * dVar1 + __return_storage_ptr__->X * __return_storage_ptr__->X +
      (double)uVar2 * (double)uVar2 + (double)uVar3 * (double)uVar3) {
    dVar8 = __return_storage_ptr__->X;
    dVar9 = __return_storage_ptr__->Y;
    dVar17 = (double)uVar2 * (double)uVar2 + dVar8 * dVar8;
    dVar20 = (double)uVar3 * (double)uVar3 + dVar9 * dVar9;
    dVar1 = dVar20 + dVar17;
    dVar17 = dVar17 + dVar20;
    dVar20 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar1;
    dVar21 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar17;
    auVar24._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
          (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar21,0) & _UNK_15061cc88));
    auVar24._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    dVar20 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar1;
    dVar21 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar17;
    uVar11 = movmskpd((int)__return_storage_ptr__,auVar24);
    lVar13 = -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar23._8_4_ = (int)lVar13;
    auVar23._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar23._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar10 = movmskpd(in_EAX,auVar23);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar6._8_4_ = SUB84(dVar17,0);
      auVar6._0_8_ = dVar1;
      auVar6._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      auVar23 = sqrtpd((undefined1  [16])GlobalVectorConstants::FloatOne,auVar6);
      auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
      uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
      uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar17);
      uVar11 = (uint)(uVar12 >> 0x20);
      uVar32 = (uint)(uVar14 >> 0x20);
      auVar18._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar18._4_4_ =
           ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar18._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar18._12_4_ =
           ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar25._0_8_ = uVar12 & (ulonglong)(auVar24._0_8_ * dVar8);
      uVar7 = uVar14 & (ulonglong)(auVar24._8_8_ * dVar9);
      auVar25._8_4_ = (undefined4)uVar7;
      auVar25._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
      __return_storage_ptr__->X = (double)SUB168(auVar25 | auVar18,0);
      __return_storage_ptr__->Y = (double)SUB168(auVar25 | auVar18,8);
      auVar19._0_8_ = (ulonglong)(auVar23._0_8_ * (double)uVar2) & uVar12;
      uVar7 = (ulonglong)(auVar23._8_8_ * (double)uVar3) & uVar14;
      auVar19._8_4_ = (undefined4)uVar7;
      auVar19._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar22._0_4_ = ~(uint)uVar12 & SUB84((double)fVar4,0);
      auVar22._4_4_ = ~uVar11 & (uint)((ulonglong)(double)fVar4 >> 0x20);
      auVar22._8_4_ = ~(uint)uVar14 & SUB84((double)fVar5,0);
      auVar22._12_4_ = ~uVar32 & (uint)((ulonglong)(double)fVar5 >> 0x20);
      __return_storage_ptr__->Z = (double)SUB168(auVar22 | auVar19,0);
      __return_storage_ptr__->W = (double)SUB168(auVar22 | auVar19,8);
      uVar28 = SUB84(__return_storage_ptr__->Y,0);
      uVar30 = (undefined4)((ulonglong)__return_storage_ptr__->Y >> 0x20);
      uVar26 = SUB84(__return_storage_ptr__->Z,0);
      uVar27 = (undefined4)((ulonglong)__return_storage_ptr__->Z >> 0x20);
    }
    uVar29 = SUB84(__real_3ff0000000000000,0);
    uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    if (__real_3ff0000000000000 <= (double)CONCAT44(uVar30,uVar28)) {
      uVar28 = uVar29;
      uVar30 = uVar31;
    }
    dVar1 = __return_storage_ptr__->X;
    if (__real_3ff0000000000000 <= (double)CONCAT44(uVar27,uVar26)) {
      uVar26 = uVar29;
      uVar27 = uVar31;
    }
    uVar15 = SUB84(dVar1,0);
    uVar16 = (int)((ulonglong)dVar1 >> 0x20);
    if (__real_3ff0000000000000 <= dVar1) {
      uVar15 = uVar29;
      uVar16 = uVar31;
    }
    uVar29 = SUB84(__real_bff0000000000000,0);
    uVar31 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    if ((double)CONCAT44(uVar30,uVar28) <= __real_bff0000000000000) {
      uVar28 = uVar29;
      uVar30 = uVar31;
    }
    if ((double)CONCAT44(uVar27,uVar26) <= __real_bff0000000000000) {
      uVar26 = uVar29;
      uVar27 = uVar31;
    }
    if ((double)CONCAT44(uVar16,uVar15) <= __real_bff0000000000000) {
      uVar15 = uVar29;
      uVar16 = uVar31;
    }
    __return_storage_ptr__->Y = (double)CONCAT44(uVar30,uVar28);
    __return_storage_ptr__->Z = (double)CONCAT44(uVar27,uVar26);
    __return_storage_ptr__->X = (double)CONCAT44(uVar16,uVar15);
  }
  else {
    __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar17;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
    __return_storage_ptr__->W = dVar1;
  }
  return __return_storage_ptr__;
}

// IsEqual @ 144333800

bool __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  TQuat<float> *pTVar1;
  float *pfVar2;
  TQuat<float> local_28;
  TQuat<float> local_18;
  
  pTVar1 = (TQuat<float> *)param_2->Source0;
  if (param_2->bStateIsQuantized != false) {
    pfVar2 = (float *)param_2->Source1;
    return pTVar1->X == *pfVar2 &&
           (pTVar1->Y == pfVar2[1] && (pTVar1->W == pfVar2[3] && pTVar1->Z == pfVar2[2]));
  }
  GetUnitQuat(&local_28,pTVar1);
  GetUnitQuat(&local_18,(TQuat<float> *)param_2->Source1);
  return (-1 < (int)((uint)local_18.W ^ (uint)local_28.W) && local_28.Z == local_18.Z) &&
         (local_28.Y == local_18.Y && local_28.X == local_18.X);
}

// IsEqual @ 1443338e0

bool __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  TQuat<double> *pTVar3;
  TQuat<double> local_48;
  TQuat<double> local_28;
  
  if (param_2->bStateIsQuantized != false) {
    plVar1 = (longlong *)param_2->Source1;
    plVar2 = (longlong *)param_2->Source0;
    return *plVar2 == *plVar1 &&
           (plVar2[1] == plVar1[1] && ((int)plVar2[3] == (int)plVar1[3] && plVar2[2] == plVar1[2]));
  }
  pTVar3 = (TQuat<double> *)param_2->Source1;
  GetUnitQuat(&local_48,(TQuat<double> *)param_2->Source0);
  GetUnitQuat(&local_28,pTVar3);
  return (-1 < (longlong)((ulonglong)local_28.W ^ (ulonglong)local_48.W) && local_48.Z == local_28.Z
         ) && (local_48.Y == local_28.Y && local_48.X == local_28.X);
}

// Quantize @ 144335aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar1 = (float *)param_2->Source;
  pfVar2 = (float *)param_2->Target;
  fVar11 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  if (__real_322bcc77 < fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11) {
    fVar14 = fVar15 * fVar15 + fVar11 * fVar11;
    fVar8 = fVar11 * fVar11 + fVar15 * fVar15;
    fVar9 = fVar13 * fVar13 + fVar12 * fVar12;
    fVar10 = fVar12 * fVar12 + fVar13 * fVar13;
    auVar7._4_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                          (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[1] -
                                        (fVar10 + fVar8)) & _UNK_15061cc74));
    auVar7._0_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                          (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[0] -
                                        (fVar9 + fVar14)) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    ;
    auVar7._8_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                          (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[2] -
                                        (fVar14 + fVar9)) & _UNK_15061cc78));
    auVar7._12_4_ =
         -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar8 + fVar10)) &
                       _UNK_15061cc7c));
    iVar3 = movmskps((int)pfVar1,auVar7);
    if (iVar3 != 0) {
      fVar14 = fVar15 * fVar15 + fVar11 * fVar11;
      fVar8 = fVar11 * fVar11 + fVar15 * fVar15;
      fVar9 = fVar13 * fVar13 + fVar12 * fVar12;
      fVar10 = fVar12 * fVar12 + fVar13 * fVar13;
      auVar6._0_4_ = fVar9 + fVar14;
      auVar6._4_4_ = fVar10 + fVar8;
      auVar6._8_4_ = fVar14 + fVar9;
      auVar6._12_4_ = fVar8 + fVar10;
      auVar7 = sqrtps(auVar6,auVar6);
      auVar7 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar7);
      fVar11 = (float)((uint)(auVar7._0_4_ * fVar11) &
                       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar6._0_4_) |
                      ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar6._0_4_) &
                      GlobalVectorConstants::Float0001.m128_u32[0]);
      fVar15 = (float)((uint)(auVar7._4_4_ * fVar15) & -(uint)(_UNK_1506895d4 <= auVar6._4_4_) |
                      ~-(uint)(_UNK_1506895d4 <= auVar6._4_4_) &
                      GlobalVectorConstants::Float0001.m128_u32[1]);
      fVar12 = (float)((uint)(auVar7._8_4_ * fVar12) & -(uint)(_UNK_1506895d8 <= auVar6._8_4_) |
                      ~-(uint)(_UNK_1506895d8 <= auVar6._8_4_) &
                      GlobalVectorConstants::Float0001.m128_u32[2]);
      fVar13 = (float)((uint)(auVar7._12_4_ * fVar13) & -(uint)(_UNK_1506895dc <= auVar6._12_4_) |
                      ~-(uint)(_UNK_1506895dc <= auVar6._12_4_) &
                      GlobalVectorConstants::Float0001.m128_u32[3]);
    }
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    if (fVar11 <= __real_bf800000) {
      fVar11 = __real_bf800000;
    }
    if (fVar15 <= __real_bf800000) {
      fVar15 = __real_bf800000;
    }
    fVar14 = fVar12;
    fVar8 = fVar15;
    fVar9 = fVar11;
    if (fVar12 <= __real_bf800000) {
      fVar14 = __real_bf800000;
      fVar12 = __real_bf800000;
    }
  }
  else {
    fVar11 = 0.0;
    fVar15 = 0.0;
    fVar14 = 0.0;
    fVar13 = _UNK_15068964c;
    fVar8 = _UNK_150689644;
    fVar12 = _UNK_150689648;
    fVar9 = ___xmm_3f800000000000000000000000000000;
  }
  fVar14 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff) + __real_3f800000;
  fVar15 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff) + __real_3f800000;
  fVar11 = (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff) + __real_3f800000;
  uVar4 = 0;
  uVar5 = uVar4;
  if (fVar14 != 1.0) {
    uVar5 = 4;
  }
  if (fVar15 != 1.0) {
    uVar4 = 2;
  }
  *pfVar2 = fVar11;
  pfVar2[1] = fVar15;
  pfVar2[2] = fVar14;
  pfVar2[3] = (float)(uVar5 | uVar4 | (uint)(fVar11 != 1.0) | ((uint)fVar13 >> 0x1f) << 6 |
                      ((uint)fVar12 >> 0x1f) << 5 | ((uint)fVar8 >> 0x1f) << 4 |
                     ((uint)fVar9 >> 0x1f) << 3);
  return;
}

// Quantize @ 144335d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar23;
  undefined1 auVar22 [16];
  uint uVar24;
  undefined1 auVar25 [16];
  uint uVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  
  pauVar1 = (undefined1 (*) [16])param_2->Target;
  uVar34 = SUB84(__real_3ff0000000000000,0);
  uVar35 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
  pauVar2 = (undefined1 (*) [16])param_2->Source;
  uVar9 = 0;
  auVar25 = pauVar2[1];
  uVar21 = auVar25._0_4_;
  uVar23 = auVar25._4_4_;
  uVar24 = auVar25._12_4_;
  auVar28 = *pauVar2;
  uVar32 = auVar28._0_4_;
  uVar30 = auVar28._4_4_;
  uVar33 = auVar28._8_4_;
  uVar31 = auVar28._12_4_;
  dVar4 = auVar25._0_8_;
  dVar18 = auVar25._8_8_;
  dVar13 = auVar28._8_8_;
  dVar5 = auVar28._0_8_;
  if (__real_3e45798ee0000000 < dVar18 * dVar18 + dVar4 * dVar4 + dVar13 * dVar13 + dVar5 * dVar5) {
    dVar14 = dVar5 * dVar5 + dVar4 * dVar4;
    dVar17 = dVar13 * dVar13 + dVar18 * dVar18;
    auVar26._8_4_ = SUB84(dVar17,0);
    auVar26._0_8_ = dVar14;
    auVar26._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar27._0_8_ = auVar26._8_8_ + dVar14;
    auVar27._8_8_ = dVar14 + dVar17;
    dVar14 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - auVar27._0_8_;
    dVar17 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - auVar27._8_8_;
    auVar19._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar19._8_4_ = SUB84(dVar17,0) & _UNK_15061cc88;
    auVar19._12_4_ = (uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c;
    auVar28._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar19._8_8_);
    auVar28._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar19._0_8_);
    dVar14 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - auVar27._0_8_;
    dVar17 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - auVar27._8_8_;
    uVar8 = movmskpd((int)param_1,auVar28);
    auVar20._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar20._8_4_ = SUB84(dVar17,0) & _UNK_15061cc88;
    auVar20._12_4_ = (uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c;
    lVar11 = -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar20._8_8_);
    auVar25._8_4_ = (int)lVar11;
    auVar25._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] < auVar20._0_8_);
    auVar25._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
    iVar7 = movmskpd((int)pauVar2,auVar25);
    if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
      auVar25 = sqrtpd((undefined1  [16])GlobalVectorConstants::FloatOne,auVar27);
      uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= auVar27._0_8_);
      uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= auVar27._8_8_);
      uVar21 = (uint)(uVar10 >> 0x20);
      uVar32 = (uint)(uVar12 >> 0x20);
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
      auVar15._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar15._4_4_ =
           ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar15._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar15._12_4_ =
           ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar29._0_8_ = uVar10 & (ulonglong)(auVar28._0_8_ * dVar5);
      uVar6 = uVar12 & (ulonglong)(auVar28._8_8_ * dVar13);
      auVar29._8_4_ = (undefined4)uVar6;
      auVar29._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar29 = auVar29 | auVar15;
      auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
      auVar22._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar22._4_4_ =
           ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar22._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar22._12_4_ =
           ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      uVar33 = auVar29._8_4_;
      uVar31 = auVar29._12_4_;
      auVar16._0_8_ = (ulonglong)(auVar25._0_8_ * dVar4) & uVar10;
      uVar12 = (ulonglong)(auVar25._8_8_ * dVar18) & uVar12;
      auVar16._8_4_ = (undefined4)uVar12;
      auVar16._12_4_ = (undefined4)(uVar12 >> 0x20);
      auVar22 = auVar22 | auVar16;
      uVar32 = auVar29._0_4_;
      uVar30 = auVar29._4_4_;
      uVar24 = auVar22._12_4_;
      uVar21 = auVar22._0_4_;
      uVar23 = auVar22._4_4_;
    }
    if (__real_3ff0000000000000 <= (double)CONCAT44(uVar30,uVar32)) {
      uVar32 = uVar34;
      uVar30 = uVar35;
    }
    if (__real_3ff0000000000000 <= (double)CONCAT44(uVar31,uVar33)) {
      uVar33 = uVar34;
      uVar31 = uVar35;
    }
    if (__real_3ff0000000000000 <= (double)CONCAT44(uVar23,uVar21)) {
      uVar21 = uVar34;
      uVar23 = uVar35;
    }
    uVar34 = SUB84(__real_bff0000000000000,0);
    uVar35 = (uint)((ulonglong)__real_bff0000000000000 >> 0x20);
    if ((double)CONCAT44(uVar30,uVar32) <= __real_bff0000000000000) {
      uVar32 = uVar34;
      uVar30 = uVar35;
    }
    if ((double)CONCAT44(uVar31,uVar33) <= __real_bff0000000000000) {
      uVar33 = uVar34;
      uVar31 = uVar35;
    }
    uVar8 = uVar23;
    if ((double)CONCAT44(uVar23,uVar21) <= __real_bff0000000000000) {
      uVar21 = uVar34;
      uVar23 = uVar35;
      uVar8 = uVar35;
    }
  }
  else {
    uVar30 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar31 = 0;
    uVar21 = 0;
    uVar23 = 0;
    uVar24 = _UNK_15061cbcc;
    uVar8 = _UNK_15061cbc4;
  }
  dVar4 = (double)CONCAT44(uVar30 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar32 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          __real_3ff0000000000000;
  dVar5 = (double)CONCAT44(uVar23 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar21 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          __real_3ff0000000000000;
  dVar13 = (double)CONCAT44(uVar31 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar33 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           __real_3ff0000000000000;
  auVar3._8_4_ = SUB84(dVar13,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *pauVar1 = auVar3;
  uVar21 = uVar9;
  if (dVar5 != 1.0) {
    uVar21 = 4;
  }
  if (dVar13 != 1.0) {
    uVar9 = 2;
  }
  *(double *)pauVar1[1] = dVar5;
  *(ulonglong *)(pauVar1[1] + 8) =
       (ulonglong)
       ((uVar24 >> 0x1f) << 6 | (uVar8 >> 0x1f) << 5 | (uVar31 >> 0x1f) << 4 | (uVar30 >> 0x1f) << 3
        | uVar21 | uVar9 | (uint)(dVar4 != 1.0));
  return;
}

// Serialize @ 14433b910

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  
  puVar1 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,puVar1[3],7);
  if ((puVar1[3] & 1) != 0) {
    FNetBitStreamWriter::WriteBits(this,*puVar1,0x17);
  }
  if ((puVar1[3] & 2) != 0) {
    FNetBitStreamWriter::WriteBits(this,puVar1[1],0x17);
  }
  if ((puVar1[3] & 4) != 0) {
    FNetBitStreamWriter::WriteBits(this,puVar1[2],0x17);
  }
  return;
}

// Serialize @ 14433b990

void __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  
  puVar1 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,puVar1[6],7);
  if ((puVar1[6] & 1) != 0) {
    FNetBitStreamWriter::WriteBits(this,*puVar1,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20),0x14);
  }
  if ((puVar1[6] & 2) != 0) {
    FNetBitStreamWriter::WriteBits(this,puVar1[2],0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)*(undefined8 *)(puVar1 + 2) >> 0x20),0x14)
    ;
  }
  if ((puVar1[6] & 4) != 0) {
    FNetBitStreamWriter::WriteBits(this,puVar1[4],0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)*(undefined8 *)(puVar1 + 4) >> 0x20),0x14)
    ;
  }
  return;
}

// Validate @ 14433f4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = (float *)param_2->Source;
  fVar4 = *pfVar1 * *pfVar1;
  fVar5 = pfVar1[1] * pfVar1[1];
  fVar6 = pfVar1[2] * pfVar1[2];
  fVar7 = pfVar1[3] * pfVar1[3];
  fVar8 = fVar5 + fVar4;
  fVar4 = fVar4 + fVar5;
  fVar5 = fVar7 + fVar6;
  fVar6 = fVar6 + fVar7;
  auVar2._4_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar6 + fVar4)
                                      ) & _UNK_15061cc74));
  auVar2._0_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar5 + fVar8)
                                      ) & __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar2._8_4_ = -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                        (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar8 + fVar5)
                                      ) & _UNK_15061cc78));
  auVar2._12_4_ =
       -(uint)(GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
              (float)((uint)(GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar4 + fVar6)) &
                     _UNK_15061cc7c));
  iVar3 = movmskps((int)pfVar1,auVar2);
  return iVar3 == 0;
}

// Validate @ 14433f530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pdVar1 = (double *)param_2->Source;
  dVar11 = pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1;
  dVar8 = pdVar1[3] * pdVar1[3] + pdVar1[1] * pdVar1[1];
  dVar9 = dVar8 + dVar11;
  dVar11 = dVar11 + dVar8;
  dVar8 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar9;
  dVar10 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar11;
  lVar6 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
           (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar10,0) & _UNK_15061cc88));
  dVar9 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar9;
  dVar11 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar11;
  lVar7 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
           (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar11,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar7;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
  iVar4 = movmskpd((int)pdVar1,auVar2);
  auVar3._8_4_ = (int)lVar6;
  auVar3._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar5 = movmskpd((int)param_1,auVar3);
  return (uVar5 & 0x3fffffff) == 0 && iVar4 == 0;
}

