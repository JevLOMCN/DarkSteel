// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_all_shared_page_directories_add @ 140d8df90

void __cdecl pas_all_shared_page_directories_add(pas_segregated_shared_page_directory *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->next == (pas_segregated_shared_page_directory *)0x0) {
    if (pas_first_shared_page_directory != param_1) {
      param_1->next = pas_first_shared_page_directory;
      pas_first_shared_page_directory = param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_all_shared_page_directories_for_each @ 140d8dfe0

bool __cdecl
pas_all_shared_page_directories_for_each
          (_func___cdecl_bool_pas_segregated_shared_page_directory_ptr_void_ptr *param_1,
          void *param_2)

{
  pas_segregated_shared_page_directory **pppVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  pas_segregated_shared_page_directory *ppVar5;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar5 = pas_first_shared_page_directory;
  if (pas_first_shared_page_directory == (pas_segregated_shared_page_directory *)0x0) {
    bVar4 = true;
  }
  else {
    do {
      bVar4 = (*param_1)(ppVar5,param_2);
      if (!bVar4) {
        return bVar4;
      }
      pppVar1 = &ppVar5->next;
      ppVar5 = *pppVar1;
    } while (*pppVar1 != (pas_segregated_shared_page_directory *)0x0);
  }
  return bVar4;
}

