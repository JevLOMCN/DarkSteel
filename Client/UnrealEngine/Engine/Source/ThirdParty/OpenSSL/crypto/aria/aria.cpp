// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// aria_encrypt @ 14f73fa80

void aria_encrypt(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) &&
      (param_3 != (uint *)0x0)) &&
     ((uVar2 = param_3[0x44], (uVar2 - 0xc & 0xfffffff9) == 0 && (uVar2 != 0x12)))) {
    uVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ *param_3;
    uVar8 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^ param_3[1];
    uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]) ^
            param_3[2];
    uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]) ^
            param_3[3];
    uVar4 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar4 & 0xff) * 4);
    uVar5 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar5 & 0xff) * 4);
    uVar8 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar8 & 0xff) * 4) ^ uVar4;
    uVar6 = uVar5 ^ uVar8;
    uVar3 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar8;
    uVar4 = uVar4 ^ uVar5 ^ uVar3;
    uVar8 = uVar8 ^ uVar4;
    uVar5 = uVar4 << 0x10 | uVar4 >> 0x10;
    uVar6 = (uVar6 & 0xff0000 ^ uVar6 >> 0x10) >> 8 ^ (uVar6 & 0xff00 ^ uVar6 << 0x10) << 8;
    uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8 ^ uVar5;
    uVar3 = uVar3 ^ uVar8;
    uVar4 = uVar6 ^ uVar8 ^ param_3[7];
    uVar6 = uVar5 ^ uVar6 ^ uVar3;
    uVar3 = uVar3 ^ param_3[4];
    uVar5 = uVar6 ^ param_3[6];
    uVar8 = uVar8 ^ param_3[5] ^ uVar6;
    while( true ) {
      uVar2 = uVar2 - 2;
      puVar1 = param_3 + 8;
      if (uVar2 == 0) break;
      uVar7 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar5 & 0xff) * 4);
      uVar6 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar4 & 0xff) * 4);
      uVar5 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar8 & 0xff) * 4) ^ uVar7;
      uVar8 = uVar6 ^ uVar5;
      uVar4 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar5;
      uVar6 = uVar7 ^ uVar6 ^ uVar4;
      uVar5 = uVar5 ^ uVar6;
      uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8;
      uVar3 = (uVar5 & 0xff0000 ^ uVar5 >> 0x10) >> 8 ^ (uVar5 & 0xff00 ^ uVar5 << 0x10) << 8 ^
              uVar6;
      uVar5 = (uVar4 << 0x10 | uVar4 >> 0x10) ^ uVar3;
      uVar4 = uVar6 ^ uVar8 ^ uVar5;
      uVar6 = uVar8 ^ uVar3 ^ param_3[0xb];
      uVar8 = uVar4 ^ param_3[10];
      uVar3 = uVar3 ^ param_3[9] ^ uVar4;
      uVar5 = uVar5 ^ *puVar1;
      uVar4 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar8 & 0xff) * 4);
      uVar6 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar6 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar6 & 0xff) * 4);
      uVar8 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar4;
      uVar7 = uVar6 ^ uVar8;
      uVar3 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
              *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar5 & 0xff) * 4) ^ uVar8;
      uVar4 = uVar4 ^ uVar6 ^ uVar3;
      uVar8 = uVar8 ^ uVar4;
      uVar5 = uVar4 << 0x10 | uVar4 >> 0x10;
      uVar6 = (uVar7 & 0xff0000 ^ uVar7 >> 0x10) >> 8 ^ (uVar7 & 0xff00 ^ uVar7 << 0x10) << 8;
      uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8 ^ uVar5;
      uVar3 = uVar3 ^ uVar8;
      uVar4 = uVar6 ^ uVar8 ^ param_3[0xf];
      uVar6 = uVar5 ^ uVar6 ^ uVar3;
      uVar3 = uVar3 ^ param_3[0xc];
      uVar5 = uVar6 ^ param_3[0xe];
      uVar8 = uVar8 ^ param_3[0xd] ^ uVar6;
      param_3 = puVar1;
    }
    uVar6 = (((*(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_1534bcae0)[(ulonglong)(uVar3 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_1534bc2e0)[(ulonglong)(uVar3 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_1534bc6e0)[(ulonglong)(uVar3 & 0xff) * 4]) ^ *puVar1;
    uVar8 = (((*(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_1534bcae0)[(ulonglong)(uVar8 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_1534bc2e0)[(ulonglong)(uVar8 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_1534bc6e0)[(ulonglong)(uVar8 & 0xff) * 4]) ^ param_3[9];
    uVar3 = (((*(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_1534bcae0)[(ulonglong)(uVar5 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_1534bc2e0)[(ulonglong)(uVar5 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_1534bc6e0)[(ulonglong)(uVar5 & 0xff) * 4]) ^ param_3[10];
    uVar2 = (((*(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 & 0xff |
              (uint)(byte)(&DAT_1534bcae0)[(ulonglong)(uVar4 >> 0x18) * 4] << 8) << 8 |
             (uint)(byte)(&DAT_1534bc2e0)[(ulonglong)(uVar4 >> 8 & 0xff) * 4]) << 8 |
            (uint)(byte)(&DAT_1534bc6e0)[(ulonglong)(uVar4 & 0xff) * 4]) ^ param_3[0xb];
    *param_2 = (char)(uVar6 >> 0x18);
    param_2[1] = (char)(uVar6 >> 0x10);
    param_2[2] = (char)(uVar6 >> 8);
    param_2[4] = (char)(uVar8 >> 0x18);
    param_2[5] = (char)(uVar8 >> 0x10);
    param_2[6] = (char)(uVar8 >> 8);
    param_2[8] = (char)(uVar3 >> 0x18);
    param_2[9] = (char)(uVar3 >> 0x10);
    param_2[10] = (char)(uVar3 >> 8);
    param_2[0xc] = (char)(uVar2 >> 0x18);
    param_2[0xd] = (char)(uVar2 >> 0x10);
    param_2[0xe] = (char)(uVar2 >> 8);
    param_2[3] = (char)uVar6;
    param_2[7] = (char)uVar8;
    param_2[0xb] = (char)uVar3;
    param_2[0xf] = (char)uVar2;
  }
  return;
}

// aria_set_decrypt_key @ 14f7401f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_set_decrypt_key(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  
  uVar5 = aria_set_encrypt_key();
  if ((int)uVar5 == 0) {
    uVar1 = *(undefined4 *)param_3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 4);
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar6 = param_3 + (ulonglong)*(uint *)(param_3 + 0x22) * 2;
    puVar19 = (uint *)(param_3 + 2);
    uVar5 = puVar6[1];
    *param_3 = *puVar6;
    param_3[1] = uVar5;
    *(undefined4 *)puVar6 = uVar1;
    *(undefined4 *)((longlong)puVar6 + 4) = uVar2;
    *(undefined4 *)(puVar6 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar4;
    puVar7 = (uint *)(puVar6 + -2);
    if (puVar19 < puVar7) {
      do {
        uVar8 = *puVar19 >> 8 | *puVar19 << 0x18;
        uVar17 = uVar8 ^ *puVar19;
        uVar9 = puVar19[1] >> 8 | puVar19[1] << 0x18;
        uVar15 = uVar9 ^ puVar19[1];
        uVar10 = puVar19[2] >> 8 | puVar19[2] << 0x18;
        uVar14 = uVar10 ^ puVar19[2];
        uVar10 = (uVar14 << 0x10 | uVar14 >> 0x10) ^ uVar10;
        uVar14 = puVar19[3] >> 8 | puVar19[3] << 0x18;
        uVar15 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar9 ^ uVar10;
        uVar18 = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar8 ^ uVar15;
        uVar8 = uVar14 ^ puVar19[3];
        uVar14 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ uVar14;
        uVar8 = uVar14 ^ uVar15;
        uVar9 = uVar10 ^ uVar14 ^ uVar18;
        uVar15 = uVar15 ^ uVar9;
        uVar9 = uVar9 << 0x10 | uVar9 >> 0x10;
        uVar11 = (uVar8 & 0xff0000 ^ uVar8 >> 0x10) >> 8 ^ (uVar8 & 0xff00 ^ uVar8 << 0x10) << 8;
        uVar8 = (uVar15 >> 8 ^ uVar15 << 8) & 0xff00ff ^ uVar15 << 8 ^ uVar9;
        uVar18 = uVar18 ^ uVar8;
        uVar12 = uVar11 ^ uVar9 ^ uVar18;
        uVar9 = *puVar7 >> 8 | *puVar7 << 0x18;
        uVar17 = uVar9 ^ *puVar7;
        uVar10 = puVar7[1] >> 8 | puVar7[1] << 0x18;
        uVar16 = uVar10 ^ puVar7[1];
        uVar14 = puVar7[2] >> 8 | puVar7[2] << 0x18;
        uVar15 = uVar14 ^ puVar7[2];
        uVar14 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar14;
        uVar15 = puVar7[3] >> 8 | puVar7[3] << 0x18;
        uVar13 = uVar15 ^ puVar7[3];
        uVar16 = (uVar16 << 0x10 | uVar16 >> 0x10) ^ uVar10 ^ uVar14;
        uVar15 = (uVar13 << 0x10 | uVar13 >> 0x10) ^ uVar15;
        uVar9 = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar9 ^ uVar16;
        uVar10 = uVar15 ^ uVar16;
        uVar15 = uVar14 ^ uVar15 ^ uVar9;
        uVar16 = uVar16 ^ uVar15;
        uVar14 = (uVar10 & 0xff0000 ^ uVar10 >> 0x10) >> 8 ^ (uVar10 & 0xff00 ^ uVar10 << 0x10) << 8
        ;
        uVar15 = uVar15 << 0x10 | uVar15 >> 0x10;
        uVar10 = (uVar16 >> 8 ^ uVar16 << 8) & 0xff00ff ^ uVar16 << 8 ^ uVar15;
        uVar9 = uVar9 ^ uVar10;
        *puVar19 = uVar9;
        uVar9 = uVar14 ^ uVar15 ^ uVar9;
        puVar19[2] = uVar9;
        puVar19[3] = uVar14 ^ uVar10;
        puVar19[1] = uVar9 ^ uVar10;
        puVar19 = puVar19 + 4;
        *puVar7 = uVar18;
        puVar7[1] = uVar12 ^ uVar8;
        puVar7[2] = uVar12;
        puVar7[3] = uVar11 ^ uVar8;
        puVar7 = puVar7 + -4;
      } while (puVar19 < puVar7);
    }
    uVar8 = *puVar19 >> 8 | *puVar19 << 0x18;
    uVar14 = uVar8 ^ *puVar19;
    uVar9 = puVar19[1] >> 8 | puVar19[1] << 0x18;
    uVar17 = uVar9 ^ puVar19[1];
    uVar10 = puVar19[2] >> 8 | puVar19[2] << 0x18;
    uVar15 = uVar10 ^ puVar19[2];
    uVar10 = (uVar15 << 0x10 | uVar15 >> 0x10) ^ uVar10;
    uVar15 = (uVar17 << 0x10 | uVar17 >> 0x10) ^ uVar9 ^ uVar10;
    uVar9 = puVar19[3] >> 8 | puVar19[3] << 0x18;
    uVar14 = (uVar14 << 0x10 | uVar14 >> 0x10) ^ uVar8 ^ uVar15;
    uVar8 = uVar9 ^ puVar19[3];
    uVar9 = (uVar8 << 0x10 | uVar8 >> 0x10) ^ uVar9;
    uVar8 = uVar9 ^ uVar15;
    uVar9 = uVar10 ^ uVar9 ^ uVar14;
    uVar15 = uVar15 ^ uVar9;
    uVar10 = (uVar8 & 0xff0000 ^ uVar8 >> 0x10) >> 8 ^ (uVar8 & 0xff00 ^ uVar8 << 0x10) << 8;
    uVar8 = uVar9 << 0x10 | uVar9 >> 0x10;
    uVar9 = (uVar15 >> 8 ^ uVar15 << 8) & 0xff00ff ^ uVar15 << 8 ^ uVar8;
    uVar14 = uVar14 ^ uVar9;
    uVar8 = uVar10 ^ uVar8 ^ uVar14;
    *puVar7 = uVar14;
    puVar7[2] = uVar8;
    puVar7[3] = uVar10 ^ uVar9;
    puVar7[1] = uVar8 ^ uVar9;
    uVar5 = 0;
  }
  return uVar5;
}

// aria_set_encrypt_key @ 14f740520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_set_encrypt_key(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  if ((param_1 == (byte *)0x0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80U & 0xffffff3f) != 0) || (param_2 == 0x140)) {
    return 0xfffffffe;
  }
  param_3[0x44] = (int)(param_2 + 0x100 + (param_2 + 0x100 >> 0x1f & 0x1fU)) >> 5;
  bVar1 = param_1[0xc];
  bVar2 = param_1[8];
  lVar19 = (longlong)((int)(param_2 + -0x80 + (param_2 + -0x80 >> 0x1f & 0x3fU)) >> 6) * 0x10;
  bVar3 = *param_1;
  uVar5 = CONCAT11(bVar3,param_1[1]);
  bVar4 = param_1[4];
  uVar26 = CONCAT31(CONCAT21(uVar5,param_1[2]),param_1[3]);
  uVar6 = CONCAT11(bVar4,param_1[5]);
  uVar12 = *(uint *)(&DAT_1534bc290 + lVar19) ^ uVar26;
  uVar9 = CONCAT31(CONCAT21(uVar6,param_1[6]),param_1[7]);
  uVar7 = CONCAT11(bVar2,param_1[9]);
  uVar20 = *(uint *)(&DAT_1534bc294 + lVar19) ^ uVar9;
  uVar10 = CONCAT31(CONCAT21(uVar7,param_1[10]),param_1[0xb]);
  uVar8 = CONCAT11(bVar1,param_1[0xd]);
  uVar14 = *(uint *)(&DAT_1534bc298 + lVar19) ^ uVar10;
  uVar22 = CONCAT31(CONCAT21(uVar8,param_1[0xe]),param_1[0xf]);
  uVar15 = *(uint *)(&DAT_1534bc29c + lVar19) ^ uVar22;
  uVar14 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar20 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar20 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar20 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar20 & 0xff) * 4) ^ uVar14;
  uVar23 = uVar15 ^ uVar20;
  uVar16 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar12 & 0xff) * 4) ^ uVar20;
  uVar12 = uVar14 ^ uVar15 ^ uVar16;
  uVar20 = uVar20 ^ uVar12;
  uVar15 = uVar12 << 0x10 | uVar12 >> 0x10;
  uVar14 = (uVar23 & 0xff0000 ^ uVar23 >> 0x10) >> 8 ^ (uVar23 & 0xff00 ^ uVar23 << 0x10) << 8;
  uVar12 = (uVar20 >> 8 ^ uVar20 << 8) & 0xff00ff ^ uVar20 << 8 ^ uVar15;
  uVar16 = uVar16 ^ uVar12;
  uVar15 = uVar15 ^ uVar14 ^ uVar16;
  if (param_2 < 0x81) {
    uVar20 = 0;
    uVar23 = 0;
  }
  else {
    uVar23 = CONCAT31(CONCAT21(CONCAT11(param_1[0x10],param_1[0x11]),param_1[0x12]),param_1[0x13]);
    uVar20 = CONCAT31(CONCAT21(CONCAT11(param_1[0x14],param_1[0x15]),param_1[0x16]),param_1[0x17]);
    if (0xc0 < param_2) {
      uVar27 = CONCAT31(CONCAT21(CONCAT11(param_1[0x18],param_1[0x19]),param_1[0x1a]),param_1[0x1b])
      ;
      uVar28 = CONCAT31(CONCAT21(CONCAT11(param_1[0x1c],param_1[0x1d]),param_1[0x1e]),param_1[0x1f])
      ;
      goto LAB_14f740895;
    }
  }
  uVar27 = 0;
  uVar28 = 0;
LAB_14f740895:
  uVar20 = uVar20 ^ uVar12 ^ uVar15;
  uVar27 = uVar27 ^ uVar15;
  uVar28 = uVar28 ^ uVar14 ^ uVar12;
  uVar23 = uVar23 ^ uVar16;
  uVar14 = *(uint *)(&DAT_1534bc2a8 + lVar19) ^ uVar27;
  uVar12 = *(uint *)(&DAT_1534bc2a0 + lVar19) ^ uVar23;
  uVar16 = *(uint *)(&DAT_1534bc2a4 + lVar19) ^ uVar20;
  uVar15 = *(uint *)(&DAT_1534bc2ac + lVar19) ^ uVar28;
  uVar14 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar24 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar16 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar16 & 0xff) * 4) ^ uVar14;
  uVar16 = uVar24 ^ uVar15;
  uVar12 = *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar12 & 0xff) * 4) ^ uVar15;
  uVar14 = uVar14 ^ uVar24 ^ uVar12;
  uVar15 = uVar15 ^ uVar14;
  uVar16 = (uVar16 >> 8 ^ uVar16 << 8) & 0xff00ff ^ uVar16 << 8;
  uVar25 = (uVar15 & 0xff0000 ^ uVar15 >> 0x10) >> 8 ^ (uVar15 & 0xff00 ^ uVar15 << 0x10) << 8 ^
           uVar14;
  uVar24 = (uVar12 << 0x10 | uVar12 >> 0x10) ^ uVar25;
  uVar17 = uVar16 ^ uVar25 ^ uVar22;
  uVar12 = uVar14 ^ uVar16 ^ uVar24;
  uVar13 = uVar12 ^ uVar10;
  uVar25 = uVar25 ^ uVar9 ^ uVar12;
  uVar24 = uVar24 ^ uVar26;
  uVar15 = uVar17 ^ *(uint *)(&DAT_1534bc2bc + lVar19);
  uVar14 = uVar13 ^ *(uint *)(&DAT_1534bc2b8 + lVar19);
  uVar12 = uVar24 ^ *(uint *)(&DAT_1534bc2b0 + lVar19);
  uVar16 = uVar25 ^ *(uint *)(&DAT_1534bc2b4 + lVar19);
  uVar14 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar18 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar16 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar16 & 0xff) * 4) ^ uVar14;
  uVar21 = uVar15 ^ uVar18;
  uVar12 = *(uint *)(&DAT_1534bc2e0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
           *(uint *)(&DAT_1534bc6e0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcae0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_1534bcee0 + (ulonglong)(uVar12 & 0xff) * 4) ^ uVar18;
  uVar14 = uVar14 ^ uVar15 ^ uVar12;
  uVar18 = uVar18 ^ uVar14;
  uVar16 = uVar14 << 0x10 | uVar14 >> 0x10;
  uVar15 = (uVar21 & 0xff0000 ^ uVar21 >> 0x10) >> 8 ^ (uVar21 & 0xff00 ^ uVar21 << 0x10) << 8;
  uVar14 = (uVar18 >> 8 ^ uVar18 << 8) & 0xff00ff ^ uVar18 << 8 ^ uVar16;
  uVar12 = uVar12 ^ uVar14;
  uVar21 = uVar28 ^ uVar15 ^ uVar14;
  uVar18 = uVar23 ^ uVar12;
  uVar12 = uVar15 ^ uVar16 ^ uVar12;
  uVar14 = uVar20 ^ uVar12 ^ uVar14;
  uVar12 = uVar27 ^ uVar12;
  *param_3 = uVar28 << 0xd ^ uVar23 >> 0x13 ^ uVar26;
  param_3[1] = uVar20 >> 0x13 ^ uVar23 << 0xd ^ uVar9;
  param_3[2] = uVar27 >> 0x13 ^ uVar20 << 0xd ^ uVar10;
  param_3[3] = uVar28 >> 0x13 ^ uVar27 << 0xd ^ uVar22;
  param_3[4] = uVar17 << 0xd ^ uVar24 >> 0x13 ^ uVar23;
  param_3[5] = uVar25 >> 0x13 ^ uVar24 << 0xd ^ uVar20;
  param_3[6] = uVar13 >> 0x13 ^ uVar25 << 0xd ^ uVar27;
  param_3[7] = uVar17 >> 0x13 ^ uVar13 << 0xd ^ uVar28;
  param_3[8] = uVar21 << 0xd ^ uVar18 >> 0x13 ^ uVar24;
  param_3[9] = uVar14 >> 0x13 ^ uVar18 << 0xd ^ uVar25;
  param_3[10] = uVar12 >> 0x13 ^ uVar14 << 0xd ^ uVar13;
  param_3[0xb] = uVar21 >> 0x13 ^ uVar12 << 0xd ^ uVar17;
  param_3[0xc] = uVar22 << 0xd ^ (uint)(uVar5 >> 3) ^ uVar18;
  param_3[0xd] = (uint)(uVar6 >> 3) ^ uVar26 << 0xd ^ uVar14;
  param_3[0xe] = (uint)(uVar7 >> 3) ^ uVar9 << 0xd ^ uVar12;
  param_3[0xf] = (uint)(uVar8 >> 3) ^ uVar10 << 0xd ^ uVar21;
  param_3[0x10] = uVar28 * 2 ^ uVar23 >> 0x1f ^ uVar26;
  param_3[0x11] = uVar20 >> 0x1f ^ uVar23 * 2 ^ uVar9;
  param_3[0x12] = uVar27 >> 0x1f ^ uVar20 * 2 ^ uVar10;
  param_3[0x13] = uVar28 >> 0x1f ^ uVar27 * 2 ^ uVar22;
  param_3[0x14] = uVar17 * 2 ^ uVar24 >> 0x1f ^ uVar23;
  param_3[0x15] = uVar25 >> 0x1f ^ uVar24 * 2 ^ uVar20;
  param_3[0x16] = uVar13 >> 0x1f ^ uVar25 * 2 ^ uVar27;
  param_3[0x17] = uVar17 >> 0x1f ^ uVar13 * 2 ^ uVar28;
  param_3[0x18] = uVar21 * 2 ^ uVar18 >> 0x1f ^ uVar24;
  param_3[0x19] = uVar14 >> 0x1f ^ uVar18 * 2 ^ uVar25;
  param_3[0x1a] = uVar12 >> 0x1f ^ uVar14 * 2 ^ uVar13;
  param_3[0x1b] = uVar21 >> 0x1f ^ uVar12 * 2 ^ uVar17;
  param_3[0x1c] = uVar22 * 2 ^ (uint)(bVar3 >> 7) ^ uVar18;
  param_3[0x1d] = (uint)(bVar4 >> 7) ^ uVar26 * 2 ^ uVar14;
  param_3[0x1e] = (uint)(bVar2 >> 7) ^ uVar9 * 2 ^ uVar12;
  param_3[0x1f] = (uint)(bVar1 >> 7) ^ uVar10 * 2 ^ uVar21;
  param_3[0x20] = uVar27 >> 3 ^ uVar20 << 0x1d ^ uVar26;
  param_3[0x21] = uVar28 >> 3 ^ uVar27 << 0x1d ^ uVar9;
  param_3[0x22] = uVar28 << 0x1d ^ uVar23 >> 3 ^ uVar10;
  param_3[0x23] = uVar20 >> 3 ^ uVar23 << 0x1d ^ uVar22;
  param_3[0x24] = uVar13 >> 3 ^ uVar25 << 0x1d ^ uVar23;
  param_3[0x25] = uVar17 >> 3 ^ uVar13 << 0x1d ^ uVar20;
  param_3[0x26] = uVar17 << 0x1d ^ uVar24 >> 3 ^ uVar27;
  param_3[0x27] = uVar25 >> 3 ^ uVar24 << 0x1d ^ uVar28;
  param_3[0x28] = uVar12 >> 3 ^ uVar14 << 0x1d ^ uVar24;
  param_3[0x29] = uVar21 >> 3 ^ uVar12 << 0x1d ^ uVar25;
  param_3[0x2a] = uVar21 << 0x1d ^ uVar18 >> 3 ^ uVar13;
  param_3[0x2b] = uVar14 >> 3 ^ uVar18 << 0x1d ^ uVar17;
  param_3[0x2c] = uVar10 >> 3 ^ uVar9 << 0x1d ^ uVar18;
  param_3[0x2d] = uVar22 >> 3 ^ uVar10 << 0x1d ^ uVar14;
  param_3[0x2e] = uVar22 << 0x1d ^ uVar26 >> 3 ^ uVar12;
  param_3[0x2f] = uVar9 >> 3 ^ uVar26 << 0x1d ^ uVar21;
  puVar11 = param_3 + 0x30;
  *puVar11 = uVar20 >> 1 ^ uVar23 << 0x1f ^ uVar26;
  param_3[0x31] = uVar27 >> 1 ^ uVar20 << 0x1f ^ uVar9;
  param_3[0x32] = uVar28 >> 1 ^ uVar27 << 0x1f ^ uVar10;
  param_3[0x33] = uVar28 << 0x1f ^ uVar23 >> 1 ^ uVar22;
  if (0x80 < param_2) {
    param_3[0x34] = uVar25 >> 1 ^ uVar24 << 0x1f ^ uVar23;
    param_3[0x35] = uVar13 >> 1 ^ uVar25 << 0x1f ^ uVar20;
    param_3[0x36] = uVar17 >> 1 ^ uVar13 << 0x1f ^ uVar27;
    param_3[0x37] = uVar17 << 0x1f ^ uVar24 >> 1 ^ uVar28;
    puVar11 = param_3 + 0x38;
    *puVar11 = uVar14 >> 1 ^ uVar18 << 0x1f ^ uVar24;
    param_3[0x39] = uVar12 >> 1 ^ uVar14 << 0x1f ^ uVar25;
    param_3[0x3a] = uVar21 >> 1 ^ uVar12 << 0x1f ^ uVar13;
    param_3[0x3b] = uVar21 << 0x1f ^ uVar18 >> 1 ^ uVar17;
  }
  if (0xc0 < param_2) {
    puVar11[4] = uVar9 >> 1 ^ uVar26 << 0x1f ^ uVar18;
    puVar11[5] = uVar10 >> 1 ^ uVar9 << 0x1f ^ uVar14;
    puVar11[6] = uVar22 >> 1 ^ uVar10 << 0x1f ^ uVar12;
    puVar11[7] = uVar22 << 0x1f ^ uVar26 >> 1 ^ uVar21;
    puVar11[8] = uVar20 >> 0xd ^ uVar23 << 0x13 ^ uVar26;
    puVar11[9] = uVar27 >> 0xd ^ uVar20 << 0x13 ^ uVar9;
    puVar11[10] = uVar28 >> 0xd ^ uVar27 << 0x13 ^ uVar10;
    puVar11[0xb] = uVar28 << 0x13 ^ uVar23 >> 0xd ^ uVar22;
  }
  return 0;
}

