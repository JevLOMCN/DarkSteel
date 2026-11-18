// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// RSA_padding_add_PKCS1_type_1 @ 14f77d550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_PKCS1_type_1(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  size_t _Size;
  
  if (param_2 + -0xb < (int)param_4) {
    ERR_put_error(4,0x6c,0x6e,"crypto\\rsa\\rsa_pk1.c",0x1a,0x14f77d560);
    return 0;
  }
  *param_1 = 0;
  _Size = (size_t)(int)((param_2 - param_4) + -3);
  param_1[1] = 1;
  memset(param_1 + 2,0xff,_Size);
  param_1[_Size + 2] = 0;
  memcpy(param_1 + _Size + 3,param_3,(ulonglong)param_4);
  return 1;
}

// RSA_padding_add_PKCS1_type_2 @ 14f77d610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_PKCS1_type_2(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 + -0xb < (int)param_4) {
    ERR_put_error(4,0x6d,0x6e,"crypto\\rsa\\rsa_pk1.c",0x7d,0x14f77d626);
    return 0;
  }
  *param_1 = 0;
  iVar6 = (param_2 - param_4) + -3;
  param_1[1] = 2;
  pcVar5 = param_1 + 2;
  iVar2 = RAND_bytes(pcVar5,iVar6);
  if (iVar2 < 1) {
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar5;
        while (cVar1 == '\0') {
          iVar3 = RAND_bytes(pcVar5,1);
          if (iVar3 < 1) {
            return 0;
          }
          cVar1 = *pcVar5;
        }
        pcVar5 = pcVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
    }
    *pcVar5 = '\0';
    memcpy(pcVar5 + 1,param_3,(ulonglong)param_4);
    uVar4 = 1;
  }
  return uVar4;
}

// RSA_padding_check_PKCS1_type_1 @ 14f77d710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_PKCS1_type_1(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *_Src;
  
  if (param_5 < 0xb) {
    return 0xffffffff;
  }
  if (param_5 == param_4) {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    if (cVar1 != '\0') {
      ERR_put_error(4,0x70,0x8a,"crypto\\rsa\\rsa_pk1.c",0x43);
      return 0xffffffff;
    }
    param_4 = param_4 + -1;
  }
  if ((param_5 != param_4 + 1) || (_Src = param_3 + 1, *param_3 != '\x01')) {
    ERR_put_error(4,0x70,0x6a,"crypto\\rsa\\rsa_pk1.c",0x4b);
    return 0xffffffff;
  }
  iVar2 = 0;
  param_4 = param_4 + -1;
  if (0 < param_4) {
    do {
      if (*_Src != -1) {
        if (*_Src != '\0') {
          ERR_put_error(4,0x70,0x66,"crypto\\rsa\\rsa_pk1.c",0x58);
          return 0xffffffff;
        }
        _Src = _Src + 1;
        break;
      }
      _Src = _Src + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  if (iVar2 == param_4) {
    ERR_put_error(4,0x70,0x71,"crypto\\rsa\\rsa_pk1.c",0x61);
    return 0xffffffff;
  }
  if (7 < iVar2) {
    uVar3 = param_4 + (-1 - iVar2);
    if ((int)uVar3 <= param_2) {
      memcpy(param_1,_Src,(ulonglong)uVar3);
      return uVar3;
    }
    ERR_put_error(4,0x70,0x6d,"crypto\\rsa\\rsa_pk1.c",0x6d);
    return 0xffffffff;
  }
  ERR_put_error(4,0x70,0x67,"crypto\\rsa\\rsa_pk1.c",0x67);
  return 0xffffffff;
}

// RSA_padding_check_PKCS1_type_2 @ 14f77d8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_PKCS1_type_2
               (byte *param_1,uint param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = 0;
  uVar10 = (ulonglong)param_4;
  uVar15 = 0;
  if (((int)param_2 < 1) || (param_4 < 1)) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar9 = (ulonglong)param_5;
    if (((int)param_5 < param_4) || ((int)param_5 < 0xb)) {
      ERR_put_error(4,0x71,0x9f,"crypto\\rsa\\rsa_pk1.c",0xae);
      uVar15 = 0xffffffff;
    }
    else {
      lVar6 = CRYPTO_malloc((longlong)(int)param_5,"crypto\\rsa\\rsa_pk1.c",0xb2);
      if (lVar6 == 0) {
        ERR_put_error(4,0x71,0x41,"crypto\\rsa\\rsa_pk1.c",0xb4);
        uVar15 = 0xffffffff;
      }
      else {
        pbVar11 = (byte *)(param_3 + uVar10);
        pbVar12 = (byte *)(lVar6 + (int)param_5);
        if (0 < (int)param_5) {
          do {
            uVar13 = (uint)uVar10;
            pbVar12 = pbVar12 + -1;
            uVar7 = 0xffffffff - ((int)(uVar13 - 1 & ~uVar13) >> 0x1f);
            uVar10 = (ulonglong)(uVar13 - (uVar7 & 1));
            pbVar11 = pbVar11 + -(ulonglong)(uVar7 & 1);
            *pbVar12 = *pbVar11 & (byte)uVar7;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar7 = 2;
        uVar13 = 0;
        if (2 < (int)param_5) {
          pbVar11 = pbVar12 + 2;
          do {
            bVar2 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar8 = (int)(bVar2 - 1 & ~(uint)bVar2) >> 0x1f;
            uVar4 = ~uVar13 & uVar8;
            uVar13 = uVar13 | uVar8;
            uVar8 = uVar4 & uVar7;
            uVar7 = uVar7 + 1;
            uVar15 = uVar15 & ~uVar4 | uVar8;
          } while ((int)uVar7 < (int)param_5);
        }
        uVar7 = 1;
        uVar13 = (param_5 - uVar15) - 1;
        uVar4 = param_5 - 0xb;
        uVar8 = (int)((pbVar12[1] ^ 2) - 1 & ~(pbVar12[1] ^ 2) & *pbVar12 - 1 & ~(uint)*pbVar12) >>
                0x1f & 0xffffffffU -
                       ((int)((param_2 - uVar13 ^ uVar13 | uVar13 ^ param_2) ^ param_2) >> 0x1f) &
                       0xffffffffU - ((int)((uVar15 - 10 | uVar15) ^ uVar15) >> 0x1f);
        uVar15 = param_5 - 0xb;
        uVar15 = (int)((uVar15 - param_2 ^ param_2 | uVar15 ^ param_2) ^ uVar15) >> 0x1f;
        uVar15 = ~uVar15 & param_2 | uVar15 & uVar4;
        if (1 < (int)uVar4) {
          do {
            uVar5 = (param_5 - uVar13) - 0xb & uVar7;
            bVar2 = 0xff - ((char)((byte)(uVar5 - 1 >> 0x18) & ~(byte)(uVar5 >> 0x18)) >> 7);
            if (0xb < (longlong)(int)(param_5 - uVar7)) {
              lVar6 = (longlong)(int)(param_5 - uVar7) + -0xb;
              pbVar11 = pbVar12 + 0xb;
              do {
                *pbVar11 = ~bVar2 & *pbVar11 | pbVar11[(int)uVar7] & bVar2;
                lVar6 = lVar6 + -1;
                pbVar11 = pbVar11 + 1;
              } while (lVar6 != 0);
            }
            uVar7 = uVar7 * 2;
          } while ((int)uVar7 < (int)uVar4);
        }
        lVar6 = (longlong)(int)uVar15;
        if (0 < (int)uVar15) {
          pbVar11 = param_1;
          do {
            iVar1 = iVar14 - uVar13;
            bVar2 = (byte)(uVar13 >> 0x18);
            bVar3 = (byte)((uint)iVar14 >> 0x18);
            iVar14 = iVar14 + 1;
            bVar2 = (char)(((byte)((uint)iVar1 >> 0x18) ^ bVar2 | bVar2 ^ bVar3) ^ bVar3) >> 7 &
                    (byte)uVar8;
            *pbVar11 = ~bVar2 & *pbVar11 |
                       (pbVar11 + 1)[(longlong)(pbVar12 + (10 - (longlong)param_1))] & bVar2;
            lVar6 = lVar6 + -1;
            pbVar11 = pbVar11 + 1;
          } while (lVar6 != 0);
        }
        CRYPTO_clear_free(pbVar12,(longlong)(int)param_5,"crypto\\rsa\\rsa_pk1.c",0xfa);
        ERR_put_error(4,0x71,0x9f,"crypto\\rsa\\rsa_pk1.c",0xfb);
        err_clear_last_constant_time(uVar8 & 1);
        uVar15 = ~uVar8 | uVar8 & uVar13;
      }
    }
  }
  return uVar15;
}

