// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 1

// rrDisplayAssertion @ 14ff4ce60

int __cdecl oo2net::rrDisplayAssertion(char *param_1,int param_2,char *param_3,char *param_4)

{
  int iVar1;
  
  if (g_fp_OodleNet_Plugin_DisplayAssertion !=
      (_func___cdecl_int_char_ptr_int_char_ptr_char_ptr *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff4ce6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*g_fp_OodleNet_Plugin_DisplayAssertion)(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  return 0;
}

