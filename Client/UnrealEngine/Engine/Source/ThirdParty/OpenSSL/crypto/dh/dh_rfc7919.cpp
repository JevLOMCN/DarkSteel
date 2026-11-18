// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// DH_get_nid @ 14f7a27d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DH_get_nid(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = BN_get_word(*(undefined8 *)(param_1 + 0x10));
  if (lVar2 != 2) {
    return 0;
  }
  iVar1 = BN_cmp(*(undefined8 *)(param_1 + 8),&_bignum_ffdhe2048_p);
  if (iVar1 == 0) {
    uVar3 = 0x466;
  }
  else {
    iVar1 = BN_cmp(*(undefined8 *)(param_1 + 8),&_bignum_ffdhe3072_p);
    if (iVar1 == 0) {
      uVar3 = 0x467;
    }
    else {
      iVar1 = BN_cmp(*(undefined8 *)(param_1 + 8),&_bignum_ffdhe4096_p);
      if (iVar1 == 0) {
        uVar3 = 0x468;
      }
      else {
        iVar1 = BN_cmp(*(undefined8 *)(param_1 + 8),&_bignum_ffdhe6144_p);
        if (iVar1 == 0) {
          uVar3 = 0x469;
        }
        else {
          iVar1 = BN_cmp(*(undefined8 *)(param_1 + 8),&_bignum_ffdhe8192_p);
          if (iVar1 != 0) {
            return 0;
          }
          uVar3 = 0x46a;
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = BN_dup(*(undefined8 *)(param_1 + 8));
    if (((lVar2 == 0) || (iVar1 = BN_rshift1(lVar2,lVar2), iVar1 == 0)) ||
       (iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x40),lVar2), iVar1 == 0)) {
      uVar3 = 0;
    }
    BN_free(lVar2);
    return uVar3;
  }
  return uVar3;
}

// DH_new_by_nid @ 14f7a28f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DH_new_by_nid(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0x466) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0xe1;
      *(undefined ***)(lVar1 + 8) = &_bignum_ffdhe2048_p;
      *(undefined ***)(lVar1 + 0x10) = &_bignum_const_2;
      return lVar1;
    }
  }
  else if (param_1 == 0x467) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x113;
      *(undefined ***)(lVar1 + 8) = &_bignum_ffdhe3072_p;
      *(undefined ***)(lVar1 + 0x10) = &_bignum_const_2;
      return lVar1;
    }
  }
  else if (param_1 == 0x468) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x145;
      *(undefined ***)(lVar1 + 8) = &_bignum_ffdhe4096_p;
      *(undefined ***)(lVar1 + 0x10) = &_bignum_const_2;
      return lVar1;
    }
  }
  else if (param_1 == 0x469) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x177;
      *(undefined ***)(lVar1 + 8) = &_bignum_ffdhe6144_p;
      *(undefined ***)(lVar1 + 0x10) = &_bignum_const_2;
      return lVar1;
    }
  }
  else if (param_1 == 0x46a) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 400;
      *(undefined ***)(lVar1 + 8) = &_bignum_ffdhe8192_p;
      *(undefined ***)(lVar1 + 0x10) = &_bignum_const_2;
      return lVar1;
    }
  }
  else {
    ERR_put_error(5,0x68,0x72,"crypto\\dh\\dh_rfc7919.c",0x2a);
  }
  return 0;
}

// FUN_14f7a2a40 @ 14f7a2a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7a2a40(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = DH_new();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x18) = param_2;
  *(undefined ***)(lVar1 + 0x10) = &_bignum_const_2;
  *(undefined8 *)(lVar1 + 8) = param_1;
  return;
}

