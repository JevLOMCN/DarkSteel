// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 21

// ParsePathAndExt @ 14ff3f5f0

wchar_t * __cdecl ngx::util::ParsePathAndExt(wchar_t *param_1,ulong64 *param_2,wchar_t **param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  ulong64 uVar3;
  longlong lVar4;
  
  pwVar2 = _wcsdup(param_1);
  if (pwVar2 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (param_1[uVar3] != L'\0');
  *param_2 = uVar3;
  *param_3 = (wchar_t *)0x0;
  lVar4 = *param_2 - 1;
  if (lVar4 != 0) {
    while( true ) {
      wVar1 = pwVar2[lVar4];
      if (wVar1 == L'/') {
        return pwVar2;
      }
      if (wVar1 == L'\\') {
        return pwVar2;
      }
      if (wVar1 == L'.') break;
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        return pwVar2;
      }
    }
    *param_3 = pwVar2 + lVar4 + 1;
    pwVar2[lVar4] = L'\0';
  }
  return pwVar2;
}

// infoverbose @ 14ff3f6b0

void __cdecl ngx::util::infoverbose(char *param_1)

{
  ulong64 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = __local_stdio_printf_options();
  __stdio_common_vsprintf_s(*puVar1,message,0x8000,param_1,0,local_res10);
  return;
}

// log @ 14ff3f710

void __cdecl ngx::util::log(char *param_1,int param_2,char *param_3,char *param_4)

{
  logva(param_1,param_2,param_3,param_4,NVSDK_NGX_LOGGING_LEVEL_ON,&stack0x00000028);
  return;
}

// logva @ 14ff3f740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ngx::util::logva(char *param_1,int param_2,char *param_3,char *param_4,
                NVSDK_NGX_Logging_Level param_5,char *param_6)

{
  code *pcVar1;
  longlong lVar2;
  _func___cdecl_void_char_ptr *p_Var3;
  _func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *p_Var4;
  errno_t eVar5;
  ulong64 *puVar6;
  HANDLE hConsoleOutput;
  _iobuf *p_Var7;
  tm *ptVar8;
  longlong lVar9;
  undefined1 auStackY_a8 [32];
  DWORD local_68 [2];
  __time64_t local_60;
  tm local_58;
  ulonglong local_30;
  longlong lVar10;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if ((((g_logFile != (_iobuf *)0x0) || (g_logCallback != (_func___cdecl_void_char_ptr *)0x0)) ||
      (g_logPrintf)) ||
     (g_appLogCallback !=
      (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0)) {
    puVar6 = __local_stdio_printf_options();
    __stdio_common_vsprintf_s(*puVar6,message,0x8000,param_4);
    local_60 = _time64((__time64_t *)0x0);
    eVar5 = _localtime64_s(&local_58,&local_60);
    ptVar8 = &local_58;
    if (eVar5 != 0) {
      ptVar8 = (tm *)0x0;
    }
    if (ptVar8 == (tm *)0x0) {
      log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/common/util-log.cpp",0x149,
          "ngx::util::logva","Warning: assertion failed: %s");
      if (g_breakOnWarning != false) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    strftime(message2,0x8000,"[%Y-%m-%d %H:%M:%S] ",&local_58);
    nvSprintf(message2,0x8000,"%s[%s:%d] %s\n");
    if (g_logFile != (_iobuf *)0x0) {
      fputs(message2,(FILE *)g_logFile);
      fflush((FILE *)g_logFile);
    }
    p_Var3 = g_logCallback;
    if (g_logCallback != (_func___cdecl_void_char_ptr *)0x0) {
      (*__guard_check_icall_fptr)(g_logCallback);
      (*p_Var3)(message2);
    }
    if (g_logConsole != false) {
      lVar10 = -1;
      do {
        lVar9 = lVar10 + 1;
        lVar2 = lVar10 + 1;
        lVar10 = lVar9;
      } while (message2[lVar2] != '\0');
      hConsoleOutput = GetStdHandle(0xfffffff5);
      WriteConsoleA(hConsoleOutput,message2,(DWORD)lVar9,local_68,(LPVOID)0x0);
    }
    if (g_logPrintf != false) {
      p_Var7 = (_iobuf *)__acrt_iob_func(1);
      nvFPrintf(p_Var7,"%s");
    }
    p_Var4 = g_appLogCallback;
    if (g_appLogCallback !=
        (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0) {
      (*__guard_check_icall_fptr)(g_appLogCallback);
      (*p_Var4)(message2,param_5,NVSDK_NGX_Feature_Reserved_SDK);
    }
  }
  return;
}

// logverbose @ 14ff3f960

void __cdecl ngx::util::logverbose(char *param_1,int param_2,char *param_3,char *param_4)

{
  if (1 < g_LogLevel) {
    logva(param_1,param_2,param_3,param_4,NVSDK_NGX_LOGGING_LEVEL_VERBOSE,&stack0x00000028);
  }
  return;
}

// nvFPrintf @ 14ff3f9a0

int __cdecl nvFPrintf(_iobuf *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res18 [16];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vfprintf_s(*puVar2,param_1,param_2,0,local_res18);
  return iVar1;
}

// nvLocaltime @ 14ff3f9f0

tm * __cdecl nvLocaltime(long64 *param_1,tm *param_2)

{
  errno_t eVar1;
  tm *ptVar2;
  
  eVar1 = _localtime64_s((tm *)param_2,param_1);
  ptVar2 = (tm *)0x0;
  if (eVar1 == 0) {
    ptVar2 = param_2;
  }
  return ptVar2;
}

// nvSWprintf @ 14ff3fa20

int __cdecl nvSWprintf(wchar_t *param_1,ulong64 param_2,wchar_t *param_3)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res20 [8];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf_s(*puVar2,param_1,param_2,param_3,0,local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// nvSprintf @ 14ff3fa80

int __cdecl nvSprintf(char *param_1,ulong64 param_2,char *param_3)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res20 [8];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// nvVSprintf @ 14ff3fae0

int __cdecl nvVSprintf(char *param_1,ulong64 param_2,char *param_3,char *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// nvWFSOpen @ 14ff3fb50

/* struct _iobuf * __ptr64 __cdecl nvWFSOpen(wchar_t const * __ptr64,wchar_t const * __ptr64,int) */

_iobuf * __cdecl nvWFSOpen(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff3fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = _wfsopen(param_1,param_2,param_3);
  return (_iobuf *)pFVar1;
}

// setInfoBMPPath @ 14ff3fb60

void __cdecl ngx::util::setInfoBMPPath(wchar_t *param_1)

{
  g_BMPPath = param_1;
  return;
}

// setLogFilename @ 14ff3fb70

bool __cdecl
ngx::util::setLogFilename
          (wchar_t *param_1,bool param_2,int param_3,
          _func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *param_4,
          bool param_5)

{
  ulong64 uVar1;
  wchar_t wVar2;
  _iobuf *p_Var3;
  LSTATUS LVar4;
  DWORD DVar5;
  BOOL BVar6;
  HWND hWnd;
  longlong lVar7;
  FILE *_File;
  wchar_t *_Memory;
  wchar_t *_Filename;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  wchar_t *_Mode;
  _func___cdecl_void_char_ptr *p_Var11;
  bool bVar12;
  ulong local_res18 [2];
  DWORD local_38 [2];
  HKEY local_30;
  
  if (g_logFile != (_iobuf *)0x0) {
    fclose((FILE *)g_logFile);
    g_logFile = (_iobuf *)0x0;
  }
  local_res18[0] = 0;
  LVar4 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,L"SOFTWARE\\NVIDIA Corporation\\Global\\NGXCore"
                        ,0,0x20019,&local_30);
  if (LVar4 == 0) {
    local_38[0] = 4;
    LVar4 = RegQueryValueExW(local_30,L"LogLevel",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&g_LogLevel,
                             local_38);
    local_38[0] = 4;
    if (LVar4 != 0) {
      g_LogLevel = 0;
    }
    LVar4 = RegQueryValueExW(local_30,L"EnableConsoleLogging",(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPBYTE)local_res18,local_38);
    if (LVar4 != 0) {
      local_res18[0] = 0;
    }
    RegCloseKey(local_30);
  }
  if ((int)g_LogLevel < param_3) {
    g_LogLevel = param_3;
  }
  if (g_LogLevel == 0) {
    return true;
  }
  g_logCallback = OutputDebugStringA_exref;
  if (param_5) {
    g_logCallback = (_func___cdecl_void_char_ptr *)0x0;
  }
  g_appLogCallback = param_4;
  if (((1 < g_LogLevel) && (local_res18[0] != 0)) && (!param_5)) {
    hWnd = GetConsoleWindow();
    local_38[0] = 0;
    GetWindowThreadProcessId(hWnd,local_38);
    DVar5 = GetCurrentProcessId();
    if (DVar5 != local_38[0]) {
      BVar6 = AllocConsole();
      g_logConsole = BVar6 == 1;
      SetConsoleTitleA("NGX");
    }
  }
  bVar12 = g_logConsole == false;
  if (param_5) {
    g_logConsole = false;
  }
  g_logPrintf = !param_5 && bVar12;
  if (param_1 != (wchar_t *)0x0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_1[lVar7] != L'\0');
    if ((lVar7 != 0) && ((!param_5 || (g_LogLevel == 0x100)))) {
      _Mode = L"wt";
      if (param_2) {
        _Mode = L"at";
      }
      g_logFile = (_iobuf *)_wfsopen(param_1,_Mode,0x20);
      if ((FILE *)g_logFile == (FILE *)0x0) {
        _File = _wfsopen(param_1,L"r",0x40);
        if (_File == (FILE *)0x0) {
          log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/common/util-log.cpp",0xe2,
              "ngx::util::setLogFilename",
              "Warning: Log file directory (%S) appears unwritable.  Logging to file is disabled");
          bVar12 = false;
        }
        else {
          fclose(_File);
          logverbose("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/common/util-log.cpp"
                     ,0xe9,"ngx::util::setLogFilename",
                     "Warning: Log file (%S) exists but is unwritable.  Trying renamed file for logging."
                    );
          _Memory = _wcsdup(param_1);
          lVar7 = -1;
          if (_Memory != (wchar_t *)0x0) {
            do {
              lVar9 = lVar7;
              lVar7 = lVar9 + 1;
            } while (param_1[lVar9 + 1] != L'\0');
            lVar7 = lVar9;
            while( true ) {
              p_Var11 = (_func___cdecl_void_char_ptr *)0x0;
              if (((lVar7 == 0) ||
                  (wVar2 = _Memory[lVar7], p_Var11 = (_func___cdecl_void_char_ptr *)0x0,
                  wVar2 == L'/')) || (p_Var11 = (_func___cdecl_void_char_ptr *)0x0, wVar2 == L'\\'))
              goto LAB_14ff3febb;
              if (wVar2 == L'.') break;
              lVar7 = lVar7 + -1;
            }
            _Memory[lVar7] = L'\0';
            p_Var11 = (_func___cdecl_void_char_ptr *)(_Memory + lVar7 + 1);
LAB_14ff3febb:
            uVar1 = lVar9 + 9;
            _Filename = malloc(uVar1 * 2);
            if (_Filename == (wchar_t *)0x0) {
              free(_Memory);
              return false;
            }
            iVar8 = 1;
            p_Var3 = g_logFile;
            do {
              g_logFile = p_Var3;
              if (p_Var11 == (_func___cdecl_void_char_ptr *)0x0) {
                nvSWprintf(_Filename,uVar1,L"%ls_%02d");
              }
              else {
                nvSWprintf(_Filename,uVar1,L"%ls_%02d.%ls");
              }
              g_logFile = (_iobuf *)_wfsopen(_Filename,_Mode,0x20);
              if ((FILE *)g_logFile != (FILE *)0x0) {
                pcVar10 = "Warning: Logging to renamed logging file (%S)";
                iVar8 = 0x10c;
                goto LAB_14ff3ff7e;
              }
              iVar8 = iVar8 + 1;
              p_Var3 = (_iobuf *)0x0;
            } while (iVar8 < 9);
            pcVar10 = 
            "Warning: Could not open any log file in given directory (%S).  Logging to file is disabled"
            ;
            iVar8 = 0x110;
LAB_14ff3ff7e:
            log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/common/util-log.cpp",
                iVar8,"ngx::util::setLogFilename",pcVar10);
            free(_Memory);
            free(_Filename);
          }
          bVar12 = g_logFile != (_iobuf *)0x0;
        }
      }
      else {
        log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/common/util-log.cpp",0xd5,
            "ngx::util::setLogFilename","Logging to requested file (%S) enabled successfully");
        bVar12 = true;
      }
      return bVar12;
    }
  }
  return true;
}

// _vfprintf_s_l @ 14ff3ffd0

int __cdecl
_vfprintf_s_l(_iobuf *param_1,char *param_2,__crt_locale_pointers *param_3,char *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vfprintf_s(*puVar2,param_1,param_2,param_3,param_4);
  return iVar1;
}

// _vsprintf_s_l @ 14ff40030

int __cdecl
_vsprintf_s_l(char *param_1,ulong64 param_2,char *param_3,__crt_locale_pointers *param_4,
             char *param_5)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// _vswprintf_s_l @ 14ff400a0

int __cdecl
_vswprintf_s_l(wchar_t *param_1,ulong64 param_2,wchar_t *param_3,__crt_locale_pointers *param_4,
              char *param_5)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf_s(*puVar2,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// localtime_s @ 14ff40110

errno_t __cdecl localtime_s(tm *_Tm,__time64_t *_Time)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff40110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _localtime64_s(_Tm,_Time);
  return eVar1;
}

// time @ 14ff40120

__time64_t __cdecl time(__time64_t *_Time)

{
  __time64_t _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff40120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = _time64(_Time);
  return _Var1;
}

// vfprintf_s @ 14ff40130

int __cdecl vfprintf_s(_iobuf *param_1,char *param_2,char *param_3)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vfprintf_s(*puVar2,param_1,param_2,0,param_3);
  return iVar1;
}

// vsprintf_s @ 14ff40180

int __cdecl vsprintf_s(char *param_1,ulong64 param_2,char *param_3,char *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// vswprintf_s @ 14ff401f0

int __cdecl vswprintf_s(wchar_t *param_1,ulong64 param_2,wchar_t *param_3,char *param_4)

{
  int iVar1;
  ulong64 *puVar2;
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf_s(*puVar2,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

