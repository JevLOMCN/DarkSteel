// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// v2i_ASN1_BIT_STRING @ 14f780ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong v2i_ASN1_BIT_STRING(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  
  lVar4 = ASN1_BIT_STRING_new();
  if (lVar4 == 0) {
    ERR_put_error(0x22,0x65,0x41,"crypto\\x509v3\\v3_bitst.c",0x43);
    return 0;
  }
  iVar9 = 0;
  iVar3 = OPENSSL_sk_num(param_3);
  if (0 < iVar3) {
    do {
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_3,iVar9);
      puVar8 = *(undefined4 **)(param_1 + 0x60);
      pcVar6 = *(char **)(puVar8 + 2);
      if (pcVar6 != (char *)0x0) {
        do {
          pcVar7 = *(char **)(puVar8 + 4);
          lVar10 = puVar5[1] - (longlong)pcVar7;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar10];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
LAB_14f780f86:
            iVar3 = ASN1_BIT_STRING_set_bit(lVar4,*puVar8,1);
            if (iVar3 == 0) {
              ERR_put_error(0x22,0x65,0x41,"crypto\\x509v3\\v3_bitst.c",0x4d);
              ASN1_BIT_STRING_free(lVar4);
              return 0;
            }
            break;
          }
          lVar10 = puVar5[1] - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar10];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) goto LAB_14f780f86;
          pcVar6 = *(char **)(puVar8 + 8);
          puVar8 = puVar8 + 6;
        } while (pcVar6 != (char *)0x0);
      }
      if (*(longlong *)(puVar8 + 2) == 0) {
        ERR_put_error(0x22,0x65,0x6f,"crypto\\x509v3\\v3_bitst.c",0x56);
        ERR_add_error_data(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
        ASN1_BIT_STRING_free(lVar4);
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar3 = OPENSSL_sk_num(param_3);
    } while (iVar9 < iVar3);
  }
  return lVar4;
}

// i2v_ASN1_BIT_STRING @ 14f781070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 i2v_ASN1_BIT_STRING(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_res18 [2];
  
  puVar3 = *(undefined4 **)(param_1 + 0x60);
  local_res18[0] = param_3;
  if (*(longlong *)(*(undefined4 **)(param_1 + 0x60) + 2) != 0) {
    do {
      iVar2 = ASN1_BIT_STRING_get_bit(param_2,*puVar3);
      if (iVar2 != 0) {
        X509V3_add_value(*(undefined8 *)(puVar3 + 2),0,local_res18);
      }
      plVar1 = (longlong *)(puVar3 + 8);
      puVar3 = puVar3 + 6;
    } while (*plVar1 != 0);
    return local_res18[0];
  }
  return param_3;
}

// FUN_14f7810f0 @ 14f7810f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7810f0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f781110 @ 14f781110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781110(void)

{
  OPENSSL_sk_value();
  return;
}

