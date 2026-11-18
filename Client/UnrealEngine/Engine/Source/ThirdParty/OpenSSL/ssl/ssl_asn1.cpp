// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// d2i_SSL_SESSION @ 14f68f410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * d2i_SSL_SESSION(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  __time64_t _Var9;
  undefined8 uVar10;
  undefined8 local_res10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar12 = 0x14f68f42e;
  local_res10 = *param_2;
  piVar8 = (int *)0x0;
  piVar5 = (int *)ASN1_item_d2i(0,&local_res10,param_3,&DAT_1534888d0);
  piVar6 = piVar8;
  if ((piVar5 == (int *)0x0) ||
     (((param_1 == (longlong *)0x0 || (piVar6 = (int *)*param_1, piVar6 == (int *)0x0)) &&
      (piVar6 = (int *)SSL_SESSION_new(), piVar6 == (int *)0x0)))) goto LAB_14f68f49f;
  if (*piVar5 == 1) {
    iVar4 = piVar5[1];
    if (((iVar4 >> 8 == 3) || (iVar4 >> 8 == 0xfe)) || (iVar4 == 0x100)) {
      *piVar6 = iVar4;
      if (**(int **)(piVar5 + 2) == 2) {
        pbVar2 = *(byte **)(*(int **)(piVar5 + 2) + 2);
        piVar6[0x7a] = (*pbVar2 | 0x30000) << 8 | (uint)pbVar2[1];
        lVar7 = ssl3_get_cipher_by_id();
        *(longlong *)(piVar6 + 0x78) = lVar7;
        if ((lVar7 == 0) ||
           (iVar4 = FUN_14f68fc70(piVar6 + 0x56,piVar6 + 0x54,*(undefined8 *)(piVar5 + 8),0x20),
           iVar4 == 0)) goto LAB_14f68f49f;
        puVar3 = *(uint **)(piVar5 + 6);
        if (puVar3 != (uint *)0x0) {
          uVar1 = *puVar3;
          if (uVar1 != 0) {
            if (0x100 < uVar1) goto LAB_14f68f49f;
            memcpy(piVar6 + 0x14,*(void **)(puVar3 + 2),(longlong)(int)uVar1);
            piVar8 = (int *)(longlong)(int)*puVar3;
          }
        }
        *(int **)(piVar6 + 2) = piVar8;
        if (*(longlong *)(piVar5 + 0xc) == 0) {
          _Var9 = _time64((__time64_t *)0x0);
          iVar4 = (int)_Var9;
        }
        else {
          iVar4 = piVar5[0xc];
        }
        piVar6[0x75] = iVar4;
        if (*(longlong *)(piVar5 + 0xe) == 0) {
          piVar6[0x74] = 3;
        }
        else {
          piVar6[0x74] = piVar5[0xe];
        }
        X509_free(*(undefined8 *)(piVar6 + 0x6e));
        *(undefined8 *)(piVar6 + 0x6e) = *(undefined8 *)(piVar5 + 0x10);
        piVar5[0x10] = 0;
        piVar5[0x11] = 0;
        iVar4 = FUN_14f68fc70(piVar6 + 0x60,piVar6 + 0x5e,*(undefined8 *)(piVar5 + 0x12),0x20);
        if (iVar4 == 0) goto LAB_14f68f49f;
        piVar6[0x72] = piVar5[0x14];
        iVar4 = FUN_14f68fd60(piVar6 + 0x82,*(undefined8 *)(piVar5 + 0x16));
        if (((iVar4 == 0) ||
            (iVar4 = FUN_14f68fd60(piVar6 + 0x68,*(undefined8 *)(piVar5 + 0x1e)), iVar4 == 0)) ||
           (iVar4 = FUN_14f68fd60(piVar6 + 0x6a,*(undefined8 *)(piVar5 + 0x20)), iVar4 == 0))
        goto LAB_14f68f49f;
        piVar6[0x88] = piVar5[0x18];
        piVar6[0x89] = piVar5[0x1a];
        CRYPTO_free(*(undefined8 *)(piVar6 + 0x84),"ssl\\ssl_asn1.c",0x14b);
        if (*(longlong *)(piVar5 + 0x1c) == 0) {
          piVar6[0x84] = 0;
          piVar6[0x85] = 0;
        }
        else {
          *(undefined8 *)(piVar6 + 0x84) = *(undefined8 *)(*(longlong *)(piVar5 + 0x1c) + 8);
          *(longlong *)(piVar6 + 0x86) = (longlong)**(int **)(piVar5 + 0x1c);
          *(undefined8 *)(*(longlong *)(piVar5 + 0x1c) + 8) = 0;
        }
        piVar8 = *(int **)(piVar5 + 4);
        if (piVar8 == (int *)0x0) {
          piVar6[0x76] = 0;
        }
        else {
          if (*piVar8 != 1) {
            uVar11 = 0x156;
            uVar10 = 0x10f;
            goto LAB_14f68f49a;
          }
          piVar6[0x76] = (uint)**(byte **)(piVar8 + 2);
        }
        iVar4 = FUN_14f68fd60(piVar6 + 0x92,*(undefined8 *)(piVar5 + 0x22));
        if (iVar4 != 0) {
          piVar6[0x98] = piVar5[0x24];
          piVar6[0x8a] = piVar5[0x26];
          CRYPTO_free(*(undefined8 *)(piVar6 + 0x8c),"ssl\\ssl_asn1.c",0x167);
          if (*(longlong *)(piVar5 + 0x28) == 0) {
            piVar6[0x8c] = 0;
            piVar6[0x8d] = 0;
            piVar6[0x8e] = 0;
            piVar6[0x8f] = 0;
          }
          else {
            *(undefined8 *)(piVar6 + 0x8c) = *(undefined8 *)(*(longlong *)(piVar5 + 0x28) + 8);
            *(longlong *)(piVar6 + 0x8e) = (longlong)**(int **)(piVar5 + 0x28);
            *(undefined8 *)(*(longlong *)(piVar5 + 0x28) + 8) = 0;
          }
          *(char *)(piVar6 + 0x90) = (char)piVar5[0x2a];
          CRYPTO_free(*(undefined8 *)(piVar6 + 0x94),"ssl\\ssl_asn1.c",0x173);
          if (*(longlong *)(piVar5 + 0x2c) == 0) {
            piVar6[0x94] = 0;
            piVar6[0x95] = 0;
            piVar6[0x96] = 0;
            piVar6[0x97] = 0;
          }
          else {
            *(undefined8 *)(piVar6 + 0x94) = *(undefined8 *)(*(longlong *)(piVar5 + 0x2c) + 8);
            *(longlong *)(piVar6 + 0x96) = (longlong)**(int **)(piVar5 + 0x2c);
            *(undefined8 *)(*(longlong *)(piVar5 + 0x2c) + 8) = 0;
          }
          ASN1_item_free(piVar5,&DAT_1534888d0);
          if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
            *param_1 = (longlong)piVar6;
          }
          *param_2 = local_res10;
          return piVar6;
        }
        goto LAB_14f68f49f;
      }
      uVar11 = 0x114;
      uVar10 = 0x89;
    }
    else {
      uVar11 = 0x10d;
      uVar10 = 0x103;
    }
  }
  else {
    uVar11 = 0x106;
    uVar10 = 0xfe;
  }
LAB_14f68f49a:
  ERR_put_error(0x14,0x67,uVar10,"ssl\\ssl_asn1.c",uVar11,uVar12);
LAB_14f68f49f:
  ASN1_item_free(piVar5,&DAT_1534888d0);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar6)) {
    SSL_SESSION_free(piVar6);
  }
  return (int *)0x0;
}

// FUN_14f68f870 @ 14f68f870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68f870(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_SSL_SESSION @ 14f68f8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2d_SSL_SESSION(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18;
  undefined1 local_res19;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 *local_1f0;
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 *local_1b0;
  undefined4 local_1a8;
  uint *local_1a0;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 *local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 *local_158;
  uint local_150;
  undefined4 *local_148;
  undefined4 local_138 [2];
  undefined1 *local_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined4 local_f8;
  undefined4 local_f0 [2];
  undefined4 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [2];
  undefined4 *local_d0;
  undefined4 local_c8;
  uint local_c0 [2];
  char *local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined4 local_98;
  uint local_90 [2];
  char *local_88;
  undefined4 local_80;
  uint local_78 [2];
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  char *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = 0x14f68f8ba;
  if ((param_1 == (undefined4 *)0x0) ||
     ((lVar2 = *(longlong *)(param_1 + 0x78), lVar2 == 0 && (param_1[0x7a] == 0)))) {
    uVar5 = 0;
  }
  else {
    memset(&local_1f8,0,0xb8);
    local_1f4 = *param_1;
    local_1f8 = 1;
    if (lVar2 == 0) {
      uVar6 = (undefined2)param_1[0x7a];
    }
    else {
      uVar6 = (undefined2)*(undefined4 *)(lVar2 + 0x18);
    }
    local_res19 = (undefined1)uVar6;
    local_res18 = (undefined1)((ushort)uVar6 >> 8);
    local_130 = &local_res18;
    local_1f0 = local_138;
    local_138[0] = 2;
    uVar4 = 0;
    local_128 = 0;
    if (param_1[0x76] != 0) {
      local_res8[0] = *(undefined1 *)(param_1 + 0x76);
      local_118 = local_res8;
      local_1e8 = local_120;
      local_120[0] = 1;
      local_110 = 0;
    }
    pcVar3 = *(char **)(param_1 + 0x82);
    local_100 = param_1 + 0x14;
    local_108[0] = param_1[2];
    local_1e0 = local_108;
    local_e8 = param_1 + 0x56;
    local_f0[0] = param_1[0x54];
    local_1d8 = local_f0;
    local_d0 = param_1 + 0x60;
    local_d8[0] = param_1[0x5e];
    local_1b0 = local_d8;
    local_1c8 = (longlong)(int)param_1[0x75];
    local_1c0 = (longlong)(int)param_1[0x74];
    local_1a8 = param_1[0x72];
    local_1b8 = *(undefined8 *)(param_1 + 0x6e);
    local_f8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    if (pcVar3 == (char *)0x0) {
      local_1a0 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_c0[0] = uVar4 & 0x7fffffff;
      local_1a0 = local_c0;
      local_b0 = 0;
      local_b8 = pcVar3;
    }
    if (*(longlong *)(param_1 + 0x84) != 0) {
      local_a8[0] = param_1[0x86];
      local_188 = local_a8;
      local_98 = 0;
      local_a0 = *(longlong *)(param_1 + 0x84);
    }
    if (param_1[0x88] != 0) {
      local_198 = (ulonglong)(uint)param_1[0x88];
    }
    pcVar3 = *(char **)(param_1 + 0x68);
    local_190 = param_1[0x89];
    uVar4 = 0;
    if (pcVar3 == (char *)0x0) {
      local_180 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (local_90[0] = uVar4; (cVar1 != '\0' && (local_90[0] < 0x80000000));
          local_90[0] = local_90[0] + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_90[0] = local_90[0] & 0x7fffffff;
      local_180 = local_90;
      local_80 = 0;
      local_88 = pcVar3;
    }
    pcVar3 = *(char **)(param_1 + 0x6a);
    if (pcVar3 == (char *)0x0) {
      local_178 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (local_78[0] = uVar4; (cVar1 != '\0' && (local_78[0] < 0x80000000));
          local_78[0] = local_78[0] + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_78[0] = local_78[0] & 0x7fffffff;
      local_178 = local_78;
      local_68 = 0;
      local_70 = pcVar3;
    }
    pcVar3 = *(char **)(param_1 + 0x92);
    if (pcVar3 == (char *)0x0) {
      local_170 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_60[0] = uVar4 & 0x7fffffff;
      local_170 = local_60;
      local_50 = 0;
      local_58 = pcVar3;
    }
    local_168 = (ulonglong)(uint)param_1[0x98];
    local_160 = param_1[0x8a];
    if (*(longlong *)(param_1 + 0x8c) == 0) {
      local_158 = (undefined4 *)0x0;
    }
    else {
      local_48[0] = param_1[0x8e];
      local_158 = local_48;
      local_38 = 0;
      local_40 = *(longlong *)(param_1 + 0x8c);
    }
    local_150 = (uint)*(byte *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x94) == 0) {
      local_148 = (undefined4 *)0x0;
    }
    else {
      local_30[0] = param_1[0x96];
      local_148 = local_30;
      local_20 = local_20 & 0xffffffff00000000;
      local_28 = *(longlong *)(param_1 + 0x94);
    }
    uVar5 = ASN1_item_i2d(&local_1f8,param_2,&DAT_1534888d0);
  }
  return uVar5;
}

// FUN_14f68fc40 @ 14f68fc40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68fc40(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534888d0);
  return;
}

// FUN_14f68fc70 @ 14f68fc70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f68fc70(void *param_1,longlong *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      if ((-1 < iVar1) && (iVar1 <= param_4)) {
        memcpy(param_1,*(void **)(param_3 + 2),(longlong)iVar1);
        *param_2 = (longlong)*param_3;
        return 1;
      }
      return 0;
    }
  }
  *param_2 = 0;
  return 1;
}

// FUN_14f68fd60 @ 14f68fd60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f68fd60(longlong *param_1,int *param_2)

{
  longlong lVar1;
  
  CRYPTO_free(*param_1,"ssl\\ssl_asn1.c",0xd5);
  *param_1 = 0;
  if (param_2 == (int *)0x0) {
    return true;
  }
  lVar1 = CRYPTO_strndup(*(undefined8 *)(param_2 + 2),(longlong)*param_2,"ssl\\ssl_asn1.c",0xd9);
  *param_1 = lVar1;
  return lVar1 != 0;
}

// FUN_14f68fdf0 @ 14f68fdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f68fdf0(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f68fe01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

