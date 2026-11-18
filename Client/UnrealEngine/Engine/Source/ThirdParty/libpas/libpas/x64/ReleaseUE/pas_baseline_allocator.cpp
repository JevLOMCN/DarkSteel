// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_baseline_allocator_attach_directory @ 140d9d200

void __cdecl
pas_baseline_allocator_attach_directory
          (pas_baseline_allocator *param_1,pas_segregated_size_directory *param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  
  if ((param_1->u).allocator.view != (pas_segregated_view_opaque *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar2 = pas_segregated_size_directory_local_allocator_size(param_2);
  if (uVar2 < 0x141) {
    pas_local_allocator_construct
              (&(param_1->u).allocator,param_2,pas_local_allocator_not_in_thread_local_cache);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_baseline_allocator_detach_directory @ 140d9d250

void __cdecl pas_baseline_allocator_detach_directory(pas_baseline_allocator *param_1)

{
  code *pcVar1;
  
  if ((param_1->u).allocator.view != (pas_segregated_view_opaque *)0x0) {
    pas_local_allocator_stop(&(param_1->u).allocator,pas_lock_lock_mode_lock);
    *(undefined8 *)&param_1->u = 0;
    *(undefined8 *)((longlong)&param_1->u + 8) = 0;
    (param_1->u).allocator.payload_end = 0;
    *(undefined8 *)((longlong)&param_1->u + 0x18) = 0;
    (param_1->u).allocator.page_ish = 0;
    *(undefined8 *)((longlong)&param_1->u + 0x28) = 0;
    (param_1->u).allocator.current_word = 0;
    (param_1->u).allocator.view = (pas_segregated_view_opaque *)0x0;
    (param_1->u).allocator.bits[0] = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

