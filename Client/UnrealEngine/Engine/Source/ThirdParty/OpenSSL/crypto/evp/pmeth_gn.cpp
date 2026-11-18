// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// EVP_PKEY_check @ 14f6f4de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_check(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1[2] == 0) {
    ERR_put_error(6,0xba,0x9a,"crypto\\evp\\pmeth_gn.c",0xb1);
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     ((lVar1 = *(longlong *)(param_1[2] + 0x10), lVar1 == 0 ||
      (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xe0), UNRECOVERED_JUMPTABLE == (code *)0x0)))) {
    ERR_put_error(6,0xba,0x96,"crypto\\evp\\pmeth_gn.c",0xbc);
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6f4e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}

// EVP_PKEY_keygen @ 14f6f4e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_keygen(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (*(longlong *)(*param_1 + 0x38) != 0)) {
    if ((int)param_1[4] == 4) {
      if (param_2 != (longlong *)0x0) {
        if (*param_2 == 0) {
          lVar2 = EVP_PKEY_new();
          *param_2 = lVar2;
          if (lVar2 == 0) {
            return -1;
          }
        }
        iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2);
        if (iVar1 < 1) {
          EVP_PKEY_free(*param_2);
          *param_2 = 0;
        }
        return iVar1;
      }
    }
    else {
      ERR_put_error(6,0x92,0x97,"crypto\\evp\\pmeth_gn.c",0x60,0x14f6f4e90);
    }
    return -1;
  }
  ERR_put_error(6,0x92,0x96,"crypto\\evp\\pmeth_gn.c",0x5c,0x14f6f4e90);
  return -2;
}

// EVP_PKEY_keygen_init @ 14f6f4f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_keygen_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x38) == 0)) {
    ERR_put_error(6,0x93,0x96,"crypto\\evp\\pmeth_gn.c",0x4a,0x14f6f4f7c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 4;
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x30))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// EVP_PKEY_new_mac_key @ 14f6f5000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_new_mac_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6f501a;
  local_18 = 0;
  lVar2 = EVP_PKEY_CTX_new_id();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = EVP_PKEY_keygen_init(lVar2);
    uVar3 = 0;
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,4,6,param_4,param_3);
      if (0 < iVar1) {
        EVP_PKEY_keygen(lVar2,&local_18);
        uVar3 = local_18;
      }
    }
    EVP_PKEY_CTX_free(lVar2);
  }
  return uVar3;
}

// EVP_PKEY_param_check @ 14f6f50a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_param_check(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1[2] == 0) {
    ERR_put_error(6,0xbd,0x9a,"crypto\\evp\\pmeth_gn.c",0xdf);
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf0);
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     ((lVar1 = *(longlong *)(param_1[2] + 0x10), lVar1 == 0 ||
      (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xf0), UNRECOVERED_JUMPTABLE == (code *)0x0)))) {
    ERR_put_error(6,0xbd,0x96,"crypto\\evp\\pmeth_gn.c",0xea);
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6f50f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}

// EVP_PKEY_paramgen @ 14f6f5140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_paramgen(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6f5150;
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (*(longlong *)(*param_1 + 0x28) != 0)) {
    if ((int)param_1[4] == 2) {
      if (param_2 != (longlong *)0x0) {
        if (*param_2 == 0) {
          lVar2 = EVP_PKEY_new();
          *param_2 = lVar2;
          if (lVar2 == 0) {
            ERR_put_error(6,0x94,0x41,"crypto\\evp\\pmeth_gn.c",0x39,uVar3);
            return -1;
          }
        }
        iVar1 = (**(code **)(*param_1 + 0x28))(param_1,*param_2);
        if (iVar1 < 1) {
          EVP_PKEY_free(*param_2);
          *param_2 = 0;
        }
        return iVar1;
      }
    }
    else {
      ERR_put_error(6,0x94,0x97,"crypto\\evp\\pmeth_gn.c",0x2e,0x14f6f5150);
    }
    return -1;
  }
  ERR_put_error(6,0x94,0x96,"crypto\\evp\\pmeth_gn.c",0x29,0x14f6f5150);
  return -2;
}

// EVP_PKEY_paramgen_init @ 14f6f5260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_paramgen_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x28) == 0)) {
    ERR_put_error(6,0x95,0x96,"crypto\\evp\\pmeth_gn.c",0x18,0x14f6f526c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 2;
    if (*(code **)(lVar1 + 0x20) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x20))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// EVP_PKEY_public_check @ 14f6f52f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_public_check(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1[2] == 0) {
    ERR_put_error(6,0xbe,0x9a,"crypto\\evp\\pmeth_gn.c",200);
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     ((lVar1 = *(longlong *)(param_1[2] + 0x10), lVar1 == 0 ||
      (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xe8), UNRECOVERED_JUMPTABLE == (code *)0x0)))) {
    ERR_put_error(6,0xbe,0x96,"crypto\\evp\\pmeth_gn.c",0xd3);
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6f5345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}

// evp_pkey_set_cb_translate @ 14f6f5390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_pkey_set_cb_translate(undefined8 param_1,undefined8 param_2)

{
  BN_GENCB_set(param_1,FUN_14f6f53c0,param_2);
  return;
}

// FUN_14f6f53c0 @ 14f6f53c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f53c0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = BN_GENCB_get_arg(param_3);
  **(undefined4 **)(lVar1 + 0x40) = param_1;
  *(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014f6f53fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(lVar1);
  return;
}

