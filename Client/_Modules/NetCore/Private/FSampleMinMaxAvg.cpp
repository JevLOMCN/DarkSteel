// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// AddSample_Internal @ 1441d65b0

void __thiscall UE::Net::FSampleMinMaxAvg::AddSample_Internal(FSampleMinMaxAvg *this,double param_1)

{
  this->TotalCount = this->TotalCount + 1;
  this->CurrentValue = param_1;
  this->TotalSum = param_1 + this->TotalSum;
  return;
}

// Reset @ 1441e9600

void __thiscall UE::Net::FSampleMinMaxAvg::Reset(FSampleMinMaxAvg *this)

{
  this->MinValue = 1.7976931348623157e+308;
  this->MaxValue = 2.2250738585072014e-308;
  this->CurrentValue = 0.0;
  this->TotalSum = 0.0;
  this->TotalCount = 0;
  return;
}

