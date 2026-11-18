// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_segregated_page_config_validate @ 140d74dc0

void __cdecl pas_segregated_page_config_validate(pas_segregated_page_config *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (!pas_segregated_page_config_do_validate) {
    return;
  }
  uVar2 = (param_1->base).page_size;
  uVar6 = param_1->exclusive_payload_size;
  if (uVar2 < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar5 = param_1->shared_payload_size;
  if (uVar2 < uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  bVar1 = (param_1->base).min_align_shift;
  uVar3 = (param_1->base).max_object_size;
  if (uVar3 <= (ulonglong)(1L << (bVar1 & 0x3f))) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar2 <= param_1->exclusive_payload_offset) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar2 <= param_1->shared_payload_offset) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar6 < uVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar5 < uVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_1->num_alloc_bits < param_1->shared_payload_offset + uVar5 >> (bVar1 & 0x3f)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar2 < param_1->exclusive_payload_offset + uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar6 = (param_1->base).granule_size;
  if ((uVar2 | uVar6) >> 0x20 == 0) {
    uVar5 = (uVar2 & 0xffffffff) % (uVar6 & 0xffffffff);
  }
  else {
    uVar5 = uVar2 % uVar6;
  }
  if (uVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar2 < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if ((uVar6 | pas_page_malloc_cached_alignment) >> 0x20 == 0) {
    uVar6 = (uVar6 & 0xffffffff) % (pas_page_malloc_cached_alignment & 0xffffffff);
  }
  else {
    uVar6 = uVar6 % pas_page_malloc_cached_alignment;
  }
  if (uVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar2 = (param_1->base).granule_size;
  if (uVar2 < pas_page_malloc_cached_alignment) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar2 < (param_1->base).page_size) &&
     (0xfd < uVar2 >> ((param_1->base).min_align_shift & 0x3f))) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pas_segregated_page_config_do_validate = pas_segregated_page_config_do_validate;
  pas_page_malloc_cached_alignment = pas_page_malloc_cached_alignment;
  return;
}

