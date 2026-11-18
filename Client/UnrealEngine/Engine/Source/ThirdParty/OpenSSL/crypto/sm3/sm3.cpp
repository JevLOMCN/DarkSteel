// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// sm3_block_data_order @ 14f7b8a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sm3_block_data_order(uint *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint local_68;
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  if (param_3 != 0) {
    local_68 = param_1[2];
    uVar33 = param_1[4];
    local_50 = param_1[5];
    local_60 = param_1[6];
    local_54 = param_1[3];
    local_5c = param_1[1];
    local_4c = param_1[7];
    do {
      param_3 = param_3 + -1;
      pbVar1 = param_2 + 0x10;
      pbVar2 = param_2 + 0x14;
      pbVar3 = param_2 + 0x18;
      pbVar4 = param_2 + 0x1c;
      uVar25 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
               (uint)param_2[3];
      uVar27 = (uint)param_2[4] << 0x18 | (uint)param_2[5] << 0x10 | (uint)param_2[6] << 8 |
               (uint)param_2[7];
      uVar14 = (uint)param_2[8] << 0x18 | (uint)param_2[9] << 0x10 | (uint)param_2[10] << 8 |
               (uint)param_2[0xb];
      pbVar5 = param_2 + 0xc;
      uVar15 = (uint)*pbVar5 << 0x18 | (uint)param_2[0xd] << 0x10 | (uint)param_2[0xe] << 8 |
               (uint)param_2[0xf];
      uVar34 = (uint)*pbVar1 << 0x18 | (uint)param_2[0x11] << 0x10 | (uint)param_2[0x12] << 8 |
               (uint)param_2[0x13];
      uVar42 = (uint)*pbVar2 << 0x18 | (uint)param_2[0x15] << 0x10 | (uint)param_2[0x16] << 8 |
               (uint)param_2[0x17];
      uVar38 = (uint)*pbVar3 << 0x18 | (uint)param_2[0x19] << 0x10 | (uint)param_2[0x1a] << 8 |
               (uint)param_2[0x1b];
      pbVar6 = param_2 + 0x20;
      pbVar7 = param_2 + 0x28;
      uVar39 = (uint)*pbVar4 << 0x18 | (uint)param_2[0x1d] << 0x10 | (uint)param_2[0x1e] << 8 |
               (uint)param_2[0x1f];
      pbVar8 = param_2 + 0x34;
      uVar16 = (uint)*pbVar6 << 0x18 | (uint)param_2[0x21] << 0x10 | (uint)param_2[0x22] << 8 |
               (uint)param_2[0x23];
      pbVar9 = param_2 + 0x24;
      uVar17 = (uint)*pbVar9 << 0x18 | (uint)param_2[0x25] << 0x10 | (uint)param_2[0x26] << 8 |
               (uint)param_2[0x27];
      pbVar10 = param_2 + 0x2c;
      uVar36 = (uint)*pbVar7 << 0x18 | (uint)param_2[0x29] << 0x10 | (uint)param_2[0x2a] << 8 |
               (uint)param_2[0x2b];
      uVar18 = (uint)*pbVar10 << 0x18 | (uint)param_2[0x2d] << 0x10 | (uint)param_2[0x2e] << 8 |
               (uint)param_2[0x2f];
      pbVar11 = param_2 + 0x30;
      uVar19 = (uint)*pbVar11 << 0x18 | (uint)param_2[0x31] << 0x10 | (uint)param_2[0x32] << 8 |
               (uint)param_2[0x33];
      uVar28 = (uint)*pbVar8 << 0x18 | (uint)param_2[0x35] << 0x10;
      pbVar12 = param_2 + 0x38;
      uVar29 = uVar28 | (uint)param_2[0x36] << 8 | (uint)param_2[0x37];
      uVar20 = (uint)*pbVar12 << 0x18 | (uint)param_2[0x39] << 0x10;
      uVar21 = uVar20 | (uint)param_2[0x3a] << 8 | (uint)param_2[0x3b];
      pbVar13 = param_2 + 0x3c;
      uVar22 = (uint)*pbVar13 << 0x18 | (uint)param_2[0x3d] << 0x10;
      uVar23 = uVar22 | (uint)param_2[0x3e] << 8 | (uint)param_2[0x3f];
      param_2 = param_2 + 0x40;
      uVar24 = *param_1 << 0xc | *param_1 >> 0x14;
      uVar31 = uVar33 + 0x79cc4519 + uVar24;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar40 = (uVar34 ^ uVar25) + (uVar31 ^ uVar24) + local_54 + (local_68 ^ local_5c ^ *param_1);
      uVar31 = (uVar33 ^ local_60 ^ local_50) + local_4c + uVar31 + uVar25;
      uVar30 = uVar29 << 0xf | uVar28 >> 0x11;
      uVar35 = local_5c << 9 | local_5c >> 0x17;
      uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
      uVar26 = local_50 >> 0xd | local_50 << 0x13;
      uVar28 = uVar30 ^ uVar39 ^ uVar25;
      uVar24 = *param_1;
      uVar25 = uVar25 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                        (uVar15 << 7 | (uint)(*pbVar5 >> 1)) ^ uVar30 ^ uVar36 ^ uVar39;
      uVar28 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar30 = uVar31 + 0xf3988a32 + uVar28;
      uVar32 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar43 = (uVar42 ^ uVar27) + (uVar32 ^ uVar28) + local_68 + (uVar40 ^ uVar35 ^ uVar24);
      uVar30 = uVar21 << 0xf | uVar20 >> 0x11;
      uVar28 = (uVar33 ^ uVar31 ^ uVar26) + local_60 + uVar32 + uVar27;
      uVar20 = uVar33 >> 0xd | uVar33 << 0x13;
      uVar37 = uVar24 << 9 | uVar24 >> 0x17;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar30 ^ uVar16 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | (uint)(*pbVar1 >> 1)) ^ uVar30 ^ uVar18 ^ uVar16;
      uVar24 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar30 = uVar28 + 0xe7311465 + uVar24;
      uVar41 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar32 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar30 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar22 = uVar23 << 0xf | uVar22 >> 0x11;
      uVar35 = (uVar38 ^ uVar14) + (uVar32 ^ uVar24) + uVar35 + (uVar43 ^ uVar40 ^ uVar37);
      uVar26 = (uVar31 ^ uVar28 ^ uVar20) + uVar32 + uVar14 + uVar26;
      uVar26 = (uVar26 >> 0xf | uVar26 * 0x20000) ^ (uVar26 * 0x200 | uVar26 >> 0x17) ^ uVar26;
      uVar24 = uVar22 ^ uVar17 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | (uint)(*pbVar2 >> 1)) ^ uVar22 ^ uVar19 ^ uVar17;
      uVar24 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar22 = uVar26 + 0xce6228cb + uVar24;
      uVar32 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar31 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar22 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar20 = (uVar30 ^ uVar28 ^ uVar26) + uVar32 + uVar15 + uVar20;
      uVar40 = (uVar39 ^ uVar15) + (uVar32 ^ uVar24) + uVar37 + (uVar35 ^ uVar43 ^ uVar41);
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar24 = uVar31 ^ uVar36 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | (uint)(*pbVar3 >> 1)) ^ uVar31 ^ uVar29 ^ uVar36;
      uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar24 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar28 = uVar20 + 0x9cc45197 + uVar24;
      uVar32 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar28 = uVar26 >> 0xd | uVar26 << 0x13;
      uVar30 = (uVar22 ^ uVar26 ^ uVar20) + uVar32 + uVar34 + uVar30;
      uVar35 = (uVar16 ^ uVar34) + (uVar32 ^ uVar24) + uVar41 + (uVar40 ^ uVar35 ^ uVar44);
      uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
      uVar24 = uVar31 ^ uVar18 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | (uint)(*pbVar4 >> 1)) ^ uVar31 ^ uVar21 ^ uVar18;
      uVar41 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar24 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar31 = uVar30 + 0x3988a32f + uVar24;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar26 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar28 ^ uVar20) + uVar31 + uVar42 + uVar22;
      uVar20 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar32 = (uVar17 ^ uVar42) + (uVar31 ^ uVar24) + uVar44 + (uVar35 ^ uVar40 ^ uVar37);
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar24 = uVar20 ^ uVar19 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar16 << 7 | (uint)(*pbVar6 >> 1)) ^ uVar20 ^ uVar23 ^ uVar19;
      uVar43 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar24 = uVar32 * 0x1000 | uVar32 >> 0x14;
      uVar20 = uVar22 + 0x7311465e + uVar24;
      uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar35 = (uVar36 ^ uVar38) + (uVar20 ^ uVar24) + uVar37 + (uVar32 ^ uVar35 ^ uVar41);
      uVar28 = (uVar30 ^ uVar22 ^ uVar26) + uVar20 + uVar38 + uVar28;
      uVar30 = uVar30 >> 0xd | uVar30 << 0x13;
      uVar40 = uVar32 * 0x200 | uVar32 >> 0x17;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar20 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar20 ^ uVar29 ^ uVar38;
      uVar31 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar17 << 7 | (uint)(*pbVar9 >> 1)) ^ uVar20 ^ uVar29 ^ uVar38 ^ uVar25;
      uVar24 = uVar28 + 0xe6228cbc + uVar31;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar44 = (uVar18 ^ uVar39) + (uVar24 ^ uVar31) + uVar41 + (uVar35 ^ uVar32 ^ uVar43);
      uVar31 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar26 = (uVar30 ^ uVar22 ^ uVar28) + uVar24 + uVar39 + uVar26;
      uVar26 = (uVar26 >> 0xf | uVar26 * 0x20000) ^ (uVar26 * 0x200 | uVar26 >> 0x17) ^ uVar26;
      uVar20 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar20 ^ uVar21 ^ uVar39;
      uVar22 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar36 << 7 | (uint)(*pbVar7 >> 1)) ^ uVar20 ^ uVar21 ^ uVar39 ^ uVar27;
      uVar24 = uVar26 + 0xcc451979 + uVar22;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar32 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar43 = (uVar19 ^ uVar16) + (uVar24 ^ uVar22) + uVar43 + (uVar44 ^ uVar35 ^ uVar40);
      uVar30 = (uVar31 ^ uVar28 ^ uVar26) + uVar24 + uVar16 + uVar30;
      uVar45 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar23 ^ uVar16;
      uVar20 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar41 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar18 << 7 | (uint)(*pbVar10 >> 1)) ^ uVar28 ^ uVar23 ^ uVar16 ^ uVar14;
      uVar24 = uVar30 + 0x988a32f3 + uVar20;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar22 = (uVar29 ^ uVar17) + (uVar24 ^ uVar20) + uVar40 + (uVar43 ^ uVar44 ^ uVar37);
      uVar20 = uVar26 >> 0xd | uVar26 << 0x13;
      uVar31 = (uVar30 ^ uVar32 ^ uVar26) + uVar24 + uVar17 + uVar31;
      uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
      uVar28 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar24 = uVar28 ^ uVar17 ^ uVar25;
      uVar35 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar19 << 7 | (uint)(*pbVar11 >> 1)) ^ uVar28 ^ uVar17 ^ uVar15 ^ uVar25;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar31 + 0x311465e7 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar26 = (uVar21 ^ uVar36) + (uVar28 ^ uVar24) + uVar37 + (uVar22 ^ uVar43 ^ uVar45);
      uVar17 = uVar30 >> 0xd | uVar30 << 0x13;
      uVar32 = (uVar30 ^ uVar31 ^ uVar20) + uVar28 + uVar36 + uVar32;
      uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
      uVar28 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar24 = uVar28 ^ uVar36 ^ uVar27;
      uVar16 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar30 = uVar32 + 0x6228cbce + uVar16;
      uVar37 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar29 << 7 | (uint)(*pbVar8 >> 1)) ^ uVar28 ^ uVar36 ^ uVar34 ^ uVar27;
      uVar24 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar30 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar43 = (uVar23 ^ uVar18) + (uVar24 ^ uVar16) + uVar45 + (uVar26 ^ uVar22 ^ uVar44);
      uVar22 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar20 = (uVar17 ^ uVar31 ^ uVar32) + uVar24 + uVar18 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar41 << 0xf | uVar41 >> 0x11;
      uVar24 = uVar28 ^ uVar18 ^ uVar14;
      uVar16 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar31 = uVar20 + 0xc451979c + uVar16;
      uVar40 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar21 << 7 | (uint)(*pbVar12 >> 1)) ^ uVar28 ^ uVar18 ^ uVar42 ^ uVar14;
      uVar24 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar31 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar32 >> 0xd | uVar32 << 0x13;
      uVar36 = (uVar19 ^ uVar25) + (uVar24 ^ uVar16) + uVar44 + (uVar43 ^ uVar26 ^ uVar30);
      uVar17 = (uVar22 ^ uVar32 ^ uVar20) + uVar24 + uVar19 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar24 = uVar28 ^ uVar19 ^ uVar15;
      uVar16 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar26 = uVar17 + 0x88a32f39 + uVar16;
      uVar32 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar23 << 7 | (uint)(*pbVar13 >> 1)) ^ uVar28 ^ uVar19 ^ uVar38 ^ uVar15;
      uVar24 = uVar26 * 0x80 | uVar26 >> 0x19;
      uVar26 = (uVar29 ^ uVar27) + (uVar24 ^ uVar16) + uVar30 + (uVar36 ^ uVar43 ^ uVar31);
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar16 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar17 ^ uVar18 ^ uVar20) + uVar24 + uVar29 + uVar22;
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar28 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar34;
      uVar30 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar39 ^ uVar34;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar24 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar28 = uVar22 + 0x11465e73 + uVar24;
      uVar19 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = (uVar28 ^ uVar24) + (uVar21 ^ uVar14) + uVar31 + (uVar26 ^ uVar36 ^ uVar44);
      uVar18 = (uVar17 ^ uVar22 ^ uVar16) + uVar28 + uVar21 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar24 = uVar28 ^ uVar21 ^ uVar42;
      uVar29 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar28 ^ uVar21 ^ uVar41 ^ uVar42;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar18 + 0x228cbce6 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar20 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar44 = (uVar28 ^ uVar24) + (uVar23 ^ uVar15) + uVar44 + (uVar31 ^ uVar26 ^ uVar43);
      uVar17 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar16 = (uVar19 ^ uVar22 ^ uVar18) + uVar28 + uVar23 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar24 = uVar28 ^ uVar23 ^ uVar38;
      uVar26 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar28 ^ uVar23 ^ uVar35 ^ uVar38;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar28 = uVar16 + 0x9d8a7a87 + uVar24;
      uVar22 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar23 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar36 = (uVar34 ^ uVar25) +
               (uVar22 ^ uVar24) + uVar43 + ((uVar44 | uVar31) & uVar20 | uVar44 & uVar31);
      uVar21 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar28 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar19 = ((uVar17 ^ uVar18) & uVar16 ^ uVar17) + uVar22 + uVar25 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar21 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar21 ^ uVar37 ^ uVar39;
      uVar45 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar18 = uVar19 + 0x3b14f50f + uVar24;
      uVar22 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar20 = (uVar42 ^ uVar27) +
               (uVar22 ^ uVar24) + uVar20 + ((uVar36 | uVar44) & uVar23 | uVar36 & uVar44);
      uVar21 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar17 = ((uVar28 ^ uVar16) & uVar19 ^ uVar28) + uVar22 + uVar27 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar21 ^ uVar41 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | uVar34 >> 0x19) ^ uVar21 ^ uVar40 ^ uVar41;
      uVar24 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar16 = uVar17 + 0x7629ea1e + uVar24;
      uVar22 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar31 = (uVar38 ^ uVar14) +
               (uVar22 ^ uVar24) + uVar23 + ((uVar20 | uVar36) & uVar45 | uVar20 & uVar36);
      uVar21 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar16 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar28 = ((uVar19 ^ uVar18) & uVar17 ^ uVar18) + uVar22 + uVar14 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar21 ^ uVar35 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar35;
      uVar22 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar19 = uVar28 + 0xec53d43c + uVar24;
      uVar21 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar44 = (uVar39 ^ uVar15) +
               (uVar21 ^ uVar24) + uVar45 + ((uVar31 | uVar20) & uVar43 | uVar31 & uVar20);
      uVar18 = ((uVar16 ^ uVar17) & uVar28 ^ uVar16) + uVar21 + uVar15 + uVar18;
      uVar17 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar24 = uVar19 ^ uVar37 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | uVar38 >> 0x19) ^ uVar19 ^ uVar30 ^ uVar37;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar19 = uVar18 + 0xd8a7a879 + uVar24;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar19 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar20 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar21 = (uVar41 ^ uVar34) +
               (uVar23 ^ uVar24) + uVar43 + ((uVar44 | uVar31) & uVar22 | uVar44 & uVar31);
      uVar16 = ((uVar17 ^ uVar28) & uVar18 ^ uVar17) + uVar23 + uVar34 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar24 = uVar20 ^ uVar40 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | uVar39 >> 0x19) ^ uVar20 ^ uVar29 ^ uVar40;
      uVar43 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar28 = uVar16 + 0xb14f50f3 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar20 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar17 = ((uVar19 ^ uVar18) & uVar16 ^ uVar19) + uVar28 + uVar42 + uVar17;
      uVar23 = (uVar35 ^ uVar42) +
               (uVar28 ^ uVar24) + uVar22 + ((uVar21 | uVar44) & uVar36 | uVar21 & uVar44);
      uVar28 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar28 ^ uVar32 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar41 << 7 | uVar41 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar32;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar24 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar28 = uVar17 + 0x629ea1e7 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar21 = (uVar37 ^ uVar38) +
               (uVar28 ^ uVar24) + uVar36 + ((uVar23 | uVar21) & uVar43 | uVar23 & uVar21);
      uVar19 = ((uVar16 ^ uVar20) & uVar17 ^ uVar20) + uVar28 + uVar38 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar28 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar28 ^ uVar30 ^ uVar38;
      uVar16 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar35 << 7 | uVar35 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar38 ^ uVar25;
      uVar24 = uVar19 + 0xc53d43ce + uVar16;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar36 = (uVar40 ^ uVar39) +
               (uVar24 ^ uVar16) + uVar43 + ((uVar21 | uVar23) & uVar22 | uVar21 & uVar23);
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar20 = ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + uVar24 + uVar39 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar39;
      uVar23 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar37 << 7 | uVar37 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar39 ^ uVar27;
      uVar24 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar28 = uVar20 + 0x8a7a879d + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar21 = (uVar32 ^ uVar41) +
               (uVar28 ^ uVar24) + uVar22 + ((uVar36 | uVar21) & uVar31 | uVar36 & uVar21);
      uVar18 = ((uVar16 ^ uVar19) & uVar20 ^ uVar16) + uVar28 + uVar41 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar41;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar41 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar40 << 7 | uVar40 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar41 ^ uVar14;
      uVar24 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar28 = uVar18 + 0x14f50f3b + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar35) +
               (uVar28 ^ uVar24) + uVar31 + ((uVar21 | uVar36) & uVar23 | uVar21 & uVar36);
      uVar16 = ((uVar17 ^ uVar20) & uVar18 ^ uVar17) + uVar28 + uVar35 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar24 = uVar28 ^ uVar35 ^ uVar25;
      uVar35 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar32 << 7 | uVar32 >> 0x19) ^ uVar28 ^ uVar35 ^ uVar15 ^ uVar25;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar16 + 0x29ea1e76 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = (uVar29 ^ uVar37) +
               (uVar24 ^ uVar28) + uVar23 + ((uVar22 | uVar21) & uVar43 | uVar22 & uVar21);
      uVar20 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar21 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar17 = ((uVar18 ^ uVar19) & uVar16 ^ uVar19) + uVar28 + uVar37 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar24 = uVar28 ^ uVar37 ^ uVar27;
      uVar37 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar30 << 7 | uVar30 >> 0x19) ^ uVar28 ^ uVar37 ^ uVar34 ^ uVar27;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar17 + 0x53d43cec + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar22 = (uVar26 ^ uVar40) +
               (uVar28 ^ uVar24) + uVar43 + ((uVar22 | uVar31) & uVar21 | uVar22 & uVar31);
      uVar19 = ((uVar20 ^ uVar16) & uVar17 ^ uVar20) + uVar28 + uVar40 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar28 = uVar41 << 0xf | uVar41 >> 0x11;
      uVar24 = uVar28 ^ uVar40 ^ uVar14;
      uVar40 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar29 << 7 | uVar29 >> 0x19) ^ uVar28 ^ uVar40 ^ uVar42 ^ uVar14;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar19 + 0xa7a879d8 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar31 = (uVar32 ^ uVar25) +
               (uVar28 ^ uVar24) + uVar21 + ((uVar22 | uVar31) & uVar23 | uVar22 & uVar31);
      uVar20 = ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + uVar28 + uVar32 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar24 = uVar28 ^ uVar32 ^ uVar15;
      uVar32 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar26 << 7 | uVar26 >> 0x19) ^ uVar28 ^ uVar32 ^ uVar38 ^ uVar15;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar20 + 0x4f50f3b1 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar43 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar21 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar18 = ((uVar16 ^ uVar19) & uVar20 ^ uVar16) + uVar28 + uVar30 + uVar18;
      uVar22 = (uVar30 ^ uVar27) +
               (uVar28 ^ uVar24) + uVar23 + ((uVar31 | uVar22) & uVar36 | uVar31 & uVar22);
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar24 = uVar28 ^ uVar30 ^ uVar34;
      uVar30 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar39 ^ uVar34;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar18 + 0x9ea1e762 + uVar24;
      uVar23 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar36 = (uVar29 ^ uVar14) +
               (uVar28 ^ uVar24) + uVar36 + ((uVar22 | uVar31) & uVar43 | uVar22 & uVar31);
      uVar16 = ((uVar20 ^ uVar21) & uVar18 ^ uVar21) + uVar28 + uVar29 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar42;
      uVar17 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar20 = uVar16 + 0x3d43cec5 + uVar17;
      uVar29 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar41 ^ uVar42;
      uVar24 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar31 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar44 = (uVar26 ^ uVar15) +
               (uVar24 ^ uVar17) + uVar43 + ((uVar36 | uVar22) & uVar23 | uVar36 & uVar22);
      uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar21 = ((uVar19 ^ uVar18) & uVar16 ^ uVar19) + uVar24 + uVar26 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar28 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar38;
      uVar26 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar35 ^ uVar38;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar28 = uVar21 + 0x7a879d8a + uVar24;
      uVar20 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar28 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar18 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar22 = (uVar34 ^ uVar25) +
               (uVar20 ^ uVar24) + uVar23 + ((uVar44 | uVar36) & uVar31 | uVar44 & uVar36);
      uVar19 = ((uVar17 ^ uVar16) & uVar21 ^ uVar17) + uVar20 + uVar25 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar18 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar18 ^ uVar37 ^ uVar39;
      uVar36 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0xf50f3b14 + uVar24;
      uVar23 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar18 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar20 = (uVar42 ^ uVar27) +
               (uVar23 ^ uVar24) + uVar31 + ((uVar22 | uVar44) & uVar43 | uVar22 & uVar44);
      uVar17 = ((uVar28 ^ uVar21) & uVar19 ^ uVar28) + uVar23 + uVar27 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar18 ^ uVar41 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | uVar34 >> 0x19) ^ uVar18 ^ uVar40 ^ uVar41;
      uVar24 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar18 = uVar17 + 0xea1e7629 + uVar24;
      uVar23 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar31 = (uVar38 ^ uVar14) +
               (uVar23 ^ uVar24) + uVar43 + ((uVar20 | uVar22) & uVar36 | uVar20 & uVar22);
      uVar21 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar22 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar28 = ((uVar19 ^ uVar16) & uVar17 ^ uVar16) + uVar23 + uVar14 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar21 ^ uVar35 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar35;
      uVar21 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar19 = uVar28 + 0xd43cec53 + uVar24;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar43 = (uVar39 ^ uVar15) +
               (uVar23 ^ uVar24) + uVar36 + ((uVar31 | uVar20) & uVar22 | uVar31 & uVar20);
      uVar20 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar19 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar16 = ((uVar18 ^ uVar17) & uVar28 ^ uVar18) + uVar23 + uVar15 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar24 = uVar20 ^ uVar37 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | uVar38 >> 0x19) ^ uVar20 ^ uVar30 ^ uVar37;
      uVar24 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar17 = uVar16 + 0xa879d8a7 + uVar24;
      uVar23 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar17 = (uVar41 ^ uVar34) +
               (uVar23 ^ uVar24) + uVar22 + ((uVar43 | uVar31) & uVar21 | uVar43 & uVar31);
      uVar18 = ((uVar19 ^ uVar28) & uVar16 ^ uVar19) + uVar23 + uVar34 + uVar18;
      uVar28 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar24 = uVar20 ^ uVar40 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | uVar39 >> 0x19) ^ uVar20 ^ uVar29 ^ uVar40;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar24 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar20 = uVar18 + 0x50f3b14f + uVar24;
      uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar22 = (uVar35 ^ uVar42) +
               (uVar20 ^ uVar24) + uVar21 + ((uVar17 | uVar43) & uVar36 | uVar17 & uVar43);
      uVar19 = ((uVar28 ^ uVar16) & uVar18 ^ uVar28) + uVar20 + uVar42 + uVar19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar16 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar16 ^ uVar32 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar41 << 7 | uVar41 >> 0x19) ^ uVar16 ^ uVar26 ^ uVar32;
      uVar31 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0xa1e7629e + uVar24;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar36 = (uVar37 ^ uVar38) +
               (uVar16 ^ uVar24) + uVar36 + ((uVar22 | uVar17) & uVar44 | uVar22 & uVar17);
      uVar28 = ((uVar18 ^ uVar20) & uVar19 ^ uVar20) + uVar16 + uVar38 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar16 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar16 ^ uVar30 ^ uVar38;
      uVar17 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar35 << 7 | uVar35 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar38 ^ uVar25;
      uVar24 = uVar28 + 0x43cec53d + uVar17;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar22 = (uVar40 ^ uVar39) +
               (uVar24 ^ uVar17) + uVar44 + ((uVar36 | uVar22) & uVar31 | uVar36 & uVar22);
      uVar20 = ((uVar21 ^ uVar19) & uVar28 ^ uVar21) + uVar24 + uVar39 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar16 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar16 ^ uVar29 ^ uVar39;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar37 << 7 | uVar37 >> 0x19) ^ uVar16 ^ uVar29 ^ uVar39 ^ uVar27;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar20 + 0x879d8a7a + uVar24;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar17 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar31 = (uVar32 ^ uVar41) +
               (uVar16 ^ uVar24) + uVar31 + ((uVar22 | uVar36) & uVar23 | uVar22 & uVar36);
      uVar21 = ((uVar18 ^ uVar28) & uVar20 ^ uVar18) + uVar16 + uVar41 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar41;
      uVar16 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar24 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar40 << 7 | uVar40 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar41 ^ uVar14;
      uVar28 = uVar21 + 0xf3b14f5 + uVar16;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar36 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar35) +
               (uVar28 ^ uVar16) + uVar23 + ((uVar31 | uVar22) & uVar43 | uVar31 & uVar22);
      uVar18 = ((uVar17 ^ uVar20) & uVar21 ^ uVar17) + uVar28 + uVar35 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar16 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar28 = uVar16 ^ uVar35 ^ uVar25;
      uVar35 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar32 << 7 | uVar32 >> 0x19) ^ uVar16 ^ uVar35 ^ uVar15 ^ uVar25;
      uVar28 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar18 + 0x1e7629ea + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar41 = (uVar29 ^ uVar37) +
               (uVar16 ^ uVar28) + uVar43 + ((uVar22 | uVar31) & uVar36 | uVar22 & uVar31);
      uVar31 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar17 = ((uVar21 ^ uVar19) & uVar18 ^ uVar19) + uVar16 + uVar37 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar16 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar28 = uVar16 ^ uVar37 ^ uVar27;
      uVar37 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar30 << 7 | uVar30 >> 0x19) ^ uVar16 ^ uVar37 ^ uVar34 ^ uVar27;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar16 = uVar17 + 0x3cec53d4 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar22 = (uVar26 ^ uVar40) +
               (uVar16 ^ uVar28) + uVar36 + ((uVar41 | uVar22) & uVar31 | uVar41 & uVar22);
      uVar19 = ((uVar20 ^ uVar18) & uVar17 ^ uVar20) + uVar16 + uVar40 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar16 = uVar24 << 0xf | uVar24 >> 0x11;
      uVar28 = uVar16 ^ uVar40 ^ uVar14;
      uVar40 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar29 << 7 | uVar29 >> 0x19) ^ uVar16 ^ uVar40 ^ uVar42 ^ uVar14;
      uVar28 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0x79d8a7a8 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar43 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar18 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar41 = (uVar32 ^ uVar25) +
               (uVar16 ^ uVar28) + uVar31 + ((uVar22 | uVar41) & uVar23 | uVar22 & uVar41);
      uVar20 = ((uVar21 ^ uVar17) & uVar19 ^ uVar21) + uVar16 + uVar32 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar16 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar28 = uVar16 ^ uVar32 ^ uVar15;
      uVar32 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar26 << 7 | uVar26 >> 0x19) ^ uVar16 ^ uVar32 ^ uVar38 ^ uVar15;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar16 = uVar20 + 0xf3b14f50 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = ((uVar18 ^ uVar19) & uVar20 ^ uVar18) + uVar16 + uVar30 + uVar21;
      uVar31 = (uVar30 ^ uVar27) +
               (uVar16 ^ uVar28) + uVar23 + ((uVar41 | uVar22) & uVar43 | uVar41 & uVar22);
      uVar44 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar19 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar16 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar28 = uVar16 ^ uVar30 ^ uVar34;
      uVar30 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar39 ^ uVar34;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar16 = uVar21 + 0xe7629ea1 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar22 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar23 = (uVar29 ^ uVar14) +
               (uVar16 ^ uVar28) + uVar43 + ((uVar31 | uVar41) & uVar44 | uVar31 & uVar41);
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + uVar16 + uVar29 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar16 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar28 = uVar16 ^ uVar29 ^ uVar42;
      uVar17 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar20 = uVar18 + 0xcec53d43 + uVar17;
      uVar29 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar16 ^ uVar29 ^ uVar24 ^ uVar42;
      uVar28 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar41 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar31 = (uVar26 ^ uVar15) +
               (uVar28 ^ uVar17) + uVar44 + ((uVar23 | uVar31) & uVar36 | uVar23 & uVar31);
      uVar19 = ((uVar22 ^ uVar21) & uVar18 ^ uVar22) + uVar28 + uVar26 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar16 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar28 = uVar16 ^ uVar26 ^ uVar38;
      uVar26 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar16 ^ uVar26 ^ uVar35 ^ uVar38;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar16 = uVar19 + 0x9d8a7a87 + uVar28;
      uVar17 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar16 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar43 = (uVar34 ^ uVar25) +
               (uVar17 ^ uVar28) + uVar36 + ((uVar31 | uVar23) & uVar41 | uVar31 & uVar23);
      uVar22 = ((uVar20 ^ uVar18) & uVar19 ^ uVar20) + uVar17 + uVar25 + uVar22;
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar17 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar28 = uVar17 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar17 ^ uVar37 ^ uVar39;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar28 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar17 = uVar22 + 0x3b14f50f + uVar28;
      uVar18 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar23 = (uVar42 ^ uVar27) +
               (uVar18 ^ uVar28) + uVar41 + ((uVar43 | uVar31) & uVar21 | uVar43 & uVar31);
      uVar20 = ((uVar16 ^ uVar19) & uVar22 ^ uVar16) + uVar18 + uVar27 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar18 = uVar20 + 0x7629ea1e + uVar28;
      uVar19 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar21 = (uVar38 ^ uVar14) +
               (uVar19 ^ uVar28) + uVar21 + ((uVar23 | uVar43) & uVar36 | uVar23 & uVar43);
      uVar16 = ((uVar22 ^ uVar17) & uVar20 ^ uVar17) + uVar19 + uVar14 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar19 = uVar16 + 0xec53d43c + uVar28;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar22 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar41 = (uVar39 ^ uVar15) +
               (uVar22 ^ uVar28) + uVar36 + ((uVar21 | uVar23) & uVar44 | uVar21 & uVar23);
      uVar17 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar22 + uVar15 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar20 = uVar17 + 0xd8a7a879 + uVar28;
      uVar23 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar43 = (uVar24 ^ uVar34) +
               (uVar23 ^ uVar28) + uVar44 + ((uVar41 | uVar21) & uVar31 | uVar41 & uVar21);
      uVar18 = ((uVar19 ^ uVar16) & uVar17 ^ uVar19) + uVar23 + uVar34 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar16 = uVar18 + 0xb14f50f3 + uVar28;
      uVar21 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar23 = (uVar35 ^ uVar42) +
               (uVar21 ^ uVar28) + uVar31 + ((uVar41 | uVar43) & uVar22 | uVar41 & uVar43);
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar19 = ((uVar20 ^ uVar17) & uVar18 ^ uVar20) + uVar21 + uVar42 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar17 = uVar19 + 0x629ea1e7 + uVar28;
      uVar21 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar20 = ((uVar18 ^ uVar16) & uVar19 ^ uVar16) + uVar21 + uVar38 + uVar20;
      uVar21 = (uVar37 ^ uVar38) +
               (uVar21 ^ uVar28) + uVar22 + ((uVar23 | uVar43) & uVar36 | uVar23 & uVar43);
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar18 = uVar20 + 0xc53d43ce + uVar28;
      uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar41 = (uVar40 ^ uVar39) +
               (uVar18 ^ uVar28) + uVar36 + ((uVar21 | uVar23) & uVar44 | uVar21 & uVar23);
      uVar16 = ((uVar17 ^ uVar19) & uVar20 ^ uVar17) + uVar18 + uVar39 + uVar16;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar19 = uVar16 + 0x8a7a879d + uVar28;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar39 = (uVar32 ^ uVar24) +
               (uVar23 ^ uVar28) + uVar44 + ((uVar41 | uVar21) & uVar31 | uVar41 & uVar21);
      uVar17 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar23 + uVar24 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar39 * 0x1000 | uVar39 >> 0x14;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar20 = uVar17 + 0x14f50f3b + uVar28;
      uVar21 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar23 = (uVar30 ^ uVar35) +
               (uVar21 ^ uVar28) + uVar31 + ((uVar39 | uVar41) & uVar22 | uVar39 & uVar41);
      uVar18 = ((uVar19 ^ uVar16) & uVar17 ^ uVar19) + uVar21 + uVar35 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar16 = uVar18 + 0x29ea1e76 + uVar28;
      uVar21 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar41 = uVar39 * 0x200 | uVar39 >> 0x17;
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar31 = (uVar29 ^ uVar37) +
               (uVar21 ^ uVar28) + uVar22 + ((uVar23 | uVar39) & uVar36 | uVar23 & uVar39);
      uVar19 = ((uVar17 ^ uVar20) & uVar18 ^ uVar20) + uVar21 + uVar37 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar39 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar17 = uVar19 + 0x53d43cec + uVar28;
      uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar23 = (uVar26 ^ uVar40) +
               (uVar17 ^ uVar28) + uVar36 + ((uVar31 | uVar23) & uVar41 | uVar31 & uVar23);
      uVar20 = ((uVar16 ^ uVar18) & uVar19 ^ uVar16) + uVar17 + uVar40 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar17 = uVar20 + 0xa7a879d8 + uVar28;
      uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar22 = (uVar32 ^ uVar25) +
               (uVar17 ^ uVar28) + uVar41 + ((uVar23 | uVar31) & uVar39 | uVar23 & uVar31);
      uVar16 = ((uVar21 ^ uVar19) & uVar20 ^ uVar21) + uVar17 + uVar32 + uVar16;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar19 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar17 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar28 = uVar17 ^ uVar24 ^ uVar27;
      uVar31 = uVar16 + 0x4f50f3b1 + uVar19;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar41 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar28 = (uVar31 ^ uVar19) +
               ((uVar22 | uVar23) & uVar36 | uVar22 & uVar23) + uVar39 +
               ((uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                (uVar34 << 7 | uVar34 >> 0x19) ^ uVar17 ^ uVar30 ^ uVar40 ^ uVar24 ^ uVar27);
      uVar17 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar23 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar21 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar31 + uVar30 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar34 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar27 = uVar34 ^ uVar35 ^ uVar14;
      uVar24 = uVar21 + 0x9ea1e762 + uVar17;
      uVar19 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar24 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar42 = (uVar19 ^ uVar17) +
               ((uVar28 | uVar22) & uVar41 | uVar28 & uVar22) + uVar36 +
               ((uVar27 << 0xf | uVar27 >> 0x11) ^ (uVar27 >> 9 | uVar27 << 0x17) ^
                (uVar42 << 7 | uVar42 >> 0x19) ^ uVar34 ^ uVar29 ^ uVar32 ^ uVar35 ^ uVar14);
      uVar17 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar14 = uVar42 * 0x1000 | uVar42 >> 0x14;
      uVar18 = ((uVar16 ^ uVar23) & uVar21 ^ uVar23) + uVar19 + uVar29 + uVar18;
      uVar27 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar34 = uVar27 ^ uVar37 ^ uVar15;
      uVar16 = uVar18 + 0x3d43cec5 + uVar14;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar23 = ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + uVar16 + uVar26 + uVar23;
      local_5c = local_5c ^ uVar42;
      param_1[1] = local_5c;
      *param_1 = *param_1 ^
                 (uVar16 ^ uVar14) +
                 ((uVar42 | uVar28) & uVar24 | uVar42 & uVar28) + uVar41 +
                 ((uVar34 << 0xf | uVar34 >> 0x11) ^ (uVar34 >> 9 | uVar34 << 0x17) ^
                  (uVar38 << 7 | uVar38 >> 0x19) ^ uVar27 ^ uVar26 ^ uVar30 ^ uVar37 ^ uVar15);
      local_68 = local_68 ^ (uVar28 * 0x200 | uVar28 >> 0x17);
      param_1[2] = local_68;
      local_54 = local_54 ^ uVar24;
      param_1[3] = local_54;
      local_50 = local_50 ^ uVar18;
      uVar33 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar33 ^
               uVar23;
      param_1[5] = local_50;
      local_60 = local_60 ^ (uVar21 >> 0xd | uVar21 << 0x13);
      param_1[6] = local_60;
      local_4c = local_4c ^ uVar17;
      param_1[4] = uVar33;
      param_1[7] = local_4c;
    } while (param_3 != 0);
  }
  return;
}

// sm3_final @ 14f7bb390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm3_final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x1a];
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    sm3_block_data_order(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_2 + 99) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_2 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_2 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x67) = *(undefined1 *)(param_2 + 8);
  sm3_block_data_order(param_2,puVar1,1);
  param_2[0x1a] = 0;
  OPENSSL_cleanse(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)((uint)uVar3 >> 0x18);
  param_1[1] = (char)((uint)uVar3 >> 0x10);
  param_1[2] = (char)((uint)uVar3 >> 8);
  param_1[3] = (char)uVar3;
  uVar3 = param_2[1];
  param_1[4] = (char)((uint)uVar3 >> 0x18);
  param_1[5] = (char)((uint)uVar3 >> 0x10);
  param_1[6] = (char)((uint)uVar3 >> 8);
  param_1[7] = (char)uVar3;
  uVar3 = param_2[2];
  param_1[8] = (char)((uint)uVar3 >> 0x18);
  param_1[9] = (char)((uint)uVar3 >> 0x10);
  param_1[10] = (char)((uint)uVar3 >> 8);
  param_1[0xb] = (char)uVar3;
  uVar3 = param_2[3];
  param_1[0xc] = (char)((uint)uVar3 >> 0x18);
  param_1[0xd] = (char)((uint)uVar3 >> 0x10);
  param_1[0xe] = (char)((uint)uVar3 >> 8);
  param_1[0xf] = (char)uVar3;
  uVar3 = param_2[4];
  param_1[0x10] = (char)((uint)uVar3 >> 0x18);
  param_1[0x11] = (char)((uint)uVar3 >> 0x10);
  param_1[0x12] = (char)((uint)uVar3 >> 8);
  param_1[0x13] = (char)uVar3;
  uVar3 = param_2[5];
  param_1[0x14] = (char)((uint)uVar3 >> 0x18);
  param_1[0x15] = (char)((uint)uVar3 >> 0x10);
  param_1[0x16] = (char)((uint)uVar3 >> 8);
  param_1[0x17] = (char)uVar3;
  uVar3 = param_2[6];
  param_1[0x18] = (char)((uint)uVar3 >> 0x18);
  param_1[0x19] = (char)((uint)uVar3 >> 0x10);
  param_1[0x1a] = (char)((uint)uVar3 >> 8);
  param_1[0x1b] = (char)uVar3;
  uVar3 = param_2[7];
  param_1[0x1c] = (char)((uint)uVar3 >> 0x18);
  param_1[0x1d] = (char)((uint)uVar3 >> 0x10);
  param_1[0x1e] = (char)((uint)uVar3 >> 8);
  param_1[0x1f] = (char)uVar3;
  return 1;
}

// sm3_init @ 14f7bb580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm3_init(undefined4 *param_1)

{
  memset(param_1,0,0x6c);
  *param_1 = 0x7380166f;
  param_1[1] = 0x4914b2b9;
  param_1[2] = 0x172442d7;
  param_1[3] = 0xda8a0600;
  param_1[4] = 0xa96f30bc;
  param_1[5] = 0x163138aa;
  param_1[6] = 0xe38dee4d;
  param_1[7] = 0xb0fb0e4e;
  return 1;
}

// sm3_transform @ 14f7bb5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sm3_transform(undefined8 param_1,undefined8 param_2)

{
  sm3_block_data_order(param_1,param_2,1);
  return;
}

// sm3_update @ 14f7bb610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm3_update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x20) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      sm3_block_data_order(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      sm3_block_data_order(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}

