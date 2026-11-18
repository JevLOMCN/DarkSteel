// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 10

// array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135> @ 14f8efb20

/* public: __cdecl std::array<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,135>::array<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,135>(void) __ptr64 */

array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135> * __thiscall
std::array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135>::
array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135>
          (array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135> *this)

{
  _eh_vector_constructor_iterator_
            (this,0x20,0x87,
             basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>,
             basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             ~basic_string<char,std::char_traits<char>,std::allocator<char>_>);
  return this;
}

// operator[] @ 14f8efb60

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::array<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,135>::operator[](unsigned __int64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135>::operator[]
          (array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135> *this,
          __uint64 param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + param_1 * 0x20);
}

// operator[] @ 14f8efb70

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl std::array<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,135>::operator[](unsigned __int64)const
   __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135>::operator[]
          (array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135> *this,
          __uint64 param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + param_1 * 0x20);
}

// FUN_14f8efb80 @ 14f8efb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14f8efb80(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  ulong64 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStackY_68 [32];
  void *local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  plVar3 = operator_new(0x10e0);
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  plVar8 = plVar9;
  if (plVar3 != (longlong *)0x0) {
    _eh_vector_constructor_iterator_
              (plVar3,0x20,0x87,
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>,
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               ~basic_string<char,std::char_traits<char>,std::allocator<char>_>);
    plVar7 = plVar3;
    plVar8 = plVar3;
  }
  do {
    plVar3 = (longlong *)FUN_14f8f0060(local_30,(ulonglong)plVar9 & 0xffffffff);
    if (plVar7 != plVar3) {
      uVar1 = plVar7[3];
      if (0xf < uVar1) {
        uVar6 = uVar1 + 1;
        pvVar5 = (void *)*plVar7;
        pvVar4 = pvVar5;
        if (0xfff < uVar6) {
          uVar6 = uVar1 + 0x28;
          pvVar4 = *(void **)((longlong)pvVar5 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar4))) goto LAB_14f8efce3;
        }
        operator_delete(pvVar4,uVar6);
      }
      plVar7[2] = 0;
      plVar7[3] = 0xf;
      *(undefined1 *)plVar7 = 0;
      lVar2 = plVar3[1];
      *plVar7 = *plVar3;
      plVar7[1] = lVar2;
      lVar2 = plVar3[3];
      plVar7[2] = plVar3[2];
      plVar7[3] = lVar2;
      plVar3[2] = 0;
      plVar3[3] = 0xf;
      *(undefined1 *)plVar3 = 0;
    }
    if (0xf < local_18) {
      uVar6 = local_18 + 1;
      pvVar5 = local_30[0];
      if (0xfff < uVar6) {
        uVar6 = local_18 + 0x28;
        pvVar5 = *(void **)((longlong)local_30[0] + -8);
        if (0x1f < (ulonglong)((longlong)local_30[0] + (-8 - (longlong)pvVar5))) {
LAB_14f8efce3:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,uVar6);
    }
    plVar9 = (longlong *)((longlong)plVar9 + 1);
    plVar7 = plVar7 + 4;
    if ((longlong *)0x86 < plVar9) {
      return plVar8;
    }
  } while( true );
}

// StrError @ 14f8efcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::base_internal::StrError(int) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::base_internal::StrError
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong *plVar9;
  void *pvVar10;
  ulong64 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *_Dst;
  undefined1 auStackY_a8 [32];
  void *local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  _Dst = (longlong *)0x0;
  piVar5 = _errno();
  iVar2 = *piVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < DAT_1553e4968) &&
     (_Init_thread_header(&DAT_1553e4968), DAT_1553e4968 == -1)) {
    plVar9 = ::operator_new(0x10e0);
    plVar12 = _Dst;
    plVar13 = _Dst;
    plVar14 = _Dst;
    if (plVar9 != (longlong *)0x0) {
      _eh_vector_constructor_iterator_
                (plVar9,0x20,0x87,
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 basic_string<char,std::char_traits<char>,std::allocator<char>_>,
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 ~basic_string<char,std::char_traits<char>,std::allocator<char>_>);
      plVar13 = plVar9;
      plVar14 = plVar9;
    }
    do {
      plVar9 = (longlong *)FUN_14f8f0060(local_60,(ulonglong)plVar12 & 0xffffffff);
      if (plVar13 != plVar9) {
        uVar3 = plVar13[3];
        if (0xf < uVar3) {
          pvVar8 = (void *)*plVar13;
          uVar11 = uVar3 + 1;
          pvVar10 = pvVar8;
          if (0xfff < uVar11) {
            uVar11 = uVar3 + 0x28;
            pvVar10 = *(void **)((longlong)pvVar8 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar10))) goto LAB_14f8efe8e;
          }
          ::operator_delete(pvVar10,uVar11);
        }
        plVar13[2] = 0;
        plVar13[3] = 0xf;
        *(undefined1 *)plVar13 = 0;
        lVar4 = plVar9[1];
        *plVar13 = *plVar9;
        plVar13[1] = lVar4;
        lVar4 = plVar9[3];
        plVar13[2] = plVar9[2];
        plVar13[3] = lVar4;
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
      }
      if (0xf < local_48) {
        uVar11 = local_48 + 1;
        pvVar8 = local_60[0];
        if (0xfff < uVar11) {
          uVar11 = local_48 + 0x28;
          pvVar8 = *(void **)((longlong)local_60[0] + -8);
          if (0x1f < (ulonglong)((longlong)local_60[0] + (-8 - (longlong)pvVar8))) {
LAB_14f8efe8e:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(pvVar8,uVar11);
      }
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      plVar13 = plVar13 + 4;
    } while (plVar12 < &DAT_00000087);
    _DAT_1553e4960 = plVar14;
    _Init_thread_footer(&DAT_1553e4968);
  }
  if ((param_1 < 0) || (0x86 < (ulonglong)(longlong)param_1)) {
    FUN_14f8f0060(__return_storage_ptr__,param_1);
    goto LAB_14f8efe5e;
  }
  plVar12 = _DAT_1553e4960 + (longlong)param_1 * 4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar3 = plVar12[2];
  if (0xf < (ulonglong)plVar12[3]) {
    plVar12 = (longlong *)*plVar12;
  }
  if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::_Xlen_string();
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  if (uVar3 < 0x10) {
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3;
    lVar4 = plVar12[1];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)*plVar12;
    *(longlong *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = lVar4;
    goto LAB_14f8efe5e;
  }
  uVar6 = uVar3 | 0xf;
  if (uVar6 < 0x8000000000000000) {
    if (uVar6 < 0x16) {
      uVar6 = 0x16;
    }
    uVar1 = uVar6 + 1;
    if (0xfff < uVar1) {
      uVar7 = uVar6 + 0x28;
      if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
      goto LAB_14f8efde0;
    }
    if (uVar1 != 0) {
      _Dst = ::operator_new(uVar1);
    }
  }
  else {
    uVar7 = 0x8000000000000027;
    uVar6 = 0x7fffffffffffffff;
LAB_14f8efde0:
    pvVar8 = ::operator_new(uVar7);
    if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (longlong *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
    _Dst[-1] = (longlong)pvVar8;
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)_Dst;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar3;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = uVar6;
  memcpy(_Dst,plVar12,uVar3 + 1);
LAB_14f8efe5e:
  piVar5 = _errno();
  *piVar5 = iVar2;
  return __return_storage_ptr__;
}

// FUN_14f8efff0 @ 14f8efff0

char * FUN_14f8efff0(int param_1,char *param_2,size_t param_3)

{
  errno_t eVar1;
  int iVar2;
  
  eVar1 = strerror_s(param_2,param_3,param_1);
  param_2[param_3 - 1] = '\0';
  if (eVar1 == 0) {
    iVar2 = strncmp(param_2,"Unknown error",param_3);
    if (iVar2 == 0) {
      *param_2 = '\0';
      return param_2;
    }
  }
  return param_2;
}

// FUN_14f8f0060 @ 14f8f0060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14f8f0060(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2)

{
  longlong lVar1;
  errno_t eVar2;
  int iVar3;
  ulong64 uVar4;
  undefined1 auStack_b8 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_90;
  char local_88 [99];
  undefined1 local_25;
  ulonglong local_18;
  ulong64 uVar5;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = param_1;
  eVar2 = strerror_s(local_88,100,param_2);
  local_25 = 0;
  if (eVar2 == 0) {
    iVar3 = strncmp(local_88,"Unknown error",100);
    if (iVar3 == 0) {
      local_88[0] = '\0';
    }
  }
  if (local_88[0] == '\0') {
    snprintf(local_88,100,"Unknown error %d");
  }
  (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar4 = uVar5 + 1;
    lVar1 = uVar5 + 1;
    uVar5 = uVar4;
  } while (local_88[lVar1] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (param_1,local_88,uVar4);
  return param_1;
}

// size @ 14f8f0160

/* public: unsigned __int64 __cdecl std::array<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,135>::size(void)const __ptr64 */

__uint64 __thiscall
std::array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135>::size
          (array<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,135> *this)

{
  return 0x87;
}

// FUN_150293f90 @ 150293f90

void FUN_150293f90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x10e0);
  return;
}

// FUN_150294000 @ 150294000

void FUN_150294000(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x10e0);
  return;
}

