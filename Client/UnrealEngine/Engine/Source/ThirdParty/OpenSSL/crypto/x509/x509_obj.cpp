// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// X509_NAME_oneline @ 14f6b2520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * X509_NAME_oneline(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *_Src;
  longlong lVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  char *pcVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_c8;
  ulonglong local_c0;
  char *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6b253a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar5 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  if (param_2 == (char *)0x0) {
    lVar5 = BUF_MEM_new();
    if (lVar5 != 0) {
      param_3 = 200;
      lVar6 = BUF_MEM_grow(lVar5,200);
      if (lVar6 != 0) {
        **(undefined1 **)(lVar5 + 8) = 0;
        goto LAB_14f6b25a4;
      }
    }
LAB_14f6b28b1:
    local_d8 = 0xb1;
    uVar18 = 0x41;
LAB_14f6b28d9:
    ERR_put_error(0xb,0x74,uVar18,"crypto\\x509\\x509_obj.c");
    BUF_MEM_free(lVar5);
  }
  else if (param_3 != 0) {
LAB_14f6b25a4:
    if (param_1 == (undefined8 *)0x0) {
      if (lVar5 != 0) {
        param_2 = *(char **)(lVar5 + 8);
        CRYPTO_free(lVar5,"crypto\\x509\\x509_obj.c",0x35);
      }
      strncpy(param_2,"NO X509_NAME",(longlong)param_3);
      param_2[param_3 + -1] = '\0';
      return param_2;
    }
    local_c0 = (ulonglong)(param_3 - 1);
    iVar21 = 0;
    iVar13 = 0;
    local_c8 = 0;
    iVar3 = OPENSSL_sk_num(*param_1);
    if (0 < iVar3) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar13);
        iVar3 = OBJ_obj2nid(*puVar7);
        if ((iVar3 == 0) || (_Src = (undefined1 *)OBJ_nid2sn(iVar3), _Src == (undefined1 *)0x0)) {
          i2t_ASN1_OBJECT(local_98,0x50,*puVar7);
          _Src = local_98;
        }
        uVar15 = 0xffffffffffffffff;
        do {
          uVar15 = uVar15 + 1;
        } while (_Src[uVar15] != '\0');
        puVar2 = (uint *)puVar7[1];
        uVar12 = *puVar2;
        uVar20 = (ulonglong)uVar12;
        if (0x100000 < (int)uVar12) {
          local_d8 = 0x4a;
LAB_14f6b28d3:
          uVar18 = 0x86;
          goto LAB_14f6b28d9;
        }
        pcVar19 = *(char **)(puVar2 + 2);
        if (puVar2[1] == 0x1b) {
          uVar4 = uVar12 & 0x80000003;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
          }
          if (uVar4 != 0) goto LAB_14f6b26f5;
          uVar4 = 0;
          local_a4._0_4_ = 0;
          local_a4 = (undefined1 *)0x0;
          local_a8 = 0;
          pcVar10 = pcVar19;
          uVar16 = uVar20;
          iVar3 = (int)local_a4;
          local_a4._4_4_ = (int)local_a4;
          if (0 < (int)uVar12) {
            do {
              if (*pcVar10 != '\0') {
                (&local_a8)[uVar4 & 3] = 1;
              }
              uVar4 = uVar4 + 1;
              uVar16 = uVar16 - 1;
              pcVar10 = pcVar10 + 1;
            } while (uVar16 != 0);
            iVar3 = local_a8;
          }
          local_9c = 1;
          if ((iVar3 != 0 || (int)local_a4 != 0) || local_a4._4_4_ != 0) goto LAB_14f6b2700;
          local_a4 = (undefined1 *)0x0;
          local_a8 = 0;
        }
        else {
LAB_14f6b26f5:
          local_9c = 1;
LAB_14f6b2700:
          local_a8 = 1;
          local_a4 = &DAT_100000001;
        }
        local_9c = 1;
        uVar11 = 0;
        uVar9 = 0;
        uVar16 = uVar20;
        uVar4 = uVar11;
        if (0 < (int)uVar12) {
          do {
            uVar9 = uVar4;
            if (((&local_a8)[uVar11 & 3] != 0) &&
               (uVar9 = uVar4 + 1, 0x5e < (byte)(*pcVar19 - 0x20U))) {
              uVar9 = uVar4 + 4;
            }
            uVar11 = uVar11 + 1;
            pcVar19 = pcVar19 + 1;
            uVar16 = uVar16 - 1;
            uVar4 = uVar9;
          } while (uVar16 != 0);
        }
        lVar6 = (longlong)iVar21;
        iVar21 = iVar21 + 2 + uVar9 + (int)uVar15;
        if (0x100000 < iVar21) {
          local_d8 = 0x7b;
          goto LAB_14f6b28d3;
        }
        if (lVar5 == 0) {
          pcVar19 = param_2;
          if ((int)local_c0 < iVar21) goto LAB_14f6b2877;
        }
        else {
          lVar8 = BUF_MEM_grow(lVar5,(longlong)(iVar21 + 1));
          if (lVar8 == 0) goto LAB_14f6b28b1;
          pcVar19 = *(char **)(lVar5 + 8);
        }
        pcVar19 = pcVar19 + lVar6;
        *pcVar19 = '/';
        pcVar19 = pcVar19 + 1;
        memcpy(pcVar19,_Src,uVar15 & 0xffffffff);
        param_1 = local_b0;
        pcVar19[(int)uVar15] = '=';
        pbVar14 = (byte *)(pcVar19 + (int)uVar15 + 1);
        pbVar17 = *(byte **)(puVar7[1] + 8);
        if (0 < (int)uVar12) {
          uVar12 = 0;
          do {
            if ((&local_a8)[uVar12 & 3] != 0) {
              bVar1 = *pbVar17;
              if (bVar1 - 0x20 < 0x5f) {
                *pbVar14 = bVar1;
                pbVar14 = pbVar14 + 1;
              }
              else {
                pbVar14[0] = 0x5c;
                pbVar14[1] = 0x78;
                pbVar14[2] = "0123456789ABCDEF"[(longlong)(ulonglong)bVar1 >> 4];
                pbVar14[3] = "0123456789ABCDEF"[bVar1 & 0xf];
                pbVar14 = pbVar14 + 4;
              }
            }
            uVar12 = uVar12 + 1;
            pbVar17 = pbVar17 + 1;
            uVar20 = uVar20 - 1;
            param_2 = local_b8;
          } while (uVar20 != 0);
        }
        *pbVar14 = 0;
        iVar13 = local_c8 + 1;
        local_c8 = iVar13;
        iVar3 = OPENSSL_sk_num(*local_b0);
      } while (iVar13 < iVar3);
    }
    if (lVar5 != 0) {
      param_2 = *(char **)(lVar5 + 8);
      CRYPTO_free(lVar5,"crypto\\x509\\x509_obj.c",0xaa);
    }
LAB_14f6b2877:
    if (local_c8 != 0) {
      return param_2;
    }
    *param_2 = '\0';
    return param_2;
  }
  return (char *)0x0;
}

// FUN_14f6b2900 @ 14f6b2900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b2900(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6b2920 @ 14f6b2920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b2920(void)

{
  OPENSSL_sk_value();
  return;
}

