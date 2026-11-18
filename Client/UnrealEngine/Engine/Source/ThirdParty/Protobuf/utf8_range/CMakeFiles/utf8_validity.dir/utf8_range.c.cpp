// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 4

// utf8_range_IsValid @ 14fbaee60

bool utf8_range_IsValid(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    puVar1 = (ulonglong *)((longlong)param_1 + param_2);
    for (; (7 < param_2 && ((*param_1 & 0x8080808080808080) == 0)); param_1 = param_1 + 1) {
      param_2 = param_2 + -8;
    }
    for (; (param_1 < puVar1 && ((byte)*param_1 < 0x80));
        param_1 = (ulonglong *)((longlong)param_1 + 1)) {
    }
    lVar2 = FUN_14fbaf070(param_1,puVar1,0);
    return lVar2 != 0;
  }
  return true;
}

// utf8_range_ValidPrefix @ 14fbaef40

byte * utf8_range_ValidPrefix(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar1 = (ulonglong *)((longlong)param_1 + param_2);
    for (puVar3 = param_1; (7 < param_2 && ((*puVar3 & 0x8080808080808080) == 0));
        puVar3 = puVar3 + 1) {
      param_2 = param_2 + -8;
    }
    for (; (puVar3 < puVar1 && ((byte)*puVar3 < 0x80)); puVar3 = (ulonglong *)((longlong)puVar3 + 1)
        ) {
    }
    lVar2 = FUN_14fbaf070(puVar3,puVar1,1);
    return (byte *)((longlong)puVar3 + (lVar2 - (longlong)param_1));
  }
  return (byte *)0x0;
}

// FUN_14fbaefd0 @ 14fbaefd0

longlong FUN_14fbaefd0(ulonglong *param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    puVar1 = (ulonglong *)((longlong)param_1 + param_2);
    for (puVar3 = param_1; (7 < param_2 && ((*puVar3 & 0x8080808080808080) == 0));
        puVar3 = puVar3 + 1) {
      param_2 = param_2 + -8;
    }
    for (; (puVar3 < puVar1 && ((byte)*puVar3 < 0x80)); puVar3 = (ulonglong *)((longlong)puVar3 + 1)
        ) {
    }
    lVar2 = FUN_14fbaf070(puVar3,puVar1,param_3);
    lVar4 = (longlong)puVar3 - (longlong)param_1;
    if (param_3 == 0) {
      lVar4 = 0;
    }
    return lVar2 + lVar4;
  }
  return (longlong)(1 - param_3);
}

// FUN_14fbaf070 @ 14fbaf070

longlong FUN_14fbaf070(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  
  lVar6 = 0;
  lVar4 = lVar6;
  pbVar1 = param_1;
  do {
    if (param_2 <= pbVar1) {
      lVar6 = lVar4 + lVar6;
      if (param_3 == 0) {
        lVar6 = lVar4;
      }
      return lVar6 + (1 - param_3);
    }
    lVar5 = lVar6 + lVar4;
    if (param_3 == 0) {
      lVar5 = lVar4;
    }
    param_1 = param_1 + lVar6;
    uVar7 = (longlong)param_2 - (longlong)param_1;
    bVar2 = *param_1;
    lVar6 = 1;
    if (0x7f < bVar2) {
      if (((uVar7 < 2) || (0x1d < (byte)(bVar2 + 0x3e))) || (-0x41 < (char)param_1[1])) {
        if (uVar7 < 3) {
          return lVar5;
        }
        bVar3 = param_1[1];
        if (-0x41 < (char)bVar3) {
          return lVar5;
        }
        if (-0x41 < (char)param_1[2]) {
          return lVar5;
        }
        if (bVar2 == 0xe0) {
          if (bVar3 < 0xa0) {
LAB_14fbaf14a:
            if ((uVar7 < 4) || (-0x41 < (char)param_1[3])) {
              return lVar5;
            }
            if (bVar2 == 0xf0) {
              if (bVar3 < 0x90) {
                return lVar5;
              }
            }
            else if (2 < (byte)(bVar2 + 0xf)) {
              if (bVar2 != 0xf4) {
                return lVar5;
              }
              if (0x8f < bVar3) {
                return lVar5;
              }
            }
            lVar6 = 4;
            goto LAB_14fbaf107;
          }
        }
        else if (0xb < (byte)(bVar2 + 0x1f)) {
          if (bVar2 == 0xed) {
            bVar8 = bVar3 < 0x9f;
            bVar9 = bVar3 == 0x9f;
          }
          else {
            bVar8 = bVar2 == 0xee;
            bVar9 = bVar2 == 0xef;
          }
          if (!bVar8 && !bVar9) goto LAB_14fbaf14a;
        }
        lVar6 = 3;
      }
      else {
        lVar6 = 2;
      }
    }
LAB_14fbaf107:
    pbVar1 = param_1 + lVar6;
    lVar4 = lVar5;
  } while( true );
}

