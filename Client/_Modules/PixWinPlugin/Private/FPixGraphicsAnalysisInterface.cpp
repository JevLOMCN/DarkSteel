// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PixWinPlugin
// Functions: 5

// FPixGraphicsAnalysisInterface @ 14e2c4980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPixGraphicsAnalysisInterface * __thiscall
Impl::FPixGraphicsAnalysisInterface::FPixGraphicsAnalysisInterface
          (FPixGraphicsAnalysisInterface *this)

{
  WCHAR WVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  void *pvVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  HANDLE hFindFile;
  size_t sVar9;
  WCHAR *pWVar10;
  wchar_t *pwVar11;
  WCHAR *pWVar12;
  HMODULE pHVar13;
  FARPROC pFVar14;
  longlong lVar15;
  HMODULE pHVar16;
  longlong lVar17;
  undefined1 auStack_ae8 [32];
  LPVOID local_ac8;
  HMODULE local_ac0;
  _WIN32_FIND_DATAW local_ab8;
  WCHAR local_868 [264];
  WCHAR local_658 [264];
  wchar_t local_448 [264];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_ae8;
  pHVar16 = (HMODULE)0x0;
  this->WinPixGpuCapturerHandle = (void *)0x0;
  pvVar6 = FWindowsPlatformProcess::GetDllHandle(L"WinPixGpuCapturer.dll");
  this->WinPixGpuCapturerHandle = pvVar6;
  if (pvVar6 == (void *)0x0) {
    pwVar7 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar7,L"attachPIX");
    if (bVar2) {
      local_ac0 = (HMODULE)0x0;
      BVar3 = GetModuleHandleExW(0,L"WinPixGpuCapturer.dll",&local_ac0);
      pHVar13 = local_ac0;
      if (BVar3 == 0) {
        local_ac8 = (LPVOID)0x0;
        iVar4 = SHGetKnownFolderPath(&FOLDERID_ProgramFiles,0,0,&local_ac8);
        pHVar13 = (HMODULE)0x0;
        if (iVar4 < 0) {
          CoTaskMemFree(local_ac8);
        }
        else {
          pWVar10 = local_658;
          lVar15 = 0x104;
          do {
            if ((lVar15 == -0x7ffffefa) ||
               (WVar1 = *(WCHAR *)((longlong)pWVar10 + ((longlong)local_ac8 - (longlong)local_658)),
               WVar1 == L'\0')) break;
            *pWVar10 = WVar1;
            pWVar10 = pWVar10 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          pWVar12 = pWVar10 + -1;
          if (lVar15 != 0) {
            pWVar12 = pWVar10;
          }
          *pWVar12 = L'\0';
          if (lVar15 != 0) {
            CoTaskMemFree(local_ac8);
            lVar15 = 0x104;
            pWVar10 = local_658;
            do {
              if (*pWVar10 == L'\0') break;
              pWVar10 = pWVar10 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            pHVar13 = pHVar16;
            if (lVar15 != 0) {
              pWVar10 = local_658 + (0x104 - lVar15);
              lVar15 = 0x104 - (0x104 - lVar15);
              if (lVar15 != 0) {
                lVar8 = 0x7ffffffe;
                lVar17 = (longlong)L"\\Microsoft PIX\\*" - (longlong)pWVar10;
                do {
                  if ((lVar8 == 0) ||
                     (WVar1 = *(WCHAR *)(lVar17 + (longlong)pWVar10), WVar1 == L'\0')) break;
                  *pWVar10 = WVar1;
                  lVar8 = lVar8 + -1;
                  pWVar10 = pWVar10 + 1;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
              pWVar12 = pWVar10 + -1;
              if (lVar15 != 0) {
                pWVar12 = pWVar10;
              }
              *pWVar12 = L'\0';
              if (lVar15 != 0) {
                bVar2 = false;
                hFindFile = FindFirstFileW(local_658,&local_ab8);
                if (hFindFile != (HANDLE)0xffffffffffffffff) {
                  do {
                    if (((((byte)local_ab8.dwFileAttributes & 0x10) != 0) &&
                        (local_ab8.cFileName[0] != L'.')) &&
                       ((!bVar2 || (iVar4 = wcscmp(local_448,local_ab8.cFileName), iVar4 < 1)))) {
                      sVar9 = wcslen(local_658);
                      if (0x7ffffffe < sVar9 - 1) goto LAB_14e2c4edc;
                      lVar15 = 0x104;
                      pWVar10 = local_868;
                      do {
                        if (((sVar9 - 0x105) + lVar15 == 0) || (pWVar10[0x108] == L'\0')) break;
                        *pWVar10 = pWVar10[0x108];
                        pWVar10 = pWVar10 + 1;
                        lVar15 = lVar15 + -1;
                      } while (lVar15 != 0);
                      pWVar12 = pWVar10 + -1;
                      if (lVar15 != 0) {
                        pWVar12 = pWVar10;
                      }
                      *pWVar12 = L'\0';
                      if (lVar15 == 0) goto LAB_14e2c4edc;
                      lVar15 = 0x104;
                      pWVar10 = local_868;
                      do {
                        if (*pWVar10 == L'\0') break;
                        pWVar10 = pWVar10 + 1;
                        lVar15 = lVar15 + -1;
                      } while (lVar15 != 0);
                      if (lVar15 == 0) goto LAB_14e2c4edc;
                      pWVar10 = local_868 + (0x104 - lVar15);
                      lVar15 = 0x104 - (0x104 - lVar15);
                      if (lVar15 != 0) {
                        lVar17 = 0x7ffffffe;
                        lVar8 = 0x2c - (longlong)pWVar10;
                        do {
                          if ((lVar17 == 0) ||
                             (WVar1 = *(WCHAR *)((longlong)&local_ab8 + lVar8 + (longlong)pWVar10),
                             WVar1 == L'\0')) break;
                          *pWVar10 = WVar1;
                          lVar17 = lVar17 + -1;
                          pWVar10 = pWVar10 + 1;
                          lVar15 = lVar15 + -1;
                        } while (lVar15 != 0);
                      }
                      pWVar12 = pWVar10 + -1;
                      if (lVar15 != 0) {
                        pWVar12 = pWVar10;
                      }
                      *pWVar12 = L'\0';
                      if (lVar15 == 0) goto LAB_14e2c4edc;
                      lVar15 = 0x104;
                      pWVar10 = local_868;
                      do {
                        if (*pWVar10 == L'\0') break;
                        pWVar10 = pWVar10 + 1;
                        lVar15 = lVar15 + -1;
                      } while (lVar15 != 0);
                      if (lVar15 == 0) goto LAB_14e2c4edc;
                      pWVar10 = local_868 + (0x104 - lVar15);
                      lVar15 = 0x104 - (0x104 - lVar15);
                      if (lVar15 != 0) {
                        lVar8 = 0x7ffffffe;
                        lVar17 = (longlong)L"\\" - (longlong)pWVar10;
                        do {
                          if ((lVar8 == 0) ||
                             (WVar1 = *(WCHAR *)(lVar17 + (longlong)pWVar10), WVar1 == L'\0'))
                          break;
                          *pWVar10 = WVar1;
                          lVar8 = lVar8 + -1;
                          pWVar10 = pWVar10 + 1;
                          lVar15 = lVar15 + -1;
                        } while (lVar15 != 0);
                      }
                      pWVar12 = pWVar10 + -1;
                      if (lVar15 != 0) {
                        pWVar12 = pWVar10;
                      }
                      *pWVar12 = L'\0';
                      if (lVar15 == 0) goto LAB_14e2c4edc;
                      lVar15 = 0x104;
                      pWVar10 = local_868;
                      do {
                        if (*pWVar10 == L'\0') break;
                        pWVar10 = pWVar10 + 1;
                        lVar15 = lVar15 + -1;
                      } while (lVar15 != 0);
                      if (lVar15 == 0) goto LAB_14e2c4edc;
                      pWVar10 = local_868 + (0x104 - lVar15);
                      lVar15 = 0x104 - (0x104 - lVar15);
                      if (lVar15 != 0) {
                        lVar8 = 0x7ffffffe;
                        lVar17 = (longlong)L"WinPixGpuCapturer.dll" - (longlong)pWVar10;
                        do {
                          if ((lVar8 == 0) ||
                             (WVar1 = *(WCHAR *)(lVar17 + (longlong)pWVar10), WVar1 == L'\0'))
                          break;
                          *pWVar10 = WVar1;
                          lVar8 = lVar8 + -1;
                          pWVar10 = pWVar10 + 1;
                          lVar15 = lVar15 + -1;
                        } while (lVar15 != 0);
                      }
                      pWVar12 = pWVar10 + -1;
                      if (lVar15 != 0) {
                        pWVar12 = pWVar10;
                      }
                      *pWVar12 = L'\0';
                      if (lVar15 == 0) goto LAB_14e2c4edc;
                      DVar5 = GetFileAttributesW(local_868);
                      if ((DVar5 != 0xffffffff) && ((DVar5 & 0x10) == 0)) {
                        bVar2 = true;
                        lVar15 = 0x104;
                        pwVar7 = local_448;
                        do {
                          if ((lVar15 == -0x7ffffefa) || (pwVar7[-0x322] == L'\0')) break;
                          *pwVar7 = pwVar7[-0x322];
                          pwVar7 = pwVar7 + 1;
                          lVar15 = lVar15 + -1;
                        } while (lVar15 != 0);
                        pwVar11 = pwVar7 + -1;
                        if (lVar15 != 0) {
                          pwVar11 = pwVar7;
                        }
                        *pwVar11 = L'\0';
                        if (lVar15 == 0) goto LAB_14e2c4edc;
                        lVar15 = 0x104;
                        pWVar10 = local_238;
                        do {
                          if ((lVar15 == -0x7ffffefa) || (pWVar10[-0x318] == L'\0')) break;
                          *pWVar10 = pWVar10[-0x318];
                          pWVar10 = pWVar10 + 1;
                          lVar15 = lVar15 + -1;
                        } while (lVar15 != 0);
                        pWVar12 = pWVar10 + -1;
                        if (lVar15 != 0) {
                          pWVar12 = pWVar10;
                        }
                        *pWVar12 = L'\0';
                        if (lVar15 == 0) goto LAB_14e2c4edc;
                      }
                    }
                    BVar3 = FindNextFileW(hFindFile,&local_ab8);
                  } while (BVar3 != 0);
                }
                FindClose(hFindFile);
                if (bVar2) {
                  pHVar13 = LoadLibraryExW(local_238,(HANDLE)0x0,0x1000);
                }
                else {
                  SetLastError(2);
                }
              }
            }
          }
          else {
            CoTaskMemFree(local_ac8);
          }
        }
      }
LAB_14e2c4edc:
      this->WinPixGpuCapturerHandle = pHVar13;
    }
  }
  if (this->WinPixGpuCapturerHandle != (void *)0x0) {
    pHVar16 = GetModuleHandleW(L"WinPixGpuCapturer.dll");
    if ((pHVar16 == (HMODULE)0x0) ||
       (pFVar14 = GetProcAddress(pHVar16,"SetHUDOptions"), pFVar14 == (FARPROC)0x0)) {
      GetLastError();
    }
    else {
      (*pFVar14)(4);
    }
  }
  return this;
}

// BeginCapture @ 14e2c5200

void __thiscall
Impl::FPixGraphicsAnalysisInterface::BeginCapture
          (FPixGraphicsAnalysisInterface *this,HWND__ *param_1,FString *param_2)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  FString local_58;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (this->WinPixGpuCapturerHandle != (void *)0x0) {
    pHVar1 = GetModuleHandleW(L"WinPixGpuCapturer.dll");
    if ((pHVar1 == (HMODULE)0x0) ||
       (pFVar2 = GetProcAddress(pHVar1,"SetGlobalTargetWindow"), pFVar2 == (FARPROC)0x0)) {
      GetLastError();
    }
    else {
      (*pFVar2)(param_1);
    }
    MakeWinPixCaptureFilePath(&local_58,param_2);
    local_40 = 0;
    local_48 = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      local_48 = local_58.Data.AllocatorInstance.Data;
    }
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    pHVar1 = GetModuleHandleW(L"WinPixGpuCapturer.dll");
    if ((pHVar1 == (HMODULE)0x0) ||
       (pFVar2 = GetProcAddress(pHVar1,"BeginProgrammaticGpuCapture"), pFVar2 == (FARPROC)0x0)) {
      GetLastError();
    }
    else {
      (*pFVar2)(&local_48);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    return;
  }
  return;
}

// EndCapture @ 14e2c59e0

void __thiscall Impl::FPixGraphicsAnalysisInterface::EndCapture(FPixGraphicsAnalysisInterface *this)

{
  HMODULE pHVar1;
  FARPROC UNRECOVERED_JUMPTABLE_00;
  
  if (this->WinPixGpuCapturerHandle == (void *)0x0) {
    return;
  }
  pHVar1 = GetModuleHandleW(L"WinPixGpuCapturer.dll");
  if (pHVar1 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(pHVar1,"EndProgrammaticGpuCapture");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e2c5a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  pHVar1 = GetModuleHandleW(L"WinPixTimingCapturer.dll");
  if (pHVar1 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(pHVar1,"EndProgrammaticTimingCapture");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e2c5a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2c5a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLastError();
  return;
}

// IsAttached @ 14e2c6210

bool __thiscall Impl::FPixGraphicsAnalysisInterface::IsAttached(FPixGraphicsAnalysisInterface *this)

{
  HMODULE hModule;
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (this->WinPixGpuCapturerHandle != (void *)0x0) {
    hModule = GetModuleHandleW(L"WinPixGpuCapturer.dll");
    if ((hModule != (HMODULE)0x0) &&
       (pFVar1 = GetProcAddress(hModule,"GetIsAttachedToPix"), pFVar1 != (FARPROC)0x0)) {
      IVar2 = (*pFVar1)();
      if ((char)IVar2 == '\0') {
        return false;
      }
      return true;
    }
    OutputDebugStringW(
                      L"WinPixEventRuntime error: Mismatched header/dll. Please ensure that pix3.h and WinPixGpuCapturer.dll match"
                      );
  }
  return false;
}

// OpenCapture @ 14e2c6690

void __thiscall
Impl::FPixGraphicsAnalysisInterface::OpenCapture
          (FPixGraphicsAnalysisInterface *this,FString *param_1)

{
  wchar_t *lpFile;
  
  if (this->WinPixGpuCapturerHandle != (void *)0x0) {
    if ((param_1->Data).ArrayNum == 0) {
      lpFile = L"";
    }
    else {
      lpFile = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,5);
  }
  return;
}

