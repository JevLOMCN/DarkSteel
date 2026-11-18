// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ToLower @ 141a97190

char __cdecl TChar<char>::ToLower(char param_1)

{
  return (-((int)param_1 - 0x41U < 0x1a) & 0x20U) + param_1;
}

// ToLower @ 141a971b0

uchar __cdecl TChar<char8_t>::ToLower(uchar param_1)

{
  return (-(param_1 - 0x41 < 0x1a) & 0x20U) + param_1;
}

// ToLower @ 141a971d0

wchar_t __cdecl TChar<wchar_t>::ToLower(wchar_t param_1)

{
  return (-(ushort)((ushort)param_1 - 0x41 < 0x1a) & 0x20) + param_1;
}

