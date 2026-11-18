// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 4

// Printf<int> @ 141dae070

FString * __cdecl
FString::Printf<int>
          (FString *__return_storage_ptr__,TCheckedFormatStringPrivate<wchar_t,int> param_1,
          int param_2)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

// Printf<double> @ 141dae090

FString * __cdecl
FString::Printf<double>
          (FString *__return_storage_ptr__,TCheckedFormatStringPrivate<wchar_t,double> param_1,
          double param_2)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

// Printf<double,double,double,double> @ 141dae0c0

FString * __cdecl
FString::Printf<double,double,double,double>
          (FString *__return_storage_ptr__,
          TCheckedFormatStringPrivate<wchar_t,double,double,double,double> param_1,double param_2,
          double param_3,double param_4,double param_5)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

// Printf<double,double,double,double,double> @ 141dae100

FString * __cdecl
FString::Printf<double,double,double,double,double>
          (FString *__return_storage_ptr__,
          TCheckedFormatStringPrivate<wchar_t,double,double,double,double,double> param_1,
          double param_2,double param_3,double param_4,double param_5,double param_6)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

