// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_get_epoch @ 140d6f120

ulong64 __cdecl pas_get_epoch(void)

{
  code *pcVar1;
  ulong64 uVar2;
  
  if (pas_epoch_is_counter) {
    uVar2 = pas_current_epoch + 1;
    pas_current_epoch = uVar2;
  }
  else {
    uVar2 = pas_get_current_monotonic_time_nanoseconds();
  }
  if (uVar2 != 0) {
    if (DAT_1553bbbd1 == '\0') {
      DAT_1553bbbd1 = '\x01';
    }
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

