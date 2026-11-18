// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// BN_asc2bn @ 14f732120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_asc2bn(longlong *param_1,char *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  pcVar2 = param_2 + 1;
  if (*param_2 != '-') {
    pcVar2 = param_2;
  }
  if ((*pcVar2 == '0') && ((pcVar2[1] + 0xa8U & 0xdf) == 0)) {
    uVar1 = BN_hex2bn(param_1,pcVar2 + 2);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = BN_dec2bn();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  if ((*param_2 == '-') && (*(int *)(*param_1 + 8) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 1;
  }
  return 1;
}

// BN_bn2dec @ 14f7321b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * BN_bn2dec(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar7 = 0;
  iVar2 = BN_num_bits();
  iVar2 = (iVar2 * 3) / 1000 + (iVar2 * 3) / 10;
  lVar10 = (longlong)((iVar2 + 2) / 0x13 + 1);
  plVar3 = (longlong *)CRYPTO_malloc(lVar10 * 8,"crypto\\bn\\bn_print.c",0x48);
  lVar11 = (longlong)(iVar2 + 5);
  puVar4 = (undefined2 *)CRYPTO_malloc(lVar11,"crypto\\bn\\bn_print.c",0x49);
  if ((puVar4 == (undefined2 *)0x0) || (plVar3 == (longlong *)0x0)) {
    ERR_put_error(3,0x68,0x41,"crypto\\bn\\bn_print.c",0x4b);
  }
  else {
    lVar7 = BN_dup(param_1);
    if (lVar7 != 0) {
      iVar2 = BN_is_zero(lVar7);
      if (iVar2 != 0) {
        *puVar4 = 0x30;
        bVar1 = true;
        goto LAB_14f7323b7;
      }
      iVar2 = BN_is_negative(lVar7);
      puVar8 = puVar4;
      if (iVar2 != 0) {
        *(undefined1 *)puVar4 = 0x2d;
        puVar8 = (undefined2 *)((longlong)puVar4 + 1);
      }
      iVar2 = BN_is_zero(lVar7);
      plVar6 = plVar3;
      if (iVar2 == 0) {
        do {
          if (lVar10 <= (longlong)plVar6 - (longlong)plVar3 >> 3) goto LAB_14f7323b5;
          lVar5 = BN_div_word(lVar7,10000000000000000000);
          *plVar6 = lVar5;
          if (lVar5 == -1) goto LAB_14f7323b5;
          plVar6 = plVar6 + 1;
          iVar2 = BN_is_zero(lVar7);
        } while (iVar2 == 0);
      }
      iVar2 = BIO_snprintf(puVar8,(undefined1 *)((lVar11 - (longlong)puVar8) + (longlong)puVar4),
                           "%llu",plVar6[-1]);
      if (-1 < iVar2) {
        puVar9 = (undefined1 *)((longlong)puVar8 + (longlong)iVar2);
        while (plVar6 = plVar6 + -1, plVar6 != plVar3) {
          iVar2 = BIO_snprintf(puVar9,(undefined1 *)((lVar11 - (longlong)puVar9) + (longlong)puVar4)
                               ,"%019llu",plVar6[-1]);
          if (iVar2 < 0) goto LAB_14f7323b5;
          puVar9 = puVar9 + iVar2;
        }
        bVar1 = true;
        goto LAB_14f7323b7;
      }
    }
  }
LAB_14f7323b5:
  bVar1 = false;
LAB_14f7323b7:
  CRYPTO_free(plVar3,"crypto\\bn\\bn_print.c",0x76);
  BN_free(lVar7);
  if (bVar1) {
    return puVar4;
  }
  CRYPTO_free(puVar4,"crypto\\bn\\bn_print.c",0x7a);
  return (undefined2 *)0x0;
}

// BN_bn2hex @ 14f732430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * BN_bn2hex(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f732440;
  bVar1 = false;
  iVar2 = BN_is_zero();
  if (iVar2 != 0) {
    pcVar3 = (char *)CRYPTO_strdup("0","crypto\\bn\\bn_print.c",0x1b);
    return pcVar3;
  }
  pcVar3 = (char *)CRYPTO_malloc((longlong)((int)param_1[1] * 0x10 + 2),"crypto\\bn\\bn_print.c",
                                 0x1c);
  if (pcVar3 != (char *)0x0) {
    pcVar6 = pcVar3;
    if ((int)param_1[2] != 0) {
      *pcVar3 = '-';
      pcVar6 = pcVar3 + 1;
    }
    iVar2 = (int)param_1[1] + -1;
    lVar7 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        iVar2 = 0x38;
        do {
          uVar5 = *(ulonglong *)(*param_1 + lVar7 * 8) >> ((byte)iVar2 & 0x3f);
          uVar4 = uVar5 & 0xff;
          if ((bVar1) || ((char)uVar5 != '\0')) {
            bVar1 = true;
            *pcVar6 = "0123456789ABCDEF"[uVar4 >> 4];
            pcVar6[1] = "0123456789ABCDEF"[(uint)uVar4 & 0xf];
            pcVar6 = pcVar6 + 2;
          }
          iVar2 = iVar2 + -8;
        } while (-1 < iVar2);
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    *pcVar6 = '\0';
    return pcVar3;
  }
  ERR_put_error(3,0x69,0x41,"crypto\\bn\\bn_print.c",0x1e,uVar8);
  return (char *)0x0;
}

// BN_dec2bn @ 14f732570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_dec2bn(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f732582;
  lVar4 = 0;
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
    return 0;
  }
  if (cVar1 == '-') {
    param_2 = param_2 + 1;
  }
  uVar8 = (uint)(cVar1 == '-');
  iVar6 = 0;
  lVar7 = 0;
  do {
    iVar2 = ossl_ctype_check((int)param_2[lVar7],4,param_3,param_4,uVar9);
    if (iVar2 == 0) break;
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 1;
  } while (lVar7 < 0x20000000);
  if ((iVar6 != 0) && (iVar6 < 0x20000000)) {
    iVar2 = iVar6 + uVar8;
    if (param_1 == (longlong *)0x0) {
      return iVar2;
    }
    lVar4 = *param_1;
    if (lVar4 == 0) {
      lVar4 = BN_new();
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      BN_set_word(lVar4,0);
    }
    if (iVar6 * 4 < 0x7fffffc1) {
      iVar3 = iVar6 * 4 + 0x3f;
      iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6;
      lVar7 = lVar4;
      if (*(int *)(lVar4 + 0xc) < iVar3) {
        lVar7 = bn_expand2(lVar4,iVar3);
      }
      if (lVar7 != 0) {
        iVar5 = (iVar6 / 0x13 + 1) * 0x13 - iVar6;
        iVar3 = 0;
        if (iVar5 != 0x13) {
          iVar3 = iVar5;
        }
        while( true ) {
          do {
            iVar6 = iVar6 + -1;
            if (iVar6 < 0) {
              bn_correct_top(lVar4);
              *param_1 = lVar4;
              if (*(int *)(lVar4 + 8) != 0) {
                *(uint *)(lVar4 + 0x10) = uVar8;
                return iVar2;
              }
              return iVar2;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x13);
          iVar3 = BN_mul_word(lVar4,10000000000000000000);
          if ((iVar3 == 0) || (iVar3 = BN_add_word(lVar4), iVar3 == 0)) break;
          iVar3 = 0;
        }
      }
    }
  }
  if (*param_1 == 0) {
    BN_free(lVar4);
  }
  return 0;
}

// BN_hex2bn @ 14f732750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_hex2bn(longlong *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  
  uVar8 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  bVar13 = *param_2 == '-';
  uVar11 = uVar8;
  if (bVar13) {
    param_2 = param_2 + 1;
  }
  do {
    iVar1 = ossl_ctype_check((int)param_2[uVar11],0x10);
    if (iVar1 == 0) break;
    uVar8 = (ulonglong)((int)uVar8 + 1);
    uVar11 = uVar11 + 1;
  } while ((longlong)uVar11 < 0x20000000);
  lVar12 = 0;
  uVar7 = (uint)uVar8;
  if ((uVar7 == 0) || (0x1fffffff < (int)uVar7)) {
    return 0;
  }
  iVar1 = uVar7 + bVar13;
  if (param_1 == (longlong *)0x0) {
    return iVar1;
  }
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)BN_new();
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    BN_set_word(plVar4,0);
  }
  if ((int)(uVar7 * 4) < 0x7fffffc1) {
    iVar2 = uVar7 * 4 + 0x3f;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
    plVar5 = plVar4;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2) {
      plVar5 = (longlong *)bn_expand2(plVar4,iVar2);
    }
    if (plVar5 != (longlong *)0x0) {
      iVar2 = 0;
      while (0 < (int)uVar7) {
        iVar6 = (int)uVar8;
        uVar11 = 0;
        iVar3 = iVar6;
        if (0xf < iVar6) {
          iVar3 = 0x10;
        }
        lVar9 = (longlong)iVar3;
        pcVar10 = param_2 + (iVar6 - lVar9);
        do {
          iVar3 = OPENSSL_hexchar2int((int)*pcVar10);
          pcVar10 = pcVar10 + 1;
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          lVar9 = lVar9 + -1;
          uVar11 = uVar11 << 4 | (longlong)iVar3;
        } while (0 < lVar9);
        iVar2 = iVar2 + 1;
        uVar7 = iVar6 - 0x10;
        uVar8 = (ulonglong)uVar7;
        *(ulonglong *)(lVar12 + *plVar4) = uVar11;
        lVar12 = lVar12 + 8;
      }
      *(int *)(plVar4 + 1) = iVar2;
      bn_correct_top(plVar4);
      *param_1 = (longlong)plVar4;
      if ((int)plVar4[1] != 0) {
        *(uint *)(plVar4 + 2) = (uint)bVar13;
        return iVar1;
      }
      return iVar1;
    }
  }
  if (*param_1 == 0) {
    BN_free(plVar4);
  }
  return 0;
}

// BN_options @ 14f732970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * BN_options(void)

{
  if (DAT_1553e2f20 == 0) {
    DAT_1553e2f20 = 1;
    BIO_snprintf(&DAT_1553e2f28,0x10,"bn(%zu,%zu)",0x40,0x40,0x14f73297c);
    return &DAT_1553e2f28;
  }
  return &DAT_1553e2f28;
}

// BN_print @ 14f7329e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_print(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  bVar1 = false;
  if ((((int)param_2[2] == 0) || (iVar2 = BIO_write(param_1,"-",1), iVar2 == 1)) &&
     ((iVar2 = BN_is_zero(param_2), iVar2 == 0 || (iVar2 = BIO_write(param_1,"0",1), iVar2 == 1))))
  {
    iVar2 = (int)param_2[1] + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        iVar2 = 0x3c;
        do {
          uVar4 = *(ulonglong *)(*param_2 + lVar5 * 8) >> ((byte)iVar2 & 0x3f);
          if ((bVar1) || ((uVar4 & 0xf) != 0)) {
            iVar3 = BIO_write(param_1,"0123456789ABCDEF" + (int)((uint)uVar4 & 0xf),1);
            if (iVar3 != 1) {
              return 0;
            }
            bVar1 = true;
          }
          iVar2 = iVar2 + -4;
        } while (-1 < iVar2);
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    return 1;
  }
  return 0;
}

// BN_print_fp @ 14f732b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 BN_print_fp(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  BIO_ctrl(lVar3,0x6a,0,param_1);
  uVar1 = BN_print(lVar3,param_2);
  BIO_free(lVar3);
  return uVar1;
}

// FUN_14f732b90 @ 14f732b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f732b90(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0x7fffffc0 < param_2) {
    return 0;
  }
  iVar1 = (int)(param_2 + 0x3f + (param_2 + 0x3f >> 0x1f & 0x3fU)) >> 6;
  if (iVar1 <= *(int *)(param_1 + 0xc)) {
    return param_1;
  }
  lVar2 = bn_expand2(param_1,iVar1);
  return lVar2;
}

