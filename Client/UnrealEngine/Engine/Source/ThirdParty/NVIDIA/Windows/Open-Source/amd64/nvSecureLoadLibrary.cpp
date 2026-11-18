// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NVIDIA
// Functions: 70

// FUN_140e7d580 @ 140e7d580

longlong FUN_140e7d580(short *param_1,longlong param_2,longlong *param_3,short *param_4,
                      longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  lVar2 = lVar1;
  do {
    if (param_2 == 0) {
LAB_140e7d5ce:
      param_1 = param_1 + -1;
      lVar1 = 0x8007007a;
      lVar2 = lVar2 + -1;
LAB_140e7d5db:
      *param_1 = 0;
      if (param_3 != (longlong *)0x0) {
        *param_3 = lVar2;
      }
      return lVar1;
    }
    if ((param_5 == 0) || (*param_4 == 0)) {
      if (param_2 != 0) goto LAB_140e7d5db;
      goto LAB_140e7d5ce;
    }
    *param_1 = *param_4;
    param_1 = param_1 + 1;
    param_4 = param_4 + 1;
    param_5 = param_5 + -1;
    lVar2 = lVar2 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

// FUN_140e7d600 @ 140e7d600

LPWSTR FUN_140e7d600(WCHAR *param_1)

{
  WCHAR WVar1;
  UINT UVar2;
  LPWSTR lpBuffer;
  ulonglong uVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  LPWSTR pWVar6;
  WCHAR *pWVar7;
  LPWSTR pWVar8;
  
  pWVar6 = (LPWSTR)0x0;
  lpBuffer = pWVar6;
  if (param_1 != (WCHAR *)0x0) {
    UVar2 = GetSystemDirectoryW((LPWSTR)0x0,0);
    uVar3 = 0xffffffffffffffff;
    pWVar5 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      WVar1 = *pWVar5;
      pWVar5 = pWVar5 + 1;
    } while (WVar1 != L'\0');
    lpBuffer = LocalAlloc(0x40,((~uVar3 - 1) + (ulonglong)(UVar2 + 1)) * 2);
    if (lpBuffer != (LPWSTR)0x0) {
      UVar2 = GetSystemDirectoryW(lpBuffer,UVar2);
      if (lpBuffer[UVar2 - 1] != L'\\') {
        uVar3 = (ulonglong)UVar2;
        UVar2 = UVar2 + 1;
        lpBuffer[uVar3] = L'\\';
      }
      lVar4 = -1;
      pWVar5 = param_1;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        WVar1 = *pWVar5;
        pWVar5 = pWVar5 + 1;
      } while (WVar1 != L'\0');
      if (lVar4 != -2) {
        pWVar8 = lpBuffer + (int)UVar2;
        pWVar5 = param_1;
        do {
          uVar3 = 0xffffffffffffffff;
          pWVar6 = (LPWSTR)(ulonglong)((int)pWVar6 + 1);
          *pWVar8 = *pWVar5;
          pWVar7 = param_1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            WVar1 = *pWVar7;
            pWVar7 = pWVar7 + 1;
          } while (WVar1 != L'\0');
          pWVar5 = pWVar5 + 1;
          pWVar8 = pWVar8 + 1;
        } while (pWVar6 < (LPWSTR)(~uVar3 - 1));
      }
    }
  }
  return lpBuffer;
}

// FUN_140e7d700 @ 140e7d700

short * FUN_140e7d700(char *param_1)

{
  char cVar1;
  short *psVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  short *psVar8;
  
  uVar6 = 0;
  if (param_1 == (char *)0x0) {
    return (short *)0x0;
  }
  uVar3 = 0xffffffffffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  psVar2 = LocalAlloc(0x40,~uVar3 * 2);
  if (psVar2 != (short *)0x0) {
    lVar4 = -1;
    pcVar5 = param_1;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = param_1;
    psVar8 = psVar2;
    if (lVar4 != -2) {
      do {
        uVar3 = 0xffffffffffffffff;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        *psVar8 = (short)*pcVar5;
        pcVar7 = param_1;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar5 = pcVar5 + 1;
        psVar8 = psVar8 + 1;
      } while (uVar6 < ~uVar3 - 1);
    }
  }
  return psVar2;
}

// FUN_140e7d7b0 @ 140e7d7b0

undefined8 FUN_140e7d7b0(short *param_1)

{
  short sVar1;
  ulonglong uVar2;
  short *psVar3;
  uint uVar4;
  
  if (param_1 != (short *)0x0) {
    uVar2 = 0xffffffffffffffff;
    uVar4 = 0;
    psVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    if (~uVar2 != 1) {
      do {
        if ((*param_1 == 0x5c) || (*param_1 == 0x2f)) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        param_1 = param_1 + 1;
      } while ((ulonglong)uVar4 < ~uVar2 - 1);
    }
  }
  return 0;
}

// FUN_140e7d820 @ 140e7d820

undefined8 FUN_140e7d820(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  if ((uVar1 != 0x5c) && (uVar1 != 0x2f)) {
    iVar2 = isalpha((uint)uVar1);
    if (iVar2 == 0) {
      return 0;
    }
    if (param_1[1] != 0x3a) {
      return 0;
    }
    if ((param_1[2] != 0x5c) && (param_1[2] != 0x2f)) {
      return 0;
    }
  }
  return 1;
}

// FUN_140e7d8a0 @ 140e7d8a0

undefined8 FUN_140e7d8a0(LPCWSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x50) == 0)) {
    return 1;
  }
  return 0;
}

// FUN_140e7d8d0 @ 140e7d8d0

undefined8 FUN_140e7d8d0(LPCWSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}

// FUN_140e7d900 @ 140e7d900

void FUN_140e7d900(LPCWSTR param_1)

{
  CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}

// nvReleaseSecureLoadLibraryResources @ 140e7d940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nvReleaseSecureLoadLibraryResources(void)

{
  if (DAT_1553e4590 != (HMODULE)0x0) {
    DAT_1553e4598 = 0;
    DAT_1553e45a0 = 0;
    DAT_1553e45a8 = 0;
    DAT_1553e45b0 = 0;
    DAT_1553e45b8 = 0;
    DAT_1553e45c8 = 0;
    DAT_1553e45c0 = 0;
    FreeLibrary(DAT_1553e4590);
    DAT_1553e4590 = (HMODULE)0x0;
  }
  if (DAT_1553e45d0 != (HMODULE)0x0) {
    DAT_1553e45d8 = 0;
    DAT_1553e46a0 = 0;
    DAT_1553e46a8 = 0;
    DAT_1553e46b0 = 0;
    DAT_1553e46b8 = 0;
    FreeLibrary(DAT_1553e45d0);
    DAT_1553e45d0 = (HMODULE)0x0;
  }
  if (DAT_1553e4630 != (HMODULE)0x0) {
    DAT_1553e4638 = 0;
    DAT_1553e4640 = 0;
    DAT_1553e4648 = 0;
    DAT_1553e4650 = 0;
    DAT_1553e4690 = 0;
    DAT_1553e4698 = 0;
    DAT_1553e4658 = 0;
    DAT_1553e4660 = 0;
    DAT_1553e4668 = 0;
    DAT_1553e4678 = 0;
    FreeLibrary(DAT_1553e4630);
    DAT_1553e4630 = (HMODULE)0x0;
  }
  if (DAT_1553e4680 != (HMODULE)0x0) {
    _DAT_1553e4688 = 0;
    FreeLibrary(DAT_1553e4680);
    DAT_1553e4680 = (HMODULE)0x0;
  }
  if (DAT_1553e45e0 != (HMODULE)0x0) {
    DAT_1553e45e8 = 0;
    DAT_1553e45f0 = 0;
    DAT_1553e45f8 = 0;
    DAT_1553e4600 = 0;
    DAT_1553e4608 = 0;
    DAT_1553e4610 = 0;
    DAT_1553e4618 = 0;
    DAT_1553e4620 = 0;
    DAT_1553e4628 = 0;
    FreeLibrary(DAT_1553e45e0);
    DAT_1553e45e0 = (HMODULE)0x0;
  }
  if (DAT_1553e46c0 != (HMODULE)0x0) {
    DAT_1553e46c8 = 0;
    FreeLibrary(DAT_1553e46c0);
    DAT_1553e46c0 = (HMODULE)0x0;
  }
  if (DAT_1553e46e8 != (HMODULE)0x0) {
    DAT_1553e4720 = 0;
    DAT_1553e4730 = 0;
    FreeLibrary(DAT_1553e46e8);
    DAT_1553e46e8 = (HMODULE)0x0;
  }
  if (DAT_1553e46f0 != (HMODULE)0x0) {
    FreeLibrary(DAT_1553e46f0);
    DAT_1553e46f0 = (HMODULE)0x0;
  }
  if (DAT_1553e46f8 != (HMODULE)0x0) {
    FreeLibrary(DAT_1553e46f8);
    DAT_1553e46f8 = (HMODULE)0x0;
  }
  if (DAT_1553e4700 != (HMODULE)0x0) {
    FreeLibrary(DAT_1553e4700);
    DAT_1553e4700 = (HMODULE)0x0;
  }
  if (DAT_1553e4708 != (HMODULE)0x0) {
    FreeLibrary(DAT_1553e4708);
    DAT_1553e4708 = (HMODULE)0x0;
  }
  if (DAT_1553e4710 != (HMODULE)0x0) {
    FreeLibrary(DAT_1553e4710);
    DAT_1553e4710 = (HMODULE)0x0;
  }
  if (DAT_1553e4718 != (HMODULE)0x0) {
    FreeLibrary(DAT_1553e4718);
    DAT_1553e4718 = (HMODULE)0x0;
  }
  return;
}

// FUN_140e7db90 @ 140e7db90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140e7db90(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined4 local_120;
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128 = local_118;
  local_120 = 0x100;
  local_118[0] = '\0';
  (*DAT_1553e4618)(param_1,4,0);
  iVar1 = _strnicmp(local_118,"NVIDIA ",7);
  return iVar1 == 0;
}

// FUN_140e7dc10 @ 140e7dc10

void FUN_140e7dc10(LPWSTR param_1)

{
  WCHAR WVar1;
  DWORD DVar2;
  int iVar3;
  undefined **ppuVar4;
  HMODULE hModule;
  LPWSTR pWVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = 0;
  *param_1 = L'\0';
  if (PTR_u_nvldumdx_dll_154dfaf78 == (undefined *)0x0) {
    return;
  }
  ppuVar4 = &PTR_u_nvldumdx_dll_154dfaf78;
  do {
    hModule = GetModuleHandleW((LPCWSTR)*ppuVar4);
    if (hModule != (HMODULE)0x0) {
      DVar2 = GetModuleFileNameW(hModule,param_1,0x104);
      uVar7 = (ulonglong)(int)DVar2;
      if ((DVar2 != 0) &&
         (((WVar1 = *param_1, WVar1 == L'\\' || (WVar1 == L'/')) ||
          (((iVar3 = isalpha((uint)(ushort)WVar1), iVar3 != 0 && (param_1[1] == L':')) &&
           ((param_1[2] == L'\\' || (param_1[2] == L'/')))))))) {
        if (DVar2 == 0) goto LAB_140e7dcd1;
        pWVar5 = param_1 + uVar7;
        break;
      }
    }
    lVar8 = lVar8 + 1;
    ppuVar4 = &PTR_u_nvldumdx_dll_154dfaf78 + lVar8;
    if ((&PTR_u_nvldumdx_dll_154dfaf78)[lVar8] == (undefined *)0x0) {
      return;
    }
  } while( true );
  while( true ) {
    pWVar5 = pWVar5 + -1;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) break;
    if (*pWVar5 == L'\\') break;
  }
LAB_140e7dcd1:
  param_1[uVar7 & 0xffffffff] = L'\0';
  return;
}

// nvGetSystemDirectoryW @ 140e7dd00

LPWSTR nvGetSystemDirectoryW(void)

{
  UINT uSize;
  UINT UVar1;
  LPWSTR lpBuffer;
  
  SetLastError(0);
  uSize = GetSystemDirectoryW((LPWSTR)0x0,0);
  lpBuffer = LocalAlloc(0x40,(ulonglong)uSize * 2);
  if (lpBuffer != (LPWSTR)0x0) {
    UVar1 = GetSystemDirectoryW(lpBuffer,uSize);
    if ((UVar1 != 0) && (UVar1 <= uSize)) {
      return lpBuffer;
    }
    LocalFree(lpBuffer);
  }
  return (LPWSTR)0x0;
}

// FUN_140e7dd90 @ 140e7dd90

wchar_t * FUN_140e7dd90(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = wcsrchr(param_1,L'\\');
  if (pwVar1 != (wchar_t *)0x0) {
    return pwVar1 + 1;
  }
  return param_1;
}

// FUN_140e7ddd0 @ 140e7ddd0

short * FUN_140e7ddd0(short *param_1)

{
  short sVar1;
  ulonglong uVar2;
  short *psVar3;
  short *psVar4;
  
  uVar2 = 0xffffffffffffffff;
  psVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  for (psVar4 = param_1 + (~uVar2 - 1);
      ((param_1 < psVar4 && (*psVar4 != 0x5c)) && (*psVar4 != 0x2e)); psVar4 = psVar4 + -1) {
  }
  psVar3 = param_1 + (~uVar2 - 1);
  if (*psVar4 == 0x2e) {
    psVar3 = psVar4;
  }
  return psVar3;
}

// FUN_140e7de30 @ 140e7de30

bool FUN_140e7de30(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  size_t _MaxCount;
  wchar_t *_Str1;
  bool bVar8;
  
  pwVar3 = wcsrchr(param_1,L'\\');
  if (pwVar3 != (wchar_t *)0x0) {
    param_1 = pwVar3 + 1;
  }
  iVar2 = _wcsicmp(param_1,param_2);
  if (iVar2 == 0) {
    return true;
  }
  uVar4 = 0xffffffffffffffff;
  pwVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  for (pwVar3 = param_1 + (~uVar4 - 1);
      ((param_1 < pwVar3 && (*pwVar3 != L'\\')) && (*pwVar3 != L'.')); pwVar3 = pwVar3 + -1) {
  }
  _Str1 = param_1 + (~uVar4 - 1);
  if (*pwVar3 == L'.') {
    _Str1 = pwVar3;
  }
  uVar4 = 0xffffffffffffffff;
  pwVar3 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  for (pwVar3 = param_2 + (~uVar4 - 1);
      ((param_2 < pwVar3 && (*pwVar3 != L'\\')) && (*pwVar3 != L'.')); pwVar3 = pwVar3 + -1) {
  }
  pwVar7 = param_2 + (~uVar4 - 1);
  if (*pwVar3 == L'.') {
    pwVar7 = pwVar3;
  }
  _MaxCount = (longlong)pwVar7 - (longlong)param_2 >> 1;
  if ((longlong)_Str1 - (longlong)param_1 >> 1 == _MaxCount) {
    lVar5 = 1;
    bVar8 = true;
    pwVar3 = pwVar7;
    pwVar6 = L"";
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar8 = *pwVar3 == *pwVar6;
      pwVar3 = pwVar3 + 1;
      pwVar6 = pwVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar2 = _wcsicmp(pwVar7,L".dll");
      bVar8 = iVar2 == 0;
      if (!bVar8) {
        return false;
      }
    }
    lVar5 = 1;
    pwVar3 = _Str1;
    pwVar7 = L"";
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar8 = *pwVar3 == *pwVar7;
      pwVar3 = pwVar3 + 1;
      pwVar7 = pwVar7 + 1;
    } while (bVar8);
    if ((bVar8) || (iVar2 = _wcsicmp(_Str1,L".dll"), iVar2 == 0)) {
      iVar2 = _wcsnicmp(param_1,param_2,_MaxCount);
      return iVar2 == 0;
    }
  }
  return false;
}

// FUN_140e7dfc0 @ 140e7dfc0

wchar_t * FUN_140e7dfc0(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *hMem;
  wchar_t *pwVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  int local_res8 [2];
  
  pwVar6 = (wchar_t *)0x0;
  local_res8[0] = 0;
  if (param_1 != 0) {
    return (wchar_t *)0x0;
  }
  (*DAT_1553e45b0)(param_2,param_3,2,0,0,0,local_res8);
  hMem = pwVar6;
  if (local_res8[0] != 0) {
    uVar1 = local_res8[0] + 4;
    hMem = LocalAlloc(0x40,(ulonglong)uVar1);
    if ((hMem != (wchar_t *)0x0) &&
       (iVar3 = (*DAT_1553e45b0)(param_2,param_3,2,0,hMem,uVar1,0), iVar3 != 0)) {
      _Str = hMem;
      if (*hMem == L'\0') {
LAB_140e7e0e7:
        if (*_Str != L'\0') {
          pwVar6 = (wchar_t *)&DAT_00000001;
        }
      }
      else {
        do {
          wVar2 = *(wchar_t *)PTR_u_PCI_VEN_10DE_CC_0300_154dfaf68;
          pwVar7 = (wchar_t *)PTR_u_PCI_VEN_10DE_CC_0300_154dfaf68;
          while (wVar2 != L'\0') {
            pwVar4 = wcsstr(_Str,pwVar7);
            if (pwVar4 != (wchar_t *)0x0) {
              if (*pwVar7 != L'\0') goto LAB_140e7e0e7;
              break;
            }
            uVar5 = 0xffffffffffffffff;
            pwVar4 = pwVar7;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              wVar2 = *pwVar4;
              pwVar4 = pwVar4 + 1;
            } while (wVar2 != L'\0');
            pwVar7 = pwVar7 + ~uVar5;
            wVar2 = *pwVar7;
          }
          uVar5 = 0xffffffffffffffff;
          pwVar7 = _Str;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            wVar2 = *pwVar7;
            pwVar7 = pwVar7 + 1;
          } while (wVar2 != L'\0');
          _Str = _Str + ~uVar5;
        } while (*_Str != L'\0');
      }
    }
  }
  LocalFree(hMem);
  return pwVar6;
}

// StringCchCopyW @ 140e7e120

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest,size_t cchDest,STRSAFE_LPCWSTR pszSrc)

{
  wchar_t wVar1;
  STRSAFE_LPWSTR pwVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  HRESULT HVar6;
  
  iVar3 = 0;
  if ((cchDest == 0) || (0x7fffffff < cchDest)) {
    iVar3 = -0x7ff8ffa9;
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  HVar6 = 0;
  if (cchDest != 0) {
    lVar5 = 0x7ffffffe - cchDest;
    lVar4 = (longlong)pszSrc - (longlong)pszDest;
    pwVar2 = pszDest;
    while ((pszDest = pwVar2, lVar5 + cchDest != 0 &&
           (wVar1 = *(wchar_t *)(lVar4 + (longlong)pszDest), wVar1 != L'\0'))) {
      *pszDest = wVar1;
      cchDest = cchDest - 1;
      pwVar2 = pszDest + 1;
      if (cchDest == 0) {
        *pszDest = L'\0';
        return -0x7ff8ff86;
      }
    }
    if (cchDest != 0) goto LAB_140e7e192;
  }
  pszDest = pszDest + -1;
  HVar6 = -0x7ff8ff86;
LAB_140e7e192:
  *pszDest = L'\0';
  return HVar6;
}

// StringCbCopyW @ 140e7e1b0

HRESULT __stdcall StringCbCopyW(STRSAFE_LPWSTR pszDest,size_t cbDest,STRSAFE_LPCWSTR pszSrc)

{
  wchar_t wVar1;
  STRSAFE_LPWSTR pwVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  HRESULT HVar7;
  
  uVar4 = cbDest >> 1;
  iVar3 = 0;
  if ((uVar4 == 0) || (0x7fffffff < uVar4)) {
    iVar3 = -0x7ff8ffa9;
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  HVar7 = 0;
  if (uVar4 != 0) {
    lVar5 = 0x7ffffffe - uVar4;
    lVar6 = (longlong)pszSrc - (longlong)pszDest;
    pwVar2 = pszDest;
    while ((pszDest = pwVar2, lVar5 + uVar4 != 0 &&
           (wVar1 = *(wchar_t *)(lVar6 + (longlong)pszDest), wVar1 != L'\0'))) {
      *pszDest = wVar1;
      uVar4 = uVar4 - 1;
      pwVar2 = pszDest + 1;
      if (uVar4 == 0) {
        *pszDest = L'\0';
        return -0x7ff8ff86;
      }
    }
    if (uVar4 != 0) goto LAB_140e7e228;
  }
  pszDest = pszDest + -1;
  HVar7 = -0x7ff8ff86;
LAB_140e7e228:
  *pszDest = L'\0';
  return HVar7;
}

// StringCchCopyNW @ 140e7e240

HRESULT __stdcall
StringCchCopyNW(STRSAFE_LPWSTR pszDest,size_t cchDest,STRSAFE_PCNZWCH pszSrc,size_t cchToCopy)

{
  wchar_t wVar1;
  STRSAFE_LPWSTR pwVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  HRESULT HVar6;
  
  iVar3 = 0;
  if ((cchDest == 0) || (0x7fffffff < cchDest)) {
    iVar3 = -0x7ff8ffa9;
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  if (0x7ffffffe < cchToCopy) {
    *pszDest = L'\0';
    return -0x7ff8ffa9;
  }
  HVar6 = 0;
  if (cchDest != 0) {
    lVar5 = cchToCopy - cchDest;
    lVar4 = (longlong)pszSrc - (longlong)pszDest;
    pwVar2 = pszDest;
    while ((pszDest = pwVar2, lVar5 + cchDest != 0 &&
           (wVar1 = *(wchar_t *)(lVar4 + (longlong)pszDest), wVar1 != L'\0'))) {
      *pszDest = wVar1;
      cchDest = cchDest - 1;
      pwVar2 = pszDest + 1;
      if (cchDest == 0) {
        *pszDest = L'\0';
        return -0x7ff8ff86;
      }
    }
    if (cchDest != 0) goto LAB_140e7e2c1;
  }
  pszDest = pszDest + -1;
  HVar6 = -0x7ff8ff86;
LAB_140e7e2c1:
  *pszDest = L'\0';
  return HVar6;
}

// StringCchCatW @ 140e7e2d0

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest,size_t cchDest,STRSAFE_LPCWSTR pszSrc)

{
  wchar_t wVar1;
  size_t sVar2;
  STRSAFE_LPWSTR pwVar3;
  longlong lVar4;
  longlong lVar5;
  HRESULT HVar6;
  longlong lVar7;
  
  lVar5 = 0;
  HVar6 = 0;
  if ((cchDest == 0) || (0x7fffffff < cchDest)) {
    HVar6 = -0x7ff8ffa9;
  }
  pwVar3 = pszDest;
  sVar2 = cchDest;
  if (-1 < HVar6) {
    for (; sVar2 != 0; sVar2 = sVar2 - 1) {
      if (*pwVar3 == L'\0') {
        if (sVar2 != 0) {
          lVar5 = cchDest - sVar2;
          HVar6 = 0;
          goto LAB_140e7e328;
        }
        break;
      }
      pwVar3 = pwVar3 + 1;
    }
    HVar6 = -0x7ff8ffa9;
  }
LAB_140e7e328:
  if (-1 < HVar6) {
    lVar4 = cchDest - lVar5;
    pwVar3 = pszDest + lVar5;
    if (lVar4 != 0) {
      lVar7 = (longlong)pszSrc - (longlong)pwVar3;
      lVar5 = (lVar4 - cchDest) + 0x7fffffff + lVar5;
      do {
        if ((lVar5 == 0) || (wVar1 = *(wchar_t *)(lVar7 + (longlong)pwVar3), wVar1 == L'\0')) {
          HVar6 = 0;
          if (lVar4 != 0) goto LAB_140e7e38d;
          break;
        }
        *pwVar3 = wVar1;
        pwVar3 = pwVar3 + 1;
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    pwVar3 = pwVar3 + -1;
    HVar6 = -0x7ff8ff86;
LAB_140e7e38d:
    *pwVar3 = L'\0';
  }
  return HVar6;
}

// StringCbCatW @ 140e7e3b0

HRESULT __stdcall StringCbCatW(STRSAFE_LPWSTR pszDest,size_t cbDest,STRSAFE_LPCWSTR pszSrc)

{
  wchar_t wVar1;
  ulonglong uVar2;
  STRSAFE_LPWSTR pwVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = cbDest >> 1;
  iVar5 = 0;
  iVar7 = 0;
  if ((uVar8 == 0) || (0x7fffffff < uVar8)) {
    iVar7 = -0x7ff8ffa9;
  }
  uVar2 = uVar8;
  pwVar3 = pszDest;
  if (-1 < iVar7) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*pwVar3 == L'\0') {
        if (uVar2 != 0) {
          lVar6 = uVar8 - uVar2;
          goto LAB_140e7e40a;
        }
        break;
      }
      pwVar3 = pwVar3 + 1;
    }
    iVar7 = -0x7ff8ffa9;
  }
  lVar6 = 0;
  iVar5 = iVar7;
LAB_140e7e40a:
  if (-1 < iVar5) {
    pwVar3 = pszDest + lVar6;
    iVar5 = 0;
    lVar4 = uVar8 - lVar6;
    if (lVar4 != 0) {
      lVar9 = (longlong)pszSrc - (longlong)pwVar3;
      lVar6 = (lVar4 - uVar8) + 0x7fffffff + lVar6;
      do {
        if ((lVar6 == 0) || (wVar1 = *(wchar_t *)(lVar9 + (longlong)pwVar3), wVar1 == L'\0')) {
          if (lVar4 != 0) goto LAB_140e7e46d;
          break;
        }
        *pwVar3 = wVar1;
        pwVar3 = pwVar3 + 1;
        lVar6 = lVar6 + -1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    pwVar3 = pwVar3 + -1;
    iVar5 = -0x7ff8ff86;
LAB_140e7e46d:
    *pwVar3 = L'\0';
  }
  return iVar5;
}

// nvGetSystemModuleHandleW @ 140e7e490

HMODULE nvGetSystemModuleHandleW(short *param_1)

{
  short sVar1;
  LPCWSTR lpModuleName;
  HMODULE pHVar2;
  ulonglong uVar3;
  short *psVar4;
  HMODULE pHVar5;
  
  pHVar2 = (HMODULE)0x0;
  SetLastError(0);
  if (param_1 != (short *)0x0) {
    uVar3 = 0xffffffffffffffff;
    psVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    psVar4 = param_1;
    pHVar5 = pHVar2;
    if (~uVar3 != 1) {
      do {
        if ((*psVar4 == 0x5c) || (*psVar4 == 0x2f)) {
          SetLastError(0xa0);
          return (HMODULE)0x0;
        }
        pHVar5 = (HMODULE)(ulonglong)((int)pHVar5 + 1);
        psVar4 = psVar4 + 1;
      } while (pHVar5 < (HMODULE)(~uVar3 - 1));
    }
  }
  lpModuleName = (LPCWSTR)FUN_140e7d600(param_1);
  if ((param_1 == (short *)0x0) || (lpModuleName != (LPCWSTR)0x0)) {
    pHVar2 = GetModuleHandleW(lpModuleName);
  }
  LocalFree(lpModuleName);
  return pHVar2;
}

// nvGetSystemModuleHandleA @ 140e7e550

undefined8 nvGetSystemModuleHandleA(longlong param_1)

{
  HLOCAL hMem;
  undefined8 uVar1;
  
  uVar1 = 0;
  hMem = (HLOCAL)FUN_140e7d700();
  if ((param_1 == 0) || (hMem != (HLOCAL)0x0)) {
    uVar1 = nvGetSystemModuleHandleW(hMem);
  }
  LocalFree(hMem);
  return uVar1;
}

// FUN_140e7e5b0 @ 140e7e5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_140e7e5b0(int param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  char *pcVar6;
  wchar_t *lpLibFileName;
  wchar_t *lpLibFileName_00;
  wchar_t *lpLibFileName_01;
  wchar_t *lpLibFileName_02;
  wchar_t *lpLibFileName_03;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  CHAR local_148 [272];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148[0] = '\0';
  memset(local_148 + 1,0,0x103);
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_148,0x104);
  uVar9 = (ulonglong)(int)DVar2;
  if (DVar2 != 0) {
    uVar7 = 0xffffffffffffffff;
    pcVar6 = "\\mfpmp.exe";
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (~uVar7 - 1 <= (ulonglong)DVar2) {
      if (DVar2 != 0) {
        pcVar6 = local_148 + uVar9;
        do {
          if (*pcVar6 == '\\') break;
          pcVar6 = pcVar6 + -1;
          uVar8 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 != 0);
      }
      iVar3 = strncmp(local_148 + (uVar9 & 0xffffffff),"\\mfpmp.exe",7);
      if (iVar3 == 0) {
        return DAT_154dfaf70;
      }
    }
  }
  if (((((DAT_1553e4700 == (HMODULE)0x0) && (DAT_1553e45e0 == 0)) && (DAT_1553e46f0 == (HMODULE)0x0)
       ) && ((DAT_1553e4708 == (HMODULE)0x0 && (DAT_1553e4710 == (HMODULE)0x0)))) &&
     (DAT_1553e4718 == (HMODULE)0x0)) {
    if (param_1 == 0) {
      lpLibFileName = L"msasn1.dll";
      lpLibFileName_00 = L"cryptnet.dll";
      lpLibFileName_01 = L"cryptbase.dll";
      lpLibFileName_02 = L"drvstore.dll";
      lpLibFileName_03 = L"devobj.dll";
      local_158 = L"wldp.dll";
    }
    else {
      lpLibFileName = (wchar_t *)FUN_140e7d600(L"msasn1.dll");
      lpLibFileName_00 = (wchar_t *)FUN_140e7d600(L"cryptnet.dll");
      lpLibFileName_01 = (wchar_t *)FUN_140e7d600(L"cryptbase.dll");
      local_158 = (wchar_t *)FUN_140e7d600(L"wldp.dll");
      lpLibFileName_02 = (wchar_t *)FUN_140e7d600(L"drvstore.dll");
      lpLibFileName_03 = (wchar_t *)FUN_140e7d600(L"devobj.dll");
    }
    uVar8 = 0;
    DVar2 = 0x800;
    if (param_1 != 0) {
      DVar2 = 0;
    }
    DAT_1553e4700 = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,DVar2);
    if ((DAT_1553e4700 == (HMODULE)0x0) && (DVar4 = GetLastError(), DVar4 != 0x7e)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    DAT_154dfaf70 = DAT_154dfaf70 & uVar5;
    DAT_1553e46f8 = LoadLibraryExW(lpLibFileName_00,(HANDLE)0x0,DVar2);
    if ((DAT_1553e46f8 == (HMODULE)0x0) && (DVar4 = GetLastError(), DVar4 != 0x7e)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    DAT_154dfaf70 = DAT_154dfaf70 & uVar5;
    DAT_1553e46f0 = LoadLibraryExW(lpLibFileName_01,(HANDLE)0x0,DVar2);
    DAT_1553e4718 = LoadLibraryExW(local_158,(HANDLE)0x0,DVar2);
    if ((DAT_1553e4718 == (HMODULE)0x0) && (DVar4 = GetLastError(), DVar4 != 0x7e)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    DAT_154dfaf70 = DAT_154dfaf70 & uVar5;
    DAT_1553e4708 = LoadLibraryExW(lpLibFileName_02,(HANDLE)0x0,DVar2);
    if ((DAT_1553e4708 == (HMODULE)0x0) && (DVar4 = GetLastError(), DVar4 != 0x7e)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    DAT_154dfaf70 = DAT_154dfaf70 & uVar5;
    DAT_1553e4710 = LoadLibraryExW(lpLibFileName_03,(HANDLE)0x0,DVar2);
    if ((DAT_1553e4710 != (HMODULE)0x0) || (DVar2 = GetLastError(), DVar2 == 0x7e)) {
      uVar8 = 1;
    }
    DAT_154dfaf70 = DAT_154dfaf70 & uVar8;
    if (param_1 != 0) {
      LocalFree(lpLibFileName);
      LocalFree(lpLibFileName_00);
      LocalFree(lpLibFileName_01);
      LocalFree(lpLibFileName_02);
      LocalFree(lpLibFileName_03);
      LocalFree(local_158);
    }
  }
  return DAT_154dfaf70;
}

// FUN_140e7e920 @ 140e7e920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HMODULE FUN_140e7e920(LPCWSTR param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  DWORDLONG dwlConditionMask;
  LPCWSTR hMem;
  HMODULE pHVar3;
  DWORD dwFlags;
  undefined1 auStack_168 [32];
  _OSVERSIONINFOEXW local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  hMem = (LPCWSTR)0x0;
  if (DAT_1553e4738 == 0) {
    dwlConditionMask = VerSetConditionMask(0,4,3);
    memset(&local_148,0,0x11c);
    local_148.dwBuildNumber = 0x23f0;
    BVar1 = VerifyVersionInfoW(&local_148,4,dwlConditionMask);
    DAT_1553e4738 = 0x1db0;
    if (BVar1 != 0) {
      DAT_1553e4738 = 0x23f0;
    }
  }
  iVar2 = FUN_140e7e5b0(DAT_1553e4738 < 0x23f0);
  if (iVar2 == 0) {
    pHVar3 = (HMODULE)0x0;
  }
  else {
    if (DAT_1553e4738 < 0x23f0) {
      dwFlags = param_2 & 0xffffe0f7;
      hMem = (LPCWSTR)FUN_140e7d600(param_1);
    }
    else {
      dwFlags = param_2 & 0xffffe8f7 | 0x800;
    }
    if (hMem != (LPCWSTR)0x0) {
      param_1 = hMem;
    }
    pHVar3 = LoadLibraryExW(param_1,(HANDLE)0x0,dwFlags);
    LocalFree(hMem);
  }
  return pHVar3;
}

// FUN_140e7ea40 @ 140e7ea40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

STRSAFE_LPWSTR FUN_140e7ea40(uint param_1,STRSAFE_LPCWSTR param_2)

{
  size_t cchDest;
  wchar_t wVar1;
  INT_PTR IVar2;
  STRSAFE_LPWSTR pszDest;
  ulonglong uVar3;
  ulonglong uVar4;
  STRSAFE_LPCWSTR pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_258 [32];
  wchar_t *local_238;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (param_2 == (STRSAFE_LPCWSTR)0x0) {
    return (STRSAFE_LPWSTR)0x0;
  }
  memset(local_228,0,0x20a);
  if ((DAT_1553e45d0 == (HMODULE)0x0) &&
     (DAT_1553e45d0 = (HMODULE)FUN_140e7e920(L"Shell32.dll",0), DAT_1553e45d0 != (HMODULE)0x0)) {
    DAT_1553e45d8 = GetProcAddress(DAT_1553e45d0,"SHGetFolderPathW");
  }
  if (DAT_1553e45d8 != (FARPROC)0x0) {
    local_238 = local_228;
    IVar2 = (*DAT_1553e45d8)(0,(ulonglong)param_1,0,0);
    if ((int)IVar2 != 0) {
      return (STRSAFE_LPWSTR)0x0;
    }
    uVar3 = 0xffffffffffffffff;
    pwVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    uVar4 = 0xffffffffffffffff;
    pwVar6 = local_228;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      wVar1 = *pwVar6;
      pwVar6 = pwVar6 + 1;
    } while (wVar1 != L'\0');
    cchDest = ~uVar3 + ~uVar4;
    pszDest = LocalAlloc(0x40,cchDest * 2);
    if (pszDest != (STRSAFE_LPWSTR)0x0) {
      StringCchCopyW(pszDest,cchDest,local_228);
      StringCchCatW(pszDest,cchDest,L"\\");
      StringCchCatW(pszDest,cchDest,param_2);
      return pszDest;
    }
  }
  return (STRSAFE_LPWSTR)0x0;
}

// FUN_140e7eb90 @ 140e7eb90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

wchar_t * FUN_140e7eb90(LPCWSTR param_1)

{
  wchar_t wVar1;
  BOOL BVar2;
  DWORD nBufferLength;
  DWORD DVar3;
  int iVar4;
  undefined8 uVar5;
  DWORDLONG dwlConditionMask;
  wchar_t *pwVar6;
  wchar_t *lpBuffer;
  wchar_t *_Str2;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined4 local_28 [4];
  
  pwVar8 = (wchar_t *)0x0;
  local_28[0] = 0x24;
  local_28[1] = 0x26;
  local_28[2] = 0x2a;
  if (DAT_1553e4740 == 0) {
    uVar5 = VerSetConditionMask(0,2,3);
    uVar5 = VerSetConditionMask(uVar5,1,3);
    dwlConditionMask = VerSetConditionMask(uVar5,0x20,3);
    DAT_1553e4740 = 0x11c;
    _DAT_1553e4744 = 6;
    _DAT_1553e4748 = 1;
    _DAT_1553e4854 = 0;
    BVar2 = VerifyVersionInfoW((LPOSVERSIONINFOEXW)&DAT_1553e4740,0x23,dwlConditionMask);
    DAT_154dfaf74 = (uint)(BVar2 == 0);
  }
  if (DAT_154dfaf74 == 0) {
    _Str2 = pwVar8;
    lpBuffer = pwVar8;
    pwVar6 = pwVar8;
    if (param_1 != (LPCWSTR)0x0) {
      nBufferLength = GetFullPathNameW(param_1,0,(LPWSTR)0x0,(LPWSTR *)0x0);
      if (((nBufferLength != 0) &&
          (lpBuffer = LocalAlloc(0x40,(ulonglong)nBufferLength * 2), pwVar6 = (wchar_t *)0x0,
          lpBuffer != (wchar_t *)0x0)) &&
         (DVar3 = GetFullPathNameW(param_1,nBufferLength,lpBuffer,(LPWSTR *)0x0),
         _Str2 = (wchar_t *)0x0, pwVar9 = pwVar8, DVar3 < nBufferLength)) {
        do {
          _Str2 = (wchar_t *)FUN_140e7ea40(local_28[(longlong)pwVar8],L"");
          pwVar6 = pwVar9;
          if (_Str2 == (wchar_t *)0x0) break;
          uVar7 = 0xffffffffffffffff;
          pwVar6 = _Str2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          iVar4 = _wcsnicmp(lpBuffer,_Str2,~uVar7 - 1);
          pwVar6 = (wchar_t *)(ulonglong)(iVar4 == 0);
          if (iVar4 == 0) break;
          LocalFree(_Str2);
          pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
          _Str2 = (wchar_t *)0x0;
          pwVar9 = pwVar6;
        } while ((longlong)pwVar8 < 3);
      }
    }
    LocalFree(_Str2);
    LocalFree(lpBuffer);
  }
  else {
    pwVar6 = (wchar_t *)&DAT_00000001;
  }
  return pwVar6;
}

// FUN_140e7ed50 @ 140e7ed50

undefined8 FUN_140e7ed50(void)

{
  INT_PTR IVar1;
  INT_PTR IVar2;
  INT_PTR IVar3;
  undefined8 uVar4;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar4 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_28 = 0;
  if ((((((DAT_1553e4630 != (HMODULE)0x0) ||
         (DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0), DAT_1553e4630 != (HMODULE)0x0))
        && ((DAT_1553e4658 != (FARPROC)0x0 ||
            (DAT_1553e4658 = GetProcAddress(DAT_1553e4630,"OpenSCManagerW"),
            DAT_1553e4658 != (FARPROC)0x0)))) &&
       ((DAT_1553e4660 != (FARPROC)0x0 ||
        (DAT_1553e4660 = GetProcAddress(DAT_1553e4630,"OpenServiceW"), DAT_1553e4660 != (FARPROC)0x0
        )))) && ((DAT_1553e4670 != (FARPROC)0x0 ||
                 (DAT_1553e4670 = GetProcAddress(DAT_1553e4630,"QueryServiceStatus"),
                 DAT_1553e4670 != (FARPROC)0x0)))) &&
     ((DAT_1553e4678 != (FARPROC)0x0 ||
      (DAT_1553e4678 = GetProcAddress(DAT_1553e4630,"CloseServiceHandle"),
      DAT_1553e4678 != (FARPROC)0x0)))) {
    IVar1 = (*DAT_1553e4658)(0,0,0x80000000);
    if (IVar1 != 0) {
      IVar2 = (*DAT_1553e4660)(IVar1,L"CryptSvc",4);
      if (IVar2 != 0) {
        IVar3 = (*DAT_1553e4670)(IVar2,&local_28);
        if ((((int)IVar3 != 0) && (3 < local_24)) && (uVar4 = 0, local_24 < 8)) {
          uVar4 = 1;
        }
        (*DAT_1553e4678)(IVar2);
      }
      (*DAT_1553e4678)(IVar1);
    }
    return uVar4;
  }
  return 0;
}

// VerifyPrimarySignatureCN @ 140e7eef0

int VerifyPrimarySignatureCN(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  DWORD dwErrCode;
  undefined4 uVar2;
  HLOCAL hMem;
  longlong lVar3;
  uint local_res20 [2];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_c8;
  undefined8 local_c0;
  
  hMem = (HLOCAL)0x0;
  lVar3 = 0;
  dwErrCode = 0;
  iVar1 = (*DAT_1553e4608)(param_2,6,0,0,local_res20);
  if (iVar1 == 0) {
    dwErrCode = GetLastError();
    iVar1 = 0;
  }
  else {
    hMem = LocalAlloc(0x40,(ulonglong)local_res20[0]);
    if (hMem == (HLOCAL)0x0) {
      dwErrCode = GetLastError();
      iVar1 = 0;
    }
    else {
      iVar1 = (*DAT_1553e4608)(param_2,6,0,hMem,local_res20);
      if (iVar1 == 0) {
        dwErrCode = GetLastError();
      }
      else {
        local_c8 = *(undefined8 *)((longlong)hMem + 8);
        local_c0 = *(undefined8 *)((longlong)hMem + 0x10);
        local_f0 = *(undefined8 *)((longlong)hMem + 0x18);
        local_e8 = *(undefined8 *)((longlong)hMem + 0x20);
        lVar3 = (*DAT_1553e4600)(param_1,0x10001,0,0xb0000,local_f8,0);
        if (lVar3 == 0) {
          dwErrCode = GetLastError();
          iVar1 = 0;
        }
        else if (param_3 != (undefined4 *)0x0) {
          uVar2 = FUN_140e7db90(lVar3);
          *param_3 = uVar2;
        }
      }
    }
  }
  LocalFree(hMem);
  if (lVar3 != 0) {
    (*DAT_1553e45f8)(lVar3);
  }
  SetLastError(dwErrCode);
  return iVar1;
}

// nvLoadWVTCryptModule @ 140e7f060

undefined8 nvLoadWVTCryptModule(void)

{
  if (((((((DAT_1553e45e0 != (HMODULE)0x0) ||
          (DAT_1553e45e0 = (HMODULE)FUN_140e7e920(L"crypt32.dll",0), DAT_1553e45e0 != (HMODULE)0x0))
         && ((DAT_1553e46c0 != (HMODULE)0x0 ||
             (DAT_1553e46c0 = (HMODULE)FUN_140e7e920(L"wintrust.dll",0),
             DAT_1553e46c0 != (HMODULE)0x0)))) &&
        ((DAT_1553e4618 != (FARPROC)0x0 ||
         (DAT_1553e4618 = GetProcAddress(DAT_1553e45e0,"CertGetNameStringA"),
         DAT_1553e4618 != (FARPROC)0x0)))) &&
       (((DAT_1553e4620 != (FARPROC)0x0 ||
         (DAT_1553e4620 = GetProcAddress(DAT_1553e45e0,"CryptDecodeObjectEx"),
         DAT_1553e4620 != (FARPROC)0x0)) &&
        (((DAT_1553e45f8 != (FARPROC)0x0 ||
          (DAT_1553e45f8 = GetProcAddress(DAT_1553e45e0,"CertFreeCertificateContext"),
          DAT_1553e45f8 != (FARPROC)0x0)) &&
         ((DAT_1553e4600 != (FARPROC)0x0 ||
          (DAT_1553e4600 = GetProcAddress(DAT_1553e45e0,"CertFindCertificateInStore"),
          DAT_1553e4600 != (FARPROC)0x0)))))))) &&
      (((DAT_1553e4628 != (FARPROC)0x0 ||
        (DAT_1553e4628 = GetProcAddress(DAT_1553e45e0,"CertGetIssuerCertificateFromStore"),
        DAT_1553e4628 != (FARPROC)0x0)) &&
       ((DAT_1553e4608 != (FARPROC)0x0 ||
        (DAT_1553e4608 = GetProcAddress(DAT_1553e45e0,"CryptMsgGetParam"),
        DAT_1553e4608 != (FARPROC)0x0)))))) &&
     (((((DAT_1553e4610 != (FARPROC)0x0 ||
         (DAT_1553e4610 = GetProcAddress(DAT_1553e45e0,"CryptQueryObject"),
         DAT_1553e4610 != (FARPROC)0x0)) &&
        ((DAT_1553e45e8 != (FARPROC)0x0 ||
         (DAT_1553e45e8 = GetProcAddress(DAT_1553e45e0,"CryptMsgClose"),
         DAT_1553e45e8 != (FARPROC)0x0)))) &&
       (((DAT_1553e45f0 != (FARPROC)0x0 ||
         (DAT_1553e45f0 = GetProcAddress(DAT_1553e45e0,"CertCloseStore"),
         DAT_1553e45f0 != (FARPROC)0x0)) &&
        ((DAT_1553e46c8 != (FARPROC)0x0 ||
         (DAT_1553e46c8 = GetProcAddress(DAT_1553e46c0,"WinVerifyTrust"),
         DAT_1553e46c8 != (FARPROC)0x0)))))) &&
      ((((DAT_1553e46d0 != (FARPROC)0x0 ||
         (DAT_1553e46d0 = GetProcAddress(DAT_1553e46c0,"WTHelperProvDataFromStateData"),
         DAT_1553e46d0 != (FARPROC)0x0)) &&
        ((DAT_1553e46e0 != (FARPROC)0x0 ||
         (DAT_1553e46e0 = GetProcAddress(DAT_1553e46c0,"WTHelperGetProvCertFromChain"),
         DAT_1553e46e0 != (FARPROC)0x0)))) &&
       ((DAT_1553e46d8 != (FARPROC)0x0 ||
        (DAT_1553e46d8 = GetProcAddress(DAT_1553e46c0,"WTHelperGetProvSignerFromChain"),
        DAT_1553e46d8 != (FARPROC)0x0)))))))) {
    return 1;
  }
  return 0;
}

// FUN_140e7f330 @ 140e7f330

STRSAFE_LPWSTR FUN_140e7f330(STRSAFE_LPCWSTR param_1)

{
  wchar_t wVar1;
  HRESULT HVar2;
  STRSAFE_LPWSTR pszDest;
  ulonglong uVar3;
  STRSAFE_LPCWSTR pwVar4;
  
  if (param_1 == (STRSAFE_LPCWSTR)0x0) {
    return (STRSAFE_LPWSTR)0x0;
  }
  uVar3 = 0xffffffffffffffff;
  pwVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  pszDest = LocalAlloc(0x40,~uVar3 * 2);
  if (pszDest == (STRSAFE_LPWSTR)0x0) {
    return (STRSAFE_LPWSTR)0x0;
  }
  HVar2 = StringCchCopyW(pszDest,~uVar3,param_1);
  if (HVar2 < 0) {
    LocalFree(pszDest);
    pszDest = (STRSAFE_LPWSTR)0x0;
  }
  return pszDest;
}

// FUN_140e7f3c0 @ 140e7f3c0

STRSAFE_LPWSTR FUN_140e7f3c0(STRSAFE_PCNZWCH param_1,ulonglong param_2)

{
  wchar_t wVar1;
  HRESULT HVar2;
  STRSAFE_LPWSTR pszDest;
  ulonglong uVar3;
  ulonglong uVar4;
  STRSAFE_PCNZWCH pwVar5;
  
  if ((param_1 == (STRSAFE_PCNZWCH)0x0) || ((longlong)param_2 < 0)) {
    return (STRSAFE_LPWSTR)0x0;
  }
  uVar3 = 0xffffffffffffffff;
  pwVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    wVar1 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  } while (wVar1 != L'\0');
  uVar4 = ~uVar3 - 1;
  if (param_2 < ~uVar3 - 1) {
    uVar4 = param_2;
  }
  pszDest = LocalAlloc(0x40,uVar4 * 2 + 2);
  if ((pszDest != (STRSAFE_LPWSTR)0x0) &&
     (HVar2 = StringCchCopyNW(pszDest,uVar4 + 1,param_1,param_2), HVar2 < 0)) {
    LocalFree(pszDest);
    pszDest = (STRSAFE_LPWSTR)0x0;
  }
  return pszDest;
}

// FUN_140e7f470 @ 140e7f470

ulonglong FUN_140e7f470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                       )

{
  DWORD DVar1;
  ulonglong uVar2;
  HLOCAL pvVar3;
  int iVar4;
  int local_28;
  uint local_24 [3];
  
  local_24[0] = 0;
  local_28 = 0;
  if (((DAT_1553e4630 != (HMODULE)0x0) ||
      (DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0), DAT_1553e4630 != (HMODULE)0x0)) &&
     ((DAT_1553e4648 != (FARPROC)0x0 ||
      (DAT_1553e4648 = GetProcAddress(DAT_1553e4630,"RegQueryValueExW"),
      DAT_1553e4648 != (FARPROC)0x0)))) {
    uVar2 = (*DAT_1553e4648)(param_1,param_2,0,local_24,0,&local_28);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (local_28 == 0) {
      return uVar2;
    }
    iVar4 = 0;
    if (local_24[0] != 0) {
      if (local_24[0] < 3) {
        iVar4 = 2;
      }
      else {
        iVar4 = 0;
        if (local_24[0] == 7) {
          iVar4 = 4;
        }
      }
    }
    pvVar3 = LocalAlloc(0x40,(ulonglong)(uint)(iVar4 + local_28));
    *param_4 = pvVar3;
    if (pvVar3 != (HLOCAL)0x0) {
      uVar2 = (*DAT_1553e4648)(param_1,param_2,0,param_3,pvVar3,&local_28);
      if ((int)uVar2 == 0) {
        return uVar2 & 0xffffffff;
      }
      LocalFree((HLOCAL)*param_4);
      *param_4 = 0;
      return uVar2 & 0xffffffff;
    }
  }
  DVar1 = GetLastError();
  return (ulonglong)DVar1;
}

// FUN_140e7f5b0 @ 140e7f5b0

ulonglong FUN_140e7f5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined8 local_18 [2];
  ulonglong uVar4;
  
  local_18[0] = 0;
  if ((((DAT_1553e4630 == (HMODULE)0x0) &&
       (DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0), DAT_1553e4630 == (HMODULE)0x0))
      || ((DAT_1553e4638 == (FARPROC)0x0 &&
          (DAT_1553e4638 = GetProcAddress(DAT_1553e4630,"RegOpenKeyExW"),
          DAT_1553e4638 == (FARPROC)0x0)))) ||
     ((DAT_1553e4650 == (FARPROC)0x0 &&
      (DAT_1553e4650 = GetProcAddress(DAT_1553e4630,"RegCloseKey"), DAT_1553e4650 == (FARPROC)0x0)))
     ) {
    DVar2 = GetLastError();
    uVar4 = (ulonglong)DVar2;
  }
  else {
    uVar3 = (*DAT_1553e4638)(param_1,param_2,0,1,local_18);
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 == 0) {
      uVar1 = FUN_140e7f470(local_18[0],param_3,param_4,param_5);
      uVar4 = (ulonglong)uVar1;
      (*DAT_1553e4650)(local_18[0]);
    }
  }
  return uVar4;
}

// FUN_140e7f6d0 @ 140e7f6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140e7f6d0(uint param_1)

{
  ushort uVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  DWORDLONG dwlConditionMask;
  INT_PTR IVar5;
  ulonglong uVar6;
  ushort *hMem;
  ushort *puVar7;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  int local_168 [2];
  undefined8 local_160;
  ushort *local_158 [2];
  _OSVERSIONINFOEXW local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (DAT_1553e473c == 0) {
    dwlConditionMask = VerSetConditionMask(0,4,3);
    memset(&local_148,0,0x11c);
    local_148.dwBuildNumber = param_1;
    BVar2 = VerifyVersionInfoW(&local_148,4,dwlConditionMask);
    if (BVar2 != 0) {
      return true;
    }
    local_168[0] = 0;
    hMem = (ushort *)0x0;
    local_158[0] = (ushort *)0x0;
    local_160 = 0;
    if ((((DAT_1553e4630 == (HMODULE)0x0) &&
         (DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0), DAT_1553e4630 == (HMODULE)0x0))
        || ((DAT_1553e4638 == (FARPROC)0x0 &&
            (DAT_1553e4638 = GetProcAddress(DAT_1553e4630,"RegOpenKeyExW"),
            DAT_1553e4638 == (FARPROC)0x0)))) ||
       ((DAT_1553e4650 == (FARPROC)0x0 &&
        (DAT_1553e4650 = GetProcAddress(DAT_1553e4630,"RegCloseKey"), DAT_1553e4650 == (FARPROC)0x0)
        ))) {
      DVar3 = GetLastError();
    }
    else {
      local_178 = &local_160;
      IVar5 = (*DAT_1553e4638)(&DAT_ffffffff80000002,
                               L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",0,1);
      DVar3 = (DWORD)IVar5;
      hMem = (ushort *)0x0;
      if (DVar3 == 0) {
        DVar3 = FUN_140e7f470(local_160,L"CurrentBuildNumber",local_168,local_158);
        (*DAT_1553e4650)();
        hMem = local_158[0];
      }
    }
    if ((DVar3 == 0) && (local_168[0] == 1)) {
      uVar6 = 0xffffffffffffffff;
      puVar7 = hMem;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar1 != 0);
      for (puVar7 = hMem; puVar7 < hMem + (~uVar6 - 1); puVar7 = puVar7 + 1) {
        iVar4 = isdigit((uint)*puVar7);
        if (iVar4 == 0) {
          DAT_1553e473c = 0;
          break;
        }
        DAT_1553e473c = (*puVar7 - 0x30) + DAT_1553e473c * 10;
      }
    }
    LocalFree(hMem);
  }
  return param_1 <= DAT_1553e473c;
}

// FUN_140e7f900 @ 140e7f900

undefined8 FUN_140e7f900(undefined4 param_1,INT_PTR *param_2,undefined8 *param_3)

{
  int iVar1;
  INT_PTR IVar2;
  INT_PTR IVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((((DAT_1553e4590 != (HMODULE)0x0) ||
       (DAT_1553e4590 = (HMODULE)FUN_140e7e920(L"Setupapi.dll",0), DAT_1553e4590 != (HMODULE)0x0))
      && ((DAT_1553e4598 != (FARPROC)0x0 ||
          (DAT_1553e4598 = GetProcAddress(DAT_1553e4590,"SetupDiGetClassDevsW"),
          DAT_1553e4598 != (FARPROC)0x0)))) &&
     ((((DAT_1553e45a0 != (FARPROC)0x0 ||
        (DAT_1553e45a0 = GetProcAddress(DAT_1553e4590,"SetupDiEnumDeviceInfo"),
        DAT_1553e45a0 != (FARPROC)0x0)) &&
       ((DAT_1553e45b0 != (FARPROC)0x0 ||
        (DAT_1553e45b0 = GetProcAddress(DAT_1553e4590,"SetupDiGetDeviceRegistryPropertyW"),
        DAT_1553e45b0 != (FARPROC)0x0)))) &&
      ((((DAT_1553e45a8 != (FARPROC)0x0 ||
         (DAT_1553e45a8 = GetProcAddress(DAT_1553e4590,"SetupDiGetDeviceInterfaceDetailW"),
         DAT_1553e45a8 != (FARPROC)0x0)) &&
        ((DAT_1553e45c0 != (FARPROC)0x0 ||
         (DAT_1553e45c0 = GetProcAddress(DAT_1553e4590,"SetupDiDestroyDeviceInfoList"),
         DAT_1553e45c0 != (FARPROC)0x0)))) && (IVar2 = (*DAT_1553e4598)(0,0,0,6), IVar2 != -1))))))
  {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined4 *)param_3 = 0x20;
    IVar3 = (*DAT_1553e45a0)(IVar2,0,param_3);
    iVar1 = (int)IVar3;
    while (iVar1 != 0) {
      iVar1 = FUN_140e7dfc0(param_1,IVar2,param_3);
      if (iVar1 == 1) {
        *param_2 = IVar2;
        return 1;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *(undefined4 *)param_3 = 0x20;
      IVar3 = (*DAT_1553e45a0)(IVar2,uVar4,param_3);
      iVar1 = (int)IVar3;
    }
    (*DAT_1553e45c0)(IVar2);
  }
  return 0;
}

// FUN_140e7fb00 @ 140e7fb00

STRSAFE_LPWSTR FUN_140e7fb00(STRSAFE_LPCWSTR param_1)

{
  size_t uBytes;
  short sVar1;
  wchar_t wVar2;
  HRESULT HVar3;
  STRSAFE_LPWSTR pwVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  short *psVar8;
  STRSAFE_LPCWSTR pwVar9;
  STRSAFE_LPCWSTR pwVar10;
  
  uVar5 = 0xffffffffffffffff;
  pwVar4 = (STRSAFE_LPWSTR)0x0;
  psVar8 = (short *)&u__dll;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    sVar1 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar1 != 0);
  if (param_1 != (STRSAFE_LPCWSTR)0x0) {
    uVar6 = 0xffffffffffffffff;
    pwVar9 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      wVar2 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (wVar2 != L'\0');
    uVar6 = ~uVar6;
    for (pwVar9 = param_1 + (uVar6 - 1);
        ((param_1 < pwVar9 && (*pwVar9 != L'\\')) && (*pwVar9 != L'.')); pwVar9 = pwVar9 + -1) {
    }
    pwVar10 = param_1 + (uVar6 - 1);
    if (*pwVar9 == L'.') {
      pwVar10 = pwVar9;
    }
    lVar7 = -1;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      wVar2 = *pwVar10;
      pwVar10 = pwVar10 + 1;
    } while (wVar2 != L'\0');
    if (lVar7 != -2) {
      if (lVar7 != -3) {
        pwVar4 = (STRSAFE_LPWSTR)FUN_140e7f330(param_1);
        return pwVar4;
      }
      pwVar4 = (STRSAFE_LPWSTR)FUN_140e7f3c0(param_1,uVar6 - 2);
      return pwVar4;
    }
    uBytes = (uVar6 + (~uVar5 - 2)) * 2 + 2;
    pwVar4 = LocalAlloc(0x40,uBytes);
    if ((pwVar4 != (STRSAFE_LPWSTR)0x0) &&
       ((HVar3 = StringCbCopyW(pwVar4,uBytes,param_1), HVar3 < 0 ||
        (HVar3 = StringCbCatW(pwVar4,uBytes,L".dll"), HVar3 < 0)))) {
      LocalFree(pwVar4);
      pwVar4 = (STRSAFE_LPWSTR)0x0;
    }
  }
  return pwVar4;
}

// FUN_140e7fc30 @ 140e7fc30

int * FUN_140e7fc30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  INT_PTR IVar2;
  int *piVar3;
  int *hMem;
  INT_PTR IVar4;
  int *piVar5;
  int *piVar6;
  uint local_res18 [2];
  
  piVar5 = (int *)0x0;
  piVar6 = (int *)0x0;
  if (((((DAT_1553e4630 == (HMODULE)0x0) &&
        (DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0), DAT_1553e4630 == (HMODULE)0x0))
       || ((DAT_1553e4658 == (FARPROC)0x0 &&
           (DAT_1553e4658 = GetProcAddress(DAT_1553e4630,"OpenSCManagerW"),
           DAT_1553e4658 == (FARPROC)0x0)))) ||
      (((DAT_1553e4660 == (FARPROC)0x0 &&
        (DAT_1553e4660 = GetProcAddress(DAT_1553e4630,"OpenServiceW"), DAT_1553e4660 == (FARPROC)0x0
        )) || ((DAT_1553e4668 == (FARPROC)0x0 &&
               (DAT_1553e4668 = GetProcAddress(DAT_1553e4630,"QueryServiceConfigW"),
               DAT_1553e4668 == (FARPROC)0x0)))))) ||
     ((DAT_1553e4678 == (FARPROC)0x0 &&
      (DAT_1553e4678 = GetProcAddress(DAT_1553e4630,"CloseServiceHandle"),
      DAT_1553e4678 == (FARPROC)0x0)))) {
    piVar5 = (int *)0x0;
  }
  else {
    local_res18[0] = 0;
    IVar2 = (*DAT_1553e4658)(0,0,0x80000000);
    piVar3 = piVar5;
    hMem = piVar5;
    if ((IVar2 != 0) &&
       (piVar3 = (int *)(*DAT_1553e4660)(IVar2,param_2,0x80000000), piVar3 != (int *)0x0)) {
      (*DAT_1553e4668)(piVar3,0,0,local_res18);
      piVar5 = piVar6;
      hMem = (int *)0x0;
      if ((((local_res18[0] != 0) &&
           (hMem = LocalAlloc(0x40,(ulonglong)local_res18[0]), hMem != (int *)0x0)) &&
          (IVar4 = (*DAT_1553e4668)(piVar3,hMem,(ulonglong)local_res18[0],local_res18),
          (int)IVar4 != 0)) &&
         ((*hMem == 1 && (iVar1 = FUN_140e7de30(*(undefined8 *)(hMem + 4),param_1), iVar1 != 0)))) {
        piVar5 = (int *)FUN_140e7f330(*(undefined8 *)(hMem + 4));
      }
    }
    LocalFree(hMem);
    if (piVar3 != (int *)0x0) {
      (*DAT_1553e4678)(piVar3);
    }
    if (IVar2 != 0) {
      (*DAT_1553e4678)(IVar2);
    }
  }
  return piVar5;
}

// FUN_140e7fe30 @ 140e7fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140e7fe30(undefined8 param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  short *hMem;
  INT_PTR IVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 auStack_c8 [32];
  short *local_a8;
  undefined4 local_a0;
  ulonglong *local_98;
  uint local_88 [2];
  ulonglong local_80;
  uint local_78 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar6 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_80 = 0;
  local_68 = 0x20;
  if ((((DAT_1553e4590 == (HMODULE)0x0) &&
       (DAT_1553e4590 = (HMODULE)FUN_140e7e920(L"Setupapi.dll",0), DAT_1553e4590 == (HMODULE)0x0))
      || ((DAT_1553e45b0 == (FARPROC)0x0 &&
          (DAT_1553e45b0 = GetProcAddress(DAT_1553e4590,"SetupDiGetDeviceRegistryPropertyW"),
          DAT_1553e45b0 == (FARPROC)0x0)))) ||
     ((DAT_1553e45c0 == (FARPROC)0x0 &&
      (DAT_1553e45c0 = GetProcAddress(DAT_1553e4590,"SetupDiDestroyDeviceInfoList"),
      DAT_1553e45c0 == (FARPROC)0x0)))) {
    uVar6 = 0;
  }
  else {
    iVar4 = FUN_140e7f900(param_2,&local_80,&local_68);
    uVar3 = local_80;
    if (iVar4 != 0) {
      local_78[0] = 4;
      local_78[1] = 0x11;
      local_78[2] = 0x12;
      puVar11 = local_78;
      uVar10 = uVar6;
      do {
        if (2 < (uint)uVar10) break;
        uVar2 = *puVar11;
        local_98 = &local_80;
        iVar4 = 0;
        local_a0 = 0;
        local_88[0] = 0;
        local_80 = local_80 & 0xffffffff00000000;
        local_a8 = (short *)0x0;
        (*DAT_1553e45b0)(uVar3,&local_68,(ulonglong)uVar2,local_88);
        if ((int)local_80 != 0) {
          if (local_88[0] != 0) {
            if (local_88[0] < 3) {
              iVar4 = 2;
            }
            else if (local_88[0] == 7) {
              iVar4 = 4;
            }
          }
          hMem = LocalAlloc(0x40,(ulonglong)(uint)(iVar4 + (int)local_80));
          if (hMem != (short *)0x0) {
            local_98 = (ulonglong *)0x0;
            local_a0 = (int)local_80;
            local_a8 = hMem;
            IVar5 = (*DAT_1553e45b0)(uVar3,&local_68,(ulonglong)uVar2,local_88);
            if ((int)IVar5 != 0) {
              if (local_88[0] == 1) {
                uVar6 = FUN_140e7fc30(param_1,hMem);
              }
              else if ((local_88[0] == 7) && (psVar8 = hMem, *hMem != 0)) {
                do {
                  uVar6 = FUN_140e7fc30(param_1,hMem);
                  if (uVar6 != 0) goto LAB_140e80076;
                  uVar7 = 0xffffffffffffffff;
                  psVar9 = psVar8;
                  do {
                    if (uVar7 == 0) break;
                    uVar7 = uVar7 - 1;
                    sVar1 = *psVar9;
                    psVar9 = psVar9 + 1;
                  } while (sVar1 != 0);
                  psVar8 = psVar8 + ~uVar7;
                } while (*psVar8 != 0);
                LocalFree(hMem);
                goto LAB_140e80085;
              }
            }
LAB_140e80076:
            LocalFree(hMem);
          }
        }
LAB_140e80085:
        uVar10 = (ulonglong)((uint)uVar10 + 1);
        puVar11 = puVar11 + 1;
      } while (uVar6 == 0);
      (*DAT_1553e45c0)(uVar3);
    }
  }
  return uVar6;
}

// FUN_140e800f0 @ 140e800f0

ushort * FUN_140e800f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  short sVar1;
  ushort uVar2;
  short *hMem;
  int iVar3;
  INT_PTR IVar4;
  ushort *hMem_00;
  ulonglong uVar5;
  short *psVar6;
  short *psVar7;
  int local_res20 [2];
  undefined8 local_38;
  short *local_30;
  
  local_38 = 0;
  if ((((DAT_1553e4630 == (HMODULE)0x0) &&
       (DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0), DAT_1553e4630 == (HMODULE)0x0))
      || ((DAT_1553e4638 == (FARPROC)0x0 &&
          (DAT_1553e4638 = GetProcAddress(DAT_1553e4630,"RegOpenKeyExW"),
          DAT_1553e4638 == (FARPROC)0x0)))) ||
     (((DAT_1553e4650 == (FARPROC)0x0 &&
       (DAT_1553e4650 = GetProcAddress(DAT_1553e4630,"RegCloseKey"), DAT_1553e4650 == (FARPROC)0x0))
      || (IVar4 = (*DAT_1553e4638)(param_2,param_3,0,1,&local_38), hMem_00 = (ushort *)0x0,
         (int)IVar4 != 0)))) {
    hMem_00 = (ushort *)0x0;
  }
  else {
    do {
      if (*param_4 == 0) break;
      local_30 = (short *)0x0;
      local_res20[0] = 0;
      iVar3 = FUN_140e7f470(local_38,*param_4,local_res20,&local_30);
      hMem = local_30;
      if (iVar3 == 0) {
        if (local_res20[0] == 1) {
          iVar3 = FUN_140e7de30(local_30,param_1);
          psVar6 = hMem;
          if (iVar3 != 0) {
LAB_140e80277:
            hMem_00 = (ushort *)FUN_140e7f330(psVar6);
          }
        }
        else if (local_res20[0] == 7) {
          sVar1 = *local_30;
          psVar6 = local_30;
          while ((sVar1 != 0 && (iVar3 = FUN_140e7de30(psVar6,param_1), iVar3 == 0))) {
            uVar5 = 0xffffffffffffffff;
            psVar7 = psVar6;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              sVar1 = *psVar7;
              psVar7 = psVar7 + 1;
            } while (sVar1 != 0);
            psVar6 = psVar6 + ~uVar5;
            sVar1 = *psVar6;
          }
          if (*psVar6 != 0) goto LAB_140e80277;
        }
        else {
          SetLastError(0xd);
        }
      }
      LocalFree(hMem);
      param_4 = param_4 + 1;
    } while (hMem_00 == (ushort *)0x0);
    (*DAT_1553e4650)(local_38);
    if ((hMem_00 == (ushort *)0x0) ||
       (((uVar2 = *hMem_00, uVar2 != 0x5c && (uVar2 != 0x2f)) &&
        (((iVar3 = isalpha((uint)uVar2), iVar3 == 0 || (hMem_00[1] != 0x3a)) ||
         ((hMem_00[2] != 0x5c && (hMem_00[2] != 0x2f)))))))) {
      LocalFree(hMem_00);
      hMem_00 = (ushort *)0x0;
    }
  }
  return hMem_00;
}

// FUN_140e80310 @ 140e80310

ulonglong FUN_140e80310(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  INT_PTR IVar2;
  HLOCAL _Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  uVar5 = 0;
  local_res20 = 0;
  if (((((DAT_1553e4630 != (HMODULE)0x0) ||
        (DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0), DAT_1553e4630 != (HMODULE)0x0))
       && ((DAT_1553e4638 != (FARPROC)0x0 ||
           (DAT_1553e4638 = GetProcAddress(DAT_1553e4630,"RegOpenKeyExW"),
           DAT_1553e4638 != (FARPROC)0x0)))) &&
      ((DAT_1553e4640 != (FARPROC)0x0 ||
       (DAT_1553e4640 = GetProcAddress(DAT_1553e4630,"RegEnumValueW"), DAT_1553e4640 != (FARPROC)0x0
       )))) && ((uVar3 = uVar5, DAT_1553e4650 != (FARPROC)0x0 ||
                (DAT_1553e4650 = GetProcAddress(DAT_1553e4630,"RegCloseKey"),
                DAT_1553e4650 != (FARPROC)0x0)))) {
    do {
      if (*param_3 == 0) {
        return uVar3;
      }
      IVar2 = (*DAT_1553e4638)(param_2,*param_3,0,0x20019,&local_res20);
      if ((int)IVar2 == 0) {
        _Dst = LocalAlloc(0x40,0x10000);
        uVar4 = uVar5;
        if (_Dst != (HLOCAL)0x0) {
          do {
            local_res18[0] = 0x7fff;
            memset(_Dst,0,0x8000);
            IVar2 = (*DAT_1553e4640)(local_res20,uVar4,_Dst,local_res18,0,0,0,0);
            if (((int)IVar2 == 0) && (iVar1 = FUN_140e7de30(_Dst), iVar1 != 0)) {
              uVar3 = FUN_140e7f330(_Dst);
            }
          } while ((uVar3 == 0) && (uVar4 = (ulonglong)((int)uVar4 + 1), (int)IVar2 != 0x103));
          LocalFree(_Dst);
        }
        (*DAT_1553e4650)(local_res20);
      }
      param_3 = param_3 + 1;
    } while (uVar3 == 0);
    return uVar3;
  }
  return 0;
}

// nvLoadLibraryFromTrustedLocationExW @ 140e80520

HMODULE nvLoadLibraryFromTrustedLocationExW(LPCWSTR param_1,uint param_2)

{
  WCHAR WVar1;
  int iVar2;
  HMODULE pHVar3;
  DWORD dwErrCode;
  
  SetLastError(0);
  if (param_1 == (LPCWSTR)0x0) {
LAB_140e805a0:
    dwErrCode = 0xa0;
  }
  else {
    WVar1 = *param_1;
    if ((WVar1 != L'\\') && (WVar1 != L'/')) {
      iVar2 = isalpha((uint)(ushort)WVar1);
      if (((iVar2 == 0) || (param_1[1] != L':')) || ((param_1[2] != L'\\' && (param_1[2] != L'/'))))
      goto LAB_140e805a0;
    }
    iVar2 = FUN_140e7eb90(param_1);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e80599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pHVar3 = LoadLibraryExW(param_1,(HANDLE)0x0,param_2 & 0xffffe8f7);
      return pHVar3;
    }
    dwErrCode = 0xa1;
  }
  SetLastError(dwErrCode);
  return (HMODULE)0x0;
}

// nvLoadLibraryFromTrustedLocationExA @ 140e805c0

undefined8 nvLoadLibraryFromTrustedLocationExA(longlong param_1,undefined4 param_2)

{
  HLOCAL hMem;
  undefined8 uVar1;
  
  uVar1 = 0;
  hMem = (HLOCAL)FUN_140e7d700();
  if ((param_1 == 0) || (hMem != (HLOCAL)0x0)) {
    uVar1 = nvLoadLibraryFromTrustedLocationExW(hMem,param_2);
  }
  LocalFree(hMem);
  return uVar1;
}

// FUN_140e80630 @ 140e80630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e80630(uint *param_1)

{
  void *_Buf1;
  int iVar1;
  undefined8 uVar2;
  ulonglong _Size;
  undefined1 auStack_698 [32];
  undefined1 local_678;
  undefined1 local_677;
  undefined1 local_676;
  undefined1 local_675;
  undefined1 local_674;
  undefined1 local_673;
  undefined1 local_672;
  undefined1 local_671;
  undefined1 local_670;
  undefined1 local_66f;
  undefined1 local_66e;
  undefined1 local_66d;
  undefined1 local_66c;
  undefined1 local_66b;
  undefined1 local_66a;
  undefined1 local_669;
  undefined1 local_668;
  undefined1 local_667;
  undefined1 local_666;
  undefined1 local_665;
  undefined1 local_664;
  undefined1 local_663;
  undefined1 local_662;
  undefined1 local_661;
  undefined1 local_660;
  undefined1 local_65f;
  undefined1 local_65e;
  undefined1 local_65d;
  undefined1 local_65c;
  undefined1 local_65b;
  undefined1 local_65a;
  undefined1 local_659;
  undefined1 local_658;
  undefined1 local_657;
  undefined1 local_656;
  undefined1 local_655;
  undefined1 local_654;
  undefined1 local_653;
  undefined1 local_652;
  undefined1 local_651;
  undefined1 local_650;
  undefined1 local_64f;
  undefined1 local_64e;
  undefined1 local_64d;
  undefined1 local_64c;
  undefined1 local_64b;
  undefined1 local_64a;
  undefined1 local_649;
  undefined1 local_648;
  undefined1 local_647;
  undefined1 local_646;
  undefined1 local_645;
  undefined1 local_644;
  undefined1 local_643;
  undefined1 local_642;
  undefined1 local_641;
  undefined1 local_640;
  undefined1 local_63f;
  undefined1 local_63e;
  undefined1 local_63d;
  undefined1 local_63c;
  undefined1 local_63b;
  undefined1 local_63a;
  undefined1 local_639;
  undefined1 local_638;
  undefined1 local_637;
  undefined1 local_636;
  undefined1 local_635;
  undefined1 local_634;
  undefined1 local_633;
  undefined1 local_632;
  undefined1 local_631;
  undefined1 local_630;
  undefined1 local_62f;
  undefined1 local_62e;
  undefined1 local_62d;
  undefined1 local_62c;
  undefined1 local_62b;
  undefined1 local_62a;
  undefined1 local_629;
  undefined1 local_628;
  undefined1 local_627;
  undefined1 local_626;
  undefined1 local_625;
  undefined1 local_624;
  undefined1 local_623;
  undefined1 local_622;
  undefined1 local_621;
  undefined1 local_620;
  undefined1 local_61f;
  undefined1 local_61e;
  undefined1 local_61d;
  undefined1 local_61c;
  undefined1 local_61b;
  undefined1 local_61a;
  undefined1 local_619;
  undefined1 local_618;
  undefined1 local_617;
  undefined1 local_616;
  undefined1 local_615;
  undefined1 local_614;
  undefined1 local_613;
  undefined1 local_612;
  undefined1 local_611;
  undefined1 local_610;
  undefined1 local_60f;
  undefined1 local_60e;
  undefined1 local_60d;
  undefined1 local_60c;
  undefined1 local_60b;
  undefined1 local_60a;
  undefined1 local_609;
  undefined1 local_608;
  undefined1 local_607;
  undefined1 local_606;
  undefined1 local_605;
  undefined1 local_604;
  undefined1 local_603;
  undefined1 local_602;
  undefined1 local_601;
  undefined1 local_600;
  undefined1 local_5ff;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  undefined1 local_5fb;
  undefined1 local_5fa;
  undefined1 local_5f9;
  undefined1 local_5f8;
  undefined1 local_5f7;
  undefined1 local_5f6;
  undefined1 local_5f5;
  undefined1 local_5f4;
  undefined1 local_5f3;
  undefined1 local_5f2;
  undefined1 local_5f1;
  undefined1 local_5f0;
  undefined1 local_5ef;
  undefined1 local_5ee;
  undefined1 local_5ed;
  undefined1 local_5ec;
  undefined1 local_5eb;
  undefined1 local_5ea;
  undefined1 local_5e9;
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6;
  undefined1 local_5e5;
  undefined1 local_5e4;
  undefined1 local_5e3;
  undefined1 local_5e2;
  undefined1 local_5e1;
  undefined1 local_5e0;
  undefined1 local_5df;
  undefined1 local_5de;
  undefined1 local_5dd;
  undefined1 local_5dc;
  undefined1 local_5db;
  undefined1 local_5da;
  undefined1 local_5d9;
  undefined1 local_5d8;
  undefined1 local_5d7;
  undefined1 local_5d6;
  undefined1 local_5d5;
  undefined1 local_5d4;
  undefined1 local_5d3;
  undefined1 local_5d2;
  undefined1 local_5d1;
  undefined1 local_5d0;
  undefined1 local_5cf;
  undefined1 local_5ce;
  undefined1 local_5cd;
  undefined1 local_5cc;
  undefined1 local_5cb;
  undefined1 local_5ca;
  undefined1 local_5c9;
  undefined1 local_5c8;
  undefined1 local_5c7;
  undefined1 local_5c6;
  undefined1 local_5c5;
  undefined1 local_5c4;
  undefined1 local_5c3;
  undefined1 local_5c2;
  undefined1 local_5c1;
  undefined1 local_5c0;
  undefined1 local_5bf;
  undefined1 local_5be;
  undefined1 local_5bd;
  undefined1 local_5bc;
  undefined1 local_5bb;
  undefined1 local_5ba;
  undefined1 local_5b9;
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6;
  undefined1 local_5b5;
  undefined1 local_5b4;
  undefined1 local_5b3;
  undefined1 local_5b2;
  undefined1 local_5b1;
  undefined1 local_5b0;
  undefined1 local_5af;
  undefined1 local_5ae;
  undefined1 local_5ad;
  undefined1 local_5ac;
  undefined1 local_5ab;
  undefined1 local_5aa;
  undefined1 local_5a9;
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined1 local_5a6;
  undefined1 local_5a5;
  undefined1 local_5a4;
  undefined1 local_5a3;
  undefined1 local_5a2;
  undefined1 local_5a1;
  undefined1 local_5a0;
  undefined1 local_59f;
  undefined1 local_59e;
  undefined1 local_59d;
  undefined1 local_59c;
  undefined1 local_59b;
  undefined1 local_59a;
  undefined1 local_599;
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596;
  undefined1 local_595;
  undefined1 local_594;
  undefined1 local_593;
  undefined1 local_592;
  undefined1 local_591;
  undefined1 local_590;
  undefined1 local_58f;
  undefined1 local_58e;
  undefined1 local_58d;
  undefined1 local_58c;
  undefined1 local_58b;
  undefined1 local_58a;
  undefined1 local_589;
  undefined1 local_588;
  undefined1 local_587;
  undefined1 local_586;
  undefined1 local_585;
  undefined1 local_584;
  undefined1 local_583;
  undefined1 local_582;
  undefined1 local_581;
  undefined1 local_580;
  undefined1 local_57f;
  undefined1 local_57e;
  undefined1 local_57d;
  undefined1 local_57c;
  undefined1 local_57b;
  undefined1 local_57a;
  undefined1 local_579;
  undefined1 local_578;
  undefined1 local_577;
  undefined1 local_576;
  undefined1 local_575;
  undefined1 local_574;
  undefined1 local_573;
  undefined1 local_572;
  undefined1 local_571;
  undefined1 local_570;
  undefined1 local_56f;
  undefined1 local_56e;
  undefined1 local_56d;
  undefined1 local_56c;
  undefined1 local_56b;
  undefined1 local_568;
  undefined1 local_567;
  undefined1 local_566;
  undefined1 local_565;
  undefined1 local_564;
  undefined1 local_563;
  undefined1 local_562;
  undefined1 local_561;
  undefined1 local_560;
  undefined1 local_55f;
  undefined1 local_55e;
  undefined1 local_55d;
  undefined1 local_55c;
  undefined1 local_55b;
  undefined1 local_55a;
  undefined1 local_559;
  undefined1 local_558;
  undefined1 local_557;
  undefined1 local_556;
  undefined1 local_555;
  undefined1 local_554;
  undefined1 local_553;
  undefined1 local_552;
  undefined1 local_551;
  undefined1 local_550;
  undefined1 local_54f;
  undefined1 local_54e;
  undefined1 local_54d;
  undefined1 local_54c;
  undefined1 local_54b;
  undefined1 local_54a;
  undefined1 local_549;
  undefined1 local_548;
  undefined1 local_547;
  undefined1 local_546;
  undefined1 local_545;
  undefined1 local_544;
  undefined1 local_543;
  undefined1 local_542;
  undefined1 local_541;
  undefined1 local_540;
  undefined1 local_53f;
  undefined1 local_53e;
  undefined1 local_53d;
  undefined1 local_53c;
  undefined1 local_53b;
  undefined1 local_53a;
  undefined1 local_539;
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  undefined1 local_534;
  undefined1 local_533;
  undefined1 local_532;
  undefined1 local_531;
  undefined1 local_530;
  undefined1 local_52f;
  undefined1 local_52e;
  undefined1 local_52d;
  undefined1 local_52c;
  undefined1 local_52b;
  undefined1 local_52a;
  undefined1 local_529;
  undefined1 local_528;
  undefined1 local_527;
  undefined1 local_526;
  undefined1 local_525;
  undefined1 local_524;
  undefined1 local_523;
  undefined1 local_522;
  undefined1 local_521;
  undefined1 local_520;
  undefined1 local_51f;
  undefined1 local_51e;
  undefined1 local_51d;
  undefined1 local_51c;
  undefined1 local_51b;
  undefined1 local_51a;
  undefined1 local_519;
  undefined1 local_518;
  undefined1 local_517;
  undefined1 local_516;
  undefined1 local_515;
  undefined1 local_514;
  undefined1 local_513;
  undefined1 local_512;
  undefined1 local_511;
  undefined1 local_510;
  undefined1 local_50f;
  undefined1 local_50e;
  undefined1 local_50d;
  undefined1 local_50c;
  undefined1 local_50b;
  undefined1 local_50a;
  undefined1 local_509;
  undefined1 local_508;
  undefined1 local_507;
  undefined1 local_506;
  undefined1 local_505;
  undefined1 local_504;
  undefined1 local_503;
  undefined1 local_502;
  undefined1 local_501;
  undefined1 local_500;
  undefined1 local_4ff;
  undefined1 local_4fe;
  undefined1 local_4fd;
  undefined1 local_4fc;
  undefined1 local_4fb;
  undefined1 local_4fa;
  undefined1 local_4f9;
  undefined1 local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f6;
  undefined1 local_4f5;
  undefined1 local_4f4;
  undefined1 local_4f3;
  undefined1 local_4f2;
  undefined1 local_4f1;
  undefined1 local_4f0;
  undefined1 local_4ef;
  undefined1 local_4ee;
  undefined1 local_4ed;
  undefined1 local_4ec;
  undefined1 local_4eb;
  undefined1 local_4ea;
  undefined1 local_4e9;
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined1 local_4e6;
  undefined1 local_4e5;
  undefined1 local_4e4;
  undefined1 local_4e3;
  undefined1 local_4e2;
  undefined1 local_4e1;
  undefined1 local_4e0;
  undefined1 local_4df;
  undefined1 local_4de;
  undefined1 local_4dd;
  undefined1 local_4dc;
  undefined1 local_4db;
  undefined1 local_4da;
  undefined1 local_4d9;
  undefined1 local_4d8;
  undefined1 local_4d7;
  undefined1 local_4d6;
  undefined1 local_4d5;
  undefined1 local_4d4;
  undefined1 local_4d3;
  undefined1 local_4d2;
  undefined1 local_4d1;
  undefined1 local_4d0;
  undefined1 local_4cf;
  undefined1 local_4ce;
  undefined1 local_4cd;
  undefined1 local_4cc;
  undefined1 local_4cb;
  undefined1 local_4ca;
  undefined1 local_4c9;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  undefined1 local_4c5;
  undefined1 local_4c4;
  undefined1 local_4c3;
  undefined1 local_4c2;
  undefined1 local_4c1;
  undefined1 local_4c0;
  undefined1 local_4bf;
  undefined1 local_4be;
  undefined1 local_4bd;
  undefined1 local_4bc;
  undefined1 local_4bb;
  undefined1 local_4ba;
  undefined1 local_4b9;
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined1 local_4b6;
  undefined1 local_4b5;
  undefined1 local_4b4;
  undefined1 local_4b3;
  undefined1 local_4b2;
  undefined1 local_4b1;
  undefined1 local_4b0;
  undefined1 local_4af;
  undefined1 local_4ae;
  undefined1 local_4ad;
  undefined1 local_4ac;
  undefined1 local_4ab;
  undefined1 local_4aa;
  undefined1 local_4a9;
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6;
  undefined1 local_4a5;
  undefined1 local_4a4;
  undefined1 local_4a3;
  undefined1 local_4a2;
  undefined1 local_4a1;
  undefined1 local_4a0;
  undefined1 local_49f;
  undefined1 local_49e;
  undefined1 local_49d;
  undefined1 local_49c;
  undefined1 local_49b;
  undefined1 local_49a;
  undefined1 local_499;
  undefined1 local_498;
  undefined1 local_497;
  undefined1 local_496;
  undefined1 local_495;
  undefined1 local_494;
  undefined1 local_493;
  undefined1 local_492;
  undefined1 local_491;
  undefined1 local_490;
  undefined1 local_48f;
  undefined1 local_48e;
  undefined1 local_48d;
  undefined1 local_48c;
  undefined1 local_48b;
  undefined1 local_48a;
  undefined1 local_489;
  undefined1 local_488;
  undefined1 local_487;
  undefined1 local_486;
  undefined1 local_485;
  undefined1 local_484;
  undefined1 local_483;
  undefined1 local_482;
  undefined1 local_481;
  undefined1 local_480;
  undefined1 local_47f;
  undefined1 local_47e;
  undefined1 local_47d;
  undefined1 local_47c;
  undefined1 local_47b;
  undefined1 local_47a;
  undefined1 local_479;
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  undefined1 local_475;
  undefined1 local_474;
  undefined1 local_473;
  undefined1 local_472;
  undefined1 local_471;
  undefined1 local_470;
  undefined1 local_46f;
  undefined1 local_46e;
  undefined1 local_46d;
  undefined1 local_46c;
  undefined1 local_46b;
  undefined1 local_46a;
  undefined1 local_469;
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466;
  undefined1 local_465;
  undefined1 local_464;
  undefined1 local_463;
  undefined1 local_462;
  undefined1 local_461;
  undefined1 local_460;
  undefined1 local_45f;
  undefined1 local_45e;
  undefined1 local_45d;
  undefined1 local_45c;
  undefined1 local_45b;
  undefined1 local_458;
  undefined1 local_457;
  undefined1 local_456;
  undefined1 local_455;
  undefined1 local_454;
  undefined1 local_453;
  undefined1 local_452;
  undefined1 local_451;
  undefined1 local_450;
  undefined1 local_44f;
  undefined1 local_44e;
  undefined1 local_44d;
  undefined1 local_44c;
  undefined1 local_44b;
  undefined1 local_44a;
  undefined1 local_449;
  undefined1 local_448;
  undefined1 local_447;
  undefined1 local_446;
  undefined1 local_445;
  undefined1 local_444;
  undefined1 local_443;
  undefined1 local_442;
  undefined1 local_441;
  undefined1 local_440;
  undefined1 local_43f;
  undefined1 local_43e;
  undefined1 local_43d;
  undefined1 local_43c;
  undefined1 local_43b;
  undefined1 local_43a;
  undefined1 local_439;
  undefined1 local_438;
  undefined1 local_437;
  undefined1 local_436;
  undefined1 local_435;
  undefined1 local_434;
  undefined1 local_433;
  undefined1 local_432;
  undefined1 local_431;
  undefined1 local_430;
  undefined1 local_42f;
  undefined1 local_42e;
  undefined1 local_42d;
  undefined1 local_42c;
  undefined1 local_42b;
  undefined1 local_42a;
  undefined1 local_429;
  undefined1 local_428;
  undefined1 local_427;
  undefined1 local_426;
  undefined1 local_425;
  undefined1 local_424;
  undefined1 local_423;
  undefined1 local_422;
  undefined1 local_421;
  undefined1 local_420;
  undefined1 local_41f;
  undefined1 local_41e;
  undefined1 local_41d;
  undefined1 local_41c;
  undefined1 local_41b;
  undefined1 local_41a;
  undefined1 local_419;
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_416;
  undefined1 local_415;
  undefined1 local_414;
  undefined1 local_413;
  undefined1 local_412;
  undefined1 local_411;
  undefined1 local_410;
  undefined1 local_40f;
  undefined1 local_40e;
  undefined1 local_40d;
  undefined1 local_40c;
  undefined1 local_40b;
  undefined1 local_40a;
  undefined1 local_409;
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404;
  undefined1 local_403;
  undefined1 local_402;
  undefined1 local_401;
  undefined1 local_400;
  undefined1 local_3ff;
  undefined1 local_3fe;
  undefined1 local_3fd;
  undefined1 local_3fc;
  undefined1 local_3fb;
  undefined1 local_3fa;
  undefined1 local_3f9;
  undefined1 local_3f8;
  undefined1 local_3f7;
  undefined1 local_3f6;
  undefined1 local_3f5;
  undefined1 local_3f4;
  undefined1 local_3f3;
  undefined1 local_3f2;
  undefined1 local_3f1;
  undefined1 local_3f0;
  undefined1 local_3ef;
  undefined1 local_3ee;
  undefined1 local_3ed;
  undefined1 local_3ec;
  undefined1 local_3eb;
  undefined1 local_3ea;
  undefined1 local_3e9;
  undefined1 local_3e8;
  undefined1 local_3e7;
  undefined1 local_3e6;
  undefined1 local_3e5;
  undefined1 local_3e4;
  undefined1 local_3e3;
  undefined1 local_3e2;
  undefined1 local_3e1;
  undefined1 local_3e0;
  undefined1 local_3df;
  undefined1 local_3de;
  undefined1 local_3dd;
  undefined1 local_3dc;
  undefined1 local_3db;
  undefined1 local_3da;
  undefined1 local_3d9;
  undefined1 local_3d8;
  undefined1 local_3d7;
  undefined1 local_3d6;
  undefined1 local_3d5;
  undefined1 local_3d4;
  undefined1 local_3d3;
  undefined1 local_3d2;
  undefined1 local_3d1;
  undefined1 local_3d0;
  undefined1 local_3cf;
  undefined1 local_3ce;
  undefined1 local_3cd;
  undefined1 local_3cc;
  undefined1 local_3cb;
  undefined1 local_3ca;
  undefined1 local_3c9;
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6;
  undefined1 local_3c5;
  undefined1 local_3c4;
  undefined1 local_3c3;
  undefined1 local_3c2;
  undefined1 local_3c1;
  undefined1 local_3c0;
  undefined1 local_3bf;
  undefined1 local_3be;
  undefined1 local_3bd;
  undefined1 local_3bc;
  undefined1 local_3bb;
  undefined1 local_3ba;
  undefined1 local_3b9;
  undefined1 local_3b8;
  undefined1 local_3b7;
  undefined1 local_3b6;
  undefined1 local_3b5;
  undefined1 local_3b4;
  undefined1 local_3b3;
  undefined1 local_3b2;
  undefined1 local_3b1;
  undefined1 local_3b0;
  undefined1 local_3af;
  undefined1 local_3ae;
  undefined1 local_3ad;
  undefined1 local_3ac;
  undefined1 local_3ab;
  undefined1 local_3aa;
  undefined1 local_3a9;
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5;
  undefined1 local_3a4;
  undefined1 local_3a3;
  undefined1 local_3a2;
  undefined1 local_3a1;
  undefined1 local_3a0;
  undefined1 local_39f;
  undefined1 local_39e;
  undefined1 local_39d;
  undefined1 local_39c;
  undefined1 local_39b;
  undefined1 local_39a;
  undefined1 local_399;
  undefined1 local_398;
  undefined1 local_397;
  undefined1 local_396;
  undefined1 local_395;
  undefined1 local_394;
  undefined1 local_393;
  undefined1 local_392;
  undefined1 local_391;
  undefined1 local_390;
  undefined1 local_38f;
  undefined1 local_38e;
  undefined1 local_38d;
  undefined1 local_38c;
  undefined1 local_38b;
  undefined1 local_38a;
  undefined1 local_389;
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined1 local_385;
  undefined1 local_384;
  undefined1 local_383;
  undefined1 local_382;
  undefined1 local_381;
  undefined1 local_380;
  undefined1 local_37f;
  undefined1 local_37e;
  undefined1 local_37d;
  undefined1 local_37c;
  undefined1 local_37b;
  undefined1 local_37a;
  undefined1 local_379;
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376;
  undefined1 local_375;
  undefined1 local_374;
  undefined1 local_373;
  undefined1 local_372;
  undefined1 local_371;
  undefined1 local_370;
  undefined1 local_36f;
  undefined1 local_36e;
  undefined1 local_36d;
  undefined1 local_36c;
  undefined1 local_36b;
  undefined1 local_36a;
  undefined1 local_369;
  undefined1 local_368;
  undefined1 local_367;
  undefined1 local_366;
  undefined1 local_365;
  undefined1 local_364;
  undefined1 local_363;
  undefined1 local_362;
  undefined1 local_361;
  undefined1 local_360;
  undefined1 local_35f;
  undefined1 local_35e;
  undefined1 local_35d;
  undefined1 local_35c;
  undefined1 local_35b;
  undefined1 local_35a;
  undefined1 local_359;
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356;
  undefined1 local_355;
  undefined1 local_354;
  undefined1 local_353;
  undefined1 local_352;
  undefined1 local_351;
  undefined1 local_350;
  undefined1 local_34f;
  undefined1 local_34e;
  undefined1 local_34d;
  undefined1 local_34c;
  undefined1 local_34b;
  undefined1 local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  undefined1 local_344;
  undefined1 local_343;
  undefined1 local_342;
  undefined1 local_341;
  undefined1 local_340;
  undefined1 local_33f;
  undefined1 local_33e;
  undefined1 local_33d;
  undefined1 local_33c;
  undefined1 local_33b;
  undefined1 local_33a;
  undefined1 local_339;
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336;
  undefined1 local_335;
  undefined1 local_334;
  undefined1 local_333;
  undefined1 local_332;
  undefined1 local_331;
  undefined1 local_330;
  undefined1 local_32f;
  undefined1 local_32e;
  undefined1 local_32d;
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
  undefined1 local_329;
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_322;
  undefined1 local_321;
  undefined1 local_320;
  undefined1 local_31f;
  undefined1 local_31e;
  undefined1 local_31d;
  undefined1 local_31c;
  undefined1 local_31b;
  undefined1 local_31a;
  undefined1 local_319;
  undefined1 local_318;
  undefined1 local_317;
  undefined1 local_316;
  undefined1 local_315;
  undefined1 local_314;
  undefined1 local_313;
  undefined1 local_312;
  undefined1 local_311;
  undefined1 local_310;
  undefined1 local_30f;
  undefined1 local_30e;
  undefined1 local_30d;
  undefined1 local_30c;
  undefined1 local_30b;
  undefined1 local_30a;
  undefined1 local_309;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304;
  undefined1 local_303;
  undefined1 local_302;
  undefined1 local_301;
  undefined1 local_300;
  undefined1 local_2ff;
  undefined1 local_2fe;
  undefined1 local_2fd;
  undefined1 local_2fc;
  undefined1 local_2fb;
  undefined1 local_2fa;
  undefined1 local_2f9;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4;
  undefined1 local_2f3;
  undefined1 local_2f2;
  undefined1 local_2f1;
  undefined1 local_2f0;
  undefined1 local_2ef;
  undefined1 local_2ee;
  undefined1 local_2ed;
  undefined1 local_2ec;
  undefined1 local_2eb;
  undefined1 local_2ea;
  undefined1 local_2e9;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6;
  undefined1 local_2e5;
  undefined1 local_2e4;
  undefined1 local_2e3;
  undefined1 local_2e2;
  undefined1 local_2e1;
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined1 local_2de;
  undefined1 local_2dd;
  undefined1 local_2dc;
  undefined1 local_2db;
  undefined1 local_2da;
  undefined1 local_2d9;
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4;
  undefined1 local_2d3;
  undefined1 local_2d2;
  undefined1 local_2d1;
  undefined1 local_2d0;
  undefined1 local_2cf;
  undefined1 local_2ce;
  undefined1 local_2cd;
  undefined1 local_2cc;
  undefined1 local_2cb;
  undefined1 local_2ca;
  undefined1 local_2c9;
  undefined1 local_2c8;
  undefined1 local_2c7;
  undefined1 local_2c6;
  undefined1 local_2c5;
  undefined1 local_2c4;
  undefined1 local_2c3;
  undefined1 local_2c2;
  undefined1 local_2c1;
  undefined1 local_2c0;
  undefined1 local_2bf;
  undefined1 local_2be;
  undefined1 local_2bd;
  undefined1 local_2bc;
  undefined1 local_2bb;
  undefined1 local_2ba;
  undefined1 local_2b9;
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  undefined1 local_2b0;
  undefined1 local_2af;
  undefined1 local_2ae;
  undefined1 local_2ad;
  undefined1 local_2ac;
  undefined1 local_2ab;
  undefined1 local_2aa;
  undefined1 local_2a9;
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5;
  undefined1 local_2a4;
  undefined1 local_2a3;
  undefined1 local_2a2;
  undefined1 local_2a1;
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 local_29e;
  undefined1 local_29d;
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined1 local_295;
  undefined1 local_294;
  undefined1 local_293;
  undefined1 local_292;
  undefined1 local_291;
  undefined1 local_290;
  undefined1 local_28f;
  undefined1 local_28e;
  undefined1 local_28d;
  undefined1 local_28c;
  undefined1 local_28b;
  undefined1 local_28a;
  undefined1 local_289;
  undefined1 local_288;
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285;
  undefined1 local_284;
  undefined1 local_283;
  undefined1 local_282;
  undefined1 local_281;
  undefined1 local_280;
  undefined1 local_27f;
  undefined1 local_27e;
  undefined1 local_27d;
  undefined1 local_27c;
  undefined1 local_27b;
  undefined1 local_27a;
  undefined1 local_279;
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276;
  undefined1 local_275;
  undefined1 local_274;
  undefined1 local_273;
  undefined1 local_272;
  undefined1 local_271;
  undefined1 local_270;
  undefined1 local_26f;
  undefined1 local_26e;
  undefined1 local_26d;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_26a;
  undefined1 local_269;
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  undefined1 local_264;
  undefined1 local_263;
  undefined1 local_262;
  undefined1 local_261;
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined1 local_25c;
  undefined1 local_25b;
  undefined1 local_25a;
  undefined1 local_259;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 local_254;
  undefined1 local_253;
  undefined1 local_252;
  undefined1 local_251;
  undefined1 local_250;
  undefined1 local_24f;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 local_24c;
  undefined1 local_24b;
  undefined1 local_24a;
  undefined1 local_249;
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245;
  undefined1 local_244;
  undefined1 local_243;
  undefined1 local_242;
  undefined1 local_241;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined1 local_235;
  undefined1 local_234;
  undefined1 local_233;
  undefined1 local_232;
  undefined1 local_231;
  undefined1 local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined1 local_22d;
  undefined1 local_22c;
  undefined1 local_22b;
  undefined1 local_22a;
  undefined1 local_229;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226;
  undefined1 local_225;
  undefined1 local_224;
  undefined1 local_223;
  undefined1 local_222;
  undefined1 local_221;
  undefined1 local_220;
  undefined1 local_21f;
  undefined1 local_21e;
  undefined1 local_21d;
  undefined1 local_21c;
  undefined1 local_21b;
  undefined1 local_21a;
  undefined1 local_219;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213;
  undefined1 local_212;
  undefined1 local_211;
  undefined1 local_210;
  undefined1 local_20f;
  undefined1 local_20e;
  undefined1 local_20d;
  undefined1 local_20c;
  undefined1 local_20b;
  undefined1 local_20a;
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204;
  undefined1 local_203;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined1 local_1fe;
  undefined1 local_1fd;
  undefined1 local_1fc;
  undefined1 local_1fb;
  undefined1 local_1fa;
  undefined1 local_1f9;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5;
  undefined1 local_1f4;
  undefined1 local_1f3;
  undefined1 local_1f2;
  undefined1 local_1f1;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee;
  undefined1 local_1ed;
  undefined1 local_1ec;
  undefined1 local_1eb;
  undefined1 local_1ea;
  undefined1 local_1e9;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  undefined1 local_1e4;
  undefined1 local_1e3;
  undefined1 local_1e2;
  undefined1 local_1e1;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  undefined1 local_1dd;
  undefined1 local_1dc;
  undefined1 local_1db;
  undefined1 local_1da;
  undefined1 local_1d9;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  undefined1 local_1d4;
  undefined1 local_1d3;
  undefined1 local_1d2;
  undefined1 local_1d1;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined1 local_1ce;
  undefined1 local_1cd;
  undefined1 local_1cc;
  undefined1 local_1cb;
  undefined1 local_1ca;
  undefined1 local_1c9;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  undefined1 local_1c4;
  undefined1 local_1c3;
  undefined1 local_1c2;
  undefined1 local_1c1;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 local_1be;
  undefined1 local_1bd;
  undefined1 local_1bc;
  undefined1 local_1bb;
  undefined1 local_1ba;
  undefined1 local_1b9;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2;
  undefined1 local_1b1;
  undefined1 local_1b0;
  undefined1 local_1af;
  undefined1 local_1ae;
  undefined1 local_1ad;
  undefined1 local_1ac;
  undefined1 local_1ab;
  undefined1 local_1aa;
  undefined1 local_1a9;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined1 local_199;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  undefined1 local_195;
  undefined1 local_194;
  undefined1 local_193;
  undefined1 local_192;
  undefined1 local_191;
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 local_18e;
  undefined1 local_18d;
  undefined1 local_18c;
  undefined1 local_18b;
  undefined1 local_18a;
  undefined1 local_189;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined1 local_17c;
  undefined1 local_17b;
  undefined1 local_17a;
  undefined1 local_179;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  undefined1 local_16f;
  undefined1 local_16e;
  undefined1 local_16d;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_16a;
  undefined1 local_169;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 local_161;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 local_131;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_111;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_698;
  local_458 = 0x30;
  local_457 = 0x82;
  local_456 = 1;
  local_455 = 10;
  local_454 = 2;
  local_453 = 0x82;
  local_452 = 1;
  local_451 = 1;
  local_450 = 0;
  local_44f = 0xd3;
  local_44e = 0x23;
  local_44d = 0xb1;
  local_44c = 0xcb;
  local_44b = 0xcb;
  local_44a = 0xd4;
  local_449 = 3;
  local_448 = 200;
  local_447 = 0x12;
  local_446 = 0xf0;
  local_445 = 0x9e;
  local_444 = 10;
  local_443 = 0x9d;
  local_442 = 0xb;
  local_441 = 0xac;
  local_440 = 0xf8;
  local_43f = 0x28;
  local_43e = 0x58;
  local_43d = 0xb8;
  local_43c = 0x16;
  local_43b = 0xb3;
  local_43a = 0x89;
  local_439 = 0x86;
  local_438 = 0x98;
  local_437 = 0x52;
  local_436 = 0x86;
  local_435 = 0xcd;
  local_434 = 0x5b;
  local_433 = 0xd3;
  local_432 = 0x83;
  local_431 = 0xa2;
  local_430 = 0xf7;
  local_42f = 0x53;
  local_42e = 0x2e;
  local_42d = 0x1c;
  local_42c = 0;
  local_42b = 0x3d;
  local_42a = 0x7d;
  local_429 = 0x67;
  local_428 = 0xcb;
  local_427 = 0x99;
  local_426 = 0x86;
  local_425 = 3;
  local_424 = 0xbd;
  local_423 = 0xb0;
  local_422 = 0xa0;
  local_421 = 0x8a;
  local_420 = 0x2d;
  local_41f = 0x92;
  local_41e = 0x4e;
  local_41d = 0x7f;
  local_41c = 0x29;
  local_41b = 0xd1;
  local_41a = 0xfb;
  local_419 = 0x34;
  local_418 = 0xe9;
  local_417 = 0x83;
  local_416 = 0x96;
  local_415 = 0x16;
  local_414 = 0x93;
  local_413 = 0x41;
  local_412 = 0xdc;
  local_411 = 0x54;
  local_410 = 3;
  local_40f = 0x62;
  local_40e = 0x3e;
  local_40d = 0x51;
  local_40c = 10;
  local_40b = 0x6f;
  local_40a = 0xae;
  local_409 = 0xe5;
  local_408 = 0xe8;
  local_407 = 0xf6;
  local_406 = 0x8b;
  local_405 = 0x60;
  local_404 = 0xf6;
  local_403 = 0x24;
  local_402 = 0xdb;
  local_401 = 0x41;
  local_400 = 0x8e;
  local_3ff = 0xef;
  local_3fe = 0x20;
  local_3fd = 0xc9;
  local_3fc = 0xec;
  local_3fb = 0x8d;
  local_3fa = 2;
  local_3f9 = 0x26;
  local_3f8 = 0xd1;
  local_3f7 = 0xc9;
  local_3f6 = 0x2f;
  local_3f5 = 0xa0;
  local_3f4 = 0xbe;
  local_3f3 = 0xd9;
  local_3f2 = 0xd8;
  local_3f1 = 0x7d;
  local_3f0 = 0x38;
  local_3ef = 0xe1;
  local_3ee = 0x59;
  local_3ed = 0x1f;
  local_3ec = 0x37;
  local_3eb = 0xc0;
  local_3ea = 0x17;
  local_3e9 = 0x84;
  local_3e8 = 0x76;
  local_3e7 = 0x40;
  local_3e6 = 0xb3;
  local_3e5 = 0xcb;
  local_3e4 = 0x5a;
  local_3e3 = 0x76;
  local_3e2 = 0xe1;
  local_3e1 = 0x5a;
  local_3e0 = 0x8c;
  local_3df = 0x38;
  local_3de = 0xa5;
  local_3dd = 0xa9;
  local_3dc = 0x73;
  local_3db = 0x4c;
  local_3da = 0xbb;
  local_3d9 = 0;
  local_3d8 = 0x92;
  local_3d7 = 0x85;
  local_3d6 = 0xd1;
  local_3d5 = 0x7f;
  local_3d4 = 0x4e;
  local_3d3 = 0x74;
  local_3d2 = 0x4d;
  local_3d1 = 0x19;
  local_3d0 = 99;
  local_3cf = 0x39;
  local_3ce = 0x62;
  local_3cd = 0x62;
  local_3cc = 0xb8;
  local_3cb = 0xc3;
  local_3ca = 0x69;
  local_3c9 = 8;
  local_3c8 = 0x67;
  local_3c7 = 0xf7;
  local_3c6 = 0x23;
  local_3c5 = 0xfe;
  local_3c4 = 4;
  local_3c3 = 0xab;
  local_3c2 = 0x9e;
  local_3c1 = 0x36;
  local_3c0 = 0xc9;
  local_3bf = 0x75;
  local_3be = 0x3a;
  local_3bd = 200;
  local_3bc = 0x43;
  local_3bb = 0xd7;
  local_3ba = 0xb8;
  local_3b9 = 0xc;
  local_3b8 = 0x60;
  local_3b7 = 0x25;
  local_3b6 = 0x79;
  local_3b5 = 0x12;
  local_3b4 = 0x3e;
  local_3b3 = 5;
  local_3b2 = 0x93;
  local_3b1 = 0x79;
  local_3b0 = 0x45;
  local_3af = 0x56;
  local_3ae = 0x5d;
  local_3ad = 0x41;
  local_3ac = 0xf3;
  local_3ab = 0x62;
  local_3aa = 0x43;
  local_3a9 = 0x19;
  local_3a8 = 0xc1;
  local_3a7 = 0x5a;
  local_3a6 = 0xec;
  local_3a5 = 0x44;
  local_3a4 = 0x22;
  local_3a3 = 0xd2;
  local_3a2 = 0xd2;
  local_3a1 = 0x95;
  local_3a0 = 0x5d;
  local_39f = 0xf7;
  local_39e = 0x5c;
  local_39d = 0x41;
  local_39c = 0xf5;
  local_39b = 0xdb;
  local_39a = 0x99;
  local_399 = 3;
  local_398 = 0x8b;
  local_397 = 0x89;
  local_396 = 0xa4;
  local_395 = 0xc3;
  local_394 = 0x93;
  local_393 = 0xad;
  local_392 = 0x8d;
  local_391 = 0xa8;
  local_390 = 0xf;
  local_38f = 0xa9;
  local_38e = 0x3a;
  local_38d = 0xf0;
  local_38c = 0xa3;
  local_38b = 0xd7;
  local_38a = 0xee;
  local_389 = 0x81;
  local_388 = 0xe7;
  local_387 = 0x80;
  local_386 = 0x4b;
  local_385 = 0x25;
  local_384 = 0x53;
  local_383 = 0x7d;
  local_382 = 0x8e;
  local_381 = 0xfa;
  local_380 = 0x3d;
  local_37f = 0x49;
  local_37e = 0x26;
  local_37d = 0xfc;
  local_37c = 0xdd;
  local_37b = 0x31;
  local_37a = 0x4c;
  local_379 = 0x73;
  local_378 = 0x2d;
  local_377 = 0xcc;
  local_376 = 0xb7;
  local_375 = 0x89;
  local_374 = 0xb7;
  local_373 = 0xb1;
  local_372 = 0xe8;
  local_371 = 0x14;
  local_370 = 0xcd;
  local_36f = 0xd6;
  local_36e = 0x93;
  local_36d = 7;
  local_36c = 0xf9;
  local_36b = 1;
  local_36a = 0xb7;
  local_369 = 0xf9;
  local_368 = 0x35;
  local_367 = 0xb4;
  local_366 = 0x2f;
  local_365 = 0x92;
  local_364 = 0xf5;
  local_363 = 0x9a;
  local_362 = 0xb3;
  local_361 = 0xd0;
  local_360 = 0x38;
  local_35f = 0x8d;
  local_35e = 8;
  local_35d = 0xbf;
  local_35c = 0x22;
  local_35b = 0xb0;
  local_35a = 0xa5;
  local_359 = 0x65;
  local_358 = 0x82;
  local_357 = 0x90;
  local_356 = 0x2a;
  local_355 = 0x12;
  local_354 = 0x55;
  local_353 = 0xa1;
  local_352 = 0x48;
  local_351 = 0x11;
  local_350 = 0xff;
  local_34f = 2;
  local_34e = 3;
  local_34d = 1;
  local_34c = 0;
  local_34b = 1;
  local_678 = 0x30;
  local_677 = 0x82;
  local_676 = 1;
  local_675 = 10;
  local_674 = 2;
  local_673 = 0x82;
  local_672 = 1;
  local_671 = 1;
  local_670 = 0;
  local_66f = 0xa6;
  local_66e = 0xd4;
  local_66d = 0xc0;
  local_66c = 0xcf;
  local_66b = 0x17;
  local_66a = 0x35;
  local_669 = 0x65;
  local_668 = 0x8e;
  local_667 = 0x13;
  local_666 = 0x84;
  local_665 = 0xda;
  local_664 = 0xfa;
  local_663 = 0xe4;
  local_662 = 0xa2;
  local_661 = 0x6e;
  local_660 = 0x85;
  local_65f = 0xe7;
  local_65e = 0xe0;
  local_65d = 0x14;
  local_65c = 0x98;
  local_65b = 0x62;
  local_65a = 0x18;
  local_659 = 0xec;
  local_658 = 0x27;
  local_657 = 0x9f;
  local_656 = 0xad;
  local_655 = 0x55;
  local_654 = 0xf7;
  local_653 = 0x9b;
  local_652 = 0x11;
  local_651 = 0x1a;
  local_650 = 0x2b;
  local_64f = 0xbe;
  local_64e = 0x43;
  local_64d = 0xce;
  local_64c = 0x53;
  local_64b = 0x67;
  local_64a = 0x42;
  local_649 = 0x78;
  local_648 = 0xb7;
  local_647 = 0xa3;
  local_646 = 0xd7;
  local_645 = 0x7b;
  local_644 = 0x74;
  local_643 = 0xc5;
  local_642 = 0xd6;
  local_641 = 0x79;
  local_640 = 0x88;
  local_63f = 0x7f;
  local_63e = 0x5c;
  local_63d = 0x7d;
  local_63c = 0x7b;
  local_63b = 0xda;
  local_63a = 0x74;
  local_639 = 0xaa;
  local_638 = 0x97;
  local_637 = 0xa6;
  local_636 = 1;
  local_635 = 0x93;
  local_634 = 0x60;
  local_633 = 0xa0;
  local_632 = 0x59;
  local_631 = 0xf7;
  local_630 = 5;
  local_62f = 0x4f;
  local_62e = 0x4b;
  local_62d = 0xf9;
  local_62c = 0xec;
  local_62b = 0xfd;
  local_62a = 0x9b;
  local_629 = 0xff;
  local_628 = 0xe7;
  local_627 = 0xc4;
  local_626 = 0xc1;
  local_625 = 0x99;
  local_624 = 0x70;
  local_623 = 0xf1;
  local_622 = 0x29;
  local_621 = 0x60;
  local_620 = 0xe;
  local_61f = 0xe2;
  local_61e = 0x86;
  local_61d = 0xd2;
  local_61c = 0x60;
  local_61b = 0x7f;
  local_61a = 0x52;
  local_619 = 0xb3;
  local_618 = 0x17;
  local_617 = 2;
  local_616 = 0xb1;
  local_615 = 0xe9;
  local_614 = 0x89;
  local_613 = 0x71;
  local_612 = 0x86;
  local_611 = 0x1b;
  local_610 = 0xb9;
  local_60f = 0xf5;
  local_60e = 0xef;
  local_60d = 0xd3;
  local_60c = 0x95;
  local_60b = 0xa3;
  local_60a = 8;
  local_609 = 0xe5;
  local_608 = 0x62;
  local_607 = 0x11;
  local_606 = 0xd7;
  local_605 = 0x1a;
  local_604 = 0x74;
  local_603 = 0xa2;
  local_602 = 0x8e;
  local_601 = 0x52;
  local_600 = 0x7b;
  local_5ff = 0xc9;
  local_5fe = 0x44;
  local_5fd = 0x32;
  local_5fc = 0x99;
  local_5fb = 0xfe;
  local_5fa = 0xb9;
  local_5f9 = 0xb5;
  local_5f8 = 0x6f;
  local_5f7 = 0x7e;
  local_5f6 = 0x25;
  local_5f5 = 0x37;
  local_5f4 = 0x19;
  local_5f3 = 0x41;
  local_5f2 = 0x58;
  local_5f1 = 0x54;
  local_5f0 = 5;
  local_5ef = 0xf5;
  local_5ee = 0x3e;
  local_5ed = 0xa5;
  local_5ec = 0x1b;
  local_5eb = 0x8f;
  local_5ea = 0x2b;
  local_5e9 = 0x8f;
  local_5e8 = 0xe6;
  local_5e7 = 0xeb;
  local_5e6 = 0x80;
  local_5e5 = 0x1e;
  local_5e4 = 0x86;
  local_5e3 = 0xdc;
  local_5e2 = 0x89;
  local_5e1 = 0;
  local_5e0 = 0x23;
  local_5df = 0xad;
  local_5de = 0x29;
  local_5dd = 0xd2;
  local_5dc = 0x4a;
  local_5db = 0x4c;
  local_5da = 0x25;
  local_5d9 = 0xbf;
  local_5d8 = 0xf7;
  local_5d7 = 0x18;
  local_5d6 = 0x9e;
  local_5d5 = 0x24;
  local_5d4 = 0x78;
  local_5d3 = 0xcf;
  local_5d2 = 0xbd;
  local_5d1 = 0x36;
  local_5d0 = 0x11;
  local_5cf = 0x58;
  local_5ce = 0x76;
  local_5cd = 0x24;
  local_5cc = 0xdf;
  local_5cb = 0x76;
  local_5ca = 0x35;
  local_5c9 = 1;
  local_5c8 = 0xc2;
  local_5c7 = 0x34;
  local_5c6 = 0x7b;
  local_5c5 = 0x1a;
  local_5c4 = 0x60;
  local_5c3 = 0x46;
  local_5c2 = 0xc6;
  local_5c1 = 0x57;
  local_5c0 = 0x23;
  local_5bf = 0x28;
  local_5be = 0x4f;
  local_5bd = 0x15;
  local_5bc = 0xe7;
  local_5bb = 0x36;
  local_5ba = 0xb8;
  local_5b9 = 0x1e;
  local_5b8 = 0x7a;
  local_5b7 = 0xe5;
  local_5b6 = 0x8a;
  local_5b5 = 0xbf;
  local_5b4 = 0x11;
  local_5b3 = 200;
  local_5b2 = 0x9a;
  local_5b1 = 0x90;
  local_5b0 = 0x38;
  local_5af = 0xd1;
  local_5ae = 10;
  local_5ad = 0xf7;
  local_5ac = 0xd1;
  local_5ab = 0x85;
  local_5aa = 0xfa;
  local_5a9 = 4;
  local_5a8 = 0xaf;
  local_5a7 = 0xb2;
  local_5a6 = 0xd3;
  local_5a5 = 0x81;
  local_5a4 = 0x99;
  local_5a3 = 0x91;
  local_5a2 = 0x5b;
  local_5a1 = 0xe3;
  local_5a0 = 0xe8;
  local_59f = 0x62;
  local_59e = 0x15;
  local_59d = 0xa5;
  local_59c = 0xd0;
  local_59b = 0xc3;
  local_59a = 0xfc;
  local_599 = 0x6b;
  local_598 = 0xc6;
  local_597 = 0x40;
  local_596 = 0x4f;
  local_595 = 0x8a;
  local_594 = 0xda;
  local_593 = 0xf4;
  local_592 = 0xb;
  local_591 = 0x57;
  local_590 = 0x44;
  local_58f = 0x21;
  local_58e = 0x90;
  local_58d = 0x48;
  local_58c = 0xa1;
  local_58b = 0x55;
  local_58a = 0xbb;
  local_589 = 0x35;
  local_588 = 0x75;
  local_587 = 0xe3;
  local_586 = 0x8b;
  local_585 = 0x73;
  local_584 = 0x29;
  local_583 = 0xfa;
  local_582 = 0x7d;
  local_581 = 0xbf;
  local_580 = 0x89;
  local_57f = 0xb9;
  local_57e = 0xf0;
  local_57d = 0x46;
  local_57c = 0xcd;
  local_57b = 0xfb;
  local_57a = 0xab;
  local_579 = 0xf6;
  local_578 = 0xc1;
  local_577 = 0xf5;
  local_576 = 0x6b;
  local_575 = 7;
  local_574 = 0xbb;
  local_573 = 0x76;
  local_572 = 0x47;
  local_571 = 0x17;
  local_570 = 0xe7;
  local_56f = 2;
  local_56e = 3;
  local_56d = 1;
  local_56c = 0;
  local_56b = 1;
  local_568 = 0x30;
  local_567 = 0x82;
  local_566 = 1;
  local_565 = 10;
  local_564 = 2;
  local_563 = 0x82;
  local_562 = 1;
  local_561 = 1;
  local_560 = 0;
  local_55f = 0xaf;
  local_55e = 0x3f;
  local_55d = 0x6a;
  local_55c = 0xae;
  local_55b = 0x3b;
  local_55a = 0x5c;
  local_559 = 0xb6;
  local_558 = 0x2c;
  local_557 = 0x29;
  local_556 = 0xfe;
  local_555 = 0x1a;
  local_554 = 0x3b;
  local_553 = 0x50;
  local_552 = 0x66;
  local_551 = 0xfe;
  local_550 = 0xf7;
  local_54f = 0x1b;
  local_54e = 0xd0;
  local_54d = 0x78;
  local_54c = 0xb9;
  local_54b = 0x30;
  local_54a = 0x59;
  local_549 = 0xf8;
  local_548 = 0xb8;
  local_547 = 0;
  local_546 = 0xa8;
  local_545 = 0x7a;
  local_544 = 0x67;
  local_543 = 0x3d;
  local_542 = 0xc5;
  local_541 = 0x86;
  local_540 = 6;
  local_53f = 0xd9;
  local_53e = 0x10;
  local_53d = 0xb0;
  local_53c = 0xe6;
  local_53b = 0x6b;
  local_53a = 0x4f;
  local_539 = 0xaa;
  local_538 = 0xa9;
  local_537 = 0x8d;
  local_536 = 0xe8;
  local_535 = 0x69;
  local_534 = 0x60;
  local_533 = 0xcd;
  local_532 = 0xb1;
  local_531 = 0x88;
  local_530 = 0xcc;
  local_52f = 0x19;
  local_52e = 0x2d;
  local_52d = 0xc5;
  local_52c = 0x9c;
  local_52b = 0x51;
  local_52a = 0xd8;
  local_529 = 0x37;
  local_528 = 0xb6;
  local_527 = 0x41;
  local_526 = 0xd7;
  local_525 = 0x6a;
  local_524 = 0x79;
  local_523 = 0xf0;
  local_522 = 0x5c;
  local_521 = 0x6a;
  local_520 = 0x4e;
  local_51f = 0xfb;
  local_51e = 0xa2;
  local_51d = 0xef;
  local_51c = 0xb2;
  local_51b = 0xd0;
  local_51a = 0x38;
  local_519 = 0x32;
  local_518 = 0xd3;
  local_517 = 0xa9;
  local_516 = 0xe5;
  local_515 = 3;
  local_514 = 0xeb;
  local_513 = 0x2b;
  local_512 = 0xec;
  local_511 = 0xd2;
  local_510 = 0xf0;
  local_50f = 0x17;
  local_50e = 0x1f;
  local_50d = 0x6f;
  local_50c = 0xae;
  local_50b = 0xe1;
  local_50a = 0xe2;
  local_509 = 0xda;
  local_508 = 0x5c;
  local_507 = 0x10;
  local_506 = 0xb5;
  local_505 = 0x42;
  local_504 = 99;
  local_503 = 0xbe;
  local_502 = 0x4d;
  local_501 = 0xb;
  local_500 = 8;
  local_4ff = 0x72;
  local_4fe = 0xc1;
  local_4fd = 0xb8;
  local_4fc = 0xbb;
  local_4fb = 0x1a;
  local_4fa = 0x1a;
  local_4f9 = 0x46;
  local_4f8 = 0x21;
  local_4f7 = 0xd0;
  local_4f6 = 0xe7;
  local_4f5 = 0xdc;
  local_4f4 = 0x85;
  local_4f3 = 0x36;
  local_4f2 = 0xf6;
  local_4f1 = 0x89;
  local_4f0 = 0x2a;
  local_4ef = 0x9d;
  local_4ee = 0xcc;
  local_4ed = 0x83;
  local_4ec = 0x59;
  local_4eb = 0x67;
  local_4ea = 0x8a;
  local_4e9 = 0xfd;
  local_4e8 = 0x15;
  local_4e7 = 0x53;
  local_4e6 = 0x4e;
  local_4e5 = 0xd2;
  local_4e4 = 0x8c;
  local_4e3 = 0x3a;
  local_4e2 = 0x23;
  local_4e1 = 0x70;
  local_4e0 = 0x5d;
  local_4df = 0x1e;
  local_4de = 99;
  local_4dd = 0x39;
  local_4dc = 0x6a;
  local_4db = 0x77;
  local_4da = 0x54;
  local_4d9 = 0x54;
  local_4d8 = 0x66;
  local_4d7 = 0x6c;
  local_4d6 = 0x5a;
  local_4d5 = 0x24;
  local_4d4 = 0x7c;
  local_4d3 = 0xdd;
  local_4d2 = 0x18;
  local_4d1 = 0xd0;
  local_4d0 = 0xc0;
  local_4cf = 0xa6;
  local_4ce = 0x7c;
  local_4cd = 0x5a;
  local_4cc = 0xde;
  local_4cb = 0xe7;
  local_4ca = 0xa3;
  local_4c9 = 0xb9;
  local_4c8 = 0x4d;
  local_4c7 = 0x41;
  local_4c6 = 0xad;
  local_4c5 = 0x6d;
  local_4c4 = 0x76;
  local_4c3 = 0x5f;
  local_4c2 = 0x2a;
  local_4c1 = 0x82;
  local_4c0 = 0x1c;
  local_4bf = 0x6f;
  local_4be = 10;
  local_4bd = 0x3c;
  local_4bc = 0x1b;
  local_4bb = 0x4b;
  local_4ba = 0xe;
  local_4b9 = 0xd4;
  local_4b8 = 0x93;
  local_4b7 = 0x51;
  local_4b6 = 0xaf;
  local_4b5 = 0x8c;
  local_4b4 = 4;
  local_4b3 = 0x1a;
  local_4b2 = 0x9e;
  local_4b1 = 0x6c;
  local_4b0 = 0x81;
  local_4af = 0x34;
  local_4ae = 0x94;
  local_4ad = 0xb0;
  local_4ac = 0x20;
  local_4ab = 0xf0;
  local_4aa = 0xa1;
  local_4a9 = 100;
  local_4a8 = 0x5a;
  local_4a7 = 0x3a;
  local_4a6 = 0xa7;
  local_4a5 = 0x66;
  local_4a4 = 0xf6;
  local_4a3 = 0x66;
  local_4a2 = 0x4a;
  local_4a1 = 0x2e;
  local_4a0 = 0xf1;
  local_49f = 0xde;
  local_49e = 0x85;
  local_49d = 0x26;
  local_49c = 0x54;
  local_49b = 0xa9;
  local_49a = 0x24;
  local_499 = 0x91;
  local_498 = 0x3f;
  local_497 = 0xa5;
  local_496 = 0x1e;
  local_495 = 0xbf;
  local_494 = 0x44;
  local_493 = 0x9d;
  local_492 = 0x9c;
  local_491 = 0x1c;
  local_490 = 0x28;
  local_48f = 0xf8;
  local_48e = 0x16;
  local_48d = 0x2c;
  local_48c = 0x8c;
  local_48b = 0x31;
  local_48a = 0xf3;
  local_489 = 0xc3;
  local_488 = 0x79;
  local_487 = 0x71;
  local_486 = 0x9e;
  local_485 = 0x7b;
  local_484 = 0xe9;
  local_483 = 0xbe;
  local_482 = 0x96;
  local_481 = 0xe;
  local_480 = 0x6a;
  local_47f = 0x55;
  local_47e = 0x65;
  local_47d = 0x23;
  local_47c = 0x54;
  local_47b = 0xd1;
  local_47a = 0x71;
  local_479 = 0xea;
  local_478 = 0x71;
  local_477 = 0x51;
  local_476 = 0x42;
  local_475 = 0xb2;
  local_474 = 0xcc;
  local_473 = 0x88;
  local_472 = 0xf0;
  local_471 = 0x91;
  local_470 = 0x28;
  local_46f = 0x9e;
  local_46e = 200;
  local_46d = 0xc6;
  local_46c = 0xab;
  local_46b = 0xfd;
  local_46a = 0x24;
  local_469 = 0x85;
  local_468 = 0x4b;
  local_467 = 0xa4;
  local_466 = 0x46;
  local_465 = 0x58;
  local_464 = 0xae;
  local_463 = 0xd5;
  local_462 = 0xc3;
  local_461 = 0xd0;
  local_460 = 0xd5;
  local_45f = 2;
  local_45e = 3;
  local_45d = 1;
  local_45c = 0;
  local_45b = 1;
  local_348 = 0x30;
  local_347 = 0x82;
  local_346 = 1;
  local_345 = 10;
  local_344 = 2;
  local_343 = 0x82;
  local_342 = 1;
  local_341 = 1;
  local_340 = 0;
  local_33f = 0xb4;
  local_33e = 0x85;
  local_33d = 0x66;
  local_33c = 0x85;
  local_33b = 0xcc;
  local_33a = 0x49;
  local_339 = 0x35;
  local_338 = 0x56;
  local_337 = 0xc0;
  local_336 = 0x91;
  local_335 = 0xf7;
  local_334 = 0xb;
  local_333 = 0xb3;
  local_332 = 4;
  local_331 = 0x34;
  local_330 = 0xf2;
  local_32f = 0xab;
  local_32e = 0x6a;
  local_32d = 0xb9;
  local_32c = 0xb2;
  local_32b = 0x25;
  local_32a = 0x43;
  local_329 = 100;
  local_328 = 0xc5;
  local_327 = 0xa4;
  local_326 = 0x7f;
  local_325 = 0x27;
  local_324 = 0x6b;
  local_323 = 0x7c;
  local_322 = 0x3c;
  local_321 = 0x91;
  local_320 = 0x6b;
  local_31f = 0x85;
  local_31e = 10;
  local_31d = 0xf6;
  local_31c = 0xc;
  local_31b = 0xda;
  local_31a = 0x76;
  local_319 = 0xd6;
  local_318 = 0xa5;
  local_317 = 0xaf;
  local_316 = 0xbb;
  local_315 = 0xc6;
  local_314 = 0xf0;
  local_313 = 0xef;
  local_312 = 0x24;
  local_311 = 0x3c;
  local_310 = 9;
  local_30f = 0xa7;
  local_30e = 4;
  local_30d = 0xdd;
  local_30c = 0xfa;
  local_30b = 0x2f;
  local_30a = 0x3d;
  local_309 = 0x97;
  local_308 = 0xa2;
  local_307 = 0x4f;
  local_306 = 0x91;
  local_305 = 0xdc;
  local_304 = 0x5f;
  local_303 = 0x58;
  local_302 = 0x84;
  local_301 = 0x23;
  local_300 = 0x7f;
  local_2ff = 0xce;
  local_2fe = 0x61;
  local_2fd = 0xa5;
  local_2fc = 0x46;
  local_2fb = 0x98;
  local_2fa = 0xcf;
  local_2f9 = 0x75;
  local_2f8 = 199;
  local_2f7 = 0x4e;
  local_2f6 = 0x3e;
  local_2f5 = 0x3b;
  local_2f4 = 0x7e;
  local_2f3 = 0x22;
  local_2f2 = 200;
  local_2f1 = 0xab;
  local_2f0 = 0xa8;
  local_2ef = 0xbf;
  local_2ee = 0x86;
  local_2ed = 0x3f;
  local_2ec = 0x9a;
  local_2eb = 2;
  local_2ea = 0x70;
  local_2e9 = 200;
  local_2e8 = 0x30;
  local_2e7 = 0x8c;
  local_2e6 = 0x86;
  local_2e5 = 0x21;
  local_2e4 = 0x97;
  local_2e3 = 0x54;
  local_2e2 = 0x8b;
  local_2e1 = 0xbf;
  local_2e0 = 0x2d;
  local_2df = 0x4e;
  local_2de = 0xb6;
  local_2dd = 0xf2;
  local_2dc = 0xb0;
  local_2db = 0xf3;
  local_2da = 0xf2;
  local_2d9 = 0xf6;
  local_2d8 = 0xd;
  local_2d7 = 0xab;
  local_2d6 = 0x56;
  local_2d5 = 0xac;
  local_2d4 = 0x5d;
  local_2d3 = 0x99;
  local_2d2 = 99;
  local_2d1 = 0x13;
  local_2d0 = 0x4a;
  local_2cf = 0x8c;
  local_2ce = 0x1e;
  local_2cd = 0xf1;
  local_2cc = 0x33;
  local_2cb = 0x9a;
  local_2ca = 0xd5;
  local_2c9 = 0x41;
  local_2c8 = 199;
  local_2c7 = 0x3f;
  local_2c6 = 0xb8;
  local_2c5 = 0x70;
  local_2c4 = 0x95;
  local_2c3 = 0xb5;
  local_2c2 = 0x1e;
  local_2c1 = 0xeb;
  local_2c0 = 0xb8;
  local_2bf = 0xd7;
  local_2be = 0x2d;
  local_2bd = 9;
  local_2bc = 0x12;
  local_2bb = 0x34;
  local_2ba = 0x84;
  local_2b9 = 0xc4;
  local_2b8 = 0xc4;
  local_2b7 = 0x4c;
  local_2b6 = 0x9d;
  local_2b5 = 0xfe;
  local_2b4 = 0xce;
  local_2b3 = 0x72;
  local_2b2 = 0x30;
  local_2b1 = 0x82;
  local_2b0 = 0x5a;
  local_2af = 1;
  local_2ae = 0x93;
  local_2ad = 0xd6;
  local_2ac = 0x3e;
  local_2ab = 0x51;
  local_2aa = 0xef;
  local_2a9 = 0xf6;
  local_2a8 = 0x3c;
  local_2a7 = 1;
  local_2a6 = 0x5c;
  local_2a5 = 0x2d;
  local_2a4 = 0xa8;
  local_2a3 = 0xbe;
  local_2a2 = 0x67;
  local_2a1 = 0x41;
  local_2a0 = 0xf;
  local_29f = 0x52;
  local_29e = 0x6d;
  local_29d = 0xfc;
  local_29c = 0x8c;
  local_29b = 0x45;
  local_29a = 0xd4;
  local_299 = 0x3f;
  local_298 = 0xae;
  local_297 = 0x27;
  local_296 = 0x89;
  local_295 = 0x37;
  local_294 = 0x3c;
  local_293 = 8;
  local_292 = 0xdc;
  local_291 = 0xd9;
  local_290 = 0xe2;
  local_28f = 0x7c;
  local_28e = 0xff;
  local_28d = 0xb;
  local_28c = 0xb7;
  local_28b = 0x53;
  local_28a = 0xb5;
  local_289 = 0xc4;
  local_288 = 0xe0;
  local_287 = 0x1d;
  local_286 = 0x67;
  local_285 = 0x8a;
  local_284 = 0x4c;
  local_283 = 0x7e;
  local_282 = 0x5c;
  local_281 = 0xaf;
  local_280 = 0x41;
  local_27f = 0xe4;
  local_27e = 0xf0;
  local_27d = 0x96;
  local_27c = 0x3e;
  local_27b = 0xc4;
  local_27a = 0x12;
  local_279 = 0xde;
  local_278 = 0xad;
  local_277 = 0x7a;
  local_276 = 0xb9;
  local_275 = 0x67;
  local_274 = 0x2c;
  local_273 = 0x76;
  local_272 = 0xdc;
  local_271 = 0xfd;
  local_270 = 0x65;
  local_26f = 0x51;
  local_26e = 0x61;
  local_26d = 0xc5;
  local_26c = 0x6f;
  local_26b = 0xc1;
  local_26a = 0xb6;
  local_269 = 0x2d;
  local_268 = 0x4e;
  local_267 = 0x72;
  local_266 = 0x51;
  local_265 = 0xa1;
  local_264 = 0x9f;
  local_263 = 0xd4;
  local_262 = 0xba;
  local_261 = 0x3e;
  local_260 = 0x9d;
  local_25f = 0xea;
  local_25e = 0xb0;
  local_25d = 0xdc;
  local_25c = 0xdd;
  local_25b = 0xf4;
  local_25a = 0x40;
  local_259 = 0x80;
  local_258 = 0x82;
  local_257 = 0x83;
  local_256 = 0x4a;
  local_255 = 0x2f;
  local_254 = 0x23;
  local_253 = 0x5d;
  local_252 = 0xa7;
  local_251 = 0xa0;
  local_250 = 0xa0;
  local_24f = 0xf5;
  local_24e = 0x96;
  local_24d = 0x38;
  local_24c = 0x48;
  local_24b = 0xd4;
  local_24a = 0x12;
  local_249 = 0x4d;
  local_248 = 0xe1;
  local_247 = 0x99;
  local_246 = 0xdf;
  local_245 = 0x79;
  local_244 = 0xcb;
  local_243 = 0xef;
  local_242 = 0x5d;
  local_241 = 0xf4;
  local_240 = 0xaf;
  local_23f = 2;
  local_23e = 3;
  local_23d = 1;
  local_23c = 0;
  local_23b = 1;
  local_128 = 0x30;
  local_127 = 0x82;
  local_126 = 1;
  local_125 = 10;
  local_124 = 2;
  local_123 = 0x82;
  local_122 = 1;
  local_121 = 1;
  local_120 = 0;
  local_11f = 0xcf;
  local_11e = 0x8c;
  local_11d = 0x8d;
  local_11c = 0xae;
  local_11b = 0xa1;
  local_11a = 0x57;
  local_119 = 0x9f;
  local_118 = 0x14;
  local_117 = 0x60;
  local_116 = 0x86;
  local_115 = 0xae;
  local_114 = 0xd1;
  local_113 = 0x71;
  local_112 = 0x59;
  local_111 = 0x1b;
  local_110 = 5;
  local_10f = 0xfa;
  local_10e = 0x24;
  local_10d = 0x10;
  local_10c = 0x45;
  local_10b = 0xdf;
  local_10a = 0xc9;
  local_109 = 0xb;
  local_108 = 0x15;
  local_107 = 0x94;
  local_106 = 0x62;
  local_105 = 0xad;
  local_104 = 0x20;
  local_103 = 0xe4;
  local_102 = 0xc4;
  local_101 = 0xbf;
  local_100 = 0xf;
  local_ff = 0x52;
  local_fe = 200;
  local_fd = 0x9c;
  local_fc = 0xdf;
  local_fb = 0xae;
  local_fa = 0xd6;
  local_f9 = 0xa9;
  local_f8 = 7;
  local_f7 = 0x21;
  local_f6 = 0x98;
  local_f5 = 0xa9;
  local_f4 = 0x2f;
  local_f3 = 0x84;
  local_f2 = 0x55;
  local_f1 = 0xdd;
  local_f0 = 0x89;
  local_ef = 0x89;
  local_ee = 0x84;
  local_ed = 0x22;
  local_ec = 0x89;
  local_eb = 0x87;
  local_ea = 0xd0;
  local_e9 = 10;
  local_e8 = 0xcf;
  local_e7 = 0xf3;
  local_e6 = 0x2f;
  local_e5 = 0xad;
  local_e4 = 0x40;
  local_e3 = 0x80;
  local_e2 = 0x10;
  local_e1 = 0x69;
  local_e0 = 0x24;
  local_df = 0xbb;
  local_de = 0x28;
  local_dd = 0x47;
  local_dc = 0x73;
  local_db = 0xa7;
  local_da = 0xa6;
  local_d9 = 0x96;
  local_d8 = 0x67;
  local_d7 = 0x39;
  local_d6 = 0x22;
  local_d5 = 0xe9;
  local_d4 = 0xc;
  local_d3 = 0x2c;
  local_d2 = 0x59;
  local_d1 = 0x88;
  local_d0 = 0x30;
  local_cf = 0x86;
  local_ce = 0xa3;
  local_cd = 0xae;
  local_cc = 0x8c;
  local_cb = 0xc9;
  local_ca = 0xd8;
  local_c9 = 0xd8;
  local_c8 = 0xa2;
  local_c7 = 0xf9;
  local_c6 = 0xfa;
  local_c5 = 0x72;
  local_c4 = 0x3a;
  local_c3 = 0x36;
  local_c2 = 0x55;
  local_c1 = 0x73;
  local_c0 = 0xda;
  local_bf = 0xde;
  local_be = 0xed;
  local_bd = 0xae;
  local_bc = 0x43;
  local_bb = 0xf;
  local_ba = 0xf8;
  local_b9 = 0xe7;
  local_b8 = 0xc4;
  local_b7 = 0x62;
  local_b6 = 0x48;
  local_b5 = 0xe9;
  local_b4 = 10;
  local_b3 = 0x24;
  local_b2 = 0xe;
  local_b1 = 0xc0;
  local_b0 = 0x79;
  local_af = 0xb8;
  local_ae = 0xf9;
  local_ad = 0xc4;
  local_ac = 0x9f;
  local_ab = 0xb1;
  local_aa = 0xf0;
  local_a9 = 0x52;
  local_a8 = 0x9d;
  local_a7 = 0xe4;
  local_a6 = 0x1b;
  local_a5 = 0x9f;
  local_a4 = 0xa1;
  local_a3 = 0xa8;
  local_a2 = 0xd4;
  local_a1 = 0x67;
  local_a0 = 0xd5;
  local_9f = 0xd6;
  local_9e = 0x11;
  local_9d = 0x73;
  local_9c = 0xd8;
  local_9b = 0xeb;
  local_9a = 0xff;
  local_99 = 0xa2;
  local_98 = 0xc0;
  local_97 = 0xbc;
  local_96 = 4;
  local_95 = 0x6b;
  local_94 = 0xdd;
  local_93 = 0x46;
  local_92 = 0x79;
  local_91 = 0x18;
  local_90 = 0x9c;
  local_8f = 0xf0;
  local_8e = 0xfd;
  local_8d = 0xb0;
  local_8c = 0x3d;
  local_8b = 0xd;
  local_8a = 0x28;
  local_89 = 0x51;
  local_88 = 5;
  local_87 = 0xa5;
  local_86 = 0x48;
  local_85 = 0x9c;
  local_84 = 0x81;
  local_83 = 0x70;
  local_82 = 0x85;
  local_81 = 0xba;
  local_80 = 0x3e;
  local_7f = 0x7f;
  local_7e = 0x43;
  local_7d = 0x50;
  local_7c = 0xc1;
  local_7b = 0x3d;
  local_7a = 0xf1;
  local_79 = 0x4f;
  local_78 = 0xfa;
  local_77 = 0xf3;
  local_76 = 0x65;
  local_75 = 0xcd;
  local_74 = 0x17;
  local_73 = 0xbc;
  local_72 = 0x24;
  local_71 = 4;
  local_70 = 0x51;
  local_6f = 0x23;
  local_6e = 0;
  local_6d = 0x31;
  local_6c = 0xd1;
  local_6b = 99;
  local_6a = 0xa3;
  local_69 = 0x96;
  local_68 = 0xd5;
  local_67 = 0x54;
  local_66 = 0x61;
  local_65 = 0x20;
  local_64 = 0x47;
  local_63 = 0x31;
  local_62 = 0x61;
  local_61 = 0xbf;
  local_60 = 0xcf;
  local_5f = 0xdd;
  local_5e = 0xf5;
  local_5d = 0xf8;
  local_5c = 0x23;
  local_5b = 0x5d;
  local_5a = 0x87;
  local_59 = 0xe4;
  local_58 = 0xe3;
  local_57 = 0xbb;
  local_56 = 0xe1;
  local_55 = 0x2b;
  local_54 = 0x30;
  local_53 = 0x85;
  local_52 = 0x5f;
  local_51 = 0xd8;
  local_50 = 0x99;
  local_4f = 0x16;
  local_4e = 0xe6;
  local_4d = 0xb0;
  local_4c = 0x9e;
  local_4b = 0x7a;
  local_4a = 0xa2;
  local_49 = 0xd0;
  local_48 = 0x9a;
  local_47 = 0x24;
  local_46 = 0xe7;
  local_45 = 0x89;
  local_44 = 0xee;
  local_43 = 0xda;
  local_42 = 0xde;
  local_41 = 5;
  local_40 = 0xd9;
  local_3f = 0xf8;
  local_3e = 0xc2;
  local_3d = 0x7a;
  local_3c = 0xf;
  local_3b = 0x84;
  local_3a = 0x5f;
  local_39 = 0xe5;
  local_38 = 0xb2;
  local_37 = 0x75;
  local_36 = 0x6c;
  local_35 = 0x73;
  local_34 = 0xb5;
  local_33 = 0xf9;
  local_32 = 0x52;
  local_31 = 3;
  local_30 = 0x48;
  local_2f = 0x32;
  local_2e = 0x85;
  local_2d = 0x9e;
  local_2c = 7;
  local_2b = 0xeb;
  local_2a = 0x40;
  local_29 = 0x19;
  local_28 = 0x8e;
  local_27 = 0xf;
  local_26 = 0x3d;
  local_25 = 0x41;
  local_24 = 0xd7;
  local_23 = 0x54;
  local_22 = 0xc0;
  local_21 = 0xd2;
  local_20 = 0xe1;
  local_1f = 2;
  local_1e = 3;
  local_1d = 1;
  local_1c = 0;
  local_1b = 1;
  if ((*param_1 == 0x10e) && (param_1[4] == 0)) {
    iVar1 = FUN_140e7f6d0(0x23f0);
    if (iVar1 == 0) {
      local_238 = 0x30;
      local_237 = 0x82;
      local_236 = 1;
      local_235 = 10;
      local_234 = 2;
      local_233 = 0x82;
      local_232 = 1;
      local_231 = 1;
      local_230 = 0;
      local_22f = 0xd7;
      local_22e = 0x95;
      local_22d = 0x43;
      local_22c = 0xd4;
      local_22b = 0xdc;
      local_22a = 0xdf;
      local_229 = 0x67;
      local_228 = 0xae;
      local_227 = 0x39;
      local_226 = 0xfb;
      local_225 = 0x52;
      local_224 = 0xa4;
      local_223 = 0xb6;
      local_222 = 0x26;
      local_221 = 0x31;
      local_220 = 4;
      local_21f = 0x70;
      local_21e = 0xe9;
      local_21d = 0xb7;
      local_21c = 0x8e;
      local_21b = 0x5b;
      local_21a = 0x2a;
      local_219 = 0xba;
      local_218 = 0x37;
      local_217 = 0x69;
      local_216 = 0x35;
      local_215 = 0x95;
      local_214 = 0x8f;
      local_213 = 0xbb;
      local_212 = 0xc0;
      local_211 = 0x30;
      local_210 = 0xe7;
      local_20f = 0x86;
      local_20e = 0xd8;
      local_20d = 0x73;
      local_20c = 0xbb;
      local_20b = 0xdf;
      local_20a = 0xeb;
      local_209 = 0xd1;
      local_208 = 0x76;
      local_207 = 0x3f;
      local_206 = 0x8a;
      local_205 = 0x56;
      local_204 = 0x8e;
      local_203 = 0xeb;
      local_202 = 0x2d;
      local_201 = 0x4b;
      local_200 = 0xf0;
      local_1ff = 0x57;
      local_1fe = 0x18;
      local_1fd = 0x4e;
      local_1fc = 0xb1;
      local_1fb = 0x8d;
      local_1fa = 0xa5;
      local_1f9 = 0x33;
      local_1f8 = 0xd3;
      local_1f7 = 0xb;
      local_1f6 = 0x75;
      local_1f5 = 0x23;
      local_1f4 = 0xd5;
      local_1f3 = 0x6a;
      local_1f2 = 0x79;
      local_1f1 = 0x27;
      local_1f0 = 0xdd;
      local_1ef = 0xa3;
      local_1ee = 0xd3;
      local_1ed = 0xf7;
      local_1ec = 0xe;
      local_1eb = 0x87;
      local_1ea = 0x65;
      local_1e9 = 0xb5;
      local_1e8 = 0xde;
      local_1e7 = 0xad;
      local_1e6 = 0x1c;
      local_1e5 = 0xf1;
      local_1e4 = 0xf5;
      local_1e3 = 0x35;
      local_1e2 = 0xb4;
      local_1e1 = 0x22;
      local_1e0 = 0x51;
      local_1df = 0xaf;
      local_1de = 0x22;
      local_1dd = 0xa1;
      local_1dc = 0xc1;
      local_1db = 0x5d;
      local_1da = 0x4b;
      local_1d9 = 0x90;
      local_1d8 = 0x7f;
      local_1d7 = 0xc0;
      local_1d6 = 0x59;
      local_1d5 = 0x4e;
      local_1d4 = 0xab;
      local_1d3 = 0x9d;
      local_1d2 = 0x79;
      local_1d1 = 0xa9;
      local_1d0 = 2;
      local_1cf = 0xd7;
      local_1ce = 0x1e;
      local_1cd = 0x49;
      local_1cc = 0xb1;
      local_1cb = 0x3b;
      local_1ca = 0x4d;
      local_1c9 = 0x87;
      local_1c8 = 0xfe;
      local_1c7 = 0xc2;
      local_1c6 = 0x78;
      local_1c5 = 0xab;
      local_1c4 = 0xbf;
      local_1c3 = 0xef;
      local_1c2 = 0x52;
      local_1c1 = 0xae;
      local_1c0 = 0x9c;
      local_1bf = 0xaf;
      local_1be = 8;
      local_1bd = 0xd9;
      local_1bc = 0x39;
      local_1bb = 0xe5;
      local_1ba = 0x9a;
      local_1b9 = 0x51;
      local_1b8 = 0x3e;
      local_1b7 = 0x69;
      local_1b6 = 0x5f;
      local_1b5 = 0x30;
      local_1b4 = 0x10;
      local_1b3 = 0x4e;
      local_1b2 = 0x71;
      local_1b1 = 99;
      local_1b0 = 0x6c;
      local_1af = 0x58;
      local_1ae = 0xe1;
      local_1ad = 0xf0;
      local_1ac = 0x20;
      local_1ab = 0x33;
      local_1aa = 0x1b;
      local_1a9 = 0xf;
      local_1a8 = 0x74;
      local_1a7 = 0xbe;
      local_1a6 = 0x5b;
      local_1a5 = 0xcb;
      local_1a4 = 0x12;
      local_1a3 = 0xe1;
      local_1a2 = 0xdb;
      local_1a1 = 0x8c;
      local_1a0 = 0xc4;
      local_19f = 0x80;
      local_19e = 0x94;
      local_19d = 0x72;
      local_19c = 0xbb;
      local_19b = 0xf6;
      local_19a = 0x45;
      local_199 = 0x9a;
      local_198 = 0x9e;
      local_197 = 0xc1;
      local_196 = 0x25;
      local_195 = 0xb;
      local_194 = 0xfb;
      local_193 = 0xa3;
      local_192 = 0x1c;
      local_191 = 0x9e;
      local_190 = 0xd8;
      local_18f = 0xa6;
      local_18e = 9;
      local_18d = 0x70;
      local_18c = 0x71;
      local_18b = 0xec;
      local_18a = 0xc0;
      local_189 = 0x47;
      local_188 = 0x4c;
      local_187 = 0x8f;
      local_186 = 0x7d;
      local_185 = 0xc3;
      local_184 = 0xde;
      local_183 = 0x19;
      local_182 = 0xce;
      local_181 = 0x3e;
      local_180 = 0xee;
      local_17f = 4;
      local_17e = 0x72;
      local_17d = 0x8e;
      local_17c = 0x17;
      local_17b = 0xd3;
      local_17a = 0xff;
      local_179 = 0xf0;
      local_178 = 0xb2;
      local_177 = 5;
      local_176 = 0x32;
      local_175 = 0x19;
      local_174 = 0x4c;
      local_173 = 0xd3;
      local_172 = 0xb0;
      local_171 = 0x1c;
      local_170 = 0x9f;
      local_16f = 0xfe;
      local_16e = 0xa5;
      local_16d = 0x78;
      local_16c = 0x20;
      local_16b = 0x42;
      local_16a = 0x70;
      local_169 = 0x41;
      local_168 = 0xb0;
      local_167 = 0x26;
      local_166 = 0x8c;
      local_165 = 0x6f;
      local_164 = 0;
      local_163 = 200;
      local_162 = 0x3a;
      local_161 = 0;
      local_160 = 0x11;
      local_15f = 0x41;
      local_15e = 0x7a;
      local_15d = 0x41;
      local_15c = 0xb0;
      local_15b = 0xa7;
      local_15a = 0x8a;
      local_159 = 0x91;
      local_158 = 4;
      local_157 = 0xa0;
      local_156 = 0x99;
      local_155 = 0x78;
      local_154 = 0xf4;
      local_153 = 0x77;
      local_152 = 0xb4;
      local_151 = 0xf3;
      local_150 = 0x60;
      local_14f = 0x2a;
      local_14e = 0xe6;
      local_14d = 0x6c;
      local_14c = 0x50;
      local_14b = 4;
      local_14a = 0xb7;
      local_149 = 0x14;
      local_148 = 0x60;
      local_147 = 0xff;
      local_146 = 0xd;
      local_145 = 0x51;
      local_144 = 0xf4;
      local_143 = 0xa8;
      local_142 = 0x8b;
      local_141 = 0x84;
      local_140 = 0xfe;
      local_13f = 0x21;
      local_13e = 0xda;
      local_13d = 0x5c;
      local_13c = 0x5e;
      local_13b = 0x7d;
      local_13a = 0xf5;
      local_139 = 0x29;
      local_138 = 0x79;
      local_137 = 0x4f;
      local_136 = 0xb0;
      local_135 = 0x44;
      local_134 = 0x74;
      local_133 = 0x6f;
      local_132 = 0x6d;
      local_131 = 0x72;
      local_130 = 0xff;
      local_12f = 2;
      local_12e = 3;
      local_12d = 1;
      local_12c = 0;
      local_12b = 1;
      iVar1 = memcmp(*(void **)(param_1 + 2),&local_238,(ulonglong)*param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
    _Size = (ulonglong)*param_1;
    _Buf1 = *(void **)(param_1 + 2);
    iVar1 = memcmp(_Buf1,&local_458,_Size);
    if ((((iVar1 == 0) || (iVar1 = memcmp(_Buf1,&local_678,_Size), iVar1 == 0)) ||
        (iVar1 = memcmp(_Buf1,&local_568,_Size), iVar1 == 0)) ||
       ((iVar1 = memcmp(_Buf1,&local_348,_Size), iVar1 == 0 ||
        (iVar1 = memcmp(_Buf1,&local_128,_Size), iVar1 == 0)))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// VerifySingleSignature @ 140e837a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong VerifySingleSignature(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  DWORD dwErrCode;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  longlong lVar6;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar6 = 0;
  lVar5 = 0;
  local_3c = 0xcd44;
  local_40 = 0xaac56b;
  local_38 = 0x8c;
  local_3a = 0x11d0;
  local_37 = 0xc2;
  local_36 = 0;
  local_35 = 0xc0;
  local_34 = 0x4f;
  local_33 = 0xc2;
  local_32 = 0x95;
  local_31 = 0xee;
  lVar4 = 0;
  if (param_1 == 0) {
    dwErrCode = 0xa0;
    goto LAB_140e83921;
  }
  dwErrCode = (*DAT_1553e46c8)(0,&local_40,param_1);
  lVar3 = lVar6;
  if ((dwErrCode == 0) || (dwErrCode == 0x800b010a)) {
    lVar2 = (*DAT_1553e46d0)(*(undefined8 *)(param_1 + 0x38));
    if (lVar2 == 0) {
LAB_140e83851:
      dwErrCode = GetLastError();
    }
    else {
      lVar2 = (*DAT_1553e46d8)(lVar2,0,0,0);
      if (lVar2 == 0) {
        dwErrCode = GetLastError();
      }
      else {
        lVar2 = (*DAT_1553e46e0)(lVar2,0);
        lVar3 = lVar4;
        if (lVar2 == 0) {
          dwErrCode = GetLastError();
          lVar6 = lVar5;
        }
        else if (dwErrCode == 0x800b010a) {
          local_48[0] = 0;
          lVar3 = (*DAT_1553e4628)(param_2,*(undefined8 *)(lVar2 + 8),0,local_48);
          if (lVar3 == 0) goto LAB_140e83851;
          iVar1 = FUN_140e80630(*(longlong *)(lVar3 + 0x18) + 0x78);
          lVar6 = lVar5;
          if (iVar1 != 0) {
            lVar4 = lVar3;
            dwErrCode = 0;
            if (param_4 != (int *)0x0) {
              *param_4 = 1;
              dwErrCode = 0;
            }
            goto LAB_140e838f5;
          }
        }
        else {
          if (param_4 != (int *)0x0) {
            iVar1 = FUN_140e7db90(*(undefined8 *)(lVar2 + 8));
            *param_4 = iVar1;
            lVar6 = lVar5;
            if (iVar1 == 0) goto LAB_140e838fa;
          }
LAB_140e838f5:
          lVar3 = lVar4;
          lVar6 = 1;
        }
      }
    }
  }
LAB_140e838fa:
  *(undefined4 *)(param_1 + 0x30) = 2;
  (*DAT_1553e46c8)(0,&local_40,param_1);
  if (lVar3 != 0) {
    (*DAT_1553e45f8)(lVar3);
  }
LAB_140e83921:
  SetLastError(dwErrCode);
  return lVar6;
}

// nvVerifyFileSignatureW @ 140e83960

int nvVerifyFileSignatureW(LPCWSTR param_1,undefined8 param_2)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  DWORD dwErrCode;
  uint uVar4;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  LPCWSTR local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  uint local_30;
  undefined8 *local_28;
  
  dwErrCode = 0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_c4 = 0;
  iVar3 = 0;
  local_d8 = 0;
  local_d0 = 0;
  DVar1 = GetFileAttributesW(param_1);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x50) != 0)) {
    dwErrCode = 2;
  }
  else {
    iVar2 = nvLoadWVTCryptModule();
    if (iVar2 == 1) {
      iVar3 = (*DAT_1553e4610)(1,param_1,0x400,2,0,local_c0,&local_c8,&local_c4,&local_d8,&local_d0,
                               0);
      if (iVar3 == 0) {
        dwErrCode = GetLastError();
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_140e7f6d0(0x23f0);
        if (((iVar3 == 0) && (iVar3 = FUN_140e7eb90(param_1), iVar3 != 0)) &&
           (iVar3 = FUN_140e7ed50(), iVar3 == 0)) {
          VerifyPrimarySignatureCN(local_d8,local_d0,param_2);
          iVar3 = 1;
        }
        else {
          local_98 = 0;
          local_90 = (LPCWSTR)0x0;
          local_88 = 0;
          local_80 = 0;
          memset(local_78,0,0x58);
          local_30 = local_30 | 0x1000;
          local_50 = &local_98;
          local_98 = CONCAT44(local_98._4_4_,0x20);
          local_78[0] = 0x58;
          local_48 = 1;
          local_60 = 2;
          local_5c = 1;
          local_58 = 1;
          local_90 = param_1;
          iVar3 = FUN_140e7f6d0(0x23f0);
          if (iVar3 == 0) {
            iVar3 = VerifySingleSignature(local_78,local_d8,local_d0,param_2);
            if (iVar3 == 0) {
              dwErrCode = GetLastError();
            }
          }
          else {
            local_a8 = 0;
            local_a0 = 0;
            local_28 = &local_b8;
            local_b0 = 3;
            local_b8 = 0x20;
            iVar3 = VerifySingleSignature(local_78,local_d8,local_d0,param_2);
            if (iVar3 == 0) {
              dwErrCode = GetLastError();
              uVar4 = 1;
              if (*(int *)((longlong)local_28 + 0xc) != 0) {
                do {
                  local_40 = 0;
                  local_48 = 1;
                  *(uint *)((longlong)local_28 + 4) = uVar4;
                  iVar3 = VerifySingleSignature(local_78,local_d8,local_d0,param_2);
                  if (iVar3 != 0) break;
                  dwErrCode = GetLastError();
                  uVar4 = uVar4 + 1;
                } while (uVar4 <= *(uint *)((longlong)local_28 + 0xc));
              }
            }
          }
        }
      }
    }
    else {
      dwErrCode = 0x7e;
    }
  }
  if (local_d8 != 0) {
    (*DAT_1553e45f0)(local_d8,0);
  }
  if (local_d0 != 0) {
    (*DAT_1553e45e8)();
  }
  if (iVar3 != 0) {
    dwErrCode = 0;
  }
  SetLastError(dwErrCode);
  return iVar3;
}

// nvVerifyFileSignatureA @ 140e83c70

undefined4 nvVerifyFileSignatureA(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  HLOCAL hMem;
  
  uVar1 = 0;
  hMem = (HLOCAL)FUN_140e7d700();
  if ((param_1 == 0) || (hMem != (HLOCAL)0x0)) {
    uVar1 = nvVerifyFileSignatureW(hMem,param_2);
  }
  LocalFree(hMem);
  return uVar1;
}

// FUN_140e83ce0 @ 140e83ce0

STRSAFE_LPWSTR FUN_140e83ce0(STRSAFE_LPCWSTR param_1,STRSAFE_LPCWSTR param_2)

{
  longlong lVar1;
  size_t uBytes;
  wchar_t wVar2;
  bool bVar3;
  HRESULT HVar4;
  STRSAFE_LPWSTR pwVar5;
  STRSAFE_LPCWSTR pwVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  pwVar6 = param_2;
  if ((param_1 == (STRSAFE_LPCWSTR)0x0) || (pwVar6 = param_1, param_2 == (STRSAFE_LPCWSTR)0x0)) {
    pwVar5 = (STRSAFE_LPWSTR)FUN_140e7f330(pwVar6);
    return pwVar5;
  }
  uVar7 = 0xffffffffffffffff;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    wVar2 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar2 != L'\0');
  lVar1 = ~uVar7 - 1;
  uVar8 = 0xffffffffffffffff;
  pwVar6 = param_2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    wVar2 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar2 != L'\0');
  if ((((lVar1 == 0) || (param_1[~uVar7 - 2] == L'\\')) || (~uVar8 - 1 == 0)) || (*param_2 == L'\\')
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uBytes = ((ulonglong)bVar3 + (~uVar8 - 1) + lVar1) * 2 + 2;
  pwVar5 = LocalAlloc(0x40,uBytes);
  if ((pwVar5 != (STRSAFE_LPWSTR)0x0) &&
     (((HVar4 = StringCbCopyW(pwVar5,uBytes,param_1), HVar4 < 0 ||
       ((bVar3 && (HVar4 = StringCbCatW(pwVar5,uBytes,L"\\"), HVar4 < 0)))) ||
      (HVar4 = StringCbCatW(pwVar5,uBytes,param_2), HVar4 < 0)))) {
    LocalFree(pwVar5);
    pwVar5 = (STRSAFE_LPWSTR)0x0;
  }
  return pwVar5;
}

// FUN_140e83df0 @ 140e83df0

LPCWSTR FUN_140e83df0(undefined8 param_1,undefined8 param_2)

{
  DWORD DVar1;
  LPCWSTR lpFileName;
  
  lpFileName = (LPCWSTR)FUN_140e83ce0(param_2,param_1);
  if (lpFileName != (LPCWSTR)0x0) {
    DVar1 = GetFileAttributesW(lpFileName);
    if ((DVar1 != 0xffffffff) && ((DVar1 & 0x50) == 0)) {
      return lpFileName;
    }
    DVar1 = GetLastError();
    if (DVar1 == 2) {
      SetLastError(0);
    }
    LocalFree(lpFileName);
  }
  return (LPCWSTR)0x0;
}

// nvLoadSignedLibraryExW @ 140e83e60

HMODULE nvLoadSignedLibraryExW(LPCWSTR param_1,uint param_2,int param_3)

{
  WCHAR WVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hObject;
  HMODULE pHVar4;
  HMODULE pHVar5;
  HINSTANCE__ local_res8 [2];
  
  pHVar4 = (HMODULE)0x0;
  SetLastError(0);
  if ((param_1 != (LPCWSTR)0x0) &&
     (((WVar1 = *param_1, WVar1 == L'\\' || (WVar1 == L'/')) ||
      (((iVar2 = isalpha((uint)(ushort)WVar1), iVar2 != 0 && (param_1[1] == L':')) &&
       ((param_1[2] == L'\\' || (param_1[2] == L'/')))))))) {
    DVar3 = GetFileAttributesW(param_1);
    if ((DVar3 != 0xffffffff) && ((DVar3 & 0x50) == 0)) {
      hObject = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        SetLastError(0x20);
      }
      else {
        pHVar5 = local_res8;
        if (param_3 == 0) {
          pHVar5 = pHVar4;
        }
        local_res8[0].unused = 0;
        iVar2 = nvVerifyFileSignatureW(param_1,pHVar5);
        if (iVar2 != 0) {
          if ((param_3 == 0) || (local_res8[0].unused != 0)) {
            pHVar4 = LoadLibraryExW(param_1,(HANDLE)0x0,param_2 & 0xffffe8f7);
          }
          else {
            SetLastError(0x80092009);
          }
        }
        if (hObject != (HANDLE)0x0) {
          DVar3 = GetLastError();
          CloseHandle(hObject);
          SetLastError(DVar3);
        }
        if (pHVar4 != (HMODULE)0x0) {
          SetLastError(0);
        }
      }
      return pHVar4;
    }
    SetLastError(0x7e);
    return (HMODULE)0x0;
  }
  SetLastError(0xa0);
  return (HMODULE)0x0;
}

// nvLoadSignedLibraryExA @ 140e83ff0

undefined8 nvLoadSignedLibraryExA(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  HLOCAL hMem;
  undefined8 uVar1;
  
  uVar1 = 0;
  hMem = (HLOCAL)FUN_140e7d700();
  if ((param_1 == 0) || (hMem != (HLOCAL)0x0)) {
    uVar1 = nvLoadSignedLibraryExW(hMem,param_2,param_3);
  }
  LocalFree(hMem);
  return uVar1;
}

// FUN_140e84070 @ 140e84070

undefined8 FUN_140e84070(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_res10 [6];
  
  local_res10[0] = 0;
  piVar2 = local_res10;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  iVar1 = nvVerifyFileSignatureW(param_1,piVar2);
  if (iVar1 != 0) {
    if ((param_2 == 0) || (local_res10[0] != 0)) {
      return 1;
    }
    SetLastError(0x80092009);
  }
  return 0;
}

// FUN_140e840d0 @ 140e840d0

int FUN_140e840d0(wchar_t *param_1,short *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  DWORD dwErrCode;
  wchar_t *_Str;
  ulonglong uVar3;
  wchar_t *pwVar4;
  int iVar5;
  short *psVar6;
  int local_res8 [2];
  
  dwErrCode = 0;
  SetLastError(0);
  _Str = (wchar_t *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 == (short *)0x0) {
LAB_140e84164:
      SetLastError(0x57);
      return 0;
    }
    uVar3 = 0xffffffffffffffff;
    psVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    _Str = LocalAlloc(0x40,~uVar3 * 2);
    if (_Str == (wchar_t *)0x0) {
      return 0;
    }
    memcpy(_Str,param_2,~uVar3 * 2);
    pwVar4 = L"\"";
    if (*_Str != L'\"') {
      pwVar4 = L" ";
    }
    param_1 = wcstok(_Str,pwVar4);
    if (param_1 == (wchar_t *)0x0) {
      LocalFree(_Str);
      goto LAB_140e84164;
    }
  }
  iVar2 = FUN_140e7d820(param_1);
  if (iVar2 == 0) {
    LocalFree(_Str);
    SetLastError(0xa0);
    return 0;
  }
  iVar2 = FUN_140e7eb90(param_1);
  if (iVar2 != 0) {
    LocalFree(_Str);
    return 1;
  }
  pwVar4 = (wchar_t *)local_res8;
  if (param_3 == 0) {
    pwVar4 = (wchar_t *)0x0;
  }
  iVar5 = 0;
  local_res8[0] = 0;
  iVar2 = nvVerifyFileSignatureW(param_1,pwVar4);
  if (iVar2 != 0) {
    if ((param_3 == 0) || (local_res8[0] != 0)) {
      iVar5 = 1;
      goto LAB_140e841f2;
    }
    SetLastError(0x80092009);
  }
  dwErrCode = GetLastError();
LAB_140e841f2:
  LocalFree(_Str);
  if (iVar5 == 0) {
    SetLastError(dwErrCode);
    return 0;
  }
  return iVar5;
}

// nvCreateProcessW @ 140e84230

void nvCreateProcessW(LPCWSTR param_1,LPWSTR param_2,LPSECURITY_ATTRIBUTES param_3,
                     LPSECURITY_ATTRIBUTES param_4,BOOL param_5,DWORD param_6,LPVOID param_7,
                     LPCWSTR param_8,LPSTARTUPINFOW param_9,undefined4 param_10,
                     LPPROCESS_INFORMATION param_11)

{
  int iVar1;
  
  SetLastError(0);
  iVar1 = FUN_140e840d0(param_1,param_2,param_10);
  if (iVar1 != 0) {
    CreateProcessW(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11)
    ;
  }
  return;
}

// nvCreateProcessA @ 140e842f0

BOOL nvCreateProcessA(LPCSTR param_1,LPSTR param_2,LPSECURITY_ATTRIBUTES param_3,
                     LPSECURITY_ATTRIBUTES param_4,BOOL param_5,DWORD param_6,LPVOID param_7,
                     LPCSTR param_8,LPSTARTUPINFOA param_9,undefined4 param_10,
                     LPPROCESS_INFORMATION param_11)

{
  int iVar1;
  BOOL BVar2;
  HLOCAL hMem;
  HLOCAL hMem_00;
  
  hMem_00 = (HLOCAL)0x0;
  SetLastError(0);
  hMem = hMem_00;
  if (param_1 != (LPCSTR)0x0) {
    hMem = (HLOCAL)FUN_140e7d700(param_1);
  }
  if (param_2 != (LPSTR)0x0) {
    hMem_00 = (HLOCAL)FUN_140e7d700(param_2);
  }
  iVar1 = FUN_140e840d0(hMem,hMem_00,param_10);
  if (iVar1 == 0) {
    LocalFree(hMem);
    LocalFree(hMem_00);
    BVar2 = 0;
  }
  else {
    LocalFree(hMem);
    LocalFree(hMem_00);
    BVar2 = CreateProcessA(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_11);
  }
  return BVar2;
}

// nvCreateProcessAsUserW @ 140e84400

INT_PTR nvCreateProcessAsUserW
                  (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12)

{
  int iVar1;
  INT_PTR IVar2;
  
  SetLastError(0);
  iVar1 = FUN_140e840d0(param_2,param_3,param_11);
  if (iVar1 == 0) {
LAB_140e8443f:
    IVar2 = 0;
  }
  else {
    if (DAT_1553e4630 == (HMODULE)0x0) {
      DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0);
      if (DAT_1553e4630 == (HMODULE)0x0) goto LAB_140e8443f;
    }
    if (DAT_1553e4690 == (FARPROC)0x0) {
      DAT_1553e4690 = GetProcAddress(DAT_1553e4630,"CreateProcessAsUserW");
      if (DAT_1553e4690 == (FARPROC)0x0) goto LAB_140e8443f;
    }
    IVar2 = (*DAT_1553e4690)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,param_12);
  }
  return IVar2;
}

// nvCreateProcessAsUserA @ 140e84520

INT_PTR nvCreateProcessAsUserA
                  (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12)

{
  int iVar1;
  HLOCAL hMem;
  HLOCAL hMem_00;
  INT_PTR IVar2;
  
  hMem_00 = (HLOCAL)0x0;
  SetLastError(0);
  hMem = hMem_00;
  if (param_2 != 0) {
    hMem = (HLOCAL)FUN_140e7d700(param_2);
  }
  if (param_3 != 0) {
    hMem_00 = (HLOCAL)FUN_140e7d700(param_3);
  }
  iVar1 = FUN_140e840d0(hMem,hMem_00,param_11);
  if (iVar1 == 0) {
    LocalFree(hMem);
    LocalFree(hMem_00);
LAB_140e8459a:
    IVar2 = 0;
  }
  else {
    LocalFree(hMem);
    LocalFree(hMem_00);
    if (DAT_1553e4630 == (HMODULE)0x0) {
      DAT_1553e4630 = (HMODULE)FUN_140e7e920(L"Advapi32.dll",0);
      if (DAT_1553e4630 == (HMODULE)0x0) goto LAB_140e8459a;
    }
    if (DAT_1553e4698 == (FARPROC)0x0) {
      DAT_1553e4698 = GetProcAddress(DAT_1553e4630,"CreateProcessAsUserA");
      if (DAT_1553e4698 == (FARPROC)0x0) goto LAB_140e8459a;
    }
    IVar2 = (*DAT_1553e4698)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,param_12);
  }
  return IVar2;
}

// nvShellExecuteA @ 140e84690

INT_PTR nvShellExecuteA(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  HLOCAL hMem;
  HLOCAL hMem_00;
  INT_PTR IVar2;
  
  hMem_00 = (HLOCAL)0x0;
  SetLastError(0);
  hMem = hMem_00;
  if (param_3 != 0) {
    hMem = (HLOCAL)FUN_140e7d700(param_3);
  }
  if (param_4 != 0) {
    hMem_00 = (HLOCAL)FUN_140e7d700(param_4);
  }
  iVar1 = FUN_140e840d0(hMem,hMem_00,param_7);
  if (iVar1 == 0) {
    LocalFree(hMem);
    LocalFree(hMem_00);
LAB_140e8470a:
    IVar2 = 0;
  }
  else {
    LocalFree(hMem);
    LocalFree(hMem_00);
    if (DAT_1553e45d0 == (HMODULE)0x0) {
      DAT_1553e45d0 = (HMODULE)FUN_140e7e920(L"Shell32.dll",0);
      if (DAT_1553e45d0 == (HMODULE)0x0) goto LAB_140e8470a;
    }
    if (DAT_1553e46a0 == (FARPROC)0x0) {
      DAT_1553e46a0 = GetProcAddress(DAT_1553e45d0,"ShellExecuteA");
      if (DAT_1553e46a0 == (FARPROC)0x0) goto LAB_140e8470a;
    }
    IVar2 = (*DAT_1553e46a0)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return IVar2;
}

// nvShellExecuteW @ 140e847c0

INT_PTR nvShellExecuteW(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  INT_PTR IVar2;
  
  SetLastError(0);
  iVar1 = FUN_140e840d0(param_3,param_4,param_7);
  if (iVar1 == 0) {
LAB_140e847fc:
    IVar2 = 0;
  }
  else {
    if (DAT_1553e45d0 == (HMODULE)0x0) {
      DAT_1553e45d0 = (HMODULE)FUN_140e7e920(L"Shell32.dll",0);
      if (DAT_1553e45d0 == (HMODULE)0x0) goto LAB_140e847fc;
    }
    if (DAT_1553e46a8 == (FARPROC)0x0) {
      DAT_1553e46a8 = GetProcAddress(DAT_1553e45d0,"ShellExecuteW");
      if (DAT_1553e46a8 == (FARPROC)0x0) goto LAB_140e847fc;
    }
    IVar2 = (*DAT_1553e46a8)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return IVar2;
}

// nvShellExecuteExA @ 140e84890

INT_PTR nvShellExecuteExA(longlong param_1,undefined4 param_2)

{
  int iVar1;
  HLOCAL hMem;
  HLOCAL hMem_00;
  INT_PTR IVar2;
  
  hMem_00 = (HLOCAL)0x0;
  SetLastError(0);
  if (param_1 == 0) {
    SetLastError(0xa0);
  }
  else {
    hMem = hMem_00;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      hMem = (HLOCAL)FUN_140e7d700();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      hMem_00 = (HLOCAL)FUN_140e7d700();
    }
    iVar1 = FUN_140e840d0(hMem,hMem_00,param_2);
    if (iVar1 == 0) {
      LocalFree(hMem);
      LocalFree(hMem_00);
      return 0;
    }
    LocalFree(hMem);
    LocalFree(hMem_00);
    if (((DAT_1553e45d0 != (HMODULE)0x0) ||
        (DAT_1553e45d0 = (HMODULE)FUN_140e7e920(L"Shell32.dll",0), DAT_1553e45d0 != (HMODULE)0x0))
       && ((DAT_1553e46b0 != (FARPROC)0x0 ||
           (DAT_1553e46b0 = GetProcAddress(DAT_1553e45d0,"ShellExecuteExA"),
           DAT_1553e46b0 != (FARPROC)0x0)))) {
      IVar2 = (*DAT_1553e46b0)(param_1);
      return IVar2;
    }
  }
  return 0;
}

// nvShellExecuteExW @ 140e849a0

INT_PTR nvShellExecuteExW(longlong param_1,undefined4 param_2)

{
  int iVar1;
  INT_PTR IVar2;
  
  SetLastError(0);
  if (param_1 == 0) {
    SetLastError(0xa0);
  }
  else {
    iVar1 = FUN_140e840d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
    if (iVar1 != 0) {
      if ((DAT_1553e45d0 == (HMODULE)0x0) &&
         (DAT_1553e45d0 = (HMODULE)FUN_140e7e920(L"Shell32.dll",0), DAT_1553e45d0 == (HMODULE)0x0))
      {
        return 0;
      }
      if ((DAT_1553e46b8 == (FARPROC)0x0) &&
         (DAT_1553e46b8 = GetProcAddress(DAT_1553e45d0,"ShellExecuteExW"),
         DAT_1553e46b8 == (FARPROC)0x0)) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140e84a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar2 = (*DAT_1553e46b8)(param_1,DAT_1553e46b8);
      return IVar2;
    }
  }
  return 0;
}

// FUN_140e84a50 @ 140e84a50

void FUN_140e84a50(STRSAFE_LPWSTR param_1)

{
  wchar_t wVar1;
  short sVar2;
  int iVar3;
  HMODULE hModule;
  INT_PTR IVar4;
  STRSAFE_LPCWSTR pwVar5;
  STRSAFE_LPCWSTR pwVar6;
  HLOCAL hMem;
  STRSAFE_LPCWSTR pszSrc;
  ulonglong uVar7;
  STRSAFE_LPCWSTR pwVar8;
  uint uVar9;
  STRSAFE_LPCWSTR pwVar10;
  short *psVar11;
  STRSAFE_LPCWSTR pwVar12;
  uint uVar13;
  STRSAFE_LPCWSTR pwVar14;
  ulonglong local_78;
  STRSAFE_LPCWSTR local_70;
  undefined8 local_68;
  STRSAFE_LPCWSTR local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  STRSAFE_LPCWSTR local_40;
  wchar_t local_38 [2];
  int iStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  hModule = DAT_1553e46e8;
  pszSrc = (STRSAFE_LPCWSTR)0x0;
  local_78 = 0;
  local_70 = (STRSAFE_LPCWSTR)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = (STRSAFE_LPCWSTR)0x0;
  pwVar14 = (STRSAFE_LPCWSTR)0x0;
  *param_1 = L'\0';
  pwVar6 = pszSrc;
  pwVar5 = pszSrc;
  pwVar12 = pszSrc;
  if ((((hModule == (HMODULE)0x0) &&
       (hModule = (HMODULE)FUN_140e7e920(L"gdi32.dll",0), DAT_1553e46e8 = hModule,
       hModule == (HMODULE)0x0)) ||
      ((DAT_1553e4720 == (FARPROC)0x0 &&
       (DAT_1553e4720 = GetProcAddress(hModule,"D3DKMTEnumAdapters2"), hModule = DAT_1553e46e8,
       DAT_1553e4720 == (FARPROC)0x0)))) ||
     ((DAT_1553e4730 == (FARPROC)0x0 &&
      (DAT_1553e4730 = GetProcAddress(hModule,"D3DKMTQueryAdapterInfo"), hModule = DAT_1553e46e8,
      pwVar5 = (STRSAFE_LPCWSTR)0x0, pwVar12 = pwVar14, DAT_1553e4730 == (FARPROC)0x0))))
  goto LAB_140e84daf;
  if ((DAT_1553e4728 == (FARPROC)0x0) &&
     (DAT_1553e4728 = GetProcAddress(hModule,"D3DKMTEnumAdapters3"), pwVar5 = pszSrc,
     DAT_1553e4728 == (FARPROC)0x0)) {
LAB_140e84bab:
    IVar4 = (*DAT_1553e4720)(&local_78);
    pwVar12 = pszSrc;
    if ((((int)IVar4 != 0) ||
        (pwVar5 = LocalAlloc(0x40,(local_78 & 0xffffffff) * 0x14), pwVar12 = pwVar14,
        pwVar5 == (STRSAFE_LPCWSTR)0x0)) ||
       (local_70 = pwVar5, IVar4 = (*DAT_1553e4720)(&local_78), pwVar6 = (STRSAFE_LPCWSTR)0x0,
       (int)IVar4 != 0)) goto LAB_140e84daf;
    uVar13 = (uint)local_78;
  }
  else {
    local_50 = 3;
    IVar4 = (*DAT_1553e4728)(&local_50);
    pwVar5 = pszSrc;
    if ((((int)IVar4 != 0) || (pwVar5 = (STRSAFE_LPCWSTR)0x0, (int)local_48 == 0)) ||
       (pwVar5 = LocalAlloc(0x40,(local_48 & 0xffffffff) * 0x14), pwVar5 == (STRSAFE_LPCWSTR)0x0))
    goto LAB_140e84bab;
    local_40 = pwVar5;
    IVar4 = (*DAT_1553e4728)(&local_50);
    if ((int)IVar4 != 0) {
      LocalFree(pwVar5);
      pwVar5 = (STRSAFE_LPCWSTR)0x0;
      goto LAB_140e84bab;
    }
    uVar13 = (uint)local_48;
  }
  pwVar6 = pszSrc;
  pwVar8 = pwVar5;
  pwVar10 = pszSrc;
  pwVar12 = pszSrc;
  if (uVar13 != 0) {
    while( true ) {
      _local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_60 = local_38;
      local_58 = 0x1c;
      local_68 = CONCAT44(0x1f,*(undefined4 *)pwVar8);
      IVar4 = (*DAT_1553e4730)(&local_68);
      if ((int)IVar4 != 0) break;
      if ((iStack_34 == 0x10de) || (iStack_34 == 0x4144564e)) {
        iVar3 = *(int *)(pwVar5 + (longlong)pwVar10 * 10);
        pwVar12 = pwVar14;
        if (iVar3 != 0) {
          local_68 = 0;
          local_60 = (STRSAFE_LPCWSTR)0x0;
          local_58 = 0;
          pwVar6 = LocalAlloc(0x40,0x432);
          if (pwVar6 != (STRSAFE_LPCWSTR)0x0) {
            pwVar6[0] = L'\x02';
            pwVar6[1] = L'\0';
            local_58 = CONCAT44(local_58._4_4_,0x432);
            local_68 = CONCAT44(0x30,iVar3);
            local_60 = pwVar6;
            IVar4 = (*DAT_1553e4730)();
            if (((int)IVar4 == 0) && (*(int *)(pwVar6 + 0x10e) == 0)) {
              uVar7 = 0xffffffffffffffff;
              pwVar12 = pwVar6 + 0x110;
              goto code_r0x000140e84d19;
            }
          }
        }
        break;
      }
      uVar9 = (int)pwVar10 + 1;
      pwVar8 = pwVar8 + 10;
      pwVar10 = (STRSAFE_LPCWSTR)(ulonglong)uVar9;
      if (uVar13 <= uVar9) break;
    }
  }
LAB_140e84daf:
  LocalFree(pwVar5);
  LocalFree(pwVar6);
  LocalFree(pwVar12);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    wVar1 = *pwVar12;
    pwVar12 = pwVar12 + 1;
    if (wVar1 == L'\0') break;
code_r0x000140e84d19:
    if (uVar7 == 0) break;
  }
  StringCchCopyW(param_1,~uVar7,pwVar6 + 0x110);
  hMem = (HLOCAL)nvGetSystemDirectoryW();
  pwVar12 = pwVar14;
  if (hMem != (HLOCAL)0x0) {
    uVar7 = 0xffffffffffffffff;
    psVar11 = (short *)&u__SystemRoot_system32_;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      sVar2 = *psVar11;
      psVar11 = psVar11 + 1;
    } while (sVar2 != 0);
    iVar3 = _wcsnicmp(param_1,L"\\SystemRoot\\system32\\",~uVar7 - 1);
    if ((iVar3 == 0) &&
       (pszSrc = (STRSAFE_LPCWSTR)FUN_140e83ce0(hMem,param_1 + (~uVar7 - 1)),
       pszSrc != (STRSAFE_LPCWSTR)0x0)) {
      uVar7 = 0xffffffffffffffff;
      pwVar12 = pszSrc;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        wVar1 = *pwVar12;
        pwVar12 = pwVar12 + 1;
      } while (wVar1 != L'\0');
      StringCchCopyW(param_1,~uVar7,pszSrc);
    }
    LocalFree(hMem);
    pwVar12 = pszSrc;
  }
  goto LAB_140e84daf;
}

// nvGetDriverRegkeyW @ 140e84df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

HLOCAL nvGetDriverRegkeyW(int param_1)

{
  longlong lVar1;
  int iVar2;
  HLOCAL hMem;
  INT_PTR IVar3;
  HLOCAL pvVar4;
  undefined1 auStack_88 [32];
  HLOCAL local_68;
  uint local_60;
  uint *local_58;
  uint local_48 [2];
  longlong local_40 [7];
  
  local_40[5] = __security_cookie.value ^ (ulonglong)auStack_88;
  pvVar4 = (HLOCAL)0x0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[0] = 0;
  local_40[1] = 0x20;
  SetLastError(0);
  if ((((DAT_1553e4590 == (HMODULE)0x0) &&
       (DAT_1553e4590 = (HMODULE)FUN_140e7e920(L"Setupapi.dll",0), DAT_1553e4590 == (HMODULE)0x0))
      || ((DAT_1553e45b0 == (FARPROC)0x0 &&
          (DAT_1553e45b0 = GetProcAddress(DAT_1553e4590,"SetupDiGetDeviceRegistryPropertyW"),
          DAT_1553e45b0 == (FARPROC)0x0)))) ||
     ((((DAT_1553e45c0 == (FARPROC)0x0 &&
        (DAT_1553e45c0 = GetProcAddress(DAT_1553e4590,"SetupDiDestroyDeviceInfoList"),
        DAT_1553e45c0 == (FARPROC)0x0)) || (param_1 != 0)) ||
      (iVar2 = FUN_140e7f900(0,local_40,local_40 + 1), lVar1 = local_40[0], iVar2 == 0)))) {
    pvVar4 = (HLOCAL)0x0;
  }
  else {
    local_58 = local_48;
    local_60 = 0;
    local_48[0] = 0;
    local_68 = (HLOCAL)0x0;
    (*DAT_1553e45b0)(local_40[0],local_40 + 1,9);
    hMem = pvVar4;
    if ((local_48[0] != 0) && (hMem = LocalAlloc(0x40,(ulonglong)local_48[0]), hMem != (HLOCAL)0x0))
    {
      local_58 = (uint *)0x0;
      local_60 = local_48[0];
      local_68 = hMem;
      IVar3 = (*DAT_1553e45b0)(lVar1,local_40 + 1,9);
      if ((int)IVar3 != 0) {
        pvVar4 = (HLOCAL)FUN_140e83ce0(L"SYSTEM\\CurrentControlSet\\Control\\Class\\",hMem);
      }
    }
    LocalFree(hMem);
    if (lVar1 != 0) {
      (*DAT_1553e45c0)();
    }
    if (pvVar4 != (HLOCAL)0x0) {
      SetLastError(0);
    }
  }
  return pvVar4;
}

// nvGetDriverStoreW @ 140e84fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

STRSAFE_LPWSTR nvGetDriverStoreW(int param_1)

{
  WCHAR WVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  STRSAFE_LPWSTR pwVar5;
  STRSAFE_LPWSTR hMem;
  INT_PTR IVar6;
  STRSAFE_LPWSTR _Str;
  wchar_t *pwVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  STRSAFE_LPWSTR pwVar10;
  WCHAR *pWVar11;
  undefined1 auStack_298 [32];
  STRSAFE_LPWSTR local_278;
  undefined8 local_270;
  uint *local_268;
  undefined4 local_260;
  uint local_258 [2];
  longlong local_250 [5];
  WCHAR local_228;
  undefined1 local_226 [526];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  pwVar5 = (STRSAFE_LPWSTR)0x0;
  pwVar10 = (STRSAFE_LPWSTR)0x0;
  local_250[0] = 0;
  if (param_1 == 0) {
    iVar3 = FUN_140e7f6d0();
    if (iVar3 != 0) {
      local_228 = L'\0';
      memset(local_226,0,0x208);
      FUN_140e84a50();
      if (((local_228 != L'\0') && (DVar4 = GetFileAttributesW(&local_228), DVar4 != 0xffffffff)) &&
         ((DVar4 & 0x10) != 0)) {
        uVar8 = 0xffffffffffffffff;
        pWVar11 = &local_228;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          WVar1 = *pWVar11;
          pWVar11 = pWVar11 + 1;
        } while (WVar1 != L'\0');
        pwVar5 = LocalAlloc(0x40,~uVar8 * 2);
        if (pwVar5 == (STRSAFE_LPWSTR)0x0) {
          return (STRSAFE_LPWSTR)0x0;
        }
        StringCchCopyW(pwVar5,~uVar8,&local_228);
        SetLastError(0);
        return pwVar5;
      }
    }
    local_250[1] = 0x20;
    local_250[2] = 0;
    local_250[3] = 0;
    local_250[4] = 0;
    SetLastError(0);
    iVar3 = FUN_140e7f6d0(6000);
    if (iVar3 == 0) {
      SetLastError(0x78);
    }
    else if ((((((DAT_1553e4590 != (HMODULE)0x0) ||
                (DAT_1553e4590 = (HMODULE)FUN_140e7e920(L"Setupapi.dll",0),
                DAT_1553e4590 != (HMODULE)0x0)) &&
               ((DAT_1553e45b8 != (FARPROC)0x0 ||
                (DAT_1553e45b8 = GetProcAddress(DAT_1553e4590,"SetupDiGetDevicePropertyW"),
                DAT_1553e45b8 != (FARPROC)0x0)))) &&
              ((DAT_1553e45c8 != (FARPROC)0x0 ||
               (DAT_1553e45c8 = GetProcAddress(DAT_1553e4590,"SetupGetInfDriverStoreLocationW"),
               DAT_1553e45c8 != (FARPROC)0x0)))) &&
             ((DAT_1553e45c0 != (FARPROC)0x0 ||
              (DAT_1553e45c0 = GetProcAddress(DAT_1553e4590,"SetupDiDestroyDeviceInfoList"),
              DAT_1553e45c0 != (FARPROC)0x0)))) &&
            (iVar3 = FUN_140e7f900(0,local_250,local_250 + 1), lVar2 = local_250[0], iVar3 != 0)) {
      local_260 = 0;
      local_268 = local_258;
      local_270 = (uint *)((ulonglong)local_270._4_4_ << 0x20);
      local_258[0] = 0;
      local_258[1] = 0;
      local_278 = (STRSAFE_LPWSTR)0x0;
      (*DAT_1553e45b8)(local_250[0],local_250 + 1,&DAT_153520078,local_258 + 1);
      _Str = pwVar5;
      hMem = pwVar5;
      if ((local_258[0] != 0) &&
         (hMem = LocalAlloc(0x40,(ulonglong)local_258[0] * 2), hMem != (STRSAFE_LPWSTR)0x0)) {
        local_260 = 0;
        local_268 = (uint *)0x0;
        local_270 = (uint *)CONCAT44(local_270._4_4_,local_258[0]);
        local_278 = hMem;
        IVar6 = (*DAT_1553e45b8)(lVar2,local_250 + 1,&DAT_153520078,local_258 + 1);
        _Str = (STRSAFE_LPWSTR)0x0;
        if ((int)IVar6 != 0) {
          local_270 = local_258;
          local_278 = (STRSAFE_LPWSTR)((ulonglong)local_278 & 0xffffffff00000000);
          (*DAT_1553e45c8)(hMem,0,0,0);
          pwVar5 = pwVar10;
          if ((local_258[0] != 0) &&
             (_Str = LocalAlloc(0x40,(ulonglong)local_258[0] * 2), _Str != (wchar_t *)0x0)) {
            local_270 = (uint *)0x0;
            local_278 = (STRSAFE_LPWSTR)CONCAT44(local_278._4_4_,local_258[0]);
            IVar6 = (*DAT_1553e45c8)(hMem,0,0,_Str);
            if ((int)IVar6 != 0) {
              pwVar7 = wcsrchr(_Str,L'\\');
              pwVar9 = _Str;
              if (pwVar7 != (wchar_t *)0x0) {
                pwVar9 = pwVar7 + 1;
              }
              pwVar5 = (STRSAFE_LPWSTR)
                       FUN_140e7f3c0(_Str,((longlong)pwVar9 - (longlong)_Str >> 1) + -1);
            }
          }
        }
      }
      LocalFree(_Str);
      LocalFree(hMem);
      if (lVar2 != 0) {
        (*DAT_1553e45c0)();
      }
      if (pwVar5 != (STRSAFE_LPWSTR)0x0) {
        SetLastError(0);
        return pwVar5;
      }
      return (STRSAFE_LPWSTR)0x0;
    }
  }
  return (STRSAFE_LPWSTR)0x0;
}

// nvDetectDisplayDriverModuleRegistrationW @ 140e85360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LPCWSTR nvDetectDisplayDriverModuleRegistrationW(longlong param_1)

{
  WCHAR WVar1;
  int iVar2;
  DWORD DVar3;
  LPCWSTR pWVar4;
  LPCWSTR hMem;
  LPCWSTR pWVar5;
  ulonglong uVar6;
  LPCWSTR _Str1;
  LPCWSTR pWVar7;
  undefined1 auStack_298 [32];
  wchar_t *local_278;
  wchar_t *local_270;
  wchar_t *local_268;
  undefined8 local_260;
  wchar_t *local_258;
  wchar_t *local_250;
  wchar_t *local_248;
  undefined8 local_240;
  short local_238;
  undefined1 local_236 [526];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  pWVar7 = (LPCWSTR)0x0;
  SetLastError(0);
  if ((param_1 == 0) || (iVar2 = FUN_140e7d7b0(param_1), iVar2 != 0)) {
    SetLastError(0xa0);
    return (LPCWSTR)0x0;
  }
  iVar2 = FUN_140e7f6d0(0x42ea);
  pWVar5 = pWVar7;
  if (iVar2 != 0) {
    local_238 = 0;
    memset(local_236,0,0x208);
    FUN_140e7dc10(&local_238);
    if (local_238 == 0) {
      FUN_140e84a50(&local_238);
    }
    pWVar4 = (LPCWSTR)FUN_140e83ce0(&local_238,param_1);
    DVar3 = GetFileAttributesW(pWVar4);
    if ((DVar3 != 0xffffffff) && (hMem = pWVar7, (DVar3 & 0x50) == 0)) goto LAB_140e855e7;
    LocalFree(pWVar4);
  }
  hMem = (LPCWSTR)nvGetDriverRegkeyW(0);
  pWVar4 = pWVar7;
  if ((hMem == (LPCWSTR)0x0) ||
     (pWVar5 = (LPCWSTR)FUN_140e7fb00(), pWVar4 = (LPCWSTR)0x0, pWVar5 == (LPCWSTR)0x0))
  goto LAB_140e855e7;
  uVar6 = 0xffffffffffffffff;
  pWVar4 = pWVar5;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    WVar1 = *pWVar4;
    pWVar4 = pWVar4 + 1;
  } while (WVar1 != L'\0');
  for (pWVar4 = pWVar5 + (~uVar6 - 1);
      ((pWVar5 < pWVar4 && (*pWVar4 != L'\\')) && (*pWVar4 != L'.')); pWVar4 = pWVar4 + -1) {
  }
  _Str1 = pWVar5 + (~uVar6 - 1);
  if (*pWVar4 == L'.') {
    _Str1 = pWVar4;
  }
  iVar2 = _wcsicmp(_Str1,L".dll");
  pWVar4 = pWVar7;
  if ((iVar2 != 0) && (DVar3 = GetLastError(), DVar3 == 0)) {
    pWVar4 = (LPCWSTR)FUN_140e7fe30(pWVar5,0);
  }
  iVar2 = _wcsicmp(_Str1,L".sys");
  if (iVar2 == 0) {
LAB_140e8559c:
    if (pWVar4 != (LPCWSTR)0x0) goto LAB_140e855e7;
  }
  else {
    if (pWVar4 != (LPCWSTR)0x0) goto LAB_140e855e7;
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      local_258 = L"UserModeDriverNameWow";
      local_250 = L"OpenGLDriverNameWow";
      local_248 = L"UserModeDListDriverNameWow";
      local_240 = 0;
      local_278 = L"UserModeDriverName";
      local_260 = 0;
      local_270 = L"OpenGLDriverName";
      local_268 = L"UserModeDListDriverName";
      pWVar4 = (LPCWSTR)FUN_140e800f0(pWVar5,&DAT_ffffffff80000002,hMem,&local_278);
      if (pWVar4 != (LPCWSTR)0x0) goto LAB_140e855e7;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      local_278 = L"SOFTWARE\\Khronos\\Vulkan\\Drivers";
      local_270 = L"SOFTWARE\\Khronos\\OpenCL\\Vendors";
      local_268 = (wchar_t *)0x0;
      pWVar4 = (LPCWSTR)FUN_140e80310(pWVar5,&DAT_ffffffff80000002,&local_278);
      goto LAB_140e8559c;
    }
  }
  DVar3 = GetLastError();
  if (DVar3 == 0) {
    local_278 = L"DriverSupportModulesWow";
    local_270 = (wchar_t *)0x0;
    local_250 = (wchar_t *)0x0;
    local_258 = L"DriverSupportModules";
    pWVar4 = (LPCWSTR)FUN_140e800f0(pWVar5,&DAT_ffffffff80000002,hMem,&local_258);
  }
LAB_140e855e7:
  LocalFree(hMem);
  LocalFree(pWVar5);
  if (pWVar4 == (LPCWSTR)0x0) {
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      SetLastError(0x7e);
    }
  }
  else {
    SetLastError(0);
  }
  return pWVar4;
}

// nvDetectDisplayDriverModuleLocationW @ 140e85660

wchar_t * nvDetectDisplayDriverModuleLocationW(longlong param_1)

{
  wchar_t wVar1;
  int iVar2;
  DWORD DVar3;
  wchar_t *_Str1;
  HLOCAL pvVar4;
  wchar_t *lpFileName;
  HLOCAL hMem;
  ulonglong uVar5;
  wchar_t **ppwVar6;
  wchar_t *hMem_00;
  wchar_t *pwVar7;
  wchar_t *local_18;
  undefined *local_10;
  
  lpFileName = (wchar_t *)0x0;
  SetLastError(0);
  if ((param_1 == 0) || (iVar2 = FUN_140e7d7b0(param_1), iVar2 != 0)) {
    SetLastError(0xa0);
    return (wchar_t *)0x0;
  }
  _Str1 = (wchar_t *)nvDetectDisplayDriverModuleRegistrationW(param_1);
  if (_Str1 == (wchar_t *)0x0) {
    DVar3 = GetLastError();
    if ((DVar3 != 0x7e) || (pvVar4 = (HLOCAL)FUN_140e7fb00(param_1), pvVar4 == (HLOCAL)0x0))
    goto LAB_140e85842;
    iVar2 = FUN_140e7f6d0(0x37e4);
    if (iVar2 == 0) {
      hMem = (HLOCAL)nvGetSystemDirectoryW();
    }
    else {
      hMem = (HLOCAL)nvGetDriverStoreW(0);
    }
    if (hMem != (HLOCAL)0x0) {
      lpFileName = (wchar_t *)FUN_140e83ce0(hMem,pvVar4);
      if ((lpFileName != (LPCWSTR)0x0) &&
         ((DVar3 = GetFileAttributesW(lpFileName), DVar3 == 0xffffffff || ((DVar3 & 0x50) != 0)))) {
        DVar3 = GetLastError();
        if (DVar3 == 2) {
          SetLastError(0);
        }
        LocalFree(lpFileName);
        lpFileName = (wchar_t *)0x0;
      }
      LocalFree(hMem);
    }
    LocalFree(pvVar4);
  }
  else {
    pvVar4 = (HLOCAL)nvGetSystemDirectoryW();
    hMem_00 = _Str1;
    if (pvVar4 != (HLOCAL)0x0) {
      iVar2 = FUN_140e7d7b0();
      if (iVar2 == 0) {
        lpFileName = (wchar_t *)FUN_140e83ce0(pvVar4,_Str1);
      }
      else {
        ppwVar6 = &local_18;
        local_18 = L"system32\\";
        local_10 = &u__SystemRoot_system32_;
        do {
          uVar5 = 0xffffffffffffffff;
          pwVar7 = *ppwVar6;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            wVar1 = *pwVar7;
            pwVar7 = pwVar7 + 1;
          } while (wVar1 != L'\0');
          iVar2 = _wcsnicmp(_Str1,*ppwVar6,~uVar5 - 1);
          if (iVar2 == 0) {
            lpFileName = (wchar_t *)FUN_140e83ce0(pvVar4,_Str1 + (~uVar5 - 1));
            break;
          }
          ppwVar6 = ppwVar6 + 1;
        } while (ppwVar6 < &stack0xfffffffffffffff8);
        if ((ppwVar6 == (wchar_t **)&stack0xfffffffffffffff8) &&
           (iVar2 = FUN_140e7d820(_Str1), iVar2 != 0)) {
          hMem_00 = (wchar_t *)0x0;
          lpFileName = _Str1;
        }
      }
      LocalFree(pvVar4);
    }
    LocalFree(hMem_00);
  }
  if (lpFileName != (wchar_t *)0x0) {
    SetLastError(0);
    return lpFileName;
  }
LAB_140e85842:
  DVar3 = GetLastError();
  if (DVar3 == 0) {
    SetLastError(0x7e);
  }
  return (wchar_t *)0x0;
}

// nvLoadSystemLibraryExW @ 140e85890

undefined8 nvLoadSystemLibraryExW(wchar_t *param_1,uint param_2)

{
  wchar_t wVar1;
  short sVar2;
  int iVar3;
  DWORD DVar4;
  HLOCAL hMem;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  short *psVar9;
  
  uVar7 = 0;
  SetLastError(0);
  if (param_1 != (wchar_t *)0x0) {
    uVar6 = 0xffffffffffffffff;
    pwVar8 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      wVar1 = *pwVar8;
      pwVar8 = pwVar8 + 1;
    } while (wVar1 != L'\0');
    pwVar8 = param_1;
    if (~uVar6 != 1) {
      do {
        if ((*pwVar8 == L'\\') || (*pwVar8 == L'/')) {
          SetLastError(0xa0);
          return 0;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        pwVar8 = pwVar8 + 1;
      } while (uVar7 < ~uVar6 - 1);
    }
  }
  iVar3 = FUN_140e7f6d0();
  if ((iVar3 == 1) && ((param_2 >> 0xb & 1) == 0)) {
    uVar7 = 0xffffffffffffffff;
    psVar9 = (short *)&u_nv;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      sVar2 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar2 != 0);
    iVar3 = _wcsnicmp(param_1,L"nv",~uVar7 - 1);
    if (iVar3 == 0) {
      hMem = (HLOCAL)nvDetectDisplayDriverModuleLocationW(param_1);
      DVar4 = GetLastError();
      if (hMem != (HLOCAL)0x0) {
        uVar5 = nvLoadLibraryFromTrustedLocationExW(hMem,param_2);
        LocalFree(hMem);
        return uVar5;
      }
      if (DVar4 != 0x7e) {
        return 0;
      }
    }
  }
  uVar5 = FUN_140e7e920(param_1,param_2);
  return uVar5;
}

// nvLoadSystemLibraryExA @ 140e859b0

undefined8 nvLoadSystemLibraryExA(longlong param_1,undefined4 param_2)

{
  HLOCAL hMem;
  undefined8 uVar1;
  
  uVar1 = 0;
  hMem = (HLOCAL)FUN_140e7d700();
  if ((param_1 == 0) || (hMem != (HLOCAL)0x0)) {
    uVar1 = nvLoadSystemLibraryExW(hMem,param_2);
  }
  LocalFree(hMem);
  return uVar1;
}

// nvLoadDisplayDriverModuleExW @ 140e85a20

undefined8 nvLoadDisplayDriverModuleExW(longlong param_1,undefined4 param_2)

{
  int iVar1;
  HLOCAL hMem;
  undefined8 uVar2;
  
  uVar2 = 0;
  SetLastError(0);
  if (param_1 != 0) {
    iVar1 = FUN_140e7d7b0(param_1);
    if (iVar1 == 0) {
      hMem = (HLOCAL)nvDetectDisplayDriverModuleLocationW(param_1);
      if (hMem != (HLOCAL)0x0) {
        uVar2 = nvLoadLibraryFromTrustedLocationExW(hMem,param_2);
        LocalFree(hMem);
      }
      return uVar2;
    }
  }
  SetLastError(0xa0);
  return 0;
}

// nvLoadDisplayDriverModuleExA @ 140e85ab0

undefined8 nvLoadDisplayDriverModuleExA(longlong param_1,undefined4 param_2)

{
  HLOCAL hMem;
  undefined8 uVar1;
  
  uVar1 = 0;
  hMem = (HLOCAL)FUN_140e7d700();
  if ((param_1 == 0) || (hMem != (HLOCAL)0x0)) {
    uVar1 = nvLoadDisplayDriverModuleExW(hMem,param_2);
  }
  LocalFree(hMem);
  return uVar1;
}

