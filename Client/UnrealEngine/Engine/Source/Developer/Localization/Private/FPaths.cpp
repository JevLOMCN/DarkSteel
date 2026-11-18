// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// CombineImpl<FString,wchar_t_const_(&)[5],wchar_t_const_(&)[2]> @ 146b38a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FPaths::CombineImpl<FString,wchar_t_const_(&)[5],wchar_t_const_(&)[2]>
          (FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  uVar3 = 0;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  local_30 = uVar3;
  local_38 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    local_30 = (undefined4)sVar2;
  }
  local_28 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_3);
    uVar3 = (undefined4)sVar2;
  }
  local_20 = uVar3;
  CombineInternal(__return_storage_ptr__,&local_48,3);
  return __return_storage_ptr__;
}

// CombineImpl<FString,wchar_t_const_(&)[13],wchar_t_const_(&)[2]> @ 146b38b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FPaths::CombineImpl<FString,wchar_t_const_(&)[13],wchar_t_const_(&)[2]>
          (FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  uVar3 = 0;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  local_30 = uVar3;
  local_38 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    local_30 = (undefined4)sVar2;
  }
  local_28 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_3);
    uVar3 = (undefined4)sVar2;
  }
  local_20 = uVar3;
  CombineInternal(__return_storage_ptr__,&local_48,3);
  return __return_storage_ptr__;
}

