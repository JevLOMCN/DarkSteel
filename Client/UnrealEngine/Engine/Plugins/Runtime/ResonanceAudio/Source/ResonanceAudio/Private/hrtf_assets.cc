// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// GetByteArray @ 14f09c100

uchar * __cdecl
sadie::GetByteArray(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                   ulong64 *param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  int iVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf2;
  int *piVar5;
  ulonglong uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf2_00;
  
  pbVar7 = &hrir_order_1_file_name;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&hrir_order_1_file_name,"WAV/Subject_002/SH/sh_hrir_order_1.wav");
    atexit(`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_1_file_name__);
    _Init_thread_footer(&::_TSS0);
  }
  _Buf2_00 = &hrir_order_2_file_name;
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&hrir_order_2_file_name,"WAV/Subject_002/SH/sh_hrir_order_2.wav");
    atexit(`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_2_file_name__);
    _Init_thread_footer(&::_TSS1);
  }
  _Buf2 = &hrir_order_3_file_name;
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&hrir_order_3_file_name,"WAV/Subject_002/SH/sh_hrir_order_3.wav");
    atexit(`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_3_file_name__);
    _Init_thread_footer(&::_TSS2);
  }
  uVar2 = hrir_order_1_file_name._Mypair._Myval2._Mysize;
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < hrir_order_1_file_name._Mypair._Myval2._Myres) {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             hrir_order_1_file_name._Mypair._Myval2._Bx._Ptr;
  }
  _Buf1 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    _Buf1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar6 = uVar1;
  if (hrir_order_1_file_name._Mypair._Myval2._Mysize < uVar1) {
    uVar6 = hrir_order_1_file_name._Mypair._Myval2._Mysize;
  }
  iVar4 = memcmp(_Buf1,pbVar7,uVar6);
  uVar3 = hrir_order_2_file_name._Mypair._Myval2._Mysize;
  if (((iVar4 == 0) && (uVar2 <= uVar1)) && (uVar1 == uVar2)) {
    *param_2 = 0x82c;
    return (uchar *)&hrir_order_1_file;
  }
  if (0xf < hrir_order_2_file_name._Mypair._Myval2._Myres) {
    _Buf2_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               hrir_order_2_file_name._Mypair._Myval2._Bx._Ptr;
  }
  pbVar7 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar6 = uVar1;
  if (hrir_order_2_file_name._Mypair._Myval2._Mysize < uVar1) {
    uVar6 = hrir_order_2_file_name._Mypair._Myval2._Mysize;
  }
  iVar4 = memcmp(pbVar7,_Buf2_00,uVar6);
  uVar2 = hrir_order_3_file_name._Mypair._Myval2._Mysize;
  if (((iVar4 == 0) && (uVar3 <= uVar1)) && (uVar1 == uVar3)) {
    *param_2 = 0x122c;
    return (uchar *)&hrir_order_2_file;
  }
  if (0xf < hrir_order_3_file_name._Mypair._Myval2._Myres) {
    _Buf2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            hrir_order_3_file_name._Mypair._Myval2._Bx._Ptr;
  }
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar6 = uVar1;
  if (hrir_order_3_file_name._Mypair._Myval2._Mysize < uVar1) {
    uVar6 = hrir_order_3_file_name._Mypair._Myval2._Mysize;
  }
  iVar4 = memcmp(param_1,_Buf2,uVar6);
  if (((iVar4 == 0) && (uVar2 <= uVar1)) && (uVar1 == uVar2)) {
    *param_2 = 0x2020c;
    return (uchar *)&hrir_order_3_file;
  }
  return (uchar *)0x0;
}

// GetFile @ 14f09c370

uchar * __cdecl
sadie::HrtfAssets::GetFile
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong64 *param_2
          )

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  int iVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf2;
  int *piVar5;
  ulonglong uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf2_00;
  
  pbVar7 = &hrir_order_1_file_name;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&hrir_order_1_file_name,"WAV/Subject_002/SH/sh_hrir_order_1.wav");
    atexit(`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_1_file_name__);
    _Init_thread_footer(&::_TSS0);
  }
  _Buf2_00 = &hrir_order_2_file_name;
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&hrir_order_2_file_name,"WAV/Subject_002/SH/sh_hrir_order_2.wav");
    atexit(`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_2_file_name__);
    _Init_thread_footer(&::_TSS1);
  }
  _Buf2 = &hrir_order_3_file_name;
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&hrir_order_3_file_name,"WAV/Subject_002/SH/sh_hrir_order_3.wav");
    atexit(`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_3_file_name__);
    _Init_thread_footer(&::_TSS2);
  }
  uVar2 = hrir_order_1_file_name._Mypair._Myval2._Mysize;
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < hrir_order_1_file_name._Mypair._Myval2._Myres) {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             hrir_order_1_file_name._Mypair._Myval2._Bx._Ptr;
  }
  _Buf1 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    _Buf1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar6 = uVar1;
  if (hrir_order_1_file_name._Mypair._Myval2._Mysize < uVar1) {
    uVar6 = hrir_order_1_file_name._Mypair._Myval2._Mysize;
  }
  iVar4 = memcmp(_Buf1,pbVar7,uVar6);
  uVar3 = hrir_order_2_file_name._Mypair._Myval2._Mysize;
  if (((iVar4 == 0) && (uVar2 <= uVar1)) && (uVar1 == uVar2)) {
    *param_2 = 0x82c;
    return (uchar *)&hrir_order_1_file;
  }
  if (0xf < hrir_order_2_file_name._Mypair._Myval2._Myres) {
    _Buf2_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               hrir_order_2_file_name._Mypair._Myval2._Bx._Ptr;
  }
  pbVar7 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar6 = uVar1;
  if (hrir_order_2_file_name._Mypair._Myval2._Mysize < uVar1) {
    uVar6 = hrir_order_2_file_name._Mypair._Myval2._Mysize;
  }
  iVar4 = memcmp(pbVar7,_Buf2_00,uVar6);
  uVar2 = hrir_order_3_file_name._Mypair._Myval2._Mysize;
  if (((iVar4 == 0) && (uVar3 <= uVar1)) && (uVar1 == uVar3)) {
    *param_2 = 0x122c;
    return (uchar *)&hrir_order_2_file;
  }
  if (0xf < hrir_order_3_file_name._Mypair._Myval2._Myres) {
    _Buf2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            hrir_order_3_file_name._Mypair._Myval2._Bx._Ptr;
  }
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar6 = uVar1;
  if (hrir_order_3_file_name._Mypair._Myval2._Mysize < uVar1) {
    uVar6 = hrir_order_3_file_name._Mypair._Myval2._Mysize;
  }
  iVar4 = memcmp(param_1,_Buf2,uVar6);
  if (((iVar4 == 0) && (uVar2 <= uVar1)) && (uVar1 == uVar2)) {
    *param_2 = 0x2020c;
    return (uchar *)&hrir_order_3_file;
  }
  return (uchar *)0x0;
}

// `dynamic_atexit_destructor_for_'hrir_order_1_file_name'' @ 150471a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_1_file_name__(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < hrir_order_1_file_name._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(hrir_order_1_file_name._Mypair._Myval2._Bx._1_7_,
                              hrir_order_1_file_name._Mypair._Myval2._Bx._Buf[0]);
    uVar3 = hrir_order_1_file_name._Mypair._Myval2._Myres + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = hrir_order_1_file_name._Mypair._Myval2._Myres + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar2,uVar3);
  }
  hrir_order_1_file_name._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
  hrir_order_1_file_name._Mypair._Myval2._Myres = _UNK_15076add8;
  hrir_order_1_file_name._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

// `dynamic_atexit_destructor_for_'hrir_order_2_file_name'' @ 150471a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_2_file_name__(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < hrir_order_2_file_name._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(hrir_order_2_file_name._Mypair._Myval2._Bx._1_7_,
                              hrir_order_2_file_name._Mypair._Myval2._Bx._Buf[0]);
    uVar3 = hrir_order_2_file_name._Mypair._Myval2._Myres + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = hrir_order_2_file_name._Mypair._Myval2._Myres + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar2,uVar3);
  }
  hrir_order_2_file_name._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
  hrir_order_2_file_name._Mypair._Myval2._Myres = _UNK_15076add8;
  hrir_order_2_file_name._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

// `dynamic_atexit_destructor_for_'hrir_order_3_file_name'' @ 150471b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`sadie::GetByteArray'::__l2::_dynamic_atexit_destructor_for__hrir_order_3_file_name__(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < hrir_order_3_file_name._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(hrir_order_3_file_name._Mypair._Myval2._Bx._1_7_,
                              hrir_order_3_file_name._Mypair._Myval2._Bx._Buf[0]);
    uVar3 = hrir_order_3_file_name._Mypair._Myval2._Myres + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = hrir_order_3_file_name._Mypair._Myval2._Myres + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar2,uVar3);
  }
  hrir_order_3_file_name._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
  hrir_order_3_file_name._Mypair._Myval2._Myres = _UNK_15076add8;
  hrir_order_3_file_name._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

