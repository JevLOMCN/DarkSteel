// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// RSA_padding_add_SSLv23 @ 14f77ebe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_SSLv23(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 + -0xb < (int)param_4) {
    ERR_put_error(4,0x6e,0x6e,"crypto\\rsa\\rsa_ssl.c",0x19,0x14f77ebf6);
    return 0;
  }
  *param_1 = 0;
  iVar6 = (param_2 - param_4) + -0xb;
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
    builtin_strncpy(pcVar5,"\x03\x03\x03\x03\x03\x03\x03\x03",9);
    memcpy(pcVar5 + 9,param_3,(ulonglong)param_4);
    uVar4 = 1;
  }
  return uVar4;
}

// RSA_padding_check_SSLv23 @ 14f77ecf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_SSLv23(byte *param_1,uint param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  
  iVar10 = 0;
  uVar11 = (ulonglong)param_4;
  uVar18 = 0;
  if ((0 < (int)param_2) && (0 < param_4)) {
    uVar8 = (ulonglong)param_5;
    if (((int)param_5 < param_4) || ((int)param_5 < 0xb)) {
      ERR_put_error(4,0x72,0x6f,"crypto\\rsa\\rsa_ssl.c",0x4a);
      uVar18 = 0xffffffff;
    }
    else {
      lVar17 = (longlong)(int)param_5;
      lVar5 = CRYPTO_malloc(lVar17,"crypto\\rsa\\rsa_ssl.c");
      if (lVar5 == 0) {
        ERR_put_error(4,0x72,0x41,"crypto\\rsa\\rsa_ssl.c",0x50);
        uVar18 = 0xffffffff;
      }
      else {
        pbVar20 = (byte *)(param_3 + uVar11);
        pbVar9 = (byte *)(lVar5 + lVar17);
        if (0 < (int)param_5) {
          do {
            uVar14 = (uint)uVar11;
            pbVar9 = pbVar9 + -1;
            uVar6 = 0xffffffff - ((int)(uVar14 - 1 & ~uVar14) >> 0x1f);
            uVar11 = (ulonglong)(uVar14 - (uVar6 & 1));
            pbVar20 = pbVar20 + -(ulonglong)(uVar6 & 1);
            *pbVar9 = *pbVar20 & (byte)uVar6;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar15 = 2;
        uVar14 = 0;
        uVar6 = 0;
        uVar19 = (int)((pbVar9[1] ^ 2) - 1 & ~(pbVar9[1] ^ 2) & *pbVar9 - 1 & ~(uint)*pbVar9) >>
                 0x1f;
        uVar16 = ~uVar19;
        if (2 < (int)param_5) {
          uVar13 = 0xffffffff;
          pbVar20 = pbVar9 + 2;
          uVar6 = 0;
          do {
            uVar7 = (int)(*pbVar20 - 1 & ~(uint)*pbVar20) >> 0x1f;
            uVar12 = uVar13 & uVar7;
            uVar14 = uVar14 | uVar7;
            uVar13 = ~uVar14;
            uVar7 = uVar12 & uVar15;
            uVar15 = uVar15 + 1;
            uVar18 = uVar18 & ~uVar12 | uVar7;
            uVar6 = ((int)((*pbVar20 ^ 3) - 1 & ~(*pbVar20 ^ 3)) >> 0x1f | uVar14) &
                    (uVar13 & 1) + uVar6;
            pbVar20 = pbVar20 + 1;
          } while ((int)uVar15 < (int)param_5);
        }
        uVar19 = uVar19 & 0xffffffffU - ((int)((uVar18 - 10 | uVar18) ^ uVar18) >> 0x1f);
        uVar14 = uVar19 | uVar16;
        uVar13 = param_5 - 0xb;
        uVar15 = (param_5 - uVar18) - 1;
        uVar7 = uVar19 & (int)((uVar6 - 8 | uVar6) ^ uVar6) >> 0x1f;
        uVar12 = uVar7 & 0xffffffffU -
                         ((int)((param_2 - uVar15 ^ uVar15 | uVar15 ^ param_2) ^ param_2) >> 0x1f);
        uVar18 = param_5 - 0xb;
        uVar18 = (int)((uVar18 - param_2 ^ param_2 | uVar18 ^ param_2) ^ uVar18) >> 0x1f;
        uVar6 = ~uVar18 & param_2 | uVar18 & uVar13;
        uVar18 = 1;
        if (1 < (int)uVar13) {
          do {
            uVar4 = (param_5 - uVar15) - 0xb & uVar18;
            bVar3 = 0xff - ((char)((byte)(uVar4 - 1 >> 0x18) & ~(byte)(uVar4 >> 0x18)) >> 7);
            if (0xb < (longlong)(int)(param_5 - uVar18)) {
              lVar5 = (longlong)(int)(param_5 - uVar18) + -0xb;
              pbVar20 = pbVar9 + 0xb;
              do {
                *pbVar20 = ~bVar3 & *pbVar20 | (pbVar20 + 1)[(longlong)(int)uVar18 + -1] & bVar3;
                lVar5 = lVar5 + -1;
                pbVar20 = pbVar20 + 1;
              } while (lVar5 != 0);
            }
            uVar18 = uVar18 * 2;
          } while ((int)uVar18 < (int)uVar13);
        }
        lVar5 = (longlong)(int)uVar6;
        if (0 < (int)uVar6) {
          pbVar20 = param_1;
          do {
            iVar1 = iVar10 - uVar15;
            bVar3 = (byte)(uVar15 >> 0x18);
            bVar2 = (byte)((uint)iVar10 >> 0x18);
            iVar10 = iVar10 + 1;
            bVar3 = (char)(((byte)((uint)iVar1 >> 0x18) ^ bVar3 | bVar3 ^ bVar2) ^ bVar2) >> 7 &
                    (byte)uVar12;
            *pbVar20 = ~bVar3 & *pbVar20 |
                       (pbVar20 + 1)[(longlong)(pbVar9 + (10 - (longlong)param_1))] & bVar3;
            lVar5 = lVar5 + -1;
            pbVar20 = pbVar20 + 1;
          } while (lVar5 != 0);
        }
        CRYPTO_clear_free(pbVar9,lVar17,"crypto\\rsa\\rsa_ssl.c",0xab);
        ERR_put_error(4,0x72,~(uVar12 | ~uVar7) & 0x6d |
                             (uVar12 | ~uVar7) &
                             (~(uVar7 | ~uVar19) & 0x73 |
                             (uVar7 | ~uVar19) & (~uVar14 & 0x71 | uVar14 & uVar16 & 0x6b)),
                      "crypto\\rsa\\rsa_ssl.c",0xac);
        err_clear_last_constant_time(uVar12 & 1);
        uVar18 = ~uVar12 | uVar12 & uVar15;
      }
    }
    return uVar18;
  }
  return 0xffffffff;
}

