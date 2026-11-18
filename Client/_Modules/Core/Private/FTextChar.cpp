// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// IsAlnum @ 141701550

bool __cdecl FTextChar::IsAlnum(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isalnum_64();
  return cVar1 != '\0';
}

// IsAlpha @ 141701570

bool __cdecl FTextChar::IsAlpha(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isalpha_64();
  return cVar1 != '\0';
}

// IsControl @ 141701740

bool __cdecl FTextChar::IsControl(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_iscntrl_64();
  return cVar1 != '\0';
}

// IsDigit @ 141701a00

bool __cdecl FTextChar::IsDigit(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isdigit_64();
  return cVar1 != '\0';
}

// IsGraph @ 141701fa0

bool __cdecl FTextChar::IsGraph(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isgraph_64();
  return cVar1 != '\0';
}

// IsHexDigit @ 141701fc0

bool __cdecl FTextChar::IsHexDigit(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isxdigit_64();
  return cVar1 != '\0';
}

// IsLower @ 141702590

bool __cdecl FTextChar::IsLower(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_islower_64();
  return cVar1 != '\0';
}

// IsPrint @ 141702600

bool __cdecl FTextChar::IsPrint(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isprint_64();
  return cVar1 != '\0';
}

// IsPunct @ 141702620

bool __cdecl FTextChar::IsPunct(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_ispunct_64();
  return cVar1 != '\0';
}

// IsUpper @ 141702a40

bool __cdecl FTextChar::IsUpper(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isupper_64();
  return cVar1 != '\0';
}

// IsWhitespace @ 141702a60

bool __cdecl FTextChar::IsWhitespace(wchar32 param_1)

{
  char cVar1;
  
  cVar1 = u_isWhitespace_64();
  return cVar1 != '\0';
}

// ToLower @ 141715650

wchar32 __cdecl FTextChar::ToLower(wchar32 param_1)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((uint)param_1 < 0xd800) {
    uVar5 = (ulonglong)
            (uint)((param_1 & 0x1fU) +
                  (uint)*(ushort *)(&DAT_153166a80 + ((longlong)param_1 >> 5) * 2) * 4);
    goto LAB_14f167dc3;
  }
  if ((uint)param_1 < 0x10000) {
    iVar4 = 0;
    if (param_1 < L'\xdc00') {
      iVar4 = 0x140;
    }
    uVar2 = *(ushort *)(&DAT_153166a80 + (longlong)((param_1 >> 5) + iVar4) * 2);
  }
  else {
    if (0x10ffff < (uint)param_1) {
      uVar5 = 0xd58;
      goto LAB_14f167dc3;
    }
    if (L'\x000e07ff' < param_1) {
      uVar5 = 0x2fd0;
      goto LAB_14f167dc3;
    }
    uVar2 = *(ushort *)
             (&DAT_153166a80 +
             (ulonglong)
             (uint)((uint)*(ushort *)(&DAT_153166a80 + (longlong)((param_1 >> 0xb) + 0x820) * 2) +
                   (param_1 >> 5 & 0x3fU)) * 2);
  }
  uVar5 = (ulonglong)(uint)((param_1 & 0x1fU) + (uint)uVar2 * 4);
LAB_14f167dc3:
  uVar2 = *(ushort *)(&DAT_153166a80 + uVar5 * 2);
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 2) != 0) {
      return param_1 + ((int)(short)uVar2 >> 7);
    }
  }
  else {
    uVar3 = *(ushort *)(&DAT_15316ca30 + (ulonglong)(uVar2 >> 4) * 2);
    lVar1 = (ulonglong)(uVar2 >> 4) * 2;
    if (((uVar3 & 0x10) != 0) && ((uVar2 & 2) != 0)) {
      if ((uVar3 & 0x100) == 0) {
        uVar6 = (uint)*(ushort *)
                       (&DAT_15316ca32 + (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 0xf] * 2 + lVar1)
        ;
      }
      else {
        uVar6 = CONCAT22(*(undefined2 *)
                          (&DAT_15316ca32 +
                          (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 0xf] * 4 + lVar1),
                         *(undefined2 *)
                          (&DAT_15316ca34 +
                          (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 0xf] * 4 + lVar1));
      }
      if ((uVar3 & 0x400) == 0) {
        return param_1 + uVar6;
      }
      return param_1 - uVar6;
    }
    if ((uVar3 & 1) != 0) {
      param_1 = (wchar32)*(ushort *)(&DAT_15316ca32 + lVar1);
      if ((uVar3 & 0x100) != 0) {
        param_1 = CONCAT22(*(ushort *)(&DAT_15316ca32 + lVar1),
                           *(undefined2 *)(&DAT_15316ca34 + lVar1));
      }
    }
  }
  return param_1;
}

// ToUpper @ 141715e90

wchar32 __cdecl FTextChar::ToUpper(wchar32 param_1)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((uint)param_1 < 0xd800) {
    uVar5 = (ulonglong)
            (uint)((param_1 & 0x1fU) +
                  (uint)*(ushort *)(&DAT_153166a80 + ((longlong)param_1 >> 5) * 2) * 4);
    goto LAB_14f168113;
  }
  if ((uint)param_1 < 0x10000) {
    iVar4 = 0;
    if (param_1 < L'\xdc00') {
      iVar4 = 0x140;
    }
    uVar2 = *(ushort *)(&DAT_153166a80 + (longlong)((param_1 >> 5) + iVar4) * 2);
  }
  else {
    if (0x10ffff < (uint)param_1) {
      uVar5 = 0xd58;
      goto LAB_14f168113;
    }
    if (L'\x000e07ff' < param_1) {
      uVar5 = 0x2fd0;
      goto LAB_14f168113;
    }
    uVar2 = *(ushort *)
             (&DAT_153166a80 +
             (ulonglong)
             (uint)((uint)*(ushort *)(&DAT_153166a80 + (longlong)((param_1 >> 0xb) + 0x820) * 2) +
                   (param_1 >> 5 & 0x3fU)) * 2);
  }
  uVar5 = (ulonglong)(uint)((param_1 & 0x1fU) + (uint)uVar2 * 4);
LAB_14f168113:
  uVar2 = *(ushort *)(&DAT_153166a80 + uVar5 * 2);
  if ((uVar2 & 8) == 0) {
    if (((byte)uVar2 & 3) == 1) {
      return param_1 + ((int)(short)uVar2 >> 7);
    }
  }
  else {
    uVar3 = *(ushort *)(&DAT_15316ca30 + (ulonglong)(uVar2 >> 4) * 2);
    lVar1 = (ulonglong)(uVar2 >> 4) * 2;
    if (((uVar3 & 0x10) != 0) && (((byte)uVar2 & 3) == 1)) {
      if ((uVar3 & 0x100) == 0) {
        uVar6 = (uint)*(ushort *)
                       (&DAT_15316ca32 + (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 0xf] * 2 + lVar1)
        ;
      }
      else {
        uVar6 = CONCAT22(*(undefined2 *)
                          (&DAT_15316ca32 +
                          (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 0xf] * 4 + lVar1),
                         *(undefined2 *)
                          (&DAT_15316ca34 +
                          (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 0xf] * 4 + lVar1));
      }
      if ((uVar3 & 0x400) == 0) {
        return param_1 + uVar6;
      }
      return param_1 - uVar6;
    }
    if ((uVar3 & 4) != 0) {
      if ((uVar3 & 0x100) == 0) {
        return (uint)*(ushort *)
                      (&DAT_15316ca32 + (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 3] * 2 + lVar1);
      }
      param_1 = CONCAT22(*(undefined2 *)
                          (&DAT_15316ca32 + (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 3] * 4 + lVar1
                          ),*(undefined2 *)
                             (&DAT_15316ca34 +
                             (ulonglong)(byte)(&DAT_15316dac0)[uVar3 & 3] * 4 + lVar1));
    }
  }
  return param_1;
}

// AppendCodepointToString @ 141743fc0

bool __cdecl FTextChar::AppendCodepointToString(wchar32 param_1,FString *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  
  if (((((uint)param_1 < 0xfffe) || ((uint)(param_1 + L'\xffff0000') < 0x100000)) &&
      (0x3ff < (uint)(param_1 + L'\xffff2800'))) && (0x3ff < (uint)(param_1 + L'\xffff2400'))) {
    uVar2 = param_1 + L'\xffff0000';
    if (uVar2 < 0x100000) {
      ::FString::AppendChar(param_2,(short)(uVar2 >> 10) + L'\xd800');
      wVar1 = ((ushort)uVar2 & 0x3ff) + L'\xdc00';
    }
    else {
      wVar1 = (wchar_t)param_1;
    }
    ::FString::AppendChar(param_2,wVar1);
    return true;
  }
  return false;
}

// ConvertCodepointToString @ 14174daf0

bool __cdecl FTextChar::ConvertCodepointToString(wchar32 param_1,FString *param_2)

{
  uint uVar1;
  wchar_t wVar2;
  
  ::FString::Reset(param_2,0);
  if ((0x10ffff < (uint)param_1) || ((uint)(param_1 + L'\xffff0002') < 2)) {
    return false;
  }
  if ((0x3ff < (uint)(param_1 + L'\xffff2800')) && (0x3ff < (uint)(param_1 + L'\xffff2400'))) {
    uVar1 = param_1 + L'\xffff0000';
    if (uVar1 < 0x100000) {
      ::FString::AppendChar(param_2,(short)(uVar1 >> 10) + L'\xd800');
      wVar2 = ((ushort)uVar1 & 0x3ff) + L'\xdc00';
    }
    else {
      wVar2 = (wchar_t)param_1;
    }
    ::FString::AppendChar(param_2,wVar2);
    return true;
  }
  return false;
}

// GetCodepoint @ 14175bfe0

wchar32 __cdecl FTextChar::GetCodepoint(wchar_t *param_1,int *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar32 wVar3;
  
  if ((param_1 == (wchar_t *)0x0) || (wVar1 = *param_1, wVar1 == L'\0')) {
    wVar3 = L'\0';
  }
  else {
    wVar2 = param_1[1];
    wVar3 = (wchar32)(ushort)wVar1;
    if (((wVar2 == L'\0') || (0x3ff < (ushort)wVar1 - 0xd800)) || (0x3ff < (ushort)wVar2 - 0xdc00))
    {
      if (param_2 != (int *)0x0) {
        *param_2 = 1;
        return wVar3;
      }
    }
    else {
      wVar3 = (ushort)wVar2 + 0xfca02400 + wVar3 * 0x400;
      if (param_2 != (int *)0x0) {
        *param_2 = 2;
        return wVar3;
      }
    }
  }
  return wVar3;
}

