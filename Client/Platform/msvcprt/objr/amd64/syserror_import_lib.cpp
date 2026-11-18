// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: msvcprt
// Functions: 4

// _Test @ 15018d4f4

bool __thiscall _anon_FA98056F::_Whitespace_bitmap_t::_Test(_Whitespace_bitmap_t *this,char param_1)

{
  return this->_Is_whitespace[(byte)param_1];
}

// __std_get_string_size_without_trailing_whitespace @ 15018d504

ulong64 __cdecl __std_get_string_size_without_trailing_whitespace(char *param_1,ulong64 param_2)

{
  while ((param_2 != 0 && (_Whitespace_bitmap._Is_whitespace[(byte)param_1[param_2 - 1]] != false)))
  {
    param_2 = param_2 - 1;
  }
  return param_2;
}

// __std_system_error_allocate_message @ 15018d52c

ulong64 __cdecl __std_system_error_allocate_message(ulong param_1,char **param_2)

{
  int iVar1;
  DWORD DVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  DWORD local_res18 [2];
  
  DVar2 = 0;
  local_res18[0] = 0;
  iVar5 = 0;
  do {
    if (DVar2 != 0) break;
    if (iVar5 == 0) {
      local_res18[0] = 0x409;
LAB_15018d593:
      DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_res18[0],(LPSTR)param_2,0,
                             (va_list *)0x0);
    }
    else {
      if (iVar5 != 1) {
        local_res18[0] = 0;
        goto LAB_15018d593;
      }
      iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
      if (iVar1 != 0) goto LAB_15018d593;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uVar3 = (ulong64)DVar2;
  if (DVar2 != 0) {
    pbVar6 = (byte *)(*param_2 + (uVar3 - 1));
    uVar4 = uVar3;
    do {
      if (_Whitespace_bitmap._Is_whitespace[*pbVar6] == false) {
        return uVar4;
      }
      pbVar6 = pbVar6 + -1;
      uVar4 = uVar4 - 1;
      uVar3 = 0;
    } while (uVar4 != 0);
  }
  return uVar3;
}

// __std_system_error_deallocate_message @ 15018d60c

HLOCAL __stdcall __std_system_error_deallocate_message(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018d60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

