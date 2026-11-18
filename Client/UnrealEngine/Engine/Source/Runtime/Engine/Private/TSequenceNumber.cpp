// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Diff @ 147fc26a0

int __cdecl
TSequenceNumber<14,unsigned_short>::Diff
          (TSequenceNumber<14,unsigned_short> param_1,TSequenceNumber<14,unsigned_short> param_2)

{
  return (int)(((uint)param_1.Value - (uint)param_2.Value) * 0x40000) >> 0x12;
}

// Diff @ 14809f1b0

int __cdecl
TSequenceNumber<3,unsigned_short>::Diff
          (TSequenceNumber<3,unsigned_short> param_1,TSequenceNumber<3,unsigned_short> param_2)

{
  return (int)(((uint)param_1.Value - (uint)param_2.Value) * 0x20000000) >> 0x1d;
}

// Diff @ 14809f1d0

int __cdecl
TSequenceNumber<8,unsigned_char>::Diff
          (TSequenceNumber<8,unsigned_char> param_1,TSequenceNumber<8,unsigned_char> param_2)

{
  return (int)(char)(param_1.Value - param_2.Value);
}

