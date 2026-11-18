// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_payload_reservation_page_list_append @ 140da9b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_payload_reservation_page_list_append(pas_range *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [32];
  pas_range local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_18.begin = param_1->begin;
  local_18.end = param_1->end;
  pas_enumerable_range_list_append(&pas_payload_reservation_page_list,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

