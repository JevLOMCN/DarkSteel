// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 4

// NGXInvalidParameterHandler @ 14ff40270

void __cdecl
NGXInvalidParameterHandler
          (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,ulong64 param_5)

{
  GAppPathValid = false;
  printf("secure exception triggered - invalid parameter - %ls:%d:%ls:%ls\n");
  return;
}

// NGXSafeInitializeLog @ 14ff402a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
NGXSafeInitializeLog
          (wchar_t *param_1,wchar_t *param_2,int param_3,
          _func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *param_4,
          bool param_5)

{
  bool bVar1;
  LSTATUS LVar2;
  _invalid_parameter_handler _Handler;
  undefined1 auStackY_4a8 [32];
  int local_478 [2];
  HKEY local_470;
  wchar_t local_468 [264];
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  if (param_1 == (wchar_t *)0x0) {
    bVar1 = false;
  }
  else {
    _Handler = _set_invalid_parameter_handler(NGXInvalidParameterHandler);
    GAppPathValid = true;
    local_478[0] = 0;
    LVar2 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                          L"SOFTWARE\\NVIDIA Corporation\\Global\\NGXCore",0,0x20019,&local_470);
    if (LVar2 == 0) {
      local_478[1] = 4;
      LVar2 = RegQueryValueExW(local_470,L"EnableLogPathOverride",(LPDWORD)0x0,(LPDWORD)0x0,
                               (LPBYTE)local_478,(LPDWORD)(local_478 + 1));
      if (LVar2 == 0) {
        if (local_478[0] != 0) {
          local_478[1] = 0x208;
          LVar2 = RegQueryValueExW(local_470,L"LogPath",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_258,
                                   (LPDWORD)(local_478 + 1));
          if (LVar2 != 0) {
            local_478[0] = 0;
          }
        }
      }
      else {
        local_478[0] = 0;
      }
      RegCloseKey(local_470);
    }
    if (local_478[0] == 0) {
      if (param_5) {
        local_468[0] = L'\0';
      }
      else {
        wcscpy_s(local_468,0x104,param_1);
      }
    }
    else {
      wcscpy_s(local_468,0x104,local_258);
    }
    if ((GAppPathValid != false) && (wcscat_s(local_468,0x104,param_2), GAppPathValid != false)) {
      if (local_478[0] != 0) {
        param_5 = false;
      }
      ngx::util::setLogFilename(local_468,false,param_3,param_4,param_5);
      if (param_4 != (_func___cdecl_void_char_ptr_NVSDK_NGX_Logging_Level_NVSDK_NGX_Feature *)0x0) {
        ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/common/common_lib.cpp"
                       ,0x8d,"NGXSafeInitializeLog","App logging hooks successfully initialized");
      }
    }
    _set_invalid_parameter_handler(_Handler);
    bVar1 = true;
  }
  return bVar1;
}

// nvWCSCat @ 14ff404d0

wchar_t * __cdecl nvWCSCat(wchar_t *param_1,ulong64 param_2,wchar_t *param_3)

{
  errno_t eVar1;
  wchar_t *pwVar2;
  
  eVar1 = wcscat_s(param_1,param_2,param_3);
  pwVar2 = (wchar_t *)0x0;
  if (eVar1 == 0) {
    pwVar2 = param_1;
  }
  return pwVar2;
}

// nvWCSCopy @ 14ff40500

wchar_t * __cdecl nvWCSCopy(wchar_t *param_1,ulong64 param_2,wchar_t *param_3)

{
  errno_t eVar1;
  wchar_t *pwVar2;
  
  eVar1 = wcscpy_s(param_1,param_2,param_3);
  pwVar2 = (wchar_t *)0x0;
  if (eVar1 == 0) {
    pwVar2 = param_1;
  }
  return pwVar2;
}

