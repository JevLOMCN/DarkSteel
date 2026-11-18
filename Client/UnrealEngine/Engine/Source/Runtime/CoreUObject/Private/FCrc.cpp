// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Strihash_DEPRECATED<char8_t> @ 141e564f0

uint __cdecl FCrc::Strihash_DEPRECATED<char8_t>(int param_1,uchar *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  
  iVar4 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_2,param_1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)iVar4;
  uVar6 = SUB168(ZEXT816(2) * auVar2,0);
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  pwVar7 = operator_new__(uVar6);
  pwVar8 = UE::Core::Private::Convert(pwVar7,iVar4,param_2,param_1);
  if (pwVar8 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TempEnd!=nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                       ,0xf4,L"String conversion unsuccessful");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  uVar5 = Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  operator_delete__(pwVar7);
  return uVar5;
}

// Strihash_DEPRECATED<char> @ 141f5bbb0

uint __cdecl FCrc::Strihash_DEPRECATED<char>(int param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(uint)param_1;
  if ((CRCTable_DEPRECATED[1] == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xa4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = 0;
  if (0 < param_1) {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = uVar4 >> 8 ^
              CRCTable_DEPRECATED
              [((ulonglong)(byte)(cVar1 - (-((int)cVar1 - 0x61U < 0x1a) & 0x20U)) ^ (ulonglong)uVar4
               ) & 0xff];
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar4;
}

