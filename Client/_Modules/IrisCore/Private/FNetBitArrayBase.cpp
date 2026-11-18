// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// OrOp @ 1442131e0

uint __cdecl UE::Net::FNetBitArrayBase::OrOp(uint param_1,uint param_2)

{
  return param_1 | param_2;
}

// AndNotOp @ 144230220

uint __cdecl UE::Net::FNetBitArrayBase::AndNotOp(uint param_1,uint param_2)

{
  return ~param_2 & param_1;
}

// AndOp @ 144230230

uint __cdecl UE::Net::FNetBitArrayBase::AndOp(uint param_1,uint param_2)

{
  return param_1 & param_2;
}

