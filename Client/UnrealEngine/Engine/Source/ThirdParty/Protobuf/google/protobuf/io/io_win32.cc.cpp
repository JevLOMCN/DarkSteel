// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 247

// _Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1><> @ 14fb89990

/* public: __cdecl std::_Compressed_pair<class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >,class std::_Vector_val<struct
   std::_Simple_types<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > > >,1>::_Compressed_pair<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   >,class std::_Vector_val<struct std::_Simple_types<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1>
::
_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1><>
          (_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  (this->_Myval2)._Myfirst =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  (this->_Myval2)._Mylast =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  (this->_Myval2)._Myend =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  return this;
}

// _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1><> @ 14fb899b0

/* public: __cdecl std::_Compressed_pair<class std::allocator<wchar_t>,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *
__thiscall
std::_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>::
_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1><>
          (_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  (this->_Myval2)._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Myval2)._Bx + 8) = 0;
  (this->_Myval2)._Mysize = 0;
  (this->_Myval2)._Myres = 0;
  return this;
}

// _Compressed_pair<std::default_delete<char_[0]>,char*___ptr64,1><char*___ptr64&___ptr64> @ 14fb899d0

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<char [0]>,char *
   __ptr64,1>::_Compressed_pair<struct std::default_delete<char [0]>,char * __ptr64,1><char *
   __ptr64 & __ptr64>(struct std::_Zero_then_variadic_args_t,char * __ptr64 & __ptr64) __ptr64 */

_Compressed_pair<std::default_delete<char_[0]>,char*___ptr64,1> * __thiscall
std::_Compressed_pair<std::default_delete<char_[0]>,char*___ptr64,1>::
_Compressed_pair<std::default_delete<char_[0]>,char*___ptr64,1><char*___ptr64&___ptr64>
          (_Compressed_pair<std::default_delete<char_[0]>,char*___ptr64,1> *this,
          _Zero_then_variadic_args_t param_1,char **param_2)

{
  *(char **)this = *param_2;
  return this;
}

// _Compressed_pair<std::default_delete<wchar_t_[0]>,wchar_t*___ptr64,1><wchar_t*___ptr64&___ptr64> @ 14fb899e0

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<wchar_t [0]>,wchar_t *
   __ptr64,1>::_Compressed_pair<struct std::default_delete<wchar_t [0]>,wchar_t * __ptr64,1><wchar_t
   * __ptr64 & __ptr64>(struct std::_Zero_then_variadic_args_t,wchar_t * __ptr64 & __ptr64) __ptr64
    */

_Compressed_pair<std::default_delete<wchar_t_[0]>,wchar_t*___ptr64,1> * __thiscall
std::_Compressed_pair<std::default_delete<wchar_t_[0]>,wchar_t*___ptr64,1>::
_Compressed_pair<std::default_delete<wchar_t_[0]>,wchar_t*___ptr64,1><wchar_t*___ptr64&___ptr64>
          (_Compressed_pair<std::default_delete<wchar_t_[0]>,wchar_t*___ptr64,1> *this,
          _Zero_then_variadic_args_t param_1,wchar_t **param_2)

{
  *(wchar_t **)this = *param_2;
  return this;
}

// _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1><std::allocator<wchar_t>_const&___ptr64> @ 14fb899f0

/* public: __cdecl std::_Compressed_pair<class std::allocator<wchar_t>,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1><class std::allocator<wchar_t> const &
   __ptr64>(struct std::_One_then_variadic_args_t,class std::allocator<wchar_t> const & __ptr64)
   __ptr64 */

_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *
__thiscall
std::_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>::
_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1><std::allocator<wchar_t>_const&___ptr64>
          (_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<wchar_t> *param_2)

{
  (this->_Myval2)._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Myval2)._Bx + 8) = 0;
  (this->_Myval2)._Mysize = 0;
  (this->_Myval2)._Myres = 0;
  return this;
}

// unique_ptr<char_[0],std::default_delete<char_[0]>_><char*___ptr64,std::default_delete<char_[0]>,0,0> @ 14fb89a10

/* public: __cdecl std::unique_ptr<char [0],struct std::default_delete<char [0]> >::unique_ptr<char
   [0],struct std::default_delete<char [0]> ><char * __ptr64,struct std::default_delete<char
   [0]>,0,0>(char * __ptr64) __ptr64 */

unique_ptr<char_[0],std::default_delete<char_[0]>_> * __thiscall
std::unique_ptr<char_[0],std::default_delete<char_[0]>_>::
unique_ptr<char_[0],std::default_delete<char_[0]>_><char*___ptr64,std::default_delete<char_[0]>,0,0>
          (unique_ptr<char_[0],std::default_delete<char_[0]>_> *this,char *param_1)

{
  *(char **)this = param_1;
  return this;
}

// unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_><wchar_t*___ptr64,std::default_delete<wchar_t_[0]>,0,0> @ 14fb89a20

/* public: __cdecl std::unique_ptr<wchar_t [0],struct std::default_delete<wchar_t [0]>
   >::unique_ptr<wchar_t [0],struct std::default_delete<wchar_t [0]> ><wchar_t * __ptr64,struct
   std::default_delete<wchar_t [0]>,0,0>(wchar_t * __ptr64) __ptr64 */

unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_> * __thiscall
std::unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_>::
unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_><wchar_t*___ptr64,std::default_delete<wchar_t_[0]>,0,0>
          (unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_> *this,wchar_t *param_1)

{
  *(wchar_t **)this = param_1;
  return this;
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_const*___ptr64,0> @ 14fb89a30

/* public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> ><wchar_t const * __ptr64,0>(wchar_t const * __ptr64 const &
   __ptr64,unsigned __int64,unsigned __int64,class std::allocator<wchar_t> const & __ptr64) __ptr64
    */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_><wchar_t_const*___ptr64,0>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t **param_1,__uint64 param_2,__uint64 param_3,allocator<wchar_t> *param_4)

{
  ulonglong uVar1;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while ((*param_1)[uVar1] != L'\0');
  if (param_2 <= uVar1) {
    if (uVar1 - param_2 < param_3) {
      param_3 = uVar1 - param_2;
    }
    _Construct<1,wchar_t_const_*>(this,*param_1 + param_2,param_3);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  basic_string_view<wchar_t,std::char_traits<wchar_t>_>::_Xran();
}

// _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1><std::allocator<wchar_t>_> @ 14fb89aa0

/* public: __cdecl std::_Compressed_pair<class std::allocator<wchar_t>,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1><class std::allocator<wchar_t> >(struct
   std::_One_then_variadic_args_t,class std::allocator<wchar_t> && __ptr64) __ptr64 */

_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *
__thiscall
std::_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>::
_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1><std::allocator<wchar_t>_>
          (_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<wchar_t> *param_2)

{
  (this->_Myval2)._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Myval2)._Bx + 8) = 0;
  (this->_Myval2)._Mysize = 0;
  (this->_Myval2)._Myres = 0;
  return this;
}

// operator<<<wchar_t,std::char_traits<wchar_t>_> @ 14fb89ac0

/* class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> > & __ptr64 __cdecl
   std::operator<<<wchar_t,struct std::char_traits<wchar_t> >(class
   std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> > & __ptr64,wchar_t) */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __cdecl
std::operator<<<wchar_t,std::char_traits<wchar_t>_>
          (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,wchar_t param_2)

{
  bool bVar1;
  bool bVar2;
  wchar_t wVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar7;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  __int64 _Var8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  iVar6 = 0;
  pbVar7 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar7 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar7->_padding_ + 8))(pbVar7);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::tie
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0) ||
       (this == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 != false) {
    _Var8 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    uVar10 = uVar9;
    if (1 < _Var8) {
      _Var8 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
      uVar10 = _Var8 - 1;
    }
    uVar5 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar5 & 0x1c0) == 0x40) {
LAB_14fb89c09:
      pbVar7 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                         ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                          (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(pbVar7,param_2);
      if (uVar4 == 0xffff) {
        uVar9 = 4;
      }
      while ((iVar6 = (int)uVar9, iVar6 == 0 && (0 < (longlong)uVar10))) {
        pbVar7 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                          ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(pbVar7,wVar3);
        uVar10 = uVar10 - 1;
        uVar5 = 4;
        if (uVar4 != 0xffff) {
          uVar5 = 0;
        }
        uVar9 = (ulonglong)uVar5;
      }
    }
    else {
      while (iVar6 = (int)uVar9, iVar6 == 0) {
        if ((longlong)uVar10 < 1) goto LAB_14fb89c09;
        pbVar7 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                          ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(pbVar7,wVar3);
        uVar10 = uVar10 - 1;
        uVar5 = 4;
        if (uVar4 != 0xffff) {
          uVar5 = 0;
        }
        uVar9 = (ulonglong)uVar5;
      }
    }
  }
  std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar6,false);
  iVar6 = uncaught_exceptions();
  if (iVar6 == 0) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx
              ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)param_1);
  }
  pbVar7 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar7 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar7->_padding_ + 0x10))(pbVar7);
  }
  return (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)param_1;
}

// operator<<<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb89d20

/* class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> > & __ptr64 __cdecl
   std::operator<<<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >(class
   std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> > & __ptr64,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __cdecl
std::operator<<<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var1
  ;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar2;
  
  p_Var1 = &param_2->_Mypair;
  if (7 < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar2 = _Insert_string<wchar_t,std::char_traits<wchar_t>,unsigned___int64>
                     (param_1,(wchar_t *)param_2,(p_Var1->_Myval2)._Mysize);
  return pbVar2;
}

// operator==<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb89d40

/* bool __cdecl std::operator==<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64) */

bool __cdecl
std::operator==<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  _Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> *p_Var1
  ;
  longlong lVar2;
  ulong64 uVar3;
  
  p_Var1 = &param_2->_Mypair;
  if (7 < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar3 = (param_1->_Mypair)._Myval2._Mysize;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar3 != (p_Var1->_Myval2)._Mysize) {
    return false;
  }
  if (uVar3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(wchar_t *)(lVar2 + (longlong)param_2) != (param_2->_Mypair)._Myval2._Bx._Buf[0]) {
        return false;
      }
      param_2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                ((longlong)&(param_2->_Mypair)._Myval2._Bx + 2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return true;
}

// operator==<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb89d90

/* bool __cdecl std::operator==<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64,wchar_t const * __ptr64 const) */

bool __cdecl
std::operator==<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          wchar_t *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  longlong lVar3;
  
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_2[uVar1] != L'\0');
  uVar2 = (param_1->_Mypair)._Myval2._Mysize;
  if (7 < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar2 != uVar1) {
    return false;
  }
  if (uVar2 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(wchar_t *)(lVar3 + (longlong)param_2) != *param_2) {
        return false;
      }
      param_2 = param_2 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return true;
}

// operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb89df0

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   __cdecl std::operator+<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   > && __ptr64,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  
  pbVar3 = basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
                     ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                      param_1,param_2);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar1 = *(undefined8 *)(pbVar3 + 8);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)pbVar3;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(pbVar3 + 0x18);
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = *(ulong64 *)(pbVar3 + 0x10);
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = uVar2;
  *(undefined8 *)(pbVar3 + 0x10) = 0;
  *(undefined8 *)(pbVar3 + 0x18) = 7;
  *(undefined2 *)pbVar3 = 0;
  return __return_storage_ptr__;
}

// operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb89e50

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   __cdecl std::operator+<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   > const & __ptr64,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > && __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *_Src;
  ulonglong uVar5;
  undefined1 local_res10;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (7 < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                **)param_1;
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (*(ulonglong *)(param_2 + 0x18) - lVar2 < uVar1) {
    param_2 = basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              _Reallocate_grow_by<_public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert(unsigned___int64,wchar_t_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,unsigned___int64,wchar_t_const*___ptr64,unsigned___int64>
                        ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                         )param_2,uVar1,local_res10,0,param_1,uVar1);
  }
  else {
    *(ulonglong *)(param_2 + 0x10) = uVar1 + lVar2;
    _Src = param_2;
    if (7 < *(ulonglong *)(param_2 + 0x18)) {
      _Src = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               **)param_2;
    }
    uVar5 = uVar1;
    if (((_Src < param_1 + uVar1 * 2) && (param_1 <= _Src + lVar2 * 2)) &&
       (uVar5 = 0, param_1 < _Src)) {
      uVar5 = (longlong)_Src - (longlong)param_1 >> 1;
    }
    memmove(_Src + uVar1 * 2,_Src,lVar2 * 2 + 2);
    memcpy(_Src,param_1,uVar5 * 2);
    memcpy(_Src + uVar5 * 2,param_1 + (uVar1 + uVar5) * 2,(uVar1 - uVar5) * 2);
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar3 = *(undefined8 *)(param_2 + 8);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)param_2;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = uVar3;
  uVar4 = *(ulong64 *)(param_2 + 0x18);
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_2 + 0x10);
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = uVar4;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 7;
  *(undefined2 *)param_2 = 0;
  return __return_storage_ptr__;
}

// operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb89fa0

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   __cdecl std::operator+<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   > const & __ptr64,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_2)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar2;
  _String_constructor_concat_tag local_res10;
  
  pbVar1 = param_2 + 0x10;
  if (*(ulonglong *)pbVar1 <= 0x7ffffffffffffffe - *(__uint64 *)(param_1 + 0x10)) {
    pbVar2 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0x18)) {
      pbVar2 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 **)param_1;
    }
    if (7 < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  **)param_2;
    }
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              (__return_storage_ptr__,local_res10,param_1,(wchar_t *)pbVar2,
               *(__uint64 *)(param_1 + 0x10),(wchar_t *)param_2,*(ulonglong *)pbVar1);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  _Xlen_string();
}

// operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8a010

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   __cdecl std::operator+<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   > const & __ptr64,wchar_t) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::operator+<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1,wchar_t param_2)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  _String_constructor_concat_tag local_res10;
  wchar_t local_res18 [8];
  
  local_res18[0] = param_2;
  if (*(__uint64 *)(param_1 + 0x10) != 0x7ffffffffffffffe) {
    pbVar1 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0x18)) {
      pbVar1 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 **)param_1;
    }
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              (__return_storage_ptr__,local_res10,param_1,(wchar_t *)pbVar1,
               *(__uint64 *)(param_1 + 0x10),local_res18,1);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  _Xlen_string();
}

// operator()<char,0> @ 14fb8a080

/* public: void __cdecl std::default_delete<char [0]>::operator()<char,0>(char * __ptr64)const
   __ptr64 */

void __thiscall
std::default_delete<char_[0]>::operator()<char,0>(default_delete<char_[0]> *this,char *param_1)

{
  operator_delete__(param_1);
  return;
}

// operator()<wchar_t,0> @ 14fb8a090

/* public: void __cdecl std::default_delete<wchar_t [0]>::operator()<wchar_t,0>(wchar_t *
   __ptr64)const __ptr64 */

void __thiscall
std::default_delete<wchar_t_[0]>::operator()<wchar_t,0>
          (default_delete<wchar_t_[0]> *this,wchar_t *param_1)

{
  operator_delete__(param_1);
  return;
}

// _Allocate_at_least_helper<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8a0a0

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   * __ptr64 __cdecl std::_Allocate_at_least_helper<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >(class std::allocator<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > > & __ptr64,unsigned __int64 & __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::
_Allocate_at_least_helper<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *param_1,__uint64 *param_2)

{
  void *pvVar1;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar2;
  ulong64 uVar3;
  
  if (*param_2 < 0x800000000000000) {
    uVar3 = *param_2 * 0x20;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        pbVar2 = ::operator_new(uVar3);
        return pbVar2;
      }
      return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        pbVar2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 ((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        pbVar2[-1]._Mypair._Myval2._Myres = (ulong64)pvVar1;
        return pbVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Allocate_at_least_helper<std::allocator<wchar_t>_> @ 14fb8a120

/* wchar_t * __ptr64 __cdecl std::_Allocate_at_least_helper<class std::allocator<wchar_t> >(class
   std::allocator<wchar_t> & __ptr64,unsigned __int64 & __ptr64) */

wchar_t * __cdecl
std::_Allocate_at_least_helper<std::allocator<wchar_t>_>
          (allocator<wchar_t> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  wchar_t *pwVar3;
  
  if (*param_2 < 0x8000000000000000) {
    uVar1 = *param_2 * 2;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        pwVar3 = ::operator_new(uVar1);
        return pwVar3;
      }
      return (wchar_t *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pwVar3 = (wchar_t *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pwVar3 + -4) = pvVar2;
        return pwVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Allocate_for_capacity<0> @ 14fb8a1a0

/* private: static wchar_t * __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Allocate_for_capacity<0>(class
   std::allocator<wchar_t> & __ptr64,unsigned __int64 & __ptr64) */

wchar_t * __cdecl
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Allocate_for_capacity<0>(allocator<wchar_t> *param_1,__uint64 *param_2)

{
  wchar_t *pwVar1;
  
  *param_2 = *param_2 + 1;
  pwVar1 = _Allocate_at_least_helper<std::allocator<wchar_t>_>(param_1,param_2);
  *param_2 = *param_2 - 1;
  return pwVar1;
}

// _Construct<2,wchar_t_const*___ptr64> @ 14fb8a1c0

/* private: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Construct<2,wchar_t const * __ptr64>(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64 */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Construct<2,wchar_t_const*___ptr64>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1,__uint64 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  void *pvVar3;
  wchar_t *_Dst;
  ulonglong uVar4;
  
  if (0x7ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  (this->_Mypair)._Myval2._Myres = 7;
  if (param_2 < 8) {
    (this->_Mypair)._Myval2._Mysize = param_2;
    uVar1 = *(undefined8 *)(param_1 + 4);
    (this->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)param_1;
    *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
    return;
  }
  uVar2 = param_2 | 7;
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_14fb8a2cc;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        _Dst = (wchar_t *)0x0;
      }
      else {
        _Dst = ::operator_new(uVar4);
      }
      goto LAB_14fb8a2a3;
    }
  }
  else {
    uVar4 = 0xfffffffffffffffe;
    uVar2 = 0x7ffffffffffffffe;
  }
  if (uVar4 < uVar4 + 0x27) {
    pvVar3 = ::operator_new(uVar4 + 0x27);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (wchar_t *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -4) = pvVar3;
LAB_14fb8a2a3:
    (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
    (this->_Mypair)._Myval2._Mysize = param_2;
    (this->_Mypair)._Myval2._Myres = uVar2;
    memcpy(_Dst,param_1,param_2 * 2 + 2);
    return;
  }
LAB_14fb8a2cc:
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Construct_in_place<wchar_t*___ptr64,wchar_t*___ptr64&___ptr64> @ 14fb8a2e0

/* void __cdecl std::_Construct_in_place<wchar_t * __ptr64,wchar_t * __ptr64 & __ptr64>(wchar_t *
   __ptr64 & __ptr64,wchar_t * __ptr64 & __ptr64) */

void __cdecl
std::_Construct_in_place<wchar_t*___ptr64,wchar_t*___ptr64&___ptr64>
          (wchar_t **param_1,wchar_t **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<wchar_t*___ptr64,wchar_t*___ptr64_const&___ptr64> @ 14fb8a2f0

/* void __cdecl std::_Construct_in_place<wchar_t * __ptr64,wchar_t * __ptr64 const &
   __ptr64>(wchar_t * __ptr64 & __ptr64,wchar_t * __ptr64 const & __ptr64) */

void __cdecl
std::_Construct_in_place<wchar_t*___ptr64,wchar_t*___ptr64_const&___ptr64>
          (wchar_t **param_1,wchar_t **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Destroy_in_place<wchar_t*___ptr64> @ 14fb8a300

/* void __cdecl std::_Destroy_in_place<wchar_t * __ptr64>(wchar_t * __ptr64 & __ptr64) */

void __cdecl std::_Destroy_in_place<wchar_t*___ptr64>(wchar_t **param_1)

{
  return;
}

// _Destroy_range<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8a310

/* void __cdecl std::_Destroy_range<class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64 const,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > > &
   __ptr64) */

void __cdecl
std::
_Destroy_range<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_2,allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                   *param_3)

{
  for (; (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         param_1 != param_2;
      param_1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                ((longlong)param_1 + 0x20)) {
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
              (param_1);
  }
  return;
}

// _Emplace_back<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8a350

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Emplace_back<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > >(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > && __ptr64) __ptr64 */

void __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Emplace_back<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this,basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  
  puVar1 = *(undefined8 **)(this + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
  *puVar1 = (param_1->_Mypair)._Myval2._Bx._Ptr;
  puVar1[1] = uVar2;
  uVar3 = (param_1->_Mypair)._Myval2._Myres;
  puVar1[2] = (param_1->_Mypair)._Myval2._Mysize;
  puVar1[3] = uVar3;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 7;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x20;
  return;
}

// _Emplace_back_with_unused_capacity<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64> @ 14fb8a390

/* private: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Emplace_back_with_unused_capacity<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64>(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
_Emplace_back_with_unused_capacity<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64>
          (vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *param_1)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((this->_Mypair)._Myval2._Mylast,
             (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1);
  pbVar1 = (this->_Mypair)._Myval2._Mylast;
  (this->_Mypair)._Myval2._Mylast = pbVar1 + 1;
  return pbVar1;
}

// _Emplace_one_at_back<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64> @ 14fb8a3c0

/* private: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Emplace_one_at_back<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64>(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
_Emplace_one_at_back<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64>
          (vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *param_1)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *this_00;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  
  this_00 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *
            )(this->_Mypair)._Myval2._Mylast;
  if (this_00 !=
      (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
      (this->_Mypair)._Myval2._Myend) {
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)this_00,
               (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1);
    pbVar1 = (this->_Mypair)._Myval2._Mylast;
    (this->_Mypair)._Myval2._Mylast = pbVar1 + 1;
    return pbVar1;
  }
  pbVar1 = _Emplace_reallocate<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64>
                     (this,this_00,param_1);
  return pbVar1;
}

// _Emplace_reallocate<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64> @ 14fb8a410

/* private: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Emplace_reallocate<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64>(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > * __ptr64 const,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
_Emplace_reallocate<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64>
          (vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *param_1,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_2)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *this_00;
  code *pcVar1;
  void *pvVar2;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar3;
  ulonglong uVar4;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar5;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar6;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar7;
  ulong64 uVar8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar9;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  pbVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar11 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pbVar3 >> 5;
  if (lVar11 == 0x7ffffffffffffff) {
    _Xlength();
    pcVar1 = (code *)swi(3);
    pbVar3 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)(*pcVar1)()
    ;
    return pbVar3;
  }
  uVar12 = lVar11 + 1;
  uVar4 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pbVar3 >> 5;
  if (0x7ffffffffffffff - (uVar4 >> 1) < uVar4) {
LAB_14fb8a5f5:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar4 = (uVar4 >> 1) + uVar4;
  uVar13 = uVar12;
  if (uVar12 <= uVar4) {
    uVar13 = uVar4;
  }
  if (0x7ffffffffffffff < uVar13) goto LAB_14fb8a5f5;
  uVar13 = uVar13 * 0x20;
  if (uVar13 < 0x1000) {
    if (uVar13 == 0) {
      pbVar10 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)0x0;
    }
    else {
      pbVar10 = ::operator_new(uVar13);
    }
  }
  else {
    if (uVar13 + 0x27 <= uVar13) goto LAB_14fb8a5f5;
    pvVar2 = ::operator_new(uVar13 + 0x27);
    if (pvVar2 == (void *)0x0) goto LAB_14fb8a5ee;
    pbVar10 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)(pbVar10 + -8) = pvVar2;
  }
  this_00 = pbVar10 + ((longlong)param_1 - (longlong)pbVar3 & 0xffffffffffffffe0);
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)this_00,
             (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_2);
  pbVar7 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           (this->_Mypair)._Myval2._Mylast;
  pbVar5 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           (this->_Mypair)._Myval2._Myfirst;
  pbVar9 = pbVar10;
  if (param_1 != pbVar7) {
    _Uninitialized_move<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>*___ptr64,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
              (pbVar5,param_1,pbVar10,
               (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                *)this);
    pbVar7 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(this->_Mypair)._Myval2._Mylast;
    pbVar5 = param_1;
    pbVar9 = this_00 + 0x20;
  }
  _Uninitialized_move<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>*___ptr64,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (pbVar5,pbVar7,pbVar9,
             (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
              *)this);
  pbVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (pbVar3 != (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0) {
    pbVar6 = (this->_Mypair)._Myval2._Mylast;
    for (; pbVar3 != pbVar6; pbVar3 = pbVar3 + 1) {
      basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
                (pbVar3);
    }
    pbVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar8 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pbVar3 & 0xffffffffffffffe0;
    pbVar6 = pbVar3;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      pbVar6 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               pbVar3[-1]._Mypair._Myval2._Myres;
      if (0x1f < (ulonglong)((longlong)pbVar3 + (-8 - (longlong)pbVar6))) {
LAB_14fb8a5ee:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pbVar6,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)pbVar10;
  (this->_Mypair)._Myval2._Mylast =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
       (pbVar10 + uVar12 * 0x20);
  (this->_Mypair)._Myval2._Myend =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
       (pbVar10 + uVar13);
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)this_00;
}

// _Get_size_of_n<2> @ 14fb8a610

/* unsigned __int64 __cdecl std::_Get_size_of_n<2>(unsigned __int64) */

__uint64 __cdecl std::_Get_size_of_n<2>(__uint64 param_1)

{
  if (param_1 < 0x8000000000000000) {
    return param_1 * 2;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Get_unwrapped<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>*___ptr64_const&___ptr64> @ 14fb8a640

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > * __ptr64 const & __ptr64>(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64 const & __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::
_Get_unwrapped<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>*___ptr64_const&___ptr64>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **param_1)

{
  return *param_1;
}

// _Insert_string<wchar_t,std::char_traits<wchar_t>,unsigned___int64> @ 14fb8a650

/* class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> > & __ptr64 __cdecl
   std::_Insert_string<wchar_t,struct std::char_traits<wchar_t>,unsigned __int64>(class
   std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> > & __ptr64,wchar_t const * __ptr64
   const,unsigned __int64) */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __cdecl
std::_Insert_string<wchar_t,std::char_traits<wchar_t>,unsigned___int64>
          (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,wchar_t *param_2,
          __uint64 param_3)

{
  bool bVar1;
  bool bVar2;
  wchar_t wVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  __int64 _Var7;
  ulonglong uVar8;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar9;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  __uint64 _Var10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = 0;
  _Var7 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  lVar12 = lVar11;
  if ((0 < _Var7) &&
     (uVar8 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     param_3 < uVar8)) {
    _Var7 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar12 = _Var7 - param_3;
  }
  pbVar9 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar9 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar9->_padding_ + 8))(pbVar9);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::tie
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0) ||
       (this == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 == false) {
    iVar6 = 4;
  }
  else {
    uVar5 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar5 & 0x1c0) != 0x40) {
      for (; lVar12 != 0; lVar12 = lVar12 + -1) {
        pbVar9 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                          ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(pbVar9,wVar3);
        if (uVar4 == 0xffff) {
          lVar11 = 4;
          goto LAB_14fb8a7e0;
        }
      }
    }
    pbVar9 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                       ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                        (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    _Var10 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputn(pbVar9,param_2,param_3)
    ;
    if (_Var10 == param_3) {
LAB_14fb8a7e0:
      do {
        iVar6 = (int)lVar11;
        if (lVar12 == 0) goto LAB_14fb8a829;
        pbVar9 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                          ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(pbVar9,wVar3);
        if (uVar4 == 0xffff) break;
        lVar12 = lVar12 + -1;
      } while( true );
    }
    iVar6 = 4;
LAB_14fb8a829:
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar6,false);
  iVar6 = uncaught_exceptions();
  if (iVar6 == 0) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx
              ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)param_1);
  }
  pbVar9 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar9 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar9->_padding_ + 0x10))(pbVar9);
  }
  return (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)param_1;
}

// _Pocca<std::allocator<wchar_t>_> @ 14fb8a8c0

/* void __cdecl std::_Pocca<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> const & __ptr64) */

void __cdecl
std::_Pocca<std::allocator<wchar_t>_>(allocator<wchar_t> *param_1,allocator<wchar_t> *param_2)

{
  return;
}

// _Pocma<std::allocator<wchar_t>_> @ 14fb8a8d0

/* void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> & __ptr64) */

void __cdecl
std::_Pocma<std::allocator<wchar_t>_>(allocator<wchar_t> *param_1,allocator<wchar_t> *param_2)

{
  return;
}

// _Reallocate_for<`public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign(wchar_t_const*___ptr64_const,unsigned___int64)___ptr64'::`2'::<lambda_1>,wchar_t_const*___ptr64> @ 14fb8a8e0

/* private: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_for<class `public: class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &
   __ptr64 __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::assign(wchar_t const * __ptr64 const,unsigned __int64)
   __ptr64'::`2'::<lambda_1>,wchar_t const * __ptr64>(unsigned __int64,class `public: class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &
   __ptr64 __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::assign(wchar_t const * __ptr64 const,unsigned __int64)
   __ptr64'::`2'::<lambda_1>,wchar_t const * __ptr64) __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Reallocate_for<_public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign(wchar_t_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,wchar_t_const*___ptr64>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ulonglong param_1,undefined8 param_3,void *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *_Dst;
  
  uVar7 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar6 = param_1 | 7;
  uVar2 = (this->_Mypair)._Myval2._Myres;
  _Dst = (wchar_t *)0x0;
  if (uVar6 < 0x7fffffffffffffff) {
    if (0x7ffffffffffffffe - (uVar2 >> 1) < uVar2) {
      uVar6 = 0xfffffffffffffffe;
      goto LAB_14fb8a98b;
    }
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto LAB_14fb8aa50;
    uVar6 = (uVar7 + 1) * 2;
    if (0xfff < uVar6) goto LAB_14fb8a98b;
    if (uVar6 != 0) {
      _Dst = ::operator_new(uVar6);
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
LAB_14fb8a98b:
    if (uVar6 + 0x27 <= uVar6) {
LAB_14fb8aa50:
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    pvVar4 = ::operator_new(uVar6 + 0x27);
    if (pvVar4 == (void *)0x0) goto LAB_14fb8aa43;
    _Dst = (wchar_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -4) = pvVar4;
  }
  (this->_Mypair)._Myval2._Myres = uVar7;
  (this->_Mypair)._Myval2._Mysize = param_1;
  memcpy(_Dst,param_4,param_1 * 2);
  _Dst[param_1] = L'\0';
  if (7 < uVar2) {
    pwVar3 = (this->_Mypair)._Myval2._Bx._Ptr;
    uVar7 = uVar2 * 2 + 2;
    pwVar5 = pwVar3;
    if (0xfff < uVar7) {
      pwVar5 = *(wchar_t **)(pwVar3 + -4);
      uVar7 = uVar2 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pwVar3 + (-8 - (longlong)pwVar5))) {
LAB_14fb8aa43:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pwVar5,uVar7);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}

// _Reallocate_grow_by<`public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert(unsigned___int64,wchar_t_const*___ptr64_const,unsigned___int64)___ptr64'::`2'::<lambda_1>,unsigned___int64,wchar_t_const*___ptr64,unsigned___int64> @ 14fb8aa60

/* private: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class `public:
   class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   & __ptr64 __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::insert(unsigned __int64,wchar_t const * __ptr64 const,unsigned
   __int64) __ptr64'::`2'::<lambda_1>,unsigned __int64,wchar_t const * __ptr64,unsigned
   __int64>(unsigned __int64,class `public: class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > & __ptr64 __cdecl
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >::insert(unsigned __int64,wchar_t const * __ptr64 const,unsigned __int64)
   __ptr64'::`2'::<lambda_1>,unsigned __int64,wchar_t const * __ptr64,unsigned __int64) __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Reallocate_grow_by<_public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert(unsigned___int64,wchar_t_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,unsigned___int64,wchar_t_const*___ptr64,unsigned___int64>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ulonglong param_1,undefined8 param_3,longlong param_4,void *param_5,longlong param_6)

{
  ulonglong uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  wchar_t *_Src;
  size_t _Size;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *_Dst;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar3 = (this->_Mypair)._Myval2._Myres;
  uVar5 = uVar2 + param_1 | 7;
  if (uVar5 < 0x7fffffffffffffff) {
    if (0x7ffffffffffffffe - (uVar3 >> 1) < uVar3) {
      uVar5 = 0xfffffffffffffffe;
      goto LAB_14fb8ab1c;
    }
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto LAB_14fb8ac60;
    uVar5 = (uVar6 + 1) * 2;
    if (0xfff < uVar5) goto LAB_14fb8ab1c;
    if (uVar5 == 0) {
      _Dst = (wchar_t *)0x0;
    }
    else {
      _Dst = ::operator_new(uVar5);
    }
  }
  else {
    uVar5 = 0xfffffffffffffffe;
LAB_14fb8ab1c:
    if (uVar5 + 0x27 <= uVar5) {
LAB_14fb8ac60:
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    pvVar4 = ::operator_new(uVar5 + 0x27);
    if (pvVar4 == (void *)0x0) goto LAB_14fb8abfc;
    _Dst = (wchar_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -4) = pvVar4;
  }
  (this->_Mypair)._Myval2._Mysize = uVar2 + param_1;
  (this->_Mypair)._Myval2._Myres = uVar6;
  _Size = param_4 * 2;
  if (uVar3 < 8) {
    memcpy(_Dst,this,_Size);
    memcpy(_Dst + param_4,param_5,param_6 * 2);
    memcpy(_Dst + param_4 + param_6,(void *)((longlong)&(this->_Mypair)._Myval2._Bx + _Size),
           (uVar2 - param_4) * 2 + 2);
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,_Size);
    memcpy(_Dst + param_4,param_5,param_6 * 2);
    memcpy(_Dst + param_4 + param_6,_Src + param_4,(uVar2 - param_4) * 2 + 2);
    uVar6 = uVar3 * 2 + 2;
    pwVar7 = _Src;
    if (0xfff < uVar6) {
      pwVar7 = *(wchar_t **)(_Src + -4);
      uVar6 = uVar3 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pwVar7))) {
LAB_14fb8abfc:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pwVar7,uVar6);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}

// _Traits_equal<std::char_traits<wchar_t>_> @ 14fb8ac70

/* bool __cdecl std::_Traits_equal<struct std::char_traits<wchar_t> >(wchar_t const * __ptr64
   const,unsigned __int64,wchar_t const * __ptr64 const,unsigned __int64) */

bool __cdecl
std::_Traits_equal<std::char_traits<wchar_t>_>
          (wchar_t *param_1,__uint64 param_2,wchar_t *param_3,__uint64 param_4)

{
  longlong lVar1;
  
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_3;
    do {
      if (*(wchar_t *)(lVar1 + (longlong)param_3) != *param_3) {
        return false;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return true;
}

// _Unfancy<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8acb0

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   * __ptr64 __cdecl std::_Unfancy<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::_Unfancy<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1)

{
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// _Unfancy<wchar_t> @ 14fb8acc0

/* wchar_t * __ptr64 __cdecl std::_Unfancy<wchar_t>(wchar_t * __ptr64) */

wchar_t * __cdecl std::_Unfancy<wchar_t>(wchar_t *param_1)

{
  return param_1;
}

// _Uninitialized_move<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>*___ptr64,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8acd0

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   * __ptr64 __cdecl std::_Uninitialized_move<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > * __ptr64,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   > * __ptr64 const,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64 const,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > * __ptr64,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > > &
   __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::
_Uninitialized_move<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>*___ptr64,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_2,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_3,
          allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          *param_4)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  ulong64 uVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar4 = (longlong)param_3 - (longlong)param_1;
    pbVar3 = param_1 + 0x18;
    do {
      *(undefined8 *)param_3 = 0;
      *(undefined8 *)(param_3 + 8) = 0;
      *(undefined8 *)(pbVar3 + 0x20 + lVar4 + -0x28) = 0;
      pbVar1 = pbVar3 + 8;
      *(undefined8 *)(pbVar3 + lVar4) = 0;
      uVar2 = *(ulong64 *)(pbVar3 + -0x10);
      *(ulong64 *)param_3 = *(ulong64 *)(pbVar3 + -0x18);
      *(ulong64 *)(param_3 + 8) = uVar2;
      uVar2 = *(ulong64 *)pbVar3;
      *(ulong64 *)(param_3 + 0x10) = *(ulong64 *)(pbVar3 + -8);
      *(ulong64 *)(param_3 + 0x18) = uVar2;
      *(ulong64 *)(pbVar3 + -8) = 0;
      param_3 = param_3 + 0x20;
      *(ulong64 *)pbVar3 = 7;
      *(undefined2 *)(pbVar3 + -0x18) = 0;
      pbVar3 = pbVar3 + 0x20;
    } while (pbVar1 != param_2);
  }
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_3;
}

// addressof<std::_String_val<std::_Simple_types<wchar_t>_>_const_> @ 14fb8ad40

/* class std::_String_val<struct std::_Simple_types<wchar_t> > const * __ptr64 __cdecl
   std::addressof<class std::_String_val<struct std::_Simple_types<wchar_t> > const >(class
   std::_String_val<struct std::_Simple_types<wchar_t> > const & __ptr64) */

_String_val<std::_Simple_types<wchar_t>_> * __cdecl
std::addressof<std::_String_val<std::_Simple_types<wchar_t>_>_const_>
          (_String_val<struct_std::_Simple_types<wchar_t>_> *param_1)

{
  return (_String_val<std::_Simple_types<wchar_t>_> *)param_1;
}

// addressof<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_> @ 14fb8ad50

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   const * __ptr64 __cdecl std::addressof<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const >(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::addressof<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const_>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1)

{
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// addressof<wchar_t_const_> @ 14fb8ad60

/* wchar_t const * __ptr64 __cdecl std::addressof<wchar_t const >(wchar_t const & __ptr64) */

wchar_t * __cdecl std::addressof<wchar_t_const_>(wchar_t *param_1)

{
  return param_1;
}

// addressof<wchar_t*___ptr64> @ 14fb8ad70

/* wchar_t * __ptr64 * __ptr64 __cdecl std::addressof<wchar_t * __ptr64>(wchar_t * __ptr64 &
   __ptr64) */

wchar_t ** __cdecl std::addressof<wchar_t*___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// addressof<std::_String_val<std::_Simple_types<wchar_t>_>_> @ 14fb8ad80

/* class std::_String_val<struct std::_Simple_types<wchar_t> > * __ptr64 __cdecl
   std::addressof<class std::_String_val<struct std::_Simple_types<wchar_t> > >(class
   std::_String_val<struct std::_Simple_types<wchar_t> > & __ptr64) */

_String_val<std::_Simple_types<wchar_t>_> * __cdecl
std::addressof<std::_String_val<std::_Simple_types<wchar_t>_>_>
          (_String_val<struct_std::_Simple_types<wchar_t>_> *param_1)

{
  return (_String_val<std::_Simple_types<wchar_t>_> *)param_1;
}

// addressof<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8ad90

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   * __ptr64 __cdecl std::addressof<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &
   __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::addressof<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1)

{
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// addressof<std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8ada0

/* class std::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   > * __ptr64 __cdecl std::addressof<class std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >(class
   std::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &
   __ptr64) */

basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::addressof<std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (basic_stringbuf<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1)

{
  return (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// addressof<wchar_t> @ 14fb8adb0

/* wchar_t * __ptr64 __cdecl std::addressof<wchar_t>(wchar_t & __ptr64) */

wchar_t * __cdecl std::addressof<wchar_t>(wchar_t *param_1)

{
  return param_1;
}

// construct<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_const&___ptr64> @ 14fb8adc0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::construct<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64>(class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > > &
   __ptr64,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64 const,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
construct<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_const&___ptr64>
          (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_3)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (param_2,(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     param_3);
  return;
}

// construct<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_> @ 14fb8ade0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::construct<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > >(class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > & __ptr64,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64 const,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > && __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
construct<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_>
          (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_3)

{
  undefined8 uVar1;
  ulong64 uVar2;
  
  (param_2->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(param_2->_Mypair)._Myval2._Bx + 8) = 0;
  (param_2->_Mypair)._Myval2._Mysize = 0;
  (param_2->_Mypair)._Myval2._Myres = 0;
  uVar1 = *(undefined8 *)(param_3 + 8);
  (param_2->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)param_3;
  *(undefined8 *)((longlong)&(param_2->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(param_3 + 0x18);
  (param_2->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_3 + 0x10);
  (param_2->_Mypair)._Myval2._Myres = uVar2;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 7;
  *(undefined2 *)param_3 = 0;
  return;
}

// construct_at<wchar_t*___ptr64,wchar_t*___ptr64&___ptr64,0> @ 14fb8ae20

/* wchar_t * __ptr64 * __ptr64 __cdecl std::construct_at<wchar_t * __ptr64,wchar_t * __ptr64 &
   __ptr64,0>(wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 & __ptr64) */

wchar_t ** __cdecl
std::construct_at<wchar_t*___ptr64,wchar_t*___ptr64&___ptr64,0>(wchar_t **param_1,wchar_t **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<wchar_t*___ptr64,wchar_t*___ptr64_const&___ptr64,0> @ 14fb8ae30

/* wchar_t * __ptr64 * __ptr64 __cdecl std::construct_at<wchar_t * __ptr64,wchar_t * __ptr64 const &
   __ptr64,0>(wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 const & __ptr64) */

wchar_t ** __cdecl
std::construct_at<wchar_t*___ptr64,wchar_t*___ptr64_const&___ptr64,0>
          (wchar_t **param_1,wchar_t **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_const&___ptr64,0> @ 14fb8ae40

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   * __ptr64 __cdecl std::construct_at<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64,0>(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64 const,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::
construct_at<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>_const&___ptr64,0>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_2)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  
  pbVar1 = basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
           basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                     ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                      param_1,(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                               *)param_2);
  return pbVar1;
}

// construct_at<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>,0> @ 14fb8ae50

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   * __ptr64 __cdecl std::construct_at<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,0>(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64 const,class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > && __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::
construct_at<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>,0>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 7;
  *(undefined2 *)param_2 = 0;
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// construct_at<wchar_t,0> @ 14fb8ae90

/* wchar_t * __ptr64 __cdecl std::construct_at<wchar_t,0>(wchar_t * __ptr64 const) */

wchar_t * __cdecl std::construct_at<wchar_t,0>(wchar_t *param_1)

{
  *param_1 = L'\0';
  return param_1;
}

// construct_at<wchar_t,wchar_t_const&___ptr64,0> @ 14fb8aea0

/* wchar_t * __ptr64 __cdecl std::construct_at<wchar_t,wchar_t const & __ptr64,0>(wchar_t * __ptr64
   const,wchar_t const & __ptr64) */

wchar_t * __cdecl
std::construct_at<wchar_t,wchar_t_const&___ptr64,0>(wchar_t *param_1,wchar_t *param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// destroy<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8aeb0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::destroy<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > >(class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > & __ptr64,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64 const) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::destroy<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
            (param_2);
  return;
}

// destroy_at<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8aec0

/* void __cdecl std::destroy_at<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64 const) */

void __cdecl
std::destroy_at<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
            (param_1);
  return;
}

// forward<wchar_t*___ptr64&___ptr64> @ 14fb8aed0

/* wchar_t * __ptr64 & __ptr64 __cdecl std::forward<wchar_t * __ptr64 & __ptr64>(wchar_t * __ptr64 &
   __ptr64) */

wchar_t ** __cdecl std::forward<wchar_t*___ptr64&___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// forward<wchar_t*___ptr64_const&___ptr64> @ 14fb8aee0

/* wchar_t * __ptr64 const & __ptr64 __cdecl std::forward<wchar_t * __ptr64 const & __ptr64>(wchar_t
   * __ptr64 const & __ptr64) */

wchar_t ** __cdecl std::forward<wchar_t*___ptr64_const&___ptr64>(wchar_t **param_1)

{
  return param_1;
}

// forward<std::allocator<wchar_t>_const&___ptr64> @ 14fb8aef0

/* class std::allocator<wchar_t> const & __ptr64 __cdecl std::forward<class std::allocator<wchar_t>
   const & __ptr64>(class std::allocator<wchar_t> const & __ptr64) */

allocator<wchar_t> * __cdecl
std::forward<std::allocator<wchar_t>_const&___ptr64>(allocator<wchar_t> *param_1)

{
  return param_1;
}

// forward<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64> @ 14fb8af00

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   const & __ptr64 __cdecl std::forward<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64>(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::
forward<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1)

{
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// forward<wchar_t_const&___ptr64> @ 14fb8af10

/* wchar_t const & __ptr64 __cdecl std::forward<wchar_t const & __ptr64>(wchar_t const & __ptr64) */

wchar_t * __cdecl std::forward<wchar_t_const&___ptr64>(wchar_t *param_1)

{
  return param_1;
}

// forward<std::allocator<wchar_t>_> @ 14fb8af20

/* class std::allocator<wchar_t> && __ptr64 __cdecl std::forward<class std::allocator<wchar_t>
   >(class std::allocator<wchar_t> & __ptr64) */

allocator<wchar_t> * __cdecl std::forward<std::allocator<wchar_t>_>(allocator<wchar_t> *param_1)

{
  return param_1;
}

// forward<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8af30

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   && __ptr64 __cdecl std::forward<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &
   __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::forward<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1)

{
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// FUN_14fb8b010 @ 14fb8b010

ulonglong FUN_14fb8b010(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *param_1 - 0x61;
  uVar3 = (ulonglong)uVar2;
  if ((((ushort)uVar2 < 0x1a) || ((ushort)(*param_1 - 0x41) < 0x1a)) && (param_1[1] == 0x3a)) {
    uVar1 = param_1[2];
    uVar3 = (ulonglong)uVar1;
    if ((uVar1 == 0x2f) || (uVar1 == 0x5c)) {
      return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

// max<wchar_t*___ptr64> @ 14fb8b090

/* wchar_t * __ptr64 const & __ptr64 __cdecl std::max<wchar_t * __ptr64>(wchar_t * __ptr64 const &
   __ptr64,wchar_t * __ptr64 const & __ptr64) */

wchar_t ** __cdecl std::max<wchar_t*___ptr64>(wchar_t **param_1,wchar_t **param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// move<std::allocator<wchar_t>&___ptr64> @ 14fb8b0b0

/* class std::allocator<wchar_t> && __ptr64 __cdecl std::move<class std::allocator<wchar_t> &
   __ptr64>(class std::allocator<wchar_t> & __ptr64) */

allocator<wchar_t> * __cdecl
std::move<std::allocator<wchar_t>&___ptr64>(allocator<wchar_t> *param_1)

{
  return param_1;
}

// move<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>&___ptr64> @ 14fb8b0c0

/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   && __ptr64 __cdecl std::move<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > & __ptr64>(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &
   __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
std::move<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>&___ptr64>
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *param_1)

{
  return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1;
}

// _String_val<std::_Simple_types<wchar_t>_> @ 14fb8b110

/* public: __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::_String_val<struct
   std::_Simple_types<wchar_t> >(void) __ptr64 */

_String_val<std::_Simple_types<wchar_t>_> * __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::_String_val<std::_Simple_types<wchar_t>_>
          (_String_val<std::_Simple_types<wchar_t>_> *this)

{
  (this->_Bx)._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&this->_Bx + 8) = 0;
  this->_Mysize = 0;
  this->_Myres = 0;
  return this;
}

// _Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8b130

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Uninitialized_backout_al<class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64,class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > & __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
* __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this,basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          *param_2)

{
  *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)this = param_1;
  *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)(this + 8) = param_1
  ;
  *(allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> **)
   (this + 0x10) = param_2;
  return this;
}

// _Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8b150

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >::_Vector_val<struct
   std::_Simple_types<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > > >(void) __ptr64 */

_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
* __thiscall
std::
_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  this->_Myfirst = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  this->_Mylast = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  this->_Myend = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  return this;
}

// allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> @ 14fb8b170

/* public: __cdecl std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   >(void) __ptr64 */

allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> *
__thiscall
std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this)

{
  return this;
}

// allocator<wchar_t> @ 14fb8b180

/* public: __cdecl std::allocator<wchar_t>::allocator<wchar_t>(void) __ptr64 */

allocator<wchar_t> * __thiscall
std::allocator<wchar_t>::allocator<wchar_t>(allocator<wchar_t> *this)

{
  return this;
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b190

/* public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > && __ptr64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  (this->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)param_1;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(param_1 + 0x18);
  (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
  (this->_Mypair)._Myval2._Myres = uVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined2 *)param_1 = 0;
  return this;
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b1d0

/* public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64,unsigned __int64,unsigned __int64,class
   std::allocator<wchar_t> const & __ptr64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1,__uint64 param_2,__uint64 param_3,allocator<wchar_t> *param_4)

{
  ulonglong uVar1;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  if (param_2 <= *(ulonglong *)(param_1 + 0x10)) {
    uVar1 = *(ulonglong *)(param_1 + 0x10) - param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    if (7 < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  **)param_1;
    }
    _Construct<1,wchar_t_const_*>(this,(wchar_t *)(param_1 + param_2 * 2),param_3);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _String_val<std::_Simple_types<wchar_t>_>::_Xran();
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b230

/* public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::allocator<wchar_t> const & __ptr64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          allocator<wchar_t> *param_1)

{
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 7;
  (this->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  return this;
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b260

/* public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(wchar_t const * __ptr64 const) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1)

{
  ulong64 uVar1;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_1[uVar1] != L'\0');
  _Construct<1,wchar_t_const_*>(this,param_1,uVar1);
  return this;
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b2a0

/* public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(struct std::_String_constructor_concat_tag,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64,wchar_t const * __ptr64 const,unsigned __int64,wchar_t const * __ptr64 const,unsigned
   __int64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          _String_constructor_concat_tag param_1,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_2,wchar_t *param_3,__uint64 param_4,wchar_t *param_5,__uint64 param_6)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *_Dst;
  
  pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  uVar4 = 7;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  uVar1 = param_4 + param_6;
  _Dst = this;
  if (uVar1 < 8) goto LAB_14fb8b390;
  uVar4 = uVar1 | 7;
  if (uVar4 < 0x7fffffffffffffff) {
    if (uVar4 < 10) {
      uVar4 = 10;
    }
    if (0x7fffffffffffffff < uVar4 + 1) goto LAB_14fb8b3e1;
    uVar3 = (uVar4 + 1) * 2;
    if (0xfff < uVar3) goto LAB_14fb8b34c;
    if (uVar3 != 0) {
      pbVar5 = ::operator_new(uVar3);
    }
  }
  else {
    uVar3 = 0xfffffffffffffffe;
    uVar4 = 0x7ffffffffffffffe;
LAB_14fb8b34c:
    if (uVar3 + 0x27 <= uVar3) {
LAB_14fb8b3e1:
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    pvVar2 = ::operator_new(uVar3 + 0x27);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             ((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    pbVar5[-1]._Mypair._Myval2._Myres = (ulong64)pvVar2;
  }
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)pbVar5;
  _Dst = pbVar5;
LAB_14fb8b390:
  (this->_Mypair)._Myval2._Myres = uVar4;
  (this->_Mypair)._Myval2._Mysize = uVar1;
  memcpy(_Dst,param_3,param_4 * 2);
  memcpy((void *)((longlong)&(_Dst->_Mypair)._Myval2._Bx + param_4 * 2),param_5,param_6 * 2);
  (_Dst->_Mypair)._Myval2._Bx._Buf[uVar1] = L'\0';
  return this;
}

// basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b3f0

/* public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  (this->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 7;
  (this->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  return this;
}

// basic_string_view<wchar_t,std::char_traits<wchar_t>_> @ 14fb8b420

/* public: __cdecl std::basic_string_view<wchar_t,struct std::char_traits<wchar_t>
   >::basic_string_view<wchar_t,struct std::char_traits<wchar_t> >(wchar_t const * __ptr64 const)
   __ptr64 */

basic_string_view<wchar_t,std::char_traits<wchar_t>_> * __thiscall
std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::
basic_string_view<wchar_t,std::char_traits<wchar_t>_>
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1)

{
  ulong64 uVar1;
  
  this->_Mydata = param_1;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_1[uVar1] != L'\0');
  this->_Mysize = uVar1;
  return this;
}

// basic_string_view<wchar_t,std::char_traits<wchar_t>_> @ 14fb8b450

/* public: __cdecl std::basic_string_view<wchar_t,struct std::char_traits<wchar_t>
   >::basic_string_view<wchar_t,struct std::char_traits<wchar_t> >(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64 */

basic_string_view<wchar_t,std::char_traits<wchar_t>_> * __thiscall
std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::
basic_string_view<wchar_t,std::char_traits<wchar_t>_>
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *this,wchar_t *param_1,
          __uint64 param_2)

{
  this->_Mydata = param_1;
  this->_Mysize = param_2;
  return this;
}

// basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b470

/* public: __cdecl std::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(int) __ptr64 */

basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          int param_1)

{
  uint uVar1;
  uint uVar2;
  
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  this->_Seekhigh = (wchar_t *)0x0;
  this->_padding_ = (longlong)vftable;
  uVar2 = (~param_1 & 1U) << 2;
  uVar1 = uVar2 | 2;
  if ((param_1 & 2U) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 8;
  if ((param_1 & 8U) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x10;
  if ((param_1 & 4U) == 0) {
    uVar1 = uVar2;
  }
  this->_Mystate = uVar1;
  return this;
}

// basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b4e0

/* public: __cdecl std::basic_stringstream<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_stringstream<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void) __ptr64 */

basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined **)this = &_vbtable__for__std__basic_istream<wchar_t,std::char_traits<wchar_t>_>__;
    *(undefined8 **)(this + 0x10) =
         &_vbtable__for__std__basic_ostream<wchar_t,std::char_traits<wchar_t>_>__;
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(this + 0x98));
  }
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)this,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(this + 0x18));
  *(undefined ***)(this + *(int *)(*(longlong *)this + 4)) = vftable;
  *(int *)(this + (longlong)*(int *)(*(longlong *)this + 4) + -4) =
       *(int *)(*(longlong *)this + 4) + -0x98;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(this + 0x18));
  *(undefined ***)(this + 0x18) =
       basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  return this;
}

// vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8b5a0

/* public: __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::vector<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >,class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >(void) __ptr64 */

vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
* __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  (this->_Mypair)._Myval2._Myfirst =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  (this->_Mypair)._Myval2._Mylast =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  (this->_Mypair)._Myval2._Myend =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  return this;
}

// _Bxty @ 14fb8b5c0

/* public: __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::_Bxty::_Bxty(void) __ptr64
    */

_Bxty * __thiscall std::_String_val<std::_Simple_types<wchar_t>_>::_Bxty::_Bxty(_Bxty *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Sentry_base @ 14fb8b5d0

/* public: __cdecl std::basic_ostream<wchar_t,struct std::char_traits<wchar_t>
   >::_Sentry_base::_Sentry_base(class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> >
   & __ptr64) __ptr64 */

_Sentry_base * __thiscall
std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Sentry_base::_Sentry_base
          (_Sentry_base *this,basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  
  *(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> **)this = param_1;
  pbVar1 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar1 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar1->_padding_ + 8))(pbVar1);
  }
  return this;
}

// sentry @ 14fb8b610

/* public: __cdecl std::basic_ostream<wchar_t,struct std::char_traits<wchar_t>
   >::sentry::sentry(class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> > & __ptr64)
   __ptr64 */

sentry * __thiscall
std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::sentry::sentry
          (sentry *this,basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  bool bVar1;
  sentry sVar2;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar3;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this_00;
  
  *(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> **)this = param_1;
  pbVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar3 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar3->_padding_ + 8))(pbVar3);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  sVar2 = (sentry)0x0;
  if (bVar1) {
    this_00 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::tie
                        ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                         (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this_00 == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0) ||
       (this_00 == (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)param_1)) {
      sVar2 = (sentry)0x1;
    }
    else {
      std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(this_00);
      sVar2 = (sentry)std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))
                                         );
    }
  }
  this[8] = sVar2;
  return this;
}

// ~_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1> @ 14fb8b6b0

/* public: __cdecl std::_Compressed_pair<class std::allocator<wchar_t>,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1>::~_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>(void) __ptr64 */

void __thiscall
std::_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>::
~_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>
          (_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>
           *this)

{
  return;
}

// ~_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64> @ 14fb8b6c0

/* public: __cdecl std::_Func_class<void,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64>::~_Func_class<void,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64>(void) __ptr64 */

void __thiscall
std::
_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::
~_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
          (_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
           *this)

{
  _Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
  *p_Var1;
  
  p_Var1 = *(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
             **)(this + 0x38);
  if (p_Var1 != (_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
                 *)0x0) {
    (**(code **)(*(longlong *)p_Var1 + 0x20))(p_Var1,p_Var1 != this);
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

// ~_String_val<std::_Simple_types<wchar_t>_> @ 14fb8b700

/* public: __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::~_String_val<struct
   std::_Simple_types<wchar_t> >(void) __ptr64 */

void __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::~_String_val<std::_Simple_types<wchar_t>_>
          (_String_val<std::_Simple_types<wchar_t>_> *this)

{
  return;
}

// ~_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8b710

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::~_Uninitialized_backout_al<class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >(void) __ptr64 */

void __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
~_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this_00;
  
  pbVar1 = *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)(this + 8);
  for (this_00 = *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)this;
      this_00 != pbVar1; this_00 = this_00 + 1) {
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
              (this_00);
  }
  return;
}

// ~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b750

/* public: virtual __cdecl std::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::~basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void) __ptr64 */

void __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_Mystate & 1) != 0) {
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if (pwVar1 == (wchar_t *)0x0) {
      pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    }
    else {
      pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    }
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    uVar3 = ((longlong)pwVar1 - (longlong)pwVar2 >> 1) * 2;
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    pwVar1 = pwVar2;
    if (0xfff < uVar3) {
      pwVar1 = *(wchar_t **)(pwVar2 + -4);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pwVar2 + (-8 - (longlong)pwVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pwVar1,uVar3);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,(wchar_t *)0x0,
             (wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,(wchar_t *)0x0,
             (wchar_t *)0x0);
  this->_Mystate = this->_Mystate & 0xfffffffe;
  this->_Seekhigh = (wchar_t *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014fb8b80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  return;
}

// ~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> @ 14fb8b820

/* public: virtual __cdecl std::basic_stringstream<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::~basic_stringstream<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void) __ptr64 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  *(undefined ***)(this + (longlong)*(int *)(*(longlong *)(this + -0x98) + 4) + -0x98) = vftable;
  *(int *)(this + (longlong)*(int *)(*(longlong *)(this + -0x98) + 4) + -0x9c) =
       *(int *)(*(longlong *)(this + -0x98) + 4) + -0x98;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this + -0x80));
                    /* WARNING: Could not recover jumptable at 0x00014fb8b86f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(this + -0x78));
  return;
}

// ~function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)> @ 14fb8b880

/* public: __cdecl std::function<void __cdecl(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::~function<void
   __cdecl(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64)>(void) __ptr64 */

void __thiscall
std::
function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::
~function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
          (function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
           *this)

{
  function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  *pfVar1;
  
  pfVar1 = *(function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
             **)(this + 0x38);
  if (pfVar1 != (function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
                 *)0x0) {
    (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != this);
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

// ~unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_> @ 14fb8b8c0

/* public: __cdecl std::unique_ptr<wchar_t [0],struct std::default_delete<wchar_t [0]>
   >::~unique_ptr<wchar_t [0],struct std::default_delete<wchar_t [0]> >(void) __ptr64 */

void __thiscall
std::unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_>::
~unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_>
          (unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::FreeExternal(pvVar1);
      return;
    }
    DoGamethreadHook(2);
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_> @ 14fb8b8e0

/* public: __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::~vector<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >,class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >(void) __ptr64 */

void __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::
~vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
          (vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  ulong64 uVar2;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar3;
  
  pbVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (pbVar3 != (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0) {
    pbVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
      basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
                (pbVar3);
    }
    pbVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pbVar3 & 0xffffffffffffffe0;
    pbVar1 = pbVar3;
    if (0xfff < uVar2) {
      pbVar1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               pbVar3[-1]._Mypair._Myval2._Myres;
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)((longlong)pbVar3 + (-8 - (longlong)pbVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pbVar1,uVar2);
    (this->_Mypair)._Myval2._Myfirst =
         (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  }
  return;
}

// ~_Bxty @ 14fb8b980

/* public: __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::_Bxty::~_Bxty(void)
   __ptr64 */

void __thiscall std::_String_val<std::_Simple_types<wchar_t>_>::_Bxty::~_Bxty(_Bxty *this)

{
  return;
}

// ~_Sentry_base @ 14fb8b990

/* public: __cdecl std::basic_ostream<wchar_t,struct std::char_traits<wchar_t>
   >::_Sentry_base::~_Sentry_base(void) __ptr64 */

void __thiscall
std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Sentry_base::~_Sentry_base
          (_Sentry_base *this)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  
  pbVar1 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      ((longlong)*(int *)(**(longlong **)this + 4) + (longlong)*(longlong **)this));
  if (pbVar1 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar1->_padding_ + 0x10))(pbVar1);
  }
  return;
}

// ~sentry @ 14fb8b9d0

/* public: __cdecl std::basic_ostream<wchar_t,struct std::char_traits<wchar_t>
   >::sentry::~sentry(void) __ptr64 */

void __thiscall
std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::sentry::~sentry(sentry *this)

{
  int iVar1;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar2;
  
  iVar1 = uncaught_exceptions();
  if (iVar1 == 0) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx
              (*(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)this);
  }
  pbVar2 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      ((longlong)*(int *)(**(longlong **)this + 4) + (longlong)*(longlong **)this));
  if (pbVar2 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(pbVar2->_padding_ + 0x10))(pbVar2);
  }
  return;
}

// operator= @ 14fb8ba20

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::operator=(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &&
   __ptr64) __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::operator=
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  
  if ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)this
      != param_1) {
    uVar6 = (this->_Mypair)._Myval2._Myres;
    if (7 < uVar6) {
      pwVar2 = (this->_Mypair)._Myval2._Bx._Ptr;
      lVar1 = uVar6 * 2;
      uVar6 = lVar1 + 2;
      pwVar5 = pwVar2;
      if (0xfff < uVar6) {
        pwVar5 = *(wchar_t **)(pwVar2 + -4);
        uVar6 = lVar1 + 0x29;
        if (0x1f < (ulonglong)((longlong)pwVar2 + (-8 - (longlong)pwVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pwVar5,uVar6);
    }
    (this->_Mypair)._Myval2._Myres = 7;
    (this->_Mypair)._Myval2._Mysize = 0;
    (this->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
    uVar3 = *(undefined8 *)(param_1 + 8);
    (this->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)param_1;
    *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar3;
    uVar4 = *(ulong64 *)(param_1 + 0x18);
    (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
    (this->_Mypair)._Myval2._Myres = uVar4;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 7;
    *(undefined2 *)param_1 = 0;
  }
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}

// operator= @ 14fb8bac0

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::operator=(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::operator=
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  
  if ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)this
      != param_1) {
    pbVar1 = param_1 + 0x10;
    if (7 < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  **)param_1;
    }
    assign(this,(wchar_t *)param_1,*(ulong64 *)pbVar1);
  }
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}

// operator[] @ 14fb8baf0

/* public: wchar_t const & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::operator[](unsigned __int64)const
   __ptr64 */

wchar_t * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::operator[]
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          __uint64 param_1)

{
  if (7 < (this->_Mypair)._Myval2._Myres) {
    return (this->_Mypair)._Myval2._Bx._Ptr + param_1;
  }
  return (wchar_t *)((longlong)&(this->_Mypair)._Myval2._Bx + param_1 * 2);
}

// operator[] @ 14fb8bb10

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::operator[](unsigned __int64) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::operator[](vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
             *this,__uint64 param_1)

{
  return (this->_Mypair)._Myval2._Myfirst + param_1;
}

// operator_bool @ 14fb8bb30

/* public: __cdecl std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> >::sentry::operator
   bool(void)const __ptr64 */

bool __thiscall
std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::sentry::operator_bool(sentry *this)

{
  return (bool)this[8];
}

// operator() @ 14fb8bb40

/* public: __cdecl `public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64'::`2'::<lambda_1>::operator()(wchar_t * __ptr64 const,wchar_t
   const * __ptr64 const,unsigned __int64,wchar_t const * __ptr64 const,unsigned __int64)const
   __ptr64 */

void __thiscall
`public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append(wchar_t_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,wchar_t *param_1,wchar_t *param_2,__uint64 param_3,wchar_t *param_4,
          __uint64 param_5)

{
  memcpy(param_1,param_2,param_3 * 2);
  memcpy(param_1 + param_3,param_4,param_5 * 2);
  param_1[param_3 + param_5] = L'\0';
  return;
}

// operator() @ 14fb8bbb0

/* public: __cdecl `public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64'::`2'::<lambda_1>::operator()(wchar_t * __ptr64 const,unsigned
   __int64,wchar_t const * __ptr64 const)const __ptr64 */

void __thiscall
`public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign(wchar_t_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,wchar_t *param_1,__uint64 param_2,wchar_t *param_3)

{
  memcpy(param_1,param_3,param_2 * 2);
  param_1[param_2] = L'\0';
  return;
}

// operator() @ 14fb8bbf0

/* public: __cdecl `public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::insert(unsigned __int64,wchar_t const
   * __ptr64 const,unsigned __int64) __ptr64'::`2'::<lambda_1>::operator()(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64,unsigned __int64,wchar_t const * __ptr64
   const,unsigned __int64)const __ptr64 */

void __thiscall
`public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert(unsigned___int64,wchar_t_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,wchar_t *param_1,wchar_t *param_2,__uint64 param_3,__uint64 param_4,
          wchar_t *param_5,__uint64 param_6)

{
  memcpy(param_1,param_2,param_4 * 2);
  memcpy(param_1 + param_4,param_5,param_6 * 2);
  memcpy(param_1 + param_4 + param_6,param_2 + param_4,(param_3 - param_4) * 2 + 2);
  return;
}

// operator() @ 14fb8bc80

/* public: void __cdecl std::_Func_class<void,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64>::operator()(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64)const __ptr64 */

void __thiscall
std::
_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::operator()(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
             *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  if (*(longlong **)(this + 0x38) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014fb8bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(this + 0x38) + 0x10))();
    return;
  }
  _Xbad_function_call();
  return;
}

// `vbase_destructor' @ 14fb8bcb0

/* public: void __cdecl std::basic_stringstream<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::`vbase destructor'(void) __ptr64 */

void __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_vbase_destructor_(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                   *this)

{
  basic_ios<wchar_t,std::char_traits<wchar_t>_> *this_00;
  
  this_00 = (basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(this + 0x98);
  *(undefined ***)((longlong)*(int *)(*(longlong *)this + 4) + -0x98 + (longlong)this_00) = vftable;
  *(int *)((longlong)*(int *)(*(longlong *)this + 4) + -0x9c + (longlong)this_00) =
       *(int *)(*(longlong *)this + 4) + -0x98;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this + 0x18));
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(this + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00014fb8bd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (this_00);
  return;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14fb8bd14

/* [thunk]:public: virtual void * __ptr64 __cdecl std::basic_stringstream<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::`vector deleting
   destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_vector_deleting_destructor__vtordisp_4294967292_0__
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_(this + -(longlong)*(int *)(this + -4),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14fb8bd30

/* public: void * __ptr64 __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::`scalar deleting destructor'(unsigned int) __ptr64 */

void * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_scalar_deleting_destructor_
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          uint param_1)

{
  _Tidy_deallocate(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fb8bd70

/* public: virtual void * __ptr64 __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::`scalar deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          uint param_1)

{
  ~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fb8bdb0

/* public: virtual void * __ptr64 __cdecl std::basic_stringstream<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::`scalar deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_scalar_deleting_destructor_
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          uint param_1)

{
  *(undefined ***)(this + (longlong)*(int *)(*(longlong *)(this + -0x98) + 4) + -0x98) = vftable;
  *(int *)(this + (longlong)*(int *)(*(longlong *)(this + -0x98) + 4) + -0x9c) =
       *(int *)(*(longlong *)(this + -0x98) + 4) + -0x98;
  basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this + -0x80));
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(this + -0x78));
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this + -0x98,0xf8);
  }
  return this + -0x98;
}

// ExpandWildcards @ 14fb8be50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum google::protobuf::io::win32::ExpandWildcardsResult __cdecl
   google::protobuf::io::win32::ExpandWildcards(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class std::function<void
   __cdecl(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64)>) */

ExpandWildcardsResult __cdecl
google::protobuf::io::win32::ExpandWildcards(byte *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  size_t _Size;
  char cVar4;
  int cbMultiByte;
  DWORD DVar5;
  BOOL BVar6;
  ExpandWildcardsResult extraout_EAX;
  ExpandWildcardsResult extraout_EAX_00;
  ExpandWildcardsResult extraout_EAX_01;
  HANDLE hFindFile;
  longlong lVar7;
  char *lpMultiByteStr;
  void *pvVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  WCHAR *pWVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  LPCWSTR ******pppppppWVar15;
  ulonglong uVar16;
  ulong64 uVar17;
  _Bxty *_Dst;
  _Bxty *p_Var18;
  int *piVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 **ppuVar22;
  ulonglong uVar23;
  undefined1 auStackY_488 [32];
  ExpandWildcardsResult local_448;
  LPCWSTR ******local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  ulonglong uStack_400;
  _Bxty local_3f8;
  ulonglong local_3e8;
  ulonglong local_3e0;
  _Bxty local_3d8;
  ulonglong local_3c8;
  ulonglong uStack_3c0;
  _Bxty local_3b8;
  size_t local_3a8;
  ulonglong uStack_3a0;
  char local_398 [256];
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  lVar11 = *(longlong *)(param_1 + 0x10);
  uVar16 = *(ulonglong *)(param_1 + 0x18);
  pbVar10 = param_1;
  if (0xf < uVar16) {
    pbVar10 = *(byte **)param_1;
  }
  if (lVar11 != 0) {
    memset(local_398,0,0x100);
    pbVar9 = &s___;
    do {
      local_398[*pbVar9] = '\x01';
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 != &DAT_1535dfe8a);
    pbVar9 = pbVar10;
    if (pbVar10 < pbVar10 + lVar11) {
      while (local_398[*pbVar9] == '\0') {
        pbVar9 = pbVar9 + 1;
        if (pbVar10 + lVar11 <= pbVar9) goto LAB_14fb8bf02;
      }
      if ((longlong)pbVar9 - (longlong)pbVar10 == -1) goto LAB_14fb8bf02;
      uStack_410 = 0;
      local_408 = ___xmm_00000000000000070000000000000000;
      uStack_400 = _UNK_15145b248;
      local_418 = (LPCWSTR ******)0x0;
      pbVar10 = param_1;
      if (0xf < uVar16) {
        pbVar10 = *(byte **)param_1;
      }
      cVar4 = FUN_14fb8d1f0(pbVar10,&local_418);
      if (cVar4 == '\0') {
        if (7 < uStack_400) {
          uVar16 = uStack_400 * 2 + 2;
          pppppppWVar15 = local_418;
          if (0xfff < uVar16) {
            uVar16 = uStack_400 * 2 + 0x29;
            pppppppWVar15 = (LPCWSTR ******)local_418[-1];
            if (0x1f < (ulonglong)((longlong)local_418 + (-8 - (longlong)pppppppWVar15)))
            goto LAB_14fb8c6be;
          }
          ::operator_delete(pppppppWVar15,uVar16);
        }
        local_408 = ___xmm_00000000000000070000000000000000;
        uStack_400 = _UNK_15145b248;
        local_418 = (LPCWSTR ******)((ulonglong)local_418 & 0xffffffffffff0000);
        plVar2 = (longlong *)param_2[7];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
          param_2[7] = 0;
        }
        return 2;
      }
      piVar19 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar19 < DAT_1553e57c0) && (_Init_thread_header(&DAT_1553e57c0), DAT_1553e57c0 == -1))
      {
        atexit(FUN_150474880);
        _Init_thread_footer(&DAT_1553e57c0);
      }
      if ((*piVar19 < DAT_1553e57c4) && (_Init_thread_header(&DAT_1553e57c4), DAT_1553e57c4 == -1))
      {
        atexit(FUN_150474900);
        _Init_thread_footer(&DAT_1553e57c4);
      }
      pppppppWVar15 = (LPCWSTR ******)&local_418;
      if (7 < uStack_400) {
        pppppppWVar15 = local_418;
      }
      hFindFile = FindFirstFileW((LPCWSTR)pppppppWVar15,&local_298);
      if (hFindFile == (HANDLE)0xffffffffffffffff) {
        if (7 < uStack_400) {
          uVar16 = uStack_400 * 2 + 2;
          pppppppWVar15 = local_418;
          if (0xfff < uVar16) {
            uVar16 = uStack_400 * 2 + 0x29;
            pppppppWVar15 = (LPCWSTR ******)local_418[-1];
            if (0x1f < (ulonglong)((longlong)local_418 + (-8 - (longlong)pppppppWVar15)))
            goto LAB_14fb8c6be;
          }
          ::operator_delete(pppppppWVar15,uVar16);
        }
        local_408 = ___xmm_00000000000000070000000000000000;
        uStack_400 = _UNK_15145b248;
        local_418 = (LPCWSTR ******)((ulonglong)local_418 & 0xffffffffffff0000);
        plVar2 = (longlong *)param_2[7];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
          param_2[7] = 0;
        }
        return 1;
      }
      uVar16 = *(ulonglong *)(param_1 + 0x10);
      pbVar10 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pbVar10 = *(byte **)param_1;
      }
      if (uVar16 == 0) goto LAB_14fb8c177;
      memset(local_398,0,0x100);
      pbVar9 = &s___;
      do {
        local_398[*pbVar9] = '\x01';
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != &DAT_1535010b2);
      lVar11 = -1;
      if (uVar16 - 1 != -1) {
        lVar11 = uVar16 - 1;
      }
      pbVar9 = pbVar10 + lVar11;
      cVar4 = local_398[*pbVar9];
      while (cVar4 == '\0') {
        if (pbVar9 == pbVar10) goto LAB_14fb8c177;
        pbVar9 = pbVar9 + -1;
        cVar4 = local_398[*pbVar9];
      }
      lVar11 = (longlong)pbVar9 - (longlong)pbVar10;
      goto LAB_14fb8c17e;
    }
  }
LAB_14fb8bf02:
  plVar2 = (longlong *)param_2[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    plVar2 = (longlong *)param_2[7];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
      param_2[7] = 0;
    }
    return 0;
  }
  std::_Xbad_function_call();
  return extraout_EAX;
LAB_14fb8c177:
  lVar11 = -1;
LAB_14fb8c17e:
  local_3b8._8_8_ = 0;
  local_3a8 = 0;
  uStack_3a0 = 0xf;
  local_3b8._Ptr = (char *)0x0;
  if (lVar11 != -1) {
    local_3d8._Ptr = (char *)0x0;
    local_3d8._8_8_ = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    uVar21 = lVar11 + 1U;
    if (uVar16 < lVar11 + 1U) {
      uVar21 = uVar16;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(byte **)param_1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_3d8,
               (char *)param_1,uVar21);
    local_3b8._Ptr = local_3d8._Ptr;
    local_3b8._8_8_ = local_3d8._8_8_;
    local_3a8 = local_3c8;
    uStack_3a0 = uStack_3c0;
  }
  uVar16 = uStack_3a0;
  _Size = local_3a8;
  local_448 = 1;
  uVar13 = local_3b8._Ptr;
  do {
    if (((byte)local_298.dwFileAttributes & 0x10) == 0) {
      lVar11 = -1;
      do {
        lVar7 = lVar11 + 1;
        lVar3 = lVar11 + 1;
        lVar11 = lVar7;
      } while (local_298.cFileName[lVar3] != L'\0');
      ppuVar22 = &DAT_154e21d30;
      if (7 < DAT_154e21d48) {
        ppuVar22 = (undefined8 **)DAT_154e21d30;
      }
      if (DAT_154e21d40 == lVar7) {
        pWVar12 = local_298.cFileName;
        if (DAT_154e21d40 != 0) {
          lVar11 = DAT_154e21d40;
          do {
            if (*(WCHAR *)((longlong)pWVar12 + ((longlong)ppuVar22 - (longlong)local_298.cFileName))
                != *pWVar12) goto LAB_14fb8c2a9;
            pWVar12 = pWVar12 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        goto LAB_14fb8c5cf;
      }
LAB_14fb8c2a9:
      lVar11 = -1;
      do {
        lVar7 = lVar11 + 1;
        lVar3 = lVar11 + 1;
        lVar11 = lVar7;
      } while (local_298.cFileName[lVar3] != L'\0');
      ppuVar22 = &DAT_154e21d50;
      if (7 < DAT_154e21d68) {
        ppuVar22 = (undefined8 **)DAT_154e21d50;
      }
      if (DAT_154e21d60 == lVar7) {
        pWVar12 = local_298.cFileName;
        if (DAT_154e21d60 != 0) {
          lVar11 = DAT_154e21d60;
          do {
            if (*(WCHAR *)((longlong)pWVar12 + ((longlong)ppuVar22 - (longlong)local_298.cFileName))
                != *pWVar12) goto LAB_14fb8c329;
            pWVar12 = pWVar12 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        goto LAB_14fb8c5cf;
      }
LAB_14fb8c329:
      local_448 = 0;
      local_3f8._8_8_ = 0;
      local_3e8 = 0;
      local_3e0 = 0xf;
      local_3f8._Ptr = (char *)0x0;
      if (local_298.cFileName[0] == L'\0') {
        local_3e8 = 0;
        local_3f8._Ptr = (char *)0x0;
LAB_14fb8c42d:
        uVar21 = local_3e8;
        if (_Size == 0) {
          plVar2 = (longlong *)param_2[7];
          if (plVar2 == (longlong *)0x0) {
            std::_Xbad_function_call();
            return extraout_EAX_00;
          }
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_3f8);
        }
        else {
          if (0x7fffffffffffffff - _Size < local_3e8) {
                    /* WARNING: Subroutine does not return */
            std::_Xlen_string();
          }
          p_Var18 = &local_3b8;
          if (0xf < uVar16) {
            p_Var18 = (_Bxty *)uVar13;
          }
          uVar13 = &local_3f8;
          if (0xf < local_3e0) {
            uVar13 = local_3f8._Ptr;
          }
          local_3d8._Ptr = (char *)0x0;
          local_3d8._8_8_ = 0;
          local_3c8 = 0;
          uStack_3c0 = 0;
          uVar23 = _Size + local_3e8;
          uVar20 = 0xf;
          _Dst = &local_3d8;
          if (0xf < uVar23) {
            uVar20 = uVar23 | 0xf;
            if (uVar20 < 0x8000000000000000) {
              if (uVar20 < 0x16) {
                uVar20 = 0x16;
              }
              uVar1 = uVar20 + 1;
              if (uVar1 < 0x1000) {
                if (uVar1 == 0) {
                  _Dst = (_Bxty *)0x0;
                  local_3d8._Ptr = (char *)_Dst;
                }
                else {
                  _Dst = ::operator_new(uVar1);
                  local_3d8._Ptr = (char *)_Dst;
                }
                goto LAB_14fb8c506;
              }
              uVar17 = uVar20 + 0x28;
              if (uVar17 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                std::_Throw_bad_array_new_length();
              }
            }
            else {
              uVar20 = 0x7fffffffffffffff;
              uVar17 = 0x8000000000000027;
            }
            pvVar8 = ::operator_new(uVar17);
            if (pvVar8 == (void *)0x0) goto LAB_14fb8c62b;
            _Dst = (_Bxty *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
            *(void **)(_Dst->_Buf + -8) = pvVar8;
            local_3d8._Ptr = (char *)_Dst;
          }
LAB_14fb8c506:
          local_3c8 = uVar23;
          uStack_3c0 = uVar20;
          memcpy(_Dst,p_Var18,_Size);
          memcpy(_Dst->_Buf + _Size,(void *)uVar13,uVar21);
          _Dst->_Buf[uVar23] = '\0';
          plVar2 = (longlong *)param_2[7];
          if (plVar2 == (longlong *)0x0) {
            std::_Xbad_function_call();
            return extraout_EAX_01;
          }
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_3d8);
          if (0xf < uStack_3c0) {
            uVar17 = uStack_3c0 + 1;
            uVar13 = local_3d8._Ptr;
            if (0xfff < uVar17) {
              uVar17 = uStack_3c0 + 0x28;
              uVar13 = *(undefined8 *)(local_3d8._Ptr + -8);
              if ((char *)0x1f < local_3d8._Ptr + (-8 - uVar13)) {
LAB_14fb8c62b:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar13,uVar17);
          }
        }
        uVar13 = local_3b8._Ptr;
        if (0xf < local_3e0) {
          uVar17 = local_3e0 + 1;
          uVar13 = local_3f8._Ptr;
          if (0xfff < uVar17) {
            uVar17 = local_3e0 + 0x28;
            uVar13 = *(undefined8 *)(local_3f8._Ptr + -8);
            if ((char *)0x1f < local_3f8._Ptr + (-8 - uVar13)) {
LAB_14fb8c632:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar13,uVar17);
          uVar13 = local_3b8._Ptr;
        }
        goto LAB_14fb8c5cf;
      }
      SetLastError(0);
      cbMultiByte = WideCharToMultiByte(0xfde9,0,local_298.cFileName,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if ((cbMultiByte != 0) || (DVar5 = GetLastError(), DVar5 == 0x7a)) {
        lpMultiByteStr = operator_new__((longlong)cbMultiByte);
        WideCharToMultiByte(0xfde9,0,local_298.cFileName,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                            (LPBOOL)0x0);
        uVar17 = 0xffffffffffffffff;
        do {
          uVar17 = uVar17 + 1;
        } while (lpMultiByteStr[uVar17] != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_3f8,
                   lpMultiByteStr,uVar17);
        uVar13 = local_3b8._Ptr;
        if (lpMultiByteStr != (char *)0x0) {
          operator_delete__(lpMultiByteStr);
          uVar13 = local_3b8._Ptr;
        }
        goto LAB_14fb8c42d;
      }
      local_448 = 3;
      if (0xf < local_3e0) {
        uVar17 = local_3e0 + 1;
        uVar14 = local_3f8._Ptr;
        if (0xfff < uVar17) {
          uVar17 = local_3e0 + 0x28;
          uVar14 = *(undefined8 *)(local_3f8._Ptr + -8);
          if ((char *)0x1f < local_3f8._Ptr + (-8 - uVar14)) goto LAB_14fb8c632;
        }
        ::operator_delete((void *)uVar14,uVar17);
      }
      break;
    }
LAB_14fb8c5cf:
    BVar6 = FindNextFileW(hFindFile,&local_298);
  } while (BVar6 != 0);
  FindClose(hFindFile);
  if (0xf < uVar16) {
    uVar17 = uVar16 + 1;
    p_Var18 = (_Bxty *)uVar13;
    if (0xfff < uVar17) {
      uVar17 = uVar16 + 0x28;
      p_Var18 = *(_Bxty **)(uVar13 + -8);
      if ((char *)0x1f < (char *)(uVar13 + (-8 - (longlong)p_Var18))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(p_Var18,uVar17);
  }
  if (7 < uStack_400) {
    uVar16 = uStack_400 * 2 + 2;
    pppppppWVar15 = local_418;
    if (0xfff < uVar16) {
      uVar16 = uStack_400 * 2 + 0x29;
      pppppppWVar15 = (LPCWSTR ******)local_418[-1];
      if (0x1f < (ulonglong)((longlong)local_418 + (-8 - (longlong)pppppppWVar15))) {
LAB_14fb8c6be:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pppppppWVar15,uVar16);
  }
  local_408 = ___xmm_00000000000000070000000000000000;
  uStack_400 = _UNK_15145b248;
  local_418 = (LPCWSTR ******)((ulonglong)local_418 & 0xffffffffffff0000);
  plVar2 = (longlong *)param_2[7];
  if (plVar2 == (longlong *)0x0) {
    return local_448;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
  param_2[7] = 0;
  return local_448;
}

// _Activate_SSO_buffer @ 14fb8c790

/* public: void __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Activate_SSO_buffer(void) __ptr64 */

void __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::_Activate_SSO_buffer
          (_String_val<std::_Simple_types<wchar_t>_> *this)

{
  return;
}

// _Calculate_growth @ 14fb8c7a0

/* private: unsigned __int64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Calculate_growth(unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Calculate_growth
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          __uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (this->_Mypair)._Myval2._Myres;
  uVar2 = param_1 | 7;
  if ((uVar2 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) {
    uVar1 = (uVar1 >> 1) + uVar1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0x7ffffffffffffffe;
}

// _Calculate_growth @ 14fb8c7f0

/* private: static unsigned __int64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Calculate_growth(unsigned
   __int64,unsigned __int64,unsigned __int64) */

__uint64 __cdecl
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Calculate_growth
          (__uint64 param_1,__uint64 param_2,__uint64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 | 7;
  if ((uVar2 <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) {
    uVar1 = (param_2 >> 1) + param_2;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return param_3;
}

// _Calculate_growth @ 14fb8c830

/* private: unsigned __int64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Calculate_growth(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
                    *this,__uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst >> 5
  ;
  uVar1 = 0x7ffffffffffffff;
  if ((uVar2 <= 0x7ffffffffffffff - (uVar2 >> 1)) && (uVar1 = (uVar2 >> 1) + uVar2, uVar1 < param_1)
     ) {
    uVar1 = param_1;
  }
  return uVar1;
}

// _Change_array @ 14fb8c870

/* private: void __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Change_array(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64 */

void __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Change_array(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
                *this,basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *param_1,__uint64 param_2,__uint64 param_3)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  ulong64 uVar2;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar3;
  
  pbVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (pbVar3 != (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0) {
    pbVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
      basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
                (pbVar3);
    }
    pbVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pbVar3 & 0xffffffffffffffe0;
    pbVar1 = pbVar3;
    if (0xfff < uVar2) {
      pbVar1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               pbVar3[-1]._Mypair._Myval2._Myres;
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)((longlong)pbVar3 + (-8 - (longlong)pbVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pbVar1,uVar2);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Check_offset @ 14fb8c930

/* public: void __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Check_offset(unsigned __int64)const __ptr64 */

void __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::_Check_offset
          (_String_val<std::_Simple_types<wchar_t>_> *this,__uint64 param_1)

{
  if (param_1 <= this->_Mysize) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Xran();
}

// _Check_offset @ 14fb8c950

/* private: void __cdecl std::basic_string_view<wchar_t,struct std::char_traits<wchar_t>
   >::_Check_offset(unsigned __int64)const __ptr64 */

void __thiscall
std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::_Check_offset
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *this,__uint64 param_1)

{
  if (param_1 <= this->_Mysize) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Xran();
}

// _Clamp_suffix_size @ 14fb8c970

/* public: unsigned __int64 __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::_Clamp_suffix_size
          (_String_val<std::_Simple_types<wchar_t>_> *this,__uint64 param_1,__uint64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = this->_Mysize - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  return param_2;
}

// _Clamp_suffix_size @ 14fb8c990

/* private: unsigned __int64 __cdecl std::basic_string_view<wchar_t,struct std::char_traits<wchar_t>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::_Clamp_suffix_size
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *this,__uint64 param_1,
          __uint64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = this->_Mysize - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  return param_2;
}

// _Empty @ 14fb8c9b0

/* protected: bool __cdecl std::_Func_class<void,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64>::_Empty(void)const __ptr64
    */

bool __thiscall
std::
_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::_Empty(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
         *this)

{
  return *(longlong *)(this + 0x38) == 0;
}

// _Eos @ 14fb8c9c0

/* private: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Eos(unsigned __int64) __ptr64 */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Eos
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          __uint64 param_1)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  
  pbVar1 = this;
  if (7 < (this->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  (this->_Mypair)._Myval2._Mysize = param_1;
  (pbVar1->_Mypair)._Myval2._Bx._Buf[param_1] = L'\0';
  return;
}

// _Equal @ 14fb8c9e0

/* public: bool __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Equal(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64)const __ptr64 */

bool __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Equal
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  pbVar1 = param_1 + 0x10;
  if (7 < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                **)param_1;
  }
  uVar3 = (this->_Mypair)._Myval2._Mysize;
  if (7 < (this->_Mypair)._Myval2._Myres) {
    this = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
           (this->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar3 != *(ulong64 *)pbVar1) {
    return false;
  }
  if (uVar3 != 0) {
    lVar2 = (longlong)this - (longlong)param_1;
    do {
      if (*(short *)(param_1 + lVar2) != *(short *)param_1) {
        return false;
      }
      param_1 = param_1 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return true;
}

// _Equal @ 14fb8ca30

/* public: bool __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Equal(wchar_t const * __ptr64 const)const __ptr64 */

bool __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Equal
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  longlong lVar3;
  
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_1[uVar1] != L'\0');
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  if (7 < (this->_Mypair)._Myval2._Myres) {
    this = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
           (this->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar2 != uVar1) {
    return false;
  }
  if (uVar2 != 0) {
    lVar3 = (longlong)this - (longlong)param_1;
    do {
      if (*(wchar_t *)(lVar3 + (longlong)param_1) != *param_1) {
        return false;
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return true;
}

// _Get_buffer_view @ 14fb8ca90

/* public: struct std::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Buffer_view __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Get_buffer_view(void)const __ptr64 */

void __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Get_buffer_view
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  undefined8 *in_RDX;
  
  *in_RDX = 0;
  in_RDX[1] = 0;
  in_RDX[2] = 0;
  if ((((byte)this->_Mystate & 0x22) == 2) ||
     (pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this),
     pwVar1 == (wchar_t *)0x0)) {
    if ((this->_Mystate & 4) != 0) {
      return;
    }
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if (pwVar1 == (wchar_t *)0x0) {
      return;
    }
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    *in_RDX = pwVar1;
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    lVar3 = (longlong)pwVar2 - (longlong)pwVar1 >> 1;
    in_RDX[1] = lVar3;
  }
  else {
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pbase
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    *in_RDX = pwVar2;
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if (pwVar1 < this->_Seekhigh) {
      pwVar1 = this->_Seekhigh;
    }
    in_RDX[1] = (longlong)pwVar1 - (longlong)pwVar2 >> 1;
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    lVar3 = (longlong)pwVar1 - (longlong)pwVar2 >> 1;
  }
  in_RDX[2] = lVar3;
  return;
}

// _Get_first @ 14fb8cb60

/* public: struct std::default_delete<char [0]> & __ptr64 __cdecl std::_Compressed_pair<struct
   std::default_delete<char [0]>,char * __ptr64,1>::_Get_first(void) __ptr64 */

default_delete<char_[0]> * __thiscall
std::_Compressed_pair<std::default_delete<char_[0]>,char*___ptr64,1>::_Get_first
          (_Compressed_pair<std::default_delete<char_[0]>,char*___ptr64,1> *this)

{
  return (default_delete<char_[0]> *)this;
}

// _Get_first @ 14fb8cb70

/* public: struct std::default_delete<wchar_t [0]> & __ptr64 __cdecl std::_Compressed_pair<struct
   std::default_delete<wchar_t [0]>,wchar_t * __ptr64,1>::_Get_first(void) __ptr64 */

default_delete<wchar_t_[0]> * __thiscall
std::_Compressed_pair<std::default_delete<wchar_t_[0]>,wchar_t*___ptr64,1>::_Get_first
          (_Compressed_pair<std::default_delete<wchar_t_[0]>,wchar_t*___ptr64,1> *this)

{
  return (default_delete<wchar_t_[0]> *)this;
}

// _Get_first @ 14fb8cb80

/* public: class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >,class std::_Vector_val<struct
   std::_Simple_types<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > > >,1>::_Get_first(void) __ptr64 */

allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> *
__thiscall
std::
_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1>
             *this)

{
  return (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          *)this;
}

// _Get_first @ 14fb8cb90

/* public: class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > const & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >,class std::_Vector_val<struct
   std::_Simple_types<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > > >,1>::_Get_first(void)const __ptr64 */

allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> *
__thiscall
std::
_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,std::_Vector_val<std::_Simple_types<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>,1>
             *this)

{
  return (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          *)this;
}

// _Get_first @ 14fb8cba0

/* public: class std::allocator<wchar_t> & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t>
   >,1>::_Get_first(void) __ptr64 */

allocator<wchar_t> * __thiscall
std::_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>::
_Get_first(_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>
           *this)

{
  return (allocator<wchar_t> *)this;
}

// _Get_first @ 14fb8cbb0

/* public: class std::allocator<wchar_t> const & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t>
   >,1>::_Get_first(void)const __ptr64 */

allocator<wchar_t> * __thiscall
std::_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>::
_Get_first(_Compressed_pair<std::allocator<wchar_t>,std::_String_val<std::_Simple_types<wchar_t>_>,1>
           *this)

{
  return (allocator<wchar_t> *)this;
}

// _Getal @ 14fb8cbc0

/* private: class std::allocator<wchar_t> & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Getal(void) __ptr64 */

allocator<wchar_t> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Getal
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  return (allocator<wchar_t> *)this;
}

// _Getal @ 14fb8cbd0

/* private: class std::allocator<wchar_t> const & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Getal(void)const __ptr64 */

allocator<wchar_t> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Getal
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  return (allocator<wchar_t> *)this;
}

// _Getal @ 14fb8cbe0

/* private: class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > & __ptr64 __cdecl std::vector<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class
   std::allocator<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > > >::_Getal(void) __ptr64 */

allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> *
__thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Getal(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
         *this)

{
  return (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          *)this;
}

// _Getal @ 14fb8cbf0

/* private: class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > const & __ptr64 __cdecl
   std::vector<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >,class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > >::_Getal(void)const __ptr64 */

allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_> *
__thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Getal(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
         *this)

{
  return (allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
          *)this;
}

// _Getimpl @ 14fb8cc00

/* private: class std::_Func_base<void,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64> * __ptr64 __cdecl
   std::_Func_class<void,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64>::_Getimpl(void)const __ptr64 */

_Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
* __thiscall
std::
_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::_Getimpl(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
           *this)

{
  return *(_Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
           **)(this + 0x38);
}

// _Getstate @ 14fb8cc10

/* private: static int __cdecl std::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Getstate(int) */

int __cdecl
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Getstate
          (int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (~param_1 & 1U) << 2;
  uVar1 = uVar2 | 2;
  if ((param_1 & 2U) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 8;
  if ((param_1 & 8U) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x10;
  if ((param_1 & 4U) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// _Large_mode_engaged @ 14fb8cc50

/* public: bool __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Large_mode_engaged(void)const __ptr64 */

bool __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::_Large_mode_engaged
          (_String_val<std::_Simple_types<wchar_t>_> *this)

{
  return 7 < this->_Myres;
}

// _Local @ 14fb8cc60

/* private: bool __cdecl std::_Func_class<void,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64>::_Local(void)const __ptr64
    */

bool __thiscall
std::
_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::_Local(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
         *this)

{
  return *(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
           **)(this + 0x38) == this;
}

// _Memcpy_val_from @ 14fb8cc70

/* private: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Memcpy_val_from(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64) __ptr64 */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Memcpy_val_from
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  (this->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)param_1;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(param_1 + 0x18);
  (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
  (this->_Mypair)._Myval2._Myres = uVar2;
  return;
}

// _Myptr @ 14fb8cc90

/* public: wchar_t * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Myptr(void) __ptr64 */

wchar_t * __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::_Myptr
          (_String_val<std::_Simple_types<wchar_t>_> *this)

{
  if (7 < this->_Myres) {
    return (this->_Bx)._Ptr;
  }
  return (wchar_t *)this;
}

// _Myptr @ 14fb8ccb0

/* public: wchar_t const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Myptr(void)const __ptr64 */

wchar_t * __thiscall
std::_String_val<std::_Simple_types<wchar_t>_>::_Myptr
          (_String_val<std::_Simple_types<wchar_t>_> *this)

{
  if (7 < this->_Myres) {
    return (this->_Bx)._Ptr;
  }
  return (wchar_t *)this;
}

// _Orphan_range @ 14fb8ccd0

/* private: void __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Orphan_range(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > * __ptr64)const __ptr64 */

void __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Orphan_range(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
                *this,basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *param_1,
               basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  return;
}

// _Release @ 14fb8cce0

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64 __cdecl std::_Uninitialized_backout_al<class
   std::allocator<class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > > >::_Release(void) __ptr64 */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::
_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Release(_Uninitialized_backout_al<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)this =
       *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)(this + 8);
  return *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)(this + 8);
}

// _Set @ 14fb8ccf0

/* private: void __cdecl std::_Func_class<void,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64>::_Set(class
   std::_Func_base<void,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64> * __ptr64) __ptr64 */

void __thiscall
std::
_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::_Set(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
       *this,_Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
             *param_1)

{
  *(_Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
    **)(this + 0x38) = param_1;
  return;
}

// _Swap_proxy_and_iterators @ 14fb8cd00

/* private: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Swap_proxy_and_iterators(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > & __ptr64) __ptr64 */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
_Swap_proxy_and_iterators
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  return;
}

// _Take_contents @ 14fb8cd10

/* private: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Take_contents(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > & __ptr64) __ptr64 */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Take_contents
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  (this->_Mypair)._Myval2._Bx._Ptr = *(wchar_t **)param_1;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(param_1 + 0x18);
  (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
  (this->_Mypair)._Myval2._Myres = uVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined2 *)param_1 = 0;
  return;
}

// _Tidy @ 14fb8cd40

/* protected: void __cdecl std::_Func_class<void,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64>::_Tidy(void) __ptr64 */

void __thiscall
std::
_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::_Tidy(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
        *this)

{
  _Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
  *p_Var1;
  
  p_Var1 = *(_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
             **)(this + 0x38);
  if (p_Var1 != (_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
                 *)0x0) {
    (**(code **)(*(longlong *)p_Var1 + 0x20))(p_Var1,p_Var1 != this);
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

// _Tidy @ 14fb8cd80

/* protected: void __cdecl std::basic_stringbuf<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy(void) __ptr64 */

void __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  if ((this->_Mystate & 1) != 0) {
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if (pwVar1 == (wchar_t *)0x0) {
      pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    }
    else {
      pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    }
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    uVar3 = ((longlong)pwVar1 - (longlong)pwVar2 >> 1) * 2;
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    pwVar1 = pwVar2;
    if (0xfff < uVar3) {
      pwVar1 = *(wchar_t **)(pwVar2 + -4);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pwVar2 + (-8 - (longlong)pwVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pwVar1,uVar3);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,(wchar_t *)0x0,
             (wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,(wchar_t *)0x0,
             (wchar_t *)0x0);
  this->_Mystate = this->_Mystate & 0xfffffffe;
  this->_Seekhigh = (wchar_t *)0x0;
  return;
}

// _Tidy @ 14fb8ce40

/* private: void __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Tidy(void) __ptr64 */

void __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Tidy(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
        *this)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  ulong64 uVar2;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar3;
  
  pbVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (pbVar3 != (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0) {
    pbVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
      basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
                (pbVar3);
    }
    pbVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pbVar3 & 0xffffffffffffffe0;
    pbVar1 = pbVar3;
    if (0xfff < uVar2) {
      pbVar1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               pbVar3[-1]._Mypair._Myval2._Myres;
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)((longlong)pbVar3 + (-8 - (longlong)pbVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pbVar1,uVar2);
    (this->_Mypair)._Myval2._Myfirst =
         (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  }
  return;
}

// _Tidy_init @ 14fb8cee0

/* private: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy_init(void) __ptr64 */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_init
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  (this->_Mypair)._Myval2._Myres = 7;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  return;
}

// _Xlength @ 14fb8cf00

/* private: static void __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::_Xlength(void) */

void __cdecl
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xran @ 14fb8cf20

/* private: static void __cdecl std::basic_string_view<wchar_t,struct std::char_traits<wchar_t>
   >::_Xran(void) */

void __cdecl std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::_Xran(void)

{
  _Xout_of_range("invalid string_view position");
  return;
}

// _wopen @ 14fb8cf40

/* int __cdecl _wopen(wchar_t const * __ptr64,int,int) */

int __cdecl _wopen(wchar_t *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_register_00000014;
  int local_res20 [2];
  
  iVar1 = _wsopen_dispatch(param_1,CONCAT44(in_register_00000014,param_2),0x40,param_3,local_res20,0
                          );
  if (iVar1 != 0) {
    local_res20[0] = -1;
  }
  return local_res20[0];
}

// access @ 14fb8cf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl google::protobuf::io::win32::access(char const * __ptr64,int) */

int __cdecl google::protobuf::io::win32::access(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  wchar_t ****ppppwVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  wchar_t ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = ___xmm_00000000000000070000000000000000;
  uStack_20 = _UNK_15145b248;
  local_38 = (wchar_t ***)0x0;
  cVar1 = FUN_14fb8d1f0(0,&local_38);
  if (cVar1 == '\0') {
    piVar3 = _errno();
    *piVar3 = 2;
    iVar2 = -1;
  }
  else {
    ppppwVar4 = &local_38;
    if (7 < uStack_20) {
      ppppwVar4 = (wchar_t ****)local_38;
    }
    iVar2 = _waccess((wchar_t *)ppppwVar4,param_2);
  }
  if (7 < uStack_20) {
    uVar5 = uStack_20 * 2 + 2;
    ppppwVar4 = (wchar_t ****)local_38;
    if (0xfff < uVar5) {
      uVar5 = uStack_20 * 2 + 0x29;
      ppppwVar4 = (wchar_t ****)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppwVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(ppppwVar4,uVar5);
  }
  return iVar2;
}

// allocate @ 14fb8d050

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > * __ptr64 __cdecl std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >::allocate(unsigned __int64) __ptr64
    */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
allocate(allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
         *this,__uint64 param_1)

{
  void *pvVar1;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x800000000000000) {
    uVar3 = param_1 * 0x20;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        pbVar2 = ::operator_new(uVar3);
        return pbVar2;
      }
      return (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        pbVar2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 ((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        pbVar2[-1]._Mypair._Myval2._Myres = (ulong64)pvVar1;
        return pbVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 14fb8d0d0

/* public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64 */

wchar_t * __thiscall std::allocator<wchar_t>::allocate(allocator<wchar_t> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  wchar_t *pwVar3;
  
  if (param_1 < 0x8000000000000000) {
    uVar1 = param_1 * 2;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        pwVar3 = ::operator_new(uVar1);
        return pwVar3;
      }
      return (wchar_t *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pwVar3 = (wchar_t *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pwVar3 + -4) = pvVar2;
        return pwVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// append @ 14fb8d150

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_1)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  <lambda_1> local_res8;
  
  uVar1 = *(ulong64 *)(param_1 + 0x10);
  if (7 < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                **)param_1;
  }
  uVar2 = (this->_Mypair)._Myval2._Myres;
  uVar3 = (this->_Mypair)._Myval2._Mysize;
  if (uVar1 <= uVar2 - uVar3) {
    (this->_Mypair)._Myval2._Mysize = uVar1 + uVar3;
    pbVar5 = this;
    if (7 < uVar2) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + uVar3 * 2),param_1,uVar1 * 2);
    (pbVar5->_Mypair)._Myval2._Bx._Buf[uVar1 + uVar3] = L'\0';
    return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           this;
  }
  pbVar4 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
                     (this,uVar1,local_res8,(wchar_t *)param_1,uVar1);
  return pbVar4;
}

// FUN_14fb8d1f0 @ 14fb8d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14fb8d1f0(byte *param_1,_Bxty *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  _Bxty *p_Var4;
  wchar_t *pwVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  LPWSTR lpWideCharStr;
  _Bxty *p_Var13;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 uVar17;
  wchar_t *pwVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  undefined1 auStackY_108 [32];
  <lambda_1> local_d8;
  _Bxty local_c8;
  wchar_t *local_b8;
  wchar_t *pwStack_b0;
  _Bxty local_a8;
  longlong local_98;
  ulonglong uStack_90;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    p_Var13 = param_2;
    if (7 < *(ulong64 *)((longlong)param_2 + 0x18)) {
      p_Var13 = (_Bxty *)param_2->_Ptr;
    }
    param_2[1]._Ptr = (wchar_t *)0x0;
    p_Var13->_Buf[0] = L'\0';
    return 1;
  }
  local_c8._8_8_ = (wchar_t *)0x0;
  local_b8 = (wchar_t *)0x0;
  pwStack_b0 = (wchar_t *)0x7;
  local_c8._Ptr = (wchar_t *)0x0;
  pwVar20 = (wchar_t *)0xffffffffffffffff;
  SetLastError(0);
  iVar10 = MultiByteToWideChar(0xfde9,0,(LPCSTR)param_1,-1,(LPWSTR)0x0,0);
  if ((iVar10 == 0) && (DVar11 = GetLastError(), DVar11 != 0x7a)) {
LAB_14fb8d7f5:
    uVar15 = 0;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)iVar10;
    pwVar18 = SUB168(ZEXT816(2) * auVar2,0);
    if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
      pwVar18 = pwVar20;
    }
    lpWideCharStr = operator_new__((ulong64)pwVar18);
    MultiByteToWideChar(0xfde9,0,(LPCSTR)param_1,-1,lpWideCharStr,iVar10 + 1);
    pwVar18 = pwVar20;
    do {
      pwVar18 = (wchar_t *)((longlong)pwVar18 + 1);
    } while (lpWideCharStr[(longlong)pwVar18] != L'\0');
    if (pwStack_b0 < pwVar18) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Reallocate_for<_public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign(wchar_t_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,wchar_t_const*___ptr64>
                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 &local_c8,pwVar18,local_d8,lpWideCharStr);
    }
    else {
      uVar15 = &local_c8;
      if ((wchar_t *)0x7 < pwStack_b0) {
        uVar15 = local_c8._Ptr;
      }
      local_b8 = pwVar18;
      memmove((void *)uVar15,lpWideCharStr,(longlong)pwVar18 * 2);
      *(wchar_t *)(uVar15 + pwVar18 * 2) = L'\0';
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      operator_delete__(lpWideCharStr);
    }
    uVar15 = &local_c8;
    if ((wchar_t *)0x7 < pwStack_b0) {
      uVar15 = local_c8._Ptr;
    }
    if ((((*(wchar_t *)uVar15 == L'\\') && (*(wchar_t *)(uVar15 + 2) == L'\\')) &&
        (*(wchar_t *)(uVar15 + 4) == L'?')) && (*(wchar_t *)(uVar15 + 6) == L'\\')) {
      if (param_2 != &local_c8) {
        uVar15 = &local_c8;
        if ((wchar_t *)0x7 < pwStack_b0) {
          uVar15 = local_c8._Ptr;
        }
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   param_2,(wchar_t *)uVar15,(ulong64)local_b8);
        uVar15 = 1;
        goto LAB_14fb8d7f7;
      }
    }
    else {
      bVar1 = *param_1;
      if (((bVar1 == 0x2f) || (bVar1 == 0x5c)) ||
         ((((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                      (ulonglong)bVar1) & 1) != 0 && (param_1[1] == 0x3a)) &&
          ((bVar1 = param_1[2], bVar1 == 0 || ((bVar1 != 0x2f && (bVar1 != 0x5c))))))))
      goto LAB_14fb8d7f5;
      cVar9 = FUN_14fb8b010();
      if (cVar9 == '\0') {
        DVar11 = GetCurrentDirectoryW(0,(LPWSTR)0x0);
        if ((DVar11 == 0) && (DVar12 = GetLastError(), DVar12 != 0x7a)) goto LAB_14fb8d7f5;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (longlong)(int)DVar11;
        pwVar18 = SUB168(ZEXT816(2) * auVar3,0);
        if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
          pwVar18 = pwVar20;
        }
        pwVar18 = operator_new__((ulong64)pwVar18);
        GetCurrentDirectoryW(DVar11,pwVar18);
        local_a8._Ptr = (wchar_t *)0x0;
        local_a8._8_8_ = 0;
        local_98 = 0;
        uStack_90 = 0;
        do {
          pwVar20 = (wchar_t *)((longlong)pwVar20 + 1);
        } while (pwVar18[(longlong)pwVar20] != L'\0');
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Construct<1,wchar_t_const_*>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_a8,pwVar18,(ulong64)pwVar20);
        p_Var13 = (_Bxty *)FUN_14fb8e140(&local_88,&local_a8,&local_c8);
        if (&local_c8 != p_Var13) {
          if ((wchar_t *)0x7 < pwStack_b0) {
            uVar19 = (longlong)pwStack_b0 * 2 + 2;
            uVar15 = local_c8._Ptr;
            if (0xfff < uVar19) {
              uVar19 = (longlong)pwStack_b0 * 2 + 0x29;
              uVar15 = *(undefined8 *)(local_c8._Ptr + -4);
              if ((char *)0x1f < (char *)((longlong)local_c8._Ptr + (-8 - uVar15)))
              goto LAB_14fb8d51a;
            }
            operator_delete((void *)uVar15,uVar19);
          }
          local_c8._Ptr = p_Var13->_Ptr;
          local_c8._8_8_ = (&p_Var13->_Ptr)[1];
          local_b8 = (&p_Var13->_Ptr)[2];
          pwStack_b0 = (&p_Var13->_Ptr)[3];
          (&p_Var13->_Ptr)[2] = (wchar_t *)0x0;
          (&p_Var13->_Ptr)[3] = (wchar_t *)0x7;
          p_Var13->_Buf[0] = L'\0';
        }
        if (7 < uStack_70) {
          uVar19 = uStack_70 * 2 + 2;
          pvVar6 = (void *)CONCAT62(uStack_86,local_88);
          pvVar16 = pvVar6;
          if (0xfff < uVar19) {
            uVar19 = uStack_70 * 2 + 0x29;
            pvVar16 = *(void **)((longlong)pvVar6 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar16))) {
LAB_14fb8d51a:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar16,uVar19);
        }
        local_78 = ___xmm_00000000000000070000000000000000;
        uStack_70 = _UNK_15145b248;
        local_88 = 0;
        if (7 < uStack_90) {
          uVar19 = uStack_90 * 2 + 2;
          uVar15 = local_a8._Ptr;
          if (0xfff < uVar19) {
            uVar19 = uStack_90 * 2 + 0x29;
            uVar15 = *(undefined8 *)(local_a8._Ptr + -4);
            if ((char *)0x1f < (char *)((longlong)local_a8._Ptr + (-8 - uVar15))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete((void *)uVar15,uVar19);
        }
        if (pwVar18 != (wchar_t *)0x0) {
          operator_delete__(pwVar18);
        }
      }
      pbVar14 = std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                          ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                            *)&local_a8,
                           (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                            *)&local_c8);
      p_Var13 = (_Bxty *)FUN_14fb8ea60(&local_88,pbVar14);
      if (&local_c8 != p_Var13) {
        if ((wchar_t *)0x7 < pwStack_b0) {
          uVar19 = (longlong)pwStack_b0 * 2 + 2;
          uVar15 = local_c8._Ptr;
          if (0xfff < uVar19) {
            uVar19 = (longlong)pwStack_b0 * 2 + 0x29;
            uVar15 = *(undefined8 *)(local_c8._Ptr + -4);
            if ((char *)0x1f < (char *)((longlong)local_c8._Ptr + (-8 - uVar15)))
            goto LAB_14fb8d651;
          }
          operator_delete((void *)uVar15,uVar19);
        }
        local_c8._Ptr = (wchar_t *)p_Var13->_Ptr;
        local_c8._8_8_ = (&p_Var13->_Ptr)[1];
        local_b8 = (&p_Var13->_Ptr)[2];
        pwStack_b0 = (&p_Var13->_Ptr)[3];
        (&p_Var13->_Ptr)[2] = (wchar_t *)0x0;
        (&p_Var13->_Ptr)[3] = (wchar_t *)0x7;
        p_Var13->_Buf[0] = L'\0';
      }
      if (7 < uStack_70) {
        uVar19 = uStack_70 * 2 + 2;
        pvVar6 = (void *)CONCAT62(uStack_86,local_88);
        pvVar16 = pvVar6;
        if (0xfff < uVar19) {
          uVar19 = uStack_70 * 2 + 0x29;
          pvVar16 = *(void **)((longlong)pvVar6 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar16))) {
LAB_14fb8d651:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar16,uVar19);
      }
      uVar15 = &local_c8;
      if ((wchar_t *)0x7 < pwStack_b0) {
        uVar15 = local_c8._Ptr;
      }
      if ((((*(wchar_t *)uVar15 == L'\\') && (*(wchar_t *)(uVar15 + 2) == L'\\')) &&
          (*(wchar_t *)(uVar15 + 4) == L'?')) && (*(wchar_t *)(uVar15 + 6) == L'\\')) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (!bVar7) {
        local_a8._Ptr = (wchar_t *)0x0;
        local_a8._8_8_ = 0;
        local_98 = 0;
        uStack_90 = 0;
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Construct<1,wchar_t_const_*>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_a8,L"\\\\?\\",4);
        lVar8 = local_98;
        pwVar20 = local_b8;
        uVar15 = &local_c8;
        if ((wchar_t *)0x7 < pwStack_b0) {
          uVar15 = local_c8._Ptr;
        }
        if ((wchar_t *)(uStack_90 - local_98) < local_b8) {
          p_Var13 = (_Bxty *)std::
                             basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                             ::
                             _Reallocate_grow_by<_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::append_::__l2::<lambda_1>,wchar_t_const_*,unsigned___int64>
                                       ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                         *)&local_a8,(ulong64)local_b8,local_d8,(wchar_t *)uVar15,
                                        (ulong64)local_b8);
        }
        else {
          uVar17 = &local_a8;
          if (7 < uStack_90) {
            uVar17 = local_a8._Ptr;
          }
          pwVar18 = (wchar_t *)(uVar17 + local_98 * 2);
          local_98 = (longlong)local_b8 + local_98;
          memmove(pwVar18,(void *)uVar15,(longlong)local_b8 * 2);
          *(wchar_t *)(uVar17 + ((longlong)pwVar20 + lVar8) * 2) = L'\0';
          p_Var13 = &local_a8;
        }
        p_Var4 = (_Bxty *)p_Var13->_Ptr;
        pwVar20 = *(wchar_t **)((longlong)p_Var13 + 8);
        pwVar18 = p_Var13[1]._Ptr;
        pwVar5 = *(wchar_t **)((longlong)p_Var13 + 0x18);
        p_Var13[1]._Ptr = (wchar_t *)0x0;
        *(ulong64 *)((longlong)p_Var13 + 0x18) = 7;
        p_Var13->_Buf[0] = L'\0';
        if ((wchar_t *)0x7 < pwStack_b0) {
          uVar19 = (longlong)pwStack_b0 * 2 + 2;
          uVar15 = local_c8._Ptr;
          if (0xfff < uVar19) {
            uVar19 = (longlong)pwStack_b0 * 2 + 0x29;
            uVar15 = *(undefined8 *)(local_c8._Ptr + -4);
            if ((char *)0x1f < (char *)((longlong)local_c8._Ptr + (-8 - uVar15))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete((void *)uVar15,uVar19);
        }
        local_c8._Ptr = (wchar_t *)p_Var4;
        local_c8._8_8_ = pwVar20;
        local_b8 = pwVar18;
        pwStack_b0 = pwVar5;
        if (7 < uStack_90) {
          uVar19 = uStack_90 * 2 + 2;
          uVar15 = local_a8._Ptr;
          if (0xfff < uVar19) {
            uVar19 = uStack_90 * 2 + 0x29;
            uVar15 = *(undefined8 *)(local_a8._Ptr + -4);
            if ((char *)0x1f < (char *)((longlong)local_a8._Ptr + (-8 - uVar15))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete((void *)uVar15,uVar19);
        }
      }
      if (param_2 != &local_c8) {
        uVar15 = &local_c8;
        if ((wchar_t *)0x7 < pwStack_b0) {
          uVar15 = local_c8._Ptr;
        }
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   param_2,(wchar_t *)uVar15,(ulong64)local_b8);
      }
    }
    uVar15 = 1;
  }
LAB_14fb8d7f7:
  if ((wchar_t *)0x7 < pwStack_b0) {
    uVar19 = (longlong)pwStack_b0 * 2 + 2;
    uVar17 = local_c8._Ptr;
    if (0xfff < uVar19) {
      uVar19 = (longlong)pwStack_b0 * 2 + 0x29;
      uVar17 = *(undefined8 *)(local_c8._Ptr + -4);
      if ((char *)0x1f < (char *)((longlong)local_c8._Ptr + (-8 - uVar17))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar17,uVar19);
  }
  return uVar15;
}

// ascii_isalpha @ 14fb8d890

/* bool __cdecl absl::lts_20240722::ascii_isalpha(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_isalpha(uchar param_1)

{
  return (bool)(*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)param_1) & 1);
}

// assign @ 14fb8d8b0

/* public: static void __cdecl std::_Char_traits<wchar_t,unsigned short>::assign(wchar_t &
   __ptr64,wchar_t const & __ptr64) */

void __cdecl std::_Char_traits<wchar_t,unsigned_short>::assign(wchar_t *param_1,wchar_t *param_2)

{
  *param_1 = *param_2;
  return;
}

// assign @ 14fb8d8c0

/* public: static void __cdecl std::_WChar_traits<wchar_t>::assign(wchar_t & __ptr64,wchar_t const &
   __ptr64) */

void __cdecl std::_WChar_traits<wchar_t>::assign(wchar_t *param_1,wchar_t *param_2)

{
  *param_1 = *param_2;
  return;
}

// assign @ 14fb8d8d0

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign(wchar_t const * __ptr64 const)
   __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          wchar_t *param_1)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  ulong64 uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_1[uVar2] != L'\0');
  pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           assign(this,param_1,uVar2);
  return pbVar1;
}

// c_str @ 14fb8d900

/* public: wchar_t const * __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::c_str(void)const __ptr64 */

wchar_t * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::c_str
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  if (7 < (this->_Mypair)._Myval2._Myres) {
    return (this->_Mypair)._Myval2._Bx._Ptr;
  }
  return (wchar_t *)this;
}

// capacity @ 14fb8d920

/* public: unsigned __int64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::capacity(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  return (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst >> 5;
}

// chdir @ 14fb8d940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl google::protobuf::io::win32::chdir(char const * __ptr64) */

int __cdecl google::protobuf::io::win32::chdir(char *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  wchar_t ****ppppwVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  wchar_t ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = ___xmm_00000000000000070000000000000000;
  uStack_20 = _UNK_15145b248;
  local_38 = (wchar_t ***)0x0;
  cVar1 = FUN_14fb8d1f0(0,&local_38);
  if (cVar1 == '\0') {
    piVar3 = _errno();
    *piVar3 = 2;
    iVar2 = -1;
  }
  else {
    ppppwVar4 = &local_38;
    if (7 < uStack_20) {
      ppppwVar4 = (wchar_t ****)local_38;
    }
    iVar2 = _wchdir((wchar_t *)ppppwVar4);
  }
  if (7 < uStack_20) {
    uVar5 = uStack_20 * 2 + 2;
    ppppwVar4 = (wchar_t ****)local_38;
    if (0xfff < uVar5) {
      uVar5 = uStack_20 * 2 + 0x29;
      ppppwVar4 = (wchar_t ****)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppwVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(ppppwVar4,uVar5);
  }
  return iVar2;
}

// clear @ 14fb8da10

/* public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::clear(void) __ptr64 */

void __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::clear
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  
  pbVar1 = this;
  if (7 < (this->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  (this->_Mypair)._Myval2._Mysize = 0;
  (pbVar1->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  return;
}

// close @ 14fb8da30

/* int __cdecl google::protobuf::io::win32::close(int) */

int __cdecl google::protobuf::io::win32::close(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fb8da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _close(param_1);
  return iVar1;
}

// compare @ 14fb8da40

/* public: static int __cdecl std::_WChar_traits<wchar_t>::compare(wchar_t const * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64) */

int __cdecl std::_WChar_traits<wchar_t>::compare(wchar_t *param_1,wchar_t *param_2,__uint64 param_3)

{
  wchar_t wVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      wVar1 = *(wchar_t *)(lVar3 + (longlong)param_2);
      if (wVar1 != *param_2) {
        iVar2 = 1;
        if ((ushort)wVar1 < (ushort)*param_2) {
          iVar2 = -1;
        }
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return 0;
}

// copy @ 14fb8da80

/* public: static wchar_t * __ptr64 __cdecl std::_Char_traits<wchar_t,unsigned short>::copy(wchar_t
   * __ptr64 const,wchar_t const * __ptr64 const,unsigned __int64) */

wchar_t * __cdecl
std::_Char_traits<wchar_t,unsigned_short>::copy(wchar_t *param_1,wchar_t *param_2,__uint64 param_3)

{
  memcpy(param_1,param_2,param_3 * 2);
  return param_1;
}

// data @ 14fb8daa0

/* public: wchar_t const * __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::data(void)const __ptr64 */

wchar_t * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::data
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  if (7 < (this->_Mypair)._Myval2._Myres) {
    return (this->_Mypair)._Myval2._Bx._Ptr;
  }
  return (wchar_t *)this;
}

// data @ 14fb8dac0

/* public: wchar_t const * __ptr64 __cdecl std::basic_string_view<wchar_t,struct
   std::char_traits<wchar_t> >::data(void)const __ptr64 */

wchar_t * __thiscall
std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::data
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *this)

{
  return this->_Mydata;
}

// deallocate @ 14fb8dad0

/* public: void __cdecl std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > >::deallocate(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64 const,unsigned __int64) __ptr64 */

void __thiscall
std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
deallocate(allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *this,basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
          __uint64 param_2)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x20;
  pbVar1 = param_1;
  if (0xfff < uVar2) {
    pbVar1 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             param_1[-1]._Mypair._Myval2._Myres;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pbVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pbVar1,uVar2);
  return;
}

// deallocate @ 14fb8db20

/* public: void __cdecl std::allocator<wchar_t>::deallocate(wchar_t * __ptr64 const,unsigned
   __int64) __ptr64 */

void __thiscall
std::allocator<wchar_t>::deallocate(allocator<wchar_t> *this,wchar_t *param_1,__uint64 param_2)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 2;
  pwVar1 = param_1;
  if (0xfff < uVar2) {
    pwVar1 = *(wchar_t **)(param_1 + -4);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pwVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pwVar1,uVar2);
  return;
}

// dup2 @ 14fb8db70

/* int __cdecl google::protobuf::io::win32::dup2(int,int) */

int __cdecl google::protobuf::io::win32::dup2(int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fb8db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _dup2(param_1,param_2);
  return iVar1;
}

// dup @ 14fb8db80

/* int __cdecl google::protobuf::io::win32::dup(int) */

int __cdecl google::protobuf::io::win32::dup(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fb8db80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _dup(param_1);
  return iVar1;
}

// empty @ 14fb8db90

/* public: bool __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::empty(void)const __ptr64 */

bool __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::empty
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  return (this->_Mypair)._Myval2._Mysize == 0;
}

// empty @ 14fb8dba0

/* public: bool __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::empty(void)const __ptr64 */

bool __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::empty(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
        *this)

{
  return (this->_Mypair)._Myval2._Myfirst == (this->_Mypair)._Myval2._Mylast;
}

// eof @ 14fb8dbc0

/* public: static unsigned short __cdecl std::_WChar_traits<wchar_t>::eof(void) */

ushort __cdecl std::_WChar_traits<wchar_t>::eof(void)

{
  return 0xffff;
}

// eq @ 14fb8dbd0

/* public: static bool __cdecl std::_WChar_traits<wchar_t>::eq(wchar_t,wchar_t) */

bool __cdecl std::_WChar_traits<wchar_t>::eq(wchar_t param_1,wchar_t param_2)

{
  return param_1 == param_2;
}

// eq_int_type @ 14fb8dbe0

/* public: static bool __cdecl std::_WChar_traits<wchar_t>::eq_int_type(unsigned short,unsigned
   short) */

bool __cdecl std::_WChar_traits<wchar_t>::eq_int_type(ushort param_1,ushort param_2)

{
  return param_1 == param_2;
}

// find_last_of @ 14fb8dbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::find_last_of(char const * __ptr64 const,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find_last_of
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1,
          __uint64 param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  char cVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  __uint64 _Var7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (param_1[lVar8] != '\0');
  uVar4 = (this->_Mypair)._Myval2._Mysize;
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (this->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((lVar8 == 0) || (uVar4 == 0)) {
LAB_14fb8dcb3:
    _Var7 = 0xffffffffffffffff;
  }
  else {
    memset(local_128,0,0x100);
    pbVar2 = (byte *)(param_1 + lVar8);
    for (; (byte *)param_1 != pbVar2; param_1 = param_1 + 1) {
      local_128[(byte)*param_1] = '\x01';
    }
    uVar1 = uVar4 - 1;
    if (uVar1 < param_2) {
      param_2 = uVar1;
    }
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((this->_Mypair)._Myval2._Bx._Buf + param_2);
    cVar3 = local_128[(byte)(pbVar6->_Mypair)._Myval2._Bx._Buf[0]];
    while (cVar3 == '\0') {
      if (pbVar6 == this) goto LAB_14fb8dcb3;
      pbVar5 = pbVar6 + -1;
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((longlong)&pbVar6[-1]._Mypair._Myval2._Myres + 7);
      cVar3 = local_128[*(byte *)((longlong)&(pbVar5->_Mypair)._Myval2._Myres + 7)];
    }
    _Var7 = (longlong)pbVar6 - (longlong)this;
  }
  return _Var7;
}

// fopen @ 14fb8dcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct _iobuf * __ptr64 __cdecl google::protobuf::io::win32::fopen(char const * __ptr64,char
   const * __ptr64) */

_iobuf * __cdecl google::protobuf::io::win32::fopen(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  _iobuf *p_Var4;
  wchar_t ****ppppwVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  wchar_t ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    p_Var4 = (_iobuf *)0x0;
  }
  else {
    uStack_30 = 0;
    local_28 = ___xmm_00000000000000070000000000000000;
    uStack_20 = _UNK_15145b248;
    p_Var4 = (FILE *)0x0;
    local_38 = (wchar_t ***)0x0;
    cVar1 = FUN_14fb8d1f0(param_1,&local_38);
    if (cVar1 == '\0') {
      piVar3 = _errno();
      *piVar3 = 2;
    }
    else {
      local_58._8_8_ = 0;
      local_48 = ___xmm_00000000000000070000000000000000;
      uStack_40 = _UNK_15145b248;
      local_58._Ptr = (wchar_t *)0x0;
      bVar2 = strings::utf8_to_wcs
                        (param_2,(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                  *)&local_58);
      if (bVar2) {
        uVar6 = &local_58;
        if (7 < uStack_40) {
          uVar6 = local_58._Ptr;
        }
        ppppwVar5 = &local_38;
        if (7 < uStack_20) {
          ppppwVar5 = (wchar_t ****)local_38;
        }
        p_Var4 = _wfopen((wchar_t *)ppppwVar5,(wchar_t *)uVar6);
      }
      else {
        piVar3 = _errno();
        *piVar3 = 0x16;
      }
      if (7 < uStack_40) {
        uVar7 = uStack_40 * 2 + 2;
        uVar6 = local_58._Ptr;
        if (0xfff < uVar7) {
          uVar7 = uStack_40 * 2 + 0x29;
          uVar6 = *(undefined8 *)(local_58._Ptr + -4);
          if ((char *)0x1f < (char *)((longlong)local_58._Ptr + (-8 - uVar6))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar6,uVar7);
      }
      local_48 = ___xmm_00000000000000070000000000000000;
      uStack_40 = _UNK_15145b248;
      local_58._Ptr = local_58._Ptr & 0xffffffffffff0000;
    }
    if (7 < uStack_20) {
      uVar7 = uStack_20 * 2 + 2;
      ppppwVar5 = (wchar_t ****)local_38;
      if (0xfff < uVar7) {
        uVar7 = uStack_20 * 2 + 0x29;
        ppppwVar5 = (wchar_t ****)local_38[-1];
        if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppwVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(ppppwVar5,uVar7);
    }
  }
  return p_Var4;
}

// get @ 14fb8dea0

/* public: char * __ptr64 __cdecl std::unique_ptr<char [0],struct std::default_delete<char [0]>
   >::get(void)const __ptr64 */

char * __thiscall
std::unique_ptr<char_[0],std::default_delete<char_[0]>_>::get
          (unique_ptr<char_[0],std::default_delete<char_[0]>_> *this)

{
  return *(char **)this;
}

// get @ 14fb8deb0

/* public: wchar_t * __ptr64 __cdecl std::unique_ptr<wchar_t [0],struct std::default_delete<wchar_t
   [0]> >::get(void)const __ptr64 */

wchar_t * __thiscall
std::unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_>::get
          (unique_ptr<wchar_t_[0],std::default_delete<wchar_t_[0]>_> *this)

{
  return *(wchar_t **)this;
}

// insert @ 14fb8dec0

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::insert(unsigned __int64,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          __uint64 param_1,
          basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  ulonglong uVar5;
  undefined1 local_res8;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (7 < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                **)param_2;
  }
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<wchar_t>_>::_Xran();
  }
  uVar5 = (this->_Mypair)._Myval2._Myres;
  if (uVar5 - uVar2 < uVar1) {
    pbVar3 = _Reallocate_grow_by<_public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert(unsigned___int64,wchar_t_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,unsigned___int64,wchar_t_const*___ptr64,unsigned___int64>
                       (this,uVar1,local_res8,param_1,param_2,uVar1);
    return pbVar3;
  }
  (this->_Mypair)._Myval2._Mysize = uVar1 + uVar2;
  pbVar4 = this;
  if (7 < uVar5) {
    pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar3 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           ((pbVar4->_Mypair)._Myval2._Bx._Buf + param_1);
  uVar5 = uVar1;
  if ((pbVar3 < param_2 + uVar1 * 2) &&
     (param_2 <=
      (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
      ((pbVar4->_Mypair)._Myval2._Bx._Buf + uVar2))) {
    if (param_2 < pbVar3) {
      uVar5 = (longlong)pbVar3 - (longlong)param_2 >> 1;
    }
    else {
      uVar5 = 0;
    }
  }
  memmove(pbVar3 + uVar1 * 2,pbVar3,(uVar2 - param_1) * 2 + 2);
  memcpy(pbVar3,param_2,uVar5 * 2);
  memcpy(pbVar3 + uVar5 * 2,param_2 + (uVar1 + uVar5) * 2,(uVar1 - uVar5) * 2);
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}

// insert @ 14fb8dfe0

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::insert(unsigned __int64,wchar_t const
   * __ptr64 const,unsigned __int64) __ptr64 */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          __uint64 param_1,wchar_t *param_2,__uint64 param_3)

{
  wchar_t *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar4;
  __uint64 _Var5;
  undefined1 local_res8;
  
  uVar1 = (this->_Mypair)._Myval2._Mysize;
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<wchar_t>_>::_Xran();
  }
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (uVar2 - uVar1 < param_3) {
    pbVar3 = _Reallocate_grow_by<_public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert(unsigned___int64,wchar_t_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,unsigned___int64,wchar_t_const*___ptr64,unsigned___int64>
                       (this,param_3,local_res8,param_1,param_2,param_3);
    return pbVar3;
  }
  (this->_Mypair)._Myval2._Mysize = uVar1 + param_3;
  pbVar4 = this;
  if (7 < uVar2) {
    pbVar4 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  _Src = (pbVar4->_Mypair)._Myval2._Bx._Buf + param_1;
  _Var5 = param_3;
  if ((_Src < param_2 + param_3) && (param_2 <= (pbVar4->_Mypair)._Myval2._Bx._Buf + uVar1)) {
    if (param_2 < _Src) {
      _Var5 = (longlong)_Src - (longlong)param_2 >> 1;
    }
    else {
      _Var5 = 0;
    }
  }
  memmove(_Src + param_3,_Src,(uVar1 - param_1) * 2 + 2);
  memcpy(_Src,param_2,_Var5 * 2);
  memcpy(_Src + _Var5,param_2 + _Var5 + param_3,(param_3 - _Var5) * 2);
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}

// FUN_14fb8e140 @ 14fb8e140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
FUN_14fb8e140(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
             _Bxty *param_2,_Bxty *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  __uint64 _Var3;
  wchar_t *pwVar4;
  void *pvVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  _Bxty *p_Var9;
  _Bxty *p_Var10;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar11;
  ulong64 uVar12;
  void *pvVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_158 [32];
  wchar_t local_118 [4];
  undefined4 local_110;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_108;
  _Bxty local_100;
  longlong local_f0;
  ulonglong uStack_e8;
  _Bxty local_e0;
  undefined8 local_d0;
  ulonglong uStack_c8;
  _Bxty local_c0;
  undefined8 local_b0;
  ulonglong uStack_a8;
  _Bxty local_a0;
  undefined8 local_90;
  ulonglong uStack_88;
  _Bxty local_80;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110 = 0;
  _Var3 = *(__uint64 *)(param_2->_Alias + 0x10);
  p_Var10 = param_3;
  local_108 = param_1;
  if (_Var3 != 0) {
    uVar15 = *(ulonglong *)(param_3->_Alias + 0x18);
    p_Var9 = param_3;
    if (7 < uVar15) {
      p_Var9 = (_Bxty *)param_3->_Ptr;
    }
    if ((((0x19 < (ushort)(p_Var9->_Buf[0] + L'ﾟ')) && (0x19 < (ushort)(p_Var9->_Buf[0] + L'﾿'))
         ) || (*(wchar_t *)(p_Var9->_Alias + 2) != L':')) ||
       ((*(wchar_t *)(p_Var9->_Alias + 4) != L'/' && (*(wchar_t *)(p_Var9->_Alias + 4) != L'\\'))))
    {
      p_Var9 = param_3;
      if (7 < uVar15) {
        p_Var9 = (_Bxty *)param_3->_Ptr;
      }
      if ((((p_Var9->_Buf[0] != L'\\') || (*(wchar_t *)(p_Var9->_Alias + 2) != L'\\')) ||
          ((*(wchar_t *)(p_Var9->_Alias + 4) != L'?' || (*(wchar_t *)(p_Var9->_Alias + 6) != L'\\'))
          )) && (uVar16 = *(ulonglong *)(param_3->_Alias + 0x10), p_Var10 = param_2, uVar16 != 0)) {
        if (7 < *(ulonglong *)(param_2->_Alias + 0x18)) {
          p_Var10 = (_Bxty *)param_2->_Ptr;
        }
        if ((*(short *)(p_Var10->_Alias + _Var3 * 2 + -2) == 0x2f) ||
           (*(short *)(p_Var10->_Alias + _Var3 * 2 + -2) == 0x5c)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          p_Var10 = param_3;
          if (7 < uVar15) {
            p_Var10 = (_Bxty *)param_3->_Ptr;
          }
          if ((p_Var10->_Buf[0] == L'/') || (p_Var10->_Buf[0] == L'\\')) {
            local_100._Ptr = (wchar_t *)0x0;
            local_100._8_8_ = 0;
            local_f0 = 0;
            uStack_e8 = 0;
            if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              std::_String_val<std::_Simple_types<wchar_t>_>::_Xran();
            }
            uVar12 = 0xffffffffffffffff;
            if (uVar16 - 1 != 0xffffffffffffffff) {
              uVar12 = uVar16 - 1;
            }
            if (7 < uVar15) {
              param_3 = (_Bxty *)param_3->_Ptr;
            }
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            _Construct<1,wchar_t_const_*>
                      ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                       &local_100,(wchar_t *)(param_3->_Alias + 2),uVar12);
            local_110 = 0x82;
            uVar15 = *(ulonglong *)(param_2->_Alias + 0x10);
            if (7 < *(ulonglong *)(param_2->_Alias + 0x18)) {
              param_2 = (_Bxty *)param_2->_Ptr;
            }
            if (uStack_e8 - local_f0 < uVar15) {
              p_Var10 = (_Bxty *)std::
                                 basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                 ::
                                 _Reallocate_grow_by<_public:_class_std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>&___ptr64___cdecl_std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::insert(unsigned___int64,wchar_t_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,unsigned___int64,wchar_t_const*___ptr64,unsigned___int64>
                                           ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                             *)&local_100,uVar15,local_118[0]._0_1_,0);
            }
            else {
              uVar14 = &local_100;
              if (7 < uStack_e8) {
                uVar14 = local_100._Ptr;
              }
              uVar16 = uVar15;
              if ((((ulonglong)uVar14 < (_Bxty *)(param_2->_Alias + uVar15 * 2)) &&
                  (param_2 <= (_Bxty *)(uVar14 + local_f0 * 2))) &&
                 (uVar16 = 0, param_2 < (ulonglong)uVar14)) {
                uVar16 = uVar14 - (longlong)param_2 >> 1;
              }
              lVar2 = local_f0 * 2;
              local_f0 = local_f0 + uVar15;
              memmove((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                       *)(uVar14 + uVar15 * 2),(void *)uVar14,lVar2 + 2);
              memcpy((void *)uVar14,param_2,uVar16 * 2);
              memcpy((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)(uVar14 + uVar16 * 2),
                     (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *)(param_2->_Alias + (uVar16 + uVar15) * 2),(uVar15 - uVar16) * 2);
              p_Var10 = &local_100;
            }
            local_c0._Ptr = p_Var10->_Ptr;
            local_c0._8_8_ = *(undefined8 *)(p_Var10->_Alias + 8);
            local_b0 = *(undefined8 *)(p_Var10->_Alias + 0x10);
            uStack_a8 = *(ulonglong *)(p_Var10->_Alias + 0x18);
            *(undefined8 *)(p_Var10->_Alias + 0x10) = 0;
            *(undefined8 *)(p_Var10->_Alias + 0x18) = 7;
            p_Var10->_Buf[0] = L'\0';
            p_Var10 = &local_c0;
            bVar8 = true;
            bVar7 = true;
            bVar6 = false;
          }
          else {
            if (0x7ffffffffffffffe - _Var3 < uVar16) {
                    /* WARNING: Subroutine does not return */
              std::_Xlen_string();
            }
            p_Var10 = param_2;
            if (7 < *(ulonglong *)(param_2->_Alias + 0x18)) {
              p_Var10 = (_Bxty *)param_2->_Ptr;
            }
            if (7 < uVar15) {
              param_3 = (_Bxty *)param_3->_Ptr;
            }
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                       &local_80,local_118[0]._0_1_,
                       (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)param_2->_Alias,p_Var10->_Buf,_Var3,param_3->_Buf,uVar16);
            p_Var10 = &local_80;
            bVar8 = false;
            bVar7 = false;
            bVar6 = true;
          }
          pwVar4 = (&p_Var10->_Ptr)[1];
          (param_1->_Mypair)._Myval2._Bx._Ptr = p_Var10->_Ptr;
          *(wchar_t **)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = pwVar4;
          pwVar4 = (&p_Var10->_Ptr)[3];
          (param_1->_Mypair)._Myval2._Mysize = (ulong64)(&p_Var10->_Ptr)[2];
          (param_1->_Mypair)._Myval2._Myres = (ulong64)pwVar4;
          (&p_Var10->_Ptr)[2] = (wchar_t *)0x0;
          (&p_Var10->_Ptr)[3] = (wchar_t *)0x7;
          p_Var10->_Buf[0] = L'\0';
          if ((bVar6) && (7 < uStack_68)) {
            uVar15 = uStack_68 * 2 + 2;
            uVar14 = local_80._Ptr;
            if (0xfff < uVar15) {
              uVar15 = uStack_68 * 2 + 0x29;
              uVar14 = *(undefined8 *)(local_80._Ptr + -4);
              if (0x1f < (ulonglong)((longlong)local_80._Ptr + (-8 - uVar14))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar14,uVar15);
          }
          if ((bVar7) && (7 < uStack_a8)) {
            uVar15 = uStack_a8 * 2 + 2;
            uVar14 = local_c0._Ptr;
            if (0xfff < uVar15) {
              uVar15 = uStack_a8 * 2 + 0x29;
              uVar14 = *(undefined8 *)(local_c0._Ptr + -4);
              if (0x1f < (ulonglong)((longlong)local_c0._Ptr + (-8 - uVar14))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar14,uVar15);
          }
          if (!bVar8) {
            return param_1;
          }
          if (uStack_e8 < 8) {
            return param_1;
          }
          uVar15 = uStack_e8 * 2 + 2;
          uVar14 = local_100._Ptr;
          if (0xfff < uVar15) {
            uVar15 = uStack_e8 * 2 + 0x29;
            uVar14 = *(undefined8 *)(local_100._Ptr + -4);
            if ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)0x1f < (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *)((longlong)local_100._Ptr + (-8 - uVar14))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
        else {
          p_Var10 = param_3;
          if (7 < uVar15) {
            p_Var10 = (_Bxty *)param_3->_Ptr;
          }
          if ((p_Var10->_Buf[0] == L'/') || (p_Var10->_Buf[0] == L'\\')) {
            puVar1 = (ulonglong *)(param_3->_Alias + 0x10);
            if (0x7ffffffffffffffe - _Var3 < *puVar1) {
                    /* WARNING: Subroutine does not return */
              std::_Xlen_string();
            }
            p_Var10 = param_2;
            if (7 < *(ulonglong *)(param_2->_Alias + 0x18)) {
              p_Var10 = (_Bxty *)param_2->_Ptr;
            }
            if (7 < uVar15) {
              param_3 = (_Bxty *)param_3->_Ptr;
            }
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                       &local_60,local_118[0]._0_1_,
                       (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)param_2->_Alias,p_Var10->_Buf,_Var3,param_3->_Buf,*puVar1);
            p_Var10 = &local_60;
            bVar8 = true;
            bVar7 = false;
            bVar6 = false;
          }
          else {
            local_118[0] = L'\\';
            if (_Var3 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
              std::_Xlen_string();
            }
            p_Var10 = param_2;
            if (7 < *(ulonglong *)(param_2->_Alias + 0x18)) {
              p_Var10 = (_Bxty *)param_2->_Ptr;
            }
            std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                       &local_e0,(_String_constructor_concat_tag)0x5c,
                       (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)param_2->_Alias,p_Var10->_Buf,_Var3,local_118,1);
            local_110 = 0x820;
            pbVar11 = std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      ::append((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                *)&local_e0,
                               (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                                *)param_3->_Alias);
            local_a0._Ptr = *(wchar_t **)pbVar11;
            local_a0._8_8_ = *(undefined8 *)(pbVar11 + 8);
            local_90 = *(undefined8 *)(pbVar11 + 0x10);
            uStack_88 = *(ulonglong *)(pbVar11 + 0x18);
            *(undefined8 *)(pbVar11 + 0x10) = 0;
            *(undefined8 *)(pbVar11 + 0x18) = 7;
            *(undefined2 *)pbVar11 = 0;
            p_Var10 = &local_a0;
            bVar8 = false;
            bVar7 = true;
            bVar6 = true;
          }
          pwVar4 = (&p_Var10->_Ptr)[1];
          (param_1->_Mypair)._Myval2._Bx._Ptr = p_Var10->_Ptr;
          *(wchar_t **)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = pwVar4;
          pwVar4 = (&p_Var10->_Ptr)[3];
          (param_1->_Mypair)._Myval2._Mysize = (ulong64)(&p_Var10->_Ptr)[2];
          (param_1->_Mypair)._Myval2._Myres = (ulong64)pwVar4;
          (&p_Var10->_Ptr)[2] = (wchar_t *)0x0;
          (&p_Var10->_Ptr)[3] = (wchar_t *)0x7;
          p_Var10->_Buf[0] = L'\0';
          if ((bVar6) && (7 < uStack_88)) {
            uVar15 = uStack_88 * 2 + 2;
            uVar14 = local_a0._Ptr;
            if (0xfff < uVar15) {
              uVar15 = uStack_88 * 2 + 0x29;
              uVar14 = *(undefined8 *)(local_a0._Ptr + -4);
              if (0x1f < (ulonglong)((longlong)local_a0._Ptr + (-8 - uVar14))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar14,uVar15);
          }
          if (bVar7) {
            if (7 < uStack_c8) {
              uVar15 = uStack_c8 * 2 + 2;
              pvVar5 = (void *)CONCAT62(local_e0._2_6_,local_e0._Buf[0]);
              pvVar13 = pvVar5;
              if (0xfff < uVar15) {
                uVar15 = uStack_c8 * 2 + 0x29;
                pvVar13 = *(void **)((longlong)pvVar5 + -8);
                if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar13))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar13,uVar15);
            }
            local_d0 = ___xmm_00000000000000070000000000000000;
            uStack_c8 = _UNK_15145b248;
            local_e0._Buf[0] = L'\0';
          }
          if (!bVar8) {
            return param_1;
          }
          if (local_48 < 8) {
            return param_1;
          }
          uVar15 = local_48 * 2 + 2;
          uVar14 = local_60._Ptr;
          if (0xfff < uVar15) {
            uVar15 = local_48 * 2 + 0x29;
            uVar14 = *(undefined8 *)(local_60._Ptr + -4);
            if ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)0x1f < (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *)((longlong)local_60._Ptr + (-8 - uVar14))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
        operator_delete((void *)uVar14,uVar15);
        return param_1;
      }
    }
  }
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            (param_1,(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     p_Var10);
  return param_1;
}

// length @ 14fb8e7a0

/* public: static unsigned __int64 __cdecl std::_WChar_traits<wchar_t>::length(wchar_t const *
   __ptr64) */

__uint64 __cdecl std::_WChar_traits<wchar_t>::length(wchar_t *param_1)

{
  __uint64 _Var1;
  
  _Var1 = 0xffffffffffffffff;
  do {
    _Var1 = _Var1 + 1;
  } while (param_1[_Var1] != L'\0');
  return _Var1;
}

// max_size @ 14fb8e7d0

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::max_size(class std::allocator<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > > const & __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::max_size(allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
           *param_1)

{
  return 0x7ffffffffffffff;
}

// max_size @ 14fb8e7f0

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<wchar_t> >::max_size(class std::allocator<wchar_t> const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<wchar_t>_>::max_size(allocator<wchar_t> *param_1)

{
  return 0x7fffffffffffffff;
}

// max_size @ 14fb8e810

/* public: unsigned __int64 __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::max_size
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  return 0x7ffffffffffffffe;
}

// max_size @ 14fb8e830

/* public: unsigned __int64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::max_size(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  return 0x7ffffffffffffff;
}

// mbs_to_wcs @ 14fb8e850

/* bool __cdecl google::protobuf::io::win32::strings::mbs_to_wcs(char const * __ptr64,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64,bool) */

bool __cdecl
google::protobuf::io::win32::strings::mbs_to_wcs
          (char *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2,
          bool param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  DWORD DVar3;
  ulong64 uVar4;
  wchar_t *lpWideCharStr;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  ulong64 uVar6;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pbVar5 = param_2;
    if (7 < (param_2->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_2->_Mypair)._Myval2._Mysize = 0;
    (pbVar5->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  }
  else {
    SetLastError(0);
    uVar6 = 0xffffffffffffffff;
    iVar2 = MultiByteToWideChar(-(uint)param_3 & 0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
    if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0x7a)) {
      return false;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)iVar2;
    uVar4 = SUB168(ZEXT816(2) * auVar1,0);
    if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lpWideCharStr = operator_new__(uVar4);
    MultiByteToWideChar(-(uint)param_3 & 0xfde9,0,param_1,-1,lpWideCharStr,iVar2 + 1);
    do {
      uVar6 = uVar6 + 1;
    } while (lpWideCharStr[uVar6] != L'\0');
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (param_2,lpWideCharStr,uVar6);
    if (lpWideCharStr != (wchar_t *)0x0) {
      operator_delete__(lpWideCharStr);
    }
  }
  return true;
}

// mkdir @ 14fb8e970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl google::protobuf::io::win32::mkdir(char const * __ptr64,int) */

int __cdecl google::protobuf::io::win32::mkdir(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  wchar_t ****ppppwVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  wchar_t ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = ___xmm_00000000000000070000000000000000;
  uStack_20 = _UNK_15145b248;
  local_38 = (wchar_t ***)0x0;
  cVar1 = FUN_14fb8d1f0(0,&local_38);
  if (cVar1 == '\0') {
    piVar3 = _errno();
    *piVar3 = 2;
    iVar2 = -1;
  }
  else {
    ppppwVar4 = &local_38;
    if (7 < uStack_20) {
      ppppwVar4 = (wchar_t ****)local_38;
    }
    iVar2 = _wmkdir((wchar_t *)ppppwVar4);
  }
  if (7 < uStack_20) {
    uVar5 = uStack_20 * 2 + 2;
    ppppwVar4 = (wchar_t ****)local_38;
    if (0xfff < uVar5) {
      uVar5 = uStack_20 * 2 + 0x29;
      ppppwVar4 = (wchar_t ****)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppwVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(ppppwVar4,uVar5);
  }
  return iVar2;
}

// move @ 14fb8ea40

/* public: static wchar_t * __ptr64 __cdecl std::_Char_traits<wchar_t,unsigned short>::move(wchar_t
   * __ptr64 const,wchar_t const * __ptr64 const,unsigned __int64) */

wchar_t * __cdecl
std::_Char_traits<wchar_t,unsigned_short>::move(wchar_t *param_1,wchar_t *param_2,__uint64 param_3)

{
  memmove(param_1,param_2,param_3 * 2);
  return param_1;
}

// FUN_14fb8ea60 @ 14fb8ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
FUN_14fb8ea60(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1,
             basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  wchar_t wVar1;
  short sVar2;
  void *pvVar3;
  bool bVar4;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar10;
  ulonglong uVar11;
  short **ppsVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar16;
  int *piVar17;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar18;
  _Bxty *p_Var19;
  longlong lVar20;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar21;
  longlong lVar22;
  int iVar23;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar24;
  ulong64 uVar25;
  uint uVar26;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar27;
  int iVar28;
  undefined1 auStackY_228 [32];
  uint local_1e8 [2];
  uint local_1e0;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1d8;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1d0;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1c8;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_1c0;
  vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
  local_1b8;
  int iStack_19c;
  undefined1 local_198 [16];
  undefined8 *local_188;
  undefined1 local_180 [104];
  wchar_t *local_118;
  uint local_110;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_100;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_98;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_90;
  _Bxty local_88;
  longlong local_78;
  ulonglong local_70;
  _Bxty local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8[0] = 0;
  local_1e0 = 0;
  uVar14 = (param_2->_Mypair)._Myval2._Myres;
  pbVar5 = param_2;
  if (7 < uVar14) {
    pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  if (((((pbVar5->_Mypair)._Myval2._Bx._Buf[0] == L'\\') &&
       ((pbVar5->_Mypair)._Myval2._Bx._Buf[1] == L'\\')) &&
      ((pbVar5->_Mypair)._Myval2._Bx._Buf[2] == L'?')) &&
     ((pbVar5->_Mypair)._Myval2._Bx._Buf[3] == L'\\')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  local_1d0 = param_1;
  local_1c8 = param_2;
  local_98 = param_1;
  local_90 = param_2;
  if (bVar4) {
    local_68._Ptr = (wchar_t *)0x0;
    local_68._8_8_ = 0;
    local_58 = 0;
    uStack_50 = 0;
    uVar15 = (param_2->_Mypair)._Myval2._Mysize;
    if (uVar15 < 4) {
                    /* WARNING: Subroutine does not return */
      std::_String_val<std::_Simple_types<wchar_t>_>::_Xran();
    }
    uVar6 = uVar15 - 4;
    uVar25 = 0xffffffffffffffff;
    if (uVar6 != 0xffffffffffffffff) {
      uVar25 = uVar6;
    }
    pbVar5 = param_2;
    if (7 < uVar14) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    _Construct<1,wchar_t_const_*>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_68
               ,(pbVar5->_Mypair)._Myval2._Bx._Buf + 4,uVar25);
    local_1e8[0] = 0x20;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::operator=
              (param_2,(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                        *)local_68._Alias);
    if (uStack_50 < 8) goto LAB_14fb8eb9a;
    uVar14 = uStack_50 * 2 + 2;
    uVar9 = local_68._Ptr;
    if (0xfff < uVar14) {
      uVar14 = uStack_50 * 2 + 0x29;
      uVar9 = *(undefined8 *)(local_68._Ptr + -4);
      if (0x1f < (ulonglong)((longlong)local_68._Ptr + (-8 - uVar9))) goto LAB_14fb8f2ca;
    }
    operator_delete((void *)uVar9,uVar14);
  }
LAB_14fb8eb9a:
  piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar17 < DAT_1553e57b8) && (_Init_thread_header(&DAT_1553e57b8), DAT_1553e57b8 == -1)) {
    atexit(FUN_150474780);
    _Init_thread_footer(&DAT_1553e57b8);
  }
  if ((*piVar17 < DAT_1553e57bc) && (_Init_thread_header(&DAT_1553e57bc), DAT_1553e57bc == -1)) {
    atexit(FUN_150474800);
    _Init_thread_footer(&DAT_1553e57bc);
  }
  if (7 < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar10 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *
            )0x0;
  local_1b8._Mypair._Myval2._Myfirst =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  local_1b8._Mypair._Myval2._Mylast =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  local_1b8._Mypair._Myval2._Myend =
       (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)0x0;
  iVar28 = -1;
  pbVar18 = pbVar10;
  pbVar5 = param_2;
  pbVar21 = pbVar10;
  pbVar24 = pbVar10;
  local_1d8 = param_2;
  do {
    wVar1 = (param_2->_Mypair)._Myval2._Bx._Buf[0];
    iVar23 = (int)pbVar21;
    local_1c0 = param_2;
    if (((wVar1 == L'/') || (wVar1 == L'\\')) || (wVar1 == L'\0')) {
      if ((-1 < iVar28) && (iVar28 < iVar23)) {
        uVar15 = (ulonglong)iVar28;
        local_88._Ptr = (wchar_t *)0x0;
        local_88._8_8_ = 0;
        local_78 = 0;
        local_70 = 0;
        uVar14 = 0xffffffffffffffff;
        do {
          uVar11 = uVar14 + 1;
          lVar20 = uVar14 * 2;
          uVar14 = uVar11;
        } while (*(short *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + lVar20 + 2) != 0);
        if (uVar11 < uVar15) {
                    /* WARNING: Subroutine does not return */
          std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::_Xran();
        }
        uVar14 = (longlong)(iVar23 - iVar28);
        if (uVar11 - uVar15 < (ulonglong)(longlong)(iVar23 - iVar28)) {
          uVar14 = uVar11 - uVar15;
        }
        std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _Construct<1,wchar_t_const_*>
                  ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   &local_88,(pbVar5->_Mypair)._Myval2._Bx._Buf + uVar15,uVar14);
        uVar14 = local_70;
        uVar9 = local_88._Ptr;
        iVar28 = -1;
        ppsVar12 = &DAT_154e21d10;
        if (7 < DAT_154e21d28) {
          ppsVar12 = (short **)DAT_154e21d10;
        }
        uVar8 = &local_88;
        if (7 < local_70) {
          uVar8 = local_88._Ptr;
        }
        if (local_78 == DAT_154e21d20) {
          if (local_78 != 0) {
            lVar22 = uVar8 - (longlong)ppsVar12;
            lVar20 = local_78;
            do {
              if (*(short *)((longlong)ppsVar12 + lVar22) != *(short *)ppsVar12) goto LAB_14fb8edcd;
              ppsVar12 = (short **)((longlong)ppsVar12 + 2);
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (pbVar18 != pbVar10) {
            pbVar21 = pbVar18;
            if (7 < *(ulonglong *)(pbVar18 + 0x18)) {
              pbVar21 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                          **)pbVar18;
            }
            if (((0x19 < (ushort)(*(short *)pbVar21 - 0x61U)) &&
                (0x19 < (ushort)(*(short *)pbVar21 - 0x41U))) ||
               ((*(short *)(pbVar21 + 2) != 0x3a ||
                (1 < (ulonglong)((longlong)pbVar10 - (longlong)pbVar18 >> 5))))) {
              pbVar21 = pbVar10 + -0x20;
              if (7 < *(ulonglong *)(pbVar10 + -8)) {
                pvVar3 = *(void **)pbVar21;
                lVar20 = *(ulonglong *)(pbVar10 + -8) * 2;
                uVar15 = lVar20 + 2;
                pvVar13 = pvVar3;
                if (0xfff < uVar15) {
                  uVar15 = lVar20 + 0x29;
                  pvVar13 = *(void **)((longlong)pvVar3 + -8);
                  if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar13,uVar15);
              }
              *(undefined8 *)(pbVar10 + -0x10) = 0;
              *(undefined8 *)(pbVar10 + -8) = 7;
              *(undefined2 *)pbVar21 = 0;
              pbVar10 = pbVar21;
              local_1b8._Mypair._Myval2._Mylast =
                   (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                   pbVar21;
            }
          }
        }
        else {
LAB_14fb8edcd:
          ppsVar12 = &DAT_154e21cf0;
          if (7 < DAT_154e21d08) {
            ppsVar12 = (short **)DAT_154e21cf0;
          }
          uVar8 = &local_88;
          if (7 < local_70) {
            uVar8 = local_88._Ptr;
          }
          if (local_78 == DAT_154e21d00) {
            if (local_78 != 0) {
              lVar22 = uVar8 - (longlong)ppsVar12;
              lVar20 = local_78;
              do {
                if (*(short *)((longlong)ppsVar12 + lVar22) != *(short *)ppsVar12)
                goto LAB_14fb8ee1c;
                ppsVar12 = (short **)((longlong)ppsVar12 + 2);
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
          }
          else {
LAB_14fb8ee1c:
            if (local_78 != 0) {
              if (pbVar10 == pbVar24) {
                std::
                vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
                ::
                _Emplace_reallocate<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64>
                          (&local_1b8,pbVar10,
                           (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                            *)local_88._Alias);
                pbVar10 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *)local_1b8._Mypair._Myval2._Mylast;
                pbVar18 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *)local_1b8._Mypair._Myval2._Myfirst;
                uVar9 = local_88._Ptr;
                pbVar24 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *)local_1b8._Mypair._Myval2._Myend;
                uVar14 = local_70;
              }
              else {
                std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                          ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                            *)pbVar10,
                           (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                            *)&local_88);
                local_1b8._Mypair._Myval2._Mylast =
                     (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                     (pbVar10 + 0x20);
                pbVar10 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *)local_1b8._Mypair._Myval2._Mylast;
                uVar9 = local_88._Ptr;
                uVar14 = local_70;
              }
            }
          }
        }
        pbVar5 = local_1d8;
        if (7 < uVar14) {
          uVar15 = uVar14 * 2 + 2;
          p_Var19 = (_Bxty *)uVar9;
          if (0xfff < uVar15) {
            uVar15 = uVar14 * 2 + 0x29;
            p_Var19 = *(_Bxty **)(uVar9 + -8);
            if ((char *)0x1f < (char *)(uVar9 + (-8 - (longlong)p_Var19))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(p_Var19,uVar15);
          pbVar5 = local_1d8;
        }
      }
    }
    else if (iVar28 < 0) {
      iVar28 = iVar23;
    }
    pbVar27 = local_1d0;
    if ((local_1c0->_Mypair)._Myval2._Bx._Buf[0] == L'\0') break;
    pbVar21 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               *)(ulonglong)(iVar23 + 1);
    param_2 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
              ((longlong)&(local_1c0->_Mypair)._Myval2._Bx + 2);
  } while( true );
  lVar20 = (longlong)pbVar10 - (longlong)pbVar18 >> 5;
  if ((lVar20 == 1) && (*(longlong *)(pbVar18 + 0x10) == 2)) {
    pbVar21 = pbVar18;
    if (7 < *(ulonglong *)(pbVar18 + 0x18)) {
      pbVar21 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  **)pbVar18;
    }
    if ((((ushort)(*(short *)pbVar21 - 0x61U) < 0x1a) ||
        ((ushort)(*(short *)pbVar21 - 0x41U) < 0x1a)) && (*(short *)(pbVar21 + 2) == 0x3a)) {
      local_1e8[0] = CONCAT22(local_1e8[0]._2_2_,0x5c);
      pbVar21 = pbVar18;
      if (7 < *(ulonglong *)(pbVar18 + 0x18)) {
        pbVar21 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    **)pbVar18;
      }
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                (local_1d0,(_String_constructor_concat_tag)0x5c,pbVar18,(wchar_t *)pbVar21,2,
                 (wchar_t *)local_1e8,1);
      pbVar5 = local_1c8;
      pbVar21 = pbVar18;
      if (pbVar18 !=
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
          0x0) {
        for (; pbVar21 != pbVar10; pbVar21 = pbVar21 + 0x20) {
          if (7 < *(ulonglong *)(pbVar21 + 0x18)) {
            pvVar3 = *(void **)pbVar21;
            lVar20 = *(ulonglong *)(pbVar21 + 0x18) * 2;
            uVar14 = lVar20 + 2;
            pvVar13 = pvVar3;
            if (0xfff < uVar14) {
              uVar14 = lVar20 + 0x29;
              pvVar13 = *(void **)((longlong)pvVar3 + -8);
              if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))
              goto LAB_14fb8f2ca;
            }
            operator_delete(pvVar13,uVar14);
          }
          *(ulong64 *)(pbVar21 + 0x10) = 0;
          *(ulong64 *)(pbVar21 + 0x18) = 7;
          *(undefined2 *)pbVar21 = 0;
        }
        uVar25 = (longlong)pbVar24 - (longlong)pbVar18 & 0xffffffffffffffe0;
        pbVar10 = pbVar18;
        if (0xfff < uVar25) {
          uVar25 = uVar25 + 0x27;
          pbVar10 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      **)(pbVar18 + -8);
          if ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               *)0x1f < pbVar18 + (-8 - (longlong)pbVar10)) goto LAB_14fb8f2ca;
        }
        operator_delete(pbVar10,uVar25);
        pbVar5 = local_1c8;
      }
      goto LAB_14fb8f01a;
    }
  }
  local_198._0_8_ =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        _vbtable__for__std__basic_istream<wchar_t,std::char_traits<wchar_t>_>__;
  local_188 = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
               _vbtable__for__std__basic_ostream<wchar_t,std::char_traits<wchar_t>_>__;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (&local_100);
  uVar26 = local_1e8[0] | 8;
  local_1e8[0] = uVar26;
  local_1e0 = uVar26;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_198,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
  local_180._0_8_ =
       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  iVar28 = 0;
  local_118 = (wchar_t *)0x0;
  local_110 = 0;
  if (lVar20 != 0) {
    pbVar21 = pbVar18;
    while( true ) {
      pbVar16 = pbVar21;
      if (7 < *(ulonglong *)(pbVar21 + 0x18)) {
        pbVar16 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    **)pbVar21;
      }
      std::_Insert_string<wchar_t,std::char_traits<wchar_t>,unsigned___int64>
                ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)&local_188,
                 (wchar_t *)pbVar16,*(__uint64 *)(pbVar21 + 0x10));
      iVar28 = iVar28 + 1;
      pbVar21 = pbVar21 + 0x20;
      uVar26 = local_1e8[0];
      if ((ulonglong)((longlong)pbVar10 - (longlong)pbVar18 >> 5) <= (ulonglong)(longlong)iVar28)
      break;
      std::operator<<<wchar_t,std::char_traits<wchar_t>_>
                ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)&local_188,L'\\');
    }
  }
  pbVar5 = local_1c8;
  uVar25 = (local_1c8->_Mypair)._Myval2._Mysize;
  if ((uVar25 != 0) &&
     ((sVar2 = *(short *)((longlong)local_1d8 + uVar25 * 2 + -2), sVar2 == 0x2f || (sVar2 == 0x5c)))
     ) {
    std::operator<<<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)&local_188,L'\\');
  }
  (local_1d0->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(local_1d0->_Mypair)._Myval2._Bx + 8) = 0;
  (local_1d0->_Mypair)._Myval2._Mysize = 0;
  (local_1d0->_Mypair)._Myval2._Myres = 7;
  (local_1d0->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  local_1e0 = uVar26 | 4;
  local_68._Ptr = (wchar_t *)0x0;
  local_68._8_8_ = 0;
  if ((((byte)local_110 & 0x22) == 2) ||
     (pwVar7 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180),
     pwVar7 == (wchar_t *)0x0)) {
    uVar9 = local_68._8_8_;
    uVar8 = local_68._Ptr;
    if (((local_110 & 4) == 0) &&
       (pwVar7 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                           ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180),
       uVar9 = local_68._8_8_, uVar8 = local_68._Ptr, pwVar7 != (wchar_t *)0x0)) {
      uVar8 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                        ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
      pwVar7 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
      uVar9 = (longlong)pwVar7 - uVar8 >> 1;
    }
  }
  else {
    uVar8 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pbase
                      ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
    pwVar7 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
    if (pwVar7 < local_118) {
      pwVar7 = local_118;
    }
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
              ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_180);
    uVar9 = (longlong)pwVar7 - uVar8 >> 1;
  }
  pbVar27 = local_1d0;
  if ((wchar_t *)uVar8 != (wchar_t *)0x0) {
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (local_1d0,(wchar_t *)uVar8,uVar9);
  }
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  ~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
            ((basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_180);
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(local_180 + 8));
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (&local_100);
  pbVar21 = pbVar18;
  if (pbVar18 !=
      (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)0x0)
  {
    for (; pbVar21 != pbVar10; pbVar21 = pbVar21 + 0x20) {
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      _Tidy_deallocate((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                       pbVar21);
    }
    uVar25 = (longlong)pbVar24 - (longlong)pbVar18 & 0xffffffffffffffe0;
    pbVar10 = pbVar18;
    if (0xfff < uVar25) {
      uVar25 = uVar25 + 0x27;
      pbVar10 = *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  **)(pbVar18 + -8);
      if ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
          0x1f < pbVar18 + (-8 - (longlong)pbVar10)) {
LAB_14fb8f2ca:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar10,uVar25);
  }
LAB_14fb8f01a:
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
            (pbVar5);
  return pbVar27;
}

// not_eof @ 14fb8f360

/* public: static unsigned short __cdecl std::_WChar_traits<wchar_t>::not_eof(unsigned short) */

ushort __cdecl std::_WChar_traits<wchar_t>::not_eof(ushort param_1)

{
  if (param_1 == 0xffff) {
    param_1 = 0;
  }
  return param_1;
}

// open @ 14fb8f380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl google::protobuf::io::win32::open(char const * __ptr64,int,int) */

int __cdecl google::protobuf::io::win32::open(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined4 local_50;
  int local_48 [2];
  undefined8 ***local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  local_30 = ___xmm_00000000000000070000000000000000;
  uStack_28 = _UNK_15145b248;
  local_40 = (undefined8 ****)0x0;
  cVar1 = FUN_14fb8d1f0(0,&local_40);
  if (cVar1 == '\0') {
    piVar3 = _errno();
    *piVar3 = 2;
    iVar6 = -1;
  }
  else {
    ppppuVar4 = &local_40;
    if (7 < uStack_28) {
      ppppuVar4 = (undefined8 ****)local_40;
    }
    local_50 = 0;
    local_58 = local_48;
    iVar2 = _wsopen_dispatch(ppppuVar4,param_2,0x40,param_3);
    iVar6 = local_48[0];
    if (iVar2 != 0) {
      iVar6 = -1;
    }
  }
  if (7 < uStack_28) {
    uVar5 = uStack_28 * 2 + 2;
    ppppuVar4 = (undefined8 ****)local_40;
    if (0xfff < uVar5) {
      uVar5 = uStack_28 * 2 + 0x29;
      ppppuVar4 = (undefined8 ****)local_40[-1];
      if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)ppppuVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(ppppuVar4,uVar5);
  }
  return iVar6;
}

// overflow @ 14fb8f480

/* protected: virtual unsigned short __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::overflow(unsigned short) __ptr64 */

ushort __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::overflow
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ushort param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *_Src;
  ulonglong uVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  wchar_t *_Dst;
  ulonglong uVar6;
  
  if ((this->_Mystate & 2) != 0) {
    return 0xffff;
  }
  if (param_1 == 0xffff) {
    return 0;
  }
  pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
                     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  if ((pwVar1 != (wchar_t *)0x0) && (pwVar1 < pwVar2)) {
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    *pwVar2 = param_1;
    this->_Seekhigh = pwVar1 + 1;
    return param_1;
  }
  _Dst = (wchar_t *)0x0;
  _Src = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                   ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  pwVar5 = _Dst;
  if ((pwVar1 == (wchar_t *)0x0) ||
     (pwVar5 = (wchar_t *)((longlong)pwVar2 - (longlong)_Src >> 1), pwVar5 < &DAT_00000020)) {
    uVar6 = 0x40;
LAB_14fb8f5bc:
    _Dst = ::operator_new(uVar6);
  }
  else {
    if (pwVar5 < (wchar_t *)0x3fffffff) {
      uVar6 = (longlong)pwVar5 * 4;
      if (0x7fffffffffffffff < (ulonglong)((longlong)pwVar5 * 2)) {
LAB_14fb8f674:
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
      if (uVar6 < 0x1000) {
        if (uVar6 == 0) goto LAB_14fb8f5c7;
        goto LAB_14fb8f5bc;
      }
      uVar3 = uVar6 + 0x27;
      if (uVar3 <= uVar6) goto LAB_14fb8f674;
    }
    else {
      if ((wchar_t *)0x7ffffffe < pwVar5) {
        return 0xffff;
      }
      uVar3 = 0x100000025;
      uVar6 = 0xfffffffe;
    }
    pvVar4 = ::operator_new(uVar3);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (wchar_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -4) = pvVar4;
  }
LAB_14fb8f5c7:
  memcpy(_Dst,_Src,(longlong)pwVar5 * 2);
  this->_Seekhigh = _Dst + (longlong)pwVar5 + 1;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,_Dst,
             _Dst + (longlong)pwVar5,(wchar_t *)(uVar6 + (longlong)_Dst));
  pwVar2 = _Dst;
  pwVar1 = _Dst;
  if ((this->_Mystate & 4) == 0) {
    pwVar1 = this->_Seekhigh;
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    pwVar2 = _Dst + ((longlong)pwVar2 - (longlong)_Src >> 1);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,_Dst,pwVar2,pwVar1);
  if ((this->_Mystate & 1) != 0) {
    allocator<wchar_t>::deallocate(&this->_Al,_Src,(__uint64)pwVar5);
  }
  this->_Mystate = this->_Mystate | 1;
  pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc
                     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  *pwVar1 = param_1;
  return param_1;
}

// pbackfail @ 14fb8f680

/* protected: virtual unsigned short __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::pbackfail(unsigned short) __ptr64 */

ushort __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::pbackfail
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          ushort param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  if (((pwVar1 == (wchar_t *)0x0) ||
      (pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                          ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this),
      pwVar1 <= pwVar2)) ||
     ((param_1 != 0xffff && ((param_1 != pwVar1[-1] && ((this->_Mystate & 2) != 0)))))) {
    param_1 = 0xffff;
  }
  else {
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gbump
              ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,-1);
    if (param_1 == 0xffff) {
      param_1 = 0;
    }
    else {
      pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      *pwVar1 = param_1;
    }
  }
  return param_1;
}

// pointer_to @ 14fb8f720

/* public: static wchar_t * __ptr64 __cdecl std::pointer_traits<wchar_t *
   __ptr64>::pointer_to(wchar_t & __ptr64) */

wchar_t * __cdecl std::pointer_traits<wchar_t*___ptr64>::pointer_to(wchar_t *param_1)

{
  return param_1;
}

// pop_back @ 14fb8f730

/* public: void __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::pop_back(void) __ptr64 */

void __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::pop_back(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
           *this)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **ppbVar1;
  
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
            ((this->_Mypair)._Myval2._Mylast + -1);
  ppbVar1 = &(this->_Mypair)._Myval2._Mylast;
  *ppbVar1 = *ppbVar1 + -1;
  return;
}

// push_back @ 14fb8f760

/* public: void __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::push_back(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64) __ptr64 */

void __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::push_back(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            *this,basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_1)

{
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **ppbVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *this_00;
  
  this_00 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *
            )(this->_Mypair)._Myval2._Mylast;
  if (this_00 !=
      (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
      (this->_Mypair)._Myval2._Myend) {
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)this_00,
               param_1);
    ppbVar1 = &(this->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    return;
  }
  _Emplace_reallocate<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_const&___ptr64>
            (this,this_00,
             (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)param_1);
  return;
}

// read @ 14fb8f7a0

/* int __cdecl google::protobuf::io::win32::read(int,void * __ptr64,unsigned __int64) */

int __cdecl google::protobuf::io::win32::read(int param_1,void *param_2,__uint64 param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fb8f7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _read(param_1,param_2,(uint)param_3);
  return iVar1;
}

// seekoff @ 14fb8f7b0

/* protected: virtual class std::fpos<struct _Mbstatet> __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::seekoff(__int64,int,int) __ptr64 */

fpos<_Mbstatet> * __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::seekoff
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          fpos<_Mbstatet> *__return_storage_ptr__,__int64 param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((param_3 & 1U) == 0) || ((this->_Mystate & 4) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((param_3 & 2U) == 0) || ((this->_Mystate & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar1) || (bVar2)) goto LAB_14fb8f92d;
  pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  if ((this->_Mystate & 2) == 0) {
    pwVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if ((pwVar4 != (wchar_t *)0x0) && (this->_Seekhigh < pwVar4)) {
      this->_Seekhigh = pwVar4;
    }
  }
  else {
    pwVar4 = (wchar_t *)0x0;
  }
  pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  uVar7 = (longlong)this->_Seekhigh - (longlong)pwVar5 >> 1;
  if (param_2 == 0) {
    uVar6 = 0;
LAB_14fb8f8bc:
    uVar6 = uVar6 + param_1;
    if ((uVar6 <= uVar7) &&
       ((uVar6 == 0 ||
        ((((param_3 & 1U) == 0 || (pwVar3 != (wchar_t *)0x0)) &&
         (((param_3 & 2U) == 0 || (pwVar4 != (wchar_t *)0x0)))))))) {
      if (((param_3 & 1U) != 0) && (pwVar3 != (wchar_t *)0x0)) {
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
                  ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,pwVar5,pwVar5 + uVar6
                   ,this->_Seekhigh);
      }
      if (((param_3 & 2U) != 0) && (pwVar4 != (wchar_t *)0x0)) {
        pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
                           ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
                  ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,pwVar5,pwVar5 + uVar6
                   ,pwVar3);
      }
      __return_storage_ptr__->_Myoff = uVar6;
      goto LAB_14fb8f934;
    }
  }
  else if (param_2 == 1) {
    if (((byte)param_3 & 3) != 3) {
      if ((param_3 & 1U) == 0) {
        if (((param_3 & 2U) != 0) && ((pwVar4 != (wchar_t *)0x0 || (pwVar5 == (wchar_t *)0x0)))) {
          uVar6 = (longlong)pwVar4 - (longlong)pwVar5 >> 1;
          goto LAB_14fb8f8bc;
        }
      }
      else if ((pwVar3 != (wchar_t *)0x0) || (pwVar5 == (wchar_t *)0x0)) {
        uVar6 = (longlong)pwVar3 - (longlong)pwVar5 >> 1;
        goto LAB_14fb8f8bc;
      }
    }
  }
  else {
    uVar6 = uVar7;
    if (param_2 == 2) goto LAB_14fb8f8bc;
  }
LAB_14fb8f92d:
  __return_storage_ptr__->_Myoff = -1;
LAB_14fb8f934:
  __return_storage_ptr__->_Fpos = 0;
  (__return_storage_ptr__->_Mystate)._Wchar = 0;
  (__return_storage_ptr__->_Mystate)._Byte = 0;
  (__return_storage_ptr__->_Mystate)._State = 0;
  return __return_storage_ptr__;
}

// seekpos @ 14fb8f970

/* protected: virtual class std::fpos<struct _Mbstatet> __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::seekpos(class std::fpos<struct
   _Mbstatet>,int) __ptr64 */

fpos<_Mbstatet> * __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::seekpos
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          fpos<_Mbstatet> *__return_storage_ptr__,longlong *param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  
  if (((param_4 & 1) == 0) || ((this->_Mystate & 4) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((param_4 & 2) == 0) || ((this->_Mystate & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar1) && (!bVar2)) {
    uVar6 = param_3[1] + *param_3;
    pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if ((this->_Mystate & 2) == 0) {
      pwVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      if ((pwVar4 != (wchar_t *)0x0) && (this->_Seekhigh < pwVar4)) {
        this->_Seekhigh = pwVar4;
      }
    }
    else {
      pwVar4 = (wchar_t *)0x0;
    }
    pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if ((uVar6 <= (ulonglong)((longlong)this->_Seekhigh - (longlong)pwVar5 >> 1)) &&
       ((uVar6 == 0 ||
        ((((param_4 & 1) == 0 || (pwVar3 != (wchar_t *)0x0)) &&
         (((param_4 & 2) == 0 || (pwVar4 != (wchar_t *)0x0)))))))) {
      if (((param_4 & 1) != 0) && (pwVar3 != (wchar_t *)0x0)) {
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
                  ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,pwVar5,pwVar5 + uVar6
                   ,this->_Seekhigh);
      }
      if (((param_4 & 2) != 0) && (pwVar4 != (wchar_t *)0x0)) {
        pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
                           ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
                  ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,pwVar5,pwVar5 + uVar6
                   ,pwVar3);
      }
      __return_storage_ptr__->_Myoff = uVar6;
      goto LAB_14fb8fa91;
    }
  }
  __return_storage_ptr__->_Myoff = -1;
LAB_14fb8fa91:
  __return_storage_ptr__->_Fpos = 0;
  (__return_storage_ptr__->_Mystate)._Wchar = 0;
  (__return_storage_ptr__->_Mystate)._Byte = 0;
  (__return_storage_ptr__->_Mystate)._State = 0;
  return __return_storage_ptr__;
}

// select_on_container_copy_construction @ 14fb8fad0

/* public: static class std::allocator<wchar_t> __cdecl std::_Default_allocator_traits<class
   std::allocator<wchar_t> >::select_on_container_copy_construction(class std::allocator<wchar_t>
   const & __ptr64) */

allocator<wchar_t> __cdecl
std::_Default_allocator_traits<std::allocator<wchar_t>_>::select_on_container_copy_construction
          (allocator<wchar_t> *param_1)

{
  return SUB81(param_1,0);
}

// setmode @ 14fb8fae0

/* int __cdecl google::protobuf::io::win32::setmode(int,int) */

int __cdecl google::protobuf::io::win32::setmode(int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fb8fae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _setmode(param_1,param_2);
  return iVar1;
}

// size @ 14fb8faf0

/* public: unsigned __int64 __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::size(void)const __ptr64 */

__uint64 __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::size
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  return (this->_Mypair)._Myval2._Mysize;
}

// size @ 14fb8fb00

/* public: unsigned __int64 __cdecl std::basic_string_view<wchar_t,struct std::char_traits<wchar_t>
   >::size(void)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::size
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *this)

{
  return this->_Mysize;
}

// size @ 14fb8fb10

/* public: unsigned __int64 __cdecl std::vector<class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::allocator<class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > >
   >::size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
::size(vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
       *this)

{
  return (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)(this->_Mypair)._Myval2._Myfirst >> 5
  ;
}

// stat @ 14fb8fb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl google::protobuf::io::win32::stat(char const * __ptr64,struct _stat64i32 * __ptr64)
    */

int __cdecl google::protobuf::io::win32::stat(char *param_1,_stat64i32 *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  wchar_t ****ppppwVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  wchar_t ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  local_28 = ___xmm_00000000000000070000000000000000;
  uStack_20 = _UNK_15145b248;
  local_38 = (wchar_t ***)0x0;
  cVar1 = FUN_14fb8d1f0(0,&local_38);
  if (cVar1 == '\0') {
    piVar3 = _errno();
    *piVar3 = 2;
    iVar2 = -1;
  }
  else {
    ppppwVar4 = &local_38;
    if (7 < uStack_20) {
      ppppwVar4 = (wchar_t ****)local_38;
    }
    iVar2 = _wstat64i32((wchar_t *)ppppwVar4,param_2);
  }
  if (7 < uStack_20) {
    uVar5 = uStack_20 * 2 + 2;
    ppppwVar4 = (wchar_t ****)local_38;
    if (0xfff < uVar5) {
      uVar5 = uStack_20 * 2 + 0x29;
      ppppwVar4 = (wchar_t ****)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppwVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(ppppwVar4,uVar5);
  }
  return iVar2;
}

// str @ 14fb8fc10

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::str(void)const __ptr64&  */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::str
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulong64 uStack_18;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  uStack_18 = 0;
  if (((byte)this->_Mystate & 0x22) != 2) {
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if (pwVar1 != (wchar_t *)0x0) {
      pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pbase
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      if (pwVar2 < this->_Seekhigh) {
        pwVar2 = this->_Seekhigh;
      }
      uStack_18 = (longlong)pwVar2 - (longlong)pwVar1 >> 1;
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr
                ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      goto LAB_14fb8fcdb;
    }
  }
  if ((this->_Mystate & 4) == 0) {
    pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if (pwVar1 != (wchar_t *)0x0) {
      pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr
                         ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
      uStack_18 = (longlong)pwVar2 - (longlong)pwVar1 >> 1;
      goto LAB_14fb8fcdb;
    }
  }
  pwVar1 = (wchar_t *)0x0;
LAB_14fb8fcdb:
  if (pwVar1 != (wchar_t *)0x0) {
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (__return_storage_ptr__,pwVar1,uStack_18);
  }
  return __return_storage_ptr__;
}

// str @ 14fb8fd10

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > __cdecl std::basic_stringstream<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::str(void)const __ptr64&  */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __thiscall
std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::str
          (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
          *__return_storage_ptr__)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this_00;
  ulonglong uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulong64 uVar4;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  wchar_t *local_40;
  wchar_t *local_38;
  ulong64 uStack_30;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_20;
  
  this_00 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(this + 0x18);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 7;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  local_20 = __return_storage_ptr__;
  if ((((byte)*(undefined4 *)(this + 0x88) & 0x22) == 2) ||
     (pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr(this_00),
     pwVar2 == (wchar_t *)0x0)) {
    uVar4 = uStack_30;
    pwVar2 = local_38;
    if ((((byte)this[0x88] & 4) == 0) &&
       (pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(this_00),
       uVar4 = uStack_30, pwVar2 = local_38, pwVar3 != (wchar_t *)0x0)) {
      pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback(this_00);
      pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr(this_00);
      uVar4 = (longlong)pwVar3 - (longlong)pwVar2 >> 1;
    }
  }
  else {
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pbase(this_00);
    local_40 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr(this_00);
    pbVar5 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             &local_40;
    if (local_40 < *(wchar_t **)(this + 0x80)) {
      pbVar5 = this + 0x80;
    }
    uVar1 = *(ulonglong *)pbVar5;
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr(this_00);
    uVar4 = (longlong)(uVar1 - (longlong)pwVar2) >> 1;
  }
  if (pwVar2 != (wchar_t *)0x0) {
    basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (__return_storage_ptr__,pwVar2,uVar4);
  }
  return __return_storage_ptr__;
}

// substr @ 14fb8fe20

/* public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::substr(unsigned __int64,unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::substr
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this,
          __uint64 param_1,__uint64 param_2)

{
  ulonglong uVar1;
  ulonglong in_R9;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = (this->_Mypair)._Myval2._Mysize;
  if (param_2 <= uVar1) {
    uVar1 = uVar1 - param_2;
    if (uVar1 < in_R9) {
      in_R9 = uVar1;
    }
    if (7 < (this->_Mypair)._Myval2._Myres) {
      this = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
    }
    _Construct<1,wchar_t_const_*>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)param_1,
               (this->_Mypair)._Myval2._Bx._Buf + param_2,in_R9);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _String_val<std::_Simple_types<wchar_t>_>::_Xran();
}

// substr @ 14fb8fe80

/* public: class std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::basic_string_view<wchar_t,struct std::char_traits<wchar_t> >::substr(unsigned
   __int64,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<wchar_t,std::char_traits<wchar_t>_>::substr
          (basic_string_view<wchar_t,std::char_traits<wchar_t>_> *this,__uint64 param_1,
          __uint64 param_2)

{
  wchar_t *pwVar1;
  ulonglong in_R9;
  ulonglong uVar2;
  
  if (param_2 <= this->_Mysize) {
    pwVar1 = this->_Mydata;
    uVar2 = this->_Mysize - param_2;
    if (uVar2 < in_R9) {
      in_R9 = uVar2;
    }
    *(ulonglong *)(param_1 + 8) = in_R9;
    *(wchar_t **)param_1 = pwVar1 + param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _Xran();
}

// testonly_utf8_to_winpath @ 14fb8fec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   __cdecl google::protobuf::io::win32::testonly_utf8_to_winpath(char const * __ptr64) */

basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> * __cdecl
google::protobuf::io::win32::testonly_utf8_to_winpath
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
           *__return_storage_ptr__,char *param_1)

{
  ulong64 uVar1;
  void *pvVar2;
  char cVar3;
  _Bxty *p_Var4;
  void *pvVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *local_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_78._8_8_ = 0;
  local_68 = ___xmm_00000000000000070000000000000000;
  uStack_60 = _UNK_15145b248;
  local_78._Ptr = (wchar_t *)0x0;
  local_80 = __return_storage_ptr__;
  cVar3 = FUN_14fb8d1f0(param_1,&local_78);
  bVar8 = cVar3 == '\0';
  if (bVar8) {
    local_58._8_8_ = 0;
    local_48 = ___xmm_00000000000000070000000000000000;
    uStack_40 = _UNK_15145b248;
    local_58._Ptr = (wchar_t *)0x0;
    p_Var4 = &local_58;
  }
  else {
    p_Var4 = (_Bxty *)std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      ::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                  *)&local_38,
                                 (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                                  *)&local_78);
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (wchar_t *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar6 = *(undefined8 *)((longlong)p_Var4 + 8);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = p_Var4->_Ptr;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = uVar6;
  uVar1 = *(ulong64 *)((longlong)p_Var4 + 0x18);
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = (ulong64)p_Var4[1]._Ptr;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = uVar1;
  p_Var4[1]._Ptr = (wchar_t *)0x0;
  *(ulong64 *)((longlong)p_Var4 + 0x18) = 7;
  p_Var4->_Buf[0] = L'\0';
  if (bVar8) {
    if (7 < uStack_40) {
      uVar7 = uStack_40 * 2 + 2;
      uVar6 = local_58._Ptr;
      if (0xfff < uVar7) {
        uVar7 = uStack_40 * 2 + 0x29;
        uVar6 = *(undefined8 *)(local_58._Ptr + -4);
        if (0x1f < (ulonglong)((longlong)local_58._Ptr + (-8 - uVar6))) goto LAB_14fb9000c;
      }
      ::operator_delete((void *)uVar6,uVar7);
    }
  }
  if (!bVar8) {
    if (7 < uStack_20) {
      uVar7 = uStack_20 * 2 + 2;
      pvVar2 = (void *)CONCAT62(local_38._2_6_,local_38._Buf[0]);
      pvVar5 = pvVar2;
      if (0xfff < uVar7) {
        uVar7 = uStack_20 * 2 + 0x29;
        pvVar5 = *(void **)((longlong)pvVar2 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
LAB_14fb9000c:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar5,uVar7);
    }
    local_28 = ___xmm_00000000000000070000000000000000;
    uStack_20 = _UNK_15145b248;
    local_38._Buf[0] = L'\0';
  }
  if (7 < uStack_60) {
    uVar7 = uStack_60 * 2 + 2;
    uVar6 = local_78._Ptr;
    if (0xfff < uVar7) {
      uVar7 = uStack_60 * 2 + 0x29;
      uVar6 = *(undefined8 *)(local_78._Ptr + -4);
      if (0x1f < (ulonglong)((longlong)local_78._Ptr + (-8 - uVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar6,uVar7);
  }
  return __return_storage_ptr__;
}

// to_char_type @ 14fb900b0

/* public: static wchar_t __cdecl std::_WChar_traits<wchar_t>::to_char_type(unsigned short) */

wchar_t __cdecl std::_WChar_traits<wchar_t>::to_char_type(ushort param_1)

{
  return param_1;
}

// to_int_type @ 14fb900c0

/* public: static unsigned short __cdecl std::_WChar_traits<wchar_t>::to_int_type(wchar_t) */

ushort __cdecl std::_WChar_traits<wchar_t>::to_int_type(wchar_t param_1)

{
  return param_1;
}

// underflow @ 14fb900d0

/* protected: virtual unsigned short __cdecl std::basic_stringbuf<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::underflow(void) __ptr64 */

ushort __thiscall
std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::underflow
          (basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                     ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
  if (pwVar1 != (wchar_t *)0x0) {
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if (pwVar1 < pwVar2) {
      return *pwVar1;
    }
    pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr
                       ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
    if ((pwVar2 != (wchar_t *)0x0) && ((this->_Mystate & 4) == 0)) {
      pwVar3 = this->_Seekhigh;
      if (this->_Seekhigh < pwVar2) {
        pwVar3 = pwVar2;
      }
      if (pwVar1 < pwVar3) {
        this->_Seekhigh = pwVar3;
        pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                           ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
        pwVar2 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback
                           ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
                  ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this,pwVar2,pwVar1,pwVar3)
        ;
        pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr
                           ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)this);
        return *pwVar1;
      }
    }
  }
  return 0xffff;
}

// utf8_to_wcs @ 14fb901a0

/* bool __cdecl google::protobuf::io::win32::strings::utf8_to_wcs(char const * __ptr64,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > *
   __ptr64) */

bool __cdecl
google::protobuf::io::win32::strings::utf8_to_wcs
          (char *param_1,
          basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  DWORD DVar3;
  ulong64 uVar4;
  wchar_t *lpWideCharStr;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *pbVar5;
  ulong64 uVar6;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pbVar5 = param_2;
    if (7 < (param_2->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_2->_Mypair)._Myval2._Mysize = 0;
    (pbVar5->_Mypair)._Myval2._Bx._Buf[0] = L'\0';
  }
  else {
    SetLastError(0);
    uVar6 = 0xffffffffffffffff;
    iVar2 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
    if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0x7a)) {
      return false;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)iVar2;
    uVar4 = SUB168(ZEXT816(2) * auVar1,0);
    if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lpWideCharStr = operator_new__(uVar4);
    MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVar2 + 1);
    do {
      uVar6 = uVar6 + 1;
    } while (lpWideCharStr[uVar6] != L'\0');
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
              (param_2,lpWideCharStr,uVar6);
    if (lpWideCharStr != (wchar_t *)0x0) {
      operator_delete__(lpWideCharStr);
    }
  }
  return true;
}

// wcs_to_mbs @ 14fb902b0

/* bool __cdecl google::protobuf::io::win32::strings::wcs_to_mbs(wchar_t const * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,bool)
    */

bool __cdecl
google::protobuf::io::win32::strings::wcs_to_mbs
          (wchar_t *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2
          ,bool param_3)

{
  bool bVar1;
  int cbMultiByte;
  DWORD DVar2;
  LPBOOL lpUsedDefaultChar;
  char *lpMultiByteStr;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulong64 uVar4;
  BOOL local_res8 [2];
  
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    pbVar3 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_2->_Mypair)._Myval2._Mysize = 0;
    (pbVar3->_Mypair)._Myval2._Bx._Buf[0] = '\0';
LAB_14fb903cd:
    bVar1 = true;
  }
  else {
    local_res8[0] = 0;
    SetLastError(0);
    lpUsedDefaultChar = local_res8;
    if (param_3) {
      lpUsedDefaultChar = (LPBOOL)0x0;
    }
    uVar4 = 0xffffffffffffffff;
    cbMultiByte = WideCharToMultiByte(-(uint)param_3 & 0xfde9,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                      lpUsedDefaultChar);
    if (cbMultiByte == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x7a) goto LAB_14fb90348;
    }
    else {
LAB_14fb90348:
      if (local_res8[0] == 0) {
        lpMultiByteStr = operator_new__((longlong)cbMultiByte);
        WideCharToMultiByte(-(uint)param_3 & 0xfde9,0,param_1,-1,lpMultiByteStr,cbMultiByte,
                            (LPCSTR)0x0,(LPBOOL)0x0);
        do {
          uVar4 = uVar4 + 1;
        } while (lpMultiByteStr[uVar4] != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_2,lpMultiByteStr,uVar4);
        if (lpMultiByteStr != (char *)0x0) {
          operator_delete__(lpMultiByteStr);
        }
        goto LAB_14fb903cd;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// wcs_to_utf8 @ 14fb903f0

/* bool __cdecl google::protobuf::io::win32::strings::wcs_to_utf8(wchar_t const * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::io::win32::strings::wcs_to_utf8
          (wchar_t *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2
          )

{
  int cbMultiByte;
  DWORD DVar1;
  char *lpMultiByteStr;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  ulong64 uVar3;
  
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    pbVar2 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  else {
    SetLastError(0);
    uVar3 = 0xffffffffffffffff;
    cbMultiByte = WideCharToMultiByte(0xfde9,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((cbMultiByte == 0) && (DVar1 = GetLastError(), DVar1 != 0x7a)) {
      return false;
    }
    lpMultiByteStr = operator_new__((longlong)cbMultiByte);
    WideCharToMultiByte(0xfde9,0,param_1,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    do {
      uVar3 = uVar3 + 1;
    } while (lpMultiByteStr[uVar3] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,lpMultiByteStr,uVar3);
    if (lpMultiByteStr != (char *)0x0) {
      operator_delete__(lpMultiByteStr);
    }
  }
  return true;
}

// write @ 14fb90510

/* int __cdecl google::protobuf::io::win32::write(int,void const * __ptr64,unsigned __int64) */

int __cdecl google::protobuf::io::win32::write(int param_1,void *param_2,__uint64 param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014fb90510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _write(param_1,param_2,(uint)param_3);
  return iVar1;
}

// FUN_1502acd20 @ 1502acd20

undefined8 FUN_1502acd20(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x60) + 4) +
             (longlong)*(longlong **)(param_2 + 0x60)),4,true);
  return 0;
}

// FUN_1502acd70 @ 1502acd70

void FUN_1502acd70(undefined8 param_1,longlong param_2)

{
  std::
  _Destroy_range<std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>_>
            (*(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
              (param_2 + 0x98),
             *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               **)(param_2 + 0x30),
             *(allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
               **)(param_2 + 0x80));
  std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>::
  deallocate(*(allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
               **)(param_2 + 0x80),
             *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
              (param_2 + 0x28),*(__uint64 *)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_1502ace00 @ 1502ace00

undefined8 FUN_1502ace00(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return 0;
}

// FUN_1502ace50 @ 1502ace50

void FUN_1502ace50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               (*(longlong *)(param_2 + 0x30) + 0x98));
  }
  return;
}

// FUN_1502ad0b0 @ 1502ad0b0

void FUN_1502ad0b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2 + 0x58));
  }
  return;
}

// FUN_1502ad0e0 @ 1502ad0e0

void FUN_1502ad0e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 4) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffb;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2 + 0x98));
  }
  return;
}

// FUN_1502ad110 @ 1502ad110

void FUN_1502ad110(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x10) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffef;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2 + 0xf8));
  }
  return;
}

// FUN_1502ad140 @ 1502ad140

void FUN_1502ad140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x20) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffdf;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               (param_2 + 0x78));
  }
  return;
}

// FUN_1502ad230 @ 1502ad230

void FUN_1502ad230(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 4) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffb;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              (*(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
                (param_2 + 400));
  }
  return;
}

// FUN_1502ad260 @ 1502ad260

void FUN_1502ad260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 8) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffff7;
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(param_2 + 0x128));
  }
  return;
}

// FUN_1502ad300 @ 1502ad300

void FUN_1502ad300(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              (*(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
                (param_2 + 0x58));
  }
  return;
}

// FUN_1502ad330 @ 1502ad330

void FUN_1502ad330(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
              (*(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
                (param_2 + 0x48));
  }
  return;
}

// FUN_150474780 @ 150474780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_150474780(void)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (7 < DAT_154e21d08) {
    pvVar1 = (void *)CONCAT62(DAT_154e21cf0._2_6_,(undefined2)DAT_154e21cf0);
    uVar3 = DAT_154e21d08 * 2 + 2;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = DAT_154e21d08 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  DAT_154e21d00 = ___xmm_00000000000000070000000000000000;
  DAT_154e21d08 = _UNK_15145b248;
  DAT_154e21cf0._0_2_ = 0;
  return;
}

// FUN_150474800 @ 150474800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_150474800(void)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (7 < DAT_154e21d28) {
    pvVar1 = (void *)CONCAT62(DAT_154e21d10._2_6_,(undefined2)DAT_154e21d10);
    uVar3 = DAT_154e21d28 * 2 + 2;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = DAT_154e21d28 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  DAT_154e21d20 = ___xmm_00000000000000070000000000000000;
  DAT_154e21d28 = _UNK_15145b248;
  DAT_154e21d10._0_2_ = 0;
  return;
}

// FUN_150474880 @ 150474880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_150474880(void)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (7 < DAT_154e21d48) {
    pvVar1 = (void *)CONCAT62(DAT_154e21d30._2_6_,(undefined2)DAT_154e21d30);
    uVar3 = DAT_154e21d48 * 2 + 2;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = DAT_154e21d48 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  DAT_154e21d40 = ___xmm_00000000000000070000000000000000;
  DAT_154e21d48 = _UNK_15145b248;
  DAT_154e21d30._0_2_ = 0;
  return;
}

// FUN_150474900 @ 150474900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_150474900(void)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (7 < DAT_154e21d68) {
    pvVar1 = (void *)CONCAT62(DAT_154e21d50._2_6_,(undefined2)DAT_154e21d50);
    uVar3 = DAT_154e21d68 * 2 + 2;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = DAT_154e21d68 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  DAT_154e21d60 = ___xmm_00000000000000070000000000000000;
  DAT_154e21d68 = _UNK_15145b248;
  DAT_154e21d50._0_2_ = 0;
  return;
}

