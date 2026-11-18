// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// EVP_PKEY_decrypt @ 14f6ed4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_decrypt(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f6ed4da;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xa8) == 0)) {
    ERR_put_error(6,0x68,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xc1),0x14f6ed4da);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x200) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = EVP_PKEY_size(param_1[2]);
      if (iVar2 == 0) {
        ERR_put_error(6,0x68,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,200),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        ERR_put_error(6,0x68,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,200),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    ERR_put_error(6,0x68,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xc5),0x14f6ed4da);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

// EVP_PKEY_decrypt_init @ 14f6ed610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_decrypt_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xa8) == 0)) {
    ERR_put_error(6,0x8a,0x96,"crypto\\evp\\pmeth_fn.c",0xaf,0x14f6ed61c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x200;
    if (*(code **)(lVar1 + 0xa0) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0xa0))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// EVP_PKEY_derive @ 14f6ed6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_derive(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ed6b5;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xb8) == 0)) {
    ERR_put_error(6,0x99,0x96,"crypto\\evp\\pmeth_fn.c",0x120,0x14f6ed6b5);
    return 0xfffffffe;
  }
  if ((int)param_1[4] != 0x400) {
    ERR_put_error(6,0x99,0x97,"crypto\\evp\\pmeth_fn.c",0x124,0x14f6ed6b5);
    return 0xffffffff;
  }
  if ((*(byte *)(lVar1 + 4) & 2) != 0) {
    iVar2 = EVP_PKEY_size(param_1[2]);
    if (iVar2 == 0) {
      ERR_put_error(6,0x99,0xa3,"crypto\\evp\\pmeth_fn.c",0x127,uVar3);
      return 0;
    }
    if (param_2 == 0) {
      *param_3 = (longlong)iVar2;
      return 1;
    }
    if (*param_3 < (ulonglong)(longlong)iVar2) {
      ERR_put_error(6,0x99,0x9b,"crypto\\evp\\pmeth_fn.c",0x127,uVar3);
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6ed7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3);
  return uVar3;
}

// EVP_PKEY_derive_init @ 14f6ed830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_derive_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xb8) == 0)) {
    ERR_put_error(6,0x9a,0x96,"crypto\\evp\\pmeth_fn.c",0xd1,0x14f6ed83c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x400;
    if (*(code **)(lVar1 + 0xb0) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0xb0))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// EVP_PKEY_derive_set_peer @ 14f6ed8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_derive_set_peer(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6ed8d0;
  if ((((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
      ((*(longlong *)(lVar1 + 0xb8) == 0 &&
       ((*(longlong *)(lVar1 + 0x98) == 0 && (*(longlong *)(lVar1 + 0xa8) == 0)))))) ||
     (*(code **)(lVar1 + 0xc0) == (code *)0x0)) {
    ERR_put_error(6,0x9b,0x96,"crypto\\evp\\pmeth_fn.c",0xe4,0x14f6ed8d0);
    uVar3 = 0xfffffffe;
  }
  else {
    if ((((int)param_1[4] - 0x100U & 0xfffffcff) != 0) || ((int)param_1[4] == 0x300)) {
      ERR_put_error(6,0x9b,0x97,"crypto\\evp\\pmeth_fn.c",0xeb,0x14f6ed8d0);
      return 0xffffffff;
    }
    uVar3 = (**(code **)(lVar1 + 0xc0))(param_1,2,0,param_2);
    if (0 < (int)uVar3) {
      if ((int)uVar3 != 2) {
        if ((int *)param_1[2] == (int *)0x0) {
          ERR_put_error(6,0x9b,0x9a,"crypto\\evp\\pmeth_fn.c",0xf8,uVar4);
          return 0xffffffff;
        }
        if (*(int *)param_1[2] != *param_2) {
          ERR_put_error(6,0x9b,0x65,"crypto\\evp\\pmeth_fn.c",0xfd,uVar4);
          return 0xffffffff;
        }
        iVar2 = EVP_PKEY_missing_parameters(param_2);
        if (iVar2 == 0) {
          iVar2 = EVP_PKEY_cmp_parameters(param_1[2],param_2);
          if (iVar2 == 0) {
            ERR_put_error(6,0x9b,0x99,"crypto\\evp\\pmeth_fn.c",0x10a,uVar4);
            return 0xffffffff;
          }
        }
        EVP_PKEY_free(param_1[3]);
        param_1[3] = (longlong)param_2;
        uVar4 = (**(code **)(*param_1 + 0xc0))(param_1,2,1,param_2);
        if ((int)uVar4 < 1) {
          param_1[3] = 0;
          return uVar4;
        }
        EVP_PKEY_up_ref(param_2);
      }
      return 1;
    }
  }
  return uVar3;
}

// EVP_PKEY_encrypt @ 14f6edae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_encrypt(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
                undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f6edafa;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x98) == 0)) {
    ERR_put_error(6,0x69,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x9f),0x14f6edafa);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x100) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = EVP_PKEY_size(param_1[2]);
      if (iVar2 == 0) {
        ERR_put_error(6,0x69,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa6),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        ERR_put_error(6,0x69,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa6),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    ERR_put_error(6,0x69,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa3),0x14f6edafa);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

// EVP_PKEY_encrypt_init @ 14f6edc30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_encrypt_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x98) == 0)) {
    ERR_put_error(6,0x8b,0x96,"crypto\\evp\\pmeth_fn.c",0x8d,0x14f6edc3c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x100;
    if (*(code **)(lVar1 + 0x90) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x90))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// EVP_PKEY_sign @ 14f6edcc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_sign(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f6edcda;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x48) == 0)) {
    ERR_put_error(6,0x8c,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x3a),0x14f6edcda);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 8) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = EVP_PKEY_size(param_1[2]);
      if (iVar2 == 0) {
        ERR_put_error(6,0x8c,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x41),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        ERR_put_error(6,0x8c,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x41),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    ERR_put_error(6,0x8c,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x3e),0x14f6edcda);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

// EVP_PKEY_sign_init @ 14f6ede10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_sign_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x48) == 0)) {
    ERR_put_error(6,0x8d,0x96,"crypto\\evp\\pmeth_fn.c",0x28,0x14f6ede1c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    if (*(code **)(lVar1 + 0x40) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x40))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// EVP_PKEY_verify @ 14f6edea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_verify(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if ((int)param_1[4] != 0x10) {
      ERR_put_error(6,0x8e,0x97,"crypto\\evp\\pmeth_fn.c",0x60);
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00014f6edef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_put_error(6,0x8e,0x96,"crypto\\evp\\pmeth_fn.c",0x5c);
  return 0xfffffffe;
}

// EVP_PKEY_verify_init @ 14f6edf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_verify_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x58) == 0)) {
    ERR_put_error(6,0x8f,0x96,"crypto\\evp\\pmeth_fn.c",0x4a,0x14f6edf3c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    if (*(code **)(lVar1 + 0x50) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x50))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

// EVP_PKEY_verify_recover @ 14f6edfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_PKEY_verify_recover
          (longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f6edfda;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x68) == 0)) {
    ERR_put_error(6,0x90,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x7d),0x14f6edfda);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x20) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = EVP_PKEY_size(param_1[2]);
      if (iVar2 == 0) {
        ERR_put_error(6,0x90,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x84),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        ERR_put_error(6,0x90,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x84),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    ERR_put_error(6,0x90,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x81),0x14f6edfda);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

// EVP_PKEY_verify_recover_init @ 14f6ee110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_verify_recover_init(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x68) == 0)) {
    ERR_put_error(6,0x91,0x96,"crypto\\evp\\pmeth_fn.c",0x6b,0x14f6ee11c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x20;
    if (*(code **)(lVar1 + 0x60) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x60))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}

