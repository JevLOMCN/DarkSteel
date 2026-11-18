// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshUtilitiesCommon
// Functions: 1

// HashBytes @ 14435a0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FMD5::HashBytes(FString *__return_storage_ptr__,uchar *param_1,ulong64 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  FString local_a8;
  FMD5 local_98;
  uchar local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FMD5(&local_98);
  Update(&local_98,param_1,param_2);
  Final(&local_98,local_38);
  lVar1 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  do {
    ::FString::PrintfImpl(&local_a8,L"%02x");
    iVar2 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar2);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 < 0x10);
  ~FMD5(&local_98);
  return __return_storage_ptr__;
}

