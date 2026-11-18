// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// FCacheAddressInline @ 14aa928d0

FCacheAddressInline * __thiscall
UE::Mutable::Private::FCacheAddressInline::FCacheAddressInline
          (FCacheAddressInline *this,uint *param_1)

{
  this->At = 0;
  this->ExecutionIndex = 0;
  this->At = *param_1;
  return this;
}

// FCacheAddressInline @ 14aa928f0

FCacheAddressInline * __thiscall
UE::Mutable::Private::FCacheAddressInline::FCacheAddressInline
          (FCacheAddressInline *this,FScheduledOpInline *param_1)

{
  this->At = 0;
  this->ExecutionIndex = 0;
  this->At = param_1->At;
  this->ExecutionIndex = param_1->ExecutionIndex;
  return this;
}

