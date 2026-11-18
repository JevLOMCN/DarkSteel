// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// OPENSSL_cpuid_setup @ 14f6f9110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPENSSL_cpuid_setup(void)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  DWORD DVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  
  if (DAT_1553e2c08 == 0) {
    puVar9 = &DAT_1553e2c10;
    DAT_1553e2c08 = 1;
    DVar4 = GetEnvironmentVariableW(L"OPENSSL_ia32cap",&DAT_1553e2c10,0x30);
    sVar2 = DAT_1553e2c10;
    if (DVar4 - 1 < 0x2f) {
      uVar5 = FUN_14f6f99b0(&DAT_1553e2c10 + (DAT_1553e2c10 == 0x7e));
      if (sVar2 == 0x7e) {
        uVar6 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
        uVar8 = ~uVar5;
        uVar3 = uVar5 >> 0x18;
        sVar2 = DAT_1553e2c10;
        uVar5 = uVar6 & uVar8;
        if ((uVar3 & 1) != 0) {
          uVar5 = uVar6 & uVar8 & 0xedfff7fdffffffff;
        }
      }
      else {
        sVar2 = DAT_1553e2c10;
        if (DAT_1553e2c10 == 0x3a) {
          uVar5 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
          sVar2 = DAT_1553e2c10;
        }
      }
      while (sVar2 != 0) {
        if (sVar2 == 0x3a) {
          sVar2 = puVar9[1];
          uVar7 = FUN_14f6f99b0(puVar9 + (ulonglong)(sVar2 == 0x7e) + 1);
          if (sVar2 == 0x7e) {
            _DAT_15540a9f8 = _DAT_15540a9f8 & ~(uint)uVar7;
            _DAT_15540a9fc = _DAT_15540a9fc & ~(uint)((ulonglong)uVar7 >> 0x20);
            uVar7 = _DAT_15540a9f8;
          }
          goto LAB_14f6f9259;
        }
        psVar1 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        sVar2 = *psVar1;
      }
      _DAT_15540a9f8 = 0;
      uVar7 = _DAT_15540a9f8;
    }
    else {
      uVar5 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
      uVar7 = _DAT_15540a9f8;
    }
LAB_14f6f9259:
    _DAT_15540a9f8 = uVar7;
    OPENSSL_ia32cap_P = (uint)uVar5 | 0x400;
    DAT_15540a9f4 = (undefined4)(uVar5 >> 0x20);
  }
  return;
}

// OPENSSL_die @ 14f6f9290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_die(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  OPENSSL_showfatal("%s:%d: OpenSSL internal error: %s\n",param_2,param_3,param_1,0x14f6f929a);
  raise(0x16);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}

// OPENSSL_isservice @ 14f6f92d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong OPENSSL_isservice(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  DWORD DVar4;
  HMODULE hModule;
  ulonglong uVar5;
  HWINSTA hObj;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  puVar7 = auStackY_48;
  local_10 = __security_cookie.value ^ (ulonglong)local_18;
  if (DAT_1553e2c00 == (FARPROC)0x0) {
    uStackY_50 = 0x14f6f930e;
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    if (hModule != (HMODULE)0x0) {
      uStackY_50 = 0x14f6f9323;
      DAT_1553e2c00 = GetProcAddress(hModule,"_OPENSSL_isservice");
      if (DAT_1553e2c00 != (FARPROC)0x0) goto LAB_14f6f932f;
    }
    DAT_1553e2c00 = (FARPROC)0xffffffffffffffff;
  }
  else {
LAB_14f6f932f:
    if (DAT_1553e2c00 != (FARPROC)0xffffffffffffffff) {
      uStackY_50 = 0x14f6f9337;
      uVar5 = (*DAT_1553e2c00)();
      goto LAB_14f6f9427;
    }
  }
  uStackY_50 = 0x14f6f934d;
  hObj = GetProcessWindowStation();
  puVar2 = auStackY_48;
  if (hObj != (HWINSTA)0x0) {
    uStackY_50 = 0x14f6f9375;
    BVar3 = GetUserObjectInformationW(hObj,2,(PVOID)0x0,0,local_18);
    puVar2 = auStackY_48;
    if (BVar3 == 0) {
      uStackY_50 = 0x14f6f9383;
      DVar4 = GetLastError();
      puVar2 = auStackY_48;
      if ((DVar4 == 0x7a) && (puVar2 = auStackY_48, local_18[0] < 0x201)) {
        uVar8 = local_18[0] + 1 & 0xfffffffe;
        local_18[0] = uVar8;
        uVar5 = (ulonglong)uVar8 + 0x11;
        if (uVar5 <= (ulonglong)uVar8 + 2) {
          uVar5 = 0xffffffffffffff0;
        }
        uStackY_50 = 0x14f6f93ce;
        lVar1 = -(uVar5 & 0xfffffffffffffff0);
        puVar7 = auStackY_48 + lVar1;
        pwVar6 = (wchar_t *)((longlong)local_18 + lVar1);
        *(uint **)(&stack0xffffffffffffffd8 + lVar1) = local_18;
        *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x14f6f93f0;
        BVar3 = GetUserObjectInformationW
                          (hObj,2,pwVar6,uVar8,*(LPDWORD *)(&stack0xffffffffffffffd8 + lVar1));
        puVar2 = auStackY_48 + lVar1;
        if (BVar3 != 0) {
          uVar8 = local_18[0] + 1;
          local_18[0] = uVar8 & 0xfffffffe;
          pwVar6[uVar8 >> 1] = L'\0';
          *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x14f6f941a;
          pwVar6 = wcsstr(pwVar6,L"Service-0x");
          uVar5 = (ulonglong)(pwVar6 != (wchar_t *)0x0);
          goto LAB_14f6f9427;
        }
      }
    }
  }
  puVar7 = puVar2;
  uVar5 = 0xffffffff;
LAB_14f6f9427:
  *(undefined8 *)(puVar7 + -8) = 0x14f6f9433;
  return uVar5;
}

// OPENSSL_showfatal @ 14f6f9450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void OPENSSL_showfatal(LPCSTR param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  uint cbMultiByte;
  HANDLE pvVar5;
  ulong64 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  DWORD nNumberOfBytesToWrite;
  LPCSTR lpMultiByteStr;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uStackY_2b0;
  undefined1 auStackY_2a8 [32];
  undefined8 *local_280;
  DWORD local_278 [2];
  undefined8 local_270 [3];
  undefined8 local_258;
  WCHAR local_248 [255];
  undefined2 local_4a;
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f6f9476;
  local_48 = __security_cookie.value ^ (ulonglong)&local_258;
  uStackY_2b0 = 0x14f6f949a;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pvVar5 = GetStdHandle(0xfffffff4);
  if (pvVar5 != (HANDLE)0x0) {
    uStackY_2b0 = 0x14f6f94ab;
    DVar3 = GetFileType(pvVar5);
    if (DVar3 != 0) {
      uStackY_2b0 = 0x14f6f94bb;
      puVar6 = __local_stdio_printf_options();
      uStackY_2b0 = 0x14f6f94e7;
      local_280 = &local_res10;
      DVar3 = __stdio_common_vsprintf(*puVar6 | 1,local_248,0x200,param_1);
      if ((int)DVar3 < 0) {
        DVar3 = 0xffffffff;
      }
      nNumberOfBytesToWrite = 0x200;
      if (-1 < (int)DVar3) {
        nNumberOfBytesToWrite = DVar3;
      }
      uStackY_2b0 = 0x14f6f950e;
      WriteFile(pvVar5,local_248,nNumberOfBytesToWrite,(LPDWORD)&local_258,(LPOVERLAPPED)0x0);
      puVar11 = auStackY_2a8;
      goto LAB_14f6f96dd;
    }
  }
  uStackY_2b0 = 0x14f6f9522;
  lpMultiByteStr = param_1;
  iVar4 = FUN_14f6f9770(param_1);
  cbMultiByte = iVar4 + 1;
  uVar10 = (ulonglong)cbMultiByte;
  uVar7 = (ulonglong)cbMultiByte * 2 + 0xf;
  if (uVar7 <= (ulonglong)cbMultiByte * 2) {
    uVar7 = 0xffffffffffffff0;
  }
  uStackY_2b0 = 0x14f6f9548;
  lVar2 = -(uVar7 & 0xfffffffffffffff0);
  puVar11 = auStackY_2a8 + lVar2;
  uVar7 = 0;
  lVar1 = (longlong)&local_258 + lVar2;
  if (lVar1 != 0) {
    *(uint *)((longlong)local_278 + lVar2 + -8) = cbMultiByte;
    *(longlong *)((longlong)local_270 + lVar2 + -0x18) = lVar1;
    *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f9579;
    iVar4 = MultiByteToWideChar(0,0,lpMultiByteStr,cbMultiByte,
                                *(LPWSTR *)((longlong)local_270 + lVar2 + -0x18),
                                *(int *)((longlong)local_278 + lVar2 + -8));
    if ((iVar4 == 0) && (uVar8 = uVar7, uVar10 != 0)) {
      do {
        *(short *)(lVar1 + uVar8 * 2) = (short)param_1[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar10);
    }
    if (uVar10 != 0) {
      do {
        if (*(short *)(lVar1 + uVar7 * 2) == 0x25) {
          puVar9 = (undefined2 *)((longlong)&local_258 + uVar7 * 2 + lVar2 + 2);
          do {
            switch(*puVar9) {
            case 0x2a:
            case 0x2d:
            case 0x2e:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              uVar7 = uVar7 + 1;
              puVar9 = puVar9 + 1;
              break;
            default:
              goto switchD_14f6f9601_caseD_2b;
            case 0x43:
              *puVar9 = 99;
              goto switchD_14f6f9601_caseD_2b;
            case 0x53:
              *puVar9 = 0x73;
              goto switchD_14f6f9601_caseD_2b;
            case 99:
              *puVar9 = 0x43;
              goto switchD_14f6f9601_caseD_2b;
            case 0x73:
              *puVar9 = 0x53;
              goto switchD_14f6f9601_caseD_2b;
            }
          } while( true );
        }
switchD_14f6f9601_caseD_2b:
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar10);
    }
  }
  *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f9636;
  puVar6 = __local_stdio_printf_options();
  *(undefined8 **)((longlong)local_278 + lVar2 + -8) = &local_res10;
  *(undefined8 *)((longlong)local_270 + lVar2 + -0x18) = 0;
  uVar7 = *puVar6;
  *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f965a;
  __stdio_common_vswprintf(uVar7 | 1,local_248);
  local_4a = 0;
  *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f9666;
  iVar4 = OPENSSL_isservice();
  if (iVar4 < 1) {
    *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f96dd;
    MessageBoxW((HWND)0x0,local_248,L"OpenSSL: FATAL",0x10);
  }
  else {
    *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f9679;
    pvVar5 = RegisterEventSourceW((LPCWSTR)0x0,L"OpenSSL");
    puVar11 = auStackY_2a8 + lVar2;
    if (pvVar5 != (HANDLE)0x0) {
      *(undefined8 *)((longlong)local_270 + lVar2 + 8) = 0;
      local_258 = local_248;
      *(undefined8 **)((longlong)local_270 + lVar2) = &local_258;
      *(undefined4 *)((longlong)local_278 + lVar2) = 0;
      *(undefined2 *)((longlong)local_278 + lVar2 + -8) = 1;
      *(undefined8 *)((longlong)local_270 + lVar2 + -0x18) = 0;
      *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f96bb;
      ReportEventW(pvVar5,1,0,0,*(PSID *)((longlong)local_270 + lVar2 + -0x18),
                   *(WORD *)((longlong)local_278 + lVar2 + -8),
                   *(DWORD *)((longlong)local_278 + lVar2),
                   *(LPCWSTR **)((longlong)local_270 + lVar2),
                   *(LPVOID *)((longlong)local_270 + lVar2 + 8));
      *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x14f6f96c4;
      DeregisterEventSource(pvVar5);
      puVar11 = auStackY_2a8 + lVar2;
    }
  }
LAB_14f6f96dd:
  *(undefined8 *)(puVar11 + -8) = 0x14f6f96ec;
  return;
}

// FUN_14f6f9770 @ 14f6f9770

uint FUN_14f6f9770(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_1;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar2 & 0x7fffffff;
}

// _vsnprintf @ 14f6f97a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,_Dest,_Count,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// _vsnwprintf @ 14f6f9820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl _vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf(*puVar2 | 1,_Dest,_Count,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// _vsnwprintf_l @ 14f6f98a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl
_vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf(*puVar2 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// FUN_14f6f9920 @ 14f6f9920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * FUN_14f6f9920(void)

{
  DWORD DVar1;
  undefined2 *puVar2;
  
  DVar1 = GetEnvironmentVariableW(L"OPENSSL_ia32cap",&DAT_1553e2c10,0x30);
  puVar2 = &DAT_1553e2c10;
  if (0x2e < DVar1 - 1) {
    puVar2 = (undefined2 *)0x0;
  }
  return puVar2;
}

// FUN_14f6f99b0 @ 14f6f99b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6f99b0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  uVar5 = 10;
  puVar4 = param_1;
  if (*param_1 == 0x30) {
    uVar5 = 8;
    puVar4 = param_1 + 1;
    iVar2 = ossl_tolower(param_1[1]);
    if (iVar2 == 0x78) {
      uVar5 = 0x10;
      puVar4 = param_1 + 2;
    }
  }
  while( true ) {
    uVar1 = *puVar4;
    iVar2 = ossl_ctype_check(uVar1,4);
    if (iVar2 == 0) {
      iVar2 = ossl_ctype_check(uVar1,0x10);
      if (iVar2 == 0) {
        uVar3 = 0x10;
      }
      else {
        iVar2 = ossl_tolower(uVar1);
        uVar3 = iVar2 - 0x57;
      }
    }
    else {
      uVar3 = uVar1 - 0x30;
    }
    puVar4 = puVar4 + 1;
    if (uVar5 <= uVar3) break;
    lVar6 = (ulonglong)uVar3 + (ulonglong)uVar5 * lVar6;
  }
  return lVar6;
}

// FUN_14f6f9a70 @ 14f6f9a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6f9a70(ushort param_1)

{
  int iVar1;
  
  iVar1 = ossl_ctype_check(param_1,4);
  if (iVar1 != 0) {
    return param_1 - 0x30;
  }
  iVar1 = ossl_ctype_check(param_1,0x10);
  if (iVar1 != 0) {
    iVar1 = ossl_tolower(param_1);
    return iVar1 + -0x57;
  }
  return 0x10;
}

