// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// RSA_sign @ 14f6be9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RSA_sign(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5,longlong param_6
        )

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  int local_28 [2];
  undefined8 local_20;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar3 = 0;
  local_28[0] = 0;
  local_20 = 0;
  pcVar1 = *(code **)(*(longlong *)(param_6 + 8) + 0x58);
  if (pcVar1 != (code *)0x0) {
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (param_1 == 0x72) {
    if (param_3 != 0x24) {
      ERR_put_error(4,0x75,0x83,"crypto\\rsa\\rsa_sign.c",CONCAT44(uVar6,0x58));
      return 0;
    }
    iVar4 = 0x24;
  }
  else {
    uVar5 = CONCAT44(uVar6,param_3);
    iVar2 = FUN_14f6beba0(&local_20,local_28,param_1,param_2,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    param_2 = local_20;
    uVar5 = local_20;
    iVar4 = local_28[0];
    if (iVar2 == 0) goto LAB_14f6beb00;
  }
  uVar5 = local_20;
  iVar2 = RSA_size(param_6);
  if (iVar2 + -0xb < iVar4) {
    ERR_put_error(4,0x75,0x70,"crypto\\rsa\\rsa_sign.c",CONCAT44(uVar6,100));
  }
  else {
    iVar2 = RSA_private_encrypt(iVar4,param_2,param_4,param_6,CONCAT44(uVar6,1));
    if (0 < iVar2) {
      uVar3 = 1;
      *param_5 = iVar2;
    }
  }
LAB_14f6beb00:
  CRYPTO_clear_free(uVar5,(longlong)iVar4,"crypto\\rsa\\rsa_sign.c",0x70);
  return uVar3;
}

// RSA_verify @ 14f6beb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_verify(void)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong in_stack_00000030;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(in_stack_00000030 + 8) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6beb63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  int_rsa_verify();
  return;
}

// FUN_14f6beba0 @ 14f6beba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6beba0(undefined8 *param_1,int *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_58;
  longlong *local_50;
  undefined4 *local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  longlong local_30 [2];
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6bebb5;
  local_58 = 0;
  local_50 = local_30;
  lVar2 = OBJ_nid2obj(param_3);
  *local_50 = lVar2;
  if (*local_50 == 0) {
    ERR_put_error(4,0x92,0x75,"crypto\\rsa\\rsa_sign.c",0x2c);
  }
  else {
    lVar2 = OBJ_length();
    if (lVar2 == 0) {
      ERR_put_error(4,0x92,0x74,"crypto\\rsa\\rsa_sign.c",0x31);
      return 0;
    }
    local_40[0] = 5;
    local_38 = 0;
    local_50[1] = (longlong)local_40;
    local_48 = local_20;
    local_20[0] = param_5;
    local_18 = param_4;
    iVar1 = i2d_X509_SIG(&local_50,&local_58);
    if (-1 < iVar1) {
      *param_1 = local_58;
      *param_2 = iVar1;
      return 1;
    }
  }
  return 0;
}

// int_rsa_verify @ 14f6becd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
int_rsa_verify(int param_1,longlong *param_2,uint param_3,undefined8 *param_4,size_t *param_5,
              undefined8 param_6,longlong param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  char *_Buf2;
  undefined8 uVar6;
  longlong lVar7;
  size_t _Size;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  int local_38 [2];
  void *local_30;
  
  pvVar5 = (void *)0x0;
  _Size = (size_t)param_3;
  local_38[0] = 0;
  local_30 = (void *)0x0;
  iVar4 = 0;
  iVar2 = 0;
  iVar9 = 0;
  pvVar10 = (void *)0x0;
  iVar1 = RSA_size(param_8);
  if (param_7 != iVar1) {
    ERR_put_error(4,0x91,0x77,"crypto\\rsa\\rsa_sign.c",0x84);
    return 0;
  }
  _Buf2 = (char *)CRYPTO_malloc(param_7,"crypto\\rsa\\rsa_sign.c",0x89);
  if (_Buf2 == (char *)0x0) {
    ERR_put_error(4,0x91,0x41,"crypto\\rsa\\rsa_sign.c",0x8b);
    pvVar10 = pvVar5;
    iVar2 = 0;
  }
  else {
    iVar1 = RSA_public_decrypt((undefined4)param_7,param_6,_Buf2,param_8,1);
    if (0 < iVar1) {
      if (param_1 == 0x72) {
        if (iVar1 == 0x24) {
          if (param_4 != (undefined8 *)0x0) {
            uVar6 = *(undefined8 *)(_Buf2 + 8);
            uVar11 = 1;
            *param_4 = *(undefined8 *)_Buf2;
            param_4[1] = uVar6;
            uVar6 = *(undefined8 *)(_Buf2 + 0x18);
            param_4[2] = *(undefined8 *)(_Buf2 + 0x10);
            param_4[3] = uVar6;
            *(undefined4 *)(param_4 + 4) = *(undefined4 *)(_Buf2 + 0x20);
            *param_5 = 0x24;
            pvVar10 = pvVar5;
            goto LAB_14f6befc7;
          }
          if (param_3 != 0x24) {
            ERR_put_error(4,0x91,0x83,"crypto\\rsa\\rsa_sign.c",0xa4);
            goto LAB_14f6befc5;
          }
          iVar2 = memcmp(_Buf2,param_2,0x24);
          iVar9 = 0;
          if (iVar2 != 0) {
            uVar11 = 0xa9;
            pvVar5 = pvVar10;
            iVar9 = 0;
            goto LAB_14f6bede0;
          }
LAB_14f6befac:
          uVar11 = 1;
          pvVar10 = pvVar5;
          goto LAB_14f6befc7;
        }
        uVar11 = 0x9b;
        iVar9 = 0;
LAB_14f6bede0:
        uVar8 = 0x68;
        pvVar10 = pvVar5;
        iVar4 = iVar9;
      }
      else if ((((param_1 == 0x5f) && (iVar1 == 0x12)) && (*_Buf2 == '\x04')) &&
              (_Buf2[1] == '\x10')) {
        if (param_4 != (undefined8 *)0x0) {
          uVar6 = *(undefined8 *)(_Buf2 + 10);
          uVar11 = 1;
          *param_4 = *(undefined8 *)(_Buf2 + 2);
          param_4[1] = uVar6;
          *param_5 = 0x10;
          goto LAB_14f6befc7;
        }
        if (param_3 == 0x10) {
          if ((*param_2 == *(longlong *)(_Buf2 + 2)) &&
             (pvVar5 = pvVar10, iVar9 = iVar2, param_2[1] == *(longlong *)(_Buf2 + 10)))
          goto LAB_14f6befac;
          uVar11 = 0xbd;
          pvVar5 = pvVar10;
          iVar9 = 0;
          goto LAB_14f6bede0;
        }
        uVar11 = 0xb8;
        uVar8 = 0x83;
        pvVar10 = pvVar5;
        iVar4 = 0;
      }
      else {
        if (param_4 == (undefined8 *)0x0) {
LAB_14f6bef50:
          iVar4 = FUN_14f6beba0(&local_30,local_38,param_1,param_2,(int)_Size);
          pvVar5 = local_30;
          iVar9 = local_38[0];
          pvVar10 = local_30;
          iVar2 = local_38[0];
          if (iVar4 != 0) {
            if ((local_38[0] != iVar1) ||
               (iVar2 = memcmp(local_30,_Buf2,(longlong)local_38[0]), iVar2 != 0)) {
              uVar11 = 0xdc;
              goto LAB_14f6bede0;
            }
            if (param_4 != (undefined8 *)0x0) {
              memcpy(param_4,param_2,_Size);
              *param_5 = _Size;
            }
            goto LAB_14f6befac;
          }
          goto LAB_14f6befc5;
        }
        uVar6 = OBJ_nid2sn(param_1);
        lVar7 = EVP_get_digestbyname(uVar6);
        if (lVar7 == 0) {
          uVar11 = 0xca;
          uVar8 = 0x75;
        }
        else {
          uVar3 = EVP_MD_size(lVar7);
          _Size = (size_t)uVar3;
          if (_Size <= (ulonglong)(longlong)iVar1) {
            param_2 = (longlong *)(_Buf2 + ((longlong)iVar1 - _Size));
            goto LAB_14f6bef50;
          }
          uVar11 = 0xd0;
          uVar8 = 0x8f;
        }
      }
      ERR_put_error(4,0x91,uVar8,"crypto\\rsa\\rsa_sign.c",uVar11);
      iVar2 = iVar4;
    }
  }
LAB_14f6befc5:
  iVar9 = iVar2;
  uVar11 = 0;
LAB_14f6befc7:
  CRYPTO_clear_free(pvVar10,(longlong)iVar9,"crypto\\rsa\\rsa_sign.c",0xea);
  CRYPTO_clear_free(_Buf2,param_7,"crypto\\rsa\\rsa_sign.c",0xeb);
  return uVar11;
}

