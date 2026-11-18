// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// Strihash_DEPRECATED<wchar_t> @ 14d41cff0

uint __cdecl FCrc::Strihash_DEPRECATED<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  
  if ((CRCTable_DEPRECATED[1] == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xb4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = 0;
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    param_1 = param_1 + 1;
    uVar5 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
    uVar4 = uVar4 >> 8 ^ CRCTable_DEPRECATED[(byte)((byte)uVar4 ^ (byte)uVar5)];
    uVar4 = uVar4 >> 8 ^ CRCTable_DEPRECATED[(uVar5 >> 8 ^ uVar4) & 0xff];
    wVar1 = *param_1;
  }
  return uVar4;
}

