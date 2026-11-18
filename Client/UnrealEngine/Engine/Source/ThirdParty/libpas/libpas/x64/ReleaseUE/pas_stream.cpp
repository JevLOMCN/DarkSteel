// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_stream_vprintf @ 140d86310

void __cdecl pas_stream_vprintf(pas_stream *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000140d86316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1->functions->vprintf)(param_1,param_2,param_3);
  return;
}

// pas_stream_printf @ 140d86320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_stream_printf(pas_stream *param_1,char *param_2)

{
  code *pcVar1;
  char local_res18 [16];
  undefined1 auStack_38 [40];
  char *local_10;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_10 = local_res18;
  (*param_1->functions->vprintf)(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

