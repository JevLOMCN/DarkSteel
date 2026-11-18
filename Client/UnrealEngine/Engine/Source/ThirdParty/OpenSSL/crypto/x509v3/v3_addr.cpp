// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 68

// FUN_14f710c70 @ 14f710c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f710c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  char *_Str;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *_Control;
  undefined8 uVar13;
  ulong *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  longlong local_88;
  char *local_80;
  int local_78;
  ulong local_74;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_58 = param_3;
  lVar4 = OPENSSL_sk_new(FUN_14f711780);
  local_88 = lVar4;
  if (lVar4 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0x390);
    ERR_put_error(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
    lVar4 = 0;
  }
  else {
    iVar12 = 0;
    local_78 = 0;
    iVar2 = OPENSSL_sk_num(param_3);
    if (0 < iVar2) {
      do {
        puVar5 = (undefined8 *)OPENSSL_sk_value(param_3,iVar12);
        _Control = (char *)0x0;
        local_70 = (char *)0x0;
        puVar14 = (ulong *)0x0;
        iVar2 = name_cmp(puVar5[1],"IPv4");
        if (iVar2 != 0) {
          iVar2 = name_cmp(puVar5[1],"IPv6");
          if (iVar2 == 0) {
LAB_14f710daf:
            iVar2 = 2;
            goto LAB_14f710db4;
          }
          iVar2 = name_cmp(puVar5[1],"IPv4-SAFI");
          if (iVar2 == 0) {
            iVar2 = 1;
            puVar14 = &local_74;
            goto LAB_14f710db4;
          }
          iVar2 = name_cmp(puVar5[1],"IPv6-SAFI");
          if (iVar2 == 0) {
            puVar14 = &local_74;
            goto LAB_14f710daf;
          }
          local_a8 = CONCAT44(local_a8._4_4_,0x3a7);
          uVar13 = 0x73;
LAB_14f7111d8:
          ERR_put_error(0x22,0x9f,uVar13,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar5[2];
          local_a0 = ",value:";
          local_a8 = puVar5[1];
          ERR_add_error_data(6,"section:",*puVar5,",name:");
          _Str = (char *)0x0;
          lVar8 = local_88;
          goto LAB_14f71119f;
        }
        iVar2 = 1;
LAB_14f710db4:
        if (iVar2 == 1) {
          _Control = "0123456789.";
          local_70 = _Control;
        }
        else if (iVar2 == 2) {
          _Control = "0123456789.:abcdefABCDEF";
          local_70 = _Control;
        }
        if (iVar2 == 1) {
          iVar12 = 4;
        }
        else if (iVar2 == 2) {
          iVar12 = 0x10;
        }
        else {
          iVar12 = 0;
        }
        if (puVar14 == (ulong *)0x0) {
          _Str = (char *)CRYPTO_strdup((char *)puVar5[2],"crypto\\x509v3\\v3_addr.c");
        }
        else {
          uVar3 = strtoul((char *)puVar5[2],&local_80,0);
          *puVar14 = uVar3;
          sVar6 = strspn(local_80," \t");
          local_80 = local_80 + sVar6;
          if ((0xff < uVar3) || (cVar1 = *local_80, local_80 = local_80 + 1, cVar1 != ':')) {
            local_a8 = CONCAT44(local_a8._4_4_,0x3bf);
            uVar13 = 0xa4;
            goto LAB_14f7111d8;
          }
          sVar6 = strspn(local_80," \t");
          local_80 = local_80 + sVar6;
          _Str = (char *)CRYPTO_strdup(local_80,"crypto\\x509v3\\v3_addr.c");
          lVar4 = local_88;
        }
        if (_Str == (char *)0x0) {
          local_a8 = CONCAT44(local_a8._4_4_,0x3c9);
          ERR_put_error(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
          lVar8 = local_88;
          goto LAB_14f71119f;
        }
        lVar8 = 0;
        do {
          lVar9 = lVar8 + 1;
          if (_Str[lVar8] != "inherit"[lVar8]) {
            sVar6 = strspn(_Str,_Control);
            sVar7 = strspn(_Str + (int)sVar6," \t");
            iVar10 = (int)sVar6 + (int)sVar7;
            iVar11 = iVar10 + 1;
            cVar1 = _Str[iVar10];
            _Str[(int)sVar6] = '\0';
            iVar10 = a2i_ipadd(local_50,_Str);
            lVar4 = local_88;
            if (iVar10 != iVar12) {
              local_a8 = CONCAT44(local_a8._4_4_,0x3e3);
              uVar13 = 0xa6;
              goto LAB_14f71123b;
            }
            if (cVar1 == '\0') {
              local_a8 = CONCAT44(local_a8._4_4_,iVar12 * 8);
              iVar2 = X509v3_addr_add_prefix(local_88,iVar2,puVar14,local_50);
              if (iVar2 == 0) {
                local_a8 = CONCAT44(local_a8._4_4_,0x415);
                ERR_put_error(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
                lVar8 = lVar4;
                goto LAB_14f71119f;
              }
LAB_14f71114c:
              CRYPTO_free(_Str,"crypto\\x509v3\\v3_addr.c");
              goto LAB_14f711168;
            }
            if (cVar1 == '-') {
              sVar6 = strspn(_Str + iVar11," \t");
              iVar11 = (int)sVar6 + iVar11;
              sVar6 = strspn(_Str + iVar11,local_70);
              iVar10 = (int)sVar6 + iVar11;
              if ((iVar11 == iVar10) || (_Str[iVar10] != '\0')) {
                local_a8 = CONCAT44(local_a8._4_4_,0x3fe);
                uVar13 = 0x74;
                goto LAB_14f71123b;
              }
              iVar10 = a2i_ipadd(local_40,_Str + iVar11);
              if (iVar10 != iVar12) {
                local_a8 = CONCAT44(local_a8._4_4_,0x404);
                uVar13 = 0xa6;
                goto LAB_14f71123b;
              }
              if (iVar2 == 1) {
                sVar6 = 4;
              }
              else if (iVar2 == 2) {
                sVar6 = 0x10;
              }
              else {
                sVar6 = 0;
              }
              iVar12 = memcmp(local_50,local_40,sVar6);
              lVar4 = local_88;
              if (0 < iVar12) {
                local_a8 = CONCAT44(local_a8._4_4_,0x40a);
                uVar13 = 0x74;
                goto LAB_14f71123b;
              }
              lVar8 = FUN_14f713d40(local_88,iVar2,puVar14);
              if (iVar2 == 1) {
                uVar13 = 4;
              }
              else if (iVar2 == 2) {
                uVar13 = 0x10;
              }
              else {
                uVar13 = 0;
              }
              if ((lVar8 != 0) &&
                 (iVar2 = FUN_14f713ad0(&local_60,local_50,local_40,uVar13), uVar13 = local_60,
                 iVar2 != 0)) {
                iVar2 = OPENSSL_sk_push(lVar8,local_60);
                if (iVar2 != 0) goto LAB_14f71114c;
                ASN1_item_free(uVar13,&DAT_1534b4200);
              }
              local_a8 = CONCAT44(local_a8._4_4_,0x40f);
            }
            else {
              if (cVar1 != '/') {
                local_a8 = CONCAT44(local_a8._4_4_,0x41b);
                uVar13 = 0x74;
                goto LAB_14f71123b;
              }
              uVar3 = strtoul(_Str + iVar11,&local_80,10);
              lVar4 = local_88;
              if ((((local_80 == _Str + iVar11) || (*local_80 != '\0')) || (iVar12 * 8 < (int)uVar3)
                  ) || ((int)uVar3 < 0)) {
                local_a8 = CONCAT44(local_a8._4_4_,0x3f0);
                uVar13 = 0x74;
                goto LAB_14f71123b;
              }
              lVar8 = FUN_14f713d40(local_88,iVar2,puVar14);
              if ((lVar8 != 0) &&
                 (iVar2 = FUN_14f7139a0(&local_68,local_50,uVar3), uVar13 = local_68, iVar2 != 0)) {
                iVar2 = OPENSSL_sk_push(lVar8,local_68);
                if (iVar2 != 0) goto LAB_14f71114c;
                ASN1_item_free(uVar13,&DAT_1534b4200);
              }
              local_a8 = CONCAT44(local_a8._4_4_,0x3f5);
            }
            ERR_put_error(0x22,0x9f,0x41,"crypto\\x509v3\\v3_addr.c");
            lVar8 = lVar4;
            goto LAB_14f71119f;
          }
          lVar8 = lVar9;
        } while (lVar9 != 8);
        iVar2 = X509v3_addr_add_inherit(lVar4,iVar2,puVar14);
        if (iVar2 == 0) {
          local_a8 = CONCAT44(local_a8._4_4_,0x3d4);
          uVar13 = 0xa5;
LAB_14f71123b:
          ERR_put_error(0x22,0x9f,uVar13,"crypto\\x509v3\\v3_addr.c");
          local_98 = puVar5[2];
          local_a0 = ",value:";
          local_a8 = puVar5[1];
          ERR_add_error_data(6,"section:",*puVar5,",name:");
          lVar8 = local_88;
          goto LAB_14f71119f;
        }
        CRYPTO_free(_Str,"crypto\\x509v3\\v3_addr.c");
LAB_14f711168:
        param_3 = local_58;
        iVar12 = local_78 + 1;
        local_78 = iVar12;
        iVar2 = OPENSSL_sk_num(local_58);
      } while (iVar12 < iVar2);
    }
    _Str = (char *)0x0;
    iVar2 = X509v3_addr_canonize(lVar4);
    lVar8 = local_88;
    if (iVar2 == 0) {
LAB_14f71119f:
      CRYPTO_free(_Str,"crypto\\x509v3\\v3_addr.c",0x42c);
      OPENSSL_sk_pop_free(lVar8,IPAddressFamily_free);
      lVar4 = 0;
    }
  }
  return lVar4;
}

// FUN_14f711450 @ 14f711450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f711450(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f711474;
  iVar8 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
      if ((((puVar4 == (undefined8 *)0x0) || (piVar1 = (int *)*puVar4, piVar1 == (int *)0x0)) ||
          (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar1 < 2)) {
        sVar7 = 0;
      }
      else {
        sVar7 = CONCAT11(*puVar2,puVar2[1]);
      }
      if (sVar7 == 1) {
        pcVar6 = "%*sIPv4";
LAB_14f711513:
        BIO_printf(param_3,pcVar6,param_4,"");
      }
      else {
        if (sVar7 == 2) {
          pcVar6 = "%*sIPv6";
          goto LAB_14f711513;
        }
        BIO_printf(param_3,"%*sUnknown AFI %u",param_4,"",sVar7,uVar9);
      }
      if (2 < *(int *)*puVar4) {
        switch(*(undefined1 *)(*(longlong *)((int *)*puVar4 + 2) + 2)) {
        case 1:
          BIO_puts(param_3," (Unicast)");
          break;
        case 2:
          BIO_puts(param_3," (Multicast)");
          break;
        case 3:
          BIO_puts(param_3," (Unicast/Multicast)");
          break;
        case 4:
          BIO_puts(param_3," (MPLS)");
          break;
        default:
          BIO_printf(param_3," (Unknown SAFI %u)");
          break;
        case 0x40:
          BIO_puts(param_3," (Tunnel)");
          break;
        case 0x41:
          BIO_puts(param_3," (VPLS)");
          break;
        case 0x42:
          BIO_puts(param_3," (BGP MDT)");
          break;
        case 0x80:
          BIO_puts(param_3," (MPLS-labeled VPN)");
        }
      }
      if (*(int *)puVar4[1] == 0) {
        BIO_puts(param_3,": inherit\n");
      }
      else if (*(int *)puVar4[1] == 1) {
        BIO_puts(param_3,":\n");
        uVar5 = FUN_14f713530(param_3,param_4 + 2,*(undefined8 *)(puVar4[1] + 8),sVar7);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      iVar8 = iVar8 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar3);
  }
  return 1;
}

// IPAddressChoice_free @ 14f711720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressChoice_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b4270);
  return;
}

// IPAddressChoice_new @ 14f711750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressChoice_new(void)

{
  ASN1_item_new(&DAT_1534b4270);
  return;
}

// FUN_14f711780 @ 14f711780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f711780(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar3 = *(int **)*param_1;
  iVar1 = *piVar3;
  piVar4 = *(int **)*param_2;
  iVar2 = *piVar4;
  piVar6 = piVar4;
  if (iVar1 <= iVar2) {
    piVar6 = piVar3;
  }
  iVar5 = memcmp(*(void **)(piVar3 + 2),*(void **)(piVar4 + 2),(longlong)*piVar6);
  if (iVar5 == 0) {
    iVar5 = iVar1 - iVar2;
  }
  return iVar5;
}

// IPAddressFamily_free @ 14f7117e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressFamily_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b42e0);
  return;
}

// IPAddressFamily_new @ 14f711810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressFamily_new(void)

{
  ASN1_item_new(&DAT_1534b42e0);
  return;
}

// FUN_14f711840 @ 14f711840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f711840(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  byte local_68 [16];
  byte local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f711855;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  iVar4 = 0;
  iVar3 = 0;
  if (*param_1 == 0) {
    piVar1 = *(int **)(param_1 + 2);
    iVar4 = *piVar1;
    if ((-1 < iVar4) && (iVar4 <= param_3)) {
      if (0 < iVar4) {
        memcpy(local_58,*(void **)(piVar1 + 2),(longlong)iVar4);
        if ((piVar1[4] & 7U) != 0) {
          local_58[iVar4 + -1] =
               local_58[iVar4 + -1] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(local_58 + iVar4,0,(longlong)(param_3 - iVar4));
      iVar4 = *piVar1 * 8 - (piVar1[4] & 7U);
      goto LAB_14f711969;
    }
LAB_14f711a6d:
    iVar2 = -1;
  }
  else {
    if (*param_1 == 1) {
      piVar1 = (int *)**(undefined8 **)(param_1 + 2);
      iVar4 = *piVar1;
      if ((iVar4 < 0) || (param_3 < iVar4)) goto LAB_14f711a6d;
      if (0 < iVar4) {
        memcpy(local_58,*(void **)(piVar1 + 2),(longlong)iVar4);
        if ((piVar1[4] & 7U) != 0) {
          local_58[iVar4 + -1] =
               local_58[iVar4 + -1] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(local_58 + iVar4,0,(longlong)(param_3 - iVar4));
      iVar4 = param_3 * 8;
    }
LAB_14f711969:
    if (*param_2 == 0) {
      piVar1 = *(int **)(param_2 + 2);
      iVar3 = *piVar1;
      if ((iVar3 < 0) || (param_3 < iVar3)) goto LAB_14f711a6d;
      if (0 < iVar3) {
        memcpy(local_68,*(void **)(piVar1 + 2),(longlong)iVar3);
        if ((piVar1[4] & 7U) != 0) {
          local_68[iVar3 + -1] =
               local_68[iVar3 + -1] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(local_68 + iVar3,0,(longlong)(param_3 - iVar3));
      iVar3 = iVar3 * 8 - (piVar1[4] & 7U);
    }
    else if (*param_2 == 1) {
      piVar1 = (int *)**(undefined8 **)(param_2 + 2);
      iVar3 = *piVar1;
      if ((iVar3 < 0) || (param_3 < iVar3)) goto LAB_14f711a6d;
      if (0 < iVar3) {
        memcpy(local_68,*(void **)(piVar1 + 2),(longlong)iVar3);
        if ((piVar1[4] & 7U) != 0) {
          local_68[iVar3 + -1] =
               local_68[iVar3 + -1] & ~(byte)(0xff >> (8U - (char)(piVar1[4] & 7U) & 0x1f));
        }
      }
      memset(local_68 + iVar3,0,(longlong)(param_3 - iVar3));
      iVar3 = param_3 * 8;
    }
    iVar2 = memcmp(local_58,local_68,(longlong)param_3);
    if (iVar2 == 0) {
      iVar2 = iVar4 - iVar3;
    }
  }
  return iVar2;
}

// IPAddressOrRange_free @ 14f711aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressOrRange_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b4200);
  return;
}

// IPAddressOrRange_new @ 14f711ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressOrRange_new(void)

{
  ASN1_item_new(&DAT_1534b4200);
  return;
}

// FUN_14f711b00 @ 14f711b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f711b00(undefined8 param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong _Size;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  char local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar9 = 0;
  if (param_2 == 1) {
    uVar8 = 4;
  }
  else if (param_2 == 2) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0;
  }
  OPENSSL_sk_sort();
  iVar3 = OPENSSL_sk_num(param_1);
  if (0 < iVar3 + -1) {
    _Size = (ulonglong)uVar8;
    iVar3 = 1;
    do {
      piVar5 = (int *)OPENSSL_sk_value(param_1,iVar9);
      piVar6 = (int *)OPENSSL_sk_value(param_1,iVar3);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      if (*piVar5 == 0) {
        iVar4 = FUN_14f712dc0(local_50,*(undefined8 *)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(piVar5 + 2);
      }
      else {
        if (*piVar5 != 1) {
          return 0;
        }
        iVar4 = FUN_14f712dc0(local_50,**(undefined8 **)(piVar5 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(*(longlong *)(piVar5 + 2) + 8);
      }
      iVar4 = FUN_14f712dc0(local_40,uVar7,uVar8,0xff);
      if (iVar4 == 0) {
        return 0;
      }
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      if (*piVar6 == 0) {
        iVar4 = FUN_14f712dc0(local_70,*(undefined8 *)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(piVar6 + 2);
      }
      else {
        if (*piVar6 != 1) {
          return 0;
        }
        iVar4 = FUN_14f712dc0(local_70,**(undefined8 **)(piVar6 + 2),uVar8,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(*(longlong *)(piVar6 + 2) + 8);
      }
      iVar4 = FUN_14f712dc0(local_60,uVar7,uVar8,0xff);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = memcmp(local_50,local_40,_Size);
      if (0 < iVar4) {
        return 0;
      }
      iVar4 = memcmp(local_70,local_60,_Size);
      if (0 < iVar4) {
        return 0;
      }
      iVar4 = memcmp(local_40,local_70,_Size);
      uVar2 = _Size;
      if (-1 < iVar4) {
        return 0;
      }
      do {
        if ((longlong)(uVar2 - 1) < 0) break;
        cVar1 = local_70[uVar2 - 1];
        local_70[uVar2 - 1] = cVar1 + -1;
        uVar2 = uVar2 - 1;
      } while (cVar1 == '\0');
      iVar4 = memcmp(local_40,local_70,_Size);
      if (iVar4 == 0) {
        iVar4 = FUN_14f713ad0(&local_78,local_50,local_60);
        if (iVar4 == 0) {
          return 0;
        }
        OPENSSL_sk_set(param_1,iVar9,local_78);
        OPENSSL_sk_delete(param_1,iVar3);
        ASN1_item_free(piVar5,&DAT_1534b4200);
        ASN1_item_free(piVar6,&DAT_1534b4200);
        iVar9 = iVar9 + -1;
        iVar3 = iVar3 + -1;
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 1;
      iVar4 = OPENSSL_sk_num(param_1);
    } while (iVar9 < iVar4 + -1);
  }
  iVar9 = OPENSSL_sk_num(param_1);
  piVar5 = (int *)OPENSSL_sk_value(param_1,iVar9 + -1);
  if (((piVar5 != (int *)0x0) && (*piVar5 == 1)) &&
     ((iVar9 = FUN_14f712dc0(local_60,**(undefined8 **)(piVar5 + 2),uVar8,0), iVar9 == 0 ||
      ((iVar9 = FUN_14f712dc0(local_50,*(undefined8 *)(*(longlong *)(piVar5 + 2) + 8),uVar8,0xff),
       iVar9 == 0 || (iVar9 = memcmp(local_60,local_50,(ulonglong)uVar8), 0 < iVar9)))))) {
    return 0;
  }
  return 1;
}

// IPAddressRange_free @ 14f711e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressRange_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b4190);
  return;
}

// IPAddressRange_new @ 14f711e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void IPAddressRange_new(void)

{
  ASN1_item_new(&DAT_1534b4190);
  return;
}

// X509v3_addr_add_inherit @ 14f711e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_addr_add_inherit(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14f713870();
  if (((lVar2 != 0) && (piVar1 = *(int **)(lVar2 + 8), piVar1 != (int *)0x0)) &&
     ((*piVar1 != 1 || (*(longlong *)(piVar1 + 2) == 0)))) {
    if (*piVar1 == 0) {
      if (*(longlong *)(piVar1 + 2) != 0) {
        return 1;
      }
    }
    else if (*(longlong *)(piVar1 + 2) != 0) goto LAB_14f711ef2;
    lVar3 = ASN1_NULL_new();
    *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = lVar3;
    if (lVar3 != 0) {
LAB_14f711ef2:
      **(undefined4 **)(lVar2 + 8) = 0;
      return 1;
    }
  }
  return 0;
}

// X509v3_addr_add_prefix @ 14f711f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509v3_addr_add_prefix
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f711f35;
  lVar2 = FUN_14f713d40();
  if (lVar2 != 0) {
    if (param_2 == 1) {
      uVar3 = 4;
    }
    else if (param_2 == 2) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0;
    }
    iVar1 = FUN_14f7139a0(&local_18,param_4,param_5,uVar3);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(lVar2,local_18);
      if (iVar1 != 0) {
        return 1;
      }
      ASN1_item_free(local_18,&DAT_1534b4200);
    }
  }
  return 0;
}

// X509v3_addr_add_range @ 14f711fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509v3_addr_add_range
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f711fe5;
  lVar2 = FUN_14f713d40();
  if (param_2 == 1) {
    uVar3 = 4;
  }
  else if (param_2 == 2) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0;
  }
  if (lVar2 != 0) {
    iVar1 = FUN_14f713ad0(&local_18,param_4,param_5,uVar3);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(lVar2,local_18);
      if (iVar1 != 0) {
        return 1;
      }
      ASN1_item_free(local_18,&DAT_1534b4200);
    }
  }
  return 0;
}

// X509v3_addr_canonize @ 14f712080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509v3_addr_canonize(undefined8 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar3 = OPENSSL_sk_num();
  uVar6 = uVar7;
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,uVar6);
      if (*(int *)puVar4[1] == 1) {
        piVar1 = (int *)*puVar4;
        uVar5 = uVar7;
        if (((piVar1 != (int *)0x0) &&
            (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 != (undefined1 *)0x0)) && (1 < *piVar1))
        {
          uVar5 = (uint)CONCAT11(*puVar2,puVar2[1]);
        }
        iVar3 = FUN_14f711b00(*(undefined8 *)((int *)puVar4[1] + 2),uVar5);
        if (iVar3 == 0) {
          return false;
        }
      }
      uVar6 = uVar6 + 1;
      iVar3 = OPENSSL_sk_num(param_1);
    } while ((int)uVar6 < iVar3);
  }
  OPENSSL_sk_set_cmp_func(param_1,FUN_14f711780);
  OPENSSL_sk_sort(param_1);
  iVar3 = X509v3_addr_is_canonical(param_1);
  return iVar3 != 0;
}

// X509v3_addr_get_afi @ 14f712160

undefined2 X509v3_addr_get_afi(undefined8 *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  
  if ((((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
      (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 != (undefined1 *)0x0)) && (1 < *piVar1)) {
    return CONCAT11(*puVar2,puVar2[1]);
  }
  return 0;
}

// X509v3_addr_get_range @ 14f7121a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509v3_addr_get_range(uint *param_1,int param_2,longlong param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    iVar2 = 4;
  }
  else if (param_2 == 2) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0;
  }
  if ((((param_1 != (uint *)0x0) && (param_3 != 0)) && (param_4 != 0)) &&
     (((iVar2 != 0 && (iVar2 <= param_5)) && (*param_1 < 2)))) {
    iVar1 = FUN_14f7133b0(param_1,param_3,param_4,iVar2);
    if (iVar1 != 0) {
      return iVar2;
    }
  }
  return 0;
}

// X509v3_addr_inherits @ 14f712220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_addr_inherits(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      lVar2 = OPENSSL_sk_value(param_1,iVar3);
      if (**(int **)(lVar2 + 8) == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar3 < iVar1);
  }
  return 0;
}

// X509v3_addr_is_canonical @ 14f7122a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 X509v3_addr_is_canonical(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  short sVar12;
  undefined8 uVar13;
  size_t _Size;
  int iVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [15];
  char acStack_51 [17];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    iVar14 = 0;
    iVar5 = OPENSSL_sk_num();
    if (0 < iVar5 + -1) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(param_1,iVar14);
        iVar14 = iVar14 + 1;
        puVar8 = (undefined8 *)OPENSSL_sk_value(param_1,iVar14);
        piVar10 = (int *)*puVar7;
        piVar11 = (int *)*puVar8;
        iVar5 = *piVar10;
        iVar15 = *piVar11;
        piVar9 = piVar11;
        if (iVar5 <= iVar15) {
          piVar9 = piVar10;
        }
        iVar6 = memcmp(*(void **)(piVar10 + 2),*(void **)(piVar11 + 2),(longlong)*piVar9);
        if (iVar6 == 0) {
          iVar6 = iVar5 - iVar15;
        }
        if (-1 < iVar6) {
          return 0;
        }
        iVar5 = OPENSSL_sk_num(param_1);
      } while (iVar14 < iVar5 + -1);
    }
    iVar5 = 0;
    local_78 = 0;
    iVar14 = OPENSSL_sk_num(param_1);
    if (0 < iVar14) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(param_1,iVar5);
        if ((((puVar7 == (undefined8 *)0x0) || (piVar10 = (int *)*puVar7, piVar10 == (int *)0x0)) ||
            (puVar2 = *(undefined1 **)(piVar10 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar10 < 2)
           ) {
          sVar12 = 0;
        }
        else {
          sVar12 = CONCAT11(*puVar2,puVar2[1]);
        }
        if (sVar12 == 1) {
          _Size = 4;
        }
        else if (sVar12 == 2) {
          _Size = 0x10;
        }
        else {
          _Size = 0;
        }
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        piVar10 = (int *)puVar7[1];
        if (piVar10 == (int *)0x0) {
          return 0;
        }
        if (*piVar10 != 0) {
          if (*piVar10 != 1) {
            return 0;
          }
          uVar3 = *(undefined8 *)(piVar10 + 2);
          iVar14 = OPENSSL_sk_num(uVar3);
          if (iVar14 == 0) {
            return 0;
          }
          iVar15 = 0;
          iVar14 = OPENSSL_sk_num(uVar3);
          if (0 < iVar14 + -1) {
            do {
              piVar10 = (int *)OPENSSL_sk_value(uVar3,iVar15);
              iVar15 = iVar15 + 1;
              piVar11 = (int *)OPENSSL_sk_value(uVar3,iVar15);
              if (piVar10 == (int *)0x0) {
                return 0;
              }
              if (*piVar10 == 0) {
                iVar5 = FUN_14f712dc0(local_60,*(undefined8 *)(piVar10 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar13 = *(undefined8 *)(piVar10 + 2);
              }
              else {
                if (*piVar10 != 1) {
                  return 0;
                }
                iVar5 = FUN_14f712dc0(local_60,**(undefined8 **)(piVar10 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar13 = *(undefined8 *)(*(longlong *)(piVar10 + 2) + 8);
              }
              iVar5 = FUN_14f712dc0(local_70,uVar13,_Size,0xff);
              if (iVar5 == 0) {
                return 0;
              }
              if (piVar11 == (int *)0x0) {
                return 0;
              }
              if (*piVar11 == 0) {
                iVar5 = FUN_14f712dc0(acStack_51 + 1,*(undefined8 *)(piVar11 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar13 = *(undefined8 *)(piVar11 + 2);
              }
              else {
                if (*piVar11 != 1) {
                  return 0;
                }
                iVar5 = FUN_14f712dc0(acStack_51 + 1,**(undefined8 **)(piVar11 + 2),_Size,0);
                if (iVar5 == 0) {
                  return 0;
                }
                uVar13 = *(undefined8 *)(*(longlong *)(piVar11 + 2) + 8);
              }
              iVar5 = FUN_14f712dc0(local_40,uVar13,_Size,0xff);
              if (iVar5 == 0) {
                return 0;
              }
              iVar5 = memcmp(local_60,acStack_51 + 1,_Size);
              if (-1 < iVar5) {
                return 0;
              }
              iVar5 = memcmp(local_60,local_70,_Size);
              if (0 < iVar5) {
                return 0;
              }
              iVar5 = memcmp(acStack_51 + 1,local_40,_Size);
              sVar4 = _Size;
              if (0 < iVar5) {
                return 0;
              }
              do {
                if ((longlong)(sVar4 - 1) < 0) break;
                cVar1 = acStack_51[sVar4];
                acStack_51[sVar4] = cVar1 + -1;
                sVar4 = sVar4 - 1;
              } while (cVar1 == '\0');
              iVar5 = memcmp(local_70,acStack_51 + 1,_Size);
              if (-1 < iVar5) {
                return 0;
              }
              if ((*piVar10 == 1) && (iVar5 = FUN_14f713e10(local_60,local_70,_Size), -1 < iVar5)) {
                return 0;
              }
              iVar14 = OPENSSL_sk_num(uVar3);
              iVar5 = local_78;
            } while (iVar15 < iVar14 + -1);
          }
          iVar14 = OPENSSL_sk_num(uVar3);
          piVar10 = (int *)OPENSSL_sk_value(uVar3,iVar14 + -1);
          if ((piVar10 != (int *)0x0) && (*piVar10 == 1)) {
            iVar14 = FUN_14f712dc0(local_60,**(undefined8 **)(piVar10 + 2),_Size,0);
            if (iVar14 == 0) {
              return 0;
            }
            iVar14 = FUN_14f712dc0(local_70,*(undefined8 *)(*(longlong *)(piVar10 + 2) + 8),_Size,
                                   0xff);
            if (iVar14 == 0) {
              return 0;
            }
            iVar14 = memcmp(local_60,local_70,_Size);
            if (0 < iVar14) {
              return 0;
            }
            iVar14 = FUN_14f713e10(local_60,local_70,_Size);
            if (-1 < iVar14) {
              return 0;
            }
          }
        }
        iVar5 = iVar5 + 1;
        local_78 = iVar5;
        iVar14 = OPENSSL_sk_num(param_1);
      } while (iVar5 < iVar14);
    }
  }
  return 1;
}

// X509v3_addr_subset @ 14f7126f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_addr_subset(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  
  if ((param_1 == 0) || (param_1 == param_2)) {
    return 1;
  }
  if (((param_2 != 0) && (iVar4 = X509v3_addr_inherits(), iVar4 == 0)) &&
     (iVar4 = X509v3_addr_inherits(param_2), iVar4 == 0)) {
    OPENSSL_sk_set_cmp_func(param_2,FUN_14f711780);
    iVar8 = 0;
    iVar4 = OPENSSL_sk_num(param_1);
    if (0 < iVar4) {
      do {
        lVar6 = OPENSSL_sk_value(param_1,iVar8);
        uVar5 = OPENSSL_sk_find(param_2,lVar6);
        puVar7 = (undefined8 *)OPENSSL_sk_value(param_2,uVar5);
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        piVar1 = (int *)*puVar7;
        if (((piVar1 == (int *)0x0) ||
            (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar1 < 2))
        {
          sVar3 = 0;
        }
        else {
          sVar3 = CONCAT11(*puVar2,puVar2[1]);
        }
        if (sVar3 == 1) {
          uVar9 = 4;
        }
        else if (sVar3 == 2) {
          uVar9 = 0x10;
        }
        else {
          uVar9 = 0;
        }
        iVar4 = FUN_14f712ba0(*(undefined8 *)(puVar7[1] + 8),
                              *(undefined8 *)(*(longlong *)(lVar6 + 8) + 8),uVar9);
        if (iVar4 == 0) {
          return 0;
        }
        iVar8 = iVar8 + 1;
        iVar4 = OPENSSL_sk_num(param_1);
      } while (iVar8 < iVar4);
    }
    return 1;
  }
  return 0;
}

// X509v3_addr_validate_path @ 14f712850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_addr_validate_path(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar2 = FUN_14f712e70(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}

// X509v3_addr_validate_resource_set @ 14f7128b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509v3_addr_validate_resource_set(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  
  if (param_2 == 0) {
    return 1;
  }
  if (((param_1 == 0) || (iVar3 = OPENSSL_sk_num(), iVar3 == 0)) ||
     ((param_3 == 0 && (iVar3 = X509v3_addr_inherits(param_2), iVar3 != 0)))) {
    return 0;
  }
  iVar3 = OPENSSL_sk_num(param_1);
  if (iVar3 < 1) {
    return 0;
  }
  lVar6 = 0;
  iVar3 = X509v3_addr_is_canonical(param_2);
  if (iVar3 != 0) {
    OPENSSL_sk_set_cmp_func(param_2,FUN_14f711780);
    lVar5 = OPENSSL_sk_dup(param_2);
    if (lVar5 != 0) {
      iVar11 = 0;
      iVar3 = OPENSSL_sk_num(param_1);
      if (0 < iVar3) {
        do {
          lVar6 = OPENSSL_sk_value(param_1,iVar11);
          iVar3 = X509v3_addr_is_canonical(*(undefined8 *)(lVar6 + 0x110));
          if (iVar3 == 0) goto LAB_14f712a6f;
          if (*(longlong *)(lVar6 + 0x110) == 0) {
            iVar9 = 0;
            iVar3 = OPENSSL_sk_num(lVar5);
            if (0 < iVar3) {
              do {
                lVar7 = OPENSSL_sk_value(lVar5,iVar9);
                if (**(int **)(lVar7 + 8) != 0) goto LAB_14f712a6f;
                iVar9 = iVar9 + 1;
                iVar3 = OPENSSL_sk_num(lVar5);
              } while (iVar9 < iVar3);
            }
          }
          else {
            OPENSSL_sk_set_cmp_func(*(longlong *)(lVar6 + 0x110),FUN_14f711780);
            iVar9 = 0;
            iVar3 = OPENSSL_sk_num(lVar5);
            if (0 < iVar3) {
              do {
                lVar7 = OPENSSL_sk_value(lVar5,iVar9);
                uVar4 = OPENSSL_sk_find(*(undefined8 *)(lVar6 + 0x110),lVar7);
                lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x110),uVar4);
                if (lVar8 == 0) {
                  if (**(int **)(lVar7 + 8) == 1) goto LAB_14f712a6f;
                }
                else {
                  piVar1 = *(int **)(lVar8 + 8);
                  if (*piVar1 == 1) {
                    piVar2 = *(int **)(lVar7 + 8);
                    if (*piVar2 != 0) {
                      iVar3 = X509v3_addr_get_afi(lVar7);
                      if (iVar3 == 1) {
                        uVar10 = 4;
                      }
                      else if (iVar3 == 2) {
                        uVar10 = 0x10;
                      }
                      else {
                        uVar10 = 0;
                      }
                      iVar3 = FUN_14f712ba0(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar2 + 2),
                                            uVar10);
                      if (iVar3 == 0) goto LAB_14f712a6f;
                    }
                    OPENSSL_sk_set(lVar5,iVar9);
                  }
                }
                iVar9 = iVar9 + 1;
                iVar3 = OPENSSL_sk_num(lVar5);
              } while (iVar9 < iVar3);
            }
          }
          iVar11 = iVar11 + 1;
          iVar3 = OPENSSL_sk_num(param_1);
        } while (iVar11 < iVar3);
      }
      if (*(longlong *)(lVar6 + 0x110) != 0) {
        iVar11 = 0;
        iVar3 = OPENSSL_sk_num();
        if (0 < iVar3) {
          do {
            lVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x110),iVar11);
            if ((**(int **)(lVar7 + 8) == 0) && (iVar3 = OPENSSL_sk_find(lVar5,lVar7), -1 < iVar3))
            goto LAB_14f712a6f;
            iVar11 = iVar11 + 1;
            iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar6 + 0x110));
          } while (iVar11 < iVar3);
        }
      }
      uVar4 = 1;
      goto LAB_14f712b51;
    }
    ERR_put_error(0x22,0xa6,0x41,"crypto\\x509v3\\v3_addr.c",0x4cd);
  }
  OPENSSL_sk_free(0);
  return 0;
LAB_14f712a6f:
  uVar4 = 0;
LAB_14f712b51:
  OPENSSL_sk_free(lVar5);
  return uVar4;
}

// FUN_14f712ba0 @ 14f712ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f712ba0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_2 == 0) || (param_1 == param_2)) {
    uVar3 = 1;
  }
  else if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)OPENSSL_sk_value(param_2,iVar5);
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        if (*piVar2 == 0) {
          iVar1 = FUN_14f712dc0(local_58,*(undefined8 *)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          uVar3 = *(undefined8 *)(piVar2 + 2);
        }
        else {
          if (*piVar2 != 1) {
            return 0xffffffff;
          }
          iVar1 = FUN_14f712dc0(local_58,**(undefined8 **)(piVar2 + 2),param_3,0);
          if (iVar1 == 0) {
            return 0xffffffff;
          }
          uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
        }
        iVar1 = FUN_14f712dc0(local_78,uVar3,param_3,0xff);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        while( true ) {
          iVar1 = OPENSSL_sk_num(param_1);
          if (iVar1 <= iVar4) {
            return 0;
          }
          piVar2 = (int *)OPENSSL_sk_value(param_1,iVar4);
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          if (*piVar2 == 0) {
            iVar1 = FUN_14f712dc0(local_48,*(undefined8 *)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = *(undefined8 *)(piVar2 + 2);
          }
          else {
            if (*piVar2 != 1) {
              return 0;
            }
            iVar1 = FUN_14f712dc0(local_48,**(undefined8 **)(piVar2 + 2),param_3,0);
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
          }
          iVar1 = FUN_14f712dc0(local_68,uVar3,param_3,0xff);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = memcmp(local_68,local_78,(longlong)param_3);
          if (-1 < iVar1) break;
          iVar4 = iVar4 + 1;
        }
        iVar1 = memcmp(local_48,local_58,(longlong)param_3);
        if (0 < iVar1) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
      } while (iVar5 < iVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

// FUN_14f712dc0 @ 14f712dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f712dc0(void *param_1,int *param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  
  iVar2 = *param_2;
  if ((iVar2 < 0) || (param_3 < iVar2)) {
    uVar3 = 0;
  }
  else {
    if (0 < iVar2) {
      memcpy(param_1,*(void **)(param_2 + 2),(longlong)iVar2);
      if ((param_2[4] & 7U) != 0) {
        bVar4 = (byte)(0xff >> (8U - (char)(param_2[4] & 7U) & 0x1f));
        if (param_4 == 0) {
          pbVar1 = (byte *)((longlong)(*param_2 + -1) + (longlong)param_1);
          *pbVar1 = *pbVar1 & ~bVar4;
        }
        else {
          pbVar1 = (byte *)((longlong)(*param_2 + -1) + (longlong)param_1);
          *pbVar1 = *pbVar1 | bVar4;
        }
      }
    }
    memset((void *)((longlong)param_1 + (longlong)*param_2),(uint)param_4,
           (longlong)(param_3 - *param_2));
    uVar3 = 1;
  }
  return uVar3;
}

// FUN_14f712e70 @ 14f712e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f712e70(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_res20;
  
  lVar5 = 0;
  iVar9 = 1;
  if ((param_2 == 0) || (iVar3 = OPENSSL_sk_num(param_2), iVar3 < 1)) {
LAB_14f7132c3:
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    return 0;
  }
  if (param_1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_14f7132c3;
  if (param_3 == 0) {
    local_res20 = 0;
    lVar6 = OPENSSL_sk_value(param_2,0);
    param_3 = *(longlong *)(lVar6 + 0x110);
    if (param_3 == 0) goto LAB_14f7132a1;
  }
  else {
    local_res20 = -1;
    lVar6 = 0;
  }
  iVar3 = X509v3_addr_is_canonical(param_3);
  if (iVar3 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(int *)(param_1 + 0xac) = local_res20;
      *(longlong *)(param_1 + 0xb8) = lVar6;
      iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar9 == 0) goto LAB_14f7132a1;
      goto LAB_14f712f42;
    }
  }
  else {
LAB_14f712f42:
    OPENSSL_sk_set_cmp_func(param_3,FUN_14f711780);
    lVar5 = OPENSSL_sk_dup(param_3);
    if (lVar5 != 0) {
      local_res20 = local_res20 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
      if (local_res20 < iVar3) {
        do {
          lVar6 = OPENSSL_sk_value(param_2,local_res20);
          iVar3 = X509v3_addr_is_canonical(*(undefined8 *)(lVar6 + 0x110));
          if (iVar3 == 0) {
            if (param_1 == 0) goto LAB_14f71329a;
            *(undefined4 *)(param_1 + 0xb0) = 0x29;
            *(int *)(param_1 + 0xac) = local_res20;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar9 == 0) goto LAB_14f7132a1;
          }
          if (*(longlong *)(lVar6 + 0x110) == 0) {
            iVar10 = 0;
            iVar3 = OPENSSL_sk_num(lVar5);
            if (0 < iVar3) {
LAB_14f713030:
              lVar7 = OPENSSL_sk_value(lVar5,iVar10);
              if (**(int **)(lVar7 + 8) == 0) goto code_r0x00014f713043;
              if (param_1 != 0) {
                *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                *(int *)(param_1 + 0xac) = local_res20;
                *(longlong *)(param_1 + 0xb8) = lVar6;
                iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
joined_r0x00014f713125:
                if (iVar9 == 0) goto LAB_14f7132a1;
                goto LAB_14f713133;
              }
              goto LAB_14f71329a;
            }
          }
          else {
            OPENSSL_sk_set_cmp_func(*(longlong *)(lVar6 + 0x110),FUN_14f711780);
            iVar10 = 0;
            iVar3 = OPENSSL_sk_num(lVar5);
            if (0 < iVar3) {
              do {
                lVar7 = OPENSSL_sk_value(lVar5,iVar10);
                uVar4 = OPENSSL_sk_find(*(undefined8 *)(lVar6 + 0x110),lVar7);
                lVar8 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x110),uVar4);
                if (lVar8 == 0) {
                  if (**(int **)(lVar7 + 8) == 1) {
                    if (param_1 == 0) goto LAB_14f71329a;
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(int *)(param_1 + 0xac) = local_res20;
                    *(longlong *)(param_1 + 0xb8) = lVar6;
                    iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
                    goto joined_r0x00014f713125;
                  }
                }
                else {
                  piVar1 = *(int **)(lVar8 + 8);
                  if (*piVar1 == 1) {
                    piVar2 = *(int **)(lVar7 + 8);
                    if (*piVar2 != 0) {
                      iVar3 = X509v3_addr_get_afi(lVar7);
                      if (iVar3 == 1) {
                        uVar11 = 4;
                      }
                      else if (iVar3 == 2) {
                        uVar11 = 0x10;
                      }
                      else {
                        uVar11 = 0;
                      }
                      iVar3 = FUN_14f712ba0(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar2 + 2),
                                            uVar11);
                      if (iVar3 == 0) {
                        if (param_1 != 0) {
                          *(int *)(param_1 + 0xac) = local_res20;
                          *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                          *(longlong *)(param_1 + 0xb8) = lVar6;
                          iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
                          if (iVar9 != 0) goto LAB_14f713281;
                          goto LAB_14f7132a1;
                        }
                        goto LAB_14f71329a;
                      }
                    }
                    OPENSSL_sk_set(lVar5,iVar10);
                  }
                }
LAB_14f713281:
                iVar10 = iVar10 + 1;
                iVar3 = OPENSSL_sk_num(lVar5);
              } while (iVar10 < iVar3);
            }
          }
LAB_14f713133:
          local_res20 = local_res20 + 1;
          iVar3 = OPENSSL_sk_num(param_2);
        } while (local_res20 < iVar3);
      }
      if (*(longlong *)(lVar6 + 0x110) != 0) {
        iVar10 = 0;
        iVar3 = OPENSSL_sk_num();
        if (0 < iVar3) {
          do {
            lVar7 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 0x110),iVar10);
            if ((**(int **)(lVar7 + 8) == 0) && (iVar3 = OPENSSL_sk_find(lVar5,lVar7), -1 < iVar3))
            {
              if (param_1 == 0) goto LAB_14f71329a;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(int *)(param_1 + 0xac) = local_res20;
              *(longlong *)(param_1 + 0xb8) = lVar6;
              iVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar9 == 0) break;
            }
            iVar10 = iVar10 + 1;
            iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar6 + 0x110));
          } while (iVar10 < iVar3);
        }
      }
      goto LAB_14f7132a1;
    }
    ERR_put_error(0x22,0xa6,0x41,"crypto\\x509v3\\v3_addr.c",0x4cd);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
    }
  }
  iVar9 = 0;
LAB_14f7132a1:
  OPENSSL_sk_free(lVar5);
  return iVar9;
code_r0x00014f713043:
  iVar10 = iVar10 + 1;
  iVar3 = OPENSSL_sk_num(lVar5);
  if (iVar3 <= iVar10) goto LAB_14f713133;
  goto LAB_14f713030;
LAB_14f71329a:
  iVar9 = 0;
  goto LAB_14f7132a1;
}

// d2i_IPAddressChoice @ 14f7132f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_IPAddressChoice(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_IPAddressFamily @ 14f713320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_IPAddressFamily(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_IPAddressOrRange @ 14f713350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_IPAddressOrRange(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_IPAddressRange @ 14f713380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_IPAddressRange(void)

{
  ASN1_item_d2i();
  return;
}

// FUN_14f7133b0 @ 14f7133b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7133b0(int *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    iVar1 = FUN_14f712dc0(param_2,*(undefined8 *)(param_1 + 2),param_4,0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    iVar1 = FUN_14f712dc0(param_2,**(undefined8 **)(param_1 + 2),param_4,0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 8);
  }
  iVar1 = FUN_14f712dc0(param_3,uVar2,param_4,0xff);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

// i2d_IPAddressChoice @ 14f713470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_IPAddressChoice(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4270);
  return;
}

// i2d_IPAddressFamily @ 14f7134a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_IPAddressFamily(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b42e0);
  return;
}

// i2d_IPAddressOrRange @ 14f7134d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_IPAddressOrRange(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4200);
  return;
}

// i2d_IPAddressRange @ 14f713500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_IPAddressRange(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4190);
  return;
}

// FUN_14f713530 @ 14f713530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f713530(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)OPENSSL_sk_value(param_3,iVar3);
      BIO_printf(param_1,"%*s",param_2,"");
      if (*piVar2 == 0) {
        iVar1 = FUN_14f713670(param_1,param_4,0,*(undefined8 *)(piVar2 + 2));
        if (iVar1 == 0) {
          return 0;
        }
        BIO_printf(param_1,"/%d\n",**(int **)(piVar2 + 2) * 8 - ((*(int **)(piVar2 + 2))[4] & 7U));
      }
      else if (*piVar2 == 1) {
        iVar1 = FUN_14f713670(param_1,param_4,0,**(undefined8 **)(piVar2 + 2));
        if (iVar1 == 0) {
          return 0;
        }
        BIO_puts(param_1,"-");
        iVar1 = FUN_14f713670(param_1,param_4,0xff,*(undefined8 *)(*(longlong *)(piVar2 + 2) + 8));
        if (iVar1 == 0) {
          return 0;
        }
        BIO_puts(param_1,"\n");
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
    } while (iVar3 < iVar1);
  }
  return 1;
}

// FUN_14f713670 @ 14f713670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f713670(undefined8 param_1,int param_2,undefined1 param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  char acStack_4a [18];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (*param_4 < 0) {
    return 0;
  }
  if (param_2 == 1) {
    iVar2 = FUN_14f712dc0(acStack_4a + 2,param_4,4,param_3);
    if (iVar2 != 0) {
      local_50 = (uint)(byte)acStack_4a[5];
      local_58 = (uint)(byte)acStack_4a[4];
      BIO_printf(param_1,"%d.%d.%d.%d",acStack_4a[2],acStack_4a[3]);
      return 1;
    }
    return 0;
  }
  if (param_2 != 2) {
    iVar2 = 0;
    if (0 < *param_4) {
      lVar1 = 0;
      do {
        pcVar4 = "";
        if (0 < iVar2) {
          pcVar4 = ":";
        }
        BIO_printf(param_1,"%s%02x",pcVar4,*(undefined1 *)(lVar1 + *(longlong *)(param_4 + 2)));
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 1;
      } while (iVar2 < *param_4);
    }
    BIO_printf(param_1,"[%d]",param_4[4] & 7);
    return 1;
  }
  iVar3 = 0x10;
  iVar2 = FUN_14f712dc0(acStack_4a + 2,param_4,0x10,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  lVar1 = 0x10;
  do {
    if ((acStack_4a[lVar1 + 1] != '\0') || (acStack_4a[lVar1] != '\0')) break;
    iVar3 = iVar3 + -2;
    lVar1 = lVar1 + -2;
  } while (1 < lVar1);
  iVar2 = 0;
  lVar1 = 0;
  if (0 < (longlong)iVar3) {
    do {
      pcVar4 = "";
      if (iVar2 < 0xe) {
        pcVar4 = ":";
      }
      BIO_printf(param_1,"%x%s",CONCAT11(acStack_4a[lVar1 + 2],acStack_4a[lVar1 + 3]),pcVar4);
      iVar2 = iVar2 + 2;
      lVar1 = lVar1 + 2;
    } while (lVar1 < iVar3);
    if (0xf < iVar2) goto LAB_14f7137bc;
  }
  BIO_puts(param_1,":");
LAB_14f7137bc:
  if (iVar2 == 0) {
    BIO_puts(param_1,":");
  }
  return 1;
}

// FUN_14f713870 @ 14f713870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f713870(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res11 = (undefined1)param_2;
  local_res10 = (undefined1)((ulonglong)param_2 >> 8);
  if (param_3 == (undefined1 *)0x0) {
    uVar5 = 2;
  }
  else {
    local_res12 = *param_3;
    uVar5 = 3;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)OPENSSL_sk_value(param_1,iVar4);
      if ((*(uint *)*plVar2 == uVar5) &&
         (iVar1 = memcmp(*(void **)((uint *)*plVar2 + 2),&local_res10,(ulonglong)uVar5), iVar1 == 0)
         ) {
        return plVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar4 < iVar1);
  }
  plVar2 = (longlong *)ASN1_item_new(&DAT_1534b42e0);
  if (plVar2 != (longlong *)0x0) {
    if (plVar2[1] == 0) {
      lVar3 = ASN1_item_new(&DAT_1534b4270);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_14f713968;
    }
    if (*plVar2 == 0) {
      lVar3 = ASN1_OCTET_STRING_new();
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_14f713968;
    }
    iVar1 = ASN1_OCTET_STRING_set(*plVar2,&local_res10,uVar5);
    if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(param_1,plVar2), iVar1 != 0)) {
      return plVar2;
    }
  }
LAB_14f713968:
  ASN1_item_free(plVar2,&DAT_1534b42e0);
  return (longlong *)0x0;
}

// FUN_14f7139a0 @ 14f7139a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7139a0(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = (int)(((int)(param_3 + 7) >> 0x1f & 7U) + param_3 + 7) >> 3;
  uVar4 = param_3 & 0x80000007;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
  }
  puVar2 = (undefined4 *)ASN1_item_new(&DAT_1534b4200);
  if ((int)param_3 < 0) {
    return 0;
  }
  if (param_4 * 8 < (int)param_3) {
    return 0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar2 = 0;
  if (*(longlong *)(puVar2 + 2) == 0) {
    lVar3 = ASN1_BIT_STRING_new();
    *(longlong *)(puVar2 + 2) = lVar3;
    if (lVar3 == 0) goto LAB_14f713a46;
  }
  iVar1 = ASN1_BIT_STRING_set(*(undefined8 *)(puVar2 + 2),param_2,iVar6);
  if (iVar1 != 0) {
    *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) =
         *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) & 0xfffffff8;
    *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) = *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) | 8;
    if (0 < (int)uVar4) {
      pbVar5 = (byte *)((longlong)(iVar6 + -1) + *(longlong *)(*(longlong *)(puVar2 + 2) + 8));
      *pbVar5 = *pbVar5 & ~(byte)(0xff >> ((byte)uVar4 & 0x1f));
      *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) =
           *(uint *)(*(longlong *)(puVar2 + 2) + 0x10) | 8 - uVar4;
    }
    *param_1 = puVar2;
    return 1;
  }
LAB_14f713a46:
  ASN1_item_free(puVar2,&DAT_1534b4200);
  return 0;
}

// FUN_14f713ad0 @ 14f713ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f713ad0(undefined8 *param_1,void *param_2,void *param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  size_t sVar9;
  uint uVar10;
  size_t _Size;
  
  _Size = (size_t)param_4;
  iVar3 = memcmp(param_2,param_3,_Size);
  if (0 < iVar3) {
    return 0;
  }
  iVar3 = FUN_14f713e10(param_2,param_3,param_4);
  if (-1 < iVar3) {
    uVar5 = FUN_14f7139a0(param_1,param_2,iVar3,param_4);
    return uVar5;
  }
  puVar6 = (undefined4 *)ASN1_item_new(&DAT_1534b4200);
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar6 = 1;
  plVar7 = (longlong *)ASN1_item_new(&DAT_1534b4190);
  *(longlong **)(puVar6 + 2) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 == 0) {
      lVar8 = ASN1_BIT_STRING_new();
      **(longlong **)(puVar6 + 2) = lVar8;
      if (lVar8 == 0) goto LAB_14f713d00;
    }
    if (*(longlong *)(*(longlong *)(puVar6 + 2) + 8) == 0) {
      lVar8 = ASN1_BIT_STRING_new();
      *(longlong *)(*(longlong *)(puVar6 + 2) + 8) = lVar8;
      if (lVar8 == 0) goto LAB_14f713d00;
    }
    sVar9 = _Size;
    iVar3 = param_4;
    if (0 < param_4) {
      do {
        if (*(char *)((longlong)param_2 + (sVar9 - 1)) != '\0') break;
        iVar3 = iVar3 + -1;
        sVar9 = sVar9 - 1;
      } while (0 < (longlong)sVar9);
    }
    iVar4 = ASN1_BIT_STRING_set(**(undefined8 **)(puVar6 + 2),param_2,iVar3);
    if (iVar4 != 0) {
      *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) & 0xfffffff8;
      *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) =
           *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) | 8;
      if (0 < iVar3) {
        iVar4 = 1;
        bVar2 = *(byte *)((longlong)(iVar3 + -1) + (longlong)param_2);
        if ((bVar2 & 0x7f) != 0) {
          do {
            iVar4 = iVar4 + 1;
          } while (((uint)bVar2 & 0xffU >> ((byte)iVar4 & 0x1f)) != 0);
        }
        *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) =
             *(uint *)(**(longlong **)(puVar6 + 2) + 0x10) | 8U - iVar4;
      }
      sVar9 = _Size;
      if (0 < param_4) {
        do {
          if (*(char *)((longlong)param_3 + (_Size - 1)) != -1) break;
          sVar9 = (size_t)((int)sVar9 - 1);
          _Size = _Size - 1;
        } while (0 < (longlong)_Size);
      }
      iVar3 = ASN1_BIT_STRING_set(*(undefined8 *)(*(longlong *)(puVar6 + 2) + 8),param_3,
                                  sVar9 & 0xffffffff);
      if (iVar3 != 0) {
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar6 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 & 0xfffffff8;
        puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar6 + 2) + 8) + 0x10);
        *puVar1 = *puVar1 | 8;
        if (0 < (int)sVar9) {
          iVar3 = 1;
          bVar2 = *(byte *)((longlong)((int)sVar9 + -1) + (longlong)param_3);
          if ((bVar2 & 0x7f) != 0x7f) {
            do {
              iVar3 = iVar3 + 1;
              uVar10 = 0xff >> ((byte)iVar3 & 0x1f);
            } while ((uVar10 & bVar2) != uVar10);
          }
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(puVar6 + 2) + 8) + 0x10);
          *puVar1 = *puVar1 | 8U - iVar3;
        }
        *param_1 = puVar6;
        return 1;
      }
    }
  }
LAB_14f713d00:
  ASN1_item_free(puVar6,&DAT_1534b4200);
  return 0;
}

// FUN_14f713d40 @ 14f713d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f713d40(undefined8 param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  
  lVar2 = FUN_14f713870();
  if (((lVar2 == 0) || (piVar1 = *(int **)(lVar2 + 8), piVar1 == (int *)0x0)) ||
     ((*piVar1 == 0 && (*(longlong *)(piVar1 + 2) != 0)))) {
    return 0;
  }
  if ((*piVar1 == 1) && (*(longlong *)(piVar1 + 2) != 0)) {
    return *(longlong *)(piVar1 + 2);
  }
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    pcVar4 = FUN_14f7142d0;
  }
  else {
    if (param_2 != 2) goto LAB_14f713dd2;
    pcVar4 = FUN_14f714300;
  }
  OPENSSL_sk_set_cmp_func(lVar3,pcVar4);
LAB_14f713dd2:
  **(undefined4 **)(lVar2 + 8) = 1;
  *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = lVar3;
  return lVar3;
}

// FUN_14f713e10 @ 14f713e10

int FUN_14f713e10(longlong param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_3) {
    pcVar4 = param_2;
    iVar5 = 0;
    do {
      if (pcVar4[param_1 - (longlong)param_2] != *pcVar4) break;
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + 1;
    } while ((longlong)pcVar4 - (longlong)param_2 < (longlong)param_3);
  }
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    pcVar4 = param_2 + param_3;
    do {
      if ((pcVar4[param_1 - (longlong)param_2] != '\0') || (*pcVar4 != -1)) break;
      pcVar4 = pcVar4 + -1;
      param_3 = param_3 + -1;
    } while (-1 < (longlong)pcVar4 - (longlong)param_2);
  }
  if (param_3 <= iVar5) {
    if (param_3 < iVar5) {
      return iVar5 * 8;
    }
    bVar1 = *(byte *)(iVar5 + param_1);
    bVar3 = param_2[iVar5] ^ bVar1;
    switch(bVar3) {
    case 1:
      iVar2 = 7;
      break;
    default:
      goto switchD_14f713eef_caseD_2;
    case 3:
      iVar2 = 6;
      break;
    case 7:
      iVar2 = 5;
      break;
    case 0xf:
      iVar2 = 4;
      break;
    case 0x1f:
      iVar2 = 3;
      break;
    case 0x3f:
      iVar2 = 2;
      break;
    case 0x7f:
      iVar2 = 1;
    }
    if (((bVar3 & bVar1) == 0) && ((param_2[iVar5] & bVar3) == bVar3)) {
      return iVar2 + iVar5 * 8;
    }
  }
switchD_14f713eef_caseD_2:
  return -1;
}

// FUN_14f713ff0 @ 14f713ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f713ff0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f714010 @ 14f714010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714010(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f714030 @ 14f714030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714030(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_14f714050 @ 14f714050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714050(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f714070 @ 14f714070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714070(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f714090 @ 14f714090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714090(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f7140b0 @ 14f7140b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7140b0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7140d0 @ 14f7140d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7140d0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7140f0 @ 14f7140f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7140f0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f714110 @ 14f714110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714110(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f714130 @ 14f714130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714130(void)

{
  OPENSSL_sk_set_cmp_func();
  return;
}

// FUN_14f714150 @ 14f714150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714150(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f714170 @ 14f714170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714170(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f714190 @ 14f714190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714190(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f7141b0 @ 14f7141b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7141b0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7141d0 @ 14f7141d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7141d0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7141f0 @ 14f7141f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7141f0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f714210 @ 14f714210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714210(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f714230 @ 14f714230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714230(void)

{
  OPENSSL_sk_set_cmp_func();
  return;
}

// FUN_14f714250 @ 14f714250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714250(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f714270 @ 14f714270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714270(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f714290 @ 14f714290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714290(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7142b0 @ 14f7142b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7142b0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7142d0 @ 14f7142d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7142d0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_14f711840(*param_1,*param_2,4);
  return;
}

// FUN_14f714300 @ 14f714300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f714300(undefined8 *param_1,undefined8 *param_2)

{
  FUN_14f711840(*param_1,*param_2,0x10);
  return;
}

