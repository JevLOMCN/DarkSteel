// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 1

// BCryptGenRandom @ 15018f860

NTSTATUS __stdcall
BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm,PUCHAR pbBuffer,ULONG cbBuffer,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptGenRandom(hAlgorithm,pbBuffer,cbBuffer,dwFlags);
  return NVar1;
}

