// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// a2i_ASN1_STRING @ 14f7c14f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 a2i_ASN1_STRING(undefined8 param_1,int *param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  int local_44;
  
  iVar5 = 0;
  local_44 = 0;
  lVar4 = 0;
  iVar2 = BIO_gets(param_1,param_3,param_4);
  lVar13 = lVar4;
  iVar12 = iVar5;
  if (iVar2 < 1) {
LAB_14f7c1754:
    *param_2 = iVar5;
    uVar11 = 1;
    *(longlong *)(param_2 + 2) = lVar4;
  }
  else {
    do {
      iVar5 = iVar2 + -1;
      if (*(char *)(iVar5 + param_3) == '\n') {
        *(undefined1 *)(iVar5 + param_3) = 0;
        iVar2 = iVar5;
      }
      lVar4 = lVar13;
      if (iVar2 == 0) break;
      iVar5 = iVar2 + -1;
      if (*(char *)(iVar5 + param_3) == '\r') {
        *(undefined1 *)(iVar5 + param_3) = 0;
        iVar2 = iVar5;
      }
      if (iVar2 == 0) break;
      iVar8 = iVar2 + -1;
      lVar9 = (longlong)iVar8;
      cVar1 = *(char *)(lVar9 + param_3);
      iVar5 = iVar2;
      if (0 < iVar8) {
        do {
          iVar3 = ossl_ctype_check((int)*(char *)(lVar9 + param_3),0x10);
          iVar5 = iVar8;
          if (iVar3 == 0) break;
          iVar8 = iVar8 + -1;
          lVar9 = lVar9 + -1;
          iVar5 = iVar2;
        } while (0 < lVar9);
      }
      *(undefined1 *)(iVar5 + param_3) = 0;
      if (iVar5 < 2) break;
      uVar6 = iVar5 - (uint)(cVar1 == '\\');
      if ((uVar6 & 1) != 0) {
        ERR_put_error(0xd,0x67,0x91,"crypto\\asn1\\f_string.c",0x5e);
        uVar11 = 0x5f;
        goto LAB_14f7c1739;
      }
      iVar2 = (int)uVar6 / 2;
      iVar5 = iVar2 + iVar12;
      if (local_44 < iVar5) {
        local_44 = iVar12 + iVar2 * 2;
        lVar4 = CRYPTO_realloc(lVar13,local_44,"crypto\\asn1\\f_string.c",100);
        if (lVar4 == 0) {
          ERR_put_error(0xd,0x67,0x41,"crypto\\asn1\\f_string.c",0x66);
          uVar11 = 0x67;
          goto LAB_14f7c1739;
        }
      }
      lVar13 = lVar4;
      if (0 < iVar2) {
        lVar10 = 0;
        lVar9 = param_3;
        do {
          lVar7 = 0;
          do {
            iVar8 = OPENSSL_hexchar2int(*(undefined1 *)(lVar9 + lVar7));
            if (iVar8 < 0) {
              ERR_put_error(0xd,0x67,0x8d,"crypto\\asn1\\f_string.c",0x72);
              uVar11 = 0x73;
              goto LAB_14f7c1739;
            }
            lVar7 = lVar7 + 1;
            *(byte *)(iVar12 + lVar10 + lVar4) =
                 *(char *)(iVar12 + lVar10 + lVar4) << 4 | (byte)iVar8;
          } while (lVar7 < 2);
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 2;
        } while (lVar10 < iVar2);
      }
      if (cVar1 != '\\') goto LAB_14f7c1754;
      iVar2 = BIO_gets(param_1,param_3,param_4);
      iVar12 = iVar5;
    } while (0 < iVar2);
    ERR_put_error(0xd,0x67,0x96,"crypto\\asn1\\f_string.c",0x85);
    uVar11 = 0x86;
    lVar13 = lVar4;
LAB_14f7c1739:
    CRYPTO_free(lVar13,"crypto\\asn1\\f_string.c",uVar11);
    uVar11 = 0;
  }
  return uVar11;
}

// i2a_ASN1_STRING @ 14f7c1780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2a_ASN1_STRING(undefined8 param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar5;
  int iVar6;
  undefined1 local_res10;
  undefined1 local_res11;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    uVar2 = BIO_write(param_1,"0",1);
    if ((int)uVar2 == 1) {
      uVar2 = uVar2 & 0xffffffff;
    }
    else {
LAB_14f7c1884:
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar4 = uVar2;
    uVar5 = uVar2;
    if (0 < *param_2) {
      do {
        iVar6 = (int)uVar2;
        iVar3 = (int)uVar4;
        if ((iVar3 != 0) && (iVar3 == (iVar3 / 0x23) * 0x23)) {
          iVar1 = BIO_write(param_1,"\\\n",2);
          if (iVar1 != 2) goto LAB_14f7c1884;
          iVar6 = iVar6 + 2;
        }
        local_res10 = PTR_s_0123456789ABCDEF_154df9e50
                      [*(byte *)(*(longlong *)(param_2 + 2) + uVar5) >> 4];
        local_res11 = PTR_s_0123456789ABCDEF_154df9e50
                      [*(byte *)(*(longlong *)(param_2 + 2) + uVar5) & 0xf];
        iVar1 = BIO_write(param_1,&local_res10,2);
        if (iVar1 != 2) goto LAB_14f7c1884;
        uVar2 = (ulonglong)(iVar6 + 2);
        uVar4 = (ulonglong)(iVar3 + 1U);
        uVar5 = uVar5 + 1;
      } while ((int)(iVar3 + 1U) < *param_2);
    }
  }
  return uVar2;
}

