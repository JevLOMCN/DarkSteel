// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// ERR_load_UI_strings @ 14f766060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_UI_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x28073000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_1534d3a80);
    ERR_load_strings_const(&DAT_1534d3be0);
  }
  return 1;
}

