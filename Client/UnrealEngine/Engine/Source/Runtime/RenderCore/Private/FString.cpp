// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Printf<wchar_t_const_*,wchar_t_const_*> @ 145e3e460

FString * __cdecl
FString::Printf<wchar_t_const_*,wchar_t_const_*>
          (FString *__return_storage_ptr__,
          TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*> param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

