// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// Strifind @ 1415f6df0

wchar_t * __cdecl TCString<wchar_t>::Strifind(wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t wVar9;
  
  if ((param_2 != (wchar_t *)0x0) && (param_1 != (wchar_t *)0x0)) {
    wVar1 = *param_2;
    bVar3 = false;
    wVar9 = wVar1 + L'￠';
    if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
      wVar9 = wVar1;
    }
    sVar5 = wcslen(param_2);
    wVar1 = *param_1;
    pwVar7 = param_1 + 1;
    iVar8 = (int)sVar5 + -1;
    if (param_3) {
      bVar2 = false;
      while (wVar1 != L'\0') {
        wVar6 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar6 = wVar1;
        }
        if (((!bVar2) && (!bVar3)) &&
           ((wVar6 == wVar9 &&
            (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar7,param_2 + 1,(longlong)iVar8),
            iVar4 == 0)))) {
LAB_1415f6ed6:
          return pwVar7 + -1;
        }
        if (((ushort)(wVar6 + L'﾿') < 0x1a) || ((ushort)(wVar6 + L'￐') < 10)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (wVar6 == L'\"') {
          bVar2 = !bVar2;
        }
        wVar1 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      }
    }
    else {
      while (wVar1 != L'\0') {
        wVar6 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar6 = wVar1;
        }
        if (((!bVar3) && (wVar6 == wVar9)) &&
           (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar7,param_2 + 1,(longlong)iVar8),
           iVar4 == 0)) goto LAB_1415f6ed6;
        if (((ushort)(wVar6 + L'﾿') < 0x1a) || ((ushort)(wVar6 + L'￐') < 10)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        wVar1 = *pwVar7;
        pwVar7 = pwVar7 + 1;
      }
    }
  }
  return (wchar_t *)0x0;
}

// Stristr @ 1415f7060

char * __cdecl TCString<char>::Stristr(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  byte bVar5;
  char *pcVar6;
  
  if ((param_2 != (char *)0x0) && (param_1 != (char *)0x0)) {
    bVar1 = *param_2;
    bVar5 = -((int)(char)bVar1 - 0x61U < 0x1a) & 0x20;
    if (bVar1 == bVar5) {
      return param_1;
    }
    sVar4 = strlen(param_2);
    cVar2 = *param_1;
    while( true ) {
      if (cVar2 == '\0') {
        return (char *)0x0;
      }
      pcVar6 = param_1 + 1;
      if (((byte)(cVar2 - (-((int)cVar2 - 0x61U < 0x1a) & 0x20U)) == (byte)(bVar1 - bVar5)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp(pcVar6,param_2 + 1,(longlong)((int)sVar4 + -1)),
         iVar3 == 0)) break;
      cVar2 = *pcVar6;
      param_1 = pcVar6;
    }
    return param_1;
  }
  return (char *)0x0;
}

// Stristr @ 1415f7130

char * __cdecl TCString<char>::Stristr(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  
  if ((param_2 != (char *)0x0) && (param_1 != (char *)0x0)) {
    bVar1 = *param_2;
    bVar3 = -((int)(char)bVar1 - 0x61U < 0x1a) & 0x20;
    if (bVar1 == bVar3) {
      return param_1;
    }
    sVar5 = strlen(param_2);
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      pcVar6 = param_1 + 1;
      if (((byte)(cVar2 - (-((int)cVar2 - 0x61U < 0x1a) & 0x20U)) == (byte)(bVar1 - bVar3)) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(pcVar6,param_2 + 1,(longlong)((int)sVar5 + -1)),
         iVar4 == 0)) {
        return param_1;
      }
      param_1 = pcVar6;
      cVar2 = *pcVar6;
    }
  }
  return (char *)0x0;
}

// Stristr @ 1415f71e0

uchar * __cdecl TCString<char8_t>::Stristr(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  byte bVar5;
  byte *pbVar6;
  
  if ((param_2 != (uchar *)0x0) && (param_1 != (uchar *)0x0)) {
    bVar1 = *param_2;
    bVar5 = -(bVar1 - 0x61 < 0x1a) & 0x20;
    if (bVar1 == bVar5) {
      return param_1;
    }
    sVar4 = strlen((char *)param_2);
    bVar2 = *param_1;
    while( true ) {
      if (bVar2 == 0) {
        return (uchar *)0x0;
      }
      pbVar6 = param_1 + 1;
      if (((byte)(bVar2 - (-(bVar2 - 0x61 < 0x1a) & 0x20U)) == (byte)(bVar1 - bVar5)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp(pbVar6,param_2 + 1,(longlong)((int)sVar4 + -1)),
         iVar3 == 0)) break;
      bVar2 = *pbVar6;
      param_1 = pbVar6;
    }
    return param_1;
  }
  return (uchar *)0x0;
}

// Stristr @ 1415f72b0

uchar * __cdecl TCString<char8_t>::Stristr(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  
  if ((param_2 != (uchar *)0x0) && (param_1 != (uchar *)0x0)) {
    bVar1 = *param_2;
    bVar3 = -(bVar1 - 0x61 < 0x1a) & 0x20;
    if (bVar1 == bVar3) {
      return param_1;
    }
    sVar5 = strlen((char *)param_2);
    bVar2 = *param_1;
    while (bVar2 != 0) {
      pbVar6 = param_1 + 1;
      if (((byte)(bVar2 - (-(bVar2 - 0x61 < 0x1a) & 0x20U)) == (byte)(bVar1 - bVar3)) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(pbVar6,param_2 + 1,(longlong)((int)sVar5 + -1)),
         iVar4 == 0)) {
        return param_1;
      }
      param_1 = pbVar6;
      bVar2 = *pbVar6;
    }
  }
  return (uchar *)0x0;
}

// Stristr @ 1415f7360

wchar_t * __cdecl TCString<wchar_t>::Stristr(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  size_t sVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  
  if ((param_2 != (wchar_t *)0x0) && (param_1 != (wchar_t *)0x0)) {
    wVar1 = *param_2;
    wVar5 = -(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20;
    if (wVar1 == wVar5) {
      return param_1;
    }
    sVar4 = wcslen(param_2);
    wVar2 = *param_1;
    while( true ) {
      if (wVar2 == L'\0') {
        return (wchar_t *)0x0;
      }
      pwVar6 = param_1 + 1;
      if (((wchar_t)(wVar2 - (-(ushort)((ushort)wVar2 - 0x61 < 0x1a) & 0x20)) ==
           (wchar_t)(wVar1 - wVar5)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar6,param_2 + 1,(longlong)((int)sVar4 + -1)),
         iVar3 == 0)) break;
      wVar2 = *pwVar6;
      param_1 = pwVar6;
    }
    return param_1;
  }
  return (wchar_t *)0x0;
}

// Stristr @ 1415f7440

wchar_t * __cdecl TCString<wchar_t>::Stristr(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  int iVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  
  if ((param_2 != (wchar_t *)0x0) && (param_1 != (wchar_t *)0x0)) {
    wVar1 = *param_2;
    wVar3 = -(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20;
    if (wVar1 == wVar3) {
      return param_1;
    }
    sVar5 = wcslen(param_2);
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      pwVar6 = param_1 + 1;
      if (((wchar_t)(wVar2 - (-(ushort)((ushort)wVar2 - 0x61 < 0x1a) & 0x20)) ==
           (wchar_t)(wVar1 - wVar3)) &&
         (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar6,param_2 + 1,(longlong)((int)sVar5 + -1)),
         iVar4 == 0)) {
        return param_1;
      }
      param_1 = pwVar6;
      wVar2 = *pwVar6;
    }
  }
  return (wchar_t *)0x0;
}

// Strnistr @ 1415f7500

char * __cdecl TCString<char>::Strnistr(char *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_4 < 1) {
    if ((param_4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x34d,L"Invalid FindLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pcVar5 = (char *)(*pcVar2)();
      return pcVar5;
    }
    return param_1;
  }
  if (param_2 < param_4) {
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStrLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x352,L"Invalid InStrLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pcVar5 = (char *)(*pcVar2)();
      return pcVar5;
    }
LAB_1415f758e:
    pcVar6 = (char *)0x0;
  }
  else {
    cVar1 = *param_3;
    pcVar5 = param_1;
    do {
      pcVar6 = pcVar5;
      if (param_1 + ((longlong)param_2 - (longlong)param_4) < pcVar6) goto LAB_1415f758e;
      pcVar5 = pcVar6 + 1;
    } while (((byte)(*pcVar6 - (-((int)*pcVar6 - 0x61U < 0x1a) & 0x20U)) !=
              (byte)(cVar1 - (-((int)cVar1 - 0x61U < 0x1a) & 0x20U))) ||
            (iVar4 = FGenericPlatformStricmp::Strnicmp(pcVar5,param_3 + 1,(longlong)param_4 - 1),
            iVar4 != 0));
  }
  return pcVar6;
}

// Strnistr @ 1415f7610

uchar * __cdecl TCString<char8_t>::Strnistr(uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_4 < 1) {
    if ((param_4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x34d,L"Invalid FindLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
    return param_1;
  }
  if (param_2 < param_4) {
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStrLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x352,L"Invalid InStrLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
LAB_1415f769e:
    pbVar6 = (byte *)0x0;
  }
  else {
    bVar1 = *param_3;
    pbVar7 = param_1;
    do {
      pbVar6 = pbVar7;
      if (param_1 + ((longlong)param_2 - (longlong)param_4) < pbVar6) goto LAB_1415f769e;
      pbVar7 = pbVar6 + 1;
    } while (((byte)(*pbVar6 - (-(*pbVar6 - 0x61 < 0x1a) & 0x20U)) !=
              (byte)(bVar1 - (-(bVar1 - 0x61 < 0x1a) & 0x20U))) ||
            (iVar4 = FGenericPlatformStricmp::Strnicmp(pbVar7,param_3 + 1,(longlong)param_4 - 1),
            iVar4 != 0));
  }
  return pbVar6;
}

// Strnistr @ 1415f7720

wchar_t * __cdecl
TCString<wchar_t>::Strnistr(wchar_t *param_1,int param_2,wchar_t *param_3,int param_4)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  if (param_4 < 1) {
    if ((param_4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x34d,L"Invalid FindLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
    return param_1;
  }
  if (param_2 < param_4) {
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStrLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x352,L"Invalid InStrLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
LAB_1415f77ae:
    pwVar6 = (wchar_t *)0x0;
  }
  else {
    wVar1 = *param_3;
    pwVar5 = param_1;
    do {
      pwVar6 = pwVar5;
      if (param_1 + ((longlong)param_2 - (longlong)param_4) < pwVar6) goto LAB_1415f77ae;
      pwVar5 = pwVar6 + 1;
    } while (((wchar_t)(*pwVar6 - (-(ushort)((ushort)*pwVar6 - 0x61 < 0x1a) & 0x20)) !=
              (wchar_t)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20))) ||
            (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar5,param_3 + 1,(longlong)param_4 - 1),
            iVar4 != 0));
  }
  return pwVar6;
}

// Strnstr @ 1415f7850

char * __cdecl TCString<char>::Strnstr(char *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_4;
  if (param_4 < 1) {
    if ((param_4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x375,L"Invalid FindLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pcVar5 = (char *)(*pcVar2)();
      return pcVar5;
    }
    return param_1;
  }
  if (param_2 < param_4) {
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStrLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x37a,L"Invalid InStrLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pcVar5 = (char *)(*pcVar2)();
      return pcVar5;
    }
LAB_1415f78f2:
    puVar7 = (ulonglong *)0x0;
  }
  else {
    cVar1 = *param_3;
    pcVar5 = param_3 + 1;
    puVar8 = (ulonglong *)(param_1 + (param_2 - lVar10));
    uVar9 = param_2 + (1 - param_4);
    if (7 < uVar9) {
      for (; (((ulonglong)param_1 & 7) != 0 && (1 < (int)uVar9)); uVar9 = uVar9 - 1) {
        if (((char)*(ulonglong *)param_1 == cVar1) &&
           (iVar4 = strncmp((char *)((longlong)param_1 + 1),pcVar5,lVar10 - 1), iVar4 == 0)) {
          return (char *)(ulonglong *)param_1;
        }
        param_1 = (char *)((longlong)param_1 + 1);
      }
      for (; 7 < (int)uVar9; uVar9 = uVar9 - 8) {
        uVar6 = ~((longlong)cVar1 * 0x101010101010101 ^ *(ulonglong *)param_1);
        puVar7 = (ulonglong *)param_1;
        for (uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x101010101010101 & uVar6 & 0x8080808080808080;
            uVar6 != 0; uVar6 = uVar6 >> 8) {
          if (((char)uVar6 == -0x80) &&
             (iVar4 = strncmp((char *)((longlong)puVar7 + 1),pcVar5,lVar10 - 1), iVar4 == 0)) {
            return (char *)puVar7;
          }
          puVar7 = (ulonglong *)((longlong)puVar7 + 1);
        }
        param_1 = (char *)((longlong)param_1 + 8);
      }
    }
    do {
      puVar7 = (ulonglong *)param_1;
      if (puVar8 < puVar7) goto LAB_1415f78f2;
      param_1 = (char *)((longlong)puVar7 + 1);
    } while (((char)*puVar7 != cVar1) || (iVar4 = strncmp(param_1,pcVar5,lVar10 - 1), iVar4 != 0));
  }
  return (char *)puVar7;
}

// Strnstr @ 1415f7a90

uchar * __cdecl TCString<char8_t>::Strnstr(uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_4;
  if (param_4 < 1) {
    if ((param_4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x375,L"Invalid FindLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
    return param_1;
  }
  if (param_2 < param_4) {
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStrLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x37a,L"Invalid InStrLen: %d"), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
LAB_1415f7b32:
    puVar7 = (ulonglong *)0x0;
  }
  else {
    bVar1 = *param_3;
    puVar5 = param_3 + 1;
    puVar8 = (ulonglong *)(param_1 + (param_2 - lVar10));
    uVar9 = param_2 + (1 - param_4);
    if (7 < uVar9) {
      for (; (((ulonglong)param_1 & 7) != 0 && (1 < (int)uVar9)); uVar9 = uVar9 - 1) {
        if (((byte)*(ulonglong *)param_1 == bVar1) &&
           (iVar4 = strncmp((char *)((longlong)param_1 + 1),(char *)puVar5,lVar10 - 1), iVar4 == 0))
        {
          return (uchar *)(ulonglong *)param_1;
        }
        param_1 = (uchar *)((longlong)param_1 + 1);
      }
      for (; 7 < (int)uVar9; uVar9 = uVar9 - 8) {
        uVar6 = ~((ulonglong)bVar1 * 0x101010101010101 ^ *(ulonglong *)param_1);
        puVar7 = (ulonglong *)param_1;
        for (uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x101010101010101 & uVar6 & 0x8080808080808080;
            uVar6 != 0; uVar6 = uVar6 >> 8) {
          if (((char)uVar6 == -0x80) &&
             (iVar4 = strncmp((char *)((longlong)puVar7 + 1),(char *)puVar5,lVar10 - 1), iVar4 == 0)
             ) {
            return (uchar *)puVar7;
          }
          puVar7 = (ulonglong *)((longlong)puVar7 + 1);
        }
        param_1 = (uchar *)((longlong)param_1 + 8);
      }
    }
    do {
      puVar7 = (ulonglong *)param_1;
      if (puVar8 < puVar7) goto LAB_1415f7b32;
      param_1 = (uchar *)((longlong)puVar7 + 1);
    } while (((byte)*puVar7 != bVar1) ||
            (iVar4 = strncmp((char *)param_1,(char *)puVar5,lVar10 - 1), iVar4 != 0));
  }
  return (uchar *)puVar7;
}

// Strnstr @ 1415f7cd0

wchar_t * __cdecl
TCString<wchar_t>::Strnstr(wchar_t *param_1,int param_2,wchar_t *param_3,int param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_4;
  if (param_4 < 1) {
    if ((param_4 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x375,L"Invalid FindLen: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pwVar6 = (wchar_t *)(*pcVar3)();
      return pwVar6;
    }
    return param_1;
  }
  if (param_2 < param_4) {
    if ((param_2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStrLen >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x37a,L"Invalid InStrLen: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pwVar6 = (wchar_t *)(*pcVar3)();
      return pwVar6;
    }
LAB_1415f7d72:
    pwVar7 = (wchar_t *)0x0;
  }
  else {
    wVar2 = *param_3;
    pwVar6 = param_3 + 1;
    uVar9 = param_2 + (1 - param_4);
    pwVar1 = param_1 + (param_2 - lVar10);
    if (3 < uVar9) {
      for (; (((ulonglong)param_1 & 0xf) != 0 && (1 < (int)uVar9)); uVar9 = uVar9 - 1) {
        if ((*param_1 == wVar2) && (iVar5 = wcsncmp(param_1 + 1,pwVar6,lVar10 - 1), iVar5 == 0)) {
          return param_1;
        }
        param_1 = param_1 + 1;
      }
      for (; 3 < (int)uVar9; uVar9 = uVar9 - 4) {
        uVar8 = ~((ulonglong)(ushort)wVar2 * 0x1000100010001 ^ *(ulonglong *)param_1);
        pwVar7 = param_1;
        for (uVar8 = (uVar8 & 0x7fff7fff7fff7fff) + 0x1000100010001 & uVar8 & 0x8000800080008000;
            uVar8 != 0; uVar8 = uVar8 >> 0x10) {
          if (((short)uVar8 == -0x8000) &&
             (iVar5 = wcsncmp(pwVar7 + 1,pwVar6,lVar10 - 1), iVar5 == 0)) {
            return pwVar7;
          }
          pwVar7 = pwVar7 + 1;
        }
        param_1 = param_1 + 4;
      }
    }
    do {
      pwVar7 = param_1;
      if (pwVar1 < pwVar7) goto LAB_1415f7d72;
      param_1 = pwVar7 + 1;
    } while ((*pwVar7 != wVar2) || (iVar5 = wcsncmp(param_1,pwVar6,lVar10 - 1), iVar5 != 0));
  }
  return pwVar7;
}

// SnprintfImpl @ 1416606c0

int __cdecl TCString<char>::SnprintfImpl(char *param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  ulong64 *puVar3;
  undefined1 local_res20 [8];
  
  puVar3 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar3 | 2,param_1,(longlong)param_2,param_3,0,local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  iVar2 = -1;
  if ((iVar1 != -1) && (iVar1 < param_2)) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// SnprintfImpl @ 141660740

int __cdecl TCString<wchar_t>::SnprintfImpl(wchar_t *param_1,int param_2,wchar_t *param_3)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res20 [8];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf(*puVar2,param_1,(longlong)param_2,param_3,0,local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (param_2 <= iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}

// SprintfImpl @ 1416607b0

int __cdecl TCString<char>::SprintfImpl(char *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res18 [16];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,0x400,param_2,0,local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if ((iVar1 == -1) || (0x3ff < iVar1)) {
    iVar1 = -1;
  }
  return iVar1;
}

// StrncatTruncateDest @ 1416620d0

char * __cdecl TCString<char>::StrncatTruncateDest(char *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = *param_3;
  if (cVar3 != '\0') {
    sVar1 = strlen(param_1);
    iVar4 = (int)sVar1 + 1;
    if (iVar4 < param_2) {
      pcVar2 = param_1 + (int)sVar1;
      do {
        *pcVar2 = cVar3;
        param_3 = param_3 + 1;
        cVar3 = *param_3;
        pcVar2 = pcVar2 + 1;
        iVar4 = iVar4 + 1;
        if (cVar3 == '\0') break;
      } while (iVar4 < param_2);
      *pcVar2 = '\0';
    }
  }
  return param_1;
}

// SprintfImpl @ 1416c1a70

int __cdecl TCString<wchar_t>::SprintfImpl(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res18 [16];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf(*puVar2,param_1,0x400,param_2,0,local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (0x3ff < iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}

// StrncatTruncateDest @ 141833b40

wchar_t * __cdecl
TCString<wchar_t>::StrncatTruncateDest(wchar_t *param_1,int param_2,wchar_t *param_3)

{
  size_t sVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  int iVar4;
  
  wVar3 = *param_3;
  if (wVar3 != L'\0') {
    sVar1 = wcslen(param_1);
    iVar4 = (int)sVar1 + 1;
    if (iVar4 < param_2) {
      pwVar2 = param_1 + (int)sVar1;
      do {
        *pwVar2 = wVar3;
        param_3 = param_3 + 1;
        wVar3 = *param_3;
        pwVar2 = pwVar2 + 1;
        iVar4 = iVar4 + 1;
        if (wVar3 == L'\0') break;
      } while (iVar4 < param_2);
      *pwVar2 = L'\0';
    }
  }
  return param_1;
}

// Spc @ 141a21590

wchar_t * __cdecl TCString<wchar_t>::Spc(int param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (0xff < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                       ,0x272,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"                                                                                                                                                                                                                                                               "
         + (0xff - (longlong)param_1);
}

