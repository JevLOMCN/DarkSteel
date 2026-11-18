// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// DH_KDF_X9_42 @ 14f7a2a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
DH_KDF_X9_42(void *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5
            ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uVar7;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar7 = 0;
  uVar6 = 0;
  local_c0 = 0;
  if (param_4 < 0x40000001) {
    local_b0 = param_4;
    local_a8 = param_3;
    lVar3 = EVP_MD_CTX_new();
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = EVP_MD_size(param_8);
      uVar5 = (ulonglong)iVar1;
      local_d0 = param_7;
      local_d8 = param_6;
      local_c8 = FUN_14f7a2ca0(&local_c0,&local_b8,param_5,param_2);
      uVar2 = uVar7;
      if (local_c8 != 0) {
        iVar4 = 1;
        iVar1 = EVP_DigestInit_ex(lVar3,param_8,0);
        if (iVar1 != 0) {
          while (iVar1 = EVP_DigestUpdate(lVar3,local_a8,local_b0), uVar2 = uVar7, iVar1 != 0) {
            local_b8[3] = (char)iVar4;
            local_b8[2] = (char)((uint)iVar4 >> 8);
            local_b8[1] = (char)((uint)iVar4 >> 0x10);
            *local_b8 = (char)((uint)iVar4 >> 0x18);
            iVar1 = EVP_DigestUpdate(lVar3,local_c0,(longlong)local_c8);
            uVar2 = uVar6;
            if (iVar1 == 0) break;
            if (param_2 < uVar5) {
              iVar1 = EVP_DigestFinal(lVar3,local_98,0);
              if (iVar1 != 0) {
                memcpy(param_1,local_98,param_2);
                OPENSSL_cleanse(local_98,uVar5);
LAB_14f7a2c32:
                uVar2 = 1;
              }
              break;
            }
            iVar1 = EVP_DigestFinal(lVar3,param_1,0);
            if (iVar1 == 0) break;
            param_2 = param_2 - uVar5;
            if (param_2 == 0) goto LAB_14f7a2c32;
            param_1 = (void *)((longlong)param_1 + uVar5);
            iVar4 = iVar4 + 1;
            iVar1 = EVP_DigestInit_ex(lVar3,param_8,0);
            if (iVar1 == 0) break;
          }
        }
      }
      CRYPTO_free(local_c0,"crypto\\dh\\dh_kdf.c",0x92);
      EVP_MD_CTX_free(lVar3);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// FUN_14f7a2ca0 @ 14f7a2ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7a2ca0(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                 longlong param_5,ulonglong param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_58;
  int local_50 [2];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined8 local_28;
  undefined4 *local_20;
  
  if ((0x40000000 < param_6) || (0x40000000 < param_4)) {
    return 0;
  }
  local_30 = &local_68;
  local_20 = local_38;
  piVar6 = (int *)0x0;
  local_60 = &DAT_154df9e48;
  local_68 = 4;
  local_58 = 0;
  local_64 = 4;
  local_38[0] = 4;
  if (param_5 != 0) {
    local_40 = 0;
    piVar6 = local_50;
    local_50[1] = 4;
    local_48 = param_5;
    local_50[0] = (int)param_6;
  }
  local_28 = param_3;
  iVar3 = CMS_SharedInfo_encode(param_1,&local_28,piVar6);
  if (0 < iVar3) {
    lVar1 = *param_1;
    local_90 = lVar1;
    cVar2 = ASN1_get_object(&local_90,local_78,&param_6,&local_b8,iVar3);
    if (((-1 < cVar2) && ((int)param_6 == 0x10)) && (local_b8 == 0)) {
      iVar5 = (int)local_90;
      local_88 = local_90;
      iVar4 = ((int)lVar1 - iVar5) + iVar3;
      cVar2 = ASN1_get_object(&local_88,local_74,&local_b4,&local_b0,iVar4);
      if (((cVar2 < '\0') || (local_b4 != 0x10)) || (local_b0 != 0)) {
        return 0;
      }
      iVar7 = (int)local_88;
      local_98 = local_88;
      iVar4 = iVar4 + (iVar5 - iVar7);
      cVar2 = ASN1_get_object(&local_98,&local_a4,&local_ac,&local_a8,iVar4);
      if (((-1 < cVar2) && (local_ac == 6)) && (local_a8 == 0)) {
        local_98 = local_98 + local_a4;
        local_80 = local_98;
        cVar2 = ASN1_get_object(&local_80,local_70,&local_a0,&local_9c,
                                iVar4 + (iVar7 - (int)local_98));
        lVar1 = local_80;
        if ((((-1 < cVar2) && (local_a0 == 4)) && (local_9c == 0)) &&
           (iVar4 = CRYPTO_memcmp(local_80,&DAT_154df9e48,4), iVar4 == 0)) {
          *param_2 = lVar1;
          return iVar3;
        }
      }
      return 0;
    }
  }
  return 0;
}

// FUN_14f7a2ee0 @ 14f7a2ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7a2ee0(longlong *param_1,int *param_2,int param_3)

{
  char cVar1;
  int local_res8 [2];
  int local_res20 [2];
  int local_18 [2];
  longlong local_10;
  
  local_10 = *param_1;
  cVar1 = ASN1_get_object(&local_10,local_18,local_res8,local_res20,*param_2);
  if (((-1 < cVar1) && (local_res8[0] == param_3)) && (local_res20[0] == 0)) {
    if (local_res8[0] == 6) {
      local_10 = local_10 + local_18[0];
    }
    *param_2 = *param_2 + ((int)*param_1 - (int)local_10);
    *param_1 = local_10;
    return 1;
  }
  return 0;
}

