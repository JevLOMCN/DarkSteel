// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// BN_add_word @ 14f731c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_add_word(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = BN_is_zero();
  if (iVar2 != 0) {
    uVar4 = BN_set_word(param_1,param_2);
    return uVar4;
  }
  uVar8 = 0;
  uVar4 = uVar8;
  if ((int)param_1[2] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    uVar3 = BN_sub_word(param_1,param_2);
    iVar2 = BN_is_zero(param_1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
    }
    return (ulonglong)uVar3;
  }
  do {
    uVar3 = (uint)uVar8;
    uVar5 = param_2;
    if ((int)param_1[1] <= (int)uVar3) break;
    uVar7 = *(longlong *)(*param_1 + uVar4) + param_2;
    *(ulonglong *)(*param_1 + uVar4) = uVar7;
    uVar5 = (ulonglong)(uVar7 < param_2);
    uVar3 = uVar3 + 1;
    uVar8 = (ulonglong)uVar3;
    bVar1 = uVar7 < param_2;
    param_2 = uVar5;
    uVar4 = uVar4 + 8;
  } while (bVar1);
  if ((uVar5 != 0) && (uVar3 == *(uint *)(param_1 + 1))) {
    lVar6 = bn_wexpand(param_1,*(uint *)(param_1 + 1) + 1);
    if (lVar6 == 0) {
      return 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    *(ulonglong *)(*param_1 + (longlong)(int)uVar3 * 8) = uVar5;
  }
  return 1;
}

// BN_div_word @ 14f731d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_div_word(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (param_2 == 0) {
    return 0xffffffffffffffff;
  }
  if ((int)param_1[1] != 0) {
    cVar2 = BN_num_bits_word(param_2);
    param_2 = param_2 << (0x40U - cVar2 & 0x3f);
    iVar3 = BN_lshift(param_1,param_1);
    if (iVar3 != 0) {
      iVar3 = (int)param_1[1] + -1;
      lVar6 = (longlong)iVar3;
      if (-1 < iVar3) {
        do {
          lVar1 = *(longlong *)(*param_1 + lVar6 * 8);
          lVar4 = bn_div_words(uVar5,lVar1,param_2);
          uVar5 = lVar1 - lVar4 * param_2;
          *(longlong *)(*param_1 + lVar6 * 8) = lVar4;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      if ((0 < (int)param_1[1]) &&
         (iVar3 = (int)param_1[1] + -1, *(longlong *)(*param_1 + (longlong)iVar3 * 8) == 0)) {
        *(int *)(param_1 + 1) = iVar3;
      }
      if ((int)param_1[1] == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return uVar5 >> (0x40U - cVar2 & 0x3f);
    }
    return 0xffffffffffffffff;
  }
  return 0;
}

// BN_mod_word @ 14f731e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_mod_word(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong *puVar5;
  
  uVar3 = 0;
  if (param_2 == 0) {
    return 0xffffffffffffffff;
  }
  if (0x100000000 < param_2) {
    lVar2 = BN_dup();
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
    uVar3 = BN_div_word(lVar2,param_2);
    BN_free(lVar2);
    return uVar3;
  }
  iVar4 = (int)param_1[1] + -1;
  if (-1 < iVar4) {
    puVar5 = (ulonglong *)(*param_1 + (longlong)iVar4 * 8);
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + -1;
      uVar3 = ((uVar1 >> 0x20 | uVar3 << 0x20) % param_2 << 0x20 | uVar1 & 0xffffffff) % param_2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return uVar3;
}

// BN_mul_word @ 14f731f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_mul_word(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((int)param_1[1] != 0) {
    if (param_2 == 0) {
      BN_set_word();
      return 1;
    }
    lVar1 = bn_mul_words(*param_1,*param_1,(int)param_1[1],param_2);
    if (lVar1 != 0) {
      lVar2 = bn_wexpand(param_1,(int)param_1[1] + 1);
      if (lVar2 == 0) {
        return 0;
      }
      *(longlong *)(*param_1 + (longlong)(int)param_1[1] * 8) = lVar1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
  }
  return 1;
}

// BN_sub_word @ 14f731ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_sub_word(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    iVar2 = BN_is_zero();
    if (iVar2 != 0) {
      uVar3 = BN_set_word(param_1,param_2);
      if (uVar3 != 0) {
        BN_set_negative(param_1,1);
      }
      return (ulonglong)uVar3;
    }
    if ((int)param_1[2] != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar5 = BN_add_word(param_1,param_2);
      *(undefined4 *)(param_1 + 2) = 1;
      return uVar5;
    }
    if ((int)param_1[1] == 1) {
      uVar5 = *(ulonglong *)*param_1;
      if (uVar5 < param_2) {
        *(ulonglong *)*param_1 = param_2 - uVar5;
        *(undefined4 *)(param_1 + 2) = 1;
        return 1;
      }
    }
    uVar5 = 0;
    uVar3 = 0;
    uVar6 = uVar5;
    uVar7 = uVar5;
    if (*(ulonglong *)*param_1 < param_2) {
      do {
        uVar5 = uVar5 + 1;
        uVar3 = (int)uVar6 + 1;
        *(longlong *)(*param_1 + uVar7) = *(longlong *)(*param_1 + uVar7) - param_2;
        param_2 = 1;
        uVar6 = (ulonglong)uVar3;
        uVar7 = uVar5 * 8;
      } while (*(longlong *)(uVar5 * 8 + *param_1) == 0);
    }
    plVar1 = (longlong *)((longlong)(int)uVar3 * 8 + *param_1);
    *plVar1 = *plVar1 - param_2;
    if ((*(longlong *)((longlong)(int)uVar3 * 8 + *param_1) == 0) &&
       (uVar4 = (int)param_1[1] - 1, uVar3 == uVar4)) {
      *(uint *)(param_1 + 1) = uVar4;
    }
  }
  return 1;
}

