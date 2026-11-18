// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// PKCS12_key_gen_asc @ 14f7bf910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int PKCS12_key_gen_asc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                      undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7bf920;
  if (param_1 == 0) {
    local_res8[0] = 0;
    local_18 = 0;
  }
  else {
    lVar2 = OPENSSL_asc2uni(param_1,param_2,&local_18,local_res8);
    if (lVar2 == 0) {
      ERR_put_error(0x23,0x6e,0x41,"crypto\\pkcs12\\p12_key.c",0x2a);
      return 0;
    }
  }
  iVar1 = PKCS12_key_gen_uni(local_18,local_res8[0],param_3,param_4,param_5,param_6,param_7,param_8,
                             param_9);
  if (iVar1 < 1) {
    return 0;
  }
  CRYPTO_clear_free(local_18,(longlong)local_res8[0],"crypto\\pkcs12\\p12_key.c",0x31);
  return iVar1;
}

// PKCS12_key_gen_uni @ 14f7bfa00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS12_key_gen_uni(longlong param_1,int param_2,longlong param_3,int param_4,undefined1 param_5,
                  int param_6,int param_7,void *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  byte *pbVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  lVar3 = EVP_MD_CTX_new();
  _Src = (void *)0x0;
  if (lVar3 != 0) {
    iVar1 = EVP_MD_block_size(param_9);
    lVar7 = (longlong)iVar1;
    iVar2 = EVP_MD_size(param_9);
    _Src = (void *)0x0;
    if ((0 < iVar2) && (0 < iVar1)) {
      local_58 = (undefined1 *)CRYPTO_malloc(lVar7,"crypto\\pkcs12\\p12_key.c",0x6a);
      _Src = (void *)CRYPTO_malloc((longlong)iVar2,"crypto\\pkcs12\\p12_key.c",0x6b);
      local_60 = CRYPTO_malloc((longlong)(iVar1 + 1),"crypto\\pkcs12\\p12_key.c",0x6c);
      iVar16 = param_4 + -1 + iVar1;
      iVar16 = iVar16 - iVar16 % iVar1;
      if (param_2 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = param_2 + -1 + iVar1;
        iVar15 = iVar15 - iVar15 % iVar1;
      }
      lVar5 = (longlong)(iVar15 + iVar16);
      local_50 = (undefined1 *)CRYPTO_malloc(lVar5,"crypto\\pkcs12\\p12_key.c");
      if ((((local_58 != (undefined1 *)0x0) && (_Src != (void *)0x0)) && (local_60 != 0)) &&
         (local_50 != (undefined1 *)0x0)) {
        lVar13 = lVar7;
        puVar8 = local_58;
        if (0 < iVar1) {
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar8 = param_5;
            puVar8 = puVar8 + 1;
          }
        }
        iVar1 = 0;
        puVar8 = local_50;
        if (0 < iVar16) {
          do {
            iVar10 = iVar1 + 1;
            *puVar8 = *(undefined1 *)(iVar1 % param_4 + param_3);
            puVar8 = puVar8 + 1;
            iVar1 = iVar10;
          } while (iVar10 < iVar16);
        }
        iVar1 = 0;
        if (0 < iVar15) {
          do {
            iVar16 = iVar1 + 1;
            *puVar8 = *(undefined1 *)(iVar1 % param_2 + param_1);
            puVar8 = puVar8 + 1;
            iVar1 = iVar16;
          } while (iVar16 < iVar15);
        }
        iVar1 = EVP_DigestInit_ex(lVar3,param_9,0);
        while (iVar1 != 0) {
          uVar14 = 0;
          iVar16 = 1;
          iVar1 = EVP_DigestUpdate(lVar3,local_58,lVar7);
          if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(lVar3,local_50,lVar5), iVar1 == 0)) ||
             (iVar1 = EVP_DigestFinal_ex(lVar3,_Src,0), iVar1 == 0)) break;
          if (1 < param_6) {
            do {
              iVar1 = EVP_DigestInit_ex(lVar3,param_9,0);
              if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(lVar3,_Src), iVar1 == 0)) ||
                 (iVar1 = EVP_DigestFinal_ex(lVar3,_Src), iVar1 == 0)) goto LAB_14f7bfdb2;
              iVar16 = iVar16 + 1;
            } while (iVar16 < param_6);
          }
          iVar1 = iVar2;
          if (param_7 < iVar2) {
            iVar1 = param_7;
          }
          memcpy(param_8,_Src,(longlong)iVar1);
          if (param_7 <= iVar2) {
            uVar17 = 1;
            goto LAB_14f7bfdd2;
          }
          param_8 = (void *)((longlong)param_8 + (longlong)iVar2);
          param_7 = param_7 - iVar2;
          uVar9 = uVar14;
          uVar11 = uVar14;
          if (0 < lVar7) {
            do {
              *(undefined1 *)(uVar9 + local_60) =
                   *(undefined1 *)((longlong)((int)uVar11 % iVar2) + (longlong)_Src);
              uVar9 = uVar9 + 1;
              uVar11 = (ulonglong)((int)uVar11 + 1);
            } while ((longlong)uVar9 < lVar7);
          }
          if (0 < lVar5) {
            lVar13 = local_60 - (longlong)local_50;
            do {
              uVar6 = 1;
              if (-1 < lVar7 + -1) {
                pbVar4 = local_50 + uVar14 + lVar7 + -1;
                lVar12 = lVar7;
                do {
                  uVar6 = uVar6 + (ushort)pbVar4[lVar13] + (ushort)*pbVar4;
                  *pbVar4 = (byte)uVar6;
                  uVar6 = uVar6 >> 8;
                  lVar12 = lVar12 + -1;
                  pbVar4 = pbVar4 + -1;
                } while (lVar12 != 0);
              }
              uVar14 = uVar14 + lVar7;
              lVar13 = lVar13 - lVar7;
            } while ((longlong)uVar14 < lVar5);
          }
          iVar1 = EVP_DigestInit_ex(lVar3,param_9,0);
        }
      }
    }
  }
LAB_14f7bfdb2:
  uVar17 = 0;
  ERR_put_error(0x23,0x6f,0x41,"crypto\\pkcs12\\p12_key.c",0xa5);
LAB_14f7bfdd2:
  CRYPTO_free(_Src,"crypto\\pkcs12\\p12_key.c",0xa8);
  CRYPTO_free(local_60,"crypto\\pkcs12\\p12_key.c",0xa9);
  CRYPTO_free(local_58,"crypto\\pkcs12\\p12_key.c",0xaa);
  CRYPTO_free(local_50,"crypto\\pkcs12\\p12_key.c",0xab);
  EVP_MD_CTX_free(lVar3);
  return uVar17;
}

// PKCS12_key_gen_utf8 @ 14f7bfe60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int PKCS12_key_gen_utf8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7bfe70;
  if (param_1 == 0) {
    local_res8[0] = 0;
    local_18 = 0;
  }
  else {
    lVar2 = OPENSSL_utf82uni(param_1,param_2,&local_18,local_res8);
    if (lVar2 == 0) {
      ERR_put_error(0x23,0x74,0x41,"crypto\\pkcs12\\p12_key.c",0x41);
      return 0;
    }
  }
  iVar1 = PKCS12_key_gen_uni(local_18,local_res8[0],param_3,param_4,param_5,param_6,param_7,param_8,
                             param_9);
  if (iVar1 < 1) {
    return 0;
  }
  CRYPTO_clear_free(local_18,(longlong)local_res8[0],"crypto\\pkcs12\\p12_key.c",0x48);
  return iVar1;
}

