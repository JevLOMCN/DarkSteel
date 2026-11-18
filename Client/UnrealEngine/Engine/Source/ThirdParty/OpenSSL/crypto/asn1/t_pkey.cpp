// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ASN1_bn_print @ 14f788280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_bn_print(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       int param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char *pcVar9;
  
  if (param_3 != 0) {
    iVar1 = BN_is_negative(param_3);
    pcVar6 = "";
    pcVar9 = "";
    if (iVar1 != 0) {
      pcVar9 = "-";
    }
    uVar2 = BIO_indent(param_1,param_5,0x80);
    if ((int)uVar2 != 0) {
      iVar1 = BN_is_zero(param_3);
      if (iVar1 == 0) {
        iVar1 = BN_num_bits(param_3);
        if (iVar1 + 7 < 0x48) {
          puVar3 = (undefined4 *)bn_get_words();
          puVar4 = (undefined4 *)bn_get_words(param_3);
          iVar1 = BIO_printf(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar9,*puVar4,pcVar9,*puVar3);
          uVar2 = (ulonglong)(0 < iVar1);
        }
        else {
          iVar1 = BN_num_bits(param_3);
          lVar7 = (longlong)(((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) + 1);
          puVar5 = (undefined1 *)CRYPTO_malloc(lVar7,"crypto\\asn1\\t_pkey.c",0x49);
          uVar2 = 0;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
            if (*pcVar9 == '-') {
              pcVar6 = " (Negative)";
            }
            iVar1 = BIO_printf(param_1,"%s%s\n",param_2,pcVar6);
            if (0 < iVar1) {
              iVar1 = BN_bn2bin(param_3,puVar5 + 1);
              if ((char)puVar5[1] < '\0') {
                iVar1 = iVar1 + 1;
                puVar8 = puVar5;
              }
              else {
                puVar8 = puVar5 + 1;
              }
              iVar1 = ASN1_buf_print(param_1,puVar8,(longlong)iVar1,param_5 + 4);
              uVar2 = 0;
              if (iVar1 != 0) {
                uVar2 = 1;
              }
            }
          }
          CRYPTO_clear_free(puVar5,lVar7,"crypto\\asn1\\t_pkey.c",0x5b);
        }
      }
      else {
        iVar1 = BIO_printf(param_1,"%s 0\n",param_2);
        uVar2 = (ulonglong)(0 < iVar1);
      }
    }
    return uVar2;
  }
  return 1;
}

// ASN1_buf_print @ 14f788470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ASN1_buf_print(undefined8 param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      if ((uVar2 == (uVar2 / 0xf) * 0xf) &&
         (((uVar2 != 0 && (iVar1 = BIO_puts(param_1,"\n"), iVar1 < 1)) ||
          (iVar1 = BIO_indent(param_1,param_4,0x80), iVar1 == 0)))) {
        return false;
      }
      pcVar3 = ":";
      if (uVar2 == param_3 - 1) {
        pcVar3 = "";
      }
      iVar1 = BIO_printf(param_1,"%02x%s",*(undefined1 *)(uVar2 + param_2),pcVar3);
      if (iVar1 < 1) {
        return false;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  iVar1 = BIO_write(param_1,"\n",1);
  return 0 < iVar1;
}

