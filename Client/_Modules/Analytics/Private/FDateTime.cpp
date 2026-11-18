// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 2

// operator- @ 143133ef0

FTimespan __thiscall FDateTime::operator-(FDateTime *this,FDateTime *param_1)

{
  longlong *in_R8;
  
  param_1->Ticks = this->Ticks - *in_R8;
  return (FTimespan)(long64)param_1;
}

// ToUnixTimestampDecimal @ 14313e0d0

double __thiscall FDateTime::ToUnixTimestampDecimal(FDateTime *this)

{
  FDateTime *pFVar1;
  FDateTime local_res8 [4];
  
  pFVar1 = FDateTime(local_res8,0x7b2,1,1,0,0,0,0);
  return (double)(this->Ticks - pFVar1->Ticks) * __real_3e7ad7f29abcaf48;
}

