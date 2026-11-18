// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 33

// `dynamic_initializer_for_'swingBlendWeights'' @ 141365810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::optimized::_dynamic_initializer_for__swingBlendWeights__(void)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined1 auStack_d8 [32];
  float local_b8 [6];
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_a0;
  initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
  local_98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_88;
  DefaultMemoryResource *local_68;
  float *local_60;
  float *local_58;
  float *pfStack_50;
  DefaultMemoryResource *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *puStack_30;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_28;
  
  local_28._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       (__security_cookie.value ^ (ulonglong)auStack_d8);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_a0 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
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
  local_b8[0] = 0.3;
  local_b8[1] = 0.7;
  local_88._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_88._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,8,8);
  pfVar4 = local_b8;
  local_88._Mypair._Myval2._Myend = local_88._Mypair._Myval2._Myfirst + 2;
  local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *local_88._Mypair._Myval2._Mylast = fVar1;
    local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Mylast + 1;
  } while (pfVar4 != local_b8 + 2);
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
  local_b8[2] = 0.5;
  local_b8[3] = 0.5;
  local_68 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_60 = (float *)(**(code **)((longlong)
                                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                   ::__l2::dmr + 8))
                                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                  ::__l2::dmr,8,8);
  pfVar4 = local_b8 + 2;
  pfStack_50 = local_60 + 2;
  local_58 = local_60;
  do {
    *local_58 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    local_58 = local_58 + 1;
  } while (pfVar4 != local_b8 + 4);
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
  uVar3 = __real_3f800000;
  local_48 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_40 = (undefined4 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  local_38 = local_40 + 1;
  *local_40 = uVar3;
  local_98._First = &local_88;
  local_98._Last = &local_28;
  puStack_30 = local_38;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&swingBlendWeights,&local_98,&local_a0);
  if (local_40 != (undefined4 *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))
              (local_48,local_40,(longlong)puStack_30 - (longlong)local_40 & 0xfffffffffffffffc,8);
    local_40 = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    puStack_30 = (undefined4 *)0x0;
  }
  if (local_60 != (float *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))
              (local_68,local_60,(longlong)pfStack_50 - (longlong)local_60 & 0xfffffffffffffffc,8);
    local_60 = (float *)0x0;
    local_58 = (float *)0x0;
    pfStack_50 = (float *)0x0;
  }
  if (local_88._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_88._Mypair._Myval1 + 0x10))
              (local_88._Mypair._Myval1,local_88._Mypair._Myval2._Myfirst,
               (longlong)local_88._Mypair._Myval2._Myend -
               (longlong)local_88._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
  }
  atexit(_dynamic_atexit_destructor_for__swingBlendWeights__);
  return;
}

// `dynamic_initializer_for_'swingBlendWeights'' @ 141365b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__swingBlendWeights__(void)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined1 auStack_d8 [32];
  float local_b8 [6];
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_a0;
  initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
  local_98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_88;
  DefaultMemoryResource *local_68;
  float *local_60;
  float *local_58;
  float *pfStack_50;
  DefaultMemoryResource *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *puStack_30;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_28;
  
  local_28._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       (__security_cookie.value ^ (ulonglong)auStack_d8);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_a0 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
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
  local_b8[0] = 0.3;
  local_b8[1] = 0.7;
  local_88._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_88._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,8,8);
  pfVar4 = local_b8;
  local_88._Mypair._Myval2._Myend = local_88._Mypair._Myval2._Myfirst + 2;
  local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *local_88._Mypair._Myval2._Mylast = fVar1;
    local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Mylast + 1;
  } while (pfVar4 != local_b8 + 2);
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
  local_b8[2] = 0.5;
  local_b8[3] = 0.5;
  local_68 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_60 = (float *)(**(code **)((longlong)
                                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                   ::__l2::dmr + 8))
                                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                  ::__l2::dmr,8,8);
  pfVar4 = local_b8 + 2;
  pfStack_50 = local_60 + 2;
  local_58 = local_60;
  do {
    *local_58 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    local_58 = local_58 + 1;
  } while (pfVar4 != local_b8 + 4);
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
  uVar3 = __real_3f800000;
  local_48 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_40 = (undefined4 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  local_38 = local_40 + 1;
  *local_40 = uVar3;
  local_98._First = &local_88;
  local_98._Last = &local_28;
  puStack_30 = local_38;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&swingBlendWeights,&local_98,&local_a0);
  if (local_40 != (undefined4 *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))
              (local_48,local_40,(longlong)puStack_30 - (longlong)local_40 & 0xfffffffffffffffc,8);
    local_40 = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    puStack_30 = (undefined4 *)0x0;
  }
  if (local_60 != (float *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))
              (local_68,local_60,(longlong)pfStack_50 - (longlong)local_60 & 0xfffffffffffffffc,8);
    local_60 = (float *)0x0;
    local_58 = (float *)0x0;
    pfStack_50 = (float *)0x0;
  }
  if (local_88._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_88._Mypair._Myval1 + 0x10))
              (local_88._Mypair._Myval1,local_88._Mypair._Myval2._Myfirst,
               (longlong)local_88._Mypair._Myval2._Myend -
               (longlong)local_88._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
  }
  atexit(_dynamic_atexit_destructor_for__swingBlendWeights__);
  return;
}

// `dynamic_initializer_for_'swingInputControlIndices'' @ 141365e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__swingInputControlIndices__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_d8 [32];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b8 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_a8;
  ushort local_98 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  DefaultMemoryResource *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *puStack_40;
  DefaultMemoryResource *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *puStack_20;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_18;
  
  local_18 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
             (__security_cookie.value ^ (ulonglong)auStack_d8);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_b8[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr;
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[0] = 0;
  local_98[1] = 1;
  local_98[2] = 2;
  local_98[3] = 3;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  puVar3 = local_98;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 4;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != (ushort *)&local_90);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_90 = 0x50004;
  local_8c = 0x70006;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_90;
  puStack_40 = local_50 + 4;
  local_48 = local_50;
  do {
    *local_48 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_48 = local_48 + 1;
  } while (puVar4 != &local_88);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_88 = 0x90008;
  local_84 = 0xb000a;
  local_38 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_30 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_88;
  puStack_20 = local_30 + 4;
  local_28 = local_30;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_28 = uVar2;
    local_28 = local_28 + 1;
  } while (puVar4 != local_80);
  local_a8._First = &local_78;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &stack0xffffffffffffffe8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&swingInputControlIndices,&local_a8,local_b8);
  if (local_30 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_38 + 0x10))
              (local_38,local_30,((longlong)puStack_20 - (longlong)local_30 >> 1) * 2,8);
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    puStack_20 = (undefined2 *)0x0;
  }
  if (local_50 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))
              (local_58,local_50,((longlong)puStack_40 - (longlong)local_50 >> 1) * 2,8);
    local_50 = (undefined2 *)0x0;
    local_48 = (undefined2 *)0x0;
    puStack_40 = (undefined2 *)0x0;
  }
  if (local_78._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               ((longlong)local_78._Mypair._Myval2._Myend -
                (longlong)local_78._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__swingInputControlIndices__);
  return;
}

// `dynamic_initializer_for_'swingInputIndices'' @ 1413661d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::optimized::_dynamic_initializer_for__swingInputIndices__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_d8 [32];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b8 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_a8;
  ushort local_98 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  DefaultMemoryResource *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *puStack_40;
  DefaultMemoryResource *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *puStack_20;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_18;
  
  local_18 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
             (__security_cookie.value ^ (ulonglong)auStack_d8);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_b8[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr;
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[0] = 0;
  local_98[1] = 1;
  local_98[2] = 2;
  local_98[3] = 3;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  puVar3 = local_98;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 4;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != (ushort *)&local_90);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_90 = 0x50004;
  local_8c = 0x70006;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_90;
  puStack_40 = local_50 + 4;
  local_48 = local_50;
  do {
    *local_48 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_48 = local_48 + 1;
  } while (puVar4 != &local_88);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_88 = 0x90008;
  local_84 = 0xb000a;
  local_38 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_30 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_88;
  puStack_20 = local_30 + 4;
  local_28 = local_30;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_28 = uVar2;
    local_28 = local_28 + 1;
  } while (puVar4 != local_80);
  local_a8._First = &local_78;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &stack0xffffffffffffffe8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&swingInputIndices,&local_a8,local_b8);
  if (local_30 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_38 + 0x10))
              (local_38,local_30,((longlong)puStack_20 - (longlong)local_30 >> 1) * 2,8);
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    puStack_20 = (undefined2 *)0x0;
  }
  if (local_50 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))
              (local_58,local_50,((longlong)puStack_40 - (longlong)local_50 >> 1) * 2,8);
    local_50 = (undefined2 *)0x0;
    local_48 = (undefined2 *)0x0;
    puStack_40 = (undefined2 *)0x0;
  }
  if (local_78._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               ((longlong)local_78._Mypair._Myval2._Myend -
                (longlong)local_78._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__swingInputIndices__);
  return;
}

// `dynamic_initializer_for_'swingOutputIndices'' @ 141366530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::optimized::_dynamic_initializer_for__swingOutputIndices__(void)

{
  ushort uVar1;
  _Compressed_pair<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>,0>
  *p_Var2;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> **ppvVar3;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar4;
  ushort *puVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *pPVar6;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar7;
  int *piVar8;
  _Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
  *p_Var9;
  undefined1 auStack_1c8 [32];
  initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_1a8;
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_198 [2];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_188;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_168;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_148;
  ushort local_128 [24];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_f8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_d8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_b8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_58;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_1c8);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_198[0] = (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_148._Mypair._Myval2._Mylast._0_4_ = 0x180017;
  local_148._Mypair._Myval2._Mylast._4_4_ = 0x1a0019;
  local_148._Mypair._Myval2._Myend._0_4_ = 0x220021;
  local_148._Mypair._Myval2._Myend._4_4_ = 0x240023;
  local_98._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_98._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  ppvVar3 = &local_148._Mypair._Myval2._Mylast;
  local_98._Mypair._Myval2._Myend = local_98._Mypair._Myval2._Myfirst + 8;
  local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(ushort *)ppvVar3;
    ppvVar3 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
               **)((longlong)ppvVar3 + 2);
    *local_98._Mypair._Myval2._Mylast = uVar1;
    local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Mylast + 1;
  } while (ppvVar3 !=
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            **)local_128);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_128[0] = 0x49;
  local_128[1] = 0x4a;
  local_128[2] = 0x4b;
  local_128[3] = 0x4c;
  local_128[4] = 0x5d;
  local_128[5] = 0x5e;
  local_128[6] = 0x5f;
  local_128[7] = 0x60;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  puVar5 = local_128;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 8;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar5 != local_128 + 8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_148._Mypair._Myval1._0_4_ = 0x540053;
  local_148._Mypair._Myval1._4_4_ = 0x560055;
  local_58._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_58._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  pvVar4 = &local_148;
  local_58._Mypair._Myval2._Myend = local_58._Mypair._Myval2._Myfirst + 4;
  local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar4->_Mypair;
    pvVar4 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar4->_Mypair)._Myval1.field_0x2;
    *local_58._Mypair._Myval2._Mylast = *(ushort *)&p_Var2->_Myval1;
    local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Mylast + 1;
  } while ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
            *)pvVar4 != &local_148._Mypair._Myval2);
  local_188._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_188._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pPVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_98;
  local_188._Mypair._Myval2._Myend = local_188._Mypair._Myval2._Mylast + 3;
  local_188._Mypair._Myval2._Myfirst = local_188._Mypair._Myval2._Mylast;
  do {
    local_1a8._First =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_188._Mypair._Myval1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              (local_188._Mypair._Myval2._Mylast,
               (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)pPVar6,(PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_1a8);
    local_188._Mypair._Myval2._Mylast = local_188._Mypair._Myval2._Mylast + 1;
    pPVar6 = pPVar6 + 4;
  } while (pPVar6 != local_38);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_128[8] = 0x15;
  local_128[9] = 0x16;
  local_128[10] = 0x17;
  local_128[0xb] = 0;
  local_128[0xc] = 0x1e;
  local_128[0xd] = 0x1f;
  local_128[0xe] = 0x20;
  local_128[0xf] = 0;
  local_f8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  puVar5 = local_128 + 8;
  local_f8._Mypair._Myval2._Myend = local_f8._Mypair._Myval2._Myfirst + 8;
  local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *local_f8._Mypair._Myval2._Mylast = uVar1;
    local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Mylast + 1;
  } while (puVar5 != local_128 + 0x10);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_128[0x10] = 0x42;
  local_128[0x11] = 0x43;
  local_128[0x12] = 0x44;
  local_128[0x13] = 0;
  local_128[0x14] = 0x54;
  local_128[0x15] = 0x55;
  local_128[0x16] = 0x56;
  local_128[0x17] = 0;
  local_d8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_d8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  puVar5 = local_128 + 0x10;
  local_d8._Mypair._Myval2._Myend = local_d8._Mypair._Myval2._Myfirst + 8;
  local_d8._Mypair._Myval2._Mylast = local_d8._Mypair._Myval2._Myfirst;
  do {
    *local_d8._Mypair._Myval2._Mylast = *puVar5;
    puVar5 = puVar5 + 1;
    local_d8._Mypair._Myval2._Mylast = local_d8._Mypair._Myval2._Mylast + 1;
  } while ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)puVar5 != &local_f8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_148._Mypair._Myval2._Myfirst._0_4_ = 0x4c004b;
  local_148._Mypair._Myval2._Myfirst._4_4_ = 0x4d;
  local_b8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_b8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  p_Var9 = &local_148._Mypair._Myval2;
  local_b8._Mypair._Myval2._Myend = local_b8._Mypair._Myval2._Myfirst + 4;
  local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Myfirst;
  do {
    ppvVar3 = &p_Var9->_Myfirst;
    p_Var9 = (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
              *)((longlong)&p_Var9->_Myfirst + 2);
    *local_b8._Mypair._Myval2._Mylast = *(ushort *)ppvVar3;
    local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Mylast + 1;
  } while (p_Var9 != (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
                      *)&local_148._Mypair._Myval2._Mylast);
  local_168._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_168._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar7 = &local_f8;
  local_168._Mypair._Myval2._Myend = local_168._Mypair._Myval2._Mylast + 3;
  local_168._Mypair._Myval2._Myfirst = local_168._Mypair._Myval2._Mylast;
  do {
    local_1a8._First =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_168._Mypair._Myval1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              (local_168._Mypair._Myval2._Mylast,pvVar7,
               (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_1a8);
    local_168._Mypair._Myval2._Mylast = local_168._Mypair._Myval2._Mylast + 1;
    pvVar7 = pvVar7 + 1;
  } while (pvVar7 != &local_98);
  local_1a8._First = &local_188;
  local_1a8._Last = &local_148;
  std::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&swingOutputIndices,&local_1a8,local_198);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_168);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_188);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_b8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_d8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_f8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_58);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_78);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_98);
  atexit(_dynamic_atexit_destructor_for__swingOutputIndices__);
  return;
}

// `dynamic_initializer_for_'swingOutputJointIndices'' @ 141366c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__swingOutputJointIndices__(void)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  undefined1 auStack_b8 [32];
  ushort local_98 [4];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_90;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  DefaultMemoryResource *local_58;
  ushort *local_50;
  ushort *local_48;
  ushort *puStack_40;
  DefaultMemoryResource *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *puStack_20;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_18;
  
  local_18 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
             (__security_cookie.value ^ (ulonglong)auStack_b8);
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_90 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[0] = 2;
  local_98[1] = 3;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  puVar2 = local_98;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 2;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar2 != local_98 + 2);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[2] = 7;
  local_98[3] = 9;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (ushort *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  puVar2 = local_98 + 2;
  puStack_40 = local_50 + 2;
  local_48 = local_50;
  do {
    *local_48 = *puVar2;
    puVar2 = puVar2 + 1;
    local_48 = local_48 + 1;
  } while ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            *)puVar2 != &local_90);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_38 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_30 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,2,8);
  local_28 = local_30 + 1;
  *local_30 = 8;
  local_88._First = &local_78;
  local_88._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &stack0xffffffffffffffe8;
  puStack_20 = local_28;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&swingOutputJointIndices,&local_88,&local_90);
  if (local_30 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_38 + 0x10))
              (local_38,local_30,((longlong)puStack_20 - (longlong)local_30 >> 1) * 2,8);
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    puStack_20 = (undefined2 *)0x0;
  }
  if (local_50 != (ushort *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))
              (local_58,local_50,((longlong)puStack_40 - (longlong)local_50 >> 1) * 2,8);
    local_50 = (ushort *)0x0;
    local_48 = (ushort *)0x0;
    puStack_40 = (ushort *)0x0;
  }
  if (local_78._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               ((longlong)local_78._Mypair._Myval2._Myend -
                (longlong)local_78._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__swingOutputJointIndices__);
  return;
}

// `dynamic_initializer_for_'swingTwistAxes'' @ 141366f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__swingTwistAxes__(void)

{
  TwistAxis TVar1;
  TwistAxis *pTVar2;
  undefined1 auStack_48 [32];
  TwistAxis local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<enum_dna::TwistAxis,8,pma::DefaultMemoryResource>::
             PolyAllocator<enum_dna::TwistAxis,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = X;
  local_28[1] = X;
  local_28[2] = 0;
  swingTwistAxes._Mypair._Myval2._Myend = (TwistAxis *)0x0;
  swingTwistAxes._Mypair._Myval1 =
       (PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  swingTwistAxes._Mypair._Myval2._Myfirst = (TwistAxis *)0x0;
  swingTwistAxes._Mypair._Myval2._Mylast = (TwistAxis *)0x0;
  swingTwistAxes._Mypair._Myval2._Mylast =
       (TwistAxis *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0xc,8);
  swingTwistAxes._Mypair._Myval2._Myend = swingTwistAxes._Mypair._Myval2._Mylast + 3;
  pTVar2 = local_28;
  swingTwistAxes._Mypair._Myval2._Myfirst = swingTwistAxes._Mypair._Myval2._Mylast;
  do {
    TVar1 = *pTVar2;
    pTVar2 = pTVar2 + 1;
    *swingTwistAxes._Mypair._Myval2._Mylast = TVar1;
    swingTwistAxes._Mypair._Myval2._Mylast = swingTwistAxes._Mypair._Myval2._Mylast + 1;
  } while (pTVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__swingTwistAxes__);
  return;
}

// `dynamic_initializer_for_'twistBlendWeights'' @ 141367050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::optimized::_dynamic_initializer_for__twistBlendWeights__(void)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined1 auStack_d8 [32];
  float local_b8 [6];
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_a0;
  initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
  local_98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_88;
  DefaultMemoryResource *local_68;
  float *local_60;
  float *local_58;
  float *pfStack_50;
  DefaultMemoryResource *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *puStack_30;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_28;
  
  local_28._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       (__security_cookie.value ^ (ulonglong)auStack_d8);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_a0 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
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
  local_b8[0] = 0.2;
  local_b8[1] = 0.8;
  local_88._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_88._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,8,8);
  pfVar4 = local_b8;
  local_88._Mypair._Myval2._Myend = local_88._Mypair._Myval2._Myfirst + 2;
  local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *local_88._Mypair._Myval2._Mylast = fVar1;
    local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Mylast + 1;
  } while (pfVar4 != local_b8 + 2);
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
  local_b8[2] = 0.6;
  local_b8[3] = 0.4;
  local_68 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_60 = (float *)(**(code **)((longlong)
                                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                   ::__l2::dmr + 8))
                                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                  ::__l2::dmr,8,8);
  pfVar4 = local_b8 + 2;
  pfStack_50 = local_60 + 2;
  local_58 = local_60;
  do {
    *local_58 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    local_58 = local_58 + 1;
  } while (pfVar4 != local_b8 + 4);
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
  uVar3 = __real_3f800000;
  local_48 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_40 = (undefined4 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  local_38 = local_40 + 1;
  *local_40 = uVar3;
  local_98._First = &local_88;
  local_98._Last = &local_28;
  puStack_30 = local_38;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&twistBlendWeights,&local_98,&local_a0);
  if (local_40 != (undefined4 *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))
              (local_48,local_40,(longlong)puStack_30 - (longlong)local_40 & 0xfffffffffffffffc,8);
    local_40 = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    puStack_30 = (undefined4 *)0x0;
  }
  if (local_60 != (float *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))
              (local_68,local_60,(longlong)pfStack_50 - (longlong)local_60 & 0xfffffffffffffffc,8);
    local_60 = (float *)0x0;
    local_58 = (float *)0x0;
    pfStack_50 = (float *)0x0;
  }
  if (local_88._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_88._Mypair._Myval1 + 0x10))
              (local_88._Mypair._Myval1,local_88._Mypair._Myval2._Myfirst,
               (longlong)local_88._Mypair._Myval2._Myend -
               (longlong)local_88._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
  }
  atexit(_dynamic_atexit_destructor_for__twistBlendWeights__);
  return;
}

// `dynamic_initializer_for_'twistBlendWeights'' @ 141367380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__twistBlendWeights__(void)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined1 auStack_d8 [32];
  float local_b8 [6];
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_a0;
  initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
  local_98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_88;
  DefaultMemoryResource *local_68;
  float *local_60;
  float *local_58;
  float *pfStack_50;
  DefaultMemoryResource *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *puStack_30;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_28;
  
  local_28._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       (__security_cookie.value ^ (ulonglong)auStack_d8);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_a0 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
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
  local_b8[0] = 0.2;
  local_b8[1] = 0.8;
  local_88._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_88._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,8,8);
  pfVar4 = local_b8;
  local_88._Mypair._Myval2._Myend = local_88._Mypair._Myval2._Myfirst + 2;
  local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    *local_88._Mypair._Myval2._Mylast = fVar1;
    local_88._Mypair._Myval2._Mylast = local_88._Mypair._Myval2._Mylast + 1;
  } while (pfVar4 != local_b8 + 2);
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
  local_b8[2] = 0.6;
  local_b8[3] = 0.4;
  local_68 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_60 = (float *)(**(code **)((longlong)
                                   `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                   ::__l2::dmr + 8))
                                (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                  ::__l2::dmr,8,8);
  pfVar4 = local_b8 + 2;
  pfStack_50 = local_60 + 2;
  local_58 = local_60;
  do {
    *local_58 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    local_58 = local_58 + 1;
  } while (pfVar4 != local_b8 + 4);
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
  uVar3 = __real_3f800000;
  local_48 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_40 = (undefined4 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  local_38 = local_40 + 1;
  *local_40 = uVar3;
  local_98._First = &local_88;
  local_98._Last = &local_28;
  puStack_30 = local_38;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&twistBlendWeights,&local_98,&local_a0);
  if (local_40 != (undefined4 *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))
              (local_48,local_40,(longlong)puStack_30 - (longlong)local_40 & 0xfffffffffffffffc,8);
    local_40 = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    puStack_30 = (undefined4 *)0x0;
  }
  if (local_60 != (float *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))
              (local_68,local_60,(longlong)pfStack_50 - (longlong)local_60 & 0xfffffffffffffffc,8);
    local_60 = (float *)0x0;
    local_58 = (float *)0x0;
    pfStack_50 = (float *)0x0;
  }
  if (local_88._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_88._Mypair._Myval1 + 0x10))
              (local_88._Mypair._Myval1,local_88._Mypair._Myval2._Myfirst,
               (longlong)local_88._Mypair._Myval2._Myend -
               (longlong)local_88._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
  }
  atexit(_dynamic_atexit_destructor_for__twistBlendWeights__);
  return;
}

// `dynamic_initializer_for_'twistInputControlIndices'' @ 1413676b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__twistInputControlIndices__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_d8 [32];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b8 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_a8;
  ushort local_98 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  DefaultMemoryResource *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *puStack_40;
  DefaultMemoryResource *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *puStack_20;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_18;
  
  local_18 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
             (__security_cookie.value ^ (ulonglong)auStack_d8);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_b8[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr;
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[0] = 0;
  local_98[1] = 1;
  local_98[2] = 2;
  local_98[3] = 3;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  puVar3 = local_98;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 4;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != (ushort *)&local_90);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_90 = 0x50004;
  local_8c = 0x70006;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_90;
  puStack_40 = local_50 + 4;
  local_48 = local_50;
  do {
    *local_48 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_48 = local_48 + 1;
  } while (puVar4 != &local_88);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_88 = 0x90008;
  local_84 = 0xb000a;
  local_38 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_30 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_88;
  puStack_20 = local_30 + 4;
  local_28 = local_30;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_28 = uVar2;
    local_28 = local_28 + 1;
  } while (puVar4 != local_80);
  local_a8._First = &local_78;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &stack0xffffffffffffffe8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&twistInputControlIndices,&local_a8,local_b8);
  if (local_30 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_38 + 0x10))
              (local_38,local_30,((longlong)puStack_20 - (longlong)local_30 >> 1) * 2,8);
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    puStack_20 = (undefined2 *)0x0;
  }
  if (local_50 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))
              (local_58,local_50,((longlong)puStack_40 - (longlong)local_50 >> 1) * 2,8);
    local_50 = (undefined2 *)0x0;
    local_48 = (undefined2 *)0x0;
    puStack_40 = (undefined2 *)0x0;
  }
  if (local_78._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               ((longlong)local_78._Mypair._Myval2._Myend -
                (longlong)local_78._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__twistInputControlIndices__);
  return;
}

// `dynamic_initializer_for_'twistInputIndices'' @ 141367a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::optimized::_dynamic_initializer_for__twistInputIndices__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_d8 [32];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b8 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_a8;
  ushort local_98 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  DefaultMemoryResource *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *puStack_40;
  DefaultMemoryResource *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *puStack_20;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_18;
  
  local_18 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
             (__security_cookie.value ^ (ulonglong)auStack_d8);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_b8[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr;
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[0] = 0;
  local_98[1] = 1;
  local_98[2] = 2;
  local_98[3] = 3;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  puVar3 = local_98;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 4;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != (ushort *)&local_90);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_90 = 0x50004;
  local_8c = 0x70006;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_90;
  puStack_40 = local_50 + 4;
  local_48 = local_50;
  do {
    *local_48 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_48 = local_48 + 1;
  } while (puVar4 != &local_88);
  if (*piVar5 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_88 = 0x90008;
  local_84 = 0xb000a;
  local_38 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_30 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar4 = &local_88;
  puStack_20 = local_30 + 4;
  local_28 = local_30;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_28 = uVar2;
    local_28 = local_28 + 1;
  } while (puVar4 != local_80);
  local_a8._First = &local_78;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &stack0xffffffffffffffe8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&twistInputIndices,&local_a8,local_b8);
  if (local_30 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_38 + 0x10))
              (local_38,local_30,((longlong)puStack_20 - (longlong)local_30 >> 1) * 2,8);
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    puStack_20 = (undefined2 *)0x0;
  }
  if (local_50 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))
              (local_58,local_50,((longlong)puStack_40 - (longlong)local_50 >> 1) * 2,8);
    local_50 = (undefined2 *)0x0;
    local_48 = (undefined2 *)0x0;
    puStack_40 = (undefined2 *)0x0;
  }
  if (local_78._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               ((longlong)local_78._Mypair._Myval2._Myend -
                (longlong)local_78._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__twistInputIndices__);
  return;
}

// `dynamic_initializer_for_'twistOutputIndices'' @ 141367d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::optimized::_dynamic_initializer_for__twistOutputIndices__(void)

{
  ushort uVar1;
  _Compressed_pair<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>,0>
  *p_Var2;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> **ppvVar3;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar4;
  ushort *puVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *pPVar6;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar7;
  int *piVar8;
  _Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
  *p_Var9;
  undefined1 auStack_1c8 [32];
  initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_1a8;
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_198 [2];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_188;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_168;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_148;
  ushort local_128 [24];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_f8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_d8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_b8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_58;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_1c8);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_198[0] = (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_148._Mypair._Myval2._Mylast._0_4_ = 0x40003;
  local_148._Mypair._Myval2._Mylast._4_4_ = 0x60005;
  local_148._Mypair._Myval2._Myend._0_4_ = 0xe000d;
  local_148._Mypair._Myval2._Myend._4_4_ = 0x10000f;
  local_98._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_98._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  ppvVar3 = &local_148._Mypair._Myval2._Mylast;
  local_98._Mypair._Myval2._Myend = local_98._Mypair._Myval2._Myfirst + 8;
  local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(ushort *)ppvVar3;
    ppvVar3 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
               **)((longlong)ppvVar3 + 2);
    *local_98._Mypair._Myval2._Mylast = uVar1;
    local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Mylast + 1;
  } while (ppvVar3 !=
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            **)local_128);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_128[0] = 0x2b;
  local_128[1] = 0x2c;
  local_128[2] = 0x2d;
  local_128[3] = 0x2e;
  local_128[4] = 0x3f;
  local_128[5] = 0x40;
  local_128[6] = 0x41;
  local_128[7] = 0x42;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  puVar5 = local_128;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 8;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar5 != local_128 + 8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_148._Mypair._Myval1._0_4_ = 0x360035;
  local_148._Mypair._Myval1._4_4_ = 0x380037;
  local_58._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_58._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  pvVar4 = &local_148;
  local_58._Mypair._Myval2._Myend = local_58._Mypair._Myval2._Myfirst + 4;
  local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar4->_Mypair;
    pvVar4 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar4->_Mypair)._Myval1.field_0x2;
    *local_58._Mypair._Myval2._Mylast = *(ushort *)&p_Var2->_Myval1;
    local_58._Mypair._Myval2._Mylast = local_58._Mypair._Myval2._Mylast + 1;
  } while ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
            *)pvVar4 != &local_148._Mypair._Myval2);
  local_188._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_188._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pPVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_98;
  local_188._Mypair._Myval2._Myend = local_188._Mypair._Myval2._Mylast + 3;
  local_188._Mypair._Myval2._Myfirst = local_188._Mypair._Myval2._Mylast;
  do {
    local_1a8._First =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_188._Mypair._Myval1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              (local_188._Mypair._Myval2._Mylast,
               (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)pPVar6,(PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_1a8);
    local_188._Mypair._Myval2._Mylast = local_188._Mypair._Myval2._Mylast + 1;
    pPVar6 = pPVar6 + 4;
  } while (pPVar6 != local_38);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_128[8] = 3;
  local_128[9] = 4;
  local_128[10] = 5;
  local_128[0xb] = 0;
  local_128[0xc] = 0xc;
  local_128[0xd] = 0xd;
  local_128[0xe] = 0xe;
  local_128[0xf] = 0;
  local_f8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  puVar5 = local_128 + 8;
  local_f8._Mypair._Myval2._Myend = local_f8._Mypair._Myval2._Myfirst + 8;
  local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *local_f8._Mypair._Myval2._Mylast = uVar1;
    local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Mylast + 1;
  } while (puVar5 != local_128 + 0x10);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_128[0x10] = 0x27;
  local_128[0x11] = 0x28;
  local_128[0x12] = 0x29;
  local_128[0x13] = 0;
  local_128[0x14] = 0x39;
  local_128[0x15] = 0x3a;
  local_128[0x16] = 0x3b;
  local_128[0x17] = 0;
  local_d8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_d8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  puVar5 = local_128 + 0x10;
  local_d8._Mypair._Myval2._Myend = local_d8._Mypair._Myval2._Myfirst + 8;
  local_d8._Mypair._Myval2._Mylast = local_d8._Mypair._Myval2._Myfirst;
  do {
    *local_d8._Mypair._Myval2._Mylast = *puVar5;
    puVar5 = puVar5 + 1;
    local_d8._Mypair._Myval2._Mylast = local_d8._Mypair._Myval2._Mylast + 1;
  } while ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)puVar5 != &local_f8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_148._Mypair._Myval2._Myfirst._0_4_ = 0x310030;
  local_148._Mypair._Myval2._Myfirst._4_4_ = 0x32;
  local_b8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_b8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  p_Var9 = &local_148._Mypair._Myval2;
  local_b8._Mypair._Myval2._Myend = local_b8._Mypair._Myval2._Myfirst + 4;
  local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Myfirst;
  do {
    ppvVar3 = &p_Var9->_Myfirst;
    p_Var9 = (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
              *)((longlong)&p_Var9->_Myfirst + 2);
    *local_b8._Mypair._Myval2._Mylast = *(ushort *)ppvVar3;
    local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Mylast + 1;
  } while (p_Var9 != (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
                      *)&local_148._Mypair._Myval2._Mylast);
  local_168._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_168._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar7 = &local_f8;
  local_168._Mypair._Myval2._Myend = local_168._Mypair._Myval2._Mylast + 3;
  local_168._Mypair._Myval2._Myfirst = local_168._Mypair._Myval2._Mylast;
  do {
    local_1a8._First =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_168._Mypair._Myval1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              (local_168._Mypair._Myval2._Mylast,pvVar7,
               (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)&local_1a8);
    local_168._Mypair._Myval2._Mylast = local_168._Mypair._Myval2._Mylast + 1;
    pvVar7 = pvVar7 + 1;
  } while (pvVar7 != &local_98);
  local_1a8._First = &local_188;
  local_1a8._Last = &local_148;
  std::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&twistOutputIndices,&local_1a8,local_198);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_168);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_188);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_b8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_d8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_f8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_58);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_78);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Tidy(&local_98);
  atexit(_dynamic_atexit_destructor_for__twistOutputIndices__);
  return;
}

// `dynamic_initializer_for_'twistOutputJointIndices'' @ 141368420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__twistOutputJointIndices__(void)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  undefined1 auStack_b8 [32];
  ushort local_98 [4];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_90;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_78;
  DefaultMemoryResource *local_58;
  ushort *local_50;
  ushort *local_48;
  ushort *puStack_40;
  DefaultMemoryResource *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  undefined2 *puStack_20;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_18;
  
  local_18 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
             (__security_cookie.value ^ (ulonglong)auStack_b8);
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_90 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[0] = 0;
  local_98[1] = 1;
  local_78._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  puVar2 = local_98;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Myfirst + 2;
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *local_78._Mypair._Myval2._Mylast = uVar1;
    local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Mylast + 1;
  } while (puVar2 != local_98 + 2);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_98[2] = 4;
  local_98[3] = 6;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (ushort *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  puVar2 = local_98 + 2;
  puStack_40 = local_50 + 2;
  local_48 = local_50;
  do {
    *local_48 = *puVar2;
    puVar2 = puVar2 + 1;
    local_48 = local_48 + 1;
  } while ((PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            *)puVar2 != &local_90);
  if (*piVar3 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_38 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_30 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,2,8);
  local_28 = local_30 + 1;
  *local_30 = 5;
  local_88._First = &local_78;
  local_88._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &stack0xffffffffffffffe8;
  puStack_20 = local_28;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&twistOutputJointIndices,&local_88,&local_90);
  if (local_30 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_38 + 0x10))
              (local_38,local_30,((longlong)puStack_20 - (longlong)local_30 >> 1) * 2,8);
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    puStack_20 = (undefined2 *)0x0;
  }
  if (local_50 != (ushort *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))
              (local_58,local_50,((longlong)puStack_40 - (longlong)local_50 >> 1) * 2,8);
    local_50 = (ushort *)0x0;
    local_48 = (ushort *)0x0;
    puStack_40 = (ushort *)0x0;
  }
  if (local_78._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_78._Mypair._Myval1 + 0x10))
              (local_78._Mypair._Myval1,local_78._Mypair._Myval2._Myfirst,
               ((longlong)local_78._Mypair._Myval2._Myend -
                (longlong)local_78._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__twistOutputJointIndices__);
  return;
}

// `dynamic_initializer_for_'twistTwistAxes'' @ 141368750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::twsw::unoptimized::_dynamic_initializer_for__twistTwistAxes__(void)

{
  TwistAxis TVar1;
  TwistAxis *pTVar2;
  undefined1 auStack_48 [32];
  TwistAxis local_28 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<enum_dna::TwistAxis,8,pma::DefaultMemoryResource>::
             PolyAllocator<enum_dna::TwistAxis,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_28[0] = X;
  local_28[1] = X;
  local_28[2] = 0;
  twistTwistAxes._Mypair._Myval2._Myend = (TwistAxis *)0x0;
  twistTwistAxes._Mypair._Myval1 =
       (PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  twistTwistAxes._Mypair._Myval2._Myfirst = (TwistAxis *)0x0;
  twistTwistAxes._Mypair._Myval2._Mylast = (TwistAxis *)0x0;
  twistTwistAxes._Mypair._Myval2._Mylast =
       (TwistAxis *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>::PolyAllocator<dna::TwistAxis,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0xc,8);
  twistTwistAxes._Mypair._Myval2._Myend = twistTwistAxes._Mypair._Myval2._Mylast + 3;
  pTVar2 = local_28;
  twistTwistAxes._Mypair._Myval2._Myfirst = twistTwistAxes._Mypair._Myval2._Mylast;
  do {
    TVar1 = *pTVar2;
    pTVar2 = pTVar2 + 1;
    *twistTwistAxes._Mypair._Myval2._Mylast = TVar1;
    twistTwistAxes._Mypair._Myval2._Mylast = twistTwistAxes._Mypair._Myval2._Mylast + 1;
  } while (pTVar2 != local_28 + 3);
  atexit(_dynamic_atexit_destructor_for__twistTwistAxes__);
  return;
}

// `dynamic_initializer_for_'values'' @ 141368870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::twsw::input::_dynamic_initializer_for__values__(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  float local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
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
  local_48 = ___xmm_3f60d5d73e1486c43eabb7d23e9deb1c;
  uStack_40 = _UNK_1528918e8;
  local_18 = 0;
  local_28 = ___xmm_3f3b809a3eb5a3b83f06d5d83e7b65fa;
  uStack_20 = _UNK_1528918c8;
  values._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  values._Mypair._Myval2._Myend = (float *)0x0;
  values._Mypair._Myval2._Myfirst = (float *)0x0;
  values._Mypair._Myval2._Mylast = (float *)0x0;
  local_38 = ___xmm_3f5b73bb3ed09ac43e49212f3e7c0410;
  uStack_30 = _UNK_1528918d8;
  values._Mypair._Myval2._Mylast =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x34,8);
  pfVar2 = (float *)&local_48;
  values._Mypair._Myval2._Myend = values._Mypair._Myval2._Mylast + 0xd;
  values._Mypair._Myval2._Myfirst = values._Mypair._Myval2._Mylast;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    *values._Mypair._Myval2._Mylast = fVar1;
    values._Mypair._Myval2._Mylast = values._Mypair._Myval2._Mylast + 1;
  } while (pfVar2 != &local_14);
  atexit(_dynamic_atexit_destructor_for__values__);
  return;
}

// `dynamic_initializer_for_'valuesPerLODPerConfig'' @ 1413689b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::twsw::output::_dynamic_initializer_for__valuesPerLODPerConfig__(void)

{
  float fVar1;
  longlong lVar2;
  _Compressed_pair<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>_>,0>
  *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_fa8 [32];
  initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_f88;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_f78;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_f70;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_f68;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_f60;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_f58 [2];
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f48;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f28;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f08;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_ee8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_ec8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_ea8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e88;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_e68;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_e48;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_e28;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e08;
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c7c [4];
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_c78;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined4 local_af0;
  undefined1 local_aec [12];
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined4 local_960;
  undefined1 local_95c [12];
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined1 local_7cc [4];
  float local_7c8 [6];
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  float local_610 [2];
  float local_608 [6];
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  float local_450 [2];
  float local_448 [6];
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  float local_290 [2];
  float local_288 [6];
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0 [2];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_fa8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_f58[0] = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar19 = _UNK_152891988;
  uVar18 = ___xmm_bea3ddfd000000000000000000000000;
  uVar11 = _UNK_152891968;
  uVar10 = ___xmm_be88a86d000000000000000000000000;
  uVar7 = _UNK_152891948;
  uVar6 = ___xmm_be567be5bdcecc81be8969e400000000;
  uVar23 = _UNK_1528918f8;
  uVar22 = ___xmm_bd361317bdd280f1bea8954a00000000;
  uVar13 = _UNK_152891888;
  uVar12 = ___xmm_000000003f76b67c0000000000000000;
  uVar21 = _UNK_152891868;
  uVar20 = ___xmm_000000003f694e09bdd27137be734d6a;
  uVar15 = _UNK_152891848;
  uVar14 = ___xmm_0000000000000000bd8a3ad200000000;
  uVar17 = _UNK_152891808;
  uVar16 = ___xmm_0000000000000000000000003f7f6a94;
  uVar25 = _UNK_1528917f8;
  uVar24 = ___xmm_0000000000000000000000003f7004da;
  uVar5 = _UNK_1528917e8;
  uVar4 = ___xmm_0000000000000000000000003f6f50d3;
  local_7a8 = 0;
  uStack_7a0 = 0;
  local_758 = 0;
  uStack_750 = 0;
  local_728 = ___xmm_bde48d7e000000000000000000000000;
  uStack_720 = _UNK_152891918;
  local_718 = ___xmm_000000003f7e66990000000000000000;
  uStack_710 = _UNK_1528918a8;
  local_708 = 0;
  uStack_700 = 0;
  local_6e8 = ___xmm_0000000000000000000000003f800000;
  uStack_6e0 = _UNK_1506894f8;
  local_6d8 = ___xmm_be2af7d3000000000000000000000000;
  uStack_6d0 = _UNK_152891938;
  local_6c8 = ___xmm_000000003f7c68230000000000000000;
  uStack_6c0 = _UNK_152891898;
  local_6b8 = 0;
  uStack_6b0 = 0;
  local_688 = ___xmm_bea2b8a6000000000000000000000000;
  uStack_680 = _UNK_152891978;
  local_678 = ___xmm_000000003f72ba280000000000000000;
  uStack_670 = _UNK_152891878;
  local_668 = 0;
  uStack_660 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_7c8._0_8_ = ___xmm_be88a86d000000000000000000000000;
  local_7c8._8_8_ = _UNK_152891968;
  local_7c8._16_8_ = ___xmm_000000003f76b67c0000000000000000;
  uStack_7b0 = _UNK_152891888;
  local_798 = ___xmm_0000000000000000bd8a3ad200000000;
  uStack_790 = _UNK_152891848;
  local_788 = ___xmm_0000000000000000000000003f7f6a94;
  uStack_780 = _UNK_152891808;
  local_778 = ___xmm_bea3ddfd000000000000000000000000;
  uStack_770 = _UNK_152891988;
  local_768 = ___xmm_000000003f694e09bdd27137be734d6a;
  uStack_760 = _UNK_152891868;
  local_748 = ___xmm_bd361317bdd280f1bea8954a00000000;
  uStack_740 = _UNK_1528918f8;
  local_738 = ___xmm_0000000000000000000000003f7004da;
  uStack_730 = _UNK_1528917f8;
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_6a8 = ___xmm_be567be5bdcecc81be8969e400000000;
  uStack_6a0 = _UNK_152891948;
  local_698 = ___xmm_0000000000000000000000003f6f50d3;
  uStack_690 = _UNK_1528917e8;
  local_658 = ___xmm_be567be5bdcecc81be8969e400000000;
  uStack_650 = _UNK_152891948;
  local_648 = ___xmm_0000000000000000000000003f6f50d3;
  uStack_640 = _UNK_1528917e8;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  local_f08._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_f08._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x1b8,8);
  pfVar8 = local_7c8;
  local_f08._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       &local_f08._Mypair._Myval2._Myfirst[0xd]._Mypair._Myval2._Myend;
  local_f08._Mypair._Myval2._Mylast = local_f08._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    *(float *)&((local_f08._Mypair._Myval2._Mylast)->_Mypair)._Myval1 = fVar1;
    local_f08._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
         &((local_f08._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pfVar8 != local_610);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     uVar10 = ___xmm_be88a86d000000000000000000000000, uVar11 = _UNK_152891968,
     uVar12 = ___xmm_000000003f76b67c0000000000000000, uVar13 = _UNK_152891888,
     uVar14 = ___xmm_0000000000000000bd8a3ad200000000, uVar15 = _UNK_152891848,
     uVar16 = ___xmm_0000000000000000000000003f7f6a94, uVar17 = _UNK_152891808,
     uVar18 = ___xmm_bea3ddfd000000000000000000000000, uVar19 = _UNK_152891988,
     uVar20 = ___xmm_000000003f694e09bdd27137be734d6a, uVar21 = _UNK_152891868,
     uVar22 = ___xmm_bd361317bdd280f1bea8954a00000000, uVar23 = _UNK_1528918f8,
     uVar24 = ___xmm_0000000000000000000000003f7004da, uVar25 = _UNK_1528917f8,
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    uVar10 = ___xmm_be88a86d000000000000000000000000;
    uVar11 = _UNK_152891968;
    uVar12 = ___xmm_000000003f76b67c0000000000000000;
    uVar13 = _UNK_152891888;
    uVar14 = ___xmm_0000000000000000bd8a3ad200000000;
    uVar15 = _UNK_152891848;
    uVar16 = ___xmm_0000000000000000000000003f7f6a94;
    uVar17 = _UNK_152891808;
    uVar18 = ___xmm_bea3ddfd000000000000000000000000;
    uVar19 = _UNK_152891988;
    uVar20 = ___xmm_000000003f694e09bdd27137be734d6a;
    uVar21 = _UNK_152891868;
    uVar22 = ___xmm_bd361317bdd280f1bea8954a00000000;
    uVar23 = _UNK_1528918f8;
    uVar24 = ___xmm_0000000000000000000000003f7004da;
    uVar25 = _UNK_1528917f8;
  }
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_568 = ___xmm_bde48d7e000000000000000000000000;
  uStack_560 = _UNK_152891918;
  local_558 = ___xmm_000000003f7e66990000000000000000;
  uStack_550 = _UNK_1528918a8;
  local_548 = 0;
  uStack_540 = 0;
  local_528 = ___xmm_0000000000000000000000003f800000;
  uStack_520 = _UNK_1506894f8;
  local_518 = ___xmm_be2af7d3000000000000000000000000;
  uStack_510 = _UNK_152891938;
  local_508 = ___xmm_000000003f7c68230000000000000000;
  uStack_500 = _UNK_152891898;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4c8 = ___xmm_bea2b8a6000000000000000000000000;
  uStack_4c0 = _UNK_152891978;
  local_4b8 = ___xmm_000000003f72ba280000000000000000;
  uStack_4b0 = _UNK_152891878;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_4e8 = uVar6;
  uStack_4e0 = uVar7;
  local_4d8 = uVar4;
  uStack_4d0 = uVar5;
  local_498 = uVar6;
  uStack_490 = uVar7;
  local_488 = uVar4;
  uStack_480 = uVar5;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  local_ee8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_608._0_8_ = uVar10;
  local_608._8_8_ = uVar11;
  local_608._16_8_ = uVar12;
  uStack_5f0 = uVar13;
  local_5d8 = uVar14;
  uStack_5d0 = uVar15;
  local_5c8 = uVar16;
  uStack_5c0 = uVar17;
  local_5b8 = uVar18;
  uStack_5b0 = uVar19;
  local_5a8 = uVar20;
  uStack_5a0 = uVar21;
  local_588 = uVar22;
  uStack_580 = uVar23;
  local_578 = uVar24;
  uStack_570 = uVar25;
  local_ee8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x1b8,8);
  pfVar8 = local_608;
  local_ee8._Mypair._Myval2._Myend = local_ee8._Mypair._Myval2._Myfirst + 0x6e;
  local_ee8._Mypair._Myval2._Mylast = local_ee8._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    *local_ee8._Mypair._Myval2._Mylast = fVar1;
    local_ee8._Mypair._Myval2._Mylast = local_ee8._Mypair._Myval2._Mylast + 1;
  } while (pfVar8 != local_450);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_448._0_8_ = ___xmm_be88a86d000000000000000000000000;
  local_448._8_8_ = _UNK_152891968;
  local_428 = 0;
  uStack_420 = 0;
  local_408 = ___xmm_0000000000000000000000003f7f6a94;
  uStack_400 = _UNK_152891808;
  local_3e8 = ___xmm_000000003f694e09bdd27137be734d6a;
  uStack_3e0 = _UNK_152891868;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_448._16_8_ = ___xmm_000000003f76b67c0000000000000000;
  uStack_430 = _UNK_152891888;
  local_3b8 = ___xmm_0000000000000000000000003f7004da;
  uStack_3b0 = _UNK_1528917f8;
  local_418 = ___xmm_0000000000000000bd8a3ad200000000;
  uStack_410 = _UNK_152891848;
  local_398 = ___xmm_000000003f7e66990000000000000000;
  uStack_390 = _UNK_1528918a8;
  local_3f8 = ___xmm_bea3ddfd000000000000000000000000;
  uStack_3f0 = _UNK_152891988;
  local_388 = 0;
  uStack_380 = 0;
  local_3c8 = ___xmm_bd361317bdd280f1bea8954a00000000;
  uStack_3c0 = _UNK_1528918f8;
  local_368 = ___xmm_0000000000000000000000003f800000;
  uStack_360 = _UNK_1506894f8;
  local_3a8 = ___xmm_bde48d7e000000000000000000000000;
  uStack_3a0 = _UNK_152891918;
  local_348 = ___xmm_000000003f7c68230000000000000000;
  uStack_340 = _UNK_152891898;
  local_378 = 0;
  uStack_370 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_358 = ___xmm_be2af7d3000000000000000000000000;
  uStack_350 = _UNK_152891938;
  local_308 = ___xmm_bea2b8a6000000000000000000000000;
  uStack_300 = _UNK_152891978;
  local_2f8 = ___xmm_000000003f72ba280000000000000000;
  uStack_2f0 = _UNK_152891878;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_328 = uVar6;
  uStack_320 = uVar7;
  local_318 = uVar4;
  uStack_310 = uVar5;
  local_2d8 = uVar6;
  uStack_2d0 = uVar7;
  local_2c8 = uVar4;
  uStack_2c0 = uVar5;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_ec8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_ec8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x1b8,8);
  pfVar8 = local_448;
  local_ec8._Mypair._Myval2._Myend = local_ec8._Mypair._Myval2._Myfirst + 0x6e;
  local_ec8._Mypair._Myval2._Mylast = local_ec8._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    *local_ec8._Mypair._Myval2._Mylast = fVar1;
    local_ec8._Mypair._Myval2._Mylast = local_ec8._Mypair._Myval2._Mylast + 1;
  } while (pfVar8 != local_290);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_288._0_8_ = ___xmm_be88a86d000000000000000000000000;
  local_288._8_8_ = _UNK_152891968;
  local_268 = 0;
  uStack_260 = 0;
  local_248 = ___xmm_0000000000000000000000003f7f6a94;
  uStack_240 = _UNK_152891808;
  local_228 = ___xmm_000000003f694e09bdd27137be734d6a;
  uStack_220 = _UNK_152891868;
  local_218 = 0;
  uStack_210 = 0;
  local_288._16_8_ = ___xmm_000000003f76b67c0000000000000000;
  uStack_270 = _UNK_152891888;
  local_1f8 = ___xmm_0000000000000000000000003f7004da;
  uStack_1f0 = _UNK_1528917f8;
  local_258 = ___xmm_0000000000000000bd8a3ad200000000;
  uStack_250 = _UNK_152891848;
  local_1d8 = ___xmm_000000003f7e66990000000000000000;
  uStack_1d0 = _UNK_1528918a8;
  local_238 = ___xmm_bea3ddfd000000000000000000000000;
  uStack_230 = _UNK_152891988;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_208 = ___xmm_bd361317bdd280f1bea8954a00000000;
  uStack_200 = _UNK_1528918f8;
  local_1a8 = ___xmm_0000000000000000000000003f800000;
  uStack_1a0 = _UNK_1506894f8;
  local_1e8 = ___xmm_bde48d7e000000000000000000000000;
  uStack_1e0 = _UNK_152891918;
  local_188 = ___xmm_000000003f7c68230000000000000000;
  uStack_180 = _UNK_152891898;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_198 = ___xmm_be2af7d3000000000000000000000000;
  uStack_190 = _UNK_152891938;
  local_148 = ___xmm_bea2b8a6000000000000000000000000;
  uStack_140 = _UNK_152891978;
  local_138 = ___xmm_000000003f72ba280000000000000000;
  uStack_130 = _UNK_152891878;
  local_128 = 0;
  uStack_120 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_168 = uVar6;
  uStack_160 = uVar7;
  local_158 = uVar4;
  uStack_150 = uVar5;
  local_118 = uVar6;
  uStack_110 = uVar7;
  local_108 = uVar4;
  uStack_100 = uVar5;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_ea8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_ea8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x1b8,8);
  pfVar8 = local_288;
  local_ea8._Mypair._Myval2._Myend = local_ea8._Mypair._Myval2._Myfirst + 0x6e;
  local_ea8._Mypair._Myval2._Mylast = local_ea8._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    *local_ea8._Mypair._Myval2._Mylast = fVar1;
    local_ea8._Mypair._Myval2._Mylast = local_ea8._Mypair._Myval2._Mylast + 1;
  } while (pfVar8 != local_d0);
  local_f48._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_f48._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x80,8);
  pvVar9 = &local_f08;
  local_f48._Mypair._Myval2._Myend = local_f48._Mypair._Myval2._Mylast + 4;
  local_f48._Mypair._Myval2._Myfirst = local_f48._Mypair._Myval2._Mylast;
  do {
    local_f88._First =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_f48._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
              (local_f48._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)pvVar9,
               (PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_f88);
    local_f48._Mypair._Myval2._Mylast = local_f48._Mypair._Myval2._Mylast + 1;
    pvVar9 = pvVar9 + 1;
  } while (pvVar9 != &local_e88);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_f60 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_e08._Mypair._Myval1 = ___xmm_bf0a55c1000000000000000000000000;
  local_e08._Mypair._Myval2._Myfirst = _UNK_1528919a8;
  local_de8 = 0;
  uStack_de0 = 0;
  local_e08._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_e08._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_dd8 = ___xmm_000000000000000000000000be0a55d2;
  uStack_dd0 = _UNK_152891818;
  local_dc8 = 0;
  uStack_dc0 = 0;
  local_da8 = 0;
  uStack_da0 = 0;
  local_d88 = ___xmm_000000000000000000000000be1d6495;
  uStack_d80 = _UNK_152891828;
  local_d68 = 0;
  uStack_d60 = 0;
  local_d48 = 0;
  uStack_d40 = 0;
  local_db8 = ___xmm_bebf3c92bec0904fbf3f524400000000;
  uStack_db0 = _UNK_152891998;
  local_d28 = ___xmm_0000000000000000beabc5bd00000000;
  uStack_d20 = _UNK_152891858;
  local_d98 = ___xmm_be282492bf3029ae0000000000000000;
  uStack_d90 = _UNK_152891928;
  local_d18 = 0;
  uStack_d10 = 0;
  local_d78 = ___xmm_be6507a7000000000000000000000000;
  uStack_d70 = _UNK_152891958;
  local_cf8 = ___xmm_000000000000000000000000beed551d;
  uStack_cf0 = _UNK_152891838;
  local_d58 = 0;
  uStack_d50 = 0;
  local_d38 = 0;
  uStack_d30 = 0;
  local_cd8 = 0;
  uStack_cd0 = 0;
  local_d08 = ___xmm_bd9c8910bf13c3830000000000000000;
  uStack_d00 = _UNK_152891908;
  local_cb8 = ___xmm_00000000beed551dbd9c8910bf13c383;
  uStack_cb0 = _UNK_1528918b8;
  local_ce8 = ___xmm_bf2597d5000000000000000000000000;
  uStack_ce0 = _UNK_1528919b8;
  local_ca8 = 0;
  uStack_ca0 = 0;
  local_cc8 = 0;
  uStack_cc0 = 0;
  local_c98 = 0;
  uStack_c90 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_e88._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_e88._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x18c,8);
  pvVar9 = &local_e08;
  local_e88._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ((longlong)&local_e88._Mypair._Myval2._Myfirst[0xc]._Mypair._Myval2._Myfirst + 4);
  local_e88._Mypair._Myval2._Mylast = local_e88._Mypair._Myval2._Myfirst;
  do {
    p_Var3 = &pvVar9->_Mypair;
    pvVar9 = (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar9->_Mypair)._Myval1.field_0x4;
    *(undefined4 *)&((local_e88._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined4 *)&p_Var3->_Myval1;
    local_e88._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
         &((local_e88._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pvVar9 != (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                      *)local_c7c);
  local_f78.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_f78);
  local_f88._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_c7c + 4);
  local_c78._Mypair._Myval1 = ___xmm_bf0a55c1000000000000000000000000;
  local_c78._Mypair._Myval2._Myfirst = _UNK_1528919a8;
  local_c78._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_c78._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_f88._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_aec;
  local_c48 = ___xmm_000000000000000000000000be0a55d2;
  uStack_c40 = _UNK_152891818;
  local_af8 = 0;
  local_c38 = 0;
  uStack_c30 = 0;
  local_c18 = 0;
  uStack_c10 = 0;
  local_bf8 = ___xmm_000000000000000000000000be1d6495;
  uStack_bf0 = _UNK_152891828;
  local_c58 = 0;
  uStack_c50 = 0;
  local_bd8 = 0;
  uStack_bd0 = 0;
  local_bb8 = 0;
  uStack_bb0 = 0;
  local_c28 = ___xmm_bebf3c92bec0904fbf3f524400000000;
  uStack_c20 = _UNK_152891998;
  local_b98 = ___xmm_0000000000000000beabc5bd00000000;
  uStack_b90 = _UNK_152891858;
  local_c08 = ___xmm_be282492bf3029ae0000000000000000;
  uStack_c00 = _UNK_152891928;
  local_b88 = 0;
  uStack_b80 = 0;
  local_be8 = ___xmm_be6507a7000000000000000000000000;
  uStack_be0 = _UNK_152891958;
  local_b68 = ___xmm_000000000000000000000000beed551d;
  uStack_b60 = _UNK_152891838;
  local_bc8 = 0;
  uStack_bc0 = 0;
  local_ba8 = 0;
  uStack_ba0 = 0;
  local_b48 = 0;
  uStack_b40 = 0;
  local_b78 = ___xmm_bd9c8910bf13c3830000000000000000;
  uStack_b70 = _UNK_152891908;
  local_b28 = ___xmm_00000000beed551dbd9c8910bf13c383;
  uStack_b20 = _UNK_1528918b8;
  local_b58 = ___xmm_bf2597d5000000000000000000000000;
  uStack_b50 = _UNK_1528919b8;
  local_b18 = 0;
  uStack_b10 = 0;
  local_b38 = 0;
  uStack_b30 = 0;
  local_b08 = 0;
  uStack_b00 = 0;
  local_af0 = 0;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_e68,(initializer_list<float> *)&local_f88,
             (PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_f78);
  local_f70.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_f70);
  local_aec._4_8_ = ___xmm_bf0a55c1000000000000000000000000;
  pvStack_ae0 = _UNK_1528919a8;
  local_ad8 = 0;
  uStack_ad0 = 0;
  local_ac8 = 0;
  uStack_ac0 = 0;
  local_ab8 = ___xmm_000000000000000000000000be0a55d2;
  uStack_ab0 = _UNK_152891818;
  local_a98 = ___xmm_bebf3c92bec0904fbf3f524400000000;
  uStack_a90 = _UNK_152891998;
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_a88 = 0;
  uStack_a80 = 0;
  local_a78 = ___xmm_be282492bf3029ae0000000000000000;
  uStack_a70 = _UNK_152891928;
  local_a68 = ___xmm_000000000000000000000000be1d6495;
  uStack_a60 = _UNK_152891828;
  local_a58 = ___xmm_be6507a7000000000000000000000000;
  uStack_a50 = _UNK_152891958;
  local_968 = 0;
  local_a48 = 0;
  uStack_a40 = 0;
  local_f88._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_aec + 4);
  local_a28 = 0;
  uStack_a20 = 0;
  local_a08 = ___xmm_0000000000000000beabc5bd00000000;
  uStack_a00 = _UNK_152891858;
  local_9f8 = 0;
  uStack_9f0 = 0;
  local_f88._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_95c;
  local_9d8 = ___xmm_000000000000000000000000beed551d;
  uStack_9d0 = _UNK_152891838;
  local_a38 = 0;
  uStack_a30 = 0;
  local_a18 = 0;
  uStack_a10 = 0;
  local_9b8 = 0;
  uStack_9b0 = 0;
  local_9e8 = ___xmm_bd9c8910bf13c3830000000000000000;
  uStack_9e0 = _UNK_152891908;
  local_998 = ___xmm_00000000beed551dbd9c8910bf13c383;
  uStack_990 = _UNK_1528918b8;
  local_9c8 = ___xmm_bf2597d5000000000000000000000000;
  uStack_9c0 = _UNK_1528919b8;
  local_988 = 0;
  uStack_980 = 0;
  local_9a8 = 0;
  uStack_9a0 = 0;
  local_978 = 0;
  uStack_970 = 0;
  local_960 = 0;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_e48,(initializer_list<float> *)&local_f88,
             (PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_f70);
  local_f68.pMemRes = (MemoryResource *)0x0;
  pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_f68);
  local_95c._4_8_ = ___xmm_bf0a55c1000000000000000000000000;
  pvStack_950 = _UNK_1528919a8;
  local_948 = 0;
  uStack_940 = 0;
  local_928 = ___xmm_000000000000000000000000be0a55d2;
  uStack_920 = _UNK_152891818;
  local_918 = 0;
  uStack_910 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8d8 = ___xmm_000000000000000000000000be1d6495;
  uStack_8d0 = _UNK_152891828;
  local_938 = 0;
  uStack_930 = 0;
  local_8b8 = 0;
  uStack_8b0 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_908 = ___xmm_bebf3c92bec0904fbf3f524400000000;
  uStack_900 = _UNK_152891998;
  local_878 = ___xmm_0000000000000000beabc5bd00000000;
  uStack_870 = _UNK_152891858;
  local_8e8 = ___xmm_be282492bf3029ae0000000000000000;
  uStack_8e0 = _UNK_152891928;
  local_868 = 0;
  uStack_860 = 0;
  local_8c8 = ___xmm_be6507a7000000000000000000000000;
  uStack_8c0 = _UNK_152891958;
  local_848 = ___xmm_000000000000000000000000beed551d;
  uStack_840 = _UNK_152891838;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_888 = 0;
  uStack_880 = 0;
  local_828 = 0;
  uStack_820 = 0;
  local_858 = ___xmm_bd9c8910bf13c3830000000000000000;
  uStack_850 = _UNK_152891908;
  local_808 = ___xmm_00000000beed551dbd9c8910bf13c383;
  uStack_800 = _UNK_1528918b8;
  local_838 = ___xmm_bf2597d5000000000000000000000000;
  uStack_830 = _UNK_1528919b8;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_f88._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_95c + 4);
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_f88._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_7cc;
  local_7d8 = 0;
  local_7d0 = 0;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_e28,(initializer_list<float> *)&local_f88,
             (PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_f68);
  local_f88._First = &local_e88;
  local_f88._Last = &local_e08;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_f28,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_f88,&local_f60);
  local_f88._First = &local_f48;
  local_f88._Last = &local_f08;
  std::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&valuesPerLODPerConfig,&local_f88,local_f58);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_f28);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_f48);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_e28);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_e48);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_e68);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_e88);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_ea8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_ec8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_ee8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_f08);
  atexit(_dynamic_atexit_destructor_for__valuesPerLODPerConfig__);
  return;
}

// ~TwistSwingReader @ 14c58b310

void __thiscall rltests::twsw::TwistSwingReader::~TwistSwingReader(TwistSwingReader *this)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7TwistSwingReader_twsw_rltests__6B_;
  *(undefined ***)&this[-1].field_0x30 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this[-1].field_0x40 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this[-1].field_0x50 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this[-1].field_0x60 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 4) + -0x50 + (longlong)this) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)
   ((longlong)*(int *)(*(longlong *)&this[-1].field_0x28 + 8) + -0x50 + (longlong)this) =
       &_vftable__for__dna__BehaviorReader__;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 4);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x50;
  iVar1 = *(int *)(*(longlong *)&this[-1].field_0x28 + 8);
  *(int *)((longlong)iVar1 + -0x54 + (longlong)this) = iVar1 + -0x60;
  dna::FakeReader::~FakeReader((FakeReader *)this);
  return;
}

// `dynamic_atexit_destructor_for_'swingBlendWeights'' @ 150451140

void __cdecl rltests::twsw::optimized::_dynamic_atexit_destructor_for__swingBlendWeights__(void)

{
  if (swingBlendWeights._Mypair._Myval2._Myfirst !=
      (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (swingBlendWeights._Mypair._Myval2._Myfirst,swingBlendWeights._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&swingBlendWeights);
    (**(code **)(*(longlong *)swingBlendWeights._Mypair._Myval1 + 0x10))
              (swingBlendWeights._Mypair._Myval1,swingBlendWeights._Mypair._Myval2._Myfirst,
               (longlong)swingBlendWeights._Mypair._Myval2._Myend -
               (longlong)swingBlendWeights._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    swingBlendWeights._Mypair._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    swingBlendWeights._Mypair._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    swingBlendWeights._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'swingBlendWeights'' @ 1504511b0

void __cdecl rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__swingBlendWeights__(void)

{
  if (swingBlendWeights._Mypair._Myval2._Myfirst !=
      (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (swingBlendWeights._Mypair._Myval2._Myfirst,swingBlendWeights._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&swingBlendWeights);
    (**(code **)(*(longlong *)swingBlendWeights._Mypair._Myval1 + 0x10))
              (swingBlendWeights._Mypair._Myval1,swingBlendWeights._Mypair._Myval2._Myfirst,
               (longlong)swingBlendWeights._Mypair._Myval2._Myend -
               (longlong)swingBlendWeights._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    swingBlendWeights._Mypair._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    swingBlendWeights._Mypair._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    swingBlendWeights._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'swingInputControlIndices'' @ 150451220

void __cdecl
rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__swingInputControlIndices__(void)

{
  if (swingInputControlIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (swingInputControlIndices._Mypair._Myval2._Myfirst,
               swingInputControlIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&swingInputControlIndices);
    (**(code **)(*(longlong *)swingInputControlIndices._Mypair._Myval1 + 0x10))
              (swingInputControlIndices._Mypair._Myval1,
               swingInputControlIndices._Mypair._Myval2._Myfirst,
               (longlong)swingInputControlIndices._Mypair._Myval2._Myend -
               (longlong)swingInputControlIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    swingInputControlIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    swingInputControlIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    swingInputControlIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'swingInputIndices'' @ 150451290

void __cdecl rltests::twsw::optimized::_dynamic_atexit_destructor_for__swingInputIndices__(void)

{
  if (swingInputIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (swingInputIndices._Mypair._Myval2._Myfirst,swingInputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&swingInputIndices);
    (**(code **)(*(longlong *)swingInputIndices._Mypair._Myval1 + 0x10))
              (swingInputIndices._Mypair._Myval1,swingInputIndices._Mypair._Myval2._Myfirst,
               (longlong)swingInputIndices._Mypair._Myval2._Myend -
               (longlong)swingInputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    swingInputIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    swingInputIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    swingInputIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'swingOutputIndices'' @ 150451300

void __cdecl rltests::twsw::optimized::_dynamic_atexit_destructor_for__swingOutputIndices__(void)

{
  if (swingOutputIndices._Mypair._Myval2._Myfirst !=
      (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (swingOutputIndices._Mypair._Myval2._Myfirst,
               swingOutputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&swingOutputIndices);
    (**(code **)(*(longlong *)swingOutputIndices._Mypair._Myval1 + 0x10))
              (swingOutputIndices._Mypair._Myval1,swingOutputIndices._Mypair._Myval2._Myfirst,
               (longlong)swingOutputIndices._Mypair._Myval2._Myend -
               (longlong)swingOutputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    swingOutputIndices._Mypair._Myval2._Myend =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    swingOutputIndices._Mypair._Myval2._Myfirst =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    swingOutputIndices._Mypair._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'swingOutputJointIndices'' @ 150451370

void __cdecl
rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__swingOutputJointIndices__(void)

{
  if (swingOutputJointIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (swingOutputJointIndices._Mypair._Myval2._Myfirst,
               swingOutputJointIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&swingOutputJointIndices);
    (**(code **)(*(longlong *)swingOutputJointIndices._Mypair._Myval1 + 0x10))
              (swingOutputJointIndices._Mypair._Myval1,
               swingOutputJointIndices._Mypair._Myval2._Myfirst,
               (longlong)swingOutputJointIndices._Mypair._Myval2._Myend -
               (longlong)swingOutputJointIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    swingOutputJointIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    swingOutputJointIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    swingOutputJointIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'swingTwistAxes'' @ 1504513e0

void __cdecl rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__swingTwistAxes__(void)

{
  if (swingTwistAxes._Mypair._Myval2._Myfirst != (TwistAxis *)0x0) {
    (**(code **)(*(longlong *)swingTwistAxes._Mypair._Myval1 + 0x10))
              (swingTwistAxes._Mypair._Myval1,swingTwistAxes._Mypair._Myval2._Myfirst,
               (longlong)swingTwistAxes._Mypair._Myval2._Myend -
               (longlong)swingTwistAxes._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    swingTwistAxes._Mypair._Myval2._Myend = (TwistAxis *)0x0;
    swingTwistAxes._Mypair._Myval2._Myfirst = (TwistAxis *)0x0;
    swingTwistAxes._Mypair._Myval2._Mylast = (TwistAxis *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'twistBlendWeights'' @ 150451440

void __cdecl rltests::twsw::optimized::_dynamic_atexit_destructor_for__twistBlendWeights__(void)

{
  if (twistBlendWeights._Mypair._Myval2._Myfirst !=
      (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (twistBlendWeights._Mypair._Myval2._Myfirst,twistBlendWeights._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&twistBlendWeights);
    (**(code **)(*(longlong *)twistBlendWeights._Mypair._Myval1 + 0x10))
              (twistBlendWeights._Mypair._Myval1,twistBlendWeights._Mypair._Myval2._Myfirst,
               (longlong)twistBlendWeights._Mypair._Myval2._Myend -
               (longlong)twistBlendWeights._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    twistBlendWeights._Mypair._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    twistBlendWeights._Mypair._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    twistBlendWeights._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'twistBlendWeights'' @ 1504514b0

void __cdecl rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__twistBlendWeights__(void)

{
  if (twistBlendWeights._Mypair._Myval2._Myfirst !=
      (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (twistBlendWeights._Mypair._Myval2._Myfirst,twistBlendWeights._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&twistBlendWeights);
    (**(code **)(*(longlong *)twistBlendWeights._Mypair._Myval1 + 0x10))
              (twistBlendWeights._Mypair._Myval1,twistBlendWeights._Mypair._Myval2._Myfirst,
               (longlong)twistBlendWeights._Mypair._Myval2._Myend -
               (longlong)twistBlendWeights._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    twistBlendWeights._Mypair._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    twistBlendWeights._Mypair._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    twistBlendWeights._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'twistInputControlIndices'' @ 150451520

void __cdecl
rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__twistInputControlIndices__(void)

{
  if (twistInputControlIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (twistInputControlIndices._Mypair._Myval2._Myfirst,
               twistInputControlIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&twistInputControlIndices);
    (**(code **)(*(longlong *)twistInputControlIndices._Mypair._Myval1 + 0x10))
              (twistInputControlIndices._Mypair._Myval1,
               twistInputControlIndices._Mypair._Myval2._Myfirst,
               (longlong)twistInputControlIndices._Mypair._Myval2._Myend -
               (longlong)twistInputControlIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    twistInputControlIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    twistInputControlIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    twistInputControlIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'twistInputIndices'' @ 150451590

void __cdecl rltests::twsw::optimized::_dynamic_atexit_destructor_for__twistInputIndices__(void)

{
  if (twistInputIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (twistInputIndices._Mypair._Myval2._Myfirst,twistInputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&twistInputIndices);
    (**(code **)(*(longlong *)twistInputIndices._Mypair._Myval1 + 0x10))
              (twistInputIndices._Mypair._Myval1,twistInputIndices._Mypair._Myval2._Myfirst,
               (longlong)twistInputIndices._Mypair._Myval2._Myend -
               (longlong)twistInputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    twistInputIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    twistInputIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    twistInputIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'twistOutputIndices'' @ 150451600

void __cdecl rltests::twsw::optimized::_dynamic_atexit_destructor_for__twistOutputIndices__(void)

{
  if (twistOutputIndices._Mypair._Myval2._Myfirst !=
      (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (twistOutputIndices._Mypair._Myval2._Myfirst,
               twistOutputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&twistOutputIndices);
    (**(code **)(*(longlong *)twistOutputIndices._Mypair._Myval1 + 0x10))
              (twistOutputIndices._Mypair._Myval1,twistOutputIndices._Mypair._Myval2._Myfirst,
               (longlong)twistOutputIndices._Mypair._Myval2._Myend -
               (longlong)twistOutputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    twistOutputIndices._Mypair._Myval2._Myend =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    twistOutputIndices._Mypair._Myval2._Myfirst =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    twistOutputIndices._Mypair._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'twistOutputJointIndices'' @ 150451670

void __cdecl
rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__twistOutputJointIndices__(void)

{
  if (twistOutputJointIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (twistOutputJointIndices._Mypair._Myval2._Myfirst,
               twistOutputJointIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&twistOutputJointIndices);
    (**(code **)(*(longlong *)twistOutputJointIndices._Mypair._Myval1 + 0x10))
              (twistOutputJointIndices._Mypair._Myval1,
               twistOutputJointIndices._Mypair._Myval2._Myfirst,
               (longlong)twistOutputJointIndices._Mypair._Myval2._Myend -
               (longlong)twistOutputJointIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    twistOutputJointIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    twistOutputJointIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    twistOutputJointIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'twistTwistAxes'' @ 1504516e0

void __cdecl rltests::twsw::unoptimized::_dynamic_atexit_destructor_for__twistTwistAxes__(void)

{
  if (twistTwistAxes._Mypair._Myval2._Myfirst != (TwistAxis *)0x0) {
    (**(code **)(*(longlong *)twistTwistAxes._Mypair._Myval1 + 0x10))
              (twistTwistAxes._Mypair._Myval1,twistTwistAxes._Mypair._Myval2._Myfirst,
               (longlong)twistTwistAxes._Mypair._Myval2._Myend -
               (longlong)twistTwistAxes._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    twistTwistAxes._Mypair._Myval2._Myend = (TwistAxis *)0x0;
    twistTwistAxes._Mypair._Myval2._Myfirst = (TwistAxis *)0x0;
    twistTwistAxes._Mypair._Myval2._Mylast = (TwistAxis *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'values'' @ 150451740

void __cdecl rltests::twsw::input::_dynamic_atexit_destructor_for__values__(void)

{
  if (values._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)values._Mypair._Myval1 + 0x10))
              (values._Mypair._Myval1,values._Mypair._Myval2._Myfirst,
               (longlong)values._Mypair._Myval2._Myend - (longlong)values._Mypair._Myval2._Myfirst &
               0xfffffffffffffffc,8);
    values._Mypair._Myval2._Myend = (float *)0x0;
    values._Mypair._Myval2._Myfirst = (float *)0x0;
    values._Mypair._Myval2._Mylast = (float *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'valuesPerLODPerConfig'' @ 1504517a0

void __cdecl rltests::twsw::output::_dynamic_atexit_destructor_for__valuesPerLODPerConfig__(void)

{
  if (valuesPerLODPerConfig._Mypair._Myval2._Myfirst !=
      (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (valuesPerLODPerConfig._Mypair._Myval2._Myfirst,
               valuesPerLODPerConfig._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&valuesPerLODPerConfig);
    (**(code **)(*(longlong *)valuesPerLODPerConfig._Mypair._Myval1 + 0x10))
              (valuesPerLODPerConfig._Mypair._Myval1,valuesPerLODPerConfig._Mypair._Myval2._Myfirst,
               (longlong)valuesPerLODPerConfig._Mypair._Myval2._Myend -
               (longlong)valuesPerLODPerConfig._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    valuesPerLODPerConfig._Mypair._Myval2._Myend =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    valuesPerLODPerConfig._Mypair._Myval2._Myfirst =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    valuesPerLODPerConfig._Mypair._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

