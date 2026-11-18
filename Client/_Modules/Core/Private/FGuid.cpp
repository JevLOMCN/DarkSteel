// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// AppendString @ 1418c85f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGuid::AppendString(FGuid *this,TStringBuilderBase<char> *param_1,EGuidFormats param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  uint local_78;
  uint local_70;
  uint local_68;
  uint local_60;
  uint local_58;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  switch(param_2) {
  case DigitsLower:
    pcVar12 = "%08x%08x%08x%08x";
    goto LAB_1418c89d0;
  case DigitsWithHyphens:
    local_80 = this->D;
    local_88 = this->C & 0xffff;
    local_98 = this->B & 0xffff;
    local_90 = this->C >> 0x10;
    TStringBuilderBase<char>::AppendfImpl(param_1,"%08X-%04X-%04X-%04X-%04X%08X");
    break;
  case DigitsWithHyphensLower:
    local_80 = this->D;
    local_88 = this->C & 0xffff;
    local_98 = this->B & 0xffff;
    local_90 = this->C >> 0x10;
    TStringBuilderBase<char>::AppendfImpl(param_1,"%08x-%04x-%04x-%04x-%04x%08x");
    break;
  case DigitsWithHyphensInBraces:
    local_80 = this->D;
    local_88 = this->C & 0xffff;
    local_98 = this->B & 0xffff;
    local_90 = this->C >> 0x10;
    TStringBuilderBase<char>::AppendfImpl(param_1,"{%08X-%04X-%04X-%04X-%04X%08X}");
    break;
  case DigitsWithHyphensInParentheses:
    local_80 = this->D;
    local_88 = this->C & 0xffff;
    local_98 = this->B & 0xffff;
    local_90 = this->C >> 0x10;
    TStringBuilderBase<char>::AppendfImpl(param_1,"(%08X-%04X-%04X-%04X-%04X%08X)");
    break;
  case HexValuesInBraces:
    local_70 = this->D;
    local_90 = this->C;
    local_60 = local_70 >> 8 & 0xff;
    local_68 = local_70 >> 0x10 & 0xff;
    local_80 = local_90 >> 8 & 0xff;
    local_88 = local_90 >> 0x10 & 0xff;
    local_78 = local_90 & 0xff;
    local_98 = this->B & 0xffff;
    local_58 = local_70 & 0xff;
    local_70 = local_70 >> 0x18;
    local_90 = local_90 >> 0x18;
    TStringBuilderBase<char>::AppendfImpl
              (param_1,
               "{0x%08X,0x%04X,0x%04X,{0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X}}");
    break;
  case UniqueObjectGuid:
    pcVar12 = "%08X-%08X-%08X-%08X";
    goto LAB_1418c89d0;
  case Short:
    uVar6 = this->A;
    local_48 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = this->B;
    local_44 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = this->C;
    local_40 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = this->D;
    local_3c = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    iVar7 = TStringBuilderBase<char>::AddUninitialized(param_1,0x18);
    pcVar13 = param_1->Base + iVar7;
    uVar6 = FBase64::Encode<char>((uchar *)&local_48,0x10,pcVar13,Standard);
    pcVar12 = pcVar13 + 0x18;
    pcVar8 = pcVar13;
    if (pcVar13 != pcVar12) {
      do {
        if (*pcVar8 == '+') {
          *pcVar8 = '-';
        }
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 != pcVar12);
      do {
        if (*pcVar13 == '/') {
          *pcVar13 = '_';
        }
        pcVar13 = pcVar13 + 1;
      } while (pcVar13 != pcVar12);
    }
    if ((uVar6 != 0x18) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Len == 24",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Guid.cpp"
                           ,0xb3,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)&param_1->CurPos - *(int *)&param_1->Base < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0xe8,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1->CurPos = param_1->CurPos + -2;
    break;
  case Base36Encoded:
    uVar6 = this->B;
    uVar1 = this->A;
    uVar2 = this->C;
    uVar3 = this->D;
    iVar7 = TStringBuilderBase<char>::AddUninitialized(param_1,0x19);
    iVar15 = 0x18;
    uVar14 = CONCAT44(uVar1,uVar6);
    uVar16 = CONCAT44(uVar2,uVar3);
    pcVar12 = param_1->Base + (longlong)iVar7 + 0x18;
    do {
      uVar9 = ((ulonglong)(uint)((int)(uVar14 >> 0x20) + (int)(uVar14 / 0x2400000000) * -0x24) <<
               0x20 | uVar14 & 0xffffffff) / 0x24;
      uVar10 = ((ulonglong)(uint)((int)uVar14 + (int)uVar9 * -0x24) << 0x20 | uVar16 >> 0x20) / 0x24
      ;
      uVar11 = ((ulonglong)(uint)((int)(uVar16 >> 0x20) + (int)uVar10 * -0x24) << 0x20 |
               uVar16 & 0xffffffff) / 0x24;
      iVar15 = iVar15 + -1;
      *pcVar12 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uint)((int)uVar16 + (int)uVar11 * -0x24)];
      uVar14 = uVar14 / 0x2400000000 << 0x20 | uVar9 & 0xffffffff;
      uVar16 = uVar10 << 0x20 | uVar11 & 0xffffffff;
      pcVar12 = pcVar12 + -1;
    } while (-1 < iVar15);
    break;
  default:
    pcVar12 = "%08X%08X%08X%08X";
LAB_1418c89d0:
    local_90 = this->D;
    local_98 = this->C;
    TStringBuilderBase<char>::AppendfImpl(param_1,pcVar12);
  }
  return;
}

// AppendString @ 1418c8a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGuid::AppendString(FGuid *this,TStringBuilderBase<char8_t> *param_1,EGuidFormats param_2)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  undefined1 auStack_b8 [32];
  TStringBuilderBase<char> local_98;
  char local_78 [70];
  char local_32 [10];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98.Base = local_78;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_98.CurPos = local_78;
  local_98.End = local_32;
  AppendString(this,&local_98,param_2);
  pcVar1 = local_98.Base;
  iVar3 = (int)local_98.CurPos - (int)local_98.Base;
  uVar4 = (ulong64)iVar3;
  if (param_1->End < param_1->CurPos + uVar4) {
    TStringBuilderBase<char8_t>::Extend(param_1,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pcVar1,uVar4);
    param_1->CurPos = (uchar *)((longlong)pvVar2 + uVar4);
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_98);
  return;
}

// AppendString @ 1418c8b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGuid::AppendString(FGuid *this,TStringBuilderBase<wchar_t> *param_1,EGuidFormats param_2)

{
  char *pcVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  TStringBuilderBase<char> local_98;
  char local_78 [70];
  char local_32 [10];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98.Base = local_78;
  local_98.bIsDynamic = false;
  local_98.bIsExternal = false;
  local_98.CurPos = local_78;
  local_98.End = local_32;
  AppendString(this,&local_98,param_2);
  pcVar1 = local_98.Base;
  iVar3 = (int)local_98.CurPos - (int)local_98.Base;
  if (param_1->End < param_1->CurPos + iVar3) {
    TStringBuilderBase<wchar_t>::Extend(param_1,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>(param_1->CurPos,iVar3,pcVar1,iVar3);
    param_1->CurPos = pwVar2;
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_98);
  return;
}

// AppendString @ 1418c8bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FGuid::AppendString(FGuid *this,FString *param_1,EGuidFormats param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_148 [32];
  uint local_128;
  uint local_120;
  uint local_118;
  uint local_110;
  uint local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  uint local_e8;
  wchar_t local_d8 [28];
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  wchar_t local_80 [28];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  switch(param_2) {
  case DigitsLower:
    local_120 = this->D;
    local_128 = this->C;
    ::FString::AppendfImpl(param_1,L"%08x%08x%08x%08x");
    break;
  case DigitsWithHyphens:
    local_110 = this->D;
    local_118 = this->C & 0xffff;
    local_128 = this->B & 0xffff;
    local_120 = this->C >> 0x10;
    ::FString::AppendfImpl(param_1,L"%08X-%04X-%04X-%04X-%04X%08X");
    break;
  case DigitsWithHyphensLower:
    local_110 = this->D;
    local_118 = this->C & 0xffff;
    local_128 = this->B & 0xffff;
    local_120 = this->C >> 0x10;
    ::FString::AppendfImpl(param_1,L"%08x-%04x-%04x-%04x-%04x%08x");
    break;
  case DigitsWithHyphensInBraces:
    local_110 = this->D;
    local_118 = this->C & 0xffff;
    local_128 = this->B & 0xffff;
    local_120 = this->C >> 0x10;
    ::FString::AppendfImpl(param_1,L"{%08X-%04X-%04X-%04X-%04X%08X}");
    break;
  case DigitsWithHyphensInParentheses:
    local_110 = this->D;
    local_118 = this->C & 0xffff;
    local_128 = this->B & 0xffff;
    local_120 = this->C >> 0x10;
    ::FString::AppendfImpl(param_1,L"(%08X-%04X-%04X-%04X-%04X%08X)");
    break;
  case HexValuesInBraces:
    local_100 = this->D;
    local_120 = this->C;
    local_f0 = local_100 >> 8 & 0xff;
    local_f8 = local_100 >> 0x10 & 0xff;
    local_110 = local_120 >> 8 & 0xff;
    local_118 = local_120 >> 0x10 & 0xff;
    local_108 = local_120 & 0xff;
    local_128 = this->B & 0xffff;
    local_e8 = local_100 & 0xff;
    local_100 = local_100 >> 0x18;
    local_120 = local_120 >> 0x18;
    ::FString::AppendfImpl
              (param_1,
               L"{0x%08X,0x%04X,0x%04X,{0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X}}");
    break;
  case UniqueObjectGuid:
    local_120 = this->D;
    local_128 = this->C;
    ::FString::AppendfImpl(param_1,L"%08X-%08X-%08X-%08X");
    break;
  case Short:
    uVar7 = this->A;
    local_a0 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = this->B;
    local_9c = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = this->C;
    local_98 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = this->D;
    local_94 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = FBase64::Encode<wchar_t>((uchar *)&local_a0,0x10,local_80,Standard);
    if (((int)uVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    for (pwVar8 = local_80; pwVar8 != local_80 + (int)uVar7; pwVar8 = pwVar8 + 1) {
      if (*pwVar8 == L'+') {
        *pwVar8 = L'-';
      }
    }
    for (pwVar8 = local_80; pwVar8 != local_80 + (int)uVar7; pwVar8 = pwVar8 + 1) {
      if (*pwVar8 == L'/') {
        *pwVar8 = L'_';
      }
    }
    if ((uVar7 != 0x18) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Len == 24",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Guid.cpp"
                           ,0x60,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((int)(uVar7 - 2) < (int)uVar7) {
      uVar7 = uVar7 - 2;
    }
    uVar14 = 0;
    if (0 < (int)uVar7) {
      uVar14 = uVar7;
    }
    if (((int)uVar14 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::FString::AppendChars(param_1,local_80,uVar14);
    break;
  case Base36Encoded:
    uVar15 = CONCAT44(this->A,this->B);
    uVar16 = CONCAT44(this->C,this->D);
    uVar7 = 0x16;
    do {
      iVar2 = (int)(uVar15 / 0x2400000000);
      uVar10 = ((ulonglong)(uint)((int)(uVar15 >> 0x20) + iVar2 * -0x24) << 0x20 |
               uVar15 & 0xffffffff) / 0x24;
      iVar3 = (int)uVar10;
      uVar11 = ((ulonglong)(uint)((int)uVar15 + iVar3 * -0x24) << 0x20 | uVar16 >> 0x20) / 0x24;
      iVar4 = (int)uVar11;
      uVar12 = ((ulonglong)(uint)((int)(uVar16 >> 0x20) + iVar4 * -0x24) << 0x20 |
               uVar16 & 0xffffffff) / 0x24;
      iVar5 = (int)uVar12;
      local_d8[uVar7 + 2] =
           (ushort)(byte)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uint)((int)uVar16 + iVar5 * -0x24)]
      ;
      uVar13 = (uVar15 / 0x2400000000) / 0x24;
      iVar9 = (int)uVar13;
      uVar15 = ((ulonglong)(uint)(iVar2 + iVar9 * -0x24) << 0x20 | uVar10 & 0xffffffff) / 0x24;
      iVar2 = (int)uVar15;
      uVar16 = ((ulonglong)(uint)(iVar3 + iVar2 * -0x24) << 0x20 | uVar11 & 0xffffffff) / 0x24;
      iVar3 = (int)uVar16;
      uVar10 = ((ulonglong)(uint)(iVar4 + iVar3 * -0x24) << 0x20 | uVar12 & 0xffffffff) / 0x24;
      iVar4 = (int)uVar10;
      local_d8[uVar7 + 1] =
           (ushort)(byte)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uint)(iVar5 + iVar4 * -0x24)];
      uVar13 = uVar13 / 0x24;
      iVar5 = (int)uVar13;
      uVar15 = ((ulonglong)(uint)(iVar9 + iVar5 * -0x24) << 0x20 | uVar15 & 0xffffffff) / 0x24;
      iVar9 = (int)uVar15;
      uVar16 = ((ulonglong)(uint)(iVar2 + iVar9 * -0x24) << 0x20 | uVar16 & 0xffffffff) / 0x24;
      iVar2 = (int)uVar16;
      uVar10 = ((ulonglong)(uint)(iVar3 + iVar2 * -0x24) << 0x20 | uVar10 & 0xffffffff) / 0x24;
      iVar3 = (int)uVar10;
      local_d8[uVar7] =
           (ushort)(byte)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uint)(iVar4 + iVar3 * -0x24)];
      uVar13 = uVar13 / 0x24;
      iVar4 = (int)uVar13;
      uVar15 = ((ulonglong)(uint)(iVar5 + iVar4 * -0x24) << 0x20 | uVar15 & 0xffffffff) / 0x24;
      iVar5 = (int)uVar15;
      uVar16 = ((ulonglong)(uint)(iVar9 + iVar5 * -0x24) << 0x20 | uVar16 & 0xffffffff) / 0x24;
      iVar9 = (int)uVar16;
      uVar10 = ((ulonglong)(uint)(iVar2 + iVar9 * -0x24) << 0x20 | uVar10 & 0xffffffff) / 0x24;
      iVar2 = (int)uVar10;
      local_d8[uVar7 - 1] =
           (ushort)(byte)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uint)(iVar3 + iVar2 * -0x24)];
      uVar13 = uVar13 / 0x24;
      uVar11 = ((ulonglong)(uint)(iVar4 + (int)uVar13 * -0x24) << 0x20 | uVar15 & 0xffffffff) / 0x24
      ;
      uVar15 = uVar13 << 0x20 | uVar11 & 0xffffffff;
      uVar16 = ((ulonglong)(uint)(iVar5 + (int)uVar11 * -0x24) << 0x20 | uVar16 & 0xffffffff) / 0x24
      ;
      uVar10 = ((ulonglong)(uint)(iVar9 + (int)uVar16 * -0x24) << 0x20 | uVar10 & 0xffffffff) / 0x24
      ;
      uVar16 = uVar16 << 0x20 | uVar10 & 0xffffffff;
      local_d8[uVar7 - 2] =
           (ushort)(byte)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uint)(iVar2 + (int)uVar10 * -0x24)]
      ;
      iVar2 = uVar7 - 3;
      uVar7 = uVar7 - 5;
    } while (-1 < iVar2);
    ::FString::AppendChars(param_1,local_d8,0x19);
    break;
  default:
    uVar7 = this->A;
    local_90 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = this->B;
    local_8c = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = this->C;
    local_88 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = this->D;
    local_84 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    BytesToHex((uchar *)&local_90,0x10,param_1);
  }
  return;
}

// Combine @ 1418ca930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGuid * __cdecl FGuid::Combine(FGuid *__return_storage_ptr__,FGuid *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar2 = param_2->A;
  uVar4 = param_2->B;
  uVar6 = param_2->C;
  uVar8 = param_2->D;
  uVar9 = param_1->A - uVar2 ^ uVar2 >> 0xd;
  uVar10 = param_1->B - uVar4 ^ uVar4 >> 0xd;
  uVar11 = param_1->C - uVar6 ^ uVar6 >> 0xd;
  uVar12 = param_1->D - uVar8 ^ uVar8 >> 0xd;
  uVar1 = (___xmm_9e3779b99e3779b99e3779b99e3779b9 - uVar9) - uVar2 ^ uVar9 << 8;
  uVar3 = (_UNK_1506afe64 - uVar10) - uVar4 ^ uVar10 << 8;
  uVar5 = (_UNK_1506afe68 - uVar11) - uVar6 ^ uVar11 << 8;
  uVar7 = (_UNK_1506afe6c - uVar12) - uVar8 ^ uVar12 << 8;
  uVar13 = (uVar2 - uVar1) - uVar9 ^ uVar1 >> 0xd;
  uVar14 = (uVar4 - uVar3) - uVar10 ^ uVar3 >> 0xd;
  uVar15 = (uVar6 - uVar5) - uVar11 ^ uVar5 >> 0xd;
  uVar16 = (uVar8 - uVar7) - uVar12 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar1) - uVar13 ^ uVar13 >> 0xc;
  uVar10 = (uVar10 - uVar3) - uVar14 ^ uVar14 >> 0xc;
  uVar11 = (uVar11 - uVar5) - uVar15 ^ uVar15 >> 0xc;
  uVar12 = (uVar12 - uVar7) - uVar16 ^ uVar16 >> 0xc;
  uVar2 = (uVar1 - uVar9) - uVar13 ^ uVar9 << 0x10;
  uVar4 = (uVar3 - uVar10) - uVar14 ^ uVar10 << 0x10;
  uVar6 = (uVar5 - uVar11) - uVar15 ^ uVar11 << 0x10;
  uVar8 = (uVar7 - uVar12) - uVar16 ^ uVar12 << 0x10;
  uVar13 = (uVar13 - uVar2) - uVar9 ^ uVar2 >> 5;
  uVar14 = (uVar14 - uVar4) - uVar10 ^ uVar4 >> 5;
  uVar15 = (uVar15 - uVar6) - uVar11 ^ uVar6 >> 5;
  uVar16 = (uVar16 - uVar8) - uVar12 ^ uVar8 >> 5;
  uVar1 = (uVar9 - uVar2) - uVar13 ^ uVar13 >> 3;
  uVar3 = (uVar10 - uVar4) - uVar14 ^ uVar14 >> 3;
  uVar5 = (uVar11 - uVar6) - uVar15 ^ uVar15 >> 3;
  uVar7 = (uVar12 - uVar8) - uVar16 ^ uVar16 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar13 ^ uVar1 << 10;
  uVar4 = (uVar4 - uVar3) - uVar14 ^ uVar3 << 10;
  uVar6 = (uVar6 - uVar5) - uVar15 ^ uVar5 << 10;
  uVar8 = (uVar8 - uVar7) - uVar16 ^ uVar7 << 10;
  __return_storage_ptr__->A = (uVar13 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  __return_storage_ptr__->B = (uVar14 - uVar4) - uVar3 ^ uVar4 >> 0xf;
  __return_storage_ptr__->C = (uVar15 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  __return_storage_ptr__->D = (uVar16 - uVar8) - uVar7 ^ uVar8 >> 0xf;
  return __return_storage_ptr__;
}

// ExportTextItem @ 1418da3f0

bool __thiscall
FGuid::ExportTextItem
          (FGuid *this,FString *param_1,FGuid *param_2,UObject *param_3,int param_4,UObject *param_5
          )

{
  AppendString(this,param_1,Digits);
  return true;
}

// ImportTextItem @ 1418e26c0

bool __thiscall
FGuid::ImportTextItem
          (FGuid *this,wchar_t **param_1,int param_2,UObject *param_3,FOutputDevice *param_4)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  sVar2 = wcsnlen(*param_1,0x20);
  if (0x1f < (int)sVar2) {
    local_18.DataPtr = *param_1;
    local_18.Size = 0x20;
    bVar1 = ParseExact(&local_18,Digits,this);
    if (bVar1) {
      *param_1 = *param_1 + 0x20;
      return true;
    }
  }
  return false;
}

// NewDeterministicGuid @ 1418e92d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001418e9402) */
/* WARNING: Removing unreachable block (ram,0x0001418e9419) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff410 : 0x0001418e9420 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FGuid * __cdecl
FGuid::NewDeterministicGuid
          (FGuid *__return_storage_ptr__,TStringView<wchar_t> *param_1,ulong64 param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_c48 [32];
  TStringView<wchar_t> local_c28;
  ulong64 local_c18;
  FString local_c10 [2];
  FBlake3Hash local_bf0;
  TStringBuilderBase<char8_t> local_bc8;
  uchar local_ba8 [1024];
  FBlake3 local_7a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c48;
  local_bc8.Base = local_ba8;
  pwVar1 = param_1->DataPtr;
  local_bc8.CurPos = local_ba8;
  iVar4 = (int)*(undefined8 *)&param_1->Size;
  local_bc8.End = (uchar *)&local_7a8;
  local_bc8.bIsDynamic = false;
  local_bc8.bIsExternal = false;
  local_c18 = param_2;
  iVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar1,iVar4);
  if (local_bc8.End < (FBlake3 *)(local_bc8.CurPos + iVar3)) {
    TStringBuilderBase<char8_t>::Extend(&local_bc8,(longlong)iVar3);
  }
  if (iVar4 != 0) {
    local_bc8.CurPos = UE::Core::Private::Convert(local_bc8.CurPos,iVar3,pwVar1,iVar4);
  }
  FBlake3::Reset(&local_7a8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(local_c10,L"182b8dd3-f963-477f-a57d-70a339d922d8");
    iVar3 = local_c10[0].Data.ArrayNum + -1;
    if (local_c10[0].Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    local_c28.Size = iVar3;
    local_c28.DataPtr = (wchar_t *)local_c10[0].Data.AllocatorInstance.Data;
    bVar2 = Parse(&local_c28,&BaseVersion);
    if (!bVar2) {
      BaseVersion.C = 0;
      BaseVersion.D = 0;
      BaseVersion.A = 0;
      BaseVersion.B = 0;
    }
    if (local_c10[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c10[0].Data.AllocatorInstance.Data);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FBlake3::Update(&local_7a8,&BaseVersion,0x10);
  FBlake3::Update(&local_7a8,&local_c18,8);
  FBlake3::Update(&local_7a8,local_bc8.Base,(longlong)((int)local_bc8.CurPos - (int)local_bc8.Base))
  ;
  FBlake3::Finalize(&local_7a8,&local_bf0);
  __return_storage_ptr__->A = local_bf0.Hash._0_4_;
  __return_storage_ptr__->B = local_bf0.Hash._4_4_ & 0xffff3fff | 0x3000;
  __return_storage_ptr__->C = local_bf0.Hash._8_4_ & 0x3fffffff | 0x80000000;
  __return_storage_ptr__->D = local_bf0.Hash._12_4_;
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_bc8);
  return __return_storage_ptr__;
}

// NewGuid @ 1418e9520

FGuid * __cdecl FGuid::NewGuid(FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  FWindowsPlatformMisc::CreateGuid(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NewGuidFromHash @ 1418e9550

FGuid * __cdecl FGuid::NewGuidFromHash(FGuid *__return_storage_ptr__,FBlake3Hash *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FBlake3Hash *pFVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((ulonglong)param_1 & 3) != 0) {
    local_18 = *(undefined8 *)param_1->Hash;
    uStack_10 = *(undefined8 *)(param_1->Hash + 8);
  }
  pFVar4 = (FBlake3Hash *)&stack0xffffffffffffffe8;
  if (((ulonglong)param_1 & 3) == 0) {
    pFVar4 = param_1;
  }
  uVar1 = *(uint *)(pFVar4->Hash + 4);
  uVar2 = *(uint *)(pFVar4->Hash + 8);
  uVar3 = *(uint *)(pFVar4->Hash + 0xc);
  __return_storage_ptr__->A = *(uint *)pFVar4->Hash;
  __return_storage_ptr__->C = uVar2 & 0x3fffffff | 0x80000000;
  __return_storage_ptr__->B = uVar1 & 0xffff3fff | 0x3000;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// NewGuidFromHashBytes @ 1418e95b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __cdecl
FGuid::NewGuidFromHashBytes(FGuid *__return_storage_ptr__,void *param_1,long64 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  undefined1 auStack_58 [32];
  uint local_38 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((param_2 < 0x10) || (((ulonglong)param_1 & 3) != 0)) {
    _Size = 0x10;
    if (param_2 < 0x10) {
      _Size = param_2;
    }
    memcpy(local_38,param_1,_Size);
    if (param_2 < 0x10) {
      memset((void *)((longlong)local_38 + param_2),0,0x10 - param_2);
    }
    param_1 = local_38;
  }
  uVar1 = *(uint *)((longlong)param_1 + 4);
  uVar2 = *(uint *)((longlong)param_1 + 8);
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  __return_storage_ptr__->A = *(uint *)param_1;
  __return_storage_ptr__->C = uVar2 & 0x3fffffff | 0x80000000;
  __return_storage_ptr__->B = uVar1 & 0xffff3fff | 0x3000;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// Parse @ 1418ea560

bool __cdecl FGuid::Parse(FString *param_1,FGuid *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = Parse(&local_18,param_2);
  return bVar2;
}

// Parse @ 1418ea5a0

bool __cdecl FGuid::Parse(wchar_t *param_1,FGuid *param_2)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = Parse(&local_18,param_2);
  return bVar1;
}

// Parse @ 1418ea5f0

bool __cdecl FGuid::Parse(TStringView<wchar_t> *param_1,FGuid *param_2)

{
  int iVar1;
  bool bVar2;
  TStringView<wchar_t> local_18;
  
  iVar1 = param_1->Size;
  if (iVar1 == 0x20) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar2 = ParseExact(&local_18,Digits,param_2);
    return bVar2;
  }
  if (iVar1 == 0x24) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar2 = ParseExact(&local_18,DigitsWithHyphens,param_2);
    return bVar2;
  }
  if (iVar1 == 0x26) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    if (*param_1->DataPtr == L'{') {
      bVar2 = ParseExact(&local_18,DigitsWithHyphensInBraces,param_2);
      return bVar2;
    }
    bVar2 = ParseExact(&local_18,DigitsWithHyphensInParentheses,param_2);
    return bVar2;
  }
  if (iVar1 == 0x44) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar2 = ParseExact(&local_18,HexValuesInBraces,param_2);
    return bVar2;
  }
  if (iVar1 == 0x23) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar2 = ParseExact(&local_18,UniqueObjectGuid,param_2);
    return bVar2;
  }
  if (iVar1 == 0x16) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar2 = ParseExact(&local_18,Short,param_2);
    return bVar2;
  }
  if (iVar1 == 0x19) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar2 = ParseExact(&local_18,Base36Encoded,param_2);
    return bVar2;
  }
  return false;
}

// ParseExact @ 1418eb1f0

bool __cdecl FGuid::ParseExact(FString *param_1,EGuidFormats param_2,FGuid *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = ParseExact(&local_18,param_2,param_3);
  return bVar2;
}

// ParseExact @ 1418eb230

bool __cdecl FGuid::ParseExact(wchar_t *param_1,EGuidFormats param_2,FGuid *param_3)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = ParseExact(&local_18,param_2,param_3);
  return bVar1;
}

// ParseExact @ 1418eb280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FGuid::ParseExact(TStringView<wchar_t> *param_1,EGuidFormats param_2,FGuid *param_3)

{
  ulonglong uVar1;
  ushort *puVar2;
  wchar_t wVar3;
  ushort uVar4;
  code *pcVar5;
  wchar_t **ppwVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  int iVar15;
  TStringBuilderBase<wchar_t> *pTVar16;
  uint uVar17;
  uint uVar18;
  ulong64 uVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  ushort *puVar22;
  wchar_t *pwVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  int local_140;
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  ulong64 local_128;
  wchar_t *local_120;
  uint uStack_118;
  uint uStack_114;
  TStringBuilderBase<wchar_t> local_108;
  TStringBuilderBase<wchar_t> local_e8 [2];
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [22];
  wchar_t local_5c [2];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_2 == Short) {
    if (param_1->Size == 0x16) {
      local_58 = (wchar_t *)0x0;
      uStack_50 = 0;
      uVar9 = FBase64::GetDecodedDataSize<wchar_t>(param_1->DataPtr,0x16);
      if (uVar9 == 0x10) {
        local_120 = param_1->DataPtr;
        local_138 = param_1->DataPtr;
        uStack_130 = param_1->Size;
        uStack_12c = *(uint *)&param_1->field_0xc;
        local_a8.Base = local_88;
        local_a8.CurPos = local_88;
        iVar24 = (int)*(undefined8 *)&param_1->Size;
        uVar19 = (ulong64)iVar24;
        local_a8.End = local_5c;
        local_a8.bIsDynamic = false;
        local_a8.bIsExternal = false;
        uVar29 = *(undefined4 *)&param_1->DataPtr;
        uVar30 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
        uStack_118 = uStack_130;
        uStack_114 = uStack_12c;
        if (local_5c < local_88 + uVar19) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,uVar19);
          uVar29 = (undefined4)local_138;
          uVar30 = local_138._4_4_;
        }
        if (iVar24 != 0) {
          pvVar11 = FGenericPlatformString::Memcpy
                              (local_a8.CurPos,(void *)CONCAT44(uVar30,uVar29),uVar19 * 2);
          local_a8.CurPos = (wchar_t *)((longlong)pvVar11 + uVar19 * 2);
        }
        pwVar21 = local_a8.Base;
        iVar24 = (int)((longlong)local_a8.CurPos - (longlong)local_a8.Base >> 1);
        if ((iVar24 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pwVar23 = local_a8.Base;
        pwVar13 = pwVar21 + iVar24;
        for (; pwVar21 != pwVar13; pwVar21 = pwVar21 + 1) {
          if (*pwVar21 == L'-') {
            *pwVar21 = L'+';
          }
        }
        iVar24 = (int)((longlong)local_a8.CurPos - (longlong)local_a8.Base >> 1);
        if ((iVar24 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pwVar21 = pwVar23 + iVar24;
        for (; pwVar23 != pwVar21; pwVar23 = pwVar23 + 1) {
          if (*pwVar23 == L'_') {
            *pwVar23 = L'/';
          }
        }
        bVar7 = FBase64::Decode<wchar_t>
                          (local_a8.Base,
                           (uint)((longlong)local_a8.CurPos - (longlong)local_a8.Base >> 1),
                           (uchar *)&local_58,Standard);
        if (bVar7) {
          pTVar16 = &local_a8;
          bVar7 = true;
          local_138 = (wchar_t *)
                      CONCAT44(local_58._4_4_ >> 0x18 | (local_58._4_4_ & 0xff0000) >> 8 |
                               (local_58._4_4_ & 0xff00) << 8 | local_58._4_4_ << 0x18,
                               (uint)local_58 >> 0x18 | ((uint)local_58 & 0xff0000) >> 8 |
                               ((uint)local_58 & 0xff00) << 8 | (uint)local_58 << 0x18);
          uStack_130 = (uint)uStack_50 >> 0x18 | ((uint)uStack_50 & 0xff0000) >> 8 |
                       ((uint)uStack_50 & 0xff00) << 8 | (uint)uStack_50 << 0x18;
          uStack_12c = uStack_50._4_4_ >> 0x18 | (uStack_50._4_4_ & 0xff0000) >> 8 |
                       (uStack_50._4_4_ & 0xff00) << 8 | uStack_50._4_4_ << 0x18;
          *(wchar_t **)param_3 = local_138;
          param_3->C = uStack_130;
          param_3->D = uStack_12c;
        }
        else {
          bVar7 = false;
          pTVar16 = &local_a8;
        }
        goto LAB_1418ec876;
      }
    }
LAB_1418eb59b:
    bVar7 = false;
  }
  else {
    if (param_2 == Base36Encoded) {
      if (param_1->Size == 0x19) {
        pwVar13 = param_1->DataPtr;
        uVar9 = 0;
        uVar12 = 0;
        uVar14 = 0;
        uVar26 = 0;
        pwVar21 = pwVar13 + 0x19;
        if (pwVar13 != pwVar21) {
          uVar26 = 0;
          do {
            wVar3 = *pwVar13;
            uVar12 = ((ulonglong)uVar9 * 9 >> 0x1e) + (uVar12 >> 0x20) * 0x24;
            uVar14 = uVar9 * 0x24;
            uVar1 = (uVar12 >> 0x20) + (uVar26 & 0xffffffff) * 0x24;
            if ((ushort)(wVar3 + L'￐') < 10) {
              uVar17 = (ushort)wVar3 - 0x30;
              iVar24 = uVar14 - 0x30;
            }
            else {
              if (0x19 < (ushort)(wVar3 + L'﾿')) goto LAB_1418eb59b;
              uVar17 = (ushort)wVar3 - 0x37;
              iVar24 = uVar14 - 0x37;
            }
            uVar9 = iVar24 + (uint)(ushort)wVar3;
            pwVar13 = pwVar13 + 1;
            uVar20 = ((ulonglong)uVar17 + (ulonglong)uVar14 >> 0x20) + (uVar12 & 0xffffffff);
            uVar27 = (uVar20 >> 0x20) + (uVar1 & 0xffffffff);
            uVar12 = uVar20 << 0x20;
            uVar14 = (uint)uVar20;
            uVar26 = (uVar27 & 0xffffffff00000000) +
                     (uVar26 >> 0x20) * 0x2400000000 + (uVar1 & 0xffffffff00000000) |
                     uVar27 & 0xffffffff;
          } while (pwVar13 != pwVar21);
        }
        param_3->A = (uint)(uVar26 >> 0x20);
        param_3->B = (uint)uVar26;
        param_3->C = uVar14;
        param_3->D = uVar9;
        return true;
      }
      goto LAB_1418eb59b;
    }
    local_108.Base = (wchar_t *)local_e8;
    local_108.bIsDynamic = false;
    local_108.bIsExternal = false;
    local_108.CurPos = (wchar_t *)local_e8;
    local_108.End = (wchar_t *)&local_a8;
    if (param_2 < DigitsWithHyphens) {
      if (param_1->Size != 0x20) goto LAB_1418ec86f;
      local_58 = param_1->DataPtr;
      uStack_50 = *(undefined8 *)&param_1->Size;
      iVar24 = (int)*(undefined8 *)&param_1->Size;
      uVar19 = (ulong64)iVar24;
      uVar29 = *(undefined4 *)&param_1->DataPtr;
      uVar30 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
      if (&local_a8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_e8[0].Base + uVar19 * 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
        uVar29 = (uint)local_58;
        uVar30 = local_58._4_4_;
      }
      if (iVar24 != 0) {
        pwVar21 = (wchar_t *)CONCAT44(uVar30,uVar29);
LAB_1418ec649:
        pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,pwVar21,uVar19 * 2);
        local_108.CurPos = (wchar_t *)((longlong)pvVar11 + uVar19 * 2);
      }
LAB_1418ec65d:
      pwVar21 = local_108.Base;
      iVar24 = (int)((longlong)local_108.CurPos - (longlong)local_108.Base >> 1);
      ppwVar6 = (wchar_t **)local_108.Base;
      for (pTVar16 = (TStringBuilderBase<wchar_t> *)local_108.Base;
          pTVar16 != (TStringBuilderBase<wchar_t> *)((longlong)ppwVar6 + (longlong)iVar24 * 2);
          pTVar16 = (TStringBuilderBase<wchar_t> *)((longlong)&pTVar16->Base + 2)) {
        iVar10 = iswxdigit(*(wint_t *)&pTVar16->Base);
        if (iVar10 == 0) goto LAB_1418ec86f;
      }
      uVar9 = 0;
      iVar10 = 0x18;
      if (iVar24 < 0x18) {
        iVar10 = iVar24;
      }
      iVar15 = iVar24 - iVar10;
      if (8 < iVar15) {
        iVar15 = 8;
      }
      puVar22 = (ushort *)((longlong)(wchar_t **)pwVar21 + (longlong)iVar10 * 2);
      iVar10 = 0;
      if (0 < iVar15) {
        iVar10 = iVar15;
      }
      puVar2 = puVar22 + iVar10;
      for (; puVar22 != puVar2; puVar22 = puVar22 + 1) {
        uVar4 = *puVar22;
        if ((ushort)(uVar4 - 0x30) < 10) {
          iVar10 = uVar4 - 0x30;
        }
        else if ((ushort)(uVar4 - 0x61) < 6) {
          iVar10 = uVar4 - 0x57;
        }
        else {
          iVar10 = uVar4 - 0x37;
          if (5 < (ushort)(uVar4 - 0x41)) {
            iVar10 = 0;
          }
        }
        uVar9 = uVar9 * 0x10 + iVar10;
      }
      uVar14 = 0;
      iVar10 = 0x10;
      if (iVar24 < 0x10) {
        iVar10 = iVar24;
      }
      iVar15 = iVar24 - iVar10;
      if (8 < iVar15) {
        iVar15 = 8;
      }
      puVar22 = (ushort *)((longlong)(wchar_t **)pwVar21 + (longlong)iVar10 * 2);
      iVar10 = 0;
      if (0 < iVar15) {
        iVar10 = iVar15;
      }
      puVar2 = puVar22 + iVar10;
      for (; puVar22 != puVar2; puVar22 = puVar22 + 1) {
        uVar4 = *puVar22;
        if ((uVar4 < 0x30) || (0x39 < uVar4)) {
          if ((ushort)(uVar4 - 0x61) < 6) {
            iVar10 = uVar4 - 0x57;
          }
          else {
            iVar10 = uVar4 - 0x37;
            if (5 < (ushort)(uVar4 - 0x41)) {
              iVar10 = 0;
            }
          }
        }
        else {
          iVar10 = uVar4 - 0x30;
        }
        uVar14 = uVar14 * 0x10 + iVar10;
      }
      uVar17 = 0;
      iVar10 = 8;
      if (iVar24 < 8) {
        iVar10 = iVar24;
      }
      iVar15 = iVar24 - iVar10;
      if (8 < iVar15) {
        iVar15 = 8;
      }
      puVar22 = (ushort *)((longlong)(wchar_t **)pwVar21 + (longlong)iVar10 * 2);
      iVar10 = 0;
      if (0 < iVar15) {
        iVar10 = iVar15;
      }
      puVar2 = puVar22 + iVar10;
      for (; puVar22 != puVar2; puVar22 = puVar22 + 1) {
        uVar4 = *puVar22;
        if ((ushort)(uVar4 - 0x30) < 10) {
          iVar10 = uVar4 - 0x30;
        }
        else if ((ushort)(uVar4 - 0x61) < 6) {
          iVar10 = uVar4 - 0x57;
        }
        else {
          iVar10 = uVar4 - 0x37;
          if (5 < (ushort)(uVar4 - 0x41)) {
            iVar10 = 0;
          }
        }
        uVar17 = uVar17 * 0x10 + iVar10;
      }
      uVar18 = 0;
      iVar10 = 0;
      if (iVar24 < 0) {
        iVar10 = iVar24;
      }
      iVar15 = iVar24 - iVar10;
      if (8 < iVar24 - iVar10) {
        iVar15 = 8;
      }
      puVar22 = (ushort *)((longlong)(wchar_t **)pwVar21 + (longlong)iVar10 * 2);
      iVar24 = 0;
      if (0 < iVar15) {
        iVar24 = iVar15;
      }
      puVar2 = puVar22 + iVar24;
      for (; puVar22 != puVar2; puVar22 = puVar22 + 1) {
        uVar4 = *puVar22;
        if ((ushort)(uVar4 - 0x30) < 10) {
          iVar24 = uVar4 - 0x30;
        }
        else if ((ushort)(uVar4 - 0x61) < 6) {
          iVar24 = uVar4 - 0x57;
        }
        else {
          iVar24 = uVar4 - 0x37;
          if (5 < (ushort)(uVar4 - 0x41)) {
            iVar24 = 0;
          }
        }
        uVar18 = uVar18 * 0x10 + iVar24;
      }
      param_3->A = uVar18;
      bVar7 = true;
      param_3->B = uVar17;
      param_3->C = uVar14;
      param_3->D = uVar9;
    }
    else {
      if (param_2 - DigitsWithHyphens < 2) {
        if ((((param_1->Size == 0x24) && (pwVar21 = param_1->DataPtr, pwVar21[8] == L'-')) &&
            (pwVar21[0xd] == L'-')) && (pwVar21[0x12] == L'-')) {
          if (param_1->Size < 0x18) {
            local_148 = 0x17;
            local_140 = param_1->Size;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
          }
          pwVar21 = param_1->DataPtr;
          if (pwVar21[0x17] == L'-') {
            iVar24 = param_1->Size;
            iVar10 = 0;
            if (iVar24 < 0) {
              iVar10 = iVar24;
            }
            iVar15 = iVar24 - iVar10;
            if (8 < iVar15) {
              iVar15 = 8;
            }
            local_138 = pwVar21 + iVar10;
            iVar10 = 0;
            if (0 < iVar15) {
              iVar10 = iVar15;
            }
            uVar19 = (ulong64)iVar10;
            local_58 = (wchar_t *)(uVar19 * 2);
            if (local_108.End <
                (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2)
               ) {
              TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
            }
            if (iVar10 != 0) {
              pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_138,(ulong64)local_58)
              ;
              local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
            }
            iVar10 = 9;
            if (iVar24 < 9) {
              iVar10 = iVar24;
            }
            iVar15 = iVar24 - iVar10;
            if (4 < iVar24 - iVar10) {
              iVar15 = 4;
            }
            local_138 = pwVar21 + iVar10;
            iVar10 = 0;
            if (0 < iVar15) {
              iVar10 = iVar15;
            }
            local_120 = (wchar_t *)(longlong)iVar10;
            local_128 = CONCAT44(local_128._4_4_,iVar10);
            local_58 = (wchar_t *)((longlong)local_120 * 2);
            if (local_108.End <
                (TStringBuilderBase<wchar_t> *)
                ((longlong)(wchar_t **)local_108.CurPos + (longlong)local_120 * 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_108,(ulong64)local_120);
            }
            if ((int)local_128 != 0) {
              pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_138,(ulong64)local_58)
              ;
              local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)local_120 * 2);
            }
            iVar10 = 0xe;
            if (iVar24 < 0xe) {
              iVar10 = iVar24;
            }
            iVar15 = iVar24 - iVar10;
            if (4 < iVar24 - iVar10) {
              iVar15 = 4;
            }
            local_138 = pwVar21 + iVar10;
            iVar10 = 0;
            if (0 < iVar15) {
              iVar10 = iVar15;
            }
            local_120 = (wchar_t *)(longlong)iVar10;
            local_128 = CONCAT44(local_128._4_4_,iVar10);
            local_58 = (wchar_t *)((longlong)local_120 * 2);
            if (local_108.End <
                (TStringBuilderBase<wchar_t> *)
                ((longlong)(wchar_t **)local_108.CurPos + (longlong)local_120 * 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_108,(ulong64)local_120);
            }
            if ((int)local_128 != 0) {
              pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_138,(ulong64)local_58)
              ;
              local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)local_120 * 2);
            }
            iVar10 = 0x13;
            if (iVar24 < 0x13) {
              iVar10 = iVar24;
            }
            iVar15 = iVar24 - iVar10;
            if (4 < iVar24 - iVar10) {
              iVar15 = 4;
            }
            local_138 = pwVar21 + iVar10;
            iVar10 = 0;
            if (0 < iVar15) {
              iVar10 = iVar15;
            }
            uVar19 = (ulong64)iVar10;
            local_58 = (wchar_t *)(uVar19 * 2);
            if (local_108.End <
                (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2)
               ) {
              TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
            }
            if (iVar10 != 0) {
              pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_138,(ulong64)local_58)
              ;
              local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
            }
            iVar10 = 0x18;
            if (iVar24 < 0x18) {
              iVar10 = iVar24;
            }
            iVar24 = iVar24 - iVar10;
LAB_1418eb90a:
            iVar15 = 0xc;
            pwVar21 = pwVar21 + iVar10;
            bVar28 = SBORROW4(iVar24,0xc);
            iVar25 = iVar24 + -0xc;
            bVar7 = iVar24 == 0xc;
LAB_1418eb915:
            if (!bVar7 && bVar28 == iVar25 < 0) {
              iVar24 = iVar15;
            }
            iVar10 = 0;
            if (0 < iVar24) {
              iVar10 = iVar24;
            }
            uVar19 = (ulong64)iVar10;
            if (local_108.End <
                (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2)
               ) {
              TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
            }
            if (iVar10 != 0) goto LAB_1418ec649;
            goto LAB_1418ec65d;
          }
        }
      }
      else if (param_2 == DigitsWithHyphensInBraces) {
        if ((((param_1->Size == 0x26) && (pwVar21 = param_1->DataPtr, *pwVar21 == L'{')) &&
            (pwVar21[9] == L'-')) && (pwVar21[0xe] == L'-')) {
          if (param_1->Size < 0x14) {
            local_148 = 0x13;
            local_140 = param_1->Size;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
          }
          if (param_1->DataPtr[0x13] == L'-') {
            if (param_1->Size < 0x19) {
              local_148 = 0x18;
              local_140 = param_1->Size;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                );
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
            }
            if (param_1->DataPtr[0x18] == L'-') {
              if (param_1->Size < 0x26) {
                local_148 = 0x25;
                local_140 = param_1->Size;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  );
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
              }
              pwVar21 = param_1->DataPtr;
              if (pwVar21[0x25] == L'}') {
                iVar24 = param_1->Size;
                iVar10 = 1;
                if (iVar24 < 1) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (8 < iVar24 - iVar10) {
                  iVar15 = 8;
                }
                local_120 = pwVar21 + iVar10;
                iVar10 = 0;
                if (0 < iVar15) {
                  iVar10 = iVar15;
                }
                uVar19 = (ulong64)iVar10;
                local_128 = uVar19 * 2;
                if (local_108.End <
                    (TStringBuilderBase<wchar_t> *)
                    ((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
                }
                if (iVar10 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_120,local_128);
                  local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
                }
                iVar10 = 10;
                if (iVar24 < 10) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (4 < iVar24 - iVar10) {
                  iVar15 = 4;
                }
                local_138 = pwVar21 + iVar10;
                iVar10 = 0;
                if (0 < iVar15) {
                  iVar10 = iVar15;
                }
                local_58 = (wchar_t *)(longlong)iVar10;
                local_128 = CONCAT44(local_128._4_4_,iVar10);
                local_120 = (wchar_t *)((longlong)local_58 * 2);
                if (local_108.End <
                    (TStringBuilderBase<wchar_t> *)
                    ((longlong)(wchar_t **)local_108.CurPos + (longlong)local_58 * 2)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_108,(ulong64)local_58);
                }
                if ((int)local_128 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy
                                      (local_108.CurPos,local_138,(ulong64)local_120);
                  local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)local_58 * 2);
                }
                iVar10 = 0xf;
                if (iVar24 < 0xf) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (4 < iVar24 - iVar10) {
                  iVar15 = 4;
                }
                local_138 = pwVar21 + iVar10;
                iVar10 = 0;
                if (0 < iVar15) {
                  iVar10 = iVar15;
                }
                local_120 = (wchar_t *)(longlong)iVar10;
                local_128 = CONCAT44(local_128._4_4_,iVar10);
                local_58 = (wchar_t *)((longlong)local_120 * 2);
                if (local_108.End <
                    (TStringBuilderBase<wchar_t> *)
                    ((longlong)(wchar_t **)local_108.CurPos + (longlong)local_120 * 2)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_108,(ulong64)local_120);
                }
                if ((int)local_128 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy
                                      (local_108.CurPos,local_138,(ulong64)local_58);
                  local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)local_120 * 2);
                }
                iVar10 = 0x14;
                if (iVar24 < 0x14) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (4 < iVar24 - iVar10) {
                  iVar15 = 4;
                }
                local_138 = pwVar21 + iVar10;
                iVar10 = 0;
                if (0 < iVar15) {
                  iVar10 = iVar15;
                }
                uVar19 = (ulong64)iVar10;
                local_58 = (wchar_t *)(uVar19 * 2);
                if (local_108.End <
                    (TStringBuilderBase<wchar_t> *)
                    ((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
                }
                if (iVar10 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy
                                      (local_108.CurPos,local_138,(ulong64)local_58);
                  local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
                }
LAB_1418eb8fb:
                iVar10 = 0x19;
                if (iVar24 < 0x19) {
                  iVar10 = iVar24;
                }
                iVar24 = iVar24 - iVar10;
                goto LAB_1418eb90a;
              }
            }
          }
        }
      }
      else if (param_2 == DigitsWithHyphensInParentheses) {
        if (((param_1->Size == 0x26) && (pwVar21 = param_1->DataPtr, *pwVar21 == L'(')) &&
           ((pwVar21[9] == L'-' && (pwVar21[0xe] == L'-')))) {
          if (param_1->Size < 0x14) {
            local_148 = 0x13;
            local_140 = param_1->Size;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
          }
          if (param_1->DataPtr[0x13] == L'-') {
            if (param_1->Size < 0x19) {
              local_148 = 0x18;
              local_140 = param_1->Size;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                );
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
            }
            if (param_1->DataPtr[0x18] == L'-') {
              if (param_1->Size < 0x26) {
                local_148 = 0x25;
                local_140 = param_1->Size;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  );
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
              }
              pwVar21 = param_1->DataPtr;
              if (pwVar21[0x25] == L')') {
                iVar24 = param_1->Size;
                iVar10 = 1;
                if (iVar24 < 1) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (8 < iVar24 - iVar10) {
                  iVar15 = 8;
                }
                local_138 = pwVar21 + iVar10;
                iVar10 = 0;
                if (0 < iVar15) {
                  iVar10 = iVar15;
                }
                uVar19 = (ulong64)iVar10;
                local_58 = (wchar_t *)(uVar19 * 2);
                if (local_108.End <
                    (TStringBuilderBase<wchar_t> *)
                    ((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
                }
                if (iVar10 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy
                                      (local_108.CurPos,local_138,(ulong64)local_58);
                  local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
                }
                iVar10 = 10;
                if (iVar24 < 10) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (4 < iVar24 - iVar10) {
                  iVar15 = 4;
                }
                local_138 = pwVar21 + iVar10;
                iVar10 = 0;
                if (0 < iVar15) {
                  iVar10 = iVar15;
                }
                local_120 = (wchar_t *)(longlong)iVar10;
                local_128 = CONCAT44(local_128._4_4_,iVar10);
                local_58 = (wchar_t *)((longlong)local_120 * 2);
                if (local_108.End <
                    (TStringBuilderBase<wchar_t> *)
                    ((longlong)(wchar_t **)local_108.CurPos + (longlong)local_120 * 2)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_108,(ulong64)local_120);
                }
                if ((int)local_128 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy
                                      (local_108.CurPos,local_138,(ulong64)local_58);
                  local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)local_120 * 2);
                }
                iVar10 = 0xf;
                if (iVar24 < 0xf) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (4 < iVar24 - iVar10) {
                  iVar15 = 4;
                }
                local_138 = pwVar21 + iVar10;
                iVar10 = 0;
                if (0 < iVar15) {
                  iVar10 = iVar15;
                }
                local_120 = (wchar_t *)(longlong)iVar10;
                local_128 = CONCAT44(local_128._4_4_,iVar10);
                local_58 = (wchar_t *)((longlong)local_120 * 2);
                if (local_108.End <
                    (TStringBuilderBase<wchar_t> *)
                    ((longlong)(wchar_t **)local_108.CurPos + (longlong)local_120 * 2)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_108,(ulong64)local_120);
                }
                if ((int)local_128 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy
                                      (local_108.CurPos,local_138,(ulong64)local_58);
                  local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)local_120 * 2);
                }
                iVar10 = 0x14;
                if (iVar24 < 0x14) {
                  iVar10 = iVar24;
                }
                iVar15 = iVar24 - iVar10;
                if (4 < iVar15) {
                  iVar15 = 4;
                }
                iVar25 = 0;
                if (0 < iVar15) {
                  iVar25 = iVar15;
                }
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
                goto LAB_1418eb8fb;
              }
            }
          }
        }
      }
      else if (param_2 == HexValuesInBraces) {
        if (((param_1->Size == 0x44) && (pwVar21 = param_1->DataPtr, *pwVar21 == L'{')) &&
           ((pwVar21[1] == L'0' && (pwVar21[2] == L'x')))) {
          if (param_1->Size < 0xc) {
            local_148 = 0xb;
            local_140 = param_1->Size;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
          }
          if (param_1->DataPtr[0xb] == L',') {
            if (param_1->Size < 0xd) {
              local_148 = 0xc;
              local_140 = param_1->Size;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                );
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
            }
            pwVar21 = param_1->DataPtr;
            if (((((((pwVar21[0xc] == L'0') &&
                    (pwVar13 = TStringView<wchar_t>::operator[](param_1,0xd), *pwVar13 == L'x')) &&
                   (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x12), *pwVar13 == L',')) &&
                  (((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x13), *pwVar13 == L'0' &&
                    (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x14), *pwVar13 == L'x')) &&
                   ((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x19), *pwVar13 == L',' &&
                    ((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x1a), *pwVar13 == L'{' &&
                     (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x1b), *pwVar13 == L'0'))))
                   )))) && (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x1c),
                           *pwVar13 == L'x')) &&
                (((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x1f), *pwVar13 == L',' &&
                  (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x20), *pwVar13 == L'0')) &&
                 (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x21), *pwVar13 == L'x')))) &&
               (((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x24), *pwVar13 == L',' &&
                 (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x25), *pwVar13 == L'0')) &&
                (((((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x26), *pwVar13 == L'x' &&
                    ((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x29), *pwVar13 == L',' &&
                     (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x2a), *pwVar13 == L'0'))))
                   && (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x2b), *pwVar13 == L'x'))
                  && ((((((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x2e),
                          *pwVar13 == L',' &&
                          (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x2f),
                          *pwVar13 == L'0')) &&
                         (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x30), *pwVar13 == L'x'
                         )) && ((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x33),
                                *pwVar13 == L',' &&
                                (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x34),
                                *pwVar13 == L'0')))) &&
                       (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x35), *pwVar13 == L'x'))
                      && (((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x38),
                           *pwVar13 == L',' &&
                           (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x39),
                           *pwVar13 == L'0')) &&
                          ((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x3a),
                           *pwVar13 == L'x' &&
                           (((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x3d),
                             *pwVar13 == L',' &&
                             (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x3e),
                             *pwVar13 == L'0')) &&
                            (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x3f),
                            *pwVar13 == L'x')))))))))) &&
                 ((pwVar13 = TStringView<wchar_t>::operator[](param_1,0x42), *pwVar13 == L'}' &&
                  (pwVar13 = TStringView<wchar_t>::operator[](param_1,0x43), *pwVar13 == L'}')))))))
               ) {
              iVar24 = param_1->Size;
              iVar10 = 3;
              if (iVar24 < 3) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (8 < iVar15) {
                iVar15 = 8;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0xe;
              if (iVar24 < 0xe) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (4 < iVar15) {
                iVar15 = 4;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x15;
              if (iVar24 < 0x15) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (4 < iVar15) {
                iVar15 = 4;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x1d;
              if (iVar24 < 0x1d) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (2 < iVar15) {
                iVar15 = 2;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x22;
              if (iVar24 < 0x22) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (2 < iVar15) {
                iVar15 = 2;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x27;
              if (iVar24 < 0x27) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (2 < iVar15) {
                iVar15 = 2;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x2c;
              if (iVar24 < 0x2c) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (2 < iVar15) {
                iVar15 = 2;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x31;
              if (iVar24 < 0x31) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (2 < iVar15) {
                iVar15 = 2;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x36;
              if (iVar24 < 0x36) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (2 < iVar15) {
                iVar15 = 2;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x3b;
              if (iVar24 < 0x3b) {
                iVar10 = iVar24;
              }
              iVar15 = iVar24 - iVar10;
              if (2 < iVar15) {
                iVar15 = 2;
              }
              iVar25 = 0;
              if (0 < iVar15) {
                iVar25 = iVar15;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar25);
              iVar10 = 0x40;
              if (iVar24 < 0x40) {
                iVar10 = iVar24;
              }
              iVar24 = iVar24 - iVar10;
              if (2 < iVar24) {
                iVar24 = 2;
              }
              iVar15 = 0;
              if (0 < iVar24) {
                iVar15 = iVar24;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_108,pwVar21 + iVar10,iVar15);
              goto LAB_1418ec65d;
            }
          }
        }
      }
      else {
        if (param_2 != UniqueObjectGuid) goto LAB_1418ec65d;
        if (((param_1->Size == 0x23) && (pwVar21 = param_1->DataPtr, pwVar21[8] == L'-')) &&
           ((pwVar21[0x11] == L'-' && (pwVar21[0x1a] == L'-')))) {
          iVar24 = param_1->Size;
          iVar10 = 0;
          if (iVar24 < 0) {
            iVar10 = iVar24;
          }
          iVar15 = iVar24 - iVar10;
          if (8 < iVar15) {
            iVar15 = 8;
          }
          local_138 = pwVar21 + iVar10;
          iVar10 = 0;
          if (0 < iVar15) {
            iVar10 = iVar15;
          }
          uVar19 = (ulong64)iVar10;
          local_58 = (wchar_t *)(uVar19 * 2);
          if (local_108.End <
              (TStringBuilderBase<wchar_t> *)
              ((longlong)&((TStringBuilderBase<wchar_t> *)local_108.CurPos)->Base + uVar19 * 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
          }
          if (iVar10 != 0) {
            pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_138,(ulong64)local_58);
            local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
          }
          iVar10 = 9;
          if (iVar24 < 9) {
            iVar10 = iVar24;
          }
          iVar15 = iVar24 - iVar10;
          if (8 < iVar15) {
            iVar15 = 8;
          }
          local_138 = pwVar21 + iVar10;
          iVar10 = 0;
          if (0 < iVar15) {
            iVar10 = iVar15;
          }
          uVar19 = (ulong64)iVar10;
          local_58 = (wchar_t *)(uVar19 * 2);
          if (local_108.End <
              (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2))
          {
            TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
          }
          if (iVar10 != 0) {
            pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_138,(ulong64)local_58);
            local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
          }
          iVar10 = 0x12;
          if (iVar24 < 0x12) {
            iVar10 = iVar24;
          }
          iVar15 = iVar24 - iVar10;
          if (8 < iVar15) {
            iVar15 = 8;
          }
          local_138 = pwVar21 + iVar10;
          iVar10 = 0;
          if (0 < iVar15) {
            iVar10 = iVar15;
          }
          uVar19 = (ulong64)iVar10;
          local_58 = (wchar_t *)(uVar19 * 2);
          if (local_108.End <
              (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_108.CurPos + uVar19 * 2))
          {
            TStringBuilderBase<wchar_t>::Extend(&local_108,uVar19);
          }
          if (iVar10 != 0) {
            pvVar11 = FGenericPlatformString::Memcpy(local_108.CurPos,local_138,(ulong64)local_58);
            local_108.CurPos = (wchar_t *)((longlong)pvVar11 + (longlong)iVar10 * 2);
          }
          iVar15 = 8;
          iVar10 = 0x1b;
          if (iVar24 < 0x1b) {
            iVar10 = iVar24;
          }
          iVar24 = iVar24 - iVar10;
          bVar28 = SBORROW4(iVar24,8);
          iVar25 = iVar24 + -8;
          bVar7 = iVar25 == 0;
          pwVar21 = pwVar21 + iVar10;
          goto LAB_1418eb915;
        }
      }
LAB_1418ec86f:
      bVar7 = false;
    }
    pTVar16 = &local_108;
LAB_1418ec876:
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(pTVar16);
  }
  return bVar7;
}

