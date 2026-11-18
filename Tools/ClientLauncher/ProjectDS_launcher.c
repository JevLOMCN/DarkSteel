/*
 * Source: F:\Mir5\Client31.12.25\Windows\ProjectDS.exe (Epic BootstrapPackagedGame launcher stub, x86-64, base 0x140000000)
 * SHA-256: d62f3e9d2d0834f04a79855202594a88b31e2bbe2216e87f7f6aed42504ea68e
 * Ghidra 12.1.4 via REA. Decompiler output, not buildable.
 */

// FUN_140001000 @ 0x140001000
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140001000(LPCWSTR param_1,LPCWSTR param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  LSTATUS LVar6;
  DWORD DVar7;
  BOOL BVar8;
  int iVar9;
  undefined8 uVar10;
  HMODULE pHVar11;
  FARPROC pFVar12;
  INT_PTR IVar13;
  LPVOID pvVar14;
  short *psVar15;
  LPWSTR pWVar16;
  void *lpData;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_1748 [32];
  DWORD local_1718 [2];
  undefined8 local_1710;
  undefined8 local_1708;
  undefined8 local_1700;
  undefined8 local_16f8;
  SHELLEXECUTEINFOW local_16e8;
  WCHAR local_1678 [264];
  WCHAR local_1468 [264];
  WCHAR local_1258 [264];
  WCHAR local_1048 [1024];
  short local_848 [1024];
  ulonglong local_48;
  ulonglong uVar21;
  
  local_48 = DAT_140022040 ^ (ulonglong)auStackY_1748;
  FUN_140014d10((undefined1 (*) [32])local_848,0,0x800);
  uVar21 = 0;
  local_1700 = (HKEY)0x0;
  local_16f8 = 0;
  uVar10 = FUN_1400018c0(param_2,L"msvcp140_2.dll",(uint *)&local_1700);
  if ((char)uVar10 != '\0') {
    if ((uint)local_1700 < 0xf) {
      if ((uint)local_1700 == 0xe) {
        if ((0x28 < local_1700._4_4_) || ((local_1700._4_4_ == 0x28 && (0x8411 < (uint)local_16f8)))
           ) goto LAB_14000109a;
      }
    }
    else {
LAB_14000109a:
      uVar10 = FUN_1400019d0(param_2,L"msvcp140_2.dll");
      if ((char)uVar10 != '\0') {
        local_1700 = (HKEY)0x0;
        local_16f8 = 0;
        uVar10 = FUN_1400018c0(param_2,L"vcruntime140_1.dll",(uint *)&local_1700);
        if ((char)uVar10 != '\0') {
          if ((uint)local_1700 < 0xf) {
            if ((uint)local_1700 == 0xe) {
              if ((0x28 < local_1700._4_4_) ||
                 ((local_1700._4_4_ == 0x28 && (0x8411 < (uint)local_16f8)))) goto LAB_1400010e8;
            }
          }
          else {
LAB_1400010e8:
            uVar10 = FUN_1400019d0(param_2,L"vcruntime140_1.dll");
            if ((char)uVar10 != '\0') goto LAB_140001692;
          }
        }
      }
    }
  }
  pHVar11 = GetModuleHandleW(L"kernel32.dll");
  if ((pHVar11 != (HMODULE)0x0) &&
     (pFVar12 = GetProcAddress(pHVar11,"GetCurrentPackageInfo"), pFVar12 != (FARPROC)0x0)) {
    local_1710 = (LPVOID)((ulonglong)local_1710 & 0xffffffff00000000);
    IVar13 = (*pFVar12)(0x20,&local_1710);
    if ((int)IVar13 == 0x7a) {
      local_1718[0] = 0;
      pvVar14 = _malloc_base((ulonglong)local_1710 & 0xffffffff);
      IVar13 = (*pFVar12)(0x20,&local_1710,pvVar14,local_1718);
      if ((((int)IVar13 == 0) && (pvVar14 != (LPVOID)0x0)) && (local_1718[0] != 0)) {
        do {
          psVar15 = *(short **)((longlong)pvVar14 + uVar21 * 0x50 + 0x18);
          lVar19 = (longlong)PTR_u_Microsoft_VCLibs_140_00_UWPDeskt_140022000 - (longlong)psVar15;
          do {
            sVar1 = *psVar15;
            sVar2 = *(short *)((longlong)psVar15 + lVar19);
            if (sVar1 != sVar2) break;
            psVar15 = psVar15 + 1;
          } while (sVar2 != 0);
          if (sVar1 == sVar2) {
            FUN_1400064a8(pvVar14);
            goto LAB_140001692;
          }
          uVar20 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar20;
        } while (uVar20 < local_1718[0]);
      }
      FUN_1400064a8(pvVar14);
    }
  }
  LVar6 = RegOpenKeyExW((HKEY)0xffffffff80000002,
                        L"SOFTWARE\\Microsoft\\VisualStudio\\14.0\\VC\\Runtimes\\x64",0,0x20019,
                        (PHKEY)&local_1700);
  if (LVar6 == 0) {
    local_1718[0] = 0;
    local_1710._0_4_ = 4;
    LVar6 = RegQueryValueExW(local_1700,L"Major",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_1718,
                             (LPDWORD)&local_1710);
    local_1710._0_4_ = 4;
    uVar20 = 0;
    if (LVar6 == 0) {
      uVar20 = local_1718[0];
    }
    local_1718[0] = 0;
    LVar6 = RegQueryValueExW(local_1700,L"Minor",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_1718,
                             (LPDWORD)&local_1710);
    local_1710._0_4_ = 4;
    uVar18 = 0;
    if (LVar6 == 0) {
      uVar18 = local_1718[0];
    }
    local_1718[0] = 0;
    LVar6 = RegQueryValueExW(local_1700,L"Bld",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_1718,
                             (LPDWORD)&local_1710);
    local_1710 = (LPVOID)((ulonglong)local_1710._4_4_ << 0x20);
    uVar17 = 0;
    if (LVar6 == 0) {
      uVar17 = local_1718[0];
    }
    local_1718[0] = 4;
    RegQueryValueExW(local_1700,L"Rbld",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&local_1710,local_1718);
    RegCloseKey(local_1700);
    if ((0xe < uVar20) ||
       ((uVar20 == 0xe &&
        ((0x28 < uVar18 || ((uVar18 == 0x28 && ((0x8412 < uVar17 || (uVar17 == 0x8412)))))))))) {
      FUN_140014d10((undefined1 (*) [32])local_1258,0,0x208);
      GetEnvironmentVariableW(L"SystemRoot",local_1258,0x104);
      FUN_140014d10((undefined1 (*) [32])local_1468,0,0x208);
      PathCombineW(local_1468,local_1258,L"system32");
      pWVar16 = PathCombineW(local_1678,local_1468,L"msvcp140_2.dll");
      if ((pWVar16 == (LPWSTR)0x0) ||
         (DVar7 = GetFileVersionInfoSizeW(local_1678,(LPDWORD)0x0), DVar7 == 0)) goto LAB_1400015ca;
      lpData = operator_new((ulonglong)DVar7);
      BVar8 = GetFileVersionInfoW(local_1678,0,DVar7,lpData);
      if (BVar8 == 0) {
LAB_1400015c2:
        thunk_FUN_1400064a8(lpData);
      }
      else {
        local_1710 = (LPVOID)0x0;
        local_1718[0] = 0;
        BVar8 = VerQueryValueW(lpData,L"\\",(LPVOID *)&local_1710,local_1718);
        if ((BVar8 == 0) && (local_1718[0] != 0)) goto LAB_1400015c2;
        uVar3 = *(ushort *)((longlong)local_1710 + 10);
        uVar4 = *(ushort *)((longlong)local_1710 + 8);
        uVar5 = *(ushort *)((longlong)local_1710 + 0xe);
        thunk_FUN_1400064a8(lpData);
        if ((((0xe < uVar3) ||
             ((uVar3 == 0xe && ((0x28 < uVar4 || ((uVar4 == 0x28 && (0x8411 < uVar5)))))))) &&
            (pWVar16 = PathCombineW(local_1048,local_1468,L"msvcp140_2.dll"), pWVar16 != (LPWSTR)0x0
            )) && (pHVar11 = LoadLibraryW(local_1048), pHVar11 != (HMODULE)0x0)) {
          FreeLibrary(pHVar11);
          pWVar16 = PathCombineW(local_1678,local_1468,L"vcruntime140_1.dll");
          if ((pWVar16 != (LPWSTR)0x0) &&
             (DVar7 = GetFileVersionInfoSizeW(local_1678,(LPDWORD)0x0), DVar7 != 0)) {
            lpData = operator_new((ulonglong)DVar7);
            BVar8 = GetFileVersionInfoW(local_1678,0,DVar7,lpData);
            if (BVar8 != 0) {
              local_1710 = (LPVOID)0x0;
              local_1718[0] = 0;
              BVar8 = VerQueryValueW(lpData,L"\\",(LPVOID *)&local_1710,local_1718);
              if ((BVar8 != 0) || (local_1718[0] == 0)) {
                uVar3 = *(ushort *)((longlong)local_1710 + 10);
                uVar4 = *(ushort *)((longlong)local_1710 + 8);
                uVar5 = *(ushort *)((longlong)local_1710 + 0xe);
                thunk_FUN_1400064a8(lpData);
                if (((0xe < uVar3) ||
                    ((uVar3 == 0xe && ((0x28 < uVar4 || ((uVar4 == 0x28 && (0x8411 < uVar5))))))))
                   && ((pWVar16 = PathCombineW(local_1048,local_1468,L"vcruntime140_1.dll"),
                       pWVar16 != (LPWSTR)0x0 &&
                       (pHVar11 = LoadLibraryW(local_1048), pHVar11 != (HMODULE)0x0)))) {
                  FreeLibrary(pHVar11);
                  goto LAB_140001692;
                }
                goto LAB_1400015ca;
              }
            }
            goto LAB_1400015c2;
          }
        }
      }
LAB_1400015ca:
      local_1710 = (LPVOID)0x0;
      local_1708 = 0;
      uVar10 = FUN_1400018c0((LPCWSTR)0x0,L"msvcp140_2.dll",(uint *)&local_1710);
      if ((char)uVar10 != '\0') {
        if ((DWORD)local_1710 < 0xf) {
          if ((DWORD)local_1710 == 0xe) {
            if ((0x28 < local_1710._4_4_) ||
               ((local_1710._4_4_ == 0x28 && (0x8411 < (uint)local_1708)))) goto LAB_140001604;
          }
        }
        else {
LAB_140001604:
          uVar10 = FUN_1400019d0((LPCWSTR)0x0,L"msvcp140_2.dll");
          if ((char)uVar10 != '\0') {
            local_1710 = (LPVOID)0x0;
            local_1708 = 0;
            uVar10 = FUN_1400018c0((LPCWSTR)0x0,L"vcruntime140_1.dll",(uint *)&local_1710);
            if ((char)uVar10 != '\0') {
              if ((DWORD)local_1710 < 0xf) {
                if ((DWORD)local_1710 == 0xe) {
                  if ((0x28 < local_1710._4_4_) ||
                     ((local_1710._4_4_ == 0x28 && (0x8411 < (uint)local_1708))))
                  goto LAB_140001650;
                }
              }
              else {
LAB_140001650:
                uVar10 = FUN_1400019d0((LPCWSTR)0x0,L"vcruntime140_1.dll");
                if ((char)uVar10 != '\0') goto LAB_140001692;
              }
            }
          }
        }
      }
    }
  }
  FUN_140006430(local_848,0x400,0x1400165c8);
LAB_140001692:
  if (local_848[0] != 0) {
    wsprintfW(local_1048,L"The following component(s) are required to run this program:\n\n%s",
              local_848);
    PathCombineW(local_1678,param_1,L"Engine\\Extras\\Redist\\en-us\\UEPrereqSetup_x64.exe");
    DVar7 = GetFileAttributesW(local_1678);
    if (DVar7 == 0xffffffff) {
      MessageBoxW((HWND)0x0,local_1048,(LPCWSTR)0x0,0);
      return 0x2329;
    }
    FUN_140006430(local_1048,0x400,0x140016710);
    iVar9 = MessageBoxW((HWND)0x0,local_1048,(LPCWSTR)0x0,4);
    if (iVar9 == 7) {
      return 0x232a;
    }
    local_16e8.lpFile = local_1678;
    local_16e8.hwnd = (HWND)0x0;
    local_16e8.lpVerb = (LPCWSTR)0x0;
    local_16e8.cbSize = 0x70;
    local_16e8.fMask = 0x40;
    local_16e8.hInstApp = (HINSTANCE)0x0;
    local_16e8.nShow = 1;
    local_16e8._52_4_ = 0;
    local_16e8.lpParameters = (LPCWSTR)0x0;
    local_16e8.lpDirectory = (LPCWSTR)0x0;
    local_16e8.lpIDList = (void *)0x0;
    local_16e8.lpClass = (LPCWSTR)0x0;
    local_16e8.hkeyClass = (HKEY)0x0;
    local_16e8.dwHotKey = 0;
    local_16e8._92_4_ = 0;
    local_16e8.u.hIcon = (HANDLE)0x0;
    local_16e8.hProcess = (HANDLE)0x0;
    BVar8 = ShellExecuteExW(&local_16e8);
    if (BVar8 == 0) {
      return 0x232b;
    }
    local_1718[0] = 0;
    WaitForSingleObject(local_16e8.hProcess,0xffffffff);
    GetExitCodeProcess(local_16e8.hProcess,local_1718);
    CloseHandle(local_16e8.hProcess);
    if (local_1718[0] != 0) {
      return 0x232c;
    }
  }
  return 0;
}

// FUN_140001800 @ 0x140001800
undefined8 * FUN_140001800(HMODULE param_1,LPCWSTR param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  DWORD DVar3;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined8 *puVar4;
  __uint64 _Var5;
  undefined8 *puVar6;
  
  hResInfo = FindResourceW(param_1,param_2,(LPCWSTR)0xa);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(param_1,hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      puVar4 = LockResource(hResData);
      DVar3 = SizeofResource(param_1,hResInfo);
      auVar1 = ZEXT816(2) * ZEXT416((DVar3 >> 1) + 1);
      _Var5 = auVar1._0_8_;
      if (auVar1._8_8_ != 0) {
        _Var5 = 0xffffffffffffffff;
      }
      puVar6 = operator_new(_Var5);
      uVar2 = (ulonglong)(DVar3 >> 1) * 2;
      FUN_140014670(puVar6,puVar4,uVar2);
      *(undefined2 *)(uVar2 + (longlong)puVar6) = 0;
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}

// FUN_1400018c0 @ 0x1400018c0
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1400018c0(LPCWSTR param_1,LPCWSTR param_2,uint *param_3)

{
  DWORD dwLen;
  BOOL BVar1;
  LPWSTR pWVar2;
  undefined4 extraout_var;
  void *lpData;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_268 [32];
  uint local_248 [2];
  LPVOID local_240;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_140022040 ^ (ulonglong)auStack_268;
  pWVar2 = PathCombineW(local_238,param_1,param_2);
  uVar4 = 0;
  if (pWVar2 != (LPWSTR)0x0) {
    dwLen = GetFileVersionInfoSizeW(local_238,(LPDWORD)0x0);
    uVar4 = CONCAT44(extraout_var,dwLen);
    if (dwLen != 0) {
      lpData = operator_new((ulonglong)dwLen);
      BVar1 = GetFileVersionInfoW(local_238,0,dwLen,lpData);
      if (BVar1 != 0) {
        local_240 = (LPVOID)0x0;
        local_248[0] = 0;
        BVar1 = VerQueryValueW(lpData,L"\\",&local_240,local_248);
        if ((BVar1 != 0) || (local_248[0] == 0)) {
          *param_3 = (uint)*(ushort *)((longlong)local_240 + 10);
          param_3[1] = (uint)*(ushort *)((longlong)local_240 + 8);
          param_3[2] = (uint)*(ushort *)((longlong)local_240 + 0xe);
          param_3[3] = (uint)*(ushort *)((longlong)local_240 + 0xc);
          uVar3 = thunk_FUN_1400064a8(lpData);
          return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        }
      }
      uVar4 = thunk_FUN_1400064a8(lpData);
      return uVar4 & 0xffffffffffffff00;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

// FUN_1400019d0 @ 0x1400019d0
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1400019d0(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  LPWSTR pWVar2;
  HMODULE hLibModule;
  undefined4 extraout_var;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140022040 ^ (ulonglong)auStack_248;
  pWVar2 = PathCombineW(local_228,param_1,param_2);
  if (pWVar2 != (LPWSTR)0x0) {
    hLibModule = LoadLibraryW(local_228);
    if (hLibModule != (HMODULE)0x0) {
      BVar1 = FreeLibrary(hLibModule);
      return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
    }
  }
  return 0;
}

// FUN_140001a50 @ 0x140001a50
undefined * FUN_140001a50(void)

{
  return &DAT_140022b50;
}

// FUN_140001a60 @ 0x140001a60
ulonglong FUN_140001a60(undefined2 *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_140001a50();
  uVar2 = FUN_1400088b0(*puVar1,param_1,param_2,param_3,(undefined4 *)0x0,&local_res20);
  uVar3 = uVar2 & 0xffffffff;
  if ((int)uVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

// FUN_140001ac0 @ 0x140001ac0
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140001ac0(HMODULE param_1,undefined8 param_2,longlong param_3)

{
  short *psVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  longlong lVar8;
  __uint64 _Var9;
  LPCWSTR pWVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  LPWSTR lpCommandLine;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_748 [32];
  DWORD local_6f8 [2];
  _PROCESS_INFORMATION local_6f0;
  _STARTUPINFOW local_6d8;
  WCHAR local_668;
  short asStack_666 [263];
  WCHAR local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_140022040 ^ (ulonglong)auStackY_748;
  GetModuleFileNameW(param_1,local_248,0x104);
  PathCanonicalizeW(&local_668,local_248);
  PathRemoveFileSpecW(&local_668);
  puVar7 = FUN_140001800(param_1,(LPCWSTR)0xc9);
  if (puVar7 == (undefined8 *)0x0) {
    MessageBoxW((HWND)0x0,
                L"This program is used for packaged games and is not meant to be run directly.",
                (LPCWSTR)0x0,0);
    return 9000;
  }
  lVar8 = -1;
  do {
    lVar12 = lVar8;
    lVar8 = lVar12 + 1;
  } while (*(short *)((longlong)puVar7 + lVar8 * 2) != 0);
  lVar8 = -1;
  do {
    lVar14 = lVar8 + 1;
    psVar1 = asStack_666 + lVar8;
    lVar8 = lVar14;
  } while (*psVar1 != 0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = lVar14 + lVar12 + 0x15;
  _Var9 = SUB168(ZEXT816(2) * auVar2,0);
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    _Var9 = 0xffffffffffffffff;
  }
  pWVar10 = operator_new(_Var9);
  wsprintfW(pWVar10,L"%s\\%s");
  PathCanonicalizeW(local_458,pWVar10);
  thunk_FUN_1400064a8(pWVar10);
  PathRemoveFileSpecW(local_458);
  puVar11 = FUN_140001800(param_1,(LPCWSTR)0xca);
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (*(short *)(param_3 + lVar8 * 2) != 0);
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(short *)((longlong)puVar11 + lVar12 * 2) != 0);
  lVar14 = -1;
  do {
    lVar14 = lVar14 + 1;
  } while (*(short *)((longlong)puVar7 + lVar14 * 2) != 0);
  lVar5 = -1;
  do {
    lVar13 = lVar5;
    lVar5 = lVar13 + 1;
  } while (asStack_666[lVar13] != 0);
  uVar15 = lVar13 + 0x15 + lVar8 + lVar12 + lVar14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar15;
  _Var9 = SUB168(ZEXT816(2) * auVar3,0);
  if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
    _Var9 = 0xffffffffffffffff;
  }
  lpCommandLine = operator_new(_Var9);
  FUN_140001a60(lpCommandLine,uVar15,0x140016870,&local_668);
  thunk_FUN_1400064a8(puVar11);
  thunk_FUN_1400064a8(puVar7);
  uVar15 = FUN_140001000(&local_668,local_458);
  uVar16 = uVar15 & 0xffffffff;
  if ((int)uVar15 == 0) {
    local_6d8.cb = 0x68;
    local_6d8.hStdError._4_4_ = 0;
    local_6f0.dwProcessId = 0;
    local_6f0.dwThreadId = 0;
    local_6d8._4_8_ = 0;
    local_6d8._12_8_ = 0;
    local_6d8._20_8_ = 0;
    local_6d8._28_8_ = 0;
    local_6d8.dwY = 0;
    local_6d8.dwXSize = 0;
    local_6d8.dwYSize = 0;
    local_6d8.dwXCountChars = 0;
    local_6d8.dwYCountChars = 0;
    local_6d8.dwFillAttribute = 0;
    local_6d8.dwFlags = 0;
    local_6d8.wShowWindow = 0;
    local_6d8.cbReserved2 = 0;
    local_6d8._68_8_ = 0;
    local_6d8._76_8_ = 0;
    local_6d8._84_8_ = 0;
    local_6d8._92_8_ = 0;
    local_6f0.hProcess = (HANDLE)0x0;
    local_6f0.hThread = (HANDLE)0x0;
    BVar6 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,1,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_6d8,
                           &local_6f0);
    if (BVar6 == 0) {
      GetLastError();
      lVar8 = -1;
      do {
        lVar12 = lVar8;
        lVar8 = lVar12 + 1;
      } while (lpCommandLine[lVar8] != L'\0');
      auVar4._8_8_ = 0;
      auVar4._0_8_ = lVar12 + 0x33;
      _Var9 = SUB168(ZEXT816(2) * auVar4,0);
      if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
        _Var9 = 0xffffffffffffffff;
      }
      pWVar10 = operator_new(_Var9);
      wsprintfW(pWVar10,L"Couldn\'t start:\n%s\nCreateProcess() returned %x.");
      MessageBoxW((HWND)0x0,pWVar10,(LPCWSTR)0x0,0);
      thunk_FUN_1400064a8(pWVar10);
      thunk_FUN_1400064a8(lpCommandLine);
      return 0x232d;
    }
    WaitForSingleObject(local_6f0.hProcess,0xffffffff);
    local_6f8[0] = 0x232e;
    GetExitCodeProcess(local_6f0.hProcess,local_6f8);
    CloseHandle(local_6f0.hThread);
    CloseHandle(local_6f0.hProcess);
    uVar16 = (ulonglong)local_6f8[0];
    if (local_6f8[0] == 0) {
      thunk_FUN_1400064a8(lpCommandLine);
      return 0;
    }
  }
  thunk_FUN_1400064a8(lpCommandLine);
  return uVar16;
}

// VERSION.DLL::GetFileVersionInfoSizeW @ 0x140001e2d
DWORD __stdcall GetFileVersionInfoSizeW(LPCWSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140001e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeW(lptstrFilename,lpdwHandle);
  return DVar1;
}

// VERSION.DLL::GetFileVersionInfoW @ 0x140001e33
BOOL __stdcall GetFileVersionInfoW(LPCWSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140001e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoW(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}

// VERSION.DLL::VerQueryValueW @ 0x140001e39
BOOL __stdcall VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140001e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueW(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}

// FUN_140001e40 @ 0x140001e40
undefined8 FUN_140001e40(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140001a50();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_140001e60();
  *puVar1 = *puVar1 | 2;
  return 0;
}

// FUN_140001e60 @ 0x140001e60
undefined * FUN_140001e60(void)

{
  return &DAT_140022b58;
}

// operator_new @ 0x140001e68
void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  void *pvVar4;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return pvVar3;
    }
    bVar2 = FUN_140009898(param_1);
  } while ((int)CONCAT71(extraout_var,bVar2) != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_140002b3c();
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FUN_140002b1c();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}

// thunk_FUN_1400064a8 @ 0x140001e70
void thunk_FUN_1400064a8(LPVOID param_1)

{
  FUN_14000a4d4(param_1);
  return;
}

// __GSHandlerCheck @ 0x140001e78
/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}

// __GSHandlerCheckCommon @ 0x140001e98
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)(*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0);
  }
  return uVar1;
}

// __chkstk @ 0x140001f10
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}

// __security_check_cookie @ 0x140001f70
/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140022040) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_140002274();
  return;
}

// FUN_140001f90 @ 0x140001f90
void FUN_140001f90(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined7 extraout_var;
  
  FUN_140008c98(2);
  uVar4 = FUN_1400026b4();
  _set_fmode((int)uVar4);
  uVar4 = FUN_1400026a8();
  puVar5 = (undefined4 *)FUN_140009888();
  *puVar5 = (int)uVar4;
  uVar4 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar4 != '\0') {
    FUN_140002960();
    atexit(FUN_14000299c);
    uVar4 = FUN_1400026ac();
    uVar6 = _configure_wide_argv((int)uVar4);
    if ((int)uVar6 == 0) {
      FUN_1400026bc();
      bVar2 = FUN_1400026f0();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        FUN_140008d04(0x1400026a8);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar4 = FUN_1400026a8();
      _configthreadlocale((int)uVar4);
      cVar3 = FUN_1400026cc();
      if (cVar3 != '\0') {
        thunk_FUN_1400090b4();
      }
      FUN_1400026a8();
      uVar4 = thunk_FUN_1400026a8();
      if ((int)uVar4 == 0) {
        return;
      }
    }
  }
  FUN_140002714(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// FUN_140002048 @ 0x140002048
undefined8 FUN_140002048(void)

{
  FUN_1400026d4();
  return 0;
}

// FUN_140002058 @ 0x140002058
void FUN_140002058(void)

{
  undefined8 uVar1;
  
  FUN_1400028f4();
  uVar1 = FUN_1400026a8();
  FUN_14000985c((uint)uVar1);
  return;
}

// __scrt_common_main_seh @ 0x140002074
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    int __cdecl __scrt_common_main_seh(void)
   
   Library: Visual Studio 2019 Release */

int __cdecl __scrt_common_main_seh(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ushort *puVar7;
  UINT UVar8;
  undefined8 unaff_RBX;
  
  UVar8 = (UINT)unaff_RBX;
  uVar2 = FUN_1400023f8(1);
  if ((char)uVar2 == '\0') {
    FUN_140002714(7);
  }
  else {
    bVar1 = false;
    uVar2 = __scrt_acquire_startup_lock();
    UVar8 = (UINT)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar2);
    if (DAT_1400230d0 != 1) {
      if (DAT_1400230d0 == 0) {
        DAT_1400230d0 = 1;
        uVar3 = FUN_1400093a0((undefined8 *)&DAT_140016368,(undefined8 *)&DAT_1400163a8);
        if ((int)uVar3 != 0) {
          return 0xff;
        }
        FUN_14000935c((undefined8 *)&DAT_140016350,(undefined8 *)&DAT_140016360);
        DAT_1400230d0 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock((char)uVar2);
      plVar4 = (longlong *)FUN_1400026fc();
      if ((*plVar4 != 0) && (uVar5 = FUN_1400024c0((longlong)plVar4), (char)uVar5 != '\0')) {
        (*(code *)*plVar4)(0);
      }
      puVar6 = (ulonglong *)FUN_140002704();
      if ((*puVar6 != 0) && (uVar5 = FUN_1400024c0((longlong)puVar6), (char)uVar5 != '\0')) {
        FUN_1400096b0(*puVar6);
      }
      __scrt_get_show_window_mode();
      puVar7 = _get_wide_winmain_command_line();
      uVar5 = FUN_140001ac0((HMODULE)&IMAGE_DOS_HEADER_140000000,0,(longlong)puVar7);
      UVar8 = (UINT)uVar5;
      uVar5 = FUN_1400028a0();
      if ((char)uVar5 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(true,'\0');
        return UVar8;
      }
      goto LAB_1400021d5;
    }
  }
  FUN_140002714(7);
LAB_1400021d5:
  FUN_1400096f0(UVar8);
                    /* WARNING: Subroutine does not return */
  FUN_1400096a4(UVar8);
}

// entry @ 0x1400021e8
void entry(void)

{
  __security_init_cookie();
  __scrt_common_main_seh();
  return;
}

// operator_new @ 0x1400021fc
/* Library Function - Single Match
    void * __ptr64 __cdecl operator new(unsigned __int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  void *pvVar4;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return pvVar3;
    }
    bVar2 = FUN_140009898(param_1);
  } while ((int)CONCAT71(extraout_var,bVar2) != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_140002b3c();
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FUN_140002b1c();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}

// thunk_FUN_1400064a8 @ 0x140002238
void thunk_FUN_1400064a8(LPVOID param_1)

{
  FUN_14000a4d4(param_1);
  return;
}

// __raise_securityfailure @ 0x140002240
/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00014000226d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}

// FUN_140002274 @ 0x140002274
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002274(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14000229f;
  capture_previous_context((PCONTEXT)&DAT_140022c00);
  _DAT_140022b70 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140022c98 = puVar3 + 0x40;
  _DAT_140022c80 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140022b60 = 0xc0000409;
  _DAT_140022b64 = 1;
  _DAT_140022b78 = 1;
  DAT_140022b80 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140022040;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140022080;
  *(undefined8 *)(puVar3 + -8) = 0x140002341;
  DAT_140022cf8 = _DAT_140022b70;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140016890);
  return;
}

// capture_previous_context @ 0x140002348
/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}

// __scrt_acquire_startup_lock @ 0x1400023bc
/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2019 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_1400023ea:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1400230d8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1400230d8;
        pvVar1 = DAT_1400230d8;
      }
      DAT_1400230d8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1400023ea;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}

// FUN_1400023f8 @ 0x1400023f8
ulonglong FUN_1400023f8(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_1400230e0 = 1;
  }
  FUN_140002b70();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140009e48();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}

// __scrt_initialize_onexit_tables @ 0x140002434
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_1400230e1 == '\0') {
    if (1 < param_1) {
      FUN_140002714(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_1400230e8 = 0xffffffffffffffff;
      uRam00000001400230f0 = 0xffffffffffffffff;
      _DAT_1400230f8 = 0xffffffffffffffff;
      _DAT_140023100 = 0xffffffffffffffff;
      uRam0000000140023108 = 0xffffffffffffffff;
      _DAT_140023110 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1400230e8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((longlong *)&DAT_140023100), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1400230e1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

// FUN_1400024c0 @ 0x1400024c0
/* WARNING: Removing unreachable block (ram,0x00014000254d) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_1400024c0(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_140000328;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_140002536;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_140002536:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}

// __scrt_release_startup_lock @ 0x140002558
/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1400230d8 = 0;
    UNLOCK();
  }
  return;
}

// __scrt_uninitialize_crt @ 0x14000257c
/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_uninitialize_crt(bool param_1,char param_2)

{
  undefined8 in_RAX;
  
  if ((DAT_1400230e0 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize(param_1);
    in_RAX = __vcrt_uninitialize(param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// _onexit @ 0x1400025a8
/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_1400230e8 == -1) {
    iVar1 = FUN_140009c58(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1400230e8,_Func);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}

// atexit @ 0x1400025e4
/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}

// __security_init_cookie @ 0x1400025fc
/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_140022040 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_140022040 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_140022040 == 0x2b992ddfa232) {
      DAT_140022040 = 0x2b992ddfa233;
    }
  }
  DAT_140022080 = ~DAT_140022040;
  return;
}

// FUN_1400026a8 @ 0x1400026a8
undefined8 FUN_1400026a8(void)

{
  return 0;
}

// FUN_1400026ac @ 0x1400026ac
undefined8 FUN_1400026ac(void)

{
  return 1;
}

// FUN_1400026b4 @ 0x1400026b4
undefined8 FUN_1400026b4(void)

{
  return 0x4000;
}

// FUN_1400026bc @ 0x1400026bc
void FUN_1400026bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400026c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_140023120);
  return;
}

// FUN_1400026cc @ 0x1400026cc
undefined1 FUN_1400026cc(void)

{
  return 1;
}

// _guard_check_icall @ 0x1400026d0
void _guard_check_icall(void)

{
  return;
}

// FUN_1400026d4 @ 0x1400026d4
void FUN_1400026d4(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140001a50();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_140001e60();
  *puVar1 = *puVar1 | 2;
  return;
}

// FUN_1400026f0 @ 0x1400026f0
bool FUN_1400026f0(void)

{
  return DAT_14002208c == 0;
}

// FUN_1400026fc @ 0x1400026fc
undefined * FUN_1400026fc(void)

{
  return &DAT_140023e18;
}

// FUN_140002704 @ 0x140002704
undefined * FUN_140002704(void)

{
  return &DAT_140023e10;
}

// FUN_14000270c @ 0x14000270c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000270c(void)

{
  _DAT_140023130 = 0;
  return;
}

// FUN_140002714 @ 0x140002714
void FUN_140002714(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x140002748;
  FUN_14000270c();
  *(undefined8 *)(puVar4 + -8) = 0x140002759;
  FUN_140014d10((undefined1 (*) [32])local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x140002763;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x14000277d;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1400027be;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1400027f0;
  FUN_140014d10((undefined1 (*) [32])(puVar4 + 0x50),0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x140002812;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x14000282f;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x14000283a;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x14000284b;
    FUN_14000270c();
  }
  return;
}

// __scrt_get_show_window_mode @ 0x14000285c
/* Library Function - Single Match
    __scrt_get_show_window_mode
   
   Library: Visual Studio 2019 Release */

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  _STARTUPINFOW local_78;
  
  FUN_140014d10((undefined1 (*) [32])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
}

// thunk_FUN_1400026a8 @ 0x140002898
undefined8 thunk_FUN_1400026a8(void)

{
  return 0;
}

// FUN_1400028a0 @ 0x1400028a0
ulonglong FUN_1400028a0(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || ((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71(2,piVar3[0x3e] != 0);
  }
  return uVar2;
}

// FUN_1400028f4 @ 0x1400028f4
void FUN_1400028f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400028fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(FUN_140002904);
  return;
}

// FUN_140002904 @ 0x140002904
undefined8 FUN_140002904(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
     ((piVar1[8] + 0xe66cfae0U < 3 || (piVar1[8] == 0x1994000)))) {
    puVar3 = (undefined8 *)FUN_140003114();
    *puVar3 = piVar1;
    uVar2 = param_1[1];
    puVar3 = (undefined8 *)FUN_140003128();
    *puVar3 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_140009e94();
  }
  return 0;
}

// FUN_140002960 @ 0x140002960
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140002960(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14001f590; puVar1 < &DAT_14001f590; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}

// FUN_14000299c @ 0x14000299c
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000299c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14001f5a0; puVar1 < &DAT_14001f5a0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}

// FUN_1400029d8 @ 0x1400029d8
undefined8 * FUN_1400029d8(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

// FUN_140002a14 @ 0x140002a14
undefined8 * FUN_140002a14(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

// FUN_140002a34 @ 0x140002a34
undefined8 * FUN_140002a34(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

// FUN_140002a70 @ 0x140002a70
undefined8 * FUN_140002a70(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

// std::exception::exception @ 0x140002a90
/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(longlong *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}

// FUN_140002ad8 @ 0x140002ad8
undefined8 * FUN_140002ad8(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400064a8(param_1);
  }
  return param_1;
}

// FUN_140002b1c @ 0x140002b1c
void FUN_140002b1c(void)

{
  longlong local_28 [5];
  
  FUN_140002a14(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_140003200(local_28,&DAT_1400205c8);
}

// FUN_140002b3c @ 0x140002b3c
void FUN_140002b3c(void)

{
  longlong local_28 [5];
  
  FUN_140002a70(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_140003200(local_28,&DAT_140020650);
}

// FUN_140002b5c @ 0x140002b5c
char * FUN_140002b5c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}

// FUN_140002b70 @ 0x140002b70
/* WARNING: Removing unreachable block (ram,0x000140002c3a) */
/* WARNING: Removing unreachable block (ram,0x000140002baa) */
/* WARNING: Removing unreachable block (ram,0x000140002b83) */

undefined8 FUN_140002b70(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  uVar8 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    DAT_1400220a0 = 0xffffffffffffffff;
    uVar7 = *puVar2 & 0xfff3ff0;
    DAT_140022098 = 0x8000;
    if ((((uVar7 == 0x106c0) || (uVar7 == 0x20660)) || (uVar7 == 0x20670)) ||
       ((uVar7 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar7 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140023134 = DAT_140023134 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = *(uint *)(lVar3 + 4);
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_140023134 = DAT_140023134 | 2;
    }
  }
  DAT_140022090 = 1;
  DAT_140022094 = 2;
  if ((uVar4 >> 0x14 & 1) != 0) {
    DAT_140022090 = 2;
    DAT_140022094 = 6;
    if (((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) {
      uVar5 = xinuse(0);
      bVar6 = in_XCR0 & (byte)uVar5;
      if ((bVar6 & 6) == 6) {
        DAT_140022094 = 0xe;
        DAT_140022090 = 3;
        if ((uVar8 & 0x20) != 0) {
          DAT_140022090 = 5;
          DAT_140022094 = 0x2e;
          if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
            DAT_140022094 = 0x6e;
            DAT_140022090 = 6;
          }
        }
      }
    }
  }
  return 0;
}

// __scrt_is_ucrt_dll_in_use @ 0x140002d1c
/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_140023e08 != 0;
}

// FUN_140002d30 @ 0x140002d30
undefined8 * FUN_140002d30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400064a8(param_1);
  }
  return param_1;
}

// FUN_140002d60 @ 0x140002d60
undefined8 FUN_140002d60(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_38;
  longlong local_30;
  
  __except_validate_context_record(param_3);
  lVar2 = param_4[1];
  puVar3 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar2;
  uVar9 = *(uint *)(param_4 + 9);
  local_38 = param_1;
  local_30 = param_3;
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    for (; uVar9 < *puVar3; uVar9 = uVar9 + 1) {
      uVar8 = (ulonglong)uVar9;
      if (((puVar3[uVar8 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar8 * 4 + 2])) &&
         (puVar3[uVar8 * 4 + 4] != 0)) {
        if (puVar3[uVar8 * 4 + 3] != 1) {
          iVar4 = (*(code *)((ulonglong)puVar3[uVar8 * 4 + 3] + lVar2))(&local_38,param_2);
          if (iVar4 < 0) {
            return 0;
          }
          if (iVar4 < 1) goto LAB_140002e87;
        }
        if ((param_1->ExceptionCode == 0xe06d7363) &&
           (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&PTR___DestructExceptionObject_140016948),
           BVar5 != 0)) {
          __DestructExceptionObject((int *)param_1);
        }
        FUN_1400032e0();
        RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar3[((ulonglong)uVar9 + 1) * 4] + lVar2),param_1,
                    (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                    (PUNWIND_HISTORY_TABLE)param_4[8]);
        FUN_140003310();
      }
LAB_140002e87:
    }
  }
  else {
    uVar8 = param_4[4] - lVar2;
    for (; uVar1 = *puVar3, uVar9 < uVar1; uVar9 = uVar9 + 1) {
      uVar10 = (ulonglong)uVar9;
      if ((puVar3[uVar10 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar10 * 4 + 2])) {
        if ((param_1->ExceptionFlags & 0x20) != 0) {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              if ((((puVar3[uVar7 * 4 + 1] <= uVar8) && (uVar8 < puVar3[uVar7 * 4 + 2])) &&
                  (puVar3[uVar7 * 4 + 4] == puVar3[uVar10 * 4 + 4])) &&
                 (puVar3[uVar7 * 4 + 3] == puVar3[uVar10 * 4 + 3])) break;
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar6 < uVar1);
          }
          if ((uint)uVar7 != *puVar3) {
            return 1;
          }
        }
        if (puVar3[((ulonglong)uVar9 + 1) * 4] == 0) {
          *(uint *)(param_4 + 9) = uVar9 + 1;
          (*(code *)((ulonglong)puVar3[(ulonglong)uVar9 * 4 + 3] + lVar2))
                    (CONCAT71((int7)((ulonglong)uVar9 * 2 >> 8),1));
        }
        else if ((uVar8 == puVar3[((ulonglong)uVar9 + 1) * 4]) &&
                ((param_1->ExceptionFlags & 0x20) != 0)) {
          return 1;
        }
      }
    }
  }
  return 1;
}

// __vcrt_initialize @ 0x140002f78
/* Library Function - Single Match
    __vcrt_initialize
   
   Library: Visual Studio 2019 Release */

ulonglong __vcrt_initialize(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  uVar2 = __vcrt_initialize_locks();
  if ((char)uVar2 != '\0') {
    uVar1 = __vcrt_initialize_ptd();
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),1);
    }
    uVar2 = __vcrt_uninitialize_locks();
  }
  return uVar2 & 0xffffffffffffff00;
}

// __vcrt_uninitialize @ 0x140002fa0
/* Library Function - Single Match
    __vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined8 __vcrt_uninitialize(char param_1)

{
  undefined8 in_RAX;
  
  if (param_1 == '\0') {
    __vcrt_uninitialize_ptd();
    in_RAX = __vcrt_uninitialize_locks();
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// __std_type_info_compare @ 0x140002fbc
/* Library Function - Single Match
    __std_type_info_compare
   
   Library: Visual Studio 2019 Release */

uint __std_type_info_compare(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}

// __DestructExceptionObject @ 0x140002fe4
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && ((longlong *)**(longlong **)(param_1 + 10) != (longlong *)0x0))
      {
        (**(code **)(*(longlong *)**(longlong **)(param_1 + 10) + 0x10))();
      }
    }
    else {
      FUN_140003054(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}

// FUN_140003054 @ 0x140003054
void FUN_140003054(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000140003054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

// _IsExceptionObjectToBeDestroyed @ 0x140003058
/* Library Function - Single Match
    _IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _IsExceptionObjectToBeDestroyed(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_14000336c();
  plVar2 = *(longlong **)(lVar1 + 0x58);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar2 == param_1) break;
    plVar2 = (longlong *)plVar2[1];
  }
  return 0;
}

// __AdjustPointer @ 0x140003088
/* Library Function - Single Match
    __AdjustPointer
   
   Library: Visual Studio 2019 Release */

longlong __AdjustPointer(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    lVar1 = lVar1 + (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(param_2[1] + param_1)) +
                    (longlong)param_2[1];
  }
  return lVar1;
}

// FUN_1400030ac @ 0x1400030ac
undefined8 FUN_1400030ac(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    lVar3 = FUN_14000336c();
    if (0 < *(int *)(lVar3 + 0x30)) {
      lVar3 = FUN_14000336c();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    lVar3 = FUN_14000336c();
    *(int **)(lVar3 + 0x20) = piVar1;
    uVar2 = param_1[1];
    lVar3 = FUN_14000336c();
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_140009e94();
  }
  return 0;
}

// FUN_140003114 @ 0x140003114
longlong FUN_140003114(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000336c();
  return lVar1 + 0x20;
}

// FUN_140003128 @ 0x140003128
longlong FUN_140003128(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000336c();
  return lVar1 + 0x28;
}

// Unwind@14000313c @ 0x14000313c
void Unwind_14000313c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140009e94();
}

// __std_exception_copy @ 0x140003148
/* Library Function - Single Match
    __std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char *_Dst;
  longlong lVar2;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(*param_1 + lVar2 + 1) != '\0');
    _Dst = _malloc_base(lVar2 + 2);
    if (_Dst != (char *)0x0) {
      strcpy_s(_Dst,lVar2 + 2,(char *)*param_1);
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = (longlong)_Dst;
    }
    FUN_1400064a8((LPVOID)0x0);
  }
  return;
}

// __std_exception_destroy @ 0x1400031d8
/* Library Function - Single Match
    __std_exception_destroy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_destroy(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_1400064a8((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

// FUN_140003200 @ 0x140003200
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140003200(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (**(code **)(*(longlong *)(*param_1 + -8) + 0x40))();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}

// FUN_1400032e0 @ 0x1400032e0
void FUN_1400032e0(void)

{
  FUN_140003300();
  return;
}

// FUN_140003300 @ 0x140003300
void FUN_140003300(void)

{
  return;
}

// FUN_140003310 @ 0x140003310
void FUN_140003310(void)

{
  return;
}

// __except_validate_context_record @ 0x140003314
/* WARNING: Removing unreachable block (ram,0x000140003327) */
/* WARNING: Removing unreachable block (ram,0x00014000333d) */
/* WARNING: Removing unreachable block (ram,0x000140003343) */
/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  return;
}

// FUN_14000334c @ 0x14000334c
void FUN_14000334c(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_140023140)) {
    FUN_1400064a8(param_1);
  }
  return;
}

// FUN_14000336c @ 0x14000336c
void FUN_14000336c(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  if (pvVar1 != (LPVOID)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140009f20();
}

// __vcrt_getptd_noexit @ 0x140003388
/* Library Function - Single Match
    __vcrt_getptd_noexit
   
   Library: Visual Studio 2019 Release */

LPVOID __vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_1400220b0 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_1400220b0);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_1400220b0,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x80);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_1400220b0,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_1400220b0,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(undefined4 *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      FUN_1400064a8(pvVar2);
      pvVar3 = pvVar4;
    }
    SetLastError(dwErrCode);
  }
  return pvVar3;
}

// __vcrt_initialize_ptd @ 0x140003448
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

uint __vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  uint3 extraout_var;
  
  uVar1 = __vcrt_FlsAlloc(FUN_14000334c);
  DAT_1400220b0 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = __vcrt_FlsSetValue(uVar1,&DAT_140023140);
    if (iVar2 != 0) {
      _DAT_1400231b8 = 0xfffffffe;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    __vcrt_uninitialize_ptd();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}

// __vcrt_uninitialize_ptd @ 0x140003490
/* Library Function - Single Match
    __vcrt_uninitialize_ptd
   
   Library: Visual Studio 2019 Release */

undefined1 __vcrt_uninitialize_ptd(void)

{
  if (DAT_1400220b0 != -1) {
    __vcrt_FlsFree(DAT_1400220b0);
    DAT_1400220b0 = -1;
  }
  return 1;
}

// __vcrt_initialize_locks @ 0x1400034b4
/* Library Function - Single Match
    __vcrt_initialize_locks
   
   Library: Visual Studio 2017 Release */

undefined8 __vcrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __vcrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_1400231c0 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_1400231e8 = DAT_1400231e8 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 == 0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

// __vcrt_uninitialize_locks @ 0x1400034fc
/* Library Function - Single Match
    __vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __vcrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1400231e8;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1400231c0 + uVar1 * 0x28));
    DAT_1400231e8 = DAT_1400231e8 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// FUN_140003550 @ 0x140003550
void FUN_140003550(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar26 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar26 = uVar11;
    puVar26[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (puVar26 <= param_1) {
    if ((param_3 < 0x180000) && (0x1fff < param_3)) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        param_1 = (undefined8 *)((longlong)param_1 + 1);
      }
      return;
    }
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
    uVar32 = *puVar26;
    uVar33 = puVar26[1];
    uVar14 = puVar26[2];
    uVar15 = puVar26[3];
    if (0x100 < param_3) {
      lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
      pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
      pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
      param_3 = param_3 + lVar30;
      if (0x100 < param_3) {
        if (0x180000 < param_3) {
          do {
            uVar29 = param_3;
            pauVar28 = pauVar27;
            pauVar24 = pauVar23;
            auVar3 = pauVar28[1];
            auVar4 = pauVar28[2];
            auVar5 = pauVar28[3];
            auVar6 = vmovntdq_avx(*pauVar28);
            *pauVar24 = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[1] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[2] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[3] = auVar3;
            auVar3 = pauVar28[5];
            auVar4 = pauVar28[6];
            auVar5 = pauVar28[7];
            auVar6 = vmovntdq_avx(pauVar28[4]);
            pauVar24[4] = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[5] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[6] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[7] = auVar3;
            pauVar23 = pauVar24 + 8;
            pauVar27 = pauVar28 + 8;
            param_3 = uVar29 - 0x100;
          } while (0xff < uVar29 - 0x100);
          uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
          switch(uVar29) {
          case 0x1e1:
          case 0x1e2:
          case 0x1e3:
          case 0x1e4:
          case 0x1e5:
          case 0x1e6:
          case 0x1e7:
          case 0x1e8:
          case 0x1e9:
          case 0x1ea:
          case 0x1eb:
          case 0x1ec:
          case 0x1ed:
          case 0x1ee:
          case 0x1ef:
          case 0x1f0:
          case 0x1f1:
          case 0x1f2:
          case 499:
          case 500:
          case 0x1f5:
          case 0x1f6:
          case 0x1f7:
          case 0x1f8:
          case 0x1f9:
          case 0x1fa:
          case 0x1fb:
          case 0x1fc:
          case 0x1fd:
          case 0x1fe:
          case 0x1ff:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
            *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
          case 0x1c1:
          case 0x1c2:
          case 0x1c3:
          case 0x1c4:
          case 0x1c5:
          case 0x1c6:
          case 0x1c7:
          case 0x1c8:
          case 0x1c9:
          case 0x1ca:
          case 0x1cb:
          case 0x1cc:
          case 0x1cd:
          case 0x1ce:
          case 0x1cf:
          case 0x1d0:
          case 0x1d1:
          case 0x1d2:
          case 0x1d3:
          case 0x1d4:
          case 0x1d5:
          case 0x1d6:
          case 0x1d7:
          case 0x1d8:
          case 0x1d9:
          case 0x1da:
          case 0x1db:
          case 0x1dc:
          case 0x1dd:
          case 0x1de:
          case 0x1df:
          case 0x1e0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
            *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
          case 0x1a1:
          case 0x1a2:
          case 0x1a3:
          case 0x1a4:
          case 0x1a5:
          case 0x1a6:
          case 0x1a7:
          case 0x1a8:
          case 0x1a9:
          case 0x1aa:
          case 0x1ab:
          case 0x1ac:
          case 0x1ad:
          case 0x1ae:
          case 0x1af:
          case 0x1b0:
          case 0x1b1:
          case 0x1b2:
          case 0x1b3:
          case 0x1b4:
          case 0x1b5:
          case 0x1b6:
          case 0x1b7:
          case 0x1b8:
          case 0x1b9:
          case 0x1ba:
          case 0x1bb:
          case 0x1bc:
          case 0x1bd:
          case 0x1be:
          case 0x1bf:
          case 0x1c0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
            *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
          case 0x181:
          case 0x182:
          case 0x183:
          case 0x184:
          case 0x185:
          case 0x186:
          case 0x187:
          case 0x188:
          case 0x189:
          case 0x18a:
          case 0x18b:
          case 0x18c:
          case 0x18d:
          case 0x18e:
          case 399:
          case 400:
          case 0x191:
          case 0x192:
          case 0x193:
          case 0x194:
          case 0x195:
          case 0x196:
          case 0x197:
          case 0x198:
          case 0x199:
          case 0x19a:
          case 0x19b:
          case 0x19c:
          case 0x19d:
          case 0x19e:
          case 0x19f:
          case 0x1a0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
            *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
          case 0x161:
          case 0x162:
          case 0x163:
          case 0x164:
          case 0x165:
          case 0x166:
          case 0x167:
          case 0x168:
          case 0x169:
          case 0x16a:
          case 0x16b:
          case 0x16c:
          case 0x16d:
          case 0x16e:
          case 0x16f:
          case 0x170:
          case 0x171:
          case 0x172:
          case 0x173:
          case 0x174:
          case 0x175:
          case 0x176:
          case 0x177:
          case 0x178:
          case 0x179:
          case 0x17a:
          case 0x17b:
          case 0x17c:
          case 0x17d:
          case 0x17e:
          case 0x17f:
          case 0x180:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
            *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
          case 0x141:
          case 0x142:
          case 0x143:
          case 0x144:
          case 0x145:
          case 0x146:
          case 0x147:
          case 0x148:
          case 0x149:
          case 0x14a:
          case 0x14b:
          case 0x14c:
          case 0x14d:
          case 0x14e:
          case 0x14f:
          case 0x150:
          case 0x151:
          case 0x152:
          case 0x153:
          case 0x154:
          case 0x155:
          case 0x156:
          case 0x157:
          case 0x158:
          case 0x159:
          case 0x15a:
          case 0x15b:
          case 0x15c:
          case 0x15d:
          case 0x15e:
          case 0x15f:
          case 0x160:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
            *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
          case 0x121:
          case 0x122:
          case 0x123:
          case 0x124:
          case 0x125:
          case 0x126:
          case 0x127:
          case 0x128:
          case 0x129:
          case 0x12a:
          case 299:
          case 300:
          case 0x12d:
          case 0x12e:
          case 0x12f:
          case 0x130:
          case 0x131:
          case 0x132:
          case 0x133:
          case 0x134:
          case 0x135:
          case 0x136:
          case 0x137:
          case 0x138:
          case 0x139:
          case 0x13a:
          case 0x13b:
          case 0x13c:
          case 0x13d:
          case 0x13e:
          case 0x13f:
          case 0x140:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
            *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
          default:
            puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
            *puVar26 = uVar32;
            puVar26[1] = uVar33;
            puVar26[2] = uVar14;
            puVar26[3] = uVar15;
          case 0x100:
            *param_1 = uVar10;
            param_1[1] = uVar11;
            param_1[2] = uVar12;
            param_1[3] = uVar13;
            return;
          }
        }
        do {
          uVar10 = *(undefined8 *)(*pauVar27 + 8);
          uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
          uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
          uVar13 = *(undefined8 *)pauVar27[1];
          uVar32 = *(undefined8 *)(pauVar27[1] + 8);
          uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[2];
          uVar16 = *(undefined8 *)(pauVar27[2] + 8);
          uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[3];
          uVar20 = *(undefined8 *)(pauVar27[3] + 8);
          uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
          *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
          *(undefined8 *)(*pauVar23 + 8) = uVar10;
          *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
          *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
          *(undefined8 *)pauVar23[1] = uVar13;
          *(undefined8 *)(pauVar23[1] + 8) = uVar32;
          *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[2] = uVar15;
          *(undefined8 *)(pauVar23[2] + 8) = uVar16;
          *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[3] = uVar19;
          *(undefined8 *)(pauVar23[3] + 8) = uVar20;
          *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
          uVar10 = *(undefined8 *)(pauVar27[4] + 8);
          uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
          uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
          uVar13 = *(undefined8 *)pauVar27[5];
          uVar32 = *(undefined8 *)(pauVar27[5] + 8);
          uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[6];
          uVar16 = *(undefined8 *)(pauVar27[6] + 8);
          uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[7];
          uVar20 = *(undefined8 *)(pauVar27[7] + 8);
          uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
          *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
          *(undefined8 *)(pauVar23[4] + 8) = uVar10;
          *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
          *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
          *(undefined8 *)pauVar23[5] = uVar13;
          *(undefined8 *)(pauVar23[5] + 8) = uVar32;
          *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[6] = uVar15;
          *(undefined8 *)(pauVar23[6] + 8) = uVar16;
          *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[7] = uVar19;
          *(undefined8 *)(pauVar23[7] + 8) = uVar20;
          *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
          pauVar23 = pauVar23 + 8;
          pauVar27 = pauVar27 + 8;
          param_3 = param_3 - 0x100;
        } while (0xff < param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001400037a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&DAT_140026040 + (param_3 + 0x1f >> 5) * 4)))();
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar26;
  uVar13 = puVar26[1];
  puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar26 = puVar25;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar25 & 0xf) != 0) {
    puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    *puVar25 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar26 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar25 = puVar26;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
      uVar13 = *puVar26;
      uVar32 = puVar26[1];
      puVar26 = puVar25 + -0x10;
      puVar25[-2] = *puVar1;
      puVar25[-1] = uVar12;
      puVar25[-4] = uVar13;
      puVar25[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar25[-6] = *puVar1;
      puVar25[-5] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar25[-10] = *puVar1;
      puVar25[-9] = uVar12;
      puVar25[-0xc] = uVar13;
      puVar25[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      *puVar26 = uVar32;
      puVar25[-0xf] = uVar33;
      puVar25 = puVar26;
    }
    puVar25[-0xe] = uVar12;
    puVar25[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar26 = puVar26 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar26 = uVar32;
  puVar26[1] = uVar33;
  return;
}

// FUN_140003980 @ 0x140003980
void FUN_140003980(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar26 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar26 = uVar11;
    puVar26[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (puVar26 <= param_1) {
    if ((param_3 < 0x180000) && (0x1fff < param_3)) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        param_1 = (undefined8 *)((longlong)param_1 + 1);
      }
      return;
    }
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
    uVar32 = *puVar26;
    uVar33 = puVar26[1];
    uVar14 = puVar26[2];
    uVar15 = puVar26[3];
    if (0x100 < param_3) {
      lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
      pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
      pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
      param_3 = param_3 + lVar30;
      if (0x100 < param_3) {
        if (0x180000 < param_3) {
          do {
            uVar29 = param_3;
            pauVar28 = pauVar27;
            pauVar24 = pauVar23;
            auVar3 = pauVar28[1];
            auVar4 = pauVar28[2];
            auVar5 = pauVar28[3];
            auVar6 = vmovntdq_avx(*pauVar28);
            *pauVar24 = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[1] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[2] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[3] = auVar3;
            auVar3 = pauVar28[5];
            auVar4 = pauVar28[6];
            auVar5 = pauVar28[7];
            auVar6 = vmovntdq_avx(pauVar28[4]);
            pauVar24[4] = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[5] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[6] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[7] = auVar3;
            pauVar23 = pauVar24 + 8;
            pauVar27 = pauVar28 + 8;
            param_3 = uVar29 - 0x100;
          } while (0xff < uVar29 - 0x100);
          uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
          switch(uVar29) {
          case 0x1e1:
          case 0x1e2:
          case 0x1e3:
          case 0x1e4:
          case 0x1e5:
          case 0x1e6:
          case 0x1e7:
          case 0x1e8:
          case 0x1e9:
          case 0x1ea:
          case 0x1eb:
          case 0x1ec:
          case 0x1ed:
          case 0x1ee:
          case 0x1ef:
          case 0x1f0:
          case 0x1f1:
          case 0x1f2:
          case 499:
          case 500:
          case 0x1f5:
          case 0x1f6:
          case 0x1f7:
          case 0x1f8:
          case 0x1f9:
          case 0x1fa:
          case 0x1fb:
          case 0x1fc:
          case 0x1fd:
          case 0x1fe:
          case 0x1ff:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
            *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
          case 0x1c1:
          case 0x1c2:
          case 0x1c3:
          case 0x1c4:
          case 0x1c5:
          case 0x1c6:
          case 0x1c7:
          case 0x1c8:
          case 0x1c9:
          case 0x1ca:
          case 0x1cb:
          case 0x1cc:
          case 0x1cd:
          case 0x1ce:
          case 0x1cf:
          case 0x1d0:
          case 0x1d1:
          case 0x1d2:
          case 0x1d3:
          case 0x1d4:
          case 0x1d5:
          case 0x1d6:
          case 0x1d7:
          case 0x1d8:
          case 0x1d9:
          case 0x1da:
          case 0x1db:
          case 0x1dc:
          case 0x1dd:
          case 0x1de:
          case 0x1df:
          case 0x1e0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
            *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
          case 0x1a1:
          case 0x1a2:
          case 0x1a3:
          case 0x1a4:
          case 0x1a5:
          case 0x1a6:
          case 0x1a7:
          case 0x1a8:
          case 0x1a9:
          case 0x1aa:
          case 0x1ab:
          case 0x1ac:
          case 0x1ad:
          case 0x1ae:
          case 0x1af:
          case 0x1b0:
          case 0x1b1:
          case 0x1b2:
          case 0x1b3:
          case 0x1b4:
          case 0x1b5:
          case 0x1b6:
          case 0x1b7:
          case 0x1b8:
          case 0x1b9:
          case 0x1ba:
          case 0x1bb:
          case 0x1bc:
          case 0x1bd:
          case 0x1be:
          case 0x1bf:
          case 0x1c0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
            *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
          case 0x181:
          case 0x182:
          case 0x183:
          case 0x184:
          case 0x185:
          case 0x186:
          case 0x187:
          case 0x188:
          case 0x189:
          case 0x18a:
          case 0x18b:
          case 0x18c:
          case 0x18d:
          case 0x18e:
          case 399:
          case 400:
          case 0x191:
          case 0x192:
          case 0x193:
          case 0x194:
          case 0x195:
          case 0x196:
          case 0x197:
          case 0x198:
          case 0x199:
          case 0x19a:
          case 0x19b:
          case 0x19c:
          case 0x19d:
          case 0x19e:
          case 0x19f:
          case 0x1a0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
            *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
          case 0x161:
          case 0x162:
          case 0x163:
          case 0x164:
          case 0x165:
          case 0x166:
          case 0x167:
          case 0x168:
          case 0x169:
          case 0x16a:
          case 0x16b:
          case 0x16c:
          case 0x16d:
          case 0x16e:
          case 0x16f:
          case 0x170:
          case 0x171:
          case 0x172:
          case 0x173:
          case 0x174:
          case 0x175:
          case 0x176:
          case 0x177:
          case 0x178:
          case 0x179:
          case 0x17a:
          case 0x17b:
          case 0x17c:
          case 0x17d:
          case 0x17e:
          case 0x17f:
          case 0x180:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
            *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
          case 0x141:
          case 0x142:
          case 0x143:
          case 0x144:
          case 0x145:
          case 0x146:
          case 0x147:
          case 0x148:
          case 0x149:
          case 0x14a:
          case 0x14b:
          case 0x14c:
          case 0x14d:
          case 0x14e:
          case 0x14f:
          case 0x150:
          case 0x151:
          case 0x152:
          case 0x153:
          case 0x154:
          case 0x155:
          case 0x156:
          case 0x157:
          case 0x158:
          case 0x159:
          case 0x15a:
          case 0x15b:
          case 0x15c:
          case 0x15d:
          case 0x15e:
          case 0x15f:
          case 0x160:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
            *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
          case 0x121:
          case 0x122:
          case 0x123:
          case 0x124:
          case 0x125:
          case 0x126:
          case 0x127:
          case 0x128:
          case 0x129:
          case 0x12a:
          case 299:
          case 300:
          case 0x12d:
          case 0x12e:
          case 0x12f:
          case 0x130:
          case 0x131:
          case 0x132:
          case 0x133:
          case 0x134:
          case 0x135:
          case 0x136:
          case 0x137:
          case 0x138:
          case 0x139:
          case 0x13a:
          case 0x13b:
          case 0x13c:
          case 0x13d:
          case 0x13e:
          case 0x13f:
          case 0x140:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
            *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
          default:
            puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
            *puVar26 = uVar32;
            puVar26[1] = uVar33;
            puVar26[2] = uVar14;
            puVar26[3] = uVar15;
          case 0x100:
            *param_1 = uVar10;
            param_1[1] = uVar11;
            param_1[2] = uVar12;
            param_1[3] = uVar13;
            return;
          }
        }
        do {
          uVar10 = *(undefined8 *)(*pauVar27 + 8);
          uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
          uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
          uVar13 = *(undefined8 *)pauVar27[1];
          uVar32 = *(undefined8 *)(pauVar27[1] + 8);
          uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[2];
          uVar16 = *(undefined8 *)(pauVar27[2] + 8);
          uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[3];
          uVar20 = *(undefined8 *)(pauVar27[3] + 8);
          uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
          *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
          *(undefined8 *)(*pauVar23 + 8) = uVar10;
          *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
          *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
          *(undefined8 *)pauVar23[1] = uVar13;
          *(undefined8 *)(pauVar23[1] + 8) = uVar32;
          *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[2] = uVar15;
          *(undefined8 *)(pauVar23[2] + 8) = uVar16;
          *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[3] = uVar19;
          *(undefined8 *)(pauVar23[3] + 8) = uVar20;
          *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
          uVar10 = *(undefined8 *)(pauVar27[4] + 8);
          uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
          uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
          uVar13 = *(undefined8 *)pauVar27[5];
          uVar32 = *(undefined8 *)(pauVar27[5] + 8);
          uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[6];
          uVar16 = *(undefined8 *)(pauVar27[6] + 8);
          uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[7];
          uVar20 = *(undefined8 *)(pauVar27[7] + 8);
          uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
          *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
          *(undefined8 *)(pauVar23[4] + 8) = uVar10;
          *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
          *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
          *(undefined8 *)pauVar23[5] = uVar13;
          *(undefined8 *)(pauVar23[5] + 8) = uVar32;
          *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[6] = uVar15;
          *(undefined8 *)(pauVar23[6] + 8) = uVar16;
          *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[7] = uVar19;
          *(undefined8 *)(pauVar23[7] + 8) = uVar20;
          *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
          pauVar23 = pauVar23 + 8;
          pauVar27 = pauVar27 + 8;
          param_3 = param_3 - 0x100;
        } while (0xff < param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000140003bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&DAT_1400260d0 + (param_3 + 0x1f >> 5) * 4)))();
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar26;
  uVar13 = puVar26[1];
  puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar26 = puVar25;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar25 & 0xf) != 0) {
    puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    *puVar25 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar26 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar25 = puVar26;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
      uVar13 = *puVar26;
      uVar32 = puVar26[1];
      puVar26 = puVar25 + -0x10;
      puVar25[-2] = *puVar1;
      puVar25[-1] = uVar12;
      puVar25[-4] = uVar13;
      puVar25[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar25[-6] = *puVar1;
      puVar25[-5] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar25[-10] = *puVar1;
      puVar25[-9] = uVar12;
      puVar25[-0xc] = uVar13;
      puVar25[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      *puVar26 = uVar32;
      puVar25[-0xf] = uVar33;
      puVar25 = puVar26;
    }
    puVar25[-0xe] = uVar12;
    puVar25[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar26 = puVar26 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar26 = uVar32;
  puVar26[1] = uVar33;
  return;
}

// FUN_140003db0 @ 0x140003db0
void FUN_140003db0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar3 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar3;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar3 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    uVar3 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    *(undefined1 *)((longlong)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar12 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    puVar12 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar12 = uVar7;
    puVar12[1] = uVar8;
    return;
  }
  puVar12 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar12 = param_1;
  }
  if (puVar12 <= param_1) {
    if (param_3 < 0x800) {
      uVar6 = *param_2;
      if (0x80 < param_3) {
        lVar15 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar12 = (undefined8 *)((longlong)param_1 - lVar15);
        puVar13 = (undefined8 *)((longlong)param_2 - lVar15);
        param_3 = param_3 + lVar15;
        if (0x80 < param_3) {
          do {
            uVar7 = puVar13[1];
            uVar8 = puVar13[2];
            uVar9 = puVar13[3];
            uVar17 = puVar13[4];
            uVar18 = puVar13[5];
            uVar10 = puVar13[6];
            uVar11 = puVar13[7];
            *puVar12 = *puVar13;
            puVar12[1] = uVar7;
            puVar12[2] = uVar8;
            puVar12[3] = uVar9;
            puVar12[4] = uVar17;
            puVar12[5] = uVar18;
            puVar12[6] = uVar10;
            puVar12[7] = uVar11;
            uVar7 = puVar13[9];
            uVar8 = puVar13[10];
            uVar9 = puVar13[0xb];
            uVar17 = puVar13[0xc];
            uVar18 = puVar13[0xd];
            uVar10 = puVar13[0xe];
            uVar11 = puVar13[0xf];
            puVar12[8] = puVar13[8];
            puVar12[9] = uVar7;
            puVar12[10] = uVar8;
            puVar12[0xb] = uVar9;
            puVar12[0xc] = uVar17;
            puVar12[0xd] = uVar18;
            puVar12[0xe] = uVar10;
            puVar12[0xf] = uVar11;
            puVar12 = puVar12 + 0x10;
            puVar13 = puVar13 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000140003fd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_140026160 + (param_3 + 0xf >> 4) * 4)))(uVar6);
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  lVar15 = (longlong)param_2 - (longlong)param_1;
  puVar12 = (undefined8 *)((longlong)param_1 + lVar15 + (param_3 - 0x10));
  uVar8 = *puVar12;
  uVar9 = puVar12[1];
  puVar13 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar14 = param_3 - 0x10;
  puVar12 = puVar13;
  uVar17 = uVar8;
  uVar18 = uVar9;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar12 = (undefined8 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
    *puVar13 = uVar8;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar9;
    uVar14 = (longlong)puVar12 - (longlong)param_1;
  }
  uVar16 = uVar14 >> 7;
  if (uVar16 != 0) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar13 = puVar12;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x10);
      uVar8 = puVar1[1];
      puVar12 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x20);
      uVar9 = *puVar12;
      uVar17 = puVar12[1];
      puVar12 = puVar13 + -0x10;
      puVar13[-2] = *puVar1;
      puVar13[-1] = uVar8;
      puVar13[-4] = uVar9;
      puVar13[-3] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x30);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x40);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      uVar16 = uVar16 - 1;
      puVar13[-6] = *puVar1;
      puVar13[-5] = uVar8;
      puVar13[-8] = uVar9;
      puVar13[-7] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x50);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x60);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      puVar13[-10] = *puVar1;
      puVar13[-9] = uVar8;
      puVar13[-0xc] = uVar9;
      puVar13[-0xb] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x70);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
      if (uVar16 == 0) break;
      puVar13[-0xe] = uVar8;
      puVar13[-0xd] = uVar9;
      *puVar12 = uVar17;
      puVar13[-0xf] = uVar18;
      puVar13 = puVar12;
    }
    puVar13[-0xe] = uVar8;
    puVar13[-0xd] = uVar9;
    uVar14 = uVar14 & 0x7f;
  }
  for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar12 = puVar12 + -2;
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
  }
  if ((uVar14 & 0xf) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar7;
  }
  *puVar12 = uVar17;
  puVar12[1] = uVar18;
  return;
}

// FUN_140004060 @ 0x140004060
void FUN_140004060(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar3 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar3;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar3 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    uVar3 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    *(undefined1 *)((longlong)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar12 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    puVar12 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar12 = uVar7;
    puVar12[1] = uVar8;
    return;
  }
  puVar12 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar12 = param_1;
  }
  if (puVar12 <= param_1) {
    if (param_3 < 0x800) {
      uVar6 = *param_2;
      if (0x80 < param_3) {
        lVar15 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar12 = (undefined8 *)((longlong)param_1 - lVar15);
        puVar13 = (undefined8 *)((longlong)param_2 - lVar15);
        param_3 = param_3 + lVar15;
        if (0x80 < param_3) {
          do {
            uVar7 = puVar13[1];
            uVar8 = puVar13[2];
            uVar9 = puVar13[3];
            uVar17 = puVar13[4];
            uVar18 = puVar13[5];
            uVar10 = puVar13[6];
            uVar11 = puVar13[7];
            *puVar12 = *puVar13;
            puVar12[1] = uVar7;
            puVar12[2] = uVar8;
            puVar12[3] = uVar9;
            puVar12[4] = uVar17;
            puVar12[5] = uVar18;
            puVar12[6] = uVar10;
            puVar12[7] = uVar11;
            uVar7 = puVar13[9];
            uVar8 = puVar13[10];
            uVar9 = puVar13[0xb];
            uVar17 = puVar13[0xc];
            uVar18 = puVar13[0xd];
            uVar10 = puVar13[0xe];
            uVar11 = puVar13[0xf];
            puVar12[8] = puVar13[8];
            puVar12[9] = uVar7;
            puVar12[10] = uVar8;
            puVar12[0xb] = uVar9;
            puVar12[0xc] = uVar17;
            puVar12[0xd] = uVar18;
            puVar12[0xe] = uVar10;
            puVar12[0xf] = uVar11;
            puVar12 = puVar12 + 0x10;
            puVar13 = puVar13 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000140004286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_1400261d0 + (param_3 + 0xf >> 4) * 4)))(uVar6);
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  lVar15 = (longlong)param_2 - (longlong)param_1;
  puVar12 = (undefined8 *)((longlong)param_1 + lVar15 + (param_3 - 0x10));
  uVar8 = *puVar12;
  uVar9 = puVar12[1];
  puVar13 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar14 = param_3 - 0x10;
  puVar12 = puVar13;
  uVar17 = uVar8;
  uVar18 = uVar9;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar12 = (undefined8 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
    *puVar13 = uVar8;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar9;
    uVar14 = (longlong)puVar12 - (longlong)param_1;
  }
  uVar16 = uVar14 >> 7;
  if (uVar16 != 0) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar13 = puVar12;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x10);
      uVar8 = puVar1[1];
      puVar12 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x20);
      uVar9 = *puVar12;
      uVar17 = puVar12[1];
      puVar12 = puVar13 + -0x10;
      puVar13[-2] = *puVar1;
      puVar13[-1] = uVar8;
      puVar13[-4] = uVar9;
      puVar13[-3] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x30);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x40);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      uVar16 = uVar16 - 1;
      puVar13[-6] = *puVar1;
      puVar13[-5] = uVar8;
      puVar13[-8] = uVar9;
      puVar13[-7] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x50);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x60);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      puVar13[-10] = *puVar1;
      puVar13[-9] = uVar8;
      puVar13[-0xc] = uVar9;
      puVar13[-0xb] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x70);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
      if (uVar16 == 0) break;
      puVar13[-0xe] = uVar8;
      puVar13[-0xd] = uVar9;
      *puVar12 = uVar17;
      puVar13[-0xf] = uVar18;
      puVar13 = puVar12;
    }
    puVar13[-0xe] = uVar8;
    puVar13[-0xd] = uVar9;
    uVar14 = uVar14 & 0x7f;
  }
  for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar12 = puVar12 + -2;
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
  }
  if ((uVar14 & 0xf) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar7;
  }
  *puVar12 = uVar17;
  puVar12[1] = uVar18;
  return;
}

// FUN_1400042f8 @ 0x1400042f8
FARPROC FUN_1400042f8(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  wchar_t *lpLibFileName;
  DWORD DVar2;
  int iVar3;
  HMODULE hLibModule;
  FARPROC pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  pFVar4 = *(FARPROC *)(&DAT_140023270 + uVar6 * 8);
  if (pFVar4 != (FARPROC)0xffffffffffffffff) {
    if (pFVar4 != (FARPROC)0x0) {
      return pFVar4;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      uVar5 = (ulonglong)*param_3;
      hLibModule = *(HMODULE *)(&DAT_140023258 + uVar5 * 8);
      if (hLibModule == (HMODULE)0x0) {
        lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_140017728)[uVar5];
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
        if ((hLibModule != (HMODULE)0x0) ||
           (((DVar2 = GetLastError(), DVar2 == 0x57 &&
             (iVar3 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar3 != 0)) &&
            (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))
           ) {
          LOCK();
          lVar1 = *(longlong *)(&DAT_140023258 + uVar5 * 8);
          *(HMODULE *)(&DAT_140023258 + uVar5 * 8) = hLibModule;
          UNLOCK();
          if (lVar1 != 0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_140004429;
        }
        LOCK();
        *(undefined8 *)(&DAT_140023258 + uVar5 * 8) = 0xffffffffffffffff;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_140004429:
        pFVar4 = GetProcAddress(hLibModule,param_2);
        if (pFVar4 != (FARPROC)0x0) {
          LOCK();
          *(FARPROC *)(&DAT_140023270 + uVar6 * 8) = pFVar4;
          UNLOCK();
          return pFVar4;
        }
        break;
      }
    }
    LOCK();
    *(undefined8 *)(&DAT_140023270 + uVar6 * 8) = 0xffffffffffffffff;
    UNLOCK();
  }
  return (FARPROC)0x0;
}

// __vcrt_FlsAlloc @ 0x140004448
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_1400042f8(0,"FlsAlloc",(uint *)&DAT_1400177e8,(uint *)"FlsAlloc");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140004486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}

// __vcrt_FlsFree @ 0x140004490
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsFree(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_1400042f8(1,"FlsFree",(uint *)&DAT_140017800,(uint *)"FlsFree");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400044cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(param_1);
  return;
}

// __vcrt_FlsGetValue @ 0x1400044d8
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsGetValue(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_1400042f8(2,"FlsGetValue",(uint *)&DAT_140017810,(uint *)"FlsGetValue");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140004517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(param_1);
  return;
}

// __vcrt_FlsSetValue @ 0x140004520
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_1400042f8(3,"FlsSetValue",(uint *)&DAT_140017828,(uint *)"FlsSetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*pFVar1)();
  }
  return;
}

// __vcrt_InitializeCriticalSectionEx @ 0x140004574
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_1400042f8(4,"InitializeCriticalSectionEx",(uint *)&DAT_140017840,
                         (uint *)"InitializeCriticalSectionEx");
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*pFVar1)(param_1,param_2,param_3);
  }
  return;
}

// _CallSETranslator<> @ 0x1400045d8
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FH4::FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _CallSETranslator<>(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  lVar1 = FUN_14000336c();
  (**(code **)(lVar1 + 0x10))(*param_1,&local_20);
  return 0;
}

// FUN_14000462c @ 0x14000462c
longlong FUN_14000462c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  do {
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = uVar1 - 1;
    lVar2 = FUN_14000336c();
    lVar2 = (longlong)*(int *)(param_1 + 0x10) +
            *(longlong *)(lVar2 + 0x60) + (ulonglong)uVar1 * 0x14;
  } while ((param_2 <= *(int *)(lVar2 + 4)) || (*(int *)(lVar2 + 8) < param_2));
  return lVar2;
}

// FUN_140004690 @ 0x140004690
bool FUN_140004690(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140004e5c(param_2,param_1);
  lVar2 = FUN_14000462c(param_2,iVar1);
  return lVar2 != 0;
}

// __FrameHandler3::FrameUnwindToEmptyState @ 0x1400046bc
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  __uint64 *p_Var2;
  longlong lVar3;
  longlong local_res20;
  
  p_Var2 = (__uint64 *)
           FUN_140004720((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,&local_res20);
  iVar1 = FUN_140004e5c((longlong)param_3,(ulonglong *)param_2);
  lVar3 = FUN_14000462c((longlong)param_3,iVar1);
  if (lVar3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(lVar3 + 4);
  }
  FrameUnwindToState(p_Var2,param_2,param_3,iVar1);
  return;
}

// FUN_140004720 @ 0x140004720
longlong * FUN_140004720(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  PRUNTIME_FUNCTION p_Var3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  uVar8 = *(uint *)(param_3 + 0xc);
  iVar2 = FUN_140004e5c(param_3,param_2);
  *param_4 = *param_1;
  do {
    do {
      if (uVar8 == 0) {
        return param_4;
      }
      uVar8 = uVar8 - 1;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + (ulonglong)uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var3 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    uVar5 = 0;
    lVar9 = (longlong)*(int *)(lVar7 + 0x10) + local_res8;
    uVar1 = *(uint *)(lVar7 + 0xc);
    if (uVar1 != 0) {
      piVar6 = (int *)(lVar9 + 0xc);
      do {
        if ((longlong)*piVar6 == (ulonglong)p_Var3->BeginAddress) break;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        piVar6 = piVar6 + 5;
      } while (uVar4 < uVar1);
    }
    if ((uint)uVar5 < uVar1) {
      *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
      return param_4;
    }
  } while( true );
}

// FUN_1400047f0 @ 0x1400047f0
undefined8 *
FUN_1400047f0(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  ulonglong uVar13;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  ulonglong uVar11;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar5 = FUN_140004e5c(param_5,param_4);
  uVar11 = 0;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140009f20();
  }
  uVar4 = param_4[1];
  lVar8 = (longlong)*(int *)(param_5 + 0x10);
  iVar9 = -1;
  uVar13 = 0xffffffff;
  uVar10 = uVar3;
  do {
    uVar1 = uVar10 - 1;
    lVar2 = uVar4 + (ulonglong)uVar1 * 0x14;
    if ((*(int *)(lVar2 + 4 + lVar8) < iVar5) && (iVar5 <= *(int *)(lVar2 + 8 + lVar8))) break;
    uVar10 = uVar1;
  } while (uVar1 != 0);
  uVar7 = uVar11;
  if (uVar10 != 0) {
    uVar7 = lVar8 + (ulonglong)(uVar10 - 1) * 0x14 + uVar4;
  }
  piVar6 = (int *)(uVar4 + lVar8);
  do {
    if ((((uVar7 == 0) || ((*(int *)(uVar7 + 4) < *piVar6 && (piVar6[1] <= *(int *)(uVar7 + 8)))))
        && (*piVar6 <= param_3)) && ((param_3 <= piVar6[1] && (uVar13 = uVar11, iVar9 == -1)))) {
      iVar9 = (int)uVar11;
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    piVar6 = piVar6 + 5;
  } while (uVar10 < uVar3);
  iVar5 = 0;
  if (iVar9 != -1) {
    iVar5 = iVar9;
  }
  iVar12 = 0;
  if (iVar9 != -1) {
    iVar12 = (int)uVar13 + 1;
  }
  *param_1 = param_2;
  param_1[1] = CONCAT44(uStack_3c,iVar5);
  param_1[2] = param_2;
  param_1[3] = CONCAT44(uStack_2c,iVar12);
  return param_1;
}

// FUN_140004924 @ 0x140004924
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140004924(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_140022040 ^ (ulonglong)auStackY_e8;
  local_b8.ExceptionCode = 0x80000029;
  local_b8.ExceptionFlags = 1;
  local_b8.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_b8.ExceptionAddress = (PVOID)0x0;
  local_b8.NumberParameters = 0xf;
  local_b8._28_4_ = 0;
  local_b8.ExceptionInformation[9] = 0;
  local_b8.ExceptionInformation[10]._0_4_ = 0;
  local_b8.ExceptionInformation[10]._4_4_ = 0;
  local_b8.ExceptionInformation[0xb]._0_4_ = 0;
  local_b8.ExceptionInformation[0xb]._4_4_ = 0;
  local_b8.ExceptionInformation[0xc]._0_4_ = 0;
  local_b8.ExceptionInformation[0xc]._4_4_ = 0;
  local_b8.ExceptionInformation[0xd]._0_4_ = 0;
  local_b8.ExceptionInformation[0xd]._4_4_ = 0;
  local_b8.ExceptionInformation[0xe] = 0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)__FrameHandler3::CxxCallCatchBlock;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}

// _CreateFrameInfo @ 0x140004a28
/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  lVar1 = FUN_14000336c();
  if (param_1 < *(undefined8 **)(lVar1 + 0x58)) {
    lVar1 = FUN_14000336c();
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = FUN_14000336c();
  *(undefined8 **)(lVar1 + 0x58) = param_1;
  return param_1;
}

// FUN_140004a64 @ 0x140004a64
void FUN_140004a64(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14000336c();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_14000336c();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_14000336c();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140009f20();
}

// _GetImageBase @ 0x140004ab8
/* Library Function - Single Match
    _GetImageBase
   
   Library: Visual Studio 2019 Release */

undefined8 _GetImageBase(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000336c();
  return *(undefined8 *)(lVar1 + 0x60);
}

// _GetThrowImageBase @ 0x140004acc
/* Library Function - Single Match
    _GetThrowImageBase
   
   Library: Visual Studio 2019 Release */

undefined8 _GetThrowImageBase(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000336c();
  return *(undefined8 *)(lVar1 + 0x68);
}

// _SetImageBase @ 0x140004ae0
/* Library Function - Single Match
    _SetImageBase
   
   Library: Visual Studio 2019 Release */

void _SetImageBase(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14000336c();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}

// FUN_140004af8 @ 0x140004af8
void FUN_140004af8(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14000336c();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}

// FUN_140004b10 @ 0x140004b10
void FUN_140004b10(EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  __uint64 local_res8;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_res8 = param_2;
  lVar2 = FUN_14000336c();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_14000336c();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_14000336c();
  thunk_FUN_140005ae0(param_1,&local_res8,param_3,param_4,
                      (_s_FuncInfo *)
                      ((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60)),0,
                      (__uint64 *)0x0,0);
  return;
}

// FUN_140004bb0 @ 0x140004bb0
void FUN_140004bb0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

// FUN_140004bd0 @ 0x140004bd0
void FUN_140004bd0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_RAX;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar16 = (longlong)param_2 - param_1;
  lVar12 = param_1 + param_3;
  puVar15 = (undefined4 *)(lVar12 + -0x10 + lVar16);
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  puVar13 = (undefined4 *)(lVar12 + -0x10);
  uVar17 = param_3 - 0x10;
  puVar14 = puVar13;
  uVar19 = *puVar15;
  uVar20 = uVar4;
  uVar21 = uVar5;
  uVar22 = uVar6;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar14 = (undefined4 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    *puVar13 = *puVar15;
    *(undefined4 *)(lVar12 + -0xc) = uVar4;
    *(undefined4 *)(lVar12 + -8) = uVar5;
    *(undefined4 *)(lVar12 + -4) = uVar6;
    uVar17 = (longlong)puVar14 - (longlong)in_RAX;
  }
  uVar18 = uVar17 >> 7;
  if (uVar18 != 0) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar15 = puVar14;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar14 = puVar15 + -0x20;
      *(undefined8 *)(puVar15 + -4) = *puVar2;
      *(undefined8 *)(puVar15 + -2) = uVar9;
      *(undefined8 *)(puVar15 + -8) = uVar10;
      *(undefined8 *)(puVar15 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar18 = uVar18 - 1;
      *(undefined8 *)(puVar15 + -0xc) = *puVar2;
      *(undefined8 *)(puVar15 + -10) = uVar9;
      *(undefined8 *)(puVar15 + -0x10) = uVar10;
      *(undefined8 *)(puVar15 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar15 + -0x14) = *puVar2;
      *(undefined8 *)(puVar15 + -0x12) = uVar9;
      *(undefined8 *)(puVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar15 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar13 = (undefined4 *)((longlong)puVar14 + lVar16);
      uVar19 = *puVar13;
      uVar20 = puVar13[1];
      uVar21 = puVar13[2];
      uVar22 = puVar13[3];
      if (uVar18 == 0) break;
      *(undefined8 *)(puVar15 + -0x1c) = uVar9;
      *(undefined8 *)(puVar15 + -0x1a) = uVar10;
      *puVar14 = uVar19;
      puVar15[-0x1f] = uVar20;
      puVar15[-0x1e] = uVar21;
      puVar15[-0x1d] = uVar22;
      puVar15 = puVar14;
    }
    *(undefined8 *)(puVar15 + -0x1c) = uVar9;
    *(undefined8 *)(puVar15 + -0x1a) = uVar10;
    uVar17 = uVar17 & 0x7f;
  }
  for (uVar18 = uVar17 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar14 = puVar14 + -4;
    puVar15 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar15;
    uVar20 = puVar15[1];
    uVar21 = puVar15[2];
    uVar22 = puVar15[3];
  }
  if ((uVar17 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar14 = uVar19;
  puVar14[1] = uVar20;
  puVar14[2] = uVar21;
  puVar14[3] = uVar22;
  return;
}

// FUN_140004cc0 @ 0x140004cc0
void FUN_140004cc0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

// FUN_140004ce0 @ 0x140004ce0
void FUN_140004ce0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_RAX;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar16 = (longlong)param_2 - param_1;
  lVar12 = param_1 + param_3;
  puVar15 = (undefined4 *)(lVar12 + -0x10 + lVar16);
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  puVar13 = (undefined4 *)(lVar12 + -0x10);
  uVar17 = param_3 - 0x10;
  puVar14 = puVar13;
  uVar19 = *puVar15;
  uVar20 = uVar4;
  uVar21 = uVar5;
  uVar22 = uVar6;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar14 = (undefined4 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    *puVar13 = *puVar15;
    *(undefined4 *)(lVar12 + -0xc) = uVar4;
    *(undefined4 *)(lVar12 + -8) = uVar5;
    *(undefined4 *)(lVar12 + -4) = uVar6;
    uVar17 = (longlong)puVar14 - (longlong)in_RAX;
  }
  uVar18 = uVar17 >> 7;
  if (uVar18 != 0) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar15 = puVar14;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar14 = puVar15 + -0x20;
      *(undefined8 *)(puVar15 + -4) = *puVar2;
      *(undefined8 *)(puVar15 + -2) = uVar9;
      *(undefined8 *)(puVar15 + -8) = uVar10;
      *(undefined8 *)(puVar15 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar18 = uVar18 - 1;
      *(undefined8 *)(puVar15 + -0xc) = *puVar2;
      *(undefined8 *)(puVar15 + -10) = uVar9;
      *(undefined8 *)(puVar15 + -0x10) = uVar10;
      *(undefined8 *)(puVar15 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar15 + -0x14) = *puVar2;
      *(undefined8 *)(puVar15 + -0x12) = uVar9;
      *(undefined8 *)(puVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar15 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar13 = (undefined4 *)((longlong)puVar14 + lVar16);
      uVar19 = *puVar13;
      uVar20 = puVar13[1];
      uVar21 = puVar13[2];
      uVar22 = puVar13[3];
      if (uVar18 == 0) break;
      *(undefined8 *)(puVar15 + -0x1c) = uVar9;
      *(undefined8 *)(puVar15 + -0x1a) = uVar10;
      *puVar14 = uVar19;
      puVar15[-0x1f] = uVar20;
      puVar15[-0x1e] = uVar21;
      puVar15[-0x1d] = uVar22;
      puVar15 = puVar14;
    }
    *(undefined8 *)(puVar15 + -0x1c) = uVar9;
    *(undefined8 *)(puVar15 + -0x1a) = uVar10;
    uVar17 = uVar17 & 0x7f;
  }
  for (uVar18 = uVar17 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar14 = puVar14 + -4;
    puVar15 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar15;
    uVar20 = puVar15[1];
    uVar21 = puVar15[2];
    uVar22 = puVar15[3];
  }
  if ((uVar17 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar14 = uVar19;
  puVar14[1] = uVar20;
  puVar14[2] = uVar21;
  puVar14[3] = uVar22;
  return;
}

// __FrameHandler3::GetCurrentState @ 0x140004dc0
/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetCurrentState(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetCurrentState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_3->dispUnwindHelp + *param_1);
  if (iVar1 == -2) {
    iVar1 = FUN_140004e64((longlong)param_3,(longlong)param_2,*(ulonglong *)param_2);
  }
  return iVar1;
}

// __FrameHandler3::GetUnwindTryBlock @ 0x140004de8
/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_140004720((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1);
}

// __FrameHandler3::SetState @ 0x140004e14
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(unsigned __int64 * __ptr64,struct
   _s_FuncInfo const * __ptr64,int)
   
   Library: Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(__uint64 *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)((longlong)param_2->dispUnwindHelp + *param_1) = param_3;
  return;
}

// __FrameHandler3::SetUnwindTryBlock @ 0x140004e20
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::SetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_140004720((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) = param_4;
  }
  return;
}

// FUN_140004e5c @ 0x140004e5c
void FUN_140004e5c(longlong param_1,ulonglong *param_2)

{
  FUN_140004e64(param_1,(longlong)param_2,*param_2);
  return;
}

// FUN_140004e64 @ 0x140004e64
undefined4 FUN_140004e64(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 + lVar4 != 0) {
      uVar3 = 0;
      if (*(uint *)(param_1 + 0x14) != 0) {
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar4 + uVar3 * 8 + lVar1) + lVar1)) break;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x14));
        if ((int)uVar3 != 0) {
          return *(undefined4 *)(lVar1 + (ulonglong)((int)uVar3 - 1) * 8 + 4 + lVar4);
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140009f20();
}

// BuildCatchObjectHelperInternal<__FrameHandler3> @ 0x140004ecc
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    int __cdecl BuildCatchObjectHelperInternal<class __FrameHandler3>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
BuildCatchObjectHelperInternal<__FrameHandler3>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar4 = 0;
  uVar6 = 0;
  iVar5 = 0;
  uVar3 = uVar4;
  iVar7 = iVar5;
  if (*(int *)(param_3 + 4) != 0) {
    iVar7 = *(int *)(param_3 + 4);
    lVar1 = _GetImageBase();
    uVar3 = iVar7 + lVar1;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = uVar4;
  if (iVar7 != 0) {
    lVar1 = _GetImageBase();
    uVar3 = lVar1 + *(int *)(param_3 + 4);
  }
  if (*(char *)(uVar3 + 0x10) == '\0') {
    return 0;
  }
  if ((*(int *)(param_3 + 8) == 0) && (-1 < *(int *)param_3)) {
    return 0;
  }
  if (-1 < *(int *)param_3) {
    param_2 = (void *)((longlong)*(int *)(param_3 + 8) + *(longlong *)param_2);
  }
  if (((((byte)*param_3 & 0x80) == 0) || (((byte)*param_4 & 0x10) == 0)) || (DAT_140023138 == 0)) {
    if (((byte)*param_3 & 8) == 0) {
      if (((byte)*param_4 & 1) == 0) {
        uVar3 = uVar4;
        if (*(int *)(param_4 + 0x18) != 0) {
          iVar5 = *(int *)(param_4 + 0x18);
          lVar1 = _GetThrowImageBase();
          uVar3 = iVar5 + lVar1;
        }
        if (uVar3 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            if (iVar5 != 0) {
              lVar1 = _GetThrowImageBase();
              uVar4 = lVar1 + *(int *)(param_4 + 0x18);
            }
            if (uVar4 != 0) {
              uVar6 = (ulonglong)((((byte)*param_4 & 4) != 0) + 1);
              goto LAB_14000508a;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_140009f20();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_140009f20();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_140014670(param_2,puVar2,(longlong)iVar7);
        goto LAB_14000508a;
      }
      if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_140009f20();
      }
      FUN_140014670(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*(longlong *)param_2 == 0)) goto LAB_14000508a;
      lVar1 = *(longlong *)param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_140009f20();
      }
      *(longlong *)param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)DAT_140023138)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_140009f20();
    }
    *(longlong *)param_2 = lVar1;
  }
  lVar1 = __AdjustPointer(lVar1,(int *)(param_4 + 8));
  *(longlong *)param_2 = lVar1;
  uVar6 = uVar4;
LAB_14000508a:
  return (int)uVar6;
}

// BuildCatchObjectInternal<__FrameHandler3> @ 0x1400050cc
/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<class __FrameHandler3>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
BuildCatchObjectInternal<__FrameHandler3>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *UNRECOVERED_JUMPTABLE;
  void *pvVar5;
  
  UNRECOVERED_JUMPTABLE = (undefined *)0x0;
  pvVar5 = param_2;
  if (-1 < *(int *)param_3) {
    pvVar5 = (void *)((longlong)*(int *)(param_3 + 8) + *(longlong *)param_2);
  }
  iVar1 = BuildCatchObjectHelperInternal<__FrameHandler3>(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar4 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(param_4 + 0x18) + lVar4);
    }
    FUN_140006388(pvVar5,UNRECOVERED_JUMPTABLE,lVar3);
  }
  else if (iVar1 == 2) {
    pvVar2 = (void *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar3 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(param_4 + 0x18) + lVar3);
    }
    _CallMemberFunction2(pvVar5,UNRECOVERED_JUMPTABLE,pvVar2,1);
  }
  return;
}

// CatchIt<__FrameHandler3> @ 0x14000518c
/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned __int64
   * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo
   const * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64,struct _s_TryBlockMapEntry const * __ptr64,int,unsigned __int64 * __ptr64,unsigned
   char,unsigned char)
   
   Library: Visual Studio 2019 Release */

void __cdecl
CatchIt<__FrameHandler3>
          (EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
          _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,
          _s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,__uint64 *param_10,
          uchar param_11,uchar param_12)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res10;
  _CONTEXT *local_res18;
  undefined4 in_stack_ffffffffffffffa4;
  
  local_res18 = param_3;
  plVar3 = FUN_140004720((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,&local_res10);
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<__FrameHandler3>(param_1,plVar3,param_6,param_7);
  }
  uVar1 = *(undefined4 *)(param_8 + 8);
  iVar2 = *(int *)param_8;
  lVar4 = _GetImageBase();
  FUN_140004924(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)plVar3,
                lVar4 + *(int *)(param_6 + 0xc),(ULONG_PTR)param_5,iVar2,
                CONCAT44(in_stack_ffffffffffffffa4,uVar1),param_6,(undefined8 *)param_4,param_12);
  return;
}

// FUN_140005260 @ 0x140005260
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140005260(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,byte param_6,int param_7,
                  __uint64 *param_8)

{
  undefined8 *puVar1;
  _s_ESTypeList *p_Var2;
  uint uVar3;
  char cVar4;
  uchar uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStackY_168 [32];
  _s_TryBlockMapEntry *in_stack_fffffffffffffed0;
  undefined4 uVar16;
  uchar local_108;
  _CONTEXT *local_100;
  _s_CatchableType *local_e0;
  longlong local_d8;
  __uint64 *local_d0;
  undefined8 local_c8;
  int iStack_c0;
  uint uStack_bc;
  int local_b8;
  _s_FuncInfo *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  ulonglong uVar15;
  
  local_58 = DAT_140022040 ^ (ulonglong)auStackY_168;
  local_d0 = param_8;
  local_108 = '\0';
  iVar7 = __FrameHandler3::GetHandlerSearchState(param_2,param_4,param_5);
  if ((-2 < iVar7) && (iVar7 < param_5->maxState)) {
    local_100 = param_3;
    if ((*(int *)param_1 == -0x1f928c9d) &&
       (((*(int *)(param_1 + 0x18) == 4 && (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) &&
        (*(longlong *)(param_1 + 0x30) == 0)))) {
      lVar11 = FUN_14000336c();
      if (*(longlong *)(lVar11 + 0x20) == 0) {
        return;
      }
      lVar11 = FUN_14000336c();
      param_1 = *(EHExceptionRecord **)(lVar11 + 0x20);
      lVar11 = FUN_14000336c();
      local_108 = '\x01';
      local_100 = *(_CONTEXT **)(lVar11 + 0x28);
      FUN_140004af8(*(undefined8 *)(param_1 + 0x38));
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
         ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
      goto LAB_140005728;
      lVar11 = FUN_14000336c();
      if (*(longlong *)(lVar11 + 0x38) != 0) {
        lVar11 = FUN_14000336c();
        p_Var2 = *(_s_ESTypeList **)(lVar11 + 0x38);
        lVar11 = FUN_14000336c();
        *(undefined8 *)(lVar11 + 0x38) = 0;
        cVar4 = FUN_140006210((longlong)param_1,(int *)p_Var2);
        if (cVar4 == '\0') {
          uVar5 = Is_bad_exception_allowed(p_Var2);
          if (uVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_140009e94();
          }
          __DestructExceptionObject((int *)param_1);
          FUN_140005d5c(&local_c8);
                    /* WARNING: Subroutine does not return */
          FUN_140003200(&local_c8,&DAT_1400206b8);
        }
      }
    }
    uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
    local_a8 = *(undefined8 *)(param_4 + 8);
    local_b0 = param_5;
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
      if (param_5->nTryBlocks != 0) {
        FUN_1400047f0(&local_90,&local_b0,iVar7,(ulonglong *)param_4,(longlong)param_5);
        uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        uVar8 = (uint)uStack_88;
        local_a0 = local_90;
        uStack_98 = uStack_88;
        if (uVar8 < local_78) {
          do {
            uVar15 = 0;
            lVar11 = (longlong)*(int *)(*local_a0 + 0x10) + (ulonglong)uVar8 * 0x14;
            piVar12 = (int *)(lVar11 + local_90[1]);
            local_c8._0_4_ = *piVar12;
            local_c8._4_4_ = piVar12[1];
            iStack_c0 = piVar12[2];
            uVar3 = piVar12[3];
            local_b8 = *(int *)(lVar11 + 0x10 + local_90[1]);
            uStack_bc = uVar3;
            if ((((int)local_c8 <= iVar7) && (iVar7 <= local_c8._4_4_)) &&
               (local_d8 = (longlong)local_b8 + *(longlong *)(param_4 + 8), uVar3 != 0)) {
              do {
                puVar1 = (undefined8 *)(local_d8 + uVar15 * 0x14);
                local_70 = *puVar1;
                uStack_68 = puVar1[1];
                local_60 = *(undefined4 *)(local_d8 + 0x10 + uVar15 * 0x14);
                lVar11 = _GetThrowImageBase();
                piVar12 = (int *)(lVar11 + 4 +
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                lVar11 = _GetThrowImageBase();
                for (iVar10 = *(int *)(lVar11 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                    0 < iVar10; iVar10 = iVar10 + -1) {
                  lVar11 = _GetThrowImageBase();
                  local_e0 = (_s_CatchableType *)(lVar11 + *piVar12);
                  iVar9 = TypeMatchHelper<__FrameHandler3>
                                    ((_s_HandlerType *)&local_70,local_e0,
                                     *(_s_ThrowInfo **)(param_1 + 0x30));
                  if (iVar9 != 0) {
                    in_stack_fffffffffffffed0 = (_s_TryBlockMapEntry *)&local_c8;
                    CatchIt<__FrameHandler3>
                              (param_1,param_2,local_100,param_4,param_5,(_s_HandlerType *)&local_70
                               ,local_e0,in_stack_fffffffffffffed0,param_7,local_d0,local_108,
                               param_6);
                    goto LAB_140005598;
                  }
                  piVar12 = piVar12 + 1;
                }
                uVar14 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar14;
              } while (uVar14 != uVar3);
            }
LAB_140005598:
            uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_78);
        }
      }
      piVar12 = (int *)0x0;
      if ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
         (((param_5->dispESTypeList != 0 &&
           (lVar11 = _GetImageBase(), lVar11 + (int)param_5->dispESTypeList != 0)) ||
          ((((uint)param_5->EHFlags >> 2 & 1) != 0 &&
           (bVar6 = FUN_140004690((ulonglong *)param_4,(longlong)param_5), !bVar6)))))) {
        if (((uint)param_5->EHFlags >> 2 & 1) != 0) {
          lVar11 = FUN_14000336c();
          *(EHExceptionRecord **)(lVar11 + 0x20) = param_1;
          lVar11 = FUN_14000336c();
          *(_CONTEXT **)(lVar11 + 0x28) = local_100;
                    /* WARNING: Subroutine does not return */
          FUN_140009e94();
        }
        if (param_5->dispESTypeList != 0) {
          lVar11 = _GetImageBase();
          piVar12 = (int *)(lVar11 + (int)param_5->dispESTypeList);
        }
        cVar4 = FUN_140006210((longlong)param_1,piVar12);
        if (cVar4 == '\0') {
          plVar13 = FUN_140004720((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,
                                  (longlong *)&local_e0);
          FUN_140004924(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_100,(ULONG_PTR)plVar13,0,
                        (ULONG_PTR)param_5,-1,CONCAT44(uVar16,0xffffffff),0,(undefined8 *)param_4,
                        param_6);
        }
      }
    }
    else if (param_5->nTryBlocks != 0) {
      if (param_6 != 0) goto LAB_140005728;
      FUN_140005730(param_1,param_2,local_100,param_4,param_5,iVar7,param_7,param_8);
    }
    lVar11 = FUN_14000336c();
    if (*(longlong *)(lVar11 + 0x38) == 0) {
      return;
    }
  }
LAB_140005728:
                    /* WARNING: Subroutine does not return */
  FUN_140009f20();
}

// FUN_140005730 @ 0x140005730
void FUN_140005730(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,int param_7,
                  __uint64 *param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  PVOID pvVar4;
  _s_HandlerType *p_Var5;
  _s_FuncInfo *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  _s_TryBlockMapEntry local_78 [16];
  int local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint local_48;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    lVar3 = FUN_14000336c();
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      pvVar4 = EncodePointer((PVOID)0x0);
      lVar3 = FUN_14000336c();
      if ((((*(PVOID *)(lVar3 + 0x10) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar1 = _CallSETranslator<>((undefined4 *)param_1,param_2,param_3), iVar1 != 0)) {
        return;
      }
    }
    local_90 = *(undefined8 *)(param_4 + 8);
    local_98 = param_5;
    if (param_5->nTryBlocks == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140009f20();
    }
    FUN_1400047f0(&local_60,&local_98,param_6,(ulonglong *)param_4,(longlong)param_5);
    uVar2 = (uint)uStack_58;
    local_88 = local_60;
    uStack_80 = uStack_58;
    if (uVar2 < local_48) {
      do {
        lVar3 = (longlong)*(int *)(*local_88 + 0x10) + (ulonglong)uVar2 * 0x14;
        local_78 = *(_s_TryBlockMapEntry (*) [16])(lVar3 + local_60[1]);
        local_68 = *(int *)(lVar3 + 0x10 + local_60[1]);
        if ((local_78._0_4_ <= param_6) && (param_6 <= local_78._4_4_)) {
          p_Var5 = (_s_HandlerType *)
                   (*(longlong *)(param_4 + 8) + -0x14 +
                   (longlong)local_68 + (local_78._8_8_ >> 0x20) * 0x14);
          if (*(int *)(p_Var5 + 4) != 0) {
            iVar1 = *(int *)(p_Var5 + 4);
            lVar3 = _GetImageBase();
            if (lVar3 + iVar1 != 0) {
              if (iVar1 == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = _GetImageBase();
                lVar3 = lVar3 + *(int *)(p_Var5 + 4);
              }
              if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_14000595b;
            }
          }
          if (((byte)*p_Var5 & 0x40) == 0) {
            CatchIt<__FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var5,(_s_CatchableType *)0x0,
                       local_78,param_7,param_8,'\x01','\0');
          }
        }
LAB_14000595b:
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_48);
    }
  }
  return;
}

// TypeMatchHelper<__FrameHandler3> @ 0x1400059a0
/* Library Function - Single Match
    int __cdecl TypeMatchHelper<class __FrameHandler3>(struct _s_HandlerType const * __ptr64,struct
   _s_CatchableType const * __ptr64,struct _s_ThrowInfo const * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
TypeMatchHelper<__FrameHandler3>
          (_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = 0;
  iVar7 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = *(int *)(param_1 + 4);
    lVar4 = _GetImageBase();
    if (lVar4 + iVar3 != 0) {
      lVar4 = lVar8;
      if (iVar3 != 0) {
        iVar7 = *(int *)(param_1 + 4);
        lVar4 = _GetImageBase();
        lVar4 = iVar7 + lVar4;
      }
      if ((*(char *)(lVar4 + 0x10) != '\0') &&
         ((((byte)*param_1 & 0x80) == 0 || (((byte)*param_2 & 0x10) == 0)))) {
        lVar4 = lVar8;
        if (iVar7 != 0) {
          lVar4 = _GetImageBase();
          lVar4 = lVar4 + *(int *)(param_1 + 4);
        }
        lVar5 = _GetThrowImageBase();
        if (lVar4 != lVar5 + *(int *)(param_2 + 4)) {
          lVar4 = lVar8;
          if (*(int *)(param_1 + 4) != 0) {
            lVar4 = _GetImageBase();
            lVar4 = lVar4 + *(int *)(param_1 + 4);
          }
          lVar5 = _GetThrowImageBase();
          pcVar6 = (char *)(lVar4 + 0x10);
          lVar4 = ((longlong)*(int *)(param_2 + 4) + 0x10 + lVar5) - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar4];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) {
            return 0;
          }
        }
        if (((((((byte)*param_2 & 2) == 0) || (((byte)*param_1 & 8) != 0)) &&
             ((((byte)*param_3 & 1) == 0 || (((byte)*param_1 & 1) != 0)))) &&
            ((((byte)*param_3 & 4) == 0 || (((byte)*param_1 & 4) != 0)))) &&
           ((((byte)*param_3 & 2) == 0 || (lVar8 = 0, ((byte)*param_1 & 2) != 0)))) {
          lVar8 = 1;
        }
        return (int)lVar8;
      }
    }
  }
  return 1;
}

// FUN_140005ae0 @ 0x140005ae0
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_140005ae0(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
             _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,__uint64 *param_7,
             byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = FUN_14000336c();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_140005b62;
        goto LAB_140005b46;
      }
    }
    else {
LAB_140005b46:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_140005b62;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_140005b62:
  if (((byte)param_1[4] & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (param_5->dispESTypeList == 0)) ||
        (lVar2 = _GetImageBase(), lVar2 + (int)param_5->dispESTypeList == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
        return 1;
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x18))) &&
       ((0x19930522 < *(uint *)(param_1 + 0x20) &&
        (*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0)))) {
      lVar2 = _GetThrowImageBase();
      pcVar4 = (code *)(lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8));
      if (pcVar4 != (code *)0x0) {
        uVar3 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar5,(uint)param_8));
        return uVar3;
      }
    }
    FUN_140005260(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_140005be7:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_140004e64((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_140005d11:
                    /* WARNING: Subroutine does not return */
        FUN_140009f20();
      }
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_140005be7;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_140005d11;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    __FrameHandler3::FrameUnwindToState(param_2,param_4,param_5,iVar1);
  }
  return 1;
}

// thunk_FUN_140005ae0 @ 0x140005d18
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
thunk_FUN_140005ae0(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                   _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,__uint64 *param_7,
                   byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffe0;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = FUN_14000336c();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_140005b62;
        goto LAB_140005b46;
      }
    }
    else {
LAB_140005b46:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_140005b62;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_140005b62:
  if (((byte)param_1[4] & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (param_5->dispESTypeList == 0)) ||
        (lVar2 = _GetImageBase(), lVar2 + (int)param_5->dispESTypeList == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
        return 1;
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x18))) &&
       ((0x19930522 < *(uint *)(param_1 + 0x20) &&
        (*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0)))) {
      lVar2 = _GetThrowImageBase();
      pcVar4 = (code *)(lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8));
      if (pcVar4 != (code *)0x0) {
        uVar3 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar5,(uint)param_8));
        return uVar3;
      }
    }
    FUN_140005260(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_140005be7:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_140004e64((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_140005d11:
                    /* WARNING: Subroutine does not return */
        FUN_140009f20();
      }
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_140005be7;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_140005d11;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    __FrameHandler3::FrameUnwindToState(param_2,param_4,param_5,iVar1);
  }
  return 1;
}

// FUN_140005d20 @ 0x140005d20
undefined8 * FUN_140005d20(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

// FUN_140005d5c @ 0x140005d5c
undefined8 * FUN_140005d5c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

// __FrameHandler3::CxxCallCatchBlock @ 0x140005d7c
/* Library Function - Single Match
    public: static void * __ptr64 __cdecl __FrameHandler3::CxxCallCatchBlock(struct
   _EXCEPTION_RECORD * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl __FrameHandler3::CxxCallCatchBlock(_EXCEPTION_RECORD *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  ULONG_PTR UVar4;
  ULONG_PTR UVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 local_48 [2];
  
  lVar8 = FUN_14000336c();
  uVar1 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = FUN_14000336c();
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  piVar3 = (int *)param_1->ExceptionInformation[6];
  UVar4 = param_1->ExceptionInformation[5];
  UVar5 = param_1->ExceptionInformation[4];
  plVar6 = (longlong *)param_1->ExceptionInformation[1];
  __except_validate_context_record(UVar5);
  lVar8 = FUN_14000336c();
  *(int **)(lVar8 + 0x20) = piVar3;
  lVar8 = FUN_14000336c();
  *(ULONG_PTR *)(lVar8 + 0x28) = UVar5;
  lVar8 = FUN_14000336c();
  puVar9 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x28));
  if (param_1->ExceptionInformation[7] != 0) {
    FUN_14000336c();
  }
  pvVar10 = (void *)_CallSettingFrame();
  FUN_140004a64((longlong)puVar9);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (iVar7 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar3 + 10)), iVar7 != 0)) {
    __DestructExceptionObject(piVar3);
  }
  lVar8 = FUN_14000336c();
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  lVar8 = FUN_14000336c();
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(UVar4 + 0x1c) + *plVar6) = 0xfffffffffffffffe;
  return pvVar10;
}

// FUN_140005f68 @ 0x140005f68
undefined8 FUN_140005f68(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      lVar2 = FUN_14000336c();
      *(undefined4 *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

// __FrameHandler3::FrameUnwindToState @ 0x140005fec
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = _GetImageBase();
  iVar2 = GetCurrentState(param_1,param_2,param_3);
  lVar4 = FUN_14000336c();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_140009f20();
    }
    lVar5 = (longlong)iVar2;
    lVar4 = _GetImageBase();
    iVar2 = *(int *)((longlong)(int)param_3->dispUnwindMap + lVar4 + lVar5 * 8);
    lVar4 = _GetImageBase();
    if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = _GetImageBase();
      iVar1 = *(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8);
      lVar4 = _GetImageBase();
      lVar4 = lVar4 + iVar1;
    }
    if (lVar4 != 0) {
      SetState(param_1,param_3,iVar2);
      lVar4 = _GetImageBase();
      if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) != 0) {
        _GetImageBase();
        _GetImageBase();
      }
      _CallSettingFrame();
      _SetImageBase(uVar3);
    }
  }
  lVar4 = FUN_14000336c();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_14000336c();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_140009f20();
  }
  SetState(param_1,param_3,iVar2);
  return;
}

// __FrameHandler3::GetHandlerSearchState @ 0x140006178
/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetHandlerSearchState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetHandlerSearchState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  int iVar2;
  __uint64 local_res20;
  
  iVar1 = FUN_140004e5c((longlong)param_3,(ulonglong *)param_2);
  FUN_140004720((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,(longlong *)&local_res20)
  ;
  iVar2 = GetUnwindTryBlock(param_1,param_2,param_3);
  if (iVar2 < iVar1) {
    SetState(&local_res20,param_3,iVar1);
    SetUnwindTryBlock(param_1,param_2,param_3,iVar1);
  }
  else {
    iVar1 = GetUnwindTryBlock(param_1,param_2,param_3);
  }
  return iVar1;
}

// FUN_140006210 @ 0x140006210
undefined1 FUN_140006210(longlong param_1,int *param_2)

{
  _s_ThrowInfo *p_Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 uVar8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140009f20();
  }
  uVar8 = 0;
  iVar5 = 0;
  if (0 < *param_2) {
    do {
      lVar3 = _GetThrowImageBase();
      piVar6 = (int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc) + 4 + lVar3);
      lVar3 = _GetThrowImageBase();
      iVar7 = *(int *)(lVar3 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
      if (0 < iVar7) {
        do {
          lVar3 = _GetThrowImageBase();
          p_Var1 = *(_s_ThrowInfo **)(param_1 + 0x30);
          iVar2 = *piVar6;
          lVar4 = _GetImageBase();
          iVar2 = TypeMatchHelper<__FrameHandler3>
                            ((_s_HandlerType *)
                             ((longlong)param_2[1] + lVar4 + (longlong)iVar5 * 0x14),
                             (_s_CatchableType *)(lVar3 + iVar2),p_Var1);
          if (iVar2 != 0) {
            uVar8 = 1;
            break;
          }
          iVar7 = iVar7 + -1;
          piVar6 = piVar6 + 1;
        } while (0 < iVar7);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_2);
  }
  return uVar8;
}

// Is_bad_exception_allowed @ 0x140006300
/* Library Function - Single Match
    unsigned char __cdecl Is_bad_exception_allowed(struct _s_ESTypeList const * __ptr64)
   
   Library: Visual Studio 2019 Release */

uchar __cdecl Is_bad_exception_allowed(_s_ESTypeList *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)param_1) {
    lVar5 = 0;
    do {
      lVar3 = _GetImageBase();
      if (*(int *)((longlong)*(int *)(param_1 + 4) + 4 + lVar3 + lVar5) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = _GetImageBase();
        iVar1 = *(int *)((longlong)*(int *)(param_1 + 4) + 4 + lVar3 + lVar5);
        lVar3 = _GetImageBase();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = __std_type_info_compare(lVar3 + 8,0x140022b08);
      if (uVar2 == 0) {
        return '\x01';
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar4 < *(int *)param_1);
  }
  return '\0';
}

// FUN_140006388 @ 0x140006388
void FUN_140006388(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014000638e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}

// _CallMemberFunction2 @ 0x140006394
/* Library Function - Single Match
    void __cdecl _CallMemberFunction2(void * __ptr64 const,void * __ptr64 const,void * __ptr64
   const,int)
   
   Library: Visual Studio 2019 Release */

void __cdecl _CallMemberFunction2(void *param_1,void *param_2,void *param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001400063a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(param_1,param_3,param_4);
  return;
}

// _CallSettingFrame @ 0x1400063f0
/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio 2019 Release */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1400032e0();
  (*pcVar1)();
  FUN_140003310();
  FUN_1400032e0();
  return;
}

// FUN_140006430 @ 0x140006430
undefined4 FUN_140006430(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          lVar5 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(lVar5 + (longlong)psVar3);
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            if (sVar1 == 0) {
              return 0;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          *param_1 = 0;
          p_Var2 = FUN_14000a4b4();
          uVar4 = 0x22;
          goto LAB_140006457;
        }
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  p_Var2 = FUN_14000a4b4();
  uVar4 = 0x16;
LAB_140006457:
  *(undefined4 *)p_Var2 = uVar4;
  FUN_14000a3c0();
  return uVar4;
}

// FUN_1400064a8 @ 0x1400064a8
void FUN_1400064a8(LPVOID param_1)

{
  FUN_14000a4d4(param_1);
  return;
}

// _malloc_base @ 0x1400064bc
LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_140023dd0,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140009854();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140009898(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14000a4b4();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

// FUN_1400064c4 @ 0x1400064c4
bool FUN_1400064c4(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  bool bVar3;
  
  if (param_2 < 0x8000000000000000) {
    uVar1 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar3 = true;
    }
    else {
      pvVar2 = _malloc_base(uVar1);
      bVar3 = pvVar2 != (LPVOID)0x0;
      if (bVar3) {
        FUN_14000a4d4(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar2;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      FUN_14000a4d4((LPVOID)0x0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar3 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar3;
}

// FUN_14000656c @ 0x14000656c
bool FUN_14000656c(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  bool bVar3;
  
  if (param_2 < 0x4000000000000000) {
    uVar1 = param_2 * 4;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 < *(ulonglong *)(param_1 + 0x400) || uVar1 - *(ulonglong *)(param_1 + 0x400) == 0)) {
      bVar3 = true;
    }
    else {
      pvVar2 = _malloc_base(uVar1);
      bVar3 = pvVar2 != (LPVOID)0x0;
      if (bVar3) {
        FUN_14000a4d4(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar2;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      FUN_14000a4d4((LPVOID)0x0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar3 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar3;
}

// __crt_stdio_output::is_wide_character_specifier<wchar_t> @ 0x140006618
/* Library Function - Single Match
    bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
   __int64,wchar_t,enum __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  bool bVar1;
  
  if (param_3 == 2) {
    bVar1 = false;
  }
  else {
    if (((param_3 == 3) || (param_3 == 0xc)) || (param_3 == 0xd)) {
      return true;
    }
    bVar1 = (param_1 & 4) != 0;
    if ((param_2 + L'ﾝ' & 0xffefU) != 0) {
      return (param_1 & 4) == 0;
    }
  }
  return bVar1;
}

// FUN_140006658 @ 0x140006658
uint FUN_140006658(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  short sVar1;
  ushort *puVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  __acrt_ptd *p_Var8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  byte bVar13;
  uint uVar14;
  int local_a8;
  
  puVar2 = (ushort *)*param_2;
  if (puVar2 == (ushort *)0x0) {
    p_Var8 = FUN_14000a4b4();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_14000a3c0();
LAB_1400066d1:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1400066d1;
  }
  uVar12 = *puVar2;
  *param_2 = (longlong)(puVar2 + 1);
  bVar13 = param_4 | 2;
  if (uVar12 != 0x2d) {
    bVar13 = param_4;
  }
  if ((uVar12 - 0x2b & 0xfffd) == 0) {
    uVar12 = puVar2[1];
    *param_2 = (longlong)(puVar2 + 2);
  }
  local_a8 = 0xa66;
  uVar10 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_140006a8b;
  if (uVar12 < 0x30) goto LAB_1400069f7;
  iVar7 = 0x30;
  if (uVar12 < 0x3a) {
LAB_14000683d:
    iVar7 = (uint)uVar12 - iVar7;
LAB_1400069f2:
    if (iVar7 == -1) goto LAB_1400069f7;
LAB_140006a19:
    if (iVar7 != 0) goto LAB_140006a7c;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar10 = 8;
      if (param_3 != 0) {
        uVar10 = param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        p_Var8 = FUN_14000a4b4();
        *(undefined4 *)p_Var8 = 0x16;
        FUN_14000a3c0();
      }
      goto LAB_140006a8b;
    }
    uVar12 = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar10 = 0x10;
  }
  else {
    if (uVar12 < 0xff10) {
      if (0x65f < uVar12) {
        if (uVar12 < 0x66a) {
          iVar7 = uVar12 - 0x660;
          goto LAB_1400069f2;
        }
        if (0x6ef < uVar12) {
          if (uVar12 < 0x6fa) {
            iVar7 = uVar12 - 0x6f0;
            goto LAB_1400069f2;
          }
          if (0x965 < uVar12) {
            if (uVar12 < 0x970) {
              iVar7 = uVar12 - 0x966;
              goto LAB_1400069f2;
            }
            if (0x9e5 < uVar12) {
              if (uVar12 < 0x9f0) {
                iVar7 = uVar12 - 0x9e6;
                goto LAB_1400069f2;
              }
              if ((0xa65 < uVar12) &&
                 ((iVar7 = local_a8, uVar12 < 0xa70 ||
                  ((iVar7 = 0xae6, 0xae5 < uVar12 &&
                   ((uVar12 < 0xaf0 ||
                    ((iVar7 = 0xb66, 0xb65 < uVar12 &&
                     ((uVar12 < 0xb70 ||
                      ((iVar7 = 0xc66, 0xc65 < uVar12 &&
                       ((uVar12 < 0xc70 ||
                        ((iVar7 = 0xce6, 0xce5 < uVar12 &&
                         ((uVar12 < 0xcf0 ||
                          ((iVar7 = 0xd66, 0xd65 < uVar12 &&
                           ((uVar12 < 0xd70 ||
                            ((iVar7 = 0xe50, 0xe4f < uVar12 &&
                             ((uVar12 < 0xe5a ||
                              ((iVar7 = 0xed0, 0xecf < uVar12 &&
                               ((uVar12 < 0xeda ||
                                ((iVar7 = 0xf20, 0xf1f < uVar12 &&
                                 ((uVar12 < 0xf2a ||
                                  ((iVar7 = 0x1040, 0x103f < uVar12 &&
                                   ((uVar12 < 0x104a ||
                                    ((iVar7 = 0x17e0, 0x17df < uVar12 &&
                                     ((uVar12 < 0x17ea ||
                                      (iVar7 = 0x1810, (ushort)(uVar12 + 0xe7f0) < 10)))))))))))))))
                               ))))))))))))))))))))))))))))) goto LAB_14000683d;
            }
          }
        }
      }
    }
    else if (uVar12 < 0xff1a) {
      iVar7 = uVar12 - 0xff10;
      goto LAB_1400069f2;
    }
LAB_1400069f7:
    uVar10 = (uint)uVar12;
    if ((uVar12 - 0x41 < 0x1a) || (uVar12 - 0x61 < 0x1a)) {
      if (uVar12 - 0x61 < 0x1a) {
        uVar10 = uVar12 - 0x20;
      }
      iVar7 = uVar10 - 0x37;
      goto LAB_140006a19;
    }
LAB_140006a7c:
    uVar10 = 10;
  }
  if (param_3 != 0) {
    uVar10 = param_3;
  }
LAB_140006a8b:
  uVar14 = 0;
  do {
    if (uVar12 < 0x30) goto LAB_140006c5a;
    if (uVar12 < 0x3a) {
      uVar11 = uVar12 - 0x30;
LAB_140006c55:
      if (uVar11 == 0xffffffff) goto LAB_140006c5a;
    }
    else {
      if (uVar12 < 0xff10) {
        if (0x65f < uVar12) {
          if (uVar12 < 0x66a) {
            uVar11 = uVar12 - 0x660;
            goto LAB_140006c55;
          }
          if (0x6ef < uVar12) {
            iVar7 = 0x6f0;
            if (uVar12 < 0x6fa) {
LAB_140006b03:
              uVar11 = (uint)uVar12 - iVar7;
              goto LAB_140006c55;
            }
            if (0x965 < uVar12) {
              iVar7 = 0x966;
              if (uVar12 < 0x970) goto LAB_140006b03;
              if (0x9e5 < uVar12) {
                iVar7 = 0x9e6;
                if (uVar12 < 0x9f0) goto LAB_140006b03;
                if (0xa65 < uVar12) {
                  iVar7 = local_a8;
                  if (uVar12 < 0xa70) goto LAB_140006b03;
                  iVar7 = 0xae6;
                  if (0xae5 < uVar12) {
                    if (uVar12 < 0xaf0) goto LAB_140006b03;
                    iVar7 = 0xb66;
                    if (0xb65 < uVar12) {
                      if (uVar12 < 0xb70) goto LAB_140006b03;
                      iVar7 = 0xc66;
                      if (0xc65 < uVar12) {
                        if (uVar12 < 0xc70) goto LAB_140006b03;
                        iVar7 = 0xce6;
                        if (0xce5 < uVar12) {
                          if (uVar12 < 0xcf0) goto LAB_140006b03;
                          iVar7 = 0xd66;
                          if (0xd65 < uVar12) {
                            if (uVar12 < 0xd70) goto LAB_140006b03;
                            iVar7 = 0xe50;
                            if (0xe4f < uVar12) {
                              if (uVar12 < 0xe5a) goto LAB_140006b03;
                              iVar7 = 0xed0;
                              if (0xecf < uVar12) {
                                if (uVar12 < 0xeda) goto LAB_140006b03;
                                iVar7 = 0xf20;
                                if (0xf1f < uVar12) {
                                  if (uVar12 < 0xf2a) goto LAB_140006b03;
                                  iVar7 = 0x1040;
                                  if (0x103f < uVar12) {
                                    if (uVar12 < 0x104a) goto LAB_140006b03;
                                    iVar7 = 0x17e0;
                                    if (0x17df < uVar12) {
                                      if (uVar12 < 0x17ea) goto LAB_140006b03;
                                      if ((ushort)(uVar12 + 0xe7f0) < 10) {
                                        uVar11 = uVar12 - 0x1810;
                                        goto LAB_140006c55;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (uVar12 < 0xff1a) {
        uVar11 = uVar12 - 0xff10;
        goto LAB_140006c55;
      }
LAB_140006c5a:
      uVar11 = (uint)uVar12;
      if (((uVar12 < 0x41) || (0x5a < uVar12)) && ((uVar11 < 0x61 || (0x7a < uVar12)))) {
        uVar11 = 0xffffffff;
      }
      else {
        if ((ushort)(uVar12 - 0x61) < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar11 = uVar11 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if (uVar10 <= uVar11) break;
    uVar12 = *puVar4;
    uVar11 = uVar14 * uVar10 + uVar11;
    *param_2 = (longlong)(puVar4 + 1);
    bVar13 = bVar13 | (uVar11 < uVar14 * uVar10 || (uint)(0xffffffff / (ulonglong)uVar10) < uVar14)
                      << 2 | 8U;
    uVar14 = uVar11;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((uVar12 != 0) && (puVar4[-1] != uVar12)) {
    p_Var8 = FUN_14000a4b4();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_14000a3c0();
  }
  if ((bVar13 & 8) == 0) {
    *param_2 = (longlong)puVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = puVar2;
    return 0;
  }
  if ((bVar13 & 4) == 0) {
    if ((bVar13 & 1) == 0) {
      if ((bVar13 & 2) == 0) goto LAB_140006da0;
LAB_140006d9d:
      uVar14 = -uVar14;
      goto LAB_140006da0;
    }
    if ((bVar13 & 2) == 0) {
      if (uVar14 < 0x80000000) goto LAB_140006da0;
    }
    else if (uVar14 < 0x80000001) goto LAB_140006d9d;
    bVar9 = 1;
    bVar6 = bVar13;
  }
  else {
    bVar9 = bVar13;
    bVar6 = 1;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  if ((bVar6 & bVar9) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((bVar13 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVar14 = 0xffffffff;
LAB_140006da0:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar14;
  }
  return uVar14;
}

// FUN_140006dd0 @ 0x140006dd0
ulonglong FUN_140006dd0(longlong param_1)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_140006e4e;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_140006e4e;
        }
        goto LAB_140006e1e;
      }
LAB_140006f23:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_140006e4e;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_140006e1e:
    if (iVar9 == 1) goto LAB_140006f23;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_140006e4e:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_14000656c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_1400075d8(param_1,uVar7);
  }
  else {
    FUN_1400073f4(param_1,(uint)uVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}

// FUN_140006fdc @ 0x140006fdc
ulonglong FUN_140006fdc(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_14000705a;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_14000705a;
        }
        goto LAB_14000702a;
      }
LAB_14000712f:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_14000705a;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_14000702a:
    if (iVar9 == 1) goto LAB_14000712f;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_14000705a:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_14000656c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_140007660(param_1,uVar7,param_2);
  }
  else {
    FUN_140007478(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}

// FUN_1400071e8 @ 0x1400071e8
ulonglong FUN_1400071e8(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_140007266;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_140007266;
        }
        goto LAB_140007236;
      }
LAB_14000733b:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_140007266;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_140007236:
    if (iVar9 == 1) goto LAB_14000733b;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_140007266:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_14000656c(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (lVar8 == 8) {
    FUN_140007724(param_1,uVar7,param_2);
  }
  else {
    FUN_140007538(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  psVar5 = (short *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (psVar5 = *(short **)(param_1 + 0x40), *psVar5 != 0x30)))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    **(undefined2 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}

// FUN_1400073f4 @ 0x1400073f4
void FUN_1400073f4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  short *psVar2;
  longlong lVar3;
  short *psVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x100;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar4 = (short *)(lVar3 + uVar1 * 2 + -2);
  *(short **)(param_1 + 0x40) = psVar4;
  psVar2 = psVar4;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *psVar2 = ((ushort)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar2 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar4 - (longlong)psVar2 >> 1);
  *(short **)(param_1 + 0x40) = psVar2 + 1;
  return;
}

// FUN_140007478 @ 0x140007478
void FUN_140007478(longlong param_1,uint param_2,byte param_3)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  ushort uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x100;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar1 = (short *)(lVar5 + (uVar2 - 1) * 2);
  *(short **)(param_1 + 0x40) = psVar1;
  psVar3 = psVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    uVar4 = (short)param_2 + (short)((ulonglong)param_2 / 10) * -10 + 0x30;
    param_2 = (uint)((ulonglong)param_2 / 10);
    if (0x39 < uVar4) {
      uVar4 = (ushort)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar4);
    }
    *psVar3 = (short)(char)uVar4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar3 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar1 - (longlong)psVar3 >> 1);
  *(short **)(param_1 + 0x40) = psVar3 + 1;
  return;
}

// FUN_140007538 @ 0x140007538
void FUN_140007538(longlong param_1,uint param_2,byte param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x100;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  puVar1 = (ushort *)(lVar5 + (uVar2 - 1) * 2);
  *(ushort **)(param_1 + 0x40) = puVar1;
  puVar3 = puVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    uVar4 = (ushort)param_2;
    param_2 = param_2 >> 4;
    uVar4 = (uVar4 & 0xf) + 0x30;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    if (0x39 < uVar4) {
      uVar4 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar4);
    }
    *puVar3 = uVar4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    puVar3 = *(ushort **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)puVar1 - (longlong)puVar3 >> 1);
  *(ushort **)(param_1 + 0x40) = puVar3 + 1;
  return;
}

// FUN_1400075d8 @ 0x1400075d8
void FUN_1400075d8(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  short *psVar2;
  longlong lVar3;
  short *psVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x100;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar4 = (short *)(lVar3 + uVar1 * 2 + -2);
  *(short **)(param_1 + 0x40) = psVar4;
  psVar2 = psVar4;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *psVar2 = ((ushort)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar2 = *(short **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar4 - (longlong)psVar2 >> 1);
  *(short **)(param_1 + 0x40) = psVar2 + 1;
  return;
}

// FUN_140007660 @ 0x140007660
void FUN_140007660(longlong param_1,ulonglong param_2,byte param_3)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  ushort uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x100;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  psVar1 = (short *)(lVar5 + (uVar2 - 1) * 2);
  *(short **)(param_1 + 0x40) = psVar1;
  psVar3 = psVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    uVar4 = (short)param_2 + (short)(param_2 / 10) * -10 + 0x30;
    if (0x39 < uVar4) {
      uVar4 = (ushort)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar4);
    }
    *psVar3 = (short)(char)uVar4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    psVar3 = *(short **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)psVar1 - (longlong)psVar3 >> 1);
  *(short **)(param_1 + 0x40) = psVar3 + 1;
  return;
}

// FUN_140007724 @ 0x140007724
void FUN_140007724(longlong param_1,ulonglong param_2,byte param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x100;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 2;
  }
  puVar1 = (ushort *)(lVar5 + (uVar2 - 1) * 2);
  *(ushort **)(param_1 + 0x40) = puVar1;
  puVar3 = puVar1;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    uVar4 = (ushort)param_2;
    param_2 = param_2 >> 4;
    uVar4 = (uVar4 & 0xf) + 0x30;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    if (0x39 < uVar4) {
      uVar4 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar4);
    }
    *puVar3 = uVar4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -2;
    puVar3 = *(ushort **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)((longlong)puVar1 - (longlong)puVar3 >> 1);
  *(ushort **)(param_1 + 0x40) = puVar3 + 1;
  return;
}

// FUN_1400077c4 @ 0x1400077c4
void FUN_1400077c4(char *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != *(char *)**(undefined8 **)(*param_2 + 0xf8)))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    pcVar3 = pcVar3 + -2;
    if (*pcVar2 != *(char *)**(undefined8 **)(*param_2 + 0xf8)) {
      pcVar3 = pcVar2;
    }
    lVar4 = (longlong)param_1 - (longlong)pcVar3;
    do {
      cVar1 = pcVar3[lVar4];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}

// FUN_140007830 @ 0x140007830
longlong FUN_140007830(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_14000bf20(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_140009f20();
    }
  }
  return *param_1;
}

// FUN_140007898 @ 0x140007898
undefined1 FUN_140007898(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  plVar1 = *(longlong **)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 2;
  uVar2 = *(undefined8 *)((longlong)plVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_140006658(plVar1,(longlong *)&local_18,10,1);
  *param_2 = uVar3;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (uVar4 = 0, *(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (uVar4 = 0, *(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)((longlong)plVar1 + 0x2c) = uVar2;
  return uVar4;
}

// FUN_140007928 @ 0x140007928
undefined4 FUN_140007928(ulonglong *param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  ushort *puVar9;
  ulonglong *puVar10;
  undefined4 uVar11;
  
  plVar7 = (longlong *)param_1[1];
  uVar11 = 0xffffffff;
  if (param_1[0x8c] == 0) {
    *(undefined1 *)(plVar7 + 6) = 1;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = 0x16;
LAB_140007be1:
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar7);
  }
  else {
    puVar9 = (ushort *)param_1[2];
    if (puVar9 == (ushort *)0x0) {
      *(undefined1 *)(plVar7 + 6) = 1;
      *(undefined4 *)((longlong)plVar7 + 0x2c) = 0x16;
      FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1]);
      uVar11 = 0xffffffff;
    }
    else {
      iVar4 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar4;
      while (iVar4 != 2) {
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        uVar1 = *puVar9;
        while( true ) {
          puVar9 = puVar9 + 1;
          param_1[2] = (ulonglong)puVar9;
          *(ushort *)((longlong)param_1 + 0x3a) = uVar1;
          if ((uVar1 == 0) || (iVar4 = (int)param_1[4], iVar4 < 0)) break;
          bVar8 = 0;
          if ((ushort)(uVar1 - 0x20) < 0x5b) {
            bVar8 = (&DAT_140017931)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
          }
          bVar8 = (&DAT_140017930)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar8 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar8;
          if (7 < bVar8) {
            uVar6 = param_1[1];
            *(undefined1 *)(uVar6 + 0x30) = 1;
            *(undefined4 *)(uVar6 + 0x2c) = 0x16;
            plVar7 = (longlong *)param_1[1];
            goto LAB_140007be1;
          }
          if (bVar8 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
            uVar6 = param_1[0x8c];
            if (*(longlong *)(uVar6 + 0x10) == *(longlong *)(uVar6 + 8)) {
              if (*(char *)(uVar6 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = iVar4 + 1;
              }
            }
            else {
              *(int *)(param_1 + 4) = iVar4 + 1;
              *(longlong *)(uVar6 + 0x10) = *(longlong *)(uVar6 + 0x10) + 1;
              **(ushort **)param_1[0x8c] = uVar1;
              *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 2;
            }
          }
          else if (bVar8 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar8 == 2) {
            if (uVar1 == 0x20) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (uVar1 == 0x23) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (uVar1 == 0x2b) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (uVar1 == 0x2d) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (uVar1 == 0x30) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar8 == 3) {
              if (uVar1 == 0x2a) {
                piVar2 = (int *)param_1[3];
                param_1[3] = (ulonglong)(piVar2 + 2);
                iVar4 = *piVar2;
                *(int *)((longlong)param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar4;
                }
LAB_140007acf:
                cVar3 = '\x01';
              }
              else {
                puVar10 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_140007a78:
                cVar3 = FUN_140007898((longlong)param_1,(uint *)puVar10);
              }
            }
            else {
              if (bVar8 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_140007b7e;
              }
              if (bVar8 == 5) {
                if (uVar1 == 0x2a) {
                  piVar2 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar2 + 2);
                  iVar4 = *piVar2;
                  if (iVar4 < 0) {
                    iVar4 = -1;
                  }
                  *(int *)(param_1 + 6) = iVar4;
                  goto LAB_140007acf;
                }
                puVar10 = param_1 + 6;
                goto LAB_140007a78;
              }
              if (bVar8 == 6) {
                uVar6 = FUN_140007c00(param_1);
                cVar3 = (char)uVar6;
              }
              else {
                if (bVar8 != 7) {
                  return 0xffffffff;
                }
                uVar5 = FUN_140007db0(param_1);
                cVar3 = (char)uVar5;
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_140007b7e:
          puVar9 = (ushort *)param_1[2];
          uVar1 = *puVar9;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar4 = (int)param_1[0x8d];
      }
      uVar11 = (undefined4)param_1[4];
    }
  }
  return uVar11;
}

// FUN_140007c00 @ 0x140007c00
ulonglong FUN_140007c00(ulonglong *param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  ulonglong uVar4;
  short *psVar5;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x3a);
  psVar5 = (short *)(ulonglong)uVar1;
  if (uVar1 == 0x46) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar4 = FUN_140007db0(param_1);
      return uVar4;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_140007c37:
      uVar4 = param_1[1];
      *(undefined1 *)(uVar4 + 0x30) = 1;
      *(undefined4 *)(uVar4 + 0x2c) = 0x16;
      uVar4 = FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_140007c37;
    if (uVar1 == 0x49) {
      psVar3 = (short *)param_1[2];
      sVar2 = *psVar3;
      if ((sVar2 == 0x33) && (psVar3[1] == 0x32)) {
        psVar5 = psVar3 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (ulonglong)psVar5;
      }
      else if (sVar2 == 0x36) {
        psVar5 = (short *)0x0;
        if (psVar3[1] == 0x34) {
          psVar5 = psVar3 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (ulonglong)psVar5;
        }
      }
      else {
        psVar5 = (short *)(ulonglong)(ushort)(sVar2 - 0x58U);
        if (((ushort)(sVar2 - 0x58U) < 0x21) &&
           ((0x120821001U >> ((ulonglong)psVar5 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (uVar1 == 0x4c) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (uVar1 == 0x54) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (uVar1 == 0x68) {
        if (*(short *)param_1[2] == 0x68) {
          param_1[2] = (ulonglong)((short *)param_1[2] + 1);
          psVar5 = (short *)0x1;
        }
        else {
          psVar5 = (short *)0x2;
        }
      }
      else {
        if (uVar1 == 0x6a) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_140007da6;
        }
        if (uVar1 != 0x6c) {
          if (uVar1 == 0x74) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (uVar1 == 0x77) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (uVar1 == 0x7a) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_140007da6;
        }
        if (*(short *)param_1[2] == 0x6c) {
          param_1[2] = (ulonglong)((short *)param_1[2] + 1);
          psVar5 = (short *)0x4;
        }
        else {
          psVar5 = (short *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)psVar5;
    }
  }
LAB_140007da6:
  return CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
}

// FUN_140007db0 @ 0x140007db0
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140007db0(ulonglong *param_1)

{
  ulonglong *puVar1;
  string_output_adapter<wchar_t> *this;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  ushort uVar7;
  longlong *plVar8;
  undefined4 extraout_var;
  longlong *extraout_RAX;
  byte bVar9;
  ulonglong uVar10;
  int iVar11;
  undefined2 uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar17;
  undefined1 auStackY_78 [32];
  ushort local_48 [2];
  undefined4 local_44;
  undefined2 local_40;
  longlong *local_38;
  ulonglong uVar16;
  
  plVar8 = (longlong *)(DAT_140022040 ^ (ulonglong)auStackY_78);
  uVar12 = 0x78;
  uVar7 = *(ushort *)((longlong)param_1 + 0x3a);
  local_38 = plVar8;
  if (uVar7 < 0x65) {
    if (uVar7 == 100) {
LAB_140007e8d:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_140007e91:
      plVar8 = (longlong *)FUN_140006fdc((longlong)param_1,0);
    }
    else if (uVar7 < 0x54) {
      if (uVar7 == 0x53) {
LAB_140007ed3:
        plVar8 = (longlong *)FUN_140008678(param_1);
      }
      else {
        if (uVar7 != 0x41) {
          if (uVar7 == 0x43) {
LAB_140007e47:
            plVar8 = (longlong *)FUN_1400084fc(param_1);
            goto LAB_140007ef5;
          }
          if (((uVar7 != 0x45) && (uVar7 != 0x46)) && (uVar7 != 0x47)) goto LAB_140007efc;
        }
LAB_140007e1f:
        plVar8 = (longlong *)FUN_140008294(param_1);
      }
    }
    else {
      if (uVar7 == 0x58) goto LAB_140007eeb;
      if (uVar7 != 0x5a) {
        if (uVar7 != 0x61) {
          if (uVar7 != 99) goto LAB_140007efc;
          goto LAB_140007e47;
        }
        goto LAB_140007e1f;
      }
      plVar8 = (longlong *)FUN_140008214(param_1);
    }
  }
  else if (uVar7 < 0x70) {
    if (uVar7 == 0x6f) {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      plVar8 = (longlong *)FUN_140006dd0((longlong)param_1);
    }
    else {
      if (((uVar7 == 0x65) || (uVar7 == 0x66)) || (uVar7 == 0x67)) goto LAB_140007e1f;
      if (uVar7 == 0x69) goto LAB_140007e8d;
      if (uVar7 != 0x6e) goto LAB_140007efc;
      plVar8 = (longlong *)FUN_1400085c0((longlong)param_1);
    }
  }
  else {
    if (uVar7 == 0x70) {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_140007eeb:
      bVar9 = 1;
    }
    else {
      if (uVar7 == 0x73) goto LAB_140007ed3;
      if (uVar7 == 0x75) goto LAB_140007e91;
      if (uVar7 != 0x78) goto LAB_140007efc;
      bVar9 = 0;
    }
    plVar8 = (longlong *)FUN_1400071e8((longlong)param_1,bVar9);
  }
LAB_140007ef5:
  uVar14 = 0;
  if ((char)plVar8 == '\0') {
LAB_140007efc:
    return (ulonglong)plVar8 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_1400081e7;
  uVar15 = (uint)param_1[5];
  local_44 = 0;
  local_40 = 0;
  uVar10 = uVar14;
  if ((uVar15 >> 4 & 1) != 0) {
    if ((uVar15 >> 6 & 1) == 0) {
      if ((uVar15 & 1) != 0) {
        uVar7 = 0x2b;
        goto LAB_140007f3b;
      }
      if ((uVar15 >> 1 & 1) == 0) goto LAB_140007f61;
      local_44 = 0x20;
    }
    else {
      uVar7 = 0x2d;
LAB_140007f3b:
      local_44 = (uint)uVar7;
    }
    uVar10 = 1;
  }
LAB_140007f61:
  sVar2 = *(short *)((longlong)param_1 + 0x3a);
  if (((sVar2 - 0x58U & 0xffdf) != 0) || (bVar6 = true, (uVar15 >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((bVar6) || ((sVar2 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_44 + uVar10 * 2) = 0x30;
    if ((sVar2 == 0x58) || (sVar2 == 0x41)) {
      uVar12 = 0x58;
    }
    *(undefined2 *)((longlong)&local_44 + uVar10 * 2 + 2) = uVar12;
    uVar10 = uVar10 + 2;
  }
  iVar11 = (*(int *)((longlong)param_1 + 0x2c) - (int)uVar10) - (int)param_1[9];
  if (((uVar15 & 0xc) == 0) && (0 < iVar11)) {
    iVar13 = (int)param_1[4];
    uVar16 = uVar14;
    do {
      uVar3 = param_1[0x8c];
      if (*(longlong *)(uVar3 + 0x10) == *(longlong *)(uVar3 + 8)) {
        if (*(char *)(uVar3 + 0x18) == '\0') {
          iVar13 = -1;
        }
        else {
          iVar13 = iVar13 + 1;
        }
        *(int *)(param_1 + 4) = iVar13;
      }
      else {
        *(int *)(param_1 + 4) = iVar13 + 1;
        *(longlong *)(uVar3 + 0x10) = *(longlong *)(uVar3 + 0x10) + 1;
        **(undefined2 **)param_1[0x8c] = 0x20;
        *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 2;
      }
      iVar13 = (int)param_1[4];
    } while ((iVar13 != -1) &&
            (uVar15 = (int)uVar16 + 1, uVar16 = (ulonglong)uVar15, (int)uVar15 < iVar11));
  }
  puVar1 = param_1 + 4;
  this = (string_output_adapter<wchar_t> *)(param_1 + 0x8c);
  __crt_stdio_output::string_output_adapter<wchar_t>::write_string
            (this,(wchar_t *)&local_44,(int)uVar10,(int *)puVar1,
             (__crt_deferred_errno_cache *)param_1[1]);
  uVar15 = (uint)param_1[5] >> 3;
  plVar8 = (longlong *)(ulonglong)uVar15;
  if (((uVar15 & 1) != 0) && ((((uint)param_1[5] >> 2 & 1) == 0 && (0 < iVar11)))) {
    iVar13 = (int)*puVar1;
    uVar10 = uVar14;
    do {
      lVar4 = *(longlong *)this;
      plVar8 = *(longlong **)(lVar4 + 8);
      if (*(longlong **)(lVar4 + 0x10) == plVar8) {
        if (*(char *)(lVar4 + 0x18) == '\0') {
          iVar13 = -1;
        }
        else {
          iVar13 = iVar13 + 1;
        }
        *(int *)puVar1 = iVar13;
      }
      else {
        *(int *)puVar1 = iVar13 + 1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)this = 0x30;
        plVar8 = *(longlong **)this;
        *plVar8 = *plVar8 + 2;
      }
      iVar13 = (int)*puVar1;
    } while ((iVar13 != -1) &&
            (uVar15 = (int)uVar10 + 1, uVar10 = (ulonglong)uVar15, (int)uVar15 < iVar11));
  }
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') && (0 < (int)param_1[9])) {
    plVar5 = (longlong *)param_1[1];
    if ((char)plVar5[5] == '\0') {
      plVar8 = (longlong *)FUN_140008790(plVar5);
    }
    pbVar17 = (byte *)param_1[8];
    uVar10 = uVar14;
    if ((int)param_1[9] != 0) {
      do {
        local_48[0] = 0;
        iVar13 = FUN_14000b61c(local_48,pbVar17,(longlong)*(int *)(plVar5[3] + 8),
                               (longlong *)param_1[1]);
        plVar8 = (longlong *)CONCAT44(extraout_var,iVar13);
        if (iVar13 < 1) {
          *(int *)puVar1 = -1;
          break;
        }
        lVar4 = *(longlong *)this;
        plVar8 = *(longlong **)(lVar4 + 8);
        if (*(longlong **)(lVar4 + 0x10) == plVar8) {
          if (*(char *)(lVar4 + 0x18) == '\0') {
            *(int *)puVar1 = -1;
          }
          else {
            *(int *)puVar1 = (int)*puVar1 + 1;
          }
        }
        else {
          *(int *)puVar1 = (int)*puVar1 + 1;
          *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
          *(ushort *)**(undefined8 **)this = local_48[0];
          plVar8 = *(longlong **)this;
          *plVar8 = *plVar8 + 2;
        }
        pbVar17 = pbVar17 + iVar13;
        uVar15 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
      } while (uVar15 != (uint)param_1[9]);
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              (this,(wchar_t *)param_1[8],(int)param_1[9],(int *)puVar1,
               (__crt_deferred_errno_cache *)param_1[1]);
    plVar8 = extraout_RAX;
  }
  iVar13 = (int)*puVar1;
  if (((-1 < iVar13) &&
      (uVar15 = (uint)param_1[5] >> 2, plVar8 = (longlong *)(ulonglong)uVar15, (uVar15 & 1) != 0))
     && (0 < iVar11)) {
    do {
      lVar4 = *(longlong *)this;
      plVar8 = *(longlong **)(lVar4 + 8);
      if (*(longlong **)(lVar4 + 0x10) == plVar8) {
        if (*(char *)(lVar4 + 0x18) == '\0') {
          iVar13 = -1;
        }
        else {
          iVar13 = iVar13 + 1;
        }
        *(int *)puVar1 = iVar13;
      }
      else {
        *(int *)puVar1 = iVar13 + 1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)this = 0x20;
        plVar8 = *(longlong **)this;
        *plVar8 = *plVar8 + 2;
      }
      iVar13 = (int)*puVar1;
    } while ((iVar13 != -1) &&
            (uVar15 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar15, (int)uVar15 < iVar11));
  }
LAB_1400081e7:
  return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
}

// FUN_140008214 @ 0x140008214
undefined8 FUN_140008214(__uint64 *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  __uint64 _Var4;
  bool bVar5;
  ulonglong uVar6;
  
  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 1);
  puVar3 = (ushort *)*puVar2;
  if ((puVar3 == (ushort *)0x0) || (_Var4 = *(__uint64 *)(puVar3 + 4), _Var4 == 0)) {
    uVar6 = 6;
    param_1[8] = (__uint64)"(null)";
  }
  else {
    bVar5 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                       *(length_modifier *)((longlong)param_1 + 0x34));
    param_1[8] = _Var4;
    uVar1 = *puVar3;
    uVar6 = (ulonglong)uVar1;
    if (bVar5) {
      *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
      uVar6 = (ulonglong)(uVar1 >> 1);
      goto LAB_14000827c;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
LAB_14000827c:
  *(int *)(param_1 + 9) = (int)uVar6;
  return CONCAT71((int7)(uVar6 >> 8),1);
}

// FUN_140008294 @ 0x140008294
undefined8 FUN_140008294(ulonglong *param_1)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  double *pdVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  undefined7 uVar10;
  rsize_t rVar11;
  byte *pbVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  longlong lVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  double local_res8;
  
  *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
  iVar8 = (int)param_1[6];
  if (iVar8 < 0) {
    iVar8 = (-(uint)((*(short *)((longlong)param_1 + 0x3a) - 0x41U & 0xffdf) != 0) & 0xfffffff9) +
            0xd;
    *(int *)(param_1 + 6) = iVar8;
  }
  else if ((iVar8 == 0) &&
          ((*(short *)((longlong)param_1 + 0x3a) == 0x67 ||
           (*(short *)((longlong)param_1 + 0x3a) == 0x47)))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar8 = 1;
  }
  pauVar1 = (undefined1 (*) [16])(param_1 + 10);
  bVar5 = FUN_1400064c4((longlong)pauVar1,(longlong)(iVar8 + 0x15d),param_1[1]);
  uVar18 = 0x200;
  if (bVar5) {
    uVar14 = (uint)param_1[6];
  }
  else {
    if (param_1[0x8b] == 0) {
      iVar8 = 0x200;
    }
    else {
      iVar8 = (int)(param_1[0x8a] >> 1);
    }
    uVar14 = iVar8 - 0x15d;
    *(uint *)(param_1 + 6) = uVar14;
  }
  pauVar9 = (undefined1 (*) [16])param_1[0x8b];
  if ((undefined1 (*) [16])param_1[0x8b] == (undefined1 (*) [16])0x0) {
    pauVar9 = pauVar1;
  }
  param_1[8] = (ulonglong)pauVar9;
  pdVar3 = (double *)param_1[3];
  param_1[3] = (ulonglong)(pdVar3 + 1);
  pauVar9 = (undefined1 (*) [16])param_1[0x8b];
  local_res8 = *pdVar3;
  if (pauVar9 == (undefined1 (*) [16])0x0) {
    puVar19 = param_1 + 0x4a;
    rVar11 = 0x200;
    pauVar9 = pauVar1;
  }
  else {
    puVar19 = (ulonglong *)(*pauVar9 + (param_1[0x8a] >> 1));
    rVar11 = param_1[0x8a] >> 1;
    uVar18 = param_1[0x8a] >> 1;
  }
  FUN_14000b334(&local_res8,pauVar9,uVar18,(char *)puVar19,rVar11,
                (int)*(char *)((longlong)param_1 + 0x3a),uVar14,*param_1,1,(longlong *)param_1[1]);
  if ((((uint)param_1[5] >> 5 & 1) != 0) && ((int)param_1[6] == 0)) {
    plVar4 = (longlong *)param_1[1];
    if ((char)plVar4[5] == '\0') {
      FUN_140008790(plVar4);
    }
    pbVar12 = (byte *)param_1[8];
    plVar4 = (longlong *)plVar4[3];
    uVar18 = (ulonglong)*pbVar12;
    if (*(char *)(uVar18 + plVar4[0x22]) != 'e') {
      do {
        pbVar12 = pbVar12 + 1;
        uVar18 = (ulonglong)*pbVar12;
      } while ((*(byte *)(*plVar4 + uVar18 * 2) & 4) != 0);
    }
    bVar5 = *(char *)(uVar18 + plVar4[0x22]) == 'x';
    if (bVar5) {
      uVar18 = (ulonglong)pbVar12[2];
    }
    pbVar15 = pbVar12 + 2;
    if (!bVar5) {
      pbVar15 = pbVar12;
    }
    *pbVar15 = **(byte **)plVar4[0x1f];
    do {
      pbVar15 = pbVar15 + 1;
      bVar2 = *pbVar15;
      bVar17 = (byte)uVar18;
      *pbVar15 = bVar17;
      uVar18 = (ulonglong)bVar2;
    } while (bVar17 != 0);
  }
  uVar7 = *(short *)((longlong)param_1 + 0x3a) - 0x47;
  uVar18 = (ulonglong)uVar7;
  if (((uVar7 & 0xffdf) == 0) &&
     (uVar14 = (uint)param_1[5] >> 5, uVar18 = (ulonglong)uVar14, (uVar14 & 1) == 0)) {
    plVar4 = (longlong *)param_1[1];
    if ((char)plVar4[5] == '\0') {
      FUN_140008790(plVar4);
    }
    uVar18 = FUN_1400077c4((char *)param_1[8],plVar4 + 3);
  }
  pcVar13 = (char *)param_1[8];
  cVar6 = *pcVar13;
  uVar10 = (undefined7)(uVar18 >> 8);
  if (cVar6 == '-') {
    *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x40;
    pcVar13 = pcVar13 + 1;
    param_1[8] = (ulonglong)pcVar13;
    cVar6 = *pcVar13;
  }
  if (((byte)(cVar6 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar6 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = (uint)param_1[5] & 0xfffffff7;
    uVar10 = 0;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0x73;
  }
  lVar16 = -1;
  do {
    lVar16 = lVar16 + 1;
  } while (pcVar13[lVar16] != '\0');
  *(int *)(param_1 + 9) = (int)lVar16;
  return CONCAT71(uVar10,1);
}

// FUN_1400084fc @ 0x1400084fc
undefined8 FUN_1400084fc(__uint64 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 extraout_var_00;
  __uint64 *p_Var6;
  byte local_res8;
  undefined1 local_res9;
  undefined7 extraout_var;
  
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  puVar2 = (undefined2 *)param_1[3];
  param_1[3] = (__uint64)(puVar2 + 4);
  uVar1 = *puVar2;
  local_res9 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                         (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                          *(length_modifier *)((longlong)param_1 + 0x34));
  uVar5 = CONCAT71(extraout_var,local_res9);
  if ((bool)local_res9) {
    p_Var6 = (__uint64 *)param_1[0x8b];
    if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
      p_Var6 = param_1 + 10;
    }
    *(undefined2 *)p_Var6 = uVar1;
  }
  else {
    local_res8 = (byte)uVar1;
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_140008790(plVar3);
    }
    p_Var6 = (__uint64 *)param_1[0x8b];
    if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
      p_Var6 = param_1 + 10;
    }
    iVar4 = FUN_14000b61c((ushort *)p_Var6,&local_res8,(longlong)*(int *)(plVar3[3] + 8),plVar3);
    uVar5 = CONCAT44(extraout_var_00,iVar4);
    if (iVar4 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  *(undefined4 *)(param_1 + 9) = 1;
  p_Var6 = (__uint64 *)param_1[0x8b];
  if ((__uint64 *)param_1[0x8b] == (__uint64 *)0x0) {
    p_Var6 = param_1 + 10;
  }
  param_1[8] = (__uint64)p_Var6;
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}

// FUN_1400085c0 @ 0x1400085c0
ulonglong FUN_1400085c0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  bVar4 = FUN_14000b950();
  if ((int)CONCAT71(extraout_var,bVar4) == 0) goto LAB_1400085e5;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71(extraout_var,*(undefined1 *)(param_1 + 0x20));
          *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x20);
          goto LAB_14000865e;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_14000865e;
        }
        goto LAB_14000864d;
      }
LAB_14000866f:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_14000865e;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_14000864d:
    if (iVar6 == 1) goto LAB_14000866f;
    if (iVar6 != 2) {
LAB_1400085e5:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_14000865e:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}

// FUN_140008678 @ 0x140008678
undefined8 FUN_140008678(__uint64 *param_1)

{
  __uint64 *p_Var1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined1 (*pauVar5) [32];
  wchar_t *pwVar6;
  
  p_Var1 = (__uint64 *)param_1[3];
  param_1[3] = (__uint64)(p_Var1 + 1);
  pwVar6 = (wchar_t *)*p_Var1;
  iVar3 = (int)param_1[6];
  if ((int)param_1[6] == -1) {
    iVar3 = 0x7fffffff;
  }
  param_1[8] = (__uint64)pwVar6;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((longlong)param_1 + 0x3a),
                     *(length_modifier *)((longlong)param_1 + 0x34));
  if (bVar2) {
    if ((undefined1 (*) [32])pwVar6 == (undefined1 (*) [32])0x0) {
      pwVar6 = L"(null)";
      param_1[8] = (__uint64)L"(null)";
    }
    *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
    uVar4 = FUN_14000a570((undefined1 (*) [32])pwVar6,(longlong)iVar3);
  }
  else {
    pauVar5 = (undefined1 (*) [32])"(null)";
    if ((undefined1 (*) [32])pwVar6 != (undefined1 (*) [32])0x0) {
      pauVar5 = (undefined1 (*) [32])pwVar6;
    }
    param_1[8] = (__uint64)pauVar5;
    iVar3 = FUN_140008714((longlong)param_1,iVar3);
    uVar4 = CONCAT44(extraout_var,iVar3);
  }
  *(int *)(param_1 + 9) = (int)uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}

// FUN_140008714 @ 0x140008714
int FUN_140008714(longlong param_1,int param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((char)plVar1[5] == '\0') {
    FUN_140008790(plVar1);
  }
  pbVar3 = *(byte **)(param_1 + 0x40);
  iVar4 = 0;
  if (0 < param_2) {
    do {
      if (*pbVar3 == 0) {
        return iVar4;
      }
      pbVar2 = pbVar3 + 1;
      if (-1 < *(short *)(*(longlong *)plVar1[3] + (ulonglong)*pbVar3 * 2)) {
        pbVar2 = pbVar3;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar2 + 1;
    } while (iVar4 < param_2);
  }
  return iVar4;
}

// FUN_140008790 @ 0x140008790
void FUN_140008790(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140007830(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_14000a77c(lVar1,param_1 + 3,param_1[1]);
  FUN_14000a7e8(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}

// __crt_stdio_output::string_output_adapter<wchar_t>::write_string @ 0x140008808
/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<wchar_t>::write_string(wchar_t
   const * __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const
   __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_string
          (string_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar4 = uVar3;
      if (uVar2 < uVar3) {
        uVar4 = uVar2;
      }
      FUN_140014670((undefined8 *)*puVar1,(undefined8 *)param_1,uVar4 * 2);
      **(longlong **)this = **(longlong **)this + uVar4 * 2;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar4;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar4 == uVar3) {
          *param_3 = *param_3 + (int)uVar4;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}

// FUN_1400088b0 @ 0x1400088b0
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1400088b0(ulonglong param_1,undefined2 *param_2,ulonglong param_3,longlong param_4,
                       undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackY_548 [32];
  undefined2 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_480;
  undefined2 local_47e;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  LPVOID pvStack_60;
  undefined2 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140022040 ^ (ulonglong)auStackY_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    uVar4 = PTR_PTR_140022348._0_4_;
    uVar5 = PTR_PTR_140022348._4_4_;
    uVar6 = PTR_DAT_140022350._0_4_;
    uVar7 = PTR_DAT_140022350._4_4_;
    if (DAT_1400234f4 == 0) goto LAB_14000891f;
  }
  else {
    uVar4 = *param_5;
    uVar5 = param_5[1];
    uVar6 = param_5[2];
    uVar7 = param_5[3];
LAB_14000891f:
    local_4d0 = '\x01';
    local_4e0 = uVar4;
    uStack_4dc = uVar5;
    uStack_4d8 = uVar6;
    uStack_4d4 = uVar7;
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined2 *)0x0)))) {
    local_4c8 = '\x01';
    local_4cc = 0x16;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_4f8);
  }
  else {
    local_4ff = 0;
    local_4fb = 0;
    local_4f9 = 0;
    local_508 = 0;
    if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined2 *)0x0)) {
      local_500 = 1;
    }
    local_4b0 = local_4f8;
    local_498 = 0;
    local_58 = &local_518;
    local_494 = 0;
    local_4a0 = param_6;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_47e = 0;
    local_470 = 0;
    local_46c = 0;
    local_68 = 0;
    pvStack_60 = (LPVOID)0x0;
    local_50 = 0;
    local_518 = param_2;
    local_510 = param_3;
    local_4b8 = param_1;
    local_4a8 = param_4;
    iVar1 = FUN_140007928(&local_4b8);
    uVar3 = (ulonglong)iVar1;
    if (param_2 == (undefined2 *)0x0) {
LAB_140008a9a:
      FUN_14000a4d4(pvStack_60);
      goto LAB_140008aa6;
    }
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar1 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_140008a95;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_140008a9a;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_14000a4d4(pvStack_60);
          uVar3 = 0xfffffffe;
          goto LAB_140008aa6;
        }
        goto LAB_140008a95;
      }
    }
    else if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_508 != param_3) {
LAB_140008a95:
        param_2[local_508] = 0;
        goto LAB_140008a9a;
      }
      if ((iVar1 < 0) || (uVar3 <= param_3)) goto LAB_140008a9a;
    }
    FUN_14000a4d4(pvStack_60);
  }
  uVar3 = 0xffffffff;
LAB_140008aa6:
  uVar4 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar2 = FUN_140007830(local_4f8);
    *(undefined4 *)(lVar2 + 0x20) = uVar4;
  }
  if (local_4c0 != '\0') {
    lVar2 = FUN_140007830(local_4f8);
    *(undefined4 *)(lVar2 + 0x24) = local_4c4;
  }
  return uVar3 & 0xffffffff;
}

// FUN_140008b0c @ 0x140008b0c
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_140008b0c(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  p_Var5 = FUN_14000be58();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    piVar2 = *(int **)p_Var5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = *(undefined8 *)(p_Var5 + 8);
          *(undefined8 *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_140008c4a:
              *(undefined4 *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_140008c4a;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_140008c4a;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_140008c4a;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_140008c4a;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_140008c4a;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_140008c4a;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_140008c4a;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_140008c4a;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          *(undefined8 *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// FUN_140008c90 @ 0x140008c90
undefined4 FUN_140008c90(void)

{
  return DAT_1400232a0;
}

// FUN_140008c98 @ 0x140008c98
void FUN_140008c98(undefined4 param_1)

{
  DAT_1400232a0 = param_1;
  return;
}

// FUN_140008ca0 @ 0x140008ca0
undefined8 FUN_140008ca0(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_140022040 & 0x3f;
  return CONCAT71((int7)(DAT_140022040 >> 8),
                  (DAT_1400232a8 ^ DAT_140022040) >> bVar1 != 0 ||
                  (DAT_1400232a8 ^ DAT_140022040) << 0x40 - bVar1 != 0);
}

// FUN_140008cc0 @ 0x140008cc0
void FUN_140008cc0(undefined8 param_1)

{
  DAT_1400232a8 = param_1;
  return;
}

// FUN_140008cc8 @ 0x140008cc8
undefined8 FUN_140008cc8(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar2 = (byte)DAT_140022040 & 0x3f;
  UNRECOVERED_JUMPTABLE =
       (code *)((DAT_1400232a8 ^ DAT_140022040) >> bVar2 |
               (DAT_1400232a8 ^ DAT_140022040) << 0x40 - bVar2);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140014610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar1;
  }
  return 0;
}

// FUN_140008d04 @ 0x140008d04
void FUN_140008d04(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_140022040 & 0x3f) & 0x3f;
  DAT_1400232a8 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_140022040;
  return;
}

// FUN_140008d2c @ 0x140008d2c
void FUN_140008d2c(short *param_1,undefined8 *param_2,short *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  do {
    sVar4 = 0x22;
    if (*param_1 == 0x22) {
      bVar1 = !bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (short *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      sVar4 = *param_1;
      if (sVar4 == 0) goto LAB_140008dc3;
    }
    param_1 = param_1 + 1;
  } while ((bVar1) || ((sVar4 != 0x20 && (sVar4 != 9))));
  if (param_3 != (short *)0x0) {
    param_3[-1] = 0;
  }
LAB_140008dc3:
  bVar1 = false;
  while (sVar4 = *param_1, sVar4 != 0) {
    while ((sVar4 == 0x20 || (sVar4 == 9))) {
      param_1 = param_1 + 1;
      sVar4 = *param_1;
    }
    if (sVar4 == 0) break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar3 = 1;
      uVar2 = 0;
      for (; *param_1 == 0x5c; param_1 = param_1 + 1) {
        uVar2 = uVar2 + 1;
      }
      if (*param_1 == 0x22) {
        if ((uVar2 & 1) == 0) {
          if ((bVar1) && (param_1[1] == 0x22)) {
            param_1 = param_1 + 1;
          }
          else {
            bVar1 = !bVar1;
            uVar3 = 0;
          }
        }
        uVar2 = uVar2 >> 1;
      }
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        if (param_3 != (short *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      sVar4 = *param_1;
      if ((sVar4 == 0) || ((!bVar1 && ((sVar4 == 0x20 || (sVar4 == 9)))))) break;
      if (uVar3 != 0) {
        if (param_3 != (short *)0x0) {
          *param_3 = sVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    }
    if (param_3 != (short *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}

// __acrt_allocate_buffer_for_argv @ 0x140008ed0
/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Library: Visual Studio 2019 Release */

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_14000a4d4((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}

// _configure_wide_argv @ 0x140008f30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _configure_wide_argv
   
   Library: Visual Studio 2019 Release */

ulonglong _configure_wide_argv(int param_1)

{
  longlong lVar1;
  __acrt_ptd *p_Var2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  short *psVar8;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar5 = 0;
  if (param_1 != 0) {
    if (param_1 - 1U < 2) {
      GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_1400232b0,0x104);
      _DAT_1400239a8 = &DAT_1400232b0;
      if ((DAT_1400239d0 == (short *)0x0) || (psVar8 = DAT_1400239d0, *DAT_1400239d0 == 0)) {
        psVar8 = (short *)&DAT_1400232b0;
      }
      local_res18 = 0;
      local_res20 = 0;
      FUN_140008d2c(psVar8,(undefined8 *)0x0,(short *)0x0,(longlong *)&local_res18,
                    (longlong *)&local_res20);
      uVar4 = local_res18;
      plVar3 = __acrt_allocate_buffer_for_argv(local_res18,local_res20,2);
      if (plVar3 != (longlong *)0x0) {
        FUN_140008d2c(psVar8,plVar3,(short *)(plVar3 + uVar4),(longlong *)&local_res18,
                      (longlong *)&local_res20);
        if (param_1 == 1) {
          _DAT_1400239b0 = (int)local_res18 + -1;
          plVar6 = (longlong *)0x0;
          DAT_1400239c0 = plVar3;
        }
        else {
          local_res10 = (longlong *)0x0;
          uVar4 = thunk_FUN_14000c4a4(plVar3,&local_res10);
          plVar6 = local_res10;
          if ((int)uVar4 != 0) {
            FUN_14000a4d4(local_res10);
            local_res10 = (longlong *)0x0;
            FUN_14000a4d4(plVar3);
            return uVar4 & 0xffffffff;
          }
          _DAT_1400239b0 = 0;
          lVar1 = *local_res10;
          while (lVar1 != 0) {
            local_res10 = local_res10 + 1;
            uVar5 = uVar5 + 1;
            _DAT_1400239b0 = (int)uVar5;
            lVar1 = *local_res10;
          }
          local_res10 = (longlong *)0x0;
          DAT_1400239c0 = plVar6;
          FUN_14000a4d4((LPVOID)0x0);
          local_res10 = (longlong *)0x0;
          plVar6 = plVar3;
        }
        FUN_14000a4d4(plVar6);
        return 0;
      }
      p_Var2 = FUN_14000a4b4();
      uVar7 = 0xc;
      *(undefined4 *)p_Var2 = 0xc;
      FUN_14000a4d4((LPVOID)0x0);
    }
    else {
      p_Var2 = FUN_14000a4b4();
      uVar7 = 0x16;
      *(undefined4 *)p_Var2 = 0x16;
      FUN_14000a3c0();
    }
    uVar5 = (ulonglong)uVar7;
  }
  return uVar5;
}

// FUN_1400090b4 @ 0x1400090b4
undefined8 FUN_1400090b4(void)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_1400234c8 == (undefined8 *)0x0) {
    pwVar2 = (wchar_t *)FUN_14000d78c();
    if (pwVar2 == (wchar_t *)0x0) {
      FUN_14000a4d4((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_140009124(pwVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_1400234c8;
        puVar1 = DAT_1400234d0;
      }
      DAT_1400234d0 = puVar1;
      DAT_1400234c8 = puVar4;
      FUN_14000a4d4((LPVOID)0x0);
      FUN_14000a4d4(pwVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// FUN_140009124 @ 0x140009124
undefined8 * FUN_140009124(wchar_t *param_1)

{
  errno_t eVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  longlong lVar7;
  ulonglong _SizeInWords;
  undefined8 *puVar8;
  
  wVar6 = *param_1;
  lVar7 = 0;
  pwVar5 = param_1;
  while (wVar6 != L'\0') {
    lVar2 = lVar7 + 1;
    if (wVar6 == L'=') {
      lVar2 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar3 = lVar7;
      lVar7 = lVar3 + 1;
    } while (pwVar5[lVar7] != L'\0');
    pwVar5 = pwVar5 + lVar3 + 2;
    lVar7 = lVar2;
    wVar6 = *pwVar5;
  }
  puVar4 = _calloc_base(lVar7 + 1,8);
  puVar8 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
LAB_14000918f:
    FUN_14000a4d4((LPVOID)0x0);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    for (; *param_1 != L'\0'; param_1 = param_1 + _SizeInWords) {
      lVar7 = -1;
      do {
        lVar2 = lVar7;
        lVar7 = lVar2 + 1;
      } while (param_1[lVar7] != L'\0');
      _SizeInWords = lVar2 + 2;
      if (*param_1 != L'=') {
        pwVar5 = _calloc_base(_SizeInWords,2);
        if (pwVar5 == (wchar_t *)0x0) {
          free_environment<>(puVar4);
          FUN_14000a4d4((LPVOID)0x0);
          goto LAB_14000918f;
        }
        eVar1 = wcscpy_s(pwVar5,_SizeInWords,param_1);
        if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar8 = pwVar5;
        puVar8 = puVar8 + 1;
        FUN_14000a4d4((LPVOID)0x0);
      }
    }
    FUN_14000a4d4((LPVOID)0x0);
  }
  return puVar4;
}

// free_environment<> @ 0x140009240
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_14000a4d4(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_14000a4d4(param_1);
  }
  return;
}

// uninitialize_environment_internal<> @ 0x140009284
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_1400234d8) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}

// uninitialize_environment_internal<> @ 0x1400092a0
/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_1400234d0) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}

// FUN_1400092bc @ 0x1400092bc
void FUN_1400092bc(void)

{
  uninitialize_environment_internal<>((undefined8 *)&DAT_1400234c0);
  uninitialize_environment_internal<>(&DAT_1400234c8);
  free_environment<>(DAT_1400234d8);
  free_environment<>(DAT_1400234d0);
  return;
}

// thunk_FUN_1400090b4 @ 0x140009300
undefined8 thunk_FUN_1400090b4(void)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_1400234c8 == (undefined8 *)0x0) {
    pwVar2 = (wchar_t *)FUN_14000d78c();
    if (pwVar2 == (wchar_t *)0x0) {
      FUN_14000a4d4((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_140009124(pwVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_1400234c8;
        puVar1 = DAT_1400234d0;
      }
      DAT_1400234d0 = puVar1;
      DAT_1400234c8 = puVar4;
      FUN_14000a4d4((LPVOID)0x0);
      FUN_14000a4d4(pwVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// _get_wide_winmain_command_line @ 0x140009308
/* Library Function - Single Match
    _get_wide_winmain_command_line
   
   Library: Visual Studio 2019 Release */

ushort * _get_wide_winmain_command_line(void)

{
  bool bVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = &DAT_1400234e0;
  bVar1 = false;
  if (DAT_1400239d0 != (ushort *)0x0) {
    puVar3 = DAT_1400239d0;
    bVar1 = false;
  }
  do {
    uVar2 = *puVar3;
    if (uVar2 < 0x21) {
      if (uVar2 == 0) {
        return puVar3;
      }
      if (!bVar1) {
        do {
          if (0x20 < uVar2) {
            return puVar3;
          }
          puVar3 = puVar3 + 1;
          uVar2 = *puVar3;
        } while (uVar2 != 0);
        return puVar3;
      }
    }
    if (uVar2 == 0x22) {
      bVar1 = !bVar1;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

// FUN_14000935c @ 0x14000935c
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000935c(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

// FUN_1400093a0 @ 0x1400093a0
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1400093a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}

// operator()<> @ 0x1400093e8
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_140009420(param_3);
  __acrt_unlock(*param_4);
  return;
}

// FUN_140009420 @ 0x140009420
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140009420(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_1400234f0 != '\0') {
    return;
  }
  LOCK();
  DAT_1400234e4 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_1400234e8 != DAT_140022040) {
      bVar1 = (byte)DAT_140022040 & 0x3f;
      (*(code *)((ulonglong)(DAT_140022040 ^ DAT_1400234e8) >> bVar1 |
                (DAT_140022040 ^ DAT_1400234e8) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_140023508;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_14000949a;
    puVar2 = &DAT_140023520;
  }
  FUN_140009c68(puVar2);
LAB_14000949a:
  if (*(int *)*param_1 == 0) {
    FUN_14000935c((undefined8 *)&DAT_1400163b0,(undefined8 *)&DAT_1400163d0);
  }
  FUN_14000935c((undefined8 *)&DAT_1400163d8,(undefined8 *)&DAT_1400163e0);
  if (*(int *)param_1[1] == 0) {
    DAT_1400234f0 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

// FUN_1400094ec @ 0x1400094ec
void FUN_1400094ec(UINT param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  HMODULE pHVar2;
  int *piVar3;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34 [3];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
        (piVar3 = (int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused),
        *piVar3 == 0x4550)) &&
       ((((short)piVar3[6] == 0x20b && (0xe < (uint)piVar3[0x21])) && (piVar3[0x3e] != 0)))) {
      FUN_14000960c(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  operator()<>(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] != 0) {
    return;
  }
  FUN_1400095b4(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// FUN_1400095b4 @ 0x1400095b4
void FUN_1400095b4(UINT param_1)

{
  bool bVar1;
  HANDLE hProcess;
  
  bVar1 = FUN_1400095e8();
  if (bVar1) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_14000960c(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

// FUN_1400095e8 @ 0x1400095e8
bool FUN_1400095e8(void)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = FUN_14000d914();
  if (CONCAT31(extraout_var,bVar1) == 1) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_14000d8e0();
    bVar1 = (char)uVar2 == '\0';
  }
  return bVar1;
}

// FUN_14000960c @ 0x14000960c
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_14000960c(undefined4 param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*pFVar2)(param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}

// FUN_14000967c @ 0x14000967c
void FUN_14000967c(undefined8 param_1)

{
  DAT_1400234e8 = param_1;
  return;
}

// _cexit @ 0x140009694
/* Library Function - Single Match
    _cexit
   
   Library: Visual Studio 2019 Release */

void __cdecl _cexit(void)

{
  FUN_1400094ec(0,0,1);
  return;
}

// FUN_1400096a4 @ 0x1400096a4
void FUN_1400096a4(UINT param_1)

{
  FUN_1400094ec(param_1,2,0);
  return;
}

// FUN_1400096b0 @ 0x1400096b0
void FUN_1400096b0(ulonglong param_1)

{
  byte bVar1;
  
  if (DAT_1400234e8 == DAT_140022040) {
    bVar1 = 0x40 - ((byte)DAT_140022040 & 0x3f) & 0x3f;
    DAT_1400234e8 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_140022040;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140009e94();
}

// FUN_1400096f0 @ 0x1400096f0
void FUN_1400096f0(UINT param_1)

{
  FUN_1400094ec(param_1,0,0);
  return;
}

// _set_fmode @ 0x1400096fc
/* Library Function - Single Match
    _set_fmode
   
   Library: Visual Studio 2012 Release */

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  __acrt_ptd *p_Var2;
  
  if (((_Mode - 0x4000U & 0xffff3fff) == 0) && (_Mode != 0xc000)) {
    LOCK();
    UNLOCK();
    eVar1 = 0;
    DAT_140023c14 = _Mode;
  }
  else {
    p_Var2 = FUN_14000a4b4();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14000a3c0();
    eVar1 = 0x16;
  }
  return eVar1;
}

// __crt_seh_guarded_call<void>::operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_> @ 0x14000973c
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  
  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_140023570; plVar2 != &DAT_140023578; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_1400221f0) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_1400221f0);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}

// FUN_1400097ac @ 0x1400097ac
undefined4 FUN_1400097ac(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1400234f4;
  LOCK();
  DAT_1400234f4 = 1;
  UNLOCK();
  return uVar1;
}

// __acrt_uninitialize_locale @ 0x1400097b8
/* Library Function - Single Match
    __acrt_uninitialize_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_uninitialize_locale(void)

{
  <lambda_3e16ef9562a7dcce91392c22ab16ea36> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 4;
  local_res18[0] = 4;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_410d79af7f07d98d83a3f525b3859a53>,<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,<lambda_38119f0e861e05405d8a144b9b982f0a>_>
            ((__crt_seh_guarded_call<void> *)local_res8,
             (<lambda_410d79af7f07d98d83a3f525b3859a53> *)local_res18,local_res8,
             (<lambda_38119f0e861e05405d8a144b9b982f0a> *)local_res10);
  return;
}

// _configthreadlocale @ 0x1400097e8
/* Library Function - Single Match
    _configthreadlocale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _configthreadlocale(int _Flag)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  uint uVar3;
  
  p_Var2 = FUN_14000bce0();
  uVar1 = *(uint *)(p_Var2 + 0x3a8);
  if (_Flag == -1) {
    DAT_140022940 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar3 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        p_Var2 = FUN_14000a4b4();
        *(undefined4 *)p_Var2 = 0x16;
        FUN_14000a3c0();
        return -1;
      }
      uVar3 = uVar1 & 0xfffffffd;
    }
    *(uint *)(p_Var2 + 0x3a8) = uVar3;
  }
  return 2 - (uint)((uVar1 & 2) != 0);
}

// FUN_140009854 @ 0x140009854
undefined4 FUN_140009854(void)

{
  return DAT_1400234f8;
}

// FUN_14000985c @ 0x14000985c
uint FUN_14000985c(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_1400234f8;
    DAT_1400234f8 = param_1;
  }
  else {
    p_Var2 = FUN_14000a4b4();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14000a3c0();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// FUN_140009888 @ 0x140009888
undefined * FUN_140009888(void)

{
  return &DAT_1400234fc;
}

// FUN_140009890 @ 0x140009890
void FUN_140009890(undefined8 param_1)

{
  DAT_140023500 = param_1;
  return;
}

// FUN_140009898 @ 0x140009898
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_140009898(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_1400098d8();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

// FUN_1400098d8 @ 0x1400098d8
ulonglong FUN_1400098d8(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_140022040 & 0x3f;
  uVar2 = DAT_140023500 ^ DAT_140022040;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

// operator()<> @ 0x140009910
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_140009988(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}

// operator()<> @ 0x14000994c
/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_140009b38(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}

// FUN_140009988 @ 0x140009988
undefined8 FUN_140009988(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_140009b1c:
    uVar2 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_140022040 & 0x3f;
    pvVar6 = (LPVOID)((DAT_140022040 ^ *puVar4) >> bVar3 | (DAT_140022040 ^ *puVar4) << 0x40 - bVar3
                     );
    puVar10 = (ulonglong *)
              ((DAT_140022040 ^ puVar4[1]) >> bVar3 | (DAT_140022040 ^ puVar4[1]) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((DAT_140022040 ^ puVar4[2]) >> bVar3 | (DAT_140022040 ^ puVar4[2]) << 0x40 - bVar3);
    if (puVar10 == puVar4) {
      uVar5 = (longlong)puVar4 - (longlong)pvVar6 >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar8 = uVar7 + uVar5;
      if (uVar7 + uVar5 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar5) {
LAB_140009a2a:
        uVar8 = uVar5 + 4;
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_14000a4d4((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_140009b1c;
      }
      else {
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_14000a4d4((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_140009a2a;
      }
      pvVar6 = pvVar1;
      uVar7 = DAT_140022040;
      puVar10 = (ulonglong *)((longlong)pvVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)((longlong)pvVar6 + uVar8 * 8);
      uVar5 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar10)) >> 3;
      if (puVar4 < puVar10) {
        uVar5 = 0;
      }
      puVar9 = puVar10;
      if (uVar5 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = uVar7;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_140022040 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
               DAT_140022040;
    bVar3 = -((byte)DAT_140022040 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar6 >> bVar3 | (longlong)pvVar6 << 0x40 - bVar3) ^ DAT_140022040;
    bVar3 = -((byte)DAT_140022040 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar3 | (longlong)(puVar10 + 1) << 0x40 - bVar3) ^
         DAT_140022040;
    bVar3 = 0x40 - ((byte)DAT_140022040 & 0x3f) & 0x3f;
    uVar2 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_140022040;
  }
  return uVar2;
}

// FUN_140009b38 @ 0x140009b38
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140009b38(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = DAT_140022040;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_140022040 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_140022040 ^ *puVar8) >> bVar5 | (DAT_140022040 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_140022040 ^ puVar8[1]) >> bVar5 | (DAT_140022040 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_140022040 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_140022040;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_140022040 & 0x3f;
          uVar11 = DAT_140022040 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_140022040 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_140022040;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_14000a4d4(puVar10);
        uVar3 = DAT_140022040;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// FUN_140009c58 @ 0x140009c58
void FUN_140009c58(undefined8 param_1)

{
  _register_onexit_function(&DAT_140023508,param_1);
  return;
}

// FUN_140009c68 @ 0x140009c68
void FUN_140009c68(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}

// _initialize_onexit_table @ 0x140009cac
/* Library Function - Single Match
    _initialize_onexit_table
   
   Library: Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140022040;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_140022040;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}

// _register_onexit_function @ 0x140009cd4
/* Library Function - Single Match
    _register_onexit_function
   
   Library: Visual Studio 2019 Release */

void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}

// FUN_140009d30 @ 0x140009d30
undefined8 FUN_140009d30(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((longlong *)&DAT_140023508);
  uVar1 = _initialize_onexit_table((longlong *)&DAT_140023520);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

// FUN_140009d54 @ 0x140009d54
undefined1 FUN_140009d54(void)

{
  FUN_1400092bc();
  return 1;
}

// FUN_140009d64 @ 0x140009d64
undefined1 FUN_140009d64(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_140022040;
  FUN_14000a250(DAT_140022040);
  FUN_140009890(uVar1);
  FUN_14000eb74(uVar1);
  FUN_140008cc0(uVar1);
  FUN_14000967c(uVar1);
  return 1;
}

// FUN_140009dac @ 0x140009dac
undefined8 FUN_140009dac(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_140023998;
  uVar2 = (ulonglong)uVar1;
  *DAT_140023998 = *DAT_140023998 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_140023998 != (uint *)&DAT_140022360)) {
    uVar2 = FUN_14000a4d4(DAT_140023998);
    DAT_140023998 = (uint *)&DAT_140022360;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

// FUN_140009dec @ 0x140009dec
undefined1 FUN_140009dec(void)

{
  FUN_14000a4d4(DAT_140023560);
  DAT_140023560 = (LPVOID)0x0;
  FUN_14000a4d4(DAT_140023568);
  DAT_140023568 = (LPVOID)0x0;
  FUN_14000a4d4(DAT_1400239b8);
  DAT_1400239b8 = (LPVOID)0x0;
  FUN_14000a4d4(DAT_1400239c0);
  DAT_1400239c0 = (LPVOID)0x0;
  return 1;
}

// FUN_140009e48 @ 0x140009e48
void FUN_140009e48(void)

{
  FUN_14000ea20(&PTR_LAB_140017bf0,(undefined8 *)&DAT_140017cf0);
  return;
}

// __acrt_uninitialize @ 0x140009e5c
/* Library Function - Single Match
    __acrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined8 __acrt_uninitialize(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1) {
    if (DAT_140023550 != 0) {
      iVar1 = common_flush_all(true);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_14000eab4(0x140017bf0,0x140017cf0);
  return uVar2;
}

// FUN_140009e94 @ 0x140009e94
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140009e94(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_14000bce0();
  if (*(code **)(p_Var1 + 0x18) != (code *)0x0) {
    (**(code **)(p_Var1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140009f20();
}

// strcpy_s @ 0x140009ec0
/* Library Function - Single Match
    strcpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  errno_t eVar3;
  char *pcVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar4 = _Dst;
      do {
        cVar1 = pcVar4[(longlong)_Src - (longlong)_Dst];
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      *_Dst = '\0';
      p_Var2 = FUN_14000a4b4();
      eVar3 = 0x22;
      goto LAB_140009ee3;
    }
    *_Dst = '\0';
  }
  p_Var2 = FUN_14000a4b4();
  eVar3 = 0x16;
LAB_140009ee3:
  *(errno_t *)p_Var2 = eVar3;
  FUN_14000a3c0();
  return eVar3;
}

// FUN_140009f20 @ 0x140009f20
void FUN_140009f20(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_14000eb94(0x16);
  }
  if ((DAT_1400220c0 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140009f6b;
    __acrt_call_reportfault(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -8) = &UNK_140009f75;
  FUN_1400096a4(3);
}

// _calloc_base @ 0x140009f78
LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_140023dd0,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140009854();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140009898(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14000a4b4();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

// strncmp @ 0x140009f90
/* Library Function - Single Match
    strncmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    do {
      if (((ulonglong)_Str1 & 7) == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
    } while ((_MaxCount != 0) && (bVar1 != 0));
  }
  return 0;
}

// wcsncmp @ 0x14000a010
/* Library Function - Single Match
    wcsncmp
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}

// FUN_14000a03c @ 0x14000a03c
__acrt_ptd * FUN_14000a03c(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  p_Var1 = (__acrt_ptd *)*param_1;
  lVar2 = 0;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_14000bf20(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
  }
  return p_Var1;
}

// FUN_14000a0a8 @ 0x14000a0a8
longlong FUN_14000a0a8(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}

// __acrt_call_reportfault @ 0x14000a0f4
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __acrt_call_reportfault
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 local_res8 [8];
  undefined1 auStackY_608 [32];
  DWORD64 local_5c8;
  _EXCEPTION_POINTERS local_5c0;
  ulonglong local_5b0;
  PVOID local_5a8 [2];
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_140022040 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_14000270c();
  }
  FUN_140014d10((undefined1 (*) [32])&local_598,0,0x98);
  FUN_140014d10((undefined1 (*) [32])&local_4f8,0,0x4d0);
  local_5c0.ExceptionRecord = &local_598;
  local_5c0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8,local_4f8.Rip,FunctionEntry,&local_4f8,local_5a8,&local_5b0,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)local_res8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5c0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_14000270c();
  }
  return;
}

// FUN_14000a250 @ 0x14000a250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000a250(undefined8 param_1)

{
  _DAT_140023538 = param_1;
  return;
}

// FUN_14000a258 @ 0x14000a258
void FUN_14000a258(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1400234f4 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_140022348;
    puStack_28 = PTR_DAT_140022350;
  }
  FUN_14000a2f4(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_140007830(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_140007830(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}

// FUN_14000a2f4 @ 0x14000a2f4
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000a2f4(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,longlong *param_6)

{
  __acrt_ptd *p_Var1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  p_Var1 = FUN_14000a03c(param_6);
  if ((p_Var1 == (__acrt_ptd *)0x0) || (pcVar4 = *(code **)(p_Var1 + 0x3b8), pcVar4 == (code *)0x0))
  {
    puVar2 = (ulonglong *)FUN_14000a0a8(0x140023538,(longlong)param_6);
    bVar3 = (byte)DAT_140022040 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_140022040) >> bVar3 | (*puVar2 ^ DAT_140022040) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}

// FUN_14000a3c0 @ 0x14000a3c0
void FUN_14000a3c0(void)

{
  FUN_14000a258((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}

// _invoke_watson @ 0x14000a3e0
/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14000a40e;
  __acrt_call_reportfault(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x14000a414;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00014000a420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}

// __acrt_errno_from_os_error @ 0x14000a428
/* Library Function - Single Match
    __acrt_errno_from_os_error
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_errno_from_os_error(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = &DAT_140017cf0;
  do {
    if (param_1 == *piVar4) {
      return *(undefined4 *)(&UNK_140017cf4 + uVar3 * 8);
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    piVar4 = piVar4 + 2;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  uVar2 = 0x16;
  if (param_1 - 0xbcU < 0xf) {
    uVar2 = 8;
  }
  return uVar2;
}

// FUN_14000a470 @ 0x14000a470
void FUN_14000a470(int param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(int *)(param_2 + 0x34) = param_1;
  uVar1 = __acrt_errno_from_os_error(param_1);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}

// FUN_14000a494 @ 0x14000a494
__acrt_ptd * FUN_14000a494(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_14000be58();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_1400220d4;
  }
  else {
    p_Var1 = p_Var1 + 0x24;
  }
  return p_Var1;
}

// FUN_14000a4b4 @ 0x14000a4b4
__acrt_ptd * FUN_14000a4b4(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_14000be58();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_1400220d0;
  }
  else {
    p_Var1 = p_Var1 + 0x20;
  }
  return p_Var1;
}

// FUN_14000a4d4 @ 0x14000a4d4
void FUN_14000a4d4(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_140023dd0,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = __acrt_errno_from_os_error(DVar2);
    p_Var4 = FUN_14000a4b4();
    *(undefined4 *)p_Var4 = uVar3;
  }
  return;
}

// _malloc_base @ 0x14000a510
/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_140023dd0,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140009854();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140009898(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14000a4b4();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

// FUN_14000a570 @ 0x14000a570
ulonglong FUN_14000a570(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  ulonglong uVar2;
  undefined1 (*pauVar3) [32];
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  pauVar3 = param_1;
  if (DAT_140022090 < 5) {
    if (DAT_140022090 < 1) {
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar4 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = (-(ulonglong)(uVar4 != 0) & 0x10 - uVar4) >> 1;
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + uVar4 * 2) && (*(short *)*pauVar3 != 0));
          pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
      uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
      if (uVar2 != uVar4) {
        return uVar2;
      }
      for (pauVar3 = (undefined1 (*) [32])(*param_1 + uVar2 * 2);
          pauVar3 !=
          (undefined1 (*) [32])(*param_1 + ((param_2 - uVar4 & 0xfffffffffffffff0) + uVar2) * 2);
          pauVar3 = (undefined1 (*) [32])(*pauVar3 + 0x10)) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar3 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar3 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar3 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar3 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar3 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar3 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar3 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar3 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar5 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar5 >> 0x3f,0) & 1) != 0) || (SUB161(auVar5 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar5 >> 0x4f,0) & 1) != 0) || (SUB161(auVar5 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || (SUB161(auVar5 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar5 >> 0x6f,0) & 1) != 0) || (auVar5._14_2_ >> 7 & 1) != 0) ||
            (auVar5._14_2_ & 0x8000) != 0) break;
      }
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
    }
    else {
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
    }
  }
  else if (((ulonglong)param_1 & 1) == 0) {
    uVar4 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = (-(ulonglong)(uVar4 != 0) & 0x20 - uVar4) >> 1;
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + uVar4 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
    }
    uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
    if (uVar2 != uVar4) {
      return uVar2;
    }
    pauVar3 = (undefined1 (*) [32])(*param_1 + uVar2 * 2);
    while ((pauVar3 !=
            (undefined1 (*) [32])(*param_1 + ((param_2 - uVar4 & 0xffffffffffffffe0) + uVar2) * 2)
           && (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar3),
              (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                           (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                          (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                             SUB321(auVar1 >> 0x7f,0) == '\0') &&
                            (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                           (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                          (SUB321(auVar1 >> 0x97,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xb7,0) & 1) == 0) && SUB321(auVar1 >> 0xbf,0) == '\0') &&
                    (SUB321(auVar1 >> 199,0) & 1) == 0) && (SUB321(auVar1 >> 0xcf,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xd7,0) & 1) == 0) && (SUB321(auVar1 >> 0xdf,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xe7,0) & 1) == 0) && (SUB321(auVar1 >> 0xef,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xf7,0) & 1) == 0) && -1 < auVar1[0x1f]))) {
      pauVar3 = pauVar3 + 1;
    }
    for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
    }
  }
  else {
    for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
    }
  }
  return (longlong)pauVar3 - (longlong)param_1 >> 1;
}

// __acrt_update_locale_info @ 0x14000a748
/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_140023570) && ((DAT_140022940 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}

// FUN_14000a77c @ 0x14000a77c
void FUN_14000a77c(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;
  
  if ((*param_2 != (&DAT_140023570)[param_3]) && ((DAT_140022940 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}

// FUN_14000a7b4 @ 0x14000a7b4
void FUN_14000a7b4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_140023998) && ((DAT_140022940 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_14000d318();
    *param_2 = lVar1;
  }
  return;
}

// FUN_14000a7e8 @ 0x14000a7e8
void FUN_14000a7e8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_140023998)[param_3]) && ((DAT_140022940 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_14000d318();
    *param_2 = lVar1;
  }
  return;
}

// FUN_14000a820 @ 0x14000a820
undefined8
FUN_14000a820(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,char *param_4,
             rsize_t param_5,uint param_6,byte param_7,int param_8,__acrt_rounding_mode param_9,
             longlong *param_10)

{
  undefined1 (*pauVar1) [32];
  char *pcVar2;
  undefined1 (*pauVar3) [32];
  undefined1 uVar4;
  bool bVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  short sVar13;
  short sVar14;
  undefined1 (*pauVar15) [32];
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  (*param_2)[0] = 0;
  uVar16 = 0;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  if (param_3 <= (ulonglong)(longlong)(int)(uVar16 + 0xb)) {
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x22;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
    return 0x22;
  }
  if (((ulonglong)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    uVar7 = FUN_14000abb8(param_1,*param_2,param_3,param_4,param_5,uVar16,'\0',param_8,param_9,
                          param_10);
    if ((int)uVar7 != 0) {
      (*param_2)[0] = 0;
      return uVar7;
    }
    pauVar8 = FUN_1400144bc(param_2,0x65);
    if (pauVar8 == (undefined1 (*) [16])0x0) {
      return 0;
    }
    (*pauVar8)[0] = (param_7 ^ 1) * ' ' + 'P';
    (*pauVar8)[3] = 0;
    return 0;
  }
  if ((longlong)*param_1 < 0) {
    (*param_2)[0] = 0x2d;
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  pauVar1 = (undefined1 (*) [32])(*param_2 + 1);
  uVar19 = 0x3ff;
  sVar14 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    (*param_2)[0] = 0x30;
    uVar19 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    (*param_2)[0] = 0x31;
  }
  pauVar15 = (undefined1 (*) [32])(*param_2 + 2);
  if (uVar16 == 0) {
    uVar4 = 0;
  }
  else {
    if ((char)param_10[5] == '\0') {
      FUN_140008790(param_10);
    }
    uVar4 = *(undefined1 *)**(undefined8 **)(param_10[3] + 0xf8);
  }
  (*pauVar1)[0] = uVar4;
  if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
    sVar13 = 0x30;
    uVar18 = 0xf000000000000;
    while (0 < (int)uVar16) {
      uVar6 = (short)(((ulonglong)*param_1 & uVar18) >> ((byte)sVar13 & 0x3f)) + 0x30;
      if (0x39 < uVar6) {
        uVar6 = uVar6 + sVar14;
      }
      (*pauVar15)[0] = (char)uVar6;
      uVar16 = uVar16 - 1;
      pauVar15 = (undefined1 (*) [32])(*pauVar15 + 1);
      uVar18 = uVar18 >> 4;
      sVar13 = sVar13 + -4;
      if (sVar13 < 0) goto LAB_14000aa76;
    }
    bVar5 = should_round_up(param_1,uVar18,sVar13,param_9);
    pauVar3 = pauVar15;
    if (!bVar5) goto LAB_14000aa9c;
    while( true ) {
      pauVar9 = (undefined1 (*) [32])(pauVar3[-1] + 0x1f);
      cVar12 = (*pauVar9)[0];
      if ((cVar12 + 0xbaU & 0xdf) != 0) break;
      (*pauVar9)[0] = 0x30;
      pauVar3 = pauVar9;
    }
    if (pauVar9 == pauVar1) {
      pauVar3[-1][0x1e] = pauVar3[-1][0x1e] + '\x01';
    }
    else {
      if (cVar12 == '9') {
        cVar12 = (char)sVar14 + '9';
      }
      (*pauVar9)[0] = cVar12 + '\x01';
    }
  }
LAB_14000aa76:
  if (0 < (int)uVar16) {
    FUN_140014d10(pauVar15,0x30,(ulonglong)uVar16);
    pauVar15 = (undefined1 (*) [32])(*pauVar15 + uVar16);
  }
LAB_14000aa9c:
  if ((*pauVar1)[0] == '\0') {
    pauVar15 = pauVar1;
  }
  (*pauVar15)[0] = (param_7 ^ 1) * ' ' + 'P';
  pcVar2 = *pauVar15 + 2;
  uVar16 = (uint)((ulonglong)*param_1 >> 0x34) & 0x7ff;
  lVar10 = uVar16 - uVar19;
  lVar11 = lVar10;
  if (lVar10 < 0) {
    lVar11 = uVar19 - uVar16;
  }
  uVar4 = 0x2b;
  if (lVar10 < 0) {
    uVar4 = 0x2d;
  }
  (*pauVar15)[1] = uVar4;
  *pcVar2 = '0';
  pcVar17 = pcVar2;
  if (lVar11 < 1000) {
LAB_14000ab23:
    if (99 < lVar11) goto LAB_14000ab29;
LAB_14000ab5c:
    if (lVar11 < 10) goto LAB_14000ab8d;
  }
  else {
    pcVar17 = *pauVar15 + 3;
    *pcVar2 = (char)(lVar11 / 1000) + '0';
    lVar11 = lVar11 % 1000;
    if (pcVar17 == pcVar2) goto LAB_14000ab23;
LAB_14000ab29:
    lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar11),8) + lVar11;
    lVar10 = (lVar10 >> 6) - (lVar10 >> 0x3f);
    *pcVar17 = (char)lVar10 + '0';
    pcVar17 = pcVar17 + 1;
    lVar11 = lVar11 + lVar10 * -100;
    if (pcVar17 == pcVar2) goto LAB_14000ab5c;
  }
  *pcVar17 = (char)(lVar11 / 10) + '0';
  pcVar17 = pcVar17 + 1;
  lVar11 = lVar11 % 10;
LAB_14000ab8d:
  *pcVar17 = (char)lVar11 + '0';
  pcVar17[1] = '\0';
  return 0;
}

// FUN_14000abb8 @ 0x14000abb8
void FUN_14000abb8(undefined8 *param_1,undefined1 *param_2,ulonglong param_3,char *param_4,
                  rsize_t param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];
  
  uVar2 = FUN_14000f7dc((uint *)*param_1,param_6 + 1,1,local_18,param_4,param_5);
  uVar3 = (param_3 - (0 < param_6)) - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_14000f228(param_2 + (ulonglong)(0 < param_6) + (ulonglong)(local_18[0] == 0x2d),uVar3,
                        param_6 + 1,local_18,(int)uVar2,param_9,param_10);
  if (iVar1 == 0) {
    FUN_14000acb4(param_2,param_3,param_6,param_7,param_8,local_18,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}

// FUN_14000acb4 @ 0x14000acb4
undefined8
FUN_14000acb4(undefined1 *param_1,ulonglong param_2,int param_3,char param_4,int param_5,
             int *param_6,byte param_7,longlong *param_8)

{
  errno_t eVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *_Dst;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  if (0 < param_3) {
    iVar5 = param_3;
  }
  if ((ulonglong)(longlong)(iVar5 + 9) < param_2) {
    if ((param_7 != 0) && (puVar3 = (undefined8 *)(param_1 + (*param_6 == 0x2d)), 0 < param_3)) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (*(char *)((longlong)puVar3 + lVar6) != '\0');
      FUN_140014670((undefined8 *)((longlong)puVar3 + 1),puVar3,lVar7 + 2);
    }
    puVar4 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      puVar4 = param_1 + 1;
    }
    if (0 < param_3) {
      *puVar4 = puVar4[1];
      puVar4 = puVar4 + 1;
      if ((char)param_8[5] == '\0') {
        FUN_140008790(param_8);
      }
      *puVar4 = *(undefined1 *)**(undefined8 **)(param_8[3] + 0xf8);
    }
    _Dst = puVar4 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    puVar4 = param_1 + (param_2 - (longlong)_Dst);
    if (param_2 == 0xffffffffffffffff) {
      puVar4 = (undefined1 *)0xffffffffffffffff;
    }
    eVar1 = strcpy_s(_Dst,(rsize_t)puVar4,"e+000");
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *_Dst = 'E';
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVar5 = param_6[1] + -1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        _Dst[1] = '-';
      }
      if (99 < iVar5) {
        _Dst[2] = _Dst[2] + (char)(iVar5 / 100);
        iVar5 = iVar5 % 100;
      }
      if (9 < iVar5) {
        _Dst[3] = _Dst[3] + (char)(iVar5 / 10);
        iVar5 = iVar5 % 10;
      }
      _Dst[4] = _Dst[4] + (char)iVar5;
    }
    if ((param_5 == 2) && (_Dst[2] == '0')) {
      FUN_140014670((undefined8 *)(_Dst + 2),(undefined8 *)(_Dst + 3),3);
    }
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_8 + 6) = 1;
    *(undefined4 *)((longlong)param_8 + 0x2c) = 0x22;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_8);
    uVar2 = 0x22;
  }
  return uVar2;
}

// FUN_14000ae98 @ 0x14000ae98
void FUN_14000ae98(undefined8 *param_1,undefined8 *param_2,longlong param_3,char *param_4,
                  rsize_t param_5,int param_6,int param_7,longlong *param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar2 = FUN_14000f7dc((uint *)*param_1,param_6,0,local_18,param_4,param_5);
  uVar3 = param_3 - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == -1) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_14000f228((char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2),uVar3,
                        local_18[1] + param_6,local_18,(int)uVar2,param_7,param_8);
  if (iVar1 == 0) {
    FUN_14000af70(param_2,param_3,param_6,local_18,'\0',param_8);
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}

// FUN_14000af70 @ 0x14000af70
undefined8
FUN_14000af70(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,
             longlong *param_6)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(undefined2 *)((longlong)param_1 + (longlong)param_4[1] + -1 + (ulonglong)(*param_4 == 0x2d)) =
         0x30;
  }
  if (*param_4 == 0x2d) {
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (undefined8 *)((longlong)param_1 + 1);
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar6) != '\0');
      FUN_140014670((undefined8 *)((longlong)param_1 + 1),param_1,lVar5 + 2);
    }
    puVar4 = (undefined8 *)((longlong)param_1 + 1);
    *(undefined1 *)param_1 = 0x30;
  }
  else {
    puVar4 = (undefined8 *)((longlong)param_1 + (longlong)iVar3);
  }
  if (0 < param_3) {
    pauVar1 = (undefined1 (*) [32])((longlong)puVar4 + 1);
    lVar6 = -1;
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (*(char *)((longlong)puVar4 + lVar6) != '\0');
    FUN_140014670((undefined8 *)pauVar1,puVar4,lVar5 + 2);
    if ((char)param_6[5] == '\0') {
      FUN_140008790(param_6);
    }
    *(undefined1 *)puVar4 = *(undefined1 *)**(undefined8 **)(param_6[3] + 0xf8);
    if (param_4[1] < 0) {
      iVar3 = -param_4[1];
      if ((param_5 != '\0') || (iVar3 < param_3)) {
        param_3 = iVar3;
      }
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while ((*pauVar1)[lVar6] != '\0');
      FUN_140014670((undefined8 *)(*pauVar1 + param_3),(undefined8 *)pauVar1,lVar5 + 2);
      FUN_140014d10(pauVar1,0x30,(longlong)param_3);
    }
  }
  return 0;
}

// FUN_14000b0c8 @ 0x14000b0c8
void FUN_14000b0c8(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,char *param_4,
                  rsize_t param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar3 = FUN_14000f7dc((uint *)*param_1,param_6,0,local_18,param_4,param_5);
  uVar4 = param_3 - (local_18[0] == 0x2d);
  iVar6 = local_18[1] + -1;
  pcVar1 = (char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2);
  if (param_3 == 0xffffffffffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  iVar2 = FUN_14000f228(pcVar1,uVar4,param_6,local_18,(int)uVar3,param_9,param_10);
  if (iVar2 == 0) {
    iVar2 = local_18[1] + -1;
    if ((iVar2 < -4) || (param_6 <= iVar2)) {
      FUN_14000acb4((undefined1 *)param_2,param_3,param_6,param_7,param_8,local_18,1,param_10);
    }
    else {
      if (iVar6 < iVar2) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      FUN_14000af70(param_2,param_3,param_6,local_18,'\x01',param_10);
    }
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}

// should_round_up @ 0x14000b21c
/* Library Function - Single Match
    bool __cdecl should_round_up(double const * __ptr64 const,unsigned __int64,short,enum
   __acrt_rounding_mode)
   
   Library: Visual Studio 2019 Release */

bool __cdecl
should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = (byte)param_3;
  uVar2 = (ushort)(((ulonglong)*param_1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
  if (param_4 == 0) {
    return 7 < uVar2;
  }
  iVar3 = fegetround();
  if (iVar3 == 0) {
    dVar1 = *param_1;
    uVar2 = (ushort)(((ulonglong)dVar1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
    if (8 < uVar2) {
      return true;
    }
    if (7 < uVar2) {
      if (((1L << (bVar4 & 0x3f)) - 1U & (ulonglong)dVar1 & 0xfffffffffffff) == 0) {
        if (param_3 == 0x30) {
          bVar4 = ((ulonglong)dVar1 & 0x7ff0000000000000) != 0;
        }
        else {
          bVar4 = (byte)(((ulonglong)dVar1 >> 4 & param_2 & 0xffffffffffff) >> (bVar4 & 0x3f));
        }
        return (bool)(bVar4 & 1);
      }
      return true;
    }
  }
  else if (iVar3 == 0x200) {
    if ((uVar2 != 0) && (-1 < (longlong)*param_1)) {
      return true;
    }
  }
  else {
    if (iVar3 != 0x100) {
      return false;
    }
    if ((uVar2 != 0) && ((longlong)*param_1 < 0)) {
      return true;
    }
  }
  return false;
}

// FUN_14000b334 @ 0x14000b334
undefined8
FUN_14000b334(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,char *param_4,
             rsize_t param_5,int param_6,uint param_7,ulonglong param_8,__acrt_rounding_mode param_9
             ,longlong *param_10)

{
  double dVar1;
  errno_t eVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  __acrt_rounding_mode _Var6;
  byte bVar7;
  ulonglong uVar8;
  
  if (param_2 == (undefined1 (*) [16])0x0) {
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != (char *)0x0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      bVar7 = (byte)uVar5;
      if (((param_8 & 8) == 0) &&
         (dVar1 = *param_1, ((uint)((ulonglong)dVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) {
          lVar4 = 0;
        }
        else if (((longlong)dVar1 < 0) && (((ulonglong)dVar1 & 0xfffffffffffff) == 0x8000000000000))
        {
          lVar4 = 0xc;
        }
        else {
          lVar4 = (-(ulonglong)(((ulonglong)dVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8
          ;
        }
        if (param_3 < 4U - ((longlong)dVar1 >> 0x3f)) {
          (*param_2)[0] = 0;
          return 0xc;
        }
        uVar8 = 0xffffffffffffffff;
        if ((longlong)dVar1 < 0) {
          (*param_2)[0] = 0x2d;
          param_2 = (undefined1 (*) [16])(*param_2 + 1);
          (*param_2)[0] = 0;
          if (param_3 != 0xffffffffffffffff) {
            param_3 = param_3 - 1;
          }
        }
        uVar5 = (uVar5 ^ 1) * 2;
        do {
          uVar8 = uVar8 + 1;
        } while ((&PTR_DAT_140017e60)[(ulonglong)uVar5 + lVar4][uVar8] != '\0');
        eVar2 = strcpy_s((char *)param_2,param_3,
                         (&PTR_DAT_140017e60)[(ulonglong)(uVar5 + (param_3 <= uVar8)) + lVar4]);
        if (eVar2 == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = (uint)(param_8 >> 4);
      _Var6 = -(uint)((param_8 & 0x20) != 0) & param_9;
      if (param_6 != 0x41) {
        if (param_6 == 0x45) {
LAB_14000b581:
          uVar3 = FUN_14000abb8(param_1,*param_2,param_3,param_4,param_5,param_7,bVar7,uVar5 & 1 | 2
                                ,_Var6,param_10);
          return uVar3;
        }
        if (param_6 == 0x46) {
LAB_14000b550:
          uVar3 = FUN_14000ae98(param_1,(undefined8 *)param_2,param_3,param_4,param_5,param_7,_Var6,
                                param_10);
          return uVar3;
        }
        if (param_6 != 0x47) {
          if (param_6 == 0x61) goto LAB_14000b5bb;
          if (param_6 == 0x65) goto LAB_14000b581;
          if (param_6 == 0x66) goto LAB_14000b550;
        }
        uVar3 = FUN_14000b0c8(param_1,(undefined8 *)param_2,param_3,param_4,param_5,param_7,bVar7,
                              uVar5 & 1 | 2,_Var6,param_10);
        return uVar3;
      }
LAB_14000b5bb:
      uVar3 = FUN_14000a820(param_1,param_2,param_3,param_4,param_5,param_7,bVar7,uVar5 & 1 | 2,
                            _Var6,param_10);
      return uVar3;
    }
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
  return 0x16;
}

// FUN_14000b61c @ 0x14000b61c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14000b61c(ushort *param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_140023540 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_140008790(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      if (uVar1 != 0xfde9) {
        if (plVar2[0x27] == 0) {
          if (param_1 != (ushort *)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
          if ((((1 < (int)plVar2[1]) && ((int)plVar2[1] <= (int)param_3)) &&
              (iVar3 = FUN_14000d61c(uVar1,9), iVar3 != 0)) ||
             (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(param_4[3] + 8);
          }
        }
        else {
          iVar3 = FUN_14000d61c(uVar1,9);
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 6) = 1;
        *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
        return -1;
      }
      iVar3 = FUN_140010b08(param_1,param_2,param_3,(uint *)&DAT_140023540,(longlong)param_4);
      if (iVar3 < 0) {
        return -1;
      }
      return iVar3;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}

// FUN_14000b794 @ 0x14000b794
undefined4 FUN_14000b794(longlong param_1)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 == 0) {
    p_Var2 = FUN_14000a4b4();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14000a3c0();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}

// __acrt_initialize_stdio @ 0x14000b7bc
/* Library Function - Single Match
    __acrt_initialize_stdio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_stdio(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  
  lVar1 = 0;
  lVar4 = 3;
  if (DAT_140023548 == 0) {
    DAT_140023548 = 0x200;
  }
  else if (DAT_140023548 < 3) {
    DAT_140023548 = 3;
  }
  DAT_140023550 = _calloc_base((longlong)DAT_140023548,8);
  FUN_14000a4d4((LPVOID)0x0);
  if (DAT_140023550 == (LPVOID)0x0) {
    DAT_140023548 = 3;
    DAT_140023550 = _calloc_base(3,8);
    FUN_14000a4d4((LPVOID)0x0);
    if (DAT_140023550 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_1400220f8;
  puVar5 = &DAT_1400220e0;
  lVar2 = lVar1;
  do {
    FUN_14000e73c((LPCRITICAL_SECTION)(puVar5 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_140023550) = puVar5;
    if (*(longlong *)((&DAT_140023580)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}

// __acrt_uninitialize_stdio @ 0x14000b8dc
/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_140010cf0();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_140023550));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_140023550) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_14000a4d4(DAT_140023550);
  DAT_140023550 = (LPVOID)0x0;
  return;
}

// FUN_14000b938 @ 0x14000b938
void FUN_14000b938(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000b93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(param_1 + 0x30);
  return;
}

// FUN_14000b944 @ 0x14000b944
void FUN_14000b944(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000b948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1 + 0x30);
  return;
}

// FUN_14000b950 @ 0x14000b950
bool FUN_14000b950(void)

{
  return DAT_140023558 == (DAT_140022040 | 1);
}

// operator()<> @ 0x14000b968
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}

// operator()<> @ 0x14000b9a8
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}

// operator()<> @ 0x14000b9e8
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}

// operator()<> @ 0x14000ba30
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_140022360)) {
      FUN_14000a4d4(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}

// construct_ptd_array @ 0x14000ba90
/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_140023570;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_140017a50;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_140022360;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}

// FUN_14000bb60 @ 0x14000bb60
void FUN_14000bb60(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_14000a4d4(param_1);
  }
  return;
}

// destroy_ptd_array @ 0x14000bb80
/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_140017a50) {
    FUN_14000a4d4(*(undefined **)param_1);
  }
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x70));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x58));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x60));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x68));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x48));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x50));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x78));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x80));
  FUN_14000a4d4(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}

// replace_current_thread_locale_nolock @ 0x14000bc78
/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_140023570) && (ppuVar1 != &PTR_DAT_1400221f0)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}

// FUN_14000bce0 @ 0x14000bce0
__acrt_ptd * FUN_14000bce0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_1400221e8 == 0xffffffff) ||
     (lpFlsData = FlsGetValue(DAT_1400221e8), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_1400221e8,(PVOID)0xffffffffffffffff);
    lpFlsData = p_Var2;
    if (BVar1 != 0) {
      lpFlsData = _calloc_base(1,0x3c8);
      if (lpFlsData == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_1400221e8,(PVOID)0x0);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_1400221e8,lpFlsData);
        if (BVar1 != 0) {
          construct_ptd_array(lpFlsData);
          FUN_14000a4d4((LPVOID)0x0);
          goto LAB_14000bd8d;
        }
        FlsSetValue(DAT_1400221e8,(PVOID)0x0);
      }
      FUN_14000a4d4(lpFlsData);
      lpFlsData = p_Var2;
    }
  }
  else if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
    lpFlsData = p_Var2;
  }
LAB_14000bd8d:
  SetLastError(dwErrCode);
  if (lpFlsData == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140009f20();
  }
  return lpFlsData;
}

// FUN_14000bdb4 @ 0x14000bdb4
__acrt_ptd * FUN_14000bdb4(void)

{
  BOOL BVar1;
  __acrt_ptd *p_Var2;
  
  if ((DAT_1400221e8 == 0xffffffff) ||
     (p_Var2 = FlsGetValue(DAT_1400221e8), p_Var2 == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_1400221e8,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      p_Var2 = _calloc_base(1,0x3c8);
      if (p_Var2 == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_1400221e8,(PVOID)0x0);
        p_Var2 = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_1400221e8,p_Var2);
        if (BVar1 != 0) {
          construct_ptd_array(p_Var2);
          FUN_14000a4d4((LPVOID)0x0);
          return p_Var2;
        }
        FlsSetValue(DAT_1400221e8,(PVOID)0x0);
      }
      FUN_14000a4d4(p_Var2);
    }
  }
  else if (p_Var2 != (__acrt_ptd *)0xffffffffffffffff) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140009f20();
}

// FUN_14000be58 @ 0x14000be58
__acrt_ptd * FUN_14000be58(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_1400221e8 == 0xffffffff) ||
     (lpFlsData = FlsGetValue(DAT_1400221e8), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_1400221e8,(PVOID)0xffffffffffffffff);
    lpFlsData = p_Var2;
    if (BVar1 != 0) {
      lpFlsData = _calloc_base(1,0x3c8);
      if (lpFlsData == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_1400221e8,(PVOID)0x0);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_1400221e8,lpFlsData);
        if (BVar1 != 0) {
          construct_ptd_array(lpFlsData);
          FUN_14000a4d4((LPVOID)0x0);
          goto LAB_14000bf05;
        }
        FlsSetValue(DAT_1400221e8,(PVOID)0x0);
      }
      FUN_14000a4d4(lpFlsData);
      lpFlsData = p_Var2;
    }
  }
  else if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
    lpFlsData = p_Var2;
  }
LAB_14000bf05:
  SetLastError(dwErrCode);
  return lpFlsData;
}

// FUN_14000bf20 @ 0x14000bf20
__acrt_ptd * FUN_14000bf20(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_1400221e8 == 0xffffffff) ||
     (lpFlsData = FlsGetValue(DAT_1400221e8), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_1400221e8,(PVOID)0xffffffffffffffff);
    if (BVar1 == 0) {
      return (__acrt_ptd *)0x0;
    }
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData == (__acrt_ptd *)0x0) {
      FlsSetValue(DAT_1400221e8,(PVOID)0x0);
      lpFlsData = (__acrt_ptd *)0x0;
    }
    else {
      BVar1 = FlsSetValue(DAT_1400221e8,lpFlsData);
      if (BVar1 != 0) {
        construct_ptd_array(lpFlsData);
        FUN_14000a4d4((LPVOID)0x0);
        goto LAB_14000bfc1;
      }
      FlsSetValue(DAT_1400221e8,(PVOID)0x0);
    }
    FUN_14000a4d4(lpFlsData);
  }
  else {
    if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
      return (__acrt_ptd *)0x0;
    }
LAB_14000bfc1:
    p_Var2 = lpFlsData + param_2 * 0x3c8;
  }
  return p_Var2;
}

// __acrt_initialize_ptd @ 0x14000bfe0
/* Library Function - Single Match
    __acrt_initialize_ptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_initialize_ptd(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;
  undefined4 extraout_var;
  
  DAT_1400221e8 = FlsAlloc(FUN_14000bb60);
  uVar2 = CONCAT44(extraout_var,DAT_1400221e8);
  if (DAT_1400221e8 != 0xffffffff) {
    p_Var3 = FUN_14000be58();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = __acrt_uninitialize_ptd();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}

// __acrt_uninitialize_ptd @ 0x14000c01c
/* Library Function - Single Match
    __acrt_uninitialize_ptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_uninitialize_ptd(void)

{
  BOOL in_EAX;
  
  if (DAT_1400221e8 != 0xffffffff) {
    in_EAX = FlsFree(DAT_1400221e8);
    DAT_1400221e8 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// initialize_inherited_file_handles_nolock @ 0x14000c040
/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  GetStartupInfoW(&local_78);
  lVar5 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_140023980 < (int)uVar7) {
      uVar7 = DAT_140023980;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      do {
        if ((((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0))
           && (((*puVar6 & 8) != 0 || (DVar2 = GetFileType(*(HANDLE *)pbVar4), DVar2 != 0)))) {
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_140023580)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

// FUN_14000c130 @ 0x14000c130
void FUN_14000c130(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_140023580)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_14000c20e;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_140023550 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_140023550) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_14000c20e:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}

// __acrt_initialize_lowio @ 0x14000c238
/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  longlong lVar1;
  bool bVar2;
  
  __acrt_lock(7);
  lVar1 = __acrt_lowio_ensure_fh_exists(0);
  bVar2 = (int)lVar1 == 0;
  if (bVar2) {
    initialize_inherited_file_handles_nolock();
    FUN_14000c130();
  }
  __acrt_unlock(7);
  return bVar2;
}

// __acrt_uninitialize_lowio @ 0x14000c274
/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((longlong)&DAT_140023580 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      __acrt_lowio_destroy_handle_array(*(LPCRITICAL_SECTION *)((longlong)&DAT_140023580 + uVar1));
      *(undefined8 *)((longlong)&DAT_140023580 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}

// wcscpy_s @ 0x14000c2b4
/* Library Function - Single Match
    wcscpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  __acrt_ptd *p_Var2;
  errno_t eVar3;
  wchar_t *pwVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar4 = _Dst;
      do {
        wVar1 = *(wchar_t *)(((longlong)_Src - (longlong)_Dst) + (longlong)pwVar4);
        *pwVar4 = wVar1;
        pwVar4 = pwVar4 + 1;
        if (wVar1 == L'\0') {
          return 0;
        }
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      *_Dst = L'\0';
      p_Var2 = FUN_14000a4b4();
      eVar3 = 0x22;
      goto LAB_14000c2d8;
    }
    *_Dst = L'\0';
  }
  p_Var2 = FUN_14000a4b4();
  eVar3 = 0x16;
LAB_14000c2d8:
  *(errno_t *)p_Var2 = eVar3;
  FUN_14000a3c0();
  return eVar3;
}

// FUN_14000c31c @ 0x14000c31c
undefined4 FUN_14000c31c(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  short *psVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_14000c36f:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != 0) {
          psVar4 = param_1;
          lVar3 = param_4;
          lVar7 = param_2;
          if (param_4 == -1) {
            do {
              sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
              *psVar4 = sVar1;
              psVar4 = psVar4 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            lVar7 = 0;
          }
          else {
            do {
              lVar6 = lVar3;
              sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
              *psVar4 = sVar1;
              psVar4 = psVar4 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while ((lVar7 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
            lVar3 = lVar6 + -1;
            if (lVar7 == 0) {
              lVar3 = lVar6;
            }
            if (lVar3 == 0) {
              *psVar4 = 0;
            }
          }
          if (lVar7 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          p_Var2 = FUN_14000a4b4();
          uVar5 = 0x22;
          goto LAB_14000c34d;
        }
        *param_1 = 0;
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_14000c36f;
  p_Var2 = FUN_14000a4b4();
  uVar5 = 0x16;
LAB_14000c34d:
  *(undefined4 *)p_Var2 = uVar5;
  FUN_14000a3c0();
  return uVar5;
}

// _calloc_base @ 0x14000c418
/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_140023dd0,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140009854();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140009898(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14000a4b4();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

// FUN_14000c4a4 @ 0x14000c4a4
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14000c4a4(undefined8 *param_1,undefined8 *param_2)

{
  LPCWSTR lpFileName;
  byte bVar1;
  BOOL BVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  wchar_t *_Str;
  LPCWSTR pWVar5;
  ulonglong uVar6;
  HANDLE hFindFile;
  ulonglong uVar7;
  LPVOID pvVar8;
  ushort uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  short *psVar14;
  longlong *plVar15;
  undefined1 auStackY_2f8 [32];
  longlong *local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 *local_2a8;
  _WIN32_FIND_DATAW local_298;
  short *local_48;
  ulonglong local_40;
  
  local_40 = DAT_140022040 ^ (ulonglong)auStackY_2f8;
  local_2a8 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    p_Var4 = FUN_14000a4b4();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_14000a3c0();
    uVar7 = 0x16;
  }
  else {
    *param_2 = 0;
    _Str = (wchar_t *)*param_1;
    local_2c8 = (longlong *)0x0;
    plStack_2c0 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    plVar13 = (longlong *)0x0;
    local_2b8 = 0;
    while (_Str != (wchar_t *)0x0) {
      local_48 = (short *)CONCAT26(local_48._6_2_,0x3f002a);
      pWVar5 = wcspbrk(_Str,(wchar_t *)&local_48);
      lpFileName = (LPCWSTR)*param_1;
      if (pWVar5 == (wchar_t *)0x0) {
        uVar6 = FUN_14000c894((longlong)lpFileName,0,0,(longlong *)&local_2c8);
        plVar13 = local_2c8;
        uVar7 = uVar6 & 0xffffffff;
        plVar11 = plStack_2c0;
        if ((int)uVar6 != 0) {
          plVar11 = local_2c8;
          if (local_2c8 != plStack_2c0) {
            do {
              FUN_14000a4d4((LPVOID)*plVar11);
              plVar11 = plVar11 + 1;
            } while (plVar11 != plStack_2c0);
          }
          goto LAB_14000c7a7;
        }
      }
      else {
        while ((pWVar5 != lpFileName &&
               ((0x2d < (ushort)(*pWVar5 + L'￑') ||
                ((0x200000000801U >> ((ulonglong)(ushort)(*pWVar5 + L'￑') & 0x3f) & 1) == 0))))) {
          pWVar5 = pWVar5 + -1;
        }
        if ((*pWVar5 != L':') || (pWVar5 == lpFileName + 1)) {
          uVar9 = *pWVar5 + L'￑';
          if ((0x2d < uVar9) || (bVar1 = 1, (0x200000000801U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0)
             ) {
            bVar1 = 0;
          }
          hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,
                                       FindExSearchNameMatch,(LPVOID)0x0,0);
          if (hFindFile != (HANDLE)0xffffffffffffffff) {
            lVar12 = (longlong)plVar11 - (longlong)plVar13 >> 3;
            do {
              if (((local_298.cFileName[0] != L'.') ||
                  ((local_298.cFileName[1] != L'\0' &&
                   ((local_298.cFileName[1] != L'.' || (local_298.cFileName[2] != L'\0')))))) &&
                 (uVar7 = FUN_14000c894((longlong)local_298.cFileName,(longlong)lpFileName,
                                        -(ulonglong)bVar1 &
                                        ((longlong)pWVar5 - (longlong)lpFileName >> 1) + 1U,
                                        (longlong *)&local_2c8), (int)uVar7 != 0)) {
                FindClose(hFindFile);
                goto LAB_14000c704;
              }
              BVar2 = FindNextFileW(hFindFile,&local_298);
              plVar11 = plStack_2c0;
              plVar13 = local_2c8;
            } while (BVar2 != 0);
            lVar10 = (longlong)plStack_2c0 - (longlong)local_2c8 >> 3;
            if (lVar12 != lVar10) {
              FUN_140010e50((undefined1 *)(local_2c8 + lVar12),lVar10 - lVar12,8,&LAB_14000c490);
            }
            FindClose(hFindFile);
            goto LAB_14000c6c9;
          }
        }
        uVar7 = FUN_14000c894((longlong)lpFileName,0,0,(longlong *)&local_2c8);
        plVar11 = plStack_2c0;
        plVar13 = local_2c8;
        if ((int)uVar7 != 0) {
LAB_14000c704:
          plVar13 = local_2c8;
          uVar7 = uVar7 & 0xffffffff;
          plVar11 = local_2c8;
          if (local_2c8 != plStack_2c0) {
            do {
              FUN_14000a4d4((LPVOID)*plVar11);
              plVar11 = plVar11 + 1;
            } while (plVar11 != plStack_2c0);
          }
          goto LAB_14000c7a7;
        }
      }
LAB_14000c6c9:
      param_1 = param_1 + 1;
      _Str = (wchar_t *)*param_1;
    }
    uVar7 = ((longlong)plVar11 - (longlong)plVar13 >> 3) + 1;
    local_2b0 = 0;
    for (plVar15 = plVar13; plVar15 != plVar11; plVar15 = plVar15 + 1) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)(*plVar15 + lVar12 * 2) != 0);
      local_2b0 = local_2b0 + 1 + lVar12;
    }
    pvVar8 = __acrt_allocate_buffer_for_argv(uVar7,local_2b0,2);
    if (pvVar8 == (LPVOID)0x0) {
      FUN_14000a4d4((LPVOID)0x0);
      for (plVar15 = plVar13; plVar15 != plVar11; plVar15 = plVar15 + 1) {
        FUN_14000a4d4((LPVOID)*plVar15);
      }
      uVar7 = 0xffffffff;
LAB_14000c7a7:
      FUN_14000a4d4(plVar13);
    }
    else {
      psVar14 = (short *)((longlong)pvVar8 + uVar7 * 8);
      local_48 = psVar14;
      if (plVar13 != plVar11) {
        plVar15 = plVar13;
        do {
          lVar12 = -1;
          do {
            lVar10 = lVar12;
            lVar12 = lVar10 + 1;
          } while (*(short *)(*plVar15 + lVar12 * 2) != 0);
          lVar10 = lVar10 + 2;
          iVar3 = FUN_14000c31c(psVar14,local_2b0 - ((longlong)psVar14 - (longlong)local_48 >> 1),
                                *plVar15,lVar10);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(short **)((longlong)plVar15 + ((longlong)pvVar8 - (longlong)plVar13)) = psVar14;
          plVar15 = plVar15 + 1;
          psVar14 = psVar14 + lVar10;
        } while (plVar15 != plVar11);
      }
      *local_2a8 = pvVar8;
      FUN_14000a4d4((LPVOID)0x0);
      for (plVar15 = plVar13; plVar15 != plVar11; plVar15 = plVar15 + 1) {
        FUN_14000a4d4((LPVOID)*plVar15);
      }
      FUN_14000a4d4(plVar13);
      uVar7 = 0;
    }
  }
  return uVar7;
}

// FUN_14000c894 @ 0x14000c894
undefined8 FUN_14000c894(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  short *psVar2;
  LPVOID pvVar3;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar5;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(short *)(param_1 + lVar4 * 2) != 0);
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  psVar2 = _calloc_base(uVar8,2);
  if (((param_3 != 0) && (iVar1 = FUN_14000c31c(psVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_14000c31c(psVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_14000a4d4((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_14000c9ec;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_14000a4d4((LPVOID)0x0);
          goto LAB_14000c9ec;
        }
        FUN_14000a4d4((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_14000a4d4(psVar2);
  }
  else {
LAB_14000c9ec:
    *(short **)param_4[1] = psVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_14000a4d4((LPVOID)0x0);
  return uVar7;
}

// _LocaleUpdate::_LocaleUpdate @ 0x14000ca1c
/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVar4 = PTR_PTR_140022348._0_4_;
    uVar5 = PTR_PTR_140022348._4_4_;
    uVar6 = PTR_DAT_140022350._0_4_;
    uVar7 = PTR_DAT_140022350._4_4_;
    if (DAT_1400234f4 != 0) {
      p_Var3 = FUN_14000bce0();
      *(__acrt_ptd **)this = p_Var3;
      *(longlong *)p_Var1 = *(longlong *)(p_Var3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(p_Var3 + 0x88);
      __acrt_update_locale_info((longlong)p_Var3,(longlong *)p_Var1);
      FUN_14000a7b4(*(longlong *)this,(longlong *)(this + 0x10));
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}

// thunk_FUN_14000c4a4 @ 0x14000cab8
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong thunk_FUN_14000c4a4(undefined8 *param_1,undefined8 *param_2)

{
  LPCWSTR lpFileName;
  byte bVar1;
  BOOL BVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  wchar_t *_Str;
  LPCWSTR pWVar5;
  ulonglong uVar6;
  HANDLE hFindFile;
  ulonglong uVar7;
  LPVOID pvVar8;
  ushort uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  short *psVar14;
  longlong *plVar15;
  undefined1 auStackY_2f8 [32];
  longlong *plStack_2c8;
  longlong *plStack_2c0;
  undefined8 uStack_2b8;
  ulonglong uStack_2b0;
  undefined8 *puStack_2a8;
  _WIN32_FIND_DATAW _Stack_298;
  short *psStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_140022040 ^ (ulonglong)auStackY_2f8;
  puStack_2a8 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    p_Var4 = FUN_14000a4b4();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_14000a3c0();
    uVar7 = 0x16;
  }
  else {
    *param_2 = 0;
    _Str = (wchar_t *)*param_1;
    plStack_2c8 = (longlong *)0x0;
    plStack_2c0 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    plVar13 = (longlong *)0x0;
    uStack_2b8 = 0;
    while (_Str != (wchar_t *)0x0) {
      psStack_48 = (short *)CONCAT26(psStack_48._6_2_,0x3f002a);
      pWVar5 = wcspbrk(_Str,(wchar_t *)&psStack_48);
      lpFileName = (LPCWSTR)*param_1;
      if (pWVar5 == (wchar_t *)0x0) {
        uVar6 = FUN_14000c894((longlong)lpFileName,0,0,(longlong *)&plStack_2c8);
        plVar13 = plStack_2c8;
        uVar7 = uVar6 & 0xffffffff;
        plVar11 = plStack_2c0;
        if ((int)uVar6 != 0) {
          plVar11 = plStack_2c8;
          if (plStack_2c8 != plStack_2c0) {
            do {
              FUN_14000a4d4((LPVOID)*plVar11);
              plVar11 = plVar11 + 1;
            } while (plVar11 != plStack_2c0);
          }
          goto LAB_14000c7a7;
        }
      }
      else {
        while ((pWVar5 != lpFileName &&
               ((0x2d < (ushort)(*pWVar5 + L'￑') ||
                ((0x200000000801U >> ((ulonglong)(ushort)(*pWVar5 + L'￑') & 0x3f) & 1) == 0))))) {
          pWVar5 = pWVar5 + -1;
        }
        if ((*pWVar5 != L':') || (pWVar5 == lpFileName + 1)) {
          uVar9 = *pWVar5 + L'￑';
          if ((0x2d < uVar9) || (bVar1 = 1, (0x200000000801U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0)
             ) {
            bVar1 = 0;
          }
          hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&_Stack_298,
                                       FindExSearchNameMatch,(LPVOID)0x0,0);
          if (hFindFile != (HANDLE)0xffffffffffffffff) {
            lVar12 = (longlong)plVar11 - (longlong)plVar13 >> 3;
            do {
              if (((_Stack_298.cFileName[0] != L'.') ||
                  ((_Stack_298.cFileName[1] != L'\0' &&
                   ((_Stack_298.cFileName[1] != L'.' || (_Stack_298.cFileName[2] != L'\0')))))) &&
                 (uVar7 = FUN_14000c894((longlong)_Stack_298.cFileName,(longlong)lpFileName,
                                        -(ulonglong)bVar1 &
                                        ((longlong)pWVar5 - (longlong)lpFileName >> 1) + 1U,
                                        (longlong *)&plStack_2c8), (int)uVar7 != 0)) {
                FindClose(hFindFile);
                goto LAB_14000c704;
              }
              BVar2 = FindNextFileW(hFindFile,&_Stack_298);
              plVar11 = plStack_2c0;
              plVar13 = plStack_2c8;
            } while (BVar2 != 0);
            lVar10 = (longlong)plStack_2c0 - (longlong)plStack_2c8 >> 3;
            if (lVar12 != lVar10) {
              FUN_140010e50((undefined1 *)(plStack_2c8 + lVar12),lVar10 - lVar12,8,&LAB_14000c490);
            }
            FindClose(hFindFile);
            goto LAB_14000c6c9;
          }
        }
        uVar7 = FUN_14000c894((longlong)lpFileName,0,0,(longlong *)&plStack_2c8);
        plVar11 = plStack_2c0;
        plVar13 = plStack_2c8;
        if ((int)uVar7 != 0) {
LAB_14000c704:
          plVar13 = plStack_2c8;
          uVar7 = uVar7 & 0xffffffff;
          plVar11 = plStack_2c8;
          if (plStack_2c8 != plStack_2c0) {
            do {
              FUN_14000a4d4((LPVOID)*plVar11);
              plVar11 = plVar11 + 1;
            } while (plVar11 != plStack_2c0);
          }
          goto LAB_14000c7a7;
        }
      }
LAB_14000c6c9:
      param_1 = param_1 + 1;
      _Str = (wchar_t *)*param_1;
    }
    uVar7 = ((longlong)plVar11 - (longlong)plVar13 >> 3) + 1;
    uStack_2b0 = 0;
    for (plVar15 = plVar13; plVar15 != plVar11; plVar15 = plVar15 + 1) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)(*plVar15 + lVar12 * 2) != 0);
      uStack_2b0 = uStack_2b0 + 1 + lVar12;
    }
    pvVar8 = __acrt_allocate_buffer_for_argv(uVar7,uStack_2b0,2);
    if (pvVar8 == (LPVOID)0x0) {
      FUN_14000a4d4((LPVOID)0x0);
      for (plVar15 = plVar13; plVar15 != plVar11; plVar15 = plVar15 + 1) {
        FUN_14000a4d4((LPVOID)*plVar15);
      }
      uVar7 = 0xffffffff;
LAB_14000c7a7:
      FUN_14000a4d4(plVar13);
    }
    else {
      psVar14 = (short *)((longlong)pvVar8 + uVar7 * 8);
      psStack_48 = psVar14;
      if (plVar13 != plVar11) {
        plVar15 = plVar13;
        do {
          lVar12 = -1;
          do {
            lVar10 = lVar12;
            lVar12 = lVar10 + 1;
          } while (*(short *)(*plVar15 + lVar12 * 2) != 0);
          lVar10 = lVar10 + 2;
          iVar3 = FUN_14000c31c(psVar14,uStack_2b0 - ((longlong)psVar14 - (longlong)psStack_48 >> 1)
                                ,*plVar15,lVar10);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(short **)((longlong)plVar15 + ((longlong)pvVar8 - (longlong)plVar13)) = psVar14;
          plVar15 = plVar15 + 1;
          psVar14 = psVar14 + lVar10;
        } while (plVar15 != plVar11);
      }
      *puStack_2a8 = pvVar8;
      FUN_14000a4d4((LPVOID)0x0);
      for (plVar15 = plVar13; plVar15 != plVar11; plVar15 = plVar15 + 1) {
        FUN_14000a4d4((LPVOID)*plVar15);
      }
      FUN_14000a4d4(plVar13);
      uVar7 = 0;
    }
  }
  return uVar7;
}

// FUN_14000cac0 @ 0x14000cac0
void FUN_14000cac0(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  __acrt_ptd *p_Var5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  
  __acrt_lock(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_140023988 == (undefined1 (*) [32])0x0) {
LAB_14000cb73:
    p_Var5 = FUN_14000a4b4();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_14000a3c0();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_140014d10(DAT_140023988,0,0x101);
      goto LAB_14000cb73;
    }
    lVar8 = 2;
    pauVar7 = DAT_140023988;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar7 = *puVar4;
      *(undefined8 *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
      *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar7[1] = puVar4[4];
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
      *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar7[2] = puVar4[8];
      *(undefined8 *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
      *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar7[3] = puVar4[0xc];
      *(undefined8 *)(pauVar7[3] + 8) = uVar3;
      pauVar6 = pauVar7 + 4;
      uVar3 = puVar4[0xf];
      *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
      *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(undefined1 *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_140023990 != (undefined1 (*) [32])0x0) {
    pauVar7 = DAT_140023990;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar7 = *puVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
        *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar7[1] = puVar4[4];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
        *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar7[2] = puVar4[8];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
        *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar7[3] = puVar4[0xc];
        *(undefined8 *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
        *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 4;
      } while (lVar8 != 0);
      goto LAB_14000cc24;
    }
    FUN_140014d10(DAT_140023990,0,0x100);
  }
  p_Var5 = FUN_14000a4b4();
  *(undefined4 *)p_Var5 = 0x16;
  FUN_14000a3c0();
LAB_14000cc24:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_140022360)) {
    FUN_14000a4d4((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}

// getSystemCP @ 0x14000cc90
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_1400239a0 = 0;
  if (param_1 == -2) {
    DAT_1400239a0 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_1400239a0 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_1400239a0 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}

// FUN_14000cd10 @ 0x14000cd10
void FUN_14000cd10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_140014d10((undefined1 (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar4 = lVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    lVar1 = lVar4 + 1;
    *(undefined1 *)(param_1 + lVar4 + 0x18) = (&DAT_140022378)[lVar4];
    lVar4 = lVar1;
  } while (lVar1 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_140022479)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}

// FUN_14000cda8 @ 0x14000cda8
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14000cda8(longlong param_1)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  ulonglong uVar6;
  BYTE *pBVar7;
  WORD *pWVar8;
  longlong lVar9;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  char local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_140022040 ^ (ulonglong)auStackY_788;
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar2 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar2 == 0)) {
    uVar3 = 0;
    pbVar4 = (byte *)(param_1 + 0x19);
    do {
      if (uVar3 - 0x41 < 0x1a) {
        *pbVar4 = *pbVar4 | 0x10;
        bVar1 = (char)uVar3 + 0x20;
      }
      else if (uVar3 - 0x61 < 0x1a) {
        *pbVar4 = *pbVar4 | 0x20;
        bVar1 = (char)uVar3 - 0x20;
      }
      else {
        bVar1 = 0;
      }
      pbVar4[0x100] = bVar1;
      uVar3 = uVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    pcVar5 = local_718;
    lVar9 = 0x100;
    do {
      *pcVar5 = (char)uVar3;
      uVar3 = uVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar3 < 0x100);
    pBVar7 = local_738.LeadByte;
    local_718[0] = ' ';
    while (local_738.LeadByte[0] != 0) {
      bVar1 = pBVar7[1];
      uVar6 = (ulonglong)local_738.LeadByte[0];
      while ((uVar3 = (uint)uVar6, uVar3 <= bVar1 && (uVar3 < 0x100))) {
        local_718[uVar6] = ' ';
        uVar6 = (ulonglong)(uVar3 + 1);
      }
      pBVar7 = pBVar7 + 2;
      local_738.LeadByte[0] = *pBVar7;
    }
    FUN_14000df6c((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(uint *)(param_1 + 4),0)
    ;
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,
                        0x100,local_618,0x100,*(uint *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,
                        0x100,local_518,0x100,*(uint *)(param_1 + 4),0);
    pWVar8 = local_418;
    pbVar4 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar8 & 1) == 0) {
        if ((*pWVar8 & 2) == 0) {
          bVar1 = 0;
        }
        else {
          *pbVar4 = *pbVar4 | 0x20;
          bVar1 = pbVar4[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar4 = *pbVar4 | 0x10;
        bVar1 = pbVar4[(longlong)(abStack_631 + -param_1)];
      }
      pbVar4[0x100] = bVar1;
      pWVar8 = pWVar8 + 1;
      pbVar4 = pbVar4 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// FUN_14000cf90 @ 0x14000cf90
ulonglong FUN_14000cf90(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  __acrt_ptd *p_Var13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  int local_264 [3];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar8 = getSystemCP(param_1);
  if (iVar8 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    uVar10 = 0;
  }
  else {
    puVar9 = _malloc_base(0x228);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_14000a4d4((LPVOID)0x0);
      uVar10 = 0xffffffff;
    }
    else {
      lVar15 = 4;
      lVar16 = 4;
      puVar6 = *(undefined8 **)(local_res18 + 0x88);
      puVar7 = local_248;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar16 = lVar16 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar16 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      puVar6 = local_248;
      puVar7 = puVar9;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar15 = lVar15 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      *(undefined4 *)puVar9 = 0;
      uVar12 = FUN_14000d334(iVar8,(longlong)puVar9);
      uVar10 = uVar12 & 0xffffffff;
      if ((int)uVar12 == -1) {
        p_Var13 = FUN_14000a4b4();
        *(undefined4 *)p_Var13 = 0x16;
        FUN_14000a4d4(puVar9);
        uVar10 = 0xffffffff;
      }
      else {
        if (param_2 == '\0') {
          FUN_1400097ac();
        }
        piVar2 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_140022360)) {
          FUN_14000a4d4(*(undefined **)(local_res18 + 0x88));
        }
        *(undefined4 *)puVar9 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar9;
        if ((DAT_140022940 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_14000cac0(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_140022350 = *local_res20;
          }
        }
        FUN_14000a4d4((LPVOID)0x0);
      }
    }
  }
  return uVar10;
}

// update_thread_multibyte_data_internal @ 0x14000d200
/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_140022940) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_140022360)) {
          FUN_14000a4d4(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140009f20();
}

// __acrt_initialize_multibyte @ 0x14000d2b8
/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  ulonglong in_RAX;
  __acrt_ptd *p_Var1;
  
  if (DAT_1400239a4 == '\0') {
    DAT_140023990 = &DAT_1400226a0;
    DAT_140023998 = &DAT_140022360;
    DAT_140023988 = &DAT_140022590;
    p_Var1 = FUN_14000bdb4();
    in_RAX = FUN_14000cf90(-3,'\x01',p_Var1,(__crt_multibyte_data **)&DAT_140023998);
    DAT_1400239a4 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

// FUN_14000d318 @ 0x14000d318
void FUN_14000d318(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_14000bce0();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_140023998);
  return;
}

// FUN_14000d334 @ 0x14000d334
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14000d334(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  uint *puVar7;
  byte *pbVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  BYTE *pBVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined2 *puVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  wchar_t *pwVar20;
  
  local_30 = DAT_140022040 ^ (ulonglong)auStack_68;
  uVar5 = getSystemCP(param_1);
  pwVar9 = (wchar_t *)0x0;
  if (uVar5 == 0) {
LAB_14000d5c1:
    FUN_14000cd10(param_2);
    return 0;
  }
  puVar7 = &DAT_1400227b0;
  uVar15 = 1;
  pwVar20 = pwVar9;
  do {
    if (*puVar7 == uVar5) {
      FUN_140014d10((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
      pbVar18 = &DAT_1400227a0;
      lVar10 = 4;
      pbVar8 = &DAT_1400227c0 + (longlong)pwVar20 * 0x30;
      do {
        bVar2 = *pbVar8;
        pbVar13 = pbVar8;
        while ((bVar2 != 0 && (pbVar13[1] != 0))) {
          bVar2 = *pbVar13;
          uVar19 = (uint)bVar2;
          if (bVar2 <= pbVar13[1]) {
            uVar17 = (uint)bVar2;
            do {
              uVar17 = uVar17 + 1;
              if (0x100 < uVar17) break;
              uVar19 = uVar19 + 1;
              pbVar1 = (byte *)((ulonglong)uVar17 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar18;
            } while (uVar19 <= pbVar13[1]);
          }
          pbVar13 = pbVar13 + 2;
          bVar2 = *pbVar13;
        }
        pbVar8 = pbVar8 + 8;
        pbVar18 = pbVar18 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      *(uint *)(param_2 + 4) = uVar5;
      *(undefined4 *)(param_2 + 8) = 1;
      if (uVar5 == 0x3a4) {
        pwVar9 = L"ja-JP";
      }
      else if (uVar5 == 0x3a8) {
        pwVar9 = L"zh-CN";
      }
      else if (uVar5 == 0x3b5) {
        pwVar9 = L"ko-KR";
      }
      else if (uVar5 == 0x3b6) {
        pwVar9 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar9;
      puVar16 = (undefined2 *)(&DAT_1400227b4 + (longlong)pwVar20 * 0x30);
      puVar14 = (undefined2 *)(param_2 + 0xc);
      lVar10 = 6;
      do {
        uVar3 = *puVar16;
        puVar16 = puVar16 + 1;
        *puVar14 = uVar3;
        puVar14 = puVar14 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      goto LAB_14000d5b7;
    }
    uVar19 = (int)pwVar20 + 1;
    pwVar20 = (wchar_t *)(ulonglong)uVar19;
    puVar7 = puVar7 + 0xc;
  } while (uVar19 < 5);
  if ((uVar5 == 65000) || (BVar6 = IsValidCodePage(uVar5 & 0xffff), BVar6 == 0)) {
    return 0xffffffff;
  }
  if (uVar5 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar6 = GetCPInfo(uVar5,&local_48);
    if (BVar6 == 0) {
      if (DAT_1400239a0 == 0) {
        return 0xffffffff;
      }
      goto LAB_14000d5c1;
    }
    FUN_140014d10((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar5;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar11 = local_48.LeadByte;
      while ((local_48.LeadByte[0] != 0 && (pBVar11[1] != 0))) {
        bVar2 = *pBVar11;
        if ((uint)bVar2 <= (uint)pBVar11[1]) {
          uVar5 = (uint)bVar2;
          uVar12 = (ulonglong)(((uint)pBVar11[1] - (uint)bVar2) + 1);
          do {
            uVar5 = uVar5 + 1;
            pbVar8 = (byte *)((ulonglong)uVar5 + 0x18 + param_2);
            *pbVar8 = *pbVar8 | 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        pBVar11 = pBVar11 + 2;
        local_48.LeadByte[0] = *pBVar11;
      }
      pbVar8 = (byte *)(param_2 + 0x1a);
      lVar10 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      iVar4 = *(int *)(param_2 + 4);
      if (iVar4 == 0x3a4) {
        pwVar9 = L"ja-JP";
      }
      else if (iVar4 == 0x3a8) {
        pwVar9 = L"zh-CN";
      }
      else if (iVar4 == 0x3b5) {
        pwVar9 = L"ko-KR";
      }
      else if (iVar4 == 0x3b6) {
        pwVar9 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar9;
    }
    else {
      uVar15 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar15;
  }
  puVar14 = (undefined2 *)(param_2 + 0xc);
  for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
LAB_14000d5b7:
  FUN_14000cda8(param_2);
  return 0;
}

// FUN_14000d5f4 @ 0x14000d5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14000d5f4(void)

{
  _DAT_1400239c8 = GetCommandLineA();
  DAT_1400239d0 = GetCommandLineW();
  return 1;
}

// FUN_14000d61c @ 0x14000d61c
void FUN_14000d61c(uint param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_14000d669:
          if (!bVar1) goto LAB_14000d66d;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_14000d6a7;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_14000d669;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_14000d66d;
LAB_14000d6a7:
    param_2 = (ulonglong)((uint)param_2 & 8);
    goto LAB_14000d66d;
  }
  param_2 = 0;
LAB_14000d66d:
                    /* WARNING: Could not recover jumptable at 0x00014000d66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2);
  return;
}

// FUN_14000d6ac @ 0x14000d6ac
void FUN_14000d6ac(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *in_stack_00000040;
  
  uVar2 = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_14000d74c;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_14000d74c;
      iVar1 = param_1 - 0xdeaa;
      goto LAB_14000d73d;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_14000d74c;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto LAB_14000d74c;
    iVar1 = param_1 - 65000;
LAB_14000d73d:
    if (iVar1 == 0) goto LAB_14000d74c;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    uVar2 = param_2 & 0xffffff7f;
  }
LAB_14000d74c:
  if ((param_1 - 65000 < 2) && (in_stack_00000040 != (undefined4 *)0x0)) {
    *in_stack_00000040 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000d783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,uVar2,param_3,param_4);
  return;
}

// FUN_14000d78c @ 0x14000d78c
undefined8 * FUN_14000d78c(void)

{
  WCHAR WVar1;
  ulonglong uVar2;
  LPWCH pWVar3;
  longlong lVar4;
  undefined8 *puVar6;
  undefined8 *puVar7;
  WCHAR *pWVar8;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  puVar7 = (undefined8 *)0x0;
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    uVar2 = ((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1) * 2;
    puVar6 = _malloc_base(uVar2);
    puVar7 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_140014670(puVar6,(undefined8 *)pWVar3,uVar2);
      puVar7 = puVar6;
    }
    FUN_14000a4d4((LPVOID)0x0);
    FreeEnvironmentStringsW(pWVar3);
  }
  return puVar7;
}

// __acrt_initialize_locks @ 0x14000d828
/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_14000e73c((LPCRITICAL_SECTION)(&DAT_1400239e0 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_140023c10 = DAT_140023c10 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xe);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

// __acrt_lock @ 0x14000d870
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000d882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(&DAT_1400239e0 + (longlong)param_1 * 0x28);
  return;
}

// __acrt_uninitialize_locks @ 0x14000d88c
/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_140023c10;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1400239e0 + uVar1 * 0x28));
    DAT_140023c10 = DAT_140023c10 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// __acrt_unlock @ 0x14000d8c4
/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000d8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(&DAT_1400239e0 + (longlong)param_1 * 0x28);
  return;
}

// FUN_14000d8e0 @ 0x14000d8e0
uint FUN_14000d8e0(void)

{
  return *(uint *)((longlong)ProcessEnvironmentBlock + 0xbc) >> 8 & 0xffffff01;
}

// FUN_14000d8fc @ 0x14000d8fc
uint FUN_14000d8fc(void)

{
  return *(uint *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 8) >> 0x1f;
}

// FUN_14000d914 @ 0x14000d914
bool FUN_14000d914(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_14000d8fc();
  if ((char)uVar1 == '\0') {
    FUN_14000e6c4(local_res8);
  }
  return local_res8[0] != 1;
}

// __acrt_lowio_create_handle_array @ 0x14000d944
/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar3;
  
  puVar2 = _calloc_base(0x40,0x48);
  puVar5 = (undefined8 *)0x0;
  if ((puVar2 != (undefined8 *)0x0) && (puVar5 = puVar2, puVar2 != puVar2 + 0x240)) {
    puVar6 = puVar2 + 6;
    do {
      FUN_14000e73c((LPCRITICAL_SECTION)(puVar6 + -6),4000,0);
      puVar6[-1] = 0xffffffffffffffff;
      puVar4 = (undefined1 *)((longlong)puVar6 + 0xe);
      *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) & 0xf8;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0xa0a0000;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 10;
      puVar3 = (undefined8 *)0x0;
      do {
        *puVar4 = 0;
        uVar1 = (int)puVar3 + 1;
        puVar3 = (undefined8 *)(ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < 5);
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 9;
    } while (puVar3 != puVar2 + 0x240);
  }
  FUN_14000a4d4((LPVOID)0x0);
  return puVar5;
}

// __acrt_lowio_destroy_handle_array @ 0x14000d9ec
/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2019 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_14000a4d4(param_1);
  }
  return;
}

// __acrt_lowio_ensure_fh_exists @ 0x14000da3c
/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_140023980;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_140023580)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_140023580)[lVar5] = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_140023980 + 0x40;
        DAT_140023980 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    p_Var2 = FUN_14000a4b4();
    *(undefined4 *)p_Var2 = 9;
    FUN_14000a3c0();
    lVar3 = 9;
  }
  return lVar3;
}

// FUN_14000dae4 @ 0x14000dae4
void FUN_14000dae4(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000db04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((&DAT_140023580)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}

// FUN_14000db0c @ 0x14000db0c
void FUN_14000db0c(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000db2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((&DAT_140023580)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}

// FUN_14000db34 @ 0x14000db34
undefined8 FUN_14000db34(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_140023980)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_140023580)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_140023580)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_140008c90();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14000dbb4;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_14000dbb4:
      *(undefined8 *)
       ((&DAT_140023580)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  p_Var3 = FUN_14000a4b4();
  *(undefined4 *)p_Var3 = 9;
  p_Var3 = FUN_14000a494();
  *(undefined4 *)p_Var3 = 0;
  return 0xffffffff;
}

// FUN_14000dbf0 @ 0x14000dbf0
undefined8 FUN_14000dbf0(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_14000a494();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_140023980)) {
      if ((*(byte *)((&DAT_140023580)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_140023580)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_14000a494();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 9;
    FUN_14000a3c0();
  }
  return 0xffffffffffffffff;
}

// __acrt_locale_free_monetary @ 0x14000dc84
/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1400228b8) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1400228c0) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_1400228c8) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_1400228d0) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1400228d8) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1400228e0) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1400228e8) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_140022908) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_140022910) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_140022918) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_140022920) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_140022928) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_140022930) {
      FUN_14000a4d4(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}

// __acrt_locale_free_numeric @ 0x14000dd90
/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1400228a0) {
      FUN_14000a4d4((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1400228a8) {
      FUN_14000a4d4((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1400228b0) {
      FUN_14000a4d4((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1400228f8) {
      FUN_14000a4d4((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_140022900) {
      FUN_14000a4d4((undefined *)param_1[0xc]);
    }
  }
  return;
}

// FUN_14000ddfc @ 0x14000ddfc
void FUN_14000ddfc(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_14000a4d4((LPVOID)*param_1);
  }
  return;
}

// __acrt_locale_free_time @ 0x14000de30
/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_14000ddfc(param_1,7);
    FUN_14000ddfc(param_1 + 7,7);
    FUN_14000ddfc(param_1 + 0xe,0xc);
    FUN_14000ddfc(param_1 + 0x1a,0xc);
    FUN_14000ddfc(param_1 + 0x26,2);
    FUN_14000a4d4((LPVOID)param_1[0x28]);
    FUN_14000a4d4((LPVOID)param_1[0x29]);
    FUN_14000a4d4((LPVOID)param_1[0x2a]);
    FUN_14000ddfc(param_1 + 0x2c,7);
    FUN_14000ddfc(param_1 + 0x33,7);
    FUN_14000ddfc(param_1 + 0x3a,0xc);
    FUN_14000ddfc(param_1 + 0x46,0xc);
    FUN_14000ddfc(param_1 + 0x52,2);
    FUN_14000a4d4((LPVOID)param_1[0x54]);
    FUN_14000a4d4((LPVOID)param_1[0x55]);
    FUN_14000a4d4((LPVOID)param_1[0x56]);
    FUN_14000a4d4((LPVOID)param_1[0x57]);
  }
  return;
}

// wcspbrk @ 0x14000df38
/* Library Function - Single Match
    wcspbrk
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  do {
    if (*_Str == L'\0') {
      return (wchar_t *)0x0;
    }
    if (*_Control != L'\0') {
      wVar1 = *_Control;
      pwVar2 = _Control;
      do {
        if (wVar1 == *_Str) {
          return _Str;
        }
        pwVar2 = pwVar2 + 1;
        wVar1 = *pwVar2;
      } while (wVar1 != L'\0');
    }
    _Str = _Str + 1;
  } while( true );
}

// FUN_14000df6c @ 0x14000df6c
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

BOOL FUN_14000df6c(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,
                  undefined8 param_4,LPWORD param_5,uint param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar8;
  undefined1 *puVar9;
  BOOL BVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  local_30 = DAT_140022040 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_14000d61c(param_6,(ulonglong)((-(uint)(param_7 != 0) & 8) + 1));
  if (iVar3 == 0) {
    BVar10 = 0;
    puVar9 = auStack_88;
    goto LAB_14000e0c2;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar7 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar7 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_14000e0aa:
    BVar10 = 0;
    BVar4 = 0;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_14000e0c2;
  }
  else {
    if (uVar7 < 0x401) {
      uVar5 = uVar7 + 0xf;
      if (uVar5 <= uVar7) {
        uVar5 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar5 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar6 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_14000e0aa;
      *puVar6 = 0xcccc;
LAB_14000e058:
      lpSrcStr = (undefined1 (*) [32])(puVar6 + 4);
      puVar9 = puVar8;
    }
    else {
      puVar6 = _malloc_base(uVar7);
      lpSrcStr = (undefined1 (*) [32])0x0;
      puVar9 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_14000e058;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_14000e0aa;
    *(undefined8 *)(puVar9 + -8) = 0x14000e06e;
    FUN_140014d10(lpSrcStr,0,uVar1);
    *(int *)(puVar9 + 0x28) = iVar3;
    *(undefined1 (**) [32])(puVar9 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar9 + -8) = 0x14000e08a;
    iVar3 = FUN_14000d61c(param_6,1);
    if (iVar3 == 0) goto LAB_14000e0aa;
    *(undefined8 *)(puVar9 + -8) = 0x14000e0a4;
    BVar4 = GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar3,param_5);
  }
  BVar10 = BVar4;
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x14000e0c2;
    FUN_14000a4d4(lpSrcStr[-1] + 0x10);
  }
LAB_14000e0c2:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar9 + -8) = 0x14000e0e1;
  return BVar10;
}

// __acrt_add_locale_ref @ 0x14000e0fc
/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_140022358) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  return;
}

// __acrt_free_locale @ 0x14000e188
/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_1400228a0)) &&
      (*(int **)((longlong)param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_14000a4d4(piVar1);
      __acrt_locale_free_monetary(*(longlong *)((longlong)param_1 + 0xf8));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_14000a4d4(piVar1);
      __acrt_locale_free_numeric(*(undefined8 **)((longlong)param_1 + 0xf8));
    }
    FUN_14000a4d4(*(LPVOID *)((longlong)param_1 + 0xe0));
    FUN_14000a4d4(*(LPVOID *)((longlong)param_1 + 0xf8));
  }
  if ((*(int **)((longlong)param_1 + 0x100) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x100) == 0)) {
    FUN_14000a4d4((LPVOID)(*(longlong *)((longlong)param_1 + 0x108) + -0xfe));
    FUN_14000a4d4((LPVOID)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    FUN_14000a4d4((LPVOID)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    FUN_14000a4d4(*(LPVOID *)((longlong)param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((longlong)param_1 + 0x120));
  puVar3 = (undefined8 *)((longlong)param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_140022358) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_14000a4d4(piVar1);
      FUN_14000a4d4((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_14000a4d4(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14000a4d4(param_1);
  return;
}

// __acrt_locale_add_lc_time_reference @ 0x14000e300
/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_140017f40)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}

// __acrt_locale_free_lc_time_if_unreferenced @ 0x14000e328
/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_140017f40)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_14000a4d4(param_1);
  }
  return;
}

// __acrt_locale_release_lc_time_reference @ 0x14000e360
/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_140017f40)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}

// __acrt_release_locale_ref @ 0x14000e388
/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_140022358) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  }
  return;
}

// __acrt_update_thread_locale_data @ 0x14000e430
/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** __acrt_update_thread_locale_data(void)

{
  __acrt_ptd *p_Var1;
  undefined **ppuVar2;
  
  p_Var1 = FUN_14000bce0();
  if (((DAT_140022940 & *(uint *)(p_Var1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(p_Var1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((undefined8 *)(p_Var1 + 0x90),DAT_140023570);
    __acrt_unlock(4);
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_140009f20();
    }
  }
  return ppuVar2;
}

// _updatetlocinfoEx_nolock @ 0x14000e4a0
/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** _updatetlocinfoEx_nolock(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1400221f0)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}

// FUN_14000e508 @ 0x14000e508
FARPROC FUN_14000e508(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  HMODULE hLibModule;
  byte bVar5;
  FARPROC pFVar6;
  
  bVar5 = (byte)DAT_140022040 & 0x3f;
  pFVar6 = (FARPROC)(((&DAT_140023cd0)[param_1] ^ DAT_140022040) >> bVar5 |
                    ((&DAT_140023cd0)[param_1] ^ DAT_140022040) << 0x40 - bVar5);
  if (pFVar6 != (FARPROC)0xffffffffffffffff) {
    if (pFVar6 != (FARPROC)0x0) {
      return pFVar6;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      uVar2 = *param_3;
      hLibModule = (HMODULE)(&DAT_140023c20)[uVar2];
      if (hLibModule == (HMODULE)0x0) {
        lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_140018c30)[uVar2];
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
        if ((hLibModule != (HMODULE)0x0) ||
           ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
              (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
             (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
            (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))
           ) {
          LOCK();
          lVar1 = (&DAT_140023c20)[uVar2];
          (&DAT_140023c20)[uVar2] = hLibModule;
          UNLOCK();
          if (lVar1 != 0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_14000e68a;
        }
        LOCK();
        (&DAT_140023c20)[uVar2] = 0xffffffffffffffff;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_14000e68a:
        pFVar6 = GetProcAddress(hLibModule,param_2);
        if (pFVar6 != (FARPROC)0x0) {
          bVar5 = 0x40 - ((byte)DAT_140022040 & 0x3f) & 0x3f;
          LOCK();
          (&DAT_140023cd0)[param_1] =
               ((ulonglong)pFVar6 >> bVar5 | (longlong)pFVar6 << 0x40 - bVar5) ^ DAT_140022040;
          UNLOCK();
          return pFVar6;
        }
        break;
      }
    }
    bVar5 = 0x40 - ((byte)DAT_140022040 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_140023cd0)[param_1] = (0xffffffffffffffffU >> bVar5 | -1L << 0x40 - bVar5) ^ DAT_140022040
    ;
    UNLOCK();
  }
  return (FARPROC)0x0;
}

// FUN_14000e6c4 @ 0x14000e6c4
INT_PTR FUN_14000e6c4(undefined8 param_1)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
  UNRECOVERED_JUMPTABLE =
       FUN_14000e508(0x19,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_1400191c4,
                     (uint *)"AppPolicyGetProcessTerminationMethod");
  if (UNRECOVERED_JUMPTABLE == (FARPROC)0x0) {
    return 0xc0000225;
  }
                    /* WARNING: Could not recover jumptable at 0x000140014610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*UNRECOVERED_JUMPTABLE)(0xfffffffffffffffa,param_1);
  return IVar1;
}

// KERNEL32.DLL::FlsAlloc @ 0x14000e71c
DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014000e71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}

// KERNEL32.DLL::FlsFree @ 0x14000e724
BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014000e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}

// KERNEL32.DLL::FlsGetValue @ 0x14000e72c
PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014000e72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}

// KERNEL32.DLL::FlsSetValue @ 0x14000e734
BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014000e734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}

// FUN_14000e73c @ 0x14000e73c
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_14000e73c(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000e508(0xf,"InitializeCriticalSectionEx",(uint *)&DAT_140019188,
                         (uint *)&DAT_140019190);
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*pFVar1)(param_1,param_2,param_3);
  }
  return;
}

// FUN_14000e7ac @ 0x14000e7ac
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_14000e7ac(ushort *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000e508(0x11,"LCMapStringEx",(uint *)&DAT_140019190,(uint *)"LCMapStringEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_14000e898(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pFVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

// FUN_14000e898 @ 0x14000e898
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_14000e898(ushort *param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000e508(0x13,"LocaleNameToLCID",(uint *)&DAT_1400191a8,(uint *)"LocaleNameToLCID");
  if (pFVar1 == (FARPROC)0x0) {
    FUN_140011690(param_1);
  }
  else {
    (*pFVar1)(param_1,param_2);
  }
  return;
}

// FUN_14000e8f8 @ 0x14000e8f8
undefined8 FUN_14000e8f8(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_140022040;
  puVar3 = &DAT_140023cd0;
  for (lVar2 = 0x1f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

// __acrt_uninitialize_winapi_thunks @ 0x14000e91c
/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_140023c20;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_140023cc8;
    } while (puVar1 != (undefined8 *)&DAT_140023cc8);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// _recalloc_base @ 0x14000e960
/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_140014d10((undefined1 (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}

// FUN_14000e9f8 @ 0x14000e9f8
bool FUN_14000e9f8(void)

{
  DAT_140023dd0 = GetProcessHeap();
  return DAT_140023dd0 != (HANDLE)0x0;
}

// FUN_14000ea20 @ 0x14000ea20
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14000ea20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      in_RAX = (undefined8 *)0x0;
      if (((code *)*puVar1 != (code *)0x0) &&
         (in_RAX = (undefined8 *)(*(code *)*puVar1)(), (char)in_RAX == '\0')) break;
      puVar1 = puVar1 + 2;
    } while (puVar1 != param_2);
    if (puVar1 != param_2) {
      if (puVar1 != param_1) {
        puVar1 = puVar1 + -1;
        do {
          if ((puVar1[-1] != 0) && ((code *)*puVar1 != (code *)0x0)) {
            (*(code *)*puVar1)(0);
          }
          in_RAX = puVar1 + -1;
          puVar1 = puVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// FUN_14000eab4 @ 0x14000eab4
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14000eab4(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      in_RAX = (**(code **)(param_2 + -8))(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// FUN_14000eafc @ 0x14000eafc
ulonglong FUN_14000eafc(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_140022040 & 0x3f;
  uVar2 = DAT_140023de8 ^ DAT_140022040;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

// __acrt_get_sigabrt_handler @ 0x14000eb44
/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_14000eafc(local_res8,local_res18,local_res8,local_res10);
  return;
}

// FUN_14000eb74 @ 0x14000eb74
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000eb74(undefined8 param_1)

{
  _DAT_140023dd8 = param_1;
  _DAT_140023de0 = param_1;
  DAT_140023de8 = param_1;
  _DAT_140023df0 = param_1;
  return;
}

// FUN_14000eb94 @ 0x14000eb94
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14000eb94(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  __acrt_ptd *p_Var3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong *puVar8;
  __acrt_ptd *p_Var9;
  undefined4 local_res10;
  
  p_Var3 = (__acrt_ptd *)0x0;
  p_Var9 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_14000ebeb:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_140023dd8;
    }
    else if (param_1 == 6) {
LAB_14000ec8d:
      puVar8 = &DAT_140023de8;
      p_Var9 = p_Var3;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_140023df0;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_140023de0;
      p_Var9 = p_Var3;
    }
    else {
      if (param_1 == 0x16) goto LAB_14000ec8d;
      puVar8 = (ulonglong *)0x0;
      p_Var9 = p_Var3;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_14000ec1b;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_14000ec6d;
      }
      goto LAB_14000ebeb;
    }
LAB_14000ec1b:
    p_Var9 = FUN_14000be58();
    if (p_Var9 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar2 = *(longlong *)p_Var9;
    lVar6 = lVar2 + 0xc0;
    for (; lVar2 != lVar6; lVar2 = lVar2 + 0x10) {
      if (*(uint *)(lVar2 + 4) == param_1) goto LAB_14000ec68;
    }
    lVar2 = 0;
LAB_14000ec68:
    if (lVar2 == 0) {
LAB_14000ec6d:
      p_Var9 = FUN_14000a4b4();
      *(undefined4 *)p_Var9 = 0x16;
      FUN_14000a3c0();
      return 0xffffffff;
    }
    puVar8 = (ulonglong *)(lVar2 + 8);
    bVar1 = false;
  }
  lVar2 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar7 = (code *)*puVar8;
  if (bVar1) {
    bVar5 = (byte)DAT_140022040 & 0x3f;
    pcVar7 = (code *)(((ulonglong)pcVar7 ^ DAT_140022040) >> bVar5 |
                     ((ulonglong)pcVar7 ^ DAT_140022040) << 0x40 - bVar5);
  }
  if (pcVar7 == (code *)0x1) goto LAB_14000ed76;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400096a4(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar2 = *(longlong *)(p_Var9 + 8);
    *(longlong *)(p_Var9 + 8) = 0;
    if (param_1 == 8) {
      p_Var3 = FUN_14000bce0();
      local_res10 = *(undefined4 *)(p_Var3 + 0x10);
      p_Var3 = FUN_14000bce0();
      *(undefined4 *)(p_Var3 + 0x10) = 0x8c;
      goto LAB_14000ed2e;
    }
  }
  else {
LAB_14000ed2e:
    if (param_1 == 8) {
      lVar6 = *(longlong *)p_Var9;
      for (lVar4 = lVar6 + 0x30; lVar4 != lVar6 + 0xc0; lVar4 = lVar4 + 0x10) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      goto LAB_14000ed76;
    }
  }
  *puVar8 = DAT_140022040;
LAB_14000ed76:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (param_1 == 8) {
      p_Var3 = FUN_14000bce0();
      (*pcVar7)(8,*(undefined4 *)(p_Var3 + 0x10),_guard_dispatch_icall);
    }
    else {
      (*pcVar7)(param_1,_guard_dispatch_icall);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var9 + 8) = lVar2, param_1 == 8)) {
      p_Var9 = FUN_14000bce0();
      *(undefined4 *)(p_Var9 + 0x10) = local_res10;
    }
  }
  return 0;
}

// FUN_14000ee10 @ 0x14000ee10
void FUN_14000ee10(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_14000b938(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_14000f07c(*(int **)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_14000b944(*param_4);
  return;
}

// FUN_14000eeac @ 0x14000eeac
void FUN_14000eeac(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  int *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_140023550 + DAT_140023548;
  for (plVar3 = DAT_140023550; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_14000ee10(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}

// common_flush_all @ 0x14000ef90
/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_14000eeac(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}

// FUN_14000eff0 @ 0x14000eff0
undefined8 FUN_14000eff0(int *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    param_1[4] = 0;
    pwVar1 = *(wchar_t **)(param_1 + 2);
    *(wchar_t **)param_1 = pwVar1;
    if (0 < (int)uVar3) {
      uVar2 = FUN_14000b794((longlong)param_1);
      uVar2 = FUN_140012114(uVar2,pwVar1,uVar3,param_2);
      if (uVar3 != uVar2) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}

// FUN_14000f07c @ 0x14000f07c
int FUN_14000f07c(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1400234f4 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_140022348;
    puStack_28 = PTR_DAT_140022350;
  }
  if (param_1 == (int *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_14000f101;
  }
  uVar2 = FUN_14000eff0(param_1,local_48);
  if ((int)uVar2 == 0) {
    if (((uint)param_1[5] >> 0xb & 1) != 0) {
      iVar1 = FUN_14000b794((longlong)param_1);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_14000f0dc;
    }
    iVar1 = 0;
  }
  else {
LAB_14000f0dc:
    iVar1 = -1;
  }
LAB_14000f101:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_140007830(local_48);
    *(undefined4 *)(lVar3 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_140007830(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar1;
}

// common_flush_all @ 0x14000f150
int __cdecl common_flush_all(bool param_1)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}

// FUN_14000f158 @ 0x14000f158
bool FUN_14000f158(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      pcVar2 = param_2;
      if (param_4 == 0) {
        return true;
      }
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == '0');
      if (*pcVar2 != '\0') {
        return true;
      }
      if (param_2 != param_1) {
        return (bool)(param_2[-1] & 1);
      }
    }
  }
  else if (iVar1 == 0x200) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 != 0x2d) {
      return true;
    }
  }
  else if (iVar1 == 0x100) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 == 0x2d) {
      return true;
    }
  }
  return false;
}

// FUN_14000f228 @ 0x14000f228
undefined4
FUN_14000f228(char *param_1,ulonglong param_2,int param_3,int *param_4,int param_5,int param_6,
             longlong *param_7)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar5 = 0;
    if (0 < param_3) {
      iVar5 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar5 + 1)) {
      uVar7 = 0x22;
      goto LAB_14000f24c;
    }
    if (param_4 != (int *)0x0) {
      pcVar1 = *(char **)(param_4 + 2);
      *param_1 = '0';
      pcVar6 = pcVar1;
      pcVar8 = param_1;
      while( true ) {
        pcVar8 = pcVar8 + 1;
        if (param_3 < 1) break;
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar8 = cVar3;
        param_3 = param_3 + -1;
      }
      *pcVar8 = '\0';
      if ((-1 < param_3) && (bVar4 = FUN_14000f158(pcVar1,pcVar6,*param_4,param_5,param_6), bVar4))
      {
        while( true ) {
          pcVar8 = pcVar8 + -1;
          if (*pcVar8 != '9') break;
          *pcVar8 = '0';
        }
        *pcVar8 = *pcVar8 + '\x01';
      }
      if (*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        lVar2 = -1;
        do {
          lVar9 = lVar2;
          lVar2 = lVar9 + 1;
        } while (param_1[lVar9 + 2] != '\0');
        FUN_140014670((undefined8 *)param_1,(undefined8 *)(param_1 + 1),lVar9 + 2);
      }
      return 0;
    }
  }
  uVar7 = 0x16;
LAB_14000f24c:
  *(undefined4 *)((longlong)param_7 + 0x2c) = uVar7;
  *(undefined1 *)(param_7 + 6) = 1;
  FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
  return uVar7;
}

// FUN_14000f340 @ 0x14000f340
ulonglong FUN_14000f340(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  byte local_res8;
  uint local_res18;
  undefined8 local_238;
  ulonglong local_228;
  undefined1 local_214 [468];
  
  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar15 = *param_1 - 1;
  uVar16 = (ulonglong)uVar15;
  uVar14 = uVar4 - 1;
  if (uVar14 == 0) {
    uVar4 = param_2[1];
    uVar17 = (ulonglong)uVar4;
    uVar6 = 0;
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    uVar1 = uVar6;
    if (uVar15 != 0) {
      while (uVar15 != 0xffffffff) {
        lVar7 = uVar16 + 1;
        uVar15 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar15;
        uVar12 = (ulonglong)param_1[lVar7] | uVar6 << 0x20;
        uVar6 = uVar12 % uVar17;
        uVar1 = (uVar1 << 0x20) + (uVar12 / uVar17 & 0xffffffff);
      }
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      param_1[1] = (uint)uVar6;
      param_1[2] = 0;
      *param_1 = 1;
      return uVar1;
    }
    uVar14 = param_1[1];
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    uVar4 = uVar14 % uVar4;
    param_1[1] = uVar4;
    *param_1 = (uint)(uVar4 != 0);
    return uVar14 / uVar17;
  }
  if (uVar15 < uVar14) {
    return 0;
  }
  lVar7 = (longlong)(int)uVar15;
  iVar10 = uVar15 - uVar14;
  lVar9 = (longlong)iVar10;
  if (lVar9 <= lVar7) {
    puVar3 = param_1 + lVar7 + 1;
    uVar13 = uVar15;
    do {
      if (*(uint *)((longlong)param_2 + (lVar9 * -4 - (longlong)param_1) + (longlong)puVar3) !=
          *puVar3) {
        if (param_1[(longlong)(int)uVar13 + 1] <= param_2[(longlong)(int)(uVar13 - iVar10) + 1])
        goto LAB_14000f4e4;
        break;
      }
      uVar13 = uVar13 - 1;
      lVar7 = lVar7 + -1;
      puVar3 = puVar3 + -1;
    } while (lVar9 <= lVar7);
  }
  iVar10 = iVar10 + 1;
LAB_14000f4e4:
  if (iVar10 == 0) {
    return 0;
  }
  uVar14 = param_2[(ulonglong)uVar14 + 1];
  local_res18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  uVar13 = 0;
  uVar6 = 0;
  iVar8 = 0x1f;
  if (uVar14 != 0) {
    for (; uVar14 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  if (uVar14 == 0) {
    iVar8 = 0x20;
    local_res8 = 0;
  }
  else {
    iVar8 = 0x1f - iVar8;
    local_res8 = 0x20 - (char)iVar8;
    if (iVar8 == 0) goto LAB_14000f574;
  }
  uVar5 = local_res18 >> (local_res8 & 0x1f);
  local_res18 = local_res18 << ((byte)iVar8 & 0x1f);
  uVar14 = uVar5 | uVar14 << ((byte)iVar8 & 0x1f);
  if (2 < uVar4) {
    local_res18 = local_res18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (local_res8 & 0x1f);
  }
LAB_14000f574:
  iVar10 = iVar10 + -1;
  local_228 = 0;
  uVar17 = uVar6;
  if (-1 < iVar10) {
    uVar1 = (ulonglong)uVar14;
    uVar14 = iVar10 + uVar4;
    do {
      uVar15 = uVar13;
      if (uVar14 <= (uint)uVar16) {
        uVar15 = param_1[(ulonglong)uVar14 + 1];
      }
      uVar5 = param_1[(ulonglong)(uVar14 - 2) + 1];
      uVar17 = (ulonglong)uVar5;
      local_238 = CONCAT44(uVar15,param_1[(ulonglong)(uVar14 - 1) + 1]);
      if (iVar8 != 0) {
        local_238 = (ulonglong)(uVar5 >> (local_res8 & 0x3f)) | local_238 << ((byte)iVar8 & 0x3f);
        uVar5 = uVar5 << ((byte)iVar8 & 0x1f);
        uVar17 = (ulonglong)uVar5;
        if (2 < uVar14) {
          uVar17 = (ulonglong)(uVar5 | param_1[(ulonglong)(uVar14 - 3) + 1] >> (local_res8 & 0x1f));
        }
      }
      uVar12 = local_238 / uVar1;
      local_238 = local_238 % uVar1;
      if (0xffffffff < uVar12) {
        lVar7 = uVar12 - 0xffffffff;
        uVar12 = 0xffffffff;
        local_238 = local_238 + lVar7 * uVar1;
      }
      if (local_238 < 0x100000000) {
        uVar2 = local_res18 * uVar12;
        do {
          if (uVar2 <= (local_238 << 0x20 | uVar17)) break;
          uVar12 = uVar12 - 1;
          uVar2 = uVar2 - local_res18;
          local_238 = local_238 + uVar1;
        } while (local_238 < 0x100000000);
      }
      if (uVar12 != 0) {
        uVar16 = uVar6;
        uVar5 = uVar13;
        puVar3 = param_2;
        if (uVar4 != 0) {
          do {
            uVar16 = uVar16 + puVar3[1] * uVar12;
            uVar17 = uVar16 >> 0x20;
            uVar11 = (uint)uVar16;
            uVar16 = uVar17 + 1;
            if (uVar11 <= param_1[(ulonglong)(uVar5 + iVar10) + 1]) {
              uVar16 = uVar17;
            }
            uVar18 = uVar5 + 1;
            param_1[(ulonglong)(uVar5 + iVar10) + 1] =
                 param_1[(ulonglong)(uVar5 + iVar10) + 1] - uVar11;
            uVar5 = uVar18;
            puVar3 = puVar3 + 1;
          } while (uVar18 < uVar4);
        }
        if (uVar15 < uVar16) {
          uVar16 = uVar6;
          uVar15 = uVar13;
          puVar3 = param_2;
          if (uVar4 != 0) {
            do {
              uVar5 = uVar15 + 1;
              uVar16 = uVar16 + puVar3[1] + (ulonglong)param_1[(ulonglong)(uVar15 + iVar10) + 1];
              param_1[(ulonglong)(uVar15 + iVar10) + 1] = (uint)uVar16;
              uVar16 = uVar16 >> 0x20;
              uVar15 = uVar5;
              puVar3 = puVar3 + 1;
            } while (uVar5 < uVar4);
          }
          uVar12 = uVar12 - 1;
        }
        uVar16 = (ulonglong)(uVar14 - 1);
      }
      uVar15 = (uint)uVar16;
      uVar14 = uVar14 - 1;
      uVar17 = (local_228 << 0x20) + (uVar12 & 0xffffffff);
      iVar10 = iVar10 + -1;
      local_228 = uVar17;
    } while (-1 < iVar10);
  }
  uVar15 = uVar15 + 1;
  uVar4 = uVar15;
  if (uVar15 < *param_1) {
    do {
      uVar16 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar16 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar15;
  while( true ) {
    if (uVar15 == 0) {
      return uVar17;
    }
    uVar15 = uVar15 - 1;
    if (param_1[(ulonglong)uVar15 + 1] != 0) break;
    *param_1 = uVar15;
  }
  return uVar17;
}

// FUN_14000f7dc @ 0x14000f7dc
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14000f7dc(uint *param_1,int param_2,uint param_3,undefined4 *param_4,char *param_5,
             rsize_t param_6)

{
  uint *puVar1;
  byte bVar2;
  sbyte sVar3;
  undefined4 uVar4;
  errno_t eVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  __acrt_ptd *p_Var10;
  longlong lVar11;
  byte bVar12;
  char cVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  bool bVar27;
  double dVar28;
  undefined1 auStackY_828 [32];
  uint local_7f4;
  uint local_7f0;
  undefined8 local_7e8;
  uint local_7e0;
  uint *local_7d8;
  uint *local_7d0;
  uint local_7c8;
  uint local_7c4;
  uint local_7c0;
  uint local_7bc;
  uint local_7b8 [2];
  char local_7b0;
  uint local_7a8 [2];
  char *local_7a0;
  uint *local_798;
  undefined4 *local_790;
  uint local_788;
  undefined8 local_784;
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  uint local_3e4 [115];
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_140022040 ^ (ulonglong)auStackY_828;
  local_7a0 = param_5;
  local_7d8 = param_1;
  local_7c4 = param_3;
  local_790 = param_4;
  fegetenv(local_7b8);
  uVar26 = 1;
  local_7b0 = ((byte)local_7b8[0] & 0x1f) != 0x1f;
  if ((bool)local_7b0) {
    feholdexcept((undefined8 *)local_7b8);
  }
  puVar1 = local_7d8;
  *(char **)(param_4 + 2) = param_5;
  uVar4 = 0x20;
  if ((longlong)local_7d8 < 0) {
    uVar4 = 0x2d;
  }
  *param_4 = uVar4;
  _controlfp_s(local_7a8,0,0);
  uVar9 = (ulonglong)puVar1 >> 0x34 & 0x7ff;
  if (uVar9 == 0) {
    if ((((ulonglong)puVar1 & 0xfffffffffffff) != 0) && ((local_7a8[0] & 0x1000000) == 0)) {
LAB_14000f972:
      local_7d8 = (uint *)((ulonglong)puVar1 & 0x7fffffffffffffff);
      local_7bc = 0x8001f;
      _controlfp_s(&local_7c0,0,0);
      _controlfp_s((uint *)&local_7e8,0x8001f,local_7bc);
      local_7c8 = param_2 + 1;
      local_7d0 = local_7d8;
      uVar9 = (ulonglong)local_7d8 >> 0x34 & 0x7ff;
      uVar17 = (-(ulonglong)(uVar9 != 0) & 0x10000000000000) +
               ((ulonglong)local_7d8 & 0xfffffffffffff);
      uVar24 = (2 - (uint)(uVar9 != 0)) + ((uint)((ulonglong)local_7d8 >> 0x34) & 0x7ff);
      dVar28 = FUN_140012730();
      dVar28 = ceil(dVar28);
      uVar6 = -(uint)(((int)dVar28 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar28;
      uVar19 = (uint)(uVar17 >> 0x20);
      local_784 = uVar17;
      uVar25 = (uint)(uVar19 != 0);
      uVar16 = uVar25 + 1;
      if (uVar24 < 0x434) {
        if (uVar24 == 0x36) {
LAB_14000fdbf:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)(-(uint)(uVar19 != 0) & 4));
          iVar7 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (bVar27) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          uVar25 = (iVar7 == 0x20) + uVar16;
          if (uVar25 < 0x74) {
            uVar19 = uVar25 - 1;
            while (uVar19 != 0xffffffff) {
              uVar23 = uVar19 - 1;
              if (uVar19 < uVar16) {
                iVar7 = *(int *)((longlong)&local_784 + (ulonglong)uVar19 * 4);
              }
              else {
                iVar7 = 0;
              }
              if (uVar23 < uVar16) {
                uVar8 = *(uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4);
              }
              else {
                uVar8 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar19 * 4) = uVar8 >> 0x1f | iVar7 * 2;
              uVar19 = uVar23;
            }
          }
          else {
            uVar25 = 0;
          }
          uVar16 = 0x435 - uVar24 >> 5;
          local_788 = uVar25;
          FUN_140014d10((undefined1 (*) [32])local_3e4,0,(ulonglong)uVar16 * 4);
          local_3e4[uVar16] = 1 << ((byte)(0x435 - uVar24) & 0x1f);
        }
        else {
          local_3e4[1] = 0x100000;
          local_3e4[0] = 0;
          local_3e8 = 2;
          if (uVar19 == 0) goto LAB_14000fdbf;
          uVar9 = 0;
          do {
            if (local_3e4[uVar9] != *(uint *)((longlong)&local_784 + uVar9 * 4)) goto LAB_14000fdbf;
            uVar25 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar25;
          } while (uVar25 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          iVar7 = 0x1f;
          if (uVar19 != 0) {
            for (; uVar19 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uVar19 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          uVar25 = (0x20U - iVar7 < 2) + uVar16;
          if (uVar25 < 0x74) {
            uVar19 = uVar25 - 1;
            while (uVar19 != 0xffffffff) {
              uVar23 = uVar19 - 1;
              if (uVar19 < uVar16) {
                iVar7 = *(int *)((longlong)&local_784 + (ulonglong)uVar19 * 4);
              }
              else {
                iVar7 = 0;
              }
              if (uVar23 < uVar16) {
                uVar8 = *(uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4);
              }
              else {
                uVar8 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar19 * 4) = uVar8 >> 0x1e | iVar7 * 4;
              uVar19 = uVar23;
            }
          }
          else {
            uVar25 = 0;
          }
          uVar16 = 0x436 - uVar24 >> 5;
          local_788 = uVar25;
          FUN_140014d10((undefined1 (*) [32])local_3e4,0,(ulonglong)uVar16 * 4);
          local_3e4[uVar16] = 1 << ((byte)(0x436 - uVar24) & 0x1f);
        }
        local_3e8 = uVar16 + 1;
        uVar9 = (ulonglong)local_3e8 << 2;
        local_5b8 = local_3e8;
        uVar16 = 0;
        if ((ulonglong)local_3e8 != 0) {
          if (uVar9 < 0x1cd) {
            FUN_140014670((undefined8 *)local_5b4,(undefined8 *)local_3e4,uVar9);
            uVar16 = local_5b8;
          }
          else {
            FUN_140014d10((undefined1 (*) [32])local_5b4,0,0x1cc);
            p_Var10 = FUN_14000a4b4();
            *(undefined4 *)p_Var10 = 0x22;
            FUN_14000a3c0();
            uVar16 = local_5b8;
          }
        }
      }
      else {
        local_3e4[1] = 0x100000;
        local_3e4[0] = 0;
        local_3e8 = 2;
        if (uVar19 == 0) {
LAB_14000fb83:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar23 = uVar24 - 0x433 & 0x1f;
          uVar19 = uVar24 - 0x433 >> 5;
          sVar3 = (sbyte)uVar23;
          bVar12 = 0x20 - sVar3;
          uVar24 = (int)(1L << (bVar12 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)uVar25 * 4);
          iVar7 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (bVar27) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          if ((uVar16 + uVar19 < 0x74) &&
             (uVar25 = (0x20U - iVar7 < uVar23) + uVar16 + uVar19, uVar25 < 0x74)) {
            uVar23 = uVar25;
            while (uVar23 = uVar23 - 1, uVar23 != uVar19 - 1) {
              uVar8 = uVar23 - uVar19;
              if (uVar8 < uVar16) {
                uVar22 = *(uint *)((longlong)&local_784 + (ulonglong)uVar8 * 4);
              }
              else {
                uVar22 = 0;
              }
              if (uVar8 - 1 < uVar16) {
                uVar8 = *(uint *)((longlong)&local_784 + (ulonglong)(uVar8 - 1) * 4);
              }
              else {
                uVar8 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4) =
                   (uVar8 & ~uVar24) >> (bVar12 & 0x1f) | (uVar22 & uVar24) << sVar3;
            }
            uVar9 = 0;
            if (uVar19 != 0) {
              do {
                *(undefined4 *)((longlong)&local_784 + uVar9 * 4) = 0;
                uVar16 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar16;
              } while (uVar16 != uVar19);
            }
          }
          else {
            uVar25 = 0;
          }
          local_5b8 = 1;
          local_5b4[0] = 2;
          local_788 = uVar25;
          uVar16 = 1;
        }
        else {
          uVar9 = 0;
          do {
            if (local_3e4[uVar9] != *(uint *)((longlong)&local_784 + uVar9 * 4)) goto LAB_14000fb83;
            uVar19 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar19;
          } while (uVar19 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar23 = uVar24 - 0x432 & 0x1f;
          uVar19 = uVar24 - 0x432 >> 5;
          sVar3 = (sbyte)uVar23;
          bVar12 = 0x20 - sVar3;
          uVar24 = (int)(1L << (bVar12 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)uVar25 * 4);
          iVar7 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (bVar27) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          if ((uVar16 + uVar19 < 0x74) &&
             (uVar25 = (0x20U - iVar7 < uVar23) + uVar16 + uVar19, uVar25 < 0x74)) {
            uVar23 = uVar25;
            while (uVar23 = uVar23 - 1, uVar23 != uVar19 - 1) {
              uVar8 = uVar23 - uVar19;
              if (uVar8 < uVar16) {
                uVar22 = *(uint *)((longlong)&local_784 + (ulonglong)uVar8 * 4);
              }
              else {
                uVar22 = 0;
              }
              if (uVar8 - 1 < uVar16) {
                uVar8 = *(uint *)((longlong)&local_784 + (ulonglong)(uVar8 - 1) * 4);
              }
              else {
                uVar8 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4) =
                   (uVar8 & ~uVar24) >> (bVar12 & 0x1f) | (uVar22 & uVar24) << sVar3;
            }
            uVar9 = 0;
            if (uVar19 != 0) {
              do {
                *(undefined4 *)((longlong)&local_784 + uVar9 * 4) = 0;
                uVar16 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar16;
              } while (uVar16 != uVar19);
            }
          }
          else {
            uVar25 = 0;
          }
          local_5b8 = 1;
          local_5b4[0] = 4;
          local_788 = uVar25;
          uVar16 = 1;
        }
      }
      if ((int)uVar6 < 0) {
        local_7e0 = -uVar6;
        uVar9 = (ulonglong)local_7e0 / 10;
        local_7f4 = (uint)uVar9;
        local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,local_7f4);
        uVar19 = 0;
        if (local_7f4 != 0) {
          do {
            uVar19 = (uint)uVar9;
            if (0x26 < uVar19) {
              uVar19 = 0x26;
            }
            local_7d8 = (uint *)CONCAT44(local_7d8._4_4_,uVar19);
            uVar19 = uVar19 - 1;
            bVar12 = (&DAT_140019b02)[(ulonglong)uVar19 * 4];
            bVar2 = (&DAT_140019b03)[(ulonglong)uVar19 * 4];
            local_3e8 = (uint)bVar2 + (uint)bVar12;
            FUN_140014d10((undefined1 (*) [32])local_3e4,0,(ulonglong)bVar12 * 4);
            FUN_140014670((undefined8 *)(local_3e4 + bVar12),
                          (undefined8 *)
                          (&DAT_1400191f0 +
                          (ulonglong)*(ushort *)(&UNK_140019b00 + (ulonglong)uVar19 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            if (local_3e8 < 2) {
              uVar9 = (ulonglong)local_3e4[0];
              if (local_3e4[0] == 0) {
LAB_14001044f:
                uVar25 = 0;
                local_788 = uVar25;
LAB_140010560:
                bVar27 = true;
              }
              else {
                if ((local_3e4[0] == 1) || (uVar25 == 0)) goto LAB_140010560;
                uVar17 = 0;
                uVar15 = 0;
                do {
                  uVar14 = *(uint *)((longlong)&local_784 + uVar15 * 4) * uVar9 + uVar17;
                  *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar14;
                  uVar17 = uVar14 >> 0x20;
                  iVar7 = (int)(uVar14 >> 0x20);
                  uVar19 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar19;
                } while (uVar19 != uVar25);
LAB_140010531:
                uVar25 = local_788;
                if (iVar7 == 0) goto LAB_140010560;
                if (local_788 < 0x73) {
                  *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar7;
                  uVar25 = local_788 + 1;
                  local_788 = uVar25;
                  goto LAB_140010560;
                }
                uVar25 = 0;
                bVar27 = false;
                local_788 = 0;
              }
              if (!bVar27) goto LAB_14001056b;
            }
            else {
              if (uVar25 < 2) {
                uVar19 = (uint)local_784;
                uVar9 = local_784 & 0xffffffff;
                uVar17 = (ulonglong)local_3e8 << 2;
                local_788 = local_3e8;
                if ((ulonglong)local_3e8 != 0) {
                  if (uVar17 < 0x1cd) {
                    FUN_140014670(&local_784,(undefined8 *)local_3e4,uVar17);
                  }
                  else {
                    FUN_140014d10((undefined1 (*) [32])&local_784,0,0x1cc);
                    p_Var10 = FUN_14000a4b4();
                    *(undefined4 *)p_Var10 = 0x22;
                    FUN_14000a3c0();
                  }
                }
                if (uVar19 != 0) {
                  uVar25 = local_788;
                  if ((uVar19 != 1) && (local_788 != 0)) {
                    uVar17 = 0;
                    uVar15 = 0;
                    do {
                      uVar14 = *(uint *)((longlong)&local_784 + uVar15 * 4) * uVar9 + uVar17;
                      *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar14;
                      uVar17 = uVar14 >> 0x20;
                      iVar7 = (int)(uVar14 >> 0x20);
                      uVar25 = (int)uVar15 + 1;
                      uVar15 = (ulonglong)uVar25;
                    } while (uVar25 != local_788);
                    goto LAB_140010531;
                  }
                  goto LAB_140010560;
                }
                goto LAB_14001044f;
              }
              local_798 = (uint *)&local_784;
              local_7d0 = local_3e4;
              uVar19 = local_3e8;
              if (local_3e8 < uVar25) {
                uVar19 = uVar25;
                local_7d0 = (uint *)&local_784;
                uVar25 = local_3e8;
                local_798 = local_3e4;
              }
              local_788 = 0;
              uVar9 = 0;
              local_218 = 0;
              if (uVar25 != 0) {
                do {
                  uVar24 = local_798[uVar9];
                  uVar23 = (uint)uVar9;
                  if (uVar24 == 0) {
                    if (uVar23 == local_788) {
                      local_214[uVar9] = 0;
                      local_788 = uVar23 + 1;
                      local_218 = local_788;
                    }
                  }
                  else {
                    uVar17 = 0;
                    if (uVar19 != 0) {
                      do {
                        uVar8 = (uint)uVar9;
                        uVar15 = uVar9;
                        if (uVar8 == 0x73) break;
                        if (uVar8 == local_788) {
                          local_214[uVar9] = 0;
                          local_218 = uVar8 + 1;
                        }
                        uVar15 = (ulonglong)(uVar8 + 1);
                        uVar17 = (ulonglong)local_7d0[uVar8 + -uVar23] * (ulonglong)uVar24 +
                                 (ulonglong)local_214[uVar9] + uVar17;
                        local_214[uVar9] = (uint)uVar17;
                        uVar17 = uVar17 >> 0x20;
                        uVar9 = uVar15;
                        local_788 = local_218;
                      } while (-uVar23 + uVar8 + 1 != uVar19);
                      uVar24 = (uint)uVar17;
                      uVar9 = uVar15;
                      while (uVar24 != 0) {
                        uVar8 = (uint)uVar9;
                        if (uVar8 == 0x73) goto LAB_14001056b;
                        if (uVar8 == local_788) {
                          local_214[uVar9] = 0;
                          local_218 = uVar8 + 1;
                        }
                        uVar24 = local_214[uVar9];
                        local_214[uVar9] = (uint)(uVar24 + uVar17);
                        uVar24 = (uint)(uVar24 + uVar17 >> 0x20);
                        uVar17 = (ulonglong)uVar24;
                        uVar9 = (ulonglong)(uVar8 + 1);
                        local_788 = local_218;
                      }
                    }
                    if ((int)uVar9 == 0x73) goto LAB_14001056b;
                  }
                  uVar9 = (ulonglong)(uVar23 + 1);
                } while (uVar23 + 1 != uVar25);
              }
              uVar9 = (ulonglong)local_788 << 2;
              uVar25 = local_788;
              if ((ulonglong)local_788 != 0) {
                if (uVar9 < 0x1cd) {
                  FUN_140014670(&local_784,(undefined8 *)local_214,uVar9);
                  uVar25 = local_788;
                }
                else {
                  FUN_140014d10((undefined1 (*) [32])&local_784,0,0x1cc);
                  p_Var10 = FUN_14000a4b4();
                  *(undefined4 *)p_Var10 = 0x22;
                  FUN_14000a3c0();
                  uVar25 = local_788;
                }
              }
            }
            local_7f4 = local_7f4 - (int)local_7d8;
            uVar9 = (ulonglong)local_7f4;
          } while (local_7f4 != 0);
          uVar19 = (uint)local_7e8;
        }
        iVar7 = local_7e0 + uVar19 * -10;
        if (iVar7 == 0) goto LAB_1400100b5;
        uVar19 = *(uint *)(&DAT_140019b98 + (ulonglong)(iVar7 - 1) * 4);
        if (uVar19 != 0) {
          if ((uVar19 != 1) && (uVar25 != 0)) {
            uVar9 = 0;
            uVar17 = 0;
            do {
              uVar15 = (ulonglong)*(uint *)((longlong)&local_784 + uVar17 * 4) * (ulonglong)uVar19 +
                       uVar9;
              *(int *)((longlong)&local_784 + uVar17 * 4) = (int)uVar15;
              uVar9 = uVar15 >> 0x20;
              uVar24 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar24;
            } while (uVar24 != uVar25);
            iVar7 = (int)(uVar15 >> 0x20);
            uVar25 = local_788;
            if (iVar7 != 0) {
              if (0x72 < local_788) goto LAB_14001056b;
              *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar7;
              local_788 = local_788 + 1;
              uVar25 = local_788;
            }
          }
          goto LAB_1400100b5;
        }
LAB_14001056b:
        local_788 = 0;
        pcVar21 = local_7a0;
      }
      else {
        uVar9 = (ulonglong)uVar6 / 10;
        local_7f0 = (uint)uVar9;
        local_7d8 = (uint *)CONCAT44(local_7d8._4_4_,local_7f0);
        iVar7 = 0;
        if (local_7f0 != 0) {
          do {
            local_7e0 = (uint)uVar9;
            if (0x26 < local_7e0) {
              local_7e0 = 0x26;
            }
            uVar19 = local_7e0 - 1;
            bVar12 = (&DAT_140019b02)[(ulonglong)uVar19 * 4];
            bVar2 = (&DAT_140019b03)[(ulonglong)uVar19 * 4];
            local_3e8 = (uint)bVar2 + (uint)bVar12;
            FUN_140014d10((undefined1 (*) [32])local_3e4,0,(ulonglong)bVar12 * 4);
            FUN_140014670((undefined8 *)(local_3e4 + bVar12),
                          (undefined8 *)
                          (&DAT_1400191f0 +
                          (ulonglong)*(ushort *)(&UNK_140019b00 + (ulonglong)uVar19 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            uVar19 = local_5b4[0];
            if (local_3e8 < 2) {
              uVar9 = (ulonglong)local_3e4[0];
              if (local_3e4[0] == 0) {
LAB_14000ff62:
                local_5b8 = 0;
LAB_140010082:
                uVar16 = local_5b8;
LAB_1400100a0:
                bVar27 = true;
              }
              else {
                if ((local_3e4[0] == 1) || (uVar16 == 0)) goto LAB_1400100a0;
                uVar17 = 0;
                uVar15 = 0;
                do {
                  uVar14 = local_5b4[uVar15] * uVar9 + uVar17;
                  local_5b4[uVar15] = (uint)uVar14;
                  uVar17 = uVar14 >> 0x20;
                  uVar19 = (uint)(uVar14 >> 0x20);
                  uVar24 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar24;
                } while (uVar24 != uVar16);
LAB_14001005c:
                uVar16 = local_5b8;
                if (uVar19 == 0) goto LAB_1400100a0;
                if (local_5b8 < 0x73) {
                  local_5b4[local_5b8] = uVar19;
                  local_5b8 = local_5b8 + 1;
                  goto LAB_140010082;
                }
                uVar16 = 0;
                bVar27 = false;
                local_5b8 = 0;
              }
              if (!bVar27) goto LAB_1400100ab;
            }
            else {
              if (uVar16 < 2) {
                uVar9 = (ulonglong)local_5b4[0];
                uVar17 = (ulonglong)local_3e8 << 2;
                local_5b8 = local_3e8;
                if ((ulonglong)local_3e8 != 0) {
                  if (uVar17 < 0x1cd) {
                    FUN_140014670((undefined8 *)local_5b4,(undefined8 *)local_3e4,uVar17);
                  }
                  else {
                    FUN_140014d10((undefined1 (*) [32])local_5b4,0,0x1cc);
                    p_Var10 = FUN_14000a4b4();
                    *(undefined4 *)p_Var10 = 0x22;
                    FUN_14000a3c0();
                  }
                }
                if (uVar19 != 0) {
                  uVar16 = local_5b8;
                  if ((uVar19 != 1) && (local_5b8 != 0)) {
                    uVar17 = 0;
                    uVar15 = 0;
                    do {
                      uVar14 = local_5b4[uVar15] * uVar9 + uVar17;
                      local_5b4[uVar15] = (uint)uVar14;
                      uVar17 = uVar14 >> 0x20;
                      uVar19 = (uint)(uVar14 >> 0x20);
                      uVar16 = (int)uVar15 + 1;
                      uVar15 = (ulonglong)uVar16;
                    } while (uVar16 != local_5b8);
                    goto LAB_14001005c;
                  }
                  goto LAB_1400100a0;
                }
                goto LAB_14000ff62;
              }
              local_7d0 = local_5b4;
              local_7e8 = local_3e4;
              uVar19 = local_3e8;
              if (local_3e8 < uVar16) {
                uVar19 = uVar16;
                local_7e8 = local_5b4;
                local_7d0 = local_3e4;
                uVar16 = local_3e8;
              }
              uVar17 = 0;
              uVar9 = 0;
              local_218 = 0;
              if (uVar16 != 0) {
                do {
                  uVar24 = local_7d0[uVar9];
                  iVar7 = (int)uVar9;
                  if (uVar24 == 0) {
                    if (iVar7 == (int)uVar17) {
                      local_214[uVar9] = 0;
                      uVar17 = (ulonglong)(iVar7 + 1U);
                      local_218 = iVar7 + 1U;
                    }
                  }
                  else {
                    uVar15 = 0;
                    if (uVar19 != 0) {
                      do {
                        iVar20 = (int)uVar9;
                        uVar14 = uVar9;
                        if (iVar20 == 0x73) break;
                        if (iVar20 == (int)uVar17) {
                          local_214[uVar9] = 0;
                          local_218 = iVar20 + 1;
                        }
                        uVar14 = (ulonglong)(iVar20 + 1U);
                        uVar15 = (ulonglong)local_7e8[(uint)(iVar20 + -iVar7)] * (ulonglong)uVar24 +
                                 uVar15 + (ulonglong)local_214[uVar9];
                        local_214[uVar9] = (uint)uVar15;
                        uVar17 = (ulonglong)local_218;
                        uVar15 = uVar15 >> 0x20;
                        uVar9 = uVar14;
                      } while (iVar20 + 1U + -iVar7 != uVar19);
                      uVar24 = (uint)uVar15;
                      uVar9 = uVar14;
                      while (uVar24 != 0) {
                        iVar20 = (int)uVar9;
                        if (iVar20 == 0x73) goto LAB_1400100ab;
                        if (iVar20 == (int)uVar17) {
                          local_214[uVar9] = 0;
                          local_218 = iVar20 + 1U;
                        }
                        uVar24 = local_214[uVar9];
                        local_214[uVar9] = (uint)(uVar15 + uVar24);
                        uVar17 = (ulonglong)local_218;
                        uVar24 = (uint)(uVar15 + uVar24 >> 0x20);
                        uVar15 = (ulonglong)uVar24;
                        uVar9 = (ulonglong)(iVar20 + 1U);
                      }
                    }
                    if ((int)uVar9 == 0x73) goto LAB_1400100ab;
                  }
                  uVar9 = (ulonglong)(iVar7 + 1U);
                } while (iVar7 + 1U != uVar16);
              }
              local_5b8 = (uint)uVar17;
              uVar16 = 0;
              if (uVar17 != 0) {
                if (uVar17 << 2 < 0x1cd) {
                  FUN_140014670((undefined8 *)local_5b4,(undefined8 *)local_214,uVar17 << 2);
                  uVar16 = local_5b8;
                }
                else {
                  FUN_140014d10((undefined1 (*) [32])local_5b4,0,0x1cc);
                  p_Var10 = FUN_14000a4b4();
                  *(undefined4 *)p_Var10 = 0x22;
                  FUN_14000a3c0();
                  uVar16 = local_5b8;
                }
              }
            }
            local_7f0 = local_7f0 - local_7e0;
            uVar9 = (ulonglong)local_7f0;
          } while (local_7f0 != 0);
          iVar7 = (int)local_7d8;
        }
        iVar7 = uVar6 + iVar7 * -10;
        if (iVar7 != 0) {
          uVar19 = *(uint *)(&DAT_140019b98 + (ulonglong)(iVar7 - 1) * 4);
          if (uVar19 == 0) {
LAB_1400100ab:
            local_5b8 = 0;
LAB_1400100ae:
            uVar16 = local_5b8;
          }
          else if ((uVar19 != 1) && (uVar16 != 0)) {
            uVar9 = 0;
            uVar17 = 0;
            do {
              uVar15 = (ulonglong)local_5b4[uVar17] * (ulonglong)uVar19 + uVar9;
              local_5b4[uVar17] = (uint)uVar15;
              uVar9 = uVar15 >> 0x20;
              uVar24 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar24;
            } while (uVar24 != uVar16);
            uVar19 = (uint)(uVar15 >> 0x20);
            uVar16 = local_5b8;
            if (uVar19 != 0) {
              if (0x72 < local_5b8) goto LAB_1400100ab;
              local_5b4[local_5b8] = uVar19;
              local_5b8 = local_5b8 + 1;
              goto LAB_1400100ae;
            }
          }
        }
LAB_1400100b5:
        pcVar21 = local_7a0;
        if (uVar25 != 0) {
          uVar9 = 0;
          uVar17 = 0;
          do {
            uVar15 = uVar9 + (ulonglong)*(uint *)((longlong)&local_784 + uVar17 * 4) * 10;
            *(int *)((longlong)&local_784 + uVar17 * 4) = (int)uVar15;
            uVar19 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar19;
            uVar9 = uVar15 >> 0x20;
          } while (uVar19 != uVar25);
          iVar7 = (int)(uVar15 >> 0x20);
          if (iVar7 != 0) {
            if (local_788 < 0x73) {
              *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar7;
              local_788 = local_788 + 1;
            }
            else {
              local_3e8 = 0;
              local_788 = 0;
              memcpy_s(&local_784,0x1cc,local_3e4,0);
            }
          }
        }
      }
      uVar9 = FUN_14000f340(&local_788,&local_5b8);
      if ((int)uVar9 == 10) {
        uVar6 = uVar6 + 1;
        *pcVar21 = '1';
        pcVar18 = pcVar21 + 1;
        if (uVar16 != 0) {
          uVar9 = 0;
          uVar17 = 0;
          do {
            uVar15 = uVar9 + (ulonglong)local_5b4[uVar17] * 10;
            local_5b4[uVar17] = (uint)uVar15;
            uVar25 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar25;
            uVar9 = uVar15 >> 0x20;
          } while (uVar25 != uVar16);
          uVar25 = (uint)(uVar15 >> 0x20);
          if (uVar25 != 0) {
            if (local_5b8 < 0x73) {
              local_5b4[local_5b8] = uVar25;
              local_5b8 = local_5b8 + 1;
            }
            else {
              local_3e8 = 0;
              local_5b8 = 0;
              memcpy_s(local_5b4,0x1cc,local_3e4,0);
            }
          }
        }
      }
      else if ((int)uVar9 == 0) {
        uVar6 = uVar6 - 1;
        pcVar18 = pcVar21;
      }
      else {
        pcVar18 = pcVar21 + 1;
        *pcVar21 = (char)uVar9 + '0';
      }
      local_790[1] = uVar6;
      uVar25 = local_7c8;
      if (((-1 < (int)uVar6) && (local_7c8 < 0x80000000)) && (local_7c4 == 0)) {
        uVar25 = local_7c8 + uVar6;
      }
      uVar9 = (ulonglong)uVar25;
      if (param_6 - 1 < (ulonglong)uVar25) {
        uVar9 = param_6 - 1;
      }
      pcVar21 = pcVar21 + uVar9;
      bVar27 = false;
      while ((pcVar18 != pcVar21 && (local_788 != 0))) {
        uVar9 = 0;
        uVar17 = 0;
        do {
          uVar15 = (ulonglong)*(uint *)((longlong)&local_784 + uVar17 * 4) * 1000000000 + uVar9;
          *(int *)((longlong)&local_784 + uVar17 * 4) = (int)uVar15;
          uVar9 = uVar15 >> 0x20;
          uVar25 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar25;
        } while (uVar25 != local_788);
        iVar7 = (int)(uVar15 >> 0x20);
        if (iVar7 != 0) {
          if (local_788 < 0x73) {
            *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar7;
            local_788 = local_788 + 1;
          }
          else {
            local_3e8 = 0;
            local_788 = 0;
            memcpy_s(&local_784,0x1cc,local_3e4,0);
          }
        }
        uVar9 = FUN_14000f340(&local_788,&local_5b8);
        uVar25 = 8;
        do {
          uVar17 = (uVar9 & 0xffffffff) / 10;
          cVar13 = (char)uVar9 + (char)uVar17 * -10 + '0';
          if (uVar25 < (uint)((int)pcVar21 - (int)pcVar18)) {
            pcVar18[uVar25] = cVar13;
          }
          else if (cVar13 != '0') {
            bVar27 = true;
          }
          uVar25 = uVar25 - 1;
          uVar9 = uVar17;
        } while (uVar25 != 0xffffffff);
        lVar11 = (longlong)pcVar21 - (longlong)pcVar18;
        if (9 < lVar11) {
          lVar11 = 9;
        }
        pcVar18 = pcVar18 + lVar11;
      }
      *pcVar18 = '\0';
      if ((local_788 != 0) || (bVar27)) {
        uVar26 = 0;
      }
      _controlfp_s(&local_7c4,local_7c0,local_7bc);
      goto LAB_140010a1f;
    }
    param_4[1] = 0;
    pcVar21 = "0";
  }
  else {
    if (uVar9 != 0x7ff) goto LAB_14000f972;
    if (((ulonglong)puVar1 & 0xfffffffffffff) == 0) {
      uVar25 = 1;
    }
    else if (((longlong)puVar1 < 0) && (((ulonglong)puVar1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar25 = 4;
    }
    else {
      uVar25 = ~(uint)((ulonglong)puVar1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar25 == 1) {
      eVar5 = strcpy_s(param_5,param_6,"1#INF");
      if (eVar5 != 0) goto LAB_140010a54;
      uVar26 = 0;
      goto LAB_140010a1f;
    }
    if (uVar25 == 2) {
      pcVar21 = "1#QNAN";
    }
    else if (uVar25 == 3) {
      pcVar21 = "1#SNAN";
    }
    else {
      if (uVar25 != 4) goto LAB_14000f972;
      pcVar21 = "1#IND";
    }
  }
  eVar5 = strcpy_s(param_5,param_6,pcVar21);
  if (eVar5 != 0) {
LAB_140010a54:
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_140010a1f:
  if (local_7b0 != '\0') {
    FUN_1400125c0(local_7b8);
  }
  return uVar26;
}

// memcpy_s @ 0x140010a6c
/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  __acrt_ptd *p_Var1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_140010a89:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_140010a92:
      p_Var1 = FUN_14000a4b4();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_140014670(_Dst,_Src,_MaxCount);
        goto LAB_140010a89;
      }
      FUN_140014d10(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_140010a92;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      p_Var1 = FUN_14000a4b4();
      eVar2 = 0x22;
    }
    *(errno_t *)p_Var1 = eVar2;
    FUN_14000a3c0();
  }
  return eVar2;
}

// fegetround @ 0x140010af4
/* Library Function - Single Match
    fegetround
   
   Library: Visual Studio 2019 Release */

void fegetround(void)

{
  uint uVar1;
  
  uVar1 = FUN_140012ce8();
  FUN_140012cdc(uVar1);
  return;
}

// FUN_140010b08 @ 0x140010b08
void FUN_140010b08(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  uVar1 = FUN_140012fec((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}

// FUN_140010b4c @ 0x140010b4c
longlong FUN_140010b4c(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                      longlong param_5)

{
  byte *pbVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  pbVar5 = (byte *)*param_2;
  lVar4 = 0;
  puVar3 = param_1;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      uVar6 = FUN_140012fec(0,pbVar5,uVar6,param_4,param_5);
      if (uVar6 == 0xffffffffffffffff) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (uVar6 == 0) break;
      if (uVar6 == 4) {
        lVar4 = lVar4 + 1;
      }
      pbVar5 = pbVar5 + uVar6;
      lVar4 = lVar4 + 1;
    }
  }
  else {
    for (; pbVar1 = pbVar5, param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      uVar6 = FUN_140012fec((ulonglong)local_res8,pbVar5,uVar6,param_4,param_5);
      if (uVar6 == 0xffffffffffffffff) {
        *param_2 = pbVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      pbVar1 = (byte *)0x0;
      if (uVar6 == 0) {
        *puVar3 = 0;
        break;
      }
      uVar2 = local_res8[0];
      if (0xffff < local_res8[0]) {
        pbVar1 = pbVar5;
        if (param_3 < 2) break;
        local_res8[0] = local_res8[0] - 0x10000;
        param_3 = param_3 - 1;
        *puVar3 = (ushort)(local_res8[0] >> 10) | 0xd800;
        puVar3 = puVar3 + 1;
        uVar2 = (uint)((ushort)local_res8[0] & 0x3ff | 0xdc00);
      }
      *puVar3 = (ushort)uVar2;
      pbVar5 = pbVar5 + uVar6;
      puVar3 = puVar3 + 1;
    }
    *param_2 = pbVar1;
    lVar4 = (longlong)puVar3 - (longlong)param_1 >> 1;
  }
  return lVar4;
}

// FUN_140010cf0 @ 0x140010cf0
int FUN_140010cf0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_140023548; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_140023550 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_1400132ec(*(int **)(DAT_140023550 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_140023550 + lVar4 * 8) + 0x30));
      FUN_14000a4d4(*(LPVOID *)(DAT_140023550 + lVar4 * 8));
      *(undefined8 *)(DAT_140023550 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}

// __acrt_stdio_free_buffer_nolock @ 0x140010da4
/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_14000a4d4((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}

// FUN_140010de8 @ 0x140010de8
byte FUN_140010de8(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_140023980)) {
      return *(byte *)((&DAT_140023580)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 9;
    FUN_14000a3c0();
  }
  return 0;
}

// FUN_140010e50 @ 0x140010e50
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140010e50(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 auStack_438 [62];
  undefined8 auStack_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_140022040 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    p_Var3 = FUN_14000a4b4();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_14000a3c0();
  }
  else if (1 < param_2) {
    local_448 = 0;
    puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_140010ef0:
    while (uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar9) {
      lVar5 = (uVar9 >> 1) * param_3;
      puVar7 = param_1 + lVar5;
      iVar2 = (*(code *)param_4)(param_1,puVar7);
      if ((0 < iVar2) && (puVar6 = puVar7, uVar9 = param_3, param_1 != puVar7)) {
        do {
          uVar1 = puVar6[-lVar5];
          puVar6[-lVar5] = *puVar6;
          *puVar6 = uVar1;
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar9 != 0);
      }
      iVar2 = (*(code *)param_4)(param_1,puVar10);
      if ((0 < iVar2) && (param_1 != puVar10)) {
        puVar6 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
          puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar2 = (*(code *)param_4)(puVar7);
      puVar6 = param_1;
      puVar8 = puVar10;
      if ((0 < iVar2) && (puVar7 != puVar10)) {
        puVar4 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar4[(longlong)puVar7 - (longlong)puVar10];
          puVar4[(longlong)puVar7 - (longlong)puVar10] = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
LAB_1400110a0:
      puVar4 = puVar7;
      if (puVar6 < puVar4) {
        do {
          puVar6 = puVar6 + param_3;
          if (puVar4 <= puVar6) goto LAB_1400110d0;
          iVar2 = (*(code *)param_4)(puVar6);
        } while (iVar2 < 1);
      }
      else {
LAB_1400110d0:
        do {
          puVar6 = puVar6 + param_3;
          if (puVar10 < puVar6) break;
          iVar2 = (*(code *)param_4)(puVar6);
        } while (iVar2 < 1);
      }
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + -param_3;
        if (puVar8 <= puVar4) break;
        iVar2 = (*(code *)param_4)(puVar8);
      } while (0 < iVar2);
      if (puVar6 <= puVar8) {
        if (puVar8 != puVar6) {
          puVar7 = puVar8;
          uVar9 = param_3;
          do {
            uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
            puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar7 = puVar6;
        if (puVar4 != puVar8) {
          puVar7 = puVar4;
        }
        goto LAB_1400110a0;
      }
      if (puVar4 < puVar7) {
        do {
          puVar7 = puVar7 + -param_3;
          if (puVar7 <= puVar4) goto LAB_140011187;
          iVar2 = (*(code *)param_4)(puVar7);
        } while (iVar2 == 0);
      }
      else {
LAB_140011187:
        do {
          puVar7 = puVar7 + -param_3;
          if (puVar7 <= param_1) break;
          iVar2 = (*(code *)param_4)(puVar7);
        } while (iVar2 == 0);
      }
      if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6)
      goto LAB_1400111ed;
      if (param_1 < puVar7) {
        auStack_438[local_448] = param_1;
        auStack_248[local_448] = puVar7;
        local_448 = local_448 + 1;
      }
      param_1 = puVar6;
      if (puVar10 <= puVar6) goto LAB_140010f83;
    }
    for (; puVar6 = param_1, puVar7 = param_1, param_1 < puVar10; puVar10 = puVar10 + -param_3) {
      while (puVar7 = puVar7 + param_3, puVar7 <= puVar10) {
        iVar2 = (*(code *)param_4)(puVar7,puVar6);
        if (0 < iVar2) {
          puVar6 = puVar7;
        }
      }
      if (puVar6 != puVar10) {
        puVar7 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar10];
          puVar7[(longlong)puVar6 - (longlong)puVar10] = *puVar7;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    goto LAB_140010f83;
  }
  return;
LAB_1400111ed:
  if (puVar6 < puVar10) {
    auStack_438[local_448] = puVar6;
    auStack_248[local_448] = puVar10;
    local_448 = local_448 + 1;
  }
  puVar10 = puVar7;
  if (puVar7 <= param_1) {
LAB_140010f83:
    local_448 = local_448 + -1;
    if (local_448 < 0) {
      return;
    }
    param_1 = (undefined1 *)auStack_438[local_448];
    puVar10 = (undefined1 *)auStack_248[local_448];
  }
  goto LAB_140010ef0;
}

// FUN_140011260 @ 0x140011260
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140011260(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  LPCWSTR pWVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  puVar10 = auStack_88;
  puVar12 = auStack_88;
  local_30 = DAT_140022040 ^ (ulonglong)local_38;
  if (0 < param_5) {
    __strncnt(param_4,(longlong)param_5);
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  uVar5 = FUN_14000d61c(param_8,(ulonglong)((-(uint)(param_9 != 0) & 8) + 1));
  pWVar9 = (LPCWSTR)0x0;
  iVar4 = (int)uVar5;
  puVar13 = auStack_88;
  if (iVar4 == 0) goto LAB_14001156b;
  uVar5 = (longlong)iVar4 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)iVar4 * 2) < uVar5) & uVar5;
  if (uVar5 == 0) {
LAB_140011551:
    uVar5 = 0;
    if (pWVar9 != (LPCWSTR)0x0) goto LAB_140011558;
  }
  else {
    if (uVar5 < 0x401) {
      uVar8 = uVar5 + 0xf;
      if (uVar8 <= uVar5) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar12 = auStack_88 + lVar1;
      puVar10 = auStack_88 + lVar1;
      puVar6 = (undefined4 *)((longlong)local_38 + lVar1);
      pWVar9 = (LPCWSTR)0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_140011551;
      *puVar6 = 0xcccc;
LAB_14001136c:
      pWVar9 = (LPCWSTR)(puVar6 + 4);
      puVar12 = puVar10;
    }
    else {
      puVar6 = _malloc_base(uVar5);
      pWVar9 = (LPCWSTR)0x0;
      puVar12 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_14001136c;
      }
    }
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_140011551;
    *(int *)(puVar12 + 0x28) = iVar4;
    *(LPCWSTR *)(puVar12 + 0x20) = pWVar9;
    *(undefined8 *)(puVar12 + -8) = 0x140011396;
    iVar2 = FUN_14000d61c(param_8,1);
    if (iVar2 == 0) goto LAB_140011551;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    *(undefined8 *)(puVar12 + 0x38) = 0;
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined4 *)(puVar12 + 0x28) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + -8) = 0x1400113c9;
    iVar2 = FUN_14000e7ac(param_2,param_3,pWVar9,iVar4,*(LPWSTR *)(puVar12 + 0x20),
                          *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                          *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
    puVar6 = (undefined4 *)0x0;
    uVar5 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_140011551;
    if ((param_3 & 0x400) == 0) {
      uVar8 = uVar5 * 2 + 0x10;
      uVar8 = -(ulonglong)(uVar5 * 2 < uVar8) & uVar8;
      if (uVar8 == 0) goto LAB_140011534;
      if (uVar8 < 0x401) {
        uVar5 = uVar8 + 0xf;
        if (uVar5 <= uVar8) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar12 + -8) = 0x14001146c;
        lVar1 = -(uVar5 & 0xfffffffffffffff0);
        puVar11 = puVar12 + lVar1;
        puVar7 = (undefined4 *)(puVar12 + lVar1 + 0x50);
        puVar12 = puVar12 + lVar1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xcccc;
          puVar12 = puVar11;
LAB_14001149a:
          puVar6 = puVar7 + 4;
          goto LAB_14001149e;
        }
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x14001148a;
        puVar7 = _malloc_base(uVar8);
        puVar6 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xdddd;
          goto LAB_14001149a;
        }
LAB_14001149e:
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar12 + 0x40) = 0;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          *(int *)(puVar12 + 0x28) = iVar2;
          *(undefined4 **)(puVar12 + 0x20) = puVar6;
          *(undefined8 *)(puVar12 + -8) = 0x1400114d0;
          iVar4 = FUN_14000e7ac(param_2,param_3,pWVar9,iVar4,*(LPWSTR *)(puVar12 + 0x20),
                                *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                                *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
          if (iVar4 != 0) {
            *(undefined8 *)(puVar12 + 0x38) = 0;
            *(undefined8 *)(puVar12 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar12 + 0x28) = 0;
              *(undefined8 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1400114fe;
              uVar3 = FUN_14000d6ac(param_8,0,puVar6,iVar2);
              if (uVar3 == 0) goto LAB_140011534;
            }
            else {
              *(int *)(puVar12 + 0x28) = param_7;
              *(undefined8 *)(puVar12 + 0x20) = param_6;
              *(undefined8 *)(puVar12 + -8) = 0x140011518;
              uVar3 = FUN_14000d6ac(param_8,0,puVar6,iVar2);
              if (uVar3 == 0) goto LAB_140011539;
            }
            uVar5 = (ulonglong)uVar3;
            if (puVar6[-4] == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x14001152f;
              FUN_14000a4d4(puVar6 + -4);
            }
            goto LAB_140011558;
          }
LAB_140011534:
          if (puVar6 != (undefined4 *)0x0) {
LAB_140011539:
            if (puVar6[-4] == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x14001154a;
              FUN_14000a4d4(puVar6 + -4);
            }
          }
        }
      }
      uVar5 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar12 + 0x40) = 0;
        *(undefined8 *)(puVar12 + 0x38) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        *(int *)(puVar12 + 0x28) = param_7;
        *(undefined8 *)(puVar12 + 0x20) = param_6;
        *(undefined8 *)(puVar12 + -8) = 0x140011421;
        uVar3 = FUN_14000e7ac(param_2,param_3,pWVar9,iVar4,*(LPWSTR *)(puVar12 + 0x20),
                              *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                              *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
        uVar5 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_140011558;
      }
      goto LAB_140011551;
    }
LAB_140011558:
    if (*(int *)(pWVar9 + -8) == 0xdddd) {
      *(undefined8 *)(puVar12 + -8) = 0x140011569;
      FUN_14000a4d4(pWVar9 + -8);
    }
  }
  uVar5 = uVar5 & 0xffffffff;
  puVar13 = puVar12;
LAB_14001156b:
  *(undefined8 *)(puVar13 + -8) = 0x140011577;
  return uVar5;
}

// __acrt_LCMapStringA @ 0x140011594
/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,char *param_4,
                        int param_5,undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_140011260(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}

// FUN_14001162c @ 0x14001162c
bool FUN_14001162c(void)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_initialize_multibyte();
  return (char)uVar1 == '\0';
}

// __ascii_wcsnicmp @ 0x140011644
/* Library Function - Single Match
    __ascii_wcsnicmp
   
   Library: Visual Studio 2019 Release */

int __ascii_wcsnicmp(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar1 + 0x20;
    if (0x19 < uVar1 - 0x41) {
      uVar3 = (uint)uVar1;
    }
    uVar4 = uVar2 + 0x20;
    if (0x19 < uVar2 - 0x41) {
      uVar4 = (uint)uVar2;
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}

// FUN_140011690 @ 0x140011690
undefined4 FUN_140011690(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (ushort *)0x0) {
    iVar3 = 0;
    iVar4 = 0xe3;
    do {
      iVar1 = (iVar4 + iVar3) / 2;
      iVar2 = __ascii_wcsnicmp(param_1,(ushort *)(&PTR_DAT_14001b640)[(longlong)iVar1 * 2],0x55);
      if (iVar2 == 0) {
        iVar3 = *(int *)(&DAT_14001b648 + (longlong)iVar1 * 0x10);
        if (iVar3 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar3) {
          return 0;
        }
        return *(undefined4 *)(&DAT_140019be0 + (longlong)iVar3 * 0x10);
      }
      if (iVar2 < 0) {
        iVar4 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
    } while (iVar3 <= iVar4);
  }
  return 0;
}

// _msize_base @ 0x140011734
/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_14000a3c0();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000140011766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_140023dd0,0,param_1);
  return uVar2;
}

// _realloc_base @ 0x140011770
/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  undefined7 extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_14000a4d4(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_140023dd0,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_140009854();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_140009898(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      p_Var4 = FUN_14000a4b4();
      *(undefined4 *)p_Var4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}

// FUN_1400117ec @ 0x1400117ec
undefined8 FUN_1400117ec(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  
  FUN_14000dae4(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_140023580)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_14000dbf0(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_140011863;
    DVar3 = GetLastError();
    p_Var4 = FUN_14000a494();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_14000a4b4();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_140011863:
  FUN_14000db0c(*param_4);
  return uVar5;
}

// _commit @ 0x140011878
/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_140023980)) &&
       ((*(byte *)((&DAT_140023580)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_1400117ec(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 9;
    FUN_14000a3c0();
  }
  return -1;
}

// FUN_14001190c @ 0x14001190c
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_14001190c(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  ushort local_c4 [2];
  uint local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_140022040 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar16 = (longlong)(int)param_2 >> 6;
  uVar6 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_140023580)[lVar16] + 0x28 + uVar6 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar16;
  local_a0 = GetConsoleOutputCP();
  uVar14 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_140008790(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar15 = uVar14;
  local_68 = lVar16;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4[0] = 0;
      local_c4[1] = 0;
      uVar9 = 1;
      if (local_9c == 0xfde9) {
        pcVar7 = (char *)(uVar6 * 0x48 + 0x3e + (&DAT_140023580)[local_68]);
        uVar15 = uVar14;
        uVar17 = uVar14;
        do {
          uVar9 = (uint)uVar15;
          if (*pcVar7 == '\0') break;
          uVar9 = uVar9 + 1;
          uVar15 = (ulonglong)uVar9;
          uVar17 = uVar17 + 1;
          pcVar7 = pcVar7 + 1;
        } while ((longlong)uVar17 < 5);
        if ((longlong)uVar17 < 1) {
          cVar1 = (&DAT_140022950)[*param_3];
          iVar3 = cVar1 + 1;
          lVar16 = (longlong)local_b8 - (longlong)param_3;
          if (lVar16 < iVar3) {
            uVar15 = uVar14;
            if (0 < lVar16) {
              do {
                *(byte *)((&DAT_140023580)[local_90] + uVar14 + 0x3e + uVar6 * 0x48) =
                     param_3[uVar14];
                uVar9 = (int)uVar15 + 1;
                uVar14 = uVar14 + 1;
                uVar15 = (ulonglong)uVar9;
              } while ((int)uVar9 < lVar16);
            }
            param_1[1] = param_1[1] + (int)lVar16;
            return param_1;
          }
          local_a8[0] = 0;
          local_a8[1] = 0;
          uVar9 = (iVar3 == 4) + 1;
          local_78 = param_3;
          lVar16 = FUN_140010b4c(local_c4,&local_78,(ulonglong)uVar9,local_a8,(longlong)local_b0);
          if (lVar16 == -1) {
            return param_1;
          }
          pbVar13 = param_3 + cVar1;
          lVar16 = local_90;
        }
        else {
          cVar1 = (&DAT_140022950)[*(byte *)((&DAT_140023580)[lVar16] + 0x3e + uVar6 * 0x48)];
          iVar3 = (cVar1 + 1) - uVar9;
          local_a8[0] = iVar3;
          lVar11 = (longlong)local_b8 - (longlong)param_3;
          uVar15 = (ulonglong)iVar3;
          if (lVar11 < (longlong)uVar15) {
            if (0 < lVar11) {
              uVar15 = uVar17;
              do {
                *(byte *)((&DAT_140023580)[lVar16] + uVar15 + 0x3e + uVar6 * 0x48) =
                     param_3[uVar15 - uVar17];
                uVar9 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar9;
                uVar15 = uVar15 + 1;
              } while ((int)uVar9 < lVar11);
            }
            param_1[1] = param_1[1] + (int)lVar11;
            return param_1;
          }
          puVar12 = (undefined1 *)(uVar6 * 0x48 + 0x3e + (&DAT_140023580)[local_68]);
          uVar8 = uVar14;
          do {
            *(undefined1 *)((longlong)&local_58 + uVar8) = *puVar12;
            uVar8 = uVar8 + 1;
            puVar12 = puVar12 + 1;
          } while ((longlong)uVar8 < (longlong)uVar17);
          uVar8 = uVar14;
          if (0 < (longlong)uVar15) {
            FUN_140014670((undefined8 *)((longlong)&local_58 + uVar17),(undefined8 *)param_3,uVar15)
            ;
          }
          do {
            *(undefined1 *)((&DAT_140023580)[lVar16] + uVar8 + 0x3e + uVar6 * 0x48) = 0;
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)uVar17);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = &local_58;
          uVar9 = (cVar1 + 1 == 4) + 1;
          lVar11 = FUN_140010b4c(local_c4,&local_80,(ulonglong)uVar9,local_88,(longlong)local_b0);
          if (lVar11 == -1) {
            return param_1;
          }
          pbVar13 = param_3 + (int)(local_a8[0] - 1);
        }
      }
      else {
        lVar11 = (&DAT_140023580)[lVar16];
        bVar2 = *(byte *)(lVar11 + 0x3d + uVar6 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
            pbVar13 = param_3 + 1;
            if (local_b8 <= pbVar13) {
              *(byte *)(lVar11 + 0x3e + uVar6 * 0x48) = *param_3;
              pbVar13 = (byte *)((&DAT_140023580)[lVar16] + 0x3d + uVar6 * 0x48);
              *pbVar13 = *pbVar13 | 4;
              param_1[1] = (int)uVar15 + 1;
              return param_1;
            }
            iVar3 = FUN_14000b61c(local_c4,param_3,2,local_b0);
            if (iVar3 == -1) {
              return param_1;
            }
            goto LAB_140011c02;
          }
          uVar15 = 1;
          pbVar13 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar11 + 0x3e + uVar6 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar11 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
          uVar15 = 2;
          pbVar13 = &local_50;
        }
        iVar3 = FUN_14000b61c(local_c4,pbVar13,uVar15,local_b0);
        pbVar13 = param_3;
        if (iVar3 == -1) {
          return param_1;
        }
      }
LAB_140011c02:
      param_3 = pbVar13 + 1;
      uVar9 = FUN_14000d6ac(local_a0,0,local_c4,uVar9);
      hFile = local_70;
      if (uVar9 == 0) {
        return param_1;
      }
      BVar4 = WriteFile(local_70,local_48,uVar9,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
LAB_140011d4f:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        return param_1;
      }
      uVar10 = ((int)param_3 - (int)local_98) + param_1[2];
      param_1[1] = uVar10;
      if (local_c0[0] < uVar9) {
        return param_1;
      }
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_140011d4f;
        if (local_c0[0] == 0) {
          return param_1;
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        uVar10 = param_1[1];
      }
      uVar15 = (ulonglong)uVar10;
    } while (param_3 < local_b8);
  }
  return param_1;
}

// write_text_ansi_nolock @ 0x140011d84
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD * __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 in_register_0000000c;
  DWORD *pDVar4;
  uint nNumberOfBytesToWrite;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 in_register_00000084;
  ulonglong in_R9;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;
  
  pcVar7 = (char *)CONCAT44(in_register_00000084,param_3);
  pDVar4 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  local_20 = 0x140011d9c;
  local_28 = DAT_140022040 ^ (ulonglong)auStackY_1468;
  pcVar6 = pcVar7 + (in_R9 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_140023580)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar4[0] = 0;
  pDVar4[1] = 0;
  pDVar4[2] = 0;
  do {
    if (pcVar6 <= pcVar7) {
      return pDVar4;
    }
    pcVar5 = local_1428;
    do {
      if (pcVar6 <= pcVar7) break;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\n') {
        pDVar4[2] = pDVar4[2] + 1;
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < local_1428 + 0x13ff);
    nNumberOfBytesToWrite = (int)pcVar5 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *pDVar4 = DVar3;
      return pDVar4;
    }
    pDVar4[1] = pDVar4[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return pDVar4;
    }
  } while( true );
}

// write_text_utf16le_nolock @ 0x140011e88
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD * __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 in_register_0000000c;
  DWORD *pDVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_register_00000084;
  ulonglong in_R9;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;
  
  psVar7 = (short *)CONCAT44(in_register_00000084,param_3);
  pDVar4 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  local_20 = 0x140011ea0;
  local_28 = DAT_140022040 ^ (ulonglong)auStackY_1468;
  psVar6 = (short *)((in_R9 & 0xffffffff) + (longlong)psVar7);
  hFile = *(HANDLE *)
           ((&DAT_140023580)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar4[0] = 0;
  pDVar4[1] = 0;
  pDVar4[2] = 0;
  do {
    if (psVar6 <= psVar7) {
      return pDVar4;
    }
    psVar5 = local_1428;
    do {
      if (psVar6 <= psVar7) break;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      if (sVar1 == 10) {
        pDVar4[2] = pDVar4[2] + 2;
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1428 + 0x9ff);
    nNumberOfBytesToWrite = (int)((longlong)psVar5 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *pDVar4 = DVar3;
      return pDVar4;
    }
    pDVar4[1] = pDVar4[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return pDVar4;
    }
  } while( true );
}

// write_text_utf8_nolock @ 0x140011fa4
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD * __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  short *psVar5;
  undefined4 in_register_0000000c;
  DWORD *pDVar6;
  uint uVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined4 in_register_00000084;
  uint in_R9D;
  short *psVar10;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;
  
  psVar9 = (short *)CONCAT44(in_register_00000084,param_3);
  pDVar6 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  local_30 = 0x140011fc0;
  local_38 = DAT_140022040 ^ (ulonglong)auStackY_1498;
  psVar10 = (short *)((ulonglong)in_R9D + (longlong)psVar9);
  hFile = *(HANDLE *)
           ((&DAT_140023580)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar6[0] = 0;
  pDVar6[1] = 0;
  pDVar6[2] = 0;
  do {
    if (psVar10 <= psVar9) {
      return pDVar6;
    }
    psVar5 = local_1448;
    do {
      if (psVar10 <= psVar9) break;
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
      if (sVar1 == 10) {
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1448 + 0x354);
    uVar2 = FUN_14000d6ac(0xfde9,0,local_1448,(int)((longlong)psVar5 - (longlong)local_1448 >> 1));
    if (uVar2 == 0) {
LAB_1400120dd:
      DVar4 = GetLastError();
      *pDVar6 = DVar4;
      return pDVar6;
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        BVar3 = WriteFile(hFile,local_d98 + uVar8,uVar2 - (int)uVar8,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_1400120dd;
        uVar7 = (int)uVar8 + local_1458[0];
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar2);
    }
    pDVar6[1] = (int)psVar9 - param_3;
  } while( true );
}

// FUN_140012114 @ 0x140012114
int FUN_140012114(uint param_1,wchar_t *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_140023980 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_140023580)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_14000dae4(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_140023580)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_140012234(param_1,param_2,param_3,param_4);
        }
        FUN_14000db0c(param_1);
        return iVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}

// FUN_140012234 @ 0x140012234
int FUN_140012234(uint param_1,wchar_t *param_2,uint param_3,longlong *param_4)

{
  wchar_t *pwVar1;
  char cVar2;
  wchar_t _WCh;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  wchar_t wVar6;
  wint_t wVar7;
  BOOL BVar8;
  DWORD DVar9;
  int iVar10;
  ulonglong uVar11;
  undefined7 extraout_var;
  DWORD *pDVar12;
  DWORD DVar13;
  uint uVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined8 local_80;
  DWORD local_78;
  undefined8 local_70;
  DWORD local_60 [2];
  longlong local_58;
  
  DVar13 = 0;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_140012264:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar11 = (ulonglong)(param_1 & 0x3f);
  lVar15 = (longlong)(int)param_1 >> 6;
  cVar2 = *(char *)((&DAT_140023580)[lVar15] + 0x39 + uVar11 * 0x48);
  local_58 = lVar15;
  if (((byte)(cVar2 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_140012264;
  if ((*(byte *)((&DAT_140023580)[lVar15] + 0x38 + uVar11 * 0x48) & 0x20) != 0) {
    thunk_FUN_140013384(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_70 = 0;
  bVar5 = FUN_140010de8(param_1);
  if (((int)CONCAT71(extraout_var,bVar5) == 0) ||
     (-1 < *(char *)((&DAT_140023580)[lVar15] + 0x38 + uVar11 * 0x48))) {
LAB_140012417:
    if (-1 < *(char *)((&DAT_140023580)[lVar15] + 0x38 + uVar11 * 0x48)) {
      local_80 = 0;
      local_78 = 0;
      BVar8 = WriteFile(*(HANDLE *)((&DAT_140023580)[lVar15] + 0x28 + uVar11 * 0x48),param_2,param_3
                        ,(LPDWORD)((longlong)&local_80 + 4),(LPOVERLAPPED)0x0);
      DVar13 = local_78;
      uVar4 = local_80;
      if (BVar8 == 0) {
        DVar13 = GetLastError();
        local_80 = CONCAT44(local_80._4_4_,DVar13);
        DVar13 = local_78;
        uVar4 = local_80;
      }
      goto LAB_1400124b8;
    }
    uVar14 = (uint)param_2;
    if (cVar2 == '\0') {
      pDVar12 = (DWORD *)write_text_ansi_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14);
    }
    else if (cVar2 == '\x01') {
      pDVar12 = (DWORD *)write_text_utf8_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14);
    }
    else {
      DVar13 = 0;
      uVar4 = local_70;
      if (cVar2 != '\x02') goto LAB_1400124b8;
      pDVar12 = (DWORD *)write_text_utf16le_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14)
      ;
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_140008790(param_4);
    }
    if (((*(longlong *)(param_4[3] + 0x138) == 0) &&
        (*(char *)((&DAT_140023580)[lVar15] + 0x39 + uVar11 * 0x48) == '\0')) ||
       (BVar8 = GetConsoleMode(*(HANDLE *)((&DAT_140023580)[lVar15] + 0x28 + uVar11 * 0x48),local_60
                              ), BVar8 == 0)) goto LAB_140012417;
    if (cVar2 != '\0') {
      if ((cVar2 == '\x01') || (uVar4 = local_70, cVar2 == '\x02')) {
        pwVar1 = (wchar_t *)((longlong)param_2 + (ulonglong)param_3);
        local_80 = 0;
        lVar15 = local_58;
        uVar4 = local_80;
        if (param_2 < pwVar1) {
          local_80._4_4_ = 0;
          pwVar16 = param_2;
          iVar10 = local_80._4_4_;
          do {
            _WCh = *pwVar16;
            wVar6 = _putwch_nolock(_WCh);
            if (wVar6 != _WCh) {
LAB_1400123db:
              DVar9 = GetLastError();
              local_80 = CONCAT44(local_80._4_4_,DVar9);
              lVar15 = local_58;
              uVar4 = local_80;
              break;
            }
            local_80 = CONCAT44(iVar10 + 2,(DWORD)local_80);
            iVar3 = iVar10 + 2;
            if (_WCh == L'\n') {
              wVar7 = _putwch_nolock(L'\r');
              if (wVar7 != 0xd) goto LAB_1400123db;
              local_80 = CONCAT44(iVar10 + 3,(DWORD)local_80);
              DVar13 = DVar13 + 1;
              iVar3 = iVar10 + 3;
            }
            iVar10 = iVar3;
            pwVar16 = pwVar16 + 1;
            lVar15 = local_58;
            uVar4 = local_80;
          } while (pwVar16 < pwVar1);
        }
      }
      goto LAB_1400124b8;
    }
    pDVar12 = FUN_14001190c((DWORD *)&local_80,param_1,(byte *)param_2,(ulonglong)param_3,param_4);
  }
  DVar13 = pDVar12[2];
  uVar4 = *(undefined8 *)pDVar12;
LAB_1400124b8:
  local_70 = uVar4;
  iVar10 = (int)((ulonglong)local_70 >> 0x20);
  if (iVar10 != 0) {
    return iVar10 - DVar13;
  }
  if ((int)local_70 != 0) {
    if ((int)local_70 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_14000a470((int)local_70,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_140023580)[lVar15] + 0x38 + uVar11 * 0x48) & 0x40) != 0) &&
     ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(undefined4 *)((longlong)param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 6) = 1;
  *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 7) = 1;
  return -1;
}

// _controlfp_s @ 0x14001253c
/* Library Function - Single Match
    _controlfp_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  __acrt_ptd *p_Var2;
  uint uVar3;
  
  uVar3 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar3 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      thunk_FUN_140013500(_NewValue,uVar3);
    }
    else {
      uVar3 = thunk_FUN_140013500(_NewValue,uVar3);
      *_CurrentState = uVar3;
    }
    eVar1 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar3 = thunk_FUN_140013500(0,0);
      *_CurrentState = uVar3;
    }
    p_Var2 = FUN_14000a4b4();
    eVar1 = 0x16;
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14000a3c0();
  }
  return eVar1;
}

// fegetenv @ 0x1400125a0
/* Library Function - Single Match
    fegetenv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 fegetenv(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_140012ce8();
  *param_1 = uVar1;
  uVar1 = FUN_140012dcc();
  param_1[1] = uVar1;
  return 0;
}

// FUN_1400125c0 @ 0x1400125c0
bool FUN_1400125c0(uint *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint local_res8 [2];
  
  FUN_140012e24(*param_1);
  FUN_140012f5c(param_1[1]);
  local_res8[0] = 0;
  local_res8[1] = 0;
  uVar1 = fegetenv(local_res8);
  if (((int)uVar1 == 0) && (*param_1 == local_res8[0])) {
    bVar2 = param_1[1] != local_res8[1];
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// feholdexcept @ 0x140012618
/* Library Function - Single Match
    feholdexcept
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 feholdexcept(undefined8 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  uint local_res10;
  undefined4 uStackX_14;
  
  local_res10 = 0;
  uStackX_14 = 0;
  uVar2 = fegetenv(&local_res10);
  if ((int)uVar2 == 0) {
    uVar2 = CONCAT44(uStackX_14,local_res10);
    local_res10 = local_res10 | 0x1f;
    *param_1 = uVar2;
    bVar1 = FUN_1400125c0(&local_res10);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_14001348c();
      return 0;
    }
  }
  return 1;
}

// ceil @ 0x140012668
/* Library Function - Single Match
    ceil
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

double __cdecl ceil(double _X)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(_X);
  dVar2 = _X;
  if ((ulonglong)dVar1 < 0x4340000000000000) {
    if ((ulonglong)dVar1 < 0x3ff0000000000000) {
      if (dVar1 != 0.0) {
        if (_X == dVar1) {
          dVar2 = 1.0;
        }
        else {
          dVar2 = -0.0;
        }
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)((ulonglong)_X >> 0x34) & 0x3f)) - 1U) &
                      (ulonglong)_X);
      if ((_X == dVar1) && (dVar2 != _X)) {
        dVar2 = dVar2 + 1.0;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar2 = (double)_handle_nan((ulonglong)_X);
    return dVar2;
  }
  return dVar2;
}

// FUN_140012730 @ 0x140012730
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140012730(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 in_ZMM0 [64];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  dVar3 = in_ZMM0._0_8_;
  auVar4 = in_ZMM0._0_16_;
  if (DAT_140023e04 == 0) {
    if ((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY) {
      if (dVar3 == INFINITY) {
        return INFINITY;
      }
      if (dVar3 != -INFINITY) {
        return (double)((ulonglong)dVar3 | 0x8000000000000);
      }
    }
    else {
      dVar12 = (double)(int)(((ulonglong)dVar3 >> 0x34) - 0x3ff);
      if (0.0 < dVar3) {
        dVar6 = (double)((ulonglong)dVar3 & (ulonglong)DAT_14001cf70);
        dVar5 = dVar3;
        if (dVar12 == -1023.0) {
          dVar12 = (double)((ulonglong)dVar6 | DAT_14001d000) - 1.0;
          dVar5 = (double)((ulonglong)dVar12 & (ulonglong)DAT_14001cf70);
          dVar12 = (double)(int)((uint)((ulonglong)dVar12 >> 0x34) - 0x7fd);
          dVar6 = dVar5;
        }
        uVar1 = ((ulonglong)dVar5 & 0xff00000000000) + ((ulonglong)dVar5 & 0x80000000000) * 2;
        if (ABS(dVar3 - 1.0) < 0.0625) {
          dVar3 = dVar3 - 1.0;
          dVar12 = dVar3 / (dVar3 + 2.0);
          dVar5 = dVar12 + dVar12;
          dVar6 = dVar5 * dVar5;
          dVar7 = dVar6 * dVar5;
          dVar8 = (double)((ulonglong)dVar3 & (ulonglong)DAT_14001d140);
          dVar3 = (((dVar6 * 0.012500000003771751 + 0.08333333333333179) * dVar7 +
                   (dVar6 * 0.0004348877777076146 + 0.0022321399879194482) * dVar7 * dVar7 * dVar5)
                  - dVar3 * dVar12) + (dVar3 - dVar8);
          return dVar8 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
                 dVar3 * 0.4342937469482422 + dVar8 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar5 = ((double)(uVar1 | DAT_14001d010) - (double)((ulonglong)dVar6 | DAT_14001d010)) *
                *(double *)(&DAT_14001e180 + uVar2 * 8);
        dVar3 = dVar5 * dVar5;
        return *(double *)(&DAT_14001d160 + uVar2 * 8) + dVar12 * 0.3010299950838089 +
               *(double *)(&DAT_14001d970 + uVar2 * 8) +
               (dVar12 * 5.801722962879576e-10 -
               ((dVar5 * 0.3333333333333333 + 0.5) * dVar3 + dVar5 +
               ((dVar5 * 0.16666666666666666 + 0.2) * dVar5 + 0.25) * dVar3 * dVar3) *
               0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_140013a80(dVar3,0xfff0000000000000,1);
        return dVar3;
      }
    }
    dVar3 = (double)FUN_140013a80(dVar3,0xfff8000000000000,2);
                    /* WARNING: Read-only address (ram,0x00014001cf20) is written */
                    /* WARNING: Read-only address (ram,0x00014001cf50) is written */
                    /* WARNING: Read-only address (ram,0x00014001cf70) is written */
                    /* WARNING: Read-only address (ram,0x00014001cf80) is written */
                    /* WARNING: Read-only address (ram,0x00014001cf90) is written */
                    /* WARNING: Read-only address (ram,0x00014001d000) is written */
                    /* WARNING: Read-only address (ram,0x00014001d010) is written */
                    /* WARNING: Read-only address (ram,0x00014001d0a0) is written */
                    /* WARNING: Read-only address (ram,0x00014001d0f0) is written */
                    /* WARNING: Read-only address (ram,0x00014001d140) is written */
    return dVar3;
  }
  auVar9 = vpsrlq_avx(auVar4,0x34);
  auVar9 = vpsubq_avx(auVar9,_DAT_14001cf50);
  auVar9 = vcvtdq2pd_avx(auVar9);
  dVar12 = auVar9._0_8_;
  auVar9 = vpand_avx(auVar4,_DAT_14001cf20);
  if (auVar9._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_140012c80;
      dVar3 = (double)FUN_140013a80(dVar3,(ulonglong)dVar3 | 0x8000000000000,3);
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar9 = vpand_avx(auVar4,_DAT_14001cf70);
    if (dVar12 == -1023.0) {
      auVar4 = vpor_avx(auVar9,_DAT_14001d000);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar4._0_8_ - 1.0;
      auVar11 = vpsrlq_avx(auVar9,0x34);
      auVar4 = vpand_avx(auVar9,_DAT_14001cf70);
      auVar9 = vpsubd_avx(auVar11,_DAT_14001d0a0);
      auVar9 = vcvtdq2pd_avx(auVar9);
      dVar12 = auVar9._0_8_;
      auVar9 = auVar4;
    }
    auVar11 = vpand_avx(auVar4,_DAT_14001cf80);
    auVar10 = vpand_avx(auVar4,_DAT_14001cf90);
    auVar10 = vpsllq_avx(auVar10,1);
    auVar11 = vpaddq_avx(auVar10,auVar11);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar3 - 1.0;
    auVar10 = vpand_avx(auVar10,_DAT_14001d0f0);
    if (auVar10._0_8_ < 0.0625) {
      dVar6 = auVar4._0_8_ - 1.0;
      dVar7 = dVar6 / (dVar6 + 2.0);
      dVar3 = dVar7 + dVar7;
      dVar12 = dVar3 * dVar3;
      dVar5 = dVar12 * dVar3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar6;
      auVar4 = vpand_avx(auVar4,_DAT_14001d140);
      dVar8 = auVar4._0_8_;
      dVar3 = (((dVar12 * 0.012500000003771751 + 0.08333333333333179) * dVar5 +
               (dVar12 * 0.0004348877777076146 + 0.0022321399879194482) * dVar5 * dVar5 * dVar3) -
              dVar6 * dVar7) + (dVar6 - dVar8);
      return dVar8 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
             dVar3 * 0.4342937469482422 + dVar8 * 0.4342937469482422;
    }
    uVar1 = auVar11._0_8_ >> 0x2c;
    auVar4 = vpor_avx(auVar9,_DAT_14001d010);
    auVar9 = vpor_avx(auVar11,_DAT_14001d010);
    dVar3 = (auVar9._0_8_ - auVar4._0_8_) * *(double *)(&DAT_14001e180 + uVar1 * 8);
    dVar5 = dVar3 * dVar3;
    return dVar12 * 0.3010299950838089 + *(double *)(&DAT_14001d160 + uVar1 * 8) +
           *(double *)(&DAT_14001d970 + uVar1 * 8) +
           (dVar12 * 5.801722962879576e-10 -
           ((dVar3 * (dVar3 * 0.16666666666666666 + 0.2) + 0.25) * dVar5 * dVar5 +
           (dVar3 * 0.3333333333333333 + 0.5) * dVar5 + dVar3) * 0.4342944819032518);
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_140013a80(dVar3,0xfff0000000000000,1);
    return dVar3;
  }
LAB_140012c80:
  dVar3 = (double)FUN_140013a80(dVar3,0xfff8000000000000,2);
  return dVar3;
}

// FUN_140012cdc @ 0x140012cdc
uint FUN_140012cdc(uint param_1)

{
  return param_1 & 0x300;
}

// FUN_140012ce8 @ 0x140012ce8
uint FUN_140012ce8(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0;
    if (uVar1 == 0x8040) {
      uVar4 = 0x400;
    }
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 |
          MXCSR & 0x180) >> 3 | uVar4 | uVar3;
  return (uVar3 | uVar4 * 4) << 0x16 | uVar4;
}

// FUN_140012dcc @ 0x140012dcc
uint FUN_140012dcc(void)

{
  uint uVar1;
  
  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}

// FUN_140012e24 @ 0x140012e24
void FUN_140012e24(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  
  uVar5 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x16 & 0x300;
  uVar9 = 0;
  uVar7 = 0x400;
  uVar11 = 0x800;
  uVar4 = param_1 & 0xc00;
  if (uVar4 == 0x400) {
    uVar9 = 0x8040;
  }
  else if (uVar4 == 0x800) {
    uVar9 = 0x40;
  }
  else if (uVar4 == 0xc00) {
    uVar9 = 0x8000;
  }
  uVar6 = 0x100;
  uVar10 = 0x200;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar8 = 0x2000;
      goto LAB_140012ec4;
    }
    if (uVar2 == 0x200) {
      uVar8 = 0x4000;
      goto LAB_140012ec4;
    }
    if (uVar2 == 0x300) {
      uVar8 = 0x6000;
      goto LAB_140012ec4;
    }
  }
  uVar8 = 0;
LAB_140012ec4:
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  if ((uVar5 & 2) == 0) {
    uVar11 = 0;
  }
  if ((uVar5 & 4) == 0) {
    uVar7 = 0;
  }
  if ((uVar5 & 8) == 0) {
    uVar10 = 0;
  }
  if ((uVar5 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  if ((uVar5 & 0x20) == 0) {
    uVar6 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVar8 | uVar3 | uVar11 | uVar7 | uVar10 | uVar1 | uVar6 | uVar9);
  return;
}

// FUN_140012f5c @ 0x140012f5c
void FUN_140012f5c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 >> 0x18;
  bVar3 = ((uVar2 & 0x3f) >> 4 & 1) != 0;
  uVar1 = (uint)bVar3;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((uVar2 & 1) != 0) & 0x20 | -(uint)((uVar2 & 2) != 0) & 0x10 |
          -(uint)((uVar2 & 4) != 0) & 8 | -(uint)((uVar2 & 8) != 0) & 4 | uVar1 |
          (uVar1 - bVar3) - (uint)((uVar2 & 0x20) != 0) & 2;
  return;
}

// FUN_140012fd0 @ 0x140012fd0
undefined8 FUN_140012fd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}

// FUN_140012fd8 @ 0x140012fd8
undefined8 FUN_140012fd8(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}

// FUN_140012fec @ 0x140012fec
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140012fec(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_140022040 ^ (ulonglong)auStack_78;
  puVar9 = (uint *)&DAT_140023df8;
  if (param_4 != (uint *)0x0) {
    puVar9 = param_4;
  }
  pbVar6 = (byte *)0x140017142;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
  }
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) {
LAB_140013050:
    uVar2 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar9 + 6) == 0) {
      bVar4 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (-1 < (char)bVar4) {
        if (puVar10 != (uint *)0x0) {
          *puVar10 = (uint)bVar4;
        }
        return (ulonglong)(bVar4 != 0);
      }
      if ((bVar4 & 0xe0) == 0xc0) {
        bVar7 = 2;
      }
      else if ((bVar4 & 0xf0) == 0xe0) {
        bVar7 = 3;
      }
      else {
        if ((bVar4 & 0xf8) != 0xf0) goto LAB_14001319e;
        bVar7 = 4;
      }
      uVar3 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar4;
      bVar4 = bVar7;
LAB_1400130f4:
      uVar5 = (ulonglong)bVar4;
      uVar8 = (ulonglong)bVar4;
      if (uVar2 <= uVar5) {
        uVar8 = uVar2;
      }
      while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar8) {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_14001319e;
        uVar3 = bVar1 & 0x3f | uVar3 << 6;
      }
      if (uVar8 < uVar5) {
        *(ushort *)(puVar9 + 1) = (ushort)bVar7;
        *(ushort *)((longlong)puVar9 + 6) = (ushort)(byte)(bVar4 - (char)uVar8);
        *puVar9 = uVar3;
        goto LAB_140013050;
      }
      if ((0x7ff < uVar3 - 0xd800) && (uVar3 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        auStack_60[4] = 0x10000;
        if (auStack_60[bVar7] <= uVar3) {
          if (puVar10 != (uint *)0x0) {
            *puVar10 = uVar3;
          }
          uVar2 = FUN_140012fd0(-(ulonglong)(uVar3 != 0) & uVar5,(undefined8 *)puVar9);
          return uVar2;
        }
      }
    }
    else {
      bVar7 = (byte)puVar9[1];
      uVar3 = *puVar9;
      bVar4 = *(byte *)((longlong)puVar9 + 6);
      if ((((byte)(bVar7 - 2) < 3) && (bVar4 != 0)) && (bVar4 < bVar7)) goto LAB_1400130f4;
    }
LAB_14001319e:
    uVar2 = FUN_140012fd8((undefined8 *)puVar9,param_5);
  }
  return uVar2;
}

// FUN_1400131c8 @ 0x1400131c8
ulonglong FUN_1400131c8(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1[5] >> 0xc & 1) == 0) {
      FUN_14000b938((longlong)param_1);
      uVar1 = FUN_140013244(param_1,param_2);
      FUN_14000b944((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_140013d44((undefined8 *)param_1);
  }
  return 0xffffffff;
}

// FUN_140013244 @ 0x140013244
ulonglong FUN_140013244(int *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if (((uint)param_1[5] >> 0xd & 1) != 0) {
      uVar2 = FUN_14000eff0(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock((undefined8 *)param_1);
      uVar1 = FUN_14000b794((longlong)param_1);
      uVar3 = FUN_140013bb0(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (*(LPVOID *)(param_1 + 10) != (LPVOID)0x0) {
        FUN_14000a4d4(*(LPVOID *)(param_1 + 10));
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
    FUN_140013d44((undefined8 *)param_1);
  }
  return uVar2;
}

// FUN_1400132ec @ 0x1400132ec
ulonglong FUN_1400132ec(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1400234f4 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_140022348;
    puStack_28 = PTR_DAT_140022350;
  }
  uVar1 = FUN_1400131c8(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140007830(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140007830(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}

// FUN_140013384 @ 0x140013384
longlong FUN_140013384(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_14000dbf0(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_14000a470(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_140023580)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)local_18[0].s;
    }
  }
  return -1;
}

// thunk_FUN_140013384 @ 0x140013430
longlong thunk_FUN_140013384(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)FUN_14000dbf0(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_14000a470(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_140023580)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)aLStack_18[0].s;
    }
  }
  return -1;
}

// __strncnt @ 0x140013438
/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}

// _putwch_nolock @ 0x140013450
/* Library Function - Single Match
    _putwch_nolock
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

wint_t __cdecl _putwch_nolock(wchar_t _WCh)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  wchar_t local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = _WCh;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) ||
     (BVar2 = __dcrt_write_console(local_res8,1,local_res10), BVar2 == 0)) {
    local_res8[0] = L'\xffff';
  }
  return local_res8[0];
}

// FUN_14001348c @ 0x14001348c
uint FUN_14001348c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = _get_fpsr();
  _fclrf();
  uVar4 = 0;
  if ((uVar1 & 0x3f) != 0) {
    uVar2 = (uVar1 & 1) << 4;
    uVar4 = uVar2 | 8;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 4;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2 | 2;
    if ((uVar1 & 0x10) == 0) {
      uVar3 = uVar2;
    }
    uVar4 = uVar3 | 1;
    if ((uVar1 & 0x20) == 0) {
      uVar4 = uVar3;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
  }
  return uVar4;
}

// thunk_FUN_140013500 @ 0x1400134f8
uint thunk_FUN_140013500(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = _get_fpsr();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 & 0x200) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 & 0x800) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 & 0x1000) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 & 0x100) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_140022a50 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar2 = (uint)uVar3 & 0xffffffbf;
      uVar3 = (ulonglong)uVar2;
      FUN_140013eb0(uVar2);
    }
    else {
      FUN_140013eb0((uint)uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 & 0x200) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 & 0x100) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar2 = uVar2 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar2 = uVar2 | 0x1000000;
    }
  }
  return uVar2;
}

// FUN_140013500 @ 0x140013500
uint FUN_140013500(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = _get_fpsr();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 & 0x200) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 & 0x800) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 & 0x1000) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 & 0x100) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_140022a50 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar2 = (uint)uVar3 & 0xffffffbf;
      uVar3 = (ulonglong)uVar2;
      FUN_140013eb0(uVar2);
    }
    else {
      FUN_140013eb0((uint)uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar3 & 0x200) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar3 & 0x100) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar2 = uVar2 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar2 = uVar2 | 0x1000000;
    }
  }
  return uVar2;
}

// FUN_14001379c @ 0x14001379c
undefined8
FUN_14001379c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_5;
  local_18 = param_6;
  local_38[0] = param_1;
  local_30 = param_3;
  local_28 = param_4;
  _ctrlfp(param_7,0xffc0);
  uVar1 = FUN_140008cc8(local_38);
  if ((int)uVar1 == 0) {
    FUN_140014220(param_1);
  }
  return local_18;
}

// _exception_enabled @ 0x140013804
/* Library Function - Single Match
    _exception_enabled
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool _exception_enabled(uint param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || (-1 < (char)param_2)) {
    if (((param_1 & 4) == 0) || ((param_2 >> 9 & 1) == 0)) {
      if (((param_1 & 1) == 0) || ((param_2 >> 10 & 1) == 0)) {
        if (((param_1 & 2) != 0) && ((param_2 >> 0xb & 1) != 0)) {
          if ((param_1 & 0x10) != 0) {
            _set_statfp(0x10);
          }
          uVar1 = param_1 & 0x1d;
        }
      }
      else {
        _set_statfp(8);
        uVar1 = param_1 & 0x1e;
      }
    }
    else {
      _set_statfp(4);
      uVar1 = param_1 & 0x1b;
    }
  }
  else {
    _set_statfp(1);
    uVar1 = param_1 & 0x17;
  }
  if (((param_1 & 0x10) != 0) && ((param_2 >> 0xc & 1) != 0)) {
    _set_statfp(0x20);
    uVar1 = uVar1 & 0xffffffef;
  }
  return uVar1 == 0;
}

// FUN_1400138c0 @ 0x1400138c0
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1400138c0(undefined8 param_1,uint param_2,undefined8 param_3,int param_4,uint param_5,
             uint param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 extraout_var_00;
  undefined7 extraout_var;
  undefined8 uVar4;
  undefined1 auStackY_108 [32];
  undefined8 local_c8;
  ulonglong local_c0;
  uint local_b8 [12];
  undefined8 local_88;
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_140022040 ^ (ulonglong)auStackY_108;
  uVar3 = _ctrlfp(0x1f80,0xffc0);
  local_c0 = CONCAT44(extraout_var_00,uVar3);
  local_c8 = param_3;
  bVar2 = _exception_enabled(param_5,local_c0);
  uVar1 = param_8;
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = local_78 & 0xffffffe3 | 3;
    }
    FUN_140013ef0(local_b8,&local_c0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)&local_c8);
  }
  uVar4 = FUN_140008ca0();
  if (((char)uVar4 == '\0') || (param_4 == 0)) {
    FUN_140014220(param_4);
    _ctrlfp((uint)local_c0,0xffc0);
  }
  else {
    local_c8 = FUN_14001379c(param_4,(ulonglong)param_6,param_1,param_7,uVar1,local_c8,
                             (uint)local_c0);
  }
  return local_c8;
}

// _handle_nan @ 0x1400139e8
/* Library Function - Single Match
    _handle_nan
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _handle_nan(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}

// __acrt_initialize_fma3 @ 0x140013a10
/* WARNING: Removing unreachable block (ram,0x000140013a29) */
/* Library Function - Single Match
    __acrt_initialize_fma3
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_fma3(void)

{
  longlong lVar1;
  undefined8 uVar2;
  byte in_XCR0;
  
  DAT_140023e00 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar2 = xinuse(0);
    DAT_140023e00 = (uint)((in_XCR0 & (byte)uVar2 & 6) == 6);
  }
  DAT_140023e04 = DAT_140023e00;
  return 0;
}

// FUN_140013a80 @ 0x140013a80
void FUN_140013a80(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_140013aa0(param_1,param_2,param_3,0x1b,"log10");
  return;
}

// FUN_140013aa0 @ 0x140013aa0
undefined8
FUN_140013aa0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_1400138c0(param_5,param_4,param_2,iVar1,uVar2,uVar3,param_1,0,1);
  return param_2;
}

// FUN_140013b38 @ 0x140013b38
ulonglong FUN_140013b38(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14000dae4(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_140023580)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_140013c74(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_14000db0c(*param_4);
  return uVar3;
}

// FUN_140013bb0 @ 0x140013bb0
ulonglong FUN_140013bb0(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_140023980)) &&
       ((*(byte *)((&DAT_140023580)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_140013b38(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
    FUN_14000a2f4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}

// FUN_140013c74 @ 0x140013c74
undefined8 FUN_140013c74(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_14000dbf0(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_140023580 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_140023580 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_14000dbf0(2);
      lVar4 = FUN_14000dbf0(1);
      if (lVar4 == lVar3) goto LAB_140013c96;
    }
    hObject = (HANDLE)FUN_14000dbf0(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_140013cf4;
    }
  }
LAB_140013c96:
  DVar2 = 0;
LAB_140013cf4:
  FUN_14000db34(param_1);
  *(undefined1 *)
   ((&DAT_140023580)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_14000a470(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

// FUN_140013d44 @ 0x140013d44
undefined4 FUN_140013d44(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return uVar1;
}

// __dcrt_lowio_ensure_console_output_initialized @ 0x140013d60
/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_140022a60 == (HANDLE)0xfffffffffffffffe) {
    DAT_140022a60 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_140022a60 != (HANDLE)0xffffffffffffffff;
}

// FUN_140013db4 @ 0x140013db4
void FUN_140013db4(void)

{
  if (DAT_140022a60 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_140022a60);
  }
  return;
}

// __dcrt_write_console @ 0x140013dd0
/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_140022a60,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_140022a60 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_140022a60);
      }
      DAT_140022a60 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_140022a60,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}

// _get_fpsr @ 0x140013ea0
/* Library Function - Single Match
    _get_fpsr
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _get_fpsr(void)

{
  return MXCSR;
}

// FUN_140013eb0 @ 0x140013eb0
void FUN_140013eb0(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}

// _fclrf @ 0x140013eba
/* Library Function - Single Match
    _fclrf
   
   Library: Visual Studio */

void _fclrf(void)

{
  MXCSR = MXCSR & 0xffffffc0;
  return;
}

// FUN_140013ef0 @ 0x140013ef0
void FUN_140013ef0(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6)

{
  FUN_140013f18(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

// FUN_140013f18 @ 0x140013f18
void FUN_140013f18(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar1 = FUN_14001430c();
  if ((uVar1 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (((uint)*param_2 & 0x6000) == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 & 0xfffe001f;
  *local_res8 = *local_res8 | (param_4 & 0xfff) << 5;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *(undefined8 *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  _clrfp();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}

// FUN_140014220 @ 0x140014220
void FUN_140014220(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_14000a4b4();
    *(undefined4 *)p_Var1 = 0x22;
  }
  return;
}

// _clrfp @ 0x140014250
/* Library Function - Single Match
    _clrfp
   
   Library: Visual Studio */

uint _clrfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  _fclrf();
  return uVar1 & 0x3f;
}

// _ctrlfp @ 0x140014270
/* Library Function - Single Match
    _ctrlfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint _ctrlfp(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  uVar2 = (~param_2 | 0xffff807f) & uVar1 | param_1 & param_2;
  if ((DAT_140022a70 == '\0') || ((uVar2 & 0x40) == 0)) {
    FUN_140013eb0(uVar2 & 0xffffffbf);
  }
  else {
    FUN_140013eb0(uVar2);
  }
  return uVar1;
}

// _set_statfp @ 0x1400142ec
/* Library Function - Single Match
    _set_statfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _set_statfp(uint param_1)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  FUN_140013eb0(uVar1 | param_1 & 0x3f);
  return;
}

// FUN_14001430c @ 0x14001430c
uint FUN_14001430c(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  return uVar1 & 0x3f;
}

// _FindPESection @ 0x140014320
/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}

// _IsNonwritableInCurrentImage @ 0x140014370
/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  PIMAGE_SECTION_HEADER p_Var3;
  
  bVar1 = FUN_1400143c0((short *)&IMAGE_DOS_HEADER_140000000);
  uVar2 = 0;
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    p_Var3 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_140000000,(DWORD_PTR)(pTarget + -0x140000000));
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = ~(p_Var3->Characteristics >> 0x1f) & 1;
    }
  }
  return uVar2;
}

// FUN_1400143c0 @ 0x1400143c0
bool FUN_1400143c0(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}

// FID_conflict:__GSHandlerCheck_EH @ 0x1400143ec
/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
               _xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,(longlong)param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    FUN_140004b10(param_1,param_2,param_3,param_4);
  }
  return;
}

// FUN_140014470 @ 0x140014470
void FUN_140014470(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140002d60(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    lVar2 = FUN_14000336c();
    *(PEXCEPTION_RECORD *)(lVar2 + 0x20) = param_1;
    lVar2 = FUN_14000336c();
    *(longlong *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_140009e94();
  }
  return;
}

// FUN_1400144bc @ 0x1400144bc
undefined1 (*) [16] FUN_1400144bc(undefined1 (*param_1) [16],uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  byte bVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar11;
  char cVar16;
  char cVar17;
  char cVar18;
  
  pauVar3 = (undefined1 (*) [16])0x0;
  if (param_2 == 0) {
    pcVar6 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar12[0] = -(*pcVar6 == '\0');
    auVar12[1] = -(pcVar6[1] == '\0');
    auVar12[2] = -(pcVar6[2] == '\0');
    auVar12[3] = -(pcVar6[3] == '\0');
    auVar12[4] = -(pcVar6[4] == '\0');
    auVar12[5] = -(pcVar6[5] == '\0');
    auVar12[6] = -(pcVar6[6] == '\0');
    auVar12[7] = -(pcVar6[7] == '\0');
    auVar12[8] = -(pcVar6[8] == '\0');
    auVar12[9] = -(pcVar6[9] == '\0');
    auVar12[10] = -(pcVar6[10] == '\0');
    auVar12[0xb] = -(pcVar6[0xb] == '\0');
    auVar12[0xc] = -(pcVar6[0xc] == '\0');
    auVar12[0xd] = -(pcVar6[0xd] == '\0');
    auVar12[0xe] = -(pcVar6[0xe] == '\0');
    auVar12[0xf] = -(pcVar6[0xf] == '\0');
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar12[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    pcVar7 = pcVar6;
    if (uVar2 == 0) {
      do {
        pcVar6 = pcVar7 + 0x10;
        auVar13[0] = -(*pcVar6 == '\0');
        auVar13[1] = -(pcVar7[0x11] == '\0');
        auVar13[2] = -(pcVar7[0x12] == '\0');
        auVar13[3] = -(pcVar7[0x13] == '\0');
        auVar13[4] = -(pcVar7[0x14] == '\0');
        auVar13[5] = -(pcVar7[0x15] == '\0');
        auVar13[6] = -(pcVar7[0x16] == '\0');
        auVar13[7] = -(pcVar7[0x17] == '\0');
        auVar13[8] = -(pcVar7[0x18] == '\0');
        auVar13[9] = -(pcVar7[0x19] == '\0');
        auVar13[10] = -(pcVar7[0x1a] == '\0');
        auVar13[0xb] = -(pcVar7[0x1b] == '\0');
        auVar13[0xc] = -(pcVar7[0x1c] == '\0');
        auVar13[0xd] = -(pcVar7[0x1d] == '\0');
        auVar13[0xe] = -(pcVar7[0x1e] == '\0');
        auVar13[0xf] = -(pcVar7[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        pcVar7 = pcVar6;
      } while (uVar1 == 0);
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    pauVar3 = (undefined1 (*) [16])(pcVar6 + uVar8);
  }
  else if (DAT_140022090 < 2) {
    pcVar6 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    bVar4 = (byte)param_1 & 0xf;
    auVar19 = pshuflw(in_XMM1,ZEXT416((param_2 & 0xff) << 8 | param_2 & 0xff),0);
    auVar14[0] = -(*pcVar6 == '\0');
    auVar14[1] = -(pcVar6[1] == '\0');
    auVar14[2] = -(pcVar6[2] == '\0');
    auVar14[3] = -(pcVar6[3] == '\0');
    auVar14[4] = -(pcVar6[4] == '\0');
    auVar14[5] = -(pcVar6[5] == '\0');
    auVar14[6] = -(pcVar6[6] == '\0');
    auVar14[7] = -(pcVar6[7] == '\0');
    auVar14[8] = -(pcVar6[8] == '\0');
    auVar14[9] = -(pcVar6[9] == '\0');
    auVar14[10] = -(pcVar6[10] == '\0');
    auVar14[0xb] = -(pcVar6[0xb] == '\0');
    auVar14[0xc] = -(pcVar6[0xc] == '\0');
    auVar14[0xd] = -(pcVar6[0xd] == '\0');
    auVar14[0xe] = -(pcVar6[0xe] == '\0');
    auVar14[0xf] = -(pcVar6[0xf] == '\0');
    cVar11 = auVar19[0];
    auVar15[0] = -(cVar11 == *pcVar6);
    cVar16 = auVar19[1];
    auVar15[1] = -(cVar16 == pcVar6[1]);
    cVar17 = auVar19[2];
    auVar15[2] = -(cVar17 == pcVar6[2]);
    cVar18 = auVar19[3];
    auVar15[3] = -(cVar18 == pcVar6[3]);
    auVar15[4] = -(cVar11 == pcVar6[4]);
    auVar15[5] = -(cVar16 == pcVar6[5]);
    auVar15[6] = -(cVar17 == pcVar6[6]);
    auVar15[7] = -(cVar18 == pcVar6[7]);
    auVar15[8] = -(cVar11 == pcVar6[8]);
    auVar15[9] = -(cVar16 == pcVar6[9]);
    auVar15[10] = -(cVar17 == pcVar6[10]);
    auVar15[0xb] = -(cVar18 == pcVar6[0xb]);
    auVar15[0xc] = -(cVar11 == pcVar6[0xc]);
    auVar15[0xd] = -(cVar16 == pcVar6[0xd]);
    auVar15[0xe] = -(cVar17 == pcVar6[0xe]);
    auVar15[0xf] = -(cVar18 == pcVar6[0xf]);
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar15[0xf] >> 7) << 0xf) & -1 << bVar4;
    uVar8 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar14[0xf] >> 7) << 0xf) & -1 << bVar4;
    pcVar7 = pcVar6;
    if (uVar8 == 0) {
      do {
        uVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> uVar8 == 0; uVar8 = uVar8 - 1) {
          }
        }
        if (uVar2 != 0) {
          pauVar3 = (undefined1 (*) [16])(pcVar7 + uVar8);
        }
        pcVar6 = pcVar7 + 0x10;
        auVar20[0] = -(*pcVar6 == '\0');
        auVar20[1] = -(pcVar7[0x11] == '\0');
        auVar20[2] = -(pcVar7[0x12] == '\0');
        auVar20[3] = -(pcVar7[0x13] == '\0');
        auVar20[4] = -(pcVar7[0x14] == '\0');
        auVar20[5] = -(pcVar7[0x15] == '\0');
        auVar20[6] = -(pcVar7[0x16] == '\0');
        auVar20[7] = -(pcVar7[0x17] == '\0');
        auVar20[8] = -(pcVar7[0x18] == '\0');
        auVar20[9] = -(pcVar7[0x19] == '\0');
        auVar20[10] = -(pcVar7[0x1a] == '\0');
        auVar20[0xb] = -(pcVar7[0x1b] == '\0');
        auVar20[0xc] = -(pcVar7[0x1c] == '\0');
        auVar20[0xd] = -(pcVar7[0x1d] == '\0');
        auVar20[0xe] = -(pcVar7[0x1e] == '\0');
        auVar20[0xf] = -(pcVar7[0x1f] == '\0');
        auVar19[0] = -(cVar11 == *pcVar6);
        auVar19[1] = -(cVar16 == pcVar7[0x11]);
        auVar19[2] = -(cVar17 == pcVar7[0x12]);
        auVar19[3] = -(cVar18 == pcVar7[0x13]);
        auVar19[4] = -(cVar11 == pcVar7[0x14]);
        auVar19[5] = -(cVar16 == pcVar7[0x15]);
        auVar19[6] = -(cVar17 == pcVar7[0x16]);
        auVar19[7] = -(cVar18 == pcVar7[0x17]);
        auVar19[8] = -(cVar11 == pcVar7[0x18]);
        auVar19[9] = -(cVar16 == pcVar7[0x19]);
        auVar19[10] = -(cVar17 == pcVar7[0x1a]);
        auVar19[0xb] = -(cVar18 == pcVar7[0x1b]);
        auVar19[0xc] = -(cVar11 == pcVar7[0x1c]);
        auVar19[0xd] = -(cVar16 == pcVar7[0x1d]);
        auVar19[0xe] = -(cVar17 == pcVar7[0x1e]);
        auVar19[0xf] = -(cVar18 == pcVar7[0x1f]);
        uVar1 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
        uVar8 = (uint)uVar1;
        uVar2 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar19[0xf] >> 7) << 0xf);
        pcVar7 = pcVar6;
      } while (uVar1 == 0);
    }
    uVar2 = uVar2 & (-uVar8 & uVar8) - 1;
    uVar8 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    if (uVar2 != 0) {
      pauVar3 = (undefined1 (*) [16])(pcVar6 + uVar8);
    }
  }
  else {
    for (; bVar9 = false, ((ulonglong)param_1 & 0xf) != 0;
        param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
      if ((int)(char)(*param_1)[0] == param_2) {
        pauVar3 = param_1;
      }
      if ((*param_1)[0] == '\0') {
        return pauVar3;
      }
    }
    bVar10 = true;
    while( true ) {
      iVar5 = pcmpistri(ZEXT416(param_2 & 0xff),*param_1,0x40);
      if (bVar9) {
        pauVar3 = (undefined1 (*) [16])(*param_1 + iVar5);
        bVar10 = pauVar3 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT416(param_2 & 0xff),*param_1,0x40);
      }
      if (bVar10) break;
      bVar9 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar10 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar3;
}

// _guard_dispatch_icall @ 0x140014610
/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140014610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// _guard_dispatch_icall @ 0x140014630
/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140014610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// FUN_140014660 @ 0x140014660
void FUN_140014660(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

// FUN_140014670 @ 0x140014670
void FUN_140014670(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined1 (*pauVar26) [32];
  undefined1 (*pauVar27) [32];
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (puVar25 <= param_1) {
    if (DAT_140022090 < 3) {
      if ((param_3 < 0x801) || (((byte)DAT_140023134 & 2) == 0)) {
        if (0x80 < param_3) {
          lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
          puVar25 = (undefined8 *)((longlong)param_1 - lVar30);
          puVar28 = (undefined8 *)((longlong)param_2 - lVar30);
          param_3 = param_3 + lVar30;
          if (0x80 < param_3) {
            do {
              uVar10 = puVar28[1];
              uVar11 = puVar28[2];
              uVar12 = puVar28[3];
              uVar13 = puVar28[4];
              uVar32 = puVar28[5];
              uVar33 = puVar28[6];
              uVar14 = puVar28[7];
              *puVar25 = *puVar28;
              puVar25[1] = uVar10;
              puVar25[2] = uVar11;
              puVar25[3] = uVar12;
              puVar25[4] = uVar13;
              puVar25[5] = uVar32;
              puVar25[6] = uVar33;
              puVar25[7] = uVar14;
              uVar10 = puVar28[9];
              uVar11 = puVar28[10];
              uVar12 = puVar28[0xb];
              uVar13 = puVar28[0xc];
              uVar32 = puVar28[0xd];
              uVar33 = puVar28[0xe];
              uVar14 = puVar28[0xf];
              puVar25[8] = puVar28[8];
              puVar25[9] = uVar10;
              puVar25[10] = uVar11;
              puVar25[0xb] = uVar12;
              puVar25[0xc] = uVar13;
              puVar25[0xd] = uVar32;
              puVar25[0xe] = uVar33;
              puVar25[0xf] = uVar14;
              puVar25 = puVar25 + 0x10;
              puVar28 = puVar28 + 0x10;
              param_3 = param_3 - 0x80;
            } while (0x7f < param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000140014b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_14001ebf8 + (param_3 + 0xf >> 4) * 4)))();
        return;
      }
    }
    else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_140023134 & 2) == 0)) {
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
      uVar32 = *puVar25;
      uVar33 = puVar25[1];
      uVar14 = puVar25[2];
      uVar15 = puVar25[3];
      if (0x100 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
        pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
        pauVar26 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x100 < param_3) {
          if (0x180000 < param_3) {
            do {
              uVar29 = param_3;
              pauVar27 = pauVar26;
              pauVar24 = pauVar23;
              auVar3 = pauVar27[1];
              auVar4 = pauVar27[2];
              auVar5 = pauVar27[3];
              auVar6 = vmovntdq_avx(*pauVar27);
              *pauVar24 = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[1] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[2] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[3] = auVar3;
              auVar3 = pauVar27[5];
              auVar4 = pauVar27[6];
              auVar5 = pauVar27[7];
              auVar6 = vmovntdq_avx(pauVar27[4]);
              pauVar24[4] = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[5] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[6] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[7] = auVar3;
              pauVar23 = pauVar24 + 8;
              pauVar26 = pauVar27 + 8;
              param_3 = uVar29 - 0x100;
            } while (0xff < uVar29 - 0x100);
            uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
            switch(uVar29) {
            case 0x1e1:
            case 0x1e2:
            case 0x1e3:
            case 0x1e4:
            case 0x1e5:
            case 0x1e6:
            case 0x1e7:
            case 0x1e8:
            case 0x1e9:
            case 0x1ea:
            case 0x1eb:
            case 0x1ec:
            case 0x1ed:
            case 0x1ee:
            case 0x1ef:
            case 0x1f0:
            case 0x1f1:
            case 0x1f2:
            case 499:
            case 500:
            case 0x1f5:
            case 0x1f6:
            case 0x1f7:
            case 0x1f8:
            case 0x1f9:
            case 0x1fa:
            case 0x1fb:
            case 0x1fc:
            case 0x1fd:
            case 0x1fe:
            case 0x1ff:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar27 + uVar31));
              *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
            case 0x1c1:
            case 0x1c2:
            case 0x1c3:
            case 0x1c4:
            case 0x1c5:
            case 0x1c6:
            case 0x1c7:
            case 0x1c8:
            case 0x1c9:
            case 0x1ca:
            case 0x1cb:
            case 0x1cc:
            case 0x1cd:
            case 0x1ce:
            case 0x1cf:
            case 0x1d0:
            case 0x1d1:
            case 0x1d2:
            case 0x1d3:
            case 0x1d4:
            case 0x1d5:
            case 0x1d6:
            case 0x1d7:
            case 0x1d8:
            case 0x1d9:
            case 0x1da:
            case 0x1db:
            case 0x1dc:
            case 0x1dd:
            case 0x1de:
            case 0x1df:
            case 0x1e0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[1] + uVar31));
              *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
            case 0x1a1:
            case 0x1a2:
            case 0x1a3:
            case 0x1a4:
            case 0x1a5:
            case 0x1a6:
            case 0x1a7:
            case 0x1a8:
            case 0x1a9:
            case 0x1aa:
            case 0x1ab:
            case 0x1ac:
            case 0x1ad:
            case 0x1ae:
            case 0x1af:
            case 0x1b0:
            case 0x1b1:
            case 0x1b2:
            case 0x1b3:
            case 0x1b4:
            case 0x1b5:
            case 0x1b6:
            case 0x1b7:
            case 0x1b8:
            case 0x1b9:
            case 0x1ba:
            case 0x1bb:
            case 0x1bc:
            case 0x1bd:
            case 0x1be:
            case 0x1bf:
            case 0x1c0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[2] + uVar31));
              *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
            case 0x181:
            case 0x182:
            case 0x183:
            case 0x184:
            case 0x185:
            case 0x186:
            case 0x187:
            case 0x188:
            case 0x189:
            case 0x18a:
            case 0x18b:
            case 0x18c:
            case 0x18d:
            case 0x18e:
            case 399:
            case 400:
            case 0x191:
            case 0x192:
            case 0x193:
            case 0x194:
            case 0x195:
            case 0x196:
            case 0x197:
            case 0x198:
            case 0x199:
            case 0x19a:
            case 0x19b:
            case 0x19c:
            case 0x19d:
            case 0x19e:
            case 0x19f:
            case 0x1a0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[3] + uVar31));
              *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
            case 0x161:
            case 0x162:
            case 0x163:
            case 0x164:
            case 0x165:
            case 0x166:
            case 0x167:
            case 0x168:
            case 0x169:
            case 0x16a:
            case 0x16b:
            case 0x16c:
            case 0x16d:
            case 0x16e:
            case 0x16f:
            case 0x170:
            case 0x171:
            case 0x172:
            case 0x173:
            case 0x174:
            case 0x175:
            case 0x176:
            case 0x177:
            case 0x178:
            case 0x179:
            case 0x17a:
            case 0x17b:
            case 0x17c:
            case 0x17d:
            case 0x17e:
            case 0x17f:
            case 0x180:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[4] + uVar31));
              *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
            case 0x141:
            case 0x142:
            case 0x143:
            case 0x144:
            case 0x145:
            case 0x146:
            case 0x147:
            case 0x148:
            case 0x149:
            case 0x14a:
            case 0x14b:
            case 0x14c:
            case 0x14d:
            case 0x14e:
            case 0x14f:
            case 0x150:
            case 0x151:
            case 0x152:
            case 0x153:
            case 0x154:
            case 0x155:
            case 0x156:
            case 0x157:
            case 0x158:
            case 0x159:
            case 0x15a:
            case 0x15b:
            case 0x15c:
            case 0x15d:
            case 0x15e:
            case 0x15f:
            case 0x160:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[5] + uVar31));
              *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
            case 0x121:
            case 0x122:
            case 0x123:
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x129:
            case 0x12a:
            case 299:
            case 300:
            case 0x12d:
            case 0x12e:
            case 0x12f:
            case 0x130:
            case 0x131:
            case 0x132:
            case 0x133:
            case 0x134:
            case 0x135:
            case 0x136:
            case 0x137:
            case 0x138:
            case 0x139:
            case 0x13a:
            case 0x13b:
            case 0x13c:
            case 0x13d:
            case 0x13e:
            case 0x13f:
            case 0x140:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[6] + uVar31));
              *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
            default:
              puVar25 = (undefined8 *)(pauVar24[-1] + uVar29);
              *puVar25 = uVar32;
              puVar25[1] = uVar33;
              puVar25[2] = uVar14;
              puVar25[3] = uVar15;
            case 0x100:
              *param_1 = uVar10;
              param_1[1] = uVar11;
              param_1[2] = uVar12;
              param_1[3] = uVar13;
              return;
            }
          }
          do {
            uVar10 = *(undefined8 *)(*pauVar26 + 8);
            uVar11 = *(undefined8 *)(*pauVar26 + 0x10);
            uVar12 = *(undefined8 *)(*pauVar26 + 0x18);
            uVar13 = *(undefined8 *)pauVar26[1];
            uVar32 = *(undefined8 *)(pauVar26[1] + 8);
            uVar33 = *(undefined8 *)(pauVar26[1] + 0x10);
            uVar14 = *(undefined8 *)(pauVar26[1] + 0x18);
            uVar15 = *(undefined8 *)pauVar26[2];
            uVar16 = *(undefined8 *)(pauVar26[2] + 8);
            uVar17 = *(undefined8 *)(pauVar26[2] + 0x10);
            uVar18 = *(undefined8 *)(pauVar26[2] + 0x18);
            uVar19 = *(undefined8 *)pauVar26[3];
            uVar20 = *(undefined8 *)(pauVar26[3] + 8);
            uVar21 = *(undefined8 *)(pauVar26[3] + 0x10);
            uVar22 = *(undefined8 *)(pauVar26[3] + 0x18);
            *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar26;
            *(undefined8 *)(*pauVar23 + 8) = uVar10;
            *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
            *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
            *(undefined8 *)pauVar23[1] = uVar13;
            *(undefined8 *)(pauVar23[1] + 8) = uVar32;
            *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[2] = uVar15;
            *(undefined8 *)(pauVar23[2] + 8) = uVar16;
            *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[3] = uVar19;
            *(undefined8 *)(pauVar23[3] + 8) = uVar20;
            *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
            uVar10 = *(undefined8 *)(pauVar26[4] + 8);
            uVar11 = *(undefined8 *)(pauVar26[4] + 0x10);
            uVar12 = *(undefined8 *)(pauVar26[4] + 0x18);
            uVar13 = *(undefined8 *)pauVar26[5];
            uVar32 = *(undefined8 *)(pauVar26[5] + 8);
            uVar33 = *(undefined8 *)(pauVar26[5] + 0x10);
            uVar14 = *(undefined8 *)(pauVar26[5] + 0x18);
            uVar15 = *(undefined8 *)pauVar26[6];
            uVar16 = *(undefined8 *)(pauVar26[6] + 8);
            uVar17 = *(undefined8 *)(pauVar26[6] + 0x10);
            uVar18 = *(undefined8 *)(pauVar26[6] + 0x18);
            uVar19 = *(undefined8 *)pauVar26[7];
            uVar20 = *(undefined8 *)(pauVar26[7] + 8);
            uVar21 = *(undefined8 *)(pauVar26[7] + 0x10);
            uVar22 = *(undefined8 *)(pauVar26[7] + 0x18);
            *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar26[4];
            *(undefined8 *)(pauVar23[4] + 8) = uVar10;
            *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
            *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
            *(undefined8 *)pauVar23[5] = uVar13;
            *(undefined8 *)(pauVar23[5] + 8) = uVar32;
            *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[6] = uVar15;
            *(undefined8 *)(pauVar23[6] + 8) = uVar16;
            *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[7] = uVar19;
            *(undefined8 *)(pauVar23[7] + 8) = uVar20;
            *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
            pauVar23 = pauVar23 + 8;
            pauVar26 = pauVar26 + 8;
            param_3 = param_3 - 0x100;
          } while (0xff < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001400148e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_14001ebb0 + (param_3 + 0x1f >> 5) * 4)))();
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar25 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar25;
  uVar13 = puVar25[1];
  puVar28 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar25 = puVar28;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar28 & 0xf) != 0) {
    puVar25 = (undefined8 *)((ulonglong)puVar28 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
    *puVar28 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar25 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar28 = puVar25;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar25 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x20);
      uVar13 = *puVar25;
      uVar32 = puVar25[1];
      puVar25 = puVar28 + -0x10;
      puVar28[-2] = *puVar1;
      puVar28[-1] = uVar12;
      puVar28[-4] = uVar13;
      puVar28[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar28[-6] = *puVar1;
      puVar28[-5] = uVar12;
      puVar28[-8] = uVar13;
      puVar28[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar28[-10] = *puVar1;
      puVar28[-9] = uVar12;
      puVar28[-0xc] = uVar13;
      puVar28[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      *puVar25 = uVar32;
      puVar28[-0xf] = uVar33;
      puVar28 = puVar25;
    }
    puVar28[-0xe] = uVar12;
    puVar28[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar25 = puVar25 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar25 = uVar32;
  puVar25[1] = uVar33;
  return;
}

// FUN_140014d00 @ 0x140014d00
undefined8 FUN_140014d00(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}

// FUN_140014d10 @ 0x140014d10
undefined1 (*) [32] FUN_140014d10(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined2 uVar9;
  undefined4 uVar10;
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_140022090 < 3) {
    if ((param_3 <= DAT_140022098) || (((byte)DAT_140023134 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x000140015058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                          *(uint *)(&DAT_14001eca8 + (uVar6 + 0xf >> 4) * 4)))
                          (pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_140022098) || (DAT_1400220a0 < param_3)) ||
          (((byte)DAT_140023134 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_1400220a0 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar6) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar6) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar6) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar6) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar6) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar6) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x000140014ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&DAT_14001ec60 + (uVar6 + 0x1f >> 5) * 4)))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}

// FUN_1400150b0 @ 0x1400150b0
void FUN_1400150b0(undefined8 *param_1)

{
  FUN_140008b0c(*(int *)*param_1,param_1);
  return;
}

// FUN_1400150ce @ 0x1400150ce
bool FUN_1400150ce(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}

// FUN_1400150e6 @ 0x1400150e6
undefined4 FUN_1400150e6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    lVar2 = FUN_14000336c();
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_14000336c();
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_140009e94();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}

// FUN_14001517c @ 0x14001517c
undefined8 FUN_14001517c(undefined8 param_1,longlong param_2)

{
  _xDISPATCHER_CONTEXT *p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x50) = param_1;
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar3 = FUN_14000336c();
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  p_Var1 = *(_xDISPATCHER_CONTEXT **)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(p_Var1 + 8);
  lVar3 = FUN_14000336c();
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_14000336c();
  *(undefined8 *)(lVar3 + 0x68) = uVar2;
  thunk_FUN_140005ae0((EHExceptionRecord *)**(undefined8 **)(param_2 + 0x48),
                      *(__uint64 **)(param_2 + 0x88),*(_CONTEXT **)(param_2 + 0x90),p_Var1,
                      *(_s_FuncInfo **)(param_2 + 0xa0),0,(__uint64 *)0x0,1);
  lVar3 = FUN_14000336c();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  return 1;
}

// FUN_14001521f @ 0x14001521f
void FUN_14001521f(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x58) = param_1;
  FUN_140005f68(param_1,*(longlong *)(param_2 + 0xb8),(undefined4 *)(param_2 + 0x20));
  return;
}

// FUN_140015244 @ 0x140015244
void FUN_140015244(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_140004a64(*(longlong *)(param_2 + 0x38));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xb8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar1 + 10));
    if (iVar3 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  lVar2 = FUN_14000336c();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0xc0);
  lVar2 = FUN_14000336c();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x40);
  return;
}

// FUN_1400152ca @ 0x1400152ca
void FUN_1400152ca(undefined8 *param_1)

{
  FUN_1400030ac(param_1);
  return;
}

// FUN_1400152e0 @ 0x1400152e0
void FUN_1400152e0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000336c();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_14000336c();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}

// FUN_140015303 @ 0x140015303
void FUN_140015303(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}

// FUN_14001531d @ 0x14001531d
undefined4 FUN_14001531d(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}

// FUN_14001534a @ 0x14001534a
void FUN_14001534a(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}

// FUN_140015364 @ 0x140015364
void FUN_140015364(void)

{
  __acrt_unlock(0);
  return;
}

// FUN_14001537a @ 0x14001537a
void FUN_14001537a(void)

{
  __acrt_unlock(7);
  return;
}

// FUN_140015393 @ 0x140015393
void FUN_140015393(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x68));
  return;
}

// FUN_1400153ad @ 0x1400153ad
void FUN_1400153ad(void)

{
  __acrt_unlock(5);
  return;
}

// FUN_1400153c6 @ 0x1400153c6
void FUN_1400153c6(void)

{
  __acrt_unlock(4);
  return;
}

// FUN_1400153df @ 0x1400153df
void FUN_1400153df(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}

// FUN_140015400 @ 0x140015400
void FUN_140015400(undefined8 param_1,longlong param_2)

{
  FUN_14000b944(**(longlong **)(param_2 + 0x48));
  return;
}

// FUN_14001541b @ 0x14001541b
void FUN_14001541b(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}

// FUN_140015438 @ 0x140015438
void FUN_140015438(void)

{
  __acrt_unlock(8);
  return;
}

// FUN_140015451 @ 0x140015451
void FUN_140015451(undefined8 param_1,longlong param_2)

{
  FUN_14000db0c(**(uint **)(param_2 + 0x48));
  return;
}

// FUN_14001546b @ 0x14001546b
void FUN_14001546b(undefined8 param_1,longlong param_2)

{
  FUN_14000db0c(*(uint *)(param_2 + 0x60));
  return;
}

// FUN_140015482 @ 0x140015482
void FUN_140015482(undefined8 param_1,longlong param_2)

{
  FUN_14000b944(*(longlong *)(param_2 + 0x40));
  return;
}

// FUN_14001549a @ 0x14001549a
undefined8 FUN_14001549a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// FUN_1400154d0 @ 0x1400154d0
bool FUN_1400154d0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}

