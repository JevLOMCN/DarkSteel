// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Init @ 14194ebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TextFilterUtils::FNameBufferWithNumber::Init
          (FNameBufferWithNumber *this,FNameEntry *param_1,int param_2)

{
  FNameBufferWithNumber_u_2 *_Str;
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  char *pcVar9;
  undefined1 auStack_68 [28];
  undefined2 uStack_4c;
  char acStack_4a [2];
  wchar_t local_48 [7];
  char local_3a [14];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  _Str = &this->field1_0x2;
  if (param_1 == (FNameEntry *)0x0) {
    this->bIsWide = true;
    wcsncpy(_Str->WideName,L"*INVALID*",0x3ff);
    (this->field1_0x2).WideName[0x3ff] = L'\0';
  }
  else if (param_1.bIsWide == 0) {
    this->bIsWide = false;
    FNameEntry::GetAnsiName(param_1,(char (*) [1024])_Str);
    if (param_2 != 0) {
      sVar3 = strlen(_Str->AnsiName);
      lVar4 = (longlong)(int)sVar3;
      pcVar9 = local_3a + 1;
      iVar2 = param_2 + -1;
      local_3a[1] = 0;
      (this->field1_0x2).AnsiName[lVar4] = '_';
      lVar5 = -(longlong)iVar2;
      iVar7 = 0xf;
      if (-1 < iVar2) {
        lVar5 = (longlong)iVar2;
        iVar7 = 0xf;
      }
      do {
        iVar6 = iVar7;
        iVar7 = iVar6 + -1;
        pcVar9 = pcVar9 + -1;
        lVar1 = lVar5 / 10;
        *pcVar9 = (char)lVar5 + (char)lVar1 * -10 + '0';
        lVar5 = lVar1;
      } while (lVar1 != 0);
      if (iVar2 < 0) {
        iVar7 = iVar6 + -2;
        acStack_4a[iVar6] = '-';
      }
      iVar2 = 0xf - iVar7;
      if (iVar2 < 0x10) {
        strncpy((this->field1_0x2).AnsiName + lVar4 + 1,
                (char *)((longlong)local_48 + (longlong)iVar7),(longlong)iVar2 + 1);
        (this->field1_0x2).AnsiName[iVar2 + lVar4 + 1] = '\0';
      }
      else {
        (this->field1_0x2).AnsiName[lVar4 + 1] = '\0';
      }
    }
  }
  else {
    this->bIsWide = true;
    FNameEntry::GetWideName(param_1,(wchar_t (*) [1024])_Str);
    if (param_2 != 0) {
      sVar3 = wcslen(_Str->WideName);
      lVar4 = (longlong)(int)sVar3;
      psVar8 = local_2c + 1;
      iVar2 = param_2 + -1;
      *(undefined2 *)((longlong)&this->field1_0x2 + lVar4 * 2) = 0x5f;
      local_2c[1] = 0;
      lVar5 = -(longlong)iVar2;
      iVar7 = 0xf;
      if (-1 < iVar2) {
        lVar5 = (longlong)iVar2;
      }
      do {
        iVar6 = iVar7;
        iVar7 = iVar6 + -1;
        psVar8 = psVar8 + -1;
        lVar1 = lVar5 / 10;
        *psVar8 = (short)lVar5 + (short)lVar1 * -10 + 0x30;
        lVar5 = lVar1;
      } while (lVar1 != 0);
      if (iVar2 < 0) {
        iVar7 = iVar6 + -2;
        (&uStack_4c)[iVar6] = 0x2d;
      }
      iVar2 = 0xf - iVar7;
      if (iVar2 < 0x10) {
        wcsncpy((wchar_t *)((this->field1_0x2).AnsiName + lVar4 * 2 + 2),local_48 + iVar7,
                (longlong)iVar2);
        *(undefined2 *)((longlong)&this->field1_0x2 + (longlong)iVar2 * 2 + lVar4 * 2 + 2) = 0;
      }
      else {
        *(undefined2 *)((longlong)&this->field1_0x2 + lVar4 * 2 + 2) = 0;
      }
    }
  }
  return;
}

