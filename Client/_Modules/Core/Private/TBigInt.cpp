// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// DivideWithRemainder @ 1416348a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBigInt<256,1>::DivideWithRemainder
          (TBigInt<256,1> *this,TBigInt<256,1> *param_1,TBigInt<256,1> *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  TBigInt<256,1> *local_f0;
  TBigInt<256,1> *local_e8;
  TBigInt<256,1> local_e0;
  TBigInt<256,1> local_c0;
  TBigInt<256,1> local_a0;
  TBigInt<256,1> local_80;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_128;
  iVar10 = ((uint)((longlong)*(undefined8 *)(param_1->Bits + 6) >> 0x3f) & 0xfffffffe) + 1;
  iVar15 = ((uint)((longlong)*(undefined8 *)(this->Bits + 6) >> 0x3f) & 0xfffffffe) + 1;
  local_c0.Bits._0_8_ = *(undefined8 *)param_1->Bits;
  local_c0.Bits._8_8_ = *(undefined8 *)(param_1->Bits + 2);
  local_c0.Bits._16_8_ = *(undefined8 *)(param_1->Bits + 4);
  local_c0.Bits._24_8_ = *(longlong *)(param_1->Bits + 6);
  local_a0.Bits._0_8_ = *(undefined8 *)this->Bits;
  local_a0.Bits._8_8_ = *(undefined8 *)(this->Bits + 2);
  local_a0.Bits._16_8_ = *(undefined8 *)(this->Bits + 4);
  local_a0.Bits[6] = (uint)*(undefined8 *)(this->Bits + 6);
  local_a0.Bits[7] = (uint)((ulonglong)*(undefined8 *)(this->Bits + 6) >> 0x20);
  local_f8 = iVar10;
  local_f4 = iVar15;
  local_f0 = param_2;
  local_e8 = this;
  if (iVar10 < 0) {
    Negate(&local_c0);
  }
  if (iVar15 < 0) {
    Negate(&local_a0);
  }
  uVar14 = local_a0.Bits[7];
  uVar6 = local_c0.Bits[7];
  if ((longlong)local_c0.Bits._24_8_ < 0) {
    if (((int)local_a0.Bits[7] < 0) && (bVar4 = IsGreater(&local_c0,&local_a0), bVar4)) {
LAB_141634a17:
      uVar1 = *(undefined8 *)(this->Bits + 2);
      *(undefined8 *)param_2->Bits = *(undefined8 *)this->Bits;
      *(undefined8 *)(param_2->Bits + 2) = uVar1;
      uVar1 = *(undefined8 *)(this->Bits + 6);
      *(undefined8 *)(param_2->Bits + 4) = *(undefined8 *)(this->Bits + 4);
      *(undefined8 *)(param_2->Bits + 6) = uVar1;
      this->Bits[0] = 0;
      this->Bits[1] = 0;
      this->Bits[2] = 0;
      this->Bits[3] = 0;
      this->Bits[4] = 0;
      this->Bits[5] = 0;
      this->Bits[6] = 0;
      this->Bits[7] = 0;
      return;
    }
  }
  else {
    iVar8 = 7;
    lVar7 = 0;
    do {
      if (*(int *)((longlong)local_a0.Bits + lVar7 + 0x1c) !=
          *(int *)((longlong)local_c0.Bits + lVar7 + 0x1c)) break;
      iVar8 = iVar8 + -1;
      lVar7 = lVar7 + -4;
    } while (-0x1d < lVar7);
    if ((-1 < iVar8) && (local_a0.Bits[iVar8] < local_c0.Bits[iVar8])) goto LAB_141634a17;
  }
  lVar7 = 0;
  while (*(int *)((longlong)local_c0.Bits + lVar7) == *(int *)((longlong)local_a0.Bits + lVar7)) {
    lVar7 = lVar7 + 4;
    if (0x1f < lVar7) {
      param_2->Bits[0] = 0;
      param_2->Bits[1] = 0;
      param_2->Bits[2] = 0;
      param_2->Bits[3] = 0;
      param_2->Bits[4] = 0;
      param_2->Bits[5] = 0;
      param_2->Bits[6] = 0;
      uVar1 = One.Bits._8_8_;
      param_2->Bits[7] = 0;
      *(undefined8 *)this->Bits = One.Bits._0_8_;
      *(undefined8 *)(this->Bits + 2) = uVar1;
      uVar1 = One.Bits._24_8_;
      *(undefined8 *)(this->Bits + 4) = One.Bits._16_8_;
      *(undefined8 *)(this->Bits + 6) = uVar1;
      if (-1 < iVar10 * iVar15) {
        return;
      }
      Negate(this);
      return;
    }
  }
  iVar10 = 7;
  lVar7 = 7;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  local_80.Bits[0] = 0;
  local_80.Bits[1] = 0;
  local_80.Bits[2] = 0;
  local_80.Bits[3] = 0;
  local_e0.Bits[0] = One.Bits[0];
  local_e0.Bits[1] = One.Bits[1];
  local_e0.Bits[2] = One.Bits[2];
  local_e0.Bits[3] = One.Bits[3];
  local_e0.Bits[4] = One.Bits[4];
  local_e0.Bits[5] = One.Bits[5];
  local_e0.Bits[6] = One.Bits[6];
  local_e0.Bits[7] = One.Bits[7];
  local_80.Bits[4] = 0;
  local_80.Bits[5] = 0;
  local_80.Bits[6] = 0;
  local_80.Bits[7] = 0;
  do {
    uVar11 = 0x1f;
    iVar15 = -1;
    if (local_a0.Bits[lVar7] != 0) {
      uVar13 = 0x1f;
      goto LAB_141634aa8;
    }
    iVar10 = iVar10 + -1;
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
  iVar10 = -1;
  goto LAB_141634ab7;
  while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {
LAB_141634aa8:
    if ((local_a0.Bits[iVar10] >> (uVar13 & 0x1f) & 1) != 0) break;
  }
  iVar10 = iVar10 * 0x20 + uVar13;
LAB_141634ab7:
  iVar8 = 7;
  lVar7 = 7;
  do {
    if (local_c0.Bits[lVar7] != 0) {
      uVar13 = 0x1f;
      goto LAB_141634ae0;
    }
    iVar8 = iVar8 + -1;
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
LAB_141634af5:
  iVar10 = iVar10 - iVar15;
  if (0 < iVar10) {
    ShiftLeftInternal(&local_c0,iVar10);
    uVar6 = local_c0.Bits[7];
    uVar14 = local_a0.Bits[7];
  }
  uVar13 = local_c0.Bits[5];
  uVar9 = local_c0.Bits[6];
  local_104 = local_c0.Bits[4];
  local_100 = local_c0.Bits[3];
  local_fc = local_c0.Bits[2];
  uVar16 = local_c0.Bits[1];
  local_108 = local_c0.Bits[0];
  do {
    if ((int)uVar6 < 0) {
      if (((int)uVar14 < 0) && (bVar4 = IsGreaterOrEqual(&local_c0,&local_a0), !bVar4))
      goto LAB_141634b85;
    }
    else {
      lVar7 = 7;
      do {
        if (local_a0.Bits[lVar7] != local_c0.Bits[lVar7]) {
          if (local_a0.Bits[lVar7] <= local_c0.Bits[lVar7]) goto LAB_141634b85;
          break;
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    uVar6 = uVar9 >> 0x1f | uVar6 * 2;
    uVar9 = uVar13 >> 0x1f | uVar9 * 2;
    local_c0.Bits[7] = uVar6;
    local_c0.Bits[6] = uVar9;
    uVar13 = local_104 >> 0x1f | uVar13 * 2;
    local_104 = local_100 >> 0x1f | local_104 * 2;
    local_c0.Bits[5] = uVar13;
    local_c0.Bits[4] = local_104;
    local_100 = local_fc >> 0x1f | local_100 * 2;
    local_fc = uVar16 >> 0x1f | local_fc * 2;
    uVar5 = local_108 >> 0x1f;
    local_108 = local_108 * 2;
    uVar16 = uVar16 * 2 | uVar5;
    local_c0.Bits[3] = local_100;
    local_c0.Bits[2] = local_fc;
    iVar10 = iVar10 + 1;
    local_c0.Bits[1] = uVar16;
    local_c0.Bits[0] = local_108;
  } while( true );
  while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {
LAB_141634ae0:
    if ((local_c0.Bits[iVar8] >> (uVar13 & 0x1f) & 1) != 0) break;
  }
  iVar15 = iVar8 * 0x20 + uVar13;
  goto LAB_141634af5;
LAB_141634b85:
  local_c0.Bits[0] = uVar16 << 0x1f | local_108 >> 1;
  local_c0.Bits[1] = local_fc << 0x1f | uVar16 >> 1;
  local_c0.Bits[2] = local_100 << 0x1f | local_fc >> 1;
  local_c0.Bits[3] = local_104 << 0x1f | local_100 >> 1;
  local_c0.Bits[4] = uVar13 << 0x1f | local_104 >> 1;
  local_c0.Bits[5] = uVar9 << 0x1f | uVar13 >> 1;
  local_c0.Bits[6] = uVar9 >> 1 | uVar6 << 0x1f;
  local_c0.Bits[7] = uVar6 >> 1;
  local_108 = uVar13;
  if (iVar10 + -1 != 0) {
    ShiftLeftInternal(&local_e0,iVar10 + -1);
    uVar14 = local_a0.Bits[7];
  }
  iVar10 = 7;
  iVar15 = 0;
  lVar7 = 7;
  do {
    uVar2 = local_80.Bits._0_8_;
    uVar3 = local_80.Bits._8_8_;
    if (local_e0.Bits[lVar7] != 0) {
      goto LAB_141634d14;
    }
    iVar10 = iVar10 + -1;
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
  goto LAB_141634e59;
  while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
LAB_141634d14:
    if ((local_e0.Bits[iVar10] >> (uVar11 & 0x1f) & 1) != 0) break;
  }
  uVar6 = uVar11 + 1 + iVar10 * 0x20;
  if (0 < (int)uVar6) {
    uVar12 = (ulonglong)uVar6;
    do {
      if ((int)uVar14 < 0) {
        if (-1 < (int)local_c0.Bits[7]) goto LAB_141634d6c;
      }
      else {
        lVar7 = 7;
        do {
          if (local_c0.Bits[lVar7] != local_a0.Bits[lVar7]) {
            if (local_a0.Bits[lVar7] <= local_c0.Bits[lVar7]) goto LAB_141634dbf;
            break;
          }
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
LAB_141634d6c:
        if (iVar15 != 0) {
          ShiftRightInternal(&local_e0,iVar15);
          iVar15 = 0;
        }
        Subtract(&local_a0,&local_c0);
        uVar19 = uVar19 | local_e0.Bits._0_8_;
        uVar20 = uVar20 | local_e0.Bits._8_8_;
        uVar17 = uVar17 | local_e0.Bits._16_8_;
        uVar18 = uVar18 | local_e0.Bits._24_8_;
        local_80.Bits[4] = (int)uVar17;
        local_80.Bits[5] = (int)(uVar17 >> 0x20);
        local_80.Bits[6] = (int)uVar18;
        local_80.Bits[7] = (int)(uVar18 >> 0x20);
        uVar14 = local_a0.Bits[7];
      }
LAB_141634dbf:
      iVar15 = iVar15 + 1;
      local_c0.Bits[0] = local_c0.Bits[1] << 0x1f | local_c0.Bits[0] >> 1;
      local_c0.Bits[1] = local_c0.Bits[2] << 0x1f | local_c0.Bits[1] >> 1;
      local_c0.Bits[2] = local_c0.Bits[3] << 0x1f | local_c0.Bits[2] >> 1;
      local_c0.Bits[3] = local_c0.Bits[4] << 0x1f | local_c0.Bits[3] >> 1;
      local_c0.Bits[4] = local_c0.Bits[5] << 0x1f | local_c0.Bits[4] >> 1;
      local_c0.Bits[5] = local_c0.Bits[6] << 0x1f | local_c0.Bits[5] >> 1;
      local_c0.Bits[6] = local_c0.Bits[6] >> 1 | local_c0.Bits[7] << 0x1f;
      local_c0.Bits[7] = local_c0.Bits[7] >> 1;
      uVar12 = uVar12 - 1;
      uVar2 = uVar19;
      uVar3 = uVar20;
    } while (uVar12 != 0);
  }
LAB_141634e59:
  local_80.Bits._8_8_ = uVar3;
  local_80.Bits._0_8_ = uVar2;
  if (local_f8 * local_f4 < 0) {
    Negate(&local_80);
    uVar19 = local_80.Bits._0_8_;
    uVar20 = local_80.Bits._8_8_;
    uVar17 = local_80.Bits._16_8_;
    uVar18 = local_80.Bits._24_8_;
  }
  *(undefined8 *)local_f0->Bits = local_a0.Bits._0_8_;
  *(undefined8 *)(local_f0->Bits + 2) = local_a0.Bits._8_8_;
  *(undefined8 *)(local_f0->Bits + 4) = local_a0.Bits._16_8_;
  *(ulonglong *)(local_f0->Bits + 6) = CONCAT44(local_a0.Bits[7],local_a0.Bits[6]);
  *(ulonglong *)local_e8->Bits = uVar19;
  *(ulonglong *)(local_e8->Bits + 2) = uVar20;
  *(ulonglong *)(local_e8->Bits + 4) = uVar17;
  *(ulonglong *)(local_e8->Bits + 6) = uVar18;
  return;
}

// IsGreater @ 141649e90

bool __thiscall TBigInt<256,1>::IsGreater(TBigInt<256,1> *this,TBigInt<256,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  
  while (puVar3 = this->Bits + 7, (int)this->Bits[7] < 0) {
    if (-1 < (int)param_1->Bits[7]) {
      return false;
    }
  }
  iVar2 = 7;
  lVar1 = 7;
  do {
    if (*(uint *)((longlong)puVar3 + ((longlong)param_1 - (longlong)this)) != *puVar3) break;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -1;
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  if ((-1 < iVar2) && (param_1->Bits[iVar2] < this->Bits[iVar2])) {
    return true;
  }
  return false;
}

// IsGreaterOrEqual @ 141649f00

bool __thiscall TBigInt<256,1>::IsGreaterOrEqual(TBigInt<256,1> *this,TBigInt<256,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = this->Bits + 7;
  if ((int)this->Bits[7] < 0) {
    return -1 < (int)param_1->Bits[7];
  }
  iVar2 = 7;
  lVar1 = 7;
  do {
    if (*(uint *)((longlong)puVar3 + ((longlong)param_1 - (longlong)this)) != *puVar3) break;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -1;
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  if ((-1 < iVar2) && (this->Bits[iVar2] <= param_1->Bits[iVar2])) {
    return false;
  }
  return true;
}

// Negate @ 14164e000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TBigInt<256,1>::Negate(TBigInt<256,1> *this)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = ~this->Bits[1] & _UNK_15060db24;
  uVar4 = ~this->Bits[2] & _UNK_15060db28;
  uVar5 = ~this->Bits[3] & _UNK_15060db2c;
  this->Bits[0] = ~this->Bits[0] & ___xmm_ffffffffffffffffffffffffffffffff;
  this->Bits[1] = uVar3;
  this->Bits[2] = uVar4;
  this->Bits[3] = uVar5;
  uVar3 = ~this->Bits[5] & _UNK_15060db24;
  uVar4 = ~this->Bits[6] & _UNK_15060db28;
  uVar5 = ~this->Bits[7] & _UNK_15060db2c;
  this->Bits[4] = ~this->Bits[4] & ___xmm_ffffffffffffffffffffffffffffffff;
  this->Bits[5] = uVar3;
  this->Bits[6] = uVar4;
  this->Bits[7] = uVar5;
  uVar2 = (ulonglong)this->Bits[0] + (ulonglong)One.Bits[0];
  this->Bits[0] = (uint)uVar2;
  uVar2 = (ulonglong)this->Bits[1] + (uVar2 >> 0x20) + (ulonglong)One.Bits[1];
  this->Bits[1] = (uint)uVar2;
  uVar2 = (ulonglong)One.Bits[2] + (uVar2 >> 0x20) + (ulonglong)this->Bits[2];
  this->Bits[2] = (uint)uVar2;
  uVar2 = (ulonglong)this->Bits[3] + (uVar2 >> 0x20) + (ulonglong)One.Bits[3];
  this->Bits[3] = (uint)uVar2;
  uVar2 = (ulonglong)One.Bits[4] + (uVar2 >> 0x20) + (ulonglong)this->Bits[4];
  this->Bits[4] = (uint)uVar2;
  uVar2 = (ulonglong)this->Bits[5] + (uVar2 >> 0x20) + (ulonglong)One.Bits[5];
  this->Bits[5] = (uint)uVar2;
  lVar1 = (uVar2 >> 0x20) + (ulonglong)One.Bits[6] + (ulonglong)this->Bits[6];
  this->Bits[6] = (uint)lVar1;
  this->Bits[7] = this->Bits[7] + (int)((ulonglong)lVar1 >> 0x20) + One.Bits[7];
  return;
}

// ShiftLeftInternal @ 141660040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall TBigInt<256,1>::ShiftLeftInternal(TBigInt<256,1> *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if ((param_1 & 0x1fU) == 0) {
    lVar7 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
    if (lVar7 < 8) {
      lVar7 = 7 - lVar7;
      memcpy((void *)((longlong)&uStack_20 + lVar7 * -4 + 4),this,lVar7 * 4 + 4);
    }
  }
  else {
    iVar4 = (int)(param_1 + -1 + (param_1 + -1 >> 0x1f & 0x1fU)) >> 5;
    bVar3 = (byte)param_1;
    iVar8 = iVar4 + 1;
    uStack_20 = (ulonglong)(this->Bits[8 - iVar8] << (bVar3 & 0x1f)) << 0x20;
    lVar7 = (longlong)(7 - iVar8);
    if (-1 < 7 - iVar8) {
      lVar6 = (longlong)iVar8;
      puVar5 = (uint *)((longlong)&local_38 + (lVar6 + lVar7) * 4);
      do {
        uVar2 = *(uint *)((longlong)this + (lVar6 * -4 - (longlong)&local_38) + (longlong)puVar5);
        puVar1 = puVar5 + -1;
        puVar1[(iVar4 - lVar6) + 1] = puVar1[(iVar4 - lVar6) + 1] | uVar2 << (bVar3 & 0x1f);
        *puVar5 = *puVar5 | uVar2 >> (0x20 - bVar3 & 0x1f);
        lVar7 = lVar7 + -1;
        puVar5 = puVar1;
      } while (-1 < lVar7);
    }
  }
  *(undefined8 *)this->Bits = local_38;
  *(undefined8 *)(this->Bits + 2) = uStack_30;
  *(undefined8 *)(this->Bits + 4) = local_28;
  *(longlong *)(this->Bits + 6) = uStack_20;
  return;
}

// ShiftRightInternal @ 1416601b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall TBigInt<256,1>::ShiftRightInternal(TBigInt<256,1> *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)&local_38;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if ((param_1 & 0x1fU) == 0) {
    lVar7 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
    if (lVar7 < 8) {
      puVar6 = this->Bits + 7;
      lVar8 = 8 - lVar7;
      do {
        *(uint *)((longlong)&local_38 + (lVar7 * -4 - (longlong)this) + (longlong)puVar6) = *puVar6;
        puVar6 = puVar6 + -1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    iVar4 = (int)(param_1 + -1 + (param_1 + -1 >> 0x1f & 0x1fU)) >> 5;
    lVar7 = (longlong)iVar4;
    bVar3 = (byte)param_1;
    local_38 = (ulonglong)(this->Bits[lVar7] >> (bVar3 & 0x1f));
    lVar8 = (longlong)(iVar4 + 1);
    if (lVar8 < 8) {
      puVar6 = (uint *)((longlong)&local_38 + (lVar8 - lVar7) * 4);
      lVar9 = lVar8;
      do {
        uVar2 = *(uint *)((lVar7 * 4 - (longlong)&local_38) + (longlong)this + (longlong)puVar6);
        *puVar6 = *puVar6 | uVar2 >> (bVar3 & 0x1f);
        lVar5 = lVar9 - lVar8;
        lVar9 = lVar9 + 1;
        puVar1 = (uint *)((longlong)&local_38 + lVar5 * 4);
        *puVar1 = *puVar1 | uVar2 << (0x20 - bVar3 & 0x1f);
        puVar6 = puVar6 + 1;
      } while (lVar9 < 8);
    }
  }
  *(ulonglong *)this->Bits = local_38;
  *(undefined8 *)(this->Bits + 2) = uStack_30;
  *(undefined8 *)(this->Bits + 4) = local_28;
  *(undefined8 *)(this->Bits + 6) = uStack_20;
  return;
}

// Subtract @ 141662b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TBigInt<256,1>::Subtract(TBigInt<256,1> *this,TBigInt<256,1> *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar11 = ~param_1->Bits[7] & _UNK_15060db2c;
  uVar4 = (ulonglong)One.Bits[0] +
          (ulonglong)(~param_1->Bits[0] & ___xmm_ffffffffffffffffffffffffffffffff);
  uVar5 = (uVar4 >> 0x20) + (ulonglong)One.Bits[1] + (ulonglong)(~param_1->Bits[1] & _UNK_15060db24)
  ;
  uVar6 = (uVar5 >> 0x20) + (ulonglong)One.Bits[2] + (ulonglong)(~param_1->Bits[2] & _UNK_15060db28)
  ;
  uVar9 = (uVar6 >> 0x20) + (ulonglong)One.Bits[3] + (ulonglong)(~param_1->Bits[3] & _UNK_15060db2c)
  ;
  uVar10 = (uVar9 >> 0x20) + (ulonglong)One.Bits[4] +
           (ulonglong)(~param_1->Bits[4] & ___xmm_ffffffffffffffffffffffffffffffff);
  uVar8 = (uVar10 >> 0x20) + (ulonglong)One.Bits[5] +
          (ulonglong)(~param_1->Bits[5] & _UNK_15060db24);
  uVar7 = (uVar8 >> 0x20) + (ulonglong)One.Bits[6] + (ulonglong)(~param_1->Bits[6] & _UNK_15060db28)
  ;
  iVar3 = (int)(uVar7 >> 0x20) + One.Bits[7];
  uVar4 = (uVar4 & 0xffffffff) + (ulonglong)this->Bits[0];
  uVar1 = this->Bits[1];
  this->Bits[0] = (uint)uVar4;
  uVar4 = (uVar5 & 0xffffffff) + (uVar4 >> 0x20) + (ulonglong)uVar1;
  this->Bits[1] = (uint)uVar4;
  uVar4 = (uVar6 & 0xffffffff) + (uVar4 >> 0x20) + (ulonglong)this->Bits[2];
  this->Bits[2] = (uint)uVar4;
  uVar4 = (uVar9 & 0xffffffff) + (uVar4 >> 0x20) + (ulonglong)this->Bits[3];
  this->Bits[3] = (uint)uVar4;
  uVar4 = (uVar10 & 0xffffffff) + (uVar4 >> 0x20) + (ulonglong)this->Bits[4];
  this->Bits[4] = (uint)uVar4;
  uVar4 = (uVar8 & 0xffffffff) + (uVar4 >> 0x20) + (ulonglong)this->Bits[5];
  this->Bits[5] = (uint)uVar4;
  lVar2 = (uVar4 >> 0x20) + (uVar7 & 0xffffffff) + (ulonglong)this->Bits[6];
  this->Bits[6] = (uint)lVar2;
  this->Bits[7] = this->Bits[7] + (int)((ulonglong)lVar2 >> 0x20) + iVar3 + uVar11;
  return;
}

