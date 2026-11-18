// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 5

// withInterleavedIO @ 14c469970

ConditionalTable * __cdecl
ConditionalTableFactory::withInterleavedIO
          (ConditionalTable *__return_storage_ptr__,MemoryResource *param_1)

{
  ushort uVar1;
  float fVar2;
  longlong lVar3;
  ushort *puVar4;
  float *pfVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar6;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar7;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_d8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_b8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_58;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_38;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_1;
  if (param_1 == (MemoryResource *)0x0) {
    PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  local_38._Mypair._Myval1 = PVar6;
  local_38._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*(MemoryResource *)PVar6 + 8))(PVar6,0x26,8);
  puVar4 = interleaved::inputIndices;
  local_38._Mypair._Myval2._Myend = local_38._Mypair._Myval2._Myfirst + 0x13;
  local_38._Mypair._Myval2._Mylast = local_38._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *local_38._Mypair._Myval2._Mylast = uVar1;
    local_38._Mypair._Myval2._Mylast = local_38._Mypair._Myval2._Mylast + 1;
  } while (puVar4 != (ushort *)&DAT_152881c16);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_58._Mypair._Myval1 = PVar6;
  local_58._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*(MemoryResource *)PVar6 + 8))(PVar6,0x26,8);
  puVar4 = interleaved::outputIndices;
  local_58._Mypair._Myval2._Myend = local_58._Mypair._Myval2._Myfirst + 0x13;
  local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *local_58._Mypair._Myval2._Mylast = uVar1;
    local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Mylast + 1;
  } while (puVar4 != (ushort *)&DAT_152881c3e);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar7 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)param_1;
  if (param_1 == (MemoryResource *)0x0) {
    PVar7 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  local_78._Mypair._Myval1 = PVar7;
  local_78._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar7 + 8))(PVar7,0x4c,8);
  pfVar5 = interleaved::fromValues;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 0x13;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *local_78._Mypair._Myval2._Mylast = fVar2;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (pfVar5 != (float *)&DAT_152881c8c);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_98._Mypair._Myval1 = PVar7;
  local_98._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar7 + 8))(PVar7,0x4c,8);
  pfVar5 = interleaved::toValues;
  local_98._Mypair._Myval2._Myend = local_98._Mypair._Myval2._Myfirst + 0x13;
  local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *local_98._Mypair._Myval2._Mylast = fVar2;
    local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Mylast + 1;
  } while (pfVar5 != (float *)&DAT_152881cdc);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_b8._Mypair._Myval1 = PVar7;
  local_b8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar7 + 8))(PVar7,0x4c,8);
  pfVar5 = interleaved::slopeValues;
  local_b8._Mypair._Myval2._Myend = local_b8._Mypair._Myval2._Myfirst + 0x13;
  local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *local_b8._Mypair._Myval2._Mylast = fVar2;
    local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Mylast + 1;
  } while (pfVar5 != (float *)&DAT_152881d2c);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_d8._Mypair._Myval1 = PVar7;
  local_d8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar7 + 8))(PVar7,0x4c,8);
  pfVar5 = interleaved::cutValues;
  local_d8._Mypair._Myval2._Myend = local_d8._Mypair._Myval2._Myfirst + 0x13;
  local_d8._Mypair._Myval2._Mylast = local_d8._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *local_d8._Mypair._Myval2._Mylast = fVar2;
    local_d8._Mypair._Myval2._Mylast = local_d8._Mypair._Myval2._Mylast + 1;
  } while (pfVar5 != (float *)&DAT_152881d7c);
  rl4::ConditionalTable::ConditionalTable
            (__return_storage_ptr__,&local_38,&local_58,&local_78,&local_98,&local_b8,&local_d8,9,
             0x11,param_1);
  if (local_d8._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_d8._Mypair._Myval1 + 0x10))
              (local_d8._Mypair._Myval1,local_d8._Mypair._Myval2._Myfirst,
               (longlong)local_d8._Mypair._Myval2._Myend -
               (longlong)local_d8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_d8._Mypair._Myval2._Myend = (float *)0x0;
    local_d8._Mypair._Myval2._Myfirst = (float *)0x0;
    local_d8._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_b8._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_b8._Mypair._Myval1 + 0x10))
              (local_b8._Mypair._Myval1,local_b8._Mypair._Myval2._Myfirst,
               (longlong)local_b8._Mypair._Myval2._Myend -
               (longlong)local_b8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_b8._Mypair._Myval2._Myend = (float *)0x0;
    local_b8._Mypair._Myval2._Myfirst = (float *)0x0;
    local_b8._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_98._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_98._Mypair._Myval1 + 0x10))
              (local_98._Mypair._Myval1,local_98._Mypair._Myval2._Myfirst,
               (longlong)local_98._Mypair._Myval2._Myend -
               (longlong)local_98._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_98._Mypair._Myval2._Myend = (float *)0x0;
    local_98._Mypair._Myval2._Myfirst = (float *)0x0;
    local_98._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_78._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               (longlong)local_78._Mypair._Myval2._Myend -
               (longlong)local_78._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_78._Mypair._Myval2._Myend = (float *)0x0;
    local_78._Mypair._Myval2._Myfirst = (float *)0x0;
    local_78._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_58._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_58._Mypair._Myval1 + 0x10))
              (local_58._Mypair._Myval1,local_58._Mypair._Myval2._Myfirst,
               ((longlong)local_58._Mypair._Myval2._Myend -
                (longlong)local_58._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_58._Mypair._Myval2._Myend = (ushort *)0x0;
    local_58._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_58._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_38._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_38._Mypair._Myval1 + 0x10))
              (local_38._Mypair._Myval1,local_38._Mypair._Myval2._Myfirst,
               ((longlong)local_38._Mypair._Myval2._Myend -
                (longlong)local_38._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return __return_storage_ptr__;
}

// withMultipleIO @ 14c469ef0

ConditionalTable * __cdecl
ConditionalTableFactory::withMultipleIO
          (ConditionalTable *__return_storage_ptr__,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_1,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_2,
          MemoryResource *param_3)

{
  ushort uVar1;
  float fVar2;
  longlong lVar3;
  ushort *puVar4;
  float *pfVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar6;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar7;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_a8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_68;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_48;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_3;
  if (param_3 == (MemoryResource *)0x0) {
    PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  local_48._Mypair._Myval1 = PVar6;
  local_48._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*(DefaultMemoryResource *)PVar6 + 8))(PVar6,4,8);
  puVar4 = multiple::inputIndices;
  local_48._Mypair._Myval2._Myend = local_48._Mypair._Myval2._Myfirst + 2;
  local_48._Mypair._Myval2._Mylast = local_48._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *local_48._Mypair._Myval2._Mylast = uVar1;
    local_48._Mypair._Myval2._Mylast = local_48._Mypair._Myval2._Mylast + 1;
  } while (puVar4 != multiple::outputIndices);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_68._Mypair._Myval1 = PVar6;
  local_68._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*(DefaultMemoryResource *)PVar6 + 8))(PVar6,4,8);
  puVar4 = multiple::outputIndices;
  local_68._Mypair._Myval2._Myend = local_68._Mypair._Myval2._Myfirst + 2;
  local_68._Mypair._Myval2._Mylast = local_68._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar4;
    puVar4 = (ushort *)((longlong)puVar4 + 2);
    *local_68._Mypair._Myval2._Mylast = uVar1;
    local_68._Mypair._Myval2._Mylast = local_68._Mypair._Myval2._Mylast + 1;
  } while ((float *)puVar4 != multiple::fromValues);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar7 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)param_3;
  if (param_3 == (MemoryResource *)0x0) {
    PVar7 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  local_88._Mypair._Myval1 = PVar7;
  local_88._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(DefaultMemoryResource *)PVar7 + 8))(PVar7,8,8);
  pfVar5 = multiple::slopeValues;
  local_88._Mypair._Myval2._Myend = local_88._Mypair._Myval2._Myfirst + 2;
  local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *local_88._Mypair._Myval2._Mylast = fVar2;
    local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Mylast + 1;
  } while (pfVar5 != multiple::cutValues);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_a8._Mypair._Myval1 = PVar7;
  local_a8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(DefaultMemoryResource *)PVar7 + 8))(PVar7,8,8);
  pfVar5 = multiple::cutValues;
  local_a8._Mypair._Myval2._Myend = local_a8._Mypair._Myval2._Myfirst + 2;
  local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *local_a8._Mypair._Myval2._Mylast = fVar2;
    local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Mylast + 1;
  } while (pfVar5 != (float *)interleaved::inputIndices);
  rl4::ConditionalTable::ConditionalTable
            (__return_storage_ptr__,&local_48,&local_68,param_1,param_2,&local_88,&local_a8,2,2,
             param_3);
  if (local_a8._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_a8._Mypair._Myval1 + 0x10))
              (local_a8._Mypair._Myval1,local_a8._Mypair._Myval2._Myfirst,
               (longlong)local_a8._Mypair._Myval2._Myend -
               (longlong)local_a8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_a8._Mypair._Myval2._Myend = (float *)0x0;
    local_a8._Mypair._Myval2._Myfirst = (float *)0x0;
    local_a8._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_88._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_88._Mypair._Myval1 + 0x10))
              (local_88._Mypair._Myval1,local_88._Mypair._Myval2._Myfirst,
               (longlong)local_88._Mypair._Myval2._Myend -
               (longlong)local_88._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_88._Mypair._Myval2._Myend = (float *)0x0;
    local_88._Mypair._Myval2._Myfirst = (float *)0x0;
    local_88._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_68._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_68._Mypair._Myval1 + 0x10))
              (local_68._Mypair._Myval1,local_68._Mypair._Myval2._Myfirst,
               ((longlong)local_68._Mypair._Myval2._Myend -
                (longlong)local_68._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_68._Mypair._Myval2._Myend = (ushort *)0x0;
    local_68._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_68._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_48._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_48._Mypair._Myval1 + 0x10))
              (local_48._Mypair._Myval1,local_48._Mypair._Myval2._Myfirst,
               ((longlong)local_48._Mypair._Myval2._Myend -
                (longlong)local_48._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return __return_storage_ptr__;
}

// withMultipleIODefaults @ 14c46a2d0

ConditionalTable * __cdecl
ConditionalTableFactory::withMultipleIODefaults
          (ConditionalTable *__return_storage_ptr__,MemoryResource *param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar4;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_48;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_28;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar4 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)param_1;
  if (param_1 == (MemoryResource *)0x0) {
    PVar4 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  local_28._Mypair._Myval1 = PVar4;
  local_28._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar4 + 8))(PVar4,8,8);
  pfVar3 = multiple::toValues;
  local_28._Mypair._Myval2._Myend = local_28._Mypair._Myval2._Myfirst + 2;
  local_28._Mypair._Myval2._Mylast = local_28._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    *local_28._Mypair._Myval2._Mylast = fVar1;
    local_28._Mypair._Myval2._Mylast = local_28._Mypair._Myval2._Mylast + 1;
  } while (pfVar3 != multiple::slopeValues);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_48._Mypair._Myval1 = PVar4;
  local_48._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar4 + 8))(PVar4,8,8);
  pfVar3 = multiple::fromValues;
  local_48._Mypair._Myval2._Myend = local_48._Mypair._Myval2._Myfirst + 2;
  local_48._Mypair._Myval2._Mylast = local_48._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    *local_48._Mypair._Myval2._Mylast = fVar1;
    local_48._Mypair._Myval2._Mylast = local_48._Mypair._Myval2._Mylast + 1;
  } while (pfVar3 != multiple::toValues);
  withMultipleIO(__return_storage_ptr__,&local_48,&local_28,param_1);
  if (local_48._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_48._Mypair._Myval1 + 0x10))
              (local_48._Mypair._Myval1,local_48._Mypair._Myval2._Myfirst,
               (longlong)local_48._Mypair._Myval2._Myend -
               (longlong)local_48._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_48._Mypair._Myval2._Myend = (float *)0x0;
    local_48._Mypair._Myval2._Myfirst = (float *)0x0;
    local_48._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_28._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_28._Mypair._Myval1 + 0x10))
              (local_28._Mypair._Myval1,local_28._Mypair._Myval2._Myfirst,
               (longlong)local_28._Mypair._Myval2._Myend -
               (longlong)local_28._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
  }
  return __return_storage_ptr__;
}

// withSingleIO @ 14c46a4e0

ConditionalTable * __cdecl
ConditionalTableFactory::withSingleIO
          (ConditionalTable *__return_storage_ptr__,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_1,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_2,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_3,
          MemoryResource *param_4)

{
  ushort uVar1;
  float fVar2;
  longlong lVar3;
  ushort *puVar4;
  float *pfVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar6;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_68;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_48;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_4;
  if (param_4 == (MemoryResource *)0x0) {
    PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  local_48._Mypair._Myval1 = PVar6;
  local_48._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*(DefaultMemoryResource *)PVar6 + 8))(PVar6,4,8);
  puVar4 = single::inputIndices;
  local_48._Mypair._Myval2._Myend = local_48._Mypair._Myval2._Myfirst + 2;
  local_48._Mypair._Myval2._Mylast = local_48._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *local_48._Mypair._Myval2._Mylast = uVar1;
    local_48._Mypair._Myval2._Mylast = local_48._Mypair._Myval2._Mylast + 1;
  } while (puVar4 != single::outputIndices);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_68._Mypair._Myval1 = PVar6;
  local_68._Mypair._Myval2._Myfirst =
       (ushort *)(**(code **)((longlong)*(DefaultMemoryResource *)PVar6 + 8))(PVar6,4,8);
  puVar4 = single::outputIndices;
  local_68._Mypair._Myval2._Myend = local_68._Mypair._Myval2._Myfirst + 2;
  local_68._Mypair._Myval2._Mylast = local_68._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar4;
    puVar4 = (ushort *)((longlong)puVar4 + 2);
    *local_68._Mypair._Myval2._Mylast = uVar1;
    local_68._Mypair._Myval2._Mylast = local_68._Mypair._Myval2._Mylast + 1;
  } while ((float *)puVar4 != single::fromValues);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_88._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)param_4;
  if (param_4 == (MemoryResource *)0x0) {
    local_88._Mypair._Myval1 =
         (PolyAllocator<float,8,pma::DefaultMemoryResource>)
         &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  }
  local_88._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(DefaultMemoryResource *)local_88._Mypair._Myval1 + 8))
                          (local_88._Mypair._Myval1,8,8);
  pfVar5 = single::slopeValues;
  local_88._Mypair._Myval2._Myend = local_88._Mypair._Myval2._Myfirst + 2;
  local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *local_88._Mypair._Myval2._Mylast = fVar2;
    local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Mylast + 1;
  } while (pfVar5 != single::cutValues);
  rl4::ConditionalTable::ConditionalTable
            (__return_storage_ptr__,&local_48,&local_68,param_1,param_2,&local_88,param_3,1,1,
             param_4);
  if (local_88._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_88._Mypair._Myval1 + 0x10))
              (local_88._Mypair._Myval1,local_88._Mypair._Myval2._Myfirst,
               (longlong)local_88._Mypair._Myval2._Myend -
               (longlong)local_88._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_88._Mypair._Myval2._Myend = (float *)0x0;
    local_88._Mypair._Myval2._Myfirst = (float *)0x0;
    local_88._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_68._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_68._Mypair._Myval1 + 0x10))
              (local_68._Mypair._Myval1,local_68._Mypair._Myval2._Myfirst,
               ((longlong)local_68._Mypair._Myval2._Myend -
                (longlong)local_68._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_68._Mypair._Myval2._Myend = (ushort *)0x0;
    local_68._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_68._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_48._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_48._Mypair._Myval1 + 0x10))
              (local_48._Mypair._Myval1,local_48._Mypair._Myval2._Myfirst,
               ((longlong)local_48._Mypair._Myval2._Myend -
                (longlong)local_48._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return __return_storage_ptr__;
}

// withSingleIODefaults @ 14c46a800

ConditionalTable * __cdecl
ConditionalTableFactory::withSingleIODefaults
          (ConditionalTable *__return_storage_ptr__,MemoryResource *param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar4;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_78;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_58;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_38;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar4 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)param_1;
  if (param_1 == (MemoryResource *)0x0) {
    PVar4 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  local_38._Mypair._Myval1 = PVar4;
  local_38._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar4 + 8))(PVar4,8,8);
  pfVar3 = single::cutValues;
  local_38._Mypair._Myval2._Myend = local_38._Mypair._Myval2._Myfirst + 2;
  local_38._Mypair._Myval2._Mylast = local_38._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    *local_38._Mypair._Myval2._Mylast = fVar1;
    local_38._Mypair._Myval2._Mylast = local_38._Mypair._Myval2._Mylast + 1;
  } while (pfVar3 != (float *)multiple::inputIndices);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_58._Mypair._Myval1 = PVar4;
  local_58._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar4 + 8))(PVar4,8,8);
  pfVar3 = single::toValues;
  local_58._Mypair._Myval2._Myend = local_58._Mypair._Myval2._Myfirst + 2;
  local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    *local_58._Mypair._Myval2._Mylast = fVar1;
    local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Mylast + 1;
  } while (pfVar3 != single::slopeValues);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_78._Mypair._Myval1 = PVar4;
  local_78._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)*(MemoryResource *)PVar4 + 8))(PVar4,8,8);
  pfVar3 = single::fromValues;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 2;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    *local_78._Mypair._Myval2._Mylast = fVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (pfVar3 != single::toValues);
  withSingleIO(__return_storage_ptr__,&local_78,&local_58,&local_38,param_1);
  if (local_78._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               (longlong)local_78._Mypair._Myval2._Myend -
               (longlong)local_78._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_78._Mypair._Myval2._Myend = (float *)0x0;
    local_78._Mypair._Myval2._Myfirst = (float *)0x0;
    local_78._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_58._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_58._Mypair._Myval1 + 0x10))
              (local_58._Mypair._Myval1,local_58._Mypair._Myval2._Myfirst,
               (longlong)local_58._Mypair._Myval2._Myend -
               (longlong)local_58._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_58._Mypair._Myval2._Myend = (float *)0x0;
    local_58._Mypair._Myval2._Myfirst = (float *)0x0;
    local_58._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_38._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(MemoryResource *)local_38._Mypair._Myval1 + 0x10))
              (local_38._Mypair._Myval1,local_38._Mypair._Myval2._Myfirst,
               (longlong)local_38._Mypair._Myval2._Myend -
               (longlong)local_38._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
  }
  return __return_storage_ptr__;
}

