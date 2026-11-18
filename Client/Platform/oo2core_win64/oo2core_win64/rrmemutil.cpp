// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 11

// rrAlignUpPointer<unsigned_char_const_> @ 14f32efb0

uchar * __cdecl oo2::rrAlignUpPointer<unsigned_char_const_>(uchar *param_1,long64 param_2)

{
  return (uchar *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// rrAlignUp64 @ 14f32efd0

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f32eff0

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrIsMemset @ 14f32f020

int __cdecl oo2::rrIsMemset(uchar *param_1,long64 param_2)

{
  uchar *puVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar *puVar18;
  longlong lVar19;
  uchar *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (param_2 < 0x11) {
    lVar19 = 1;
    if (param_2 < 2) {
      return 1;
    }
    while (param_1[lVar19] == *param_1) {
      lVar19 = lVar19 + 1;
      if (param_2 <= lVar19) {
        return 1;
      }
    }
  }
  else {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    uVar6 = param_1[4];
    uVar7 = param_1[5];
    uVar8 = param_1[6];
    uVar9 = param_1[7];
    uVar10 = param_1[8];
    uVar11 = param_1[9];
    uVar12 = param_1[10];
    uVar13 = param_1[0xb];
    uVar14 = param_1[0xc];
    uVar15 = param_1[0xd];
    uVar16 = param_1[0xe];
    uVar17 = param_1[0xf];
    auVar21[0] = -(param_1[1] == uVar2);
    auVar21[1] = -(param_1[2] == uVar3);
    auVar21[2] = -(param_1[3] == uVar4);
    auVar21[3] = -(param_1[4] == uVar5);
    auVar21[4] = -(param_1[5] == uVar6);
    auVar21[5] = -(param_1[6] == uVar7);
    auVar21[6] = -(param_1[7] == uVar8);
    auVar21[7] = -(param_1[8] == uVar9);
    auVar21[8] = -(param_1[9] == uVar10);
    auVar21[9] = -(param_1[10] == uVar11);
    auVar21[10] = -(param_1[0xb] == uVar12);
    auVar21[0xb] = -(param_1[0xc] == uVar13);
    auVar21[0xc] = -(param_1[0xd] == uVar14);
    auVar21[0xd] = -(param_1[0xe] == uVar15);
    auVar21[0xe] = -(param_1[0xf] == uVar16);
    auVar21[0xf] = -(param_1[0x10] == uVar17);
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
                ) == 0xffff) {
      puVar1 = param_1 + param_2;
      puVar20 = (uchar *)((ulonglong)(param_1 + 0x11) & 0xfffffffffffffff0);
      puVar18 = puVar20;
      while( true ) {
        puVar18 = puVar18 + 0x10;
        if (puVar1 <= puVar18) {
          auVar23[0] = -(puVar1[-0x10] == uVar2);
          auVar23[1] = -(puVar1[-0xf] == uVar3);
          auVar23[2] = -(puVar1[-0xe] == uVar4);
          auVar23[3] = -(puVar1[-0xd] == uVar5);
          auVar23[4] = -(puVar1[-0xc] == uVar6);
          auVar23[5] = -(puVar1[-0xb] == uVar7);
          auVar23[6] = -(puVar1[-10] == uVar8);
          auVar23[7] = -(puVar1[-9] == uVar9);
          auVar23[8] = -(puVar1[-8] == uVar10);
          auVar23[9] = -(puVar1[-7] == uVar11);
          auVar23[10] = -(puVar1[-6] == uVar12);
          auVar23[0xb] = -(puVar1[-5] == uVar13);
          auVar23[0xc] = -(puVar1[-4] == uVar14);
          auVar23[0xd] = -(puVar1[-3] == uVar15);
          auVar23[0xe] = -(puVar1[-2] == uVar16);
          auVar23[0xf] = -(puVar1[-1] == uVar17);
          return (uint)((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff);
        }
        auVar22[0] = -(uVar2 == *puVar20);
        auVar22[1] = -(uVar3 == puVar20[1]);
        auVar22[2] = -(uVar4 == puVar20[2]);
        auVar22[3] = -(uVar5 == puVar20[3]);
        auVar22[4] = -(uVar6 == puVar20[4]);
        auVar22[5] = -(uVar7 == puVar20[5]);
        auVar22[6] = -(uVar8 == puVar20[6]);
        auVar22[7] = -(uVar9 == puVar20[7]);
        auVar22[8] = -(uVar10 == puVar20[8]);
        auVar22[9] = -(uVar11 == puVar20[9]);
        auVar22[10] = -(uVar12 == puVar20[10]);
        auVar22[0xb] = -(uVar13 == puVar20[0xb]);
        auVar22[0xc] = -(uVar14 == puVar20[0xc]);
        auVar22[0xd] = -(uVar15 == puVar20[0xd]);
        auVar22[0xe] = -(uVar16 == puVar20[0xe]);
        auVar22[0xf] = -(uVar17 == puVar20[0xf]);
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar22[0xf] >> 7) << 0xf) != 0xffff) break;
        puVar20 = puVar20 + 0x10;
      }
      return 0;
    }
  }
  return 0;
}

// rrIsMemset_Fast @ 14f32f0e0

int __cdecl oo2::rrIsMemset_Fast(uchar *param_1,long64 param_2)

{
  uchar *puVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar *puVar18;
  longlong lVar19;
  int iVar20;
  uchar *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  if (param_2 < 0x11) {
    iVar20 = 1;
    lVar19 = 1;
    if (1 < param_2) {
      while (param_1[lVar19] == *param_1) {
        lVar19 = lVar19 + 1;
        if (param_2 <= lVar19) {
          return 1;
        }
      }
      iVar20 = 0;
    }
    return iVar20;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = param_1[7];
  uVar10 = param_1[8];
  uVar11 = param_1[9];
  uVar12 = param_1[10];
  uVar13 = param_1[0xb];
  uVar14 = param_1[0xc];
  uVar15 = param_1[0xd];
  uVar16 = param_1[0xe];
  uVar17 = param_1[0xf];
  auVar22[0] = -(param_1[1] == uVar2);
  auVar22[1] = -(param_1[2] == uVar3);
  auVar22[2] = -(param_1[3] == uVar4);
  auVar22[3] = -(param_1[4] == uVar5);
  auVar22[4] = -(param_1[5] == uVar6);
  auVar22[5] = -(param_1[6] == uVar7);
  auVar22[6] = -(param_1[7] == uVar8);
  auVar22[7] = -(param_1[8] == uVar9);
  auVar22[8] = -(param_1[9] == uVar10);
  auVar22[9] = -(param_1[10] == uVar11);
  auVar22[10] = -(param_1[0xb] == uVar12);
  auVar22[0xb] = -(param_1[0xc] == uVar13);
  auVar22[0xc] = -(param_1[0xd] == uVar14);
  auVar22[0xd] = -(param_1[0xe] == uVar15);
  auVar22[0xe] = -(param_1[0xf] == uVar16);
  auVar22[0xf] = -(param_1[0x10] == uVar17);
  if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf)
      == 0xffff) {
    puVar1 = param_1 + param_2;
    puVar21 = (uchar *)((ulonglong)(param_1 + 0x11) & 0xfffffffffffffff0);
    puVar18 = puVar21;
    while (puVar18 = puVar18 + 0x10, puVar18 < puVar1) {
      auVar23[0] = -(uVar2 == *puVar21);
      auVar23[1] = -(uVar3 == puVar21[1]);
      auVar23[2] = -(uVar4 == puVar21[2]);
      auVar23[3] = -(uVar5 == puVar21[3]);
      auVar23[4] = -(uVar6 == puVar21[4]);
      auVar23[5] = -(uVar7 == puVar21[5]);
      auVar23[6] = -(uVar8 == puVar21[6]);
      auVar23[7] = -(uVar9 == puVar21[7]);
      auVar23[8] = -(uVar10 == puVar21[8]);
      auVar23[9] = -(uVar11 == puVar21[9]);
      auVar23[10] = -(uVar12 == puVar21[10]);
      auVar23[0xb] = -(uVar13 == puVar21[0xb]);
      auVar23[0xc] = -(uVar14 == puVar21[0xc]);
      auVar23[0xd] = -(uVar15 == puVar21[0xd]);
      auVar23[0xe] = -(uVar16 == puVar21[0xe]);
      auVar23[0xf] = -(uVar17 == puVar21[0xf]);
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar23[0xf] >> 7) << 0xf) != 0xffff) {
        return 0;
      }
      puVar21 = puVar21 + 0x10;
    }
    auVar24[0] = -(puVar1[-0x10] == uVar2);
    auVar24[1] = -(puVar1[-0xf] == uVar3);
    auVar24[2] = -(puVar1[-0xe] == uVar4);
    auVar24[3] = -(puVar1[-0xd] == uVar5);
    auVar24[4] = -(puVar1[-0xc] == uVar6);
    auVar24[5] = -(puVar1[-0xb] == uVar7);
    auVar24[6] = -(puVar1[-10] == uVar8);
    auVar24[7] = -(puVar1[-9] == uVar9);
    auVar24[8] = -(puVar1[-8] == uVar10);
    auVar24[9] = -(puVar1[-7] == uVar11);
    auVar24[10] = -(puVar1[-6] == uVar12);
    auVar24[0xb] = -(puVar1[-5] == uVar13);
    auVar24[0xc] = -(puVar1[-4] == uVar14);
    auVar24[0xd] = -(puVar1[-3] == uVar15);
    auVar24[0xe] = -(puVar1[-2] == uVar16);
    auVar24[0xf] = -(puVar1[-1] == uVar17);
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 1;
    }
  }
  return 0;
}

// rrIsMemset_Simple @ 14f32f1a0

int __cdecl oo2::rrIsMemset_Simple(uchar *param_1,long64 param_2)

{
  longlong lVar1;
  
  lVar1 = 1;
  if (1 < param_2) {
    do {
      if (param_1[lVar1] != *param_1) {
        return 0;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_2);
  }
  return 1;
}

// rrMemCpyLarge @ 14f32f1d0

void __cdecl oo2::rrMemCpyLarge(void *param_1,void *param_2,long64 param_3)

{
  memcpy(param_1,param_2,param_3);
  return;
}

// rrMemSet32_Aligned @ 14f32f200

void __cdecl oo2::rrMemSet32_Aligned(void *param_1,uint param_2,long64 param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = param_3 >> 7;
  lVar3 = param_3 + lVar1 * -0x80;
  for (; 0 < lVar1; lVar1 = lVar1 + -1) {
    *(uint *)param_1 = param_2;
    *(uint *)((longlong)param_1 + 4) = param_2;
    *(uint *)((longlong)param_1 + 8) = param_2;
    *(uint *)((longlong)param_1 + 0xc) = param_2;
    *(uint *)((longlong)param_1 + 0x10) = param_2;
    *(uint *)((longlong)param_1 + 0x14) = param_2;
    *(uint *)((longlong)param_1 + 0x18) = param_2;
    *(uint *)((longlong)param_1 + 0x1c) = param_2;
    *(uint *)((longlong)param_1 + 0x20) = param_2;
    *(uint *)((longlong)param_1 + 0x24) = param_2;
    *(uint *)((longlong)param_1 + 0x28) = param_2;
    *(uint *)((longlong)param_1 + 0x2c) = param_2;
    *(uint *)((longlong)param_1 + 0x30) = param_2;
    *(uint *)((longlong)param_1 + 0x34) = param_2;
    *(uint *)((longlong)param_1 + 0x38) = param_2;
    *(uint *)((longlong)param_1 + 0x3c) = param_2;
    *(uint *)((longlong)param_1 + 0x40) = param_2;
    *(uint *)((longlong)param_1 + 0x44) = param_2;
    *(uint *)((longlong)param_1 + 0x48) = param_2;
    *(uint *)((longlong)param_1 + 0x4c) = param_2;
    *(uint *)((longlong)param_1 + 0x50) = param_2;
    *(uint *)((longlong)param_1 + 0x54) = param_2;
    *(uint *)((longlong)param_1 + 0x58) = param_2;
    *(uint *)((longlong)param_1 + 0x5c) = param_2;
    *(uint *)((longlong)param_1 + 0x60) = param_2;
    *(uint *)((longlong)param_1 + 100) = param_2;
    *(uint *)((longlong)param_1 + 0x68) = param_2;
    *(uint *)((longlong)param_1 + 0x6c) = param_2;
    *(uint *)((longlong)param_1 + 0x70) = param_2;
    *(uint *)((longlong)param_1 + 0x74) = param_2;
    *(uint *)((longlong)param_1 + 0x78) = param_2;
    *(uint *)((longlong)param_1 + 0x7c) = param_2;
    param_1 = (void *)((longlong)param_1 + 0x80);
  }
  uVar4 = lVar3 >> 4;
  if (uVar4 != 0) {
    puVar2 = param_1;
    for (lVar1 = (uVar4 & 0xfffffffffffffff) << 2; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = param_2;
      puVar2 = puVar2 + 1;
    }
    param_1 = (void *)((longlong)param_1 + uVar4 * 4 * 4);
  }
  lVar1 = (longlong)(lVar3 + uVar4 * -0x10) >> 2;
  if (lVar1 != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(uint *)param_1 = param_2;
      param_1 = (uint *)((longlong)param_1 + 4);
    }
  }
  return;
}

// rrMemSet64_Aligned @ 14f32f320

void __cdecl oo2::rrMemSet64_Aligned(void *param_1,ulong64 param_2,long64 param_3)

{
  longlong lVar1;
  ulong64 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = param_3 >> 7;
  lVar3 = param_3 + lVar1 * -0x80;
  for (; 0 < lVar1; lVar1 = lVar1 + -1) {
    *(ulong64 *)param_1 = param_2;
    *(ulong64 *)((longlong)param_1 + 8) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x10) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x18) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x20) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x28) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x30) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x38) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x40) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x48) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x50) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x58) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x60) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x68) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x70) = param_2;
    *(ulong64 *)((longlong)param_1 + 0x78) = param_2;
    param_1 = (void *)((longlong)param_1 + 0x80);
  }
  uVar4 = lVar3 >> 5;
  if (uVar4 != 0) {
    puVar2 = param_1;
    for (lVar1 = (uVar4 & 0x7ffffffffffffff) << 2; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = param_2;
      puVar2 = puVar2 + 1;
    }
    param_1 = (void *)((longlong)param_1 + uVar4 * 4 * 8);
  }
  lVar1 = (longlong)(lVar3 + uVar4 * -0x20) >> 3;
  if (lVar1 != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(ulong64 *)param_1 = param_2;
      param_1 = (ulong64 *)((longlong)param_1 + 8);
    }
  }
  return;
}

// rrMemSetLarge @ 14f32f400

void __cdecl oo2::rrMemSetLarge(void *param_1,int param_2,long64 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fa35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset(param_1,param_2,param_3);
  return;
}

// rrMemSetZero @ 14f32f410

void __cdecl oo2::rrMemSetZero(void *param_1,long64 param_2)

{
  memset(param_1,0,param_2);
  return;
}

