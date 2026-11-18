// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// Dequantize @ 14432aae0

void __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::Dequantize
          (uint param_1,FNetSerializationContext *param_2,FNetDequantizeArgs *param_3)

{
  float fVar1;
  float fVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  
  pdVar3 = (double *)param_3->Source;
  pdVar4 = (double *)param_3->Target;
  uVar7 = (uint)*(float *)(pdVar3 + 3) & 0x40;
  if (((uint)*(float *)(pdVar3 + 3) & 0x3f) == 0) {
    if (uVar7 != 0) {
      dVar5 = pdVar3[1];
      *pdVar4 = *pdVar3;
      pdVar4[1] = dVar5;
      pdVar4[2] = pdVar3[2];
      return;
    }
    fVar1 = *(float *)(pdVar3 + 1);
    fVar2 = *(float *)(pdVar3 + 2);
    *pdVar4 = (double)*(float *)pdVar3;
    pdVar4[1] = (double)fVar1;
    pdVar4[2] = (double)fVar2;
    return;
  }
  dVar5 = pdVar3[1];
  dVar6 = pdVar3[2];
  if (uVar7 != 0) {
    dVar8 = __real_3ff0000000000000 / (double)(1L << ((byte)param_1 & 0x3f));
    *pdVar4 = dVar8 * (double)(longlong)*pdVar3;
    pdVar4[1] = dVar8 * (double)(longlong)dVar5;
    pdVar4[2] = dVar8 * (double)(longlong)dVar6;
    return;
  }
  *pdVar4 = (double)(longlong)*pdVar3;
  pdVar4[1] = (double)(longlong)dVar5;
  pdVar4[2] = (double)(longlong)dVar6;
  return;
}

// Deserialize @ 14432d410

void __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::Deserialize
          (uint param_1,FNetSerializationContext *param_2,FNetDeserializeArgs *param_3)

{
  FNetBitStreamReader *this;
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  this = param_2->BitStreamReader;
  uVar2 = FNetBitStreamReader::ReadBits(this,7);
  dStack_20 = (double)(ulonglong)uVar2;
  uVar9 = uVar2 & 0x3f;
  if (uVar9 == 0) {
    if ((uVar2 & 0x40) == 0) {
      fVar5 = (float)FNetBitStreamReader::ReadBits(this,0x20);
      local_38 = (double)(ulonglong)(uint)fVar5;
      fVar6 = (float)FNetBitStreamReader::ReadBits(this,0x20);
      dStack_30 = (double)(ulonglong)(uint)fVar6;
      fVar7 = (float)FNetBitStreamReader::ReadBits(this,0x20);
      local_28 = (double)(ulonglong)(uint)fVar7;
      iVar4 = _finite((double)fVar5);
      if ((iVar4 != 0) && (iVar4 = _finite((double)fVar6), iVar4 != 0)) {
        iVar4 = _finite((double)fVar7);
        goto joined_r0x00014432d66e;
      }
    }
    else {
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar9 = FNetBitStreamReader::ReadBits(this,0x20);
      local_38 = (double)CONCAT44(uVar9,uVar2);
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar9 = FNetBitStreamReader::ReadBits(this,0x20);
      dStack_30 = (double)CONCAT44(uVar9,uVar2);
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar9 = FNetBitStreamReader::ReadBits(this,0x20);
      local_28 = (double)CONCAT44(uVar9,uVar2);
      iVar4 = _finite(local_38);
      if ((iVar4 != 0) && (iVar4 = _finite(dStack_30), iVar4 != 0)) {
        iVar4 = _finite(local_28);
joined_r0x00014432d66e:
        if (iVar4 != 0) goto LAB_14432d683;
      }
    }
    FNetSerializationContext::SetError(param_2,GNetError_InvalidValue,true);
  }
  else {
    if (uVar9 < 0x21) {
      uVar2 = FNetBitStreamReader::ReadBits(this,uVar9);
      uVar11 = (ulonglong)uVar2;
      uVar2 = FNetBitStreamReader::ReadBits(this,uVar9);
      uVar12 = (ulonglong)uVar2;
      uVar2 = FNetBitStreamReader::ReadBits(this,uVar9);
      uVar10 = (ulonglong)uVar2;
    }
    else {
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar3 = FNetBitStreamReader::ReadBits(this,uVar9 - 0x20);
      uVar11 = CONCAT44(uVar3,uVar2);
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar3 = FNetBitStreamReader::ReadBits(this,uVar9 - 0x20);
      uVar12 = CONCAT44(uVar3,uVar2);
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar3 = FNetBitStreamReader::ReadBits(this,uVar9 - 0x20);
      uVar10 = CONCAT44(uVar3,uVar2);
    }
    uVar8 = 1L << ((char)uVar9 - 1U & 0x3f);
    local_38 = (double)((uVar8 ^ uVar11) - uVar8);
    dStack_30 = (double)((uVar8 ^ uVar12) - uVar8);
    local_28 = (double)((uVar8 ^ uVar10) - uVar8);
LAB_14432d683:
    pdVar1 = (double *)param_3->Target;
    *pdVar1 = local_38;
    pdVar1[1] = dStack_30;
    pdVar1[2] = local_28;
    pdVar1[3] = dStack_20;
  }
  return;
}

// DeserializeDelta @ 14432ea90

void __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::DeserializeDelta
          (uint param_1,FNetSerializationContext *param_2,FNetDeserializeDeltaArgs *param_3)

{
  FNetBitStreamReader *this;
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  uint uStack_50;
  
  this = param_2->BitStreamReader;
  uVar6 = FNetBitStreamReader::ReadBits(this,1);
  if (uVar6 == 0) {
    Deserialize(param_1,param_2,(FNetDeserializeArgs *)param_3);
    return;
  }
  pauVar1 = (undefined1 (*) [16])param_3->Prev;
  local_68 = *pauVar1;
  uVar16 = local_68._0_8_;
  fVar11 = local_68._8_4_;
  local_58._0_4_ = *(float *)pauVar1[1];
  local_58._4_4_ = *(uint *)(pauVar1[1] + 4);
  uVar13 = *(ulonglong *)pauVar1[1];
  uStack_50 = *(uint *)(pauVar1[1] + 8);
  uVar5 = *(undefined4 *)(pauVar1[1] + 0xc);
  auVar19 = local_68;
  if ((pauVar1[1][8] & 0x3f) == 0) {
    uVar6 = FNetBitStreamReader::ReadBits(this,3);
    if ((pauVar1[1][8] & 0x40) == 0) {
      if ((uVar6 & 1) == 0) {
      }
      else {
        local_68._0_4_ = FNetBitStreamReader::ReadBits(this,0x20);
      }
      if ((uVar6 & 2) != 0) {
        fVar11 = (float)FNetBitStreamReader::ReadBits(this,0x20);
      }
      if ((uVar6 & 4) != 0) {
        local_58._0_4_ = (float)FNetBitStreamReader::ReadBits(this,0x20);
      }
      iVar10 = _finite((double)(float)local_68._0_4_);
      if (((iVar10 != 0) && (iVar10 = _finite((double)fVar11), iVar10 != 0)) &&
         (iVar10 = _finite((double)(float)local_58), iVar10 != 0)) {
        local_68._4_4_ = 0;
        local_68._8_4_ = fVar11;
        local_68._12_4_ = 0;
        local_58 = (ulonglong)(uint)(float)local_58;
        goto LAB_14432ef00;
      }
    }
    else {
      local_68._0_8_ = uVar16;
      if ((uVar6 & 1) != 0) {
        uVar7 = FNetBitStreamReader::ReadBits(this,0x20);
        uVar8 = FNetBitStreamReader::ReadBits(this,0x20);
        local_68._0_8_ = CONCAT44(uVar8,uVar7);
        auVar19 = local_68;
      }
      if ((uVar6 & 2) != 0) {
        local_68._8_4_ = FNetBitStreamReader::ReadBits(this,0x20);
        local_68._12_4_ = FNetBitStreamReader::ReadBits(this,0x20);
        auVar19 = local_68;
      }
      if ((uVar6 & 4) != 0) {
        local_58._0_4_ = (float)FNetBitStreamReader::ReadBits(this,0x20);
        local_58._4_4_ = FNetBitStreamReader::ReadBits(this,0x20);
      }
      iVar10 = _finite(auVar19._0_8_);
      if (((iVar10 != 0) &&
          (auVar4._4_8_ = extraout_XMM0_Qb, auVar4._0_4_ = auVar19._4_4_,
          auVar18._0_8_ = auVar4._0_8_ << 0x20, auVar18._8_4_ = auVar19._8_4_,
          auVar18._12_4_ = auVar19._12_4_, iVar10 = _finite(auVar18._8_8_), iVar10 != 0)) &&
         (iVar10 = _finite((double)CONCAT44(local_58._4_4_,(float)local_58)), iVar10 != 0))
      goto LAB_14432ef04;
    }
    FNetSerializationContext::SetError(param_2,GNetError_InvalidValue,true);
  }
  else {
    uVar6 = FNetBitStreamReader::ReadBits(this,3);
    if (uVar6 != 0) {
      uVar7 = FNetBitStreamReader::ReadBits(this,6);
      uVar15 = 1L << ((char)uVar7 - 1U & 0x3f);
      local_58 = uVar13;
      if (uVar7 < 0x21) {
        if ((uVar6 & 1) != 0) {
          uVar8 = FNetBitStreamReader::ReadBits(this,uVar7);
          uVar16 = uVar16 + ((uVar8 ^ uVar15) - uVar15);
          local_68._0_8_ = uVar16;
        }
        uVar17 = local_68._8_8_;
        if ((uVar6 & 2) != 0) {
          uVar8 = FNetBitStreamReader::ReadBits(this,uVar7);
          uVar17 = local_68._8_8_ + ((uVar8 ^ uVar15) - uVar15);
          local_68._8_8_ = uVar17;
        }
        if ((uVar6 & 4) != 0) {
          uVar6 = FNetBitStreamReader::ReadBits(this,uVar7);
          uVar12 = (ulonglong)uVar6;
LAB_14432ebca:
          local_58 = uVar13 + ((uVar12 ^ uVar15) - uVar15);
        }
      }
      else {
        uVar7 = uVar7 - 0x20;
        if ((uVar6 & 1) != 0) {
          uVar8 = FNetBitStreamReader::ReadBits(this,0x20);
          uVar9 = FNetBitStreamReader::ReadBits(this,uVar7);
          uVar16 = uVar16 + ((CONCAT44(uVar9,uVar8) ^ uVar15) - uVar15);
          local_68._0_8_ = uVar16;
        }
        uVar17 = local_68._8_8_;
        if ((uVar6 & 2) != 0) {
          uVar8 = FNetBitStreamReader::ReadBits(this,0x20);
          uVar9 = FNetBitStreamReader::ReadBits(this,uVar7);
          uVar17 = local_68._8_8_ + ((CONCAT44(uVar9,uVar8) ^ uVar15) - uVar15);
          local_68._8_8_ = uVar17;
        }
        if ((uVar6 & 4) != 0) {
          uVar6 = FNetBitStreamReader::ReadBits(this,0x20);
          uVar7 = FNetBitStreamReader::ReadBits(this,uVar7);
          uVar12 = CONCAT44(uVar7,uVar6);
          goto LAB_14432ebca;
        }
      }
      uVar13 = (longlong)local_58 >> 0x3f ^ local_58;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = (int)lVar2;
      if (uVar13 == 0) {
        iVar10 = -1;
      }
      uVar17 = (longlong)uVar17 >> 0x3f ^ uVar17;
      lVar2 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar14 = (int)lVar2;
      if (uVar17 == 0) {
        iVar14 = -1;
      }
      iVar3 = 0x3f - iVar10;
      if (0x41U - (0x3f - iVar10) < 0x41U - (0x3f - iVar14)) {
        iVar3 = 0x3f - iVar14;
      }
      uVar16 = (longlong)uVar16 >> 0x3f ^ uVar16;
      lVar2 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = (int)lVar2;
      if (uVar16 == 0) {
        iVar10 = -1;
      }
      if (0x41U - iVar3 < 0x41U - (0x3f - iVar10)) {
        iVar3 = 0x3f - iVar10;
      }
      uStack_50 = 0x41U - iVar3 | uStack_50 & 0x40;
LAB_14432ef00:
      auVar19 = local_68;
    }
LAB_14432ef04:
    pauVar1 = (undefined1 (*) [16])param_3->_padding_;
    *pauVar1 = auVar19;
    *(float *)pauVar1[1] = (float)local_58;
    *(uint *)(pauVar1[1] + 4) = local_58._4_4_;
    *(uint *)(pauVar1[1] + 8) = uStack_50;
    *(undefined4 *)(pauVar1[1] + 0xc) = uVar5;
  }
  return;
}

// IsEqual @ 144334000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::IsEqual
          (uint param_1,FNetSerializationContext *param_2,FNetIsEqualArgs *param_3)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  FNetQuantizeArgs local_88;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  int iStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  int iStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_3->bStateIsQuantized == false) {
    local_88._padding_ = param_3->_padding_;
    local_88.Source = param_3->Source0;
    local_88.Target = (ulong64)&local_40;
    local_88._padding_ = 0;
    local_88._padding_._0_4_ = 0;
    Quantize(param_1,param_2,&local_88);
    local_88.Source = param_3->Source1;
    local_88.Target = (ulong64)&local_60;
    Quantize(param_1,param_2,&local_88);
  }
  else {
    plVar1 = (longlong *)param_3->Source0;
    local_40 = *plVar1;
    lStack_38 = plVar1[1];
    local_30 = plVar1[2];
    iStack_28 = (int)plVar1[3];
    plVar1 = (longlong *)param_3->Source1;
    local_60 = *plVar1;
    lStack_58 = plVar1[1];
    local_50 = plVar1[2];
    iStack_48 = (int)plVar1[3];
  }
  return local_40 == local_60 &&
         (lStack_38 == lStack_58 && (iStack_28 == iStack_48 && local_30 == local_50));
}

// Quantize @ 144336980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::Quantize
          (uint param_1,FNetSerializationContext *param_2,FNetQuantizeArgs *param_3)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  longlong lVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined1 local_res18 [16];
  double dStack_60;
  
  pdVar1 = (double *)param_3->Source;
  pdVar2 = (double *)param_3->Target;
  iVar7 = _finite(*pdVar1);
  if (((iVar7 != 0) && (iVar7 = _finite(pdVar1[1]), iVar7 != 0)) &&
     (iVar7 = _finite(pdVar1[2]), iVar7 != 0)) {
    dVar19 = *pdVar1;
    dVar10 = pdVar1[1];
    dVar11 = pdVar1[2];
    dVar20 = (double)(1L << ((byte)param_1 & 0x3f));
    dVar5 = dVar20 * dVar19;
    dVar21 = dVar20 * dVar10;
    dVar20 = dVar20 * dVar11;
    uVar12 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar13 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar18 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar18 <= (double)CONCAT44(uVar13,uVar12)) {
      dVar18 = (double)CONCAT44(uVar13,uVar12);
    }
    uVar12 = SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar13 = (uint)((ulonglong)dVar20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (dVar18 <= (double)CONCAT44(uVar13,uVar12)) {
      dVar18 = (double)CONCAT44(uVar13,uVar12);
    }
    if (___real_43d0000000000000 <= dVar18) {
      dVar19 = pdVar1[1];
      dVar10 = pdVar1[2];
      *pdVar2 = *pdVar1;
      pdVar2[1] = dVar19;
      pdVar2[2] = dVar10;
      pdVar2[3] = 3.16202013338398e-322;
    }
    else {
      dVar18 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      uVar12 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar13 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar14 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar16 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar13,uVar12) <= dVar18) {
        dVar18 = (double)CONCAT44(uVar13,uVar12);
      }
      if ((double)CONCAT44(uVar16,uVar14) <= dVar18) {
        dVar18 = (double)CONCAT44(uVar16,uVar14);
      }
      uVar17 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      bVar3 = dVar18 < __real_4330000000000000;
      uVar22 = (undefined4)((ulonglong)__real_bfe0000000000000 >> 0x20);
      uVar15 = SUB84(__real_3fe0000000000000,0);
      if (bVar3) {
        dVar19 = __real_3fe0000000000000;
        if ((dVar5 <= 0.0) && (dVar19 = __real_bfe0000000000000, 0.0 <= dVar5)) {
          dVar19 = 0.0;
        }
        dVar19 = dVar19 + dVar5;
        dVar10 = __real_3fe0000000000000;
        if ((dVar21 <= 0.0) && (dVar10 = __real_bfe0000000000000, 0.0 <= dVar21)) {
          dVar10 = 0.0;
        }
        dVar21 = dVar21 + dVar10;
        if ((dVar20 <= 0.0) &&
           (uVar15 = SUB84(__real_bfe0000000000000,0), uVar17 = uVar22, 0.0 <= dVar20)) {
          uVar15 = 0;
          uVar17 = 0;
        }
      }
      else {
        dVar18 = __real_3fe0000000000000;
        if ((dVar19 <= 0.0) && (dVar18 = __real_bfe0000000000000, 0.0 <= dVar19)) {
          dVar18 = 0.0;
        }
        dVar19 = dVar19 + dVar18;
        dVar21 = __real_3fe0000000000000;
        if ((dVar10 <= 0.0) && (dVar21 = __real_bfe0000000000000, 0.0 <= dVar10)) {
          dVar21 = 0.0;
        }
        dVar21 = dVar10 + dVar21;
        dVar20 = dVar11;
        if ((dVar11 <= 0.0) &&
           (uVar15 = SUB84(__real_bfe0000000000000,0), uVar17 = uVar22, 0.0 <= dVar11)) {
          uVar15 = 0;
          uVar17 = 0;
        }
      }
      dVar11 = (double)(longlong)dVar21;
      dVar10 = (double)(longlong)(dVar20 + (double)CONCAT44(uVar17,uVar15));
      dVar19 = (double)(longlong)dVar19;
      uVar8 = (longlong)dVar10 >> 0x3f ^ (ulonglong)dVar10;
      lVar4 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar7 = (int)lVar4;
      if (uVar8 == 0) {
        iVar7 = -1;
      }
      uVar8 = (longlong)dVar11 >> 0x3f ^ (ulonglong)dVar11;
      lVar4 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      *pdVar2 = dVar19;
      pdVar2[1] = dVar11;
      iVar9 = (int)lVar4;
      if (uVar8 == 0) {
        iVar9 = -1;
      }
      iVar6 = 0x3f - iVar7;
      if (0x41U - (0x3f - iVar7) < 0x41U - (0x3f - iVar9)) {
        iVar6 = 0x3f - iVar9;
      }
      uVar8 = (longlong)dVar19 >> 0x3f ^ (ulonglong)dVar19;
      lVar4 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar7 = (int)lVar4;
      if (uVar8 == 0) {
        iVar7 = -1;
      }
      if (0x41U - iVar6 < 0x41U - (0x3f - iVar7)) {
        iVar6 = 0x3f - iVar7;
      }
      dStack_60 = (double)(ulonglong)(0x41U - iVar6 | (uint)bVar3 << 6);
      pdVar2[2] = dVar10;
      pdVar2[3] = dStack_60;
    }
    return;
  }
  if (GEnsureOnNANDiagnostic == 0) {
    if (::OnceOnly == false) {
      UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
      ::OnceOnly = true;
    }
  }
  else {
    `UE::Net::Private::FPackedVectorNetSerializerBase::Quantize'::__l13::<lambda_1>::operator()
              (local_res18);
  }
  *pdVar2 = 0.0;
  pdVar2[1] = 0.0;
  pdVar2[2] = 0.0;
  pdVar2[3] = 3.2114266979681e-322;
  return;
}

// Serialize @ 14433c7b0

void __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::Serialize
          (uint param_1,FNetSerializationContext *param_2,FNetSerializeArgs *param_3)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)param_3->Source;
  this = param_2->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,puVar1[6],7);
  uVar3 = puVar1[6] & 0x3f;
  if ((uVar3 == 0) && (uVar3 = 0x20, (puVar1[6] & 0x40) != 0)) {
    uVar3 = 0x40;
  }
  if (uVar3 < 0x21) {
    FNetBitStreamWriter::WriteBits(this,*puVar1,uVar3);
    FNetBitStreamWriter::WriteBits(this,puVar1[2],uVar3);
    uVar2 = puVar1[4];
  }
  else {
    uVar3 = uVar3 - 0x20;
    FNetBitStreamWriter::WriteBits(this,*puVar1,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20),uVar3);
    FNetBitStreamWriter::WriteBits(this,puVar1[2],0x20);
    FNetBitStreamWriter::WriteBits
              (this,(uint)((ulonglong)*(undefined8 *)(puVar1 + 2) >> 0x20),uVar3);
    FNetBitStreamWriter::WriteBits(this,puVar1[4],0x20);
    uVar2 = (uint)((ulonglong)*(undefined8 *)(puVar1 + 4) >> 0x20);
  }
  FNetBitStreamWriter::WriteBits(this,uVar2,uVar3);
  return;
}

// SerializeDelta @ 14433da00

void __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::SerializeDelta
          (uint param_1,FNetSerializationContext *param_2,FNetSerializeDeltaArgs *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  FNetBitStreamWriter *this;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong local_60 [4];
  
  puVar1 = (uint *)param_3->_padding_;
  plVar2 = (longlong *)param_3->Prev;
  this = param_2->BitStreamWriter;
  uVar12 = puVar1[6] & 0x40;
  if (uVar12 == (*(uint *)(plVar2 + 3) & 0x40)) {
    uVar9 = *(uint *)(plVar2 + 3) & 0x3f;
    uVar18 = puVar1[6] & 0x3f;
    if ((uVar18 == 0) || (uVar9 == 0)) {
      if (uVar18 == uVar9) {
        lVar7 = plVar2[1];
        lVar14 = *plVar2;
        lVar3 = *(longlong *)puVar1;
        uVar18 = 0;
        lVar4 = plVar2[2];
        lVar5 = *(longlong *)(puVar1 + 2);
        lVar6 = *(longlong *)(puVar1 + 4);
        uVar9 = uVar18;
        if (lVar6 != lVar4) {
          uVar9 = 4;
        }
        if (lVar5 != lVar7) {
          uVar18 = 2;
        }
        uVar9 = uVar9 | uVar18 | (uint)(lVar3 != lVar14);
        FNetBitStreamWriter::WriteBits(this,1,1);
        FNetBitStreamWriter::WriteBits(this,uVar9,3);
        if (uVar9 == 0) {
          return;
        }
        if (uVar12 == 0) {
          if (lVar3 != lVar14) {
            FNetBitStreamWriter::WriteBits(this,*puVar1,0x20);
          }
          if (lVar5 != lVar7) {
            FNetBitStreamWriter::WriteBits(this,puVar1[2],0x20);
          }
          if (lVar6 == lVar4) {
            return;
          }
          FNetBitStreamWriter::WriteBits(this,puVar1[4],0x20);
          return;
        }
        if (lVar3 != lVar14) {
          FNetBitStreamWriter::WriteBits(this,*puVar1,0x20);
          FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20),0x20)
          ;
        }
        if (lVar5 != lVar7) {
          FNetBitStreamWriter::WriteBits(this,puVar1[2],0x20);
          FNetBitStreamWriter::WriteBits
                    (this,(uint)((ulonglong)*(undefined8 *)(puVar1 + 2) >> 0x20),0x20);
        }
        if (lVar6 == lVar4) {
          return;
        }
        FNetBitStreamWriter::WriteBits(this,puVar1[4],0x20);
        FNetBitStreamWriter::WriteBits
                  (this,(uint)((ulonglong)*(undefined8 *)(puVar1 + 4) >> 0x20),0x20);
        return;
      }
    }
    else {
      lVar14 = 0;
      uVar20 = *(longlong *)puVar1 - *plVar2;
      uVar19 = *(longlong *)(puVar1 + 2) - plVar2[1];
      uVar22 = *(longlong *)(puVar1 + 4) - plVar2[2];
      uVar12 = (uint)(uVar19 != 0);
      uVar9 = (uint)(uVar22 != 0);
      iVar17 = (uint)(uVar19 != 0) + (uint)(uVar20 != 0) + uVar9;
      uVar8 = (longlong)uVar22 >> 0x3f ^ uVar22;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar10 = (int)lVar7;
      if (uVar8 == 0) {
        iVar10 = -1;
      }
      uVar8 = (longlong)uVar19 >> 0x3f ^ uVar19;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar11 = (int)lVar7;
      if (uVar8 == 0) {
        iVar11 = -1;
      }
      iVar16 = 0x3f - iVar10;
      if (0x41U - (0x3f - iVar10) < 0x41U - (0x3f - iVar11)) {
        iVar16 = 0x3f - iVar11;
      }
      uVar8 = (longlong)uVar20 >> 0x3f ^ uVar20;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar10 = (int)lVar7;
      if (uVar8 == 0) {
        iVar10 = -1;
      }
      if (0x41U - iVar16 < 0x41U - (0x3f - iVar10)) {
        iVar16 = 0x3f - iVar10;
      }
      uVar13 = -iVar16 + 0x41;
      iVar10 = 3;
      if (iVar17 != 0) {
        iVar10 = 9;
      }
      local_60[0] = uVar20;
      local_60[1] = uVar19;
      local_60[2] = uVar22;
      if (uVar13 * iVar17 + iVar10 < uVar18 * 3 + 7) {
        uVar21 = (uint)(uVar20 != 0);
        uVar15 = uVar9 * 4 | uVar12 * 2 | uVar21;
        uVar18 = 1;
        FNetBitStreamWriter::WriteBits(this,1,1);
        FNetBitStreamWriter::WriteBits(this,uVar15,3);
        if (uVar15 == 0) {
          return;
        }
        FNetBitStreamWriter::WriteBits(this,uVar13,6);
        if (uVar13 < 0x21) {
          do {
            if ((uVar18 & uVar15) != 0) {
              FNetBitStreamWriter::WriteBits(this,(uint)local_60[lVar14],uVar13);
            }
            lVar14 = lVar14 + 1;
            uVar18 = uVar18 * 2;
          } while (lVar14 != 3);
          return;
        }
        uVar18 = -iVar16 + 0x21;
        if (uVar21 != 0) {
          FNetBitStreamWriter::WriteBits(this,(uint)uVar20,0x20);
          FNetBitStreamWriter::WriteBits(this,(uint)(uVar20 >> 0x20),uVar18);
        }
        if (uVar12 != 0) {
          FNetBitStreamWriter::WriteBits(this,(uint)uVar19,0x20);
          FNetBitStreamWriter::WriteBits(this,(uint)(uVar19 >> 0x20),uVar18);
        }
        if (uVar9 == 0) {
          return;
        }
        FNetBitStreamWriter::WriteBits(this,(uint)uVar22,0x20);
        FNetBitStreamWriter::WriteBits(this,(uint)(uVar22 >> 0x20),uVar18);
        return;
      }
    }
  }
  FNetBitStreamWriter::WriteBits(this,0,1);
  Serialize(param_1,param_2,(FNetSerializeArgs *)param_3);
  return;
}

// Validate @ 14433f670

bool __cdecl
UE::Net::Private::FPackedVectorNetSerializerBase::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  double *pdVar1;
  int iVar2;
  
  pdVar1 = (double *)param_2->Source;
  iVar2 = _finite(*pdVar1);
  if (iVar2 != 0) {
    iVar2 = _finite(pdVar1[1]);
    if (iVar2 != 0) {
      iVar2 = _finite(pdVar1[2]);
      if (iVar2 != 0) {
        return true;
      }
    }
  }
  return false;
}

// operator() @ 1504bcbe0

bool __thiscall
`UE::Net::Private::FPackedVectorNetSerializerBase::Quantize'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8908948935792394841>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8908948935792394841>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

