// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// FUN_14f777370 @ 14f777370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f777370(longlong param_1)

{
  int iVar1;
  LPCSTR lpLibFileName;
  HMODULE hLibModule;
  HMODULE pHVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f77738a;
  pHVar2 = (HMODULE)0x0;
  lpLibFileName = (LPCSTR)DSO_convert_filename(param_1,0);
  if (lpLibFileName == (LPCSTR)0x0) {
    uVar4 = 0x67;
    uVar3 = 0x6f;
    hLibModule = pHVar2;
  }
  else {
    hLibModule = LoadLibraryA(lpLibFileName);
    if (hLibModule == (HMODULE)0x0) {
      ERR_put_error(0x25,0x78,0x67,"crypto\\dso\\dso_win32.c",0x6c,uVar5);
      ERR_add_error_data(3,"filename(",lpLibFileName,")");
      goto LAB_14f77745d;
    }
    pHVar2 = (HMODULE)CRYPTO_malloc(8,"crypto\\dso\\dso_win32.c");
    if (pHVar2 == (HMODULE)0x0) {
      uVar4 = 0x72;
      uVar3 = 0x41;
    }
    else {
      *(HMODULE *)pHVar2 = hLibModule;
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),pHVar2);
      if (iVar1 != 0) {
        *(LPCSTR *)(param_1 + 0x38) = lpLibFileName;
        return 1;
      }
      uVar4 = 0x77;
      uVar3 = 0x69;
    }
  }
  ERR_put_error(0x25,0x78,uVar3,"crypto\\dso\\dso_win32.c",uVar4,uVar5);
LAB_14f77745d:
  CRYPTO_free(lpLibFileName,"crypto\\dso\\dso_win32.c",0x7f);
  CRYPTO_free(pHVar2,"crypto\\dso\\dso_win32.c",0x80);
  if (hLibModule != (HMODULE)0x0) {
    FreeLibrary(hLibModule);
  }
  return 0;
}

// FUN_14f7774c0 @ 14f7774c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7774c0(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7774cc;
  if (param_1 == 0) {
    ERR_put_error(0x25,0x79,0x43,"crypto\\dso\\dso_win32.c",0x8a,0x14f7774cc);
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 1) {
    return 1;
  }
  puVar3 = (undefined8 *)OPENSSL_sk_pop(*(undefined8 *)(param_1 + 8));
  if (puVar3 == (undefined8 *)0x0) {
    ERR_put_error(0x25,0x79,0x68,"crypto\\dso\\dso_win32.c",0x91,uVar4);
    return 0;
  }
  BVar2 = FreeLibrary((HMODULE)*puVar3);
  if (BVar2 == 0) {
    ERR_put_error(0x25,0x79,0x6b,"crypto\\dso\\dso_win32.c",0x95,uVar4);
    OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),puVar3);
    return 0;
  }
  CRYPTO_free(puVar3,"crypto\\dso\\dso_win32.c",0x9d);
  return 1;
}

// FUN_14f7775d0 @ 14f7775d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

FARPROC FUN_14f7775d0(longlong param_1,LPCSTR param_2)

{
  int iVar1;
  undefined8 *puVar2;
  FARPROC pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7775e0;
  if ((param_1 == 0) || (param_2 == (LPCSTR)0x0)) {
    uVar5 = 0xaa;
    uVar4 = 0x43;
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      uVar5 = 0xae;
      uVar4 = 0x69;
    }
    else {
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
      puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar1 + -1);
      if (puVar2 != (undefined8 *)0x0) {
        pFVar3 = GetProcAddress((HMODULE)*puVar2,param_2);
        if (pFVar3 != (FARPROC)0x0) {
          return pFVar3;
        }
        ERR_put_error(0x25,0x65,0x6a,"crypto\\dso\\dso_win32.c",0xb8,uVar6);
        ERR_add_error_data(3,"symname(",param_2,")");
        return (FARPROC)0x0;
      }
      uVar5 = 0xb3;
      uVar4 = 0x68;
    }
  }
  ERR_put_error(0x25,0x65,uVar4,"crypto\\dso\\dso_win32.c",uVar5,uVar6);
  return (FARPROC)0x0;
}

// FUN_14f7776d0 @ 14f7776d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f7776d0(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *_Format;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f7776e5;
  bVar2 = false;
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = strstr(param_2,"/");
  if (((pcVar4 == (char *)0x0) && (pcVar4 = strstr(param_2,"\\"), pcVar4 == (char *)0x0)) &&
     (pcVar4 = strstr(param_2,":"), pcVar4 == (char *)0x0)) {
    bVar2 = true;
    uVar6 = 0x1d0;
    iVar3 = (uVar5 & 0x7fffffff) + 5;
  }
  else {
    iVar3 = (uVar5 & 0x7fffffff) + 1;
    uVar6 = 0x1d3;
  }
  pcVar4 = (char *)CRYPTO_malloc((longlong)iVar3,"crypto\\dso\\dso_win32.c",uVar6);
  if (pcVar4 != (char *)0x0) {
    _Format = "%s.dll";
    if (!bVar2) {
      _Format = "%s";
    }
    sprintf(pcVar4,_Format,param_2);
    return pcVar4;
  }
  ERR_put_error(0x25,0x7d,0x6d,"crypto\\dso\\dso_win32.c",0x1d5,uVar7);
  return (char *)0x0;
}

// FUN_14f7777e0 @ 14f7777e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7777e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7777fa;
  plVar3 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      ERR_put_error(0x25,0x86,0x43,"crypto\\dso\\dso_win32.c",0x18e,0x14f7777fa);
      return 0;
    }
    lVar2 = CRYPTO_strdup(param_3,"crypto\\dso\\dso_win32.c",0x198);
    plVar4 = plVar3;
    if (lVar2 != 0) goto LAB_14f77799e;
    uVar5 = 0x19a;
  }
  else if (param_3 == 0) {
    lVar2 = CRYPTO_strdup(param_2,"crypto\\dso\\dso_win32.c",0x192);
    if (lVar2 != 0) {
LAB_14f77799e:
      CRYPTO_free(plVar3,"crypto\\dso\\dso_win32.c",0x1c0);
      CRYPTO_free(plVar4,"crypto\\dso\\dso_win32.c",0x1c1);
      return lVar2;
    }
    uVar5 = 0x194;
  }
  else {
    plVar3 = (longlong *)FUN_14f778250(param_1,param_2,0);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_14f778250(param_1,param_3,1);
      if (plVar4 == (longlong *)0x0) {
        ERR_put_error(0x25,0x86,0x41,"crypto\\dso\\dso_win32.c",0x1a5);
        CRYPTO_free(plVar3,"crypto\\dso\\dso_win32.c",0x1a6);
        return 0;
      }
      if ((*plVar3 == 0) && (plVar3[2] == 0)) {
        *plVar3 = *plVar4;
        *(int *)(plVar3 + 1) = (int)plVar4[1];
        plVar3[2] = plVar4[2];
        *(int *)(plVar3 + 3) = (int)plVar4[3];
      }
      if ((char *)plVar3[6] == (char *)0x0) {
        plVar3[6] = plVar4[6];
        *(int *)(plVar3 + 7) = (int)plVar4[7];
      }
      else {
        cVar1 = *(char *)plVar3[6];
        if ((cVar1 != '\\') && (cVar1 != '/')) {
          plVar3[4] = plVar4[6];
          *(int *)(plVar3 + 5) = (int)plVar4[7];
        }
      }
      if (plVar3[8] == 0) {
        plVar3[8] = plVar4[8];
        *(int *)(plVar3 + 9) = (int)plVar4[9];
      }
      lVar2 = FUN_14f777f60(param_1,plVar3);
      goto LAB_14f77799e;
    }
    uVar5 = 0x1a0;
  }
  ERR_put_error(0x25,0x86,0x41,"crypto\\dso\\dso_win32.c",uVar5,uVar6);
  return 0;
}

// FUN_14f7779f0 @ 14f7779f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f7779f0(code *param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  HANDLE hObject;
  INT_PTR IVar7;
  char *pcVar8;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_278 [6];
  code *local_260;
  uint local_258;
  char local_148;
  char local_147 [271];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  if (param_1 == (code *)0x0) {
    param_1 = FUN_14f7779f0;
  }
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    local_288 = 0x20d;
    ERR_put_error(0x25,0x6d,0x6c,"crypto\\dso\\dso_win32.c");
    iVar2 = -1;
  }
  else {
    pFVar4 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
    if (pFVar4 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      local_288 = 0x215;
      ERR_put_error(0x25,0x6d,0x6c,"crypto\\dso\\dso_win32.c");
      iVar2 = -1;
    }
    else {
      pFVar5 = GetProcAddress(hModule,"Module32First");
      pFVar6 = GetProcAddress(hModule,"Module32Next");
      hObject = (HANDLE)(*pFVar4)(8);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        FreeLibrary(hModule);
        local_288 = 0x229;
        ERR_put_error(0x25,0x6d,0x6c,"crypto\\dso\\dso_win32.c");
        iVar2 = -1;
      }
      else {
        local_278[0] = 0x238;
        IVar7 = (*pFVar5)(hObject,local_278);
        if ((int)IVar7 == 0) {
          CloseHandle(hObject);
          FreeLibrary(hModule);
          local_288 = 0x232;
          ERR_put_error(0x25,0x6d,0x72,"crypto\\dso\\dso_win32.c");
          iVar2 = -1;
        }
        else {
          do {
            if ((local_260 <= param_1) && (param_1 < local_260 + local_258)) {
              CloseHandle(hObject);
              FreeLibrary(hModule);
              pcVar8 = &local_148;
              for (uVar3 = 0; (local_148 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
                pcVar8 = pcVar8 + 1;
                local_148 = *pcVar8;
              }
              uVar3 = uVar3 & 0x7fffffff;
              if (param_3 < 1) {
                return uVar3 + 1;
              }
              uVar1 = param_3 - 1;
              if ((int)uVar3 < param_3) {
                uVar1 = uVar3;
              }
              memcpy(param_2,&local_148,(longlong)(int)uVar1);
              *(undefined1 *)((longlong)(int)uVar1 + (longlong)param_2) = 0;
              return uVar1 + 1;
            }
            IVar7 = (*pFVar6)(hObject,local_278);
          } while ((int)IVar7 != 0);
          CloseHandle(hObject);
          FreeLibrary(hModule);
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

// FUN_14f777c70 @ 14f777c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FARPROC FUN_14f777c70(LPCSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  HANDLE hObject;
  INT_PTR IVar4;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_268 [10];
  HMODULE local_240;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    local_278 = 0x270;
    ERR_put_error(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
  }
  else {
    pFVar1 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
    if (pFVar1 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      local_278 = 0x278;
      ERR_put_error(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
    }
    else {
      pFVar2 = GetProcAddress(hModule,"Module32First");
      pFVar3 = GetProcAddress(hModule,"Module32Next");
      hObject = (HANDLE)(*pFVar1)(8);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        FreeLibrary(hModule);
        local_278 = 0x288;
        ERR_put_error(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
      }
      else {
        local_268[0] = 0x238;
        IVar4 = (*pFVar2)(hObject,local_268);
        if ((int)IVar4 == 0) {
          CloseHandle(hObject);
          FreeLibrary(hModule);
        }
        else {
          do {
            pFVar1 = GetProcAddress(local_240,param_1);
            if (pFVar1 != (FARPROC)0x0) {
              CloseHandle(hObject);
              FreeLibrary(hModule);
              return pFVar1;
            }
            IVar4 = (*pFVar3)(hObject,local_268);
          } while ((int)IVar4 != 0);
          CloseHandle(hObject);
          FreeLibrary(hModule);
        }
      }
    }
  }
  return (FARPROC)0x0;
}

// DSO_METHOD_openssl @ 14f777e60

undefined ** DSO_METHOD_openssl(void)

{
  return &PTR_s_OpenSSL__win32__shared_library_m_154df9ad0;
}

// FUN_14f777ee0 @ 14f777ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777ee0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f777f00 @ 14f777f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777f00(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f777f20 @ 14f777f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777f20(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f777f40 @ 14f777f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777f40(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f777f60 @ 14f777f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14f777f60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  char *_Dest;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f777f70;
  iVar1 = 0;
  iVar6 = 0;
  if (param_2 == (longlong *)0x0) {
    ERR_put_error(0x25,0x87,0x43,"crypto\\dso\\dso_win32.c",0x137,0x14f777f70);
    return (char *)0x0;
  }
  if (*param_2 == 0) {
    if (param_2[2] != 0) {
      iVar1 = (int)param_2[3];
      goto LAB_14f777fd4;
    }
  }
  else {
    iVar1 = (int)param_2[1] + 2;
    if (((param_2[4] != 0) || (param_2[6] != 0)) || (param_2[8] != 0)) {
LAB_14f777fd4:
      iVar1 = iVar1 + 1;
    }
  }
  iVar1 = iVar1 + (int)param_2[5];
  if ((param_2[4] != 0) && ((param_2[6] != 0 || (param_2[8] != 0)))) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (int)param_2[7];
  if ((param_2[6] != 0) && (param_2[8] != 0)) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (int)param_2[9];
  if (iVar1 == 0) {
    ERR_put_error(0x25,0x87,0x71,"crypto\\dso\\dso_win32.c",0x14c,0x14f777f70);
    return (char *)0x0;
  }
  _Dest = (char *)CRYPTO_malloc((longlong)(iVar1 + 1),"crypto\\dso\\dso_win32.c",0x150);
  if (_Dest == (char *)0x0) {
    ERR_put_error(0x25,0x87,0x41,"crypto\\dso\\dso_win32.c",0x152,uVar8);
    return (char *)0x0;
  }
  if (*param_2 == 0) {
    if ((char *)param_2[2] == (char *)0x0) goto LAB_14f7780fe;
    strncpy(_Dest,(char *)param_2[2],(longlong)(int)param_2[3]);
    iVar6 = (int)param_2[3];
    _Dest[iVar6] = ':';
  }
  else {
    *(undefined2 *)_Dest = _s___;
    _Dest[2] = DAT_1534ba9f6;
    strncpy(_Dest + 2,(char *)*param_2,(longlong)(int)param_2[1]);
    iVar6 = (int)param_2[1] + 2;
    if (((param_2[4] == 0) && (param_2[6] == 0)) && (param_2[8] == 0)) goto LAB_14f7780fe;
    _Dest[iVar6] = '\\';
  }
  iVar6 = iVar6 + 1;
LAB_14f7780fe:
  pcVar2 = (char *)param_2[4];
  lVar3 = (longlong)(int)param_2[5];
  pcVar7 = pcVar2;
  if (0 < lVar3) {
    do {
      pcVar2 = pcVar2 + lVar3;
      pcVar5 = pcVar2;
      if (pcVar2 != pcVar7) {
        pcVar4 = pcVar7;
        do {
          pcVar5 = pcVar2;
          if ((*pcVar4 == '\0') || (pcVar5 = pcVar4, *pcVar4 == '/')) break;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar2;
        } while ((ulonglong)((longlong)pcVar4 - (longlong)pcVar7) <
                 (ulonglong)((longlong)pcVar2 - (longlong)pcVar7));
      }
      strncpy(_Dest + iVar6,pcVar7,(longlong)pcVar5 - (longlong)pcVar7);
      iVar1 = (int)pcVar7;
      pcVar7 = pcVar5 + 1;
      iVar1 = iVar6 + ((int)pcVar5 - iVar1);
      iVar6 = iVar1 + 1;
      _Dest[iVar1] = '\\';
      pcVar2 = (char *)param_2[4];
      lVar3 = (longlong)(int)param_2[5];
    } while ((longlong)pcVar7 - (longlong)pcVar2 < lVar3);
  }
  pcVar2 = (char *)param_2[6];
  lVar3 = (longlong)(int)param_2[7];
  pcVar7 = pcVar2;
  if (0 < lVar3) {
    do {
      pcVar2 = pcVar2 + lVar3;
      pcVar5 = pcVar2;
      if (pcVar2 != pcVar7) {
        pcVar4 = pcVar7;
        do {
          pcVar5 = pcVar2;
          if ((*pcVar4 == '\0') || (pcVar5 = pcVar4, *pcVar4 == '/')) break;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar2;
        } while ((ulonglong)((longlong)pcVar4 - (longlong)pcVar7) <
                 (ulonglong)((longlong)pcVar2 - (longlong)pcVar7));
      }
      strncpy(_Dest + iVar6,pcVar7,(longlong)pcVar5 - (longlong)pcVar7);
      iVar1 = (int)pcVar7;
      pcVar7 = pcVar5 + 1;
      iVar1 = iVar6 + ((int)pcVar5 - iVar1);
      iVar6 = iVar1 + 1;
      _Dest[iVar1] = '\\';
      pcVar2 = (char *)param_2[6];
      lVar3 = (longlong)(int)param_2[7];
    } while ((longlong)pcVar7 - (longlong)pcVar2 < lVar3);
  }
  strncpy(_Dest + iVar6,(char *)param_2[8],(longlong)(int)param_2[9]);
  _Dest[(int)param_2[9] + iVar6] = '\0';
  return _Dest;
}

// FUN_14f778250 @ 14f778250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f778250(undefined8 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f778265;
  if (param_2 == (char *)0x0) {
    ERR_put_error(0x25,0x88,0x6f,"crypto\\dso\\dso_win32.c",0xd5,0x14f778265);
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)CRYPTO_zalloc(0x50,"crypto\\dso\\dso_win32.c",0xd9);
  if (puVar3 == (undefined8 *)0x0) {
    ERR_put_error(0x25,0x88,0x41,"crypto\\dso\\dso_win32.c",0xdb,uVar7);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (((*param_2 == '\\') && (param_2[1] == '\\')) ||
       ((pcVar6 = param_2, iVar4 = 1, *param_2 == '/' && (param_2[1] == '/')))) {
      param_2 = param_2 + 2;
      *puVar3 = param_2;
      pcVar6 = param_2;
      iVar4 = 0;
    }
    while( true ) {
      cVar1 = *param_2;
      iVar5 = (int)param_2;
      iVar2 = (int)pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '/') {
LAB_14f77835a:
        if (iVar4 == 0) {
          iVar4 = 2;
          param_2 = param_2 + 1;
          *(int *)(puVar3 + 1) = iVar5 - iVar2;
          puVar3[6] = param_2;
          pcVar6 = param_2;
        }
        else {
          param_2 = param_2 + 1;
          iVar2 = (int)param_2 - iVar2;
          if (iVar4 == 1) {
            iVar4 = 2;
            puVar3[6] = pcVar6;
            *(int *)(puVar3 + 7) = iVar2;
            pcVar6 = param_2;
          }
          else {
            *(int *)(puVar3 + 7) = *(int *)(puVar3 + 7) + iVar2;
            pcVar6 = param_2;
          }
        }
      }
      else if (cVar1 == ':') {
        if (iVar4 != 1) {
          ERR_put_error(0x25,0x88,0x73,"crypto\\dso\\dso_win32.c",0xee,uVar7);
          CRYPTO_free(puVar3,"crypto\\dso\\dso_win32.c",0xef);
          return (undefined8 *)0x0;
        }
        puVar3[2] = pcVar6;
        iVar4 = 2;
        param_2 = param_2 + 1;
        *(int *)(puVar3 + 3) = iVar5 - iVar2;
        puVar3[6] = param_2;
        pcVar6 = param_2;
      }
      else {
        if (cVar1 == '\\') goto LAB_14f77835a;
        param_2 = param_2 + 1;
      }
    }
    if (iVar4 == 0) {
      *(int *)(puVar3 + 1) = iVar5 - iVar2;
    }
    else if (param_2 != pcVar6 && -1 < (longlong)param_2 - (longlong)pcVar6) {
      if (param_3 == 0) {
        puVar3[8] = pcVar6;
        *(int *)(puVar3 + 9) = iVar5 - iVar2;
      }
      else {
        if (iVar4 == 1) {
          puVar3[6] = pcVar6;
          *(undefined4 *)(puVar3 + 7) = 0;
        }
        *(int *)(puVar3 + 7) = *(int *)(puVar3 + 7) + (iVar5 - iVar2);
      }
    }
    if (*(int *)(puVar3 + 1) == 0) {
      *puVar3 = 0;
    }
    if (*(int *)(puVar3 + 3) == 0) {
      puVar3[2] = 0;
    }
    if (*(int *)(puVar3 + 7) == 0) {
      puVar3[6] = 0;
    }
    if (*(int *)(puVar3 + 9) == 0) {
      puVar3[8] = 0;
    }
  }
  return puVar3;
}

