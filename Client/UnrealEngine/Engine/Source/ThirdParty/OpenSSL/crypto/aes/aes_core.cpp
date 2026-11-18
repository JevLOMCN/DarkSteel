// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// AES_decrypt @ 14f72b190

void AES_decrypt(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  byte bVar4;
  byte bVar5;
  
  uVar8 = param_1[3];
  uVar13 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)param_3[3];
  uVar8 = param_1[2];
  uVar12 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)param_3[2];
  uVar8 = param_1[1];
  uVar10 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)param_3[1];
  uVar8 = *param_1;
  uVar11 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)*param_3;
  uVar8 = *(uint *)(&DAT_1534b9e80 + (uVar12 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b9a80 + (uVar13 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b9680 + (uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534ba280 + (uVar10 & 0xff) * 4) ^ param_3[4];
  uVar15 = *(uint *)(&DAT_1534b9a80 + (uVar11 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534b9e80 + (uVar13 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534b9680 + (uVar10 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534ba280 + (uVar12 & 0xff) * 4) ^ param_3[5];
  uVar6 = *(uint *)(&DAT_1534b9e80 + (uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b9a80 + (uVar10 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b9680 + (uVar12 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534ba280 + (uVar13 & 0xff) * 4) ^ param_3[6];
  iVar14 = (int)param_3[0x3c] >> 1;
  uVar9 = *(uint *)(&DAT_1534b9e80 + (uVar10 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b9a80 + (uVar12 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b9680 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534ba280 + (uVar11 & 0xff) * 4) ^ param_3[7];
  while( true ) {
    iVar14 = iVar14 + -1;
    param_3 = param_3 + 8;
    bVar3 = (byte)(uVar15 >> 0x10);
    bVar4 = (byte)(uVar8 >> 8);
    bVar5 = (byte)(uVar8 >> 0x10);
    if (iVar14 == 0) break;
    uVar7 = *(uint *)(&DAT_1534b9e80 + (ulonglong)(byte)(uVar15 >> 8) * 4) ^
            *(uint *)(&DAT_1534b9a80 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar9 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534ba280 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_3[3];
    uVar1 = *(uint *)(&DAT_1534b9e80 + (ulonglong)bVar4 * 4) ^
            *(uint *)(&DAT_1534b9a80 + (ulonglong)bVar3 * 4) ^
            *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534ba280 + ((ulonglong)uVar9 & 0xff) * 4) ^ param_3[2];
    uVar2 = *(uint *)(&DAT_1534b9a80 + (ulonglong)bVar5 * 4) ^
            *(uint *)(&DAT_1534b9e80 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar15 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534ba280 + ((ulonglong)uVar6 & 0xff) * 4) ^ param_3[1];
    uVar9 = *(uint *)(&DAT_1534b9e80 + ((ulonglong)(uVar6 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9a80 + ((ulonglong)(uVar9 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534ba280 + (ulonglong)(uVar15 & 0xff) * 4) ^ *param_3;
    uVar8 = *(uint *)(&DAT_1534b9e80 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9a80 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar9 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534ba280 + ((ulonglong)uVar2 & 0xff) * 4) ^ param_3[4];
    uVar15 = *(uint *)(&DAT_1534b9a80 + ((ulonglong)(uVar9 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b9e80 + ((ulonglong)(uVar7 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&DAT_1534ba280 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_3[5];
    uVar6 = *(uint *)(&DAT_1534b9e80 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9a80 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar1 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534ba280 + ((ulonglong)uVar7 & 0xff) * 4) ^ param_3[6];
    uVar9 = *(uint *)(&DAT_1534b9e80 + ((ulonglong)(uVar2 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9a80 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b9680 + (ulonglong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534ba280 + ((ulonglong)uVar9 & 0xff) * 4) ^ param_3[7];
  }
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_1534ba680)[uVar8 >> 0x18],
                                     (&DAT_1534ba680)[(ulonglong)(uVar9 >> 0x10) & 0xff]),
                            (&DAT_1534ba680)[(ulonglong)(uVar6 >> 8) & 0xff]),
                   (&DAT_1534ba680)[uVar15 & 0xff]) ^ *param_3;
  *param_2 = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_1534ba680)[uVar15 >> 0x18],(&DAT_1534ba680)[bVar5]),
                            (&DAT_1534ba680)[(ulonglong)(uVar9 >> 8) & 0xff]),
                   (&DAT_1534ba680)[(ulonglong)uVar6 & 0xff]) ^ param_3[1];
  param_2[1] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_1534ba680)[uVar6 >> 0x18],(&DAT_1534ba680)[bVar3]),
                            (&DAT_1534ba680)[bVar4]),(&DAT_1534ba680)[(ulonglong)uVar9 & 0xff]) ^
          param_3[2];
  param_2[2] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar8 = CONCAT31(CONCAT21(CONCAT11((&DAT_1534ba680)[uVar9 >> 0x18],
                                     (&DAT_1534ba680)[(ulonglong)(uVar6 >> 0x10) & 0xff]),
                            (&DAT_1534ba680)[(ulonglong)(uVar15 >> 8) & 0xff]),
                   (&DAT_1534ba680)[uVar8 & 0xff]) ^ param_3[3];
  param_2[3] = uVar8 >> 8 & 0xff00ff00 | uVar8 << 0x18 | (uVar8 & 0xff00) << 8 | uVar8 >> 0x18;
  return;
}

// AES_encrypt @ 14f72b770

void AES_encrypt(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  byte bVar4;
  
  uVar7 = param_1[2];
  uVar12 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)param_3[2];
  uVar7 = param_1[1];
  uVar11 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)param_3[1];
  uVar7 = param_1[3];
  uVar9 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
          (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)param_3[3];
  uVar7 = *param_1;
  uVar8 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
          (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)*param_3;
  uVar7 = *(uint *)(&DAT_1534b8a80 + (uVar11 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b8e80 + (uVar12 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b8680 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534b9280 + (uVar9 & 0xff) * 4) ^ param_3[4];
  uVar14 = *(uint *)(&DAT_1534b8e80 + (uVar9 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534b8a80 + (uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534b8680 + (uVar11 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534b9280 + (uVar8 & 0xff) * 4) ^ param_3[5];
  uVar5 = *(uint *)(&DAT_1534b8e80 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b8a80 + (uVar9 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534b8680 + (uVar12 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534b9280 + (uVar11 & 0xff) * 4) ^ param_3[6];
  iVar13 = (int)param_3[0x3c] >> 1;
  uVar10 = *(uint *)(&DAT_1534b8a80 + (uVar8 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534b8e80 + (uVar11 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534b8680 + (uVar9 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534b9280 + (uVar12 & 0xff) * 4) ^ param_3[7];
  while( true ) {
    iVar13 = iVar13 + -1;
    param_3 = param_3 + 8;
    bVar3 = (byte)(uVar7 >> 8);
    bVar4 = (byte)(uVar5 >> 0x10);
    if (iVar13 == 0) break;
    uVar6 = *(uint *)(&DAT_1534b8e80 + (ulonglong)bVar3 * 4) ^
            *(uint *)(&DAT_1534b8a80 + ((ulonglong)(uVar10 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534b9280 + (ulonglong)(uVar14 & 0xff) * 4) ^ param_3[2];
    uVar1 = *(uint *)(&DAT_1534b8e80 + ((ulonglong)(uVar10 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b8a80 + (ulonglong)bVar4 * 4) ^
            *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar14 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534b9280 + (ulonglong)(uVar7 & 0xff) * 4) ^ param_3[1];
    uVar2 = *(uint *)(&DAT_1534b8a80 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^
            *(uint *)(&DAT_1534b8e80 + (ulonglong)(byte)(uVar14 >> 8) * 4) ^
            *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar10 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534b9280 + ((ulonglong)uVar5 & 0xff) * 4) ^ param_3[3];
    uVar10 = *(uint *)(&DAT_1534b8a80 + ((ulonglong)(uVar14 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b8e80 + ((ulonglong)(uVar5 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar7 >> 0x18) * 4) ^
             *(uint *)(&DAT_1534b9280 + ((ulonglong)uVar10 & 0xff) * 4) ^ *param_3;
    uVar7 = *(uint *)(&DAT_1534b8a80 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b8e80 + ((ulonglong)(uVar6 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar10 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534b9280 + ((ulonglong)uVar2 & 0xff) * 4) ^ param_3[4];
    uVar14 = *(uint *)(&DAT_1534b8e80 + ((ulonglong)(uVar2 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b8a80 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar1 >> 0x18) * 4) ^
             *(uint *)(&DAT_1534b9280 + ((ulonglong)uVar10 & 0xff) * 4) ^ param_3[5];
    uVar5 = *(uint *)(&DAT_1534b8e80 + ((ulonglong)(uVar10 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b8a80 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534b9280 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_3[6];
    uVar10 = *(uint *)(&DAT_1534b8a80 + ((ulonglong)(uVar10 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b8e80 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&DAT_1534b9280 + ((ulonglong)uVar6 & 0xff) * 4) ^ param_3[7];
  }
  uVar6 = *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar14 >> 0x10) * 4) & 0xff0000 ^
          *(uint *)(&DAT_1534b8680 + ((ulonglong)(uVar5 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_1534b8e80 + (ulonglong)(uVar7 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_1534b8a80)[((ulonglong)uVar10 & 0xff) * 4] ^ *param_3;
  *param_2 = uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 0x18;
  uVar6 = *(uint *)(&DAT_1534b9280 + (ulonglong)bVar4 * 4) & 0xff0000 ^
          *(uint *)(&DAT_1534b8680 + ((ulonglong)(uVar10 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_1534b8e80 + (ulonglong)(uVar14 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar7 & 0xff) * 4] ^ param_3[1];
  param_2[1] = uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 0x18;
  uVar6 = *(uint *)(&DAT_1534b9280 + ((ulonglong)(uVar10 >> 0x10) & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_1534b8680 + (ulonglong)bVar3 * 4) & 0xff00 ^
          *(uint *)(&DAT_1534b8e80 + (ulonglong)(uVar5 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar14 & 0xff) * 4] ^ param_3[2];
  param_2[2] = uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 0x18;
  uVar7 = *(uint *)(&DAT_1534b9280 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_1534b8680 + ((ulonglong)(uVar14 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_1534b8e80 + (ulonglong)(uVar10 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_1534b8a80)[((ulonglong)uVar5 & 0xff) * 4] ^ param_3[3];
  param_2[3] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  return;
}

// AES_set_decrypt_key @ 14f72bd80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 AES_set_decrypt_key(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  int iVar10;
  
  uVar4 = AES_set_encrypt_key();
  if (-1 < (int)uVar4) {
    lVar8 = 0;
    lVar7 = (longlong)(*(int *)(param_3 + 0xf0) << 2);
    if (0 < *(int *)(param_3 + 0xf0) << 2) {
      puVar5 = (undefined4 *)(param_3 + 8);
      puVar6 = (undefined4 *)(param_3 + 8 + lVar7 * 4);
      do {
        uVar3 = puVar5[-2];
        lVar8 = lVar8 + 4;
        puVar5[-2] = puVar6[-2];
        lVar7 = lVar7 + -4;
        puVar6[-2] = uVar3;
        uVar3 = puVar5[-1];
        puVar5[-1] = puVar6[-1];
        puVar6[-1] = uVar3;
        uVar3 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar3;
        uVar3 = puVar5[1];
        puVar5[1] = puVar6[1];
        puVar6[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + -4;
      } while (lVar8 < lVar7);
    }
    iVar10 = 1;
    if (1 < *(int *)(param_3 + 0xf0)) {
      pbVar9 = (byte *)(param_3 + 2);
      do {
        iVar10 = iVar10 + 1;
        bVar1 = (&DAT_1534b8a80)[(ulonglong)pbVar9[0x13] * 4];
        *(uint *)(pbVar9 + 0xe) =
             *(uint *)(&DAT_1534b9680 +
                      (ulonglong)
                      (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0xe) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_1534b9e80 +
                        (ulonglong)(byte)(&DAT_1534b8a80)[(ulonglong)pbVar9[0xf] * 4] * 4) ^
             *(uint *)(&DAT_1534ba280 +
                      (ulonglong)
                      (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0xe) & 0xff) * 4] * 4) ^
             *(uint *)(&DAT_1534b9a80 +
                      (ulonglong)(byte)(&DAT_1534b8a80)[(ulonglong)pbVar9[0x10] * 4] * 4);
        bVar2 = (&DAT_1534b8a80)[(ulonglong)pbVar9[0x17] * 4];
        *(uint *)(pbVar9 + 0x12) =
             *(uint *)(&DAT_1534b9e80 + (ulonglong)bVar1 * 4) ^
             *(uint *)(&DAT_1534b9a80 +
                      (ulonglong)(byte)(&DAT_1534b8a80)[(ulonglong)pbVar9[0x14] * 4] * 4) ^
             *(uint *)(&DAT_1534b9680 +
                      (ulonglong)
                      (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0x12) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_1534ba280 +
                        (ulonglong)
                        (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0x12) & 0xff) * 4] * 4
                        );
        bVar1 = (&DAT_1534b8a80)[(ulonglong)pbVar9[0x1b] * 4];
        *(uint *)(pbVar9 + 0x16) =
             *(uint *)(&DAT_1534b9e80 + (ulonglong)bVar2 * 4) ^
             *(uint *)(&DAT_1534b9a80 +
                      (ulonglong)(byte)(&DAT_1534b8a80)[(ulonglong)pbVar9[0x18] * 4] * 4) ^
             *(uint *)(&DAT_1534b9680 +
                      (ulonglong)
                      (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0x16) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_1534ba280 +
                        (ulonglong)
                        (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0x16) & 0xff) * 4] * 4
                        );
        *(uint *)(pbVar9 + 0x1a) =
             *(uint *)(&DAT_1534b9e80 + (ulonglong)bVar1 * 4) ^
             *(uint *)(&DAT_1534b9a80 +
                      (ulonglong)(byte)(&DAT_1534b8a80)[(ulonglong)pbVar9[0x1c] * 4] * 4) ^
             *(uint *)(&DAT_1534b9680 +
                      (ulonglong)
                      (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0x1a) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_1534ba280 +
                        (ulonglong)
                        (byte)(&DAT_1534b8a80)[(ulonglong)(*(uint *)(pbVar9 + 0x1a) & 0xff) * 4] * 4
                        );
        pbVar9 = pbVar9 + 0x10;
      } while (iVar10 < *(int *)(param_3 + 0xf0));
    }
    uVar4 = 0;
  }
  return uVar4;
}

// AES_set_encrypt_key @ 14f72bfd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 AES_set_encrypt_key(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if ((param_1 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80U & 0xffffff3f) == 0) && (param_2 != 0x140)) {
    if (param_2 == 0x80) {
      param_3[0x3c] = 10;
    }
    else {
      uVar3 = 0xe;
      if (param_2 == 0xc0) {
        uVar3 = 0xc;
      }
      param_3[0x3c] = uVar3;
    }
    uVar3 = *param_1;
    puVar1 = param_3 + 1;
    uVar2 = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    *param_3 = uVar2;
    uVar3 = param_1[1];
    *puVar1 = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    uVar3 = param_1[2];
    param_3[2] = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    uVar3 = param_1[3];
    uVar4 = uVar3 >> 8 & 0xff00ff00;
    param_3[3] = uVar4 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    if (param_2 == 0x80) {
      uVar2 = (*(uint *)(&DAT_1534b8e80 + (ulonglong)(byte)((uVar3 & 0xff00) >> 8) * 4) ^ 0x1000000)
              & 0xff000000 ^
              *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000 ^
              (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar3 & 0xff) * 4] ^
              *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff00 ^ uVar2;
      param_3[4] = uVar2;
      uVar2 = uVar2 ^ *puVar1;
      param_3[5] = uVar2;
      uVar2 = uVar2 ^ param_3[2];
      param_3[6] = uVar2;
      param_3[7] = uVar2 ^ param_3[3];
      puVar5 = &DAT_1534ba784;
      do {
        uVar3 = puVar1[6];
        uVar3 = *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
                *(uint *)(&DAT_1534b8e80 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar3 >> 0x18) * 4] ^
                *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ puVar1[3] ^
                *puVar5;
        puVar5 = puVar5 + 1;
        puVar1[7] = uVar3;
        uVar3 = uVar3 ^ puVar1[4];
        puVar1[8] = uVar3;
        uVar3 = puVar1[5] ^ uVar3;
        puVar1[9] = uVar3;
        puVar1[10] = puVar1[6] ^ uVar3;
        puVar1 = puVar1 + 4;
      } while (puVar5 != (uint *)"crypto\\modes\\gcm128.c");
    }
    else {
      uVar3 = param_1[4];
      param_3[4] = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      uVar3 = param_1[5];
      uVar4 = uVar3 >> 8 & 0xff00ff00;
      param_3[5] = uVar4 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      if (param_2 == 0xc0) {
        uVar2 = (*(uint *)(&DAT_1534b8e80 + (ulonglong)(byte)((uVar3 & 0xff00) >> 8) * 4) ^
                0x1000000) & 0xff000000 ^
                *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000 ^
                (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar3 & 0xff) * 4] ^
                *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff00 ^ uVar2;
        param_3[6] = uVar2;
        uVar2 = uVar2 ^ *puVar1;
        param_3[7] = uVar2;
        uVar2 = uVar2 ^ param_3[2];
        param_3[8] = uVar2;
        param_3[9] = uVar2 ^ param_3[3];
        puVar5 = &DAT_1534ba784;
        puVar1 = param_3 + 10;
        do {
          *puVar1 = puVar1[-6] ^ puVar1[-1];
          puVar1[1] = puVar1[-5] ^ puVar1[-6] ^ puVar1[-1];
          uVar3 = puVar1[1];
          uVar3 = *(uint *)(&DAT_1534b8e80 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff000000 ^
                  *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
                  (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar3 >> 0x18) * 4] ^
                  *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ puVar1[-4] ^
                  *puVar5;
          puVar5 = puVar5 + 1;
          puVar1[2] = uVar3;
          uVar3 = puVar1[-3] ^ uVar3;
          puVar1[3] = uVar3;
          uVar3 = puVar1[-2] ^ uVar3;
          puVar1[4] = uVar3;
          puVar1[5] = puVar1[-1] ^ uVar3;
          puVar1 = puVar1 + 6;
        } while (puVar5 != (uint *)&DAT_1534ba7a0);
        return 0;
      }
      uVar3 = param_1[6];
      param_3[6] = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      uVar3 = param_1[7];
      uVar4 = uVar3 >> 8 & 0xff00ff00;
      param_3[7] = uVar4 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      if (param_2 == 0x100) {
        uVar2 = (*(uint *)(&DAT_1534b8e80 + (ulonglong)(byte)((uVar3 & 0xff00) >> 8) * 4) ^
                0x1000000) & 0xff000000 ^
                *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000 ^
                (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar3 & 0xff) * 4] ^
                *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff00 ^ uVar2;
        param_3[8] = uVar2;
        uVar2 = uVar2 ^ *puVar1;
        param_3[9] = uVar2;
        uVar2 = uVar2 ^ param_3[2];
        param_3[10] = uVar2;
        param_3[0xb] = uVar2 ^ param_3[3];
        puVar5 = &DAT_1534ba784;
        puVar1 = param_3 + 0xc;
        do {
          uVar3 = puVar1[-1];
          uVar4 = *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff0000 ^
                  *(uint *)(&DAT_1534b8680 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff00 ^
                  *(uint *)(&DAT_1534b8e80 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff000000 ^
                  (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar3 & 0xff) * 4] ^ puVar1[-8];
          uVar3 = puVar1[-7] ^ uVar4;
          *puVar1 = uVar4;
          puVar1[1] = uVar3;
          uVar3 = puVar1[-6] ^ uVar3;
          puVar1[2] = uVar3;
          puVar1[3] = puVar1[-5] ^ uVar3;
          uVar3 = puVar1[3];
          uVar3 = *(uint *)(&DAT_1534b9280 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
                  *(uint *)(&DAT_1534b8e80 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff000000 ^
                  (uint)(byte)(&DAT_1534b8a80)[(ulonglong)(uVar3 >> 0x18) * 4] ^
                  *(uint *)(&DAT_1534b8680 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ puVar1[-4] ^
                  *puVar5;
          puVar5 = puVar5 + 1;
          puVar1[4] = uVar3;
          uVar3 = puVar1[-3] ^ uVar3;
          puVar1[5] = uVar3;
          uVar3 = puVar1[-2] ^ uVar3;
          puVar1[6] = uVar3;
          puVar1[7] = puVar1[-1] ^ uVar3;
          puVar1 = puVar1 + 8;
        } while (puVar5 != (uint *)&DAT_1534ba79c);
        return 0;
      }
    }
    return 0;
  }
  return 0xfffffffe;
}

