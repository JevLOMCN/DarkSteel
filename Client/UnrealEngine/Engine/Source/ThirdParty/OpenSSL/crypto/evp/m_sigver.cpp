// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// EVP_DigestSign @ 14f6b9330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_DigestSign(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x20) + 0xd0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6b9373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  if (param_2 != 0) {
    iVar1 = EVP_DigestUpdate(param_1,param_4,param_5);
    if (iVar1 < 1) {
      return 0;
    }
  }
  uVar2 = EVP_DigestSignFinal(param_1,param_2,param_3);
  return uVar2;
}

// EVP_DigestSignFinal @ 14f6b93d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong EVP_DigestSignFinal(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6b93e2;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)param_1[4];
  lVar6 = *plVar5;
  if ((*(byte *)(lVar6 + 4) & 4) != 0) {
    if (param_2 == 0) {
      uVar4 = (**(code **)(lVar6 + 0x78))(plVar5,0,param_3,param_1);
      return uVar4;
    }
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      plVar5 = (longlong *)EVP_PKEY_CTX_dup(plVar5);
      if (plVar5 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,param_2,param_3,param_1);
        EVP_PKEY_CTX_free(plVar5);
        return (ulonglong)uVar2;
      }
      return 0;
    }
    uVar4 = (**(code **)(lVar6 + 0x78))();
    return uVar4;
  }
  pcVar1 = *(code **)(lVar6 + 0x78);
  if (param_2 == 0) {
    if (pcVar1 == (code *)0x0) {
      iVar3 = EVP_MD_size(*param_1);
      if (iVar3 < 0) {
        return 0;
      }
      local_98 = (ulonglong)iVar3;
      iVar3 = EVP_PKEY_sign(plVar5,0,param_3,0);
    }
    else {
      iVar3 = (*pcVar1)(plVar5,0,param_3,param_1);
    }
  }
  else {
    local_88[0] = 0;
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      lVar6 = EVP_MD_CTX_new();
      if (lVar6 == 0) {
        return 0;
      }
      iVar3 = EVP_MD_CTX_copy_ex(lVar6,param_1);
      if (iVar3 == 0) {
        EVP_MD_CTX_free(lVar6);
        return 0;
      }
      if (pcVar1 == (code *)0x0) {
        uVar2 = EVP_DigestFinal_ex(lVar6,local_78,local_88);
      }
      else {
        uVar2 = (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x78))
                          (*(longlong **)(lVar6 + 0x20),param_2,param_3,lVar6);
      }
      EVP_MD_CTX_free(lVar6);
    }
    else if (pcVar1 == (code *)0x0) {
      uVar2 = EVP_DigestFinal_ex(param_1,local_78,local_88);
    }
    else {
      uVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,param_2,param_3,param_1);
    }
    if ((pcVar1 != (code *)0x0) || (uVar2 == 0)) {
      return (ulonglong)uVar2;
    }
    local_98 = (ulonglong)local_88[0];
    iVar3 = EVP_PKEY_sign(param_1[4],param_2,param_3,local_78);
  }
  if (iVar3 < 1) {
    return 0;
  }
  return 1;
}

// EVP_DigestSignInit @ 14f6b95c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DigestSignInit(void)

{
  FUN_14f6b97e0();
  return;
}

// EVP_DigestVerify @ 14f6b95f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_DigestVerify(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x20) + 0xd8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6b9633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  iVar1 = EVP_DigestUpdate(param_1,param_4,param_5);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  uVar2 = EVP_DigestVerifyFinal(param_1,param_2,param_3);
  return uVar2;
}

// EVP_DigestVerifyFinal @ 14f6b9680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong EVP_DigestVerifyFinal(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6b9696;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x20) + 0x88);
  if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
    lVar4 = EVP_MD_CTX_new();
    if (lVar4 != 0) {
      iVar3 = EVP_MD_CTX_copy_ex(lVar4,param_1);
      if (iVar3 != 0) {
        if (pcVar1 == (code *)0x0) {
          uVar2 = EVP_DigestFinal_ex(lVar4,local_78,local_88);
        }
        else {
          uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x88))
                            (*(longlong **)(lVar4 + 0x20),param_2,param_3 & 0xffffffff,lVar4);
        }
        EVP_MD_CTX_free(lVar4);
        goto LAB_14f6b9759;
      }
      EVP_MD_CTX_free(lVar4);
    }
    uVar5 = 0xffffffff;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      uVar2 = EVP_DigestFinal_ex(param_1,local_78,local_88);
    }
    else {
      uVar2 = (*pcVar1)();
    }
LAB_14f6b9759:
    if ((pcVar1 == (code *)0x0) && (uVar2 != 0)) {
      local_98 = (ulonglong)local_88[0];
      uVar5 = EVP_PKEY_verify(*(undefined8 *)(param_1 + 0x20),param_2,param_3,local_78);
    }
    else {
      uVar5 = (ulonglong)uVar2;
    }
  }
  return uVar5;
}

// EVP_DigestVerifyInit @ 14f6b97b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DigestVerifyInit(void)

{
  FUN_14f6b97e0();
  return;
}

// FUN_14f6b97e0 @ 14f6b97e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6b97e0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 uVar6;
  
  uVar6 = 0x14f6b97fb;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar5 = EVP_PKEY_CTX_new(param_5,param_4);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return 0;
  }
  if (((*(byte *)(**(longlong **)(param_1 + 0x20) + 4) & 4) == 0) && (param_3 == 0)) {
    iVar4 = EVP_PKEY_get_default_digest_nid(param_5,local_res8);
    if (iVar4 < 1) {
LAB_14f6b9865:
      ERR_put_error(6,0xa1,0x9e,"crypto\\evp\\m_sigver.c",0x2a,uVar6);
      return 0;
    }
    uVar5 = OBJ_nid2sn(local_res8[0]);
    param_3 = EVP_get_digestbyname(uVar5);
    if (param_3 == 0) goto LAB_14f6b9865;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  lVar2 = *plVar1;
  if (param_6 == 0) {
    if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
      iVar4 = (**(code **)(lVar2 + 0x70))(plVar1,param_1);
      if (iVar4 < 1) {
        return 0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x40;
      goto LAB_14f6b98e3;
    }
    if (*(longlong *)(lVar2 + 0xd0) == 0) {
      iVar4 = EVP_PKEY_sign_init();
      if (iVar4 < 1) {
        return 0;
      }
      goto LAB_14f6b98e3;
    }
    *(undefined4 *)(plVar1 + 4) = 8;
  }
  else {
    if (*(code **)(lVar2 + 0x80) != (code *)0x0) {
      iVar4 = (**(code **)(lVar2 + 0x80))(plVar1,param_1);
      if (iVar4 < 1) {
        return 0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x80;
      goto LAB_14f6b98e3;
    }
    if (*(longlong *)(lVar2 + 0xd8) == 0) {
      iVar4 = EVP_PKEY_verify_init();
      if (iVar4 < 1) {
        return 0;
      }
      goto LAB_14f6b98e3;
    }
    *(undefined4 *)(plVar1 + 4) = 0x10;
  }
  *(code **)(param_1 + 0x28) = FUN_14f6b99e0;
LAB_14f6b98e3:
  iVar4 = EVP_PKEY_CTX_ctrl(*(undefined8 *)(param_1 + 0x20),0xffffffff,0xf8,1,0,param_3);
  if (iVar4 < 1) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if ((*(byte *)(**(longlong **)(param_1 + 0x20) + 4) & 4) == 0) {
    iVar4 = EVP_DigestInit_ex(param_1,param_3,param_4);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar3 = *(code **)(**(longlong **)(param_1 + 0x20) + 0xf8);
    if (pcVar3 != (code *)0x0) {
      uVar6 = (*pcVar3)(*(longlong **)(param_1 + 0x20),param_1);
      return uVar6;
    }
  }
  return 1;
}

// FUN_14f6b99e0 @ 14f6b99e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b99e0(void)

{
  ERR_put_error(6,0xad,0xb1,"crypto\\evp\\m_sigver.c",0x14);
  return 0;
}

