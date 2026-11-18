// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 56

// FUN_14f69c0d0 @ 14f69c0d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c0d0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  if (param_1[1] != 0) {
    uVar4 = param_1[1] - 1;
    bVar1 = *(byte *)*param_1;
    pbVar3 = (byte *)*param_1 + 1;
    uVar2 = (ulonglong)bVar1;
    if (bVar1 <= uVar4) {
      if (uVar4 == uVar2) {
        *param_1 = pbVar3 + uVar2;
        param_1[1] = 0;
        *param_2 = pbVar3;
        param_2[1] = uVar2;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f69c150 @ 14f69c150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c150(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 2;
    uVar2 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar2 <= uVar3) {
      if (uVar3 == uVar2) {
        *param_1 = puVar1 + 2 + uVar2;
        param_1[1] = 0;
        param_2[1] = uVar2;
        *param_2 = puVar1 + 2;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f69c200 @ 14f69c200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c200(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    memcpy(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}

// FUN_14f69c270 @ 14f69c270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f69c270(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_1[1] != param_3) {
    return false;
  }
  iVar1 = CRYPTO_memcmp(*param_1);
  return iVar1 == 0;
}

// FUN_14f69c340 @ 14f69c340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c340(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  if (param_1[1] != 0) {
    uVar4 = param_1[1] - 1;
    bVar1 = *(byte *)*param_1;
    pbVar3 = (byte *)*param_1 + 1;
    uVar2 = (ulonglong)bVar1;
    if (bVar1 <= uVar4) {
      *param_1 = pbVar3 + uVar2;
      param_1[1] = uVar4 - uVar2;
      *param_2 = pbVar3;
      param_2[1] = uVar2;
      return 1;
    }
  }
  return 0;
}

// FUN_14f69c4c0 @ 14f69c4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c4c0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  CRYPTO_free(*param_2,
              "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h",
              0x1c5);
  *param_2 = 0;
  *param_3 = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = CRYPTO_memdup(*param_1,lVar1,
                          "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                          ,0x1ce);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    *param_3 = lVar1;
  }
  return 1;
}

// FUN_14f69c5a0 @ 14f69c5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c5a0(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  if ((ulonglong)param_1[1] < param_3) {
    return 0;
  }
  memcpy(param_2,(void *)*param_1,param_3);
  return 1;
}

// FUN_14f69c6c0 @ 14f69c6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c6c0(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar4 = 1;
  local_res8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if (lVar2 == 0) {
    uVar4 = 1;
    lVar2 = ssl_generate_pkey_group(param_1,param_3 & 0xffff);
    if (lVar2 == 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x4d8) != 1) {
    ossl_statem_fatal(param_1,0x50,0x200,0x44,"ssl\\statem\\extensions_clnt.c",0x100000260);
    return 0;
  }
  lVar3 = EVP_PKEY_get1_tls_encodedpoint(lVar2,&local_res8);
  if (lVar3 == 0) {
    uVar5 = CONCAT44(uVar4,0x273);
    uVar4 = 0x10;
  }
  else {
    iVar1 = WPACKET_put_bytes__(param_2,param_3,2);
    if ((iVar1 != 0) && (iVar1 = WPACKET_sub_memcpy__(param_2,local_res8,lVar3,2), iVar1 != 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) = lVar2;
      *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = (short)param_3;
      CRYPTO_free(local_res8,"ssl\\statem\\extensions_clnt.c",0x286);
      return 1;
    }
    uVar5 = CONCAT44(uVar4,0x27b);
    uVar4 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x200,uVar4,"ssl\\statem\\extensions_clnt.c",uVar5);
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
    EVP_PKEY_free(lVar2);
  }
  CRYPTO_free(local_res8,"ssl\\statem\\extensions_clnt.c",0x28c);
  return 0;
}

// FUN_14f69c870 @ 14f69c870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69c870(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f69c890 @ 14f69c890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69c890(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f69c8b0 @ 14f69c8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69c8b0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f69c8d0 @ 14f69c8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69c8d0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f69c8f0 @ 14f69c8f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69c8f0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f69c910 @ 14f69c910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69c910(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f69c930 @ 14f69c930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69c930(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f69c950 @ 14f69c950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f69c950(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  
  lVar3 = param_2[1];
  while( true ) {
    if (lVar3 == 0) {
      return 1;
    }
    pbVar4 = (byte *)*param_2;
    lVar3 = param_2[1];
    if (lVar3 == 0) break;
    bVar1 = *pbVar4;
    uVar2 = (ulonglong)bVar1;
    if (lVar3 - 1U < uVar2) break;
    pbVar4 = pbVar4 + uVar2 + 1;
    lVar3 = (lVar3 - 1U) - uVar2;
    *param_2 = pbVar4;
    param_2[1] = lVar3;
    if (bVar1 == 0) break;
    lVar3 = param_2[1];
  }
  ossl_statem_fatal(param_1,0x32,0x235,0x6e,"ssl\\statem\\extensions_clnt.c",0x61e,pbVar4,lVar3,
                    0x14f69c95a);
  return 0;
}

// FUN_14f69ca00 @ 14f69ca00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f69ca00(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f69ca11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

// tls_construct_ctos_alpn @ 14f69ca20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_alpn(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x400) = 0;
  if ((*(longlong *)(param_1 + 0x6e8) != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))) {
    iVar1 = WPACKET_put_bytes__(param_2,0x10,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_sub_memcpy__
                          (param_2,*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x6f0)
                           ,2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x400) = 1;
            return 1;
          }
        }
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1d2,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1a0)
                     );
    return 0;
  }
  return 2;
}

// tls_construct_ctos_cookie @ 14f69cb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_cookie(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x720) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x2c,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_sub_memcpy__
                        (param_2,*(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x720),2
                        );
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_14f69cc05;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x217,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar3,0x2de));
LAB_14f69cc05:
  CRYPTO_free(*(undefined8 *)(param_1 + 0x718),"ssl\\statem\\extensions_clnt.c",0x2e4);
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  return uVar2;
}

// tls_construct_ctos_early_data @ 14f69cc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_ctos_early_data(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar11;
  char *pcVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int *piVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auStack_248 [32];
  int **local_228;
  undefined4 local_220;
  undefined2 local_218 [4];
  int *local_210;
  ulonglong local_208;
  char *local_200;
  byte *local_1f8;
  ulonglong uStack_1f0;
  byte *local_1e8;
  ulonglong uStack_1e0;
  char local_1d8;
  char local_1d7 [143];
  int *local_148 [32];
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  uVar10 = 0;
  uVar8 = 0;
  local_200 = (char *)0x0;
  local_208 = 0;
  local_210 = (int *)0x0;
  uVar9 = uVar10;
  if (*(int *)(param_1 + 0x4d8) == 1) {
    uVar9 = ssl_handshake_md(param_1);
  }
  if (*(code **)(param_1 + 0x590) != (code *)0x0) {
    local_228 = &local_210;
    iVar6 = (**(code **)(param_1 + 0x590))(param_1,uVar9,&local_200,&local_208);
    if (iVar6 != 0) {
      if (local_210 == (int *)0x0) goto LAB_14f69cd42;
      if (*local_210 == 0x304) goto LAB_14f69cd39;
    }
    SSL_SESSION_free();
    uVar13 = 0x50;
    local_220 = 0x301;
    uVar17 = 0xdb;
    goto LAB_14f69cd22;
  }
LAB_14f69cd39:
  if (local_210 == (int *)0x0) {
LAB_14f69cd42:
    pcVar4 = *(code **)(param_1 + 0x578);
    if (pcVar4 != (code *)0x0) {
      memset(&local_1d8,0,0x81);
      local_220 = 0x100;
      local_228 = local_148;
      uVar7 = (*pcVar4)(param_1,0,&local_1d8,0x80);
      if (0x100 < uVar7) {
        uVar13 = 0x28;
        local_220 = 0x310;
        uVar17 = 0x44;
        goto LAB_14f69cd22;
      }
      if (uVar7 != 0) {
        pcVar12 = &local_1d8;
        local_218[0] = 0x113;
        while ((local_1d8 != '\0' && (uVar8 = (uint)uVar10, uVar8 < 0x80000000))) {
          pcVar12 = pcVar12 + 1;
          uVar8 = uVar8 + 1;
          local_1d8 = *pcVar12;
          uVar10 = (ulonglong)uVar8;
        }
        local_208 = (ulonglong)(uVar8 & 0x7fffffff);
        if (0x80 < local_208) {
          uVar13 = 0x50;
          local_220 = 0x31a;
          uVar17 = 0x44;
          goto LAB_14f69cd22;
        }
        local_200 = &local_1d8;
        lVar11 = SSL_CIPHER_find(param_1,local_218);
        if (lVar11 == 0) {
          local_220 = 0x327;
          uVar13 = 0x50;
          uVar17 = 0x44;
          goto LAB_14f69cd22;
        }
        local_210 = (int *)SSL_SESSION_new();
        if ((((local_210 == (int *)0x0) ||
             (iVar6 = SSL_SESSION_set1_master_key(local_210,local_148,uVar7), iVar6 == 0)) ||
            (iVar6 = SSL_SESSION_set_cipher(local_210,lVar11), iVar6 == 0)) ||
           (iVar6 = SSL_SESSION_set_protocol_version(local_210,0x304), iVar6 == 0)) {
          local_220 = 0x332;
          local_228 = (int **)0x153489ba0;
          ossl_statem_fatal(param_1,0x50,0x212,0x44);
          OPENSSL_cleanse(local_148,uVar7);
          return 0;
        }
        OPENSSL_cleanse(local_148,uVar7);
      }
    }
  }
  SSL_SESSION_free(*(undefined8 *)(param_1 + 0x510));
  *(int **)(param_1 + 0x510) = local_210;
  if (local_210 != (int *)0x0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x518),"ssl\\statem\\extensions_clnt.c",0x33e);
    lVar11 = CRYPTO_memdup(local_200,local_208,"ssl\\statem\\extensions_clnt.c",0x33f);
    *(longlong *)(param_1 + 0x518) = lVar11;
    if (lVar11 == 0) {
      *(undefined8 *)(param_1 + 0x520) = 0;
      uVar13 = 0x50;
      local_220 = 0x343;
      uVar17 = 0x44;
      goto LAB_14f69cd22;
    }
    *(ulonglong *)(param_1 + 0x520) = local_208;
  }
  if (*(int *)(param_1 + 0x84) != 2) {
LAB_14f69d1af:
    *(undefined4 *)(param_1 + 0x1710) = 0;
    return 2;
  }
  iVar6 = (*(int **)(param_1 + 0x508))[0x8a];
  if ((iVar6 == 0) && ((local_210 == (int *)0x0 || (local_210[0x8a] == 0)))) goto LAB_14f69d1af;
  piVar15 = local_210;
  if (iVar6 != 0) {
    piVar15 = *(int **)(param_1 + 0x508);
  }
  *(int *)(param_1 + 0x1710) = piVar15[0x8a];
  if (*(longlong *)(piVar15 + 0x82) != 0) {
    pcVar12 = *(char **)(param_1 + 0x638);
    if (pcVar12 != (char *)0x0) {
      lVar11 = *(longlong *)(piVar15 + 0x82) - (longlong)pcVar12;
      do {
        cVar2 = *pcVar12;
        cVar3 = pcVar12[lVar11];
        if (cVar2 != cVar3) break;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) goto LAB_14f69cfff;
    }
    local_220 = 0x358;
    uVar13 = 0x50;
    uVar17 = 0xe7;
LAB_14f69cd22:
    local_228 = (int **)0x153489ba0;
    ossl_statem_fatal(param_1,uVar13,0x212,uVar17);
    return 0;
  }
LAB_14f69cfff:
  pbVar5 = *(byte **)(param_1 + 0x6e8);
  if ((pbVar5 == (byte *)0x0) && (*(longlong *)(piVar15 + 0x8c) != 0)) {
    local_220 = 0x35f;
    uVar13 = 0x50;
    uVar17 = 0xde;
    goto LAB_14f69cd22;
  }
  if (*(longlong *)(piVar15 + 0x8c) != 0) {
    uVar10 = *(ulonglong *)(param_1 + 0x6f0);
    pbVar16 = pbVar5;
    uVar9 = uVar10;
    if (0x7fffffffffffffff < uVar10) {
      local_220 = 0x36d;
      goto LAB_14f69d18d;
    }
    do {
      uStack_1e0 = uVar9;
      local_1e8 = pbVar16;
      uStack_1f0 = uVar10;
      local_1f8 = pbVar5;
      if (uStack_1f0 == 0) {
LAB_14f69d0e5:
        local_220 = 0x37a;
        uVar18 = 0xde;
        goto LAB_14f69d193;
      }
      pbVar1 = local_1f8 + 1;
      uVar14 = (ulonglong)*local_1f8;
      if (uStack_1e0 - 1 < (ulonglong)*local_1f8) goto LAB_14f69d0e5;
      uVar9 = (uStack_1e0 - 1) - uVar14;
      pbVar16 = pbVar1 + uVar14;
      pbVar5 = pbVar16;
      uVar10 = uVar9;
    } while ((uVar14 != *(ulonglong *)(piVar15 + 0x8e)) ||
            (local_1f8 = pbVar16, uStack_1f0 = uVar9, local_1e8 = pbVar16, uStack_1e0 = uVar9,
            iVar6 = CRYPTO_memcmp(pbVar1,*(undefined8 *)(piVar15 + 0x8c)), pbVar5 = local_1f8,
            uVar10 = uStack_1f0, iVar6 != 0));
  }
  iVar6 = WPACKET_put_bytes__(param_2,0x2a,2);
  if ((iVar6 != 0) &&
     ((iVar6 = WPACKET_start_sub_packet_len__(param_2,2), iVar6 != 0 &&
      (iVar6 = WPACKET_close(param_2), iVar6 != 0)))) {
    *(undefined4 *)(param_1 + 0x710) = 1;
    *(undefined4 *)(param_1 + 0x714) = 1;
    return 1;
  }
  local_220 = 899;
LAB_14f69d18d:
  uVar18 = 0x44;
LAB_14f69d193:
  local_228 = (int **)0x153489ba0;
  ossl_statem_fatal(param_1,0x50,0x212,uVar18);
  return 0;
}

// tls_construct_ctos_ec_pt_formats @ 14f69d1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_ec_pt_formats(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f69d1e0;
  iVar1 = FUN_14f6a04e0();
  if (iVar1 == 0) {
    return 2;
  }
  tls1_get_formatlist(param_1,&local_10,&local_18);
  iVar1 = WPACKET_put_bytes__(param_2,0xb,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_sub_memcpy__(param_2,local_10,local_18,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d3,0x44,"ssl\\statem\\extensions_clnt.c",0xb2);
  return 0;
}

// tls_construct_ctos_ems @ 14f69d2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_ems(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,0x17,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d4,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x202));
  return 0;
}

// tls_construct_ctos_etm @ 14f69d340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_etm(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(uint *)(param_1 + 0x5cc) & 0x80000) != 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x16,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d5,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1df));
  return 0;
}

// tls_construct_ctos_key_share @ 14f69d3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_key_share(longlong param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong local_18;
  longlong local_10;
  
  uVar3 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar1 = WPACKET_put_bytes__(param_2,0x33,2);
  if (((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
     (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar5 = 0x2a1;
  }
  else {
    tls1_get_supported_groups(param_1,&local_10,&local_18);
    sVar2 = *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406);
    if (sVar2 == 0) {
      if (local_18 != 0) {
        do {
          iVar1 = tls_curve_allowed(param_1,*(undefined2 *)(local_10 + uVar3 * 2),0x20004);
          if (iVar1 != 0) {
            sVar2 = *(short *)(local_10 + uVar3 * 2);
            if (sVar2 != 0) goto LAB_14f69d4d3;
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_18);
      }
      uVar5 = 0x2ba;
      uVar4 = 0x65;
      goto LAB_14f69d52b;
    }
LAB_14f69d4d3:
    iVar1 = FUN_14f69c6c0(param_1,param_2,sVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = WPACKET_close(param_2);
    if ((iVar1 != 0) && (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
      return 1;
    }
    uVar5 = 0x2c5;
  }
  uVar4 = 0x44;
LAB_14f69d52b:
  ossl_statem_fatal(param_1,0x50,0x1d6,uVar4,"ssl\\statem\\extensions_clnt.c",uVar5);
  return 0;
}

// tls_construct_ctos_maxfragmentlen @ 14f69d570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_maxfragmentlen(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 0x72c) == '\0') {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,1,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,*(undefined1 *)(param_1 + 0x72c),1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x225,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x51));
  return 0;
}

// tls_construct_ctos_npn @ 14f69d640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_npn(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x290) != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))) {
    iVar1 = WPACKET_put_bytes__(param_2,0x3374,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1d7,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x189)
                     );
    return 0;
  }
  return 2;
}

// tls_construct_ctos_padding @ 14f69d710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_padding(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  size_t local_res8;
  undefined4 uVar4;
  void *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f69d720;
  if ((*(byte *)(param_1 + 0x5cc) & 0x10) == 0) {
    return 2;
  }
  iVar2 = WPACKET_get_total_written(param_2,&local_res8);
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x508);
    if ((((*piVar1 == 0x304) && (*(longlong *)(piVar1 + 0x86) != 0)) &&
        (*(longlong *)(piVar1 + 0x78) != 0)) &&
       (lVar3 = ssl_md(*(undefined4 *)(*(longlong *)(piVar1 + 0x78) + 0x40)), lVar3 != 0)) {
      iVar2 = EVP_MD_size(lVar3);
      local_res8 = (longlong)iVar2 + *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x218) +
                   local_res8 + 0xf;
    }
    if (local_res8 - 0x100 < 0x100) {
      lVar3 = -local_res8;
      local_res8 = 1;
      if (4 < lVar3 + 0x200U) {
        local_res8 = lVar3 + 0x1fc;
      }
      iVar2 = WPACKET_put_bytes__(param_2,0x15,2);
      if ((iVar2 == 0) ||
         (iVar2 = WPACKET_sub_allocate_bytes__(param_2,local_res8,&local_18,2), iVar2 == 0)) {
        uVar4 = 0x3dd;
        goto LAB_14f69d75b;
      }
      memset(local_18,0,local_res8);
    }
    return 1;
  }
  uVar4 = 0x3b4;
LAB_14f69d75b:
  ossl_statem_fatal(param_1,0x50,0x1d8,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}

// tls_construct_ctos_post_handshake_auth @ 14f69d880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_post_handshake_auth(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x78c) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x31,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x788) = 1;
        return 1;
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x26b,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x4c3));
  return 0;
}

// tls_construct_ctos_psk @ 14f69d940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_psk(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  __time64_t _Var5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong local_res8;
  undefined8 uVar13;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong uVar10;
  
  local_30 = 0x14f69d962;
  uVar12 = 0;
  local_48 = 0;
  bVar1 = false;
  uVar9 = 0;
  local_40 = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  local_res8 = 0;
  if (**(int **)(param_1 + 0x508) != 0x304) {
    return 2;
  }
  if ((*(longlong *)(*(int **)(param_1 + 0x508) + 0x86) == 0) &&
     (*(longlong *)(param_1 + 0x510) == 0)) {
    return 2;
  }
  uVar3 = uVar12;
  if (*(int *)(param_1 + 0x4d8) == 1) {
    uVar3 = ssl_handshake_md();
  }
  uVar10 = uVar12;
  uVar4 = uVar12;
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x218) == 0) goto LAB_14f69daa6;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
  if (lVar6 == 0) {
    uVar13 = 0x40a;
  }
  else {
    uVar4 = ssl_md(*(undefined4 *)(lVar6 + 0x40));
    uVar10 = uVar9;
    if ((uVar4 == 0) || ((*(int *)(param_1 + 0x4d8) == 1 && (uVar4 != uVar3)))) {
LAB_14f69daa6:
      if (*(longlong *)(param_1 + 0x510) == 0) {
        return 2;
      }
    }
    else {
      _Var5 = _time64((__time64_t *)0x0);
      lVar6 = *(longlong *)(param_1 + 0x508);
      uVar7 = (int)_Var5 - *(int *)(lVar6 + 0x1d4);
      if (uVar7 != 0) {
        uVar7 = uVar7 - 1;
      }
      if (*(uint *)(lVar6 + 0x220) < uVar7) goto LAB_14f69daa6;
      uVar8 = uVar7 * 1000;
      uVar10 = (ulonglong)uVar8;
      if ((uVar7 != 0) && (uVar8 / 1000 != uVar7)) goto LAB_14f69daa6;
      uVar10 = (ulonglong)(uVar8 + *(int *)(lVar6 + 0x224));
      iVar2 = EVP_MD_size(uVar4);
      *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 1;
      bVar1 = true;
      local_res8 = (longlong)iVar2;
    }
    uVar9 = uVar12;
    if (*(longlong *)(param_1 + 0x510) != 0) {
      uVar9 = ssl_md(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x1e0) + 0x40));
      if (uVar9 == 0) {
        uVar13 = 0x45c;
        uVar11 = 0xdb;
        goto LAB_14f69d9fd;
      }
      if ((*(int *)(param_1 + 0x4d8) == 1) && (uVar9 != uVar3)) {
        uVar13 = 0x466;
        uVar11 = 0xdb;
        goto LAB_14f69d9fd;
      }
      iVar2 = EVP_MD_size(uVar9);
      uVar12 = (ulonglong)iVar2;
    }
    iVar2 = WPACKET_put_bytes__(param_2,0x29,2);
    if (((iVar2 == 0) || (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 == 0)) ||
       (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 == 0)) {
      uVar13 = 0x472;
    }
    else if ((bVar1) &&
            ((iVar2 = WPACKET_sub_memcpy__
                                (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x218),2),
             iVar2 == 0 || (iVar2 = WPACKET_put_bytes__(param_2,uVar10,4), iVar2 == 0)))) {
      uVar13 = 0x47b;
    }
    else {
      if (*(longlong *)(param_1 + 0x510) != 0) {
        iVar2 = WPACKET_sub_memcpy__
                          (param_2,*(undefined8 *)(param_1 + 0x518),*(undefined8 *)(param_1 + 0x520)
                           ,2);
        if ((iVar2 == 0) || (iVar2 = WPACKET_put_bytes__(param_2,0,4), iVar2 == 0)) {
          uVar13 = 0x485;
          goto LAB_14f69d9f7;
        }
        *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 1;
      }
      iVar2 = WPACKET_close(param_2);
      if ((((((iVar2 != 0) && (iVar2 = WPACKET_get_total_written(param_2,&local_38), iVar2 != 0)) &&
            (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 != 0)) &&
           ((!bVar1 ||
            (iVar2 = WPACKET_sub_allocate_bytes__(param_2,local_res8,&local_48,1), iVar2 != 0)))) &&
          ((*(longlong *)(param_1 + 0x510) == 0 ||
           (iVar2 = WPACKET_sub_allocate_bytes__(param_2,uVar12,&local_40,1), iVar2 != 0)))) &&
         ((((iVar2 = WPACKET_close(param_2), iVar2 != 0 &&
            (iVar2 = WPACKET_close(param_2), iVar2 != 0)) &&
           (iVar2 = WPACKET_get_total_written(param_2,&local_30), iVar2 != 0)) &&
          (iVar2 = WPACKET_fill_lengths(param_2), iVar2 != 0)))) {
        lVar6 = WPACKET_get_curr(param_2);
        lVar6 = lVar6 - local_30;
        if ((bVar1) &&
           (iVar2 = tls_psk_do_binder(param_1,uVar4,lVar6,local_38,0,local_48,
                                      *(undefined8 *)(param_1 + 0x508),1,0), iVar2 != 1)) {
          return 0;
        }
        if ((*(longlong *)(param_1 + 0x510) != 0) &&
           (iVar2 = tls_psk_do_binder(param_1,uVar9,lVar6,local_38,0,local_40,
                                      *(longlong *)(param_1 + 0x510),1,1), iVar2 != 1)) {
          return 0;
        }
        return 1;
      }
      uVar13 = 0x49b;
    }
  }
LAB_14f69d9f7:
  uVar11 = 0x44;
LAB_14f69d9fd:
  ossl_statem_fatal(param_1,0x50,0x1f5,uVar11,"ssl\\statem\\extensions_clnt.c",uVar13);
  return 0;
}

// tls_construct_ctos_psk_kex_modes @ 14f69ddc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_psk_kex_modes(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 1;
  uVar3 = *(uint *)(param_1 + 0x5cc) & 0x400;
  iVar1 = WPACKET_put_bytes__(param_2,0x2d,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,1,1);
        if (iVar1 != 0) {
          if (uVar3 != 0) {
            iVar1 = WPACKET_put_bytes__(param_2,0,1);
            if (iVar1 == 0) goto LAB_14f69de9c;
          }
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              *(undefined4 *)(param_1 + 0x708) = 2;
              uVar2 = *(undefined4 *)(param_1 + 0x708);
              if (uVar3 != 0) {
                uVar2 = 3;
              }
              *(undefined4 *)(param_1 + 0x708) = uVar2;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_14f69de9c:
  ossl_statem_fatal(param_1,0x50,0x1fd,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x24a));
  return 0;
}

// tls_construct_ctos_renegotiate @ 14f69dee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_renegotiate(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x780) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xff01,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_sub_memcpy__
                        (param_2,*(longlong *)(param_1 + 0xa8) + 0x348,
                         *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x388),1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d9,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1d));
  return 0;
}

// tls_construct_ctos_sct @ 14f69dfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_ctos_sct(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(longlong *)(param_1 + 0x748) != 0) && (param_4 == 0)) {
    iVar1 = WPACKET_put_bytes__(param_2,0x12,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1da,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,500));
    return 0;
  }
  return 2;
}

// tls_construct_ctos_server_name @ 14f69e070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_server_name(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 0x638) == 0) {
    return 2;
  }
  iVar3 = WPACKET_put_bytes__(param_2,0,2);
  if ((((iVar3 != 0) && (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 != 0)) &&
      (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 != 0)) &&
     (iVar3 = WPACKET_put_bytes__(param_2,0,1), iVar3 != 0)) {
    pcVar2 = *(char **)(param_1 + 0x638);
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    iVar3 = WPACKET_sub_memcpy__(param_2,pcVar2,uVar5 & 0x7fffffff,2);
    if (((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) &&
       (iVar3 = WPACKET_close(param_2), iVar3 != 0)) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1db,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar6,0x37));
  return 0;
}

// tls_construct_ctos_session_ticket @ 14f69e1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_session_ticket(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ushort *puVar2;
  void *_Dst;
  int iVar3;
  undefined8 uVar4;
  ulonglong _Size;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar3 = tls_use_ticket();
  if (iVar3 == 0) {
    return 2;
  }
  if ((((*(int *)(param_1 + 0x3c) == 0) &&
       (piVar1 = *(int **)(param_1 + 0x508), piVar1 != (int *)0x0)) &&
      (*(longlong *)(piVar1 + 0x84) != 0)) && (*piVar1 != 0x304)) {
    _Size = *(ulonglong *)(piVar1 + 0x86);
LAB_14f69e29e:
    if (_Size == 0) goto LAB_14f69e2e4;
  }
  else {
    if (((*(longlong *)(param_1 + 0x508) != 0) &&
        (puVar2 = *(ushort **)(param_1 + 0x6c0), puVar2 != (ushort *)0x0)) &&
       (*(longlong *)(puVar2 + 4) != 0)) {
      _Size = (ulonglong)*puVar2;
      uVar4 = CRYPTO_malloc(_Size,"ssl\\statem\\extensions_clnt.c",0xfa);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210) = uVar4;
      _Dst = *(void **)(*(longlong *)(param_1 + 0x508) + 0x210);
      if (_Dst == (void *)0x0) {
        uVar4 = CONCAT44(uVar5,0xfe);
        goto LAB_14f69e306;
      }
      memcpy(_Dst,*(void **)(*(longlong *)(param_1 + 0x6c0) + 8),_Size);
      *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x218) = _Size;
      goto LAB_14f69e29e;
    }
    _Size = 0;
LAB_14f69e2e4:
    if ((*(longlong *)(param_1 + 0x6c0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x6c0) + 8) == 0)) {
      return 2;
    }
  }
  iVar3 = WPACKET_put_bytes__(param_2,0x23,2);
  if ((iVar3 != 0) &&
     (iVar3 = WPACKET_sub_memcpy__
                        (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210),_Size,2),
     iVar3 != 0)) {
    return 1;
  }
  uVar4 = CONCAT44(uVar5,0x10f);
LAB_14f69e306:
  ossl_statem_fatal(param_1,0x50,0x1dc,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}

// tls_construct_ctos_sig_algs @ 14f69e340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_sig_algs(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8;
  if (((uVar1 != 0) || (*(int *)(param_1 + 0x5ec) < 0x303)) &&
     ((uVar1 == 0 || ((*(int *)(param_1 + 0x5ec) == 0x100 || (0xfefd < *(int *)(param_1 + 0x5ec)))))
     )) {
    return 2;
  }
  uVar3 = tls12_get_psigalgs(param_1,1,&local_res8);
  iVar2 = WPACKET_put_bytes__(param_2,0xd,2);
  if (iVar2 != 0) {
    iVar2 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar2 != 0) {
      iVar2 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar2 != 0) {
        iVar2 = tls12_copy_sigalgs(param_1,param_2,local_res8,uVar3);
        if (iVar2 != 0) {
          iVar2 = WPACKET_close(param_2);
          if (iVar2 != 0) {
            iVar2 = WPACKET_close(param_2);
            if (iVar2 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1dd,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar4,0x12a));
  return 0;
}

// tls_construct_ctos_srp @ 14f69e490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_srp(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 2000) == 0) {
    return 2;
  }
  iVar3 = WPACKET_put_bytes__(param_2,0xc,2);
  if ((((iVar3 != 0) && (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 != 0)) &&
      (iVar3 = WPACKET_start_sub_packet_len__(param_2,1), iVar3 != 0)) &&
     (iVar3 = WPACKET_set_flags(param_2,1), iVar3 != 0)) {
    pcVar2 = *(char **)(param_1 + 2000);
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    iVar3 = WPACKET_memcpy(param_2,pcVar2,uVar5 & 0x7fffffff);
    if (((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) &&
       (iVar3 = WPACKET_close(param_2), iVar3 != 0)) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1de,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar6,0x6b));
  return 0;
}

// tls_construct_ctos_status_request @ 14f69e5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_ctos_status_request
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f69e5bd;
  if ((param_4 != 0) || (*(int *)(param_1 + 0x640) != 1)) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,5,2);
  if ((((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
      (iVar1 = WPACKET_put_bytes__(param_2,1,1), iVar1 == 0)) ||
     (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    ossl_statem_fatal(param_1,0x50,0x1df,0x44,"ssl\\statem\\extensions_clnt.c",0x146,uVar5);
    return 0;
  }
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x658));
  if (0 < iVar1) {
    do {
      uVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x658),iVar3);
      iVar1 = i2d_OCSP_RESPID(uVar5,0);
      if (((iVar1 < 1) ||
          (iVar2 = WPACKET_sub_allocate_bytes__(param_2,(longlong)iVar1,local_res20,2), iVar2 == 0))
         || (iVar2 = i2d_OCSP_RESPID(uVar5,local_res20), iVar2 != iVar1)) {
        uVar4 = 0x154;
        goto LAB_14f69e791;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x658));
    } while (iVar3 < iVar1);
  }
  iVar1 = WPACKET_close(param_2);
  if ((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar4 = 0x15b;
    goto LAB_14f69e791;
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    iVar1 = i2d_X509_EXTENSIONS(*(longlong *)(param_1 + 0x660),0);
    if (iVar1 < 0) {
      uVar4 = 0x165;
      goto LAB_14f69e791;
    }
    iVar3 = WPACKET_allocate_bytes(param_2,(longlong)iVar1,local_res20);
    if ((iVar3 == 0) ||
       (iVar3 = i2d_X509_EXTENSIONS(*(undefined8 *)(param_1 + 0x660),local_res20), iVar3 != iVar1))
    {
      uVar4 = 0x16d;
      goto LAB_14f69e791;
    }
  }
  iVar1 = WPACKET_close(param_2);
  if ((iVar1 != 0) && (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
    return 1;
  }
  uVar4 = 0x173;
LAB_14f69e791:
  ossl_statem_fatal(param_1,0x50,0x1df,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}

// tls_construct_ctos_supported_groups @ 14f69e800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_supported_groups(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong local_18;
  longlong local_10;
  
  uVar4 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar2 = FUN_14f6a04e0();
  if (iVar2 == 0) {
    return 2;
  }
  tls1_get_supported_groups(param_1,&local_10,&local_18);
  iVar2 = WPACKET_put_bytes__(param_2,10,2);
  if (((iVar2 == 0) || (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 == 0)) ||
     (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 == 0)) {
    ossl_statem_fatal(param_1,0x50,0x1e0,0x44,"ssl\\statem\\extensions_clnt.c",0xcf);
    return 0;
  }
  if (local_18 != 0) {
    do {
      uVar1 = *(undefined2 *)(local_10 + uVar4 * 2);
      iVar2 = tls_curve_allowed(param_1,uVar1,0x20004);
      if ((iVar2 != 0) && (iVar2 = WPACKET_put_bytes__(param_2,uVar1,2), iVar2 == 0)) {
        uVar5 = 0xda;
        goto LAB_14f69e931;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_18);
  }
  iVar2 = WPACKET_close(param_2);
  if ((iVar2 == 0) || (iVar2 = WPACKET_close(param_2), iVar2 == 0)) {
    uVar5 = 0xe2;
LAB_14f69e931:
    ossl_statem_fatal(param_1,0x50,0x1e0,0x44,"ssl\\statem\\extensions_clnt.c",uVar5);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

// tls_construct_ctos_supported_versions @ 14f69e9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_supported_versions(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_14 [3];
  
  local_14[1] = 0x4f69e9b0;
  local_14[2] = 1;
  iVar1 = ssl_get_min_max_version(param_1,local_14,&local_18,0);
  if (iVar1 == 0) {
    if (local_18 < 0x304) {
      return 2;
    }
    iVar1 = WPACKET_put_bytes__(param_2,0x2b,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_start_sub_packet_len__(param_2,1);
        if (iVar1 != 0) {
          iVar1 = local_18;
          if (local_14[0] <= local_18) {
            do {
              iVar2 = WPACKET_put_bytes__(param_2,(longlong)iVar1,2);
              if (iVar2 == 0) {
                uVar3 = 0x22a;
                goto LAB_14f69eace;
              }
              iVar1 = iVar1 + -1;
            } while (local_14[0] <= iVar1);
          }
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
          uVar3 = 0x231;
LAB_14f69eace:
          ossl_statem_fatal(param_1,0x50,0x1e1,0x44,"ssl\\statem\\extensions_clnt.c",uVar3);
          return 0;
        }
      }
    }
    uVar3 = 0x222;
    iVar1 = 0x44;
  }
  else {
    uVar3 = 0x212;
  }
  ossl_statem_fatal(param_1,0x50,0x1e1,iVar1,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}

// tls_construct_ctos_use_srtp @ 14f69eb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 tls_construct_ctos_use_srtp(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0x14f69eb36;
  lVar3 = SSL_get_srtp_profiles();
  if (lVar3 == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xe,2);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = OPENSSL_sk_num(lVar3);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            lVar4 = OPENSSL_sk_value(lVar3,iVar5);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (lVar4 == 0) {
LAB_14f69ec34:
              uVar6 = CONCAT44(uVar7,0x1c5);
              goto LAB_14f69ec46;
            }
            iVar2 = WPACKET_put_bytes__(param_2,*(undefined4 *)(lVar4 + 8),2);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (iVar2 == 0) goto LAB_14f69ec34;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
        iVar1 = WPACKET_close(param_2);
        if (((iVar1 != 0) && (iVar1 = WPACKET_put_bytes__(param_2,0,1), iVar1 != 0)) &&
           (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
          return 1;
        }
        uVar6 = CONCAT44(uVar7,0x1ce);
LAB_14f69ec46:
        ossl_statem_fatal(param_1,0x50,0x1e2,0x44,"ssl\\statem\\extensions_clnt.c",uVar6);
        return 0;
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1e2,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar7,0x1ba));
  return 0;
}

// tls_parse_stoc_alpn @ 14f69ecc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_alpn(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint local_res8;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x400) == 0) {
    ossl_statem_fatal(param_1,0x6e,0x243,0x6e,"ssl\\statem\\extensions_clnt.c",0x100000665);
    return 0;
  }
  uVar9 = param_2[1];
  if (uVar9 < 2) {
LAB_14f69ef2a:
    uVar7 = 0x100000672;
  }
  else {
    puVar4 = (undefined1 *)*param_2;
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    uVar1 = uVar9 - 2;
    *param_2 = (longlong)(puVar4 + 2);
    param_2[1] = uVar1;
    if (uVar1 != CONCAT11(uVar2,uVar3)) goto LAB_14f69ef2a;
    if (uVar1 != 0) {
      local_res8 = (uint)(byte)puVar4[2];
      *param_2 = (longlong)(puVar4 + 3);
      param_2[1] = uVar9 - 3;
    }
    uVar9 = (ulonglong)local_res8;
    if ((uVar1 == 0) || (param_2[1] != uVar9)) goto LAB_14f69ef2a;
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                "ssl\\statem\\extensions_clnt.c",0x675);
    uVar7 = CRYPTO_malloc(uVar9,"ssl\\statem\\extensions_clnt.c",0x676);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = uVar7;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0);
    if (lVar5 == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000) = 0;
      uVar8 = 0x50;
      uVar7 = 0x67a;
      uVar10 = 0x44;
      goto LAB_14f69ef43;
    }
    iVar6 = FUN_14f69c200(param_2,lVar5,uVar9);
    if (iVar6 != 0) {
      *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 1000) = uVar9;
      lVar5 = *(longlong *)(param_1 + 0x508);
      if (((*(void **)(lVar5 + 0x230) == (void *)0x0) || (*(ulonglong *)(lVar5 + 0x238) != uVar9))
         || (iVar6 = memcmp(*(void **)(lVar5 + 0x230),
                            *(void **)(*(longlong *)(param_1 + 0xa8) + 0x3e0),uVar9), iVar6 != 0)) {
        *(undefined4 *)(param_1 + 0x714) = 0;
      }
      if (*(int *)(param_1 + 200) != 0) {
        return 1;
      }
      if (*(longlong *)(lVar5 + 0x230) == 0) {
        uVar7 = CRYPTO_memdup(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),
                              "ssl\\statem\\extensions_clnt.c",0x696);
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230) = uVar7;
        lVar5 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(lVar5 + 0x230) != 0) {
          *(undefined8 *)(lVar5 + 0x238) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000);
          return 1;
        }
        uVar8 = 0x50;
        *(undefined8 *)(lVar5 + 0x238) = 0;
        uVar7 = 0x69a;
        uVar10 = 0x44;
      }
      else {
        uVar8 = 0x50;
        uVar7 = 0x692;
        uVar10 = 0x44;
      }
      goto LAB_14f69ef43;
    }
    uVar7 = 0x67f;
  }
  uVar10 = 0x6e;
  uVar8 = 0x32;
LAB_14f69ef43:
  ossl_statem_fatal(param_1,uVar8,0x243,uVar10,"ssl\\statem\\extensions_clnt.c",uVar7);
  return 0;
}

// tls_parse_stoc_cookie @ 14f69ef80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_cookie(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    puVar3 = puVar4 + 2;
    uVar2 = (ulonglong)CONCAT11(*puVar4,puVar4[1]);
    if (uVar2 <= uVar5 - 2) {
      puVar4 = puVar3 + uVar2;
      uVar5 = (uVar5 - 2) - uVar2;
      if (uVar5 == 0) {
        *param_2 = puVar4;
        param_2[1] = 0;
        CRYPTO_free(*(undefined8 *)(param_1 + 0x718),
                    "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                    ,0x1c5);
        *(undefined8 *)(param_1 + 0x718) = 0;
        *(undefined8 *)(param_1 + 0x720) = 0;
        if (uVar2 != 0) {
          lVar1 = CRYPTO_memdup(puVar3,uVar2,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1ce);
          *(longlong *)(param_1 + 0x718) = lVar1;
          if (lVar1 == 0) goto LAB_14f69f065;
          *(ulonglong *)(param_1 + 0x720) = uVar2;
        }
        return 1;
      }
    }
  }
LAB_14f69f065:
  ossl_statem_fatal(param_1,0x32,0x216,0x9f,"ssl\\statem\\extensions_clnt.c",0x781,puVar4,uVar5);
  return 0;
}

// tls_parse_stoc_early_data @ 14f69f0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_early_data(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if (param_3 == 0x2000) {
    if (3 < (ulonglong)param_2[1]) {
      puVar6 = (undefined1 *)*param_2;
      uVar2 = puVar6[1];
      uVar3 = *puVar6;
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      *param_2 = (longlong)(puVar6 + 4);
      lVar1 = param_2[1] - 4;
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        *(uint *)(*(longlong *)(param_1 + 0x508) + 0x228) =
             CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5);
        return 1;
      }
    }
    uVar7 = 0x32;
    uVar9 = 0x791;
    uVar8 = 0xae;
  }
  else {
    if (param_2[1] == 0) {
      if ((*(int *)(param_1 + 0x714) != 0) && (*(int *)(param_1 + 200) != 0)) {
        *(undefined4 *)(param_1 + 0x710) = 2;
        return 1;
      }
      uVar9 = 0x7a8;
      uVar7 = 0x2f;
    }
    else {
      uVar9 = 0x79c;
      uVar7 = 0x32;
    }
    uVar8 = 0x6e;
  }
  ossl_statem_fatal(param_1,uVar7,0x21a,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9,0x14f69f0ba);
  return 0;
}

// tls_parse_stoc_ec_pt_formats @ 14f69f1b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_ec_pt_formats(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined4 uVar3;
  ulonglong _Size;
  byte *_Src;
  byte *pbVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  pbVar4 = (byte *)*param_2;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
LAB_14f69f2c5:
    uVar7 = 0x561;
    uVar5 = 0x6e;
  }
  else {
    bVar1 = *pbVar4;
    uVar2 = (ulonglong)bVar1;
    _Src = pbVar4 + 1;
    _Size = (ulonglong)(uint)bVar1;
    if (lVar6 - 1U < uVar2) goto LAB_14f69f2c5;
    pbVar4 = _Src + uVar2;
    lVar6 = (lVar6 - 1U) - uVar2;
    if (lVar6 != 0) goto LAB_14f69f2c5;
    *param_2 = pbVar4;
    param_2[1] = 0;
    if (*(int *)(param_1 + 200) != 0) {
      return 1;
    }
    if (bVar1 != 0) {
      *(undefined8 *)(param_1 + 0x690) = 0;
      CRYPTO_free(*(undefined8 *)(param_1 + 0x698),"ssl\\statem\\extensions_clnt.c",0x56d);
      _Dst = (void *)CRYPTO_malloc(_Size,"ssl\\statem\\extensions_clnt.c",0x56e);
      *(void **)(param_1 + 0x698) = _Dst;
      if (_Dst != (void *)0x0) {
        *(ulonglong *)(param_1 + 0x690) = _Size;
        memcpy(_Dst,_Src,_Size);
        return 1;
      }
      *(undefined8 *)(param_1 + 0x690) = 0;
      uVar3 = 0x50;
      uVar7 = 0x572;
      uVar5 = 0x44;
      goto LAB_14f69f2df;
    }
    uVar7 = 0x568;
    uVar5 = 0x10f;
  }
  uVar3 = 0x32;
LAB_14f69f2df:
  ossl_statem_fatal(param_1,uVar3,0x244,uVar5,"ssl\\statem\\extensions_clnt.c",uVar7,pbVar4,lVar6);
  return 0;
}

// tls_parse_stoc_key_share @ 14f69f390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_key_share(longlong param_1,longlong *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong local_res8;
  undefined4 uVar13;
  undefined1 *local_28;
  ulonglong uStack_20;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if ((lVar3 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0)) {
    ossl_statem_fatal(param_1,0x50,0x1bd,0x44,"ssl\\statem\\extensions_clnt.c",0x71c);
    return 0;
  }
  if ((ulonglong)param_2[1] < 2) {
    ossl_statem_fatal(param_1,0x32,0x1bd,0x9f,"ssl\\statem\\extensions_clnt.c",0x722);
    return 0;
  }
  puVar7 = (undefined1 *)*param_2;
  lVar8 = param_2[1] - 2;
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  sVar4 = CONCAT11(uVar1,uVar2);
  param_2[1] = lVar8;
  *param_2 = (longlong)(puVar7 + 2);
  if ((param_3 >> 0xb & 1) == 0) {
    if (sVar4 == *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406)) {
      local_28 = (undefined1 *)*param_2;
      uStack_20 = param_2[1];
      if (uStack_20 < 2) {
LAB_14f69f68f:
        ossl_statem_fatal(param_1,0x32,0x1bd,0x9f,"ssl\\statem\\extensions_clnt.c",0x75a);
        return 0;
      }
      puVar7 = local_28 + 2;
      uVar6 = (uint)CONCAT11(*local_28,local_28[1]);
      uVar10 = (ulonglong)uVar6;
      if (uStack_20 - 2 < uVar10) goto LAB_14f69f68f;
      local_28 = puVar7 + uVar10;
      uStack_20 = (uStack_20 - 2) - uVar10;
      if (uStack_20 != 0) goto LAB_14f69f68f;
      *param_2 = (longlong)local_28;
      param_2[1] = 0;
      if (uVar6 == 0) goto LAB_14f69f68f;
      lVar8 = EVP_PKEY_new();
      if ((lVar8 == 0) || (iVar5 = EVP_PKEY_copy_parameters(lVar8,lVar3), iVar5 < 1)) {
        uVar9 = 0x50;
        uVar11 = 0x761;
        uVar12 = 0x41;
      }
      else {
        iVar5 = EVP_PKEY_set1_tls_encodedpoint(lVar8,puVar7,uVar6);
        if (iVar5 != 0) {
          iVar5 = ssl_derive(param_1,lVar3,lVar8,1);
          if (iVar5 != 0) {
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar8;
            return 1;
          }
          goto LAB_14f69f61d;
        }
        uVar11 = 0x768;
        uVar9 = 0x2f;
        uVar12 = 0x132;
      }
      ossl_statem_fatal(param_1,uVar9,0x1bd,uVar12,"ssl\\statem\\extensions_clnt.c",uVar11);
LAB_14f69f61d:
      EVP_PKEY_free(lVar8);
      return 0;
    }
    uVar13 = 0x753;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    local_res8 = 0;
    if (lVar8 != 0) {
      uVar9 = 0x32;
      uVar13 = 0x72c;
      uVar11 = 0x9f;
      goto LAB_14f69f520;
    }
    if (sVar4 == *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406)) {
      uVar9 = 0x2f;
      uVar13 = 0x736;
      uVar11 = 0x6c;
      goto LAB_14f69f520;
    }
    tls1_get_supported_groups(param_1,&local_res8,&local_28);
    if (local_28 != (undefined1 *)0x0) {
      do {
        if (sVar4 == *(short *)(local_res8 + (longlong)puVar7 * 2)) {
          if ((puVar7 < local_28) &&
             (iVar5 = tls_curve_allowed(param_1,CONCAT11(uVar1,uVar2),0x20004), iVar5 != 0)) {
            *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = sVar4;
            EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
            return 1;
          }
          break;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 < local_28);
    }
    uVar13 = 0x743;
  }
  uVar9 = 0x2f;
  uVar11 = 0x6c;
LAB_14f69f520:
  ossl_statem_fatal(param_1,uVar9,0x1bd,uVar11,"ssl\\statem\\extensions_clnt.c",uVar13);
  return 0;
}

// tls_parse_stoc_maxfragmentlen @ 14f69f730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_maxfragmentlen(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_2[1] == 1) {
    bVar1 = *(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = 0;
    if (bVar1 - 1 < 4) {
      if (bVar1 == *(byte *)(param_1 + 0x72c)) {
        *(byte *)(*(longlong *)(param_1 + 0x508) + 0x240) = bVar1;
        return 1;
      }
      uVar4 = 0x52b;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
    else {
      uVar4 = 0x51e;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
  }
  else {
    uVar2 = 0x32;
    uVar4 = 0x516;
    uVar3 = 0x6e;
  }
  ossl_statem_fatal(param_1,uVar2,0x245,uVar3,"ssl\\statem\\extensions_clnt.c",uVar4,0x14f69f73a);
  return 0;
}

// tls_parse_stoc_npn @ 14f69f7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_npn(longlong param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte local_res8 [8];
  undefined8 uVar9;
  byte *local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  local_18._8_8_ = 0x14f69f7fc;
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)) {
    return 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x598);
  if (*(longlong *)(lVar2 + 0x290) == 0) {
    ossl_statem_fatal(param_1,0x6e,0x246,0x6e,"ssl\\statem\\extensions_clnt.c",0x634);
    return 0;
  }
  local_18 = *param_2;
  pbVar3 = local_18._0_8_;
  lVar5 = local_18._8_8_;
  if (local_18._8_8_ == 0) {
LAB_14f69f91a:
    iVar4 = (**(code **)(lVar2 + 0x290))
                      (param_1,&local_28,local_res8,*(undefined8 *)*param_2,
                       *(ulonglong *)(*param_2 + 8) & 0xffffffff,*(undefined8 *)(lVar2 + 0x298));
    if (iVar4 == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6f8),"ssl\\statem\\extensions_clnt.c",0x64c);
      _Dst = (void *)CRYPTO_malloc(local_res8[0],"ssl\\statem\\extensions_clnt.c",0x64d);
      *(void **)(param_1 + 0x6f8) = _Dst;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_28,(ulonglong)local_res8[0]);
        *(ulonglong *)(param_1 + 0x700) = (ulonglong)local_res8[0];
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 1;
        return 1;
      }
      *(undefined8 *)(param_1 + 0x700) = 0;
      uVar7 = 0x50;
      uVar9 = 0x651;
      uVar8 = 0x44;
    }
    else {
      uVar7 = 0x28;
      uVar9 = 0x644;
      uVar8 = 0x6e;
    }
    ossl_statem_fatal(param_1,uVar7,0x246,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9);
    return 0;
  }
  while( true ) {
    local_28 = pbVar3;
    uStack_20 = lVar5;
    if (local_18._8_8_ == 0) break;
    bVar1 = *(byte *)local_18._0_8_;
    uVar6 = (ulonglong)bVar1;
    if (lVar5 - 1U < uVar6) break;
    local_28 = (byte *)(local_18._0_8_ + uVar6 + 1);
    lVar5 = (lVar5 - 1U) - uVar6;
    uStack_20._0_4_ = (undefined4)lVar5;
    uStack_20._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    local_18._8_4_ = (undefined4)uStack_20;
    local_18._0_8_ = local_28;
    local_18._12_4_ = uStack_20._4_4_;
    uStack_20 = lVar5;
    if (bVar1 == 0) break;
    if (lVar5 == 0) goto LAB_14f69f91a;
    pbVar3 = local_28;
  }
  ossl_statem_fatal(param_1,0x32,0x235,0x6e,"ssl\\statem\\extensions_clnt.c",0x61e);
  return 0;
}

// tls_parse_stoc_psk @ 14f69fa20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_psk(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (1 < (ulonglong)param_2[1]) {
    puVar2 = (undefined1 *)*param_2;
    uVar3 = CONCAT11(*puVar2,puVar2[1]);
    *param_2 = (longlong)(puVar2 + 2);
    lVar1 = param_2[1] - 2;
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      if ((uint)uVar3 < *(uint *)(param_1 + 0x730)) {
        if ((uVar3 == 0) &&
           ((*(longlong *)(param_1 + 0x510) == 0 || (*(uint *)(param_1 + 0x730) == 2)))) {
          *(undefined4 *)(param_1 + 200) = 1;
          SSL_SESSION_free();
          *(undefined8 *)(param_1 + 0x510) = 0;
          return 1;
        }
        lVar1 = *(longlong *)(param_1 + 0x510);
        if (lVar1 != 0) {
          if ((((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) != 0) ||
              (*(int *)(*(longlong *)(param_1 + 0x508) + 0x228) != 0)) ||
             (*(int *)(lVar1 + 0x228) == 0)) {
            uVar7 = *(undefined8 *)(lVar1 + 0x18);
            *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(lVar1 + 0x10);
            *(undefined8 *)(param_1 + 0x13c) = uVar7;
            uVar7 = *(undefined8 *)(lVar1 + 0x28);
            *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(param_1 + 0x14c) = uVar7;
            uVar5 = *(undefined4 *)(lVar1 + 0x34);
            uVar6 = *(undefined4 *)(lVar1 + 0x38);
            uVar4 = *(undefined4 *)(lVar1 + 0x3c);
            *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar1 + 0x30);
            *(undefined4 *)(param_1 + 0x158) = uVar5;
            *(undefined4 *)(param_1 + 0x15c) = uVar6;
            *(undefined4 *)(param_1 + 0x160) = uVar4;
            uVar5 = *(undefined4 *)(lVar1 + 0x44);
            uVar6 = *(undefined4 *)(lVar1 + 0x48);
            uVar4 = *(undefined4 *)(lVar1 + 0x4c);
            *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(lVar1 + 0x40);
            *(undefined4 *)(param_1 + 0x168) = uVar5;
            *(undefined4 *)(param_1 + 0x16c) = uVar6;
            *(undefined4 *)(param_1 + 0x170) = uVar4;
          }
          SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
          *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x510);
          *(undefined8 *)(param_1 + 0x510) = 0;
          *(undefined4 *)(param_1 + 200) = 1;
          if (uVar3 != 0) {
            *(undefined4 *)(param_1 + 0x714) = 0;
          }
          return 1;
        }
        uVar7 = 0x1000007d2;
        uVar5 = 0x50;
        uVar6 = 0x44;
      }
      else {
        uVar5 = 0x2f;
        uVar7 = 0x1000007bf;
        uVar6 = 0x72;
      }
      goto LAB_14f69fb97;
    }
  }
  uVar5 = 0x32;
  uVar7 = 0x1000007b9;
  uVar6 = 0x9f;
LAB_14f69fb97:
  ossl_statem_fatal(param_1,uVar5,0x1f6,uVar6,"ssl\\statem\\extensions_clnt.c",uVar7);
  return 0;
}

// tls_parse_stoc_renegotiate @ 14f69fbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_renegotiate(longlong param_1,undefined8 *param_2)

{
  byte *_Buf1;
  ulonglong uVar1;
  byte *_Buf1_00;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x388);
  uVar1 = lVar3 + lVar2;
  if ((uVar1 != 0) && ((lVar3 == 0 || ((uVar1 != 0 && (lVar2 == 0)))))) {
    ossl_statem_fatal(param_1,0x50,0x1c0,0x44,"ssl\\statem\\extensions_clnt.c",0x1000004e1);
    return 0;
  }
  if (param_2[1] == 0) {
    uVar9 = 0x1000004e8;
  }
  else {
    uVar7 = param_2[1] - 1;
    uVar5 = (ulonglong)*(byte *)*param_2;
    _Buf1 = (byte *)*param_2 + 1;
    *param_2 = _Buf1;
    param_2[1] = uVar7;
    if (uVar7 == uVar5) {
      if (uVar5 == uVar1) {
        uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388);
        if (uVar1 <= uVar7) {
          _Buf1_00 = _Buf1 + uVar1;
          uVar7 = uVar7 - uVar1;
          *param_2 = _Buf1_00;
          param_2[1] = uVar7;
          lVar2 = *(longlong *)(param_1 + 0xa8);
          iVar4 = memcmp(_Buf1,(void *)(lVar2 + 0x348),*(size_t *)(lVar2 + 0x388));
          if (iVar4 == 0) {
            uVar1 = *(ulonglong *)(lVar2 + 0x3d0);
            if (uVar1 <= uVar7) {
              *param_2 = _Buf1_00 + uVar1;
              param_2[1] = uVar7 - uVar1;
              lVar2 = *(longlong *)(param_1 + 0xa8);
              iVar4 = memcmp(_Buf1_00,(void *)(lVar2 + 0x390),*(size_t *)(lVar2 + 0x3d0));
              if (iVar4 == 0) {
                *(undefined4 *)(lVar2 + 0x3d8) = 1;
                return 1;
              }
            }
            uVar9 = 0x506;
            goto LAB_14f69fd69;
          }
        }
        uVar9 = 0x4fe;
LAB_14f69fd69:
        ossl_statem_fatal(param_1,0x2f,0x1c0,0x151,"ssl\\statem\\extensions_clnt.c",uVar9);
        return 0;
      }
      uVar9 = 0x1000004f6;
      uVar6 = 0x2f;
      uVar8 = 0x151;
      goto LAB_14f69fda3;
    }
    uVar9 = 0x1000004ef;
  }
  uVar6 = 0x32;
  uVar8 = 0x150;
LAB_14f69fda3:
  ossl_statem_fatal(param_1,uVar6,0x1c0,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9);
  return 0;
}

// tls_parse_stoc_sct @ 14f69fde0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_stoc_sct(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  if (param_3 == 0x4000) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x748) == 0) {
    lVar3 = custom_ext_find(*(longlong *)(param_1 + 0x488) + 0x1d8,~(param_3 >> 7) & 2,0x12);
    if (lVar3 != 0) {
      iVar1 = custom_ext_parse(param_1,param_3,0x12,*param_2,param_2[1],param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x6e;
    uVar5 = CONCAT44(uVar6,0x5fe);
    uVar6 = 0x6e;
  }
  else {
    lVar3 = param_2[1];
    CRYPTO_free(*(undefined8 *)(param_1 + 0x648),"ssl\\statem\\extensions_clnt.c",0x5e0);
    *(short *)(param_1 + 0x650) = (short)lVar3;
    *(undefined8 *)(param_1 + 0x648) = 0;
    if (lVar3 == 0) {
      return 1;
    }
    lVar2 = CRYPTO_malloc(lVar3,"ssl\\statem\\extensions_clnt.c",0x5e5);
    *(longlong *)(param_1 + 0x648) = lVar2;
    if (lVar2 == 0) {
      *(undefined2 *)(param_1 + 0x650) = 0;
      uVar4 = 0x50;
      uVar5 = CONCAT44(uVar6,0x5e9);
      uVar6 = 0x41;
    }
    else {
      iVar1 = FUN_14f69c200(param_2,lVar2,lVar3);
      if (iVar1 != 0) {
        return 1;
      }
      uVar5 = CONCAT44(uVar6,0x5ee);
      uVar4 = 0x50;
      uVar6 = 0x44;
    }
  }
  ossl_statem_fatal(param_1,uVar4,0x234,uVar6,"ssl\\statem\\extensions_clnt.c",uVar5);
  return 0;
}

// tls_parse_stoc_server_name @ 14f69ff80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_server_name(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x638) == 0) {
    uVar3 = 0x10000053d;
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar1 = 0x32;
      uVar3 = 0x100000543;
      uVar2 = 0x6e;
      goto LAB_14f69ffba;
    }
    if (*(int *)(param_1 + 200) != 0) {
      return 1;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208) == 0) {
      uVar1 = CRYPTO_strdup(*(longlong *)(param_1 + 0x638),"ssl\\statem\\extensions_clnt.c",0x54d);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x208) = uVar1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208) != 0) {
        return 1;
      }
      uVar3 = CONCAT44(uVar2,0x550);
    }
    else {
      uVar3 = 0x10000054a;
    }
  }
  uVar1 = 0x50;
  uVar2 = 0x44;
LAB_14f69ffba:
  ossl_statem_fatal(param_1,uVar1,0x247,uVar2,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}

// tls_parse_stoc_session_ticket @ 14f6a0080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_session_ticket(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((*(code **)(param_1 + 0x6c8) == (code *)0x0) ||
     (uVar4 = 1,
     iVar1 = (**(code **)(param_1 + 0x6c8))
                       (param_1,*param_2,*(undefined4 *)(param_2 + 1),
                        *(undefined8 *)(param_1 + 0x6d0)), iVar1 != 0)) {
    iVar1 = tls_use_ticket(param_1);
    if (iVar1 == 0) {
      uVar2 = 0x6e;
      uVar3 = CONCAT44(uVar4,0x593);
    }
    else {
      if (param_2[1] == 0) {
        *(undefined4 *)(param_1 + 0x678) = 1;
        return 1;
      }
      uVar3 = CONCAT44(uVar4,0x598);
      uVar2 = 0x32;
    }
  }
  else {
    uVar3 = CONCAT44(uVar4,0x58d);
    uVar2 = 0x28;
  }
  ossl_statem_fatal(param_1,uVar2,0x248,0x6e,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}

// tls_parse_stoc_status_request @ 14f6a0150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_stoc_status_request
          (longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_3 != 0x4000) {
    if (*(int *)(param_1 + 0x640) != 1) {
      ossl_statem_fatal(param_1,0x6e,0x249,0x6e,"ssl\\statem\\extensions_clnt.c",0x5b1,0x14f6a015a);
      return 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    uVar3 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
    if ((((uVar3 != 0) || (*piVar1 < 0x304)) || (*piVar1 == 0x10000)) &&
       (*(longlong *)(param_2 + 8) != 0)) {
      ossl_statem_fatal(param_1,0x32,0x249,0x6e,"ssl\\statem\\extensions_clnt.c",0x5b6,0x14f6a015a);
      return 0;
    }
    if (((uVar3 == 0) && (0x303 < *piVar1)) && (*piVar1 != 0x10000)) {
      if (param_5 == 0) {
        uVar2 = tls_process_cert_status_body(param_1,param_2);
        return uVar2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x654) = 1;
    }
  }
  return 1;
}

// tls_parse_stoc_supported_versions @ 14f6a0250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_supported_versions(undefined4 *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    uVar2 = puVar4[1];
    uVar3 = *puVar4;
    *param_2 = (longlong)(puVar4 + 2);
    lVar1 = param_2[1] - 2;
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      if (CONCAT11(uVar3,uVar2) == 0x304) {
        if (param_3 == 0x800) {
          return 1;
        }
        *param_1 = 0x304;
        return 1;
      }
      uVar7 = 0x703;
      uVar5 = 0x2f;
      uVar6 = 0x74;
      goto LAB_14f6a02d2;
    }
  }
  uVar5 = 0x32;
  uVar7 = 0x6f8;
  uVar6 = 0x9f;
LAB_14f6a02d2:
  ossl_statem_fatal(param_1,uVar5,0x264,uVar6,"ssl\\statem\\extensions_clnt.c",uVar7,0x14f6a025a);
  return 0;
}

// tls_parse_stoc_use_srtp @ 14f6a0300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_use_srtp(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar10 = 0x14f6a0310;
  uVar4 = param_2[1];
  if (1 < uVar4) {
    puVar5 = (undefined1 *)*param_2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    *param_2 = (longlong)(puVar5 + 2);
    param_2[1] = uVar4 - 2;
    if ((CONCAT11(uVar1,uVar2) == 2) && (1 < uVar4 - 2)) {
      uVar1 = puVar5[2];
      uVar2 = puVar5[3];
      *param_2 = (longlong)(puVar5 + 4);
      param_2[1] = uVar4 - 4;
      if (uVar4 - 4 != 0) {
        cVar3 = puVar5[4];
        *param_2 = (longlong)(puVar5 + 5);
        param_2[1] = uVar4 - 5;
        if (uVar4 - 5 == 0) {
          if (cVar3 != '\0') {
            ossl_statem_fatal(param_1,0x2f,0x1be,0x160,"ssl\\statem\\extensions_clnt.c",0x1000006b8)
            ;
            return 0;
          }
          lVar7 = SSL_get_srtp_profiles(param_1);
          if (lVar7 != 0) {
            iVar9 = 0;
            iVar6 = OPENSSL_sk_num(lVar7);
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (0 < iVar6) {
              do {
                lVar8 = OPENSSL_sk_value(lVar7,iVar9);
                if (*(uint *)(lVar8 + 8) == (uint)CONCAT11(uVar1,uVar2)) {
                  *(longlong *)(param_1 + 0x778) = lVar8;
                  return 1;
                }
                iVar9 = iVar9 + 1;
                iVar6 = OPENSSL_sk_num(lVar7);
                uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              } while (iVar9 < iVar6);
            }
            ossl_statem_fatal(param_1,0x32,0x1be,0x161,"ssl\\statem\\extensions_clnt.c",
                              CONCAT44(uVar11,0x6d2));
            return 0;
          }
          ossl_statem_fatal(param_1,0x32,0x1be,0x167,"ssl\\statem\\extensions_clnt.c",0x6c0);
          return 0;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1be,0x161,"ssl\\statem\\extensions_clnt.c",0x1000006b1);
  return 0;
}

// FUN_14f6a04e0 @ 14f6a04e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a04e0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong local_res8;
  ulonglong local_res10;
  ulonglong uVar7;
  
  uVar5 = 0;
  bVar1 = false;
  local_res8 = 0;
  if (*param_1 != 0x300) {
    uVar3 = SSL_get1_supported_ciphers();
    iVar2 = OPENSSL_sk_num(uVar3);
    uVar7 = uVar5;
    if (0 < iVar2) {
      do {
        lVar4 = OPENSSL_sk_value(uVar3,uVar7);
        if ((((*(byte *)(lVar4 + 0x1c) & 0x84) != 0) || ((*(byte *)(lVar4 + 0x20) & 8) != 0)) ||
           (0x303 < *(int *)(lVar4 + 0x2c))) {
          bVar1 = true;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < iVar2);
    }
    OPENSSL_sk_free(uVar3);
    if ((bVar1) && (tls1_get_supported_groups(param_1,&local_res8,&local_res10), local_res10 != 0))
    {
      do {
        iVar2 = tls_curve_allowed(param_1,*(undefined2 *)(local_res8 + uVar5 * 2),0x20004);
        if (iVar2 != 0) {
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_res10);
    }
  }
  return 0;
}

