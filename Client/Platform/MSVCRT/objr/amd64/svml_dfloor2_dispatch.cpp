// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_floor2 @ 15015ca10

void __cdecl __vdecl_floor2(void)

{
  undefined1 in_XMM0 [16];
  
  if (__isa_available < 2) {
    __sse2_floor2__16();
    return;
  }
  roundpd(in_XMM0,in_XMM0,1);
  return;
}

