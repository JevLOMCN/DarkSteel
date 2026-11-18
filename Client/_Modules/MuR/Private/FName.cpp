// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FName @ 14a976950

FName * __thiscall FName::FName(FName *this,TStringView<wchar_t> *param_1,EFindName param_2)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = FName(local_res8,param_1->Size,param_1->DataPtr,param_2);
  *this = *pFVar1;
  return this;
}

