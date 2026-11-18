// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// FCacheAddress @ 14a976550

FCacheAddress * __thiscall
UE::Mutable::Private::FCacheAddress::FCacheAddress(FCacheAddress *this,FScheduledOp *param_1)

{
  this->At = param_1->At;
  this->ExecutionIndex = param_1->ExecutionIndex;
  this->ExecutionOptions = param_1->ExecutionOptions;
  this->Type = param_1->Type;
  return this;
}

// FCacheAddress @ 14a976580

FCacheAddress * __thiscall
UE::Mutable::Private::FCacheAddress::FCacheAddress
          (FCacheAddress *this,uint param_1,FScheduledOp *param_2)

{
  this->At = param_1;
  this->ExecutionIndex = param_2->ExecutionIndex;
  this->ExecutionOptions = param_2->ExecutionOptions;
  this->Type = param_2->Type;
  return this;
}

// FCacheAddress @ 14a9765b0

FCacheAddress * __thiscall
UE::Mutable::Private::FCacheAddress::FCacheAddress
          (FCacheAddress *this,uint param_1,ushort param_2,uchar param_3,EType param_4)

{
  this->Type = param_4;
  this->At = param_1;
  this->ExecutionIndex = param_2;
  this->ExecutionOptions = param_3;
  return this;
}

