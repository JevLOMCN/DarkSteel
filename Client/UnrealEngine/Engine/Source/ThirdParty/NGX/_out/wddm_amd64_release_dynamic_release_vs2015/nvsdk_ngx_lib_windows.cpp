// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 156

// _Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>,1><> @ 14ff33750

_Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*>_>,1>
* __thiscall
std::
_Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>,1>
::
_Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>,1><>
          (void *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// _Destroy_range1<std::allocator<wchar_t_const_*___ptr64>,wchar_t_const_*___ptr64_*___ptr64> @ 14ff33770

void __cdecl
std::_Destroy_range1<std::allocator<wchar_t_const_*___ptr64>,wchar_t_const_*___ptr64_*___ptr64>
          (wchar_t **param_1,wchar_t **param_2,
          _Wrap_alloc<std::allocator<wchar_t_const_*>_> *param_3,integral_constant<bool,1> param_4)

{
  return;
}

// _Destroy_range<std::allocator<wchar_t_const_*___ptr64>,wchar_t_const_*___ptr64_*___ptr64> @ 14ff33780

void __cdecl
std::_Destroy_range<std::allocator<wchar_t_const_*___ptr64>,wchar_t_const_*___ptr64_*___ptr64>
          (wchar_t **param_1,wchar_t **param_2,
          _Wrap_alloc<std::allocator<wchar_t_const_*>_> *param_3)

{
  return;
}

// _Ptr_move_cat<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64> @ 14ff33790

_Really_trivial_ptr_iterator_tag __cdecl
std::_Ptr_move_cat<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64>
          (wchar_t ***param_1,wchar_t ***param_2)

{
  return SUB81(param_1,0);
}

// _Rechecked<wchar_t_const_*___ptr64_*___ptr64,wchar_t_const_*___ptr64_*___ptr64> @ 14ff337a0

wchar_t *** __cdecl
std::_Rechecked<wchar_t_const_*___ptr64_*___ptr64,wchar_t_const_*___ptr64_*___ptr64>
          (wchar_t ***param_1,wchar_t **param_2)

{
  *param_1 = param_2;
  return param_1;
}

// _Umove<wchar_t_const_*___ptr64_*___ptr64> @ 14ff337b0

wchar_t ** __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::
_Umove<wchar_t_const_*___ptr64_*___ptr64>
          (void *this,wchar_t **param_1,wchar_t **param_2,wchar_t **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (wchar_t **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Unchecked<wchar_t_const_*___ptr64_*___ptr64> @ 14ff337f0

wchar_t ** __cdecl std::_Unchecked<wchar_t_const_*___ptr64_*___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// _Unfancy<wchar_t_const_*___ptr64> @ 14ff33800

wchar_t ** __cdecl std::_Unfancy<wchar_t_const_*___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// _Uninitialized_move<wchar_t_const_*___ptr64_*___ptr64,wchar_t_const_*___ptr64_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_> @ 14ff33810

wchar_t ** __cdecl
std::
_Uninitialized_move<wchar_t_const_*___ptr64_*___ptr64,wchar_t_const_*___ptr64_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>
          (wchar_t **param_1,wchar_t **param_2,wchar_t **param_3,
          _Wrap_alloc<std::allocator<wchar_t_const_*>_> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (wchar_t **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Uninitialized_move_al_unchecked1<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_> @ 14ff33850

wchar_t ** __cdecl
std::
_Uninitialized_move_al_unchecked1<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>
          (wchar_t **param_1,wchar_t **param_2,wchar_t **param_3,
          _Wrap_alloc<std::allocator<wchar_t_const_*>_> *param_4,
          _Really_trivial_ptr_iterator_tag param_5,integral_constant<bool,1> param_6)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (wchar_t **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Uninitialized_move_al_unchecked<wchar_t_const_*___ptr64_*___ptr64,wchar_t_const_*___ptr64_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_> @ 14ff33890

wchar_t ** __cdecl
std::
_Uninitialized_move_al_unchecked<wchar_t_const_*___ptr64_*___ptr64,wchar_t_const_*___ptr64_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>
          (wchar_t **param_1,wchar_t **param_2,wchar_t **param_3,
          _Wrap_alloc<std::allocator<wchar_t_const_*>_> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (wchar_t **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// addressof<wchar_t_const_*___ptr64_const> @ 14ff338d0

wchar_t ** __cdecl std::addressof<wchar_t_const_*___ptr64_const>(wchar_t **param_1)

{
  return param_1;
}

// construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_&___ptr64> @ 14ff338e0

void __thiscall
std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>::
construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_&___ptr64>
          (void *this,wchar_t **param_1,wchar_t **param_2)

{
  if (param_1 != (wchar_t **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_&___ptr64> @ 14ff33900

void __thiscall
std::allocator<wchar_t_const_*___ptr64>::
construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_&___ptr64>
          (void *this,wchar_t **param_1,wchar_t **param_2)

{
  if (param_1 != (wchar_t **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_&___ptr64> @ 14ff33920

void __cdecl
std::allocator_traits<std::allocator<wchar_t_const_*___ptr64>_>::
construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_&___ptr64>
          (allocator<wchar_t_const_*> *param_1,wchar_t **param_2,wchar_t **param_3)

{
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = *param_3;
  }
  return;
}

// construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_const_&___ptr64> @ 14ff33940

void __thiscall
std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>::
construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_const_&___ptr64>
          (void *this,wchar_t **param_1,wchar_t **param_2)

{
  if (param_1 != (wchar_t **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_const_&___ptr64> @ 14ff33960

void __thiscall
std::allocator<wchar_t_const_*___ptr64>::
construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_const_&___ptr64>
          (void *this,wchar_t **param_1,wchar_t **param_2)

{
  if (param_1 != (wchar_t **)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_const_&___ptr64> @ 14ff33980

void __cdecl
std::allocator_traits<std::allocator<wchar_t_const_*___ptr64>_>::
construct<wchar_t_const_*___ptr64,wchar_t_const_*___ptr64_const_&___ptr64>
          (allocator<wchar_t_const_*> *param_1,wchar_t **param_2,wchar_t **param_3)

{
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = *param_3;
  }
  return;
}

// forward<wchar_t_const_*___ptr64_&___ptr64> @ 14ff339a0

wchar_t ** __cdecl std::forward<wchar_t_const_*___ptr64_&___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// forward<wchar_t_const_*___ptr64_const_&___ptr64> @ 14ff339b0

wchar_t ** __cdecl std::forward<wchar_t_const_*___ptr64_const_&___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// wcscat_s<260> @ 14ff339c0

int __cdecl wcscat_s<260>(wchar_t (*param_1) [260],wchar_t *param_2)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff339c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = wcscat_s(*param_1,0x104,param_2);
  return eVar1;
}

// _Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_> @ 14ff339e0

_Vector_alloc<std::_Vec_base_types<wchar_t_const_*,std::allocator<wchar_t_const_*>_>_> * __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// _Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_> @ 14ff33a00

_Vector_val<std::_Simple_types<wchar_t_const_*>_> * __thiscall
std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>::
_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>(void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// _Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_> @ 14ff33a20

_Wrap_alloc<std::allocator<wchar_t_const_*>_> * __thiscall
std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>::
_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>(void *this)

{
  return this;
}

// allocator<wchar_t_const_*___ptr64> @ 14ff33a30

allocator<wchar_t_const_*> * __thiscall
std::allocator<wchar_t_const_*___ptr64>::allocator<wchar_t_const_*___ptr64>(void *this)

{
  return this;
}

// vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_> @ 14ff33a40

vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_> * __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::
vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>(void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  return this;
}

// operator[] @ 14ff33a60

wchar_t ** __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::operator[]
          (void *this,ulong64 param_1)

{
  return (wchar_t **)(*(longlong *)this + param_1 * 8);
}

// ComplementModuleName @ 14ff33a70

wchar_t * __cdecl ngx::ComplementModuleName(wchar_t *param_1)

{
  ulong64 uBytes;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar8;
  longlong lVar7;
  
  if (param_1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  lVar3 = -1;
  lVar6 = -1;
  do {
    lVar7 = lVar6;
    lVar6 = lVar7 + 1;
  } while (param_1[lVar6] != L'\0');
  lVar5 = -1;
  do {
    lVar1 = lVar5 + 1;
    lVar5 = lVar5 + 1;
  } while (param_1[lVar1] != L'\0');
  for (pwVar4 = param_1 + lVar5; ((param_1 < pwVar4 && (*pwVar4 != L'\\')) && (*pwVar4 != L'.'));
      pwVar4 = pwVar4 + -1) {
  }
  pwVar8 = param_1 + lVar5;
  if (*pwVar4 == L'.') {
    pwVar8 = pwVar4;
  }
  do {
    lVar3 = lVar3 + 1;
  } while (pwVar8[lVar3] != L'\0');
  if (lVar3 != 0) {
    if (lVar3 != 1) {
      pwVar4 = SafeStringDupe(param_1);
      return pwVar4;
    }
    pwVar4 = SafeStringDupeN(param_1,lVar7);
    return pwVar4;
  }
  uBytes = lVar6 * 2 + 10;
  pwVar4 = LocalAlloc(0x40,uBytes);
  if ((pwVar4 != (wchar_t *)0x0) &&
     ((iVar2 = StringCbCopyW(pwVar4,uBytes,param_1), iVar2 < 0 ||
      (iVar2 = StringCbCatW(pwVar4,uBytes,L".dll"), iVar2 < 0)))) {
    LocalFree(pwVar4);
    pwVar4 = (wchar_t *)0x0;
  }
  return pwVar4;
}

// ContainsAbsolutePath @ 14ff33ba0

int __cdecl ngx::ContainsAbsolutePath(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    return 0;
  }
  wVar1 = *param_1;
  if ((wVar1 != L'\\') && (wVar1 != L'/')) {
    iVar2 = isalpha((uint)(ushort)wVar1);
    if (iVar2 == 0) {
      return 0;
    }
    if (param_1[1] != L':') {
      return 0;
    }
    if ((param_1[2] != L'\\') && (param_1[2] != L'/')) {
      return 0;
    }
  }
  return 1;
}

// ContainsPathSeparator @ 14ff33c00

int __cdecl ngx::ContainsPathSeparator(wchar_t *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != (wchar_t *)0x0) {
    uVar1 = 0;
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (param_1[uVar2] != L'\0');
    if (uVar2 != 0) {
      do {
        if ((param_1[uVar1] == L'\\') || (param_1[uVar1] == L'/')) {
          return 1;
        }
        uVar1 = (ulonglong)((int)uVar1 + 1);
      } while (uVar1 < uVar2);
    }
  }
  return 0;
}

// CreateSHFolderFilePath @ 14ff33c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl ngx::CreateSHFolderFilePath(int param_1,wchar_t *param_2)

{
  _func___cdecl_T_HRESULT_HWND___ptr_int_void_ptr_ulong_wchar_t_ptr *p_Var1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  __uint64 _Var7;
  undefined1 auStackY_268 [32];
  wchar_t local_238;
  short asStack_236 [263];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (param_2 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  memset(&local_238,0,0x20a);
  if ((hModShell32 == (HINSTANCE__ *)0x0) &&
     (hModShell32 = LoadSystemLibraryInternal(L"Shell32.dll",0), hModShell32 != (HINSTANCE__ *)0x0))
  {
    pfnSHGetFolderPath =
         (_func___cdecl_T_HRESULT_HWND___ptr_int_void_ptr_ulong_wchar_t_ptr *)
         GetProcAddress((HMODULE)hModShell32,"SHGetFolderPathW");
  }
  p_Var1 = pfnSHGetFolderPath;
  if (pfnSHGetFolderPath != (_func___cdecl_T_HRESULT_HWND___ptr_int_void_ptr_ulong_wchar_t_ptr *)0x0
     ) {
    (*__guard_check_icall_fptr)();
    iVar3 = (*p_Var1)((HWND__ *)0x0,param_1,(void *)0x0,0,&local_238);
    if (iVar3 != 0) {
      return (wchar_t *)0x0;
    }
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
      lVar2 = -1;
    } while (param_2[lVar6] != L'\0');
    do {
      lVar4 = lVar2;
      lVar2 = lVar4 + 1;
    } while (asStack_236[lVar4] != 0);
    _Var7 = lVar4 + 3 + lVar6;
    pwVar5 = LocalAlloc(0x40,_Var7 * 2);
    if (pwVar5 != (wchar_t *)0x0) {
      StringCchCopyW(pwVar5,_Var7,&local_238);
      StringCchCatW(pwVar5,_Var7,L"\\");
      StringCchCatW(pwVar5,_Var7,param_2);
      return pwVar5;
    }
  }
  return (wchar_t *)0x0;
}

// CreateSystemFilePath @ 14ff33db0

wchar_t * __cdecl ngx::CreateSystemFilePath(wchar_t *param_1)

{
  WCHAR *pWVar1;
  int iVar2;
  UINT UVar3;
  LPWSTR lpBuffer;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  
  pwVar6 = (wchar_t *)0x0;
  lpBuffer = pwVar6;
  if (param_1 != (wchar_t *)0x0) {
    UVar3 = GetSystemDirectoryW((LPWSTR)0x0,0);
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_1[lVar5] != L'\0');
    lpBuffer = LocalAlloc(0x40,(lVar5 + (ulonglong)(UVar3 + 1)) * 2);
    if (lpBuffer != (LPWSTR)0x0) {
      UVar3 = GetSystemDirectoryW(lpBuffer,UVar3);
      if (lpBuffer[UVar3 - 1] != L'\\') {
        lpBuffer[UVar3] = L'\\';
        UVar3 = UVar3 + 1;
      }
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_1[lVar5] != L'\0');
      if (lVar5 != 0) {
        do {
          pWVar1 = param_1 + (longlong)pwVar6;
          iVar2 = (int)pwVar6;
          pwVar6 = (wchar_t *)(ulonglong)(iVar2 + 1);
          lpBuffer[iVar2 + UVar3] = *pWVar1;
          pwVar4 = (wchar_t *)0xffffffffffffffff;
          do {
            pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
          } while (param_1[(longlong)pwVar4] != L'\0');
        } while (pwVar6 < pwVar4);
      }
    }
  }
  return lpBuffer;
}

// CreateUnicodeStringFromAscii @ 14ff33ea0

wchar_t * __cdecl ngx::CreateUnicodeStringFromAscii(char *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_1 != (char *)0x0) {
    lVar4 = -1;
    do {
      lVar1 = lVar4 + 1;
      lVar4 = lVar4 + 1;
    } while (param_1[lVar1] != '\0');
    pwVar2 = LocalAlloc(0x40,lVar4 * 2 + 2);
    if (pwVar2 != (wchar_t *)0x0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_1[lVar4] != '\0');
      if (lVar4 != 0) {
        do {
          uVar6 = (ulonglong)((int)uVar5 + 1);
          pwVar2[uVar5] = (short)param_1[uVar5];
          uVar3 = 0xffffffffffffffff;
          do {
            uVar3 = uVar3 + 1;
          } while (param_1[uVar3] != '\0');
          uVar5 = uVar6;
        } while (uVar6 < uVar3);
      }
      return pwVar2;
    }
  }
  return (wchar_t *)0x0;
}

// DetectModuleInLocation @ 14ff33f50

wchar_t * __cdecl ngx::DetectModuleInLocation(wchar_t *param_1,wchar_t *param_2)

{
  DWORD DVar1;
  wchar_t *lpFileName;
  
  lpFileName = SafePathCombine(param_2,param_1);
  if (lpFileName != (wchar_t *)0x0) {
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
  return (wchar_t *)0x0;
}

// DetectModulePathFromKernelModeService @ 14ff33fc0

wchar_t * __cdecl ngx::DetectModulePathFromKernelModeService(wchar_t *param_1,wchar_t *param_2)

{
  _func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *p_Var1;
  _func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *p_Var2;
  _func___cdecl_int_SC_HANDLE___ptr__QUERY_SERVICE_CONFIGW_ptr_ulong_ulong_ptr *p_Var3;
  _func___cdecl_int_SC_HANDLE___ptr *p_Var4;
  int iVar5;
  SC_HANDLE__ *pSVar6;
  _QUERY_SERVICE_CONFIGW *p_Var7;
  _QUERY_SERVICE_CONFIGW *hMem;
  _QUERY_SERVICE_CONFIGW *p_Var8;
  _QUERY_SERVICE_CONFIGW *p_Var9;
  ulong local_res18 [4];
  
  p_Var7 = (_QUERY_SERVICE_CONFIGW *)0x0;
  p_Var9 = (_QUERY_SERVICE_CONFIGW *)0x0;
  if ((((((hModAdvapi32 != (HINSTANCE__ *)0x0) ||
         (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
         hModAdvapi32 != (HINSTANCE__ *)0x0)) &&
        ((pfnOpenSCManagerW != (_func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *)0x0 ||
         (pfnOpenSCManagerW =
               (_func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *)
               GetProcAddress((HMODULE)hModAdvapi32,"OpenSCManagerW"),
         pfnOpenSCManagerW != (_func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *)0x0))))
       && ((pfnOpenServiceW !=
            (_func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *)0x0 ||
           (pfnOpenServiceW =
                 (_func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *)
                 GetProcAddress((HMODULE)hModAdvapi32,"OpenServiceW"),
           pfnOpenServiceW != (_func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *)0x0
           )))) &&
      ((pfnQueryServiceConfigW !=
        (_func___cdecl_int_SC_HANDLE___ptr__QUERY_SERVICE_CONFIGW_ptr_ulong_ulong_ptr *)0x0 ||
       (pfnQueryServiceConfigW =
             (_func___cdecl_int_SC_HANDLE___ptr__QUERY_SERVICE_CONFIGW_ptr_ulong_ulong_ptr *)
             GetProcAddress((HMODULE)hModAdvapi32,"QueryServiceConfigW"),
       pfnQueryServiceConfigW !=
       (_func___cdecl_int_SC_HANDLE___ptr__QUERY_SERVICE_CONFIGW_ptr_ulong_ulong_ptr *)0x0)))) &&
     ((pfnCloseServiceHandle != (_func___cdecl_int_SC_HANDLE___ptr *)0x0 ||
      (pfnCloseServiceHandle =
            (_func___cdecl_int_SC_HANDLE___ptr *)
            GetProcAddress((HMODULE)hModAdvapi32,"CloseServiceHandle"),
      pfnCloseServiceHandle != (_func___cdecl_int_SC_HANDLE___ptr *)0x0)))) {
    p_Var1 = pfnOpenSCManagerW;
    local_res18[0] = 0;
    (*__guard_check_icall_fptr)(pfnOpenSCManagerW);
    pSVar6 = (*p_Var1)((wchar_t *)0x0,(wchar_t *)0x0,0x80000000);
    p_Var2 = pfnOpenServiceW;
    hMem = p_Var7;
    p_Var8 = p_Var7;
    if (pSVar6 != (SC_HANDLE__ *)0x0) {
      (*__guard_check_icall_fptr)(pfnOpenServiceW);
      p_Var7 = (_QUERY_SERVICE_CONFIGW *)(*p_Var2)(pSVar6,param_2,0x80000000);
      p_Var3 = pfnQueryServiceConfigW;
      hMem = (_QUERY_SERVICE_CONFIGW *)0x0;
      p_Var8 = p_Var9;
      if (p_Var7 != (_QUERY_SERVICE_CONFIGW *)0x0) {
        (*__guard_check_icall_fptr)(pfnQueryServiceConfigW);
        (*p_Var3)((SC_HANDLE__ *)p_Var7,(_QUERY_SERVICE_CONFIGW *)0x0,0,local_res18);
        if ((local_res18[0] != 0) &&
           (hMem = LocalAlloc(0x40,(ulonglong)local_res18[0]), p_Var3 = pfnQueryServiceConfigW,
           hMem != (_QUERY_SERVICE_CONFIGW *)0x0)) {
          (*__guard_check_icall_fptr)(pfnQueryServiceConfigW);
          iVar5 = (*p_Var3)((SC_HANDLE__ *)p_Var7,hMem,local_res18[0],local_res18);
          if ((iVar5 != 0) &&
             ((hMem->dwServiceType == 1 &&
              (iVar5 = IsPathToModule(hMem->lpBinaryPathName,param_1), iVar5 != 0)))) {
            p_Var8 = (_QUERY_SERVICE_CONFIGW *)SafeStringDupe(hMem->lpBinaryPathName);
          }
        }
      }
    }
    LocalFree(hMem);
    p_Var4 = pfnCloseServiceHandle;
    if (p_Var7 != (_QUERY_SERVICE_CONFIGW *)0x0) {
      (*__guard_check_icall_fptr)(pfnCloseServiceHandle);
      (*p_Var4)((SC_HANDLE__ *)p_Var7);
    }
    p_Var4 = pfnCloseServiceHandle;
    if (pSVar6 != (SC_HANDLE__ *)0x0) {
      (*__guard_check_icall_fptr)(pfnCloseServiceHandle);
      (*p_Var4)(pSVar6);
    }
    return (wchar_t *)p_Var8;
  }
  return (wchar_t *)0x0;
}

// DetectModulePathFromKernelModeServices @ 14ff34200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl
ngx::DetectModulePathFromKernelModeServices(wchar_t *param_1,NvidiaDriverType param_2)

{
  wchar_t wVar1;
  ulong uVar2;
  _func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr *p_Var3;
  _func___cdecl_int_void_ptr *p_Var4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *hMem;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_c8 [32];
  ulong local_88 [2];
  void *local_80;
  _SP_DEVINFO_DATA local_78;
  ulong local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pwVar8 = (wchar_t *)0x0;
  local_78.ClassGuid.Data2 = 0;
  local_78.ClassGuid.Data3 = 0;
  local_78.ClassGuid.Data4[0] = '\0';
  local_78.ClassGuid.Data4[1] = '\0';
  local_78.ClassGuid.Data4[2] = '\0';
  local_78.ClassGuid.Data4[3] = '\0';
  local_78.ClassGuid.Data4[4] = '\0';
  local_78.ClassGuid.Data4[5] = '\0';
  local_78.ClassGuid.Data4[6] = '\0';
  local_78.ClassGuid.Data4[7] = '\0';
  local_78.DevInst = 0;
  local_78.Reserved = 0;
  local_80 = (void *)0x0;
  local_78.cbSize = 0x20;
  local_78.ClassGuid.Data1 = 0;
  if ((((hModSetupapi == (HINSTANCE__ *)0x0) &&
       (hModSetupapi = LoadSystemLibraryInternal(L"Setupapi.dll",0),
       hModSetupapi == (HINSTANCE__ *)0x0)) ||
      ((pfnSetupDiGetDeviceRegistryPropertyW ==
        (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr *
        )0x0 && (pfnSetupDiGetDeviceRegistryPropertyW =
                      (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
                       *)GetProcAddress((HMODULE)hModSetupapi,"SetupDiGetDeviceRegistryPropertyW"),
                pfnSetupDiGetDeviceRegistryPropertyW ==
                (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
                 *)0x0)))) ||
     ((pfnSetupDiDestroyDeviceInfoList == (_func___cdecl_int_void_ptr *)0x0 &&
      (pfnSetupDiDestroyDeviceInfoList =
            (_func___cdecl_int_void_ptr *)
            GetProcAddress((HMODULE)hModSetupapi,"SetupDiDestroyDeviceInfoList"),
      pfnSetupDiDestroyDeviceInfoList == (_func___cdecl_int_void_ptr *)0x0)))) {
    pwVar8 = (wchar_t *)0x0;
  }
  else {
    iVar7 = FindNvidiaDevice(param_2,&local_80,&local_78);
    pvVar5 = local_80;
    if (iVar7 != 0) {
      local_58[0] = 4;
      local_58[1] = 0x11;
      local_58[2] = 0x12;
      pwVar11 = pwVar8;
      do {
        p_Var3 = pfnSetupDiGetDeviceRegistryPropertyW;
        iVar7 = 0;
        if (2 < (uint)pwVar11) break;
        local_88[0] = 0;
        local_80 = (void *)((ulonglong)local_80 & 0xffffffff00000000);
        uVar2 = local_58[(longlong)pwVar11];
        (*__guard_check_icall_fptr)(pfnSetupDiGetDeviceRegistryPropertyW);
        (*p_Var3)(pvVar5,&local_78,uVar2,local_88,(uchar *)0x0,0,(ulong *)&local_80);
        if ((ulong)local_80 != 0) {
          if (local_88[0] != 0) {
            if (local_88[0] < 3) {
              iVar7 = 2;
            }
            else if (local_88[0] == 7) {
              iVar7 = 4;
            }
          }
          hMem = LocalAlloc(0x40,(ulonglong)(iVar7 + (ulong)local_80));
          p_Var3 = pfnSetupDiGetDeviceRegistryPropertyW;
          if (hMem != (wchar_t *)0x0) {
            (*__guard_check_icall_fptr)(pfnSetupDiGetDeviceRegistryPropertyW);
            iVar7 = (*p_Var3)(pvVar5,&local_78,uVar2,local_88,(uchar *)hMem,(ulong)local_80,
                              (ulong *)0x0);
            if (iVar7 != 0) {
              if (local_88[0] == 1) {
                pwVar8 = DetectModulePathFromKernelModeService(param_1,hMem);
              }
              else if (local_88[0] == 7) {
                wVar1 = *hMem;
                pwVar10 = hMem;
                while ((wVar1 != L'\0' &&
                       (pwVar8 = DetectModulePathFromKernelModeService(param_1,hMem),
                       pwVar8 == (wchar_t *)0x0))) {
                  lVar6 = -1;
                  do {
                    lVar9 = lVar6;
                    lVar6 = lVar9 + 1;
                  } while (pwVar10[lVar9 + 1] != L'\0');
                  pwVar10 = pwVar10 + lVar9 + 2;
                  wVar1 = *pwVar10;
                }
              }
            }
            LocalFree(hMem);
          }
        }
        pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 + 1);
      } while (pwVar8 == (wchar_t *)0x0);
      p_Var4 = pfnSetupDiDestroyDeviceInfoList;
      (*__guard_check_icall_fptr)(pfnSetupDiDestroyDeviceInfoList);
      (*p_Var4)(pvVar5);
    }
  }
  return pwVar8;
}

// DetectModulePathFromRegistryValueNames @ 14ff344b0

wchar_t * __cdecl
ngx::DetectModulePathFromRegistryValueNames(wchar_t *param_1,HKEY__ *param_2,wchar_t **param_3)

{
  _func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *p_Var1;
  _func___cdecl_long_HKEY___ptr_ulong_wchar_t_ptr_ulong_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr
  *p_Var2;
  _func___cdecl_long_HKEY___ptr *p_Var3;
  long lVar4;
  int iVar5;
  wchar_t *_Dst;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ulong local_res18 [2];
  HKEY__ *local_res20;
  
  pwVar8 = (wchar_t *)0x0;
  local_res20 = (HKEY__ *)0x0;
  if (((((hModAdvapi32 != (HINSTANCE__ *)0x0) ||
        (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
        hModAdvapi32 != (HINSTANCE__ *)0x0)) &&
       ((pfnRegOpenKeyExW !=
         (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0 ||
        (pfnRegOpenKeyExW =
              (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)
              GetProcAddress((HMODULE)hModAdvapi32,"RegOpenKeyExW"),
        pfnRegOpenKeyExW !=
        (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0)))) &&
      ((pfnRegEnumValueW !=
        (_func___cdecl_long_HKEY___ptr_ulong_wchar_t_ptr_ulong_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr
         *)0x0 ||
       (pfnRegEnumValueW =
             (_func___cdecl_long_HKEY___ptr_ulong_wchar_t_ptr_ulong_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr
              *)GetProcAddress((HMODULE)hModAdvapi32,"RegEnumValueW"),
       pfnRegEnumValueW !=
       (_func___cdecl_long_HKEY___ptr_ulong_wchar_t_ptr_ulong_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr
        *)0x0)))) &&
     ((pwVar6 = pwVar8, pfnRegCloseKey != (_func___cdecl_long_HKEY___ptr *)0x0 ||
      (pfnRegCloseKey =
            (_func___cdecl_long_HKEY___ptr *)GetProcAddress((HMODULE)hModAdvapi32,"RegCloseKey"),
      pfnRegCloseKey != (_func___cdecl_long_HKEY___ptr *)0x0)))) {
    do {
      p_Var1 = pfnRegOpenKeyExW;
      pwVar7 = *param_3;
      if (pwVar7 == (wchar_t *)0x0) {
        return pwVar6;
      }
      (*__guard_check_icall_fptr)(pfnRegOpenKeyExW);
      lVar4 = (*p_Var1)(param_2,pwVar7,0,0x20019,&local_res20);
      if (lVar4 == 0) {
        _Dst = LocalAlloc(0x40,0x10000);
        pwVar7 = pwVar8;
        if (_Dst != (wchar_t *)0x0) {
          do {
            local_res18[0] = 0x7fff;
            memset(_Dst,0,0x8000);
            p_Var2 = pfnRegEnumValueW;
            (*__guard_check_icall_fptr)(pfnRegEnumValueW);
            lVar4 = (*p_Var2)(local_res20,(ulong)pwVar7,_Dst,local_res18,(ulong *)0x0,(ulong *)0x0,
                              (uchar *)0x0,(ulong *)0x0);
            if ((lVar4 == 0) && (iVar5 = IsPathToModule(_Dst,param_1), iVar5 != 0)) {
              pwVar6 = SafeStringDupe(_Dst);
            }
          } while ((pwVar6 == (wchar_t *)0x0) &&
                  (pwVar7 = (wchar_t *)(ulonglong)((ulong)pwVar7 + 1), lVar4 != 0x103));
          LocalFree(_Dst);
        }
        p_Var3 = pfnRegCloseKey;
        (*__guard_check_icall_fptr)(pfnRegCloseKey);
        (*p_Var3)(local_res20);
      }
      param_3 = param_3 + 1;
    } while (pwVar6 == (wchar_t *)0x0);
    return pwVar6;
  }
  return (wchar_t *)0x0;
}

// DetectModulePathFromRegistryValues @ 14ff346f0

wchar_t * __cdecl
ngx::DetectModulePathFromRegistryValues
          (wchar_t *param_1,HKEY__ *param_2,wchar_t *param_3,wchar_t **param_4)

{
  wchar_t wVar1;
  _func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *p_Var2;
  _func___cdecl_long_HKEY___ptr *p_Var3;
  wchar_t *hMem;
  long lVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *hMem_00;
  wchar_t *pwVar8;
  ulong local_res20 [2];
  HKEY__ *local_38;
  wchar_t *local_30;
  longlong lVar7;
  
  hMem_00 = (wchar_t *)0x0;
  local_38 = (HKEY__ *)0x0;
  if ((((hModAdvapi32 != (HINSTANCE__ *)0x0) ||
       (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
       hModAdvapi32 != (HINSTANCE__ *)0x0)) &&
      ((pfnRegOpenKeyExW !=
        (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0 ||
       (pfnRegOpenKeyExW =
             (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)
             GetProcAddress((HMODULE)hModAdvapi32,"RegOpenKeyExW"),
       pfnRegOpenKeyExW !=
       (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0)))) &&
     ((pfnRegCloseKey != (_func___cdecl_long_HKEY___ptr *)0x0 ||
      (pfnRegCloseKey =
            (_func___cdecl_long_HKEY___ptr *)GetProcAddress((HMODULE)hModAdvapi32,"RegCloseKey"),
      pfnRegCloseKey != (_func___cdecl_long_HKEY___ptr *)0x0)))) {
    p_Var2 = pfnRegOpenKeyExW;
    (*__guard_check_icall_fptr)(pfnRegOpenKeyExW);
    lVar4 = (*p_Var2)(param_2,param_3,0,1,&local_38);
    if (lVar4 == 0) {
      do {
        if (*param_4 == (wchar_t *)0x0) break;
        local_30 = (wchar_t *)0x0;
        local_res20[0] = 0;
        lVar4 = QueryRegistryValueFromKey(local_38,*param_4,local_res20,(uchar **)&local_30);
        hMem = local_30;
        if (lVar4 == 0) {
          if (local_res20[0] == 1) {
            iVar5 = IsPathToModule(local_30,param_1);
            pwVar8 = hMem;
            if (iVar5 != 0) {
LAB_14ff34888:
              hMem_00 = SafeStringDupe(pwVar8);
            }
          }
          else if (local_res20[0] == 7) {
            wVar1 = *local_30;
            pwVar8 = local_30;
            while ((wVar1 != L'\0' && (iVar5 = IsPathToModule(pwVar8,param_1), iVar5 == 0))) {
              lVar6 = -1;
              do {
                lVar7 = lVar6;
                lVar6 = lVar7 + 1;
              } while (pwVar8[lVar6] != L'\0');
              pwVar8 = pwVar8 + lVar7 + 2;
              wVar1 = *pwVar8;
            }
            if (*pwVar8 != L'\0') goto LAB_14ff34888;
          }
          else {
            SetLastError(0xd);
          }
        }
        LocalFree(hMem);
        param_4 = param_4 + 1;
      } while (hMem_00 == (wchar_t *)0x0);
      p_Var3 = pfnRegCloseKey;
      (*__guard_check_icall_fptr)(pfnRegCloseKey);
      (*p_Var3)(local_38);
      if (hMem_00 != (wchar_t *)0x0) {
        wVar1 = *hMem_00;
        if (wVar1 == L'\\') {
          return hMem_00;
        }
        if (wVar1 == L'/') {
          return hMem_00;
        }
        iVar5 = isalpha((uint)(ushort)wVar1);
        if ((iVar5 != 0) && (hMem_00[1] == L':')) {
          if (hMem_00[2] == L'/') {
            return hMem_00;
          }
          if (hMem_00[2] == L'\\') {
            return hMem_00;
          }
        }
      }
      LocalFree(hMem_00);
      return (wchar_t *)0x0;
    }
  }
  return (wchar_t *)0x0;
}

// DetectWow64Process @ 14ff34930

int __cdecl ngx::DetectWow64Process(int *param_1)

{
  *param_1 = 0;
  return 1;
}

// DirectoryExists @ 14ff34950

int __cdecl ngx::DirectoryExists(wchar_t *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}

// FileExists @ 14ff34980

int __cdecl ngx::FileExists(wchar_t *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x50) == 0)) {
    return 1;
  }
  return 0;
}

// FindDotExt @ 14ff349b0

wchar_t * __cdecl ngx::FindDotExt(wchar_t *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != L'\0');
  for (pwVar2 = param_1 + lVar1; ((param_1 < pwVar2 && (*pwVar2 != L'\\')) && (*pwVar2 != L'.'));
      pwVar2 = pwVar2 + -1) {
  }
  pwVar3 = param_1 + lVar1;
  if (*pwVar2 == L'.') {
    pwVar3 = pwVar2;
  }
  return pwVar3;
}

// FindNvidiaDevice @ 14ff34a10

int __cdecl ngx::FindNvidiaDevice(NvidiaDriverType param_1,void **param_2,_SP_DEVINFO_DATA *param_3)

{
  _func___cdecl_int_void_ptr *p_Var1;
  _func___cdecl_void_ptr__GUID_ptr_wchar_t_ptr_HWND___ptr_ulong *p_Var2;
  _func___cdecl_int_void_ptr_ulong__SP_DEVINFO_DATA_ptr *p_Var3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  
  uVar6 = 0;
  if ((((hModSetupapi != (HINSTANCE__ *)0x0) ||
       (hModSetupapi = LoadSystemLibraryInternal(L"Setupapi.dll",0),
       hModSetupapi != (HINSTANCE__ *)0x0)) &&
      ((pfnSetupDiGetClassDevsW !=
        (_func___cdecl_void_ptr__GUID_ptr_wchar_t_ptr_HWND___ptr_ulong *)0x0 ||
       (pfnSetupDiGetClassDevsW =
             (_func___cdecl_void_ptr__GUID_ptr_wchar_t_ptr_HWND___ptr_ulong *)
             GetProcAddress((HMODULE)hModSetupapi,"SetupDiGetClassDevsW"),
       pfnSetupDiGetClassDevsW !=
       (_func___cdecl_void_ptr__GUID_ptr_wchar_t_ptr_HWND___ptr_ulong *)0x0)))) &&
     ((((pfnSetupDiEnumDeviceInfo != (_func___cdecl_int_void_ptr_ulong__SP_DEVINFO_DATA_ptr *)0x0 ||
        (pfnSetupDiEnumDeviceInfo =
              (_func___cdecl_int_void_ptr_ulong__SP_DEVINFO_DATA_ptr *)
              GetProcAddress((HMODULE)hModSetupapi,"SetupDiEnumDeviceInfo"),
        pfnSetupDiEnumDeviceInfo != (_func___cdecl_int_void_ptr_ulong__SP_DEVINFO_DATA_ptr *)0x0))
       && ((pfnSetupDiGetDeviceRegistryPropertyW !=
            (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
             *)0x0 ||
           (pfnSetupDiGetDeviceRegistryPropertyW =
                 (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
                  *)GetProcAddress((HMODULE)hModSetupapi,"SetupDiGetDeviceRegistryPropertyW"),
           pfnSetupDiGetDeviceRegistryPropertyW !=
           (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
            *)0x0)))) &&
      (((pfnSetupDiGetDeviceInterfaceDetailW !=
         (_func___cdecl_int_void_ptr__SP_DEVICE_INTERFACE_DATA_ptr__SP_DEVICE_INTERFACE_DETAIL_DATA_W_ptr_ulong_ulong_ptr__SP_DEVINFO_DATA_ptr
          *)0x0 ||
        (pfnSetupDiGetDeviceInterfaceDetailW =
              (_func___cdecl_int_void_ptr__SP_DEVICE_INTERFACE_DATA_ptr__SP_DEVICE_INTERFACE_DETAIL_DATA_W_ptr_ulong_ulong_ptr__SP_DEVINFO_DATA_ptr
               *)GetProcAddress((HMODULE)hModSetupapi,"SetupDiGetDeviceInterfaceDetailW"),
        pfnSetupDiGetDeviceInterfaceDetailW !=
        (_func___cdecl_int_void_ptr__SP_DEVICE_INTERFACE_DATA_ptr__SP_DEVICE_INTERFACE_DETAIL_DATA_W_ptr_ulong_ulong_ptr__SP_DEVINFO_DATA_ptr
         *)0x0)) &&
       ((pfnSetupDiDestroyDeviceInfoList != (_func___cdecl_int_void_ptr *)0x0 ||
        (pfnSetupDiDestroyDeviceInfoList =
              (_func___cdecl_int_void_ptr *)
              GetProcAddress((HMODULE)hModSetupapi,"SetupDiDestroyDeviceInfoList"),
        pfnSetupDiDestroyDeviceInfoList != (_func___cdecl_int_void_ptr *)0x0)))))))) {
    p_Var2 = pfnSetupDiGetClassDevsW;
    (*__guard_check_icall_fptr)(pfnSetupDiGetClassDevsW);
    pvVar5 = (*p_Var2)((_GUID *)0x0,(wchar_t *)0x0,(HWND__ *)0x0,6);
    if (pvVar5 != (void *)0xffffffffffffffff) {
      param_3->cbSize = 0;
      (param_3->ClassGuid).Data1 = 0;
      (param_3->ClassGuid).Data2 = 0;
      (param_3->ClassGuid).Data3 = 0;
      (param_3->ClassGuid).Data4[0] = '\0';
      (param_3->ClassGuid).Data4[1] = '\0';
      (param_3->ClassGuid).Data4[2] = '\0';
      (param_3->ClassGuid).Data4[3] = '\0';
      *(undefined8 *)((param_3->ClassGuid).Data4 + 4) = 0;
      param_3->Reserved = 0;
      param_3->cbSize = 0x20;
      p_Var3 = pfnSetupDiEnumDeviceInfo;
      (*__guard_check_icall_fptr)(pfnSetupDiEnumDeviceInfo);
      iVar4 = (*p_Var3)(pvVar5,0,param_3);
      p_Var1 = pfnSetupDiDestroyDeviceInfoList;
      while (pfnSetupDiDestroyDeviceInfoList = p_Var1, iVar4 != 0) {
        iVar4 = IsNvidiaDevice(param_1,pvVar5,param_3);
        if (iVar4 == 1) {
          *param_2 = pvVar5;
          return 1;
        }
        uVar6 = uVar6 + 1;
        param_3->cbSize = 0;
        (param_3->ClassGuid).Data1 = 0;
        (param_3->ClassGuid).Data2 = 0;
        (param_3->ClassGuid).Data3 = 0;
        (param_3->ClassGuid).Data4[0] = '\0';
        (param_3->ClassGuid).Data4[1] = '\0';
        (param_3->ClassGuid).Data4[2] = '\0';
        (param_3->ClassGuid).Data4[3] = '\0';
        *(undefined8 *)((param_3->ClassGuid).Data4 + 4) = 0;
        param_3->Reserved = 0;
        param_3->cbSize = 0x20;
        p_Var3 = pfnSetupDiEnumDeviceInfo;
        (*__guard_check_icall_fptr)(pfnSetupDiEnumDeviceInfo);
        iVar4 = (*p_Var3)(pvVar5,uVar6,param_3);
        p_Var1 = pfnSetupDiDestroyDeviceInfoList;
      }
      (*__guard_check_icall_fptr)(p_Var1);
      (*p_Var1)(pvVar5);
    }
    return 0;
  }
  return 0;
}

// FindPathTail @ 14ff34c40

wchar_t * __cdecl ngx::FindPathTail(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = wcsrchr(param_1,L'\\');
  if (pwVar1 != (wchar_t *)0x0) {
    return pwVar1 + 1;
  }
  return param_1;
}

// GetDriverStorePathFromQAI @ 14ff34c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ngx::GetDriverStorePathFromQAI(wchar_t *param_1)

{
  _func___cdecl_long__NV_D3DKMT_ENUMADAPTERS2_ptr *p_Var1;
  _func___cdecl_long__NV_D3DKMT_ENUMADAPTERS3_ptr *p_Var2;
  _func___cdecl_long__NV_D3DKMT_QUERYADAPTERINFO_ptr *p_Var3;
  wchar_t *_Str1;
  longlong lVar4;
  long lVar5;
  int iVar6;
  HINSTANCE__ *hModule;
  _NV_D3DKMT_ADAPTERINFO *p_Var7;
  _NV_D3DKMT_ADAPTERINFO *p_Var8;
  wchar_t *hMem;
  _NV_D3DKMT_ADAPTERINFO *p_Var9;
  longlong lVar10;
  uint uVar11;
  ulong uVar12;
  _NV_D3DKMT_ADAPTERINFO *p_Var13;
  _NV_D3DKMT_ADAPTERINFO *p_Var14;
  _NV_D3DKMT_ADAPTERINFO *p_Var15;
  _NV_D3DKMT_ADAPTERINFO *p_Var16;
  undefined1 auStack_b8 [32];
  _NV_D3DKMT_QUERYADAPTERINFO local_98;
  _NV_D3DKMT_ENUMADAPTERS2 local_80;
  _NV_D3DKMT_ENUMADAPTERS_FILTER local_70;
  ulonglong local_68;
  _NV_D3DKMT_ADAPTERINFO *local_60;
  wchar_t *local_58;
  undefined1 local_50 [24];
  undefined4 local_38;
  ulonglong local_30;
  
  hModule = hModGDI32;
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  p_Var9 = (_NV_D3DKMT_ADAPTERINFO *)0x0;
  local_80._0_8_ = 0;
  local_80.pAdapters = (_NV_D3DKMT_ADAPTERINFO *)0x0;
  local_70.Value = 0;
  p_Var16 = (_NV_D3DKMT_ADAPTERINFO *)0x0;
  local_68 = 0;
  p_Var13 = (_NV_D3DKMT_ADAPTERINFO *)0x0;
  local_60 = (_NV_D3DKMT_ADAPTERINFO *)0x0;
  *param_1 = L'\0';
  local_58 = param_1;
  p_Var8 = p_Var9;
  if ((((hModule == (HINSTANCE__ *)0x0) &&
       (hModule = LoadSystemLibraryInternal(L"gdi32.dll",0), p_Var14 = p_Var9, p_Var7 = p_Var9,
       hModGDI32 = hModule, hModule == (HINSTANCE__ *)0x0)) ||
      ((p_Var14 = p_Var13, p_Var7 = p_Var16,
       pfnD3DKMTEnumAdapters2 == (_func___cdecl_long__NV_D3DKMT_ENUMADAPTERS2_ptr *)0x0 &&
       (pfnD3DKMTEnumAdapters2 =
             (_func___cdecl_long__NV_D3DKMT_ENUMADAPTERS2_ptr *)
             GetProcAddress((HMODULE)hModule,"D3DKMTEnumAdapters2"), hModule = hModGDI32,
       pfnD3DKMTEnumAdapters2 == (_func___cdecl_long__NV_D3DKMT_ENUMADAPTERS2_ptr *)0x0)))) ||
     ((pfnD3DKMTQueryAdapterInfo == (_func___cdecl_long__NV_D3DKMT_QUERYADAPTERINFO_ptr *)0x0 &&
      (pfnD3DKMTQueryAdapterInfo =
            (_func___cdecl_long__NV_D3DKMT_QUERYADAPTERINFO_ptr *)
            GetProcAddress((HMODULE)hModule,"D3DKMTQueryAdapterInfo"), hModule = hModGDI32,
      pfnD3DKMTQueryAdapterInfo == (_func___cdecl_long__NV_D3DKMT_QUERYADAPTERINFO_ptr *)0x0))))
  goto LAB_14ff3501c;
  if ((pfnD3DKMTEnumAdapters3 == (_func___cdecl_long__NV_D3DKMT_ENUMADAPTERS3_ptr *)0x0) &&
     (pfnD3DKMTEnumAdapters3 =
           (_func___cdecl_long__NV_D3DKMT_ENUMADAPTERS3_ptr *)
           GetProcAddress((HMODULE)hModule,"D3DKMTEnumAdapters3"), p_Var7 = p_Var9,
     pfnD3DKMTEnumAdapters3 == (_func___cdecl_long__NV_D3DKMT_ENUMADAPTERS3_ptr *)0x0)) {
LAB_14ff34dfe:
    p_Var1 = pfnD3DKMTEnumAdapters2;
    (*__guard_check_icall_fptr)(pfnD3DKMTEnumAdapters2);
    lVar5 = (*p_Var1)(&local_80);
    if ((lVar5 != 0) ||
       (p_Var7 = LocalAlloc(0x40,(local_80._0_8_ & 0xffffffff) * 0x14),
       p_Var1 = pfnD3DKMTEnumAdapters2, p_Var7 == (_NV_D3DKMT_ADAPTERINFO *)0x0))
    goto LAB_14ff3501c;
    local_80.pAdapters = p_Var7;
    (*__guard_check_icall_fptr)(pfnD3DKMTEnumAdapters2);
    lVar5 = (*p_Var1)(&local_80);
    p_Var8 = (_NV_D3DKMT_ADAPTERINFO *)0x0;
    if (lVar5 != 0) goto LAB_14ff3501c;
    uVar12 = local_80.NumAdapters;
  }
  else {
    p_Var2 = pfnD3DKMTEnumAdapters3;
    local_70.Value = 3;
    (*__guard_check_icall_fptr)(pfnD3DKMTEnumAdapters3);
    lVar5 = (*p_Var2)((_NV_D3DKMT_ENUMADAPTERS3 *)&local_70._s_0);
    p_Var7 = p_Var16;
    if (((lVar5 != 0) || ((int)local_68 == 0)) ||
       (p_Var7 = LocalAlloc(0x40,(local_68 & 0xffffffff) * 0x14), p_Var2 = pfnD3DKMTEnumAdapters3,
       p_Var7 == (_NV_D3DKMT_ADAPTERINFO *)0x0)) goto LAB_14ff34dfe;
    local_60 = p_Var7;
    (*__guard_check_icall_fptr)(pfnD3DKMTEnumAdapters3);
    lVar5 = (*p_Var2)((_NV_D3DKMT_ENUMADAPTERS3 *)&local_70._s_0);
    if (lVar5 != 0) {
      LocalFree(p_Var7);
      p_Var7 = (_NV_D3DKMT_ADAPTERINFO *)0x0;
      goto LAB_14ff34dfe;
    }
    uVar12 = (uint)local_68;
  }
  p_Var8 = p_Var9;
  p_Var16 = p_Var9;
  p_Var14 = p_Var9;
  p_Var15 = p_Var7;
  if (uVar12 != 0) {
    while( true ) {
      p_Var3 = pfnD3DKMTQueryAdapterInfo;
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
      local_50._8_4_ = 0;
      local_50._12_4_ = 0;
      local_50._16_8_ = 0;
      local_38 = 0;
      local_98.pPrivateDriverData = local_50;
      local_98.PrivateDriverDataSize = 0x1c;
      local_98._20_4_ = 0;
      local_98.Type = 0x1f;
      local_98.hAdapter = p_Var15->hAdapter;
      (*__guard_check_icall_fptr)(pfnD3DKMTQueryAdapterInfo);
      lVar5 = (*p_Var3)(&local_98);
      p_Var14 = p_Var9;
      if (lVar5 != 0) break;
      if ((local_50._4_4_ == 0x10de) || (local_50._4_4_ == 0x4144564e)) {
        uVar11 = p_Var7[(longlong)p_Var16].hAdapter;
        p_Var14 = p_Var13;
        if (uVar11 != 0) {
          local_98.hAdapter = 0;
          local_98.Type = 0;
          local_98.pPrivateDriverData = (_NV_D3DKMT_ADAPTERINFO *)0x0;
          local_98.PrivateDriverDataSize = 0;
          local_98._20_4_ = 0;
          p_Var8 = LocalAlloc(0x40,0x432);
          if (p_Var8 != (_NV_D3DKMT_ADAPTERINFO *)0x0) {
            p_Var8->hAdapter = 2;
            p_Var3 = pfnD3DKMTQueryAdapterInfo;
            local_98.Type = 0x30;
            local_98.hAdapter = uVar11;
            local_98.PrivateDriverDataSize = 0x432;
            local_98.pPrivateDriverData = p_Var8;
            (*__guard_check_icall_fptr)(pfnD3DKMTQueryAdapterInfo);
            lVar5 = (*p_Var3)(&local_98);
            _Str1 = local_58;
            if ((lVar5 == 0) && (p_Var8[0x1b].hAdapter == 0)) {
              lVar4 = -1;
              do {
                lVar10 = lVar4;
                lVar4 = lVar10 + 1;
              } while (*(short *)((longlong)&p_Var8[0x1b].AdapterLuid.LowPart + lVar10 * 2 + 2) != 0
                      );
              StringCchCopyW(local_58,lVar10 + 2,(wchar_t *)&p_Var8[0x1b].AdapterLuid);
              hMem = nvGetSystemDirectoryW();
              if (hMem != (wchar_t *)0x0) {
                iVar6 = _wcsnicmp(_Str1,L"\\SystemRoot\\system32\\",0x15);
                if ((iVar6 == 0) &&
                   (p_Var9 = (_NV_D3DKMT_ADAPTERINFO *)SafePathCombine(hMem,_Str1 + 0x15),
                   lVar4 = -1, p_Var9 != (_NV_D3DKMT_ADAPTERINFO *)0x0)) {
                  do {
                    lVar10 = lVar4;
                    lVar4 = lVar10 + 1;
                  } while (*(short *)((longlong)&p_Var9->hAdapter + lVar10 * 2 + 2) != 0);
                  StringCchCopyW(_Str1,lVar10 + 2,(wchar_t *)p_Var9);
                }
                LocalFree(hMem);
                p_Var14 = p_Var9;
              }
            }
          }
        }
        break;
      }
      uVar11 = (int)p_Var16 + 1;
      p_Var16 = (_NV_D3DKMT_ADAPTERINFO *)(ulonglong)uVar11;
      p_Var14 = p_Var13;
      p_Var15 = p_Var15 + 1;
      if (uVar12 <= uVar11) break;
    }
  }
LAB_14ff3501c:
  LocalFree(p_Var7);
  LocalFree(p_Var8);
  LocalFree(p_Var14);
  return;
}

// GetStringRegKey @ 14ff35060

long __cdecl GetStringRegKey(HKEY__ *param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4)

{
  LSTATUS LVar1;
  ulong local_res20 [2];
  
  local_res20[0] = param_4;
  LVar1 = RegQueryValueExW((HKEY)param_1,param_2,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)param_3,
                           local_res20);
  return LVar1;
}

// GetUMDPathFromLoadedDLLs @ 14ff35090

void __cdecl ngx::GetUMDPathFromLoadedDLLs(wchar_t *param_1)

{
  wchar_t wVar1;
  DWORD DVar2;
  int iVar3;
  wchar_t **ppwVar4;
  HMODULE hModule;
  wchar_t *pwVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = 0;
  bVar9 = validUmds[0] == (wchar_t *)0x0;
  *param_1 = L'\0';
  if (bVar9) {
    return;
  }
  ppwVar4 = validUmds;
  do {
    hModule = GetModuleHandleW(*ppwVar4);
    if (hModule != (HMODULE)0x0) {
      DVar2 = GetModuleFileNameW(hModule,param_1,0x104);
      uVar7 = (ulonglong)DVar2;
      if ((DVar2 != 0) &&
         (((wVar1 = *param_1, wVar1 == L'\\' || (wVar1 == L'/')) ||
          (((iVar3 = isalpha((uint)(ushort)wVar1), iVar3 != 0 && (param_1[1] == L':')) &&
           ((param_1[2] == L'\\' || (param_1[2] == L'/')))))))) {
        if (DVar2 == 0) goto LAB_14ff3514f;
        pwVar5 = param_1 + uVar7;
        break;
      }
    }
    lVar8 = lVar8 + 1;
    ppwVar4 = validUmds + lVar8;
    if (validUmds[lVar8] == (wchar_t *)0x0) {
      return;
    }
  } while( true );
  while( true ) {
    pwVar5 = pwVar5 + -1;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) break;
    if (*pwVar5 == L'\\') break;
  }
LAB_14ff3514f:
  param_1[uVar7] = L'\0';
  return;
}

// IsCryptSvcPausedOrRunning @ 14ff35180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl ngx::IsCryptSvcPausedOrRunning(void)

{
  _func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *p_Var1;
  _func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *p_Var2;
  _func___cdecl_int_SC_HANDLE___ptr__SERVICE_STATUS_ptr *p_Var3;
  _func___cdecl_int_SC_HANDLE___ptr *p_Var4;
  int iVar5;
  SC_HANDLE__ *pSVar6;
  SC_HANDLE__ *pSVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  _SERVICE_STATUS local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar5 = 0;
  iVar8 = 0;
  local_38.dwCurrentState = 0;
  local_38.dwControlsAccepted = 0;
  local_38.dwWin32ExitCode = 0;
  local_38.dwServiceSpecificExitCode = 0;
  local_38.dwCheckPoint = 0;
  local_38.dwWaitHint = 0;
  local_38.dwServiceType = 0;
  if ((((((hModAdvapi32 != (HINSTANCE__ *)0x0) ||
         (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
         hModAdvapi32 != (HINSTANCE__ *)0x0)) &&
        ((pfnOpenSCManagerW != (_func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *)0x0 ||
         (pfnOpenSCManagerW =
               (_func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *)
               GetProcAddress((HMODULE)hModAdvapi32,"OpenSCManagerW"),
         pfnOpenSCManagerW != (_func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *)0x0))))
       && ((pfnOpenServiceW !=
            (_func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *)0x0 ||
           (pfnOpenServiceW =
                 (_func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *)
                 GetProcAddress((HMODULE)hModAdvapi32,"OpenServiceW"),
           pfnOpenServiceW != (_func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *)0x0
           )))) &&
      ((pfnQueryServiceStatus != (_func___cdecl_int_SC_HANDLE___ptr__SERVICE_STATUS_ptr *)0x0 ||
       (pfnQueryServiceStatus =
             (_func___cdecl_int_SC_HANDLE___ptr__SERVICE_STATUS_ptr *)
             GetProcAddress((HMODULE)hModAdvapi32,"QueryServiceStatus"),
       pfnQueryServiceStatus != (_func___cdecl_int_SC_HANDLE___ptr__SERVICE_STATUS_ptr *)0x0)))) &&
     ((pfnCloseServiceHandle != (_func___cdecl_int_SC_HANDLE___ptr *)0x0 ||
      (pfnCloseServiceHandle =
            (_func___cdecl_int_SC_HANDLE___ptr *)
            GetProcAddress((HMODULE)hModAdvapi32,"CloseServiceHandle"),
      pfnCloseServiceHandle != (_func___cdecl_int_SC_HANDLE___ptr *)0x0)))) {
    p_Var1 = pfnOpenSCManagerW;
    (*__guard_check_icall_fptr)(pfnOpenSCManagerW);
    pSVar6 = (*p_Var1)((wchar_t *)0x0,(wchar_t *)0x0,0x80000000);
    p_Var2 = pfnOpenServiceW;
    if (pSVar6 != (SC_HANDLE__ *)0x0) {
      (*__guard_check_icall_fptr)(pfnOpenServiceW);
      pSVar7 = (*p_Var2)(pSVar6,L"CryptSvc",4);
      p_Var3 = pfnQueryServiceStatus;
      iVar8 = iVar5;
      if (pSVar7 != (SC_HANDLE__ *)0x0) {
        (*__guard_check_icall_fptr)(pfnQueryServiceStatus);
        iVar5 = (*p_Var3)(pSVar7,&local_38);
        p_Var4 = pfnCloseServiceHandle;
        if ((iVar5 != 0) && (local_38.dwCurrentState - 4 < 4)) {
          iVar8 = 1;
        }
        (*__guard_check_icall_fptr)(pfnCloseServiceHandle);
        (*p_Var4)(pSVar7);
      }
      p_Var4 = pfnCloseServiceHandle;
      (*__guard_check_icall_fptr)(pfnCloseServiceHandle);
      (*p_Var4)(pSVar6);
    }
    return iVar8;
  }
  return 0;
}

// IsNvidiaDevice @ 14ff35380

int __cdecl ngx::IsNvidiaDevice(NvidiaDriverType param_1,void *param_2,_SP_DEVINFO_DATA *param_3)

{
  wchar_t wVar1;
  _func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr *p_Var2;
  longlong lVar3;
  int iVar4;
  wchar_t *hMem;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *_SubStr [1];
  uint uVar7;
  wchar_t *_Str;
  ulong local_res8 [2];
  
  p_Var2 = pfnSetupDiGetDeviceRegistryPropertyW;
  pwVar5 = (wchar_t *)0x0;
  local_res8[0] = 0;
  if (param_1 != NvidiaDisplayDriver) {
    return 0;
  }
  (*__guard_check_icall_fptr)(pfnSetupDiGetDeviceRegistryPropertyW);
  (*p_Var2)(param_2,param_3,2,(ulong *)0x0,(uchar *)0x0,0,local_res8);
  hMem = pwVar5;
  if (local_res8[0] != 0) {
    uVar7 = local_res8[0] + 4;
    hMem = LocalAlloc(0x40,(ulonglong)uVar7);
    p_Var2 = pfnSetupDiGetDeviceRegistryPropertyW;
    if (hMem != (wchar_t *)0x0) {
      (*__guard_check_icall_fptr)(pfnSetupDiGetDeviceRegistryPropertyW);
      iVar4 = (*p_Var2)(param_2,param_3,2,(ulong *)0x0,(uchar *)hMem,uVar7,(ulong *)0x0);
      if (iVar4 != 0) {
        _Str = hMem;
        if (*hMem == L'\0') {
LAB_14ff354ec:
          pwVar5 = (wchar_t *)0x0;
          if (*_Str != L'\0') {
            pwVar5 = (wchar_t *)&DAT_00000001;
          }
        }
        else {
          do {
            wVar1 = *driverCompatibleIds[0];
            _SubStr[0] = driverCompatibleIds[0];
            while (wVar1 != L'\0') {
              pwVar5 = wcsstr(_Str,_SubStr[0]);
              if (pwVar5 != (wchar_t *)0x0) {
                if (*_SubStr[0] != L'\0') goto LAB_14ff354ec;
                break;
              }
              lVar3 = -1;
              do {
                lVar6 = lVar3;
                lVar3 = lVar6 + 1;
              } while (_SubStr[0][lVar6 + 1] != L'\0');
              _SubStr[0] = _SubStr[0] + lVar6 + 2;
              wVar1 = *_SubStr[0];
            }
            lVar3 = -1;
            do {
              lVar6 = lVar3;
              lVar3 = lVar6 + 1;
            } while (_Str[lVar6 + 1] != L'\0');
            _Str = _Str + lVar6 + 2;
            pwVar5 = (wchar_t *)0x0;
          } while (*_Str != L'\0');
        }
      }
    }
  }
  LocalFree(hMem);
  return (int)pwVar5;
}

// IsNvidiaSubordinatePublicKey @ 14ff35530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl ngx::IsNvidiaSubordinatePublicKey(_CRYPT_BIT_BLOB *param_1)

{
  uint uVar1;
  uchar *_Buf1;
  int iVar2;
  undefined1 auStack_698 [32];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined2 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined2 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined2 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined2 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_698;
  local_568 = 0xa018230;
  local_564 = 0x1018202;
  local_560 = 0xb123d300;
  local_55c = 0x3d4cbcb;
  local_558 = 0x9ef012c8;
  local_554 = 0xac0b9d0a;
  local_550 = 0xb85828f8;
  local_54c = 0x8689b316;
  local_548 = 0xcd865298;
  local_544 = 0xa283d35b;
  local_540 = 0x1c2e53f7;
  local_53c = 0x677d3d00;
  local_538 = 0x38699cb;
  local_534 = 0x8aa0b0bd;
  local_530 = 0x7f4e922d;
  local_52c = 0x34fbd129;
  local_528 = 0x169683e9;
  local_524 = 0x54dc4193;
  local_520 = 0x513e6203;
  local_51c = 0xe5ae6f0a;
  local_518 = 0x608bf6e8;
  local_514 = 0x41db24f6;
  local_510 = 0xc920ef8e;
  local_50c = 0x26028dec;
  local_508 = 0xa02fc9d1;
  local_504 = 0x7dd8d9be;
  local_500 = 0x1f59e138;
  local_4fc = 0x8417c037;
  local_4f8 = 0xcbb34076;
  local_4f4 = 0x5ae1765a;
  local_4f0 = 0xa9a5388c;
  local_4ec = 0xbb4c73;
  local_4e8 = 0x7fd18592;
  local_4e4 = 0x194d744e;
  local_4e0 = 0x62623963;
  local_4dc = 0x869c3b8;
  local_4d8 = 0xfe23f767;
  local_4d4 = 0x369eab04;
  local_4d0 = 0xc83a75c9;
  local_4cc = 0xcb8d743;
  local_4c8 = 0x12792560;
  local_4c4 = 0x7993053e;
  local_4c0 = 0x415d5645;
  local_4bc = 0x194362f3;
  local_4b8 = 0x44ec5ac1;
  local_4b4 = 0x95d2d222;
  local_4b0 = 0x415cf75d;
  local_4ac = 0x399dbf5;
  local_4a8 = 0xc3a4898b;
  local_4a4 = 0xa88dad93;
  local_4a0 = 0xf03aa90f;
  local_49c = 0x81eed7a3;
  local_498 = 0x254b80e7;
  local_494 = 0xfa8e7d53;
  local_490 = 0xfc26493d;
  local_48c = 0x734c31dd;
  local_488 = 0x89b7cc2d;
  local_484 = 0x14e8b1b7;
  local_480 = 0x793d6cd;
  local_47c = 0xf9b701f9;
  local_478 = 0x922fb435;
  local_474 = 0xd0b39af5;
  local_470 = 0xbf088d38;
  local_46c = 0x65a5b022;
  local_468 = 0x122a9082;
  local_464 = 0x1148a155;
  local_460 = 0x10302ff;
  local_45c = 0x100;
  local_458 = 0xa018230;
  local_454 = 0x1018202;
  local_450 = 0xc0d4a600;
  local_44c = 0x653517cf;
  local_448 = 0xda84138e;
  local_444 = 0x6ea2e4fa;
  local_440 = 0x14e0e785;
  local_43c = 0xec186298;
  local_438 = 0x55ad9f27;
  local_434 = 0x1a119bf7;
  local_430 = 0xce43be2b;
  local_42c = 0x78426753;
  local_428 = 0x7bd7a3b7;
  local_424 = 0x79d6c574;
  local_420 = 0x7d5c7f88;
  local_41c = 0xaa74da7b;
  local_418 = 0x9301a697;
  local_414 = 0xf759a060;
  local_410 = 0xf94b4f05;
  local_40c = 0xff9bfdec;
  local_408 = 0x99c1c4e7;
  local_404 = 0x6029f170;
  local_400 = 0xd286e20e;
  local_3fc = 0xb3527f60;
  local_3f8 = 0xe9b10217;
  local_3f4 = 0x1b867189;
  local_3f0 = 0xd3eff5b9;
  local_3ec = 0xe508a395;
  local_3e8 = 0x1ad71162;
  local_3e4 = 0x528ea274;
  local_3e0 = 0x3244c97b;
  local_3dc = 0xb5b9fe99;
  local_3d8 = 0x37257e6f;
  local_3d4 = 0x54584119;
  local_3d0 = 0xa53ef505;
  local_3cc = 0x8f2b8f1b;
  local_3c8 = 0x1e80ebe6;
  local_3c4 = 0x89dc86;
  local_3c0 = 0xd229ad23;
  local_3bc = 0xbf254c4a;
  local_3b8 = 0x249e18f7;
  local_3b4 = 0x36bdcf78;
  local_3b0 = 0x24765811;
  local_3ac = 0x13576df;
  local_3a8 = 0x1a7b34c2;
  local_3a4 = 0x57c64660;
  local_3a0 = 0x154f2823;
  local_39c = 0x1eb836e7;
  local_398 = 0xbf8ae57a;
  local_394 = 0x909ac811;
  local_390 = 0xf70ad138;
  local_38c = 0x4fa85d1;
  local_388 = 0x81d3b2af;
  local_384 = 0xe35b9199;
  local_380 = 0xa51562e8;
  local_37c = 0x6bfcc3d0;
  local_378 = 0x8a4f40c6;
  local_374 = 0x570bf4da;
  local_370 = 0x48902144;
  local_36c = 0x35bb55a1;
  local_368 = 0x738be375;
  local_364 = 0xbf7dfa29;
  local_360 = 0x46f0b989;
  local_35c = 0xf6abfbcd;
  local_358 = 0x76bf5c1;
  local_354 = 0x174776bb;
  local_350 = 0x10302e7;
  local_34c = 0x100;
  local_348 = 0xa018230;
  local_344 = 0x1018202;
  local_340 = 0x6a3faf00;
  local_33c = 0xb65c3bae;
  local_338 = 0x1afe292c;
  local_334 = 0xfe66503b;
  local_330 = 0x78d01bf7;
  local_32c = 0xf85930b9;
  local_328 = 0x7aa800b8;
  local_324 = 0x86c53d67;
  local_320 = 0xb010d906;
  local_31c = 0xaa4f6be6;
  local_318 = 0x69e88da9;
  local_314 = 0x88b1cd60;
  local_310 = 0xc52d19cc;
  local_30c = 0x37d8519c;
  local_308 = 0x6ad741b6;
  local_304 = 0x6a5cf079;
  local_300 = 0xefa2fb4e;
  local_2fc = 0x3238d0b2;
  local_2f8 = 0x3e5a9d3;
  local_2f4 = 0xd2ec2beb;
  local_2f0 = 0x6f1f17f0;
  local_2ec = 0xdae2e1ae;
  local_2e8 = 0x42b5105c;
  local_2e4 = 0xb4dbe63;
  local_2e0 = 0xb8c17208;
  local_2dc = 0x461a1abb;
  local_2d8 = 0xdce7d021;
  local_2d4 = 0x89f63685;
  local_2d0 = 0x83cc9d2a;
  local_2cc = 0xfd8a6759;
  local_2c8 = 0xd24e5315;
  local_2c4 = 0x70233a8c;
  local_2c0 = 0x39631e5d;
  local_2bc = 0x5454776a;
  local_2b8 = 0x245a6c66;
  local_2b4 = 0xd018dd7c;
  local_2b0 = 0x5a7ca6c0;
  local_2ac = 0xb9a3e7de;
  local_2a8 = 0x6dad414d;
  local_2a4 = 0x822a5f76;
  local_2a0 = 0x3c0a6f1c;
  local_29c = 0xd40e4b1b;
  local_298 = 0x8caf5193;
  local_294 = 0x6c9e1a04;
  local_290 = 0xb0943481;
  local_28c = 0x64a1f020;
  local_288 = 0x66a73a5a;
  local_284 = 0x2e4a66f6;
  local_280 = 0x2685def1;
  local_27c = 0x9124a954;
  local_278 = 0xbf1ea53f;
  local_274 = 0x1c9c9d44;
  local_270 = 0x2c16f828;
  local_26c = 0xc3f3318c;
  local_268 = 0x7b9e7179;
  local_264 = 0xe96bee9;
  local_260 = 0x2365556a;
  local_25c = 0xea71d154;
  local_258 = 0xb2425171;
  local_254 = 0x91f088cc;
  local_250 = 0xc6c89e28;
  local_24c = 0x8524fdab;
  local_248 = 0x5846a44b;
  local_244 = 0xd0c3d5ae;
  local_240 = 0x10302d5;
  local_23c = 0x100;
  local_238 = 0xa018230;
  local_234 = 0x1018202;
  local_230 = 0x6685b400;
  local_22c = 0x3549cc85;
  local_228 = 0xf791c056;
  local_224 = 0x3404b30b;
  local_220 = 0xb96aabf2;
  local_21c = 0x644325b2;
  local_218 = 0x277fa4c5;
  local_214 = 0x913c7c6b;
  local_210 = 0xf60a856b;
  local_20c = 0xd676da0c;
  local_208 = 0xc6bbafa5;
  local_204 = 0x3c24eff0;
  local_200 = 0xdd04a709;
  local_1fc = 0x973d2ffa;
  local_1f8 = 0xdc914fa2;
  local_1f4 = 0x2384585f;
  local_1f0 = 0xa561ce7f;
  local_1ec = 0x75cf9846;
  local_1e8 = 0x3b3e4ec7;
  local_1e4 = 0xabc8227e;
  local_1e0 = 0x3f86bfa8;
  local_1dc = 0xc870029a;
  local_1d8 = 0x21868c30;
  local_1d4 = 0xbf8b5497;
  local_1d0 = 0xf2b64e2d;
  local_1cc = 0xf6f2f3b0;
  local_1c8 = 0xac56ab0d;
  local_1c4 = 0x1363995d;
  local_1c0 = 0xf11e8c4a;
  local_1bc = 0x41d59a33;
  local_1b8 = 0x70b83fc7;
  local_1b4 = 0xeb1eb595;
  local_1b0 = 0x92dd7b8;
  local_1ac = 0xc4843412;
  local_1a8 = 0xfe9d4cc4;
  local_1a4 = 0x823072ce;
  local_1a0 = 0xd693015a;
  local_19c = 0xf6ef513e;
  local_198 = 0x2d5c013c;
  local_194 = 0x4167bea8;
  local_190 = 0xfc6d520f;
  local_18c = 0x3fd4458c;
  local_188 = 0x378927ae;
  local_184 = 0xd9dc083c;
  local_180 = 0xbff7ce2;
  local_17c = 0xc4b553b7;
  local_178 = 0x8a671de0;
  local_174 = 0xaf5c7e4c;
  local_170 = 0x96f0e441;
  local_16c = 0xde12c43e;
  local_168 = 0x67b97aad;
  local_164 = 0xfddc762c;
  local_160 = 0xc5615165;
  local_15c = 0x2db6c16f;
  local_158 = 0xa151724e;
  local_154 = 0x3ebad49f;
  local_150 = 0xdcb0ea9d;
  local_14c = 0x8040f4dd;
  local_148 = 0x2f4a8382;
  local_144 = 0xa0a75d23;
  local_140 = 0x3896f5a0;
  local_13c = 0x4d12d448;
  local_138 = 0x79df99e1;
  local_134 = 0xf45defcb;
  local_130 = 0x10302af;
  local_12c = 0x100;
  local_128 = 0xa018230;
  local_124 = 0x1018202;
  local_120 = 0x8d8ccf00;
  local_11c = 0x9f57a1ae;
  local_118 = 0xae866014;
  local_114 = 0x1b5971d1;
  local_110 = 0x1024fa05;
  local_10c = 0xbc9df45;
  local_108 = 0xad629415;
  local_104 = 0xbfc4e420;
  local_100 = 0x9cc8520f;
  local_fc = 0xa9d6aedf;
  local_f8 = 0xa9982107;
  local_f4 = 0xdd55842f;
  local_f0 = 0x22848989;
  local_ec = 0xad08789;
  local_e8 = 0xad2ff3cf;
  local_e4 = 0x69108040;
  local_e0 = 0x4728bb24;
  local_dc = 0x96a6a773;
  local_d8 = 0xe9223967;
  local_d4 = 0x88592c0c;
  local_d0 = 0xaea38630;
  local_cc = 0xd8d8c98c;
  local_c8 = 0x72faf9a2;
  local_c4 = 0x7355363a;
  local_c0 = 0xaeeddeda;
  local_bc = 0xe7f80f43;
  local_b8 = 0xe94862c4;
  local_b4 = 0xc00e240a;
  local_b0 = 0xc4f9b879;
  local_ac = 0x52f0b19f;
  local_a8 = 0x9f1be49d;
  local_a4 = 0x67d4a8a1;
  local_a0 = 0x7311d6d5;
  local_9c = 0xa2ffebd8;
  local_98 = 0x6b04bcc0;
  local_94 = 0x187946dd;
  local_90 = 0xb0fdf09c;
  local_8c = 0x51280d3d;
  local_88 = 0x9c48a505;
  local_84 = 0xba857081;
  local_80 = 0x50437f3e;
  local_7c = 0x4ff13dc1;
  local_78 = 0xcd65f3fa;
  local_74 = 0x424bc17;
  local_70 = 0x31002351;
  local_6c = 0x96a363d1;
  local_68 = 0x206154d5;
  local_64 = 0xbf613147;
  local_60 = 0xf8f5ddcf;
  local_5c = 0xe4875d23;
  local_58 = 0x2be1bbe3;
  local_54 = 0xd85f8530;
  local_50 = 0xb0e61699;
  local_4c = 0xd0a27a9e;
  local_48 = 0x89e7249a;
  local_44 = 0x5dedaee;
  local_40 = 0x7ac2f8d9;
  local_3c = 0xe55f840f;
  local_38 = 0x736c75b2;
  local_34 = 0x352f9b5;
  local_30 = 0x9e853248;
  local_2c = 0x1940eb07;
  local_28 = 0x413d0f8e;
  local_24 = 0xd2c054d7;
  local_20 = 0x10302e1;
  local_1c = 0x100;
  if ((param_1->cbData == 0x10e) && (param_1->cUnusedBits == 0)) {
    iVar2 = IsWindowsBuildOrGreater(0x23f0);
    if (iVar2 == 0) {
      local_678 = 0xa018230;
      local_674 = 0x1018202;
      local_670 = 0x4395d700;
      local_66c = 0x67dfdcd4;
      local_668 = 0x52fb39ae;
      local_664 = 0x3126b6a4;
      local_660 = 0xb7e97004;
      local_65c = 0xba2a5b8e;
      local_658 = 0x95356937;
      local_654 = 0x30c0bb8f;
      local_650 = 0x73d886e7;
      local_64c = 0xd1ebdfbb;
      local_648 = 0x568a3f76;
      local_644 = 0x4b2deb8e;
      local_640 = 0x4e1857f0;
      local_63c = 0x33a58db1;
      local_638 = 0x23750bd3;
      local_634 = 0x27796ad5;
      local_630 = 0xf7d3a3dd;
      local_62c = 0xb565870e;
      local_628 = 0xf11cadde;
      local_624 = 0x22b435f5;
      local_620 = 0xa122af51;
      local_61c = 0x904b5dc1;
      local_618 = 0x4e59c07f;
      local_614 = 0xa9799dab;
      local_610 = 0x491ed702;
      local_60c = 0x874d3bb1;
      local_608 = 0xab78c2fe;
      local_604 = 0xae52efbf;
      local_600 = 0xd908af9c;
      local_5fc = 0x519ae539;
      local_5f8 = 0x305f693e;
      local_5f4 = 0x63714e10;
      local_5f0 = 0xf0e1586c;
      local_5ec = 0xf1b3320;
      local_5e8 = 0xcb5bbe74;
      local_5e4 = 0x8cdbe112;
      local_5e0 = 0x729480c4;
      local_5dc = 0x9a45f6bb;
      local_5d8 = 0xb25c19e;
      local_5d4 = 0x9e1ca3fb;
      local_5d0 = 0x7009a6d8;
      local_5cc = 0x47c0ec71;
      local_5c8 = 0xc37d8f4c;
      local_5c4 = 0x3ece19de;
      local_5c0 = 0x8e7204ee;
      local_5bc = 0xf0ffd317;
      local_5b8 = 0x193205b2;
      local_5b4 = 0x1cb0d34c;
      local_5b0 = 0x78a5fe9f;
      local_5ac = 0x41704220;
      local_5a8 = 0x6f8c26b0;
      local_5a4 = 0x3ac800;
      local_5a0 = 0x417a4111;
      local_59c = 0x918aa7b0;
      local_598 = 0x7899a004;
      local_594 = 0xf3b477f4;
      local_590 = 0x6ce62a60;
      local_58c = 0x14b70450;
      local_588 = 0x510dff60;
      local_584 = 0x848ba8f4;
      local_580 = 0x5cda21fe;
      local_57c = 0x29f57d5e;
      local_578 = 0x44b04f79;
      local_574 = 0x726d6f74;
      local_570 = 0x10302ff;
      local_56c = 0x100;
      iVar2 = memcmp(param_1->pbData,&local_678,(ulonglong)param_1->cbData);
      if (iVar2 == 0) {
        return 1;
      }
    }
    uVar1 = param_1->cbData;
    _Buf1 = param_1->pbData;
    iVar2 = memcmp(_Buf1,&local_568,(ulonglong)uVar1);
    if ((((iVar2 == 0) || (iVar2 = memcmp(_Buf1,&local_458,(ulonglong)uVar1), iVar2 == 0)) ||
        (iVar2 = memcmp(_Buf1,&local_348,(ulonglong)uVar1), iVar2 == 0)) ||
       ((iVar2 = memcmp(_Buf1,&local_238,(ulonglong)uVar1), iVar2 == 0 ||
        (iVar2 = memcmp(_Buf1,&local_128,(ulonglong)uVar1), iVar2 == 0)))) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// IsPathToModule @ 14ff36550

int __cdecl ngx::IsPathToModule(wchar_t *param_1,wchar_t *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *_Str1;
  size_t _MaxCount;
  wchar_t *_Str1_00;
  
  pwVar4 = wcsrchr(param_1,L'\\');
  if (pwVar4 != (wchar_t *)0x0) {
    param_1 = pwVar4 + 1;
  }
  iVar2 = _wcsicmp(param_1,param_2);
  if (iVar2 != 0) {
    lVar6 = -1;
    lVar5 = -1;
    do {
      lVar1 = lVar5 + 1;
      lVar5 = lVar5 + 1;
    } while (param_1[lVar1] != L'\0');
    for (pwVar4 = param_1 + lVar5; ((param_1 < pwVar4 && (*pwVar4 != L'\\')) && (*pwVar4 != L'.'));
        pwVar4 = pwVar4 + -1) {
    }
    _Str1 = param_1 + lVar5;
    if (*pwVar4 == L'.') {
      _Str1 = pwVar4;
    }
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != L'\0');
    for (pwVar4 = param_2 + lVar6; ((param_2 < pwVar4 && (*pwVar4 != L'\\')) && (*pwVar4 != L'.'));
        pwVar4 = pwVar4 + -1) {
    }
    _Str1_00 = param_2 + lVar6;
    if (*pwVar4 == L'.') {
      _Str1_00 = pwVar4;
    }
    _MaxCount = (longlong)_Str1_00 - (longlong)param_2 >> 1;
    if ((((longlong)_Str1 - (longlong)param_1 >> 1 == _MaxCount) &&
        ((*_Str1_00 == u_[0] || (iVar2 = _wcsicmp(_Str1_00,L".dll"), iVar2 == 0)))) &&
       ((*_Str1 == u_[0] || (iVar2 = _wcsicmp(_Str1,L".dll"), iVar2 == 0)))) {
      iVar2 = _wcsnicmp(param_1,param_2,_MaxCount);
      uVar3 = (uint)(iVar2 == 0);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 1;
}

// IsPeNvidiaSigned @ 14ff366c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl ngx::IsPeNvidiaSigned(_CERT_CONTEXT *param_1)

{
  _func___cdecl_ulong__CERT_CONTEXT_ptr_ulong_ulong_void_ptr_char_ptr_ulong *p_Var1;
  int iVar2;
  undefined1 auStackY_148 [32];
  char local_118 [256];
  ulonglong local_18;
  
  p_Var1 = pfnCertGetNameStringA;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_118[0] = '\0';
  (*__guard_check_icall_fptr)(pfnCertGetNameStringA);
  (*p_Var1)(param_1,4,0,(void *)0x0,local_118,0x100);
  iVar2 = _strnicmp(local_118,"NVIDIA ",7);
  return (int)(iVar2 == 0);
}

// IsTrustedLocation @ 14ff36760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl ngx::IsTrustedLocation(wchar_t *param_1)

{
  BOOL BVar1;
  uint uVar2;
  DWORD nBufferLength;
  DWORD DVar3;
  int iVar4;
  undefined8 uVar5;
  DWORDLONG dwlConditionMask;
  LPWSTR lpBuffer;
  LPWSTR _Str2;
  LPWSTR pWVar6;
  size_t _MaxCount;
  undefined1 auStack_58 [32];
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  pWVar6 = (LPWSTR)0x0;
  local_38[0] = 0x24;
  local_38[1] = 0x26;
  local_38[2] = 0x2a;
  if (osVersionInfo.dwOSVersionInfoSize == 0) {
    uVar5 = VerSetConditionMask(0,2,3);
    uVar5 = VerSetConditionMask(uVar5,1,3);
    dwlConditionMask = VerSetConditionMask(uVar5,0x20,3);
    osVersionInfo.dwOSVersionInfoSize = 0x11c;
    osVersionInfo.dwMajorVersion = 6;
    osVersionInfo.dwMinorVersion = 1;
    osVersionInfo.wServicePackMajor = 0;
    BVar1 = VerifyVersionInfoW((LPOSVERSIONINFOEXW)&osVersionInfo,0x23,dwlConditionMask);
    bTrustAnyLocation = (int)(BVar1 == 0);
  }
  if (bTrustAnyLocation == 0) {
    _Str2 = pWVar6;
    lpBuffer = pWVar6;
    uVar2 = 0;
    if (param_1 != (wchar_t *)0x0) {
      nBufferLength = GetFullPathNameW(param_1,0,(LPWSTR)0x0,(LPWSTR *)0x0);
      uVar2 = 0;
      if (((nBufferLength != 0) &&
          (lpBuffer = LocalAlloc(0x40,(ulonglong)nBufferLength * 2), _Str2 = (LPWSTR)0x0, uVar2 = 0,
          lpBuffer != (LPWSTR)0x0)) &&
         (DVar3 = GetFullPathNameW(param_1,nBufferLength,lpBuffer,(LPWSTR *)0x0),
         DVar3 < nBufferLength)) {
        do {
          uVar2 = 0;
          _Str2 = CreateSHFolderFilePath(local_38[(longlong)pWVar6],L"");
          if (_Str2 == (wchar_t *)0x0) break;
          _MaxCount = 0xffffffffffffffff;
          do {
            _MaxCount = _MaxCount + 1;
          } while (_Str2[_MaxCount] != L'\0');
          iVar4 = _wcsnicmp(lpBuffer,_Str2,_MaxCount);
          uVar2 = (uint)(iVar4 == 0);
          if (iVar4 == 0) break;
          LocalFree(_Str2);
          pWVar6 = (LPWSTR)((longlong)pWVar6 + 1);
          _Str2 = (LPWSTR)0x0;
        } while ((longlong)pWVar6 < 3);
      }
    }
    LocalFree(_Str2);
    LocalFree(lpBuffer);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// IsWindowsBuildOrGreater @ 14ff36940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl ngx::IsWindowsBuildOrGreater(ulong param_1)

{
  longlong lVar1;
  _func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *p_Var2;
  _func___cdecl_long_HKEY___ptr *p_Var3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  DWORDLONG dwlConditionMask;
  longlong lVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined1 auStackY_198 [32];
  ulong local_168 [2];
  HKEY__ *local_160;
  ushort *local_158 [2];
  _OSVERSIONINFOEXW local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (dwCurrentBuildNumber == 0) {
    dwlConditionMask = VerSetConditionMask(0,4,3);
    memset(&local_148,0,0x11c);
    local_148.dwBuildNumber = param_1;
    BVar4 = VerifyVersionInfoW(&local_148,4,dwlConditionMask);
    if (BVar4 != 0) {
      return 1;
    }
    local_168[0] = 0;
    local_158[0] = (ushort *)0x0;
    local_160 = (HKEY__ *)0x0;
    puVar9 = (ushort *)0x0;
    if ((((hModAdvapi32 == (HINSTANCE__ *)0x0) &&
         (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
         hModAdvapi32 == (HINSTANCE__ *)0x0)) ||
        ((pfnRegOpenKeyExW ==
          (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0 &&
         (pfnRegOpenKeyExW =
               (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)
               GetProcAddress((HMODULE)hModAdvapi32,"RegOpenKeyExW"),
         pfnRegOpenKeyExW ==
         (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0)))) ||
       ((pfnRegCloseKey == (_func___cdecl_long_HKEY___ptr *)0x0 &&
        (pfnRegCloseKey =
              (_func___cdecl_long_HKEY___ptr *)GetProcAddress((HMODULE)hModAdvapi32,"RegCloseKey"),
        pfnRegCloseKey == (_func___cdecl_long_HKEY___ptr *)0x0)))) {
      DVar5 = GetLastError();
    }
    else {
      p_Var2 = pfnRegOpenKeyExW;
      (*__guard_check_icall_fptr)(pfnRegOpenKeyExW);
      DVar5 = (*p_Var2)((HKEY__ *)&DAT_ffffffff80000002,
                        L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",0,1,&local_160);
      if (DVar5 == 0) {
        DVar5 = QueryRegistryValueFromKey
                          (local_160,L"CurrentBuildNumber",local_168,(uchar **)local_158);
        p_Var3 = pfnRegCloseKey;
        (*__guard_check_icall_fptr)(pfnRegCloseKey);
        (*p_Var3)(local_160);
        puVar9 = local_158[0];
      }
    }
    if ((DVar5 == 0) && (local_168[0] == 1)) {
      lVar7 = -1;
      do {
        lVar1 = lVar7 + 1;
        lVar7 = lVar7 + 1;
      } while (puVar9[lVar1] != 0);
      for (puVar8 = puVar9; puVar8 < puVar9 + lVar7; puVar8 = puVar8 + 1) {
        iVar6 = isdigit((uint)*puVar8);
        if (iVar6 == 0) {
          dwCurrentBuildNumber = 0;
          break;
        }
        dwCurrentBuildNumber = (uint)*puVar8 + (dwCurrentBuildNumber * 5 + -0x18) * 2;
      }
    }
    LocalFree(puVar9);
  }
  return (uint)(param_1 <= dwCurrentBuildNumber);
}

// LoadSystemLibraryInternal @ 14ff36b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HINSTANCE__ * __cdecl ngx::LoadSystemLibraryInternal(wchar_t *param_1,ulong param_2)

{
  BOOL BVar1;
  int iVar2;
  DWORDLONG dwlConditionMask;
  wchar_t *hMem;
  HINSTANCE__ *pHVar3;
  DWORD dwFlags;
  undefined1 auStack_168 [32];
  _OSVERSIONINFOEXW local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  hMem = (wchar_t *)0x0;
  if (dwBuildNumber == 0) {
    dwlConditionMask = VerSetConditionMask(0,4,3);
    memset(&local_148,0,0x11c);
    local_148.dwBuildNumber = 0x23f0;
    BVar1 = VerifyVersionInfoW(&local_148,4,dwlConditionMask);
    dwBuildNumber = 0x1db0;
    if (BVar1 != 0) {
      dwBuildNumber = 0x23f0;
    }
  }
  iVar2 = _preloadSystemDlls((uint)(dwBuildNumber < 0x23f0));
  if (iVar2 == 0) {
    pHVar3 = (HINSTANCE__ *)0x0;
  }
  else {
    if (dwBuildNumber < 0x23f0) {
      dwFlags = param_2 & 0xffffe0f7;
      hMem = CreateSystemFilePath(param_1);
    }
    else {
      dwFlags = param_2 & 0xffffe8f7 | 0x800;
    }
    if (hMem != (wchar_t *)0x0) {
      param_1 = hMem;
    }
    pHVar3 = (HINSTANCE__ *)LoadLibraryExW(param_1,(HANDLE)0x0,dwFlags);
    LocalFree(hMem);
  }
  return pHVar3;
}

// LockFileForGenericReadAccess @ 14ff36ca0

void * __cdecl ngx::LockFileForGenericReadAccess(wchar_t *param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return pvVar1;
}

// NGXCloseLibrary @ 14ff36ce0

bool __cdecl NGXCloseLibrary(HINSTANCE__ *param_1)

{
  BOOL BVar1;
  
  BVar1 = FreeLibrary((HMODULE)param_1);
  return BVar1 == 1;
}

// NGXGetLibraryFromAddress @ 14ff36d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl NGXGetLibraryFromAddress(void *param_1,wchar_t **param_2,wchar_t **param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 auStack_268 [32];
  HMODULE local_248 [2];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_248[0] = (HMODULE)0x0;
  DVar2 = 6;
  if (param_1 == (void *)0x0) {
    DVar2 = 2;
  }
  BVar1 = GetModuleHandleExA(DVar2,param_1,local_248);
  if ((BVar1 != 0) && (DVar2 = GetModuleFileNameW(local_248[0],local_238,0x104), DVar2 != 0)) {
    pwVar3 = wcsrchr(local_238,L'\\');
    if (pwVar3 == (wchar_t *)0x0) {
      pwVar3 = _wcsdup(local_238);
      *param_3 = pwVar3;
      pwVar4 = L"";
    }
    else {
      pwVar4 = _wcsdup(pwVar3 + 1);
      *param_3 = pwVar4;
      pwVar4 = local_238;
      *pwVar3 = L'\0';
    }
    pwVar3 = _wcsdup(pwVar4);
    *param_2 = pwVar3;
    return true;
  }
  return false;
}

// NGXGetLibrarySymbol @ 14ff36df0

/* __int64 (__cdecl*__cdecl NGXGetLibrarySymbol(struct HINSTANCE__ * __ptr64,char const *
   __ptr64))(void) */

_func___cdecl_long64 * __cdecl NGXGetLibrarySymbol(HINSTANCE__ *param_1,char *param_2)

{
  _func___cdecl_long64 *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff36df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (_func___cdecl_long64 *)GetProcAddress((HMODULE)param_1,param_2);
  return p_Var1;
}

// NGXGetPathFromRegistry @ 14ff36e00

long __cdecl NGXGetPathFromRegistry(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  LSTATUS LVar1;
  DWORD local_res20 [2];
  HKEY local_18 [2];
  
  ngx::util::logverbose
            ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
             ,0x24,"NGXGetPathFromRegistry","Trying registry key %ls in %ls");
  LVar1 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,param_1,0,0x20019,local_18);
  if (LVar1 == 0) {
    local_res20[0] = 0x104;
    LVar1 = RegQueryValueExW(local_18[0],param_2,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)param_3,
                             local_res20);
    if (LVar1 == 0) {
      ngx::util::logverbose
                ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                 ,0x2b,"NGXGetPathFromRegistry","Found registry key %ls in %ls");
    }
    RegCloseKey(local_18[0]);
  }
  return LVar1;
}

// NGXGetPathUsingQAI @ 14ff36ef0

undefined4 __cdecl NGXGetPathUsingQAI(_LUID param_1,wchar_t *param_2)

{
  wchar_t *_Src;
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  INT_PTR IVar4;
  void *_Memory;
  undefined4 *_Dst;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t **ppwVar9;
  int iStackX_c;
  uint local_res18 [2];
  int local_res20;
  ulonglong local_88;
  void *local_80;
  wchar_t *local_78 [2];
  int local_68;
  undefined4 uStack_64;
  undefined4 *local_60;
  undefined8 local_58;
  ulonglong uVar8;
  
  ngx::util::logverbose
            ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
             ,0x35,"NGXGetPathUsingQAI","Checking for path to NGX using QueryAdapterInfo");
  hModule = LoadLibraryW(L"gdi32.dll");
  if (hModule == (HMODULE)0x0) {
    return 0x8000ffff;
  }
  pFVar1 = GetProcAddress(hModule,"D3DKMTEnumAdapters2");
  pFVar2 = GetProcAddress(hModule,"D3DKMTCloseAdapter");
  pFVar3 = GetProcAddress(hModule,"D3DKMTQueryAdapterInfo");
  if (((pFVar1 == (FARPROC)0x0) || (pFVar2 == (FARPROC)0x0)) || (pFVar3 == (FARPROC)0x0)) {
    return 0x8000ffff;
  }
  uVar6 = 0;
  local_88 = 0;
  local_80 = (void *)0x0;
  (*__guard_check_icall_fptr)(pFVar1);
  IVar4 = (*pFVar1)(&local_88);
  if ((int)(uint)IVar4 < 0) {
    return (uint)IVar4 | 0x10000000;
  }
  if ((uint)local_88 == 0) {
    return 0x8000ffff;
  }
  _Memory = malloc((local_88 & 0xffffffff) * 0x14);
  if (_Memory == (void *)0x0) {
    return 0x8007000e;
  }
  local_80 = _Memory;
  (*__guard_check_icall_fptr)(pFVar1);
  IVar4 = (*pFVar1)(&local_88);
  if ((int)(uint)IVar4 < 0) {
    return (uint)IVar4 | 0x10000000;
  }
  if ((uint)local_88 != 0) {
    iStackX_c = param_1.HighPart;
    uVar8 = uVar6;
    do {
      if ((*(int *)((longlong)_Memory + uVar8 * 0x14 + 8) == iStackX_c) &&
         (*(ulong *)((longlong)_Memory + uVar8 * 0x14 + 4) == param_1.LowPart)) {
        local_res20 = *(int *)((longlong)_Memory + uVar8 * 0x14);
        if (local_res20 != 0) {
          _Dst = malloc(0x430);
          if (_Dst != (undefined4 *)0x0) {
            local_78[0] = L"Parameters\\NGXCore\\NGXPath";
            local_78[1] = L"NGXCore\\NGXPath";
            ppwVar9 = local_78;
            local_res18[0] = 0x80004005;
            uVar8 = uVar6;
            goto LAB_14ff37170;
          }
          ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                         ,0xa2,"NGXGetPathUsingQAI",
                         "error: out of memory... unable to query adapter info");
          uVar7 = 0x80004005;
          goto LAB_14ff370c0;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < (uint)local_88);
  }
  ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                 ,0xa8,"NGXGetPathUsingQAI","error: no matching adapter found");
  uVar7 = 0x80070057;
  goto LAB_14ff370c0;
  while( true ) {
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    ppwVar9 = ppwVar9 + 1;
    if (1 < uVar7) break;
LAB_14ff37170:
    memset(_Dst,0,0x430);
    _Src = *ppwVar9;
    ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                   ,0x83,"NGXGetPathUsingQAI","Attempting to read from %ls");
    _Dst[1] = _Dst[1] & 0xfffffffe;
    *_Dst = 0;
    _Dst[0x84] = 1;
    wcscpy_s((wchar_t *)(_Dst + 2),0x104,_Src);
    _local_68 = CONCAT44(0x30,local_res20);
    local_58 = 0x430;
    local_60 = _Dst;
    (*__guard_check_icall_fptr)(pFVar3);
    IVar4 = (*pFVar3)(&local_68);
    if ((-1 < (int)IVar4) && (_Dst[0x87] == 0)) {
      wcscpy_s(param_2,0x104,(wchar_t *)(_Dst + 0x88));
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                     ,0x94,"NGXGetPathUsingQAI","Path to driverStore found using QAI: %ls");
      local_res18[0] = 0;
      break;
    }
  }
  free(_Dst);
  uVar7 = local_res18[0];
LAB_14ff370c0:
  if ((uint)local_88 != 0) {
    do {
      local_res18[0] = *(uint *)((longlong)_Memory + uVar6 * 0x14);
      (*__guard_check_icall_fptr)(pFVar2);
      (*pFVar2)(local_res18);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < (uint)local_88);
  }
  free(_Memory);
  FreeLibrary(hModule);
  return uVar7;
}

// NGXLoadCoreLibrary @ 14ff372d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HINSTANCE__ * __cdecl NGXLoadCoreLibrary(_LUID param_1)

{
  DWORD DVar1;
  int iVar2;
  LSTATUS LVar3;
  long lVar4;
  wchar_t *pwVar5;
  HINSTANCE__ *pHVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t **ppwVar9;
  HINSTANCE__ *pHVar10;
  HINSTANCE__ *pHVar11;
  ulonglong uVar12;
  undefined1 auStackY_2a8 [32];
  wchar_t **local_278;
  wchar_t **ppwStack_270;
  wchar_t **local_268;
  wchar_t *local_260;
  HKEY local_258;
  undefined8 local_250;
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_250 = 0xfffffffffffffffe;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pHVar11 = (HINSTANCE__ *)0x0;
  local_278 = (wchar_t **)0x0;
  ppwStack_270 = (wchar_t **)0x0;
  local_268 = (wchar_t **)0x0;
  std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate
            (&local_278,1);
  if (ppwStack_270 != (wchar_t **)0x0) {
    *ppwStack_270 = L"\\_nvngx.dll";
  }
  ppwStack_270 = ppwStack_270 + 1;
  local_260 = L"\\nvngx.dll";
  if ((&local_260 < ppwStack_270) && (local_278 <= &local_260)) {
    lVar8 = (longlong)&local_260 - (longlong)local_278;
    if ((ppwStack_270 == local_268) && ((longlong)local_268 - (longlong)ppwStack_270 >> 3 == 0)) {
      lVar7 = (longlong)ppwStack_270 - (longlong)local_278 >> 3;
      if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Xlen
                  (&local_278);
      }
      pHVar10 = (HINSTANCE__ *)(lVar7 + 1);
      uVar12 = (longlong)local_268 - (longlong)local_278 >> 3;
      pHVar6 = pHVar11;
      if (uVar12 <= 0x1fffffffffffffff - (uVar12 >> 1)) {
        pHVar6 = (HINSTANCE__ *)((uVar12 >> 1) + uVar12);
      }
      if (pHVar10 <= pHVar6) {
        pHVar10 = pHVar6;
      }
      std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate
                (&local_278,(ulong64)pHVar10);
    }
    if (ppwStack_270 != (wchar_t **)0x0) {
      *ppwStack_270 = local_278[lVar8 >> 3];
    }
  }
  else {
    if ((ppwStack_270 == local_268) && ((longlong)local_268 - (longlong)ppwStack_270 >> 3 == 0)) {
      lVar8 = (longlong)ppwStack_270 - (longlong)local_278 >> 3;
      if (lVar8 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Xlen
                  (&local_278);
      }
      pHVar10 = (HINSTANCE__ *)(lVar8 + 1);
      uVar12 = (longlong)local_268 - (longlong)local_278 >> 3;
      pHVar6 = pHVar11;
      if (uVar12 <= 0x1fffffffffffffff - (uVar12 >> 1)) {
        pHVar6 = (HINSTANCE__ *)((uVar12 >> 1) + uVar12);
      }
      if (pHVar10 <= pHVar6) {
        pHVar10 = pHVar6;
      }
      std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate
                (&local_278,(ulong64)pHVar10);
    }
    if (ppwStack_270 != (wchar_t **)0x0) {
      *ppwStack_270 = L"\\nvngx.dll";
    }
  }
  ppwStack_270 = ppwStack_270 + 1;
  DVar1 = GetModuleFileNameW((HMODULE)0x0,local_248,0x104);
  pHVar10 = pHVar11;
  pHVar6 = pHVar11;
  if (DVar1 == 0) {
    ngx::util::logverbose
              ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
               ,0xd9,"NGXLoadCoreLibrary","warning: unable to find filename for the application");
  }
  else {
    while (pHVar10 < (HINSTANCE__ *)((longlong)ppwStack_270 - (longlong)local_278 >> 3)) {
      pwVar5 = wcsrchr(local_248,L'\\');
      if (pwVar5 != (wchar_t *)0x0) {
        *pwVar5 = L'\0';
      }
      wcscat_s(local_248,0x104,local_278[(longlong)pHVar10]);
      pHVar6 = ngx::nvLoadSignedLibraryExW(local_248,0,1);
      if (pHVar6 != (HINSTANCE__ *)0x0) {
        ngx::util::logverbose
                  ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                   ,0x12a,"NGXLoadLibrary","Loaded NGXCore from path (%ls)");
        goto LAB_14ff37924;
      }
      GetLastError();
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                     ,0x12e,"NGXLoadLibrary","error: failed to load NGXCore: %d (%ls)");
      pHVar10 = (HINSTANCE__ *)((longlong)&pHVar10->unused + 1);
    }
    if (pHVar6 != (HINSTANCE__ *)0x0) goto LAB_14ff37924;
  }
  ngx::util::logverbose
            ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
             ,0xdf,"NGXLoadCoreLibrary","NGXCore not found next to the application");
  iVar2 = NGXGetPathUsingQAI(param_1,local_248);
  if (iVar2 < 0) {
    ngx::util::logverbose
              ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
               ,0x24,"NGXGetPathFromRegistry","Trying registry key %ls in %ls");
    LVar3 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                          L"System\\CurrentControlSet\\Services\\nvlddmkm\\Parameters\\NGXCore",0,
                          0x20019,&local_258);
    if (LVar3 == 0) {
      local_260 = (wchar_t *)CONCAT44(local_260._4_4_,0x104);
      LVar3 = RegQueryValueExW(local_258,L"NGXPath",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_248,
                               (LPDWORD)&local_260);
      if (LVar3 == 0) {
        ngx::util::logverbose
                  ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                   ,0x2b,"NGXGetPathFromRegistry","Found registry key %ls in %ls");
      }
      RegCloseKey(local_258);
    }
    if (LVar3 != 0) {
      ngx::util::logverbose
                ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                 ,0x24,"NGXGetPathFromRegistry","Trying registry key %ls in %ls");
      LVar3 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                            L"System\\CurrentControlSet\\Services\\nvlddmkm\\NGXCore",0,0x20019,
                            &local_258);
      if (LVar3 == 0) {
        local_260 = (wchar_t *)CONCAT44(local_260._4_4_,0x104);
        LVar3 = RegQueryValueExW(local_258,L"NGXPath",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_248,
                                 (LPDWORD)&local_260);
        if (LVar3 == 0) {
          ngx::util::logverbose
                    ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                     ,0x2b,"NGXGetPathFromRegistry","Found registry key %ls in %ls");
        }
        RegCloseKey(local_258);
      }
      if ((LVar3 != 0) &&
         (lVar4 = NGXGetPathFromRegistry
                            (L"SOFTWARE\\NVIDIA Corporation\\Global\\NGXCore",L"FullPath",local_248)
         , lVar4 != 0)) {
        ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                       ,0x114,"NGXLoadCoreLibrary",
                       "error: failed to locate NGX core path via registry key - error %ld");
        goto LAB_14ff37924;
      }
    }
  }
  if ((longlong)ppwStack_270 - (longlong)local_278 >> 3 != 0) {
    do {
      wcscat_s(local_248,0x104,local_278[(longlong)pHVar11]);
      pHVar6 = ngx::nvLoadSignedLibraryExW(local_248,0,0);
      if (pHVar6 != (HINSTANCE__ *)0x0) {
        ngx::util::logverbose
                  ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                   ,0x12a,"NGXLoadLibrary","Loaded NGXCore from path (%ls)");
        ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                       ,0xff,"NGXLoadCoreLibrary","Loading %ls succeeded");
        goto LAB_14ff37924;
      }
      GetLastError();
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                     ,0x12e,"NGXLoadLibrary","error: failed to load NGXCore: %d (%ls)");
      ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                     ,0x104,"NGXLoadCoreLibrary","warning: failed to load %ls");
      pwVar5 = wcsrchr(local_248,L'\\');
      if (pwVar5 != (wchar_t *)0x0) {
        *pwVar5 = L'\0';
      }
      pHVar11 = (HINSTANCE__ *)((longlong)&pHVar11->unused + 1);
    } while (pHVar11 < (HINSTANCE__ *)((longlong)ppwStack_270 - (longlong)local_278 >> 3));
  }
  ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                 ,0x10f,"NGXLoadCoreLibrary","error: failed to load nvngx");
LAB_14ff37924:
  if (local_278 != (wchar_t **)0x0) {
    uVar12 = (longlong)local_268 - (longlong)local_278 >> 3;
    if (0x1fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    ppwVar9 = local_278;
    if (0xfff < uVar12 * 8) {
      if (((ulonglong)local_278 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      ppwVar9 = (wchar_t **)local_278[-1];
      if (local_278 <= ppwVar9) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)local_278 - (longlong)ppwVar9) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)local_278 - (longlong)ppwVar9)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppwVar9);
  }
  return pHVar6;
}

// NGXLoadLibrary @ 14ff379d0

HINSTANCE__ * __cdecl NGXLoadLibrary(wchar_t *param_1,int param_2)

{
  HINSTANCE__ *pHVar1;
  
  if (((uint)param_2 >> 0x13 & 1) == 0) {
    pHVar1 = (HINSTANCE__ *)LoadLibraryW(param_1);
  }
  else {
    pHVar1 = ngx::nvLoadSignedLibraryExW(param_1,0,(uint)param_2 >> 0x12 & 1);
  }
  if (pHVar1 != (HINSTANCE__ *)0x0) {
    ngx::util::logverbose
              ("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
               ,0x12a,"NGXLoadLibrary","Loaded NGXCore from path (%ls)");
    return pHVar1;
  }
  GetLastError();
  ngx::util::log("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_310_4/source/lib/nvsdk_ngx_lib_windows.cpp"
                 ,0x12e,"NGXLoadLibrary","error: failed to load NGXCore: %d (%ls)");
  return (HINSTANCE__ *)0x0;
}

// QueryRegistryValue @ 14ff37a80

long __cdecl
ngx::QueryRegistryValue
          (HKEY__ *param_1,wchar_t *param_2,wchar_t *param_3,ulong *param_4,uchar **param_5)

{
  _func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *p_Var1;
  _func___cdecl_long_HKEY___ptr *p_Var2;
  DWORD DVar3;
  HKEY__ *local_18 [2];
  
  local_18[0] = (HKEY__ *)0x0;
  if ((((hModAdvapi32 == (HINSTANCE__ *)0x0) &&
       (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
       hModAdvapi32 == (HINSTANCE__ *)0x0)) ||
      ((pfnRegOpenKeyExW ==
        (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0 &&
       (pfnRegOpenKeyExW =
             (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)
             GetProcAddress((HMODULE)hModAdvapi32,"RegOpenKeyExW"),
       pfnRegOpenKeyExW ==
       (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0)))) ||
     ((pfnRegCloseKey == (_func___cdecl_long_HKEY___ptr *)0x0 &&
      (pfnRegCloseKey =
            (_func___cdecl_long_HKEY___ptr *)GetProcAddress((HMODULE)hModAdvapi32,"RegCloseKey"),
      pfnRegCloseKey == (_func___cdecl_long_HKEY___ptr *)0x0)))) {
    DVar3 = GetLastError();
  }
  else {
    p_Var1 = pfnRegOpenKeyExW;
    (*__guard_check_icall_fptr)(pfnRegOpenKeyExW);
    DVar3 = (*p_Var1)(param_1,param_2,0,1,local_18);
    if (DVar3 == 0) {
      DVar3 = QueryRegistryValueFromKey(local_18[0],param_3,param_4,param_5);
      p_Var2 = pfnRegCloseKey;
      (*__guard_check_icall_fptr)(pfnRegCloseKey);
      (*p_Var2)(local_18[0]);
    }
  }
  return DVar3;
}

// QueryRegistryValueFromKey @ 14ff37bc0

long __cdecl
ngx::QueryRegistryValueFromKey(HKEY__ *param_1,wchar_t *param_2,ulong *param_3,uchar **param_4)

{
  _func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr *p_Var1;
  long lVar2;
  DWORD DVar3;
  uchar *puVar4;
  int iVar5;
  ulong local_28;
  ulong local_24 [3];
  
  local_24[0] = 0;
  local_28 = 0;
  if (((hModAdvapi32 != (HINSTANCE__ *)0x0) ||
      (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
      hModAdvapi32 != (HINSTANCE__ *)0x0)) &&
     ((pfnRegQueryValueExW !=
       (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr *)0x0 ||
      (pfnRegQueryValueExW =
            (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr *)
            GetProcAddress((HMODULE)hModAdvapi32,"RegQueryValueExW"),
      pfnRegQueryValueExW !=
      (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr *)0x0)))) {
    p_Var1 = pfnRegQueryValueExW;
    (*__guard_check_icall_fptr)(pfnRegQueryValueExW);
    lVar2 = (*p_Var1)(param_1,param_2,(ulong *)0x0,local_24,(uchar *)0x0,&local_28);
    if (lVar2 != 0) {
      return lVar2;
    }
    if (local_28 == 0) {
      return 0;
    }
    iVar5 = 0;
    if (local_24[0] != 0) {
      if (local_24[0] < 3) {
        iVar5 = 2;
      }
      else {
        iVar5 = 0;
        if (local_24[0] == 7) {
          iVar5 = 4;
        }
      }
    }
    puVar4 = LocalAlloc(0x40,(ulonglong)(iVar5 + local_28));
    *param_4 = puVar4;
    p_Var1 = pfnRegQueryValueExW;
    if (puVar4 != (uchar *)0x0) {
      (*__guard_check_icall_fptr)(pfnRegQueryValueExW);
      lVar2 = (*p_Var1)(param_1,param_2,(ulong *)0x0,param_3,puVar4,&local_28);
      if (lVar2 == 0) {
        return 0;
      }
      LocalFree(*param_4);
      *param_4 = (uchar *)0x0;
      return lVar2;
    }
  }
  DVar3 = GetLastError();
  return DVar3;
}

// SafePathCombine @ 14ff37d30

wchar_t * __cdecl ngx::SafePathCombine(wchar_t *param_1,wchar_t *param_2)

{
  ulong64 uBytes;
  int iVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  pwVar2 = param_2;
  if ((param_1 != (wchar_t *)0x0) && (pwVar2 = param_1, param_2 != (wchar_t *)0x0)) {
    lVar3 = -1;
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (param_1[lVar4] != L'\0');
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != L'\0');
    if ((((lVar4 == 0) || (param_1[lVar5] == L'\\')) || (lVar3 == 0)) || (*param_2 == L'\\')) {
      lVar5 = 0;
    }
    else {
      lVar5 = 1;
    }
    uBytes = (lVar5 + lVar3 + lVar4) * 2 + 2;
    pwVar2 = LocalAlloc(0x40,uBytes);
    if ((pwVar2 != (wchar_t *)0x0) &&
       (((iVar1 = StringCbCopyW(pwVar2,uBytes,param_1), iVar1 < 0 ||
         (((int)lVar5 != 0 && (iVar1 = StringCbCatW(pwVar2,uBytes,L"\\"), iVar1 < 0)))) ||
        (iVar1 = StringCbCatW(pwVar2,uBytes,param_2), iVar1 < 0)))) {
      LocalFree(pwVar2);
      pwVar2 = (wchar_t *)0x0;
    }
    return pwVar2;
  }
  pwVar2 = SafeStringDupe(pwVar2);
  return pwVar2;
}

// SafeStringDupe @ 14ff37e40

wchar_t * __cdecl ngx::SafeStringDupe(wchar_t *param_1)

{
  long lVar1;
  wchar_t *hMem;
  longlong lVar2;
  __uint64 _Var4;
  longlong lVar3;
  
  if (param_1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (param_1[lVar2] != L'\0');
  _Var4 = lVar3 + 2;
  hMem = LocalAlloc(0x40,_Var4 * 2);
  if (hMem == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  lVar1 = StringCchCopyW(hMem,_Var4,param_1);
  if (lVar1 < 0) {
    LocalFree(hMem);
    hMem = (wchar_t *)0x0;
  }
  return hMem;
}

// SafeStringDupeN @ 14ff37ed0

wchar_t * __cdecl ngx::SafeStringDupeN(wchar_t *param_1,long64 param_2)

{
  int iVar1;
  wchar_t *hMem;
  ulonglong uVar2;
  
  if ((param_1 != (wchar_t *)0x0) && (-1 < param_2)) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (param_1[uVar2] != L'\0');
    if ((ulonglong)param_2 < uVar2) {
      uVar2 = param_2;
    }
    hMem = LocalAlloc(0x40,(uVar2 + 1) * 2);
    if ((hMem != (wchar_t *)0x0) &&
       (iVar1 = StringCchCopyNW(hMem,uVar2 + 1,param_1,param_2), iVar1 < 0)) {
      LocalFree(hMem);
      hMem = (wchar_t *)0x0;
    }
    return hMem;
  }
  return (wchar_t *)0x0;
}

// StartsWithChar @ 14ff37f80

int __cdecl ngx::StartsWithChar(wchar_t *param_1,wchar_t param_2)

{
  if ((param_1 != (wchar_t *)0x0) && (*param_1 == param_2)) {
    return 1;
  }
  return 0;
}

// StringCbCatW @ 14ff37fa0

int __cdecl StringCbCatW(wchar_t *param_1,ulong64 param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar5 = 0;
  uVar7 = param_2 >> 1;
  iVar6 = 0;
  if (0x7ffffffe < uVar7 - 1) {
    iVar6 = -0x7ff8ffa9;
  }
  uVar2 = uVar7;
  pwVar3 = param_1;
  if (-1 < iVar6) {
    for (; (uVar2 != 0 && (*pwVar3 != L'\0')); pwVar3 = pwVar3 + 1) {
      uVar2 = uVar2 - 1;
    }
    iVar6 = -0x7ff8ffa9;
    if (uVar2 != 0) {
      lVar5 = uVar7 - uVar2;
      iVar6 = 0;
    }
  }
  if (-1 < iVar6) {
    pwVar3 = param_1 + lVar5;
    lVar4 = uVar7 - lVar5;
    if (lVar4 != 0) {
      lVar5 = lVar5 + 0x7ffffffe + (lVar4 - uVar7);
      lVar8 = (longlong)param_3 - (longlong)pwVar3;
      do {
        if ((lVar5 == 0) || (wVar1 = *(wchar_t *)(lVar8 + (longlong)pwVar3), wVar1 == L'\0')) {
          iVar6 = 0;
          if (lVar4 != 0) goto LAB_14ff38060;
          break;
        }
        *pwVar3 = wVar1;
        lVar5 = lVar5 + -1;
        pwVar3 = pwVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    pwVar3 = pwVar3 + -1;
    iVar6 = -0x7ff8ff86;
LAB_14ff38060:
    *pwVar3 = L'\0';
  }
  return iVar6;
}

// StringCbCopyW @ 14ff38080

undefined4 __cdecl StringCbCopyW(wchar_t *param_1,ulong64 param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = param_2 >> 1;
  iVar6 = 0;
  if (0x7ffffffe < uVar3 - 1) {
    iVar6 = -0x7ff8ffa9;
  }
  if (-1 < iVar6) {
    iVar6 = 0;
    if (uVar3 != 0) {
      lVar5 = 0x7ffffffe - uVar3;
      lVar4 = (longlong)param_3 - (longlong)param_1;
      pwVar2 = param_1;
      while ((param_1 = pwVar2, lVar5 + uVar3 != 0 &&
             (wVar1 = *(wchar_t *)(lVar4 + (longlong)param_1), wVar1 != L'\0'))) {
        *param_1 = wVar1;
        uVar3 = uVar3 - 1;
        pwVar2 = param_1 + 1;
        if (uVar3 == 0) {
          *param_1 = L'\0';
          return 0x8007007a;
        }
      }
      if (uVar3 != 0) goto LAB_14ff3810d;
    }
    param_1[-1] = L'\0';
    return 0x8007007a;
  }
  if (uVar3 == 0) {
    return iVar6;
  }
LAB_14ff3810d:
  *param_1 = L'\0';
  return iVar6;
}

// StringCchCatW @ 14ff38120

int __cdecl StringCchCatW(wchar_t *param_1,ulong64 param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  ulong64 uVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar5 = 0;
  iVar6 = 0;
  if (0x7ffffffe < param_2 - 1) {
    iVar6 = -0x7ff8ffa9;
  }
  pwVar3 = param_1;
  uVar2 = param_2;
  if (-1 < iVar6) {
    for (; (uVar2 != 0 && (*pwVar3 != L'\0')); pwVar3 = pwVar3 + 1) {
      uVar2 = uVar2 - 1;
    }
    iVar6 = -0x7ff8ffa9;
    if (uVar2 != 0) {
      lVar5 = param_2 - uVar2;
      iVar6 = 0;
    }
  }
  if (-1 < iVar6) {
    pwVar3 = param_1 + lVar5;
    lVar4 = param_2 - lVar5;
    if (lVar4 != 0) {
      lVar5 = lVar5 + 0x7ffffffe + (lVar4 - param_2);
      lVar7 = (longlong)param_3 - (longlong)pwVar3;
      do {
        if ((lVar5 == 0) || (wVar1 = *(wchar_t *)(lVar7 + (longlong)pwVar3), wVar1 == L'\0')) {
          iVar6 = 0;
          if (lVar4 != 0) goto LAB_14ff381e0;
          break;
        }
        *pwVar3 = wVar1;
        lVar5 = lVar5 + -1;
        pwVar3 = pwVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    pwVar3 = pwVar3 + -1;
    iVar6 = -0x7ff8ff86;
LAB_14ff381e0:
    *pwVar3 = L'\0';
  }
  return iVar6;
}

// StringCchCopyNW @ 14ff38200

undefined4 __cdecl
StringCchCopyNW(wchar_t *param_1,ulong64 param_2,wchar_t *param_3,ulong64 param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0x7ffffffe < param_2 - 1) {
    iVar5 = -0x7ff8ffa9;
  }
  if (-1 < iVar5) {
    if (0x7ffffffe < param_4) {
      *param_1 = L'\0';
      return 0x80070057;
    }
    iVar5 = 0;
    if (param_2 != 0) {
      lVar4 = param_4 - param_2;
      lVar3 = (longlong)param_3 - (longlong)param_1;
      pwVar2 = param_1;
      while ((param_1 = pwVar2, lVar4 + param_2 != 0 &&
             (wVar1 = *(wchar_t *)(lVar3 + (longlong)param_1), wVar1 != L'\0'))) {
        *param_1 = wVar1;
        param_2 = param_2 - 1;
        pwVar2 = param_1 + 1;
        if (param_2 == 0) {
          *param_1 = L'\0';
          return 0x8007007a;
        }
      }
      if (param_2 != 0) goto LAB_14ff3829e;
    }
    param_1[-1] = L'\0';
    return 0x8007007a;
  }
  if (param_2 == 0) {
    return iVar5;
  }
LAB_14ff3829e:
  *param_1 = L'\0';
  return iVar5;
}

// StringCopyWorkerW @ 14ff382c0

undefined4 __cdecl
StringCopyWorkerW(wchar_t *param_1,ulong64 param_2,ulong64 *param_3,wchar_t *param_4,ulong64 param_5
                 )

{
  wchar_t wVar1;
  longlong lVar2;
  ulong64 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    lVar2 = (longlong)param_4 - (longlong)param_1;
    do {
      if ((param_5 == 0) || (wVar1 = *(wchar_t *)(lVar2 + (longlong)param_1), wVar1 == L'\0')) {
        if (param_2 != 0) goto LAB_14ff3831a;
        break;
      }
      *param_1 = wVar1;
      param_5 = param_5 - 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  param_1 = param_1 + -1;
  uVar4 = 0x8007007a;
  uVar3 = uVar3 - 1;
LAB_14ff3831a:
  *param_1 = L'\0';
  if (param_3 != (ulong64 *)0x0) {
    *param_3 = uVar3;
  }
  return uVar4;
}

// StringLengthWorkerW @ 14ff38340

undefined4 __cdecl StringLengthWorkerW(wchar_t *param_1,ulong64 param_2,ulong64 *param_3)

{
  undefined4 uVar1;
  ulong64 uVar2;
  
  uVar2 = param_2;
  for (; (uVar2 != 0 && (*param_1 != L'\0')); param_1 = param_1 + 1) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = 0x80070057;
  if (uVar2 != 0) {
    uVar1 = 0;
  }
  if (param_3 != (ulong64 *)0x0) {
    if (uVar2 != 0) {
      *param_3 = param_2 - uVar2;
      return uVar1;
    }
    *param_3 = 0;
  }
  return uVar1;
}

// StringValidateDestAndLengthW @ 14ff38380

undefined4 __cdecl
StringValidateDestAndLengthW(wchar_t *param_1,ulong64 param_2,ulong64 *param_3,ulong64 param_4)

{
  ulong64 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 == 0) || (param_4 < param_2)) {
    iVar3 = -0x7ff8ffa9;
  }
  uVar1 = param_2;
  if (iVar3 < 0) {
    *param_3 = 0;
    return iVar3;
  }
  for (; (uVar1 != 0 && (*param_1 != L'\0')); param_1 = param_1 + 1) {
    uVar1 = uVar1 - 1;
  }
  uVar2 = 0x80070057;
  if (uVar1 != 0) {
    uVar2 = 0;
  }
  if (param_3 != (ulong64 *)0x0) {
    if (uVar1 != 0) {
      *param_3 = param_2 - uVar1;
      return uVar2;
    }
    *param_3 = 0;
  }
  return uVar2;
}

// StringValidateDestW @ 14ff383f0

undefined4 __cdecl StringValidateDestW(wchar_t *param_1,ulong64 param_2,ulong64 param_3)

{
  if ((param_2 != 0) && (param_2 <= param_3)) {
    return 0;
  }
  return 0x80070057;
}

// ValidateCreateProcessParameters @ 14ff38410

int __cdecl ngx::ValidateCreateProcessParameters(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  size_t uBytes;
  longlong lVar1;
  int iVar2;
  DWORD dwErrCode;
  longlong lVar3;
  wchar_t *_Str;
  wchar_t *pwVar4;
  int local_res8 [2];
  
  dwErrCode = 0;
  SetLastError(0);
  _Str = (wchar_t *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    if (param_2 != (wchar_t *)0x0) {
      lVar3 = -1;
      do {
        lVar1 = lVar3 + 1;
        lVar3 = lVar3 + 1;
      } while (param_2[lVar1] != L'\0');
      uBytes = lVar3 * 2 + 2;
      _Str = LocalAlloc(0x40,uBytes);
      if (_Str == (wchar_t *)0x0) {
        return 0;
      }
      memcpy(_Str,param_2,uBytes);
      pwVar4 = L"\"";
      if (*_Str != L'\"') {
        pwVar4 = L" ";
      }
      param_1 = wcstok(_Str,pwVar4);
      if (param_1 != (wchar_t *)0x0) goto LAB_14ff384ca;
      LocalFree(_Str);
    }
    SetLastError(0x57);
    return 0;
  }
LAB_14ff384ca:
  iVar2 = ContainsAbsolutePath(param_1);
  if (iVar2 == 0) {
    LocalFree(_Str);
    SetLastError(0xa0);
    return 0;
  }
  iVar2 = IsTrustedLocation(param_1);
  if (iVar2 == 0) {
    local_res8[0] = 0;
    pwVar4 = (wchar_t *)local_res8;
    if (param_3 == 0) {
      pwVar4 = (wchar_t *)0x0;
    }
    iVar2 = nvVerifyFileSignatureW(param_1,(int *)pwVar4);
    if (((iVar2 != 0) && (param_3 != 0)) && (local_res8[0] == 0)) {
      SetLastError(0x80092009);
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      dwErrCode = GetLastError();
    }
    LocalFree(_Str);
    if (iVar2 == 0) {
      SetLastError(dwErrCode);
    }
    return (uint)(iVar2 != 0);
  }
  LocalFree(_Str);
  return 1;
}

// VerifyPrimarySignatureCN @ 14ff38590

int __cdecl ngx::VerifyPrimarySignatureCN(void *param_1,void *param_2,int *param_3)

{
  _func___cdecl_int__CERT_CONTEXT_ptr *p_Var1;
  _func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr *p_Var2;
  _func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *p_Var3;
  int iVar4;
  DWORD dwErrCode;
  int iVar5;
  HLOCAL hMem;
  _CERT_CONTEXT *p_Var6;
  uint local_res20 [2];
  undefined1 local_f8 [8];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  p_Var3 = pfnCryptMsgGetParam;
  hMem = (HLOCAL)0x0;
  p_Var6 = (_CERT_CONTEXT *)0x0;
  dwErrCode = 0;
  (*__guard_check_icall_fptr)(pfnCryptMsgGetParam);
  iVar4 = (*p_Var3)(param_2,6,0,(void *)0x0,local_res20);
  if (iVar4 == 0) {
    dwErrCode = GetLastError();
    iVar4 = 0;
  }
  else {
    hMem = LocalAlloc(0x40,(ulonglong)local_res20[0]);
    p_Var3 = pfnCryptMsgGetParam;
    if (hMem == (HLOCAL)0x0) {
      dwErrCode = GetLastError();
      iVar4 = 0;
    }
    else {
      (*__guard_check_icall_fptr)(pfnCryptMsgGetParam);
      iVar4 = (*p_Var3)(param_2,6,0,hMem,local_res20);
      p_Var2 = pfnCertFindCertificateInStore;
      if (iVar4 == 0) {
        dwErrCode = GetLastError();
      }
      else {
        local_c8 = *(undefined8 *)((longlong)hMem + 8);
        uStack_c0 = *(undefined8 *)((longlong)hMem + 0x10);
        local_f0 = *(undefined4 *)((longlong)hMem + 0x18);
        uStack_ec = *(undefined4 *)((longlong)hMem + 0x1c);
        uStack_e8 = *(undefined4 *)((longlong)hMem + 0x20);
        uStack_e4 = *(undefined4 *)((longlong)hMem + 0x24);
        (*__guard_check_icall_fptr)(pfnCertFindCertificateInStore);
        p_Var6 = (*p_Var2)(param_1,0x10001,0,0xb0000,local_f8,(_CERT_CONTEXT *)0x0);
        if (p_Var6 == (_CERT_CONTEXT *)0x0) {
          dwErrCode = GetLastError();
          iVar4 = 0;
        }
        else if (param_3 != (int *)0x0) {
          iVar5 = IsPeNvidiaSigned(p_Var6);
          *param_3 = iVar5;
        }
      }
    }
  }
  LocalFree(hMem);
  p_Var1 = pfnCertFreeCertificateContext;
  if (p_Var6 != (_CERT_CONTEXT *)0x0) {
    (*__guard_check_icall_fptr)(pfnCertFreeCertificateContext);
    (*p_Var1)(p_Var6);
  }
  SetLastError(dwErrCode);
  return iVar4;
}

// VerifySignature @ 14ff38720

int __cdecl ngx::VerifySignature(wchar_t *param_1,int param_2)

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

// VerifySingleSignature @ 14ff38780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
ngx::VerifySingleSignature(_NVWINTRUST_DATA *param_1,void *param_2,void *param_3,int *param_4)

{
  _func___cdecl_int__CERT_CONTEXT_ptr *p_Var1;
  _func___cdecl__CERT_CONTEXT_ptr_void_ptr__CERT_CONTEXT_ptr__CERT_CONTEXT_ptr_ulong_ptr *p_Var2;
  _func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *p_Var3;
  _func___cdecl__CRYPT_PROVIDER_DATA_ptr_void_ptr *p_Var4;
  _func___cdecl__CRYPT_PROVIDER_SGNR_ptr__CRYPT_PROVIDER_DATA_ptr_ulong_int_ulong *p_Var5;
  _func___cdecl__CRYPT_PROVIDER_CERT_ptr__CRYPT_PROVIDER_SGNR_ptr_ulong *p_Var6;
  DWORD DVar7;
  DWORD dwErrCode;
  int iVar8;
  _CRYPT_PROVIDER_DATA *p_Var9;
  _CRYPT_PROVIDER_SGNR *p_Var10;
  _CRYPT_PROVIDER_CERT *p_Var11;
  _CERT_CONTEXT *p_Var12;
  int iVar13;
  undefined1 auStack_78 [32];
  ulong local_58 [2];
  _GUID local_50;
  ulonglong local_40;
  
  p_Var3 = pfnWinVerifyTrust;
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  p_Var12 = (_CERT_CONTEXT *)0x0;
  iVar8 = 0;
  iVar13 = 0;
  local_50.Data1 = 0xaac56b;
  local_50.Data2 = 0xcd44;
  local_50.Data3 = 0x11d0;
  local_50.Data4[0] = 0x8c;
  local_50.Data4[1] = 0xc2;
  local_50.Data4[2] = '\0';
  local_50.Data4[3] = 0xc0;
  local_50.Data4[4] = 'O';
  local_50.Data4[5] = 0xc2;
  local_50.Data4[6] = 0x95;
  local_50.Data4[7] = 0xee;
  if (param_1 == (_NVWINTRUST_DATA *)0x0) {
    dwErrCode = 0xa0;
    goto LAB_14ff38943;
  }
  (*__guard_check_icall_fptr)(pfnWinVerifyTrust);
  dwErrCode = (*p_Var3)((HWND__ *)0x0,&local_50,param_1);
  p_Var4 = pfnWTHelperProvDataFromStateData;
  if ((dwErrCode == 0) || (iVar13 = 0, dwErrCode == 0x800b010a)) {
    (*__guard_check_icall_fptr)(pfnWTHelperProvDataFromStateData);
    p_Var9 = (*p_Var4)(param_1->hWVTStateData);
    p_Var5 = pfnWTHelperGetProvSignerFromChain;
    iVar13 = iVar8;
    if (p_Var9 == (_CRYPT_PROVIDER_DATA *)0x0) {
      dwErrCode = GetLastError();
    }
    else {
      (*__guard_check_icall_fptr)(pfnWTHelperGetProvSignerFromChain);
      p_Var10 = (*p_Var5)(p_Var9,0,0,0);
      p_Var6 = pfnWTHelperGetProvCertFromChain;
      if (p_Var10 == (_CRYPT_PROVIDER_SGNR *)0x0) {
        dwErrCode = GetLastError();
        p_Var12 = (_CERT_CONTEXT *)0x0;
      }
      else {
        (*__guard_check_icall_fptr)(pfnWTHelperGetProvCertFromChain);
        p_Var11 = (*p_Var6)(p_Var10,0);
        p_Var2 = pfnCertGetIssuerCertificateFromStore;
        if (p_Var11 == (_CRYPT_PROVIDER_CERT *)0x0) {
LAB_14ff3888f:
          dwErrCode = GetLastError();
        }
        else {
          DVar7 = dwErrCode;
          if (dwErrCode == 0x800b010a) {
            local_58[0] = 0;
            (*__guard_check_icall_fptr)(pfnCertGetIssuerCertificateFromStore);
            p_Var12 = (*p_Var2)(param_2,p_Var11->pCert,(_CERT_CONTEXT *)0x0,local_58);
            if (p_Var12 == (_CERT_CONTEXT *)0x0) goto LAB_14ff3888f;
            iVar8 = IsNvidiaSubordinatePublicKey
                              (&(p_Var12->pCertInfo->SubjectPublicKeyInfo).PublicKey);
            iVar13 = 0;
            DVar7 = 0;
            if (iVar8 == 0) goto LAB_14ff388fd;
          }
          dwErrCode = DVar7;
          iVar13 = 1;
          if (param_4 != (int *)0x0) {
            iVar8 = IsPeNvidiaSigned(p_Var11->pCert);
            *param_4 = iVar8;
          }
        }
      }
    }
  }
LAB_14ff388fd:
  param_1->dwStateAction = 2;
  p_Var3 = pfnWinVerifyTrust;
  (*__guard_check_icall_fptr)(pfnWinVerifyTrust);
  (*p_Var3)((HWND__ *)0x0,&local_50,param_1);
  p_Var1 = pfnCertFreeCertificateContext;
  if (p_Var12 != (_CERT_CONTEXT *)0x0) {
    (*__guard_check_icall_fptr)(pfnCertFreeCertificateContext);
    (*p_Var1)(p_Var12);
  }
LAB_14ff38943:
  SetLastError(dwErrCode);
  return iVar13;
}

// _Allocate @ 14ff38970

void * __cdecl std::_Allocate(ulong64 param_1,ulong64 param_2,bool param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  if (param_1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    uVar4 = param_1 * param_2;
    if ((param_3) && (0xfff < uVar4)) {
      if (uVar4 + 0x27 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      pvVar2 = ::operator_new(uVar4 + 0x27);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 + -8) = pvVar2;
      return pvVar3;
    }
    pvVar2 = ::operator_new(uVar4);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return pvVar2;
}

// _Deallocate @ 14ff38a00

void __cdecl std::_Deallocate(void *param_1,ulong64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar2 = param_1;
  if (0xfff < param_2 * param_3) {
    if (((ulonglong)param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar2 = *(void **)((longlong)param_1 + -8);
    if (param_1 <= pvVar2) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if ((ulonglong)((longlong)param_1 - (longlong)pvVar2) < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < (ulonglong)((longlong)param_1 - (longlong)pvVar2)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pvVar2);
  return;
}

// _Destroy @ 14ff38a80

void __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Destroy
          (void *this,wchar_t **param_1,wchar_t **param_2)

{
  return;
}

// _Get_data @ 14ff38a90

_Vector_val<std::_Simple_types<wchar_t_const_*>_> * __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Get_data(void *this)

{
  return this;
}

// _Get_data @ 14ff38aa0

_Vector_val<std::_Simple_types<wchar_t_const_*>_> * __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Get_data(void *this)

{
  return this;
}

// _Get_first @ 14ff38ab0

_Wrap_alloc<std::allocator<wchar_t_const_*>_> * __thiscall
std::
_Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>,1>
::_Get_first(void *this)

{
  return this;
}

// _Get_first @ 14ff38ac0

_Wrap_alloc<std::allocator<wchar_t_const_*>_> * __thiscall
std::
_Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>,1>
::_Get_first(void *this)

{
  return this;
}

// _Get_second @ 14ff38ad0

_Vector_val<std::_Simple_types<wchar_t_const_*>_> * __thiscall
std::
_Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>,1>
::_Get_second(void *this)

{
  return this;
}

// _Get_second @ 14ff38ae0

_Vector_val<std::_Simple_types<wchar_t_const_*>_> * __thiscall
std::
_Compressed_pair<std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>,std::_Vector_val<std::_Simple_types<wchar_t_const_*___ptr64>_>,1>
::_Get_second(void *this)

{
  return this;
}

// _Getal @ 14ff38af0

_Wrap_alloc<std::allocator<wchar_t_const_*>_> * __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Getal(void *this)

{
  return this;
}

// _Getal @ 14ff38b00

_Wrap_alloc<std::allocator<wchar_t_const_*>_> * __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Getal(void *this)

{
  return this;
}

// _Grow_to @ 14ff38b10

ulong64 __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Grow_to
          (void *this,ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)((longlong)this + 0x10) - *(longlong *)this >> 3;
  uVar1 = 0;
  if (uVar2 <= 0x1fffffffffffffff - (uVar2 >> 1)) {
    uVar1 = (uVar2 >> 1) + uVar2;
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

// _Inside @ 14ff38b50

bool __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Inside
          (void *this,wchar_t **param_1)

{
  if ((param_1 < *(wchar_t ***)((longlong)this + 8)) && (*(wchar_t ***)this <= param_1)) {
    return true;
  }
  return false;
}

// _Myend @ 14ff38b70

wchar_t *** __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Myend(void *this)

{
  return (wchar_t ***)((longlong)this + 0x10);
}

// _Myend @ 14ff38b80

wchar_t *** __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Myend(void *this)

{
  return (wchar_t ***)((longlong)this + 0x10);
}

// _Myfirst @ 14ff38b90

wchar_t *** __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Myfirst(void *this)

{
  return this;
}

// _Myfirst @ 14ff38ba0

wchar_t *** __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Myfirst(void *this)

{
  return this;
}

// _Mylast @ 14ff38bb0

wchar_t *** __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Mylast(void *this)

{
  return (wchar_t ***)((longlong)this + 8);
}

// _Mylast @ 14ff38bc0

wchar_t *** __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Mylast(void *this)

{
  return (wchar_t ***)((longlong)this + 8);
}

// _Orphan_all @ 14ff38bd0

void __thiscall
std::
_Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
::_Orphan_all(void *this)

{
  return;
}

// _Orphan_range @ 14ff38be0

void __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Orphan_range
          (void *this,wchar_t **param_1,wchar_t **param_2)

{
  return;
}

// _Reallocate @ 14ff38bf0

void __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate
          (void *this,ulong64 param_1)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  wchar_t **_Dst;
  
  _Dst = allocator<wchar_t_const_*___ptr64>::allocate(this,param_1);
  memmove(_Dst,*(void **)this,*(longlong *)((longlong)this + 8) - (longlong)*(void **)this);
  ppwVar1 = *(wchar_t ***)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  if (ppwVar1 != (wchar_t **)0x0) {
    allocator<wchar_t_const_*___ptr64>::deallocate
              (this,ppwVar1,*(longlong *)((longlong)this + 0x10) - (longlong)ppwVar1 >> 3);
  }
  *(wchar_t ***)((longlong)this + 0x10) = _Dst + param_1;
  *(wchar_t ***)((longlong)this + 8) = _Dst + (lVar2 - (longlong)ppwVar1 >> 3);
  *(wchar_t ***)this = _Dst;
  return;
}

// _Reserve @ 14ff38c90

void __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reserve
          (void *this,ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 <=
      (ulonglong)(*(longlong *)((longlong)this + 0x10) - *(longlong *)((longlong)this + 8) >> 3)) {
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 8) - *(longlong *)this >> 3;
  if (param_1 <= 0x1fffffffffffffffU - lVar3) {
    uVar2 = param_1 + lVar3;
    uVar4 = *(longlong *)((longlong)this + 0x10) - *(longlong *)this >> 3;
    uVar1 = 0;
    if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
      uVar1 = (uVar4 >> 1) + uVar4;
    }
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    _Reallocate(this,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Xlen(this);
}

// _Tidy @ 14ff38d20

void __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Tidy(void *this)

{
  wchar_t **ppwVar1;
  
  ppwVar1 = *(wchar_t ***)this;
  if (ppwVar1 != (wchar_t **)0x0) {
    allocator<wchar_t_const_*___ptr64>::deallocate
              (this,ppwVar1,*(longlong *)((longlong)this + 0x10) - (longlong)ppwVar1 >> 3);
    *(undefined8 *)this = 0;
    *(undefined8 *)((longlong)this + 8) = 0;
    *(undefined8 *)((longlong)this + 0x10) = 0;
  }
  return;
}

// _Unused_capacity @ 14ff38d60

ulong64 __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Unused_capacity
          (void *this)

{
  return *(longlong *)((longlong)this + 0x10) - *(longlong *)((longlong)this + 8) >> 3;
}

// _Xlen @ 14ff38d80

void __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Xlen(void *this)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector<T> too long");
}

// _preloadSystemDlls @ 14ff38da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl ngx::_preloadSystemDlls(int param_1)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  wchar_t *lpLibFileName;
  wchar_t *lpLibFileName_00;
  wchar_t *lpLibFileName_01;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  char *pcVar8;
  LPCWSTR pWVar9;
  LPCWSTR pWVar10;
  undefined1 auStack_168 [32];
  CHAR local_148 [272];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  memset(local_148,0,0x104);
  uVar1 = GetModuleFileNameA((HMODULE)0x0,local_148,0x104);
  if (9 < (ulonglong)uVar1) {
    if (uVar1 != 0) {
      pcVar8 = local_148 + uVar1;
      do {
        if (*pcVar8 == '\\') break;
        pcVar8 = pcVar8 + -1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    iVar2 = strncmp(local_148 + uVar1,"\\mfpmp.exe",7);
    if (iVar2 == 0) {
      return ret;
    }
  }
  if (((((hModAsn1 == (HINSTANCE__ *)0x0) && (hModCrypt32 == (HINSTANCE__ *)0x0)) &&
       (hModCryptBase == (HINSTANCE__ *)0x0)) &&
      ((hModDrvstore == (HINSTANCE__ *)0x0 && (hModDEVOBJ == (HINSTANCE__ *)0x0)))) &&
     (hModWldp == (HINSTANCE__ *)0x0)) {
    lpLibFileName_00 = (LPCWSTR)0x0;
    pWVar9 = (LPCWSTR)0x0;
    pWVar10 = (LPCWSTR)0x0;
    DVar4 = 0x800;
    if (param_1 != 0) {
      DVar4 = 0;
    }
    ret = 0;
    if (param_1 == 0) {
      lpLibFileName = L"msasn1.dll";
    }
    else {
      lpLibFileName = CreateSystemFilePath(L"msasn1.dll");
    }
    hModAsn1 = (HINSTANCE__ *)LoadLibraryExW(lpLibFileName,(HANDLE)0x0,DVar4);
    if ((hModAsn1 != (HINSTANCE__ *)0x0) ||
       (DVar3 = GetLastError(), pwVar7 = lpLibFileName_00, pwVar6 = lpLibFileName_00,
       lpLibFileName_01 = lpLibFileName_00, pwVar5 = lpLibFileName_00, DVar3 == 0x7e)) {
      if (param_1 == 0) {
        lpLibFileName_00 = L"cryptnet.dll";
      }
      else {
        lpLibFileName_00 = CreateSystemFilePath(L"cryptnet.dll");
      }
      hModCryptNet = (HINSTANCE__ *)LoadLibraryExW(lpLibFileName_00,(HANDLE)0x0,DVar4);
      pwVar7 = pWVar9;
      pwVar6 = pWVar10;
      pwVar5 = (LPCWSTR)0x0;
      if ((hModCryptNet != (HINSTANCE__ *)0x0) ||
         (DVar3 = GetLastError(), lpLibFileName_01 = (LPCWSTR)0x0, DVar3 == 0x7e)) {
        if (param_1 == 0) {
          lpLibFileName_01 = L"drvstore.dll";
        }
        else {
          lpLibFileName_01 = CreateSystemFilePath(L"drvstore.dll");
        }
        hModDrvstore = (HINSTANCE__ *)LoadLibraryExW(lpLibFileName_01,(HANDLE)0x0,DVar4);
        if ((hModDrvstore != (HINSTANCE__ *)0x0) || (DVar3 = GetLastError(), DVar3 == 0x7e)) {
          if (param_1 == 0) {
            pwVar5 = L"devobj.dll";
          }
          else {
            pwVar5 = CreateSystemFilePath(L"devobj.dll");
          }
          hModDEVOBJ = (HINSTANCE__ *)LoadLibraryExW(pwVar5,(HANDLE)0x0,DVar4);
          if ((hModDEVOBJ != (HINSTANCE__ *)0x0) || (DVar3 = GetLastError(), DVar3 == 0x7e)) {
            if (param_1 == 0) {
              pwVar6 = L"wldp.dll";
            }
            else {
              pwVar6 = CreateSystemFilePath(L"wldp.dll");
            }
            hModWldp = (HINSTANCE__ *)LoadLibraryExW(pwVar6,(HANDLE)0x0,DVar4);
            if ((hModWldp != (HINSTANCE__ *)0x0) || (DVar3 = GetLastError(), DVar3 == 0x7e)) {
              if (param_1 == 0) {
                pwVar7 = L"cryptbase.dll";
              }
              else {
                pwVar7 = CreateSystemFilePath(L"cryptbase.dll");
              }
              hModCryptBase = (HINSTANCE__ *)LoadLibraryExW(pwVar7,(HANDLE)0x0,DVar4);
              if ((hModCryptBase != (HINSTANCE__ *)0x0) || (DVar4 = GetLastError(), DVar4 == 0x7e))
              {
                ret = 1;
              }
            }
          }
        }
      }
    }
    if (param_1 != 0) {
      LocalFree(lpLibFileName);
      LocalFree(lpLibFileName_00);
      LocalFree(pwVar7);
      LocalFree(lpLibFileName_01);
      LocalFree(pwVar5);
      LocalFree(pwVar6);
    }
  }
  return ret;
}

// allocate @ 14ff39110

wchar_t ** __thiscall
std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>::allocate(void *this,ulong64 param_1)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  wchar_t **ppwVar3;
  
  if (param_1 == 0) {
    ppwVar3 = (wchar_t **)0x0;
  }
  else {
    if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    uVar1 = param_1 * 8;
    if (0xfff < uVar1) {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      pwVar2 = ::operator_new(uVar1 + 0x27);
      if (pwVar2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      ppwVar3 = (wchar_t **)((longlong)pwVar2 + 0x27U & 0xffffffffffffffe0);
      ppwVar3[-1] = pwVar2;
      return ppwVar3;
    }
    ppwVar3 = ::operator_new(uVar1);
    if (ppwVar3 == (wchar_t **)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return ppwVar3;
}

// allocate @ 14ff39120

wchar_t ** __thiscall std::allocator<wchar_t_const_*___ptr64>::allocate(void *this,ulong64 param_1)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  wchar_t **ppwVar3;
  
  if (param_1 == 0) {
    ppwVar3 = (wchar_t **)0x0;
  }
  else {
    if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    uVar1 = param_1 * 8;
    if (0xfff < uVar1) {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      pwVar2 = ::operator_new(uVar1 + 0x27);
      if (pwVar2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      ppwVar3 = (wchar_t **)((longlong)pwVar2 + 0x27U & 0xffffffffffffffe0);
      ppwVar3[-1] = pwVar2;
      return ppwVar3;
    }
    ppwVar3 = ::operator_new(uVar1);
    if (ppwVar3 == (wchar_t **)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return ppwVar3;
}

// capacity @ 14ff391b0

ulong64 __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::capacity(void *this)

{
  return *(longlong *)((longlong)this + 0x10) - *(longlong *)this >> 3;
}

// deallocate @ 14ff391d0

void __thiscall
std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>::deallocate
          (void *this,wchar_t **param_1,ulong64 param_2)

{
  wchar_t **ppwVar1;
  
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  ppwVar1 = param_1;
  if (0xfff < param_2 * 8) {
    if (((ulonglong)param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    ppwVar1 = (wchar_t **)param_1[-1];
    if (param_1 <= ppwVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if ((ulonglong)((longlong)param_1 - (longlong)ppwVar1) < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < (ulonglong)((longlong)param_1 - (longlong)ppwVar1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(ppwVar1);
  return;
}

// deallocate @ 14ff391e0

void __thiscall
std::allocator<wchar_t_const_*___ptr64>::deallocate(void *this,wchar_t **param_1,ulong64 param_2)

{
  wchar_t **ppwVar1;
  
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  ppwVar1 = param_1;
  if (0xfff < param_2 * 8) {
    if (((ulonglong)param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    ppwVar1 = (wchar_t **)param_1[-1];
    if (param_1 <= ppwVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if ((ulonglong)((longlong)param_1 - (longlong)ppwVar1) < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < (ulonglong)((longlong)param_1 - (longlong)ppwVar1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(ppwVar1);
  return;
}

// max_size @ 14ff39260

ulong64 __thiscall
std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>::max_size(void *this,_Nil param_1)

{
  return 0x1fffffffffffffff;
}

// max_size @ 14ff39280

ulong64 __thiscall std::allocator<wchar_t_const_*___ptr64>::max_size(void *this)

{
  return 0x1fffffffffffffff;
}

// max_size @ 14ff392a0

ulong64 __cdecl
std::allocator_traits<std::allocator<wchar_t_const_*___ptr64>_>::max_size
          (allocator<wchar_t_const_*> *param_1)

{
  return 0x1fffffffffffffff;
}

// max_size @ 14ff392c0

ulong64 __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::max_size(void *this)

{
  return 0x1fffffffffffffff;
}

// nvCreateProcessA @ 14ff392e0

int __cdecl
ngx::nvCreateProcessA
          (char *param_1,char *param_2,void *param_3,void *param_4,int param_5,ulong param_6,
          void *param_7,char *param_8,void *param_9,int param_10,void *param_11)

{
  int iVar1;
  BOOL BVar2;
  wchar_t *hMem;
  wchar_t *hMem_00;
  
  hMem_00 = (wchar_t *)0x0;
  SetLastError(0);
  hMem = hMem_00;
  if (param_1 != (char *)0x0) {
    hMem = CreateUnicodeStringFromAscii(param_1);
  }
  if (param_2 != (char *)0x0) {
    hMem_00 = CreateUnicodeStringFromAscii(param_2);
  }
  iVar1 = ValidateCreateProcessParameters(hMem,hMem_00,param_10);
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

// nvCreateProcessAsUserA @ 14ff393f0

int __cdecl
ngx::nvCreateProcessAsUserA
          (void *param_1,char *param_2,char *param_3,void *param_4,void *param_5,int param_6,
          ulong param_7,void *param_8,char *param_9,void *param_10,int param_11,void *param_12)

{
  _func___cdecl_int_void_ptr_char_ptr_char_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_char_ptr__STARTUPINFOA_ptr__PROCESS_INFORMATION_ptr
  *p_Var1;
  int iVar2;
  wchar_t *hMem;
  wchar_t *hMem_00;
  
  hMem_00 = (wchar_t *)0x0;
  SetLastError(0);
  hMem = hMem_00;
  if (param_2 != (char *)0x0) {
    hMem = CreateUnicodeStringFromAscii(param_2);
  }
  if (param_3 != (char *)0x0) {
    hMem_00 = CreateUnicodeStringFromAscii(param_3);
  }
  iVar2 = ValidateCreateProcessParameters(hMem,hMem_00,param_11);
  if (iVar2 == 0) {
    LocalFree(hMem);
    LocalFree(hMem_00);
LAB_14ff39469:
    iVar2 = 0;
  }
  else {
    LocalFree(hMem);
    LocalFree(hMem_00);
    if (hModAdvapi32 == (HINSTANCE__ *)0x0) {
      hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0);
      if (hModAdvapi32 == (HINSTANCE__ *)0x0) goto LAB_14ff39469;
    }
    if (pfnCreateProcessAsUserA ==
        (_func___cdecl_int_void_ptr_char_ptr_char_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_char_ptr__STARTUPINFOA_ptr__PROCESS_INFORMATION_ptr
         *)0x0) {
      pfnCreateProcessAsUserA =
           (_func___cdecl_int_void_ptr_char_ptr_char_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_char_ptr__STARTUPINFOA_ptr__PROCESS_INFORMATION_ptr
            *)GetProcAddress((HMODULE)hModAdvapi32,"CreateProcessAsUserA");
      if (pfnCreateProcessAsUserA ==
          (_func___cdecl_int_void_ptr_char_ptr_char_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_char_ptr__STARTUPINFOA_ptr__PROCESS_INFORMATION_ptr
           *)0x0) goto LAB_14ff39469;
    }
    p_Var1 = pfnCreateProcessAsUserA;
    (*__guard_check_icall_fptr)(pfnCreateProcessAsUserA);
    iVar2 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_12);
  }
  return iVar2;
}

// nvCreateProcessAsUserW @ 14ff39560

int __cdecl
ngx::nvCreateProcessAsUserW
          (void *param_1,wchar_t *param_2,wchar_t *param_3,void *param_4,void *param_5,int param_6,
          ulong param_7,void *param_8,wchar_t *param_9,void *param_10,int param_11,void *param_12)

{
  _func___cdecl_int_void_ptr_wchar_t_ptr_wchar_t_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_wchar_t_ptr__STARTUPINFOW_ptr__PROCESS_INFORMATION_ptr
  *p_Var1;
  int iVar2;
  
  SetLastError(0);
  iVar2 = ValidateCreateProcessParameters(param_2,param_3,param_11);
  if ((iVar2 == 0) ||
     ((hModAdvapi32 == (HINSTANCE__ *)0x0 &&
      (hModAdvapi32 = LoadSystemLibraryInternal(L"Advapi32.dll",0),
      hModAdvapi32 == (HINSTANCE__ *)0x0)))) {
    iVar2 = 0;
  }
  else {
    if ((pfnCreateProcessAsUserW ==
         (_func___cdecl_int_void_ptr_wchar_t_ptr_wchar_t_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_wchar_t_ptr__STARTUPINFOW_ptr__PROCESS_INFORMATION_ptr
          *)0x0) &&
       (pfnCreateProcessAsUserW =
             (_func___cdecl_int_void_ptr_wchar_t_ptr_wchar_t_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_wchar_t_ptr__STARTUPINFOW_ptr__PROCESS_INFORMATION_ptr
              *)GetProcAddress((HMODULE)hModAdvapi32,"CreateProcessAsUserW"),
       pfnCreateProcessAsUserW ==
       (_func___cdecl_int_void_ptr_wchar_t_ptr_wchar_t_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_wchar_t_ptr__STARTUPINFOW_ptr__PROCESS_INFORMATION_ptr
        *)0x0)) {
      return 0;
    }
    p_Var1 = pfnCreateProcessAsUserW;
    (*__guard_check_icall_fptr)(pfnCreateProcessAsUserW);
    iVar2 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_12);
  }
  return iVar2;
}

// nvCreateProcessW @ 14ff39690

int __cdecl
ngx::nvCreateProcessW
          (wchar_t *param_1,wchar_t *param_2,void *param_3,void *param_4,int param_5,ulong param_6,
          void *param_7,wchar_t *param_8,void *param_9,int param_10,void *param_11)

{
  int iVar1;
  BOOL BVar2;
  
  SetLastError(0);
  iVar1 = ValidateCreateProcessParameters(param_1,param_2,param_10);
  BVar2 = 0;
  if (iVar1 != 0) {
    BVar2 = CreateProcessW(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_11);
  }
  return BVar2;
}

// nvDetectDisplayDriverModuleLocationW @ 14ff39750

wchar_t * __cdecl ngx::nvDetectDisplayDriverModuleLocationW(wchar_t *param_1)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *lpFileName;
  ulonglong uVar6;
  uint uVar7;
  size_t _MaxCount;
  wchar_t **ppwVar8;
  wchar_t *local_18;
  undefined *local_10;
  
  lpFileName = (wchar_t *)0x0;
  SetLastError(0);
  if (param_1 == (wchar_t *)0x0) {
LAB_14ff39976:
    SetLastError(0xa0);
    return (wchar_t *)0x0;
  }
  uVar7 = 0;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (param_1[uVar3] != L'\0');
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      if ((param_1[uVar6] == L'\\') || (param_1[uVar6] == L'/')) goto LAB_14ff39976;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)uVar7;
    } while (uVar6 < uVar3);
  }
  pwVar4 = nvDetectDisplayDriverModuleRegistrationW(param_1);
  if (pwVar4 == (wchar_t *)0x0) {
    DVar2 = GetLastError();
    if ((DVar2 == 0x7e) && (pwVar4 = ComplementModuleName(param_1), pwVar4 != (wchar_t *)0x0)) {
      iVar1 = IsWindowsBuildOrGreater(0x37e4);
      if (iVar1 == 0) {
        pwVar5 = nvGetSystemDirectoryW();
      }
      else {
        pwVar5 = nvGetDriverStoreW(NvidiaDisplayDriver);
      }
      if (pwVar5 != (wchar_t *)0x0) {
        lpFileName = SafePathCombine(pwVar5,pwVar4);
        if ((lpFileName != (wchar_t *)0x0) &&
           ((DVar2 = GetFileAttributesW(lpFileName), DVar2 == 0xffffffff || ((DVar2 & 0x50) != 0))))
        {
          DVar2 = GetLastError();
          if (DVar2 == 2) {
            SetLastError(0);
          }
          LocalFree(lpFileName);
          lpFileName = (wchar_t *)0x0;
        }
        LocalFree(pwVar5);
      }
      LocalFree(pwVar4);
      goto LAB_14ff39942;
    }
  }
  else {
    pwVar5 = nvGetSystemDirectoryW();
    if (pwVar5 != (wchar_t *)0x0) {
      iVar1 = ContainsPathSeparator(pwVar4);
      if (iVar1 == 0) {
        lpFileName = SafePathCombine(pwVar5,pwVar4);
      }
      else {
        local_18 = L"system32\\";
        ppwVar8 = &local_18;
        local_10 = &u__SystemRoot_system32_;
        do {
          _MaxCount = 0xffffffffffffffff;
          do {
            _MaxCount = _MaxCount + 1;
          } while ((*ppwVar8)[_MaxCount] != L'\0');
          iVar1 = _wcsnicmp(pwVar4,*ppwVar8,_MaxCount);
          if (iVar1 == 0) {
            lpFileName = SafePathCombine(pwVar5,pwVar4 + _MaxCount);
            break;
          }
          ppwVar8 = ppwVar8 + 1;
        } while (ppwVar8 < &stack0xfffffffffffffff8);
        if ((ppwVar8 == (wchar_t **)&stack0xfffffffffffffff8) &&
           (iVar1 = ContainsAbsolutePath(pwVar4), iVar1 != 0)) {
          lpFileName = pwVar4;
          pwVar4 = (wchar_t *)0x0;
        }
      }
      LocalFree(pwVar5);
    }
    LocalFree(pwVar4);
LAB_14ff39942:
    if (lpFileName != (wchar_t *)0x0) {
      DVar2 = 0;
      goto LAB_14ff39958;
    }
  }
  DVar2 = GetLastError();
  if (DVar2 != 0) {
    return lpFileName;
  }
  DVar2 = 0x7e;
LAB_14ff39958:
  SetLastError(DVar2);
  return lpFileName;
}

// nvDetectDisplayDriverModuleRegistrationW @ 14ff399a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl ngx::nvDetectDisplayDriverModuleRegistrationW(wchar_t *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *hMem;
  longlong lVar6;
  wchar_t *_Str1;
  wchar_t *pwVar7;
  undefined1 auStack_298 [32];
  wchar_t *local_278;
  wchar_t *local_270;
  wchar_t *local_268;
  undefined8 local_260;
  wchar_t *local_258;
  wchar_t *local_250;
  wchar_t *local_248;
  undefined8 local_240;
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  pwVar7 = (wchar_t *)0x0;
  SetLastError(0);
  if (param_1 == (wchar_t *)0x0) {
LAB_14ff39c9f:
    SetLastError(0xa0);
    return (wchar_t *)0x0;
  }
  lVar6 = -1;
  pwVar4 = (wchar_t *)0xffffffffffffffff;
  do {
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  } while (param_1[(longlong)pwVar4] != L'\0');
  pwVar5 = pwVar7;
  if (pwVar4 != (wchar_t *)0x0) {
    do {
      if ((param_1[(longlong)pwVar5] == L'\\') || (param_1[(longlong)pwVar5] == L'/'))
      goto LAB_14ff39c9f;
      pwVar5 = (wchar_t *)(ulonglong)((int)pwVar5 + 1);
    } while (pwVar5 < pwVar4);
  }
  iVar2 = IsWindowsBuildOrGreater(0x42ea);
  if (iVar2 != 0) {
    memset(local_238,0,0x20a);
    GetUMDPathFromLoadedDLLs(local_238);
    if (local_238[0] == L'\0') {
      GetDriverStorePathFromQAI(local_238);
    }
    pwVar4 = SafePathCombine(local_238,param_1);
    DVar3 = GetFileAttributesW(pwVar4);
    if ((DVar3 != 0xffffffff) && (pwVar5 = pwVar7, hMem = pwVar7, (DVar3 & 0x50) == 0))
    goto LAB_14ff39c64;
    LocalFree(pwVar4);
  }
  pwVar5 = nvGetDriverRegkeyW(NvidiaDisplayDriver);
  pwVar4 = pwVar7;
  hMem = (wchar_t *)0x0;
  if ((pwVar5 == (wchar_t *)0x0) ||
     (hMem = ComplementModuleName(param_1), pwVar4 = (wchar_t *)0x0, hMem == (wchar_t *)0x0))
  goto LAB_14ff39c64;
  do {
    lVar1 = lVar6 + 1;
    lVar6 = lVar6 + 1;
  } while (hMem[lVar1] != L'\0');
  for (pwVar4 = hMem + lVar6; ((hMem < pwVar4 && (*pwVar4 != L'\\')) && (*pwVar4 != L'.'));
      pwVar4 = pwVar4 + -1) {
  }
  _Str1 = hMem + lVar6;
  if (*pwVar4 == L'.') {
    _Str1 = pwVar4;
  }
  iVar2 = _wcsicmp(_Str1,L".dll");
  pwVar4 = pwVar7;
  if ((iVar2 != 0) && (DVar3 = GetLastError(), DVar3 == 0)) {
    pwVar4 = DetectModulePathFromKernelModeServices(hMem,NvidiaDisplayDriver);
  }
  iVar2 = _wcsicmp(_Str1,L".sys");
  if (iVar2 == 0) {
LAB_14ff39c19:
    if (pwVar4 != (wchar_t *)0x0) goto LAB_14ff39c64;
  }
  else {
    if (pwVar4 != (wchar_t *)0x0) goto LAB_14ff39c64;
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      local_240 = 0;
      local_258 = L"UserModeDriverNameWow";
      local_260 = 0;
      local_250 = L"OpenGLDriverNameWow";
      local_248 = L"UserModeDListDriverNameWow";
      local_278 = L"UserModeDriverName";
      local_270 = L"OpenGLDriverName";
      local_268 = L"UserModeDListDriverName";
      pwVar4 = DetectModulePathFromRegistryValues
                         (hMem,(HKEY__ *)&DAT_ffffffff80000002,pwVar5,&local_278);
      if (pwVar4 != (wchar_t *)0x0) goto LAB_14ff39c64;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      local_268 = (wchar_t *)0x0;
      local_278 = L"SOFTWARE\\Khronos\\Vulkan\\Drivers";
      local_270 = L"SOFTWARE\\Khronos\\OpenCL\\Vendors";
      pwVar4 = DetectModulePathFromRegistryValueNames
                         (hMem,(HKEY__ *)&DAT_ffffffff80000002,&local_278);
      goto LAB_14ff39c19;
    }
  }
  DVar3 = GetLastError();
  if (DVar3 == 0) {
    local_270 = (wchar_t *)0x0;
    local_278 = L"DriverSupportModulesWow";
    local_250 = (wchar_t *)0x0;
    local_258 = L"DriverSupportModules";
    pwVar4 = DetectModulePathFromRegistryValues
                       (hMem,(HKEY__ *)&DAT_ffffffff80000002,pwVar5,&local_258);
  }
LAB_14ff39c64:
  LocalFree(pwVar5);
  LocalFree(hMem);
  if (pwVar4 == (wchar_t *)0x0) {
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      return (wchar_t *)0x0;
    }
    DVar3 = 0x7e;
  }
  else {
    DVar3 = 0;
  }
  SetLastError(DVar3);
  return pwVar4;
}

// nvGetDisplayDriverRegkeyW @ 14ff39ce0

wchar_t * __cdecl ngx::nvGetDisplayDriverRegkeyW(void)

{
  wchar_t *pwVar1;
  
  pwVar1 = nvGetDriverRegkeyW(NvidiaDisplayDriver);
  return pwVar1;
}

// nvGetDisplayDriverStoreW @ 14ff39cf0

wchar_t * __cdecl ngx::nvGetDisplayDriverStoreW(void)

{
  wchar_t *pwVar1;
  
  pwVar1 = nvGetDriverStoreW(NvidiaDisplayDriver);
  return pwVar1;
}

// nvGetDriverRegkeyW @ 14ff39d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl ngx::nvGetDriverRegkeyW(NvidiaDriverType param_1)

{
  _func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr *p_Var1;
  _func___cdecl_int_void_ptr *p_Var2;
  void *pvVar3;
  int iVar4;
  wchar_t *hMem;
  wchar_t *pwVar5;
  undefined1 auStackY_88 [32];
  ulong local_48 [2];
  void *local_40;
  _SP_DEVINFO_DATA local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pwVar5 = (wchar_t *)0x0;
  local_38.ClassGuid.Data2 = 0;
  local_38.ClassGuid.Data3 = 0;
  local_38.ClassGuid.Data4[0] = '\0';
  local_38.ClassGuid.Data4[1] = '\0';
  local_38.ClassGuid.Data4[2] = '\0';
  local_38.ClassGuid.Data4[3] = '\0';
  local_38.ClassGuid.Data4[4] = '\0';
  local_38.ClassGuid.Data4[5] = '\0';
  local_38.ClassGuid.Data4[6] = '\0';
  local_38.ClassGuid.Data4[7] = '\0';
  local_38.DevInst = 0;
  local_38.Reserved = 0;
  local_38.cbSize = 0x20;
  local_38.ClassGuid.Data1 = 0;
  local_40 = (void *)0x0;
  SetLastError(0);
  if ((((hModSetupapi == (HINSTANCE__ *)0x0) &&
       (hModSetupapi = LoadSystemLibraryInternal(L"Setupapi.dll",0),
       hModSetupapi == (HINSTANCE__ *)0x0)) ||
      ((pfnSetupDiGetDeviceRegistryPropertyW ==
        (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr *
        )0x0 && (pfnSetupDiGetDeviceRegistryPropertyW =
                      (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
                       *)GetProcAddress((HMODULE)hModSetupapi,"SetupDiGetDeviceRegistryPropertyW"),
                pfnSetupDiGetDeviceRegistryPropertyW ==
                (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
                 *)0x0)))) ||
     ((((pfnSetupDiDestroyDeviceInfoList == (_func___cdecl_int_void_ptr *)0x0 &&
        (pfnSetupDiDestroyDeviceInfoList =
              (_func___cdecl_int_void_ptr *)
              GetProcAddress((HMODULE)hModSetupapi,"SetupDiDestroyDeviceInfoList"),
        pfnSetupDiDestroyDeviceInfoList == (_func___cdecl_int_void_ptr *)0x0)) ||
       (param_1 != NvidiaDisplayDriver)) ||
      (iVar4 = FindNvidiaDevice(NvidiaDisplayDriver,&local_40,&local_38),
      p_Var1 = pfnSetupDiGetDeviceRegistryPropertyW, iVar4 == 0)))) {
    pwVar5 = (wchar_t *)0x0;
  }
  else {
    local_48[0] = 0;
    (*__guard_check_icall_fptr)(pfnSetupDiGetDeviceRegistryPropertyW);
    pvVar3 = local_40;
    (*p_Var1)(local_40,&local_38,9,(ulong *)0x0,(uchar *)0x0,0,local_48);
    hMem = pwVar5;
    if ((local_48[0] != 0) &&
       (hMem = LocalAlloc(0x40,(ulonglong)local_48[0]),
       p_Var1 = pfnSetupDiGetDeviceRegistryPropertyW, hMem != (wchar_t *)0x0)) {
      (*__guard_check_icall_fptr)(pfnSetupDiGetDeviceRegistryPropertyW);
      iVar4 = (*p_Var1)(pvVar3,&local_38,9,(ulong *)0x0,(uchar *)hMem,local_48[0],(ulong *)0x0);
      if (iVar4 != 0) {
        pwVar5 = SafePathCombine(L"SYSTEM\\CurrentControlSet\\Control\\Class\\",hMem);
      }
    }
    LocalFree(hMem);
    p_Var2 = pfnSetupDiDestroyDeviceInfoList;
    if (pvVar3 != (void *)0x0) {
      (*__guard_check_icall_fptr)(pfnSetupDiDestroyDeviceInfoList);
      (*p_Var2)(pvVar3);
    }
    if (pwVar5 != (wchar_t *)0x0) {
      SetLastError(0);
    }
  }
  return pwVar5;
}

// nvGetDriverStoreW @ 14ff39f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl ngx::nvGetDriverStoreW(NvidiaDriverType param_1)

{
  _func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr__DEVPROPKEY_ptr_ulong_ptr_uchar_ptr_ulong_ulong_ptr_ulong
  *p_Var1;
  _func___cdecl_int_void_ptr *p_Var2;
  _func___cdecl_int_wchar_t_ptr__SP_ALTPLATFORM_INFO_V2_ptr_wchar_t_ptr_wchar_t_ptr_ulong_ulong_ptr
  *p_Var3;
  void *pvVar4;
  int iVar5;
  DWORD DVar6;
  wchar_t *pwVar7;
  wchar_t *hMem;
  wchar_t *_Str;
  longlong lVar8;
  __uint64 _Var10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_2a8 [32];
  ulong local_268 [2];
  void *local_260;
  _SP_DEVINFO_DATA local_258;
  wchar_t local_238 [264];
  ulonglong local_28;
  longlong lVar9;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pwVar7 = (wchar_t *)0x0;
  pwVar12 = (wchar_t *)0x0;
  local_260 = (void *)0x0;
  pwVar11 = (wchar_t *)0x0;
  if (param_1 == NvidiaDisplayDriver) {
    iVar5 = IsWindowsBuildOrGreater(0x42ea);
    if (iVar5 != 0) {
      memset(local_238,0,0x20a);
      GetDriverStorePathFromQAI(local_238);
      if (((local_238[0] != L'\0') && (DVar6 = GetFileAttributesW(local_238), DVar6 != 0xffffffff))
         && ((DVar6 & 0x10) != 0)) {
        lVar8 = -1;
        do {
          lVar9 = lVar8;
          lVar8 = lVar9 + 1;
        } while (local_238[lVar8] != L'\0');
        _Var10 = lVar9 + 2;
        pwVar7 = LocalAlloc(0x40,_Var10 * 2);
        if (pwVar7 == (wchar_t *)0x0) {
          return (wchar_t *)0x0;
        }
        StringCchCopyW(pwVar7,_Var10,local_238);
        goto LAB_14ff3a26c;
      }
    }
    local_258.cbSize = 0x20;
    local_258.ClassGuid.Data1 = 0;
    local_258.ClassGuid.Data2 = 0;
    local_258.ClassGuid.Data3 = 0;
    local_258.ClassGuid.Data4[0] = '\0';
    local_258.ClassGuid.Data4[1] = '\0';
    local_258.ClassGuid.Data4[2] = '\0';
    local_258.ClassGuid.Data4[3] = '\0';
    local_258.ClassGuid.Data4[4] = '\0';
    local_258.ClassGuid.Data4[5] = '\0';
    local_258.ClassGuid.Data4[6] = '\0';
    local_258.ClassGuid.Data4[7] = '\0';
    local_258.DevInst = 0;
    local_258.Reserved = 0;
    SetLastError(0);
    iVar5 = IsWindowsBuildOrGreater(6000);
    if (iVar5 == 0) {
      SetLastError(0x78);
    }
    else if ((((((hModSetupapi != (HINSTANCE__ *)0x0) ||
                (hModSetupapi = LoadSystemLibraryInternal(L"Setupapi.dll",0),
                hModSetupapi != (HINSTANCE__ *)0x0)) &&
               ((pfnSetupDiGetDevicePropertyW !=
                 (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr__DEVPROPKEY_ptr_ulong_ptr_uchar_ptr_ulong_ulong_ptr_ulong
                  *)0x0 ||
                (pfnSetupDiGetDevicePropertyW =
                      (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr__DEVPROPKEY_ptr_ulong_ptr_uchar_ptr_ulong_ulong_ptr_ulong
                       *)GetProcAddress((HMODULE)hModSetupapi,"SetupDiGetDevicePropertyW"),
                pfnSetupDiGetDevicePropertyW !=
                (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr__DEVPROPKEY_ptr_ulong_ptr_uchar_ptr_ulong_ulong_ptr_ulong
                 *)0x0)))) &&
              ((pfnSetupGetInfDriverStoreLocationW !=
                (_func___cdecl_int_wchar_t_ptr__SP_ALTPLATFORM_INFO_V2_ptr_wchar_t_ptr_wchar_t_ptr_ulong_ulong_ptr
                 *)0x0 ||
               (pfnSetupGetInfDriverStoreLocationW =
                     (_func___cdecl_int_wchar_t_ptr__SP_ALTPLATFORM_INFO_V2_ptr_wchar_t_ptr_wchar_t_ptr_ulong_ulong_ptr
                      *)GetProcAddress((HMODULE)hModSetupapi,"SetupGetInfDriverStoreLocationW"),
               pfnSetupGetInfDriverStoreLocationW !=
               (_func___cdecl_int_wchar_t_ptr__SP_ALTPLATFORM_INFO_V2_ptr_wchar_t_ptr_wchar_t_ptr_ulong_ulong_ptr
                *)0x0)))) &&
             ((pfnSetupDiDestroyDeviceInfoList != (_func___cdecl_int_void_ptr *)0x0 ||
              (pfnSetupDiDestroyDeviceInfoList =
                    (_func___cdecl_int_void_ptr *)
                    GetProcAddress((HMODULE)hModSetupapi,"SetupDiDestroyDeviceInfoList"),
              pfnSetupDiDestroyDeviceInfoList != (_func___cdecl_int_void_ptr *)0x0)))) &&
            (iVar5 = FindNvidiaDevice(NvidiaDisplayDriver,&local_260,&local_258),
            p_Var1 = pfnSetupDiGetDevicePropertyW, iVar5 != 0)) {
      local_268[0] = 0;
      local_268[1] = 0;
      (*__guard_check_icall_fptr)(pfnSetupDiGetDevicePropertyW);
      pvVar4 = local_260;
      (*p_Var1)(local_260,&local_258,&DEVPKEY_Device_DriverInfPath,local_268 + 1,(uchar *)0x0,0,
                local_268,0);
      _Str = pwVar7;
      hMem = pwVar7;
      if ((local_268[0] != 0) &&
         (hMem = LocalAlloc(0x40,(ulonglong)local_268[0] * 2), p_Var1 = pfnSetupDiGetDevicePropertyW
         , _Str = pwVar11, hMem != (wchar_t *)0x0)) {
        (*__guard_check_icall_fptr)(pfnSetupDiGetDevicePropertyW);
        iVar5 = (*p_Var1)(pvVar4,&local_258,&DEVPKEY_Device_DriverInfPath,local_268 + 1,
                          (uchar *)hMem,local_268[0],(ulong *)0x0,0);
        p_Var3 = pfnSetupGetInfDriverStoreLocationW;
        if (iVar5 != 0) {
          (*__guard_check_icall_fptr)(pfnSetupGetInfDriverStoreLocationW);
          (*p_Var3)(hMem,(_SP_ALTPLATFORM_INFO_V2 *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,local_268);
          pwVar7 = pwVar12;
          if ((local_268[0] != 0) &&
             (_Str = LocalAlloc(0x40,(ulonglong)local_268[0] * 2),
             p_Var3 = pfnSetupGetInfDriverStoreLocationW, _Str != (wchar_t *)0x0)) {
            (*__guard_check_icall_fptr)(pfnSetupGetInfDriverStoreLocationW);
            iVar5 = (*p_Var3)(hMem,(_SP_ALTPLATFORM_INFO_V2 *)0x0,(wchar_t *)0x0,_Str,local_268[0],
                              (ulong *)0x0);
            if (iVar5 != 0) {
              pwVar11 = wcsrchr(_Str,L'\\');
              pwVar7 = pwVar11 + 1;
              if (pwVar11 == (wchar_t *)0x0) {
                pwVar7 = _Str;
              }
              pwVar7 = SafeStringDupeN(_Str,((longlong)pwVar7 - (longlong)_Str >> 1) + -1);
            }
          }
        }
      }
      LocalFree(_Str);
      LocalFree(hMem);
      p_Var2 = pfnSetupDiDestroyDeviceInfoList;
      if (pvVar4 != (void *)0x0) {
        (*__guard_check_icall_fptr)(pfnSetupDiDestroyDeviceInfoList);
        (*p_Var2)(pvVar4);
      }
      if (pwVar7 == (wchar_t *)0x0) {
        return (wchar_t *)0x0;
      }
LAB_14ff3a26c:
      SetLastError(0);
      return pwVar7;
    }
  }
  return (wchar_t *)0x0;
}

// nvGetSystemDirectoryW @ 14ff3a2b0

wchar_t * __cdecl ngx::nvGetSystemDirectoryW(void)

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
  return (wchar_t *)0x0;
}

// nvGetSystemModuleHandleA @ 14ff3a330

HINSTANCE__ * __cdecl ngx::nvGetSystemModuleHandleA(char *param_1)

{
  wchar_t *hMem;
  HINSTANCE__ *pHVar1;
  
  pHVar1 = (HINSTANCE__ *)0x0;
  hMem = CreateUnicodeStringFromAscii(param_1);
  if ((param_1 == (char *)0x0) || (hMem != (wchar_t *)0x0)) {
    pHVar1 = nvGetSystemModuleHandleW(hMem);
  }
  LocalFree(hMem);
  return pHVar1;
}

// nvGetSystemModuleHandleW @ 14ff3a390

HINSTANCE__ * __cdecl ngx::nvGetSystemModuleHandleW(wchar_t *param_1)

{
  wchar_t *lpModuleName;
  HMODULE pHVar1;
  HMODULE pHVar2;
  HMODULE pHVar3;
  
  pHVar1 = (HMODULE)0x0;
  SetLastError(0);
  if (param_1 != (wchar_t *)0x0) {
    pHVar2 = (HMODULE)0xffffffffffffffff;
    do {
      pHVar2 = (HMODULE)((longlong)&pHVar2->unused + 1);
    } while (param_1[(longlong)pHVar2] != L'\0');
    pHVar3 = pHVar1;
    if (pHVar2 != (HMODULE)0x0) {
      do {
        if ((param_1[(longlong)pHVar3] == L'\\') || (param_1[(longlong)pHVar3] == L'/')) {
          SetLastError(0xa0);
          return (HINSTANCE__ *)0x0;
        }
        pHVar3 = (HMODULE)(ulonglong)((int)pHVar3 + 1);
      } while (pHVar3 < pHVar2);
    }
  }
  lpModuleName = CreateSystemFilePath(param_1);
  if ((param_1 == (wchar_t *)0x0) || (lpModuleName != (wchar_t *)0x0)) {
    pHVar1 = GetModuleHandleW(lpModuleName);
  }
  LocalFree(lpModuleName);
  return (HINSTANCE__ *)pHVar1;
}

// nvLoadDisplayDriverModuleExA @ 14ff3a440

HINSTANCE__ * __cdecl ngx::nvLoadDisplayDriverModuleExA(char *param_1,ulong param_2)

{
  wchar_t *hMem;
  HINSTANCE__ *pHVar1;
  
  pHVar1 = (HINSTANCE__ *)0x0;
  hMem = CreateUnicodeStringFromAscii(param_1);
  if ((param_1 == (char *)0x0) || (hMem != (wchar_t *)0x0)) {
    pHVar1 = nvLoadDisplayDriverModuleExW(hMem,param_2);
  }
  LocalFree(hMem);
  return pHVar1;
}

// nvLoadDisplayDriverModuleExW @ 14ff3a4b0

HINSTANCE__ * __cdecl ngx::nvLoadDisplayDriverModuleExW(wchar_t *param_1,ulong param_2)

{
  wchar_t *hMem;
  HINSTANCE__ *pHVar1;
  HINSTANCE__ *pHVar2;
  HINSTANCE__ *pHVar3;
  
  pHVar1 = (HINSTANCE__ *)0x0;
  SetLastError(0);
  if (param_1 == (wchar_t *)0x0) {
LAB_14ff3a546:
    SetLastError(0xa0);
    return (HINSTANCE__ *)0x0;
  }
  pHVar2 = (HINSTANCE__ *)0xffffffffffffffff;
  do {
    pHVar2 = (HINSTANCE__ *)((longlong)&pHVar2->unused + 1);
  } while (param_1[(longlong)pHVar2] != L'\0');
  pHVar3 = pHVar1;
  if (pHVar2 != (HINSTANCE__ *)0x0) {
    do {
      if ((param_1[(longlong)pHVar3] == L'\\') || (param_1[(longlong)pHVar3] == L'/'))
      goto LAB_14ff3a546;
      pHVar3 = (HINSTANCE__ *)(ulonglong)((int)pHVar3 + 1);
    } while (pHVar3 < pHVar2);
  }
  hMem = nvDetectDisplayDriverModuleLocationW(param_1);
  if (hMem != (wchar_t *)0x0) {
    pHVar1 = nvLoadLibraryFromTrustedLocationExW(hMem,param_2);
    LocalFree(hMem);
  }
  return pHVar1;
}

// nvLoadLibraryFromTrustedLocationExA @ 14ff3a570

HINSTANCE__ * __cdecl ngx::nvLoadLibraryFromTrustedLocationExA(char *param_1,ulong param_2)

{
  wchar_t *hMem;
  HINSTANCE__ *pHVar1;
  
  pHVar1 = (HINSTANCE__ *)0x0;
  hMem = CreateUnicodeStringFromAscii(param_1);
  if ((param_1 == (char *)0x0) || (hMem != (wchar_t *)0x0)) {
    pHVar1 = nvLoadLibraryFromTrustedLocationExW(hMem,param_2);
  }
  LocalFree(hMem);
  return pHVar1;
}

// nvLoadLibraryFromTrustedLocationExW @ 14ff3a5e0

HINSTANCE__ * __cdecl ngx::nvLoadLibraryFromTrustedLocationExW(wchar_t *param_1,ulong param_2)

{
  wchar_t wVar1;
  int iVar2;
  HMODULE pHVar3;
  DWORD dwErrCode;
  
  SetLastError(0);
  if (param_1 == (wchar_t *)0x0) {
LAB_14ff3a661:
    dwErrCode = 0xa0;
  }
  else {
    wVar1 = *param_1;
    if ((wVar1 != L'\\') && (wVar1 != L'/')) {
      iVar2 = isalpha((uint)(ushort)wVar1);
      if (((iVar2 == 0) || (param_1[1] != L':')) || ((param_1[2] != L'/' && (param_1[2] != L'\\'))))
      goto LAB_14ff3a661;
    }
    iVar2 = IsTrustedLocation(param_1);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff3a65a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pHVar3 = LoadLibraryExW(param_1,(HANDLE)0x0,param_2 & 0xffffe8f7);
      return (HINSTANCE__ *)pHVar3;
    }
    dwErrCode = 0xa1;
  }
  SetLastError(dwErrCode);
  return (HINSTANCE__ *)0x0;
}

// nvLoadSignedLibraryExA @ 14ff3a680

HINSTANCE__ * __cdecl ngx::nvLoadSignedLibraryExA(char *param_1,ulong param_2,int param_3)

{
  wchar_t *hMem;
  HINSTANCE__ *pHVar1;
  
  pHVar1 = (HINSTANCE__ *)0x0;
  hMem = CreateUnicodeStringFromAscii(param_1);
  if ((param_1 == (char *)0x0) || (hMem != (wchar_t *)0x0)) {
    pHVar1 = nvLoadSignedLibraryExW(hMem,param_2,param_3);
  }
  LocalFree(hMem);
  return pHVar1;
}

// nvLoadSignedLibraryExW @ 14ff3a700

HINSTANCE__ * __cdecl ngx::nvLoadSignedLibraryExW(wchar_t *param_1,ulong param_2,int param_3)

{
  wchar_t wVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hObject;
  HMODULE pHVar4;
  HINSTANCE__ *pHVar5;
  HINSTANCE__ local_res8 [2];
  
  pHVar4 = (HMODULE)0x0;
  SetLastError(0);
  if ((param_1 == (wchar_t *)0x0) ||
     (((wVar1 = *param_1, wVar1 != L'\\' && (wVar1 != L'/')) &&
      (((iVar2 = isalpha((uint)(ushort)wVar1), iVar2 == 0 || (param_1[1] != L':')) ||
       ((param_1[2] != L'/' && (param_1[2] != L'\\')))))))) {
    SetLastError(0xa0);
    return (HINSTANCE__ *)0x0;
  }
  DVar3 = GetFileAttributesW(param_1);
  if ((DVar3 == 0xffffffff) || ((DVar3 & 0x50) != 0)) {
    SetLastError(0x7e);
    return (HINSTANCE__ *)0x0;
  }
  hObject = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffffffffffff) {
    DVar3 = 0x20;
  }
  else {
    local_res8[0].unused = 0;
    pHVar5 = local_res8;
    if (param_3 == 0) {
      pHVar5 = (HINSTANCE__ *)pHVar4;
    }
    iVar2 = nvVerifyFileSignatureW(param_1,&pHVar5->unused);
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
    if (pHVar4 == (HMODULE)0x0) {
      return (HINSTANCE__ *)0x0;
    }
    DVar3 = 0;
  }
  SetLastError(DVar3);
  return (HINSTANCE__ *)pHVar4;
}

// nvLoadSystemLibraryExA @ 14ff3a890

HINSTANCE__ * __cdecl ngx::nvLoadSystemLibraryExA(char *param_1,ulong param_2)

{
  wchar_t *hMem;
  HINSTANCE__ *pHVar1;
  
  pHVar1 = (HINSTANCE__ *)0x0;
  hMem = CreateUnicodeStringFromAscii(param_1);
  if ((param_1 == (char *)0x0) || (hMem != (wchar_t *)0x0)) {
    pHVar1 = nvLoadSystemLibraryExW(hMem,param_2);
  }
  LocalFree(hMem);
  return pHVar1;
}

// nvLoadSystemLibraryExW @ 14ff3a900

HINSTANCE__ * __cdecl ngx::nvLoadSystemLibraryExW(wchar_t *param_1,ulong param_2)

{
  int iVar1;
  DWORD DVar2;
  wchar_t *hMem;
  HINSTANCE__ *pHVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  SetLastError(0);
  if (param_1 != (wchar_t *)0x0) {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (param_1[uVar5] != L'\0');
    if (uVar5 != 0) {
      do {
        if ((param_1[uVar4] == L'\\') || (param_1[uVar4] == L'/')) {
          SetLastError(0xa0);
          return (HINSTANCE__ *)0x0;
        }
        uVar4 = (ulonglong)((int)uVar4 + 1);
      } while (uVar4 < uVar5);
    }
  }
  iVar1 = IsWindowsBuildOrGreater(0x37e4);
  if (((iVar1 == 1) && ((param_2 >> 0xb & 1) == 0)) &&
     (iVar1 = _wcsnicmp(param_1,L"nv",2), iVar1 == 0)) {
    hMem = nvDetectDisplayDriverModuleLocationW(param_1);
    DVar2 = GetLastError();
    if (hMem != (wchar_t *)0x0) {
      pHVar3 = nvLoadLibraryFromTrustedLocationExW(hMem,param_2);
      LocalFree(hMem);
      return pHVar3;
    }
    if (DVar2 != 0x7e) {
      return (HINSTANCE__ *)0x0;
    }
  }
  pHVar3 = LoadSystemLibraryInternal(param_1,param_2);
  return pHVar3;
}

// nvLoadWVTCryptModule @ 14ff3aa30

int __cdecl ngx::nvLoadWVTCryptModule(void)

{
  if (((((((hModCrypt32 != (HINSTANCE__ *)0x0) ||
          (hModCrypt32 = LoadSystemLibraryInternal(L"crypt32.dll",0),
          hModCrypt32 != (HINSTANCE__ *)0x0)) &&
         ((hModWinTrust != (HINSTANCE__ *)0x0 ||
          (hModWinTrust = LoadSystemLibraryInternal(L"wintrust.dll",0),
          hModWinTrust != (HINSTANCE__ *)0x0)))) &&
        ((pfnCertGetNameStringA !=
          (_func___cdecl_ulong__CERT_CONTEXT_ptr_ulong_ulong_void_ptr_char_ptr_ulong *)0x0 ||
         (pfnCertGetNameStringA =
               (_func___cdecl_ulong__CERT_CONTEXT_ptr_ulong_ulong_void_ptr_char_ptr_ulong *)
               GetProcAddress((HMODULE)hModCrypt32,"CertGetNameStringA"),
         pfnCertGetNameStringA !=
         (_func___cdecl_ulong__CERT_CONTEXT_ptr_ulong_ulong_void_ptr_char_ptr_ulong *)0x0)))) &&
       (((pfnCryptDecodeObjectEx !=
          (_func___cdecl_int_ulong_char_ptr_uchar_ptr_ulong_ulong__CRYPT_DECODE_PARA_ptr_void_ptr_ulong_ptr
           *)0x0 ||
         (pfnCryptDecodeObjectEx =
               (_func___cdecl_int_ulong_char_ptr_uchar_ptr_ulong_ulong__CRYPT_DECODE_PARA_ptr_void_ptr_ulong_ptr
                *)GetProcAddress((HMODULE)hModCrypt32,"CryptDecodeObjectEx"),
         pfnCryptDecodeObjectEx !=
         (_func___cdecl_int_ulong_char_ptr_uchar_ptr_ulong_ulong__CRYPT_DECODE_PARA_ptr_void_ptr_ulong_ptr
          *)0x0)) &&
        (((pfnCertFreeCertificateContext != (_func___cdecl_int__CERT_CONTEXT_ptr *)0x0 ||
          (pfnCertFreeCertificateContext =
                (_func___cdecl_int__CERT_CONTEXT_ptr *)
                GetProcAddress((HMODULE)hModCrypt32,"CertFreeCertificateContext"),
          pfnCertFreeCertificateContext != (_func___cdecl_int__CERT_CONTEXT_ptr *)0x0)) &&
         ((pfnCertFindCertificateInStore !=
           (_func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr *)
           0x0 || (pfnCertFindCertificateInStore =
                        (_func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr
                         *)GetProcAddress((HMODULE)hModCrypt32,"CertFindCertificateInStore"),
                  pfnCertFindCertificateInStore !=
                  (_func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr
                   *)0x0)))))))) &&
      (((pfnCertGetIssuerCertificateFromStore !=
         (_func___cdecl__CERT_CONTEXT_ptr_void_ptr__CERT_CONTEXT_ptr__CERT_CONTEXT_ptr_ulong_ptr *)
         0x0 || (pfnCertGetIssuerCertificateFromStore =
                      (_func___cdecl__CERT_CONTEXT_ptr_void_ptr__CERT_CONTEXT_ptr__CERT_CONTEXT_ptr_ulong_ptr
                       *)GetProcAddress((HMODULE)hModCrypt32,"CertGetIssuerCertificateFromStore"),
                pfnCertGetIssuerCertificateFromStore !=
                (_func___cdecl__CERT_CONTEXT_ptr_void_ptr__CERT_CONTEXT_ptr__CERT_CONTEXT_ptr_ulong_ptr
                 *)0x0)) &&
       ((pfnCryptMsgGetParam != (_func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *)0x0 ||
        (pfnCryptMsgGetParam =
              (_func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *)
              GetProcAddress((HMODULE)hModCrypt32,"CryptMsgGetParam"),
        pfnCryptMsgGetParam != (_func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *)0x0)))))
      ) && (((((pfnCryptQueryObject !=
                (_func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
                 *)0x0 ||
               (pfnCryptQueryObject =
                     (_func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
                      *)GetProcAddress((HMODULE)hModCrypt32,"CryptQueryObject"),
               pfnCryptQueryObject !=
               (_func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
                *)0x0)) &&
              ((pfnCryptMsgClose != (_func___cdecl_int_void_ptr *)0x0 ||
               (pfnCryptMsgClose =
                     (_func___cdecl_int_void_ptr *)
                     GetProcAddress((HMODULE)hModCrypt32,"CryptMsgClose"),
               pfnCryptMsgClose != (_func___cdecl_int_void_ptr *)0x0)))) &&
             (((pfnCertCloseStore != (_func___cdecl_int_void_ptr_ulong *)0x0 ||
               (pfnCertCloseStore =
                     (_func___cdecl_int_void_ptr_ulong *)
                     GetProcAddress((HMODULE)hModCrypt32,"CertCloseStore"),
               pfnCertCloseStore != (_func___cdecl_int_void_ptr_ulong *)0x0)) &&
              ((pfnWinVerifyTrust != (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)0x0 ||
               (pfnWinVerifyTrust =
                     (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)
                     GetProcAddress((HMODULE)hModWinTrust,"WinVerifyTrust"),
               pfnWinVerifyTrust != (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)0x0)))))) &&
            ((((pfnWTHelperProvDataFromStateData !=
                (_func___cdecl__CRYPT_PROVIDER_DATA_ptr_void_ptr *)0x0 ||
               (pfnWTHelperProvDataFromStateData =
                     (_func___cdecl__CRYPT_PROVIDER_DATA_ptr_void_ptr *)
                     GetProcAddress((HMODULE)hModWinTrust,"WTHelperProvDataFromStateData"),
               pfnWTHelperProvDataFromStateData !=
               (_func___cdecl__CRYPT_PROVIDER_DATA_ptr_void_ptr *)0x0)) &&
              ((pfnWTHelperGetProvCertFromChain !=
                (_func___cdecl__CRYPT_PROVIDER_CERT_ptr__CRYPT_PROVIDER_SGNR_ptr_ulong *)0x0 ||
               (pfnWTHelperGetProvCertFromChain =
                     (_func___cdecl__CRYPT_PROVIDER_CERT_ptr__CRYPT_PROVIDER_SGNR_ptr_ulong *)
                     GetProcAddress((HMODULE)hModWinTrust,"WTHelperGetProvCertFromChain"),
               pfnWTHelperGetProvCertFromChain !=
               (_func___cdecl__CRYPT_PROVIDER_CERT_ptr__CRYPT_PROVIDER_SGNR_ptr_ulong *)0x0)))) &&
             ((pfnWTHelperGetProvSignerFromChain !=
               (_func___cdecl__CRYPT_PROVIDER_SGNR_ptr__CRYPT_PROVIDER_DATA_ptr_ulong_int_ulong *)
               0x0 || (pfnWTHelperGetProvSignerFromChain =
                            (_func___cdecl__CRYPT_PROVIDER_SGNR_ptr__CRYPT_PROVIDER_DATA_ptr_ulong_int_ulong
                             *)GetProcAddress((HMODULE)hModWinTrust,"WTHelperGetProvSignerFromChain"
                                             ),
                      pfnWTHelperGetProvSignerFromChain !=
                      (_func___cdecl__CRYPT_PROVIDER_SGNR_ptr__CRYPT_PROVIDER_DATA_ptr_ulong_int_ulong
                       *)0x0)))))))) {
    return 1;
  }
  return 0;
}

// nvReleaseSecureLoadLibraryResources @ 14ff3ad00

void __cdecl ngx::nvReleaseSecureLoadLibraryResources(void)

{
  if (hModSetupapi != (HINSTANCE__ *)0x0) {
    pfnSetupDiGetClassDevsW = (_func___cdecl_void_ptr__GUID_ptr_wchar_t_ptr_HWND___ptr_ulong *)0x0;
    pfnSetupDiEnumDeviceInfo = (_func___cdecl_int_void_ptr_ulong__SP_DEVINFO_DATA_ptr *)0x0;
    pfnSetupDiGetDeviceInterfaceDetailW =
         (_func___cdecl_int_void_ptr__SP_DEVICE_INTERFACE_DATA_ptr__SP_DEVICE_INTERFACE_DETAIL_DATA_W_ptr_ulong_ulong_ptr__SP_DEVINFO_DATA_ptr
          *)0x0;
    pfnSetupDiGetDeviceRegistryPropertyW =
         (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr_ulong_ulong_ptr_uchar_ptr_ulong_ulong_ptr
          *)0x0;
    pfnSetupDiGetDevicePropertyW =
         (_func___cdecl_int_void_ptr__SP_DEVINFO_DATA_ptr__DEVPROPKEY_ptr_ulong_ptr_uchar_ptr_ulong_ulong_ptr_ulong
          *)0x0;
    pfnSetupGetInfDriverStoreLocationW =
         (_func___cdecl_int_wchar_t_ptr__SP_ALTPLATFORM_INFO_V2_ptr_wchar_t_ptr_wchar_t_ptr_ulong_ulong_ptr
          *)0x0;
    pfnSetupDiDestroyDeviceInfoList = (_func___cdecl_int_void_ptr *)0x0;
    FreeLibrary((HMODULE)hModSetupapi);
    hModSetupapi = (HINSTANCE__ *)0x0;
  }
  if (hModShell32 != (HINSTANCE__ *)0x0) {
    pfnSHGetFolderPath = (_func___cdecl_T_HRESULT_HWND___ptr_int_void_ptr_ulong_wchar_t_ptr *)0x0;
    pfnShellExecuteA =
         (_func___cdecl_HINSTANCE___ptr_HWND___ptr_char_ptr_char_ptr_char_ptr_char_ptr_int *)0x0;
    pfnShellExecuteW =
         (_func___cdecl_HINSTANCE___ptr_HWND___ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_int
          *)0x0;
    pfnShellExecuteExA = (_func___cdecl_int__SHELLEXECUTEINFOA_ptr *)0x0;
    pfnShellExecuteExW = (_func___cdecl_int__SHELLEXECUTEINFOW_ptr *)0x0;
    FreeLibrary((HMODULE)hModShell32);
    hModShell32 = (HINSTANCE__ *)0x0;
  }
  if (hModAdvapi32 != (HINSTANCE__ *)0x0) {
    pfnRegOpenKeyExW = (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ulong_HKEY___ptr_ptr *)0x0;
    pfnRegEnumValueW =
         (_func___cdecl_long_HKEY___ptr_ulong_wchar_t_ptr_ulong_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr
          *)0x0;
    pfnRegQueryValueExW =
         (_func___cdecl_long_HKEY___ptr_wchar_t_ptr_ulong_ptr_ulong_ptr_uchar_ptr_ulong_ptr *)0x0;
    pfnRegCloseKey = (_func___cdecl_long_HKEY___ptr *)0x0;
    pfnCreateProcessAsUserW =
         (_func___cdecl_int_void_ptr_wchar_t_ptr_wchar_t_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_wchar_t_ptr__STARTUPINFOW_ptr__PROCESS_INFORMATION_ptr
          *)0x0;
    pfnCreateProcessAsUserA =
         (_func___cdecl_int_void_ptr_char_ptr_char_ptr__SECURITY_ATTRIBUTES_ptr__SECURITY_ATTRIBUTES_ptr_int_ulong_void_ptr_char_ptr__STARTUPINFOA_ptr__PROCESS_INFORMATION_ptr
          *)0x0;
    pfnOpenSCManagerW = (_func___cdecl_SC_HANDLE___ptr_wchar_t_ptr_wchar_t_ptr_ulong *)0x0;
    pfnOpenServiceW = (_func___cdecl_SC_HANDLE___ptr_SC_HANDLE___ptr_wchar_t_ptr_ulong *)0x0;
    pfnQueryServiceConfigW =
         (_func___cdecl_int_SC_HANDLE___ptr__QUERY_SERVICE_CONFIGW_ptr_ulong_ulong_ptr *)0x0;
    pfnCloseServiceHandle = (_func___cdecl_int_SC_HANDLE___ptr *)0x0;
    FreeLibrary((HMODULE)hModAdvapi32);
    hModAdvapi32 = (HINSTANCE__ *)0x0;
  }
  if (hModOle32 != (HINSTANCE__ *)0x0) {
    pfnStringFromGUID2 = (_func___cdecl_int__GUID_ptr_wchar_t_ptr_int *)0x0;
    FreeLibrary((HMODULE)hModOle32);
    hModOle32 = (HINSTANCE__ *)0x0;
  }
  if (hModCrypt32 != (HINSTANCE__ *)0x0) {
    pfnCryptMsgClose = (_func___cdecl_int_void_ptr *)0x0;
    pfnCertCloseStore = (_func___cdecl_int_void_ptr_ulong *)0x0;
    pfnCertFreeCertificateContext = (_func___cdecl_int__CERT_CONTEXT_ptr *)0x0;
    pfnCertFindCertificateInStore =
         (_func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr *)
         0x0;
    pfnCryptMsgGetParam = (_func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *)0x0;
    pfnCryptQueryObject =
         (_func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
          *)0x0;
    pfnCertGetNameStringA =
         (_func___cdecl_ulong__CERT_CONTEXT_ptr_ulong_ulong_void_ptr_char_ptr_ulong *)0x0;
    pfnCryptDecodeObjectEx =
         (_func___cdecl_int_ulong_char_ptr_uchar_ptr_ulong_ulong__CRYPT_DECODE_PARA_ptr_void_ptr_ulong_ptr
          *)0x0;
    pfnCertGetIssuerCertificateFromStore =
         (_func___cdecl__CERT_CONTEXT_ptr_void_ptr__CERT_CONTEXT_ptr__CERT_CONTEXT_ptr_ulong_ptr *)
         0x0;
    FreeLibrary((HMODULE)hModCrypt32);
    hModCrypt32 = (HINSTANCE__ *)0x0;
  }
  if (hModWinTrust != (HINSTANCE__ *)0x0) {
    pfnWinVerifyTrust = (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)0x0;
    FreeLibrary((HMODULE)hModWinTrust);
    hModWinTrust = (HINSTANCE__ *)0x0;
  }
  if (hModGDI32 != (HINSTANCE__ *)0x0) {
    pfnD3DKMTEnumAdapters2 = (_func___cdecl_long__NV_D3DKMT_ENUMADAPTERS2_ptr *)0x0;
    pfnD3DKMTQueryAdapterInfo = (_func___cdecl_long__NV_D3DKMT_QUERYADAPTERINFO_ptr *)0x0;
    FreeLibrary((HMODULE)hModGDI32);
    hModGDI32 = (HINSTANCE__ *)0x0;
  }
  if (hModCryptBase != (HINSTANCE__ *)0x0) {
    FreeLibrary((HMODULE)hModCryptBase);
    hModCryptBase = (HINSTANCE__ *)0x0;
  }
  if (hModCryptNet != (HINSTANCE__ *)0x0) {
    FreeLibrary((HMODULE)hModCryptNet);
    hModCryptNet = (HINSTANCE__ *)0x0;
  }
  if (hModAsn1 != (HINSTANCE__ *)0x0) {
    FreeLibrary((HMODULE)hModAsn1);
    hModAsn1 = (HINSTANCE__ *)0x0;
  }
  if (hModDrvstore != (HINSTANCE__ *)0x0) {
    FreeLibrary((HMODULE)hModDrvstore);
    hModDrvstore = (HINSTANCE__ *)0x0;
  }
  if (hModDEVOBJ != (HINSTANCE__ *)0x0) {
    FreeLibrary((HMODULE)hModDEVOBJ);
    hModDEVOBJ = (HINSTANCE__ *)0x0;
  }
  if (hModWldp != (HINSTANCE__ *)0x0) {
    FreeLibrary((HMODULE)hModWldp);
    hModWldp = (HINSTANCE__ *)0x0;
  }
  return;
}

// nvSafeLocalFree @ 14ff3af50

HLOCAL __stdcall ngx::nvSafeLocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff3af50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

// nvShellExecuteA @ 14ff3af60

HINSTANCE__ * __cdecl
ngx::nvShellExecuteA
          (HWND__ *param_1,char *param_2,char *param_3,char *param_4,char *param_5,int param_6,
          int param_7)

{
  _func___cdecl_HINSTANCE___ptr_HWND___ptr_char_ptr_char_ptr_char_ptr_char_ptr_int *p_Var1;
  int iVar2;
  wchar_t *hMem;
  wchar_t *hMem_00;
  HINSTANCE__ *pHVar3;
  
  hMem_00 = (wchar_t *)0x0;
  SetLastError(0);
  hMem = hMem_00;
  if (param_3 != (char *)0x0) {
    hMem = CreateUnicodeStringFromAscii(param_3);
  }
  if (param_4 != (char *)0x0) {
    hMem_00 = CreateUnicodeStringFromAscii(param_4);
  }
  iVar2 = ValidateCreateProcessParameters(hMem,hMem_00,param_7);
  if (iVar2 == 0) {
    LocalFree(hMem);
    LocalFree(hMem_00);
LAB_14ff3afd9:
    pHVar3 = (HINSTANCE__ *)0x0;
  }
  else {
    LocalFree(hMem);
    LocalFree(hMem_00);
    if (hModShell32 == (HINSTANCE__ *)0x0) {
      hModShell32 = LoadSystemLibraryInternal(L"Shell32.dll",0);
      if (hModShell32 == (HINSTANCE__ *)0x0) goto LAB_14ff3afd9;
    }
    if (pfnShellExecuteA ==
        (_func___cdecl_HINSTANCE___ptr_HWND___ptr_char_ptr_char_ptr_char_ptr_char_ptr_int *)0x0) {
      pfnShellExecuteA =
           (_func___cdecl_HINSTANCE___ptr_HWND___ptr_char_ptr_char_ptr_char_ptr_char_ptr_int *)
           GetProcAddress((HMODULE)hModShell32,"ShellExecuteA");
      if (pfnShellExecuteA ==
          (_func___cdecl_HINSTANCE___ptr_HWND___ptr_char_ptr_char_ptr_char_ptr_char_ptr_int *)0x0)
      goto LAB_14ff3afd9;
    }
    p_Var1 = pfnShellExecuteA;
    (*__guard_check_icall_fptr)(pfnShellExecuteA);
    pHVar3 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return pHVar3;
}

// nvShellExecuteExA @ 14ff3b090

int __cdecl ngx::nvShellExecuteExA(_SHELLEXECUTEINFOA *param_1,int param_2)

{
  _func___cdecl_int__SHELLEXECUTEINFOA_ptr *p_Var1;
  int iVar2;
  wchar_t *hMem;
  wchar_t *hMem_00;
  
  hMem_00 = (wchar_t *)0x0;
  SetLastError(0);
  if (param_1 == (_SHELLEXECUTEINFOA *)0x0) {
    SetLastError(0xa0);
  }
  else {
    hMem = hMem_00;
    if (param_1->lpFile != (char *)0x0) {
      hMem = CreateUnicodeStringFromAscii(param_1->lpFile);
    }
    if (param_1->lpParameters != (char *)0x0) {
      hMem_00 = CreateUnicodeStringFromAscii(param_1->lpParameters);
    }
    iVar2 = ValidateCreateProcessParameters(hMem,hMem_00,param_2);
    if (iVar2 == 0) {
      LocalFree(hMem);
      LocalFree(hMem_00);
      return 0;
    }
    LocalFree(hMem);
    LocalFree(hMem_00);
    if (((hModShell32 != (HINSTANCE__ *)0x0) ||
        (hModShell32 = LoadSystemLibraryInternal(L"Shell32.dll",0),
        hModShell32 != (HINSTANCE__ *)0x0)) &&
       ((pfnShellExecuteExA != (_func___cdecl_int__SHELLEXECUTEINFOA_ptr *)0x0 ||
        (pfnShellExecuteExA =
              (_func___cdecl_int__SHELLEXECUTEINFOA_ptr *)
              GetProcAddress((HMODULE)hModShell32,"ShellExecuteExA"),
        pfnShellExecuteExA != (_func___cdecl_int__SHELLEXECUTEINFOA_ptr *)0x0)))) {
      p_Var1 = pfnShellExecuteExA;
      (*__guard_check_icall_fptr)(pfnShellExecuteExA);
      iVar2 = (*p_Var1)(param_1);
      return iVar2;
    }
  }
  return 0;
}

// nvShellExecuteExW @ 14ff3b1b0

int __cdecl ngx::nvShellExecuteExW(_SHELLEXECUTEINFOW *param_1,int param_2)

{
  _func___cdecl_int__SHELLEXECUTEINFOW_ptr *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  SetLastError(0);
  if (param_1 == (_SHELLEXECUTEINFOW *)0x0) {
    SetLastError(0xa0);
  }
  else {
    iVar1 = ValidateCreateProcessParameters(param_1->lpFile,param_1->lpParameters,param_2);
    if (iVar1 != 0) {
      if ((hModShell32 == (HINSTANCE__ *)0x0) &&
         (hModShell32 = LoadSystemLibraryInternal(L"Shell32.dll",0),
         hModShell32 == (HINSTANCE__ *)0x0)) {
        return 0;
      }
      if ((pfnShellExecuteExW == (_func___cdecl_int__SHELLEXECUTEINFOW_ptr *)0x0) &&
         (pfnShellExecuteExW =
               (_func___cdecl_int__SHELLEXECUTEINFOW_ptr *)
               GetProcAddress((HMODULE)hModShell32,"ShellExecuteExW"),
         pfnShellExecuteExW == (_func___cdecl_int__SHELLEXECUTEINFOW_ptr *)0x0)) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = pfnShellExecuteExW;
      (*__guard_check_icall_fptr)(pfnShellExecuteExW);
                    /* WARNING: Could not recover jumptable at 0x00014ff3b262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return iVar1;
    }
  }
  return 0;
}

// nvShellExecuteW @ 14ff3b270

HINSTANCE__ * __cdecl
ngx::nvShellExecuteW
          (HWND__ *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t *param_5,
          int param_6,int param_7)

{
  _func___cdecl_HINSTANCE___ptr_HWND___ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_int
  *p_Var1;
  int iVar2;
  HINSTANCE__ *pHVar3;
  
  SetLastError(0);
  iVar2 = ValidateCreateProcessParameters(param_3,param_4,param_7);
  if ((iVar2 == 0) ||
     ((hModShell32 == (HINSTANCE__ *)0x0 &&
      (hModShell32 = LoadSystemLibraryInternal(L"Shell32.dll",0), hModShell32 == (HINSTANCE__ *)0x0)
      ))) {
    pHVar3 = (HINSTANCE__ *)0x0;
  }
  else {
    if ((pfnShellExecuteW ==
         (_func___cdecl_HINSTANCE___ptr_HWND___ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_int
          *)0x0) &&
       (pfnShellExecuteW =
             (_func___cdecl_HINSTANCE___ptr_HWND___ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_int
              *)GetProcAddress((HMODULE)hModShell32,"ShellExecuteW"),
       pfnShellExecuteW ==
       (_func___cdecl_HINSTANCE___ptr_HWND___ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_wchar_t_ptr_int
        *)0x0)) {
      return (HINSTANCE__ *)0x0;
    }
    p_Var1 = pfnShellExecuteW;
    (*__guard_check_icall_fptr)(pfnShellExecuteW);
    pHVar3 = (*p_Var1)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return pHVar3;
}

// nvVerifyFileSignatureA @ 14ff3b360

int __cdecl ngx::nvVerifyFileSignatureA(char *param_1,int *param_2)

{
  int iVar1;
  wchar_t *hMem;
  
  iVar1 = 0;
  hMem = CreateUnicodeStringFromAscii(param_1);
  if ((param_1 == (char *)0x0) || (hMem != (wchar_t *)0x0)) {
    iVar1 = nvVerifyFileSignatureW(hMem,param_2);
  }
  LocalFree(hMem);
  return iVar1;
}

// nvVerifyFileSignatureW @ 14ff3b3d0

int __cdecl ngx::nvVerifyFileSignatureW(wchar_t *param_1,int *param_2)

{
  _func___cdecl_int_void_ptr *p_Var1;
  _func___cdecl_int_void_ptr_ulong *p_Var2;
  _func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
  *p_Var3;
  void *pvVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  DWORD dwErrCode;
  uint uVar8;
  ulong local_res18 [2];
  ulong local_res20 [2];
  void *local_e8;
  void *local_e0;
  ulong local_d8 [2];
  _NVWINTRUST_SIGNATURE_SETTINGS_ local_d0;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  _NVWINTRUST_DATA local_88;
  
  dwErrCode = 0;
  iVar7 = 0;
  local_d8[0] = 0;
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_e8 = (void *)0x0;
  local_e0 = (void *)0x0;
  DVar5 = GetFileAttributesW(param_1);
  if ((DVar5 == 0xffffffff) || ((DVar5 & 0x50) != 0)) {
    dwErrCode = 2;
  }
  else {
    iVar6 = nvLoadWVTCryptModule();
    if (iVar6 == 1) {
      iVar7 = IsWindowsBuildOrGreater(0x23f0);
      if (((iVar7 == 0) && (iVar7 = IsTrustedLocation(param_1), iVar7 != 0)) &&
         (iVar7 = IsCryptSvcPausedOrRunning(), iVar7 == 0)) {
        iVar7 = 1;
        dwErrCode = 0;
      }
      else {
        p_Var3 = pfnCryptQueryObject;
        (*__guard_check_icall_fptr)(pfnCryptQueryObject);
        iVar7 = (*p_Var3)(1,param_1,0x400,2,0,local_d8,local_res20,local_res18,&local_e8,&local_e0,
                          (void **)0x0);
        if (iVar7 == 0) {
          dwErrCode = GetLastError();
          iVar7 = 0;
        }
        else {
          local_b0 = 0;
          local_a0 = 0;
          local_98 = 0;
          memset(&local_88,0,0x58);
          local_88.dwProvFlags = local_88.dwProvFlags | 0x1000;
          local_88.field6_0x28.pFile = (WINTRUST_FILE_INFO_ *)&local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,0x20);
          local_88.cbStruct = 0x58;
          local_88.dwStateAction = 1;
          local_88.dwUIChoice = 2;
          local_88.fdwRevocationChecks = 1;
          local_88.dwUnionChoice = 1;
          local_a8 = param_1;
          iVar7 = IsWindowsBuildOrGreater(0x23f0);
          if (iVar7 == 0) {
            iVar7 = VerifySingleSignature(&local_88,local_e8,local_e0,param_2);
            if (iVar7 == 0) {
              dwErrCode = GetLastError();
            }
          }
          else {
            local_d0.cbStruct = 0x20;
            local_d0.dwIndex = 0;
            local_d0.dwVerifiedSigIndex = 0;
            local_d0._20_4_ = 0;
            local_d0.pCryptoPolicy = (_NVCERT_STRONG_SIGN_PARA *)0x0;
            local_88.pSignatureSettings = &local_d0;
            local_d0.dwFlags = 3;
            local_d0.cSecondarySigs = 0;
            iVar7 = VerifySingleSignature(&local_88,local_e8,local_e0,param_2);
            if (iVar7 == 0) {
              dwErrCode = GetLastError();
              uVar8 = 1;
              if ((local_88.pSignatureSettings)->cSecondarySigs != 0) {
                do {
                  local_88.hWVTStateData = (void *)0x0;
                  local_88.dwStateAction = 1;
                  (local_88.pSignatureSettings)->dwIndex = uVar8;
                  iVar7 = VerifySingleSignature(&local_88,local_e8,local_e0,param_2);
                  if (iVar7 != 0) break;
                  dwErrCode = GetLastError();
                  uVar8 = uVar8 + 1;
                } while (uVar8 <= (local_88.pSignatureSettings)->cSecondarySigs);
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
  pvVar4 = local_e8;
  p_Var2 = pfnCertCloseStore;
  if (local_e8 != (void *)0x0) {
    (*__guard_check_icall_fptr)(pfnCertCloseStore);
    (*p_Var2)(pvVar4,0);
  }
  pvVar4 = local_e0;
  p_Var1 = pfnCryptMsgClose;
  if (local_e0 != (void *)0x0) {
    (*__guard_check_icall_fptr)(pfnCryptMsgClose);
    (*p_Var1)(pvVar4);
  }
  if (iVar7 != 0) {
    dwErrCode = 0;
  }
  SetLastError(dwErrCode);
  return iVar7;
}

// nvWCSDup @ 14ff3b690

/* wchar_t * __ptr64 __cdecl nvWCSDup(wchar_t const * __ptr64) */

wchar_t * __cdecl nvWCSDup(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff3b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = _wcsdup(param_1);
  return pwVar1;
}

// push_back @ 14ff3b6a0

void __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::push_back
          (void *this,wchar_t **param_1)

{
  wchar_t **ppwVar1;
  wchar_t **ppwVar2;
  
  ppwVar1 = *(wchar_t ***)((longlong)this + 8);
  if ((param_1 < ppwVar1) && (ppwVar2 = *(wchar_t ***)this, ppwVar2 <= param_1)) {
    if (ppwVar1 == *(wchar_t ***)((longlong)this + 0x10)) {
      _Reserve(this,1);
    }
    if (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0) {
      **(undefined8 **)((longlong)this + 8) =
           *(undefined8 *)(*(longlong *)this + ((longlong)param_1 - (longlong)ppwVar2 >> 3) * 8);
      *(longlong *)((longlong)this + 8) = *(longlong *)((longlong)this + 8) + 8;
      return;
    }
  }
  else {
    if (ppwVar1 == *(wchar_t ***)((longlong)this + 0x10)) {
      _Reserve(this,1);
    }
    if (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0) {
      **(undefined8 **)((longlong)this + 8) = *param_1;
    }
  }
  *(longlong *)((longlong)this + 8) = *(longlong *)((longlong)this + 8) + 8;
  return;
}

// size @ 14ff3b740

ulong64 __thiscall
std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::size(void *this)

{
  return *(longlong *)((longlong)this + 8) - *(longlong *)this >> 3;
}

// wcsrchr @ 14ff3b760

/* wchar_t * __ptr64 __cdecl wcsrchr(wchar_t * __ptr64,wchar_t) */

wchar_t * __cdecl wcsrchr(wchar_t *param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff3b760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsrchr(param_1,param_2);
  return pwVar1;
}

// wcsstr @ 14ff3b770

/* wchar_t * __ptr64 __cdecl wcsstr(wchar_t * __ptr64,wchar_t const * __ptr64) */

wchar_t * __cdecl wcsstr(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff3b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsstr(param_1,param_2);
  return pwVar1;
}

// wcstok @ 14ff3b780

wchar_t * __cdecl wcstok(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ff3b783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcstok(param_1,param_2);
  return pwVar1;
}

// NVSDK_NGX_UpdateFeature @ 14ff3b790

NVSDK_NGX_Result __cdecl
NVSDK_NGX_UpdateFeature(NVSDK_NGX_Application_Identifier *param_1,NVSDK_NGX_Feature param_2)

{
  _func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Application_Identifier_ptr_NVSDK_NGX_Feature *p_Var1;
  NVSDK_NGX_Result NVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      lib = NGXLoadCoreLibrary((_LUID)0x0);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (lib == (HINSTANCE__ *)0x0) {
    NVar2 = NVSDK_NGX_Result_FAIL_PlatformError;
  }
  else {
    if (*piVar3 < _TSS1) {
      _Init_thread_header(&_TSS1);
      if (_TSS1 == -1) {
        funcPtr = (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Application_Identifier_ptr_NVSDK_NGX_Feature
                   *)GetProcAddress((HMODULE)lib,"NVSDK_NGX_UpdateFeature");
        _Init_thread_footer(&_TSS1);
      }
    }
    p_Var1 = funcPtr;
    if (funcPtr ==
        (_func___cdecl_NVSDK_NGX_Result_NVSDK_NGX_Application_Identifier_ptr_NVSDK_NGX_Feature *)0x0
       ) {
      NVar2 = NVSDK_NGX_Result_FAIL_NotImplemented;
    }
    else {
      (*__guard_check_icall_fptr)(funcPtr);
      NVar2 = (*p_Var1)(param_1,param_2);
    }
  }
  return NVar2;
}

// dtor$0 @ 150325cd0

void `NGXLoadCoreLibrary'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  std::vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>::
  ~vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>
            ((vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_> *)(param_2 + 0x30));
  return;
}

// catch$46 @ 150325cf0

void `std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate'::
     __l1::catch_46(undefined8 param_1,longlong param_2)

{
  _Wrap_alloc<std::allocator<wchar_t_const_*>_> *this;
  
  this = std::
         _Vector_alloc<std::_Vec_base_types<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>_>
         ::_Getal(*(void **)(param_2 + 0x50));
  std::_Wrap_alloc<std::allocator<wchar_t_const_*___ptr64>_>::deallocate
            (this,*(wchar_t ***)(param_2 + 0x60),*(ulong64 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

