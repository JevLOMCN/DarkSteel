// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 17

// SSL_CTX_add_client_custom_ext @ 14f6604b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_add_client_custom_ext
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f660810(param_1,0,param_2,0x1d0,param_3,param_4,param_5,param_6,param_7);
  return;
}

// SSL_CTX_add_custom_ext @ 14f660510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_add_custom_ext
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_14f6606c0(param_1,2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// SSL_CTX_add_server_custom_ext @ 14f660580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_add_server_custom_ext
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14f660810(param_1,1,param_2,0x1d0,param_3,param_4,param_5,param_6,param_7);
  return;
}

// SSL_CTX_has_client_custom_ext @ 14f6605e0

bool SSL_CTX_has_client_custom_ext(longlong param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)0x0;
  puVar1 = *(ushort **)(*(longlong *)(param_1 + 0x138) + 0x1e0);
  puVar2 = *(ushort **)(*(longlong *)(param_1 + 0x138) + 0x1d8);
  puVar3 = puVar5;
  puVar4 = puVar5;
  if (puVar1 != (ushort *)0x0) {
    do {
      if ((param_2 == *puVar2) && (puVar3 = puVar2, (*(uint *)(puVar2 + 2) & 0xfffffffd) == 0))
      break;
      puVar4 = (ushort *)((longlong)puVar4 + 1);
      puVar2 = puVar2 + 0x1c;
      puVar3 = puVar5;
    } while (puVar4 < puVar1);
  }
  return puVar3 != (ushort *)0x0;
}

// SSL_extension_supported @ 14f660630

undefined8 SSL_extension_supported(uint param_1)

{
  if (param_1 < 0x3375) {
    if (param_1 != 0x3374) {
      switch(param_1) {
      case 0:
      case 1:
      case 5:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x10:
      case 0x12:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x23:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2f:
      case 0x31:
      case 0x33:
        break;
      default:
        goto switchD_14f66065a_caseD_2;
      }
    }
  }
  else if (param_1 != 0xff01) {
switchD_14f66065a_caseD_2:
    return 0;
  }
  return 1;
}

// FUN_14f6606c0 @ 14f6606c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6606c0(longlong param_1,int param_2,uint param_3,undefined4 param_4,longlong param_5,
             longlong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort *puVar3;
  int iVar4;
  longlong lVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (((((param_5 != 0) || (param_6 == 0)) &&
       ((param_3 != 0x12 || ((-1 < (char)param_4 || (iVar4 = SSL_CTX_ct_is_enabled(), iVar4 == 0))))
       )) && ((iVar4 = SSL_extension_supported(param_3), iVar4 == 0 || (param_3 == 0x12)))) &&
     (param_3 < 0x10000)) {
    uVar2 = *(ulonglong *)(lVar1 + 0x1e0);
    uVar8 = 0;
    puVar3 = *(ushort **)(lVar1 + 0x1d8);
    puVar6 = puVar3;
    if (uVar2 != 0) {
      do {
        if (param_3 == *puVar6) {
          if (param_2 == 2) {
            return 0;
          }
          if (param_2 == *(int *)(puVar6 + 2)) {
            return 0;
          }
          if (*(int *)(puVar6 + 2) == 2) {
            return 0;
          }
        }
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 0x1c;
      } while (uVar8 < uVar2);
    }
    lVar5 = CRYPTO_realloc(puVar3,(uVar2 + 1) * 0x38,"ssl\\statem\\extensions_cust.c",0x185);
    if (lVar5 != 0) {
      *(longlong *)(lVar1 + 0x1d8) = lVar5;
      puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x1e0) * 0x38 + lVar5);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[5] = param_8;
      puVar7[4] = param_7;
      puVar7[6] = param_9;
      *(int *)((longlong)puVar7 + 4) = param_2;
      *(undefined4 *)(puVar7 + 1) = param_4;
      puVar7[2] = param_5;
      puVar7[3] = param_6;
      *(short *)puVar7 = (short)param_3;
      *(longlong *)(lVar1 + 0x1e0) = *(longlong *)(lVar1 + 0x1e0) + 1;
      return 1;
    }
  }
  return 0;
}

// FUN_14f660810 @ 14f660810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f660810(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f66082e;
  puVar2 = (undefined8 *)CRYPTO_malloc(0x18,"ssl\\statem\\extensions_cust.c",0x1a1);
  puVar3 = (undefined8 *)CRYPTO_malloc(0x10,"ssl\\statem\\extensions_cust.c",0x1a3);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)0x0)) {
    CRYPTO_free(puVar2,"ssl\\statem\\extensions_cust.c",0x1a7);
    CRYPTO_free(puVar3,"ssl\\statem\\extensions_cust.c",0x1a8);
    iVar1 = 0;
  }
  else {
    *puVar2 = param_7;
    puVar2[1] = param_5;
    puVar2[2] = param_6;
    *puVar3 = param_9;
    puVar3[1] = param_8;
    iVar1 = FUN_14f6606c0(param_1,param_2,param_3,param_4,FUN_14f660bd0,FUN_14f660c80,puVar2,
                          FUN_14f660e90,puVar3,uVar4);
    if (iVar1 == 0) {
      CRYPTO_free(puVar2,"ssl\\statem\\extensions_cust.c",0x1bb);
      CRYPTO_free(puVar3,"ssl\\statem\\extensions_cust.c",0x1bc);
    }
  }
  return iVar1;
}

// custom_ext_add @ 14f660980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
custom_ext_add(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  undefined8 uVar8;
  undefined8 local_48;
  longlong local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x488);
  uVar6 = 0;
  uVar7 = uVar6;
  if (*(longlong *)(lVar2 + 0x1e0) != 0) {
    do {
      lVar3 = *(longlong *)(lVar2 + 0x1d8);
      local_48 = 0;
      local_40 = 0;
      iVar5 = should_add_extension(param_1,*(undefined4 *)(uVar7 + 8 + lVar3),param_2,param_6);
      if (((iVar5 != 0) &&
          (((param_2 & 0x1f00) == 0 || ((*(byte *)(uVar7 + 0xc + lVar3) & 1) != 0)))) &&
         (((param_2 & 0x80) != 0 || (*(longlong *)(uVar7 + 0x10 + lVar3) != 0)))) {
        pcVar4 = *(code **)(uVar7 + 0x10 + lVar3);
        if (pcVar4 != (code *)0x0) {
          iVar5 = (*pcVar4)(param_1,*(undefined2 *)(uVar7 + lVar3),param_2,&local_48,&local_40,
                            param_4,param_5,local_res8,*(undefined8 *)(uVar7 + 0x20 + lVar3));
          if (iVar5 < 0) {
            ossl_statem_fatal(param_1,local_res8[0],0x22a,0xea,"ssl\\statem\\extensions_cust.c",0xd5
                             );
            return 0;
          }
          if (iVar5 == 0) goto LAB_14f660b27;
        }
        iVar5 = WPACKET_put_bytes__(param_3,*(undefined2 *)(uVar7 + lVar3),2);
        if ((((iVar5 == 0) || (iVar5 = WPACKET_start_sub_packet_len__(param_3,2), iVar5 == 0)) ||
            ((local_40 != 0 && (iVar5 = WPACKET_memcpy(param_3,local_48), iVar5 == 0)))) ||
           (iVar5 = WPACKET_close(param_3), iVar5 == 0)) {
          uVar8 = 0xe1;
LAB_14f660b83:
          ossl_statem_fatal(param_1,0x50,0x22a,0x44,"ssl\\statem\\extensions_cust.c",uVar8);
          return 0;
        }
        if ((param_2 & 0x80) != 0) {
          uVar1 = *(uint *)(uVar7 + 0xc + lVar3);
          if ((~(uVar1 >> 1) & 1) == 0) {
            uVar8 = 0xea;
            goto LAB_14f660b83;
          }
          *(uint *)(uVar7 + 0xc + lVar3) = uVar1 | 2;
        }
        pcVar4 = *(code **)(uVar7 + 0x18 + lVar3);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(param_1,*(undefined2 *)(uVar7 + lVar3),param_2,local_48,
                    *(undefined8 *)(uVar7 + 0x20 + lVar3));
        }
      }
LAB_14f660b27:
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 0x38;
    } while (uVar6 < *(ulonglong *)(lVar2 + 0x1e0));
  }
  return 1;
}

// FUN_14f660bd0 @ 14f660bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f660bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000030;
  undefined8 *in_stack_00000048;
  
  if ((code *)in_stack_00000048[1] == (code *)0x0) {
    return 1;
  }
  uStack0000000000000030 = *in_stack_00000048;
                    /* WARNING: Could not recover jumptable at 0x00014f660c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)in_stack_00000048[1])(param_1,param_2,param_4,param_5);
  return uVar1;
}

// custom_ext_find @ 14f660c30

ushort * custom_ext_find(undefined8 *param_1,int param_2,uint param_3,ulonglong *param_4)

{
  ushort *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  puVar1 = (ushort *)*param_1;
  if (param_1[1] != 0) {
    do {
      if ((param_3 == *puVar1) &&
         (((param_2 == 2 || (param_2 == *(int *)(puVar1 + 2))) || (*(int *)(puVar1 + 2) == 2)))) {
        if (param_4 == (ulonglong *)0x0) {
          return puVar1;
        }
        *param_4 = uVar2;
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x1c;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return (ushort *)0x0;
}

// FUN_14f660c80 @ 14f660c80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f660c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  if ((code *)param_5[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f660ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_5[2])(param_1,param_2,param_4,*param_5);
    return;
  }
  return;
}

// custom_ext_init @ 14f660cc0

void custom_ext_init(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    puVar1 = (undefined4 *)(*param_1 + 0xc);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0xe;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return;
}

// custom_ext_parse @ 14f660d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
custom_ext_parse(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 local_res10 [2];
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar7 = 0x14f660d18;
  uVar4 = 0;
  uVar5 = 2;
  if ((param_2 & 0x180) != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 0x38) != 0);
  }
  puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x488) + 0x1d8);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x488) + 0x1e0);
  if (uVar1 != 0) {
    do {
      if ((param_3 == *puVar3) &&
         (((uVar5 == 2 || (uVar5 == *(uint *)(puVar3 + 2))) || (*(uint *)(puVar3 + 2) == 2)))) {
        iVar2 = extension_is_relevant(param_1,*(undefined4 *)(puVar3 + 4),param_2);
        if (iVar2 == 0) {
          return 1;
        }
        if (((param_2 & 0x700) != 0) && ((puVar3[6] & 2) == 0)) {
          ossl_statem_fatal(param_1,0x6e,0x22b,0x6e,"ssl\\statem\\extensions_cust.c",
                            CONCAT44(uVar6,0x8f));
          return 0;
        }
        if ((param_2 & 0x4080) != 0) {
          *(uint *)(puVar3 + 6) = *(uint *)(puVar3 + 6) | 1;
        }
        if (*(code **)(puVar3 + 0x14) == (code *)0x0) {
          return 1;
        }
        iVar2 = (**(code **)(puVar3 + 0x14))
                          (param_1,param_3,param_2,param_4,param_5,param_6,param_7,local_res10,
                           *(undefined8 *)(puVar3 + 0x18),uVar7);
        if (0 < iVar2) {
          return 1;
        }
        ossl_statem_fatal(param_1,local_res10[0],0x22b,0x6e,"ssl\\statem\\extensions_cust.c",0xa3);
        return 0;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x1c;
    } while (uVar4 < uVar1);
  }
  return 1;
}

// FUN_14f660e90 @ 14f660e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f660e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000030;
  undefined8 *in_stack_00000048;
  
  if ((code *)in_stack_00000048[1] == (code *)0x0) {
    return 1;
  }
  uStack0000000000000030 = *in_stack_00000048;
                    /* WARNING: Could not recover jumptable at 0x00014f660ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)in_stack_00000048[1])(param_1,param_2,param_4,param_5);
  return uVar1;
}

// custom_exts_copy @ 14f660ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 custom_exts_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2[1] != 0) {
    lVar2 = CRYPTO_memdup(*param_2,param_2[1] * 0x38,"ssl\\statem\\extensions_cust.c",0x117);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    param_1[1] = param_2[1];
    uVar5 = uVar4;
    uVar6 = uVar4;
    if (param_2[1] != 0) {
      do {
        lVar2 = *param_2;
        lVar1 = *param_1;
        if (*(code **)(lVar2 + 0x10 + uVar5) == FUN_14f660bd0) {
          if ((int)uVar6 == 0) {
            uVar3 = CRYPTO_memdup(*(undefined8 *)(lVar2 + 0x20 + uVar5),0x18,
                                  "ssl\\statem\\extensions_cust.c",0x12f);
            *(undefined8 *)(uVar5 + 0x20 + lVar1) = uVar3;
            lVar2 = CRYPTO_memdup(*(undefined8 *)(lVar2 + 0x30 + uVar5),0x10,
                                  "ssl\\statem\\extensions_cust.c",0x131);
            *(longlong *)(uVar5 + 0x30 + lVar1) = lVar2;
            if ((*(longlong *)(uVar5 + 0x20 + lVar1) == 0) || (lVar2 == 0)) {
              uVar6 = 1;
            }
          }
          else {
            *(undefined8 *)(uVar5 + 0x20 + lVar1) = 0;
            *(undefined8 *)(uVar5 + 0x30 + lVar1) = 0;
          }
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + 0x38;
      } while (uVar4 < (ulonglong)param_2[1]);
      if ((int)uVar6 != 0) {
        custom_exts_free(param_1);
        return 0;
      }
    }
  }
  return 1;
}

// custom_exts_copy_flags @ 14f661050

undefined8 custom_exts_copy_flags(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  ulonglong uVar4;
  
  psVar3 = (short *)*param_2;
  uVar4 = 0;
  if (param_2[1] != 0) {
    do {
      uVar2 = 0;
      psVar1 = (short *)*param_1;
      if (param_1[1] != 0) {
        do {
          if ((*psVar3 == *psVar1) &&
             (((*(int *)(psVar3 + 2) == 2 || (*(int *)(psVar3 + 2) == *(int *)(psVar1 + 2))) ||
              (*(int *)(psVar1 + 2) == 2)))) {
            *(undefined4 *)(psVar1 + 6) = *(undefined4 *)(psVar3 + 6);
            break;
          }
          uVar2 = uVar2 + 1;
          psVar1 = psVar1 + 0x1c;
        } while (uVar2 < (ulonglong)param_1[1]);
      }
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 0x1c;
    } while (uVar4 < (ulonglong)param_2[1]);
  }
  return 1;
}

// custom_exts_free @ 14f6610f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void custom_exts_free(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x20);
    do {
      if ((code *)puVar1[-2] == FUN_14f660bd0) {
        CRYPTO_free(*puVar1,"ssl\\statem\\extensions_cust.c",0x14a);
        CRYPTO_free(puVar1[2],"ssl\\statem\\extensions_cust.c",0x14b);
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 7;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  CRYPTO_free(*param_1,"ssl\\statem\\extensions_cust.c",0x14d);
  return;
}

