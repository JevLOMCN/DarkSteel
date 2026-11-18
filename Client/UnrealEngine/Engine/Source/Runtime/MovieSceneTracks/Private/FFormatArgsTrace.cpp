// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// EncodeArguments<4096,wchar_t_const_*,wchar_t_const_*> @ 1467e2900

ushort __cdecl
FFormatArgsTrace::EncodeArguments<4096,wchar_t_const_*,wchar_t_const_*>
          (uchar (*param_1) [4096],wchar_t *param_2,wchar_t *param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong _Size;
  ulonglong uVar12;
  uchar *puVar13;
  
  _Size = 2;
  if (param_2 == (wchar_t *)0x0) {
    lVar11 = 2;
  }
  else {
    sVar8 = wcslen(param_2);
    iVar6 = (int)sVar8 * 2 + 2;
    if (0xffff < iVar6) {
      iVar6 = 0xffff;
    }
    lVar11 = (longlong)iVar6;
  }
  if (param_3 == (wchar_t *)0x0) {
    lVar10 = 2;
  }
  else {
    sVar8 = wcslen(param_3);
    iVar6 = (int)sVar8 * 2 + 2;
    if (0xffff < iVar6) {
      iVar6 = 0xffff;
    }
    lVar10 = (longlong)iVar6;
  }
  puVar13 = (uchar *)(lVar10 + 3 + lVar11);
  if (puVar13 < (uchar *)0x1001) {
    puVar1 = *param_1 + 3;
    *(uchar *)((longlong)param_1 + 0) = '\x02';
    *(uchar *)((longlong)param_1 + 1) = 0xc2;
    if (param_2 == (wchar_t *)0x0) {
      uVar12 = 2;
      puVar1[0] = '\0';
      puVar1[1] = '\0';
    }
    else {
      sVar8 = wcslen(param_2);
      uVar7 = (int)sVar8 * 2 + 2;
      uVar9 = (ulonglong)uVar7;
      if (0xffff < (int)uVar7) {
        uVar9 = 0xffff;
      }
      uVar12 = uVar9 & 0xffff;
      memcpy(puVar1,param_2,uVar12);
      if ((short)uVar9 == -1) {
        puVar2 = puVar1 + (uVar12 - ((uint)uVar12 & 1)) + -8;
        puVar2[0] = '.';
        puVar2[1] = '\0';
        puVar2[2] = '.';
        puVar2[3] = '\0';
        puVar2[4] = '.';
        puVar2[5] = '\0';
        puVar2[6] = '\0';
        puVar2[7] = '\0';
      }
    }
    (*param_1)[2] = 0xc2;
    puVar1 = puVar1 + uVar12;
    if (param_3 == (wchar_t *)0x0) {
      puVar1[0] = '\0';
      puVar1[1] = '\0';
    }
    else {
      sVar8 = wcslen(param_3);
      uVar7 = (int)sVar8 * 2 + 2;
      uVar12 = (ulonglong)uVar7;
      if (0xffff < (int)uVar7) {
        uVar12 = 0xffff;
      }
      _Size = uVar12 & 0xffff;
      memcpy(puVar1,param_3,_Size);
      if ((short)uVar12 == -1) {
        puVar2 = puVar1 + _Size + (-8 - (ulonglong)((uint)_Size & 1));
        puVar2[0] = '.';
        puVar2[1] = '\0';
        puVar2[2] = '.';
        puVar2[3] = '\0';
        puVar2[4] = '.';
        puVar2[5] = '\0';
        puVar2[6] = '\0';
        puVar2[7] = '\0';
      }
    }
    if (puVar1 + (_Size - (longlong)param_1) != puVar13) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadBufferPtr - Buffer == FormatArgsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                         ,0x44,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    uVar5 = (ushort)puVar13;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

