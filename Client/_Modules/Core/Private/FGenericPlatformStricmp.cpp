// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 26

// Stricmp @ 141661bb0

int __cdecl FGenericPlatformStricmp::Stricmp(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar1 | bVar2) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// Stricmp @ 141661bc0

int __cdecl FGenericPlatformStricmp::Stricmp(char *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  
  do {
    while( true ) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != uVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((((uint)bVar1 | (uint)uVar2) & 0xffffff80) != 0) {
      return (uint)bVar1 - (uint)uVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[uVar2] == 0);
  return (uint)""[bVar1] - (uint)""[uVar2];
}

// Stricmp @ 141661c40

int __cdecl FGenericPlatformStricmp::Stricmp(char *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar2 | bVar1) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// Stricmp @ 141661cc0

int __cdecl FGenericPlatformStricmp::Stricmp(char *param_1,wchar32 *param_2)

{
  byte bVar1;
  wchar32 wVar2;
  
  do {
    while( true ) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if ((uint)bVar1 != wVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((((uint)bVar1 | wVar2) & 0xffffff80U) != 0) {
      return (uint)bVar1 - wVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[(uint)wVar2] == 0);
  return (uint)""[bVar1] - (uint)""[(uint)wVar2];
}

// Stricmp @ 141661d20

int __cdecl FGenericPlatformStricmp::Stricmp(char *param_1,wchar_t *param_2)

{
  byte bVar1;
  wchar_t wVar2;
  
  do {
    while( true ) {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if ((ushort)bVar1 != wVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((((uint)bVar1 | (uint)(ushort)wVar2) & 0xffffff80) != 0) {
      return (uint)bVar1 - (uint)(ushort)wVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[(ushort)wVar2] == 0);
  return (uint)""[bVar1] - (uint)""[(ushort)wVar2];
}

// Stricmp @ 141661da0

int __cdecl FGenericPlatformStricmp::Stricmp(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      uVar1 = *(ushort *)(lVar3 + (longlong)param_2);
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      if (uVar1 != uVar2) break;
      if (uVar1 == 0) {
        return 0;
      }
    }
    if (((uVar2 | uVar1) & 0xff80) != 0) {
      return (uint)uVar1 - (uint)uVar2;
    }
  } while ((uint)""[uVar1] - (uint)""[uVar2] == 0);
  return (uint)""[uVar1] - (uint)""[uVar2];
}

// Stricmp @ 141661e20

int __cdecl FGenericPlatformStricmp::Stricmp(ushort *param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  
  do {
    while( true ) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (uVar2 != bVar1) break;
      if (uVar2 == 0) {
        return 0;
      }
    }
    if ((((uint)uVar2 | (uint)bVar1) & 0xffffff80) != 0) {
      return (uint)uVar2 - (uint)bVar1;
    }
  } while ((uint)""[uVar2] - (uint)""[bVar1] == 0);
  return (uint)""[uVar2] - (uint)""[bVar1];
}

// Stricmp @ 141661ea0

int __cdecl FGenericPlatformStricmp::Stricmp(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar2 | bVar1) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// Stricmp @ 141661f20

int __cdecl FGenericPlatformStricmp::Stricmp(uchar *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      bVar1 = param_2[lVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) break;
      if (bVar1 == 0) {
        return 0;
      }
    }
    if ((char)(bVar2 | bVar1) < '\0') {
      return (uint)bVar1 - (uint)bVar2;
    }
  } while ((uint)""[bVar1] - (uint)""[bVar2] == 0);
  return (uint)""[bVar1] - (uint)""[bVar2];
}

// Stricmp @ 141661fa0

int __cdecl FGenericPlatformStricmp::Stricmp(wchar32 *param_1,wchar32 *param_2)

{
  wchar32 wVar1;
  wchar32 wVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      wVar1 = *(wchar32 *)(lVar3 + (longlong)param_2);
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    if (((wVar2 | wVar1) & 0xffffff80U) != 0) {
      return wVar1 - wVar2;
    }
  } while ((uint)""[(uint)wVar1] - (uint)""[(uint)wVar2] == 0);
  return (uint)""[(uint)wVar1] - (uint)""[(uint)wVar2];
}

// Stricmp @ 141661ff0

int __cdecl FGenericPlatformStricmp::Stricmp(wchar32 *param_1,char *param_2)

{
  byte bVar1;
  wchar32 wVar2;
  
  do {
    while( true ) {
      wVar2 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (wVar2 != (uint)bVar1) break;
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    if ((((uint)bVar1 | wVar2) & 0xffffff80U) != 0) {
      return wVar2 - (uint)bVar1;
    }
  } while ((uint)""[(uint)wVar2] - (uint)""[bVar1] == 0);
  return (uint)""[(uint)wVar2] - (uint)""[bVar1];
}

// Stricmp @ 141662040

int __cdecl FGenericPlatformStricmp::Stricmp(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    while( true ) {
      wVar1 = *(wchar_t *)(lVar3 + (longlong)param_2);
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      if (wVar1 != wVar2) break;
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    if (((wVar1 | wVar2) & 0xff80U) != 0) {
      return (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
    }
  } while ((uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2] == 0);
  return (uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2];
}

// Stricmp @ 141662050

int __cdecl FGenericPlatformStricmp::Stricmp(wchar_t *param_1,char *param_2)

{
  byte bVar1;
  wchar_t wVar2;
  
  do {
    while( true ) {
      wVar2 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (wVar2 != (ushort)bVar1) break;
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    if ((((uint)(ushort)wVar2 | (uint)bVar1) & 0xffffff80) != 0) {
      return (uint)(ushort)wVar2 - (uint)bVar1;
    }
  } while ((uint)""[(ushort)wVar2] - (uint)""[bVar1] == 0);
  return (uint)""[(ushort)wVar2] - (uint)""[bVar1];
}

// Strnicmp @ 1416623b0

int __cdecl FGenericPlatformStricmp::Strnicmp(char *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = param_2[lVar3];
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if (bVar1 == bVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if (((bVar2 | bVar1) & 0x80) != 0) {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((uint)""[bVar1] - (uint)""[bVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[bVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662430

int __cdecl FGenericPlatformStricmp::Strnicmp(char *param_1,ushort *param_2,ulong64 param_3)

{
  byte bVar1;
  ushort uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 == (uint)uVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((uint)uVar2 | (int)(char)bVar1) & 0xffffff80) != 0) {
        return (uint)bVar1 - (uint)uVar2;
      }
      if ((uint)""[bVar1] - (uint)""[uVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[uVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 1416624b0

int __cdecl FGenericPlatformStricmp::Strnicmp(char *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = param_2[lVar3];
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 == (uint)bVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((uint)bVar2 | (int)(char)bVar1) & 0xffffff80) != 0) {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((uint)""[bVar1] - (uint)""[bVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[bVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662530

int __cdecl FGenericPlatformStricmp::Strnicmp(char *param_1,wchar32 *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar32 wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((char)bVar1 == wVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((char)bVar1 | wVar2) & 0xffffff80U) != 0) {
        return (uint)bVar1 - wVar2;
      }
      if ((uint)""[bVar1] - (uint)""[(uint)wVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[(uint)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662590

int __cdecl FGenericPlatformStricmp::Strnicmp(char *param_1,wchar_t *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(char)bVar1 == (uint)(ushort)wVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((((uint)(ushort)wVar2 | (int)(char)bVar1) & 0xffffff80) != 0) {
        return (uint)bVar1 - (uint)(ushort)wVar2;
      }
      if ((uint)""[bVar1] - (uint)""[(ushort)wVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[(ushort)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662610

int __cdecl FGenericPlatformStricmp::Strnicmp(ushort *param_1,ushort *param_2,ulong64 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    uVar1 = *(ushort *)(lVar3 + (longlong)param_2);
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    if (uVar1 == uVar2) {
      if (uVar1 == 0) {
        return 0;
      }
    }
    else {
      if (((uVar2 | uVar1) & 0xff80) != 0) {
        return (uint)uVar1 - (uint)uVar2;
      }
      if ((uint)""[uVar1] - (uint)""[uVar2] != 0) {
        return (uint)""[uVar1] - (uint)""[uVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 1416626d0

int __cdecl FGenericPlatformStricmp::Strnicmp(ushort *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  ushort uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    if ((uint)uVar2 == (int)(char)bVar1) {
      if (uVar2 == 0) {
        return 0;
      }
    }
    else {
      if ((((int)(char)bVar1 | (uint)uVar2) & 0xffffff80) != 0) {
        return (uint)uVar2 - (uint)bVar1;
      }
      if ((uint)""[uVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[uVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662740

int __cdecl FGenericPlatformStricmp::Strnicmp(uchar *param_1,uchar *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = param_2[lVar3];
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if (bVar1 == bVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if ((char)(bVar2 | bVar1) < '\0') {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((uint)""[bVar1] - (uint)""[bVar2] != 0) {
        return (uint)""[bVar1] - (uint)""[bVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662800

int __cdecl FGenericPlatformStricmp::Strnicmp(uchar *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    bVar1 = *param_2;
    bVar2 = param_2[lVar3];
    param_2 = param_2 + 1;
    if ((uint)bVar2 == (int)(char)bVar1) {
      if (bVar2 == 0) {
        return 0;
      }
    }
    else {
      if ((((int)(char)bVar1 | (uint)bVar2) & 0xffffff80) != 0) {
        return (uint)bVar2 - (uint)bVar1;
      }
      if ((uint)""[bVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[bVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662870

int __cdecl FGenericPlatformStricmp::Strnicmp(wchar32 *param_1,wchar32 *param_2,ulong64 param_3)

{
  wchar32 wVar1;
  wchar32 wVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    wVar1 = *(wchar32 *)(lVar3 + (longlong)param_2);
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if (wVar1 == wVar2) {
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    else {
      if (((wVar2 | wVar1) & 0xffffff80U) != 0) {
        return wVar1 - wVar2;
      }
      if ((uint)""[(uint)wVar1] - (uint)""[(uint)wVar2] != 0) {
        return (uint)""[(uint)wVar1] - (uint)""[(uint)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 1416628e0

int __cdecl FGenericPlatformStricmp::Strnicmp(wchar32 *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar32 wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    if (wVar2 == (char)bVar1) {
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    else {
      if ((((char)bVar1 | wVar2) & 0xffffff80U) != 0) {
        return wVar2 - (uint)bVar1;
      }
      if ((uint)""[(uint)wVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[(uint)wVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662950

int __cdecl FGenericPlatformStricmp::Strnicmp(wchar_t *param_1,wchar_t *param_2,ulong64 param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_1 - (longlong)param_2;
  do {
    wVar1 = *(wchar_t *)(lVar3 + (longlong)param_2);
    wVar2 = *param_2;
    param_2 = param_2 + 1;
    if (wVar1 == wVar2) {
      if (wVar1 == L'\0') {
        return 0;
      }
    }
    else {
      if (((wVar2 | wVar1) & 0xff80U) != 0) {
        return (uint)(ushort)wVar1 - (uint)(ushort)wVar2;
      }
      if ((uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2] != 0) {
        return (uint)""[(ushort)wVar1] - (uint)""[(ushort)wVar2];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

// Strnicmp @ 141662a10

int __cdecl FGenericPlatformStricmp::Strnicmp(wchar_t *param_1,char *param_2,ulong64 param_3)

{
  byte bVar1;
  wchar_t wVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    if ((uint)(ushort)wVar2 == (int)(char)bVar1) {
      if (wVar2 == L'\0') {
        return 0;
      }
    }
    else {
      if ((((int)(char)bVar1 | (uint)(ushort)wVar2) & 0xffffff80) != 0) {
        return (uint)(ushort)wVar2 - (uint)bVar1;
      }
      if ((uint)""[(ushort)wVar2] - (uint)""[bVar1] != 0) {
        return (uint)""[(ushort)wVar2] - (uint)""[bVar1];
      }
    }
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

