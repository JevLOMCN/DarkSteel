// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ToString @ 145eba100

void __thiscall FSHAHash::ToString(FSHAHash *this,wchar_t *param_1,bool param_2)

{
  byte bVar1;
  short sVar2;
  uchar *puVar3;
  short sVar4;
  uint uVar5;
  byte bVar6;
  wchar_t *pwVar7;
  
  uVar5 = 0;
  pwVar7 = param_1 + 2;
  puVar3 = this->Hash + 2;
  do {
    bVar1 = ((FSHAHash *)(puVar3 + -2))->Hash[0] >> 4;
    sVar2 = 0x37;
    if (bVar1 < 10) {
      sVar2 = 0x30;
    }
    bVar6 = ((FSHAHash *)(puVar3 + -2))->Hash[0] & 0xf;
    pwVar7[-2] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = 0x30;
    }
    pwVar7[-1] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[-1] >> 4;
    sVar2 = 0x37;
    sVar4 = 0x30;
    if (bVar1 < 10) {
      sVar2 = 0x30;
    }
    bVar6 = puVar3[-1] & 0xf;
    *pwVar7 = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[1] = sVar2 + (ushort)bVar6;
    bVar1 = *puVar3 >> 4;
    sVar2 = 0x37;
    if (bVar1 < 10) {
      sVar2 = sVar4;
    }
    bVar6 = *puVar3 & 0xf;
    pwVar7[2] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[3] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[1] >> 4;
    sVar2 = 0x37;
    sVar4 = 0x30;
    if (bVar1 < 10) {
      sVar2 = 0x30;
    }
    bVar6 = puVar3[1] & 0xf;
    pwVar7[4] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[5] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[2] >> 4;
    sVar2 = 0x37;
    if (bVar1 < 10) {
      sVar2 = sVar4;
    }
    bVar6 = puVar3[2] & 0xf;
    pwVar7[6] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[7] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[3] >> 4;
    sVar2 = 0x37;
    if (bVar1 < 10) {
      sVar2 = sVar4;
    }
    bVar6 = puVar3[3] & 0xf;
    pwVar7[8] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[9] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[4] >> 4;
    sVar2 = 0x37;
    if (bVar1 < 10) {
      sVar2 = sVar4;
    }
    bVar6 = puVar3[4] & 0xf;
    pwVar7[10] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[0xb] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[5] >> 4;
    sVar2 = 0x37;
    sVar4 = 0x30;
    if (bVar1 < 10) {
      sVar2 = 0x30;
    }
    bVar6 = puVar3[5] & 0xf;
    pwVar7[0xc] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[0xd] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[6] >> 4;
    sVar2 = 0x37;
    if (bVar1 < 10) {
      sVar2 = sVar4;
    }
    bVar6 = puVar3[6] & 0xf;
    pwVar7[0xe] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[0xf] = sVar2 + (ushort)bVar6;
    bVar1 = puVar3[7] >> 4;
    sVar2 = 0x37;
    if (bVar1 < 10) {
      sVar2 = sVar4;
    }
    bVar6 = puVar3[7] & 0xf;
    pwVar7[0x10] = sVar2 + (ushort)bVar1;
    sVar2 = 0x37;
    if (bVar6 < 10) {
      sVar2 = sVar4;
    }
    pwVar7[0x11] = sVar2 + (ushort)bVar6;
    uVar5 = uVar5 + 10;
    pwVar7 = pwVar7 + 0x14;
    puVar3 = puVar3 + 10;
  } while (uVar5 < 0x14);
  if (param_2) {
    param_1[0x28] = L'\0';
  }
  return;
}

