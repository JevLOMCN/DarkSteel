// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// UpdateDesiredSize @ 142a13d30

void __cdecl
`STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize(SWidget *param_1)

{
  uint *puVar1;
  
  puVar1 = &param_1[2].Tag.Number;
  *(ushort *)puVar1 = (ushort)*puVar1 | 0x800;
  return;
}

// UpdateTextStyle @ 142a14d00

void __cdecl
`STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle(SWidget *param_1)

{
  uint *puVar1;
  
  puVar1 = &param_1[2].Tag.Number;
  *(ushort *)puVar1 = (ushort)*puVar1 | 0x400;
  return;
}

