// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// DH_get_1024_160 @ 14f7a2650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DH_get_1024_160(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    uVar2 = BN_dup(&_bignum_dh1024_160_p);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = BN_dup(&_bignum_dh1024_160_g);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = BN_dup(&_bignum_dh1024_160_q);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}

// DH_get_2048_224 @ 14f7a26d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DH_get_2048_224(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    uVar2 = BN_dup(&_bignum_dh2048_224_p);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = BN_dup(&_bignum_dh2048_224_g);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = BN_dup(&_bignum_dh2048_224_q);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}

// DH_get_2048_256 @ 14f7a2750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DH_get_2048_256(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    uVar2 = BN_dup(&_bignum_dh2048_256_p);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = BN_dup(&_bignum_dh2048_256_g);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = BN_dup(&_bignum_dh2048_256_q);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}

