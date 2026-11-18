// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// RC2_set_key @ 14f73ec20

void RC2_set_key(undefined1 *param_1,int param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char *pcVar7;
  byte *pbVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint *puVar13;
  int iVar14;
  
  *param_1 = 0;
  iVar10 = 0x80;
  if (param_2 < 0x81) {
    iVar10 = param_2;
  }
  lVar9 = (longlong)iVar10;
  iVar11 = 0x400;
  if (0 < param_4) {
    iVar11 = param_4;
  }
  if (0x400 < iVar11) {
    iVar11 = 0x400;
  }
  if (0 < iVar10) {
    puVar5 = param_1;
    lVar6 = lVar9;
    do {
      *puVar5 = puVar5[param_3 - (longlong)param_1];
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  cVar12 = param_1[iVar10 + -1];
  if (lVar9 < 0x80) {
    lVar6 = 0x80 - lVar9;
    pcVar7 = param_1 + lVar9;
    do {
      cVar12 = (&DAT_1534bc190)[(byte)(pcVar7[-lVar9] + cVar12)];
      *pcVar7 = cVar12;
      lVar6 = lVar6 + -1;
      pcVar7 = pcVar7 + 1;
    } while (lVar6 != 0);
  }
  iVar14 = iVar11 + 7 >> 3;
  iVar10 = 0x80 - iVar14;
  lVar9 = (longlong)iVar10;
  pbVar8 = param_1 + lVar9;
  bVar2 = (&DAT_1534bc190)[(ulonglong)(uint)(0xff >> (-(char)iVar11 & 7U)) & (ulonglong)*pbVar8];
  *pbVar8 = bVar2;
  if (iVar10 != 0) {
    do {
      pbVar1 = pbVar8 + (longlong)iVar14 + -1;
      pbVar8 = pbVar8 + -1;
      bVar2 = (&DAT_1534bc190)[*pbVar1 ^ bVar2];
      *pbVar8 = bVar2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = 0x40;
  puVar4 = (ushort *)(param_1 + 0x7e);
  puVar13 = (uint *)(param_1 + 0xfc);
  do {
    uVar3 = *puVar4;
    puVar4 = puVar4 + -1;
    *puVar13 = (uint)uVar3;
    lVar9 = lVar9 + -1;
    puVar13 = puVar13 + -1;
  } while (lVar9 != 0);
  return;
}

