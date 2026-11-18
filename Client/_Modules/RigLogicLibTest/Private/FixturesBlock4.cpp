// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 63

// `dynamic_initializer_for_'lods'' @ 141369f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::ml::block4::optimized::_dynamic_initializer_for__lods__(void)

{
  DefaultMemoryResource **ppDVar1;
  undefined4 uVar2;
  PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource> PVar3;
  DefaultMemoryResource *pDVar4;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar5;
  longlong lVar6;
  DefaultMemoryResource *pDVar7;
  DefaultMemoryResource **ppDVar8;
  undefined4 *puVar9;
  int *piVar10;
  ulonglong uVar11;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  DefaultMemoryResource *local_b8;
  DefaultMemoryResource *local_b0 [7];
  PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource> local_78;
  longlong local_70;
  undefined8 local_68;
  longlong lStack_60;
  PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource> local_58;
  longlong local_50;
  undefined8 local_48;
  longlong lStack_40;
  DefaultMemoryResource *local_38 [2];
  
  local_38[0] = (DefaultMemoryResource *)(__security_cookie.value ^ (ulonglong)auStack_f8);
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::
           PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_c8._4_4_ = 1;
  local_c8._0_4_ = 0;
  local_c0 = 2;
  local_bc = 3;
  local_b8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_b0[1] = (DefaultMemoryResource *)
                (**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,8);
  local_b0[0] = local_b0[1];
  ppDVar8 = (DefaultMemoryResource **)&local_c8;
  local_b0[2] = local_b0[1] + 2;
  do {
    *(undefined4 *)local_b0[1] = *(undefined4 *)ppDVar8;
    ppDVar8 = (DefaultMemoryResource **)((longlong)ppDVar8 + 4);
    local_b0[1] = (DefaultMemoryResource *)&local_b0[1]->field_0x4;
  } while (ppDVar8 != &local_b8);
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::
           PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_d8[0] = 0;
  local_d8[1] = 1;
  local_d8[2] = 2;
  local_b0[3] = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  local_b0[5] = (DefaultMemoryResource *)
                (**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  local_b0[4] = local_b0[5];
  puVar9 = local_d8;
  local_b0[6] = (DefaultMemoryResource *)((longlong)local_b0[5] + 0xc);
  do {
    uVar2 = *puVar9;
    puVar9 = puVar9 + 1;
    *(undefined4 *)local_b0[5] = uVar2;
    local_b0[5] = (DefaultMemoryResource *)((longlong)local_b0[5] + 4);
  } while (puVar9 != local_d8 + 3);
  local_78 = (PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(&local_78);
  local_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = (PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>(&local_58);
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  pvVar5 = (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *)
           (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x80,8);
  pvVar12 = pvVar5;
  ppDVar8 = local_b0;
  do {
    (pvVar12->_Mypair)._Myval1 =
         (PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>)
         &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
    *(undefined8 *)((longlong)pvVar5 + (8 - (longlong)local_b0) + (longlong)ppDVar8) = 0;
    *(undefined8 *)((longlong)ppDVar8 + (longlong)pvVar5 + (0x10 - (longlong)local_b0)) = 0;
    *(undefined8 *)((longlong)ppDVar8 + (longlong)pvVar5 + (0x18 - (longlong)local_b0)) = 0;
    uVar11 = (longlong)ppDVar8[1] - (longlong)*ppDVar8 >> 2;
    if (uVar11 != 0) {
      if (0x3fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>::
        _Xlength();
      }
      PVar3 = (pvVar12->_Mypair)._Myval1;
      lVar6 = (**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar11 * 4,8);
      *(longlong *)((longlong)pvVar5 + (8 - (longlong)local_b0) + (longlong)ppDVar8) = lVar6;
      *(longlong *)((longlong)ppDVar8 + (longlong)pvVar5 + (0x10 - (longlong)local_b0)) = lVar6;
      *(ulonglong *)((longlong)ppDVar8 + (longlong)pvVar5 + (0x18 - (longlong)local_b0)) =
           lVar6 + uVar11 * 4;
      pDVar4 = ppDVar8[1];
      puVar9 = *(undefined4 **)((longlong)pvVar5 + (8 - (longlong)local_b0) + (longlong)ppDVar8);
      for (pDVar7 = *ppDVar8; pDVar7 != pDVar4; pDVar7 = (DefaultMemoryResource *)&pDVar7->field_0x4
          ) {
        *puVar9 = *(undefined4 *)pDVar7;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 **)((longlong)pvVar5 + (0x10 - (longlong)local_b0) + (longlong)ppDVar8) = puVar9;
    }
    pvVar12 = pvVar12 + 1;
    ppDVar1 = ppDVar8 + 3;
    ppDVar8 = ppDVar8 + 4;
  } while (ppDVar1 != local_38);
  lods.indicesPerLOD._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  lods.count = 4;
  lods.indicesPerLOD._Mypair._Myval2._Myfirst = pvVar5;
  lods.indicesPerLOD._Mypair._Myval2._Mylast = pvVar12;
  lods.indicesPerLOD._Mypair._Myval2._Myend = pvVar5 + 4;
  if (local_50 != 0) {
    (**(code **)(*(longlong *)local_58 + 0x10))
              (local_58,local_50,lStack_40 - local_50 & 0xfffffffffffffffc,8);
    local_50 = 0;
    local_48 = 0;
    lStack_40 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(longlong *)local_78 + 0x10))
              (local_78,local_70,lStack_60 - local_70 & 0xfffffffffffffffc,8);
    local_70 = 0;
    local_68 = 0;
    lStack_60 = 0;
  }
  if (local_b0[4] != (DefaultMemoryResource *)0x0) {
    (**(code **)((longlong)*local_b0[3] + 0x10))
              (local_b0[3],local_b0[4],
               (longlong)local_b0[6] - (longlong)local_b0[4] & 0xfffffffffffffffc,8);
    local_b0[4] = (DefaultMemoryResource *)0x0;
    local_b0[5] = (DefaultMemoryResource *)0x0;
    local_b0[6] = (DefaultMemoryResource *)0x0;
  }
  if (local_b0[0] != (DefaultMemoryResource *)0x0) {
    (**(code **)((longlong)*local_b8 + 0x10))
              (local_b8,local_b0[0],
               (longlong)local_b0[2] - (longlong)local_b0[0] & 0xfffffffffffffffc,8);
  }
  atexit(_dynamic_atexit_destructor_for__lods__);
  return;
}

// `dynamic_initializer_for_'mlbNetActivationFunctionParameters'' @ 14136a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
rltests::ml::block4::unoptimized::_dynamic_initializer_for__mlbNetActivationFunctionParameters__
          (void)

{
  longlong lVar1;
  float fVar2;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar3;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar4;
  undefined1 auStack_2a8 [32];
  initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_288 [2];
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_268;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_260;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_258;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_238;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_218;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1f8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1d8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1b8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_198;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_178;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_158;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_138;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_118;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_f8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_d8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_b8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_78;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_58;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_38;
  
  local_38._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )(__security_cookie.value ^ (ulonglong)auStack_2a8);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_260 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*(int *)(lVar1 + 0x9d4c) <
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
  local_218._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_218);
  local_218._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_218._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_1f8._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  local_218._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_1f8);
  local_1f8._Mypair._Myval2._Myfirst = (float *)0x0;
  local_1f8._Mypair._Myval2._Mylast = (float *)0x0;
  local_1f8._Mypair._Myval2._Myend = (float *)0x0;
  local_1d8._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_1d8);
  local_1d8._Mypair._Myval2._Myfirst = (float *)0x0;
  local_1d8._Mypair._Myval2._Mylast = (float *)0x0;
  local_1d8._Mypair._Myval2._Myend = (float *)0x0;
  local_1b8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_1b8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar4 = &local_218;
  local_1b8._Mypair._Myval2._Myend = local_1b8._Mypair._Myval2._Mylast + 3;
  local_1b8._Mypair._Myval2._Myfirst = local_1b8._Mypair._Myval2._Mylast;
  do {
    local_288[0]._First =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_1b8._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
              (local_1b8._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)pvVar4,
               (PolyAllocator<float,8,pma::DefaultMemoryResource> *)local_288);
    local_1b8._Mypair._Myval2._Mylast = local_1b8._Mypair._Myval2._Mylast + 1;
    pvVar4 = pvVar4 + 1;
  } while (pvVar4 != &local_1b8);
  if (*(int *)(lVar1 + 0x9d4c) <
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
  if (*(int *)(lVar1 + 0x9d4c) <
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
  fVar2 = __real_3f000000;
  local_b8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_b8._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  local_b8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       &((local_b8._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.field_0x4;
  *(float *)&((local_b8._Mypair._Myval2._Myfirst)->_Mypair)._Myval1 = fVar2;
  local_b8._Mypair._Myval2._Myend = local_b8._Mypair._Myval2._Mylast;
  if (*(int *)(lVar1 + 0x9d4c) <
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
  local_98._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_98._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,4,8);
  local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Myfirst + 1;
  *local_98._Mypair._Myval2._Myfirst = fVar2;
  local_98._Mypair._Myval2._Myend = local_98._Mypair._Myval2._Mylast;
  if (*(int *)(lVar1 + 0x9d4c) <
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
  local_78._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_78._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,4,8);
  local_78._Mypair._Myval2._Mylast = local_78._Mypair._Myval2._Myfirst + 1;
  *local_78._Mypair._Myval2._Myfirst = fVar2;
  local_58._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  local_78._Mypair._Myval2._Myend = local_78._Mypair._Myval2._Mylast;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_58);
  local_58._Mypair._Myval2._Myfirst = (float *)0x0;
  local_58._Mypair._Myval2._Mylast = (float *)0x0;
  local_58._Mypair._Myval2._Myend = (float *)0x0;
  local_198._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_198._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x80,8);
  pvVar4 = &local_b8;
  local_198._Mypair._Myval2._Myend = local_198._Mypair._Myval2._Mylast + 4;
  local_198._Mypair._Myval2._Myfirst = local_198._Mypair._Myval2._Mylast;
  do {
    local_288[0]._First =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_198._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
              (local_198._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)pvVar4,
               (PolyAllocator<float,8,pma::DefaultMemoryResource> *)local_288);
    local_198._Mypair._Myval2._Mylast = local_198._Mypair._Myval2._Mylast + 1;
    pvVar4 = pvVar4 + 1;
  } while (pvVar4 != &local_38);
  if (*(int *)(lVar1 + 0x9d4c) <
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
  local_138._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_138);
  local_138._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_138._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_138._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_118._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_118);
  local_118._Mypair._Myval2._Myfirst = (float *)0x0;
  local_118._Mypair._Myval2._Mylast = (float *)0x0;
  local_118._Mypair._Myval2._Myend = (float *)0x0;
  local_f8._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_f8);
  local_f8._Mypair._Myval2._Myfirst = (float *)0x0;
  local_f8._Mypair._Myval2._Mylast = (float *)0x0;
  local_f8._Mypair._Myval2._Myend = (float *)0x0;
  local_d8._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_d8);
  local_d8._Mypair._Myval2._Myfirst = (float *)0x0;
  local_d8._Mypair._Myval2._Mylast = (float *)0x0;
  local_d8._Mypair._Myval2._Myend = (float *)0x0;
  local_178._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_178._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x80,8);
  pvVar4 = &local_138;
  local_178._Mypair._Myval2._Myend = local_178._Mypair._Myval2._Mylast + 4;
  local_178._Mypair._Myval2._Myfirst = local_178._Mypair._Myval2._Mylast;
  do {
    local_288[0]._First =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_178._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
              (local_178._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)pvVar4,
               (PolyAllocator<float,8,pma::DefaultMemoryResource> *)local_288);
    local_178._Mypair._Myval2._Mylast = local_178._Mypair._Myval2._Mylast + 1;
    pvVar4 = pvVar4 + 1;
  } while (pvVar4 != &local_b8);
  local_268 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar3 = pma::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_268);
  local_258._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_258);
  local_258._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_258._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_258._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  local_238._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>
            ((PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_238);
  local_288[0]._First = &local_258;
  local_238._Mypair._Myval2._Myfirst = (float *)0x0;
  local_288[0]._Last = &local_218;
  local_238._Mypair._Myval2._Mylast = (float *)0x0;
  local_238._Mypair._Myval2._Myend = (float *)0x0;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_158,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)local_288,pPVar3);
  local_288[0]._First = &local_1b8;
  local_288[0]._Last = &local_138;
  std::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetActivationFunctionParameters,local_288,&local_260);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_158);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_178);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_198);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_1b8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_238);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_258);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_d8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_f8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_118);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_138);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_58);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_78);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_98);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_b8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_1d8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_1f8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_218);
  atexit(_dynamic_atexit_destructor_for__mlbNetActivationFunctionParameters__);
  return;
}

// `dynamic_initializer_for_'mlbNetActivationFunctions'' @ 14136aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rltests::ml::block4::unoptimized::_dynamic_initializer_for__mlbNetActivationFunctions__(void)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulonglong uVar11;
  PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar12;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [12];
  undefined4 local_d4 [3];
  undefined **local_c8;
  undefined **local_c0 [8];
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *puStack_70;
  undefined **local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined **local_48;
  undefined8 uStack_40;
  undefined **local_38;
  undefined8 uStack_30;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>::
           PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_e0._0_4_ = 4;
  local_e0._4_8_ = 4;
  local_c8 = &`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c0[1] = (undefined **)
                (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xc,8);
  local_c0[0] = local_c0[1];
  puVar7 = (undefined4 *)local_e0;
  local_c0[2] = (undefined **)((longlong)local_c0[1] + 0xc);
  do {
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    *(undefined4 *)local_c0[1] = uVar2;
    local_c0[1] = (undefined **)((longlong)local_c0[1] + 4);
  } while (puVar7 != local_d4);
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>::
           PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_c0[3] = &`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  local_48 = ___xmm_00000000000000020000000200000002;
  uStack_40 = _UNK_152892378;
  local_c0[5] = (undefined **)
                (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,8);
  local_c0[4] = local_c0[5];
  pppuVar8 = &local_48;
  local_c0[6] = (undefined **)((longlong)local_c0[5] + 0x10);
  do {
    uVar2 = *(undefined4 *)pppuVar8;
    pppuVar8 = (undefined ***)((longlong)pppuVar8 + 4);
    *(undefined4 *)local_c0[5] = uVar2;
    local_c0[5] = (undefined **)((longlong)local_c0[5] + 4);
  } while (pppuVar8 != &local_38);
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>::
           PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_c0[7] = &`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  local_38 = ___xmm_00000000000000010000000100000001;
  uStack_30 = _UNK_152892368;
  local_78 = (undefined4 *)
             (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x10,8);
  local_80 = local_78;
  pppuVar8 = &local_38;
  puStack_70 = local_78 + 4;
  do {
    *local_78 = *(undefined4 *)pppuVar8;
    pppuVar8 = (undefined ***)((longlong)pppuVar8 + 4);
    local_78 = local_78 + 1;
  } while (pppuVar8 != (undefined ***)local_28);
  if ((*piVar10 <
       `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>::
           PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_e8 = 3;
  local_68 = &`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_58 = (undefined4 *)
             (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  local_60 = local_58;
  puVar9 = &local_e8;
  puStack_50 = local_58 + 2;
  do {
    uVar2 = *(undefined4 *)puVar9;
    puVar9 = (undefined8 *)((longlong)puVar9 + 4);
    *local_58 = uVar2;
    local_58 = local_58 + 1;
  } while (puVar9 != (undefined8 *)local_e0);
  mlbNetActivationFunctions._Mypair._Myval1 =
       (PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  mlbNetActivationFunctions._Mypair._Myval2._Myend =
       (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        *)0x0;
  mlbNetActivationFunctions._Mypair._Myval2._Myfirst =
       (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        *)0x0;
  mlbNetActivationFunctions._Mypair._Myval2._Mylast =
       (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        *)0x0;
  pPVar4 = (PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            *)(**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x80,8);
  mlbNetActivationFunctions._Mypair._Myval2._Myend =
       (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        *)(pPVar4 + 0x10);
  pPVar12 = pPVar4;
  pppuVar8 = local_c0;
  mlbNetActivationFunctions._Mypair._Myval2._Myfirst =
       (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        *)pPVar4;
  mlbNetActivationFunctions._Mypair._Myval2._Mylast =
       (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        *)pPVar4;
  do {
    *pPVar12 = mlbNetActivationFunctions._Mypair._Myval1;
    *(undefined8 *)((longlong)pppuVar8 + (longlong)pPVar4 + (8 - (longlong)local_c0)) = 0;
    *(undefined8 *)((longlong)pppuVar8 + (longlong)pPVar4 + (0x10 - (longlong)local_c0)) = 0;
    *(undefined8 *)((longlong)pppuVar8 + (longlong)pPVar4 + (0x18 - (longlong)local_c0)) = 0;
    uVar11 = (longlong)pppuVar8[1] - (longlong)*pppuVar8 >> 2;
    if (uVar11 != 0) {
      if (0x3fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::
        vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        ::_Xlength();
      }
      lVar5 = (**(code **)(*(longlong *)*pPVar12 + 8))(*pPVar12,uVar11 * 4,8);
      *(longlong *)((longlong)pppuVar8 + (longlong)pPVar4 + (8 - (longlong)local_c0)) = lVar5;
      *(longlong *)((longlong)pppuVar8 + (longlong)pPVar4 + (0x10 - (longlong)local_c0)) = lVar5;
      *(ulonglong *)((longlong)pppuVar8 + (longlong)pPVar4 + (0x18 - (longlong)local_c0)) =
           lVar5 + uVar11 * 4;
      ppuVar3 = pppuVar8[1];
      puVar7 = *(undefined4 **)((longlong)pppuVar8 + (longlong)pPVar4 + (8 - (longlong)local_c0));
      for (ppuVar6 = *pppuVar8; ppuVar6 != ppuVar3; ppuVar6 = (undefined **)((longlong)ppuVar6 + 4))
      {
        *puVar7 = *(undefined4 *)ppuVar6;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 **)((longlong)pppuVar8 + (longlong)pPVar4 + (0x10 - (longlong)local_c0)) = puVar7
      ;
    }
    pPVar12 = pPVar12 + 4;
    pppuVar1 = pppuVar8 + 3;
    pppuVar8 = pppuVar8 + 4;
  } while (pppuVar1 != &local_48);
  mlbNetActivationFunctions._Mypair._Myval2._Mylast =
       (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
        *)pPVar12;
  if (local_60 != (undefined4 *)0x0) {
    (**(code **)(*local_68 + 0x10))
              (local_68,local_60,(longlong)puStack_50 - (longlong)local_60 & 0xfffffffffffffffc,8);
    local_60 = (undefined4 *)0x0;
    local_58 = (undefined4 *)0x0;
    puStack_50 = (undefined4 *)0x0;
  }
  if (local_80 != (undefined4 *)0x0) {
    (**(code **)(*local_c0[7] + 0x10))
              (local_c0[7],local_80,(longlong)puStack_70 - (longlong)local_80 & 0xfffffffffffffffc,8
              );
    local_80 = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    puStack_70 = (undefined4 *)0x0;
  }
  if (local_c0[4] != (undefined **)0x0) {
    (**(code **)(*local_c0[3] + 0x10))
              (local_c0[3],local_c0[4],
               (longlong)local_c0[6] - (longlong)local_c0[4] & 0xfffffffffffffffc,8);
    local_c0[4] = (undefined **)0x0;
    local_c0[5] = (undefined **)0x0;
    local_c0[6] = (undefined **)0x0;
  }
  if (local_c0[0] != (undefined **)0x0) {
    (**(code **)(*local_c8 + 0x10))
              (local_c8,local_c0[0],
               (longlong)local_c0[2] - (longlong)local_c0[0] & 0xfffffffffffffffc,8);
  }
  atexit(_dynamic_atexit_destructor_for__mlbNetActivationFunctions__);
  return;
}

// `dynamic_initializer_for_'mlbNetBiases'' @ 14136afd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::ml::block4::unoptimized::_dynamic_initializer_for__mlbNetBiases__(void)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  _Compressed_pair<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>_>,0>
  *p_Var4;
  PolyAllocator<float,8,pma::DefaultMemoryResource> *pPVar5;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar6;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> **ppvVar7;
  float *pfVar8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar9;
  undefined1 auStack_458 [32];
  initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_438;
  float local_428 [2];
  undefined1 local_420 [16];
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_410;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_408;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_400;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_3f8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_3f0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_3e8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_3e0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3d8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_3d0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_3c8;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3c0;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3b8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_398;
  undefined1 local_378 [16];
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_368;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined1 local_34c [4];
  undefined1 local_348 [24];
  undefined1 local_330 [16];
  undefined1 local_320 [24];
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_308;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_2e8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_2c8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_2a8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_288;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_268;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_248;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_228;
  undefined4 local_208;
  undefined1 local_204 [4];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1e0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_1c0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1a8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_188;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_168;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_148;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_128;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_108;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_100;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_d0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_c0;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_b8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_78;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_58;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_38;
  
  local_38._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )(__security_cookie.value ^ (ulonglong)auStack_458);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3c0 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*(int *)(lVar3 + 0x9d4c) <
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
  local_428[0] = 0.1;
  local_428[1] = 0.1;
  local_308._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_308._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  pfVar8 = local_428;
  local_308._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       &((local_308._Mypair._Myval2._Myfirst)->_Mypair)._Myval2;
  local_308._Mypair._Myval2._Mylast = local_308._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    *(float *)&((local_308._Mypair._Myval2._Mylast)->_Mypair)._Myval1 = fVar1;
    local_308._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
         &((local_308._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pfVar8 != (float *)local_420);
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
  local_2e8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_330._0_8_ = ___xmm_3e4ccccd3e4ccccd3e4ccccd3e4ccccd;
  local_330._8_8_ = _UNK_150925148;
  local_2e8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,8);
  pfVar8 = (float *)local_330;
  local_2e8._Mypair._Myval2._Myend = local_2e8._Mypair._Myval2._Myfirst + 4;
  local_2e8._Mypair._Myval2._Mylast = local_2e8._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    *local_2e8._Mypair._Myval2._Mylast = fVar1;
    local_2e8._Mypair._Myval2._Mylast = local_2e8._Mypair._Myval2._Mylast + 1;
  } while (pfVar8 != (float *)local_320);
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
  fVar1 = __real_3e99999a;
  local_2c8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_2c8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,4,8);
  local_2c8._Mypair._Myval2._Mylast = local_2c8._Mypair._Myval2._Myfirst + 1;
  *local_2c8._Mypair._Myval2._Myfirst = fVar1;
  local_1a8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_2c8._Mypair._Myval2._Myend = local_2c8._Mypair._Myval2._Mylast;
  local_1a8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar9 = &local_308;
  local_1a8._Mypair._Myval2._Myend = local_1a8._Mypair._Myval2._Mylast + 3;
  local_1a8._Mypair._Myval2._Myfirst = local_1a8._Mypair._Myval2._Mylast;
  do {
    local_438._First =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_1a8._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
              (local_1a8._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)pvVar9,
               (PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_438);
    local_1a8._Mypair._Myval2._Mylast = local_1a8._Mypair._Myval2._Mylast + 1;
    pvVar9 = pvVar9 + 1;
  } while (pvVar9 != &local_2a8);
  if (*(int *)(lVar3 + 0x9d4c) <
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
  local_408 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
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
  local_358 = 0x3ecccccd;
  local_368 = ___xmm_3ecccccd3ecccccd3ecccccd3ecccccd;
  pvStack_360 = _UNK_1528924e8;
  local_354 = 0x3ecccccd;
  local_350 = 0x3ecccccd;
  local_2a8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_2a8._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x1c,8);
  ppvVar7 = &local_368;
  local_2a8._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ((longlong)&((local_2a8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend + 4);
  local_2a8._Mypair._Myval2._Mylast = local_2a8._Mypair._Myval2._Myfirst;
  do {
    uVar2 = *(undefined4 *)ppvVar7;
    ppvVar7 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> **)
              ((longlong)ppvVar7 + 4);
    *(undefined4 *)&((local_2a8._Mypair._Myval2._Mylast)->_Mypair)._Myval1 = uVar2;
    local_2a8._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
         &((local_2a8._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (ppvVar7 !=
           (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> **)local_34c);
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
  local_288._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_200 = ___xmm_3f0000003f0000003f0000003f000000;
  uStack_1f8 = _UNK_150689628;
  local_1f0 = ___xmm_3f0000003f0000003f0000003f000000;
  uStack_1e8 = _UNK_150689628;
  local_288._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x20,8);
  pfVar8 = (float *)(local_204 + 4);
  local_288._Mypair._Myval2._Myend = local_288._Mypair._Myval2._Myfirst + 8;
  local_288._Mypair._Myval2._Mylast = local_288._Mypair._Myval2._Myfirst;
  do {
    *local_288._Mypair._Myval2._Mylast = *pfVar8;
    pfVar8 = pfVar8 + 1;
    local_288._Mypair._Myval2._Mylast = local_288._Mypair._Myval2._Mylast + 1;
  } while ((vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            *)pfVar8 != &local_1e0);
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
  local_208 = 0x3f19999a;
  local_228._Mypair._Myval1 = ___xmm_3f19999a3f19999a3f19999a3f19999a;
  local_228._Mypair._Myval2._Myfirst = _UNK_15092fd58;
  local_268._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_228._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_3f19999a3f19999a3f19999a3f19999a;
  local_228._Mypair._Myval2._Myend = _UNK_15092fd58;
  local_268._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x24,8);
  pvVar9 = &local_228;
  local_268._Mypair._Myval2._Myend = local_268._Mypair._Myval2._Myfirst + 9;
  local_268._Mypair._Myval2._Mylast = local_268._Mypair._Myval2._Myfirst;
  do {
    p_Var4 = &pvVar9->_Mypair;
    pvVar9 = (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar9->_Mypair)._Myval1.field_0x4;
    *local_268._Mypair._Myval2._Mylast = *(float *)&p_Var4->_Myval1;
    local_268._Mypair._Myval2._Mylast = local_268._Mypair._Myval2._Mylast + 1;
  } while (pvVar9 != (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                      *)local_204);
  local_410 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar5 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_410);
  local_438._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_378;
  local_378._0_4_ = 0x3f333333;
  local_438._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_378 + 0xc);
  local_378._4_4_ = 0x3f333333;
  local_378._8_4_ = 0x3f333333;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_248,(initializer_list<float> *)&local_438,pPVar5);
  local_438._First = &local_2a8;
  local_438._Last = &local_228;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_188,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_438,&local_408);
  local_400 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar6 = pma::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_400);
  local_3f8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar5 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_3f8);
  local_438._First = &local_128;
  local_438._Last = &local_f8;
  local_128._Mypair._Myval1 = ___xmm_3f4ccccd3f4ccccd3f4ccccd3f4ccccd;
  local_128._Mypair._Myval2._Myfirst = _UNK_1528927f8;
  local_128._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_3f4ccccd3f4ccccd3f4ccccd3f4ccccd;
  local_128._Mypair._Myval2._Myend = _UNK_1528927f8;
  local_108 = ___xmm_3f4ccccd3f4ccccd3f4ccccd3f4ccccd;
  pvStack_100 = _UNK_1528927f8;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_b8,
             (initializer_list<float> *)&local_438,pPVar5);
  local_3f0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar5 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_3f0);
  local_438._First = &local_1e0;
  local_438._Last = &local_1a8;
  local_1b0 = 0x3f666666;
  local_1ac = 0x3f666666;
  local_1e0._Mypair._Myval1 = ___xmm_3f6666663f6666663f6666663f666666;
  local_1e0._Mypair._Myval2._Myfirst = _UNK_152892818;
  local_1e0._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_3f6666663f6666663f6666663f666666;
  local_1e0._Mypair._Myval2._Myend = _UNK_152892818;
  local_1c0 = ___xmm_3f6666663f6666663f6666663f666666;
  pvStack_1b8 = _UNK_152892818;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_98,(initializer_list<float> *)&local_438,pPVar5);
  local_3e8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar5 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_3e8);
  local_438._First = &local_f8;
  local_438._Last = &local_b8;
  local_f8._Mypair._Myval1 = ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  local_f8._Mypair._Myval2._Myfirst = _UNK_152892848;
  local_f8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  local_f8._Mypair._Myval2._Myend = _UNK_152892848;
  local_d8 = ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  pvStack_d0 = _UNK_152892848;
  local_c8 = ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  pvStack_c0 = _UNK_152892848;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_78,(initializer_list<float> *)&local_438,pPVar5);
  local_3e0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar5 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_3e0);
  local_348._0_8_ = ___xmm_3f99999a3f99999a3f99999a3f99999a;
  local_348._8_8_ = _UNK_152892868;
  local_438._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_348;
  local_348._16_4_ = 0x3f99999a;
  local_438._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_330;
  local_348._20_4_ = 0x3f99999a;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_58,(initializer_list<float> *)&local_438,pPVar5);
  local_438._First = &local_b8;
  local_438._Last = &local_38;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_168,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_438,pPVar6);
  local_3d8 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar6 = pma::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_3d8);
  local_3d0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar5 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_3d0);
  local_438._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_420;
  local_420._0_4_ = 1.3;
  local_438._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_420 + 8);
  local_420._4_4_ = 0x3fa66666;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_3b8,
             (initializer_list<float> *)&local_438,pPVar5);
  local_3c8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar5 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_3c8);
  local_438._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_320;
  local_438._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_320 + 0x10);
  local_320._0_8_ = ___xmm_3fb333333fb333333fb333333fb33333;
  local_320._8_8_ = _UNK_152892898;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_398,(initializer_list<float> *)&local_438,pPVar5);
  local_438._First = &local_3b8;
  local_438._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_378;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_148,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_438,pPVar6);
  local_438._First = &local_1a8;
  local_438._Last = &local_128;
  std::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetBiases,&local_438,&local_3c0);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_148);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_168);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_188);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_1a8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_398);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_3b8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_58);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_78);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_98);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_b8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_248);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_268);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_288);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_2a8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_2c8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_2e8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_308);
  atexit(_dynamic_atexit_destructor_for__mlbNetBiases__);
  return;
}

// `dynamic_initializer_for_'mlbNetBiasesFloat'' @ 14136b9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::ml::block4::optimized::_dynamic_initializer_for__mlbNetBiasesFloat__(void)

{
  float fVar1;
  longlong lVar2;
  _Compressed_pair<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>,0>
  *p_Var3;
  PolyAllocator<float,64,pma::AlignedMemoryResource> *pPVar4;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar5;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> **ppvVar6;
  float *pfVar7;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar8;
  undefined1 auStack_478 [32];
  initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_458;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_448;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_440;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_438;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_430;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_428;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_420;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_418;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_410;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_408;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_400;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3f8 [2];
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_3c8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3a8;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [24];
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_360;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_358;
  undefined8 uStack_350;
  AlignedMemoryResource *local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_328;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_308;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_2e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_2c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_2a8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_288;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_268;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_248;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_228;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_208;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1e8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1c8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1a8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_158;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_138;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_130;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_128;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_108;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_100;
  char local_f8 [8];
  undefined8 uStack_f0;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b0;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_a8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_88;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_68;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_48;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_28 [2];
  
  local_28[0] = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )(__security_cookie.value ^ (ulonglong)auStack_478);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_3f8[0] = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_348 = &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_3a8._Mypair._Myval1 = ___xmm_00000000000000003dcccccd3dcccccd;
  local_3a8._Mypair._Myval2._Myfirst = _UNK_1528922e8;
  local_340 = (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x10,0x40);
  pvVar8 = &local_3a8;
  local_330 = local_340 + 0x10;
  local_338 = local_340;
  do {
    p_Var3 = &pvVar8->_Mypair;
    pvVar8 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar8->_Mypair)._Myval1.field_0x4;
    *(undefined4 *)local_338 = *(undefined4 *)&p_Var3->_Myval1;
    local_338 = local_338 + 4;
  } while (pvVar8 != (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                      *)&local_3a8._Mypair._Myval2._Mylast);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_328._Mypair._Myval1 =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_3a8._Mypair._Myval2._Mylast = ___xmm_3e4ccccd3e4ccccd3e4ccccd3e4ccccd;
  local_3a8._Mypair._Myval2._Myend = _UNK_150925148;
  local_328._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,0x40);
  ppvVar6 = &local_3a8._Mypair._Myval2._Mylast;
  local_328._Mypair._Myval2._Myend = local_328._Mypair._Myval2._Myfirst + 4;
  local_328._Mypair._Myval2._Mylast = local_328._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *(float *)ppvVar6;
    ppvVar6 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> **)
              ((longlong)ppvVar6 + 4);
    *local_328._Mypair._Myval2._Mylast = fVar1;
    local_328._Mypair._Myval2._Mylast = local_328._Mypair._Myval2._Mylast + 1;
  } while (ppvVar6 !=
           (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> **)&local_388);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_308._Mypair._Myval1 =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_388 = ___xmm_0000000000000000000000003e99999a;
  uStack_380 = _UNK_1528922a8;
  local_308._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,0x40);
  pfVar7 = (float *)&local_388;
  local_308._Mypair._Myval2._Myend = local_308._Mypair._Myval2._Myfirst + 4;
  local_308._Mypair._Myval2._Mylast = local_308._Mypair._Myval2._Myfirst;
  do {
    fVar1 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    *local_308._Mypair._Myval2._Mylast = fVar1;
    local_308._Mypair._Myval2._Mylast = local_308._Mypair._Myval2._Mylast + 1;
  } while ((vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            *)pfVar7 !=
           (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            *)local_378);
  local_208._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_208._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  ppvVar6 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> **)&local_348;
  local_208._Mypair._Myval2._Myend = local_208._Mypair._Myval2._Mylast + 3;
  local_208._Mypair._Myval2._Myfirst = local_208._Mypair._Myval2._Mylast;
  do {
    local_458._First =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_208._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
              (local_208._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)ppvVar6,
               (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_458);
    local_208._Mypair._Myval2._Mylast = local_208._Mypair._Myval2._Mylast + 1;
    ppvVar6 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> **)
              ((longlong)ppvVar6 + 0x20);
  } while ((vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            *)ppvVar6 != &local_2e8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_440 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_268._Mypair._Myval1 = ___xmm_3ecccccd3ecccccd3ecccccd3ecccccd;
  local_268._Mypair._Myval2._Myfirst = _UNK_1528924e8;
  local_2e8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_268._Mypair._Myval2._Mylast = ___xmm_000000003ecccccd3ecccccd3ecccccd;
  local_268._Mypair._Myval2._Myend = _UNK_152892388;
  local_2e8._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x20,0x40);
  pvVar8 = &local_268;
  local_2e8._Mypair._Myval2._Myend = local_2e8._Mypair._Myval2._Myfirst + 1;
  local_2e8._Mypair._Myval2._Mylast = local_2e8._Mypair._Myval2._Myfirst;
  do {
    p_Var3 = &pvVar8->_Mypair;
    pvVar8 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar8->_Mypair)._Myval1.field_0x4;
    *(undefined4 *)&((local_2e8._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined4 *)&p_Var3->_Myval1;
    local_2e8._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
         &((local_2e8._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pvVar8 != &local_248);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2c8._Mypair._Myval1 =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_248._Mypair._Myval1 = ___xmm_3f0000003f0000003f0000003f000000;
  local_248._Mypair._Myval2._Myfirst = _UNK_150689628;
  local_248._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_3f0000003f0000003f0000003f000000;
  local_248._Mypair._Myval2._Myend = _UNK_150689628;
  local_2c8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x20,0x40);
  pvVar8 = &local_248;
  local_2c8._Mypair._Myval2._Myend = local_2c8._Mypair._Myval2._Myfirst + 8;
  local_2c8._Mypair._Myval2._Mylast = local_2c8._Mypair._Myval2._Myfirst;
  do {
    *local_2c8._Mypair._Myval2._Mylast = *(float *)&(pvVar8->_Mypair)._Myval1;
    pvVar8 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar8->_Mypair)._Myval1.field_0x4;
    local_2c8._Mypair._Myval2._Mylast = local_2c8._Mypair._Myval2._Mylast + 1;
  } while (pvVar8 != &local_228);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_188._Mypair._Myval1 = ___xmm_3f19999a3f19999a3f19999a3f19999a;
  local_188._Mypair._Myval2._Myfirst = _UNK_15092fd58;
  local_2a8._Mypair._Myval1 =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_188._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_3f19999a3f19999a3f19999a3f19999a;
  local_188._Mypair._Myval2._Myend = _UNK_15092fd58;
  local_168 = ___xmm_0000000000000000000000003f19999a;
  uStack_160 = _UNK_1528922b8;
  local_2a8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x30,0x40);
  pvVar8 = &local_188;
  local_2a8._Mypair._Myval2._Myend = local_2a8._Mypair._Myval2._Myfirst + 0xc;
  local_2a8._Mypair._Myval2._Mylast = local_2a8._Mypair._Myval2._Myfirst;
  do {
    p_Var3 = &pvVar8->_Mypair;
    pvVar8 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar8->_Mypair)._Myval1.field_0x4;
    *local_2a8._Mypair._Myval2._Mylast = *(float *)&p_Var3->_Myval1;
    local_2a8._Mypair._Myval2._Mylast = local_2a8._Mypair._Myval2._Mylast + 1;
  } while (pvVar8 != &local_158);
  local_448 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar4 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_448);
  local_458._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_378 + 0x10);
  local_378[0] = __xmm_000000003f3333333f3333333f333333[0];
  local_378[1] = __xmm_000000003f3333333f3333333f333333[1];
  local_378[2] = __xmm_000000003f3333333f3333333f333333[2];
  local_378[3] = __xmm_000000003f3333333f3333333f333333[3];
  local_378[4] = __xmm_000000003f3333333f3333333f333333[4];
  local_378[5] = __xmm_000000003f3333333f3333333f333333[5];
  local_378[6] = __xmm_000000003f3333333f3333333f333333[6];
  local_378[7] = __xmm_000000003f3333333f3333333f333333[7];
  local_378._8_8_ = ram0x000152892398;
  local_458._First =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_378;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_288,(initializer_list<float> *)&local_458,pPVar4);
  local_458._First = &local_2e8;
  local_458._Last = &local_268;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1e8,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              *)&local_458,&local_440);
  local_438 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar5 = pma::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_438);
  local_430 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar4 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_430);
  local_458._First = &local_158;
  local_458._Last = &local_128;
  local_158._Mypair._Myval1 = ___xmm_3f4ccccd3f4ccccd3f4ccccd3f4ccccd;
  local_158._Mypair._Myval2._Myfirst = _UNK_1528927f8;
  local_158._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_3f4ccccd3f4ccccd3f4ccccd3f4ccccd;
  local_158._Mypair._Myval2._Myend = _UNK_1528927f8;
  local_138 = ___xmm_3f4ccccd3f4ccccd3f4ccccd3f4ccccd;
  pvStack_130 = _UNK_1528927f8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_a8,
             (initializer_list<float> *)&local_458,pPVar4);
  local_428 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar4 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_428);
  local_458._First = &local_128;
  local_458._Last = &local_e8;
  local_128._Mypair._Myval1 = ___xmm_3f6666663f6666663f6666663f666666;
  local_128._Mypair._Myval2._Myfirst = _UNK_152892818;
  local_128._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_3f6666663f6666663f6666663f666666;
  local_128._Mypair._Myval2._Myend = _UNK_152892818;
  local_108 = ___xmm_3f6666663f6666663f6666663f666666;
  pvStack_100 = _UNK_152892818;
  local_f8[0] = __xmm_00000000000000003f6666663f666666[0];
  local_f8[1] = __xmm_00000000000000003f6666663f666666[1];
  local_f8[2] = __xmm_00000000000000003f6666663f666666[2];
  local_f8[3] = __xmm_00000000000000003f6666663f666666[3];
  local_f8[4] = __xmm_00000000000000003f6666663f666666[4];
  local_f8[5] = __xmm_00000000000000003f6666663f666666[5];
  local_f8[6] = __xmm_00000000000000003f6666663f666666[6];
  local_f8[7] = __xmm_00000000000000003f6666663f666666[7];
  uStack_f0 = ram0x000152892318;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_88,(initializer_list<float> *)&local_458,pPVar4);
  local_420 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar4 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_420);
  local_458._First = &local_e8;
  local_458._Last = &local_a8;
  local_e8._Mypair._Myval1 = ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  local_e8._Mypair._Myval2._Myfirst = _UNK_152892848;
  local_e8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  local_e8._Mypair._Myval2._Myend = _UNK_152892848;
  local_c8 = ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  pvStack_c0 = _UNK_152892848;
  local_b8 = ___xmm_3f8ccccd3f8ccccd3f8ccccd3f8ccccd;
  pvStack_b0 = _UNK_152892848;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_68,(initializer_list<float> *)&local_458,pPVar4);
  local_418 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar4 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_418);
  local_228._Mypair._Myval1 = ___xmm_3f99999a3f99999a3f99999a3f99999a;
  local_228._Mypair._Myval2._Myfirst = _UNK_152892868;
  local_458._First = &local_228;
  local_458._Last = &local_208;
  local_228._Mypair._Myval2._Mylast = ___xmm_00000000000000003f99999a3f99999a;
  local_228._Mypair._Myval2._Myend = _UNK_152892328;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_48,(initializer_list<float> *)&local_458,pPVar4);
  local_458._First = &local_a8;
  local_458._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_28;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1c8,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              *)&local_458,pPVar5);
  local_410 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar5 = pma::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_410);
  local_408 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar4 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_408);
  local_458._First =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_378 + 0x10);
  local_458._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)&local_358;
  local_378._16_8_ = ___xmm_00000000000000003fa666663fa66666;
  pvStack_360 = _UNK_152892338;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_3e8,
             (initializer_list<float> *)&local_458,pPVar4);
  local_400 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar4 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_400);
  local_458._First =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)&local_358;
  local_458._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)&local_348;
  local_358 = ___xmm_3fb333333fb333333fb333333fb33333;
  uStack_350 = _UNK_152892898;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_3c8,(initializer_list<float> *)&local_458,pPVar4);
  local_458._First = &local_3e8;
  local_458._Last = &local_3a8;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1a8,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              *)&local_458,pPVar5);
  local_458._First = &local_208;
  local_458._Last = &local_188;
  std::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetBiasesFloat,&local_458,local_3f8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_1a8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_1c8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_1e8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_208);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_3c8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_3e8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_48);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_68);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_88);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_a8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_288);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_2a8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_2c8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_2e8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_308);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_328);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_348);
  atexit(_dynamic_atexit_destructor_for__mlbNetBiasesFloat__);
  return;
}

// `dynamic_initializer_for_'mlbNetBiasesHalfFloat'' @ 14136c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl rltests::ml::block4::optimized::_dynamic_initializer_for__mlbNetBiasesHalfFloat__(void)

{
  ushort uVar1;
  _Compressed_pair<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>,0>
  *p_Var2;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *pPVar3;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar4;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> **ppvVar5
  ;
  _Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
  *p_Var6;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> **ppvVar7
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar8;
  ushort *puVar9;
  int *piVar10;
  undefined1 auStack_398 [32];
  initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_378;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_368;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_360;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_358;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_350;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_348;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_340;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_338;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_330;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_328;
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_320;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_318;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_2f8
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_2d8;
  undefined1 local_2b8 [12];
  undefined4 local_2ac;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_2a8;
  undefined1 local_288 [20];
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined1 local_260 [28];
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_228;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_208;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1e8
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1c8
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1a8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_188
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_168
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_148
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_128;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_108;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_c8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_a8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_88;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_68;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_48;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_28 [2];
  
  ppvVar5 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
             **)((longlong)&local_2a8._Mypair._Myval2 + 8);
  local_28[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )(__security_cookie.value ^ (ulonglong)auStack_398);
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_320 = (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2d8._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x2e662e66;
  local_208._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_208._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,0x40);
  pvVar8 = &local_2d8;
  local_208._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       &((local_208._Mypair._Myval2._Myfirst)->_Mypair)._Myval2;
  local_208._Mypair._Myval2._Mylast = local_208._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar8->_Mypair;
    pvVar8 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar8->_Mypair)._Myval1.field_0x2;
    *(undefined2 *)&((local_208._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined2 *)&p_Var2->_Myval1;
    local_208._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )&((local_208._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x2;
  } while ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
            *)pvVar8 != &local_2d8._Mypair._Myval2);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2d8._Mypair._Myval2._Myfirst._0_4_ = 0x32663266;
  local_2d8._Mypair._Myval2._Myfirst._4_4_ = 0x32663266;
  local_1e8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1e8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,0x40);
  p_Var6 = &local_2d8._Mypair._Myval2;
  local_1e8._Mypair._Myval2._Myend = local_1e8._Mypair._Myval2._Myfirst + 4;
  local_1e8._Mypair._Myval2._Mylast = local_1e8._Mypair._Myval2._Myfirst;
  do {
    ppvVar7 = &p_Var6->_Myfirst;
    p_Var6 = (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
              *)((longlong)&p_Var6->_Myfirst + 2);
    *local_1e8._Mypair._Myval2._Mylast = *(ushort *)ppvVar7;
    local_1e8._Mypair._Myval2._Mylast = local_1e8._Mypair._Myval2._Mylast + 1;
  } while (p_Var6 != (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
                      *)&local_2d8._Mypair._Myval2._Mylast);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2d8._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x34cd;
  local_1c8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1c8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,0x40);
  ppvVar7 = &local_2d8._Mypair._Myval2._Mylast;
  local_1c8._Mypair._Myval2._Myend = local_1c8._Mypair._Myval2._Myfirst + 4;
  local_1c8._Mypair._Myval2._Mylast = local_1c8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(ushort *)ppvVar7;
    ppvVar7 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
               **)((longlong)ppvVar7 + 2);
    *local_1c8._Mypair._Myval2._Mylast = uVar1;
    local_1c8._Mypair._Myval2._Mylast = local_1c8._Mypair._Myval2._Mylast + 1;
  } while (ppvVar7 != &local_2d8._Mypair._Myval2._Myend);
  local_128._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_128._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar8 = &local_208;
  local_128._Mypair._Myval2._Myend = local_128._Mypair._Myval2._Mylast + 3;
  local_128._Mypair._Myval2._Myfirst = local_128._Mypair._Myval2._Mylast;
  do {
    local_378._First =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_128._Mypair._Myval1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              (local_128._Mypair._Myval2._Mylast,
               (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                *)pvVar8,(PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_378);
    local_128._Mypair._Myval2._Mylast = local_128._Mypair._Myval2._Mylast + 1;
    pvVar8 = pvVar8 + 1;
  } while (pvVar8 != &local_1a8);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_368 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2a8._Mypair._Myval1._0_4_ = 0x36663666;
  local_2a8._Mypair._Myval1._4_4_ = 0x36663666;
  local_2a8._Mypair._Myval2._Myfirst._0_4_ = 0x36663666;
  local_2a8._Mypair._Myval2._Myfirst._4_4_ = 0x3666;
  local_1a8._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_1a8._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,0x40);
  pvVar8 = &local_2a8;
  local_1a8._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       &((local_1a8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Mylast;
  local_1a8._Mypair._Myval2._Mylast = local_1a8._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar8->_Mypair;
    pvVar8 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar8->_Mypair)._Myval1.field_0x2;
    *(undefined2 *)&((local_1a8._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined2 *)&p_Var2->_Myval1;
    local_1a8._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )&((local_1a8._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x2;
  } while (pvVar8 != (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                      *)ppvVar5);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2a8._Mypair._Myval2._Mylast._0_4_ = 0x38003800;
  local_2a8._Mypair._Myval2._Mylast._4_4_ = 0x38003800;
  local_2a8._Mypair._Myval2._Myend._0_4_ = 0x38003800;
  local_2a8._Mypair._Myval2._Myend._4_4_ = 0x38003800;
  local_188._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_188._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,0x40);
  local_188._Mypair._Myval2._Myend = local_188._Mypair._Myval2._Myfirst + 8;
  local_188._Mypair._Myval2._Mylast = local_188._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(ushort *)ppvVar5;
    ppvVar5 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
               **)((longlong)ppvVar5 + 2);
    *local_188._Mypair._Myval2._Mylast = uVar1;
    local_188._Mypair._Myval2._Mylast = local_188._Mypair._Myval2._Mylast + 1;
  } while ((vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            *)ppvVar5 !=
           (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            *)local_288);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_288._16_4_ = 0x38cd38cd;
  local_274 = 0x38cd38cd;
  local_270 = 0x38cd38cd;
  local_26c = 0x38cd38cd;
  local_268 = 0x38cd;
  local_168._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_168._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x18,0x40);
  puVar9 = (ushort *)(local_288 + 0x10);
  local_168._Mypair._Myval2._Myend = local_168._Mypair._Myval2._Myfirst + 0xc;
  local_168._Mypair._Myval2._Mylast = local_168._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar9;
    puVar9 = puVar9 + 1;
    *local_168._Mypair._Myval2._Mylast = uVar1;
    local_168._Mypair._Myval2._Mylast = local_168._Mypair._Myval2._Mylast + 1;
  } while (puVar9 != (ushort *)local_260);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_2d8._Mypair._Myval2._Myend._0_4_ = 0x399a399a;
  local_2d8._Mypair._Myval2._Myend._4_4_ = 0x399a;
  local_148._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_148._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,0x40);
  local_148._Mypair._Myval2._Myend = local_148._Mypair._Myval2._Myfirst + 4;
  ppvVar5 = &local_2d8._Mypair._Myval2._Myend;
  local_148._Mypair._Myval2._Mylast = local_148._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(ushort *)ppvVar5;
    ppvVar5 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
               **)((longlong)ppvVar5 + 2);
    *local_148._Mypair._Myval2._Mylast = uVar1;
    local_148._Mypair._Myval2._Mylast = local_148._Mypair._Myval2._Mylast + 1;
  } while (ppvVar5 !=
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            **)local_2b8);
  local_378._First = &local_1a8;
  local_378._Last = &local_128;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_108,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_378,&local_368);
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_340 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar10 <
      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_378._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_260;
  local_360 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_378._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_260 + 0x18);
  local_260._0_4_ = 0x3a663a66;
  local_260._4_4_ = 0x3a663a66;
  local_260._8_4_ = 0x3a663a66;
  local_260._12_4_ = 0x3a663a66;
  local_260._16_4_ = 0x3a663a66;
  local_260._20_4_ = 0x3a663a66;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)&local_a8,(initializer_list<unsigned_short> *)&local_378,&local_360);
  local_358 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_358);
  local_378._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_260 + 0x18);
  local_260._24_4_ = 0x3b333b33;
  local_378._Last = &local_228;
  local_244 = 0x3b333b33;
  local_240 = 0x3b333b33;
  local_23c = 0x3b333b33;
  local_238 = 0x3b333b33;
  local_234 = 0x3b333b33;
  local_230 = 0x3b333b33;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_88,(initializer_list<unsigned_short> *)&local_378,pPVar3);
  local_350 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_350);
  local_378._First = &local_228;
  local_228._Mypair._Myval1._0_4_ = 0x3c663c66;
  local_378._Last = &local_208;
  local_228._Mypair._Myval1._4_4_ = 0x3c663c66;
  local_228._Mypair._Myval2._Myfirst._0_4_ = 0x3c663c66;
  local_228._Mypair._Myval2._Myfirst._4_4_ = 0x3c663c66;
  local_228._Mypair._Myval2._Mylast._0_4_ = 0x3c663c66;
  local_228._Mypair._Myval2._Mylast._4_4_ = 0x3c663c66;
  local_228._Mypair._Myval2._Myend._0_4_ = 0x3c663c66;
  local_228._Mypair._Myval2._Myend._4_4_ = 0x3c663c66;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_68,(initializer_list<unsigned_short> *)&local_378,pPVar3);
  local_348 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_348);
  local_378._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_288;
  local_288._0_4_ = 0x3ccd3ccd;
  local_378._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_288 + 0x10);
  local_288._4_4_ = 0x3ccd3ccd;
  local_288._8_8_ =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x3ccd3ccd;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_48,(initializer_list<unsigned_short> *)&local_378,pPVar3);
  local_378._First = &local_a8;
  local_378._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_28;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_e8,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_378,&local_340);
  local_338 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar4 = pma::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_338);
  local_330 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_330);
  local_378._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_2b8;
  local_2b8._0_8_ =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x3d333d33;
  local_378._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_2b8 + 8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)&local_318,(initializer_list<unsigned_short> *)&local_378,pPVar3);
  local_328 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_328);
  local_378._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_2b8 + 8);
  local_2b8._8_4_ = 0x3d9a3d9a;
  local_378._Last = &local_2a8;
  local_2ac = 0x3d9a3d9a;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_2f8,(initializer_list<unsigned_short> *)&local_378,pPVar3);
  local_378._First = &local_318;
  local_378._Last = &local_2d8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_c8,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_378,pPVar4);
  local_378._First = &local_128;
  local_378._Last = &local_a8;
  std::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetBiasesHalfFloat,&local_378,&local_320);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_c8);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_e8);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_108);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_128);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_2f8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_318);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_48);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_68);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_88);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_a8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_148);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_168);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_188);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_1a8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_1c8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_1e8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_208);
  atexit(_dynamic_atexit_destructor_for__mlbNetBiasesHalfFloat__);
  return;
}

// `dynamic_initializer_for_'mlbNetInputIndices'' @ 14136ce60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::ml::block4::unoptimized::_dynamic_initializer_for__mlbNetInputIndices__(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_108 [32];
  ushort local_e8 [4];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_e0;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_d8;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2 [2];
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined4 local_ae;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_a8;
  DefaultMemoryResource *local_88;
  undefined2 *local_80;
  undefined2 *local_78;
  undefined2 *puStack_70;
  DefaultMemoryResource *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined2 *puStack_50;
  DefaultMemoryResource *local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  undefined2 *puStack_30;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_28 [2];
  
  local_28[0] = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_108);
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
  local_e0 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
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
  local_e8[0] = 1;
  local_e8[1] = 4;
  local_a8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_a8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  puVar3 = local_e8;
  local_a8._Mypair._Myval2._Myend = local_a8._Mypair._Myval2._Myfirst + 2;
  local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *local_a8._Mypair._Myval2._Mylast = uVar1;
    local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Mylast + 1;
  } while (puVar3 != local_e8 + 2);
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
  local_c8 = 0x20000;
  local_c4 = 3;
  local_88 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_80 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,6,8);
  puVar4 = &local_c8;
  puStack_70 = local_80 + 3;
  local_78 = local_80;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_78 = uVar2;
    local_78 = local_78 + 1;
  } while (puVar4 != (undefined4 *)local_c2);
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
  local_b8 = 0x70005;
  local_b0 = 0xc;
  local_b4 = 0x90008;
  local_68 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_60 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,10,8);
  puVar4 = &local_b8;
  puStack_50 = local_60 + 5;
  local_58 = local_60;
  do {
    *local_58 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    local_58 = local_58 + 1;
  } while (puVar4 != &local_ae);
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
  local_c0 = 0xa0006;
  local_bc = 0xb;
  local_48 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_40 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,6,8);
  puVar4 = &local_c0;
  puStack_30 = local_40 + 3;
  local_38 = local_40;
  do {
    uVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
    *local_38 = uVar2;
    local_38 = local_38 + 1;
  } while (puVar4 != (undefined4 *)local_ba);
  local_d8._First = &local_a8;
  local_d8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_28;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetInputIndices,&local_d8,&local_e0);
  if (local_40 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))
              (local_48,local_40,((longlong)puStack_30 - (longlong)local_40 >> 1) * 2,8);
    local_40 = (undefined2 *)0x0;
    local_38 = (undefined2 *)0x0;
    puStack_30 = (undefined2 *)0x0;
  }
  if (local_60 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))
              (local_68,local_60,((longlong)puStack_50 - (longlong)local_60 >> 1) * 2,8);
    local_60 = (undefined2 *)0x0;
    local_58 = (undefined2 *)0x0;
    puStack_50 = (undefined2 *)0x0;
  }
  if (local_80 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_88 + 0x10))
              (local_88,local_80,((longlong)puStack_70 - (longlong)local_80 >> 1) * 2,8);
    local_80 = (undefined2 *)0x0;
    local_78 = (undefined2 *)0x0;
    puStack_70 = (undefined2 *)0x0;
  }
  if (local_a8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_a8._Mypair._Myval1 + 0x10))
              (local_a8._Mypair._Myval1,local_a8._Mypair._Myval2._Myfirst,
               ((longlong)local_a8._Mypair._Myval2._Myend -
                (longlong)local_a8._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__mlbNetInputIndices__);
  return;
}

// `dynamic_initializer_for_'mlbNetOutputIndices'' @ 14136d2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl rltests::ml::block4::unoptimized::_dynamic_initializer_for__mlbNetOutputIndices__(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_f8 [32];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d8 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_c8;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2 [2];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_98;
  DefaultMemoryResource *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  undefined2 *puStack_60;
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
             (__security_cookie.value ^ (ulonglong)auStack_f8);
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
  local_d8[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
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
                   ::__l2::dmr,2,8);
  local_98._Mypair._Myval2._Mylast = local_98._Mypair._Myval2._Myfirst + 1;
  *local_98._Mypair._Myval2._Myfirst = 0xd;
  local_98._Mypair._Myval2._Myend = local_98._Mypair._Myval2._Mylast;
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
  local_b8 = 0xf000e;
  local_b4 = 0x10;
  local_78 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_70 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,6,8);
  puVar2 = &local_b8;
  puStack_60 = local_70 + 3;
  local_68 = local_70;
  do {
    uVar1 = *(undefined2 *)puVar2;
    puVar2 = (undefined4 *)((longlong)puVar2 + 2);
    *local_68 = uVar1;
    local_68 = local_68 + 1;
  } while (puVar2 != (undefined4 *)local_b2);
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
  local_a8 = 0x120011;
  local_a4 = 0x140013;
  local_a0 = 0x160015;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0xc,8);
  puVar2 = &local_a8;
  puStack_40 = local_50 + 6;
  local_48 = local_50;
  do {
    *local_48 = *(undefined2 *)puVar2;
    puVar2 = (undefined4 *)((longlong)puVar2 + 2);
    local_48 = local_48 + 1;
  } while (puVar2 != &local_9c);
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
  local_b0 = 0x180017;
  local_ac = 0x1a0019;
  local_38 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_30 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,8,8);
  puVar2 = &local_b0;
  puStack_20 = local_30 + 4;
  local_28 = local_30;
  do {
    uVar1 = *(undefined2 *)puVar2;
    puVar2 = (undefined4 *)((longlong)puVar2 + 2);
    *local_28 = uVar1;
    local_28 = local_28 + 1;
  } while (puVar2 != &local_a8);
  local_c8._First = &local_98;
  local_c8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &stack0xffffffffffffffe8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetOutputIndices,&local_c8,local_d8);
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
  if (local_70 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_78 + 0x10))
              (local_78,local_70,((longlong)puStack_60 - (longlong)local_70 >> 1) * 2,8);
    local_70 = (undefined2 *)0x0;
    local_68 = (undefined2 *)0x0;
    puStack_60 = (undefined2 *)0x0;
  }
  if (local_98._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_98._Mypair._Myval1 + 0x10))
              (local_98._Mypair._Myval1,local_98._Mypair._Myval2._Myfirst,
               ((longlong)local_98._Mypair._Myval2._Myend -
                (longlong)local_98._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__mlbNetOutputIndices__);
  return;
}

// `dynamic_initializer_for_'mlbNetWeights'' @ 14136d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::ml::block4::unoptimized::_dynamic_initializer_for__mlbNetWeights__(void)

{
  undefined4 uVar1;
  float fVar2;
  longlong lVar3;
  _Compressed_pair<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>_>,0>
  *p_Var4;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar5;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  PolyAllocator<float,8,pma::DefaultMemoryResource> *pPVar17;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar18;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> **ppvVar19;
  float *pfVar20;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar21;
  undefined1 auStack_f18 [32];
  initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_ef8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_ee8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_ee0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_ed8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_ed0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_ec8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_ec0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_eb8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_eb0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_ea8;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_ea0;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_e98;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_e90;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e88;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_e68;
  undefined1 local_e48 [32];
  undefined8 uStack_e28;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_e20;
  undefined8 uStack_e18;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_e10;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e08;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_de8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_dc8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_da8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_d88;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_d68;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_d48;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_d28;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_d08;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_ce8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_cc8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_ca8;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_c88;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_c68;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined4 local_c08;
  undefined4 local_c04;
  undefined4 local_c00;
  undefined1 local_bfc [4];
  float local_bf8 [6];
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined4 local_ba8;
  float local_ba4 [3];
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_b98;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_b78;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_b58;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_b38;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_b18;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
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
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_a38;
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
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_948;
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
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_848;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_840;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_838;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_830;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_828;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_808;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_800;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_7f8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
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
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_6a8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_688;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_680;
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
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
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
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_408;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_3e8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvStack_3e0;
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
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
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
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_1d8;
  undefined8 uStack_1d0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_1c8;
  undefined8 uStack_1c0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *local_1b8;
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
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_88 [3];
  
  local_88[0]._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )(__security_cookie.value ^ (ulonglong)auStack_f18);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_e90 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*(int *)(lVar3 + 0x9d4c) <
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
  local_e08._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_e48._24_8_ = ___xmm_3de147ae3de147ae3de147ae3de147ae;
  uStack_e28 = _UNK_1528923c8;
  local_e08._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,8);
  ppvVar19 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> **)
             (local_e48 + 0x18);
  local_e08._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       &((local_e08._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Mylast;
  local_e08._Mypair._Myval2._Mylast = local_e08._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(undefined4 *)ppvVar19;
    ppvVar19 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> **)
               ((longlong)ppvVar19 + 4);
    *(undefined4 *)&((local_e08._Mypair._Myval2._Mylast)->_Mypair)._Myval1 = uVar1;
    local_e08._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
         &((local_e08._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (ppvVar19 != &local_e20);
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
  local_da8._Mypair._Myval1 = ___xmm_3ea8f5c33ea8f5c33e6147ae3e6147ae;
  local_da8._Mypair._Myval2._Myfirst = _UNK_152892438;
  local_de8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_da8._Mypair._Myval2._Mylast = ___xmm_3f0ccccd3f0ccccd3ee147ae3ee147ae;
  local_da8._Mypair._Myval2._Myend = _UNK_152892618;
  local_de8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x20,8);
  pvVar21 = &local_da8;
  local_de8._Mypair._Myval2._Myend = local_de8._Mypair._Myval2._Myfirst + 8;
  local_de8._Mypair._Myval2._Mylast = local_de8._Mypair._Myval2._Myfirst;
  do {
    p_Var4 = &pvVar21->_Mypair;
    pvVar21 = (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
               *)&(pvVar21->_Mypair)._Myval1.field_0x4;
    *local_de8._Mypair._Myval2._Mylast = *(float *)&p_Var4->_Myval1;
    local_de8._Mypair._Myval2._Mylast = local_de8._Mypair._Myval2._Mylast + 1;
  } while (pvVar21 != &local_d88);
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
  local_dc8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_e20 = ___xmm_3f28f5c33f28f5c33f28f5c33f28f5c3;
  uStack_e18 = _UNK_152892738;
  local_dc8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,8);
  ppvVar19 = &local_e20;
  local_dc8._Mypair._Myval2._Myend = local_dc8._Mypair._Myval2._Myfirst + 4;
  local_dc8._Mypair._Myval2._Mylast = local_dc8._Mypair._Myval2._Myfirst;
  do {
    fVar2 = *(float *)ppvVar19;
    ppvVar19 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> **)
               ((longlong)ppvVar19 + 4);
    *local_dc8._Mypair._Myval2._Mylast = fVar2;
    local_dc8._Mypair._Myval2._Mylast = local_dc8._Mypair._Myval2._Mylast + 1;
  } while (ppvVar19 != &local_e10);
  local_ce8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_ce8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar21 = &local_e08;
  local_ce8._Mypair._Myval2._Myend = local_ce8._Mypair._Myval2._Mylast + 3;
  local_ce8._Mypair._Myval2._Myfirst = local_ce8._Mypair._Myval2._Mylast;
  do {
    local_ef8._First =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_ce8._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
              (local_ce8._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)pvVar21,
               (PolyAllocator<float,8,pma::DefaultMemoryResource> *)&local_ef8);
    local_ce8._Mypair._Myval2._Mylast = local_ce8._Mypair._Myval2._Mylast + 1;
    pvVar21 = pvVar21 + 1;
  } while (pvVar21 != &local_da8);
  if (*(int *)(lVar3 + 0x9d4c) <
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
  local_ed8 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
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
  local_bf8._0_8_ = ___xmm_3f451eb83f28f5c33f28f5c33f28f5c3;
  local_bf8._8_8_ = _UNK_1528927e8;
  local_bd8 = ___xmm_3f7d70a43f7d70a43f7d70a43f6147ae;
  uStack_bd0 = _UNK_152892838;
  local_bf8._16_8_ = ___xmm_3f6147ae3f6147ae3f451eb83f451eb8;
  uStack_be0 = _UNK_152892808;
  local_bb8 = ___xmm_3f9c28f63f9c28f63f8e147b3f8e147b;
  uStack_bb0 = _UNK_152892878;
  local_bc8 = ___xmm_3f8e147b3f8000003f8000003f800000;
  uStack_bc0 = _UNK_152892858;
  local_ba8 = 0x3f9c28f6;
  local_d68._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_d68._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x54,8);
  pfVar20 = local_bf8;
  local_d68._Mypair._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ((longlong)&local_d68._Mypair._Myval2._Myfirst[2]._Mypair._Myval2._Mylast + 4);
  local_d68._Mypair._Myval2._Mylast = local_d68._Mypair._Myval2._Myfirst;
  do {
    *(float *)&((local_d68._Mypair._Myval2._Mylast)->_Mypair)._Myval1 = *pfVar20;
    pfVar20 = pfVar20 + 1;
    local_d68._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
         &((local_d68._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pfVar20 != local_ba4);
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
  local_b18._Mypair._Myval1 = ___xmm_3faa3d713faa3d713faa3d713faa3d71;
  local_b18._Mypair._Myval2._Myfirst = _UNK_152892888;
  local_b18._Mypair._Myval2._Mylast = ___xmm_3fb851ec3faa3d713faa3d713faa3d71;
  local_b18._Mypair._Myval2._Myend = _UNK_1528928a8;
  local_af8 = ___xmm_3fb851ec3fb851ec3fb851ec3fb851ec;
  uStack_af0 = _UNK_1528928b8;
  local_ae8 = ___xmm_3fc666663fc666663fb851ec3fb851ec;
  uStack_ae0 = _UNK_1528928c8;
  local_ad8 = ___xmm_3fc666663fc666663fc666663fc66666;
  uStack_ad0 = _UNK_1528928d8;
  local_ac8 = ___xmm_3fd47ae13fd47ae13fd47ae13fc66666;
  uStack_ac0 = _UNK_1528928f8;
  local_ab8 = ___xmm_3fd47ae13fd47ae13fd47ae13fd47ae1;
  uStack_ab0 = _UNK_152892908;
  local_aa8 = ___xmm_3fe28f5c3fe28f5c3fe28f5c3fe28f5c;
  uStack_aa0 = _UNK_152892918;
  local_a98 = ___xmm_3ff0a3d73fe28f5c3fe28f5c3fe28f5c;
  uStack_a90 = _UNK_152892928;
  local_a88 = ___xmm_3ff0a3d73ff0a3d73ff0a3d73ff0a3d7;
  uStack_a80 = _UNK_152892938;
  local_a78 = ___xmm_3ffeb8523ffeb8523ff0a3d73ff0a3d7;
  uStack_a70 = _UNK_152892948;
  local_a68 = ___xmm_3ffeb8523ffeb8523ffeb8523ffeb852;
  uStack_a60 = _UNK_152892958;
  local_a58 = ___xmm_4000000040000000400000003ffeb852;
  uStack_a50 = _UNK_152892978;
  local_a48 = ___xmm_40000000400000004000000040000000;
  uStack_a40 = _UNK_15076ba38;
  local_d48._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_d48._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xe0,8);
  pvVar21 = &local_b18;
  local_d48._Mypair._Myval2._Myend = local_d48._Mypair._Myval2._Myfirst + 0x38;
  local_d48._Mypair._Myval2._Mylast = local_d48._Mypair._Myval2._Myfirst;
  do {
    p_Var4 = &pvVar21->_Mypair;
    pvVar21 = (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
               *)&(pvVar21->_Mypair)._Myval1.field_0x4;
    *local_d48._Mypair._Myval2._Mylast = *(float *)&p_Var4->_Myval1;
    local_d48._Mypair._Myval2._Mylast = local_d48._Mypair._Myval2._Mylast + 1;
  } while (pvVar21 != &local_a38);
  local_ee8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_ee8);
  uVar16 = _UNK_152892a28;
  uVar15 = ___xmm_bd75c28fbd75c28fbd75c28fbd75c28f;
  uVar14 = _UNK_152892a18;
  uVar13 = ___xmm_bd4ccccdbd4ccccdbd4ccccdbd4ccccd;
  uVar12 = _UNK_152892a08;
  uVar11 = ___xmm_bd23d70abd23d70abd23d70abd23d70a;
  uVar10 = _UNK_1528929e8;
  uVar9 = ___xmm_bcf5c28fbcf5c28fbcf5c28fbcf5c28f;
  uVar8 = _UNK_1528929c8;
  uVar7 = ___xmm_bca3d70abca3d70abca3d70abca3d70a;
  pvVar6 = _UNK_1528929b8;
  PVar5 = ___xmm_bc23d70abc23d70abc23d70abc23d70a;
  local_ef8._First = &local_948;
  local_ef8._Last = &local_828;
  local_948._Mypair._Myval1 = ___xmm_bdb851ecbdb851ecbdb851ecbdb851ec;
  local_948._Mypair._Myval2._Myfirst = _UNK_152892a68;
  local_948._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_bdb851ecbdb851ecbdb851ecbdb851ec;
  local_948._Mypair._Myval2._Myend = _UNK_152892a68;
  local_928 = ___xmm_bda3d70abda3d70abda3d70abda3d70a;
  uStack_920 = _UNK_152892a58;
  local_918 = ___xmm_bda3d70abda3d70abda3d70abda3d70a;
  uStack_910 = _UNK_152892a58;
  local_908 = ___xmm_bd8f5c29bd8f5c29bd8f5c29bd8f5c29;
  uStack_900 = _UNK_152892a48;
  local_8f8 = ___xmm_bd8f5c29bd8f5c29bd8f5c29bd8f5c29;
  uStack_8f0 = _UNK_152892a48;
  local_8e8 = ___xmm_bd75c28fbd75c28fbd75c28fbd75c28f;
  uStack_8e0 = _UNK_152892a28;
  local_8d8 = ___xmm_bd75c28fbd75c28fbd75c28fbd75c28f;
  uStack_8d0 = _UNK_152892a28;
  local_8c8 = ___xmm_bd4ccccdbd4ccccdbd4ccccdbd4ccccd;
  uStack_8c0 = _UNK_152892a18;
  local_8b8 = ___xmm_bd4ccccdbd4ccccdbd4ccccdbd4ccccd;
  uStack_8b0 = _UNK_152892a18;
  local_8a8 = ___xmm_bd23d70abd23d70abd23d70abd23d70a;
  uStack_8a0 = _UNK_152892a08;
  local_898 = ___xmm_bd23d70abd23d70abd23d70abd23d70a;
  uStack_890 = _UNK_152892a08;
  local_888 = ___xmm_bcf5c28fbcf5c28fbcf5c28fbcf5c28f;
  uStack_880 = _UNK_1528929e8;
  local_878 = ___xmm_bcf5c28fbcf5c28fbcf5c28fbcf5c28f;
  uStack_870 = _UNK_1528929e8;
  local_868 = ___xmm_bca3d70abca3d70abca3d70abca3d70a;
  uStack_860 = _UNK_1528929c8;
  local_858 = ___xmm_bca3d70abca3d70abca3d70abca3d70a;
  uStack_850 = _UNK_1528929c8;
  local_848 = ___xmm_bc23d70abc23d70abc23d70abc23d70a;
  pvStack_840 = _UNK_1528929b8;
  local_838 = ___xmm_bc23d70abc23d70abc23d70abc23d70a;
  pvStack_830 = _UNK_1528929b8;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_d28,(initializer_list<float> *)&local_ef8,pPVar17);
  local_ee0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_ee0);
  local_ef8._First = &local_c68;
  local_c68._Mypair._Myval1 = ___xmm_be99999abe99999abe99999abe99999a;
  local_c68._Mypair._Myval2._Myfirst = _UNK_152892a78;
  local_c68._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_be99999abe99999abe99999abe99999a;
  local_c68._Mypair._Myval2._Myend = _UNK_152892a78;
  local_ef8._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_bfc;
  local_c48 = ___xmm_be9eb852be9eb852be9eb852be99999a;
  uStack_c40 = _UNK_152892a88;
  local_c38 = ___xmm_be9eb852be9eb852be9eb852be9eb852;
  uStack_c30 = _UNK_152892a98;
  local_c28 = ___xmm_bea3d70abea3d70abe9eb852be9eb852;
  uStack_c20 = _UNK_152892aa8;
  local_c18 = ___xmm_bea3d70abea3d70abea3d70abea3d70a;
  uStack_c10 = _UNK_152892ab8;
  local_c08 = 0xbea3d70a;
  local_c04 = 0xbea3d70a;
  local_c00 = 0xbea3d70a;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_d08,(initializer_list<float> *)&local_ef8,pPVar17);
  local_ef8._First = &local_d68;
  local_ef8._Last = &local_ce8;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_cc8,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_ef8,&local_ed8);
  local_ed0 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar18 = pma::
            PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            ::
            PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                      (&local_ed0);
  local_ec8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_ec8);
  local_ef8._First = &local_a38;
  local_a38._Mypair._Myval1 = ___xmm_3e99999a3e99999a3e99999a3e99999a;
  local_a38._Mypair._Myval2._Myfirst = _UNK_1528923e8;
  local_a18 = ___xmm_3ea3d70a3ea3d70a3e9eb8523e9eb852;
  uStack_a10 = _UNK_152892408;
  local_a38._Mypair._Myval2._Mylast = ___xmm_3e9eb8523e9eb8523e9eb8523e99999a;
  local_a38._Mypair._Myval2._Myend = _UNK_1528923f8;
  local_9f8 = ___xmm_3ea8f5c33ea8f5c33ea8f5c33ea8f5c3;
  uStack_9f0 = _UNK_152892448;
  local_a08 = ___xmm_3ea8f5c33ea3d70a3ea3d70a3ea3d70a;
  uStack_a00 = _UNK_152892428;
  local_9d8 = ___xmm_3eb333333eb333333eb333333eae147b;
  uStack_9d0 = _UNK_152892468;
  local_9e8 = ___xmm_3eae147b3eae147b3eae147b3eae147b;
  uStack_9e0 = _UNK_152892458;
  local_9b8 = ___xmm_3ebd70a43eb851ec3eb851ec3eb851ec;
  uStack_9b0 = _UNK_152892498;
  local_9c8 = ___xmm_3eb851ec3eb851ec3eb333333eb33333;
  uStack_9c0 = _UNK_152892478;
  local_998 = ___xmm_3ec28f5c3ec28f5c3ec28f5c3ec28f5c;
  uStack_990 = _UNK_1528924b8;
  local_9a8 = ___xmm_3ebd70a43ebd70a43ebd70a43ebd70a4;
  uStack_9a0 = _UNK_1528924a8;
  local_ef8._Last = &local_948;
  local_978 = ___xmm_3ecccccd3ecccccd3ec7ae143ec7ae14;
  uStack_970 = _UNK_1528924d8;
  local_988 = ___xmm_3ec7ae143ec7ae143ec7ae143ec28f5c;
  uStack_980 = _UNK_1528924c8;
  local_958 = ___xmm_3ed1eb853ed1eb853ed1eb853ed1eb85;
  uStack_950 = _UNK_152892518;
  local_968 = ___xmm_3ed1eb853ecccccd3ecccccd3ecccccd;
  uStack_960 = _UNK_152892508;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_b98,
             (initializer_list<float> *)&local_ef8,pPVar17);
  local_ec0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_ec0);
  local_6a8._Mypair._Myval1 = ___xmm_3ed70a3d3ed70a3d3ed70a3d3ed70a3d;
  local_6a8._Mypair._Myval2._Myfirst = _UNK_152892528;
  local_6a8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_3ed70a3d3ed70a3d3ed70a3d3ed70a3d;
  local_6a8._Mypair._Myval2._Myend = _UNK_152892528;
  local_688 = ___xmm_3ed70a3d3ed70a3d3ed70a3d3ed70a3d;
  pvStack_680 = _UNK_152892528;
  local_678 = ___xmm_3edc28f63edc28f63edc28f63edc28f6;
  uStack_670 = _UNK_152892538;
  local_668 = ___xmm_3edc28f63edc28f63edc28f63edc28f6;
  uStack_660 = _UNK_152892538;
  local_658 = ___xmm_3edc28f63edc28f63edc28f63edc28f6;
  uStack_650 = _UNK_152892538;
  local_648 = ___xmm_3ee147ae3ee147ae3ee147ae3ee147ae;
  uStack_640 = _UNK_152892548;
  local_638 = ___xmm_3ee147ae3ee147ae3ee147ae3ee147ae;
  uStack_630 = _UNK_152892548;
  local_628 = ___xmm_3ee147ae3ee147ae3ee147ae3ee147ae;
  uStack_620 = _UNK_152892548;
  local_618 = ___xmm_3ee666663ee666663ee666663ee66666;
  uStack_610 = _UNK_152892568;
  local_608 = ___xmm_3ee666663ee666663ee666663ee66666;
  uStack_600 = _UNK_152892568;
  local_5f8 = ___xmm_3ee666663ee666663ee666663ee66666;
  uStack_5f0 = _UNK_152892568;
  local_5e8 = ___xmm_3eeb851f3eeb851f3eeb851f3eeb851f;
  uStack_5e0 = _UNK_152892578;
  local_5d8 = ___xmm_3eeb851f3eeb851f3eeb851f3eeb851f;
  uStack_5d0 = _UNK_152892578;
  local_5c8 = ___xmm_3eeb851f3eeb851f3eeb851f3eeb851f;
  uStack_5c0 = _UNK_152892578;
  local_5b8 = ___xmm_3ef0a3d73ef0a3d73ef0a3d73ef0a3d7;
  uStack_5b0 = _UNK_152892588;
  local_5a8 = ___xmm_3ef0a3d73ef0a3d73ef0a3d73ef0a3d7;
  uStack_5a0 = _UNK_152892588;
  local_598 = ___xmm_3ef0a3d73ef0a3d73ef0a3d73ef0a3d7;
  uStack_590 = _UNK_152892588;
  local_588 = ___xmm_3ef5c28f3ef5c28f3ef5c28f3ef5c28f;
  uStack_580 = _UNK_1509251f8;
  local_578 = ___xmm_3ef5c28f3ef5c28f3ef5c28f3ef5c28f;
  uStack_570 = _UNK_1509251f8;
  local_568 = ___xmm_3ef5c28f3ef5c28f3ef5c28f3ef5c28f;
  uStack_560 = _UNK_1509251f8;
  local_558 = ___xmm_3efae1483efae1483efae1483efae148;
  uStack_550 = _UNK_1528925a8;
  local_548 = ___xmm_3efae1483efae1483efae1483efae148;
  uStack_540 = _UNK_1528925a8;
  local_538 = ___xmm_3efae1483efae1483efae1483efae148;
  uStack_530 = _UNK_1528925a8;
  local_528 = ___xmm_3f0000003f0000003f0000003f000000;
  uStack_520 = _UNK_150689628;
  local_518 = ___xmm_3f0000003f0000003f0000003f000000;
  uStack_510 = _UNK_150689628;
  local_508 = ___xmm_3f0000003f0000003f0000003f000000;
  uStack_500 = _UNK_150689628;
  local_4f8 = ___xmm_3f028f5c3f028f5c3f028f5c3f028f5c;
  uStack_4f0 = _UNK_1528925b8;
  local_4e8 = ___xmm_3f028f5c3f028f5c3f028f5c3f028f5c;
  uStack_4e0 = _UNK_1528925b8;
  local_4d8 = ___xmm_3f028f5c3f028f5c3f028f5c3f028f5c;
  uStack_4d0 = _UNK_1528925b8;
  local_ef8._First = &local_6a8;
  local_ef8._Last = &local_408;
  local_4c8 = ___xmm_3f051eb83f051eb83f051eb83f051eb8;
  uStack_4c0 = _UNK_1528925c8;
  local_4b8 = ___xmm_3f051eb83f051eb83f051eb83f051eb8;
  uStack_4b0 = _UNK_1528925c8;
  local_4a8 = ___xmm_3f051eb83f051eb83f051eb83f051eb8;
  uStack_4a0 = _UNK_1528925c8;
  local_498 = ___xmm_3f07ae143f07ae143f07ae143f07ae14;
  uStack_490 = _UNK_1528925e8;
  local_488 = ___xmm_3f07ae143f07ae143f07ae143f07ae14;
  uStack_480 = _UNK_1528925e8;
  local_478 = ___xmm_3f07ae143f07ae143f07ae143f07ae14;
  uStack_470 = _UNK_1528925e8;
  local_468 = ___xmm_3f0a3d713f0a3d713f0a3d713f0a3d71;
  uStack_460 = _UNK_1528925f8;
  local_458 = ___xmm_3f0a3d713f0a3d713f0a3d713f0a3d71;
  uStack_450 = _UNK_1528925f8;
  local_448 = ___xmm_3f0a3d713f0a3d713f0a3d713f0a3d71;
  uStack_440 = _UNK_1528925f8;
  local_438 = ___xmm_3f0ccccd3f0ccccd3f0ccccd3f0ccccd;
  uStack_430 = _UNK_152892628;
  local_428 = ___xmm_3f0ccccd3f0ccccd3f0ccccd3f0ccccd;
  uStack_420 = _UNK_152892628;
  local_418 = ___xmm_3f0ccccd3f0ccccd3f0ccccd3f0ccccd;
  uStack_410 = _UNK_152892628;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_b78,(initializer_list<float> *)&local_ef8,pPVar17);
  local_eb8 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_eb8);
  local_408._Mypair._Myval1 = ___xmm_3f0f5c293f0f5c293f0f5c293f0f5c29;
  local_408._Mypair._Myval2._Myfirst = _UNK_152892638;
  local_408._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
       ___xmm_3f0f5c293f0f5c293f0f5c293f0f5c29;
  local_408._Mypair._Myval2._Myend = _UNK_152892638;
  local_3e8 = ___xmm_3f0f5c293f0f5c293f0f5c293f0f5c29;
  pvStack_3e0 = _UNK_152892638;
  local_3d8 = ___xmm_3f11eb853f11eb853f0f5c293f0f5c29;
  uStack_3d0 = _UNK_152892648;
  local_398 = ___xmm_3f147ae13f147ae13f147ae13f147ae1;
  uStack_390 = _UNK_152892668;
  local_388 = ___xmm_3f147ae13f147ae13f147ae13f147ae1;
  uStack_380 = _UNK_152892668;
  local_378 = ___xmm_3f147ae13f147ae13f147ae13f147ae1;
  uStack_370 = _UNK_152892668;
  local_368 = ___xmm_3f170a3d3f170a3d3f147ae13f147ae1;
  uStack_360 = _UNK_152892688;
  local_328 = ___xmm_3f19999a3f19999a3f19999a3f19999a;
  uStack_320 = _UNK_15092fd58;
  local_318 = ___xmm_3f19999a3f19999a3f19999a3f19999a;
  uStack_310 = _UNK_15092fd58;
  local_308 = ___xmm_3f19999a3f19999a3f19999a3f19999a;
  uStack_300 = _UNK_15092fd58;
  local_2f8 = ___xmm_3f1c28f63f1c28f63f19999a3f19999a;
  uStack_2f0 = _UNK_1528926a8;
  local_2b8 = ___xmm_3f1eb8523f1eb8523f1eb8523f1eb852;
  uStack_2b0 = _UNK_1528926c8;
  local_2a8 = ___xmm_3f1eb8523f1eb8523f1eb8523f1eb852;
  uStack_2a0 = _UNK_1528926c8;
  local_298 = ___xmm_3f1eb8523f1eb8523f1eb8523f1eb852;
  uStack_290 = _UNK_1528926c8;
  local_3c8 = ___xmm_3f11eb853f11eb853f11eb853f11eb85;
  uStack_3c0 = _UNK_152892658;
  local_3b8 = ___xmm_3f11eb853f11eb853f11eb853f11eb85;
  uStack_3b0 = _UNK_152892658;
  local_3a8 = ___xmm_3f11eb853f11eb853f11eb853f11eb85;
  uStack_3a0 = _UNK_152892658;
  local_288 = ___xmm_3f2147ae3f2147ae3f1eb8523f1eb852;
  uStack_280 = _UNK_1528926e8;
  local_358 = ___xmm_3f170a3d3f170a3d3f170a3d3f170a3d;
  uStack_350 = _UNK_152892698;
  local_348 = ___xmm_3f170a3d3f170a3d3f170a3d3f170a3d;
  uStack_340 = _UNK_152892698;
  local_338 = ___xmm_3f170a3d3f170a3d3f170a3d3f170a3d;
  uStack_330 = _UNK_152892698;
  local_248 = ___xmm_3f23d70a3f23d70a3f23d70a3f23d70a;
  uStack_240 = _UNK_152892708;
  local_238 = ___xmm_3f23d70a3f23d70a3f23d70a3f23d70a;
  uStack_230 = _UNK_152892708;
  local_228 = ___xmm_3f23d70a3f23d70a3f23d70a3f23d70a;
  uStack_220 = _UNK_152892708;
  local_2e8 = ___xmm_3f1c28f63f1c28f63f1c28f63f1c28f6;
  uStack_2e0 = _UNK_1528926b8;
  local_2d8 = ___xmm_3f1c28f63f1c28f63f1c28f63f1c28f6;
  uStack_2d0 = _UNK_1528926b8;
  local_2c8 = ___xmm_3f1c28f63f1c28f63f1c28f63f1c28f6;
  uStack_2c0 = _UNK_1528926b8;
  local_218 = ___xmm_3f2666663f2666663f23d70a3f23d70a;
  uStack_210 = _UNK_152892718;
  local_278 = ___xmm_3f2147ae3f2147ae3f2147ae3f2147ae;
  uStack_270 = _UNK_1528926f8;
  local_268 = ___xmm_3f2147ae3f2147ae3f2147ae3f2147ae;
  uStack_260 = _UNK_1528926f8;
  local_258 = ___xmm_3f2147ae3f2147ae3f2147ae3f2147ae;
  uStack_250 = _UNK_1528926f8;
  local_1d8 = ___xmm_3f28f5c33f28f5c33f28f5c33f28f5c3;
  uStack_1d0 = _UNK_152892738;
  local_1c8 = ___xmm_3f28f5c33f28f5c33f28f5c33f28f5c3;
  uStack_1c0 = _UNK_152892738;
  local_1b8 = ___xmm_3f28f5c33f28f5c33f28f5c33f28f5c3;
  uStack_1b0 = _UNK_152892738;
  local_208 = ___xmm_3f2666663f2666663f2666663f266666;
  uStack_200 = _UNK_152892728;
  local_1f8 = ___xmm_3f2666663f2666663f2666663f266666;
  uStack_1f0 = _UNK_152892728;
  local_1e8 = ___xmm_3f2666663f2666663f2666663f266666;
  uStack_1e0 = _UNK_152892728;
  local_ef8._First = &local_408;
  local_1a8 = ___xmm_3f2b851f3f2b851f3f28f5c33f28f5c3;
  uStack_1a0 = _UNK_152892758;
  local_168 = ___xmm_3f2e147b3f2e147b3f2e147b3f2e147b;
  uStack_160 = _UNK_152892778;
  local_158 = ___xmm_3f2e147b3f2e147b3f2e147b3f2e147b;
  uStack_150 = _UNK_152892778;
  local_148 = ___xmm_3f2e147b3f2e147b3f2e147b3f2e147b;
  uStack_140 = _UNK_152892778;
  local_138 = ___xmm_3f30a3d73f30a3d73f2e147b3f2e147b;
  uStack_130 = _UNK_152892788;
  local_198 = ___xmm_3f2b851f3f2b851f3f2b851f3f2b851f;
  uStack_190 = _UNK_152892768;
  local_188 = ___xmm_3f2b851f3f2b851f3f2b851f3f2b851f;
  uStack_180 = _UNK_152892768;
  local_178 = ___xmm_3f2b851f3f2b851f3f2b851f3f2b851f;
  uStack_170 = _UNK_152892768;
  local_ef8._Last = local_88;
  local_f8 = ___xmm_3f3333333f3333333f3333333f333333;
  uStack_f0 = _UNK_1528927a8;
  local_e8 = ___xmm_3f3333333f3333333f3333333f333333;
  uStack_e0 = _UNK_1528927a8;
  local_d8 = ___xmm_3f3333333f3333333f3333333f333333;
  uStack_d0 = _UNK_1528927a8;
  local_128 = ___xmm_3f30a3d73f30a3d73f30a3d73f30a3d7;
  uStack_120 = _UNK_152892798;
  local_118 = ___xmm_3f30a3d73f30a3d73f30a3d73f30a3d7;
  uStack_110 = _UNK_152892798;
  local_108 = ___xmm_3f30a3d73f30a3d73f30a3d73f30a3d7;
  uStack_100 = _UNK_152892798;
  local_c8 = ___xmm_3f35c28f3f35c28f3f3333333f333333;
  uStack_c0 = _UNK_1528927c8;
  local_b8 = ___xmm_3f35c28f3f35c28f3f35c28f3f35c28f;
  uStack_b0 = _UNK_1528927d8;
  local_a8 = ___xmm_3f35c28f3f35c28f3f35c28f3f35c28f;
  uStack_a0 = _UNK_1528927d8;
  local_98 = ___xmm_3f35c28f3f35c28f3f35c28f3f35c28f;
  uStack_90 = _UNK_1528927d8;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_b58,(initializer_list<float> *)&local_ef8,pPVar17);
  local_eb0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_eb0);
  local_ef8._First = &local_828;
  local_828._Mypair._Myval1 = PVar5;
  local_828._Mypair._Myval2._Myfirst = pvVar6;
  local_ef8._Last = &local_6a8;
  local_828._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)PVar5;
  local_828._Mypair._Myval2._Myend = pvVar6;
  local_808 = PVar5;
  pvStack_800 = pvVar6;
  local_7f8 = PVar5;
  pvStack_7f0 = pvVar6;
  local_7e8 = uVar7;
  uStack_7e0 = uVar8;
  local_7d8 = uVar7;
  uStack_7d0 = uVar8;
  local_7c8 = uVar7;
  uStack_7c0 = uVar8;
  local_7b8 = uVar7;
  uStack_7b0 = uVar8;
  local_7a8 = uVar9;
  uStack_7a0 = uVar10;
  local_798 = uVar9;
  uStack_790 = uVar10;
  local_788 = uVar9;
  uStack_780 = uVar10;
  local_778 = uVar9;
  uStack_770 = uVar10;
  local_768 = uVar11;
  uStack_760 = uVar12;
  local_758 = uVar11;
  uStack_750 = uVar12;
  local_748 = uVar11;
  uStack_740 = uVar12;
  local_738 = uVar11;
  uStack_730 = uVar12;
  local_728 = uVar13;
  uStack_720 = uVar14;
  local_718 = uVar13;
  uStack_710 = uVar14;
  local_708 = uVar13;
  uStack_700 = uVar14;
  local_6f8 = uVar13;
  uStack_6f0 = uVar14;
  local_6e8 = uVar15;
  uStack_6e0 = uVar16;
  local_6d8 = uVar15;
  uStack_6d0 = uVar16;
  local_6c8 = uVar15;
  uStack_6c0 = uVar16;
  local_6b8 = uVar15;
  uStack_6b0 = uVar16;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_b38,(initializer_list<float> *)&local_ef8,pPVar17);
  local_ef8._First = &local_b98;
  local_ef8._Last = &local_b18;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_ca8,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_ef8,pPVar18);
  local_ea8 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar18 = pma::
            PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
            ::
            PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                      (&local_ea8);
  local_ea0 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_ea0);
  local_ef8._First =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_e48;
  local_ef8._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_e48 + 0x18);
  local_e48._16_4_ = 0x40000000;
  local_e48._20_4_ = 0x40000000;
  local_e48._0_8_ = ___xmm_400000003f8000003f8000003f800000;
  local_e48._8_8_ = _UNK_152874738;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_e88,
             (initializer_list<float> *)&local_ef8,pPVar17);
  local_e98 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  pPVar17 = pma::PolyAllocator<float,8,pma::DefaultMemoryResource>::
            PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_e98);
  local_ef8._First = &local_d88;
  local_ef8._Last = &local_d68;
  local_d88._Mypair._Myval1 = ___xmm_40800000408000004040000040400000;
  local_d88._Mypair._Myval2._Myfirst = _UNK_152884c08;
  local_d88._Mypair._Myval2._Mylast = ___xmm_40c0000040c0000040a0000040a00000;
  local_d88._Mypair._Myval2._Myend = _UNK_152874798;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>
            (&local_e68,(initializer_list<float> *)&local_ef8,pPVar17);
  local_ef8._First = &local_e88;
  local_ef8._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_e48;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_c88,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              *)&local_ef8,pPVar18);
  local_ef8._First = &local_ce8;
  local_ef8._Last = &local_c68;
  std::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetWeights,&local_ef8,&local_e90);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_c88);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_ca8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_cc8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_ce8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_e68);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_e88);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_b38);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_b58);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_b78);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_b98);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_d08);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_d28);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_d48);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_d68);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_dc8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy(&local_de8);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)&local_e08);
  atexit(_dynamic_atexit_destructor_for__mlbNetWeights__);
  return;
}

// `dynamic_initializer_for_'mlbNetWeightsFloat'' @ 14136e780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::ml::block4::optimized::_dynamic_initializer_for__mlbNetWeightsFloat__(void)

{
  longlong lVar1;
  _Compressed_pair<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>,0>
  *p_Var2;
  PolyAllocator<float,64,pma::AlignedMemoryResource> *pPVar3;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar4;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar5;
  undefined1 auStack_1068 [32];
  initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_1048;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1038;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1030;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_1028;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_1020;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1018;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1010;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1008;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_1000;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_ff8;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_ff0;
  PolyAllocator<float,64,pma::AlignedMemoryResource> local_fe8;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_fe0;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_fd8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_fb8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f98;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_f78;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_f58;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f38;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f18;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_ef8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_ed8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_eb8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_e98;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_e78;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e58;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e38;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_e18;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_df8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_dd8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_db8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_db0;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_da8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d88;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_d80;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d78;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_d70;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_d68;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d48;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_d40;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_d38;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_d30;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d28;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_d20;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_d18;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_d10;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_d08;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_ce8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_cc8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> local_ca8;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_c88;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c68;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c60;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c58;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c50;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c48;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c40;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c38;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c30;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c28;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c20;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c18;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c10;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_c08;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_c00;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_bf8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_bd8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_bd0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_bc8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_bc0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_bb8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_bb0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_ba8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_ba0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b98;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b90;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_b88;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b80;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b78;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b70;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_b68;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b60;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b58;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b50;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_b48;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b40;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_b38;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b30;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_b28;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_b20;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_b18;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_af8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_af0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_ae8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_ae0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_ad8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_ad0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_ac8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_ac0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_ab8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_ab0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_aa8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_aa0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_a98;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_a90;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_a88;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_a80;
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
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_a28;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_a08;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_a00;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_9f8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_9f0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_9e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_9e0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_9d8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_9d0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_9c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_9c0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_9b8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_9b0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_9a8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_9a0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_998;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_990;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_988;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_980;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_978;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_970;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_968;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_960;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_958;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_950;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_948;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_940;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_938;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_930;
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
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_8a8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_888;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_880;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_878;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_870;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_868;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_860;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_858;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_850;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_848;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_840;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_838;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_830;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_828;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_820;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_818;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_810;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_808;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_800;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_7f8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_7f0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_7e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_7e0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_7d8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_7d0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_7c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_7c0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_7b8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_7b0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_7a8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_7a0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_798;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_790;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_788;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_780;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_778;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_770;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_768;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_760;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_758;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_750;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_748;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_740;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_738;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_730;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_728;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_720;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_718;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_710;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_708;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_700;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_6f8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_6f0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_6e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_6e0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_6d8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_6d0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_6c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_6c0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_6b8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_6b0;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_6a8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_688;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_680;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_678;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_670;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_668;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_660;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_658;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_650;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_648;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_640;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_638;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_630;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_628;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_620;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_618;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_610;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_608;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_600;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_5f8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_5f0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_5e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_5e0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_5d8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_5d0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_5c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_5c0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_5b8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_5b0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_5a8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_5a0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_598;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_590;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_588;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_580;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_578;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_570;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_568;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_560;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_558;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_550;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_548;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_540;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_538;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_530;
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
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
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
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3a8;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_388;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_380;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_378;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_370;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_368;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_360;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_358;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_350;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_348;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_340;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_338;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_330;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_328;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_320;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_318;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_310;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_308;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_300;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_2f8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_2f0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_2e8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_2e0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_2d8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_2d0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_2c8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_2c0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_2b8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_2b0;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_2a8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_2a0;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_298;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_290;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_288;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_280;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_278;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_270;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_268;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_260;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_258;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_250;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_248;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_240;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_238;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_230;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_228;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_220;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_218;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_210;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_208;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_200;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *local_1f8;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvStack_1f0;
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
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_28;
  undefined8 local_20;
  
  local_20 = 0x14136e7ab;
  local_28 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
              )(__security_cookie.value ^ (ulonglong)auStack_1068);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_fe0 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_f98._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_f38._Mypair._Myval1 = ___xmm_00000000000000003de147ae3de147ae;
  local_f38._Mypair._Myval2._Myfirst = _UNK_1528922f8;
  local_f38._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_00000000000000003de147ae3de147ae;
  local_f38._Mypair._Myval2._Myend = _UNK_1528922f8;
  local_f98._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x20,0x40);
  pvVar5 = &local_f38;
  local_f98._Mypair._Myval2._Myend = local_f98._Mypair._Myval2._Myfirst + 1;
  local_f98._Mypair._Myval2._Mylast = local_f98._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x4;
    *(undefined4 *)&((local_f98._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined4 *)&p_Var2->_Myval1;
    local_f98._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
         &((local_f98._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pvVar5 != &local_f18);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_f78._Mypair._Myval1 =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f18._Mypair._Myval1 = ___xmm_3f0ccccd3ee147ae3ea8f5c33e6147ae;
  local_f18._Mypair._Myval2._Myfirst = _UNK_152892608;
  local_f18._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_3f0ccccd3ee147ae3ea8f5c33e6147ae;
  local_f18._Mypair._Myval2._Myend = _UNK_152892608;
  local_f78._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x20,0x40);
  pvVar5 = &local_f18;
  local_f78._Mypair._Myval2._Myend = local_f78._Mypair._Myval2._Myfirst + 8;
  local_f78._Mypair._Myval2._Mylast = local_f78._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x4;
    *local_f78._Mypair._Myval2._Mylast = *(float *)&p_Var2->_Myval1;
    local_f78._Mypair._Myval2._Mylast = local_f78._Mypair._Myval2._Mylast + 1;
  } while (pvVar5 != &local_ef8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_da8._Mypair._Myval1 = ___xmm_0000000000000000000000003f28f5c3;
  local_da8._Mypair._Myval2._Myfirst = _UNK_1528922c8;
  local_da8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_0000000000000000000000003f28f5c3;
  local_da8._Mypair._Myval2._Myend = _UNK_1528922c8;
  local_d88 = ___xmm_0000000000000000000000003f28f5c3;
  pvStack_d80 = _UNK_1528922c8;
  local_d78 = ___xmm_0000000000000000000000003f28f5c3;
  pvStack_d70 = _UNK_1528922c8;
  local_f58._Mypair._Myval1 =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f58._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x40,0x40);
  pvVar5 = &local_da8;
  local_f58._Mypair._Myval2._Myend = local_f58._Mypair._Myval2._Myfirst + 0x10;
  local_f58._Mypair._Myval2._Mylast = local_f58._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x4;
    *local_f58._Mypair._Myval2._Mylast = *(float *)&p_Var2->_Myval1;
    local_f58._Mypair._Myval2._Mylast = local_f58._Mypair._Myval2._Mylast + 1;
  } while (pvVar5 != &local_d68);
  local_e58._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_e58._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar5 = &local_f98;
  local_e58._Mypair._Myval2._Myend = local_e58._Mypair._Myval2._Mylast + 3;
  local_e58._Mypair._Myval2._Myfirst = local_e58._Mypair._Myval2._Mylast;
  do {
    local_1048._First =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_e58._Mypair._Myval1;
    std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
    vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
              (local_e58._Mypair._Myval2._Mylast,
               (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)pvVar5,
               (PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_1048);
    local_e58._Mypair._Myval2._Mylast = local_e58._Mypair._Myval2._Mylast + 1;
    pvVar5 = pvVar5 + 1;
  } while (pvVar5 != &local_f38);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_1028 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_d68._Mypair._Myval1 = ___xmm_3f7d70a43f6147ae3f451eb83f28f5c3;
  local_d68._Mypair._Myval2._Myfirst = _UNK_152892828;
  local_d68._Mypair._Myval2._Mylast = ___xmm_000000003f9c28f63f8e147b3f800000;
  local_d68._Mypair._Myval2._Myend = _UNK_1528923a8;
  local_d48 = ___xmm_3f7d70a43f6147ae3f451eb83f28f5c3;
  pvStack_d40 = _UNK_152892828;
  local_d38 = ___xmm_000000003f9c28f63f8e147b3f800000;
  pvStack_d30 = _UNK_1528923a8;
  local_d28 = ___xmm_3f7d70a43f6147ae3f451eb83f28f5c3;
  pvStack_d20 = _UNK_152892828;
  local_d18 = ___xmm_000000003f9c28f63f8e147b3f800000;
  pvStack_d10 = _UNK_1528923a8;
  local_ed8._Mypair._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_ed8._Mypair._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,0x40);
  pvVar5 = &local_d68;
  local_ed8._Mypair._Myval2._Myend = local_ed8._Mypair._Myval2._Myfirst + 3;
  local_ed8._Mypair._Myval2._Mylast = local_ed8._Mypair._Myval2._Myfirst;
  do {
    *(undefined4 *)&((local_ed8._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined4 *)&(pvVar5->_Mypair)._Myval1;
    pvVar5 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x4;
    local_ed8._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
         &((local_ed8._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x4;
  } while (pvVar5 != &local_d08);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::
             PolyAllocator<float,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_bf8._Mypair._Myval1 = ___xmm_3fd47ae13fc666663fb851ec3faa3d71;
  local_bf8._Mypair._Myval2._Myfirst = _UNK_1528928e8;
  local_bf8._Mypair._Myval2._Mylast = ___xmm_400000003ffeb8523ff0a3d73fe28f5c;
  local_bf8._Mypair._Myval2._Myend = _UNK_152892968;
  local_bd8 = ___xmm_3fd47ae13fc666663fb851ec3faa3d71;
  pvStack_bd0 = _UNK_1528928e8;
  local_bc8 = ___xmm_400000003ffeb8523ff0a3d73fe28f5c;
  pvStack_bc0 = _UNK_152892968;
  local_bb8 = ___xmm_3fd47ae13fc666663fb851ec3faa3d71;
  pvStack_bb0 = _UNK_1528928e8;
  local_ba8 = ___xmm_400000003ffeb8523ff0a3d73fe28f5c;
  pvStack_ba0 = _UNK_152892968;
  local_b98 = ___xmm_3fd47ae13fc666663fb851ec3faa3d71;
  pvStack_b90 = _UNK_1528928e8;
  local_b88 = ___xmm_400000003ffeb8523ff0a3d73fe28f5c;
  pvStack_b80 = _UNK_152892968;
  local_b78 = ___xmm_3fd47ae13fc666663fb851ec3faa3d71;
  pvStack_b70 = _UNK_1528928e8;
  local_b68 = ___xmm_400000003ffeb8523ff0a3d73fe28f5c;
  pvStack_b60 = _UNK_152892968;
  local_b58 = ___xmm_3fd47ae13fc666663fb851ec3faa3d71;
  pvStack_b50 = _UNK_1528928e8;
  local_b48 = ___xmm_400000003ffeb8523ff0a3d73fe28f5c;
  pvStack_b40 = _UNK_152892968;
  local_b38 = ___xmm_3fd47ae13fc666663fb851ec3faa3d71;
  pvStack_b30 = _UNK_1528928e8;
  local_b28 = ___xmm_400000003ffeb8523ff0a3d73fe28f5c;
  pvStack_b20 = _UNK_152892968;
  local_eb8._Mypair._Myval1 =
       (PolyAllocator<float,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_eb8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,64,pma::AlignedMemoryResource>::PolyAllocator<float,64,pma::AlignedMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0xe0,0x40);
  pvVar5 = &local_bf8;
  local_eb8._Mypair._Myval2._Myend = local_eb8._Mypair._Myval2._Myfirst + 0x38;
  local_eb8._Mypair._Myval2._Mylast = local_eb8._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x4;
    *local_eb8._Mypair._Myval2._Mylast = *(float *)&p_Var2->_Myval1;
    local_eb8._Mypair._Myval2._Mylast = local_eb8._Mypair._Myval2._Mylast + 1;
  } while (pvVar5 != &local_b18);
  local_1038 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1038);
  local_1048._First = &local_a28;
  local_1048._Last = &local_8a8;
  local_a28._Mypair._Myval2._Mylast = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  local_a28._Mypair._Myval2._Myend = _UNK_1528929d8;
  local_9f8 = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  pvStack_9f0 = _UNK_1528929d8;
  local_9d8 = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  pvStack_9d0 = _UNK_1528929d8;
  local_9b8 = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  pvStack_9b0 = _UNK_1528929d8;
  local_998 = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  pvStack_990 = _UNK_1528929d8;
  local_978 = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  pvStack_970 = _UNK_1528929d8;
  local_958 = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  pvStack_950 = _UNK_1528929d8;
  local_938 = ___xmm_bca3d70abcf5c28fbd23d70abd4ccccd;
  pvStack_930 = _UNK_1528929d8;
  local_a28._Mypair._Myval1 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  local_a28._Mypair._Myval2._Myfirst = _UNK_152892a38;
  local_a08 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  pvStack_a00 = _UNK_152892a38;
  local_9e8 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  pvStack_9e0 = _UNK_152892a38;
  local_9c8 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  pvStack_9c0 = _UNK_152892a38;
  local_9a8 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  pvStack_9a0 = _UNK_152892a38;
  local_988 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  pvStack_980 = _UNK_152892a38;
  local_968 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  pvStack_960 = _UNK_152892a38;
  local_948 = ___xmm_bd75c28fbd8f5c29bda3d70abdb851ec;
  pvStack_940 = _UNK_152892a38;
  local_928 = ___xmm_000000000000000000000000bc23d70a;
  uStack_920 = _UNK_1528922d8;
  local_918 = ___xmm_000000000000000000000000bc23d70a;
  uStack_910 = _UNK_1528922d8;
  local_908 = ___xmm_000000000000000000000000bc23d70a;
  uStack_900 = _UNK_1528922d8;
  local_8f8 = ___xmm_000000000000000000000000bc23d70a;
  uStack_8f0 = _UNK_1528922d8;
  local_8e8 = ___xmm_000000000000000000000000bc23d70a;
  uStack_8e0 = _UNK_1528922d8;
  local_8d8 = ___xmm_000000000000000000000000bc23d70a;
  uStack_8d0 = _UNK_1528922d8;
  local_8c8 = ___xmm_000000000000000000000000bc23d70a;
  uStack_8c0 = _UNK_1528922d8;
  local_8b8 = ___xmm_000000000000000000000000bc23d70a;
  uStack_8b0 = _UNK_1528922d8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_e98,(initializer_list<float> *)&local_1048,pPVar3);
  local_1030 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1030);
  local_1048._First = &local_c88;
  local_1048._Last = &local_bf8;
  local_c88._Mypair._Myval1 = ___xmm_00000000bea3d70abe9eb852be99999a;
  local_c88._Mypair._Myval2._Myfirst = _UNK_1528923b8;
  local_c88._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_00000000bea3d70abe9eb852be99999a;
  local_c88._Mypair._Myval2._Myend = _UNK_1528923b8;
  local_c68 = ___xmm_00000000bea3d70abe9eb852be99999a;
  pvStack_c60 = _UNK_1528923b8;
  local_c58 = ___xmm_00000000bea3d70abe9eb852be99999a;
  pvStack_c50 = _UNK_1528923b8;
  local_c48 = ___xmm_00000000bea3d70abe9eb852be99999a;
  pvStack_c40 = _UNK_1528923b8;
  local_c38 = ___xmm_00000000bea3d70abe9eb852be99999a;
  pvStack_c30 = _UNK_1528923b8;
  local_c28 = ___xmm_00000000bea3d70abe9eb852be99999a;
  pvStack_c20 = _UNK_1528923b8;
  local_c18 = ___xmm_00000000bea3d70abe9eb852be99999a;
  pvStack_c10 = _UNK_1528923b8;
  local_c08 = ___xmm_00000000bea3d70abe9eb852be99999a;
  pvStack_c00 = _UNK_1528923b8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_e78,(initializer_list<float> *)&local_1048,pPVar3);
  local_1048._First = &local_ed8;
  local_1048._Last = &local_e58;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_e38,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              *)&local_1048,&local_1028);
  local_1020 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                )0x0;
  pPVar4 = pma::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_1020);
  local_1018 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1018);
  local_b18._Mypair._Myval1 = ___xmm_3ea8f5c33ea3d70a3e9eb8523e99999a;
  local_b18._Mypair._Myval2._Myfirst = _UNK_152892418;
  local_b18._Mypair._Myval2._Mylast = ___xmm_3ebd70a43eb851ec3eb333333eae147b;
  local_b18._Mypair._Myval2._Myend = _UNK_152892488;
  local_af8 = ___xmm_3ea8f5c33ea3d70a3e9eb8523e99999a;
  pvStack_af0 = _UNK_152892418;
  local_1048._First = &local_b18;
  local_ae8 = ___xmm_3ebd70a43eb851ec3eb333333eae147b;
  pvStack_ae0 = _UNK_152892488;
  local_1048._Last = &local_a28;
  local_ac8 = ___xmm_3ebd70a43eb851ec3eb333333eae147b;
  pvStack_ac0 = _UNK_152892488;
  local_aa8 = ___xmm_3ebd70a43eb851ec3eb333333eae147b;
  pvStack_aa0 = _UNK_152892488;
  local_a88 = ___xmm_3ebd70a43eb851ec3eb333333eae147b;
  pvStack_a80 = _UNK_152892488;
  local_ad8 = ___xmm_3ea8f5c33ea3d70a3e9eb8523e99999a;
  pvStack_ad0 = _UNK_152892418;
  local_ab8 = ___xmm_3ea8f5c33ea3d70a3e9eb8523e99999a;
  pvStack_ab0 = _UNK_152892418;
  local_a98 = ___xmm_3ea8f5c33ea3d70a3e9eb8523e99999a;
  pvStack_a90 = _UNK_152892418;
  local_a78 = ___xmm_3ed1eb853ecccccd3ec7ae143ec28f5c;
  uStack_a70 = _UNK_1528924f8;
  local_a68 = ___xmm_3ed1eb853ecccccd3ec7ae143ec28f5c;
  uStack_a60 = _UNK_1528924f8;
  local_a58 = ___xmm_3ed1eb853ecccccd3ec7ae143ec28f5c;
  uStack_a50 = _UNK_1528924f8;
  local_a48 = ___xmm_3ed1eb853ecccccd3ec7ae143ec28f5c;
  uStack_a40 = _UNK_1528924f8;
  local_a38 = ___xmm_3ed1eb853ecccccd3ec7ae143ec28f5c;
  uStack_a30 = _UNK_1528924f8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_d08,
             (initializer_list<float> *)&local_1048,pPVar3);
  local_1010 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1010);
  local_1048._First = &local_6a8;
  local_6a8._Mypair._Myval1 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  local_6a8._Mypair._Myval2._Myfirst = _UNK_152892558;
  local_6a8._Mypair._Myval2._Mylast = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  local_6a8._Mypair._Myval2._Myend = _UNK_152892598;
  local_688 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_680 = _UNK_152892558;
  local_678 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_670 = _UNK_152892598;
  local_668 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_660 = _UNK_152892558;
  local_658 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_650 = _UNK_152892598;
  local_648 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_640 = _UNK_152892558;
  local_638 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_630 = _UNK_152892598;
  local_628 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_620 = _UNK_152892558;
  local_618 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_610 = _UNK_152892598;
  local_608 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_600 = _UNK_152892558;
  local_5f8 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_5f0 = _UNK_152892598;
  local_5e8 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_5e0 = _UNK_152892558;
  local_5d8 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_5d0 = _UNK_152892598;
  local_5c8 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_5c0 = _UNK_152892558;
  local_5b8 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_5b0 = _UNK_152892598;
  local_5a8 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_5a0 = _UNK_152892558;
  local_598 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_590 = _UNK_152892598;
  local_588 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_580 = _UNK_152892558;
  local_578 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_570 = _UNK_152892598;
  local_568 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_560 = _UNK_152892558;
  local_558 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_550 = _UNK_152892598;
  local_548 = ___xmm_3ee666663ee147ae3edc28f63ed70a3d;
  pvStack_540 = _UNK_152892558;
  local_538 = ___xmm_3efae1483ef5c28f3ef0a3d73eeb851f;
  pvStack_530 = _UNK_152892598;
  local_1048._Last = &local_3a8;
  local_528 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_520 = _UNK_1528925d8;
  local_518 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_510 = _UNK_152892308;
  local_508 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_500 = _UNK_1528925d8;
  local_4f8 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_4f0 = _UNK_152892308;
  local_4e8 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_4e0 = _UNK_1528925d8;
  local_4d8 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_4d0 = _UNK_152892308;
  local_4c8 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_4c0 = _UNK_1528925d8;
  local_4b8 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_4b0 = _UNK_152892308;
  local_4a8 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_4a0 = _UNK_1528925d8;
  local_498 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_490 = _UNK_152892308;
  local_488 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_480 = _UNK_1528925d8;
  local_478 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_470 = _UNK_152892308;
  local_468 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_460 = _UNK_1528925d8;
  local_458 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_450 = _UNK_152892308;
  local_448 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_440 = _UNK_1528925d8;
  local_438 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_430 = _UNK_152892308;
  local_428 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_420 = _UNK_1528925d8;
  local_418 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_410 = _UNK_152892308;
  local_408 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_400 = _UNK_1528925d8;
  local_3f8 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_3f0 = _UNK_152892308;
  local_3e8 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_3e0 = _UNK_1528925d8;
  local_3d8 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_3d0 = _UNK_152892308;
  local_3c8 = ___xmm_3f07ae143f051eb83f028f5c3f000000;
  uStack_3c0 = _UNK_1528925d8;
  local_3b8 = ___xmm_00000000000000003f0ccccd3f0a3d71;
  uStack_3b0 = _UNK_152892308;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_ce8,(initializer_list<float> *)&local_1048,pPVar3);
  local_1008 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1008);
  local_1048._First = &local_3a8;
  local_1048._Last =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)&local_28;
  local_3a8._Mypair._Myval1 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  local_3a8._Mypair._Myval2._Myfirst = _UNK_152892678;
  local_3a8._Mypair._Myval2._Mylast = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  local_3a8._Mypair._Myval2._Myend = _UNK_1528926d8;
  local_388 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_380 = _UNK_152892678;
  local_378 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_370 = _UNK_1528926d8;
  local_368 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_360 = _UNK_152892678;
  local_358 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_350 = _UNK_1528926d8;
  local_348 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_340 = _UNK_152892678;
  local_338 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_330 = _UNK_1528926d8;
  local_328 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_320 = _UNK_152892678;
  local_318 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_310 = _UNK_1528926d8;
  local_308 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_300 = _UNK_152892678;
  local_2f8 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_2f0 = _UNK_1528926d8;
  local_2e8 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_2e0 = _UNK_152892678;
  local_2d8 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_2d0 = _UNK_1528926d8;
  local_2c8 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_2c0 = _UNK_152892678;
  local_2b8 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_2b0 = _UNK_1528926d8;
  local_2a8 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_2a0 = _UNK_152892678;
  local_298 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_290 = _UNK_1528926d8;
  local_288 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_280 = _UNK_152892678;
  local_278 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_270 = _UNK_1528926d8;
  local_268 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_260 = _UNK_152892678;
  local_258 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_250 = _UNK_1528926d8;
  local_248 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_240 = _UNK_152892678;
  local_238 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_230 = _UNK_1528926d8;
  local_228 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_220 = _UNK_152892678;
  local_218 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_210 = _UNK_1528926d8;
  local_208 = ___xmm_3f170a3d3f147ae13f11eb853f0f5c29;
  pvStack_200 = _UNK_152892678;
  local_1f8 = ___xmm_3f2147ae3f1eb8523f1c28f63f19999a;
  pvStack_1f0 = _UNK_1528926d8;
  local_1e8 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_1e0 = _UNK_152892748;
  local_1d8 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_1d0 = _UNK_1528927b8;
  local_1c8 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_1c0 = _UNK_152892748;
  local_1b8 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_1b0 = _UNK_1528927b8;
  local_1a8 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_1a0 = _UNK_152892748;
  local_198 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_190 = _UNK_1528927b8;
  local_188 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_180 = _UNK_152892748;
  local_178 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_170 = _UNK_1528927b8;
  local_168 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_160 = _UNK_152892748;
  local_158 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_150 = _UNK_1528927b8;
  local_148 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_140 = _UNK_152892748;
  local_138 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_130 = _UNK_1528927b8;
  local_128 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_120 = _UNK_152892748;
  local_118 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_110 = _UNK_1528927b8;
  local_108 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_100 = _UNK_152892748;
  local_f8 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_f0 = _UNK_1528927b8;
  local_e8 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_e0 = _UNK_152892748;
  local_d8 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_d0 = _UNK_1528927b8;
  local_c8 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_c0 = _UNK_152892748;
  local_b8 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_b0 = _UNK_1528927b8;
  local_a8 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_a0 = _UNK_152892748;
  local_98 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_90 = _UNK_1528927b8;
  local_88 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_80 = _UNK_152892748;
  local_78 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_70 = _UNK_1528927b8;
  local_68 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_60 = _UNK_152892748;
  local_58 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_50 = _UNK_1528927b8;
  local_48 = ___xmm_3f2b851f3f28f5c33f2666663f23d70a;
  uStack_40 = _UNK_152892748;
  local_38 = ___xmm_3f35c28f3f3333333f30a3d73f2e147b;
  uStack_30 = _UNK_1528927b8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_cc8,(initializer_list<float> *)&local_1048,pPVar3);
  local_1000 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_1000);
  local_8a8._Mypair._Myval1 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  local_8a8._Mypair._Myval2._Myfirst = _UNK_1528929f8;
  local_8a8._Mypair._Myval2._Mylast = ___xmm_0000000000000000bd75c28fbd4ccccd;
  local_8a8._Mypair._Myval2._Myend = _UNK_152892348;
  local_1048._First = &local_8a8;
  local_888 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_880 = _UNK_1528929f8;
  local_1048._Last = &local_6a8;
  local_878 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_870 = _UNK_152892348;
  local_868 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_860 = _UNK_1528929f8;
  local_858 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_850 = _UNK_152892348;
  local_848 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_840 = _UNK_1528929f8;
  local_838 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_830 = _UNK_152892348;
  local_828 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_820 = _UNK_1528929f8;
  local_818 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_810 = _UNK_152892348;
  local_808 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_800 = _UNK_1528929f8;
  local_7f8 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_7f0 = _UNK_152892348;
  local_7e8 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_7e0 = _UNK_1528929f8;
  local_7d8 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_7d0 = _UNK_152892348;
  local_7c8 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_7c0 = _UNK_1528929f8;
  local_7b8 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_7b0 = _UNK_152892348;
  local_7a8 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_7a0 = _UNK_1528929f8;
  local_798 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_790 = _UNK_152892348;
  local_788 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_780 = _UNK_1528929f8;
  local_778 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_770 = _UNK_152892348;
  local_768 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_760 = _UNK_1528929f8;
  local_758 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_750 = _UNK_152892348;
  local_748 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_740 = _UNK_1528929f8;
  local_738 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_730 = _UNK_152892348;
  local_728 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_720 = _UNK_1528929f8;
  local_718 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_710 = _UNK_152892348;
  local_708 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_700 = _UNK_1528929f8;
  local_6f8 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_6f0 = _UNK_152892348;
  local_6e8 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_6e0 = _UNK_1528929f8;
  local_6d8 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_6d0 = _UNK_152892348;
  local_6c8 = ___xmm_bd23d70abcf5c28fbca3d70abc23d70a;
  pvStack_6c0 = _UNK_1528929f8;
  local_6b8 = ___xmm_0000000000000000bd75c28fbd4ccccd;
  pvStack_6b0 = _UNK_152892348;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_ca8,(initializer_list<float> *)&local_1048,pPVar3);
  local_1048._First = &local_d08;
  local_1048._Last = &local_c88;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_e18,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              *)&local_1048,pPVar4);
  local_ff8 = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar4 = pma::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_ff8);
  local_ff0 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_ff0);
  local_1048._First = &local_dd8;
  local_1048._Last = &local_da8;
  local_dd8._Mypair._Myval1 = ___xmm_0000000000000000400000003f800000;
  local_dd8._Mypair._Myval2._Myfirst = _UNK_151a5ddc8;
  local_dd8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_0000000000000000400000003f800000;
  local_dd8._Mypair._Myval2._Myend = _UNK_151a5ddc8;
  local_db8 = ___xmm_0000000000000000400000003f800000;
  pvStack_db0 = _UNK_151a5ddc8;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_fd8,
             (initializer_list<float> *)&local_1048,pPVar3);
  local_fe8 = (PolyAllocator<float,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<float,64,pma::AlignedMemoryResource>::
           PolyAllocator<float,64,pma::AlignedMemoryResource>(&local_fe8);
  local_1048._First = &local_ef8;
  local_1048._Last = &local_ed8;
  local_ef8._Mypair._Myval1 = ___xmm_40c0000040a000004080000040400000;
  local_ef8._Mypair._Myval2._Myfirst = _UNK_152892988;
  local_ef8._Mypair._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
       ___xmm_40c0000040a000004080000040400000;
  local_ef8._Mypair._Myval2._Myend = _UNK_152892988;
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
            (&local_fb8,(initializer_list<float> *)&local_1048,pPVar3);
  local_1048._First = &local_fd8;
  local_1048._Last = &local_f98;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_df8,
             (initializer_list<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              *)&local_1048,pPVar4);
  local_1048._First = &local_e58;
  local_1048._Last = &local_dd8;
  std::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetWeightsFloat,&local_1048,&local_fe0);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_df8);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_e18);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_e38);
  std::
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_e58);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_fb8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_fd8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_ca8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_cc8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_ce8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_d08);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_e78);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_e98);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_eb8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_ed8);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_f58);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy(&local_f78);
  std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Tidy
            ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)&local_f98);
  atexit(_dynamic_atexit_destructor_for__mlbNetWeightsFloat__);
  return;
}

// `dynamic_initializer_for_'mlbNetWeightsHalfFloat'' @ 14136f690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
rltests::ml::block4::optimized::_dynamic_initializer_for__mlbNetWeightsHalfFloat__(void)

{
  ushort uVar1;
  _Compressed_pair<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>,0>
  *p_Var2;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *pPVar3;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar4;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar5;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> **ppvVar6
  ;
  _Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
  *p_Var7;
  int *piVar8;
  undefined1 auStack_9c8 [32];
  initializer_list<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
  local_9a8;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_998;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_990;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_988;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_980;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_978;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_970;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_968;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_960;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_958;
  PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> local_950;
  PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_948 [2];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_938;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_918
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_8f8;
  undefined1 local_8d8 [24];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
  *local_8c0;
  undefined8 local_8b8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_8b0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_890;
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined1 local_860 [8];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_858;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_810;
  undefined4 local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_798;
  undefined4 local_778;
  undefined4 local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 local_744;
  undefined4 local_740;
  undefined4 local_73c;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_724;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_720;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_658;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_558;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_484;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 local_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 local_464;
  undefined8 local_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined8 local_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined8 local_440;
  undefined4 local_438;
  undefined4 local_434;
  undefined8 local_430;
  undefined4 local_428;
  undefined4 local_424;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined8 local_3e0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_3d8;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_218;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1f8
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_1d8
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1b8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_198
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_178
  ;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_158
  ;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_138;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_118;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_d8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_b8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_98;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_78;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> local_58;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_38 [2];
  
  local_38[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )(__security_cookie.value ^ (ulonglong)auStack_9c8);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_948[0] = (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_8f8._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x2f0a2f0a;
  local_8f8._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x2f0a2f0a;
  local_218._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_218._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,0x40);
  local_218._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       &((local_218._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Mylast;
  pvVar5 = &local_8f8;
  local_218._Mypair._Myval2._Mylast = local_218._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x2;
    *(undefined2 *)&((local_218._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined2 *)&p_Var2->_Myval1;
    local_218._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )&((local_218._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x2;
  } while (pvVar5 != (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                      *)&local_8f8._Mypair._Myval2._Mylast);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_8f8._Mypair._Myval2._Mylast._0_4_ = 0x3548330a;
  local_8f8._Mypair._Myval2._Mylast._4_4_ = 0x3866370a;
  local_8f8._Mypair._Myval2._Myend._0_4_ = 0x3548330a;
  local_8f8._Mypair._Myval2._Myend._4_4_ = 0x3866370a;
  local_1f8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1f8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x10,0x40);
  ppvVar6 = &local_8f8._Mypair._Myval2._Mylast;
  local_1f8._Mypair._Myval2._Myend = local_1f8._Mypair._Myval2._Myfirst + 8;
  local_1f8._Mypair._Myval2._Mylast = local_1f8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *(ushort *)ppvVar6;
    ppvVar6 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
               **)((longlong)ppvVar6 + 2);
    *local_1f8._Mypair._Myval2._Mylast = uVar1;
    local_1f8._Mypair._Myval2._Mylast = local_1f8._Mypair._Myval2._Mylast + 1;
  } while (ppvVar6 !=
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            **)local_8d8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_8b0._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x3948;
  local_8b0._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x3948;
  local_8b0._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x3948;
  local_8b0._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x3948;
  local_1d8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1d8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x20,0x40);
  pvVar5 = &local_8b0;
  local_1d8._Mypair._Myval2._Myend = local_1d8._Mypair._Myval2._Myfirst + 0x10;
  local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x2;
    *local_1d8._Mypair._Myval2._Mylast = *(ushort *)&p_Var2->_Myval1;
    local_1d8._Mypair._Myval2._Mylast = local_1d8._Mypair._Myval2._Mylast + 1;
  } while (pvVar5 != &local_890);
  local_138._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_138._Mypair._Myval2._Mylast =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)(`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x60,8);
  pvVar5 = &local_218;
  local_138._Mypair._Myval2._Myend = local_138._Mypair._Myval2._Mylast + 3;
  local_138._Mypair._Myval2._Myfirst = local_138._Mypair._Myval2._Mylast;
  do {
    local_9a8._First =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)local_138._Mypair._Myval1;
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
    vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              (local_138._Mypair._Myval2._Mylast,
               (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                *)pvVar5,(PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource> *)&local_9a8);
    local_138._Mypair._Myval2._Mylast = local_138._Mypair._Myval2._Mylast + 1;
    pvVar5 = pvVar5 + 1;
  } while (pvVar5 != &local_1b8);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_990 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_890._Mypair._Myval1._0_4_ = 0x3a293948;
  local_890._Mypair._Myval1._4_4_ = 0x3bec3b0a;
  local_890._Mypair._Myval2._Myfirst._0_4_ = 0x3c713c00;
  local_890._Mypair._Myval2._Myfirst._4_4_ = 0x3ce1;
  local_890._Mypair._Myval2._Mylast._0_4_ = 0x3a293948;
  local_890._Mypair._Myval2._Mylast._4_4_ = 0x3bec3b0a;
  local_890._Mypair._Myval2._Myend._0_4_ = 0x3c713c00;
  local_890._Mypair._Myval2._Myend._4_4_ = 0x3ce1;
  local_870 = 0x3a293948;
  local_86c = 0x3bec3b0a;
  local_868 = 0x3c713c00;
  local_864 = 0x3ce1;
  local_1b8._Mypair._Myval1 =
       (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_1b8._Mypair._Myval2._Myfirst =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x30,0x40);
  pvVar5 = &local_890;
  local_1b8._Mypair._Myval2._Myend =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       &local_1b8._Mypair._Myval2._Myfirst[1]._Mypair._Myval2._Mylast;
  local_1b8._Mypair._Myval2._Mylast = local_1b8._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar5->_Mypair;
    pvVar5 = (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)&(pvVar5->_Mypair)._Myval1.field_0x2;
    *(undefined2 *)&((local_1b8._Mypair._Myval2._Mylast)->_Mypair)._Myval1 =
         *(undefined2 *)&p_Var2->_Myval1;
    local_1b8._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *
         )&((local_1b8._Mypair._Myval2._Mylast)->_Mypair)._Myval1.field_0x2;
  } while (pvVar5 != (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                      *)local_860);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_810._Mypair._Myval2._Myfirst._0_4_ = 0x3dc33d52;
  local_810._Mypair._Myval2._Myfirst._4_4_ = 0x3ea43e33;
  local_810._Mypair._Myval2._Mylast._0_4_ = 0x3f853f14;
  local_810._Mypair._Myval2._Mylast._4_4_ = 0x40003ff6;
  local_810._Mypair._Myval2._Myend._0_4_ = 0x3dc33d52;
  local_810._Mypair._Myval2._Myend._4_4_ = 0x3ea43e33;
  local_7f0 = 0x3f853f14;
  local_7ec = 0x40003ff6;
  local_7e8 = 0x3dc33d52;
  local_7e4 = 0x3ea43e33;
  local_7e0 = 0x3f853f14;
  local_7dc = 0x40003ff6;
  local_7d8 = 0x3dc33d52;
  local_7d4 = 0x3ea43e33;
  local_7d0 = 0x3f853f14;
  local_7cc = 0x40003ff6;
  local_7c8 = 0x3dc33d52;
  local_7c4 = 0x3ea43e33;
  local_7c0 = 0x3f853f14;
  local_7bc = 0x40003ff6;
  local_7b8 = 0x3dc33d52;
  local_7b4 = 0x3ea43e33;
  local_7b0 = 0x3f853f14;
  local_7ac = 0x40003ff6;
  local_7a8 = 0x3dc33d52;
  local_7a4 = 0x3ea43e33;
  local_7a0 = 0x3f853f14;
  local_79c = 0x40003ff6;
  local_198._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_198._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0x70,0x40);
  p_Var7 = &local_810._Mypair._Myval2;
  local_198._Mypair._Myval2._Myend = local_198._Mypair._Myval2._Myfirst + 0x38;
  local_198._Mypair._Myval2._Mylast = local_198._Mypair._Myval2._Myfirst;
  do {
    ppvVar6 = &p_Var7->_Myfirst;
    p_Var7 = (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
              *)((longlong)&p_Var7->_Myfirst + 2);
    *local_198._Mypair._Myval2._Mylast = *(ushort *)ppvVar6;
    local_198._Mypair._Myval2._Mylast = local_198._Mypair._Myval2._Mylast + 1;
  } while (p_Var7 != (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
                      *)&local_798);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_720._Mypair._Myval2._Myfirst._0_4_ = 0xad1fadc3;
  local_720._Mypair._Myval2._Myfirst._4_4_ = 0xabaeac7b;
  local_720._Mypair._Myval2._Mylast._0_4_ = 0xa91faa66;
  local_720._Mypair._Myval2._Mylast._4_4_ = 0xa51fa7ae;
  local_720._Mypair._Myval2._Myend._0_4_ = 0xad1fadc3;
  local_720._Mypair._Myval2._Myend._4_4_ = 0xabaeac7b;
  local_700 = 0xa91faa66;
  local_6fc = 0xa51fa7ae;
  local_6f8 = 0xad1fadc3;
  local_6f4 = 0xabaeac7b;
  local_6f0 = 0xa91faa66;
  local_6ec = 0xa51fa7ae;
  local_6e8 = 0xad1fadc3;
  local_6e4 = 0xabaeac7b;
  local_6e0 = 0xa91faa66;
  local_6dc = 0xa51fa7ae;
  local_6d8 = 0xad1fadc3;
  local_6d4 = 0xabaeac7b;
  local_6d0 = 0xa91faa66;
  local_6cc = 0xa51fa7ae;
  local_6c8 = 0xad1fadc3;
  local_6c4 = 0xabaeac7b;
  local_6c0 = 0xa91faa66;
  local_6bc = 0xa51fa7ae;
  local_6b8 = 0xad1fadc3;
  local_6b4 = 0xabaeac7b;
  local_6b0 = 0xa91faa66;
  local_6ac = 0xa51fa7ae;
  local_6a8 = 0xad1fadc3;
  local_6a4 = 0xabaeac7b;
  local_6a0 = 0xa91faa66;
  local_69c = 0xa51fa7ae;
  local_698 = 0xa11f;
  local_690 = 0xa11f;
  local_688 = 0xa11f;
  local_680 = 0xa11f;
  local_678 = 0xa11f;
  local_670 = 0xa11f;
  local_668 = 0xa11f;
  local_660 = 0xa11f;
  local_178._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_178._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0xc0,0x40);
  p_Var7 = &local_720._Mypair._Myval2;
  local_178._Mypair._Myval2._Myend = local_178._Mypair._Myval2._Myfirst + 0x60;
  local_178._Mypair._Myval2._Mylast = local_178._Mypair._Myval2._Myfirst;
  do {
    ppvVar6 = &p_Var7->_Myfirst;
    p_Var7 = (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
              *)((longlong)&p_Var7->_Myfirst + 2);
    *local_178._Mypair._Myval2._Mylast = *(ushort *)ppvVar6;
    local_178._Mypair._Myval2._Mylast = local_178._Mypair._Myval2._Mylast + 1;
  } while (p_Var7 != (_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>_>
                      *)&local_658);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_9a8._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_860 + 8);
  local_998 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_9a8._Last = &local_810;
  local_858._Mypair._Myval1._0_4_ = 0xb4f6b4cd;
  local_858._Mypair._Myval1._4_4_ = 0xb51f;
  local_858._Mypair._Myval2._Myfirst._0_4_ = 0xb4f6b4cd;
  local_858._Mypair._Myval2._Myfirst._4_4_ = 0xb51f;
  local_858._Mypair._Myval2._Mylast._0_4_ = 0xb4f6b4cd;
  local_858._Mypair._Myval2._Mylast._4_4_ = 0xb51f;
  local_858._Mypair._Myval2._Myend._0_4_ = 0xb4f6b4cd;
  local_858._Mypair._Myval2._Myend._4_4_ = 0xb51f;
  local_838 = 0xb4f6b4cd;
  local_834 = 0xb51f;
  local_830 = 0xb4f6b4cd;
  local_82c = 0xb51f;
  local_828 = 0xb4f6b4cd;
  local_824 = 0xb51f;
  local_820 = 0xb4f6b4cd;
  local_81c = 0xb51f;
  local_818 = 0xb4f6b4cd;
  local_814 = 0xb51f;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_158,(initializer_list<unsigned_short> *)&local_9a8,&local_998);
  local_9a8._First = &local_1b8;
  local_9a8._Last = &local_138;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_118,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_9a8,&local_990);
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_968 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  if (*piVar8 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
             PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_9a8._First = &local_798;
  local_988 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)
              &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_9a8._Last = &local_720;
  local_798._Mypair._Myval1._0_4_ = 0x34f634cd;
  local_798._Mypair._Myval1._4_4_ = 0x3548351f;
  local_798._Mypair._Myval2._Myfirst._0_4_ = 0x359a3571;
  local_798._Mypair._Myval2._Myfirst._4_4_ = 0x35ec35c3;
  local_798._Mypair._Myval2._Mylast._0_4_ = 0x34f634cd;
  local_798._Mypair._Myval2._Mylast._4_4_ = 0x3548351f;
  local_798._Mypair._Myval2._Myend._0_4_ = 0x359a3571;
  local_798._Mypair._Myval2._Myend._4_4_ = 0x35ec35c3;
  local_778 = 0x34f634cd;
  local_774 = 0x3548351f;
  local_770 = 0x359a3571;
  local_76c = 0x35ec35c3;
  local_768 = 0x34f634cd;
  local_764 = 0x3548351f;
  local_760 = 0x359a3571;
  local_75c = 0x35ec35c3;
  local_758 = 0x34f634cd;
  local_754 = 0x3548351f;
  local_750 = 0x359a3571;
  local_74c = 0x35ec35c3;
  local_748 = 0x363d3614;
  local_744 = 0x368f3666;
  local_740 = 0x363d3614;
  local_73c = 0x368f3666;
  local_738 = 0x363d3614;
  local_734 = 0x368f3666;
  local_730 = 0x363d3614;
  local_72c = 0x368f3666;
  local_728 = 0x363d3614;
  local_724 = 0x368f3666;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)&local_b8,(initializer_list<unsigned_short> *)&local_9a8,&local_988);
  local_980 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_980);
  local_558._Mypair._Myval1._0_4_ = 0x36e136b8;
  local_558._Mypair._Myval1._4_4_ = 0x3733370a;
  local_558._Mypair._Myval2._Myfirst._0_4_ = 0x3785375c;
  local_558._Mypair._Myval2._Myfirst._4_4_ = 0x37d737ae;
  local_558._Mypair._Myval2._Mylast._0_4_ = 0x36e136b8;
  local_558._Mypair._Myval2._Mylast._4_4_ = 0x3733370a;
  local_558._Mypair._Myval2._Myend._0_4_ = 0x3785375c;
  local_558._Mypair._Myval2._Myend._4_4_ = 0x37d737ae;
  local_538 = 0x36e136b8;
  local_534 = 0x3733370a;
  local_530 = 0x3785375c;
  local_52c = 0x37d737ae;
  local_528 = 0x36e136b8;
  local_524 = 0x3733370a;
  local_520 = 0x3785375c;
  local_51c = 0x37d737ae;
  local_518 = 0x36e136b8;
  local_514 = 0x3733370a;
  local_510 = 0x3785375c;
  local_50c = 0x37d737ae;
  local_508 = 0x36e136b8;
  local_504 = 0x3733370a;
  local_500 = 0x3785375c;
  local_4fc = 0x37d737ae;
  local_4f8 = 0x36e136b8;
  local_4f4 = 0x3733370a;
  local_4f0 = 0x3785375c;
  local_4ec = 0x37d737ae;
  local_4e8 = 0x36e136b8;
  local_4e4 = 0x3733370a;
  local_4e0 = 0x3785375c;
  local_4dc = 0x37d737ae;
  local_4d8 = 0x36e136b8;
  local_4d4 = 0x3733370a;
  local_4d0 = 0x3785375c;
  local_4cc = 0x37d737ae;
  local_4c8 = 0x36e136b8;
  local_4c4 = 0x3733370a;
  local_4c0 = 0x3785375c;
  local_9a8._First = &local_558;
  local_4bc = 0x37d737ae;
  local_9a8._Last = &local_3d8;
  local_4b8 = 0x36e136b8;
  local_4b4 = 0x3733370a;
  local_4b0 = 0x3785375c;
  local_4ac = 0x37d737ae;
  local_4a8 = 0x36e136b8;
  local_4a4 = 0x3733370a;
  local_4a0 = 0x3785375c;
  local_49c = 0x37d737ae;
  local_498 = 0x38143800;
  local_494 = 0x383d3829;
  local_490 = 0x38663852;
  local_488 = 0x38143800;
  local_484 = 0x383d3829;
  local_480 = 0x38663852;
  local_478 = 0x38143800;
  local_474 = 0x383d3829;
  local_470 = 0x38663852;
  local_468 = 0x38143800;
  local_464 = 0x383d3829;
  local_460 = 0x38663852;
  local_458 = 0x38143800;
  local_454 = 0x383d3829;
  local_450 = 0x38663852;
  local_448 = 0x38143800;
  local_444 = 0x383d3829;
  local_440 = 0x38663852;
  local_438 = 0x38143800;
  local_434 = 0x383d3829;
  local_430 = 0x38663852;
  local_428 = 0x38143800;
  local_424 = 0x383d3829;
  local_420 = 0x38663852;
  local_418 = 0x38143800;
  local_414 = 0x383d3829;
  local_410 = 0x38663852;
  local_408 = 0x38143800;
  local_404 = 0x383d3829;
  local_400 = 0x38663852;
  local_3f8 = 0x38143800;
  local_3f4 = 0x383d3829;
  local_3f0 = 0x38663852;
  local_3e8 = 0x38143800;
  local_3e4 = 0x383d3829;
  local_3e0 = 0x38663852;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_98,(initializer_list<unsigned_short> *)&local_9a8,pPVar3);
  local_978 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_978);
  local_3d8._Mypair._Myval1._0_4_ = 0x388f387b;
  local_3d8._Mypair._Myval1._4_4_ = 0x38b838a4;
  local_3d8._Mypair._Myval2._Myfirst._0_4_ = 0x38e138cd;
  local_3d8._Mypair._Myval2._Myfirst._4_4_ = 0x390a38f6;
  local_3d8._Mypair._Myval2._Mylast._0_4_ = 0x388f387b;
  local_3d8._Mypair._Myval2._Mylast._4_4_ = 0x38b838a4;
  local_3d8._Mypair._Myval2._Myend._0_4_ = 0x38e138cd;
  local_3d8._Mypair._Myval2._Myend._4_4_ = 0x390a38f6;
  local_3b8 = 0x388f387b;
  local_3b4 = 0x38b838a4;
  local_3b0 = 0x38e138cd;
  local_3ac = 0x390a38f6;
  local_3a8 = 0x388f387b;
  local_3a4 = 0x38b838a4;
  local_3a0 = 0x38e138cd;
  local_39c = 0x390a38f6;
  local_398 = 0x388f387b;
  local_394 = 0x38b838a4;
  local_390 = 0x38e138cd;
  local_38c = 0x390a38f6;
  local_388 = 0x388f387b;
  local_384 = 0x38b838a4;
  local_380 = 0x38e138cd;
  local_37c = 0x390a38f6;
  local_378 = 0x388f387b;
  local_374 = 0x38b838a4;
  local_370 = 0x38e138cd;
  local_36c = 0x390a38f6;
  local_368 = 0x388f387b;
  local_364 = 0x38b838a4;
  local_360 = 0x38e138cd;
  local_35c = 0x390a38f6;
  local_358 = 0x388f387b;
  local_354 = 0x38b838a4;
  local_350 = 0x38e138cd;
  local_34c = 0x390a38f6;
  local_348 = 0x388f387b;
  local_344 = 0x38b838a4;
  local_340 = 0x38e138cd;
  local_33c = 0x390a38f6;
  local_338 = 0x388f387b;
  local_334 = 0x38b838a4;
  local_330 = 0x38e138cd;
  local_32c = 0x390a38f6;
  local_328 = 0x388f387b;
  local_324 = 0x38b838a4;
  local_320 = 0x38e138cd;
  local_31c = 0x390a38f6;
  local_318 = 0x388f387b;
  local_314 = 0x38b838a4;
  local_310 = 0x38e138cd;
  local_30c = 0x390a38f6;
  local_308 = 0x388f387b;
  local_304 = 0x38b838a4;
  local_300 = 0x38e138cd;
  local_2fc = 0x390a38f6;
  local_2f8 = 0x3933391f;
  local_2f4 = 0x395c3948;
  local_2f0 = 0x39853971;
  local_2ec = 0x39ae399a;
  local_2e8 = 0x3933391f;
  local_2e4 = 0x395c3948;
  local_2e0 = 0x39853971;
  local_2dc = 0x39ae399a;
  local_2d8 = 0x3933391f;
  local_2d4 = 0x395c3948;
  local_2d0 = 0x39853971;
  local_2cc = 0x39ae399a;
  local_2c8 = 0x3933391f;
  local_2c4 = 0x395c3948;
  local_2c0 = 0x39853971;
  local_2bc = 0x39ae399a;
  local_2b8 = 0x3933391f;
  local_2b4 = 0x395c3948;
  local_2b0 = 0x39853971;
  local_2ac = 0x39ae399a;
  local_2a8 = 0x3933391f;
  local_2a4 = 0x395c3948;
  local_2a0 = 0x39853971;
  local_29c = 0x39ae399a;
  local_298 = 0x3933391f;
  local_294 = 0x395c3948;
  local_290 = 0x39853971;
  local_28c = 0x39ae399a;
  local_288 = 0x3933391f;
  local_284 = 0x395c3948;
  local_280 = 0x39853971;
  local_27c = 0x39ae399a;
  local_278 = 0x3933391f;
  local_274 = 0x395c3948;
  local_270 = 0x39853971;
  local_26c = 0x39ae399a;
  local_268 = 0x3933391f;
  local_264 = 0x395c3948;
  local_260 = 0x39853971;
  local_25c = 0x39ae399a;
  local_258 = 0x3933391f;
  local_254 = 0x395c3948;
  local_250 = 0x39853971;
  local_24c = 0x39ae399a;
  local_248 = 0x3933391f;
  local_244 = 0x395c3948;
  local_240 = 0x39853971;
  local_23c = 0x39ae399a;
  local_238 = 0x3933391f;
  local_234 = 0x395c3948;
  local_9a8._First = &local_3d8;
  local_230 = 0x39853971;
  local_9a8._Last = &local_218;
  local_22c = 0x39ae399a;
  local_228 = 0x3933391f;
  local_224 = 0x395c3948;
  local_220 = 0x39853971;
  local_21c = 0x39ae399a;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_78,(initializer_list<unsigned_short> *)&local_9a8,pPVar3);
  local_970 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_970);
  local_658._Mypair._Myval1._0_4_ = 0xa51fa11f;
  local_658._Mypair._Myval1._4_4_ = 0xa91fa7ae;
  local_658._Mypair._Myval2._Myfirst._0_4_ = 0xabaeaa66;
  local_658._Mypair._Myval2._Myfirst._4_4_ = 0;
  local_658._Mypair._Myval2._Mylast._0_4_ = 0xa51fa11f;
  local_658._Mypair._Myval2._Mylast._4_4_ = 0xa91fa7ae;
  local_658._Mypair._Myval2._Myend._0_4_ = 0xabaeaa66;
  local_658._Mypair._Myval2._Myend._4_4_ = 0;
  local_638 = 0xa51fa11f;
  local_634 = 0xa91fa7ae;
  local_630 = 0xabaeaa66;
  local_62c = 0;
  local_628 = 0xa51fa11f;
  local_624 = 0xa91fa7ae;
  local_620 = 0xabaeaa66;
  local_61c = 0;
  local_618 = 0xa51fa11f;
  local_614 = 0xa91fa7ae;
  local_610 = 0xabaeaa66;
  local_60c = 0;
  local_608 = 0xa51fa11f;
  local_604 = 0xa91fa7ae;
  local_600 = 0xabaeaa66;
  local_5fc = 0;
  local_5f8 = 0xa51fa11f;
  local_5f4 = 0xa91fa7ae;
  local_5f0 = 0xabaeaa66;
  local_5ec = 0;
  local_5e8 = 0xa51fa11f;
  local_5e4 = 0xa91fa7ae;
  local_5e0 = 0xabaeaa66;
  local_5dc = 0;
  local_5d8 = 0xa51fa11f;
  local_5d4 = 0xa91fa7ae;
  local_5d0 = 0xabaeaa66;
  local_5cc = 0;
  local_5c8 = 0xa51fa11f;
  local_5c4 = 0xa91fa7ae;
  local_5c0 = 0xabaeaa66;
  local_5bc = 0;
  local_5b8 = 0xa51fa11f;
  local_5b4 = 0xa91fa7ae;
  local_5b0 = 0xabaeaa66;
  local_5ac = 0;
  local_5a8 = 0xa51fa11f;
  local_5a4 = 0xa91fa7ae;
  local_5a0 = 0xabaeaa66;
  local_59c = 0;
  local_598 = 0xa51fa11f;
  local_594 = 0xa91fa7ae;
  local_590 = 0xabaeaa66;
  local_58c = 0;
  local_588 = 0xa51fa11f;
  local_584 = 0xa91fa7ae;
  local_580 = 0xabaeaa66;
  local_57c = 0;
  local_578 = 0xa51fa11f;
  local_574 = 0xa91fa7ae;
  local_570 = 0xabaeaa66;
  local_56c = 0;
  local_568 = 0xa51fa11f;
  local_564 = 0xa91fa7ae;
  local_560 = 0xabaeaa66;
  local_55c = 0;
  local_9a8._First = &local_658;
  local_9a8._Last = &local_558;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_58,(initializer_list<unsigned_short> *)&local_9a8,pPVar3);
  local_9a8._First = &local_b8;
  local_9a8._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_38;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_f8,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_9a8,&local_968);
  local_960 = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
               )0x0;
  pPVar4 = pma::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                     (&local_960);
  local_958 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_958);
  local_8d8._16_8_ =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
       0x40003c00;
  local_9a8._Last = &local_8b0;
  local_8c0 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
               *)0x40003c00;
  local_8b8 = 0x40003c00;
  local_9a8._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_8d8 + 0x10);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
              *)&local_938,(initializer_list<unsigned_short> *)&local_9a8,pPVar3);
  local_950 = (PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>)0x0;
  pPVar3 = pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>::
           PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>(&local_950);
  local_9a8._First =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)local_8d8;
  local_8d8._0_4_ = 0x44004200;
  local_8d8._4_4_ = 0x46004500;
  local_8d8._8_4_ = 0x44004200;
  local_8d8._12_4_ = 0x46004500;
  local_9a8._Last =
       (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)(local_8d8 + 0x10);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
            (&local_918,(initializer_list<unsigned_short> *)&local_9a8,pPVar3);
  local_9a8._First = &local_938;
  local_9a8._Last = &local_8f8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_d8,
             (initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
              *)&local_9a8,pPVar4);
  local_9a8._First = &local_138;
  local_9a8._Last = &local_b8;
  std::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&mlbNetWeightsHalfFloat,&local_9a8,local_948);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_d8);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_f8);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_118);
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::_Tidy(&local_138);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_918);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_938);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_58);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_78);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_98);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_b8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_158);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_178);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_198);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_1b8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_1d8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy(&local_1f8);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>::
  _Tidy((vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_> *)
        &local_218);
  atexit(_dynamic_atexit_destructor_for__mlbNetWeightsHalfFloat__);
  return;
}

// `dynamic_initializer_for_'neuralNetworkIndicesPerLOD'' @ 141370f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
rltests::ml::block4::unoptimized::_dynamic_initializer_for__neuralNetworkIndicesPerLOD__(void)

{
  undefined2 uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 auStack_f8 [32];
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_d8 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_c8;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2 [6];
  undefined4 local_ac;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_a8;
  DefaultMemoryResource *local_88;
  undefined2 *local_80;
  undefined2 *local_78;
  undefined2 *puStack_70;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_68;
  longlong local_60;
  undefined8 local_58;
  longlong lStack_50;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_48;
  longlong local_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_d8[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr;
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_b2._2_4_ = 0x10000;
  local_ac = 0x30002;
  local_a8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_a8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  puVar2 = (ushort *)(local_b2 + 2);
  local_a8._Mypair._Myval2._Myend = local_a8._Mypair._Myval2._Myfirst + 4;
  local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Myfirst;
  do {
    *local_a8._Mypair._Myval2._Mylast = *puVar2;
    puVar2 = puVar2 + 1;
    local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Mylast + 1;
  } while ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)puVar2 != &local_a8);
  if (*piVar4 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_b8 = 0x10000;
  local_b4 = 2;
  local_88 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_80 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,6,8);
  puVar3 = &local_b8;
  puStack_70 = local_80 + 3;
  local_78 = local_80;
  do {
    uVar1 = *(undefined2 *)puVar3;
    puVar3 = (undefined4 *)((longlong)puVar3 + 2);
    *local_78 = uVar1;
    local_78 = local_78 + 1;
  } while (puVar3 != (undefined4 *)local_b2);
  local_68 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_68);
  local_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(&local_48);
  local_c8._First = &local_a8;
  local_40 = 0;
  local_c8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_28;
  local_38 = 0;
  lStack_30 = 0;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&neuralNetworkIndicesPerLOD,&local_c8,local_d8);
  if (local_40 != 0) {
    (**(code **)(*(longlong *)local_48 + 0x10))(local_48,local_40,(lStack_30 - local_40 >> 1) * 2,8)
    ;
    local_40 = 0;
    local_38 = 0;
    lStack_30 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(longlong *)local_68 + 0x10))(local_68,local_60,(lStack_50 - local_60 >> 1) * 2,8)
    ;
    local_60 = 0;
    local_58 = 0;
    lStack_50 = 0;
  }
  if (local_80 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_88 + 0x10))
              (local_88,local_80,((longlong)puStack_70 - (longlong)local_80 >> 1) * 2,8);
    local_80 = (undefined2 *)0x0;
    local_78 = (undefined2 *)0x0;
    puStack_70 = (undefined2 *)0x0;
  }
  if (local_a8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_a8._Mypair._Myval1 + 0x10))
              (local_a8._Mypair._Myval1,local_a8._Mypair._Myval2._Myfirst,
               ((longlong)local_a8._Mypair._Myval2._Myend -
                (longlong)local_a8._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  atexit(_dynamic_atexit_destructor_for__neuralNetworkIndicesPerLOD__);
  return;
}

// `dynamic_initializer_for_'values'' @ 141371290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::ml::block4::input::_dynamic_initializer_for__values__(void)

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
  local_48 = ___xmm_3ecccccd3e99999a3e4ccccd3dcccccd;
  uStack_40 = _UNK_15288f938;
  local_18 = 0x3e051eb8;
  local_28 = ___xmm_3df5c28f3de147ae000000003f666666;
  uStack_20 = _UNK_1528923d8;
  values._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  values._Mypair._Myval2._Myend = (float *)0x0;
  values._Mypair._Myval2._Myfirst = (float *)0x0;
  values._Mypair._Myval2._Mylast = (float *)0x0;
  local_38 = ___xmm_3f4ccccd3f3333333f19999a00000000;
  uStack_30 = _UNK_15288fa18;
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

// `dynamic_initializer_for_'valuesPerLOD'' @ 1413713d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rltests::ml::block4::output::_dynamic_initializer_for__valuesPerLOD__(void)

{
  longlong lVar1;
  _Compressed_pair<pma::PolyAllocator<float,8,pma::DefaultMemoryResource>,std::_Vector_val<std::_Simple_types<float>_>,0>
  *p_Var2;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar3;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auStack_1d8 [32];
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_1b8 [2];
  initializer_list<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
  local_1a8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_198;
  DefaultMemoryResource *local_178;
  undefined4 *local_170;
  undefined4 *local_168;
  undefined4 *puStack_160;
  DefaultMemoryResource *local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined4 *puStack_140;
  DefaultMemoryResource *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined4 *puStack_120;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_38;
  
  local_38._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       (__security_cookie.value ^ (ulonglong)auStack_1d8);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
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
  local_1b8[0] = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if ((*(int *)(lVar1 + 0x9d4c) <
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
  pfVar7 = _UNK_152892ac8;
  pfVar6 = ___xmm_c26eb918c231d79fc1e9ec4bc16052b1;
  pfVar5 = _UNK_152892998;
  PVar4 = ___xmm_4101234140fae78040f3888040008523;
  local_118._Mypair._Myval1 = ___xmm_4101234140fae78040f3888040008523;
  local_118._Mypair._Myval2._Myfirst = _UNK_152892998;
  local_e8 = 0x413448a0;
  local_118._Mypair._Myval2._Mylast = ___xmm_c26eb918c231d79fc1e9ec4bc16052b1;
  local_118._Mypair._Myval2._Myend = _UNK_152892ac8;
  local_e4 = 0x4153dc45;
  local_f8 = ___xmm_4114b4fb40ea42acc2b43e05c295cd48;
  uStack_f0 = _UNK_1528929a8;
  local_198._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_198._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x38,8);
  pvVar3 = &local_118;
  local_198._Mypair._Myval2._Myend = local_198._Mypair._Myval2._Myfirst + 0xe;
  local_198._Mypair._Myval2._Mylast = local_198._Mypair._Myval2._Myfirst;
  do {
    p_Var2 = &pvVar3->_Mypair;
    pvVar3 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
             &(pvVar3->_Mypair)._Myval1.field_0x4;
    *local_198._Mypair._Myval2._Mylast = *(float *)&p_Var2->_Myval1;
    local_198._Mypair._Myval2._Mylast = local_198._Mypair._Myval2._Mylast + 1;
  } while (pvVar3 != &local_e0);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     PVar4 = ___xmm_4101234140fae78040f3888040008523, pfVar5 = _UNK_152892998,
     pfVar6 = ___xmm_c26eb918c231d79fc1e9ec4bc16052b1, pfVar7 = _UNK_152892ac8,
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    PVar4 = ___xmm_4101234140fae78040f3888040008523;
    pfVar5 = _UNK_152892998;
    pfVar6 = ___xmm_c26eb918c231d79fc1e9ec4bc16052b1;
    pfVar7 = _UNK_152892ac8;
  }
  local_b0 = 0;
  local_178 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_c0 = ___xmm_0000000000000000c2b43e05c295cd48;
  uStack_b8 = _UNK_152892358;
  local_e0._Mypair._Myval1 = PVar4;
  local_e0._Mypair._Myval2._Myfirst = pfVar5;
  local_e0._Mypair._Myval2._Mylast = pfVar6;
  local_e0._Mypair._Myval2._Myend = pfVar7;
  local_170 = (undefined4 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x38,8);
  pvVar3 = &local_e0;
  puStack_160 = local_170 + 0xe;
  local_168 = local_170;
  do {
    p_Var2 = &pvVar3->_Mypair;
    pvVar3 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
             &(pvVar3->_Mypair)._Myval1.field_0x4;
    *local_168 = *(undefined4 *)&p_Var2->_Myval1;
    local_168 = local_168 + 1;
  } while (pvVar3 != &local_a8);
  if ((*(int *)(lVar1 + 0x9d4c) <
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
  local_78 = 0;
  local_158 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_a8._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  local_a8._Mypair._Myval2._Myfirst = (float *)0x0;
  local_a8._Mypair._Myval2._Mylast = (float *)0x0;
  local_a8._Mypair._Myval2._Myend = (float *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_150 = (undefined4 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x38,8);
  pvVar3 = &local_a8;
  puStack_140 = local_150 + 0xe;
  local_148 = local_150;
  do {
    *local_148 = *(undefined4 *)&(pvVar3->_Mypair)._Myval1;
    pvVar3 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
             &(pvVar3->_Mypair)._Myval1.field_0x4;
    local_148 = local_148 + 1;
  } while (pvVar3 != &local_70);
  if ((*(int *)(lVar1 + 0x9d4c) <
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
  local_40 = 0;
  local_138 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  local_70._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)0x0;
  local_70._Mypair._Myval2._Myfirst = (float *)0x0;
  local_70._Mypair._Myval2._Mylast = (float *)0x0;
  local_70._Mypair._Myval2._Myend = (float *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  local_130 = (undefined4 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x38,8);
  pvVar3 = &local_70;
  puStack_120 = local_130 + 0xe;
  local_128 = local_130;
  do {
    p_Var2 = &pvVar3->_Mypair;
    pvVar3 = (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)
             &(pvVar3->_Mypair)._Myval1.field_0x4;
    *local_128 = *(undefined4 *)&p_Var2->_Myval1;
    local_128 = local_128 + 1;
  } while (pvVar3 != &local_38);
  local_1a8._First = &local_198;
  local_1a8._Last = &local_118;
  std::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&valuesPerLOD,&local_1a8,local_1b8);
  if (local_130 != (undefined4 *)0x0) {
    (**(code **)((longlong)*local_138 + 0x10))
              (local_138,local_130,(longlong)puStack_120 - (longlong)local_130 & 0xfffffffffffffffc,
               8);
    local_130 = (undefined4 *)0x0;
    local_128 = (undefined4 *)0x0;
    puStack_120 = (undefined4 *)0x0;
  }
  if (local_150 != (undefined4 *)0x0) {
    (**(code **)((longlong)*local_158 + 0x10))
              (local_158,local_150,(longlong)puStack_140 - (longlong)local_150 & 0xfffffffffffffffc,
               8);
    local_150 = (undefined4 *)0x0;
    local_148 = (undefined4 *)0x0;
    puStack_140 = (undefined4 *)0x0;
  }
  if (local_170 != (undefined4 *)0x0) {
    (**(code **)((longlong)*local_178 + 0x10))
              (local_178,local_170,(longlong)puStack_160 - (longlong)local_170 & 0xfffffffffffffffc,
               8);
    local_170 = (undefined4 *)0x0;
    local_168 = (undefined4 *)0x0;
    puStack_160 = (undefined4 *)0x0;
  }
  if (local_198._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_198._Mypair._Myval1 + 0x10))
              (local_198._Mypair._Myval1,local_198._Mypair._Myval2._Myfirst,
               (longlong)local_198._Mypair._Myval2._Myend -
               (longlong)local_198._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
  }
  atexit(_dynamic_atexit_destructor_for__valuesPerLOD__);
  return;
}

// _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c593030

void __cdecl
std::
_Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *param_1,
          vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_2,PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   *param_3)

{
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar1;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> **ppvVar2;
  
  if (param_1 != param_2) {
    ppvVar2 = &(param_1->_Mypair)._Myval2._Myend;
    do {
      if (((_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>
            *)(ppvVar2 + -2))->_Myfirst !=
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0) {
        _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  (((_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>
                     *)(ppvVar2 + -2))->_Myfirst,ppvVar2[-1],
                   (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                    *)(ppvVar2 + -3));
        (**(code **)(*(longlong *)ppvVar2[-3] + 0x10))
                  (ppvVar2[-3],
                   ((_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>
                     *)(ppvVar2 + -2))->_Myfirst,
                   (longlong)*ppvVar2 -
                   (longlong)
                   ((_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>
                     *)(ppvVar2 + -2))->_Myfirst & 0xffffffffffffffe0,8);
        ((_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>
          *)(ppvVar2 + -2))->_Myfirst =
             (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
        ppvVar2[-1] = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
        *ppvVar2 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
      }
      pvVar1 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                *)(ppvVar2 + 1);
      ppvVar2 = ppvVar2 + 4;
    } while (pvVar1 != param_2);
  }
  return;
}

// _Destroy_range<pma::PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c5930c0

void __cdecl
std::
_Destroy_range<pma::PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
           *param_1,
          vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
          *param_2,PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   *param_3)

{
  vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
  *pvVar1;
  ActivationFunction *pAVar2;
  ActivationFunction **ppAVar3;
  
  if (param_1 != param_2) {
    ppAVar3 = &(param_1->_Mypair)._Myval2._Myend;
    do {
      pAVar2 = ((_Vector_val<std::_Simple_types<dna::ActivationFunction>_> *)(ppAVar3 + -2))->
               _Myfirst;
      if (pAVar2 != (ActivationFunction *)0x0) {
        (**(code **)(*(longlong *)ppAVar3[-3] + 0x10))
                  (ppAVar3[-3],pAVar2,(longlong)*ppAVar3 - (longlong)pAVar2 & 0xfffffffffffffffc,8);
        ((_Vector_val<std::_Simple_types<dna::ActivationFunction>_> *)(ppAVar3 + -2))->_Myfirst =
             (ActivationFunction *)0x0;
        ppAVar3[-1] = (ActivationFunction *)0x0;
        *ppAVar3 = (ActivationFunction *)0x0;
      }
      pvVar1 = (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
                *)(ppAVar3 + 1);
      ppAVar3 = ppAVar3 + 4;
    } while (pvVar1 != param_2);
  }
  return;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c593140

PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
* __cdecl std::
          _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                    (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                     *param_1)

{
  return (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c593150

PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
* __cdecl std::
          _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                    (scoped_allocator_adaptor<pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                     *param_1)

{
  return (PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *)param_1;
}

// _Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>_> @ 14c593160

PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource> * __cdecl
std::
_Scoped_outermost<std::scoped_allocator_adaptor<pma::impl::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>_>
          (scoped_allocator_adaptor<pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
           *param_1)

{
  return (PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource> *)param_1;
}

// PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource> @ 14c593170

PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
* __thiscall
pma::
PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
          (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *this = (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
           )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  return this;
}

// vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> @ 14c5931f0

vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> * __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1,
          PolyAllocator<float,64,pma::AlignedMemoryResource> *param_2)

{
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  
  (this->_Mypair)._Myval1 = *param_2;
  (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (this->_Mypair)._Myval2._Mylast = (float *)0x0;
  (this->_Mypair)._Myval2._Myend = (float *)0x0;
  uVar5 = (longlong)(param_1->_Mypair)._Myval2._Mylast -
          (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 2;
  if (uVar5 != 0) {
    if (0x3fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar1 = (this->_Mypair)._Myval1;
    pfVar2 = (float *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,uVar5 * 4,0x40);
    (this->_Mypair)._Myval2._Myfirst = pfVar2;
    (this->_Mypair)._Myval2._Mylast = pfVar2;
    (this->_Mypair)._Myval2._Myend = pfVar2 + uVar5;
    pfVar2 = (param_1->_Mypair)._Myval2._Mylast;
    pfVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (pfVar3 = (param_1->_Mypair)._Myval2._Myfirst; pfVar3 != pfVar2; pfVar3 = pfVar3 + 1) {
      *pfVar4 = *pfVar3;
      pfVar4 = pfVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pfVar4;
  }
  return this;
}

// vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c5932c0

vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this,initializer_list<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
                 *param_1,
          PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
          *param_2)

{
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar1;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar3;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar4;
  ulonglong uVar5;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_res8;
  
  pvVar1 = param_1->_Last;
  pvVar4 = param_1->_First;
  (this->_Mypair)._Myval1 = *param_2;
  uVar5 = (longlong)pvVar1 - (longlong)pvVar4 >> 5;
  (this->_Mypair)._Myval2._Myfirst =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  (this->_Mypair)._Myval2._Mylast =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  (this->_Mypair)._Myval2._Myend =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar2 = (this->_Mypair)._Myval1;
    pvVar3 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
             (**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar5 * 0x20,8);
    (this->_Mypair)._Myval2._Myfirst = pvVar3;
    (this->_Mypair)._Myval2._Mylast = pvVar3;
    (this->_Mypair)._Myval2._Myend = pvVar3 + uVar5;
    pvVar3 = (this->_Mypair)._Myval2._Myfirst;
    for (; pvVar4 != pvVar1; pvVar4 = pvVar4 + 1) {
      local_res8 = (this->_Mypair)._Myval1;
      vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
      vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
                (pvVar3,pvVar4,(PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_res8);
      pvVar3 = pvVar3 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pvVar3;
  }
  return this;
}

// vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c593390

vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __thiscall
std::
vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this,initializer_list<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
                 *param_1,
          PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
          *param_2)

{
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar1;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar2;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar3;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar4;
  ulonglong uVar5;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar6;
  vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar7;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  *pPVar8;
  PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_res8;
  
  PVar4 = *param_2;
  pvVar1 = param_1->_Last;
  pvVar7 = param_1->_First;
  (this->_Mypair)._Myval1 = PVar4;
  uVar5 = (longlong)pvVar1 - (longlong)pvVar7 >> 5;
  (this->_Mypair)._Myval2._Myfirst =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)0x0;
  (this->_Mypair)._Myval2._Mylast =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)0x0;
  (this->_Mypair)._Myval2._Myend =
       (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *)0x0;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    pvVar3 = (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              *)(**(code **)(*(longlong *)PVar4 + 8))(PVar4,uVar5 * 0x20,8);
    (this->_Mypair)._Myval2._Myfirst = pvVar3;
    (this->_Mypair)._Myval2._Mylast = pvVar3;
    (this->_Mypair)._Myval2._Myend = pvVar3 + uVar5;
    pPVar8 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)(this->_Mypair)._Myval2._Myfirst;
    for (; pvVar7 != pvVar1; pvVar7 = pvVar7 + 1) {
      PVar4 = (this->_Mypair)._Myval1;
      *pPVar8 = PVar4;
      pPVar8[1] = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )0x0;
      pPVar8[2] = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )0x0;
      pPVar8[3] = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )0x0;
      uVar5 = (longlong)(pvVar7->_Mypair)._Myval2._Mylast -
              (longlong)(pvVar7->_Mypair)._Myval2._Myfirst >> 5;
      if (uVar5 != 0) {
        if (0x7ffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          ::_Xlength();
        }
        PVar4 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                 )(**(code **)(*(longlong *)PVar4 + 8))(PVar4,uVar5 * 0x20,8);
        pPVar8[1] = PVar4;
        pPVar8[2] = PVar4;
        pPVar8[3] = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                     )(uVar5 * 0x20 + (longlong)PVar4);
        pvVar2 = (pvVar7->_Mypair)._Myval2._Mylast;
        for (pvVar6 = (pvVar7->_Mypair)._Myval2._Myfirst; pvVar6 != pvVar2; pvVar6 = pvVar6 + 1) {
          local_res8 = *pPVar8;
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>
                    ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)PVar4
                     ,pvVar6,(PolyAllocator<float,64,pma::AlignedMemoryResource> *)&local_res8);
          PVar4 = (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                   )((longlong)PVar4 + 0x20);
        }
        pPVar8[2] = PVar4;
      }
      pPVar8 = pPVar8 + 4;
    }
    (this->_Mypair)._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)pPVar8;
  }
  return this;
}

// ~vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_> @ 14c593510

void __thiscall
std::
vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::
~vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *this)

{
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar1;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  
  pvVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pvVar1 != (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0) {
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (pvVar1,(this->_Mypair)._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)this);
    PVar2 = (this->_Mypair)._Myval1;
    pvVar1 = (this->_Mypair)._Myval2._Myfirst;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pvVar1,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pvVar1 & 0xffffffffffffffe0,8);
    (this->_Mypair)._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  }
  return;
}

// ~vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_> @ 14c593570

void __thiscall
std::
vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
::
~vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
          (void *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)this + 0x10))
              (*(longlong **)this,lVar1,
               *(longlong *)((longlong)this + 0x18) - lVar1 & 0xfffffffffffffffc,8);
    *(undefined8 *)((longlong)this + 8) = 0;
    *(undefined8 *)((longlong)this + 0x10) = 0;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  return;
}

// ~CanonicalReader @ 14c5935c0

void __thiscall rltests::ml::block4::CanonicalReader::~CanonicalReader(CanonicalReader *this)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7CanonicalReader_block4_ml_rltests__6B_;
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

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14c593650

/* [thunk]:public: virtual void * __ptr64 __cdecl rltests::ml::block4::CanonicalReader::`vector
   deleting destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
rltests::ml::block4::CanonicalReader::_vector_deleting_destructor__vtordisp_4294967292_0__
          (CanonicalReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14c593670

void * __thiscall
rltests::ml::block4::CanonicalReader::_scalar_deleting_destructor_
          (CanonicalReader *this,uint param_1)

{
  int iVar1;
  
  *(undefined ***)&this[-1].field_0x20 = &___7CanonicalReader_block4_ml_rltests__6B_;
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
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)&this->field_0x20);
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0x78);
  }
  return &this[-1].field_0x20;
}

// _Tidy @ 14c593750

void __thiscall
std::
vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::_Tidy(vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
        *this)

{
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar1;
  PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
  PVar2;
  
  pvVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pvVar1 != (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0) {
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (pvVar1,(this->_Mypair)._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)this);
    PVar2 = (this->_Mypair)._Myval1;
    pvVar1 = (this->_Mypair)._Myval2._Myfirst;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,pvVar1,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pvVar1 & 0xffffffffffffffe0,8);
    (this->_Mypair)._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  }
  return;
}

// _Xlength @ 14c5937b0

void __cdecl
std::
vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14c5937d0

void __cdecl
std::
vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// biases @ 14c5937f0

vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __cdecl rltests::ml::block4::optimized::Values<unsigned_short>::biases(void)

{
  return &mlbNetBiasesHalfFloat;
}

// biases @ 14c593800

vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __cdecl rltests::ml::block4::optimized::Values<float>::biases(void)

{
  return &mlbNetBiasesFloat;
}

// getLODCount`vtordisp{4294967292,0}' @ 14c593810

/* [thunk]:public: virtual unsigned short __cdecl
   rltests::ml::block4::CanonicalReader::getLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
rltests::ml::block4::CanonicalReader::getLODCount_vtordisp_4294967292_0__(CanonicalReader *this)

{
  ushort uVar1;
  
  uVar1 = getLODCount((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getLODCount @ 14c593830

ushort __thiscall rltests::ml::block4::CanonicalReader::getLODCount(CanonicalReader *this)

{
  return 4;
}

// getNeuralNetworkCount @ 14c593840

ushort __thiscall rltests::ml::block4::CanonicalReader::getNeuralNetworkCount(CanonicalReader *this)

{
  return 4;
}

// getNeuralNetworkIndicesForLOD @ 14c593850

ArrayView<unsigned_short_const_> * __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkIndicesForLOD
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::neuralNetworkIndicesPerLOD._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2
           ._Myfirst;
  puVar2 = unoptimized::neuralNetworkIndicesPerLOD._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2
           ._Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getNeuralNetworkInputIndices @ 14c593880

ArrayView<unsigned_short_const_> * __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkInputIndices
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::mlbNetInputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Myfirst;
  puVar2 = unoptimized::mlbNetInputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Mylast
  ;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerActivationFunction @ 14c5938b0

ActivationFunction __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkLayerActivationFunction
          (CanonicalReader *this,ushort param_1,ushort param_2)

{
  return unoptimized::mlbNetActivationFunctions._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
         _Myfirst[param_2];
}

// getNeuralNetworkLayerActivationFunctionParameters @ 14c5938e0

ArrayView<float_const_> * __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkLayerActivationFunctionParameters
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar1;
  float *pfVar2;
  float *pfVar3;
  
  pvVar1 = unoptimized::mlbNetActivationFunctionParameters._Mypair._Myval2._Myfirst[param_1]._Mypair
           ._Myval2._Myfirst;
  pfVar2 = pvVar1[param_2]._Mypair._Myval2._Myfirst;
  pfVar3 = pvVar1[param_2]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = pfVar2;
  __return_storage_ptr__->sz = (longlong)pfVar3 - (longlong)pfVar2 >> 2;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerBiases @ 14c593920

ArrayView<float_const_> * __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkLayerBiases
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar1;
  float *pfVar2;
  float *pfVar3;
  
  pvVar1 = unoptimized::mlbNetBiases._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst;
  pfVar2 = pvVar1[param_2]._Mypair._Myval2._Myfirst;
  pfVar3 = pvVar1[param_2]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = pfVar2;
  __return_storage_ptr__->sz = (longlong)pfVar3 - (longlong)pfVar2 >> 2;
  return __return_storage_ptr__;
}

// getNeuralNetworkLayerCount @ 14c593960

ushort __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkLayerCount
          (CanonicalReader *this,ushort param_1)

{
  return (ushort)((longlong)
                  (ulonglong)
                  (uint)(*(int *)&unoptimized::mlbNetWeights._Mypair._Myval2._Myfirst[param_1].
                                  _Mypair._Myval2._Mylast -
                        *(int *)&unoptimized::mlbNetWeights._Mypair._Myval2._Myfirst[param_1].
                                 _Mypair._Myval2._Myfirst) >> 5);
}

// getNeuralNetworkLayerWeights @ 14c593990

ArrayView<float_const_> * __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkLayerWeights
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1,
          ushort param_2)

{
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar1;
  float *pfVar2;
  float *pfVar3;
  
  pvVar1 = unoptimized::mlbNetWeights._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst;
  pfVar2 = pvVar1[param_2]._Mypair._Myval2._Myfirst;
  pfVar3 = pvVar1[param_2]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = pfVar2;
  __return_storage_ptr__->sz = (longlong)pfVar3 - (longlong)pfVar2 >> 2;
  return __return_storage_ptr__;
}

// getNeuralNetworkOutputIndices @ 14c5939d0

ArrayView<unsigned_short_const_> * __thiscall
rltests::ml::block4::CanonicalReader::getNeuralNetworkOutputIndices
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::mlbNetOutputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Myfirst;
  puVar2 = unoptimized::mlbNetOutputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2.
           _Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// weights @ 14c593a00

vector<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __cdecl rltests::ml::block4::optimized::Values<unsigned_short>::weights(void)

{
  return &mlbNetWeightsHalfFloat;
}

// weights @ 14c593a10

vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
* __cdecl rltests::ml::block4::optimized::Values<float>::weights(void)

{
  return &mlbNetWeightsFloat;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451810

void __cdecl
`pma::impl::
PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451830

void __cdecl
`pma::impl::
PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451850

void __cdecl
`pma::impl::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>::
PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>'::__l2::
_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'lods'' @ 150451870

void __cdecl rltests::ml::block4::optimized::_dynamic_atexit_destructor_for__lods__(void)

{
  if (lods.indicesPerLOD._Mypair._Myval2._Myfirst !=
      (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (lods.indicesPerLOD._Mypair._Myval2._Myfirst,
               lods.indicesPerLOD._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&lods);
    (**(code **)(*(longlong *)lods.indicesPerLOD._Mypair._Myval1 + 0x10))
              (lods.indicesPerLOD._Mypair._Myval1,lods.indicesPerLOD._Mypair._Myval2._Myfirst,
               (longlong)lods.indicesPerLOD._Mypair._Myval2._Myend -
               (longlong)lods.indicesPerLOD._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    lods.indicesPerLOD._Mypair._Myval2._Myend =
         (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *)0x0;
    lods.indicesPerLOD._Mypair._Myval2._Myfirst =
         (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *)0x0;
    lods.indicesPerLOD._Mypair._Myval2._Mylast =
         (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetActivationFunctionParameters'' @ 1504518e0

void __cdecl
rltests::ml::block4::unoptimized::
_dynamic_atexit_destructor_for__mlbNetActivationFunctionParameters__(void)

{
  if (mlbNetActivationFunctionParameters._Mypair._Myval2._Myfirst !=
      (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetActivationFunctionParameters._Mypair._Myval2._Myfirst,
               mlbNetActivationFunctionParameters._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetActivationFunctionParameters);
    (**(code **)(*(longlong *)mlbNetActivationFunctionParameters._Mypair._Myval1 + 0x10))
              (mlbNetActivationFunctionParameters._Mypair._Myval1,
               mlbNetActivationFunctionParameters._Mypair._Myval2._Myfirst,
               (longlong)mlbNetActivationFunctionParameters._Mypair._Myval2._Myend -
               (longlong)mlbNetActivationFunctionParameters._Mypair._Myval2._Myfirst &
               0xffffffffffffffe0,8);
    mlbNetActivationFunctionParameters._Mypair._Myval2._Myend =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetActivationFunctionParameters._Mypair._Myval2._Myfirst =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetActivationFunctionParameters._Mypair._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetActivationFunctions'' @ 150451950

void __cdecl
rltests::ml::block4::unoptimized::_dynamic_atexit_destructor_for__mlbNetActivationFunctions__(void)

{
  if (mlbNetActivationFunctions._Mypair._Myval2._Myfirst !=
      (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<enum_dna::ActivationFunction,pma::PolyAllocator<enum_dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetActivationFunctions._Mypair._Myval2._Myfirst,
               mlbNetActivationFunctions._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetActivationFunctions);
    (**(code **)(*(longlong *)mlbNetActivationFunctions._Mypair._Myval1 + 0x10))
              (mlbNetActivationFunctions._Mypair._Myval1,
               mlbNetActivationFunctions._Mypair._Myval2._Myfirst,
               (longlong)mlbNetActivationFunctions._Mypair._Myval2._Myend -
               (longlong)mlbNetActivationFunctions._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetActivationFunctions._Mypair._Myval2._Myend =
         (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetActivationFunctions._Mypair._Myval2._Myfirst =
         (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetActivationFunctions._Mypair._Myval2._Mylast =
         (vector<dna::ActivationFunction,pma::PolyAllocator<dna::ActivationFunction,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetBiases'' @ 1504519c0

void __cdecl rltests::ml::block4::unoptimized::_dynamic_atexit_destructor_for__mlbNetBiases__(void)

{
  if (mlbNetBiases._Mypair._Myval2._Myfirst !=
      (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetBiases._Mypair._Myval2._Myfirst,mlbNetBiases._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetBiases);
    (**(code **)(*(longlong *)mlbNetBiases._Mypair._Myval1 + 0x10))
              (mlbNetBiases._Mypair._Myval1,mlbNetBiases._Mypair._Myval2._Myfirst,
               (longlong)mlbNetBiases._Mypair._Myval2._Myend -
               (longlong)mlbNetBiases._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetBiases._Mypair._Myval2._Myend =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetBiases._Mypair._Myval2._Myfirst =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetBiases._Mypair._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetBiasesFloat'' @ 150451a30

void __cdecl
rltests::ml::block4::optimized::_dynamic_atexit_destructor_for__mlbNetBiasesFloat__(void)

{
  if (mlbNetBiasesFloat._Mypair._Myval2._Myfirst !=
      (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetBiasesFloat._Mypair._Myval2._Myfirst,mlbNetBiasesFloat._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetBiasesFloat);
    (**(code **)(*(longlong *)mlbNetBiasesFloat._Mypair._Myval1 + 0x10))
              (mlbNetBiasesFloat._Mypair._Myval1,mlbNetBiasesFloat._Mypair._Myval2._Myfirst,
               (longlong)mlbNetBiasesFloat._Mypair._Myval2._Myend -
               (longlong)mlbNetBiasesFloat._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetBiasesFloat._Mypair._Myval2._Myend =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetBiasesFloat._Mypair._Myval2._Myfirst =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetBiasesFloat._Mypair._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetBiasesHalfFloat'' @ 150451aa0

void __cdecl
rltests::ml::block4::optimized::_dynamic_atexit_destructor_for__mlbNetBiasesHalfFloat__(void)

{
  if (mlbNetBiasesHalfFloat._Mypair._Myval2._Myfirst !=
      (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetBiasesHalfFloat._Mypair._Myval2._Myfirst,
               mlbNetBiasesHalfFloat._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetBiasesHalfFloat);
    (**(code **)(*(longlong *)mlbNetBiasesHalfFloat._Mypair._Myval1 + 0x10))
              (mlbNetBiasesHalfFloat._Mypair._Myval1,mlbNetBiasesHalfFloat._Mypair._Myval2._Myfirst,
               (longlong)mlbNetBiasesHalfFloat._Mypair._Myval2._Myend -
               (longlong)mlbNetBiasesHalfFloat._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetBiasesHalfFloat._Mypair._Myval2._Myend =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetBiasesHalfFloat._Mypair._Myval2._Myfirst =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetBiasesHalfFloat._Mypair._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetInputIndices'' @ 150451b10

void __cdecl
rltests::ml::block4::unoptimized::_dynamic_atexit_destructor_for__mlbNetInputIndices__(void)

{
  if (mlbNetInputIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetInputIndices._Mypair._Myval2._Myfirst,
               mlbNetInputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetInputIndices);
    (**(code **)(*(longlong *)mlbNetInputIndices._Mypair._Myval1 + 0x10))
              (mlbNetInputIndices._Mypair._Myval1,mlbNetInputIndices._Mypair._Myval2._Myfirst,
               (longlong)mlbNetInputIndices._Mypair._Myval2._Myend -
               (longlong)mlbNetInputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetInputIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    mlbNetInputIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    mlbNetInputIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetOutputIndices'' @ 150451b80

void __cdecl
rltests::ml::block4::unoptimized::_dynamic_atexit_destructor_for__mlbNetOutputIndices__(void)

{
  if (mlbNetOutputIndices._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetOutputIndices._Mypair._Myval2._Myfirst,
               mlbNetOutputIndices._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetOutputIndices);
    (**(code **)(*(longlong *)mlbNetOutputIndices._Mypair._Myval1 + 0x10))
              (mlbNetOutputIndices._Mypair._Myval1,mlbNetOutputIndices._Mypair._Myval2._Myfirst,
               (longlong)mlbNetOutputIndices._Mypair._Myval2._Myend -
               (longlong)mlbNetOutputIndices._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetOutputIndices._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    mlbNetOutputIndices._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    mlbNetOutputIndices._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetWeights'' @ 150451bf0

void __cdecl rltests::ml::block4::unoptimized::_dynamic_atexit_destructor_for__mlbNetWeights__(void)

{
  if (mlbNetWeights._Mypair._Myval2._Myfirst !=
      (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetWeights._Mypair._Myval2._Myfirst,mlbNetWeights._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetWeights);
    (**(code **)(*(longlong *)mlbNetWeights._Mypair._Myval1 + 0x10))
              (mlbNetWeights._Mypair._Myval1,mlbNetWeights._Mypair._Myval2._Myfirst,
               (longlong)mlbNetWeights._Mypair._Myval2._Myend -
               (longlong)mlbNetWeights._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetWeights._Mypair._Myval2._Myend =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetWeights._Mypair._Myval2._Myfirst =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetWeights._Mypair._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetWeightsFloat'' @ 150451c60

void __cdecl
rltests::ml::block4::optimized::_dynamic_atexit_destructor_for__mlbNetWeightsFloat__(void)

{
  if (mlbNetWeightsFloat._Mypair._Myval2._Myfirst !=
      (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetWeightsFloat._Mypair._Myval2._Myfirst,
               mlbNetWeightsFloat._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetWeightsFloat);
    (**(code **)(*(longlong *)mlbNetWeightsFloat._Mypair._Myval1 + 0x10))
              (mlbNetWeightsFloat._Mypair._Myval1,mlbNetWeightsFloat._Mypair._Myval2._Myfirst,
               (longlong)mlbNetWeightsFloat._Mypair._Myval2._Myend -
               (longlong)mlbNetWeightsFloat._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetWeightsFloat._Mypair._Myval2._Myend =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetWeightsFloat._Mypair._Myval2._Myfirst =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetWeightsFloat._Mypair._Myval2._Mylast =
         (vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'mlbNetWeightsHalfFloat'' @ 150451cd0

void __cdecl
rltests::ml::block4::optimized::_dynamic_atexit_destructor_for__mlbNetWeightsHalfFloat__(void)

{
  if (mlbNetWeightsHalfFloat._Mypair._Myval2._Myfirst !=
      (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
       *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (mlbNetWeightsHalfFloat._Mypair._Myval2._Myfirst,
               mlbNetWeightsHalfFloat._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&mlbNetWeightsHalfFloat);
    (**(code **)(*(longlong *)mlbNetWeightsHalfFloat._Mypair._Myval1 + 0x10))
              (mlbNetWeightsHalfFloat._Mypair._Myval1,
               mlbNetWeightsHalfFloat._Mypair._Myval2._Myfirst,
               (longlong)mlbNetWeightsHalfFloat._Mypair._Myval2._Myend -
               (longlong)mlbNetWeightsHalfFloat._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    mlbNetWeightsHalfFloat._Mypair._Myval2._Myend =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetWeightsHalfFloat._Mypair._Myval2._Myfirst =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
    mlbNetWeightsHalfFloat._Mypair._Myval2._Mylast =
         (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'neuralNetworkIndicesPerLOD'' @ 150451d40

void __cdecl
rltests::ml::block4::unoptimized::_dynamic_atexit_destructor_for__neuralNetworkIndicesPerLOD__(void)

{
  if (neuralNetworkIndicesPerLOD._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (neuralNetworkIndicesPerLOD._Mypair._Myval2._Myfirst,
               neuralNetworkIndicesPerLOD._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&neuralNetworkIndicesPerLOD);
    (**(code **)(*(longlong *)neuralNetworkIndicesPerLOD._Mypair._Myval1 + 0x10))
              (neuralNetworkIndicesPerLOD._Mypair._Myval1,
               neuralNetworkIndicesPerLOD._Mypair._Myval2._Myfirst,
               (longlong)neuralNetworkIndicesPerLOD._Mypair._Myval2._Myend -
               (longlong)neuralNetworkIndicesPerLOD._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8)
    ;
    neuralNetworkIndicesPerLOD._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    neuralNetworkIndicesPerLOD._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    neuralNetworkIndicesPerLOD._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'values'' @ 150451db0

void __cdecl rltests::ml::block4::input::_dynamic_atexit_destructor_for__values__(void)

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

// `dynamic_atexit_destructor_for_'valuesPerLOD'' @ 150451e10

void __cdecl rltests::ml::block4::output::_dynamic_atexit_destructor_for__valuesPerLOD__(void)

{
  if (valuesPerLOD._Mypair._Myval2._Myfirst !=
      (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (valuesPerLOD._Mypair._Myval2._Myfirst,valuesPerLOD._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&valuesPerLOD);
    (**(code **)(*(longlong *)valuesPerLOD._Mypair._Myval1 + 0x10))
              (valuesPerLOD._Mypair._Myval1,valuesPerLOD._Mypair._Myval2._Myfirst,
               (longlong)valuesPerLOD._Mypair._Myval2._Myend -
               (longlong)valuesPerLOD._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    valuesPerLOD._Mypair._Myval2._Myend =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    valuesPerLOD._Mypair._Myval2._Myfirst =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
    valuesPerLOD._Mypair._Myval2._Mylast =
         (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *)0x0;
  }
  return;
}

