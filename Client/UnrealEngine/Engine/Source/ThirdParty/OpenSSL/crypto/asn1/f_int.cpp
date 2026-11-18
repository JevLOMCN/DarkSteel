// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// a2i_ASN1_ENUMERATED @ 14f79b860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void a2i_ASN1_ENUMERATED(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = a2i_ASN1_INTEGER();
  if (iVar1 == 1) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0x100;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 2;
  }
  return;
}

// a2i_ASN1_INTEGER @ 14f79b8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 a2i_ASN1_INTEGER(undefined8 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int local_40;
  
  param_2[1] = 2;
  bVar3 = true;
  local_40 = 0;
  iVar4 = BIO_gets(param_1,param_3,param_4);
  lVar12 = 0;
  iVar2 = 0;
  while (lVar6 = lVar12, 0 < iVar4) {
    iVar7 = iVar4 + -1;
    if (param_3[iVar7] == '\n') {
      param_3[iVar7] = '\0';
      iVar4 = iVar7;
    }
    if (iVar4 == 0) break;
    iVar7 = iVar4 + -1;
    if (param_3[iVar7] == '\r') {
      param_3[iVar7] = '\0';
      iVar4 = iVar7;
    }
    if (iVar4 == 0) break;
    cVar1 = param_3[iVar4 + -1];
    iVar9 = 0;
    lVar11 = 0;
    iVar7 = iVar4;
    if (0 < iVar4) {
      do {
        iVar5 = ossl_ctype_check((int)param_3[lVar11],0x10);
        iVar7 = iVar9;
        if (iVar5 == 0) break;
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 1;
        iVar7 = iVar4;
      } while (lVar11 < iVar4);
    }
    param_3[iVar7] = '\0';
    if (iVar7 < 2) break;
    pcVar10 = param_3;
    if (((bVar3) && (bVar3 = false, *param_3 == '0')) && (param_3[1] == '0')) {
      pcVar10 = param_3 + 2;
      iVar7 = iVar7 + -2;
    }
    uVar8 = iVar7 - (uint)(cVar1 == '\\');
    if ((uVar8 & 1) != 0) {
      ERR_put_error(0xd,0x66,0x91,"crypto\\asn1\\f_int.c",0x67);
      uVar13 = 0x68;
      goto LAB_14f79bab5;
    }
    lVar11 = (longlong)local_40;
    iVar4 = (int)uVar8 / 2;
    iVar7 = iVar4 + iVar2;
    if (local_40 < iVar7) {
      local_40 = iVar2 + iVar4 * 2;
      lVar6 = CRYPTO_clear_realloc(lVar12,lVar11,(longlong)local_40,"crypto\\asn1\\f_int.c",0x6d);
      if (lVar6 == 0) {
        ERR_put_error(0xd,0x66,0x41,"crypto\\asn1\\f_int.c",0x6f);
        uVar13 = 0x70;
        goto LAB_14f79bab5;
      }
    }
    if (0 < iVar4) {
      lVar12 = 0;
      do {
        lVar11 = 0;
        do {
          iVar9 = OPENSSL_hexchar2int(pcVar10[lVar11]);
          if (iVar9 < 0) {
            ERR_put_error(0xd,0x66,0x8d,"crypto\\asn1\\f_int.c",0x7b);
            goto LAB_14f79ba8f;
          }
          lVar11 = lVar11 + 1;
          *(byte *)(iVar2 + lVar12 + lVar6) = *(char *)(iVar2 + lVar12 + lVar6) << 4 | (byte)iVar9;
        } while (lVar11 < 2);
        lVar12 = lVar12 + 1;
        pcVar10 = pcVar10 + 2;
      } while (lVar12 < iVar4);
    }
    if (cVar1 != '\\') {
      *param_2 = iVar7;
      *(longlong *)(param_2 + 2) = lVar6;
      return 1;
    }
    iVar4 = BIO_gets(param_1,param_3,param_4);
    lVar12 = lVar6;
    iVar2 = iVar7;
  }
LAB_14f79ba8f:
  ERR_put_error(0xd,0x66,0x96,"crypto\\asn1\\f_int.c",0x8c);
  uVar13 = 0x8d;
  lVar12 = lVar6;
LAB_14f79bab5:
  CRYPTO_free(lVar12,"crypto\\asn1\\f_int.c",uVar13);
  return 0;
}

// i2a_ASN1_ENUMERATED @ 14f79bb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2a_ASN1_ENUMERATED(void)

{
  i2a_ASN1_INTEGER();
  return;
}

// i2a_ASN1_INTEGER @ 14f79bba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2a_ASN1_INTEGER(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_res10;
  undefined1 local_res11;
  
  uVar3 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar6 = uVar3;
  if ((param_2[1] & 0x100U) != 0) {
    uVar6 = 1;
    iVar1 = BIO_write(param_1,"-",1);
    if (iVar1 != 1) {
      return 0xffffffff;
    }
  }
  if (*param_2 == 0) {
    iVar1 = BIO_write(param_1,"00",2);
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    return (ulonglong)((int)uVar6 + 2);
  }
  uVar4 = uVar3;
  if (*param_2 < 1) {
    return uVar6;
  }
  while( true ) {
    iVar5 = (int)uVar6;
    iVar1 = (int)uVar3;
    if ((iVar1 != 0) && (iVar1 == (iVar1 / 0x23) * 0x23)) {
      iVar2 = BIO_write(param_1,"\\\n",2);
      if (iVar2 != 2) {
        return 0xffffffff;
      }
      iVar5 = iVar5 + 2;
    }
    local_res10 = PTR_s_0123456789ABCDEF_154df9e40
                  [*(byte *)(*(longlong *)(param_2 + 2) + uVar4) >> 4];
    local_res11 = PTR_s_0123456789ABCDEF_154df9e40
                  [*(byte *)(*(longlong *)(param_2 + 2) + uVar4) & 0xf];
    iVar2 = BIO_write(param_1,&local_res10,2);
    if (iVar2 != 2) break;
    uVar6 = (ulonglong)(iVar5 + 2);
    uVar3 = (ulonglong)(iVar1 + 1U);
    uVar4 = uVar4 + 1;
    if (*param_2 <= (int)(iVar1 + 1U)) {
      return uVar6;
    }
  }
  return 0xffffffff;
}

