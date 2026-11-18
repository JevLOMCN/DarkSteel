// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetMessage @ 1416438f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FFileSystemError::GetMessage(FFileSystemError *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_848 [32];
  int local_828;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  if (this->SystemErrorCode == 0) {
    ::FString::FString(__return_storage_ptr__,&this->ErrorMessage);
  }
  else {
    memset(local_818,0,0x800);
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,this->SystemErrorCode);
    local_828 = this->SystemErrorCode;
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s [%s (%d)]");
  }
  return __return_storage_ptr__;
}

