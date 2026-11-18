// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// StrCrc32<wchar_t> @ 14157c810

uint __cdecl FCrc::StrCrc32<wchar_t>(wchar_t *param_1,uint param_2)

{
  wchar_t wVar1;
  uint uVar2;
  
  uVar2 = ~param_2;
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    param_1 = param_1 + 1;
    uVar2 = CRCTablesSB8[1][(ulonglong)(uVar2 >> 0x10) & 0xff] ^
            CRCTablesSB8[2][((ulonglong)(ushort)wVar1 ^ (ulonglong)uVar2) >> 8 & 0xff] ^
            CRCTablesSB8[0][uVar2 >> 0x18] ^
            CRCTablesSB8[3][((ulonglong)(ushort)wVar1 ^ (ulonglong)uVar2) & 0xff];
    wVar1 = *param_1;
  }
  return ~uVar2;
}

// Strihash_DEPRECATED<wchar_t> @ 14157c890

uint __cdecl FCrc::Strihash_DEPRECATED<wchar_t>(int param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_1;
  if ((CRCTable_DEPRECATED[1] == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xc6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = 0;
  if (0 < param_1) {
    do {
      wVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar5 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
      uVar4 = uVar4 >> 8 ^ CRCTable_DEPRECATED[(byte)((byte)uVar4 ^ (byte)uVar5)];
      uVar4 = uVar4 >> 8 ^ CRCTable_DEPRECATED[(uVar5 >> 8 ^ uVar4) & 0xff];
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return uVar4;
}

// Init @ 1418780d0

void __cdecl FCrc::Init(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  uint (*pauVar9) [256];
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  iVar6 = 0;
  puVar8 = CRCTable_DEPRECATED;
  uVar5 = 0;
  lVar11 = 0x100;
  do {
    iVar10 = 8;
    uVar4 = uVar5 << 0x18;
    do {
      uVar2 = uVar4 * 2;
      bVar12 = -1 < (int)uVar4;
      uVar4 = uVar2 ^ 0x4c11db7;
      if (bVar12) {
        uVar4 = uVar2;
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (uVar4 != *puVar8) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrcCheck == CRCTable_DEPRECATED[iCRC]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1b7,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 < 0x100);
  uVar5 = 0;
  pauVar9 = CRCTablesSB8;
  do {
    iVar10 = 8;
    uVar4 = uVar5;
    do {
      uVar3 = uVar4 >> 1;
      uVar2 = uVar4 & 1;
      uVar4 = uVar3 ^ 0xedb88320;
      if (uVar2 == 0) {
        uVar4 = uVar3;
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if ((*pauVar9)[0] != uVar4) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[0][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1c4,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 + 1;
    pauVar9 = (uint (*) [256])((longlong)pauVar9 + 4);
  } while (uVar5 != 0x100);
  puVar8 = CRCTablesSB8[2];
  lVar7 = 0x100;
  do {
    uVar5 = (*(uint (*) [256])(puVar8 + -0x200))[0] >> 8 ^
            CRCTablesSB8[0][(*(uint (*) [256])(puVar8 + -0x200))[0] & 0xff];
    if ((*(uint (*) [256])(puVar8 + -0x100))[0] != uVar5) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[j][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1cd,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 >> 8 ^ CRCTablesSB8[0][uVar5 & 0xff];
    if (*puVar8 != uVar5) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[j][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1cd,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 >> 8 ^ CRCTablesSB8[0][uVar5 & 0xff];
    if ((*(uint (*) [256])(puVar8 + 0x100))[0] != uVar5) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[j][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1cd,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 >> 8 ^ CRCTablesSB8[0][uVar5 & 0xff];
    if ((*(uint (*) [256])(puVar8 + 0x200))[0] != uVar5) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[j][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1cd,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 >> 8 ^ CRCTablesSB8[0][uVar5 & 0xff];
    if ((*(uint (*) [256])(puVar8 + 0x300))[0] != uVar5) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[j][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1cd,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 >> 8 ^ CRCTablesSB8[0][uVar5 & 0xff];
    if ((*(uint (*) [256])(puVar8 + 0x400))[0] != uVar5) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[j][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1cd,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((*(uint (*) [256])(puVar8 + 0x500))[0] != (uVar5 >> 8 ^ CRCTablesSB8[0][uVar5 & 0xff])) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8[j][i] == CRC",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1cd,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pauVar9 = CRCTablesSB8_DEPRECATED;
  do {
    iVar10 = 8;
    uVar5 = iVar6 << 0x18;
    do {
      uVar4 = uVar5 * 2;
      bVar12 = -1 < (int)uVar5;
      uVar5 = uVar4 ^ 0x4c11db7;
      if (bVar12) {
        uVar5 = uVar4;
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if ((*pauVar9)[0] !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[0][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1d9,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar6 = iVar6 + 1;
    pauVar9 = (uint (*) [256])((longlong)pauVar9 + 4);
  } while (iVar6 != 0x100);
  puVar8 = CRCTablesSB8_DEPRECATED[2];
  do {
    uVar5 = (*(uint (*) [256])(puVar8 + -0x200))[0];
    uVar4 = CRCTablesSB8_DEPRECATED[0][uVar5 & 0xff];
    uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
            (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8) << 8;
    if ((*(uint (*) [256])(puVar8 + -0x100))[0] !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (uVar4 >> 0x18) << 0x18))
    {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[Table][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1e2,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = CRCTablesSB8_DEPRECATED[0][uVar5 >> 0x18];
    uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
            uVar5 << 8;
    if (*puVar8 !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (uVar4 >> 0x18) << 0x18))
    {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[Table][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1e2,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = CRCTablesSB8_DEPRECATED[0][uVar5 >> 0x18];
    uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
            uVar5 << 8;
    if ((*(uint (*) [256])(puVar8 + 0x100))[0] !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (uVar4 >> 0x18) << 0x18))
    {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[Table][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1e2,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = CRCTablesSB8_DEPRECATED[0][uVar5 >> 0x18];
    uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
            uVar5 << 8;
    if ((*(uint (*) [256])(puVar8 + 0x200))[0] !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (uVar4 >> 0x18) << 0x18))
    {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[Table][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1e2,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = CRCTablesSB8_DEPRECATED[0][uVar5 >> 0x18];
    uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
            uVar5 << 8;
    if ((*(uint (*) [256])(puVar8 + 0x300))[0] !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (uVar4 >> 0x18) << 0x18))
    {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[Table][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1e2,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = CRCTablesSB8_DEPRECATED[0][uVar5 >> 0x18];
    uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
            uVar5 << 8;
    if ((*(uint (*) [256])(puVar8 + 0x400))[0] !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | (uVar4 >> 0x18) << 0x18))
    {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[Table][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1e2,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = CRCTablesSB8_DEPRECATED[0][uVar5 >> 0x18];
    uVar5 = ((uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^ uVar5 << 8;
    if ((*(uint (*) [256])(puVar8 + 0x500))[0] !=
        (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar4 & 0xff000000)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CRCTablesSB8_DEPRECATED[Table][Cell] == BYTESWAP_ORDER32(CRC)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Crc.cpp"
                          ,0x1e2,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar8 = puVar8 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}

// MemCrc_DEPRECATED @ 14187db00

uint __cdecl FCrc::MemCrc_DEPRECATED(void *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = ((int)param_1 + 3U & 0xfffffffc) - (int)param_1;
  uVar3 = ~(param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18)
  ;
  if (iVar4 < param_2) {
    iVar5 = param_2 - iVar4;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar1 = *(uint *)param_1;
      param_1 = (void *)((longlong)param_1 + 1);
      uVar3 = uVar3 >> 8 ^
              CRCTablesSB8_DEPRECATED[0][(ulonglong)(uVar3 & 0xff) ^ (ulonglong)(byte)uVar1];
    }
    uVar2 = iVar5 >> 0x1f & 7;
    uVar1 = iVar5 + uVar2;
    param_2 = (uVar1 & 7) - uVar2;
    for (iVar4 = (int)uVar1 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar1 = *(uint *)((longlong)param_1 + 4);
      uVar2 = *(uint *)param_1;
      param_1 = (void *)((longlong)param_1 + 8);
      uVar2 = uVar2 ^ uVar3;
      uVar3 = CRCTablesSB8_DEPRECATED[1][(byte)(uVar1 >> 0x10)] ^
              CRCTablesSB8_DEPRECATED[2][(byte)(uVar1 >> 8)] ^
              CRCTablesSB8_DEPRECATED[5][(ulonglong)(uVar2 >> 0x10) & 0xff] ^
              CRCTablesSB8_DEPRECATED[6][(ulonglong)(uVar2 >> 8) & 0xff] ^
              CRCTablesSB8_DEPRECATED[0][uVar1 >> 0x18] ^ CRCTablesSB8_DEPRECATED[4][uVar2 >> 0x18]
              ^ CRCTablesSB8_DEPRECATED[3][uVar1 & 0xff] ^
              CRCTablesSB8_DEPRECATED[7][(ulonglong)uVar2 & 0xff];
    }
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *(uint *)param_1;
    param_1 = (void *)((longlong)param_1 + 1);
    uVar3 = uVar3 >> 8 ^
            CRCTablesSB8_DEPRECATED[0][(ulonglong)(uVar3 & 0xff) ^ (ulonglong)(byte)uVar1];
  }
  uVar3 = ~uVar3;
  return uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
}

