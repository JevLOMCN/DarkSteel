// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// CTLOG_new_from_base64 @ 14f735980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CTLOG_new_from_base64(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 local_res20;
  
  local_res8 = 0;
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x32,0x76,7,"crypto\\ct\\ct_b64.c",0x8f);
    return 0;
  }
  iVar2 = FUN_14f735cb0(param_2,&local_res8);
  uVar1 = local_res8;
  if (iVar2 < 0) {
    ERR_put_error(0x32,0x76,0x6e,"crypto\\ct\\ct_b64.c",0x95);
    return 0;
  }
  local_res20 = local_res8;
  lVar3 = d2i_PUBKEY(0,&local_res20,iVar2);
  CRYPTO_free(uVar1,"crypto\\ct\\ct_b64.c",0x9b);
  if (lVar3 == 0) {
    ERR_put_error(0x32,0x76,0x6e,"crypto\\ct\\ct_b64.c",0x9d);
    return 0;
  }
  lVar4 = CTLOG_new(lVar3,param_3);
  *param_1 = lVar4;
  if (lVar4 == 0) {
    EVP_PKEY_free(lVar3);
    return 0;
  }
  return 1;
}

// SCT_new_from_base64 @ 14f735ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SCT_new_from_base64(undefined1 param_1,undefined8 param_2,undefined4 param_3,
                            undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0x14f735ade;
  lVar2 = SCT_new();
  local_28 = 0;
  local_20 = 0;
  if (lVar2 == 0) {
    ERR_put_error(0x32,0x7f,0x41,"crypto\\ct\\ct_b64.c",0x4a);
    return 0;
  }
  iVar1 = SCT_set_version(lVar2,param_1);
  if (iVar1 == 0) {
    ERR_put_error(0x32,0x7f,0x73,"crypto\\ct\\ct_b64.c",0x53);
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_14f735cb0(param_2,&local_28);
    uVar3 = local_28;
    if (iVar1 < 0) {
      uVar4 = 0x59;
    }
    else {
      iVar1 = SCT_set0_log_id(lVar2,local_28,(longlong)iVar1);
      if (iVar1 == 0) goto LAB_14f735b54;
      local_28 = 0;
      iVar1 = FUN_14f735cb0(param_5,&local_28);
      if (iVar1 < 0) {
        uVar4 = 0x62;
      }
      else {
        SCT_set0_extensions(lVar2,local_28,(longlong)iVar1);
        local_28 = 0;
        iVar1 = FUN_14f735cb0(param_6,&local_28);
        uVar3 = local_28;
        if (-1 < iVar1) {
          local_20 = local_28;
          iVar1 = o2i_SCT_signature(lVar2,&local_20,(longlong)iVar1);
          if (0 < iVar1) {
            CRYPTO_free(uVar3,"crypto\\ct\\ct_b64.c",0x71);
            uVar3 = 0;
            SCT_set_timestamp(lVar2,param_4);
            iVar1 = SCT_set_log_entry_type(lVar2,param_3);
            if (iVar1 != 0) {
              return lVar2;
            }
          }
          goto LAB_14f735b54;
        }
        uVar4 = 0x6a;
      }
    }
    ERR_put_error(0x32,0x7f,0x76,"crypto\\ct\\ct_b64.c",uVar4);
    uVar3 = local_28;
  }
LAB_14f735b54:
  CRYPTO_free(uVar3,"crypto\\ct\\ct_b64.c",0x7c);
  SCT_free(lVar2);
  return 0;
}

// FUN_14f735cb0 @ 14f735cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f735cb0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f735cc6;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (*(char *)(param_1 + uVar6) != '\0');
  if (uVar6 == 0) {
    *param_2 = 0;
    return 0;
  }
  lVar4 = CRYPTO_malloc((longlong)((int)(uVar6 >> 2) * 3),"crypto\\ct\\ct_b64.c",0x24);
  if (lVar4 == 0) {
    uVar8 = 0x26;
    uVar7 = 0x41;
  }
  else {
    iVar2 = EVP_DecodeBlock(lVar4,param_1,uVar6 & 0xffffffff);
    if (-1 < iVar2) {
      iVar3 = 0;
      pcVar5 = (char *)(param_1 + -1 + uVar6);
      cVar1 = *pcVar5;
      while( true ) {
        if (cVar1 != '=') {
          *param_2 = lVar4;
          return iVar2;
        }
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + 1;
        if (2 < iVar3) break;
        pcVar5 = pcVar5 + -1;
        cVar1 = *pcVar5;
      }
      goto LAB_14f735d41;
    }
    uVar8 = 0x2c;
    uVar7 = 0x6c;
  }
  ERR_put_error(0x32,0x7c,uVar7,"crypto\\ct\\ct_b64.c",uVar8,uVar9);
LAB_14f735d41:
  CRYPTO_free(lVar4,"crypto\\ct\\ct_b64.c",0x3b);
  return -1;
}

