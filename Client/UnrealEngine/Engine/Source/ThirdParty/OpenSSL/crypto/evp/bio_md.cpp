// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f7c0110 @ 14f7c0110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7c0110(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = 0;
  if ((param_2 != 0) && (0 < param_3)) {
    lVar3 = BIO_get_data();
    lVar4 = BIO_next(param_1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      iVar1 = BIO_write(lVar4,param_2,param_3);
    }
    iVar2 = BIO_get_init(param_1);
    if (((iVar2 == 0) || (iVar1 < 1)) || (iVar2 = EVP_DigestUpdate(lVar3,param_2,iVar1), iVar2 != 0)
       ) {
      if (lVar4 != 0) {
        BIO_clear_flags(param_1,0xf);
        BIO_copy_next_retry(param_1);
      }
    }
    else {
      BIO_clear_flags(param_1,0xf);
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}

// FUN_14f7c0200 @ 14f7c0200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7c0200(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = BIO_get_data();
  lVar4 = BIO_next(param_1);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = BIO_read(lVar4,param_2,param_3);
    iVar2 = BIO_get_init(param_1);
    if (((iVar2 != 0) && (0 < iVar1)) && (iVar2 = EVP_DigestUpdate(lVar3,param_2,iVar1), iVar2 < 1))
    {
      return -1;
    }
    BIO_clear_flags(param_1,0xf);
    BIO_copy_next_retry(param_1);
  }
  return iVar1;
}

// FUN_14f7c02d0 @ 14f7c02d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f7c02d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_res18 [4];
  
  plVar2 = (longlong *)BIO_get_data();
  if (param_3 < *(int *)(*plVar2 + 8)) {
    return 0;
  }
  iVar1 = EVP_DigestFinal_ex(plVar2,param_2,local_res18);
  if (iVar1 < 1) {
    local_res18[0] = 0xffffffff;
  }
  return local_res18[0];
}

// FUN_14f7c0340 @ 14f7c0340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7c0340(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4
                       )

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar1 = 1;
  puVar3 = (undefined8 *)BIO_get_data();
  uVar4 = BIO_next(param_1);
  switch(param_2) {
  case 1:
    iVar2 = BIO_get_init(param_1);
    if (iVar2 == 0) goto LAB_14f7c0416;
    uVar1 = EVP_DigestInit_ex(puVar3,*puVar3,0);
    if ((int)uVar1 < 1) break;
  default:
    uVar1 = BIO_ctrl(uVar4,param_2,param_3,param_4);
    break;
  case 0xc:
    uVar4 = BIO_get_data(param_4);
    uVar5 = EVP_MD_CTX_copy_ex(uVar4,puVar3);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    goto LAB_14f7c041d;
  case 0x65:
    BIO_clear_flags(param_1,0xf);
    uVar1 = BIO_ctrl(uVar4,param_2,param_3,param_4);
    BIO_copy_next_retry(param_1);
    break;
  case 0x6f:
    uVar1 = EVP_DigestInit_ex(puVar3,param_4,0);
    if (0 < (int)uVar1) {
      BIO_set_init(param_1,1);
    }
    break;
  case 0x70:
    iVar2 = BIO_get_init(param_1);
    if (iVar2 != 0) {
      *param_4 = *puVar3;
      break;
    }
    goto LAB_14f7c0416;
  case 0x78:
    *param_4 = puVar3;
LAB_14f7c041d:
    BIO_set_init(param_1,1);
    break;
  case 0x94:
    iVar2 = BIO_get_init(param_1);
    if (iVar2 != 0) {
      BIO_set_data(param_1,param_4);
      uVar1 = 1;
      break;
    }
LAB_14f7c0416:
    uVar1 = 0;
  }
  return (ulonglong)uVar1;
}

// FUN_14f7c0580 @ 14f7c0580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c0580(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = EVP_MD_CTX_new();
  if (lVar1 == 0) {
    return 0;
  }
  BIO_set_init(param_1,1);
  BIO_set_data(param_1,lVar1);
  return 1;
}

// FUN_14f7c05e0 @ 14f7c05e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c05e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = BIO_get_data();
  EVP_MD_CTX_free(uVar1);
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}

// FUN_14f7c0640 @ 14f7c0640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c0640(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_callback_ctrl(lVar1,param_2,param_3);
  return;
}

// BIO_f_md @ 14f7c0690

undefined * BIO_f_md(void)

{
  return &DAT_1534eab30;
}

