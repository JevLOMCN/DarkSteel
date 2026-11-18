// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// bmalloc_type_create @ 140d83f00

bmalloc_type * __cdecl bmalloc_type_create(ulong64 param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  bmalloc_type *pbVar2;
  
  if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 >> 0x20 == 0) {
    pbVar2 = pas_immortal_heap_allocate(0x10,"bmalloc_type",pas_object_allocation);
    pbVar2->size = (uint)param_1;
    pbVar2->alignment = (uint)param_2;
    pbVar2->name = param_3;
    return pbVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// bmalloc_type_try_name_dump @ 140d83f60

bool __cdecl bmalloc_type_try_name_dump(pas_stream *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  ulonglong uVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = strstr(param_2,"[LibPasBmallocHeapType = ");
  iVar4 = 0;
  if (pcVar5 != (char *)0x0) {
    cVar1 = pcVar5[0x19];
    uVar3 = 0x80000000;
joined_r0x000140d83fa3:
    while (cVar1 == '[') {
      iVar4 = iVar4 + 1;
      cVar1 = pcVar5[uVar3 - 0x7fffffe6];
      uVar3 = uVar3 + 1;
    }
    if (cVar1 == ']') {
      if (iVar4 == 0) {
        pcVar5 = strstr(param_2,"primitiveHeapRefForTypeWithFlexibleArrayMember");
        if (pcVar5 != (char *)0x0) {
          pas_stream_printf(param_1,"ObjectWithFlexibleArrayMember, ");
        }
        if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pas_stream_printf(param_1,"%.*s");
        iVar4 = 1;
        goto LAB_140d84035;
      }
      iVar4 = iVar4 + -1;
    }
    else if (cVar1 == '\0') goto LAB_140d83fe8;
    cVar1 = pcVar5[uVar3 - 0x7fffffe6];
    uVar3 = uVar3 + 1;
    goto joined_r0x000140d83fa3;
  }
LAB_140d84035:
  return SUB41(iVar4,0);
LAB_140d83fe8:
  iVar4 = 0;
  goto LAB_140d84035;
}

// bmalloc_type_name_dump @ 140d84050

void __cdecl bmalloc_type_name_dump(pas_stream *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = strstr(param_2,"[LibPasBmallocHeapType = ");
  if (pcVar4 == (char *)0x0) {
LAB_140d840c8:
    pas_stream_printf(param_1,"%s");
    return;
  }
  iVar5 = 0;
  cVar1 = pcVar4[0x19];
  uVar3 = 0x80000000;
joined_r0x000140d8408c:
  while (cVar1 == '[') {
    iVar5 = iVar5 + 1;
    cVar1 = pcVar4[uVar3 - 0x7fffffe6];
    uVar3 = uVar3 + 1;
  }
  if (cVar1 == ']') {
    if (iVar5 == 0) {
      pcVar4 = strstr(param_2,"primitiveHeapRefForTypeWithFlexibleArrayMember");
      if (pcVar4 != (char *)0x0) {
        pas_stream_printf(param_1,"ObjectWithFlexibleArrayMember, ");
      }
      if (uVar3 >> 0x20 == 0) {
        pas_stream_printf(param_1,"%.*s");
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    iVar5 = iVar5 + -1;
  }
  else if (cVar1 == '\0') goto LAB_140d840c8;
  cVar1 = pcVar4[uVar3 - 0x7fffffe6];
  uVar3 = uVar3 + 1;
  goto joined_r0x000140d8408c;
}

// bmalloc_type_dump @ 140d84140

void __cdecl bmalloc_type_dump(bmalloc_type *param_1,pas_stream *param_2)

{
  pas_stream_printf(param_2,"Size = %zu, Alignment = %zu, Type = ");
  bmalloc_type_name_dump(param_2,param_1->name);
  return;
}

// bmalloc_type_as_heap_type_dump @ 140d84180

void __cdecl bmalloc_type_as_heap_type_dump(pas_heap_type *param_1,pas_stream *param_2)

{
  pas_stream_printf(param_2,"Size = %zu, Alignment = %zu, Type = ");
  bmalloc_type_name_dump(param_2,*(char **)(param_1 + 8));
  return;
}

