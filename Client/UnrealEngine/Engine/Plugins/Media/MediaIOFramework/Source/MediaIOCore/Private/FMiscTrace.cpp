// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// OutputBookmark<wchar_t_const_*,int> @ 14d788100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMiscTrace::OutputBookmark<wchar_t_const_*,int>
          (uint param_1,void *param_2,wchar_t *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong _Size;
  undefined1 auStack_1078 [32];
  undefined4 local_1058;
  undefined4 uStack_1054;
  undefined8 uStack_104d;
  int local_1045;
  undefined1 auStack_1041 [4089];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14d788115;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1078;
  if (param_3 == (wchar_t *)0x0) {
    uStack_104d._5_2_ = 0xc202;
    local_1045._0_2_ = 0;
    uVar7 = 9;
    _Size = 2;
  }
  else {
    sVar5 = wcslen(param_3);
    iVar3 = (int)sVar5 * 2 + 2;
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    uVar7 = (longlong)iVar3 + 7;
    if (0x1000 < uVar7) {
      return;
    }
    uStack_104d._5_2_ = 0xc202;
    sVar5 = wcslen(param_3);
    uVar4 = (int)sVar5 * 2 + 2;
    uVar6 = (ulonglong)uVar4;
    if (0xffff < (int)uVar4) {
      uVar6 = 0xffff;
    }
    _Size = uVar6 & 0xffff;
    memcpy(&local_1045,param_3,_Size);
    if ((short)uVar6 == -1) {
      local_1058 = 0x2e002e;
      uStack_1054 = 0x2e;
      *(undefined8 *)((longlong)&uStack_104d + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
    }
  }
  uStack_104d._7_1_ = 0x44;
  *(int *)((longlong)&local_1045 + _Size) = param_4;
  if (((longlong)((longlong)&local_1045 + _Size) + (4 - ((longlong)&uStack_104d + 5)) != uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadBufferPtr - Buffer == FormatArgsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                         ,0x44,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((ushort)uVar7 != 0) {
    OutputBookmarkInternal(param_2,param_1,(ushort)uVar7,(uchar *)((longlong)&uStack_104d + 5));
  }
  return;
}

