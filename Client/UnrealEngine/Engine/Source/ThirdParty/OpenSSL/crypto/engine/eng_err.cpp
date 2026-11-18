// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// ERR_load_ENGINE_strings @ 14f766010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_ENGINE_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x260c6000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_1534d2f50);
    ERR_load_strings_const(&DAT_1534d31e0);
  }
  return 1;
}

