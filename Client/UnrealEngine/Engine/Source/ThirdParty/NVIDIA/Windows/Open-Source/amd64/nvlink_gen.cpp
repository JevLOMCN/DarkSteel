// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NVIDIA
// Functions: 536

// NvAPI_DefaultNvAPIDirectMethodCallback @ 140e60910

/* void __cdecl NvAPI_DefaultNvAPIDirectMethodCallback(void) */

void __cdecl NvAPI_DefaultNvAPIDirectMethodCallback(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140e60917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringW(L"NvAPI Direct was not found. Please update your driver.\n");
  return;
}

// NvAPI_DefaultNvAPIDirectMethod @ 140e60930

/* void * __ptr64 __cdecl NvAPI_DefaultNvAPIDirectMethod(unsigned long) */

void * __cdecl NvAPI_DefaultNvAPIDirectMethod(ulong param_1)

{
  return NvAPI_DefaultNvAPIDirectMethodCallback;
}

// ~CSingletonCriticalSection @ 140e60940

/* public: virtual __cdecl CSingletonCriticalSection::~CSingletonCriticalSection(void) __ptr64 */

void __thiscall
CSingletonCriticalSection::~CSingletonCriticalSection(CSingletonCriticalSection *this)

{
  *(undefined ***)this = vftable;
  return;
}

// EnterCS @ 140e60960

/* public: void __cdecl CSingletonCriticalSection::EnterCS(void) __ptr64 */

void __thiscall CSingletonCriticalSection::EnterCS(CSingletonCriticalSection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140e60964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return;
}

// LeaveCS @ 140e60980

/* public: void __cdecl CSingletonCriticalSection::LeaveCS(void) __ptr64 */

void __thiscall CSingletonCriticalSection::LeaveCS(CSingletonCriticalSection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000140e60984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return;
}

// CSingletonCriticalSection @ 140e609a0

/* private: __cdecl CSingletonCriticalSection::CSingletonCriticalSection(void) __ptr64 */

CSingletonCriticalSection * __thiscall
CSingletonCriticalSection::CSingletonCriticalSection(CSingletonCriticalSection *this)

{
  *(undefined ***)this = vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return this;
}

// `scalar_deleting_destructor' @ 140e609d0

/* public: virtual void * __ptr64 __cdecl CSingletonCriticalSection::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
CSingletonCriticalSection::_scalar_deleting_destructor_
          (CSingletonCriticalSection *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this);
  }
  return this;
}

// Module_InitializeHelper @ 140e60a00

/* enum _NvAPI_Status __cdecl Module_InitializeHelper(struct HINSTANCE__ * __ptr64,enum
   _NVAPI_MODULE_ID,enum _NV_DRIVER_TYPE) */

_NvAPI_Status __cdecl
Module_InitializeHelper(HINSTANCE__ *param_1,_NVAPI_MODULE_ID param_2,_NV_DRIVER_TYPE param_3)

{
  _NvAPI_Status _Var1;
  code *pcVar2;
  
  if (param_2 != 0) goto LAB_140e60b52;
  g_nvapi_lpNvAPI_gpuQueryInterface =
       (_func_void_ptr_ulong *)GetProcAddress(param_1,"nvapi_QueryInterface");
  pcVar2 = GetProcAddress(param_1,"nvapi_Direct_GetMethod");
  if (pcVar2 == (_func_void_ptr_ulong *)0x0) {
    pcVar2 = NvAPI_DefaultNvAPIDirectMethod;
  }
  g_nvapi_lpNvAPIDirect_GetMethod = pcVar2;
  if (g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0) {
    return NVAPI_ERROR;
  }
  initInterfaceEx = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xad298d3f);
  if (g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0) {
    initInterface = (_func__NvAPI_Status *)0x0;
  }
  else {
    initInterface = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x150e828);
  }
  if (param_3 == 0) {
    if (initInterface == (_func__NvAPI_Status *)0x0) {
      return NVAPI_ERROR;
    }
    _Var1 = (*initInterface)();
  }
  else {
    if (param_3 != 1) {
      return NVAPI_ERROR;
    }
    if (initInterfaceEx == (_func__NvAPI_Status__NV_DRIVER_TYPE *)0x0) {
      return NVAPI_NO_IMPLEMENTATION;
    }
    _Var1 = (*initInterfaceEx)(1);
  }
  if (_Var1 != NVAPI_OK) {
    return _Var1;
  }
  if (g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0) {
    g_nvapi_callStart = (_func_void_ulong___uint64_ptr *)0x0;
LAB_140e60b30:
    g_nvapi_callReturn = (_func_void_ulong___uint64__NvAPI_Status *)0x0;
  }
  else {
    g_nvapi_callStart = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x33c7358c);
    if (g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0) goto LAB_140e60b30;
    g_nvapi_callReturn = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x593e8644);
  }
  if ((g_nvapi_callStart == (_func_void_ulong___uint64_ptr *)0x0) ||
     (g_nvapi_callReturn == (_func_void_ulong___uint64__NvAPI_Status *)0x0)) {
    g_nvapi_callStart = (_func_void_ulong___uint64_ptr *)0x0;
    g_nvapi_callReturn = (_func_void_ulong___uint64__NvAPI_Status *)0x0;
  }
LAB_140e60b52:
  memset(&nvapi_vtbl,0,0xff0);
  return NVAPI_OK;
}

// nvapi_IsWine @ 140e60b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl nvapi_IsWine(void) */

bool __cdecl nvapi_IsWine(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [4];
  wchar_t local_110 [4];
  wchar_t local_108 [2];
  undefined1 local_104 [236];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (DAT_1553e4550 == '\0') {
    local_118 = (wchar_t  [4])u_ntdll_dll._0_8_;
    local_110 = (wchar_t  [4])u_ntdll_dll._8_8_;
    local_108 = (wchar_t  [2])u_ntdll_dll._16_4_;
    memset(local_104,0,0xec);
    hModule = GetModuleHandleW(local_118);
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"wine_get_version");
      if (pFVar1 != (FARPROC)0x0) {
        DAT_1553e4550 = '\x01';
      }
      return (bool)DAT_1553e4550;
    }
  }
  return (bool)DAT_1553e4550;
}

// LoadModule @ 140e60c60

/* enum _NvAPI_Status __cdecl LoadModule(enum _NVAPI_MODULE_ID,enum _NV_DRIVER_TYPE) */

_NvAPI_Status __cdecl LoadModule(_NVAPI_MODULE_ID param_1,_NV_DRIVER_TYPE param_2)

{
  bool bVar1;
  _NvAPI_Status _Var2;
  HINSTANCE__ *hLibModule;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(int)param_1;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    if (param_2 != 1) {
      return NVAPI_NO_IMPLEMENTATION;
    }
    lVar4 = 1;
  }
  if ((&g_nvapi_HModule)[lVar3] == (HINSTANCE__ **)0x0) {
    if ((DAT_1553e4551 == '\0') || (bVar1 = nvapi_IsWine(), !bVar1)) {
      hLibModule = (HINSTANCE__ *)nvLoadSystemLibraryExW(L"nvapi64.dll",0x800);
      if (hLibModule != (HINSTANCE__ *)0x0) {
        _Var2 = Module_InitializeHelper(hLibModule,param_1,param_2);
        if (_Var2 != NVAPI_OK) {
          FreeLibrary(hLibModule);
          return _Var2;
        }
        (&g_nvapi_HModule)[lVar3] = (HINSTANCE__ **)hLibModule;
        *(undefined4 *)((longlong)&g_module_RefCount + lVar3 * 4) = 1;
        (&DAT_1553e34e8)[lVar4 * 3] = 1;
        *(undefined4 *)((longlong)&drvDetails + lVar4 * 0xc) = 1;
        goto LAB_140e60d3c;
      }
      DAT_1553e4551 = '\x01';
    }
    _Var2 = NVAPI_LIBRARY_NOT_FOUND;
  }
  else {
LAB_140e60d3c:
    _Var2 = NVAPI_OK;
  }
  return _Var2;
}

// ValidateModuleHandle @ 140e60d60

/* enum _NvAPI_Status __cdecl ValidateModuleHandle(enum _NVAPI_MODULE_ID,enum _NV_DRIVER_TYPE) */

_NvAPI_Status __cdecl ValidateModuleHandle(_NVAPI_MODULE_ID param_1,_NV_DRIVER_TYPE param_2)

{
  char cVar1;
  _NvAPI_Status _Var2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)param_1;
  uVar3 = 0;
  cVar1 = *(char *)((longlong)&g_nvapi_moduleUnloadPending + lVar4);
  while( true ) {
    if (cVar1 == '\0') {
      if ((&g_nvapi_HModule)[lVar4] == (HINSTANCE__ **)0x0) {
        _Var2 = LoadModule(param_1,param_2);
      }
      else {
        _Var2 = NVAPI_OK;
      }
      return _Var2;
    }
    Sleep(100);
    uVar3 = uVar3 + 1;
    if (9 < uVar3) break;
    cVar1 = *(char *)((longlong)&g_nvapi_moduleUnloadPending + lVar4);
  }
  return NVAPI_ERROR;
}

// NvAPI_UnloadHelper @ 140e60df0

/* enum _NvAPI_Status __cdecl NvAPI_UnloadHelper(enum _NV_DRIVER_TYPE,bool) */

_NvAPI_Status __cdecl NvAPI_UnloadHelper(_NV_DRIVER_TYPE param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = (code *)0x0;
  pcVar3 = pcVar5;
  if (param_1 != 0) {
    if (param_1 != 1) {
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar3 = (code *)&DAT_00000001;
  }
  g_nvapi_moduleUnloadPending._0_1_ = 1;
  if (((g_nvapi_HModule == (HINSTANCE__ **)0x0) ||
      (g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0)) ||
     (((&DAT_1553e34e8)[(longlong)pcVar3 * 3] != 1 && ((&DAT_1553e34e8)[(longlong)pcVar3 * 3] != 2))
     )) {
    g_nvapi_moduleUnloadPending._0_1_ = 0;
    return NVAPI_API_NOT_INITIALIZED;
  }
  pcVar4 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd7c61344);
  if (pcVar4 == (code *)0x0) {
    if (param_1 != 0) {
      g_nvapi_moduleUnloadPending._0_1_ = 0;
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar5 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd22bdd7e);
    if (pcVar5 == (code *)0x0) {
      g_nvapi_moduleUnloadPending._0_1_ = 0;
      return NVAPI_NO_IMPLEMENTATION;
    }
  }
  iVar2 = *(int *)((longlong)&drvDetails + (longlong)pcVar3 * 0xc);
  if ((iVar2 == 0) && (!param_2)) {
    return NVAPI_API_NOT_INITIALIZED;
  }
  g_module_RefCount._0_4_ = (int)g_module_RefCount + -1;
  iVar2 = iVar2 + -1;
  *(int *)((longlong)&drvDetails + (longlong)pcVar3 * 0xc) = iVar2;
  if ((iVar2 == 0) || (param_2)) {
    LOCK();
    piVar1 = (int *)((longlong)&drvDetails + (longlong)pcVar3 * 0xc + 4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 != 0) {
      piVar1 = (int *)((longlong)&drvDetails + (longlong)pcVar3 * 0xc);
      *piVar1 = *piVar1 + 1;
      g_module_RefCount._0_4_ = (int)g_module_RefCount + 1;
      g_nvapi_moduleUnloadPending._0_1_ = 0;
      return NVAPI_API_IN_USE;
    }
    if (pcVar4 == (code *)0x0) {
      iVar2 = (*pcVar5)();
    }
    else {
      iVar2 = (*pcVar4)(param_1);
    }
    if (iVar2 != 0) {
      piVar1 = (int *)((longlong)&drvDetails + (longlong)pcVar3 * 0xc);
      *piVar1 = *piVar1 + 1;
      g_module_RefCount._0_4_ = (int)g_module_RefCount + 1;
      g_nvapi_moduleUnloadPending._0_1_ = 0;
      return NVAPI_ERROR;
    }
    (&DAT_1553e34e8)[(longlong)pcVar3 * 3] = 0;
    if (((int)g_module_RefCount == 0) || (param_2)) {
      g_nvapi_lpNvAPI_gpuQueryInterface = (_func_void_ptr_ulong *)0x0;
      initInterface = (_func__NvAPI_Status *)0x0;
      initInterfaceEx = (_func__NvAPI_Status__NV_DRIVER_TYPE *)0x0;
      FreeLibrary((HMODULE)g_nvapi_HModule);
      g_nvapi_HModule = (HINSTANCE__ **)0x0;
      g_nvapi_callStart = (_func_void_ulong___uint64_ptr *)0x0;
      g_nvapi_callReturn = (_func_void_ulong___uint64__NvAPI_Status *)0x0;
      g_module_RefCount._0_4_ = 0;
      memset(&nvapi_vtbl,0,0xff0);
      drvDetails._0_4_ = 0;
      drvDetails._4_4_ = 0;
      DAT_1553e34e8 = 0;
      DAT_1553e34ec = 0;
      DAT_1553e34f0 = 0;
      DAT_1553e34f4 = 0;
      g_nvapi_moduleUnloadPending._0_1_ = 0;
      return NVAPI_OK;
    }
  }
  g_nvapi_moduleUnloadPending._0_1_ = 0;
  return NVAPI_OK;
}

// NvAPI_GetErrorMessage @ 140e61060

_NvAPI_Status NvAPI_GetErrorMessage(undefined4 param_1,undefined8 param_2)

{
  _func___int64 **pp_Var1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((nvapi_vtbl == (_func___int64 **)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (nvapi_vtbl = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6c2d048c),
        nvapi_vtbl == (_func___int64 **)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pp_Var1 = nvapi_vtbl;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6c2d048c,local_res18);
      }
      _Var2 = (*(code *)pp_Var1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6c2d048c,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetInterfaceVersionString @ 140e61130

_NvAPI_Status NvAPI_GetInterfaceVersionString(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3568 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3568 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1053fa5),
        DAT_1553e3568 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3568;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x1053fa5,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x1053fa5,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetEDID @ 140e61200

_NvAPI_Status NvAPI_GPU_GetEDID(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3570 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3570 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x37d32e69),
        DAT_1553e3570 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3570;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x37d32e69,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x37d32e69,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SetView @ 140e612e0

_NvAPI_Status NvAPI_SetView(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3578 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3578 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x957d7b6),
        DAT_1553e3578 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3578;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x957d7b6,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x957d7b6,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SetViewEx @ 140e613c0

_NvAPI_Status NvAPI_SetViewEx(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3580 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3580 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6b89e68),
        DAT_1553e3580 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3580;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6b89e68,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6b89e68,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetDisplayDriverVersion @ 140e614a0

_NvAPI_Status NvAPI_GetDisplayDriverVersion(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3588 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3588 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf951a4d1),
        DAT_1553e3588 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3588;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf951a4d1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf951a4d1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetDriverAndBranchVersion @ 140e61570

_NvAPI_Status NvAPI_SYS_GetDriverAndBranchVersion(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3590 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3590 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2926aaad),
        DAT_1553e3590 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3590;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2926aaad,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2926aaad,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetMemoryInfo @ 140e61640

_NvAPI_Status NvAPI_GPU_GetMemoryInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3598 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3598 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7f9b368),
        DAT_1553e3598 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3598;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7f9b368,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7f9b368,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetMemoryInfoEx @ 140e61710

_NvAPI_Status NvAPI_GPU_GetMemoryInfoEx(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc0599498),
        DAT_1553e35a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35a0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc0599498,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc0599498,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_OGL_ExpertModeSet @ 140e617e0

_NvAPI_Status
NvAPI_OGL_ExpertModeSet(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3805ef7a),
        DAT_1553e35a8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35a8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3805ef7a,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3805ef7a,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_OGL_ExpertModeGet @ 140e618d0

_NvAPI_Status
NvAPI_OGL_ExpertModeGet(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x22ed9516),
        DAT_1553e35b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35b0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x22ed9516,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x22ed9516,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_OGL_ExpertModeDefaultsSet @ 140e619c0

_NvAPI_Status
NvAPI_OGL_ExpertModeDefaultsSet(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb47a657e),
        DAT_1553e35b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35b8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb47a657e,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb47a657e,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_OGL_ExpertModeDefaultsGet @ 140e61aa0

_NvAPI_Status
NvAPI_OGL_ExpertModeDefaultsGet(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xae921f12),
        DAT_1553e35c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35c0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xae921f12,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xae921f12,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_EnumPhysicalGPUs @ 140e61b80

_NvAPI_Status NvAPI_EnumPhysicalGPUs(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe5ac921f),
        DAT_1553e35c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35c8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe5ac921f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe5ac921f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_EnumTCCPhysicalGPUs @ 140e61c50

_NvAPI_Status NvAPI_EnumTCCPhysicalGPUs(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd9930b07),
        DAT_1553e35d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd9930b07,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd9930b07,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_EnumLogicalGPUs @ 140e61d20

_NvAPI_Status NvAPI_EnumLogicalGPUs(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x48b3ea59),
        DAT_1553e35d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35d8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x48b3ea59,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x48b3ea59,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetPhysicalGPUsFromDisplay @ 140e61df0

_NvAPI_Status
NvAPI_GetPhysicalGPUsFromDisplay(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x34ef9506),
        DAT_1553e35e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35e0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x34ef9506,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x34ef9506,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetPhysicalGPUFromUnAttachedDisplay @ 140e61ed0

_NvAPI_Status NvAPI_GetPhysicalGPUFromUnAttachedDisplay(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5018ed61),
        DAT_1553e35e8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35e8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5018ed61,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5018ed61,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetLogicalGPUFromDisplay @ 140e61fa0

_NvAPI_Status NvAPI_GetLogicalGPUFromDisplay(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xee1370cf),
        DAT_1553e35f0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35f0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xee1370cf,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xee1370cf,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetLogicalGPUFromPhysicalGPU @ 140e62070

_NvAPI_Status NvAPI_GetLogicalGPUFromPhysicalGPU(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e35f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e35f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xadd604d1),
        DAT_1553e35f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e35f8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xadd604d1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xadd604d1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetPhysicalGPUsFromLogicalGPU @ 140e62140

_NvAPI_Status
NvAPI_GetPhysicalGPUsFromLogicalGPU(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3600 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3600 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xaea3fa32),
        DAT_1553e3600 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3600;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xaea3fa32,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xaea3fa32,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetPhysicalGPUFromGPUID @ 140e62220

_NvAPI_Status NvAPI_GetPhysicalGPUFromGPUID(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3608 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3608 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5380ad1a),
        DAT_1553e3608 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3608;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5380ad1a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5380ad1a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetGPUIDfromPhysicalGPU @ 140e622f0

_NvAPI_Status NvAPI_GetGPUIDfromPhysicalGPU(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3610 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3610 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6533ea3e),
        DAT_1553e3610 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3610;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6533ea3e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6533ea3e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetShaderSubPipeCount @ 140e623c0

_NvAPI_Status NvAPI_GPU_GetShaderSubPipeCount(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3618 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3618 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbe17923),
        DAT_1553e3618 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3618;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbe17923,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbe17923,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetGpuCoreCount @ 140e62490

_NvAPI_Status NvAPI_GPU_GetGpuCoreCount(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3620 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3620 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc7026a87),
        DAT_1553e3620 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3620;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc7026a87,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc7026a87,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetAllOutputs @ 140e62560

_NvAPI_Status NvAPI_GPU_GetAllOutputs(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3628 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3628 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7d554f8e),
        DAT_1553e3628 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3628;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7d554f8e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7d554f8e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetConnectedOutputs @ 140e62630

_NvAPI_Status NvAPI_GPU_GetConnectedOutputs(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3630 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3630 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1730bfc9),
        DAT_1553e3630 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3630;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1730bfc9,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1730bfc9,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetConnectedSLIOutputs @ 140e62700

_NvAPI_Status NvAPI_GPU_GetConnectedSLIOutputs(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3638 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3638 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x680de09),
        DAT_1553e3638 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3638;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x680de09,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x680de09,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetConnectedDisplayIds @ 140e627d0

_NvAPI_Status
NvAPI_GPU_GetConnectedDisplayIds
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3640 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3640 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x78dba2),
        DAT_1553e3640 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3640;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x78dba2,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x78dba2,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetAllDisplayIds @ 140e628c0

_NvAPI_Status NvAPI_GPU_GetAllDisplayIds(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3648 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3648 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x785210a2),
        DAT_1553e3648 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3648;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x785210a2,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x785210a2,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetConnectedOutputsWithLidState @ 140e629a0

_NvAPI_Status NvAPI_GPU_GetConnectedOutputsWithLidState(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3650 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3650 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcf8caf39),
        DAT_1553e3650 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3650;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcf8caf39,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcf8caf39,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetConnectedSLIOutputsWithLidState @ 140e62a70

_NvAPI_Status NvAPI_GPU_GetConnectedSLIOutputsWithLidState(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3658 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3658 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x96043cc7),
        DAT_1553e3658 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3658;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x96043cc7,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x96043cc7,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetSystemType @ 140e62b40

_NvAPI_Status NvAPI_GPU_GetSystemType(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3660 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3660 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbaaabfcc),
        DAT_1553e3660 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3660;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbaaabfcc,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbaaabfcc,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetActiveOutputs @ 140e62c10

_NvAPI_Status NvAPI_GPU_GetActiveOutputs(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3668 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3668 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe3e89b6f),
        DAT_1553e3668 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3668;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe3e89b6f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe3e89b6f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_SetEDID @ 140e62ce0

_NvAPI_Status NvAPI_GPU_SetEDID(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3670 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3670 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe83d6456),
        DAT_1553e3670 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3670;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe83d6456,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe83d6456,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetOutputType @ 140e62dc0

_NvAPI_Status NvAPI_GPU_GetOutputType(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3678 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3678 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x40a505e4),
        DAT_1553e3678 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3678;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x40a505e4,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x40a505e4,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ValidateOutputCombination @ 140e62ea0

_NvAPI_Status NvAPI_GPU_ValidateOutputCombination(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3680 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3680 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x34c9c2d4),
        DAT_1553e3680 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3680;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x34c9c2d4,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x34c9c2d4,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetFullName @ 140e62f70

_NvAPI_Status NvAPI_GPU_GetFullName(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3688 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3688 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xceee8e9f),
        DAT_1553e3688 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3688;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xceee8e9f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xceee8e9f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetPCIIdentifiers @ 140e63040

_NvAPI_Status
NvAPI_GPU_GetPCIIdentifiers
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3690 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3690 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2ddfb66e),
        DAT_1553e3690 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3690;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2ddfb66e,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2ddfb66e,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetGPUType @ 140e63140

_NvAPI_Status NvAPI_GPU_GetGPUType(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3698 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3698 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc33baeb1),
        DAT_1553e3698 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3698;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc33baeb1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc33baeb1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetBusType @ 140e63210

_NvAPI_Status NvAPI_GPU_GetBusType(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1bb18724),
        DAT_1553e36a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36a0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1bb18724,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1bb18724,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetBusId @ 140e632e0

_NvAPI_Status NvAPI_GPU_GetBusId(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1be0b8e5),
        DAT_1553e36a8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36a8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1be0b8e5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1be0b8e5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetBusSlotId @ 140e633b0

_NvAPI_Status NvAPI_GPU_GetBusSlotId(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2a0a350f),
        DAT_1553e36b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36b0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2a0a350f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2a0a350f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetIRQ @ 140e63480

_NvAPI_Status NvAPI_GPU_GetIRQ(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe4715417),
        DAT_1553e36b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36b8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe4715417,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe4715417,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetVbiosRevision @ 140e63550

_NvAPI_Status NvAPI_GPU_GetVbiosRevision(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xacc3da0a),
        DAT_1553e36c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xacc3da0a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xacc3da0a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetVbiosOEMRevision @ 140e63620

_NvAPI_Status NvAPI_GPU_GetVbiosOEMRevision(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2d43fb31),
        DAT_1553e36c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36c8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2d43fb31,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2d43fb31,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetVbiosVersionString @ 140e636f0

_NvAPI_Status NvAPI_GPU_GetVbiosVersionString(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa561fd7d),
        DAT_1553e36d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa561fd7d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa561fd7d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetAGPAperture @ 140e637c0

_NvAPI_Status NvAPI_GPU_GetAGPAperture(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6e042794),
        DAT_1553e36d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36d8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6e042794,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6e042794,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetCurrentAGPRate @ 140e63890

_NvAPI_Status NvAPI_GPU_GetCurrentAGPRate(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc74925a0),
        DAT_1553e36e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36e0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc74925a0,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc74925a0,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetCurrentPCIEDownstreamWidth @ 140e63960

_NvAPI_Status NvAPI_GPU_GetCurrentPCIEDownstreamWidth(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd048c3b1),
        DAT_1553e36e8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36e8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd048c3b1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd048c3b1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetPhysicalFrameBufferSize @ 140e63a30

_NvAPI_Status NvAPI_GPU_GetPhysicalFrameBufferSize(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x46fbeb03),
        DAT_1553e36f0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36f0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x46fbeb03,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x46fbeb03,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetVirtualFrameBufferSize @ 140e63b00

_NvAPI_Status NvAPI_GPU_GetVirtualFrameBufferSize(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e36f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e36f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5a04b644),
        DAT_1553e36f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e36f8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5a04b644,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5a04b644,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetQuadroStatus @ 140e63bd0

_NvAPI_Status NvAPI_GPU_GetQuadroStatus(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3700 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3700 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe332fa47),
        DAT_1553e3700 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3700;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe332fa47,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe332fa47,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetBoardInfo @ 140e63ca0

_NvAPI_Status NvAPI_GPU_GetBoardInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3708 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3708 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x22d54523),
        DAT_1553e3708 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3708;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x22d54523,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x22d54523,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetRamBusWidth @ 140e63d70

_NvAPI_Status NvAPI_GPU_GetRamBusWidth(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3710 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3710 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7975c581),
        DAT_1553e3710 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3710;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7975c581,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7975c581,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetArchInfo @ 140e63e40

_NvAPI_Status NvAPI_GPU_GetArchInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3718 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3718 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd8265d24),
        DAT_1553e3718 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3718;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd8265d24,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd8265d24,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_I2CRead @ 140e63f10

_NvAPI_Status NvAPI_I2CRead(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3720 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3720 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2fde12c5),
        DAT_1553e3720 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3720;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2fde12c5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2fde12c5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_I2CWrite @ 140e63fe0

_NvAPI_Status NvAPI_I2CWrite(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3728 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3728 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe812eb07),
        DAT_1553e3728 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3728;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe812eb07,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe812eb07,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_WorkstationFeatureSetup @ 140e640b0

_NvAPI_Status
NvAPI_GPU_WorkstationFeatureSetup(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3730 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3730 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6c1f3fe4),
        DAT_1553e3730 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3730;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6c1f3fe4,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6c1f3fe4,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_WorkstationFeatureQuery @ 140e64190

_NvAPI_Status
NvAPI_GPU_WorkstationFeatureQuery(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3738 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3738 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4537df),
        DAT_1553e3738 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3738;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4537df,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4537df,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetHDCPSupportStatus @ 140e64270

_NvAPI_Status NvAPI_GPU_GetHDCPSupportStatus(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3740 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3740 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf089eef5),
        DAT_1553e3740 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3740;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf089eef5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf089eef5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_CudaEnumComputeCapableGpus @ 140e64340

_NvAPI_Status NvAPI_GPU_CudaEnumComputeCapableGpus(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3748 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3748 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5786cc6e),
        DAT_1553e3748 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3748;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x5786cc6e,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x5786cc6e,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetTachReading @ 140e64410

_NvAPI_Status NvAPI_GPU_GetTachReading(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3750 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3750 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5f608315),
        DAT_1553e3750 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3750;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5f608315,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5f608315,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetECCStatusInfo @ 140e644e0

_NvAPI_Status NvAPI_GPU_GetECCStatusInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3758 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3758 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xca1ddaf3),
        DAT_1553e3758 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3758;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xca1ddaf3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xca1ddaf3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetECCErrorInfo @ 140e645b0

_NvAPI_Status NvAPI_GPU_GetECCErrorInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3760 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3760 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc71f85a6),
        DAT_1553e3760 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3760;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc71f85a6,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc71f85a6,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ResetECCErrorInfo @ 140e64680

_NvAPI_Status NvAPI_GPU_ResetECCErrorInfo(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3768 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3768 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc02eec20),
        DAT_1553e3768 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3768;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc02eec20,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc02eec20,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetECCConfigurationInfo @ 140e64760

_NvAPI_Status NvAPI_GPU_GetECCConfigurationInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3770 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3770 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x77a796f3),
        DAT_1553e3770 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3770;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x77a796f3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x77a796f3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_SetECCConfiguration @ 140e64830

_NvAPI_Status
NvAPI_GPU_SetECCConfiguration(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3778 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3778 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1cf639d9),
        DAT_1553e3778 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3778;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1cf639d9,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1cf639d9,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_QueryWorkstationFeatureSupport @ 140e64910

_NvAPI_Status NvAPI_GPU_QueryWorkstationFeatureSupport(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3780 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3780 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x80b1abb9),
        DAT_1553e3780 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3780;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x80b1abb9,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x80b1abb9,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_SetScanoutIntensity @ 140e649e0

_NvAPI_Status
NvAPI_GPU_SetScanoutIntensity(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3788 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3788 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa57457a4),
        DAT_1553e3788 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3788;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa57457a4,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa57457a4,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetScanoutIntensityState @ 140e64ac0

_NvAPI_Status NvAPI_GPU_GetScanoutIntensityState(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3790 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3790 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe81ce836),
        DAT_1553e3790 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3790;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe81ce836,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe81ce836,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_SetScanoutWarping @ 140e64b90

_NvAPI_Status
NvAPI_GPU_SetScanoutWarping
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3798 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3798 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb34bab4f),
        DAT_1553e3798 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3798;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb34bab4f,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb34bab4f,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetScanoutWarpingState @ 140e64c80

_NvAPI_Status NvAPI_GPU_GetScanoutWarpingState(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6f5435af),
        DAT_1553e37a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37a0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6f5435af,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6f5435af,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_SetScanoutCompositionParameter @ 140e64d50

_NvAPI_Status
NvAPI_GPU_SetScanoutCompositionParameter
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf898247d),
        DAT_1553e37a8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37a8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf898247d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf898247d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetScanoutCompositionParameter @ 140e64e40

_NvAPI_Status
NvAPI_GPU_GetScanoutCompositionParameter
          (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x58fe51e6),
        DAT_1553e37b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37b0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x58fe51e6,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x58fe51e6,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetScanoutConfiguration @ 140e64f30

_NvAPI_Status
NvAPI_GPU_GetScanoutConfiguration(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6a9f5b63),
        DAT_1553e37b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37b8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6a9f5b63,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6a9f5b63,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetScanoutConfigurationEx @ 140e65010

_NvAPI_Status NvAPI_GPU_GetScanoutConfigurationEx(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe2e1e6f0),
        DAT_1553e37c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe2e1e6f0,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe2e1e6f0,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetAdapterIdFromPhysicalGpu @ 140e650e0

_NvAPI_Status NvAPI_GPU_GetAdapterIdFromPhysicalGpu(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xff07fde),
        DAT_1553e37c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37c8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xff07fde,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xff07fde,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetVirtualizationInfo @ 140e651b0

_NvAPI_Status NvAPI_GPU_GetVirtualizationInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x44e022a9),
        DAT_1553e37d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x44e022a9,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x44e022a9,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetLogicalGpuInfo @ 140e65280

_NvAPI_Status NvAPI_GPU_GetLogicalGpuInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x842b066e),
        DAT_1553e37d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37d8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x842b066e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x842b066e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetLicensableFeatures @ 140e65350

_NvAPI_Status NvAPI_GPU_GetLicensableFeatures(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3fc596aa),
        DAT_1553e37e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37e0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3fc596aa,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3fc596aa,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_NVLINK_GetCaps @ 140e65420

_NvAPI_Status NvAPI_GPU_NVLINK_GetCaps(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbef1119d),
        DAT_1553e37e8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37e8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbef1119d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbef1119d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_NVLINK_GetStatus @ 140e654f0

_NvAPI_Status NvAPI_GPU_NVLINK_GetStatus(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc72a38e3),
        DAT_1553e37f0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37f0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc72a38e3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc72a38e3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetEncoderStatistics @ 140e655c0

_NvAPI_Status NvAPI_GPU_GetEncoderStatistics(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e37f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e37f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf0a9aeeb),
        DAT_1553e37f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e37f8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf0a9aeeb,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf0a9aeeb,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetEncoderSessionsInfo @ 140e65690

_NvAPI_Status NvAPI_GPU_GetEncoderSessionsInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3800 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3800 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd8a72ce5),
        DAT_1553e3800 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3800;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd8a72ce5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd8a72ce5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetGPUInfo @ 140e65760

_NvAPI_Status NvAPI_GPU_GetGPUInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3808 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3808 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xafd1b02c),
        DAT_1553e3808 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3808;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xafd1b02c,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xafd1b02c,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetVRReadyData @ 140e65830

_NvAPI_Status NvAPI_GPU_GetVRReadyData(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3810 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3810 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x81d629c5),
        DAT_1553e3810 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3810;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x81d629c5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x81d629c5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetGspFeatures @ 140e65900

_NvAPI_Status NvAPI_GPU_GetGspFeatures(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3818 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3818 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x581c4391),
        DAT_1553e3818 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3818;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x581c4391,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x581c4391,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetPerfDecreaseInfo @ 140e659d0

_NvAPI_Status NvAPI_GPU_GetPerfDecreaseInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3820 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3820 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7f7f4600),
        DAT_1553e3820 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3820;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7f7f4600,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7f7f4600,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetPstatesInfoEx @ 140e65aa0

_NvAPI_Status NvAPI_GPU_GetPstatesInfoEx(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3828 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3828 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x843c0256),
        DAT_1553e3828 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3828;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x843c0256,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x843c0256,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetPstates20 @ 140e65b80

_NvAPI_Status NvAPI_GPU_GetPstates20(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3830 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3830 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6ff81213),
        DAT_1553e3830 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3830;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6ff81213,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6ff81213,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetCurrentPstate @ 140e65c50

_NvAPI_Status NvAPI_GPU_GetCurrentPstate(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3838 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3838 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x927da4f6),
        DAT_1553e3838 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3838;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x927da4f6,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x927da4f6,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetDynamicPstatesInfoEx @ 140e65d20

_NvAPI_Status NvAPI_GPU_GetDynamicPstatesInfoEx(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3840 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3840 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x60ded2ed),
        DAT_1553e3840 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3840;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x60ded2ed,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x60ded2ed,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetThermalSettings @ 140e65df0

_NvAPI_Status NvAPI_GPU_GetThermalSettings(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3848 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3848 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe3640a56),
        DAT_1553e3848 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3848;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe3640a56,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe3640a56,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetAllClockFrequencies @ 140e65ed0

_NvAPI_Status NvAPI_GPU_GetAllClockFrequencies(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3850 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3850 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdcb616c3),
        DAT_1553e3850 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3850;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdcb616c3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdcb616c3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_QueryIlluminationSupport @ 140e65fa0

_NvAPI_Status NvAPI_GPU_QueryIlluminationSupport(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3858 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3858 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa629da31),
        DAT_1553e3858 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3858;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xa629da31,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xa629da31,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_GetIllumination @ 140e66070

_NvAPI_Status NvAPI_GPU_GetIllumination(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3860 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3860 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9a1b9365),
        DAT_1553e3860 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3860;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x9a1b9365,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x9a1b9365,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_SetIllumination @ 140e66140

_NvAPI_Status NvAPI_GPU_SetIllumination(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3868 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3868 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x254a187),
        DAT_1553e3868 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3868;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x254a187,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x254a187,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ClientIllumDevicesGetInfo @ 140e66210

_NvAPI_Status NvAPI_GPU_ClientIllumDevicesGetInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3870 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3870 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd4100e58),
        DAT_1553e3870 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3870;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd4100e58,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd4100e58,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ClientIllumDevicesGetControl @ 140e662e0

_NvAPI_Status NvAPI_GPU_ClientIllumDevicesGetControl(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3878 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3878 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x73c01d58),
        DAT_1553e3878 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3878;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x73c01d58,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x73c01d58,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ClientIllumDevicesSetControl @ 140e663b0

_NvAPI_Status NvAPI_GPU_ClientIllumDevicesSetControl(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3880 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3880 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x57024c62),
        DAT_1553e3880 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3880;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x57024c62,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x57024c62,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ClientIllumZonesGetInfo @ 140e66480

_NvAPI_Status NvAPI_GPU_ClientIllumZonesGetInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3888 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3888 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4b81241b),
        DAT_1553e3888 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3888;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4b81241b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4b81241b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ClientIllumZonesGetControl @ 140e66550

_NvAPI_Status NvAPI_GPU_ClientIllumZonesGetControl(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3890 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3890 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3dbf5764),
        DAT_1553e3890 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3890;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3dbf5764,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3dbf5764,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ClientIllumZonesSetControl @ 140e66620

_NvAPI_Status NvAPI_GPU_ClientIllumZonesSetControl(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3898 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3898 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x197d065e),
        DAT_1553e3898 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3898;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x197d065e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x197d065e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Event_RegisterCallback @ 140e666f0

_NvAPI_Status NvAPI_Event_RegisterCallback(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe6dbea69),
        DAT_1553e38a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38a0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe6dbea69,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe6dbea69,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Event_UnregisterCallback @ 140e667c0

_NvAPI_Status NvAPI_Event_UnregisterCallback(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xde1f9b45),
        DAT_1553e38a8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e38a8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xde1f9b45,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xde1f9b45,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_EnumNvidiaDisplayHandle @ 140e66890

_NvAPI_Status NvAPI_EnumNvidiaDisplayHandle(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9abdd40d),
        DAT_1553e38b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38b0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9abdd40d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9abdd40d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_EnumNvidiaUnAttachedDisplayHandle @ 140e66960

_NvAPI_Status NvAPI_EnumNvidiaUnAttachedDisplayHandle(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x20de9260),
        DAT_1553e38b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38b8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x20de9260,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x20de9260,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_CreateDisplayFromUnAttachedDisplay @ 140e66a30

_NvAPI_Status NvAPI_CreateDisplayFromUnAttachedDisplay(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x63f9799e),
        DAT_1553e38c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x63f9799e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x63f9799e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetAssociatedNvidiaDisplayHandle @ 140e66b00

_NvAPI_Status NvAPI_GetAssociatedNvidiaDisplayHandle(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x35c29134),
        DAT_1553e38c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38c8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x35c29134,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x35c29134,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetAssociatedUnAttachedNvidiaDisplayHandle @ 140e66bd0

_NvAPI_Status
NvAPI_DISP_GetAssociatedUnAttachedNvidiaDisplayHandle(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa70503b2),
        DAT_1553e38d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa70503b2,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa70503b2,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetAssociatedNvidiaDisplayName @ 140e66ca0

_NvAPI_Status NvAPI_GetAssociatedNvidiaDisplayName(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x22a78b05),
        DAT_1553e38d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38d8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x22a78b05,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x22a78b05,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetUnAttachedAssociatedDisplayName @ 140e66d70

_NvAPI_Status NvAPI_GetUnAttachedAssociatedDisplayName(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4888d790),
        DAT_1553e38e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38e0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4888d790,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4888d790,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_EnableHWCursor @ 140e66e40

_NvAPI_Status NvAPI_EnableHWCursor(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2863148d),
        DAT_1553e38e8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e38e8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x2863148d,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x2863148d,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DisableHWCursor @ 140e66f10

_NvAPI_Status NvAPI_DisableHWCursor(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xab163097),
        DAT_1553e38f0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e38f0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xab163097,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xab163097,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetVBlankCounter @ 140e66fe0

_NvAPI_Status NvAPI_GetVBlankCounter(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e38f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e38f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x67b5db55),
        DAT_1553e38f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e38f8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x67b5db55,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x67b5db55,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SetRefreshRateOverride @ 140e670b0

_NvAPI_Status
NvAPI_SetRefreshRateOverride
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_28 [4];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3900 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3900 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3092ac32),
        DAT_1553e3900 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3900;
      local_28[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3092ac32,local_28);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3092ac32,local_28[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetAssociatedDisplayOutputId @ 140e671a0

_NvAPI_Status NvAPI_GetAssociatedDisplayOutputId(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3908 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3908 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd995937e),
        DAT_1553e3908 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3908;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd995937e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd995937e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetDisplayPortInfo @ 140e67270

_NvAPI_Status NvAPI_GetDisplayPortInfo(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3910 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3910 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc64ff367),
        DAT_1553e3910 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3910;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc64ff367,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc64ff367,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SetDisplayPort @ 140e67350

_NvAPI_Status NvAPI_SetDisplayPort(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3918 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3918 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfa13e65a),
        DAT_1553e3918 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3918;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xfa13e65a,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xfa13e65a,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetHDMISupportInfo @ 140e67430

_NvAPI_Status NvAPI_GetHDMISupportInfo(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3920 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3920 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6ae16ec3),
        DAT_1553e3920 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3920;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6ae16ec3,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6ae16ec3,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_InfoFrameControl @ 140e67510

_NvAPI_Status NvAPI_Disp_InfoFrameControl(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3928 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3928 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6067af3f),
        DAT_1553e3928 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3928;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6067af3f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6067af3f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_ColorControl @ 140e675e0

_NvAPI_Status NvAPI_Disp_ColorControl(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3930 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3930 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x92f9d80d),
        DAT_1553e3930 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3930;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x92f9d80d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x92f9d80d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetHdrCapabilities @ 140e676b0

_NvAPI_Status NvAPI_Disp_GetHdrCapabilities(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3938 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3938 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x84f2a8df),
        DAT_1553e3938 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3938;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x84f2a8df,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x84f2a8df,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_HdrColorControl @ 140e67780

_NvAPI_Status NvAPI_Disp_HdrColorControl(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3940 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3940 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x351da224),
        DAT_1553e3940 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3940;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x351da224,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x351da224,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_SetSourceColorSpace @ 140e67850

_NvAPI_Status NvAPI_Disp_SetSourceColorSpace(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3948 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3948 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x473b6caf),
        DAT_1553e3948 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3948;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x473b6caf,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x473b6caf,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetSourceColorSpace @ 140e67920

_NvAPI_Status
NvAPI_Disp_GetSourceColorSpace(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3950 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3950 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xceedc85b),
        DAT_1553e3950 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3950;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xceedc85b,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xceedc85b,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_SetSourceHdrMetadata @ 140e67a00

_NvAPI_Status NvAPI_Disp_SetSourceHdrMetadata(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3958 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3958 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x905eb63b),
        DAT_1553e3958 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3958;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x905eb63b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x905eb63b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetSourceHdrMetadata @ 140e67ad0

_NvAPI_Status
NvAPI_Disp_GetSourceHdrMetadata(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3960 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3960 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd3f52da),
        DAT_1553e3960 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3960;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd3f52da,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd3f52da,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_SetOutputMode @ 140e67bb0

_NvAPI_Status NvAPI_Disp_SetOutputMode(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3968 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3968 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x98e7661a),
        DAT_1553e3968 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3968;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x98e7661a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x98e7661a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetOutputMode @ 140e67c80

_NvAPI_Status NvAPI_Disp_GetOutputMode(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3970 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3970 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x81fed88d),
        DAT_1553e3970 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3970;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x81fed88d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x81fed88d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_SetHdrToneMapping @ 140e67d50

_NvAPI_Status NvAPI_Disp_SetHdrToneMapping(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3978 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3978 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdd6da362),
        DAT_1553e3978 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3978;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdd6da362,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdd6da362,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetHdrToneMapping @ 140e67e20

_NvAPI_Status NvAPI_Disp_GetHdrToneMapping(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3980 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3980 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfbd36e71),
        DAT_1553e3980 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3980;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xfbd36e71,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xfbd36e71,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetTiming @ 140e67ef0

_NvAPI_Status NvAPI_DISP_GetTiming(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3988 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3988 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x175167e9),
        DAT_1553e3988 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3988;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x175167e9,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x175167e9,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetMonitorCapabilities @ 140e67fd0

_NvAPI_Status NvAPI_DISP_GetMonitorCapabilities(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3990 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3990 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3b05c7e1),
        DAT_1553e3990 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3990;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3b05c7e1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3b05c7e1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetMonitorColorCapabilities @ 140e680a0

_NvAPI_Status
NvAPI_DISP_GetMonitorColorCapabilities(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3998 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3998 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6ae4cfb5),
        DAT_1553e3998 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3998;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6ae4cfb5,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6ae4cfb5,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_EnumCustomDisplay @ 140e68180

_NvAPI_Status NvAPI_DISP_EnumCustomDisplay(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa2072d59),
        DAT_1553e39a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39a0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa2072d59,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa2072d59,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_TryCustomDisplay @ 140e68260

_NvAPI_Status NvAPI_DISP_TryCustomDisplay(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1f7db630),
        DAT_1553e39a8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39a8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1f7db630,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1f7db630,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_DeleteCustomDisplay @ 140e68340

_NvAPI_Status
NvAPI_DISP_DeleteCustomDisplay(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x552e5b9b),
        DAT_1553e39b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39b0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x552e5b9b,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x552e5b9b,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_SaveCustomDisplay @ 140e68420

_NvAPI_Status
NvAPI_DISP_SaveCustomDisplay
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x49882876),
        DAT_1553e39b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39b8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x49882876,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x49882876,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_RevertCustomDisplayTrial @ 140e68510

_NvAPI_Status NvAPI_DISP_RevertCustomDisplayTrial(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcbbd40f0),
        DAT_1553e39c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcbbd40f0,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcbbd40f0,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetView @ 140e685e0

_NvAPI_Status
NvAPI_GetView(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd6b99d89),
        DAT_1553e39c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39c8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd6b99d89,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd6b99d89,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetViewEx @ 140e686d0

_NvAPI_Status
NvAPI_GetViewEx(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdbbc0af4),
        DAT_1553e39d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39d0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdbbc0af4,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdbbc0af4,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetSupportedViews @ 140e687c0

_NvAPI_Status NvAPI_GetSupportedViews(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x66fb7fc0),
        DAT_1553e39d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39d8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x66fb7fc0,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x66fb7fc0,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetDisplayIdByDisplayName @ 140e688a0

_NvAPI_Status NvAPI_DISP_GetDisplayIdByDisplayName(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xae457190),
        DAT_1553e39e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39e0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xae457190,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xae457190,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetGDIPrimaryDisplayId @ 140e68970

_NvAPI_Status NvAPI_DISP_GetGDIPrimaryDisplayId(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1e9d8a31),
        DAT_1553e39e8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e39e8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x1e9d8a31,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x1e9d8a31,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetDisplayConfig @ 140e68a40

_NvAPI_Status NvAPI_DISP_GetDisplayConfig(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x11abccf8),
        DAT_1553e39f0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39f0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x11abccf8,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x11abccf8,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_SetDisplayConfig @ 140e68b10

_NvAPI_Status NvAPI_DISP_SetDisplayConfig(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e39f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e39f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5d8cf8de),
        DAT_1553e39f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e39f8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5d8cf8de,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5d8cf8de,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetEdidData @ 140e68bf0

_NvAPI_Status NvAPI_DISP_GetEdidData(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a00 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a00 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x436ced76),
        DAT_1553e3a00 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a00;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x436ced76,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x436ced76,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetAdaptiveSyncData @ 140e68cd0

_NvAPI_Status NvAPI_DISP_GetAdaptiveSyncData(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a08 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a08 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb73d1ee9),
        DAT_1553e3a08 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a08;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb73d1ee9,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb73d1ee9,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_SetAdaptiveSyncData @ 140e68da0

_NvAPI_Status NvAPI_DISP_SetAdaptiveSyncData(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a10 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a10 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3eebba1d),
        DAT_1553e3a10 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a10;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3eebba1d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3eebba1d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetVirtualRefreshRateData @ 140e68e70

_NvAPI_Status NvAPI_DISP_GetVirtualRefreshRateData(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a18 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a18 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8c00429a),
        DAT_1553e3a18 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a18;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8c00429a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8c00429a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_SetVirtualRefreshRateData @ 140e68f40

_NvAPI_Status NvAPI_DISP_SetVirtualRefreshRateData(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a20 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a20 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5abbe6a3),
        DAT_1553e3a20 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a20;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5abbe6a3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5abbe6a3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_SetPreferredStereoDisplay @ 140e69010

_NvAPI_Status NvAPI_DISP_SetPreferredStereoDisplay(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a28 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a28 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc9d0e25f),
        DAT_1553e3a28 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3a28;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xc9d0e25f,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xc9d0e25f,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetPreferredStereoDisplay @ 140e690e0

_NvAPI_Status NvAPI_DISP_GetPreferredStereoDisplay(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a30 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a30 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1f6b4666),
        DAT_1553e3a30 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3a30;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x1f6b4666,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x1f6b4666,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetNvManagedDedicatedDisplays @ 140e691b0

_NvAPI_Status NvAPI_DISP_GetNvManagedDedicatedDisplays(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a38 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a38 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdbdf0cb2),
        DAT_1553e3a38 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a38;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdbdf0cb2,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdbdf0cb2,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_AcquireDedicatedDisplay @ 140e69280

_NvAPI_Status NvAPI_DISP_AcquireDedicatedDisplay(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a40 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a40 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x47c917ba),
        DAT_1553e3a40 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a40;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x47c917ba,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x47c917ba,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_ReleaseDedicatedDisplay @ 140e69350

_NvAPI_Status NvAPI_DISP_ReleaseDedicatedDisplay(undefined4 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a48 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a48 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1247825f),
        DAT_1553e3a48 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3a48;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x1247825f,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x1247825f,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_GetNvManagedDedicatedDisplayMetadata @ 140e69420

_NvAPI_Status NvAPI_DISP_GetNvManagedDedicatedDisplayMetadata(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a50 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a50 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd645d80c),
        DAT_1553e3a50 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3a50;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xd645d80c,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xd645d80c,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DISP_SetNvManagedDedicatedDisplayMetadata @ 140e694f0

_NvAPI_Status NvAPI_DISP_SetNvManagedDedicatedDisplayMetadata(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a58 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a58 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3d8b129a),
        DAT_1553e3a58 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3a58;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x3d8b129a,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x3d8b129a,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetDisplayIdInfo @ 140e695c0

_NvAPI_Status NvAPI_Disp_GetDisplayIdInfo(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a60 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a60 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbae8aa5e),
        DAT_1553e3a60 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a60;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbae8aa5e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbae8aa5e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetDisplayIdsFromTarget @ 140e69690

_NvAPI_Status NvAPI_Disp_GetDisplayIdsFromTarget(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a68 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a68 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe7e5f89e),
        DAT_1553e3a68 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3a68;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xe7e5f89e,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xe7e5f89e,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Disp_GetVRRInfo @ 140e69760

_NvAPI_Status NvAPI_Disp_GetVRRInfo(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a70 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a70 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdf8fda57),
        DAT_1553e3a70 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a70;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdf8fda57,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdf8fda57,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_GetSupportedTopoInfo @ 140e69830

_NvAPI_Status NvAPI_Mosaic_GetSupportedTopoInfo(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a78 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a78 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfdb63c81),
        DAT_1553e3a78 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a78;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xfdb63c81,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xfdb63c81,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_GetTopoGroup @ 140e69900

_NvAPI_Status NvAPI_Mosaic_GetTopoGroup(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a80 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a80 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcb89381d),
        DAT_1553e3a80 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a80;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcb89381d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcb89381d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_GetOverlapLimits @ 140e699d0

_NvAPI_Status
NvAPI_Mosaic_GetOverlapLimits
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a88 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a88 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x989685f0),
        DAT_1553e3a88 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a88;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x989685f0,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x989685f0,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_SetCurrentTopo @ 140e69ad0

_NvAPI_Status
NvAPI_Mosaic_SetCurrentTopo
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a90 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a90 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9b542831),
        DAT_1553e3a90 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a90;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9b542831,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9b542831,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_GetCurrentTopo @ 140e69bd0

_NvAPI_Status
NvAPI_Mosaic_GetCurrentTopo
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3a98 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3a98 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xec32944e),
        DAT_1553e3a98 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3a98;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xec32944e,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xec32944e,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_EnableCurrentTopo @ 140e69cc0

_NvAPI_Status NvAPI_Mosaic_EnableCurrentTopo(undefined4 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3aa0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3aa0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5f1aa66c),
        DAT_1553e3aa0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3aa0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x5f1aa66c,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x5f1aa66c,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_GetDisplayViewportsByResolution @ 140e69d90

_NvAPI_Status
NvAPI_Mosaic_GetDisplayViewportsByResolution
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3aa8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3aa8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdc6dc8d3),
        DAT_1553e3aa8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3aa8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdc6dc8d3,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdc6dc8d3,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_SetDisplayGrids @ 140e69e90

_NvAPI_Status NvAPI_Mosaic_SetDisplayGrids(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ab0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ab0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4d959a89),
        DAT_1553e3ab0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ab0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4d959a89,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4d959a89,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_ValidateDisplayGrids @ 140e69f70

_NvAPI_Status
NvAPI_Mosaic_ValidateDisplayGrids
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ab8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ab8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcf43903d),
        DAT_1553e3ab8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ab8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcf43903d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcf43903d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_EnumDisplayModes @ 140e6a060

_NvAPI_Status
NvAPI_Mosaic_EnumDisplayModes(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ac0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ac0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x78db97d7),
        DAT_1553e3ac0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ac0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x78db97d7,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x78db97d7,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Mosaic_EnumDisplayGrids @ 140e6a140

_NvAPI_Status NvAPI_Mosaic_EnumDisplayGrids(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ac8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ac8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdf2887af),
        DAT_1553e3ac8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ac8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdf2887af,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdf2887af,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetSupportedMosaicTopologies @ 140e6a210

_NvAPI_Status NvAPI_GetSupportedMosaicTopologies(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ad0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ad0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x410b5c25),
        DAT_1553e3ad0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ad0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x410b5c25,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x410b5c25,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GetCurrentMosaicTopology @ 140e6a2e0

_NvAPI_Status NvAPI_GetCurrentMosaicTopology(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ad8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ad8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf60852bd),
        DAT_1553e3ad8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ad8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf60852bd,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf60852bd,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SetCurrentMosaicTopology @ 140e6a3b0

_NvAPI_Status NvAPI_SetCurrentMosaicTopology(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ae0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ae0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd54b8989),
        DAT_1553e3ae0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ae0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xd54b8989,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xd54b8989,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_EnableCurrentMosaicTopology @ 140e6a480

_NvAPI_Status NvAPI_EnableCurrentMosaicTopology(undefined4 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ae8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ae8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x74073cc9),
        DAT_1553e3ae8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ae8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x74073cc9,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x74073cc9,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_EnumSyncDevices @ 140e6a550

_NvAPI_Status NvAPI_GSync_EnumSyncDevices(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3af0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3af0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd9639601),
        DAT_1553e3af0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3af0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd9639601,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd9639601,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_QueryCapabilities @ 140e6a620

_NvAPI_Status NvAPI_GSync_QueryCapabilities(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3af8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3af8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x44a3f1d1),
        DAT_1553e3af8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3af8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x44a3f1d1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x44a3f1d1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_GetTopology @ 140e6a6f0

_NvAPI_Status
NvAPI_GSync_GetTopology
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b00 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b00 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4562bc38),
        DAT_1553e3b00 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b00;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4562bc38,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4562bc38,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_SetSyncStateSettings @ 140e6a7f0

_NvAPI_Status
NvAPI_GSync_SetSyncStateSettings(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b08 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b08 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x60acdfdd),
        DAT_1553e3b08 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b08;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x60acdfdd,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x60acdfdd,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_GetControlParameters @ 140e6a8d0

_NvAPI_Status NvAPI_GSync_GetControlParameters(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b10 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b10 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x16de1c6a),
        DAT_1553e3b10 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b10;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x16de1c6a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x16de1c6a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_SetControlParameters @ 140e6a9a0

_NvAPI_Status NvAPI_GSync_SetControlParameters(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b18 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b18 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8bbff88b),
        DAT_1553e3b18 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b18;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8bbff88b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8bbff88b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_AdjustSyncDelay @ 140e6aa70

_NvAPI_Status
NvAPI_GSync_AdjustSyncDelay
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b20 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b20 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2d11ff51),
        DAT_1553e3b20 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b20;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2d11ff51,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2d11ff51,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_GetSyncStatus @ 140e6ab60

_NvAPI_Status NvAPI_GSync_GetSyncStatus(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b28 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b28 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf1f5b434),
        DAT_1553e3b28 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b28;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf1f5b434,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf1f5b434,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GSync_GetStatusParameters @ 140e6ac40

_NvAPI_Status NvAPI_GSync_GetStatusParameters(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b30 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b30 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x70d404ec),
        DAT_1553e3b30 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b30;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x70d404ec,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x70d404ec,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_GetCurrentSLIState @ 140e6ad10

_NvAPI_Status NvAPI_D3D_GetCurrentSLIState(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b38 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b38 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4b708b54),
        DAT_1553e3b38 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b38;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4b708b54,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4b708b54,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_RegisterResource @ 140e6ade0

_NvAPI_Status NvAPI_D3D9_RegisterResource(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b40 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b40 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa064bdfc),
        DAT_1553e3b40 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3b40;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xa064bdfc,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xa064bdfc,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_UnregisterResource @ 140e6aeb0

_NvAPI_Status NvAPI_D3D9_UnregisterResource(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b48 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b48 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbb2b17aa),
        DAT_1553e3b48 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3b48;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xbb2b17aa,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xbb2b17aa,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_AliasSurfaceAsTexture @ 140e6af80

_NvAPI_Status
NvAPI_D3D9_AliasSurfaceAsTexture
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b50 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b50 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe5ceae41),
        DAT_1553e3b50 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b50;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe5ceae41,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe5ceae41,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_StretchRectEx @ 140e6b070

_NvAPI_Status
NvAPI_D3D9_StretchRectEx
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b58 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b58 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x22de03aa),
        DAT_1553e3b58 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b58;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x22de03aa,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x22de03aa,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_ClearRT @ 140e6b170

_NvAPI_Status
NvAPI_D3D9_ClearRT(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_28 [4];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b60 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b60 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x332d3942),
        DAT_1553e3b60 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b60;
      local_28[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x332d3942,local_28);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x332d3942,local_28[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_GetObjectHandleForResource @ 140e6b290

_NvAPI_Status
NvAPI_D3D_GetObjectHandleForResource(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b68 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b68 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfceac864),
        DAT_1553e3b68 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b68;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xfceac864,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xfceac864,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetResourceHint @ 140e6b370

_NvAPI_Status
NvAPI_D3D_SetResourceHint
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b70 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b70 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6c0ed98c),
        DAT_1553e3b70 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b70;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6c0ed98c,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6c0ed98c,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_BeginResourceRendering @ 140e6b470

_NvAPI_Status
NvAPI_D3D_BeginResourceRendering(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b78 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b78 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x91123d6a),
        DAT_1553e3b78 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b78;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x91123d6a,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x91123d6a,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_EndResourceRendering @ 140e6b550

_NvAPI_Status
NvAPI_D3D_EndResourceRendering(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b80 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b80 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x37e7191c),
        DAT_1553e3b80 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b80;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x37e7191c,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x37e7191c,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_GetSurfaceHandle @ 140e6b630

_NvAPI_Status NvAPI_D3D9_GetSurfaceHandle(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b88 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b88 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf2dd3f2),
        DAT_1553e3b88 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b88;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf2dd3f2,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf2dd3f2,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_VideoSetStereoInfo @ 140e6b700

_NvAPI_Status NvAPI_D3D9_VideoSetStereoInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b90 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b90 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb852f4db),
        DAT_1553e3b90 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b90;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb852f4db,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb852f4db,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D10_SetDepthBoundsTest @ 140e6b7d0

_NvAPI_Status
NvAPI_D3D10_SetDepthBoundsTest
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_38 [6];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3b98 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3b98 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4eadf5d2),
        DAT_1553e3b98 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3b98;
      local_38[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4eadf5d2,local_38);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4eadf5d2,local_38[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateDevice @ 140e6b8c0

_NvAPI_Status
NvAPI_D3D11_CreateDevice
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ba0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ba0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6a16d3a0),
        DAT_1553e3ba0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ba0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6a16d3a0,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6a16d3a0,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateDeviceAndSwapChain @ 140e6ba10

_NvAPI_Status
NvAPI_D3D11_CreateDeviceAndSwapChain
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ba8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ba8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbb939ee5),
        DAT_1553e3ba8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ba8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbb939ee5,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbb939ee5,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_SetDepthBoundsTest @ 140e6bb80

_NvAPI_Status
NvAPI_D3D11_SetDepthBoundsTest
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_38 [6];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bb0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bb0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7aaf7a04),
        DAT_1553e3bb0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3bb0;
      local_38[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7aaf7a04,local_38);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7aaf7a04,local_38[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_IsNvShaderExtnOpCodeSupported @ 140e6bc70

_NvAPI_Status
NvAPI_D3D11_IsNvShaderExtnOpCodeSupported(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bb8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bb8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5f68da40),
        DAT_1553e3bb8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3bb8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5f68da40,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5f68da40,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_SetNvShaderExtnSlot @ 140e6bd50

_NvAPI_Status NvAPI_D3D11_SetNvShaderExtnSlot(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bc0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bc0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8e90bb9f),
        DAT_1553e3bc0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3bc0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8e90bb9f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8e90bb9f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetNvShaderExtnSlotSpace @ 140e6be20

_NvAPI_Status
NvAPI_D3D12_SetNvShaderExtnSlotSpace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bc8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bc8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xac2dfeb5),
        DAT_1553e3bc8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3bc8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xac2dfeb5,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xac2dfeb5,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread @ 140e6bf00

_NvAPI_Status
NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread
          (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bd0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bd0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x43d867c0),
        DAT_1553e3bd0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3bd0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x43d867c0,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x43d867c0,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_SetNvShaderExtnSlotLocalThread @ 140e6bfe0

_NvAPI_Status NvAPI_D3D11_SetNvShaderExtnSlotLocalThread(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bd8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bd8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe6482a0),
        DAT_1553e3bd8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3bd8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe6482a0,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe6482a0,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_BeginUAVOverlapEx @ 140e6c0b0

_NvAPI_Status NvAPI_D3D11_BeginUAVOverlapEx(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3be0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3be0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xba08208a),
        DAT_1553e3be0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3be0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xba08208a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xba08208a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_BeginUAVOverlap @ 140e6c180

_NvAPI_Status NvAPI_D3D11_BeginUAVOverlap(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3be8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3be8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x65b93ca8),
        DAT_1553e3be8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3be8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x65b93ca8,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x65b93ca8,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_EndUAVOverlap @ 140e6c250

_NvAPI_Status NvAPI_D3D11_EndUAVOverlap(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bf0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bf0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2216a357),
        DAT_1553e3bf0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3bf0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x2216a357,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x2216a357,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_GetResourceHandle @ 140e6c320

_NvAPI_Status
NvAPI_D3D11_GetResourceHandle(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3bf8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3bf8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9d52986),
        DAT_1553e3bf8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3bf8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9d52986,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9d52986,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetFPSIndicatorState @ 140e6c400

_NvAPI_Status NvAPI_D3D_SetFPSIndicatorState(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c00 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c00 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa776e8db),
        DAT_1553e3c00 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c00;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa776e8db,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa776e8db,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_Present @ 140e6c4d0

_NvAPI_Status
NvAPI_D3D9_Present(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c08 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c08 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5650beb),
        DAT_1553e3c08 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c08;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5650beb,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5650beb,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_QueryFrameCount @ 140e6c5d0

_NvAPI_Status NvAPI_D3D9_QueryFrameCount(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c10 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c10 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9083e53a),
        DAT_1553e3c10 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c10;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9083e53a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9083e53a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_ResetFrameCount @ 140e6c6a0

_NvAPI_Status NvAPI_D3D9_ResetFrameCount(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c18 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c18 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfa6a0675),
        DAT_1553e3c18 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3c18;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xfa6a0675,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xfa6a0675,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_QueryMaxSwapGroup @ 140e6c770

_NvAPI_Status NvAPI_D3D9_QueryMaxSwapGroup(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c20 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c20 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5995410d),
        DAT_1553e3c20 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c20;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5995410d,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5995410d,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_QuerySwapGroup @ 140e6c850

_NvAPI_Status
NvAPI_D3D9_QuerySwapGroup
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c28 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c28 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xeba4d232),
        DAT_1553e3c28 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c28;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xeba4d232,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xeba4d232,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_JoinSwapGroup @ 140e6c940

_NvAPI_Status
NvAPI_D3D9_JoinSwapGroup
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c30 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c30 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7d44bb54),
        DAT_1553e3c30 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c30;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7d44bb54,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7d44bb54,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_BindSwapBarrier @ 140e6ca30

_NvAPI_Status NvAPI_D3D9_BindSwapBarrier(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c38 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c38 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9c39c246),
        DAT_1553e3c38 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c38;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9c39c246,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9c39c246,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetVerticalSyncMode @ 140e6cb10

_NvAPI_Status NvAPI_D3D_SetVerticalSyncMode(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c40 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c40 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5526cfd1),
        DAT_1553e3c40 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c40;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5526cfd1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5526cfd1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_Present @ 140e6cbe0

_NvAPI_Status
NvAPI_D3D1x_Present(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c48 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c48 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3b845a1),
        DAT_1553e3c48 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c48;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3b845a1,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3b845a1,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_QueryFrameCount @ 140e6ccd0

_NvAPI_Status NvAPI_D3D1x_QueryFrameCount(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c50 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c50 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9152e055),
        DAT_1553e3c50 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c50;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9152e055,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9152e055,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_ResetFrameCount @ 140e6cda0

_NvAPI_Status NvAPI_D3D1x_ResetFrameCount(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c58 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c58 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfbbb031a),
        DAT_1553e3c58 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3c58;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xfbbb031a,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xfbbb031a,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_QueryMaxSwapGroup @ 140e6ce70

_NvAPI_Status
NvAPI_D3D1x_QueryMaxSwapGroup(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c60 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c60 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9bb9d68f),
        DAT_1553e3c60 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c60;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9bb9d68f,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9bb9d68f,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_QuerySwapGroup @ 140e6cf50

_NvAPI_Status
NvAPI_D3D1x_QuerySwapGroup
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c68 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c68 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x407f67aa),
        DAT_1553e3c68 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c68;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x407f67aa,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x407f67aa,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_JoinSwapGroup @ 140e6d040

_NvAPI_Status
NvAPI_D3D1x_JoinSwapGroup
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c70 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c70 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x14610cd7),
        DAT_1553e3c70 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c70;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x14610cd7,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x14610cd7,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_BindSwapBarrier @ 140e6d130

_NvAPI_Status NvAPI_D3D1x_BindSwapBarrier(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c78 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c78 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9de8c729),
        DAT_1553e3c78 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c78;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9de8c729,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9de8c729,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_QueryPresentBarrierSupport @ 140e6d210

_NvAPI_Status NvAPI_D3D12_QueryPresentBarrierSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c80 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c80 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa15faef7),
        DAT_1553e3c80 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c80;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa15faef7,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa15faef7,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreatePresentBarrierClient @ 140e6d2e0

_NvAPI_Status
NvAPI_D3D12_CreatePresentBarrierClient(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c88 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c88 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4d815de9),
        DAT_1553e3c88 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c88;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4d815de9,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4d815de9,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_RegisterPresentBarrierResources @ 140e6d3c0

_NvAPI_Status
NvAPI_D3D12_RegisterPresentBarrierResources
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c90 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c90 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd53c9ef0),
        DAT_1553e3c90 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3c90;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd53c9ef0,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd53c9ef0,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DestroyPresentBarrierClient @ 140e6d4b0

_NvAPI_Status NvAPI_DestroyPresentBarrierClient(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3c98 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3c98 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3c5c351b),
        DAT_1553e3c98 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3c98;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x3c5c351b,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x3c5c351b,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_JoinPresentBarrier @ 140e6d580

_NvAPI_Status NvAPI_JoinPresentBarrier(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ca0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ca0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x17f6bf82),
        DAT_1553e3ca0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ca0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x17f6bf82,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x17f6bf82,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_LeavePresentBarrier @ 140e6d650

_NvAPI_Status NvAPI_LeavePresentBarrier(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ca8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ca8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc3ec5a7f),
        DAT_1553e3ca8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ca8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xc3ec5a7f,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xc3ec5a7f,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_QueryPresentBarrierFrameStatistics @ 140e6d720

_NvAPI_Status NvAPI_QueryPresentBarrierFrameStatistics(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cb0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cb0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x61b844a1),
        DAT_1553e3cb0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cb0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x61b844a1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x61b844a1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateDDisplayPresentBarrierClient @ 140e6d7f0

_NvAPI_Status
NvAPI_D3D12_CreateDDisplayPresentBarrierClient
          (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cb8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cb8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb5a21987),
        DAT_1553e3cb8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cb8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb5a21987,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb5a21987,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateRasterizerState @ 140e6d8d0

_NvAPI_Status
NvAPI_D3D11_CreateRasterizerState(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cc0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cc0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdb8d28af),
        DAT_1553e3cc0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cc0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdb8d28af,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdb8d28af,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_ConfigureAnsel @ 140e6d9b0

_NvAPI_Status NvAPI_D3D_ConfigureAnsel(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cc8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cc8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x341c6c7f),
        DAT_1553e3cc8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cc8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x341c6c7f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x341c6c7f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateTiledTexture2DArray @ 140e6da80

_NvAPI_Status
NvAPI_D3D11_CreateTiledTexture2DArray
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cd0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cd0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7886981a),
        DAT_1553e3cd0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cd0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7886981a,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7886981a,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CheckFeatureSupport @ 140e6db70

_NvAPI_Status
NvAPI_D3D11_CheckFeatureSupport
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cd8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cd8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x106a487e),
        DAT_1553e3cd8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cd8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x106a487e,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x106a487e,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateImplicitMSAATexture2D @ 140e6dc60

_NvAPI_Status
NvAPI_D3D11_CreateImplicitMSAATexture2D(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ce0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ce0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb8f79632),
        DAT_1553e3ce0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ce0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb8f79632,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb8f79632,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCommittedImplicitMSAATexture2D @ 140e6dd40

_NvAPI_Status
NvAPI_D3D12_CreateCommittedImplicitMSAATexture2D
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ce8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ce8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x24c6a07b),
        DAT_1553e3ce8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ce8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x24c6a07b,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x24c6a07b,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_ResolveSubresourceRegion @ 140e6de60

_NvAPI_Status
NvAPI_D3D11_ResolveSubresourceRegion
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
          undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cf0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cf0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe6bfedd6),
        DAT_1553e3cf0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cf0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe6bfedd6,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe6bfedd6,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_ResolveSubresourceRegion @ 140e6dfa0

_NvAPI_Status
NvAPI_D3D12_ResolveSubresourceRegion
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
          undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3cf8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3cf8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc24a15bf),
        DAT_1553e3cf8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3cf8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc24a15bf,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc24a15bf,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_TiledTexture2DArrayGetDesc @ 140e6e0e0

_NvAPI_Status NvAPI_D3D11_TiledTexture2DArrayGetDesc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d00 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d00 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf1a2b9d5),
        DAT_1553e3d00 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d00;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf1a2b9d5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf1a2b9d5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_UpdateTileMappings @ 140e6e1b0

_NvAPI_Status
NvAPI_D3D11_UpdateTileMappings
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d08 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d08 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9a06ea07),
        DAT_1553e3d08 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d08;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9a06ea07,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9a06ea07,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CopyTileMappings @ 140e6e300

_NvAPI_Status
NvAPI_D3D11_CopyTileMappings
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d10 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d10 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc09ee6bc),
        DAT_1553e3d10 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d10;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc09ee6bc,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc09ee6bc,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_TiledResourceBarrier @ 140e6e410

_NvAPI_Status
NvAPI_D3D11_TiledResourceBarrier(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d18 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d18 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd6839099),
        DAT_1553e3d18 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d18;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd6839099,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd6839099,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_AliasMSAATexture2DAsNonMSAA @ 140e6e4f0

_NvAPI_Status
NvAPI_D3D11_AliasMSAATexture2DAsNonMSAA(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d20 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d20 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf1c54fc9),
        DAT_1553e3d20 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d20;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf1c54fc9,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf1c54fc9,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateGeometryShaderEx_2 @ 140e6e5d0

_NvAPI_Status
NvAPI_D3D11_CreateGeometryShaderEx_2
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d28 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d28 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x99ed5c1c),
        DAT_1553e3d28 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d28;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x99ed5c1c,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x99ed5c1c,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateVertexShaderEx @ 140e6e6d0

_NvAPI_Status
NvAPI_D3D11_CreateVertexShaderEx
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d30 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d30 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbeaa0b2),
        DAT_1553e3d30 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d30;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbeaa0b2,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbeaa0b2,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateHullShaderEx @ 140e6e7d0

_NvAPI_Status
NvAPI_D3D11_CreateHullShaderEx
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d38 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d38 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb53cab00),
        DAT_1553e3d38 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d38;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb53cab00,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb53cab00,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateDomainShaderEx @ 140e6e8d0

_NvAPI_Status
NvAPI_D3D11_CreateDomainShaderEx
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d40 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d40 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa0d7180d),
        DAT_1553e3d40 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d40;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa0d7180d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa0d7180d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreatePixelShaderEx_2 @ 140e6e9d0

_NvAPI_Status
NvAPI_D3D11_CreatePixelShaderEx_2
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d48 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d48 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4162822b),
        DAT_1553e3d48 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d48;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4162822b,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4162822b,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateFastGeometryShaderExplicit @ 140e6ead0

_NvAPI_Status
NvAPI_D3D11_CreateFastGeometryShaderExplicit
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d50 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d50 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x71ab7c9c),
        DAT_1553e3d50 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d50;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x71ab7c9c,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x71ab7c9c,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateFastGeometryShader @ 140e6ebd0

_NvAPI_Status
NvAPI_D3D11_CreateFastGeometryShader
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d58 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d58 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x525d43be),
        DAT_1553e3d58 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d58;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x525d43be,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x525d43be,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_DecompressView @ 140e6ecd0

_NvAPI_Status NvAPI_D3D11_DecompressView(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d60 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d60 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3a94e822),
        DAT_1553e3d60 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d60;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3a94e822,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3a94e822,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateGraphicsPipelineState @ 140e6edb0

_NvAPI_Status
NvAPI_D3D12_CreateGraphicsPipelineState
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d68 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d68 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2fc28856),
        DAT_1553e3d68 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d68;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2fc28856,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2fc28856,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateComputePipelineState @ 140e6eeb0

_NvAPI_Status
NvAPI_D3D12_CreateComputePipelineState
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d70 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d70 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2762deac),
        DAT_1553e3d70 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d70;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2762deac,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2762deac,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetDepthBoundsTestValues @ 140e6efb0

_NvAPI_Status
NvAPI_D3D12_SetDepthBoundsTestValues(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d78 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d78 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb9333fe9),
        DAT_1553e3d78 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d78;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb9333fe9,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb9333fe9,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateReservedResource @ 140e6f090

_NvAPI_Status
NvAPI_D3D12_CreateReservedResource
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d80 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d80 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2c85f101),
        DAT_1553e3d80 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d80;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2c85f101,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2c85f101,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateHeap @ 140e6f1c0

_NvAPI_Status
NvAPI_D3D12_CreateHeap(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d88 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d88 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5cb397cf),
        DAT_1553e3d88 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d88;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5cb397cf,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5cb397cf,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateHeap2 @ 140e6f2b0

_NvAPI_Status
NvAPI_D3D12_CreateHeap2
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d90 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d90 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x924be9d6),
        DAT_1553e3d90 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d90;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x924be9d6,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x924be9d6,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_QueryCpuVisibleVidmem @ 140e6f3b0

_NvAPI_Status
NvAPI_D3D12_QueryCpuVisibleVidmem(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3d98 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3d98 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x26322bc3),
        DAT_1553e3d98 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3d98;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x26322bc3,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x26322bc3,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_ReservedResourceGetDesc @ 140e6f490

_NvAPI_Status NvAPI_D3D12_ReservedResourceGetDesc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3da0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3da0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9aa2aabb),
        DAT_1553e3da0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3da0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9aa2aabb,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9aa2aabb,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_UpdateTileMappings @ 140e6f560

_NvAPI_Status
NvAPI_D3D12_UpdateTileMappings
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3da8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3da8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc6017a7d),
        DAT_1553e3da8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3da8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc6017a7d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc6017a7d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CopyTileMappings @ 140e6f6b0

_NvAPI_Status
NvAPI_D3D12_CopyTileMappings
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3db0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3db0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x47f78194),
        DAT_1553e3db0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3db0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x47f78194,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x47f78194,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_ResourceAliasingBarrier @ 140e6f7c0

_NvAPI_Status
NvAPI_D3D12_ResourceAliasingBarrier(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3db8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3db8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb942bab7),
        DAT_1553e3db8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3db8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb942bab7,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb942bab7,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CaptureUAVInfo @ 140e6f8a0

_NvAPI_Status NvAPI_D3D12_CaptureUAVInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3dc0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3dc0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6e5ea9db),
        DAT_1553e3dc0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3dc0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6e5ea9db,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6e5ea9db,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_GetResourceGPUVirtualAddressEx @ 140e6f970

_NvAPI_Status NvAPI_D3D11_GetResourceGPUVirtualAddressEx(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3dc8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3dc8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xaf6d14da),
        DAT_1553e3dc8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3dc8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xaf6d14da,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xaf6d14da,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_EnumerateMetaCommands @ 140e6fa40

_NvAPI_Status
NvAPI_D3D11_EnumerateMetaCommands(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3dd0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3dd0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc7453ba8),
        DAT_1553e3dd0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3dd0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc7453ba8,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc7453ba8,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateMetaCommand @ 140e6fb20

_NvAPI_Status
NvAPI_D3D11_CreateMetaCommand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3dd8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3dd8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf505fba0),
        DAT_1553e3dd8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3dd8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf505fba0,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf505fba0,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_InitializeMetaCommand @ 140e6fc20

_NvAPI_Status
NvAPI_D3D11_InitializeMetaCommand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3de0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3de0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xaec629e9),
        DAT_1553e3de0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3de0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xaec629e9,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xaec629e9,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_ExecuteMetaCommand @ 140e6fd10

_NvAPI_Status
NvAPI_D3D11_ExecuteMetaCommand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3de8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3de8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x82236c47),
        DAT_1553e3de8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3de8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x82236c47,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x82236c47,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_EnumerateMetaCommands @ 140e6fe00

_NvAPI_Status
NvAPI_D3D12_EnumerateMetaCommands(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3df0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3df0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcd9141d8),
        DAT_1553e3df0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3df0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcd9141d8,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcd9141d8,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateMetaCommand @ 140e6fee0

_NvAPI_Status
NvAPI_D3D12_CreateMetaCommand
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3df8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3df8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xeb29634b),
        DAT_1553e3df8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3df8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xeb29634b,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xeb29634b,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_InitializeMetaCommand @ 140e6ffe0

_NvAPI_Status
NvAPI_D3D12_InitializeMetaCommand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e00 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e00 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa4125399),
        DAT_1553e3e00 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e00;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa4125399,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa4125399,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_ExecuteMetaCommand @ 140e700d0

_NvAPI_Status
NvAPI_D3D12_ExecuteMetaCommand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e08 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e08 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xde24fc3d),
        DAT_1553e3e08 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e08;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xde24fc3d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xde24fc3d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCommittedResource @ 140e701c0

_NvAPI_Status
NvAPI_D3D12_CreateCommittedResource
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e10 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e10 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x27e98ae),
        DAT_1553e3e10 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e10;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x27e98ae,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x27e98ae,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetCopyableFootprints @ 140e70300

_NvAPI_Status
NvAPI_D3D12_GetCopyableFootprints
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e18 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e18 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf6305eb5),
        DAT_1553e3e18 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e18;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf6305eb5,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf6305eb5,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CopyTextureRegion @ 140e70440

_NvAPI_Status
NvAPI_D3D12_CopyTextureRegion
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e20 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e20 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x82b91b25),
        DAT_1553e3e20 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e20;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x82b91b25,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x82b91b25,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_IsNvShaderExtnOpCodeSupported @ 140e70550

_NvAPI_Status
NvAPI_D3D12_IsNvShaderExtnOpCodeSupported(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e28 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e28 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3dfacec8),
        DAT_1553e3e28 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e28;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3dfacec8,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3dfacec8,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetOptimalThreadCountForMesh @ 140e70630

_NvAPI_Status NvAPI_D3D12_GetOptimalThreadCountForMesh(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e30 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e30 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb43995cb),
        DAT_1553e3e30 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e30;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb43995cb,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb43995cb,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_IsGSyncCapable @ 140e70700

_NvAPI_Status NvAPI_D3D_IsGSyncCapable(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e38 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e38 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9c1eed78),
        DAT_1553e3e38 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e38;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9c1eed78,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9c1eed78,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_IsGSyncActive @ 140e707e0

_NvAPI_Status NvAPI_D3D_IsGSyncActive(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e40 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e40 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe942b0ff),
        DAT_1553e3e40 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e40;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe942b0ff,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe942b0ff,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_DisableShaderDiskCache @ 140e708c0

_NvAPI_Status NvAPI_D3D1x_DisableShaderDiskCache(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e48 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e48 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd0cbca7d),
        DAT_1553e3e48 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3e48;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xd0cbca7d,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xd0cbca7d,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_MultiGPU_GetCaps @ 140e70990

_NvAPI_Status NvAPI_D3D11_MultiGPU_GetCaps(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e50 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e50 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd2d25687),
        DAT_1553e3e50 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3e50;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xd2d25687,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xd2d25687,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_MultiGPU_Init @ 140e70a60

_NvAPI_Status NvAPI_D3D11_MultiGPU_Init(undefined1 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e58 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e58 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x17be49e),
        DAT_1553e3e58 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3e58;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x17be49e,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x17be49e,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateMultiGPUDevice @ 140e70b30

_NvAPI_Status
NvAPI_D3D11_CreateMultiGPUDevice
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e60 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e60 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbdb20007),
        DAT_1553e3e60 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e60;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbdb20007,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbdb20007,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_QuerySinglePassStereoSupport @ 140e70c30

_NvAPI_Status NvAPI_D3D_QuerySinglePassStereoSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e68 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e68 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6f5f0a6d),
        DAT_1553e3e68 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e68;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6f5f0a6d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6f5f0a6d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetSinglePassStereoMode @ 140e70d00

_NvAPI_Status
NvAPI_D3D_SetSinglePassStereoMode
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e70 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e70 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa39e6e6e),
        DAT_1553e3e70 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e70;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa39e6e6e,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa39e6e6e,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_QuerySinglePassStereoSupport @ 140e70df0

_NvAPI_Status NvAPI_D3D12_QuerySinglePassStereoSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e78 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e78 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3b03791b),
        DAT_1553e3e78 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e78;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3b03791b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3b03791b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetSinglePassStereoMode @ 140e70ec0

_NvAPI_Status
NvAPI_D3D12_SetSinglePassStereoMode
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e80 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e80 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x83556d87),
        DAT_1553e3e80 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e80;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x83556d87,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x83556d87,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_QueryMultiViewSupport @ 140e70fb0

_NvAPI_Status NvAPI_D3D_QueryMultiViewSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e88 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e88 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb6e0a41c),
        DAT_1553e3e88 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e88;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb6e0a41c,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb6e0a41c,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetMultiViewMode @ 140e71080

_NvAPI_Status NvAPI_D3D_SetMultiViewMode(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e90 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e90 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8285c8da),
        DAT_1553e3e90 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e90;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8285c8da,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8285c8da,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_QueryModifiedWSupport @ 140e71150

_NvAPI_Status NvAPI_D3D_QueryModifiedWSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3e98 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3e98 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcbf9f4f5),
        DAT_1553e3e98 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3e98;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcbf9f4f5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcbf9f4f5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetModifiedWMode @ 140e71220

_NvAPI_Status NvAPI_D3D_SetModifiedWMode(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ea0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ea0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6ea4bf4),
        DAT_1553e3ea0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ea0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6ea4bf4,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6ea4bf4,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_QueryModifiedWSupport @ 140e712f0

_NvAPI_Status NvAPI_D3D12_QueryModifiedWSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ea8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ea8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x51235248),
        DAT_1553e3ea8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ea8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x51235248,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x51235248,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetModifiedWMode @ 140e713c0

_NvAPI_Status NvAPI_D3D12_SetModifiedWMode(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3eb0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3eb0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe1fdaba7),
        DAT_1553e3eb0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3eb0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe1fdaba7,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe1fdaba7,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_CreateLateLatchObject @ 140e71490

_NvAPI_Status NvAPI_D3D_CreateLateLatchObject(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3eb8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3eb8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2db27d09),
        DAT_1553e3eb8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3eb8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2db27d09,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2db27d09,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_QueryLateLatchSupport @ 140e71560

_NvAPI_Status NvAPI_D3D_QueryLateLatchSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ec0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ec0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8ceca0ec),
        DAT_1553e3ec0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ec0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8ceca0ec,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8ceca0ec,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_RegisterDevice @ 140e71630

_NvAPI_Status NvAPI_D3D_RegisterDevice(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ec8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ec8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8c02c4d0),
        DAT_1553e3ec8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ec8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x8c02c4d0,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x8c02c4d0,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_MultiDrawInstancedIndirect @ 140e71700

_NvAPI_Status
NvAPI_D3D11_MultiDrawInstancedIndirect
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ed0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ed0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd4e26bbf),
        DAT_1553e3ed0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ed0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd4e26bbf,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd4e26bbf,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_MultiDrawIndexedInstancedIndirect @ 140e71800

_NvAPI_Status
NvAPI_D3D11_MultiDrawIndexedInstancedIndirect
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ed8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ed8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x59e890f9),
        DAT_1553e3ed8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ed8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x59e890f9,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x59e890f9,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_ImplicitSLIControl @ 140e71900

_NvAPI_Status NvAPI_D3D_ImplicitSLIControl(undefined4 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ee0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ee0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2aede111),
        DAT_1553e3ee0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ee0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x2aede111,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x2aede111,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetNeedsAppFPBlendClamping @ 140e719d0

_NvAPI_Status NvAPI_D3D12_GetNeedsAppFPBlendClamping(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ee8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ee8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6ef4d2d1),
        DAT_1553e3ee8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ee8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6ef4d2d1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6ef4d2d1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_UseDriverHeapPriorities @ 140e71aa0

_NvAPI_Status NvAPI_D3D12_UseDriverHeapPriorities(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ef0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ef0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf0d978a8),
        DAT_1553e3ef0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ef0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xf0d978a8,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xf0d978a8,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_Mosaic_GetCompanionAllocations @ 140e71b70

_NvAPI_Status NvAPI_D3D12_Mosaic_GetCompanionAllocations(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ef8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ef8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa46022c7),
        DAT_1553e3ef8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ef8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xa46022c7,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xa46022c7,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_Mosaic_GetViewportAndGpuPartitions @ 140e71c40

_NvAPI_Status NvAPI_D3D12_Mosaic_GetViewportAndGpuPartitions(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f00 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f00 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb092b818),
        DAT_1553e3f00 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3f00;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xb092b818,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xb092b818,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_GetGraphicsCapabilities @ 140e71d10

_NvAPI_Status
NvAPI_D3D1x_GetGraphicsCapabilities(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f08 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f08 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x52b1499a),
        DAT_1553e3f08 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f08;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x52b1499a,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x52b1499a,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetGraphicsCapabilities @ 140e71df0

_NvAPI_Status
NvAPI_D3D12_GetGraphicsCapabilities(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f10 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f10 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1e87354),
        DAT_1553e3f10 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f10;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1e87354,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1e87354,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_RSSetExclusiveScissorRects @ 140e71ed0

_NvAPI_Status NvAPI_D3D11_RSSetExclusiveScissorRects(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f18 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f18 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xae4d73ef),
        DAT_1553e3f18 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f18;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xae4d73ef,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xae4d73ef,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_RSSetViewportsPixelShadingRates @ 140e71fa0

_NvAPI_Status NvAPI_D3D11_RSSetViewportsPixelShadingRates(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f20 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f20 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x34f7938f),
        DAT_1553e3f20 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f20;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x34f7938f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x34f7938f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateShadingRateResourceView @ 140e72070

_NvAPI_Status
NvAPI_D3D11_CreateShadingRateResourceView
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f28 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f28 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x99ca2dff),
        DAT_1553e3f28 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f28;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x99ca2dff,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x99ca2dff,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_RSSetShadingRateResourceView @ 140e72160

_NvAPI_Status NvAPI_D3D11_RSSetShadingRateResourceView(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f30 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f30 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1b0c2f83),
        DAT_1553e3f30 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f30;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1b0c2f83,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1b0c2f83,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_RSGetPixelShadingRateSampleOrder @ 140e72230

_NvAPI_Status NvAPI_D3D11_RSGetPixelShadingRateSampleOrder(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f38 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f38 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x92442a1),
        DAT_1553e3f38 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f38;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x92442a1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x92442a1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_RSSetPixelShadingRateSampleOrder @ 140e72300

_NvAPI_Status NvAPI_D3D11_RSSetPixelShadingRateSampleOrder(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f40 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f40 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa942373a),
        DAT_1553e3f40 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f40;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa942373a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa942373a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_InitializeVRSHelper @ 140e723d0

_NvAPI_Status NvAPI_D3D_InitializeVRSHelper(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f48 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f48 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4780d70b),
        DAT_1553e3f48 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f48;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4780d70b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4780d70b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_InitializeNvGazeHandler @ 140e724a0

_NvAPI_Status NvAPI_D3D_InitializeNvGazeHandler(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f50 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f50 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5b3b7479),
        DAT_1553e3f50 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f50;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5b3b7479,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5b3b7479,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_InitializeSMPAssist @ 140e72570

_NvAPI_Status NvAPI_D3D_InitializeSMPAssist(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f58 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f58 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x42763d0c),
        DAT_1553e3f58 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f58;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x42763d0c,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x42763d0c,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_QuerySMPAssistSupport @ 140e72640

_NvAPI_Status NvAPI_D3D_QuerySMPAssistSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f60 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f60 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc57921de),
        DAT_1553e3f60 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f60;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc57921de,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc57921de,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_GetSleepStatus @ 140e72710

_NvAPI_Status NvAPI_D3D_GetSleepStatus(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f68 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f68 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xaef96ca1),
        DAT_1553e3f68 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f68;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xaef96ca1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xaef96ca1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetSleepMode @ 140e727e0

_NvAPI_Status NvAPI_D3D_SetSleepMode(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f70 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f70 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xac1ca9e0),
        DAT_1553e3f70 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f70;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xac1ca9e0,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xac1ca9e0,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_Sleep @ 140e728b0

_NvAPI_Status NvAPI_D3D_Sleep(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f78 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f78 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x852cd1d2),
        DAT_1553e3f78 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3f78;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x852cd1d2,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x852cd1d2,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetReflexSync @ 140e72980

_NvAPI_Status NvAPI_D3D_SetReflexSync(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f80 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f80 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb9f6faff),
        DAT_1553e3f80 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f80;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb9f6faff,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb9f6faff,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_GetLatency @ 140e72a50

_NvAPI_Status NvAPI_D3D_GetLatency(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f88 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f88 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1a587f9c),
        DAT_1553e3f88 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f88;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1a587f9c,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1a587f9c,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D_SetLatencyMarker @ 140e72b20

_NvAPI_Status NvAPI_D3D_SetLatencyMarker(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f90 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f90 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd9984c05),
        DAT_1553e3f90 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f90;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd9984c05,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd9984c05,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetAsyncFrameMarker @ 140e72bf0

_NvAPI_Status NvAPI_D3D12_SetAsyncFrameMarker(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3f98 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3f98 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x13c98f73),
        DAT_1553e3f98 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3f98;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x13c98f73,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x13c98f73,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_SetAsyncFrameMarker @ 140e72cc0

_NvAPI_Status NvAPI_D3D11_SetAsyncFrameMarker(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fa0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fa0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x59c2c510),
        DAT_1553e3fa0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3fa0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x59c2c510,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x59c2c510,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_NotifyOutOfBandCommandQueue @ 140e72d90

_NvAPI_Status NvAPI_D3D12_NotifyOutOfBandCommandQueue(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fa8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fa8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3d6e8cb),
        DAT_1553e3fa8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3fa8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3d6e8cb,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3d6e8cb,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetCreateCommandQueueLowLatencyHint @ 140e72e60

_NvAPI_Status NvAPI_D3D12_SetCreateCommandQueueLowLatencyHint(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fb0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fb0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x548c224f),
        DAT_1553e3fb0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3fb0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x548c224f,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x548c224f,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCubinComputeShaderExV2 @ 140e72f30

_NvAPI_Status NvAPI_D3D12_CreateCubinComputeShaderExV2(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fb8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fb8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x299f5fdc),
        DAT_1553e3fb8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3fb8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x299f5fdc,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x299f5fdc,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCubinComputeShader @ 140e73000

_NvAPI_Status
NvAPI_D3D12_CreateCubinComputeShader
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fc0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fc0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2a2c79e8),
        DAT_1553e3fc0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3fc0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2a2c79e8,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2a2c79e8,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCubinComputeShaderEx @ 140e73110

_NvAPI_Status
NvAPI_D3D12_CreateCubinComputeShaderEx
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
          undefined8 param_9)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fc8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fc8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3151211b),
        DAT_1553e3fc8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3fc8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3151211b,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3151211b,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCubinComputeShaderWithName @ 140e73240

_NvAPI_Status
NvAPI_D3D12_CreateCubinComputeShaderWithName
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fd0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fd0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1dc7261f),
        DAT_1553e3fd0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3fd0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1dc7261f,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1dc7261f,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_LaunchCubinShader @ 140e73360

_NvAPI_Status
NvAPI_D3D12_LaunchCubinShader
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fd8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fd8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5c52bb86),
        DAT_1553e3fd8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3fd8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5c52bb86,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5c52bb86,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_DestroyCubinComputeShader @ 140e73470

_NvAPI_Status NvAPI_D3D12_DestroyCubinComputeShader(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fe0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fe0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7fb785ba),
        DAT_1553e3fe0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3fe0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7fb785ba,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7fb785ba,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetCudaMergedTextureSamplerObject @ 140e73540

_NvAPI_Status NvAPI_D3D12_GetCudaMergedTextureSamplerObject(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3fe8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3fe8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x329fe6e0),
        DAT_1553e3fe8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3fe8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x329fe6e0,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x329fe6e0,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetCudaIndependentDescriptorObject @ 140e73610

_NvAPI_Status NvAPI_D3D12_GetCudaIndependentDescriptorObject(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ff0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ff0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xddac234),
        DAT_1553e3ff0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e3ff0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xddac234,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xddac234,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetCudaTextureObject @ 140e736e0

_NvAPI_Status
NvAPI_D3D12_GetCudaTextureObject
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e3ff8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e3ff8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x80403fc9),
        DAT_1553e3ff8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e3ff8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x80403fc9,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x80403fc9,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetCudaSurfaceObject @ 140e737d0

_NvAPI_Status
NvAPI_D3D12_GetCudaSurfaceObject(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4000 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4000 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x48f5b2ee),
        DAT_1553e4000 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4000;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x48f5b2ee,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x48f5b2ee,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_IsFatbinPTXSupported @ 140e738b0

_NvAPI_Status NvAPI_D3D12_IsFatbinPTXSupported(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4008 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4008 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x70c07832),
        DAT_1553e4008 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4008;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x70c07832,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x70c07832,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCuModule @ 140e73980

_NvAPI_Status
NvAPI_D3D12_CreateCuModule
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4010 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4010 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xad1a677d),
        DAT_1553e4010 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4010;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xad1a677d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xad1a677d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_EnumFunctionsInModule @ 140e73a70

_NvAPI_Status
NvAPI_D3D12_EnumFunctionsInModule
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4018 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4018 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7ab88d88),
        DAT_1553e4018 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4018;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7ab88d88,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7ab88d88,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCuFunction @ 140e73b60

_NvAPI_Status
NvAPI_D3D12_CreateCuFunction
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4020 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4020 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe2436e22),
        DAT_1553e4020 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4020;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe2436e22,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe2436e22,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_LaunchCuKernelChain @ 140e73c50

_NvAPI_Status
NvAPI_D3D12_LaunchCuKernelChain(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4028 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4028 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x24973538),
        DAT_1553e4028 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4028;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x24973538,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x24973538,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_LaunchCuKernelChainEx @ 140e73d30

_NvAPI_Status
NvAPI_D3D12_LaunchCuKernelChainEx(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4030 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4030 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x846a9bf0),
        DAT_1553e4030 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4030;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x846a9bf0,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x846a9bf0,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_DestroyCuModule @ 140e73e10

_NvAPI_Status NvAPI_D3D12_DestroyCuModule(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4038 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4038 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x41c65285),
        DAT_1553e4038 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4038;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x41c65285,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x41c65285,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_DestroyCuFunction @ 140e73ee0

_NvAPI_Status NvAPI_D3D12_DestroyCuFunction(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4040 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4040 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdf295ea6),
        DAT_1553e4040 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4040;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xdf295ea6,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xdf295ea6,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateCubinComputeShaderExV2 @ 140e73fb0

_NvAPI_Status NvAPI_D3D11_CreateCubinComputeShaderExV2(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4048 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4048 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf2c71d48),
        DAT_1553e4048 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4048;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xf2c71d48,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xf2c71d48,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateCubinComputeShader @ 140e74080

_NvAPI_Status
NvAPI_D3D11_CreateCubinComputeShader
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4050 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4050 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xed98181),
        DAT_1553e4050 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4050;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xed98181,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xed98181,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateCubinComputeShaderEx @ 140e74190

_NvAPI_Status
NvAPI_D3D11_CreateCubinComputeShaderEx
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
          undefined8 param_9)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4058 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4058 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x32c2a0f6),
        DAT_1553e4058 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4058;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x32c2a0f6,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x32c2a0f6,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateCubinComputeShaderWithName @ 140e742c0

_NvAPI_Status
NvAPI_D3D11_CreateCubinComputeShaderWithName
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4060 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4060 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb672be19),
        DAT_1553e4060 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4060;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb672be19,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb672be19,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_LaunchCubinShader @ 140e743e0

_NvAPI_Status
NvAPI_D3D11_LaunchCubinShader
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
          undefined4 param_9,undefined8 param_10,undefined4 param_11)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4068 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4068 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x427e236d),
        DAT_1553e4068 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4068;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x427e236d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x427e236d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_DestroyCubinComputeShader @ 140e74530

_NvAPI_Status NvAPI_D3D11_DestroyCubinComputeShader(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4070 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4070 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1682c86),
        DAT_1553e4070 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4070;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1682c86,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1682c86,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_IsFatbinPTXSupported @ 140e74600

_NvAPI_Status NvAPI_D3D11_IsFatbinPTXSupported(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4078 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4078 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6086bd93),
        DAT_1553e4078 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4078;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6086bd93,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6086bd93,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_GetCudaIndependentViewObject @ 140e746d0

_NvAPI_Status NvAPI_D3D11_GetCudaIndependentViewObject(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4080 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4080 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x34d2afa8),
        DAT_1553e4080 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4080;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x34d2afa8,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x34d2afa8,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_GetCudaMergedTextureSamplerObject @ 140e747a0

_NvAPI_Status NvAPI_D3D11_GetCudaMergedTextureSamplerObject(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4088 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4088 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5d637d8f),
        DAT_1553e4088 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4088;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x5d637d8f,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x5d637d8f,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateUnorderedAccessView @ 140e74870

_NvAPI_Status
NvAPI_D3D11_CreateUnorderedAccessView
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4090 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4090 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x74a497a1),
        DAT_1553e4090 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4090;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x74a497a1,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x74a497a1,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateShaderResourceView @ 140e74970

_NvAPI_Status
NvAPI_D3D11_CreateShaderResourceView
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4098 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4098 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x65cb431e),
        DAT_1553e4098 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4098;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x65cb431e,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x65cb431e,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_CreateSamplerState @ 140e74a70

_NvAPI_Status
NvAPI_D3D11_CreateSamplerState
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x89eca416),
        DAT_1553e40a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40a0;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x89eca416,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x89eca416,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_GetCudaTextureObject @ 140e74b60

_NvAPI_Status
NvAPI_D3D11_GetCudaTextureObject
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9006fa68),
        DAT_1553e40a8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40a8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9006fa68,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9006fa68,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D11_GetResourceGPUVirtualAddress @ 140e74c50

_NvAPI_Status
NvAPI_D3D11_GetResourceGPUVirtualAddress(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1819b423),
        DAT_1553e40b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40b0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1819b423,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1819b423,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetRaytracingCaps @ 140e74d30

_NvAPI_Status
NvAPI_D3D12_GetRaytracingCaps
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x85a6c2a0),
        DAT_1553e40b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40b8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x85a6c2a0,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x85a6c2a0,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_EnableRaytracingValidation @ 140e74e20

_NvAPI_Status NvAPI_D3D12_EnableRaytracingValidation(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1de5991b),
        DAT_1553e40c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1de5991b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1de5991b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_RegisterRaytracingValidationMessageCallback @ 140e74ef0

_NvAPI_Status
NvAPI_D3D12_RegisterRaytracingValidationMessageCallback
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8554eb38),
        DAT_1553e40c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40c8;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8554eb38,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8554eb38,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_UnregisterRaytracingValidationMessageCallback @ 140e74fe0

_NvAPI_Status
NvAPI_D3D12_UnregisterRaytracingValidationMessageCallback(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x26975da6),
        DAT_1553e40d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x26975da6,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x26975da6,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_FlushRaytracingValidationMessages @ 140e750b0

_NvAPI_Status NvAPI_D3D12_FlushRaytracingValidationMessages(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb8fb1fcb),
        DAT_1553e40d8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e40d8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xb8fb1fcb,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xb8fb1fcb,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetRaytracingDisplacementMicromapArrayPrebuildInfo @ 140e75180

_NvAPI_Status
NvAPI_D3D12_GetRaytracingDisplacementMicromapArrayPrebuildInfo
          (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfa99b6de),
        DAT_1553e40e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40e0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xfa99b6de,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xfa99b6de,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetRaytracingOpacityMicromapArrayPrebuildInfo @ 140e75250

_NvAPI_Status
NvAPI_D3D12_GetRaytracingOpacityMicromapArrayPrebuildInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4726d180),
        DAT_1553e40e8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40e8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4726d180,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4726d180,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_SetCreatePipelineStateOptions @ 140e75320

_NvAPI_Status NvAPI_D3D12_SetCreatePipelineStateOptions(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5c607a27),
        DAT_1553e40f0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40f0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5c607a27,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5c607a27,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CheckDriverMatchingIdentifierEx @ 140e753f0

_NvAPI_Status NvAPI_D3D12_CheckDriverMatchingIdentifierEx(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e40f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e40f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xafb237d4),
        DAT_1553e40f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e40f8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xafb237d4,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xafb237d4,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetRaytracingAccelerationStructurePrebuildInfoEx @ 140e754c0

_NvAPI_Status
NvAPI_D3D12_GetRaytracingAccelerationStructurePrebuildInfoEx(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4100 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4100 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8d025b77),
        DAT_1553e4100 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4100;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8d025b77,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8d025b77,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_BuildRaytracingOpacityMicromapArray @ 140e75590

_NvAPI_Status NvAPI_D3D12_BuildRaytracingOpacityMicromapArray(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4108 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4108 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x814f8d11),
        DAT_1553e4108 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4108;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x814f8d11,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x814f8d11,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_RelocateRaytracingOpacityMicromapArray @ 140e75660

_NvAPI_Status
NvAPI_D3D12_RelocateRaytracingOpacityMicromapArray(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4110 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4110 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x425c538),
        DAT_1553e4110 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4110;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x425c538,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x425c538,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_BuildRaytracingDisplacementMicromapArray @ 140e75730

_NvAPI_Status
NvAPI_D3D12_BuildRaytracingDisplacementMicromapArray(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4118 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4118 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x66f569d),
        DAT_1553e4118 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4118;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x66f569d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x66f569d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_RelocateRaytracingDisplacementMicromapArray @ 140e75800

_NvAPI_Status
NvAPI_D3D12_RelocateRaytracingDisplacementMicromapArray(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4120 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4120 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1c142308),
        DAT_1553e4120 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4120;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1c142308,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1c142308,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_EmitRaytracingDisplacementMicromapArrayPostbuildInfo @ 140e758d0

_NvAPI_Status
NvAPI_D3D12_EmitRaytracingDisplacementMicromapArrayPostbuildInfo
          (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4128 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4128 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x68b9a790),
        DAT_1553e4128 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4128;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x68b9a790,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x68b9a790,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_EmitRaytracingOpacityMicromapArrayPostbuildInfo @ 140e759a0

_NvAPI_Status
NvAPI_D3D12_EmitRaytracingOpacityMicromapArrayPostbuildInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4130 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4130 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1d9a39b6),
        DAT_1553e4130 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4130;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1d9a39b6,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1d9a39b6,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_BuildRaytracingAccelerationStructureEx @ 140e75a70

_NvAPI_Status
NvAPI_D3D12_BuildRaytracingAccelerationStructureEx(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4138 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4138 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe24ead45),
        DAT_1553e4138 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4138;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe24ead45,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe24ead45,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_QueryWorkstationFeatureProperties @ 140e75b40

_NvAPI_Status NvAPI_D3D12_QueryWorkstationFeatureProperties(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4140 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4140 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa92ea23a),
        DAT_1553e4140 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4140;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa92ea23a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa92ea23a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_CreateCommittedRDMABuffer @ 140e75c10

_NvAPI_Status
NvAPI_D3D12_CreateCommittedRDMABuffer
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4148 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4148 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe78dcb44),
        DAT_1553e4148 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4148;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe78dcb44,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe78dcb44,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_ConvertCooperativeVectorMatrix @ 140e75d30

_NvAPI_Status
NvAPI_D3D12_ConvertCooperativeVectorMatrix(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4150 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4150 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf252cb3),
        DAT_1553e4150 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4150;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf252cb3,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf252cb3,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_ConvertCooperativeVectorMatrixMultiple @ 140e75e10

_NvAPI_Status
NvAPI_D3D12_ConvertCooperativeVectorMatrixMultiple
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4158 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4158 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x96ba5235),
        DAT_1553e4158 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4158;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x96ba5235,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x96ba5235,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetPhysicalDeviceCooperativeVectorProperties @ 140e75f00

_NvAPI_Status
NvAPI_D3D12_GetPhysicalDeviceCooperativeVectorProperties
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4160 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4160 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8f182aec),
        DAT_1553e4160 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4160;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8f182aec,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8f182aec,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetRaytracingMultiIndirectClusterOperationRequirementsInfo @ 140e75fe0

_NvAPI_Status
NvAPI_D3D12_GetRaytracingMultiIndirectClusterOperationRequirementsInfo
          (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4168 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4168 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5c9163f4),
        DAT_1553e4168 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4168;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5c9163f4,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5c9163f4,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_RaytracingExecuteMultiIndirectClusterOperation @ 140e760b0

_NvAPI_Status
NvAPI_D3D12_RaytracingExecuteMultiIndirectClusterOperation(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4170 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4170 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x67c798af),
        DAT_1553e4170 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4170;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x67c798af,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x67c798af,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_GetRaytracingPartitionedTlasIndirectPrebuildInfo @ 140e76180

_NvAPI_Status
NvAPI_D3D12_GetRaytracingPartitionedTlasIndirectPrebuildInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4178 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4178 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcdfdc5f2),
        DAT_1553e4178 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4178;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcdfdc5f2,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcdfdc5f2,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D12_BuildRaytracingPartitionedTlasIndirect @ 140e76250

_NvAPI_Status
NvAPI_D3D12_BuildRaytracingPartitionedTlasIndirect(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4180 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4180 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7cfc6fc3),
        DAT_1553e4180 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4180;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7cfc6fc3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7cfc6fc3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_NGX_GetNGXOverrideState @ 140e76320

_NvAPI_Status NvAPI_NGX_GetNGXOverrideState(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4188 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4188 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3fd96fba),
        DAT_1553e4188 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4188;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x3fd96fba,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x3fd96fba,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_NGX_SetNGXOverrideState @ 140e763f0

_NvAPI_Status NvAPI_NGX_SetNGXOverrideState(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4190 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4190 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb60fcb4e),
        DAT_1553e4190 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4190;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xb60fcb4e,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xb60fcb4e,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DirectD3D12GraphicsCommandList_Create @ 140e764c0

_NvAPI_Status NvAPI_DirectD3D12GraphicsCommandList_Create(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4198 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4198 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x74a4e712),
        DAT_1553e4198 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4198;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x74a4e712,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x74a4e712,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DirectD3D12GraphicsCommandList_Release @ 140e76590

_NvAPI_Status NvAPI_DirectD3D12GraphicsCommandList_Release(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x99da3dde),
        DAT_1553e41a0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e41a0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x99da3dde,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x99da3dde,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DirectD3D12GraphicsCommandList_Reset @ 140e76660

_NvAPI_Status NvAPI_DirectD3D12GraphicsCommandList_Reset(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x999c26d8),
        DAT_1553e41a8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e41a8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x999c26d8,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x999c26d8,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_GetCapabilities @ 140e76730

_NvAPI_Status NvAPI_VIO_GetCapabilities(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1dc91303),
        DAT_1553e41b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41b0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1dc91303,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1dc91303,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_Open @ 140e76800

_NvAPI_Status NvAPI_VIO_Open(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x44ee4841),
        DAT_1553e41b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41b8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x44ee4841,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x44ee4841,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_Close @ 140e768e0

_NvAPI_Status NvAPI_VIO_Close(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd01bd237),
        DAT_1553e41c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd01bd237,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd01bd237,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_Status @ 140e769b0

_NvAPI_Status NvAPI_VIO_Status(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe6ce4f1),
        DAT_1553e41c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41c8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe6ce4f1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe6ce4f1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_SyncFormatDetect @ 140e76a80

_NvAPI_Status NvAPI_VIO_SyncFormatDetect(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x118d48a3),
        DAT_1553e41d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x118d48a3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x118d48a3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_GetConfig @ 140e76b50

_NvAPI_Status NvAPI_VIO_GetConfig(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd34a789b),
        DAT_1553e41d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41d8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd34a789b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd34a789b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_SetConfig @ 140e76c20

_NvAPI_Status NvAPI_VIO_SetConfig(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe4eec07),
        DAT_1553e41e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41e0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe4eec07,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe4eec07,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_SetCSC @ 140e76cf0

_NvAPI_Status NvAPI_VIO_SetCSC(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa1ec8d74),
        DAT_1553e41e8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41e8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa1ec8d74,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa1ec8d74,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_GetCSC @ 140e76dc0

_NvAPI_Status NvAPI_VIO_GetCSC(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7b0d72a3),
        DAT_1553e41f0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41f0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7b0d72a3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7b0d72a3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_SetGamma @ 140e76e90

_NvAPI_Status NvAPI_VIO_SetGamma(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e41f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e41f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x964bf452),
        DAT_1553e41f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e41f8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x964bf452,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x964bf452,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_GetGamma @ 140e76f60

_NvAPI_Status NvAPI_VIO_GetGamma(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4200 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4200 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x51d53d06),
        DAT_1553e4200 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4200;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x51d53d06,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x51d53d06,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_SetSyncDelay @ 140e77030

_NvAPI_Status NvAPI_VIO_SetSyncDelay(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4208 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4208 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2697a8d1),
        DAT_1553e4208 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4208;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2697a8d1,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2697a8d1,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_GetSyncDelay @ 140e77100

_NvAPI_Status NvAPI_VIO_GetSyncDelay(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4210 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4210 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x462214a9),
        DAT_1553e4210 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4210;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x462214a9,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x462214a9,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_GetPCIInfo @ 140e771d0

_NvAPI_Status NvAPI_VIO_GetPCIInfo(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4218 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4218 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xb981d935),
        DAT_1553e4218 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4218;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xb981d935,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xb981d935,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_IsRunning @ 140e772a0

_NvAPI_Status NvAPI_VIO_IsRunning(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4220 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4220 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x96bd040e),
        DAT_1553e4220 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4220;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x96bd040e,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x96bd040e,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_Start @ 140e77370

_NvAPI_Status NvAPI_VIO_Start(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4228 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4228 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcde8e1a3),
        DAT_1553e4228 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4228;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xcde8e1a3,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xcde8e1a3,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_Stop @ 140e77440

_NvAPI_Status NvAPI_VIO_Stop(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4230 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4230 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6ba2a5d6),
        DAT_1553e4230 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4230;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x6ba2a5d6,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x6ba2a5d6,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_IsFrameLockModeCompatible @ 140e77510

_NvAPI_Status
NvAPI_VIO_IsFrameLockModeCompatible
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4238 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4238 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7bf0a94d),
        DAT_1553e4238 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4238;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7bf0a94d,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7bf0a94d,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_EnumDevices @ 140e77600

_NvAPI_Status NvAPI_VIO_EnumDevices(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4240 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4240 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfd7c5557),
        DAT_1553e4240 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4240;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xfd7c5557,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xfd7c5557,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_QueryTopology @ 140e776d0

_NvAPI_Status NvAPI_VIO_QueryTopology(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4248 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4248 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x869534e2),
        DAT_1553e4248 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4248;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x869534e2,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x869534e2,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_EnumSignalFormats @ 140e777a0

_NvAPI_Status NvAPI_VIO_EnumSignalFormats(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4250 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4250 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xead72fe4),
        DAT_1553e4250 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4250;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xead72fe4,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xead72fe4,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_VIO_EnumDataFormats @ 140e77880

_NvAPI_Status NvAPI_VIO_EnumDataFormats(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4258 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4258 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x221fa8e8),
        DAT_1553e4258 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4258;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x221fa8e8,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x221fa8e8,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_CreateConfigurationProfileRegistryKey @ 140e77960

_NvAPI_Status NvAPI_Stereo_CreateConfigurationProfileRegistryKey(undefined4 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4260 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4260 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbe7692ec),
        DAT_1553e4260 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4260;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xbe7692ec,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xbe7692ec,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_DeleteConfigurationProfileRegistryKey @ 140e77a30

_NvAPI_Status NvAPI_Stereo_DeleteConfigurationProfileRegistryKey(undefined4 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4268 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4268 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf117b834),
        DAT_1553e4268 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4268;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xf117b834,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xf117b834,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetConfigurationProfileValue @ 140e77b00

_NvAPI_Status
NvAPI_Stereo_SetConfigurationProfileValue(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4270 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4270 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x24409f48),
        DAT_1553e4270 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4270;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x24409f48,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x24409f48,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_DeleteConfigurationProfileValue @ 140e77be0

_NvAPI_Status NvAPI_Stereo_DeleteConfigurationProfileValue(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4278 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4278 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x49bceecf),
        DAT_1553e4278 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4278;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x49bceecf,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x49bceecf,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_Enable @ 140e77cb0

_NvAPI_Status NvAPI_Stereo_Enable(void)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res8 [4];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4280 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4280 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x239c4545),
        DAT_1553e4280 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4280;
    local_res8[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x239c4545,local_res8);
    }
    _Var2 = (*pcVar1)();
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x239c4545,local_res8[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_Disable @ 140e77d80

_NvAPI_Status NvAPI_Stereo_Disable(void)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res8 [4];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4288 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4288 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2ec50c2b),
        DAT_1553e4288 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4288;
    local_res8[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x2ec50c2b,local_res8);
    }
    _Var2 = (*pcVar1)();
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x2ec50c2b,local_res8[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_IsEnabled @ 140e77e50

_NvAPI_Status NvAPI_Stereo_IsEnabled(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4290 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4290 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x348ff8e1),
        DAT_1553e4290 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4290;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x348ff8e1,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x348ff8e1,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_GetStereoSupport @ 140e77f20

_NvAPI_Status NvAPI_Stereo_GetStereoSupport(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4298 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4298 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x296c434d),
        DAT_1553e4298 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4298;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x296c434d,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x296c434d,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_CreateHandleFromIUnknown @ 140e77ff0

_NvAPI_Status NvAPI_Stereo_CreateHandleFromIUnknown(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xac7e37f4),
        DAT_1553e42a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e42a0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xac7e37f4,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xac7e37f4,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_DestroyHandle @ 140e780c0

_NvAPI_Status NvAPI_Stereo_DestroyHandle(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3a153134),
        DAT_1553e42a8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e42a8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x3a153134,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x3a153134,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_Activate @ 140e78190

_NvAPI_Status NvAPI_Stereo_Activate(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf6a1ad68),
        DAT_1553e42b0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e42b0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xf6a1ad68,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xf6a1ad68,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_Deactivate @ 140e78260

_NvAPI_Status NvAPI_Stereo_Deactivate(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2d68de96),
        DAT_1553e42b8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e42b8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x2d68de96,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x2d68de96,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_IsActivated @ 140e78330

_NvAPI_Status NvAPI_Stereo_IsActivated(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1fb0bc30),
        DAT_1553e42c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e42c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1fb0bc30,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1fb0bc30,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_GetSeparation @ 140e78400

_NvAPI_Status NvAPI_Stereo_GetSeparation(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x451f2134),
        DAT_1553e42c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e42c8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x451f2134,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x451f2134,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetSeparation @ 140e784d0

_NvAPI_Status NvAPI_Stereo_SetSeparation(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5c069fa3),
        DAT_1553e42d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e42d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5c069fa3,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5c069fa3,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_DecreaseSeparation @ 140e785a0

_NvAPI_Status NvAPI_Stereo_DecreaseSeparation(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xda044458),
        DAT_1553e42d8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e42d8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xda044458,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xda044458,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_IncreaseSeparation @ 140e78670

_NvAPI_Status NvAPI_Stereo_IncreaseSeparation(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc9a8ecec),
        DAT_1553e42e0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e42e0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xc9a8ecec,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xc9a8ecec,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_GetConvergence @ 140e78740

_NvAPI_Status NvAPI_Stereo_GetConvergence(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4ab00934),
        DAT_1553e42e8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e42e8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4ab00934,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4ab00934,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetConvergence @ 140e78810

_NvAPI_Status NvAPI_Stereo_SetConvergence(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3dd6b54b),
        DAT_1553e42f0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e42f0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3dd6b54b,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3dd6b54b,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_DecreaseConvergence @ 140e788e0

_NvAPI_Status NvAPI_Stereo_DecreaseConvergence(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e42f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e42f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4c87e317),
        DAT_1553e42f8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e42f8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x4c87e317,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x4c87e317,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_IncreaseConvergence @ 140e789b0

_NvAPI_Status NvAPI_Stereo_IncreaseConvergence(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4300 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4300 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa17daabe),
        DAT_1553e4300 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4300;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xa17daabe,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xa17daabe,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_GetFrustumAdjustMode @ 140e78a80

_NvAPI_Status NvAPI_Stereo_GetFrustumAdjustMode(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4308 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4308 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe6839b43),
        DAT_1553e4308 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4308;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe6839b43,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe6839b43,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetFrustumAdjustMode @ 140e78b50

_NvAPI_Status NvAPI_Stereo_SetFrustumAdjustMode(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4310 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4310 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7be27fa2),
        DAT_1553e4310 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4310;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7be27fa2,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7be27fa2,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_CaptureJpegImage @ 140e78c20

_NvAPI_Status NvAPI_Stereo_CaptureJpegImage(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4318 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4318 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x932cb140),
        DAT_1553e4318 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4318;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x932cb140,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x932cb140,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_InitActivation @ 140e78cf0

_NvAPI_Status NvAPI_Stereo_InitActivation(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4320 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4320 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc7177702),
        DAT_1553e4320 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4320;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc7177702,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc7177702,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_Trigger_Activation @ 140e78dc0

_NvAPI_Status NvAPI_Stereo_Trigger_Activation(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4328 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4328 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd6c6cd2),
        DAT_1553e4328 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4328;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xd6c6cd2,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xd6c6cd2,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_CapturePngImage @ 140e78e90

_NvAPI_Status NvAPI_Stereo_CapturePngImage(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4330 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4330 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8b7e99b5),
        DAT_1553e4330 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4330;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x8b7e99b5,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x8b7e99b5,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_ReverseStereoBlitControl @ 140e78f60

_NvAPI_Status NvAPI_Stereo_ReverseStereoBlitControl(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4338 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4338 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3cd58f89),
        DAT_1553e4338 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4338;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3cd58f89,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3cd58f89,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetNotificationMessage @ 140e79030

_NvAPI_Status
NvAPI_Stereo_SetNotificationMessage(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4340 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4340 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x6b9b409e),
        DAT_1553e4340 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4340;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x6b9b409e,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x6b9b409e,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetActiveEye @ 140e79110

_NvAPI_Status NvAPI_Stereo_SetActiveEye(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4348 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4348 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x96eea9f8),
        DAT_1553e4348 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4348;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x96eea9f8,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x96eea9f8,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetDriverMode @ 140e791e0

_NvAPI_Status NvAPI_Stereo_SetDriverMode(undefined4 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4350 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4350 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5e8f0bec),
        DAT_1553e4350 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4350;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x5e8f0bec,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x5e8f0bec,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_GetEyeSeparation @ 140e792b0

_NvAPI_Status NvAPI_Stereo_GetEyeSeparation(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4358 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4358 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xce653127),
        DAT_1553e4358 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4358;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xce653127,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xce653127,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_IsWindowedModeSupported @ 140e79380

_NvAPI_Status NvAPI_Stereo_IsWindowedModeSupported(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4360 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4360 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x40c8ed5e),
        DAT_1553e4360 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4360;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x40c8ed5e,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x40c8ed5e,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetSurfaceCreationMode @ 140e79450

_NvAPI_Status NvAPI_Stereo_SetSurfaceCreationMode(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4368 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4368 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf5dcfcba),
        DAT_1553e4368 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4368;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf5dcfcba,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf5dcfcba,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_GetSurfaceCreationMode @ 140e79520

_NvAPI_Status NvAPI_Stereo_GetSurfaceCreationMode(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4370 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4370 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x36f1c736),
        DAT_1553e4370 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4370;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x36f1c736,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x36f1c736,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_Debug_WasLastDrawStereoized @ 140e795f0

_NvAPI_Status NvAPI_Stereo_Debug_WasLastDrawStereoized(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4378 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4378 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xed4416c5),
        DAT_1553e4378 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4378;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xed4416c5,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xed4416c5,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_SetDefaultProfile @ 140e796c0

_NvAPI_Status NvAPI_Stereo_SetDefaultProfile(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4380 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4380 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x44f0ecd1),
        DAT_1553e4380 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4380;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x44f0ecd1,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x44f0ecd1,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Stereo_GetDefaultProfile @ 140e79790

_NvAPI_Status
NvAPI_Stereo_GetDefaultProfile(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4388 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4388 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x624e21c2),
        DAT_1553e4388 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4388;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x624e21c2,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x624e21c2,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D1x_CreateSwapChain @ 140e79870

_NvAPI_Status
NvAPI_D3D1x_CreateSwapChain
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4390 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4390 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1bc21b66),
        DAT_1553e4390 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4390;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1bc21b66,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1bc21b66,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_D3D9_CreateSwapChain @ 140e79960

_NvAPI_Status
NvAPI_D3D9_CreateSwapChain
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4398 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4398 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1a131e09),
        DAT_1553e4398 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4398;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1a131e09,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1a131e09,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_InitLowLatencyDevice @ 140e79a50

_NvAPI_Status NvAPI_Vulkan_InitLowLatencyDevice(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5c1696b6),
        DAT_1553e43a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e43a0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5c1696b6,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5c1696b6,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_DestroyLowLatencyDevice @ 140e79b20

_NvAPI_Status NvAPI_Vulkan_DestroyLowLatencyDevice(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x11a5932b),
        DAT_1553e43a8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e43a8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x11a5932b,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x11a5932b,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_GetSleepStatus @ 140e79bf0

_NvAPI_Status NvAPI_Vulkan_GetSleepStatus(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xadf966af),
        DAT_1553e43b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e43b0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xadf966af,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xadf966af,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_SetSleepMode @ 140e79cc0

_NvAPI_Status NvAPI_Vulkan_SetSleepMode(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2acfd162),
        DAT_1553e43b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e43b8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2acfd162,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2acfd162,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_Sleep @ 140e79d90

_NvAPI_Status NvAPI_Vulkan_Sleep(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x36732b1e),
        DAT_1553e43c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e43c0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x36732b1e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x36732b1e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_GetLatency @ 140e79e60

_NvAPI_Status NvAPI_Vulkan_GetLatency(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x3233d44a),
        DAT_1553e43c8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e43c8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x3233d44a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x3233d44a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_SetLatencyMarker @ 140e79f30

_NvAPI_Status NvAPI_Vulkan_SetLatencyMarker(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xa17d13d6),
        DAT_1553e43d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e43d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xa17d13d6,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xa17d13d6,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_Vulkan_NotifyOutOfBandVkQueue @ 140e7a000

_NvAPI_Status
NvAPI_Vulkan_NotifyOutOfBandVkQueue(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5d6d3840),
        DAT_1553e43d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e43d8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x5d6d3840,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x5d6d3840,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_CreateSession @ 140e7a0e0

_NvAPI_Status NvAPI_DRS_CreateSession(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x694d52e),
        DAT_1553e43e0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e43e0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x694d52e,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x694d52e,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_DestroySession @ 140e7a1b0

_NvAPI_Status NvAPI_DRS_DestroySession(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xdad9cff8),
        DAT_1553e43e8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e43e8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xdad9cff8,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xdad9cff8,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_LoadSettings @ 140e7a280

_NvAPI_Status NvAPI_DRS_LoadSettings(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x375dbd6b),
        DAT_1553e43f0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e43f0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x375dbd6b,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x375dbd6b,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_SaveSettings @ 140e7a350

_NvAPI_Status NvAPI_DRS_SaveSettings(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e43f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e43f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfcbc7e14),
        DAT_1553e43f8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e43f8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xfcbc7e14,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xfcbc7e14,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_LoadSettingsFromFile @ 140e7a420

_NvAPI_Status NvAPI_DRS_LoadSettingsFromFile(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4400 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4400 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd3ede889),
        DAT_1553e4400 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4400;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd3ede889,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd3ede889,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_SaveSettingsToFile @ 140e7a4f0

_NvAPI_Status NvAPI_DRS_SaveSettingsToFile(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4408 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4408 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2be25df8),
        DAT_1553e4408 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4408;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2be25df8,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2be25df8,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_CreateProfile @ 140e7a5c0

_NvAPI_Status NvAPI_DRS_CreateProfile(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4410 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4410 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcc176068),
        DAT_1553e4410 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4410;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcc176068,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcc176068,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_DeleteProfile @ 140e7a6a0

_NvAPI_Status NvAPI_DRS_DeleteProfile(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4418 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4418 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x17093206),
        DAT_1553e4418 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4418;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x17093206,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x17093206,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_SetCurrentGlobalProfile @ 140e7a770

_NvAPI_Status NvAPI_DRS_SetCurrentGlobalProfile(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4420 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4420 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1c89c5df),
        DAT_1553e4420 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4420;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1c89c5df,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1c89c5df,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetCurrentGlobalProfile @ 140e7a840

_NvAPI_Status NvAPI_DRS_GetCurrentGlobalProfile(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4428 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4428 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x617bff9f),
        DAT_1553e4428 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4428;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x617bff9f,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x617bff9f,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetProfileInfo @ 140e7a910

_NvAPI_Status NvAPI_DRS_GetProfileInfo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4430 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4430 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x61cd6fd6),
        DAT_1553e4430 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4430;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x61cd6fd6,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x61cd6fd6,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_SetProfileInfo @ 140e7a9f0

_NvAPI_Status NvAPI_DRS_SetProfileInfo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4438 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4438 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x16abd3a9),
        DAT_1553e4438 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4438;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x16abd3a9,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x16abd3a9,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_FindProfileByName @ 140e7aad0

_NvAPI_Status NvAPI_DRS_FindProfileByName(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4440 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4440 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7e4a9a0b),
        DAT_1553e4440 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4440;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7e4a9a0b,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7e4a9a0b,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_EnumProfiles @ 140e7abb0

_NvAPI_Status NvAPI_DRS_EnumProfiles(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4448 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4448 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xbc371ee0),
        DAT_1553e4448 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4448;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xbc371ee0,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xbc371ee0,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetNumProfiles @ 140e7ac90

_NvAPI_Status NvAPI_DRS_GetNumProfiles(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4450 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4450 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x1dae4fbc),
        DAT_1553e4450 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4450;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x1dae4fbc,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x1dae4fbc,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_CreateApplication @ 140e7ad60

_NvAPI_Status NvAPI_DRS_CreateApplication(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4458 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4458 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x4347a9de),
        DAT_1553e4458 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4458;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x4347a9de,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x4347a9de,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_DeleteApplicationEx @ 140e7ae40

_NvAPI_Status
NvAPI_DRS_DeleteApplicationEx(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4460 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4460 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xc5ea85a1),
        DAT_1553e4460 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4460;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xc5ea85a1,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xc5ea85a1,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_DeleteApplication @ 140e7af20

_NvAPI_Status NvAPI_DRS_DeleteApplication(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4468 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4468 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2c694bc6),
        DAT_1553e4468 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4468;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2c694bc6,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2c694bc6,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetApplicationInfo @ 140e7b000

_NvAPI_Status
NvAPI_DRS_GetApplicationInfo
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4470 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4470 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xed1f8c69),
        DAT_1553e4470 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4470;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xed1f8c69,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xed1f8c69,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_EnumApplications @ 140e7b0f0

_NvAPI_Status
NvAPI_DRS_EnumApplications
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4478 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4478 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x7fa2173a),
        DAT_1553e4478 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4478;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x7fa2173a,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x7fa2173a,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_FindApplicationByName @ 140e7b1f0

_NvAPI_Status
NvAPI_DRS_FindApplicationByName
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4480 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4480 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xeee566b2),
        DAT_1553e4480 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4480;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xeee566b2,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xeee566b2,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_SetSetting @ 140e7b2e0

_NvAPI_Status NvAPI_DRS_SetSetting(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4488 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4488 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x577dd202),
        DAT_1553e4488 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4488;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x577dd202,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x577dd202,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetSetting @ 140e7b3c0

_NvAPI_Status
NvAPI_DRS_GetSetting(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4490 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4490 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x73bf8338),
        DAT_1553e4490 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4490;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x73bf8338,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x73bf8338,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_EnumSettings @ 140e7b4b0

_NvAPI_Status
NvAPI_DRS_EnumSettings
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4498 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4498 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xae3039da),
        DAT_1553e4498 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4498;
      local_18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xae3039da,local_18);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xae3039da,local_18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_EnumAvailableSettingIds @ 140e7b5b0

_NvAPI_Status NvAPI_DRS_EnumAvailableSettingIds(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44a0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44a0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xf020614a),
        DAT_1553e44a0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44a0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xf020614a,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xf020614a,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_EnumAvailableSettingValues @ 140e7b680

_NvAPI_Status
NvAPI_DRS_EnumAvailableSettingValues(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44a8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44a8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x2ec39f90),
        DAT_1553e44a8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44a8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x2ec39f90,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x2ec39f90,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetSettingIdFromName @ 140e7b760

_NvAPI_Status NvAPI_DRS_GetSettingIdFromName(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44b0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44b0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcb7309cd),
        DAT_1553e44b0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44b0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xcb7309cd,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xcb7309cd,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetSettingNameFromId @ 140e7b830

_NvAPI_Status NvAPI_DRS_GetSettingNameFromId(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44b8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44b8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd61cbe6e),
        DAT_1553e44b8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44b8;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xd61cbe6e,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xd61cbe6e,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_DeleteProfileSetting @ 140e7b900

_NvAPI_Status
NvAPI_DRS_DeleteProfileSetting(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44c0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44c0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe4a26362),
        DAT_1553e44c0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44c0;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe4a26362,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe4a26362,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_RestoreAllDefaults @ 140e7b9e0

_NvAPI_Status NvAPI_DRS_RestoreAllDefaults(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44c8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5927b094),
        DAT_1553e44c8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e44c8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x5927b094,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x5927b094,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_RestoreProfileDefault @ 140e7bab0

_NvAPI_Status NvAPI_DRS_RestoreProfileDefault(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44d0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xfa5f6134),
        DAT_1553e44d0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44d0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xfa5f6134,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xfa5f6134,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_RestoreProfileDefaultSetting @ 140e7bb80

_NvAPI_Status
NvAPI_DRS_RestoreProfileDefaultSetting(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44d8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x53f0381e),
        DAT_1553e44d8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44d8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x53f0381e,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x53f0381e,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_DRS_GetBaseProfile @ 140e7bc60

_NvAPI_Status NvAPI_DRS_GetBaseProfile(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44e0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44e0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xda8466a0),
        DAT_1553e44e0 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44e0;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xda8466a0,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xda8466a0,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetChipSetInfo @ 140e7bd30

_NvAPI_Status NvAPI_SYS_GetChipSetInfo(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44e8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44e8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x53dabbca),
        DAT_1553e44e8 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e44e8;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x53dabbca,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x53dabbca,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetLidAndDockInfo @ 140e7be00

_NvAPI_Status NvAPI_SYS_GetLidAndDockInfo(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44f0 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44f0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xcda14d8a),
        DAT_1553e44f0 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e44f0;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xcda14d8a,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xcda14d8a,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetDisplayIdFromGpuAndOutputId @ 140e7bed0

_NvAPI_Status
NvAPI_SYS_GetDisplayIdFromGpuAndOutputId(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e44f8 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e44f8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x8f2bab4),
        DAT_1553e44f8 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e44f8;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x8f2bab4,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x8f2bab4,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetGpuAndOutputIdFromDisplayId @ 140e7bfb0

_NvAPI_Status
NvAPI_SYS_GetGpuAndOutputIdFromDisplayId(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res20;
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4500 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4500 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x112ba1a5),
        DAT_1553e4500 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4500;
      local_res20 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x112ba1a5,&local_res20);
      }
      _Var2 = (*pcVar1)(param_1,param_2,param_3);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x112ba1a5,local_res20,_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetPhysicalGpuFromDisplayId @ 140e7c090

_NvAPI_Status NvAPI_SYS_GetPhysicalGpuFromDisplayId(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4508 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4508 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9ea74659),
        DAT_1553e4508 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4508;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0x9ea74659,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0x9ea74659,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetDisplayDriverInfo @ 140e7c160

_NvAPI_Status NvAPI_SYS_GetDisplayDriverInfo(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4510 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4510 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x721faceb),
        DAT_1553e4510 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4510;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x721faceb,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x721faceb,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_GPU_ClientRegisterForUtilizationSampleUpdates @ 140e7c230

_NvAPI_Status
NvAPI_GPU_ClientRegisterForUtilizationSampleUpdates(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res18 [2];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4528 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4528 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xadeeaf67),
        DAT_1553e4528 == (code *)0x0)))) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
    }
    else {
      pcVar1 = DAT_1553e4528;
      local_res18[0] = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xadeeaf67,local_res18);
      }
      _Var2 = (*pcVar1)(param_1,param_2);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xadeeaf67,local_res18[0],_Var2);
      }
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_RegisterRiseCallback @ 140e7c300

_NvAPI_Status NvAPI_RegisterRiseCallback(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4530 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4530 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x9cfe8f94),
        DAT_1553e4530 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4530;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x9cfe8f94,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x9cfe8f94,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_RequestRise @ 140e7c3d0

_NvAPI_Status NvAPI_RequestRise(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4538 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4538 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x5047de98),
        DAT_1553e4538 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4538;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x5047de98,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x5047de98,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_UninstallRise @ 140e7c4a0

_NvAPI_Status NvAPI_UninstallRise(undefined8 param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 == NVAPI_OK) {
    if ((DAT_1553e4540 == (code *)0x0) &&
       ((g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0 ||
        (DAT_1553e4540 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xab8d09f6),
        DAT_1553e4540 == (code *)0x0)))) {
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      return NVAPI_NO_IMPLEMENTATION;
    }
    pcVar1 = DAT_1553e4540;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xab8d09f6,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xab8d09f6,local_res10[0],_Var2);
    }
  }
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// DispatchGraphics @ 140e7c570

/* public: void __cdecl INvAPI_DirectD3D12GraphicsCommandList::DispatchGraphics(unsigned long)
   __ptr64 */

void __thiscall
INvAPI_DirectD3D12GraphicsCommandList::DispatchGraphics
          (INvAPI_DirectD3D12GraphicsCommandList *this,ulong param_1)

{
  code *pcVar1;
  
  pcVar1 = (*g_nvapi_lpNvAPIDirect_GetMethod)(3);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(this,param_1);
  }
  return;
}

// SetMarker @ 140e7c5b0

/* public: void __cdecl INvAPI_DirectD3D12GraphicsCommandList::SetMarker(void * __ptr64,unsigned
   long) __ptr64 */

void __thiscall
INvAPI_DirectD3D12GraphicsCommandList::SetMarker
          (INvAPI_DirectD3D12GraphicsCommandList *this,void *param_1,ulong param_2)

{
  code *pcVar1;
  
  pcVar1 = (*g_nvapi_lpNvAPIDirect_GetMethod)(4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(this,param_1,param_2);
  }
  return;
}

// GetInstance @ 140e7c600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class CSingletonCriticalSection & __ptr64 __cdecl
   CSingletonCriticalSection::GetInstance(void) */

CSingletonCriticalSection * __cdecl CSingletonCriticalSection::GetInstance(void)

{
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  return &`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
          ::__l2::s_Cs;
}

// CAutoCriticalSection @ 140e7c650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __cdecl CAutoCriticalSection::CAutoCriticalSection(void) __ptr64 */

CAutoCriticalSection * __thiscall
CAutoCriticalSection::CAutoCriticalSection(CAutoCriticalSection *this)

{
  *(undefined ***)this = vftable;
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  return this;
}

// ~CAutoCriticalSection @ 140e7c6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual __cdecl CAutoCriticalSection::~CAutoCriticalSection(void) __ptr64 */

void __thiscall CAutoCriticalSection::~CAutoCriticalSection(CAutoCriticalSection *this)

{
  *(undefined ***)this = vftable;
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
                    /* WARNING: Could not recover jumptable at 0x000140e7c713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  return;
}

// `scalar_deleting_destructor' @ 140e7c720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void * __ptr64 __cdecl CAutoCriticalSection::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
CAutoCriticalSection::_scalar_deleting_destructor_(CAutoCriticalSection *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this);
  }
  return this;
}

// NvAPI_Initialize @ 140e7c7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_NvAPI_Status NvAPI_Initialize(void)

{
  int iVar1;
  int iVar2;
  _NvAPI_Status _Var3;
  
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  iVar2 = (int)g_module_RefCount;
  iVar1 = (int)drvDetails;
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var3 = ValidateModuleHandle(0,0);
  if (_Var3 != NVAPI_OK) goto LAB_140e7c86b;
  if (DAT_1553e34e8 != 1) {
    if (initInterface == (_func__NvAPI_Status *)0x0) {
      _Var3 = NVAPI_ERROR;
      goto LAB_140e7c86b;
    }
    _Var3 = (*initInterface)();
    if (_Var3 != NVAPI_OK) goto LAB_140e7c86b;
    DAT_1553e34e8 = 1;
  }
  g_module_RefCount._0_4_ = iVar2 + 1;
  drvDetails._0_4_ = iVar1 + 1;
LAB_140e7c86b:
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  return _Var3;
}

// NvAPI_Unload @ 140e7c8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * NvAPI_Unload(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  pcVar5 = (code *)0x0;
  g_nvapi_moduleUnloadPending._0_1_ = 1;
  if (((g_nvapi_HModule == (HINSTANCE__ **)0x0) ||
      (g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0)) ||
     ((DAT_1553e34e8 != 1 && (DAT_1553e34e8 != 2)))) {
    g_nvapi_moduleUnloadPending._0_1_ = 0;
    pcVar5 = (code *)0xfffffffc;
  }
  else {
    pcVar3 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd7c61344);
    pcVar4 = (code *)0x0;
    if (pcVar3 == (code *)0x0) {
      pcVar4 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd22bdd7e);
      if (pcVar4 == (code *)0x0) {
        g_nvapi_moduleUnloadPending._0_1_ = 0;
        pcVar5 = (code *)0xfffffffd;
        goto LAB_140e7caf2;
      }
    }
    iVar2 = (int)g_module_RefCount;
    if ((int)drvDetails == 0) {
      pcVar5 = (code *)0xfffffffc;
      g_module_RefCount._0_4_ = iVar2;
    }
    else {
      g_module_RefCount._0_4_ = (int)g_module_RefCount + -1;
      iVar1 = (int)drvDetails + -1;
      if (iVar1 == 0) {
        LOCK();
        UNLOCK();
        if (drvDetails._4_4_ == 0) {
          if (pcVar3 == (code *)0x0) {
            drvDetails._0_4_ = iVar1;
            iVar2 = (*pcVar4)();
            if (iVar2 != 0) {
              drvDetails._0_4_ = (int)drvDetails + 1;
              g_module_RefCount._0_4_ = (int)g_module_RefCount + 1;
              g_nvapi_moduleUnloadPending._0_1_ = 0;
              pcVar5 = (code *)&DAT_ffffffff;
              goto LAB_140e7caf2;
            }
          }
          else {
            drvDetails._0_4_ = iVar1;
            iVar2 = (*pcVar3)(0);
            if (iVar2 != 0) {
              drvDetails._0_4_ = (int)drvDetails + 1;
              g_module_RefCount._0_4_ = (int)g_module_RefCount + 1;
              g_nvapi_moduleUnloadPending._0_1_ = 0;
              pcVar5 = (code *)&DAT_ffffffff;
              goto LAB_140e7caf2;
            }
          }
          DAT_1553e34e8 = 0;
          if ((int)g_module_RefCount == 0) {
            g_nvapi_lpNvAPI_gpuQueryInterface = (_func_void_ptr_ulong *)0x0;
            initInterface = (_func__NvAPI_Status *)0x0;
            initInterfaceEx = (_func__NvAPI_Status__NV_DRIVER_TYPE *)0x0;
            FreeLibrary((HMODULE)g_nvapi_HModule);
            g_nvapi_HModule = (HINSTANCE__ **)0x0;
            g_nvapi_callStart = (_func_void_ulong___uint64_ptr *)0x0;
            g_nvapi_callReturn = (_func_void_ulong___uint64__NvAPI_Status *)0x0;
            g_module_RefCount._0_4_ = 0;
            memset(&nvapi_vtbl,0,0xff0);
            g_nvapi_moduleUnloadPending._0_1_ = 0;
            drvDetails._0_4_ = 0;
            drvDetails._4_4_ = 0;
            DAT_1553e34e8 = 0;
            DAT_1553e34ec = 0;
            DAT_1553e34f0 = 0;
            DAT_1553e34f4 = 0;
          }
          else {
            g_nvapi_moduleUnloadPending._0_1_ = 0;
          }
        }
        else {
          g_nvapi_moduleUnloadPending._0_1_ = 0;
          pcVar5 = (code *)0xffffff2f;
          g_module_RefCount._0_4_ = iVar2;
        }
      }
      else {
        g_nvapi_moduleUnloadPending._0_1_ = 0;
        pcVar5 = (code *)0x0;
        drvDetails._0_4_ = iVar1;
      }
    }
  }
LAB_140e7caf2:
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  return pcVar5;
}

// NvAPI_PCF_Initialize @ 140e7cb50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum _NvAPI_Status __cdecl NvAPI_PCF_Initialize(void) */

_NvAPI_Status __cdecl NvAPI_PCF_Initialize(void)

{
  int iVar1;
  int iVar2;
  _NvAPI_Status _Var3;
  
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  iVar2 = (int)g_module_RefCount;
  iVar1 = DAT_1553e34ec;
  LOCK();
  DAT_1553e34f0 = DAT_1553e34f0 + 1;
  UNLOCK();
  _Var3 = ValidateModuleHandle(0,1);
  if (_Var3 != NVAPI_OK) goto LAB_140e7cc11;
  if (DAT_1553e34f4 != 1) {
    if (initInterfaceEx == (_func__NvAPI_Status__NV_DRIVER_TYPE *)0x0) {
      _Var3 = NVAPI_NO_IMPLEMENTATION;
      goto LAB_140e7cc11;
    }
    _Var3 = (*initInterfaceEx)(1);
    if (_Var3 != NVAPI_OK) goto LAB_140e7cc11;
    DAT_1553e34f4 = 1;
  }
  g_module_RefCount._0_4_ = iVar2 + 1;
  DAT_1553e34ec = iVar1 + 1;
LAB_140e7cc11:
  LOCK();
  DAT_1553e34f0 = DAT_1553e34f0 + -1;
  UNLOCK();
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  return _Var3;
}

// NvAPI_PCF_Unload @ 140e7cc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum _NvAPI_Status __cdecl NvAPI_PCF_Unload(void) */

_NvAPI_Status __cdecl NvAPI_PCF_Unload(void)

{
  int iVar1;
  _NvAPI_Status _Var2;
  int iVar3;
  code *pcVar4;
  _NvAPI_Status _Var5;
  
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  g_nvapi_moduleUnloadPending._0_1_ = 1;
  if (((g_nvapi_HModule == (HINSTANCE__ **)0x0) ||
      (g_nvapi_lpNvAPI_gpuQueryInterface == (_func_void_ptr_ulong *)0x0)) ||
     ((DAT_1553e34f4 != 1 && (DAT_1553e34f4 != 2)))) {
    _Var2 = NVAPI_API_NOT_INITIALIZED;
    iVar3 = DAT_1553e34ec;
  }
  else {
    pcVar4 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd7c61344);
    iVar1 = (int)g_module_RefCount;
    if (pcVar4 == (code *)0x0) {
      _Var2 = NVAPI_NO_IMPLEMENTATION;
      iVar3 = DAT_1553e34ec;
    }
    else {
      if (DAT_1553e34ec == 0) {
        _Var5 = NVAPI_API_NOT_INITIALIZED;
        g_module_RefCount._0_4_ = iVar1;
        goto LAB_140e7ce46;
      }
      g_module_RefCount._0_4_ = (int)g_module_RefCount + -1;
      iVar3 = DAT_1553e34ec + -1;
      _Var5 = NVAPI_OK;
      _Var2 = NVAPI_OK;
      if (iVar3 == 0) {
        LOCK();
        UNLOCK();
        if (DAT_1553e34f0 == 0) {
          DAT_1553e34ec = iVar3;
          iVar3 = (*pcVar4)(1);
          if (iVar3 == 0) {
            DAT_1553e34f4 = 0;
            if ((int)g_module_RefCount == 0) {
              g_nvapi_lpNvAPI_gpuQueryInterface = (_func_void_ptr_ulong *)0x0;
              initInterface = (_func__NvAPI_Status *)0x0;
              initInterfaceEx = (_func__NvAPI_Status__NV_DRIVER_TYPE *)0x0;
              FreeLibrary((HMODULE)g_nvapi_HModule);
              g_nvapi_HModule = (HINSTANCE__ **)0x0;
              g_nvapi_callStart = (_func_void_ulong___uint64_ptr *)0x0;
              g_nvapi_callReturn = (_func_void_ulong___uint64__NvAPI_Status *)0x0;
              g_module_RefCount._0_4_ = 0;
              memset(&nvapi_vtbl,0,0xff0);
              g_nvapi_moduleUnloadPending._0_1_ = 0;
              drvDetails._0_4_ = 0;
              drvDetails._4_4_ = 0;
              DAT_1553e34e8 = 0;
              DAT_1553e34ec = 0;
              DAT_1553e34f0 = 0;
              DAT_1553e34f4 = 0;
            }
            else {
              g_nvapi_moduleUnloadPending._0_1_ = 0;
            }
          }
          else {
            DAT_1553e34ec = DAT_1553e34ec + 1;
            g_module_RefCount._0_4_ = (int)g_module_RefCount + 1;
            g_nvapi_moduleUnloadPending._0_1_ = 0;
            _Var5 = NVAPI_ERROR;
          }
        }
        else {
          g_nvapi_moduleUnloadPending._0_1_ = 0;
          _Var5 = NVAPI_API_IN_USE;
          g_module_RefCount._0_4_ = iVar1;
        }
        goto LAB_140e7ce46;
      }
    }
  }
  DAT_1553e34ec = iVar3;
  _Var5 = _Var2;
  g_nvapi_moduleUnloadPending._0_1_ = 0;
LAB_140e7ce46:
  if ((`public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
       ::__l2::_local_static_guard__2__ & 1) == 0) {
    `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
    ::__l2::_local_static_guard__2__ =
         `public:_static_class_CSingletonCriticalSection&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
         ::__l2::_local_static_guard__2__ | 1;
    _s_Cs = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
    atexit(`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'
           ::__l2::_dynamic_atexit_destructor_for__s_Cs__);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1553e4560);
  return _Var5;
}

// NvAPI_InitializeEx @ 140e7cea0

/* enum _NvAPI_Status __cdecl NvAPI_InitializeEx(enum _NV_DRIVER_TYPE) */

_NvAPI_Status __cdecl NvAPI_InitializeEx(_NV_DRIVER_TYPE param_1)

{
  _NvAPI_Status _Var1;
  
  if (param_1 == 0) {
    _Var1 = NvAPI_Initialize();
    return _Var1;
  }
  if (param_1 != 1) {
    return NVAPI_NO_IMPLEMENTATION;
  }
  _Var1 = NvAPI_PCF_Initialize();
  return _Var1;
}

// NvAPI_UnloadEx @ 140e7cec0

/* enum _NvAPI_Status __cdecl NvAPI_UnloadEx(enum _NV_DRIVER_TYPE) */

_NvAPI_Status __cdecl NvAPI_UnloadEx(_NV_DRIVER_TYPE param_1)

{
  _NvAPI_Status _Var1;
  
  if (param_1 == 0) {
    _Var1 = NvAPI_Unload();
    return _Var1;
  }
  if (param_1 != 1) {
    return NVAPI_NO_IMPLEMENTATION;
  }
  _Var1 = NvAPI_PCF_Unload();
  return _Var1;
}

// nvapi_GetPhysicalGPUsHelper @ 140e7cee0

/* enum _NvAPI_Status __cdecl nvapi_GetPhysicalGPUsHelper(struct _NV_PHYSICAL_GPUS * __ptr64) */

_NvAPI_Status __cdecl nvapi_GetPhysicalGPUsHelper(_NV_PHYSICAL_GPUS *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  _NvAPI_Status _Var3;
  _NV_PHYSICAL_GPUS *p_Var4;
  undefined8 *puVar5;
  _NvAPI_Status _Var6;
  ulonglong uVar7;
  _NvAPI_Status local_res8 [2];
  __uint64 local_res10;
  __uint64 local_res18 [2];
  undefined8 local_218 [64];
  
  if (param_1 == (_NV_PHYSICAL_GPUS *)0x0) {
    return NVAPI_INVALID_POINTER;
  }
  _Var6 = NVAPI_OK;
  *(undefined4 *)(param_1 + 0x808) = 0;
  local_res8[0] = NVAPI_OK;
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var3 = ValidateModuleHandle(0,0);
  if (_Var3 == NVAPI_OK) {
    if (DAT_1553e35c8 != (code *)0x0) {
LAB_140e7cf7b:
      pcVar2 = DAT_1553e35c8;
      local_res10 = 0;
      if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
        (*g_nvapi_callStart)(0xe5ac921f,&local_res10);
      }
      _Var3 = (*pcVar2)(local_218);
      if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
        (*g_nvapi_callReturn)(0xe5ac921f,local_res10,_Var3);
      }
      LOCK();
      UNLOCK();
      goto LAB_140e7cfd5;
    }
    if (g_nvapi_lpNvAPI_gpuQueryInterface != (_func_void_ptr_ulong *)0x0) {
      DAT_1553e35c8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xe5ac921f);
      if (DAT_1553e35c8 != (code *)0x0) goto LAB_140e7cf7b;
    }
    LOCK();
    drvDetails._4_4_ = drvDetails._4_4_ + -1;
    UNLOCK();
  }
  else {
    LOCK();
    UNLOCK();
LAB_140e7cfd5:
    drvDetails._4_4_ = drvDetails._4_4_ + -1;
    if (_Var3 == NVAPI_OK) {
      uVar7 = (ulonglong)local_res8[0];
      *(_NvAPI_Status *)(param_1 + 0x808) = local_res8[0];
      if (local_res8[0] != NVAPI_OK) {
        puVar5 = local_218;
        p_Var4 = param_1 + 0x10;
        do {
          uVar1 = *puVar5;
          *(undefined4 *)p_Var4 = 1;
          *(undefined8 *)(p_Var4 + -8) = uVar1;
          puVar5 = puVar5 + 1;
          uVar7 = uVar7 - 1;
          p_Var4 = p_Var4 + 0x20;
        } while (uVar7 != 0);
      }
    }
  }
  local_res8[0] = NVAPI_OK;
  memset(local_218,0,0x200);
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var3 = ValidateModuleHandle(0,0);
  if (_Var3 == NVAPI_OK) {
    if (DAT_1553e35d0 == (code *)0x0) {
      if (g_nvapi_lpNvAPI_gpuQueryInterface != (_func_void_ptr_ulong *)0x0) {
        DAT_1553e35d0 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd9930b07);
        if (DAT_1553e35d0 != (code *)0x0) goto LAB_140e7d093;
      }
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      goto LAB_140e7d13a;
    }
LAB_140e7d093:
    pcVar2 = DAT_1553e35d0;
    local_res18[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xd9930b07,local_res18);
    }
    _Var3 = (*pcVar2)(local_218,local_res8);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xd9930b07,local_res18[0],_Var3);
    }
    LOCK();
    UNLOCK();
  }
  else {
    LOCK();
    UNLOCK();
  }
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  if ((_Var3 == NVAPI_OK) && (local_res8[0] != NVAPI_OK)) {
    puVar5 = local_218;
    _Var3 = _Var6;
    do {
      uVar1 = *puVar5;
      _Var3 = _Var3 + ~NVAPI_LIBRARY_NOT_FOUND;
      puVar5 = puVar5 + 1;
      *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x808) * 0x20 + 8) = uVar1;
      *(undefined4 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x808) * 0x20 + 0x10) = 4;
      *(int *)(param_1 + 0x808) = *(int *)(param_1 + 0x808) + 1;
    } while (_Var3 < local_res8[0]);
  }
LAB_140e7d13a:
  if (*(int *)(param_1 + 0x808) == 0) {
    _Var6 = NVAPI_NVIDIA_DEVICE_NOT_FOUND;
  }
  return _Var6;
}

// nvapi_GetLogicalGPUsHelper @ 140e7d170

/* enum _NvAPI_Status __cdecl nvapi_GetLogicalGPUsHelper(struct _NV_LOGICAL_GPUS * __ptr64) */

_NvAPI_Status __cdecl nvapi_GetLogicalGPUsHelper(_NV_LOGICAL_GPUS *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  _NvAPI_Status _Var3;
  _NV_LOGICAL_GPUS *p_Var4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  __uint64 local_res10;
  undefined8 local_208 [64];
  
  if (param_1 == (_NV_LOGICAL_GPUS *)0x0) {
    return NVAPI_INVALID_POINTER;
  }
  *(undefined4 *)(param_1 + 0x808) = 0;
  local_res8[0] = 0;
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var3 = ValidateModuleHandle(0,0);
  if (_Var3 == NVAPI_OK) {
    if (DAT_1553e35d8 == (code *)0x0) {
      if (g_nvapi_lpNvAPI_gpuQueryInterface != (_func_void_ptr_ulong *)0x0) {
        DAT_1553e35d8 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0x48b3ea59);
        if (DAT_1553e35d8 != (code *)0x0) goto LAB_140e7d20e;
      }
      LOCK();
      drvDetails._4_4_ = drvDetails._4_4_ + -1;
      UNLOCK();
      _Var3 = NVAPI_NO_IMPLEMENTATION;
      goto LAB_140e7d2ab;
    }
LAB_140e7d20e:
    pcVar2 = DAT_1553e35d8;
    local_res10 = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0x48b3ea59,&local_res10);
    }
    _Var3 = (*pcVar2)(local_208,local_res8);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0x48b3ea59,local_res10,_Var3);
    }
    LOCK();
    UNLOCK();
  }
  else {
    LOCK();
    UNLOCK();
  }
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  if (_Var3 == NVAPI_OK) {
    uVar6 = (ulonglong)local_res8[0];
    *(uint *)(param_1 + 0x808) = local_res8[0];
    if (local_res8[0] != 0) {
      puVar5 = local_208;
      p_Var4 = param_1 + 0x10;
      do {
        uVar1 = *puVar5;
        *(undefined4 *)p_Var4 = 1;
        *(undefined8 *)(p_Var4 + -8) = uVar1;
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 - 1;
        p_Var4 = p_Var4 + 0x20;
      } while (uVar6 != 0);
    }
  }
LAB_140e7d2ab:
  if (*(int *)(param_1 + 0x808) == 0) {
    _Var3 = NVAPI_NVIDIA_DEVICE_NOT_FOUND;
  }
  return _Var3;
}

// NvAPI_SYS_GetPhysicalGPUs @ 140e7d2e0

_NvAPI_Status NvAPI_SYS_GetPhysicalGPUs(_NV_PHYSICAL_GPUS *param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 != NVAPI_OK) {
LAB_140e7d39f:
    LOCK();
    drvDetails._4_4_ = drvDetails._4_4_ + -1;
    UNLOCK();
    return _Var2;
  }
  if ((DAT_1553e4518 != (code *)0x0) ||
     ((g_nvapi_lpNvAPI_gpuQueryInterface != (_func_void_ptr_ulong *)0x0 &&
      (DAT_1553e4518 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xd3b24d2d),
      DAT_1553e4518 != (code *)0x0)))) {
    pcVar1 = DAT_1553e4518;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xd3b24d2d,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xd3b24d2d,local_res10[0],_Var2);
    }
    if (_Var2 != NVAPI_NO_IMPLEMENTATION) goto LAB_140e7d39f;
  }
  _Var2 = nvapi_GetPhysicalGPUsHelper(param_1);
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// NvAPI_SYS_GetLogicalGPUs @ 140e7d3c0

_NvAPI_Status NvAPI_SYS_GetLogicalGPUs(_NV_LOGICAL_GPUS *param_1)

{
  code *pcVar1;
  _NvAPI_Status _Var2;
  __uint64 local_res10 [3];
  
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + 1;
  UNLOCK();
  _Var2 = ValidateModuleHandle(0,0);
  if (_Var2 != NVAPI_OK) {
LAB_140e7d47f:
    LOCK();
    drvDetails._4_4_ = drvDetails._4_4_ + -1;
    UNLOCK();
    return _Var2;
  }
  if ((DAT_1553e4520 != (code *)0x0) ||
     ((g_nvapi_lpNvAPI_gpuQueryInterface != (_func_void_ptr_ulong *)0x0 &&
      (DAT_1553e4520 = (*g_nvapi_lpNvAPI_gpuQueryInterface)(0xccfffc10),
      DAT_1553e4520 != (code *)0x0)))) {
    pcVar1 = DAT_1553e4520;
    local_res10[0] = 0;
    if (g_nvapi_callStart != (_func_void_ulong___uint64_ptr *)0x0) {
      (*g_nvapi_callStart)(0xccfffc10,local_res10);
    }
    _Var2 = (*pcVar1)(param_1);
    if (g_nvapi_callReturn != (_func_void_ulong___uint64__NvAPI_Status *)0x0) {
      (*g_nvapi_callReturn)(0xccfffc10,local_res10[0],_Var2);
    }
    if (_Var2 != NVAPI_NO_IMPLEMENTATION) goto LAB_140e7d47f;
  }
  _Var2 = nvapi_GetLogicalGPUsHelper(param_1);
  LOCK();
  drvDetails._4_4_ = drvDetails._4_4_ + -1;
  UNLOCK();
  return _Var2;
}

// `dynamic_atexit_destructor_for_'s_Cs'' @ 150474370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl `public: static class GetInstance & __ptr64 __cdecl
   CSingletonCriticalSection::GetInstance(void)'::`2'::`dynamic atexit destructor for 's_Cs''(void)
    */

void __cdecl
`public:_static_class_GetInstance&___ptr64___cdecl_CSingletonCriticalSection::GetInstance(void)'::
__l2::_dynamic_atexit_destructor_for__s_Cs__(void)

{
  _s_Cs = CSingletonCriticalSection::vftable;
  return;
}

