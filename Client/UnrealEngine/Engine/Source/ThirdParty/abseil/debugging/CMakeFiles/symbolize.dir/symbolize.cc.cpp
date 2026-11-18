// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 2

// InitializeSymbolizer @ 1501ee0d0

/* void __cdecl absl::lts_20240722::InitializeSymbolizer(char const * __ptr64) */

void __cdecl absl::lts_20240722::InitializeSymbolizer(char *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  if (DAT_155407768 == (HANDLE)0x0) {
    DAT_155407768 = GetCurrentProcess();
    SymSetOptions(6);
    iVar1 = SymInitialize(DAT_155407768,0,1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"symbolize_win32.inc",0x35,"SymInitialize() failed: %llu",(ulonglong)DVar2);
    }
  }
  return;
}

// Symbolize @ 1501ee150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::Symbolize(void const * __ptr64,char * __ptr64,int) */

bool __cdecl absl::lts_20240722::Symbolize(void *param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t _Count;
  size_t _Size;
  undefined1 auStack_868 [32];
  undefined4 local_848 [20];
  undefined4 local_7f8;
  char local_7f4 [2004];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_868;
  _Count = (size_t)param_3;
  if (0 < param_3) {
    local_848[0] = 0x58;
    local_7f8 = 2000;
    iVar1 = SymFromAddr(DAT_155407768,param_1,0,local_848);
    if (iVar1 != 0) {
      strncpy(param_2,local_7f4,_Count);
      if (param_2[_Count - 1] != '\0') {
        _Size = 3;
        if (_Count - 1 < 3) {
          _Size = _Count - 1;
        }
        memcpy(param_2 + ((_Count - 1) - _Size),&DAT_1536f50f0,_Size);
        param_2[_Count - 1] = '\0';
      }
      return true;
    }
  }
  return false;
}

