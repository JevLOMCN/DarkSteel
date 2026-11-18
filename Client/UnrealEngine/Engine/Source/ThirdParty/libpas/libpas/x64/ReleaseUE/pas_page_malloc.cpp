// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 11

// pas_page_malloc_alignment_slow @ 140d79cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl pas_page_malloc_alignment_slow(void)

{
  code *pcVar1;
  ulong64 uVar2;
  undefined1 auStack_58 [32];
  _SYSTEM_INFO local_38;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_58;
  GetSystemInfo(&local_38);
  if (local_38.dwPageSize == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_38.dwPageSize < 0x1000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_38.dwPageSize & local_38.dwPageSize - 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_38.dwPageSize == 0x1000) {
    if ((local_8 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return 0x1000;
    }
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_page_malloc_alignment_shift_slow @ 140d79d40

ulong64 __cdecl pas_page_malloc_alignment_shift_slow(void)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    lVar1 = 0x3f;
    if (pas_page_malloc_cached_alignment != 0) {
      for (; pas_page_malloc_cached_alignment >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar3 = (uint)lVar1 ^ 0x3f;
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
  }
  else {
    lVar1 = 0x3f;
    if (pas_page_malloc_cached_alignment != 0) {
      for (; pas_page_malloc_cached_alignment >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar3 = (uint)lVar1 ^ 0x3f;
  }
  uVar3 = uVar3 ^ 0x3f;
  if (1L << ((byte)uVar3 & 0x3f) == pas_page_malloc_cached_alignment) {
    if (uVar3 < 0xd) {
      return (ulonglong)uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_page_malloc_try_allocate_without_deallocating_padding @ 140d79db0

pas_aligned_allocation_result * __cdecl
pas_page_malloc_try_allocate_without_deallocating_padding
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,pas_commit_mode param_3)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  SIZE_T dwSize;
  ulonglong uVar8;
  
  uVar8 = param_2->alignment;
  if ((uVar8 ^ uVar8 - 1) <= uVar8 - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar8 <= param_2->alignment_begin) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_committed < param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  __return_storage_ptr__->right_padding = (void *)0x0;
  __return_storage_ptr__->right_padding_size = 0;
  __return_storage_ptr__->left_padding = (void *)0x0;
  __return_storage_ptr__->left_padding_size = 0;
  __return_storage_ptr__->result = (void *)0x0;
  __return_storage_ptr__->result_size = 0;
  *(undefined8 *)&__return_storage_ptr__->zero_mode = 0;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar8 = -pas_page_malloc_cached_alignment &
          (param_2->alignment + pas_page_malloc_cached_alignment) - 1;
  if ((uVar8 ^ uVar8 - 1) <= uVar8 - 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar7 = (param_1 + uVar8) - 1;
  uVar5 = -uVar8;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if (((pas_page_malloc_cached_alignment < uVar8) ||
      (dwSize = uVar7 & uVar5, param_2->alignment_begin != 0)) &&
     (uVar7 = uVar7 & uVar5, dwSize = uVar7 + uVar8, CARRY8(uVar7,uVar8))) {
    return __return_storage_ptr__;
  }
  pvVar3 = VirtualAlloc((LPVOID)0x0,dwSize,(param_3 == pas_committed | 2) << 0xc,4);
  if (pvVar3 != (LPVOID)0x0) {
    pvVar1 = (LPVOID)((longlong)pvVar3 + dwSize);
    pvVar6 = (LPVOID)(((longlong)pvVar3 + (uVar8 - 1) & uVar5) + param_2->alignment_begin);
    pvVar4 = (LPVOID)(param_1 + (longlong)pvVar6);
    if (pvVar1 < pvVar4) {
      if (param_2->alignment_begin == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pvVar6 = (LPVOID)((longlong)pvVar6 + uVar5);
      if (pvVar6 < pvVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (pvVar1 < pvVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pvVar4 = (LPVOID)((longlong)pvVar4 + uVar5);
      if (pvVar4 < pvVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (pvVar1 < pvVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    if (((uVar8 <= pas_page_malloc_cached_alignment) && (pvVar3 != pvVar6)) &&
       (param_2->alignment_begin == 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar8 = param_2->alignment - 1;
    if ((param_2->alignment ^ uVar8) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (((longlong)pvVar6 - param_2->alignment_begin & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pas_page_malloc_num_allocated_bytes = pas_page_malloc_num_allocated_bytes + dwSize;
    __return_storage_ptr__->result = pvVar6;
    __return_storage_ptr__->result_size = param_1;
    __return_storage_ptr__->left_padding = pvVar3;
    __return_storage_ptr__->left_padding_size = (longlong)pvVar6 - (longlong)pvVar3;
    __return_storage_ptr__->right_padding = pvVar4;
    __return_storage_ptr__->right_padding_size = (longlong)pvVar1 - (longlong)pvVar4;
    __return_storage_ptr__->zero_mode = pas_zero_mode_is_all_zero;
  }
  return __return_storage_ptr__;
}

// pas_page_malloc_zero_fill @ 140d79fe0

void __cdecl pas_page_malloc_zero_fill(void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar1 & (ulonglong)param_1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar1 & param_2) == 0) {
    memset(param_1,0,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_page_malloc_commit @ 140d7a040

void __cdecl pas_page_malloc_commit(void *param_1,ulong64 param_2,pas_mmap_capability param_3)

{
  commit_impl(param_1,param_2,true,param_3);
  return;
}

// commit_impl @ 140d7a060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl commit_impl(void *param_1,ulong64 param_2,bool param_3,pas_mmap_capability param_4)

{
  void *pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  SIZE_T SVar4;
  ulonglong uVar5;
  undefined1 auStack_118 [32];
  DWORD local_f8;
  LPCVOID local_f0;
  PVOID pvStack_e8;
  DWORD local_e0;
  uint local_d8;
  ulonglong local_d0;
  DWORD local_c8;
  DWORD local_c0;
  DWORD local_b8;
  LPCVOID local_b0;
  SIZE_T local_a8;
  DWORD local_94;
  _MEMORY_BASIC_INFORMATION local_90;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar5 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar5) <= uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar5 & (ulonglong)param_1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if (pas_page_malloc_cached_alignment - 1 <
      (pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1)) {
    pvVar1 = (void *)((longlong)param_1 + param_2);
    if (pvVar1 != (void *)(-pas_page_malloc_cached_alignment &
                          (longlong)pvVar1 + (pas_page_malloc_cached_alignment - 1))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (pvVar1 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((param_3 && param_4 != pas_may_not_mmap) && param_2 != 0) {
      pvVar3 = VirtualAlloc(param_1,param_2,0x1000,4);
      if (pvVar3 != param_1 && pvVar3 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (pvVar3 == (LPVOID)0x0) {
        do {
          SVar4 = VirtualQuery(param_1,&local_90,0x30);
          if (SVar4 != 0x30) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (local_90.BaseAddress != param_1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar5 = local_90.RegionSize;
          if (param_2 < local_90.RegionSize) {
            uVar5 = param_2;
          }
          pvVar3 = VirtualAlloc(param_1,uVar5,0x1000,4);
          if (pvVar3 != param_1 && pvVar3 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (pvVar3 == (LPVOID)0x0) {
            local_94 = local_90.AllocationProtect;
            local_f8 = GetLastError();
            local_b8 = local_90.Type;
            local_c0 = local_90.Protect;
            local_c8 = local_90.State;
            local_d0 = local_90.RegionSize;
            local_d8 = (uint)(ushort)local_90._20_2_;
            local_e0 = local_94;
            local_f0 = local_90.BaseAddress;
            pvStack_e8 = local_90.AllocationBase;
            local_b0 = param_1;
            local_a8 = uVar5;
                    /* WARNING: Subroutine does not return */
            pas_panic(
                     "perform_virtual_operation_spanning_reservations(0x%p, %zu, %s) failed. GetLastError()=%lu\nmem_info.BaseAddress=0x%p\nmem_info.AllocationBase=0x%p\nmem_info.AllocationProtect=0x%lx\nmem_info.PartitionId=%u\nmem_info.RegionSize=%zu\nmem_info.State=0x%lx\nmem_info.Protect=0x%lx\nmem_info.Type=%lx\nptr=0x%p\nremaining_size_in_region=%zu\n"
                     );
          }
          param_1 = (void *)((longlong)param_1 + uVar5);
          param_2 = param_2 - uVar5;
        } while (param_2 != 0);
      }
    }
    if ((local_60 ^ (ulonglong)auStack_118) == __security_cookie.value) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_page_malloc_commit_without_mprotect @ 140d7a2d0

void __cdecl
pas_page_malloc_commit_without_mprotect(void *param_1,ulong64 param_2,pas_mmap_capability param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar1 & (ulonglong)param_1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if (pas_page_malloc_cached_alignment - 1 <
      (pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1)) {
    pvVar3 = (void *)(param_2 + (longlong)param_1);
    if (pvVar3 != (void *)(-pas_page_malloc_cached_alignment &
                          (longlong)pvVar3 + (pas_page_malloc_cached_alignment - 1))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (param_1 <= pvVar3) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_page_malloc_decommit @ 140d7a360

void __cdecl pas_page_malloc_decommit(void *param_1,ulong64 param_2,pas_mmap_capability param_3)

{
  decommit_impl(param_1,param_2,true,param_3);
  return;
}

// decommit_impl @ 140d7a380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl decommit_impl(void *param_1,ulong64 param_2,bool param_3,pas_mmap_capability param_4)

{
  code *pcVar1;
  BOOL BVar2;
  SIZE_T SVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  undefined1 auStack_118 [32];
  DWORD local_f8;
  LPCVOID local_f0;
  PVOID pvStack_e8;
  DWORD local_e0;
  uint local_d8;
  ulonglong local_d0;
  DWORD local_c8;
  DWORD local_c0;
  DWORD local_b8;
  LPCVOID local_b0;
  SIZE_T local_a8;
  DWORD local_94;
  _MEMORY_BASIC_INFORMATION local_90;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (CARRY8((ulonglong)param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  if ((pas_page_malloc_cached_alignment ^ pas_page_malloc_cached_alignment - 1) <=
      pas_page_malloc_cached_alignment - 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((void *)(-pas_page_malloc_cached_alignment &
              (longlong)param_1 + (pas_page_malloc_cached_alignment - 1)) != param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar5 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar5) <= uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar5 & (longlong)param_1 + param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 && param_4 != pas_may_not_mmap) {
    BVar2 = VirtualFree(param_1,param_2,0x4000);
    if ((param_2 != 0) && (BVar2 == 0)) {
      do {
        SVar3 = VirtualQuery(param_1,&local_90,0x30);
        if (SVar3 != 0x30) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (local_90.BaseAddress != param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = local_90.RegionSize;
        if (param_2 < local_90.RegionSize) {
          uVar5 = param_2;
        }
        BVar2 = VirtualFree(param_1,uVar5,0x4000);
        if (BVar2 == 0) {
          local_94 = local_90.AllocationProtect;
          local_f8 = GetLastError();
          local_b8 = local_90.Type;
          local_c0 = local_90.Protect;
          local_c8 = local_90.State;
          local_d0 = local_90.RegionSize;
          local_d8 = (uint)(ushort)local_90._20_2_;
          local_e0 = local_94;
          local_f0 = local_90.BaseAddress;
          pvStack_e8 = local_90.AllocationBase;
          local_b0 = param_1;
          local_a8 = uVar5;
                    /* WARNING: Subroutine does not return */
          pas_panic(
                   "perform_virtual_operation_spanning_reservations(0x%p, %zu, %s) failed. GetLastError()=%lu\nmem_info.BaseAddress=0x%p\nmem_info.AllocationBase=0x%p\nmem_info.AllocationProtect=0x%lx\nmem_info.PartitionId=%u\nmem_info.RegionSize=%zu\nmem_info.State=0x%lx\nmem_info.Protect=0x%lx\nmem_info.Type=%lx\nptr=0x%p\nremaining_size_in_region=%zu\n"
                   );
        }
        param_1 = (void *)((longlong)param_1 + uVar5);
        param_2 = param_2 - uVar5;
      } while (param_2 != 0);
    }
  }
  else {
    pvVar4 = VirtualAlloc(param_1,param_2,0x80000,4);
    if (pvVar4 != param_1 && pvVar4 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_2 != 0 && pvVar4 == (LPVOID)0x0) {
      do {
        SVar3 = VirtualQuery(param_1,&local_90,0x30);
        if (SVar3 != 0x30) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (local_90.BaseAddress != param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = local_90.RegionSize;
        if (param_2 < local_90.RegionSize) {
          uVar5 = param_2;
        }
        pvVar4 = VirtualAlloc(param_1,uVar5,0x80000,4);
        if (pvVar4 != param_1 && pvVar4 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (pvVar4 == (LPVOID)0x0) {
          local_94 = local_90.AllocationProtect;
          local_f8 = GetLastError();
          local_b8 = local_90.Type;
          local_c0 = local_90.Protect;
          local_c8 = local_90.State;
          local_d0 = local_90.RegionSize;
          local_d8 = (uint)(ushort)local_90._20_2_;
          local_e0 = local_94;
          local_f0 = local_90.BaseAddress;
          pvStack_e8 = local_90.AllocationBase;
          local_b0 = param_1;
          local_a8 = uVar5;
                    /* WARNING: Subroutine does not return */
          pas_panic(
                   "perform_virtual_operation_spanning_reservations(0x%p, %zu, %s) failed. GetLastError()=%lu\nmem_info.BaseAddress=0x%p\nmem_info.AllocationBase=0x%p\nmem_info.AllocationProtect=0x%lx\nmem_info.PartitionId=%u\nmem_info.RegionSize=%zu\nmem_info.State=0x%lx\nmem_info.Protect=0x%lx\nmem_info.Type=%lx\nptr=0x%p\nremaining_size_in_region=%zu\n"
                   );
        }
        param_1 = (void *)((longlong)param_1 + uVar5);
        param_2 = param_2 - uVar5;
      } while (param_2 != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// pas_page_malloc_decommit_without_mprotect @ 140d7a720

void __cdecl
pas_page_malloc_decommit_without_mprotect(void *param_1,ulong64 param_2,pas_mmap_capability param_3)

{
  decommit_impl(param_1,param_2,false,param_3);
  return;
}

// pas_page_malloc_deallocate @ 140d7a740

void __cdecl pas_page_malloc_deallocate(void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  BOOL BVar3;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar1 & (ulonglong)param_1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if (uVar1 < (pas_page_malloc_cached_alignment ^ uVar1)) {
    if ((uVar1 & param_2) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (param_2 != 0) {
      BVar3 = VirtualFree(param_1,0,0x8000);
      if (BVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pas_page_malloc_num_allocated_bytes = pas_page_malloc_num_allocated_bytes - param_2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

