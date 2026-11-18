// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 12

// pas_thread_local_cache_layout_node_get_directory @ 140d7b9c0

pas_segregated_size_directory * __cdecl
pas_thread_local_cache_layout_node_get_directory(pas_thread_local_cache_layout_node_opaque *param_1)

{
  code *pcVar1;
  
  switch((uint)param_1 & 3) {
  case 1:
    return (pas_segregated_size_directory *)
           (((uint)(byte)((ushort *)((ulonglong)param_1 & 0xfffffffffffffffc))[1] * 0x80000 +
            (uint)*(ushort *)((ulonglong)param_1 & 0xfffffffffffffffc) * 8) +
           pas_compact_heap_reservation_base);
  case 2:
    param_1 = (pas_thread_local_cache_layout_node_opaque *)((ulonglong)param_1 & 0xfffffffffffffffc)
    ;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return (pas_segregated_size_directory *)param_1;
}

// pas_thread_local_cache_layout_node_num_allocator_indices @ 140d7ba10

uint __cdecl
pas_thread_local_cache_layout_node_num_allocator_indices
          (pas_thread_local_cache_layout_node_opaque *param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  pas_segregated_size_directory *ppVar4;
  
  ppVar4 = (pas_segregated_size_directory *)param_1;
  switch((uint)param_1 & 3) {
  case 1:
    ppVar4 = (pas_segregated_size_directory *)
             (((uint)(byte)((ushort *)((ulonglong)param_1 & 0xfffffffffffffffc))[1] * 0x80000 +
              (uint)*(ushort *)((ulonglong)param_1 & 0xfffffffffffffffc) * 8) +
             pas_compact_heap_reservation_base);
  case 0:
    break;
  case 2:
    ppVar4 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((ulonglong)param_1 & 2) == 0) {
    uVar3 = pas_segregated_size_directory_num_allocator_indices(ppVar4);
    return uVar3;
  }
  bVar2 = pas_segregated_size_directory_view_cache_capacity(ppVar4);
  return (uint)bVar2 + (uint)bVar2 * 2 + 0xf >> 3;
}

// pas_thread_local_cache_layout_node_get_allocator_index_generic @ 140d7ba90

uint __cdecl
pas_thread_local_cache_layout_node_get_allocator_index_generic
          (pas_thread_local_cache_layout_node_opaque *param_1)

{
  code *pcVar1;
  
  switch((uint)param_1 & 3) {
  case 0:
    return *(uint *)(param_1 + 0x2c);
  case 1:
    return *(uint *)(((ulonglong)param_1 & 0xfffffffffffffffc) + 4);
  case 2:
    return *(uint *)(((ulonglong)param_1 & 0xfffffffffffffffc) + 0x28);
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
}

// pas_thread_local_cache_layout_node_get_allocator_index_for_allocator @ 140d7bad0

uint __cdecl
pas_thread_local_cache_layout_node_get_allocator_index_for_allocator
          (pas_thread_local_cache_layout_node_opaque *param_1)

{
  code *pcVar1;
  pas_thread_local_cache_layout_node_opaque *ppVar2;
  
  if (((ulonglong)param_1 & 2) == 0) {
    ppVar2 = (pas_thread_local_cache_layout_node_opaque *)
             (((ulonglong)param_1 & 0xfffffffffffffffc) + 4);
    if (((ulonglong)param_1 & 1) == 0) {
      ppVar2 = param_1 + 0x2c;
    }
    return *(uint *)ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_layout_node_get_allocator_index_for_view_cache @ 140d7bb00

uint __cdecl
pas_thread_local_cache_layout_node_get_allocator_index_for_view_cache
          (pas_thread_local_cache_layout_node_opaque *param_1)

{
  code *pcVar1;
  
  if (((uint)param_1 & 3) == 2) {
    return *(uint *)(((ulonglong)param_1 & 0xfffffffffffffffc) + 0x28);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_layout_node_set_allocator_index @ 140d7bb20

void __cdecl
pas_thread_local_cache_layout_node_set_allocator_index
          (pas_thread_local_cache_layout_node_opaque *param_1,uint param_2)

{
  code *pcVar1;
  
  switch((uint)param_1 & 3) {
  case 0:
    *(uint *)(param_1 + 0x2c) = param_2;
    return;
  case 1:
    *(uint *)(((ulonglong)param_1 & 0xfffffffffffffffc) + 4) = param_2;
    return;
  case 2:
    *(uint *)(((ulonglong)param_1 & 0xfffffffffffffffc) + 0x28) = param_2;
    return;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
}

// pas_thread_local_cache_layout_node_commit_and_construct @ 140d7bb60

void __cdecl
pas_thread_local_cache_layout_node_commit_and_construct
          (pas_thread_local_cache_layout_node_opaque *param_1,pas_thread_local_cache *param_2)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  uchar uVar4;
  uint uVar5;
  pas_segregated_size_directory *ppVar6;
  pas_thread_local_cache_layout_node_opaque *ppVar7;
  ushort *puVar8;
  pas_segregated_size_directory *ppVar9;
  uint uVar10;
  
  uVar10 = (uint)param_1 & 3;
  switch(uVar10) {
  case 0:
    uVar1 = *(uint *)(param_1 + 0x2c);
    ppVar9 = (pas_segregated_size_directory *)param_1;
    break;
  case 1:
    puVar8 = (ushort *)((ulonglong)param_1 & 0xfffffffffffffffc);
    ppVar9 = (pas_segregated_size_directory *)
             (((uint)(byte)puVar8[1] * 0x80000 + (uint)*puVar8 * 8) +
             pas_compact_heap_reservation_base);
    uVar1 = *(uint *)(puVar8 + 2);
    break;
  case 2:
    ppVar9 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    uVar1 = ppVar9->view_cache_index;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((ulonglong)param_1 & 2) == 0) {
    uVar5 = pas_segregated_size_directory_num_allocator_indices(ppVar9);
    pas_thread_local_cache_ensure_committed(param_2,uVar1,uVar5 + uVar1);
    ppVar6 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    ppVar9 = (pas_segregated_size_directory *)param_1;
    if ((((ulonglong)param_1 & 3) != 0) && (ppVar9 = ppVar6, uVar10 == 1)) {
      ppVar9 = (pas_segregated_size_directory *)
               (((uint)*(byte *)((longlong)&(ppVar6->base).first_view.payload + 2) * 0x80000 +
                (uint)(ushort)(ppVar6->base).first_view.payload * 8) +
               pas_compact_heap_reservation_base);
    }
    ppVar7 = (pas_thread_local_cache_layout_node_opaque *)&(ppVar6->base).data;
    if (((ulonglong)param_1 & 1) == 0) {
      ppVar7 = param_1 + 0x2c;
    }
    if (*(uint *)ppVar7 < param_2->allocator_index_capacity) {
      pas_local_allocator_construct
                ((pas_local_allocator *)(param_2->local_allocators + *(uint *)ppVar7),ppVar9,
                 pas_local_allocator_in_thread_local_cache);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar3 = pas_segregated_size_directory_view_cache_capacity(ppVar9);
  pas_thread_local_cache_ensure_committed
            (param_2,uVar1,((uint)bVar3 + (uint)bVar3 * 2 + 0xf >> 3) + uVar1);
  if (((ulonglong)param_1 & 3) != 0) {
    ppVar9 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    if (uVar10 != 1) {
      uVar4 = pas_segregated_size_directory_view_cache_capacity(ppVar9);
      if (ppVar9->view_cache_index < param_2->allocator_index_capacity) {
        pas_local_view_cache_construct
                  ((pas_local_view_cache *)(param_2->local_allocators + ppVar9->view_cache_index),
                   uVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_1 = (pas_thread_local_cache_layout_node_opaque *)
              (((uint)*(byte *)((longlong)&(ppVar9->base).first_view.payload + 2) * 0x80000 +
               (uint)(ushort)(ppVar9->base).first_view.payload * 8) +
              pas_compact_heap_reservation_base);
  }
  pas_segregated_size_directory_view_cache_capacity((pas_segregated_size_directory *)param_1);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_thread_local_cache_layout_node_ensure_committed @ 140d7bce0

void __cdecl
pas_thread_local_cache_layout_node_ensure_committed
          (pas_thread_local_cache_layout_node_opaque *param_1,pas_thread_local_cache *param_2)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  ushort *puVar4;
  pas_segregated_size_directory *ppVar5;
  uint uVar6;
  
  switch((uint)param_1 & 3) {
  case 0:
    uVar1 = *(uint *)(param_1 + 0x2c);
    ppVar5 = (pas_segregated_size_directory *)param_1;
    break;
  case 1:
    puVar4 = (ushort *)((ulonglong)param_1 & 0xfffffffffffffffc);
    ppVar5 = (pas_segregated_size_directory *)
             (((uint)(byte)puVar4[1] * 0x80000 + (uint)*puVar4 * 8) +
             pas_compact_heap_reservation_base);
    uVar1 = *(uint *)(puVar4 + 2);
    break;
  case 2:
    ppVar5 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    uVar1 = ppVar5->view_cache_index;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((ulonglong)param_1 & 2) == 0) {
    uVar6 = pas_segregated_size_directory_num_allocator_indices(ppVar5);
  }
  else {
    bVar3 = pas_segregated_size_directory_view_cache_capacity(ppVar5);
    uVar6 = (uint)bVar3 + (uint)bVar3 * 2 + 0xf >> 3;
  }
  pas_thread_local_cache_ensure_committed(param_2,uVar1,uVar6 + uVar1);
  return;
}

// pas_thread_local_cache_layout_node_move @ 140d7bd90

void __cdecl
pas_thread_local_cache_layout_node_move
          (pas_thread_local_cache_layout_node_opaque *param_1,pas_thread_local_cache *param_2,
          pas_thread_local_cache *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar4;
  ushort *puVar5;
  pas_segregated_size_directory *ppVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = (uint)param_1 & 3;
  switch(uVar9) {
  case 0:
    uVar8 = *(uint *)(param_1 + 0x2c);
    ppVar6 = (pas_segregated_size_directory *)param_1;
    if (((ulonglong)param_1 & 2) != 0) goto LAB_140d7be0f;
    goto LAB_140d7bdf2;
  case 1:
    puVar5 = (ushort *)((ulonglong)param_1 & 0xfffffffffffffffc);
    ppVar6 = (pas_segregated_size_directory *)
             (((uint)(byte)puVar5[1] * 0x80000 + (uint)*puVar5 * 8) +
             pas_compact_heap_reservation_base);
    uVar8 = *(uint *)(puVar5 + 2);
    break;
  case 2:
    ppVar6 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    uVar8 = ppVar6->view_cache_index;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((ulonglong)param_1 & 2) == 0) {
LAB_140d7bdf2:
    uVar7 = pas_segregated_size_directory_num_allocator_indices(ppVar6);
  }
  else {
LAB_140d7be0f:
    bVar3 = pas_segregated_size_directory_view_cache_capacity(ppVar6);
    uVar7 = (uint)bVar3 + (uint)bVar3 * 2 + 0xf >> 3;
  }
  bVar4 = pas_thread_local_cache_is_committed(param_2,uVar8,uVar7 + uVar8);
  if (!bVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((ulonglong)param_1 & 3) == 0) {
    uVar9 = *(uint *)(param_1 + 0x2c);
    ppVar6 = (pas_segregated_size_directory *)param_1;
  }
  else {
    ppVar6 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    if (uVar9 == 1) {
      uVar9 = (ppVar6->base).data.payload;
      ppVar6 = (pas_segregated_size_directory *)
               (((uint)*(byte *)((longlong)&(ppVar6->base).first_view.payload + 2) * 0x80000 +
                (uint)(ushort)(ppVar6->base).first_view.payload * 8) +
               pas_compact_heap_reservation_base);
    }
    else {
      uVar9 = ppVar6->view_cache_index;
    }
  }
  uVar2 = (ulonglong)uVar9;
  if (((ulonglong)param_1 & 2) == 0) {
    uVar8 = pas_segregated_size_directory_num_allocator_indices(ppVar6);
  }
  else {
    bVar3 = pas_segregated_size_directory_view_cache_capacity(ppVar6);
    uVar8 = (uint)bVar3 + (uint)bVar3 * 2 + 0xf >> 3;
  }
  bVar4 = pas_thread_local_cache_is_committed(param_3,uVar9,uVar8 + uVar9);
  if (bVar4) {
    if (param_3->allocator_index_upper_bound <= uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((*(byte *)((longlong)param_3->local_allocators + uVar2 * 8 + 3) & 0x7f) != 0) {
      if (((ulonglong)param_1 & 2) != 0) {
        if (uVar9 < param_2->allocator_index_capacity) {
          pas_local_view_cache_move
                    ((pas_local_view_cache *)(param_2->local_allocators + uVar2),
                     (pas_local_view_cache *)(param_3->local_allocators + uVar2));
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar9 < param_2->allocator_index_capacity) {
        pas_local_allocator_move
                  ((pas_local_allocator *)(param_2->local_allocators + uVar2),
                   (pas_local_allocator *)(param_3->local_allocators + uVar2));
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  pas_thread_local_cache_layout_node_commit_and_construct(param_1,param_2);
  return;
}

// pas_thread_local_cache_layout_node_is_committed @ 140d7bf50

bool __cdecl
pas_thread_local_cache_layout_node_is_committed
          (pas_thread_local_cache_layout_node_opaque *param_1,pas_thread_local_cache *param_2)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  ushort *puVar5;
  pas_segregated_size_directory *ppVar6;
  uint uVar7;
  
  switch((uint)param_1 & 3) {
  case 0:
    uVar1 = *(uint *)(param_1 + 0x2c);
    ppVar6 = (pas_segregated_size_directory *)param_1;
    break;
  case 1:
    puVar5 = (ushort *)((ulonglong)param_1 & 0xfffffffffffffffc);
    ppVar6 = (pas_segregated_size_directory *)
             (((uint)(byte)puVar5[1] * 0x80000 + (uint)*puVar5 * 8) +
             pas_compact_heap_reservation_base);
    uVar1 = *(uint *)(puVar5 + 2);
    break;
  case 2:
    ppVar6 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    uVar1 = ppVar6->view_cache_index;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((ulonglong)param_1 & 2) == 0) {
    uVar7 = pas_segregated_size_directory_num_allocator_indices(ppVar6);
  }
  else {
    bVar3 = pas_segregated_size_directory_view_cache_capacity(ppVar6);
    uVar7 = (uint)bVar3 + (uint)bVar3 * 2 + 0xf >> 3;
  }
  bVar4 = pas_thread_local_cache_is_committed(param_2,uVar1,uVar7 + uVar1);
  return bVar4;
}

// pas_thread_local_cache_layout_node_stop @ 140d7c000

void __cdecl
pas_thread_local_cache_layout_node_stop
          (pas_thread_local_cache_layout_node_opaque *param_1,pas_thread_local_cache *param_2,
          pas_lock_lock_mode param_3)

{
  code *pcVar1;
  pas_thread_local_cache_layout_node_opaque *ppVar2;
  
  switch((uint)param_1 & 3) {
  case 0:
    ppVar2 = param_1 + 0x2c;
    break;
  case 1:
    ppVar2 = (pas_thread_local_cache_layout_node_opaque *)
             (((ulonglong)param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    ppVar2 = (pas_thread_local_cache_layout_node_opaque *)
             (((ulonglong)param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(uint *)ppVar2 < param_2->allocator_index_upper_bound) {
    if (((ulonglong)param_1 & 2) == 0) {
      pas_local_allocator_stop
                ((pas_local_allocator *)(param_2->local_allocators + *(uint *)ppVar2),param_3);
      return;
    }
    pas_local_view_cache_stop
              ((pas_local_view_cache *)(param_2->local_allocators + *(uint *)ppVar2),param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_layout_node_prepare_to_decommit @ 140d7c070

void __cdecl
pas_thread_local_cache_layout_node_prepare_to_decommit
          (pas_thread_local_cache_layout_node_opaque *param_1,pas_thread_local_cache *param_2,
          pas_range *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  pas_segregated_size_directory *ppVar11;
  uint uVar12;
  uint uVar13;
  
  uVar13 = (uint)param_1 & 3;
  switch(uVar13) {
  case 0:
    uVar8 = *(uint *)(param_1 + 0x2c);
    ppVar11 = (pas_segregated_size_directory *)param_1;
    if (((ulonglong)param_1 & 2) != 0) goto LAB_140d7c0ec;
    goto LAB_140d7c0d0;
  case 1:
    puVar10 = (ushort *)((ulonglong)param_1 & 0xfffffffffffffffc);
    ppVar11 = (pas_segregated_size_directory *)
              (((uint)(byte)puVar10[1] * 0x80000 + (uint)*puVar10 * 8) +
              pas_compact_heap_reservation_base);
    uVar8 = *(uint *)(puVar10 + 2);
    break;
  case 2:
    ppVar11 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    uVar8 = ppVar11->view_cache_index;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (((ulonglong)param_1 & 2) == 0) {
LAB_140d7c0d0:
    uVar12 = pas_segregated_size_directory_num_allocator_indices(ppVar11);
  }
  else {
LAB_140d7c0ec:
    bVar6 = pas_segregated_size_directory_view_cache_capacity(ppVar11);
    uVar12 = (uint)bVar6 + (uint)bVar6 * 2 + 0xf >> 3;
  }
  bVar7 = pas_thread_local_cache_is_committed(param_2,uVar8,uVar12 + uVar8);
  if (!bVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (((ulonglong)param_1 & 3) == 0) {
    uVar13 = *(uint *)(param_1 + 0x2c);
    ppVar11 = (pas_segregated_size_directory *)param_1;
  }
  else {
    ppVar11 = (pas_segregated_size_directory *)((ulonglong)param_1 & 0xfffffffffffffffc);
    if (uVar13 == 1) {
      uVar13 = (ppVar11->base).data.payload;
      ppVar11 = (pas_segregated_size_directory *)
                (((uint)*(byte *)((longlong)&(ppVar11->base).first_view.payload + 2) * 0x80000 +
                 (uint)(ushort)(ppVar11->base).first_view.payload * 8) +
                pas_compact_heap_reservation_base);
    }
    else {
      uVar13 = ppVar11->view_cache_index;
    }
  }
  uVar5 = (ulonglong)uVar13;
  if (((ulonglong)param_1 & 2) == 0) {
    uVar8 = pas_segregated_size_directory_num_allocator_indices(ppVar11);
  }
  else {
    bVar6 = pas_segregated_size_directory_view_cache_capacity(ppVar11);
    uVar8 = (uint)bVar6 + (uint)bVar6 * 2 + 0xf >> 3;
  }
  uVar9 = (ulonglong)(uVar8 + uVar13);
  uVar1 = uVar5 * 8;
  if (uVar9 * 8 < uVar1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar2 = param_3->begin;
  uVar3 = param_3->end;
  if (uVar3 < uVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar2 != uVar3 && uVar1 + uVar9 * -8 != 0) {
    if (uVar9 * 8 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar3 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((uVar2 < uVar9 * 8 + 0x1f80) && (uVar5 * 8 + 0x1f80 < uVar3)) {
      if (uVar13 < param_2->allocator_index_upper_bound) {
        pas_local_allocator_scavenger_data_prepare_to_decommit
                  ((pas_local_allocator_scavenger_data *)(param_2->local_allocators + uVar5));
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  return;
}

