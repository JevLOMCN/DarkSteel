// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_shared_page_directory_by_size_get @ 140d7cf80

pas_segregated_shared_page_directory * __cdecl
pas_shared_page_directory_by_size_get
          (pas_shared_page_directory_by_size *param_1,uint param_2,
          pas_segregated_page_config *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  pas_shared_page_directory_by_size_data *ppVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  pas_segregated_shared_page_directory *ppVar10;
  ulonglong in_R9;
  uint uVar11;
  bool bVar12;
  
  ppVar6 = param_1->data;
  if (ppVar6 == (pas_shared_page_directory_by_size_data *)0x0) {
    bVar1 = (param_3->base).min_align_shift;
    uVar8 = (uint)(1L << (bVar1 & 0x3f));
    if (param_2 < uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar5 = (uint)(param_3->base).max_object_size;
    if (uVar5 < param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar2 = param_1->log_shift;
    uVar9 = uVar5 >> (bVar1 & 0x1f);
    uVar7 = (ulonglong)uVar9 - 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 0;
    if (1 < uVar9) {
      uVar11 = ((uint)lVar3 ^ 0xffffffc0) + 0x41;
    }
    uVar11 = uVar11 >> ((byte)uVar2 & 0x1f);
    if (uVar5 - uVar8 < uVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar8 = uVar11 + 1;
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    ppVar6 = param_1->data;
    if (ppVar6 == (pas_shared_page_directory_by_size_data *)0x0) {
      ppVar6 = pas_immortal_heap_allocate
                         ((ulonglong)(uVar8 * 0x28 + 8),"pas_shared_page_directory_by_size_data",
                          pas_object_allocation);
      ppVar6->log_shift = uVar2;
      ppVar6->num_directories = uVar8;
      uVar7 = (ulonglong)uVar11;
      ppVar10 = ppVar6->directories + uVar7;
      do {
        uVar8 = ((uint)in_R9 & 0xff000000 | (uint)(byte)(char)param_3->kind) +
                (param_1->sharing_mode & 0xff) * 0x100 + 0x10000;
        in_R9 = (ulonglong)uVar8;
        bVar1 = (param_3->base).min_align_shift;
        (ppVar10->base).first_view = 0;
        (ppVar10->base).data = 0;
        (ppVar10->base).bits = 0;
        *(uint *)&(ppVar10->base).page_config_kind = uVar8;
        (ppVar10->base).is_basic_size_directory = false;
        ppVar10->next = (pas_segregated_shared_page_directory *)0x0;
        ppVar10->dump_arg =
             (void *)((1L << ((byte)(uVar7 << ((byte)uVar2 & 0x3f)) & 0x3f)) << (bVar1 & 0x3f));
        ppVar10 = ppVar10 + -1;
        bVar12 = uVar7 != 0;
        uVar7 = uVar7 - 1;
      } while (bVar12);
      LOCK();
      UNLOCK();
      param_1->data = ppVar6;
    }
    else {
      if (ppVar6->log_shift != uVar2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (ppVar6->num_directories != uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  uVar8 = param_2 >> ((param_3->base).min_align_shift & 0x1f);
  uVar7 = (ulonglong)uVar8 - 1;
  lVar3 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar5 = 0;
  if (1 < uVar8) {
    uVar5 = ((uint)lVar3 ^ 0xffffffc0) + 0x41;
  }
  uVar5 = uVar5 >> ((byte)ppVar6->log_shift & 0x1f);
  if (uVar5 < ppVar6->num_directories) {
    return ppVar6->directories + uVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

// pas_shared_page_directory_by_size_for_each @ 140d7d140

bool __cdecl
pas_shared_page_directory_by_size_for_each
          (pas_shared_page_directory_by_size *param_1,
          _func___cdecl_bool_pas_segregated_shared_page_directory_ptr_void_ptr *param_2,
          void *param_3)

{
  pas_shared_page_directory_by_size_data *ppVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  
  ppVar1 = param_1->data;
  if (ppVar1 == (pas_shared_page_directory_by_size_data *)0x0) {
    bVar4 = true;
  }
  else {
    lVar3 = (ulonglong)ppVar1->num_directories * 0x28;
    do {
      if (lVar3 + -0x28 == -0x28) {
        return true;
      }
      bVar2 = (*param_2)((pas_segregated_shared_page_directory *)
                         ((longlong)(ppVar1->directories + -1) + lVar3),param_3);
      bVar4 = false;
      lVar3 = lVar3 + -0x28;
    } while (bVar2);
  }
  return bVar4;
}

// pas_shared_page_directory_by_size_for_each_remote @ 140d7d1b0

bool __cdecl
pas_shared_page_directory_by_size_for_each_remote
          (pas_shared_page_directory_by_size *param_1,pas_enumerator *param_2,
          _func___cdecl_bool_pas_enumerator_ptr_pas_segregated_shared_page_directory_ptr_void_ptr
          *param_3,void *param_4)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  bool bVar4;
  
  pvVar2 = pas_enumerator_read_compact(param_2,param_1->data);
  if (pvVar2 == (void *)0x0) {
    bVar4 = true;
  }
  else {
    lVar3 = (ulonglong)*(uint *)((longlong)pvVar2 + 4) * 0x28;
    do {
      if (lVar3 + -0x28 == -0x28) {
        return true;
      }
      bVar1 = (*param_3)(param_2,(pas_segregated_shared_page_directory *)
                                 ((longlong)pvVar2 + lVar3 + -0x20),param_4);
      bVar4 = false;
      lVar3 = lVar3 + -0x28;
    } while (bVar1);
  }
  return bVar4;
}

// pas_shared_page_directory_by_size_dump_directory_arg @ 140d7d230

void __cdecl
pas_shared_page_directory_by_size_dump_directory_arg
          (pas_stream *param_1,pas_segregated_shared_page_directory *param_2)

{
  pas_stream_printf(param_1,"Size = %zu");
  return;
}

