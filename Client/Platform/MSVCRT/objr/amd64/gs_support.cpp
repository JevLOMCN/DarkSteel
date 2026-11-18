// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// __get_entropy @ 150167690

ulong64 __cdecl __get_entropy(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18 [2];
  
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res10);
  local_res8 = local_res10;
  DVar1 = GetCurrentThreadId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res18);
  return ((ulonglong)(uint)local_res18[0]._0_4_ << 0x20 ^
          CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
}

// __security_init_cookie @ 150167704

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (__security_cookie.value == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    __security_cookie.value =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (__security_cookie.value == 0x2b992ddfa232) {
      __security_cookie.value = 0x2b992ddfa233;
    }
  }
  __security_cookie_complement = ~__security_cookie.value;
  return;
}

