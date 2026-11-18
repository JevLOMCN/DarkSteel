// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// Printf<float,float> @ 142dfbda0

FString * __cdecl
FString::Printf<float,float>
          (FString *__return_storage_ptr__,TCheckedFormatStringPrivate<wchar_t,float,float> param_1,
          float param_2,float param_3)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

