// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// ASN1_PRINTABLE_type @ 14f76b340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_PRINTABLE_type(byte *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar3 = false;
  uVar6 = (ulonglong)param_2;
  bVar2 = false;
  if (param_1 != (byte *)0x0) {
    if ((int)param_2 < 0) {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while (param_1[uVar6] != 0);
    }
    if (0 < (int)uVar6) {
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
        iVar4 = ossl_ctype_check(bVar1,0x800);
        if (iVar4 == 0) {
          bVar3 = true;
        }
        if ((bVar1 & 0x80) != 0) {
          bVar2 = true;
        }
      } while (0 < (int)uVar5);
      if (bVar2) {
        return 0x14;
      }
      if (bVar3) {
        return 0x16;
      }
    }
  }
  return 0x13;
}

// ASN1_STRING_print @ 14f76b400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_STRING_print(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  char local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f76b410;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0;
    iVar4 = 0;
    pcVar5 = *(char **)(param_2 + 2);
    if (0 < *param_2) {
      lVar3 = 0;
      do {
        cVar1 = *pcVar5;
        if ((((byte)(cVar1 - 0x20U) < 0x5f) || (cVar1 == '\n')) || (cVar1 == '\r')) {
          local_68[lVar3] = cVar1;
        }
        else {
          local_68[lVar3] = '.';
        }
        iVar6 = iVar6 + 1;
        lVar3 = lVar3 + 1;
        if (0x4f < iVar6) {
          iVar6 = BIO_write(param_1,local_68);
          if (iVar6 < 1) {
            return 0;
          }
          iVar6 = 0;
          lVar3 = 0;
        }
        iVar4 = iVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (iVar4 < *param_2);
      if ((0 < iVar6) && (iVar4 = BIO_write(param_1,local_68), iVar4 < 1)) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

// ASN1_UNIVERSALSTRING_to_string @ 14f76b4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_UNIVERSALSTRING_to_string(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  
  if (param_1[1] != 0x1c) {
    return 0;
  }
  uVar5 = *param_1;
  uVar4 = uVar5 & 0x80000003;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
  }
  if (uVar4 != 0) {
    return 0;
  }
  pcVar10 = *(char **)(param_1 + 2);
  bVar3 = false;
  iVar7 = 0;
  pcVar6 = pcVar10;
  if (0 < (int)uVar5) {
    do {
      if (((*pcVar6 != '\0') || (pcVar6[1] != '\0')) || (pcVar6[2] != '\0')) break;
      pcVar6 = pcVar6 + 4;
      iVar7 = iVar7 + 4;
    } while (iVar7 < (int)uVar5);
  }
  if (iVar7 < (int)uVar5) {
    return 0;
  }
  iVar7 = 3;
  if (3 < (int)uVar5) {
    lVar11 = 3;
    do {
      iVar7 = iVar7 + 4;
      *pcVar10 = *(char *)(lVar11 + *(longlong *)(param_1 + 2));
      pcVar10 = pcVar10 + 1;
      lVar11 = lVar11 + 4;
    } while (iVar7 < (int)*param_1);
  }
  *pcVar10 = '\0';
  bVar2 = false;
  pbVar8 = *(byte **)(param_1 + 2);
  uVar5 = (int)(*param_1 + ((int)*param_1 >> 0x1f & 3U)) >> 2;
  *param_1 = uVar5;
  uVar9 = (ulonglong)uVar5;
  if (pbVar8 != (byte *)0x0) {
    if ((int)uVar5 < 0) {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar9 = uVar9 + 1;
      } while (pbVar8[uVar9] != 0);
    }
    if (0 < (int)uVar9) {
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar5 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar5;
        iVar7 = ossl_ctype_check(bVar1,0x800);
        if (iVar7 == 0) {
          bVar3 = true;
        }
        if ((bVar1 & 0x80) != 0) {
          bVar2 = true;
        }
      } while (0 < (int)uVar5);
      if (bVar2) {
        uVar5 = 0x14;
        goto LAB_14f76b63a;
      }
      uVar5 = 0x16;
      if (bVar3) goto LAB_14f76b63a;
    }
  }
  uVar5 = 0x13;
LAB_14f76b63a:
  param_1[1] = uVar5;
  return 1;
}

