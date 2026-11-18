// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// FUN_14f7ce010 @ 14f7ce010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7ce010(undefined8 param_1,longlong param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 local_res10;
  undefined8 uVar8;
  
  uVar8 = 0x14f7ce022;
  puVar4 = (undefined4 *)BIO_get_data();
  lVar5 = BIO_next(param_1);
  if ((((param_2 == 0) || (param_3 < 0)) || (puVar4 == (undefined4 *)0x0)) || (lVar5 == 0)) {
    return 0;
  }
  uVar7 = 0;
switchD_14f7ce093_default:
  switch(*puVar4) {
  case 0:
    iVar3 = FUN_14f7cea10(param_1,puVar4,*(undefined8 *)(puVar4 + 10),1,2);
    if (iVar3 != 0) goto switchD_14f7ce093_default;
    break;
  case 1:
    uVar2 = FUN_14f7ce810(param_1,puVar4,*(undefined8 *)(puVar4 + 0xc),2);
    uVar6 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) goto LAB_14f7ce0ef;
    goto switchD_14f7ce093_default;
  case 2:
    iVar3 = ASN1_object_size(0,param_3,puVar4[9]);
    puVar4[6] = iVar3 - param_3;
    if (iVar3 - param_3 <= (int)puVar4[4]) {
      local_res10 = *(undefined8 *)(puVar4 + 2);
      ASN1_put_object(&local_res10,0,param_3,puVar4[9],puVar4[8],uVar8);
      puVar4[7] = param_3;
      *puVar4 = 3;
      goto switchD_14f7ce093_default;
    }
    break;
  case 3:
    uVar2 = BIO_write(lVar5,(longlong)(int)puVar4[5] + *(longlong *)(puVar4 + 2),puVar4[6]);
    uVar6 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) goto LAB_14f7ce0ef;
    piVar1 = puVar4 + 6;
    *piVar1 = *piVar1 - uVar2;
    if (*piVar1 == 0) {
      puVar4[5] = 0;
      *puVar4 = 4;
    }
    else {
      puVar4[5] = puVar4[5] + uVar2;
    }
    goto switchD_14f7ce093_default;
  case 4:
    iVar3 = param_3;
    if ((int)puVar4[7] < param_3) {
      iVar3 = puVar4[7];
    }
    iVar3 = BIO_write(lVar5,param_2,iVar3);
    uVar6 = (ulonglong)iVar3;
    if (iVar3 < 1) goto LAB_14f7ce0ef;
    puVar4[7] = puVar4[7] - iVar3;
    uVar7 = uVar7 + iVar3;
    param_2 = param_2 + uVar6;
    param_3 = param_3 - iVar3;
    if (puVar4[7] == 0) {
      *puVar4 = 2;
    }
    if (param_3 == 0) {
LAB_14f7ce0ef:
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      if ((int)uVar7 < 1) {
        return uVar6 & 0xffffffff;
      }
      return (ulonglong)uVar7;
    }
    goto switchD_14f7ce093_default;
  case 5:
  case 6:
    goto switchD_14f7ce093_caseD_5;
  default:
    goto switchD_14f7ce093_default;
  }
  return 0xffffffff;
switchD_14f7ce093_caseD_5:
  BIO_clear_flags(param_1,0xf);
  return 0;
}

// FUN_14f7ce220 @ 14f7ce220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7ce220(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_read(lVar1,param_2,param_3);
  return;
}

// FUN_14f7ce270 @ 14f7ce270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7ce270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_14f7ce010();
  return;
}

// FUN_14f7ce2a0 @ 14f7ce2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7ce2a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_gets(lVar1,param_2,param_3);
  return;
}

// FUN_14f7ce2f0 @ 14f7ce2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7ce2f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7ce309;
  piVar2 = (int *)BIO_get_data();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  lVar3 = BIO_next(param_1);
  switch(param_2) {
  case 0xb:
    if ((lVar3 != 0) &&
       ((*piVar2 != 2 ||
        (iVar1 = FUN_14f7cea10(param_1,piVar2,*(undefined8 *)(piVar2 + 0xe),5,6,uVar4), iVar1 != 0))
       )) {
      if ((*piVar2 == 5) &&
         (uVar4 = FUN_14f7ce810(param_1,piVar2,*(undefined8 *)(piVar2 + 0x10),6), (int)uVar4 < 1)) {
        return uVar4;
      }
      if (*piVar2 == 6) goto LAB_14f7ce44a;
      BIO_clear_flags(param_1,0xf);
    }
    goto LAB_14f7ce441;
  default:
    if (lVar3 != 0) {
LAB_14f7ce44a:
      uVar4 = BIO_ctrl(lVar3,param_2,param_3,param_4);
      return uVar4;
    }
LAB_14f7ce441:
    uVar4 = 0;
    break;
  case 0x95:
    *(undefined8 *)(piVar2 + 10) = *param_4;
    *(undefined8 *)(piVar2 + 0xc) = param_4[1];
    uVar4 = 1;
    break;
  case 0x96:
    *param_4 = *(undefined8 *)(piVar2 + 10);
    param_4[1] = *(undefined8 *)(piVar2 + 0xc);
    uVar4 = 1;
    break;
  case 0x97:
    *(undefined8 *)(piVar2 + 0xe) = *param_4;
    *(undefined8 *)(piVar2 + 0x10) = param_4[1];
    uVar4 = 1;
    break;
  case 0x98:
    *param_4 = *(undefined8 *)(piVar2 + 0xe);
    param_4[1] = *(undefined8 *)(piVar2 + 0x10);
    uVar4 = 1;
    break;
  case 0x99:
    *(undefined8 **)(piVar2 + 0x16) = param_4;
    uVar4 = 1;
    break;
  case 0x9a:
    *param_4 = *(undefined8 *)(piVar2 + 0x16);
    uVar4 = 1;
  }
  return uVar4;
}

// FUN_14f7ce530 @ 14f7ce530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7ce530(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_zalloc(0x60,"crypto\\asn1\\bio_asn1.c",0x67);
  if (lVar2 != 0) {
    iVar1 = FUN_14f7ce950(lVar2,0x14);
    if (iVar1 != 0) {
      BIO_set_data(param_1,lVar2);
      BIO_set_init(param_1,1);
      return 1;
    }
    CRYPTO_free(lVar2,"crypto\\asn1\\bio_asn1.c",0x6c);
  }
  return 0;
}

// FUN_14f7ce5c0 @ 14f7ce5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7ce5c0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = BIO_get_data();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(code **)(lVar1 + 0x30) != (code *)0x0) {
    (**(code **)(lVar1 + 0x30))(param_1,lVar1 + 0x48,lVar1 + 0x50,lVar1 + 0x58);
  }
  if (*(code **)(lVar1 + 0x40) != (code *)0x0) {
    (**(code **)(lVar1 + 0x40))(param_1,lVar1 + 0x48,lVar1 + 0x50,lVar1 + 0x58);
  }
  CRYPTO_free(*(undefined8 *)(lVar1 + 8),"crypto\\asn1\\bio_asn1.c",0x92);
  CRYPTO_free(lVar1,"crypto\\asn1\\bio_asn1.c",0x93);
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}

// FUN_14f7ce690 @ 14f7ce690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7ce690(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_callback_ctrl(lVar1,param_2,param_3);
  return;
}

// BIO_asn1_get_prefix @ 14f7ce6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_asn1_get_prefix(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f7ce6f0;
  iVar1 = BIO_ctrl(param_1,0x96,0,&local_18);
  if (0 < iVar1) {
    *param_2 = local_18;
    *param_3 = local_10;
  }
  return;
}

// BIO_asn1_get_suffix @ 14f7ce730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_asn1_get_suffix(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f7ce740;
  iVar1 = BIO_ctrl(param_1,0x98,0,&local_18);
  if (0 < iVar1) {
    *param_2 = local_18;
    *param_3 = local_10;
  }
  return;
}

// BIO_asn1_set_prefix @ 14f7ce780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_asn1_set_prefix(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7ce78a;
  local_18 = param_2;
  local_10 = param_3;
  BIO_ctrl(param_1,0x95,0,&local_18);
  return;
}

// BIO_asn1_set_suffix @ 14f7ce7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_asn1_set_suffix(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7ce7ca;
  local_18 = param_2;
  local_10 = param_3;
  BIO_ctrl(param_1,0x97,0,&local_18);
  return;
}

// BIO_f_asn1 @ 14f7ce800

undefined * BIO_f_asn1(void)

{
  return &DAT_1534f1df0;
}

// FUN_14f7ce810 @ 14f7ce810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7ce810(undefined8 param_1,undefined4 *param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_2[0x14];
  if (iVar3 < 1) {
    return 1;
  }
  iVar1 = param_2[0x15];
  lVar2 = *(longlong *)(param_2 + 0x12);
  uVar4 = BIO_next();
  iVar3 = BIO_write(uVar4,iVar1 + lVar2,iVar3);
  while( true ) {
    if (iVar3 < 1) {
      return iVar3;
    }
    param_2[0x14] = param_2[0x14] - iVar3;
    iVar1 = param_2[0x14];
    if (iVar1 < 1) break;
    param_2[0x15] = param_2[0x15] + iVar3;
    iVar3 = param_2[0x15];
    lVar2 = *(longlong *)(param_2 + 0x12);
    uVar4 = BIO_next(param_1);
    iVar3 = BIO_write(uVar4,iVar3 + lVar2,iVar1);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_1,param_2 + 0x12,param_2 + 0x14,param_2 + 0x16);
  }
  *param_2 = param_4;
  param_2[0x15] = 0;
  return iVar3;
}

// FUN_14f7ce900 @ 14f7ce900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7ce900(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f7ce910;
  iVar1 = BIO_ctrl(param_1,param_2,0,&local_18);
  if (0 < iVar1) {
    *param_3 = local_18;
    *param_4 = local_10;
  }
  return;
}

// FUN_14f7ce950 @ 14f7ce950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7ce950(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7ce960;
  lVar1 = CRYPTO_malloc((longlong)param_2,"crypto\\asn1\\bio_asn1.c",0x77);
  *(longlong *)(param_1 + 2) = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x71,0x41,"crypto\\asn1\\bio_asn1.c",0x78,uVar2);
    return 0;
  }
  param_1[4] = param_2;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[9] = 4;
  return 1;
}

// FUN_14f7ce9e0 @ 14f7ce9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7ce9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7ce9ea;
  local_18 = param_3;
  local_10 = param_4;
  BIO_ctrl(param_1,param_2,0,&local_18);
  return;
}

// FUN_14f7cea10 @ 14f7cea10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7cea10(undefined8 param_1,undefined4 *param_2,code *param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  
  if (param_3 != (code *)0x0) {
    iVar1 = (*param_3)(param_1,param_2 + 0x12,param_2 + 0x14,param_2 + 0x16);
    if (iVar1 == 0) {
      BIO_clear_flags(param_1,0xf);
      return 0;
    }
  }
  if (0 < (int)param_2[0x14]) {
    param_5 = param_4;
  }
  *param_2 = param_5;
  return 1;
}

