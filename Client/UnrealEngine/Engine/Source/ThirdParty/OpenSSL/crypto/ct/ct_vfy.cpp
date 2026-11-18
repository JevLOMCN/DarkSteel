// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// SCT_CTX_verify @ 14f735640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SCT_CTX_verify(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f735655;
  iVar2 = 0;
  iVar1 = SCT_is_complete(param_2);
  if ((((iVar1 == 0) || (*param_1 == 0)) || (param_2[0x16] == -1)) ||
     ((param_2[0x16] == 1 && (param_1[3] == 0)))) {
    uVar4 = 0x68;
    uVar7 = 0x6a;
  }
  else if (*param_2 == 0) {
    if (*(size_t *)(param_2 + 8) == param_1[2]) {
      iVar1 = memcmp(*(void **)(param_2 + 6),(void *)param_1[1],param_1[2]);
      if (iVar1 == 0) {
        if (*(ulonglong *)(param_2 + 10) <= (ulonglong)param_1[9]) {
          lVar3 = EVP_MD_CTX_new();
          if (lVar3 != 0) {
            uVar4 = EVP_sha256();
            lVar5 = *param_1;
            iVar1 = EVP_DigestVerifyInit(lVar3,0,uVar4,0,lVar5,uVar7);
            uVar6 = (undefined4)((ulonglong)lVar5 >> 0x20);
            if (iVar1 != 0) {
              iVar1 = FUN_14f7357d0(lVar3,param_1,param_2);
              if (iVar1 != 0) {
                iVar2 = EVP_DigestVerifyFinal
                                  (lVar3,*(undefined8 *)(param_2 + 0x12),
                                   *(undefined8 *)(param_2 + 0x14));
                if (iVar2 == 0) {
                  ERR_put_error(0x32,0x80,0x6b,"crypto\\ct\\ct_vfy.c",CONCAT44(uVar6,0x87));
                }
              }
            }
          }
          EVP_MD_CTX_free(lVar3);
          return iVar2;
        }
        uVar4 = 0x75;
        uVar7 = 0x74;
        goto LAB_14f7357a3;
      }
    }
    uVar4 = 0x71;
    uVar7 = 0x72;
  }
  else {
    uVar4 = 0x6c;
    uVar7 = 0x73;
  }
LAB_14f7357a3:
  ERR_put_error(0x32,0x80,uVar7,"crypto\\ct\\ct_vfy.c",uVar4);
  return 0;
}

// FUN_14f7357d0 @ 14f7357d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f7357d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7357de;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_3 + 0x58);
  if ((iVar1 == -1) || ((iVar1 == 1 && (*(longlong *)(param_2 + 0x18) == 0)))) {
    return 0;
  }
  local_38 = *param_3;
  local_36 = param_3[0x2f];
  local_35 = param_3[0x2e];
  local_34 = param_3[0x2d];
  local_33 = param_3[0x2c];
  local_32 = param_3[0x2b];
  local_31 = param_3[0x2a];
  local_30 = param_3[0x29];
  local_2f = param_3[0x28];
  local_2d = param_3[0x58];
  local_2e = (undefined1)((uint)iVar1 >> 8);
  local_37 = 0;
  iVar1 = EVP_DigestUpdate(param_1,&local_38,0xc);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 0x58) == 0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
  }
  else {
    iVar1 = EVP_DigestUpdate(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                            );
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
  }
  if (lVar2 != 0) {
    local_36 = (undefined1)uVar3;
    local_38 = (undefined1)((ulonglong)uVar3 >> 0x10);
    local_37 = (undefined1)((ulonglong)uVar3 >> 8);
    iVar1 = EVP_DigestUpdate(param_1,&local_38,3);
    if ((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(param_1,lVar2,uVar3), iVar1 != 0)) {
      local_38 = param_3[0x39];
      local_37 = param_3[0x38];
      iVar1 = EVP_DigestUpdate(param_1,&local_38,2);
      if ((iVar1 != 0) &&
         ((*(longlong *)(param_3 + 0x38) == 0 ||
          (iVar1 = EVP_DigestUpdate(param_1,*(undefined8 *)(param_3 + 0x30)), iVar1 != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

