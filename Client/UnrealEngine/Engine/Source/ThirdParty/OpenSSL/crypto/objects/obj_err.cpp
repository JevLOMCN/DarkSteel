// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// ERR_load_OBJ_strings @ 14f765cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_OBJ_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x8069000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_1534cd1b0);
    ERR_load_strings_const(&DAT_1534cd250);
  }
  return 1;
}

