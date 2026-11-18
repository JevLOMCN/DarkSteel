// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// CountSetBits @ 1441d7a10

uint __cdecl
UE::Net::FNetBitArrayHelper::CountSetBits(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (param_2 <= param_3 || param_4 == 0) {
    return 0;
  }
  uVar5 = -1 << ((byte)param_3 & 0x1f);
  if (((ulonglong)param_4 + (ulonglong)param_3) - 1 < (ulonglong)param_2 - 1) {
    param_2 = (uint)((ulonglong)param_4 + (ulonglong)param_3);
  }
  uVar4 = param_2 - 1 >> 5;
  for (uVar6 = param_3 >> 5; uVar6 <= uVar4; uVar6 = uVar6 + 1) {
    uVar1 = 0xffffffff;
    if (uVar6 == uVar4) {
      uVar1 = 0xffffffff >> (~(byte)(param_2 - 1) & 0x1f);
    }
    uVar1 = uVar1 & uVar5;
    uVar5 = 0xffffffff;
    uVar1 = param_1[uVar6] & uVar1;
    uVar2 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    uVar3 = uVar3 + (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  }
  return uVar3;
}

// GetSetBitIndices @ 1441dcf60

uint __cdecl
UE::Net::FNetBitArrayHelper::GetSetBitIndices
          (uint *param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if (param_6 == 0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<945220863312003106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\NetBitArray.cpp"
                       ,0x22,"OutIndicesCapacity > 0");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (param_4 == 0) {
    bVar4 = true;
  }
  if (bVar4 || param_2 <= param_3) {
    uVar5 = 0;
  }
  else {
    if (((ulonglong)param_3 + (ulonglong)param_4) - 1 < (ulonglong)param_2 - 1) {
      param_2 = (uint)((ulonglong)param_3 + (ulonglong)param_4);
    }
    uVar9 = param_2 - 1;
    uVar5 = param_3 >> 5;
    uVar10 = 0;
    uVar11 = param_3 & 0xffffffe0;
    bVar4 = param_6 != 0;
    if (bVar4 && uVar11 <= uVar9) {
      do {
        uVar6 = param_1[uVar5];
        bVar3 = false;
        if (uVar6 != 0) {
          bVar3 = bVar4;
        }
        if (bVar3) {
          do {
            uVar8 = -uVar6 & uVar6;
            uVar6 = uVar6 & uVar6 - 1;
            iVar1 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
              }
            }
            iVar7 = 0x20;
            if (uVar8 != 0) {
              iVar7 = iVar1;
            }
            uVar8 = iVar7 + uVar11;
            param_5[uVar10] = uVar8;
            uVar8 = (int)uVar10 + (uint)(uVar8 <= uVar9 && param_3 <= uVar8);
            uVar10 = (ulonglong)uVar8;
          } while (uVar6 != 0 && uVar8 < param_6);
        }
        uVar11 = uVar11 + 0x20;
        uVar5 = uVar5 + 1;
        bVar4 = (uint)uVar10 < param_6;
      } while (bVar4 && uVar11 <= uVar9);
    }
    uVar5 = (uint)uVar10;
  }
  return uVar5;
}

