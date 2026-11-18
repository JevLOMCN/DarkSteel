// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: msvcprt
// Functions: 67

// operator()<wchar_t> @ 15018d760

void __thiscall
__crt_internal_free_policy::operator()<wchar_t>(__crt_internal_free_policy *this,wchar_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00015018d763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}

// _Bitmask_includes_any<enum___std_fs_file_attr> @ 15018d770

bool __cdecl
std::_Bitmask_includes_any<enum___std_fs_file_attr>
          (__std_fs_file_attr param_1,__std_fs_file_attr param_2)

{
  return (param_2 & param_1) != ~_Invalid;
}

// _Bitmask_includes_any<enum___std_fs_stats_flags> @ 15018d77c

bool __cdecl
std::_Bitmask_includes_any<enum___std_fs_stats_flags>
          (__std_fs_stats_flags param_1,__std_fs_stats_flags param_2)

{
  return (param_2 & param_1) != _None;
}

// __crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> @ 15018d788

__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> * __thiscall
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>
          (__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *this,wchar_t *param_1)

{
  this->_p = param_1;
  return this;
}

// _Fs_file @ 15018d798

_Fs_file * __thiscall std::_Fs_file::_Fs_file(_Fs_file *this,void *param_1)

{
  this->_Raw = (__std_fs_file_handle)param_1;
  return this;
}

// _Fs_file @ 15018d7a8

_Fs_file * __thiscall
std::_Fs_file::_Fs_file
          (_Fs_file *this,wchar_t *param_1,__std_access_rights param_2,__std_fs_file_flags param_3,
          __std_win_error *param_4)

{
  __std_win_error _Var1;
  
  _Var1 = __std_fs_open_handle(&this->_Raw,param_1,param_2,param_3);
  *param_4 = _Var1;
  return this;
}

// ~__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> @ 15018d7cc

void __thiscall
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::
~__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>
          (__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *this)

{
  free(this->_p);
  this->_p = (wchar_t *)0x0;
  return;
}

// ~_Fs_file @ 15018d7f4

void __thiscall std::_Fs_file::~_Fs_file(_Fs_file *this)

{
  BOOL BVar1;
  
  if (this->_Raw != _Invalid) {
    BVar1 = CloseHandle((HANDLE)this->_Raw);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

// operator= @ 15018d820

__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> * __thiscall
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::operator=
          (__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *this,
          __crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *param_1)

{
  free(this->_p);
  this->_p = (wchar_t *)0x0;
  this->_p = param_1->_p;
  param_1->_p = (wchar_t *)0x0;
  return this;
}

// operator_bool @ 15018d864

bool __thiscall
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::operator_bool
          (__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *this)

{
  return this->_p != (wchar_t *)0x0;
}

// operator& @ 15018d874

__std_fs_copy_options __cdecl operator&(__std_fs_copy_options param_1,__std_fs_copy_options param_2)

{
  return param_1 & param_2;
}

// operator& @ 15018d880

__std_fs_file_attr __cdecl operator&(__std_fs_file_attr param_1,__std_fs_file_attr param_2)

{
  return param_1 & param_2;
}

// operator& @ 15018d88c

__std_fs_stats_flags __cdecl operator&(__std_fs_stats_flags param_1,__std_fs_stats_flags param_2)

{
  return param_1 & param_2;
}

// operator~ @ 15018d898

__std_fs_stats_flags __cdecl operator~(__std_fs_stats_flags param_1)

{
  return ~param_1;
}

// operator| @ 15018d8a4

__std_access_rights __cdecl operator|(__std_access_rights param_1,__std_access_rights param_2)

{
  return param_1 | param_2;
}

// operator| @ 15018d8b0

__std_fs_file_flags __cdecl operator|(__std_fs_file_flags param_1,__std_fs_file_flags param_2)

{
  return param_1 | param_2;
}

// operator| @ 15018d8bc

__std_fs_stats_flags __cdecl operator|(__std_fs_stats_flags param_1,__std_fs_stats_flags param_2)

{
  return param_1 | param_2;
}

// operator&= @ 15018d8c8

__std_fs_copy_options * __cdecl
operator&=(__std_fs_copy_options *param_1,__std_fs_copy_options param_2)

{
  *param_1 = *param_1 & param_2;
  return param_1;
}

// operator&= @ 15018d8d4

__std_fs_stats_flags * __cdecl
operator&=(__std_fs_stats_flags *param_1,__std_fs_stats_flags param_2)

{
  *param_1 = *param_1 & param_2;
  return param_1;
}

// _Create_symlink @ 15018d8e0

__std_win_error __cdecl
`anonymous_namespace'::_Create_symlink(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  BOOLEAN BVar1;
  __std_win_error _Var2;
  
  BVar1 = CreateSymbolicLinkW(param_1,param_2,param_3 | 2);
  if (BVar1 == '\0') {
    _Var2 = GetLastError();
    if (_Var2 != _Invalid_parameter) {
      return _Var2;
    }
    BVar1 = CreateSymbolicLinkW(param_1,param_2,param_3);
    if (BVar1 == '\0') {
      _Var2 = GetLastError();
      return _Var2;
    }
  }
  return _Success;
}

// _Get @ 15018d944

void * __thiscall std::_Fs_file::_Get(_Fs_file *this)

{
  return (void *)this->_Raw;
}

// _Get_file_id_by_handle @ 15018d950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_win_error __cdecl
`anonymous_namespace'::_Get_file_id_by_handle(void *param_1,_FILE_ID_INFO *param_2)

{
  BOOL BVar1;
  __std_win_error _Var2;
  undefined1 auStack_68 [32];
  _BY_HANDLE_FILE_INFORMATION local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  BVar1 = GetFileInformationByHandleEx(param_1,0x12,param_2,0x18);
  if (BVar1 == 0) {
    _Var2 = GetLastError();
    if ((_Var2 == _Not_supported) || (_Var2 == _Invalid_parameter)) {
      BVar1 = GetFileInformationByHandle(param_1,&local_48);
      if (BVar1 == 0) {
        _Var2 = GetLastError();
      }
      else {
        param_2->VolumeSerialNumber = (ulonglong)local_48.dwVolumeSerialNumber;
        *(DWORD *)(param_2->FileId).Identifier = local_48.nFileIndexHigh;
        *(DWORD *)((param_2->FileId).Identifier + 4) = local_48.nFileIndexLow;
        _Var2 = _Success;
        (param_2->FileId).Identifier[8] = '\0';
        (param_2->FileId).Identifier[9] = '\0';
        (param_2->FileId).Identifier[10] = '\0';
        (param_2->FileId).Identifier[0xb] = '\0';
        (param_2->FileId).Identifier[0xc] = '\0';
        (param_2->FileId).Identifier[0xd] = '\0';
        (param_2->FileId).Identifier[0xe] = '\0';
        (param_2->FileId).Identifier[0xf] = '\0';
      }
    }
  }
  else {
    _Var2 = _Success;
  }
  return _Var2;
}

// _Get_last_write_time_by_handle @ 15018d9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_win_error __cdecl
`anonymous_namespace'::_Get_last_write_time_by_handle(void *param_1,long64 *param_2)

{
  BOOL BVar1;
  __std_win_error _Var2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  long64 local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  BVar1 = GetFileInformationByHandleEx(param_1,FileBasicInfo,local_38,0x28);
  if (BVar1 == 0) {
    _Var2 = GetLastError();
  }
  else {
    *param_2 = local_28;
    _Var2 = _Success;
  }
  return _Var2;
}

// _Merge_to_ull @ 15018da4c

ulong64 __cdecl `anonymous_namespace'::_Merge_to_ull(ulong param_1,ulong param_2)

{
  return CONCAT44(param_1,param_2);
}

// _Set_delete_flag @ 15018da60

__std_win_error __cdecl `anonymous_namespace'::_Set_delete_flag(__std_fs_file_handle param_1)

{
  BOOL BVar1;
  __std_win_error _Var2;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  BVar1 = SetFileInformationByHandle((HANDLE)param_1,0x15,local_res18,4);
  if (BVar1 == 0) {
    _Var2 = GetLastError();
    if (_Var2 != _Invalid_function) {
      if (_Var2 == _Access_denied) {
        return _Access_denied;
      }
      if ((_Var2 != _Not_supported) && (_Var2 != _Invalid_parameter)) {
        return _Var2;
      }
    }
    local_res10[0] = 1;
    BVar1 = SetFileInformationByHandle((HANDLE)param_1,FileDispositionInfo,local_res10,1);
    if (BVar1 == 0) {
      _Var2 = GetLastError();
      return _Var2;
    }
  }
  return _Success;
}

// _Translate_CreateFile_last_error @ 15018dae0

__std_win_error __cdecl `anonymous_namespace'::_Translate_CreateFile_last_error(void *param_1)

{
  __std_win_error _Var1;
  
  if (param_1 != (void *)0xffffffffffffffff) {
    return _Success;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018dae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = GetLastError();
  return _Var1;
}

// _Translate_not_found_to_success @ 15018daf8

__std_win_error __cdecl
`anonymous_namespace'::_Translate_not_found_to_success(__std_win_error param_1)

{
  if ((((param_1 != _File_not_found) && (param_1 != _Path_not_found)) &&
      (param_1 != _Error_bad_netpath)) &&
     (((param_1 != _Error_netname_deleted && (param_1 != _Invalid_name)) &&
      (param_1 != _Directory_name_is_invalid)))) {
    return param_1;
  }
  return _Success;
}

// __vcp_Copyfile @ 15018db28

__std_fs_copy_file_result __cdecl
`anonymous_namespace'::__vcp_Copyfile(wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  __std_fs_copy_file_result _Var1;
  BOOL BVar2;
  undefined4 local_res20;
  undefined4 uStackX_24;
  
  BVar2 = CopyFileW(param_1,param_2,(uint)param_3);
  if (BVar2 == 0) {
    local_res20 = (uint)local_res20._1_3_ << 8;
    uStackX_24 = GetLastError();
  }
  else {
    local_res20 = CONCAT31(local_res20._1_3_,1);
    uStackX_24 = _Success;
  }
  _Var1._Error = uStackX_24;
  _Var1._0_4_ = local_res20;
  return _Var1;
}

// get @ 15018db68

wchar_t * __thiscall
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::get
          (__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *this)

{
  return this->_p;
}

// is_valid @ 15018db74

bool __thiscall
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::is_valid
          (__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *this)

{
  return this->_p != (wchar_t *)0x0;
}

// release @ 15018db84

void __thiscall
__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy>::release
          (__crt_unique_heap_ptr<wchar_t,__crt_internal_free_policy> *this)

{
  free(this->_p);
  this->_p = (wchar_t *)0x0;
  return;
}

// _Stl_GetTempPath2W @ 15018dbac

ulong __cdecl _Stl_GetTempPath2W(ulong param_1,wchar_t *param_2)

{
  ulong uVar1;
  HMODULE hModule;
  
  hModule = GetModuleHandleW(L"kernel32.dll");
  GetProcAddress(hModule,"GetTempPath2W");
  uVar1 = (*__guard_dispatch_icall_fptr)(param_1,param_2);
  return uVar1;
}

// __std_fs_change_permissions @ 15018dc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_win_error __cdecl __std_fs_change_permissions(wchar_t *param_1,bool param_2,bool param_3)

{
  DWORD DVar1;
  __std_win_error _Var2;
  int iVar3;
  BOOL BVar4;
  undefined1 auStack_68 [32];
  HANDLE local_48;
  undefined1 local_40 [32];
  uint local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  DVar1 = GetFileAttributesW(param_1);
  if (DVar1 == 0xffffffff) {
LAB_15018dc35:
    _Var2 = GetLastError();
    return _Var2;
  }
  if (((DVar1 >> 10 & 1) == 0) || (!param_2)) {
    if ((DVar1 & 1) == (uint)param_3) {
      return _Success;
    }
    BVar4 = SetFileAttributesW(param_1,DVar1 ^ 1);
    if (BVar4 != 0) {
      return _Success;
    }
    goto LAB_15018dc35;
  }
  _Var2 = __std_fs_open_handle
                    ((__std_fs_file_handle *)&local_48,param_1,
                     _File_write_attributes|_File_read_attributes,_Backup_semantics);
  if (_Var2 == _Success) {
    BVar4 = GetFileInformationByHandleEx(local_48,FileBasicInfo,local_40,0x28);
    if (BVar4 != 0) {
      if ((local_20 & 1) != (uint)param_3) {
        local_20 = local_20 ^ 1;
        BVar4 = SetFileInformationByHandle(local_48,FileBasicInfo,local_40,0x28);
        if (BVar4 == 0) goto LAB_15018dcf7;
      }
      if ((local_48 == (HANDLE)0xffffffffffffffff) || (BVar4 = CloseHandle(local_48), BVar4 != 0)) {
        return _Success;
      }
      goto LAB_15018dd12;
    }
LAB_15018dcf7:
    _Var2 = GetLastError();
    if (local_48 == (HANDLE)0xffffffffffffffff) {
      return _Var2;
    }
    iVar3 = CloseHandle(local_48);
  }
  else {
    if (local_48 == (HANDLE)0xffffffffffffffff) {
      return _Var2;
    }
    iVar3 = CloseHandle(local_48);
  }
  if (iVar3 != 0) {
    return _Var2;
  }
LAB_15018dd12:
                    /* WARNING: Subroutine does not return */
  abort();
}

// __std_fs_close_handle @ 15018dd5c

void __cdecl __std_fs_close_handle(__std_fs_file_handle param_1)

{
  BOOL BVar1;
  
  if (param_1 != _Invalid) {
    BVar1 = CloseHandle((HANDLE)param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

// __std_fs_code_page @ 15018dd84

__std_code_page __cdecl __std_fs_code_page(void)

{
  UINT UVar1;
  BOOL BVar2;
  __std_code_page _Var3;
  
  UVar1 = ___lc_codepage_func();
  _Var3 = _Utf8;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    _Var3 = (__std_code_page)(BVar2 == 0);
  }
  return _Var3;
}

// __std_fs_convert_narrow_to_wide @ 15018ddb4

__std_fs_convert_result __cdecl
__std_fs_convert_narrow_to_wide
          (__std_code_page param_1,char *param_2,int param_3,wchar_t *param_4,int param_5)

{
  __std_fs_convert_result _Var1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar2 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar2 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = _Success;
  }
  _Var1._Err = uStack_14;
  _Var1._Len = iVar2;
  return _Var1;
}

// __std_fs_convert_wide_to_narrow @ 15018de04

__std_fs_convert_result __cdecl
__std_fs_convert_wide_to_narrow
          (__std_code_page param_1,wchar_t *param_2,int param_3,char *param_4,int param_5)

{
  __std_fs_convert_result _Var1;
  BOOL local_res8 [2];
  int local_28;
  __std_win_error _Stack_24;
  
  if ((param_1 == _Utf8) || (param_1 == 0xd698)) {
    local_28 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_28 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      local_28 = 0;
      _Stack_24 = 0x459;
      goto LAB_15018df22;
    }
  }
  if (local_28 == 0) {
    _Stack_24 = GetLastError();
  }
  else {
    _Stack_24 = _Success;
  }
  if (_Stack_24 == 0x3ec) {
    local_28 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_28 == 0) {
      _Stack_24 = GetLastError();
    }
    else {
      _Stack_24 = _Success;
    }
  }
LAB_15018df22:
  _Var1._Err = _Stack_24;
  _Var1._Len = local_28;
  return _Var1;
}

// __std_fs_convert_wide_to_narrow_replace_chars @ 15018df44

__std_fs_convert_result __cdecl
__std_fs_convert_wide_to_narrow_replace_chars
          (__std_code_page param_1,wchar_t *param_2,int param_3,char *param_4,int param_5)

{
  __std_fs_convert_result _Var1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_18 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = _Success;
  }
  if (uStack_14 == 0x3ec) {
    local_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_18 == 0) {
      uStack_14 = GetLastError();
    }
    else {
      uStack_14 = _Success;
    }
  }
  _Var1._Err = uStack_14;
  _Var1._Len = local_18;
  return _Var1;
}

// __std_fs_copy_file @ 15018e024

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_fs_copy_file_result __cdecl
__std_fs_copy_file(wchar_t *param_1,wchar_t *param_2,__std_fs_copy_options param_3)

{
  DWORD dwShareMode;
  __std_fs_copy_file_result _Var1;
  __std_fs_copy_file_result _Var2;
  BOOL BVar3;
  __std_win_error _Var4;
  int iVar5;
  HANDLE hObject;
  HANDLE hObject_00;
  __std_fs_copy_options _Var6;
  undefined1 auStackY_b8 [32];
  undefined1 local_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  __std_win_error _Stack_74;
  undefined1 local_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  _FILE_ID_INFO local_68;
  _FILE_ID_INFO local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  _Var6 = param_3 & _Existing_mask;
  if (_Var6 == _Overwrite_existing) {
LAB_15018e252:
    BVar3 = CopyFileW(param_1,param_2,0);
    if (BVar3 != 0) {
      uStack_77 = uStack_6f;
      uStack_75 = uStack_6d;
      local_78 = 1;
      _Stack_74 = _Success;
      goto LAB_15018e297;
    }
    _Var4 = GetLastError();
    uStack_77 = uStack_6f;
    uStack_75 = uStack_6d;
  }
  else {
    BVar3 = CopyFileW(param_1,param_2,1);
    if (BVar3 == 0) {
      local_78 = 0;
      _Stack_74 = GetLastError();
    }
    else {
      local_78 = 1;
      _Stack_74 = _Success;
    }
    _Var1._1_2_ = uStack_77;
    _Var1._Copied = (bool)local_78;
    _Var1._3_1_ = uStack_75;
    _Var1._Error = _Stack_74;
    if (_Stack_74 != _File_exists) {
      return _Var1;
    }
    if (_Var6 == _None) {
      return _Var1;
    }
    dwShareMode = 3;
    if (_Var6 != _Skip_existing) {
      dwShareMode = 1;
    }
    hObject = CreateFileW(param_1,0x80,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if ((hObject != (HANDLE)0xffffffffffffffff) || (_Var4 = GetLastError(), _Var4 == _Success)) {
      hObject_00 = CreateFileW(param_2,0x80,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if ((hObject_00 == (HANDLE)0xffffffffffffffff) && (_Var4 = GetLastError(), _Var4 != _Success))
      {
        local_78 = 0;
        _Stack_74 = _Var4;
LAB_15018e12d:
        if ((hObject != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hObject), BVar3 == 0)) {
LAB_15018e1c2:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        if (_Var6 == _Update_existing) {
          _Var4 = `anonymous_namespace'::_Get_last_write_time_by_handle(hObject,(long64 *)&local_78)
          ;
          if ((_Var4 != _Success) ||
             (_Var4 = `anonymous_namespace'::_Get_last_write_time_by_handle
                                (hObject_00,(long64 *)&local_70), _Var4 != _Success)) {
            local_78 = 0;
            _Stack_74 = _Var4;
            if ((hObject_00 != (HANDLE)0xffffffffffffffff) &&
               (BVar3 = CloseHandle(hObject_00), BVar3 == 0)) goto LAB_15018e1c2;
            goto LAB_15018e12d;
          }
          if (CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,local_70))) <
              CONCAT44(_Stack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,local_78)))) {
            if (((hObject_00 != (HANDLE)0xffffffffffffffff) &&
                (BVar3 = CloseHandle(hObject_00), BVar3 == 0)) ||
               ((hObject != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hObject), BVar3 == 0)
                ))) goto LAB_15018e1c2;
            goto LAB_15018e252;
          }
        }
        _Var4 = `anonymous_namespace'::_Get_file_id_by_handle(hObject,&local_50);
        if ((_Var4 == _Success) &&
           (_Var4 = `anonymous_namespace'::_Get_file_id_by_handle(hObject_00,&local_68),
           _Var4 == _Success)) {
          iVar5 = memcmp(&local_50,&local_68,0x18);
          if (iVar5 == 0) {
            _Stack_74 = _Sharing_violation;
            _Var4 = _Stack_74;
          }
          else {
            _Stack_74 = _Success;
            _Var4 = _Stack_74;
          }
        }
        _Stack_74 = _Var4;
        local_78 = 0;
        if (((hObject_00 != (HANDLE)0xffffffffffffffff) &&
            (BVar3 = CloseHandle(hObject_00), BVar3 == 0)) ||
           ((hObject != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hObject), BVar3 == 0))))
        {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_15018e297;
    }
  }
  local_78 = 0;
  _Stack_74 = _Var4;
LAB_15018e297:
  _Var2._1_2_ = uStack_77;
  _Var2._Copied = (bool)local_78;
  _Var2._3_1_ = uStack_75;
  _Var2._Error = _Stack_74;
  return _Var2;
}

// __std_fs_create_directory @ 15018e2cc

__std_fs_create_directory_result __cdecl __std_fs_create_directory(wchar_t *param_1)

{
  __std_fs_create_directory_result _Var1;
  BOOL BVar2;
  uint local_res10;
  __std_win_error _StackX_14;
  __std_fs_stats local_28;
  
  BVar2 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar2 == 0) {
    _StackX_14 = GetLastError();
    if (_StackX_14 == _Already_exists) {
      _StackX_14 = __std_fs_get_stats(param_1,&local_28,_Attributes|_Follow_symlinks,_Invalid);
      if ((_StackX_14 == _Success) && (((undefined1)local_28._Attributes & _Directory) == ~_Invalid)
         ) {
        _StackX_14 = _Already_exists;
      }
    }
    local_res10 = local_res10 & 0xffffff00;
  }
  else {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    _StackX_14 = _Success;
  }
  _Var1._Error = _StackX_14;
  _Var1._0_4_ = local_res10;
  return _Var1;
}

// __std_fs_create_directory_symbolic_link @ 15018e348

__std_win_error __cdecl __std_fs_create_directory_symbolic_link(wchar_t *param_1,wchar_t *param_2)

{
  __std_win_error _Var1;
  
  _Var1 = `anonymous_namespace'::_Create_symlink(param_1,param_2,1);
  return _Var1;
}

// __std_fs_create_directory_template @ 15018e35c

__std_fs_create_directory_result __cdecl
__std_fs_create_directory_template(wchar_t *param_1,wchar_t *param_2)

{
  __std_fs_create_directory_result _Var1;
  BOOL BVar2;
  __std_win_error _Var3;
  __std_win_error _Var4;
  undefined4 local_res18;
  
  BVar2 = CreateDirectoryExW(param_1,param_2,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar2 == 0) {
    _Var3 = GetLastError();
    local_res18 = (uint)local_res18._1_3_ << 8;
    _Var4 = _Success;
    if (_Var3 != _Already_exists) {
      _Var4 = _Var3;
    }
  }
  else {
    local_res18 = CONCAT31(local_res18._1_3_,1);
    _Var4 = _Success;
  }
  _Var1._Error = _Var4;
  _Var1._0_4_ = local_res18;
  return _Var1;
}

// __std_fs_create_hard_link @ 15018e3a0

__std_win_error __cdecl __std_fs_create_hard_link(wchar_t *param_1,wchar_t *param_2)

{
  BOOL BVar1;
  __std_win_error _Var2;
  
  BVar1 = CreateHardLinkW(param_1,param_2,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return _Success;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018e3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var2 = GetLastError();
  return _Var2;
}

// __std_fs_create_symbolic_link @ 15018e3cc

__std_win_error __cdecl __std_fs_create_symbolic_link(wchar_t *param_1,wchar_t *param_2)

{
  __std_win_error _Var1;
  
  _Var1 = `anonymous_namespace'::_Create_symlink(param_1,param_2,0);
  return _Var1;
}

// __std_fs_directory_iterator_advance @ 15018e3dc

__std_win_error __cdecl
__std_fs_directory_iterator_advance(__std_fs_dir_handle param_1,__std_fs_find_data *param_2)

{
  BOOL BVar1;
  __std_win_error _Var2;
  
  BVar1 = FindNextFileW((HANDLE)param_1,(LPWIN32_FIND_DATAW)param_2);
  if (BVar1 != 0) {
    return _Success;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018e3f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var2 = GetLastError();
  return _Var2;
}

// __std_fs_directory_iterator_close @ 15018e404

void __cdecl __std_fs_directory_iterator_close(__std_fs_dir_handle param_1)

{
  BOOL BVar1;
  
  if (param_1 != _Invalid) {
    BVar1 = FindClose((HANDLE)param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

// __std_fs_directory_iterator_open @ 15018e42c

__std_win_error __cdecl
__std_fs_directory_iterator_open
          (wchar_t *param_1,__std_fs_dir_handle *param_2,__std_fs_find_data *param_3)

{
  BOOL BVar1;
  __std_win_error _Var2;
  HANDLE pvVar3;
  
  if (*param_2 != _Invalid) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = (__std_fs_dir_handle)pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
    _Var2 = GetLastError();
  }
  else {
    _Var2 = _Success;
  }
  return _Var2;
}

// __std_fs_equivalent @ 15018e4ac

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_fs_equivalent_result __cdecl __std_fs_equivalent(wchar_t *param_1,wchar_t *param_2)

{
  void *hObject;
  __std_fs_equivalent_result _Var1;
  __std_fs_equivalent_result _Var2;
  undefined4 uVar3;
  __std_win_error _Var4;
  BOOL BVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  __std_win_error _Stack_54;
  undefined4 local_50;
  __std_win_error _Stack_4c;
  _FILE_ID_INFO local_48;
  _FILE_ID_INFO local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  _Var4 = __std_fs_open_handle
                    ((__std_fs_file_handle *)&local_58,param_1,_File_read_attributes,
                     _Backup_semantics);
  if (_Var4 == _Success) {
    hObject = (void *)CONCAT44(_Stack_54,local_58);
    _Stack_54 = `anonymous_namespace'::_Get_file_id_by_handle(hObject,&local_30);
    if (_Stack_54 == _Success) {
      _Stack_54 = __std_fs_open_handle
                            ((__std_fs_file_handle *)&local_50,param_2,_File_read_attributes,
                             _Backup_semantics);
      _Var4 = _Stack_4c;
      uVar3 = local_50;
      if (_Stack_54 == _Success) {
        _Stack_54 = `anonymous_namespace'::_Get_file_id_by_handle
                              ((void *)CONCAT44(_Stack_4c,local_50),&local_48);
        if (_Stack_54 == _Success) {
          iVar6 = memcmp(&local_30,&local_48,0x18);
          _Stack_54 = _Success;
          local_58 = CONCAT31(local_58._1_3_,iVar6 == 0);
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
      }
      else {
        local_58 = local_58 & 0xffffff00;
      }
      if ((CONCAT44(_Var4,uVar3) != -1) &&
         (BVar5 = CloseHandle((HANDLE)CONCAT44(_Var4,uVar3)), BVar5 == 0)) goto LAB_15018e597;
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((hObject == (void *)0xffffffffffffffff) || (BVar5 = CloseHandle(hObject), BVar5 != 0)) {
      _Var1._Error = _Stack_54;
      _Var1._0_4_ = local_58;
      return _Var1;
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
    _Stack_4c = _Var4;
    if (((HANDLE)CONCAT44(_Stack_54,local_58) == (HANDLE)0xffffffffffffffff) ||
       (BVar5 = CloseHandle((HANDLE)CONCAT44(_Stack_54,local_58)), BVar5 != 0)) {
      _Var2._Error = _Stack_4c;
      _Var2._0_4_ = local_50;
      return _Var2;
    }
  }
LAB_15018e597:
                    /* WARNING: Subroutine does not return */
  abort();
}

// __std_fs_get_current_path @ 15018e5f0

__std_ulong_and_error __cdecl __std_fs_get_current_path(ulong param_1,wchar_t *param_2)

{
  __std_ulong_and_error _Var1;
  DWORD DVar2;
  undefined4 uStackX_1c;
  
  DVar2 = GetCurrentDirectoryW(param_1,param_2);
  if ((DVar2 == 0) || (param_1 < DVar2)) {
    uStackX_1c = GetLastError();
  }
  else {
    uStackX_1c = _Success;
  }
  _Var1._Error = uStackX_1c;
  _Var1._Size = DVar2;
  return _Var1;
}

// __std_fs_get_file_attributes_by_handle @ 15018e634

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_win_error __cdecl
__std_fs_get_file_attributes_by_handle(__std_fs_file_handle param_1,ulong *param_2)

{
  BOOL BVar1;
  __std_win_error _Var2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  BVar1 = GetFileInformationByHandleEx((HANDLE)param_1,FileBasicInfo,local_38,0x28);
  if (BVar1 == 0) {
    _Var2 = GetLastError();
  }
  else {
    *param_2 = local_18;
    _Var2 = _Success;
  }
  return _Var2;
}

// __std_fs_get_file_id @ 15018e68c

__std_win_error __cdecl __std_fs_get_file_id(__std_fs_file_id *param_1,wchar_t *param_2)

{
  __std_win_error _Var1;
  int iVar2;
  HANDLE local_res18 [2];
  
  _Var1 = __std_fs_open_handle
                    ((__std_fs_file_handle *)local_res18,param_2,_File_read_attributes,
                     _Backup_semantics);
  if (_Var1 == _Success) {
    _Var1 = `anonymous_namespace'::_Get_file_id_by_handle(local_res18[0],(_FILE_ID_INFO *)param_1);
    if (local_res18[0] == (HANDLE)0xffffffffffffffff) {
      return _Var1;
    }
    iVar2 = CloseHandle(local_res18[0]);
  }
  else {
    if (local_res18[0] == (HANDLE)0xffffffffffffffff) {
      return _Var1;
    }
    iVar2 = CloseHandle(local_res18[0]);
  }
  if (iVar2 != 0) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// __std_fs_get_final_path_name_by_handle @ 15018e710

__std_ulong_and_error __cdecl
__std_fs_get_final_path_name_by_handle
          (__std_fs_file_handle param_1,wchar_t *param_2,ulong param_3,
          __std_fs_volume_name_kind param_4)

{
  __std_ulong_and_error _Var1;
  DWORD DVar2;
  undefined4 uStack_14;
  
  DVar2 = GetFinalPathNameByHandleW((HANDLE)param_1,param_2,param_3,param_4);
  if (DVar2 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = _Success;
  }
  _Var1._Error = uStack_14;
  _Var1._Size = DVar2;
  return _Var1;
}

// __std_fs_get_full_path_name @ 15018e748

__std_ulong_and_error __cdecl
__std_fs_get_full_path_name(wchar_t *param_1,ulong param_2,wchar_t *param_3)

{
  __std_ulong_and_error _Var1;
  DWORD DVar2;
  undefined4 uStackX_24;
  
  DVar2 = GetFullPathNameW(param_1,param_2,param_3,(LPWSTR *)0x0);
  if (DVar2 == 0) {
    uStackX_24 = GetLastError();
  }
  else {
    uStackX_24 = _Success;
  }
  _Var1._Error = uStackX_24;
  _Var1._Size = DVar2;
  return _Var1;
}

// __std_fs_get_stats @ 15018e784

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_win_error __cdecl
__std_fs_get_stats(wchar_t *param_1,__std_fs_stats *param_2,__std_fs_stats_flags param_3,
                  __std_fs_file_attr param_4)

{
  BOOL BVar1;
  __std_win_error _Var2;
  HANDLE pvVar3;
  __std_fs_stats_flags _Var4;
  __std_fs_stats_flags _Var5;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  __std_fs_reparse_tag _Stack_2b4;
  __std_fs_file_attr local_2b0 [2];
  ulong64 local_2a8;
  ulong local_2a0;
  uint local_29c;
  DWORD DStack_298;
  DWORD local_294;
  __std_fs_file_attr local_290;
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  _Var4 = param_3 & ~_Follow_symlinks;
  if (((param_3 & _Follow_symlinks) != _None) && ((param_3 & _Reparse_tag) != _None)) {
    return _Invalid_parameter;
  }
  if ((((param_3 & _Attributes) != _None) && (param_4 != _Invalid)) &&
     (((param_4 & _Reparse_point) == ~_Invalid || ((param_3 & _Follow_symlinks) == _None)))) {
    _Var4 = param_3 & ~(_Attributes|_Follow_symlinks);
    param_2->_Attributes = param_4;
  }
  if (_Var4 != _None) {
    if (((_Var4 & (_Last_write_time|_File_size|_Attributes)) != _None) &&
       (((param_4 == _Invalid || ((param_4 & _Reparse_point) == ~_Invalid)) ||
        ((param_3 & _Follow_symlinks) == _None)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2b0);
      if (BVar1 == 0) {
        _Var2 = GetLastError();
        if (_Var2 != _Sharing_violation) {
          return _Var2;
        }
        pvVar3 = FindFirstFileW(param_1,&local_288);
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          _Var2 = GetLastError();
          return _Var2;
        }
        FindClose(pvVar3);
        local_29c = local_288.ftLastWriteTime.dwLowDateTime;
        DStack_298 = local_288.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_288.ftLastWriteTime.dwHighDateTime = DStack_298;
        local_288.ftLastWriteTime.dwLowDateTime = local_29c;
        local_288.dwFileAttributes = local_2b0[0];
        local_288.nFileSizeLow = local_290;
        local_288.nFileSizeHigh = local_294;
      }
      if (((param_3 & _Follow_symlinks) == _None) ||
         ((local_288.dwFileAttributes & _Reparse_point) == ~_Invalid)) {
        param_2->_Attributes = local_288.dwFileAttributes;
        param_2->_File_size = CONCAT44(local_288.nFileSizeHigh,local_288.nFileSizeLow);
        param_2->_Last_write_time =
             (ulonglong)local_288.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_29c;
        _Var5 = _Var4 & ~(_Last_write_time|_File_size|_Attributes);
        if (((local_288.dwFileAttributes & _Reparse_point) == ~_Invalid) &&
           ((_Var4 & _Reparse_tag) != _None)) {
          param_2->_Reparse_point_tag = _None;
          _Var5 = _Var4 & ~(_Last_write_time|_File_size|_Reparse_tag|_Attributes);
        }
        _Var4 = _Var5;
        if (_Var4 == _None) {
          return _Success;
        }
      }
    }
    _Var2 = __std_fs_open_handle
                      ((__std_fs_file_handle *)&local_2b8,param_1,_File_read_attributes,
                       (((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (_Var2 == _Success) {
      pvVar3 = (HANDLE)CONCAT44(_Stack_2b4,local_2b8);
      _Var5 = _Var4;
      if ((_Var4 & (_Last_write_time|_Reparse_tag|_Attributes)) != _None) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileBasicInfo,local_2b0,0x28);
        if (BVar1 == 0) {
          _Var2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return _Var2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          return _Var2;
        }
        _Var5 = _Var4 & ~(_Last_write_time|_Attributes);
        param_2->_Attributes = local_290;
        param_2->_Last_write_time = CONCAT44(local_29c,local_2a0);
        if ((_Var4 & _Reparse_tag) != _None) {
          if ((local_290 & _Reparse_point) == ~_Invalid) {
            param_2->_Reparse_point_tag = _None;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,&local_2b8,8);
            if (BVar1 == 0) {
              _Var2 = GetLastError();
              if (pvVar3 == (HANDLE)0xffffffffffffffff) {
                return _Var2;
              }
              BVar1 = CloseHandle(pvVar3);
              if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              return _Var2;
            }
            param_2->_Reparse_point_tag = _Stack_2b4;
          }
          _Var5 = _Var4 & ~(_Last_write_time|_Reparse_tag|_Attributes);
        }
      }
      if ((_Var5 & (_Link_count|_File_size)) != _None) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,local_2b0,0x18);
        if (BVar1 == 0) {
          _Var2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return _Var2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          return _Var2;
        }
        _Var5 = _Var5 & ~(_Link_count|_File_size);
        param_2->_File_size = local_2a8;
        param_2->_Link_count = local_2a0;
      }
      if (_Var5 == _None) {
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          return _Success;
        }
        BVar1 = CloseHandle(pvVar3);
        if (BVar1 != 0) {
          return _Success;
        }
      }
      else if ((pvVar3 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar3), BVar1 != 0))
      {
        return _Not_supported;
      }
    }
    else {
      if ((HANDLE)CONCAT44(_Stack_2b4,local_2b8) == (HANDLE)0xffffffffffffffff) {
        return _Var2;
      }
      BVar1 = CloseHandle((HANDLE)CONCAT44(_Stack_2b4,local_2b8));
      if (BVar1 != 0) {
        return _Var2;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return _Success;
}

// __std_fs_get_temp_path @ 15018eab0

__std_ulong_and_error __cdecl __std_fs_get_temp_path(wchar_t *param_1)

{
  __std_ulong_and_error _Var1;
  undefined4 uVar2;
  DWORD DVar3;
  __std_win_error _Var4;
  BOOL BVar5;
  undefined4 local_res10;
  __std_win_error _StackX_14;
  
  uVar2 = _Stl_GetTempPath2W(0x105,param_1);
  if (uVar2 == ~_Invalid) {
    local_res10 = uVar2;
    _StackX_14 = GetLastError();
    goto LAB_15018eb49;
  }
  DVar3 = GetFileAttributesW(param_1);
  if ((DVar3 == 0xffffffff) || ((DVar3 & 0x10) == 0)) {
LAB_15018eb3d:
    _StackX_14 = _Max;
    local_res10 = uVar2;
  }
  else {
    if ((DVar3 >> 10 & 1) != 0) {
      _Var4 = __std_fs_open_handle
                        ((__std_fs_file_handle *)&local_res10,param_1,_File_read_attributes,
                         _Backup_semantics);
      if (((HANDLE)CONCAT44(_StackX_14,local_res10) != (HANDLE)0xffffffffffffffff) &&
         (BVar5 = CloseHandle((HANDLE)CONCAT44(_StackX_14,local_res10)), BVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (_Var4 != _Success) goto LAB_15018eb3d;
    }
    _StackX_14 = _Success;
    local_res10 = uVar2;
  }
LAB_15018eb49:
  _Var1._Error = _StackX_14;
  _Var1._Size = local_res10;
  return _Var1;
}

// __std_fs_is_junction_from_reparse_data_buffer @ 15018eb60

bool __cdecl __std_fs_is_junction_from_reparse_data_buffer(__std_fs_reparse_data_buffer *param_1)

{
  return param_1->_Reparse_tag == 0xa0000003;
}

// __std_fs_open_handle @ 15018eb70

__std_win_error __cdecl
__std_fs_open_handle
          (__std_fs_file_handle *param_1,wchar_t *param_2,__std_access_rights param_3,
          __std_fs_file_flags param_4)

{
  __std_win_error _Var1;
  HANDLE pvVar2;
  
  _Var1 = _Success;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = (__std_fs_file_handle)pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    _Var1 = GetLastError();
  }
  return _Var1;
}

// __std_fs_read_name_from_reparse_data_buffer @ 15018ebd0

__std_win_error __cdecl
__std_fs_read_name_from_reparse_data_buffer
          (__std_fs_reparse_data_buffer *param_1,wchar_t **param_2,ushort *param_3)

{
  ushort uVar1;
  wchar_t *pwVar2;
  
  if (param_1->_Reparse_tag == 0xa000000c) {
    uVar1 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Print_name_length >> 1;
    if (uVar1 == 0) {
      *param_3 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Substitute_name_length >> 1;
      uVar1 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Substitute_name_offset;
    }
    else {
      *param_3 = uVar1;
      uVar1 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Print_name_offset;
    }
    pwVar2 = (wchar_t *)
             ((longlong)&param_1->field3_0x8 + ((ulonglong)uVar1 & 0xfffffffffffffffe) + 0xc);
  }
  else {
    if (param_1->_Reparse_tag != 0xa0000003) {
      return _Reparse_tag_invalid;
    }
    uVar1 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Print_name_length >> 1;
    if (uVar1 == 0) {
      *param_3 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Substitute_name_length >> 1;
      uVar1 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Substitute_name_offset;
    }
    else {
      *param_3 = uVar1;
      uVar1 = (param_1->field3_0x8)._Symbolic_link_reparse_buffer._Print_name_offset;
    }
    pwVar2 = (wchar_t *)((longlong)&param_1->field3_0x8 + (ulonglong)(uVar1 >> 1) * 2 + 8);
  }
  *param_2 = pwVar2;
  return _Success;
}

// __std_fs_read_reparse_data_buffer @ 15018ec54

__std_win_error __cdecl
__std_fs_read_reparse_data_buffer(__std_fs_file_handle param_1,void *param_2,ulong param_3)

{
  BOOL BVar1;
  __std_win_error _Var2;
  DWORD local_res20 [2];
  
  BVar1 = DeviceIoControl((HANDLE)param_1,0x900a8,(LPVOID)0x0,0,param_2,param_3,local_res20,
                          (LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    _Var2 = GetLastError();
  }
  else {
    _Var2 = _Success;
  }
  return _Var2;
}

// __std_fs_remove @ 15018eca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__std_fs_remove_result __cdecl __std_fs_remove(wchar_t *param_1)

{
  __std_fs_remove_result _Var1;
  bool bVar2;
  BOOL BVar3;
  __std_win_error _Var4;
  undefined1 auStack_78 [32];
  uint local_58;
  __std_win_error _Stack_54;
  HANDLE local_50;
  undefined4 local_48 [2];
  undefined1 local_40 [32];
  uint local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar2 = false;
  _Stack_54 = __std_fs_open_handle
                        ((__std_fs_file_handle *)&local_50,param_1,
                         _Delete|_File_write_attributes|_File_read_attributes,
                         _Backup_semantics|_Open_reparse_point);
  if (_Stack_54 == _Success) {
    bVar2 = true;
LAB_15018ecee:
    local_48[0] = 0x13;
    BVar3 = SetFileInformationByHandle(local_50,0x15,local_48,4);
    if (BVar3 == 0) {
      _Stack_54 = GetLastError();
      if (((_Stack_54 == _Invalid_function) || (_Stack_54 == _Not_supported)) ||
         (_Stack_54 == _Invalid_parameter)) {
        _Stack_54 = `anonymous_namespace'::_Set_delete_flag((__std_fs_file_handle)local_50);
        if (_Stack_54 == _Success) goto LAB_15018ed14;
        if ((_Stack_54 != _Access_denied) || (!bVar2)) goto LAB_15018eda7;
        BVar3 = GetFileInformationByHandleEx(local_50,FileBasicInfo,local_40,0x28);
        if (BVar3 == 0) {
LAB_15018ede6:
          local_58 = local_58 & 0xffffff00;
LAB_15018edea:
          _Stack_54 = GetLastError();
        }
        else {
          if ((local_20 & 1) != 0) {
            local_20 = local_20 ^ 1;
            BVar3 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
            if (BVar3 == 0) goto LAB_15018ede6;
            _Var4 = `anonymous_namespace'::_Set_delete_flag((__std_fs_file_handle)local_50);
            if (_Var4 == _Success) {
              local_58 = CONCAT31(local_58._1_3_,1);
              _Stack_54 = _Success;
              goto LAB_15018edf3;
            }
            if (_Var4 != _Access_denied) {
              local_58 = (uint)local_58._1_3_ << 8;
              _Stack_54 = GetLastError();
              goto joined_r0x00015018ed5a;
            }
            local_20 = local_20 | 1;
            BVar3 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
            local_58 = local_58 & 0xffffff00;
            if (BVar3 != 0) goto LAB_15018ee74;
            goto LAB_15018edea;
          }
          local_58 = local_58 & 0xffffff00;
LAB_15018ee74:
          _Stack_54 = _Access_denied;
        }
LAB_15018edf3:
        if ((local_50 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(local_50), BVar3 == 0))
        {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_15018ed6a;
      }
LAB_15018eda7:
      local_58 = local_58 & 0xffffff00;
    }
    else {
LAB_15018ed14:
      local_58 = CONCAT31(local_58._1_3_,1);
      _Stack_54 = _Success;
    }
  }
  else {
    if (_Stack_54 == _Access_denied) {
      _Stack_54 = __std_fs_open_handle
                            ((__std_fs_file_handle *)&local_50,param_1,_Delete,
                             _Backup_semantics|_Open_reparse_point);
      if (_Stack_54 == _Success) goto LAB_15018ecee;
    }
    else if (((((_Stack_54 == _File_not_found) || (_Stack_54 == _Path_not_found)) ||
              (_Stack_54 == _Error_bad_netpath)) ||
             ((_Stack_54 == _Error_netname_deleted || (_Stack_54 == _Invalid_name)))) ||
            (_Stack_54 == _Directory_name_is_invalid)) {
      _Stack_54 = _Success;
    }
    local_58 = local_58 & 0xffffff00;
  }
joined_r0x00015018ed5a:
  if ((local_50 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(local_50), BVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_15018ed6a:
  _Var1._Error = _Stack_54;
  _Var1._0_4_ = local_58;
  return _Var1;
}

// __std_fs_rename @ 15018eed0

__std_win_error __cdecl __std_fs_rename(wchar_t *param_1,wchar_t *param_2)

{
  BOOL BVar1;
  __std_win_error _Var2;
  
  BVar1 = MoveFileExW(param_1,param_2,3);
  if (BVar1 != 0) {
    return _Success;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018eeef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var2 = GetLastError();
  return _Var2;
}

// __std_fs_resize_file @ 15018eefc

__std_win_error __cdecl __std_fs_resize_file(wchar_t *param_1,ulong64 param_2)

{
  __std_win_error _Var1;
  int iVar2;
  BOOL BVar3;
  HANDLE local_res18;
  ulong64 local_res20;
  
  _Var1 = __std_fs_open_handle
                    ((__std_fs_file_handle *)&local_res18,param_1,_File_generic_write,_None);
  if (_Var1 == _Success) {
    local_res20 = param_2;
    BVar3 = SetFileInformationByHandle(local_res18,FileEndOfFileInfo,&local_res20,8);
    if (BVar3 != 0) {
      if ((local_res18 == (HANDLE)0xffffffffffffffff) ||
         (BVar3 = CloseHandle(local_res18), BVar3 != 0)) {
        return _Success;
      }
      goto LAB_15018ef96;
    }
    _Var1 = GetLastError();
    if (local_res18 == (HANDLE)0xffffffffffffffff) {
      return _Var1;
    }
    iVar2 = CloseHandle(local_res18);
  }
  else {
    if (local_res18 == (HANDLE)0xffffffffffffffff) {
      return _Var1;
    }
    iVar2 = CloseHandle(local_res18);
  }
  if (iVar2 != 0) {
    return _Var1;
  }
LAB_15018ef96:
                    /* WARNING: Subroutine does not return */
  abort();
}

// __std_fs_set_current_path @ 15018efb0

__std_win_error __cdecl __std_fs_set_current_path(wchar_t *param_1)

{
  BOOL BVar1;
  __std_win_error _Var2;
  
  BVar1 = SetCurrentDirectoryW(param_1);
  if (BVar1 != 0) {
    return _Success;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018efc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var2 = GetLastError();
  return _Var2;
}

// __std_fs_set_last_write_time @ 15018efd8

__std_win_error __cdecl __std_fs_set_last_write_time(long64 param_1,wchar_t *param_2)

{
  __std_win_error _Var1;
  int iVar2;
  BOOL BVar3;
  FILETIME local_res8;
  HANDLE local_res18 [2];
  
  local_res8 = (FILETIME)param_1;
  _Var1 = __std_fs_open_handle
                    ((__std_fs_file_handle *)local_res18,param_2,_File_write_attributes,
                     _Backup_semantics);
  if (_Var1 == _Success) {
    BVar3 = SetFileTime(local_res18[0],(FILETIME *)0x0,(FILETIME *)0x0,&local_res8);
    if (BVar3 != 0) {
      if ((local_res18[0] == (HANDLE)0xffffffffffffffff) ||
         (BVar3 = CloseHandle(local_res18[0]), BVar3 != 0)) {
        return _Success;
      }
      goto LAB_15018f06a;
    }
    _Var1 = GetLastError();
    if (local_res18[0] == (HANDLE)0xffffffffffffffff) {
      return _Var1;
    }
    iVar2 = CloseHandle(local_res18[0]);
  }
  else {
    if (local_res18[0] == (HANDLE)0xffffffffffffffff) {
      return _Var1;
    }
    iVar2 = CloseHandle(local_res18[0]);
  }
  if (iVar2 != 0) {
    return _Var1;
  }
LAB_15018f06a:
                    /* WARNING: Subroutine does not return */
  abort();
}

// __std_fs_space @ 15018f084

__std_win_error __cdecl
__std_fs_space(wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,ulong64 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  BOOL BVar3;
  __std_win_error _Var4;
  DWORD DVar5;
  __std_win_error _Var6;
  LPCWSTR lpDirectoryName;
  LPCWSTR pWVar7;
  uint uVar8;
  HANDLE local_res10;
  
  BVar3 = GetDiskFreeSpaceExW(param_1,(PULARGE_INTEGER)param_2,(PULARGE_INTEGER)param_3,
                              (PULARGE_INTEGER)param_4);
  _Var6 = _Success;
  if (BVar3 != 0) {
    return _Success;
  }
  _Var4 = GetLastError();
  *param_2 = 0xffffffffffffffff;
  *param_3 = 0xffffffffffffffff;
  *param_4 = 0xffffffffffffffff;
  if (_Var4 != _Directory_name_is_invalid) {
    return _Var4;
  }
  _Var4 = __std_fs_open_handle
                    ((__std_fs_file_handle *)&local_res10,param_1,_File_read_attributes,
                     _Backup_semantics);
  if (_Var4 == _Success) {
    lpDirectoryName = malloc(0x208);
    free((void *)0x0);
    free((void *)0x0);
    uVar1 = 0x104;
    while (lpDirectoryName != (LPCWSTR)0x0) {
      DVar5 = GetFinalPathNameByHandleW(local_res10,lpDirectoryName + 0xe,uVar1 - 0xe,2);
      if (DVar5 == 0) {
        _Var6 = GetLastError();
        if ((local_res10 == (HANDLE)0xffffffffffffffff) ||
           (BVar3 = CloseHandle(local_res10), BVar3 != 0)) goto LAB_15018f26d;
        goto LAB_15018f1c0;
      }
      uVar8 = DVar5 + 0xe;
      if (uVar8 <= uVar1) {
        if ((local_res10 == (HANDLE)0xffffffffffffffff) ||
           (BVar3 = CloseHandle(local_res10), BVar3 != 0)) {
          uVar2 = _Dos_to_nt_prefix._8_8_;
          pWVar7 = lpDirectoryName + uVar8;
          *(undefined8 *)lpDirectoryName = _Dos_to_nt_prefix._0_8_;
          *(undefined8 *)(lpDirectoryName + 4) = uVar2;
          *(undefined8 *)(lpDirectoryName + 8) = _Dos_to_nt_prefix._16_8_;
          *(undefined4 *)(lpDirectoryName + 0xc) = _Dos_to_nt_prefix._24_4_;
          do {
            pWVar7 = pWVar7 + -1;
          } while (*pWVar7 != L'\\');
          *pWVar7 = L'\0';
          BVar3 = GetDiskFreeSpaceExW(lpDirectoryName,(PULARGE_INTEGER)param_2,
                                      (PULARGE_INTEGER)param_3,(PULARGE_INTEGER)param_4);
          if (BVar3 == 0) {
            *param_2 = 0xffffffffffffffff;
            *param_3 = 0xffffffffffffffff;
            *param_4 = 0xffffffffffffffff;
            _Var6 = GetLastError();
            free(lpDirectoryName);
            return _Var6;
          }
LAB_15018f26d:
          free(lpDirectoryName);
          return _Var6;
        }
        goto LAB_15018f1c0;
      }
      pWVar7 = malloc((ulonglong)uVar8 * 2);
      free(lpDirectoryName);
      free((void *)0x0);
      lpDirectoryName = pWVar7;
      uVar1 = uVar8;
    }
    if ((local_res10 == (HANDLE)0xffffffffffffffff) ||
       (BVar3 = CloseHandle(local_res10), BVar3 != 0)) {
      free((void *)0x0);
      return _Not_enough_memory;
    }
  }
  else if ((local_res10 == (HANDLE)0xffffffffffffffff) ||
          (BVar3 = CloseHandle(local_res10), BVar3 != 0)) {
    free((void *)0x0);
    return _Var4;
  }
LAB_15018f1c0:
                    /* WARNING: Subroutine does not return */
  abort();
}

// __std_fs_write_reparse_data_buffer @ 15018f2ac

__std_win_error __cdecl
__std_fs_write_reparse_data_buffer
          (__std_fs_file_handle param_1,__std_fs_reparse_data_buffer *param_2)

{
  BOOL BVar1;
  __std_win_error _Var2;
  
  BVar1 = DeviceIoControl((HANDLE)param_1,0x900a4,param_2,param_2->_Reparse_data_length + 8,
                          (LPVOID)0x0,0,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return _Success;
  }
                    /* WARNING: Could not recover jumptable at 0x00015018f2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var2 = GetLastError();
  return _Var2;
}

// __std_is_file_not_found @ 15018f308

bool __cdecl __std_is_file_not_found(__std_win_error param_1)

{
  if ((((param_1 != _File_not_found) && (param_1 != _Path_not_found)) &&
      (param_1 != _Error_bad_netpath)) &&
     (((param_1 != _Error_netname_deleted && (param_1 != _Invalid_name)) &&
      (param_1 != _Directory_name_is_invalid)))) {
    return false;
  }
  return true;
}

