// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// PBEPARAM_free @ 14f7bf5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBEPARAM_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534eaa60);
  return;
}

// PBEPARAM_it @ 14f7bf5f0

undefined * PBEPARAM_it(void)

{
  return &DAT_1534eaa60;
}

// PBEPARAM_new @ 14f7bf600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBEPARAM_new(void)

{
  ASN1_item_new(&DAT_1534eaa60);
  return;
}

// PKCS5_pbe_set @ 14f7bf630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS5_pbe_set(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7bf650;
  lVar2 = X509_ALGOR_new();
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xca,0x41,"crypto\\asn1\\p5_pbe.c",0x57);
  }
  else {
    iVar1 = PKCS5_pbe_set0_algor(lVar2,param_1,param_2,param_3,param_4,uVar3);
    if (iVar1 != 0) {
      return lVar2;
    }
    X509_ALGOR_free(lVar2);
  }
  return 0;
}

// PKCS5_pbe_set0_algor @ 14f7bf6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS5_pbe_set0_algor(undefined8 param_1,undefined4 param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Dst;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7bf704;
  local_28 = 0;
  _Dst = (void *)0x0;
  puVar3 = (undefined8 *)ASN1_item_new(&DAT_1534eaa60);
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = 0x24;
  }
  else {
    iVar1 = 0x800;
    if (0 < param_3) {
      iVar1 = param_3;
    }
    iVar1 = ASN1_INTEGER_set(puVar3[1],iVar1);
    if (iVar1 == 0) {
      uVar6 = 0x2a;
    }
    else {
      iVar1 = 8;
      if (param_5 != 0) {
        iVar1 = param_5;
      }
      _Dst = (void *)CRYPTO_malloc((longlong)iVar1,"crypto\\asn1\\p5_pbe.c",0x30);
      if (_Dst == (void *)0x0) {
        uVar6 = 0x32;
      }
      else {
        if (param_4 == (void *)0x0) {
          iVar2 = RAND_bytes(_Dst,iVar1);
          if (iVar2 < 1) goto LAB_14f7bf754;
        }
        else {
          memcpy(_Dst,param_4,(longlong)iVar1);
        }
        ASN1_STRING_set0(*puVar3,_Dst,iVar1);
        _Dst = (void *)0x0;
        lVar4 = ASN1_item_pack(puVar3,&DAT_1534eaa60,&local_28);
        if (lVar4 != 0) {
          ASN1_item_free(puVar3,&DAT_1534eaa60);
          puVar3 = (undefined8 *)0x0;
          uVar5 = OBJ_nid2obj(param_2);
          iVar1 = X509_ALGOR_set0(param_1,uVar5,0x10,local_28);
          if (iVar1 != 0) {
            return 1;
          }
          goto LAB_14f7bf754;
        }
        uVar6 = 0x3e;
      }
    }
  }
  ERR_put_error(0xd,0xd7,0x41,"crypto\\asn1\\p5_pbe.c",uVar6);
LAB_14f7bf754:
  CRYPTO_free(_Dst,"crypto\\asn1\\p5_pbe.c",0x49);
  ASN1_item_free(puVar3,&DAT_1534eaa60);
  ASN1_STRING_free(local_28);
  return 0;
}

// d2i_PBEPARAM @ 14f7bf8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PBEPARAM(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_PBEPARAM @ 14f7bf8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PBEPARAM(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534eaa60);
  return;
}

