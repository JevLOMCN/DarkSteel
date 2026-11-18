// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 75

// operator+<char,std::char_traits<char>,std::allocator<char>_> @ 14f8f0ad0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   std::operator+<char,struct std::char_traits<char>,class std::allocator<char> >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&
   __ptr64,char) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::operator+<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
          char param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  undefined1 local_res18;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 < *(ulonglong *)(param_1 + 0x18)) {
    *(ulonglong *)(param_1 + 0x10) = uVar1 + 1;
    pbVar4 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                param_1;
    }
    pbVar4[uVar1] =
         (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)param_2;
    pbVar4[uVar1 + 1] =
         (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  }
  else {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1,1,
               local_res18,param_2);
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = *(char **)param_1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = uVar2;
  uVar3 = *(ulong64 *)(param_1 + 0x18);
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = uVar3;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  return __return_storage_ptr__;
}

// Base64EscapeInternal<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f8f0b70

/* void __cdecl absl::lts_20240722::strings_internal::Base64EscapeInternal<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(unsigned char
   const * __ptr64,unsigned __int64,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,bool,char const * __ptr64) */

void __cdecl
absl::lts_20240722::strings_internal::
Base64EscapeInternal<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (uchar *param_1,__uint64 param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,bool param_4,
          char *param_5)

{
  ulong64 *puVar1;
  __uint64 _Var2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  
  _Var2 = CalculateBase64EscapedLenInternal(param_2,param_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_3,_Var2,'\0');
  puVar1 = &(param_3->_Mypair)._Myval2._Mysize;
  pbVar3 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  _Var2 = Base64EscapeInternal(param_1,param_2,(char *)pbVar3,*puVar1,param_5,param_4);
  if (_Var2 <= *puVar1) {
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = _Var2;
    (param_3->_Mypair)._Myval2._Bx._Buf[_Var2] = '\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// FUN_14f8f0c20 @ 14f8f0c20

undefined8
FUN_14f8f0c20(undefined8 param_1,ulonglong param_2,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
             undefined8 param_4)

{
  ulong64 *puVar1;
  char cVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  ulonglong local_res10;
  
  uVar5 = (param_2 >> 2) * 3 + (ulonglong)((uint)param_2 & 3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_3,uVar5,'\0');
  pbVar3 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar2 = FUN_14f8f11a0(param_1,param_2,pbVar3,uVar5,param_4,&local_res10);
  if (cVar2 == '\0') {
    pbVar3 = param_3;
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_3->_Mypair)._Myval2._Mysize = 0;
    (pbVar3->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    uVar4 = 0;
  }
  else {
    puVar1 = &(param_3->_Mypair)._Myval2._Mysize;
    if (*puVar1 < local_res10) {
                    /* WARNING: Subroutine does not return */
      std::_String_val<std::_Simple_types<char>_>::_Xran();
    }
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = local_res10;
    (param_3->_Mypair)._Myval2._Bx._Buf[local_res10] = '\0';
    uVar4 = 1;
  }
  return uVar4;
}

// FUN_14f8f0d30 @ 14f8f0d30

void FUN_14f8f0d30(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      puVar2 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar2 = (undefined8 *)*param_2;
      }
      *(char *)((longlong)puVar2 + uVar1) =
           (&DAT_1535326f0)[*(byte *)(param_1 + uVar1 * 2)] * '\x10' +
           (&DAT_1535326f0)[*(byte *)(param_1 + 1 + uVar1 * 2)];
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}

// _Adl_verify_range<char_const*___ptr64,char_const*___ptr64> @ 14f8f0d90

/* void __cdecl std::_Adl_verify_range<char const * __ptr64,char const * __ptr64>(char const *
   __ptr64 const & __ptr64,char const * __ptr64 const & __ptr64) */

void __cdecl
std::_Adl_verify_range<char_const*___ptr64,char_const*___ptr64>(char **param_1,char **param_2)

{
  return;
}

// _Copy_unchecked<char_const*___ptr64,char_const*___ptr64,char*___ptr64> @ 14f8f0da0

/* char * __ptr64 __cdecl std::_Copy_unchecked<char const * __ptr64,char const * __ptr64,char *
   __ptr64>(char const * __ptr64,char const * __ptr64,char * __ptr64) */

char * __cdecl
std::_Copy_unchecked<char_const*___ptr64,char_const*___ptr64,char*___ptr64>
          (char *param_1,char *param_2,char *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1);
}

// _Get_unwrapped<char_const*___ptr64&___ptr64> @ 14f8f0de0

/* UNKNOWN __cdecl std::_Get_unwrapped<char const * __ptr64 & __ptr64>(char const * __ptr64 &
   __ptr64) */

char * __cdecl std::_Get_unwrapped<char_const*___ptr64&___ptr64>(char **param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<char*___ptr64&___ptr64,__int64> @ 14f8f0df0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<char * __ptr64 & __ptr64,__int64>(char * __ptr64 &
   __ptr64,__int64) */

char * __cdecl std::_Get_unwrapped_n<char*___ptr64&___ptr64,__int64>(char **param_1,__int64 param_2)

{
  return *param_1;
}

// _Idl_distance<char_const*___ptr64,char_const*___ptr64> @ 14f8f0e00

/* UNKNOWN __cdecl std::_Idl_distance<char const * __ptr64,char const * __ptr64>(char const *
   __ptr64 const & __ptr64,char const * __ptr64 const & __ptr64) */

longlong __cdecl
std::_Idl_distance<char_const*___ptr64,char_const*___ptr64>(char **param_1,char **param_2)

{
  return (longlong)*param_2 - (longlong)*param_1;
}

// _Refancy<char*___ptr64,0> @ 14f8f0e10

/* char * __ptr64 __cdecl std::_Refancy<char * __ptr64,0>(char * __ptr64) */

char * __cdecl std::_Refancy<char*___ptr64,0>(char *param_1)

{
  return param_1;
}

// _Seek_wrapped<char*___ptr64,char*___ptr64> @ 14f8f0e20

/* void __cdecl std::_Seek_wrapped<char * __ptr64,char * __ptr64>(char * __ptr64 & __ptr64,char *
   __ptr64 && __ptr64) */

void __cdecl std::_Seek_wrapped<char*___ptr64,char*___ptr64>(char **param_1,char **param_2)

{
  *param_1 = *param_2;
  return;
}

// _To_address<char*___ptr64> @ 14f8f0e30

/* UNKNOWN __cdecl std::_To_address<char * __ptr64>(char * __ptr64 const & __ptr64) */

char * __cdecl std::_To_address<char*___ptr64>(char **param_1)

{
  return *param_1;
}

// _To_address<char_const*___ptr64> @ 14f8f0e40

/* UNKNOWN __cdecl std::_To_address<char const * __ptr64>(char const * __ptr64 const & __ptr64) */

char * __cdecl std::_To_address<char_const*___ptr64>(char **param_1)

{
  return *param_1;
}

// copy<char_const*___ptr64,char*___ptr64> @ 14f8f0e50

/* char * __ptr64 __cdecl std::copy<char const * __ptr64,char * __ptr64>(char const * __ptr64,char
   const * __ptr64,char * __ptr64) */

char * __cdecl
std::copy<char_const*___ptr64,char*___ptr64>(char *param_1,char *param_2,char *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1);
}

// to_address<char_const_> @ 14f8f0e90

/* char const * __ptr64 __cdecl std::to_address<char const >(char const * __ptr64 const) */

char * __cdecl std::to_address<char_const_>(char *param_1)

{
  return param_1;
}

// to_address<char> @ 14f8f0ea0

/* char * __ptr64 __cdecl std::to_address<char>(char * __ptr64 const) */

char * __cdecl std::to_address<char>(char *param_1)

{
  return param_1;
}

// _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> @ 14f8f0eb0

/* public: __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >(char const * __ptr64,struct std::_Container_base0 const * __ptr64)
   __ptr64 */

_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> * __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::
_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,char *param_1,
          _Container_base0 *param_2)

{
  this->_Ptr = param_1;
  return this;
}

// _String_iterator<std::_String_val<std::_Simple_types<char>_>_> @ 14f8f0ec0

/* public: __cdecl std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >(char const *
   __ptr64,struct std::_Container_base0 const * __ptr64) __ptr64 */

_String_iterator<std::_String_val<std::_Simple_types<char>_>_> * __thiscall
std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>::
_String_iterator<std::_String_val<std::_Simple_types<char>_>_>
          (_String_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,char *param_1,
          _Container_base0 *param_2)

{
  *this = (_String_iterator<std::_String_val<std::_Simple_types<char>_>_>)param_1;
  return this;
}

// _String_view_iterator<std::char_traits<char>_> @ 14f8f0ed0

/* private: __cdecl std::_String_view_iterator<struct std::char_traits<char>
   >::_String_view_iterator<struct std::char_traits<char> >(char const * __ptr64 const) __ptr64 */

_String_view_iterator<std::char_traits<char>_> * __thiscall
std::_String_view_iterator<std::char_traits<char>_>::_String_view_iterator<std::char_traits<char>_>
          (_String_view_iterator<std::char_traits<char>_> *this,char *param_1)

{
  this->_Myptr = param_1;
  return this;
}

// basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 14f8f0ee0

/* public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(char const *
   __ptr64 const,unsigned __int64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1,
          __uint64 param_2)

{
  (this->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  _Construct<1,char_const_*>(this,param_1,param_2);
  return this;
}

// operator== @ 14f8f0f10

/* public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator==(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64 */

bool __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator==
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,
          _String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> *param_1
          )

{
  return this->_Ptr == *(char **)param_1;
}

// operator[] @ 14f8f0f20

/* public: char const & __ptr64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::operator[](unsigned __int64)const __ptr64 */

char * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::operator[]
          (basic_string_view<char,std::char_traits<char>_> *this,__uint64 param_1)

{
  return this->_Mydata + param_1;
}

// operator* @ 14f8f0f30

/* public: char const & __ptr64 __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator*(void)const __ptr64 */

char * __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator*
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this)

{
  return this->_Ptr;
}

// operator* @ 14f8f0f40

/* public: char & __ptr64 __cdecl std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator*(void)const __ptr64 */

char * __thiscall
std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator*
          (_String_iterator<std::_String_val<std::_Simple_types<char>_>_> *this)

{
  return (char *)*this;
}

// operator* @ 14f8f0f50

/* public: char const & __ptr64 __cdecl std::_String_view_iterator<struct std::char_traits<char>
   >::operator*(void)const __ptr64 */

char * __thiscall
std::_String_view_iterator<std::char_traits<char>_>::operator*
          (_String_view_iterator<std::char_traits<char>_> *this)

{
  return this->_Myptr;
}

// operator++ @ 14f8f0f60

/* public: class std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char>
   > > & __ptr64 __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator++(void) __ptr64 */

_String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> * __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator++
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this)

{
  this->_Ptr = this->_Ptr + 1;
  return (_String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> *)this;
}

// operator++ @ 14f8f0f70

/* public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > &
   __ptr64 __cdecl std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::operator++(void) __ptr64 */

_String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> * __thiscall
std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator++
          (_String_iterator<std::_String_val<std::_Simple_types<char>_>_> *this)

{
  *this = (_String_iterator<std::_String_val<std::_Simple_types<char>_>_>)((longlong)*this + 1);
  return (_String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> *)this;
}

// operator++ @ 14f8f0f80

/* public: class std::_String_view_iterator<struct std::char_traits<char> > __cdecl
   std::_String_view_iterator<struct std::char_traits<char> >::operator++(int) __ptr64 */

undefined8 __thiscall
std::_String_view_iterator<std::char_traits<char>_>::operator++
          (_String_view_iterator<std::char_traits<char>_> *this,int param_1)

{
  char *pcVar1;
  undefined4 in_register_00000014;
  
  pcVar1 = this->_Myptr;
  *(char **)CONCAT44(in_register_00000014,param_1) = pcVar1;
  this->_Myptr = pcVar1 + 1;
  return CONCAT44(in_register_00000014,param_1);
}

// operator++ @ 14f8f0fa0

/* public: class std::_String_view_iterator<struct std::char_traits<char> > & __ptr64 __cdecl
   std::_String_view_iterator<struct std::char_traits<char> >::operator++(void) __ptr64 */

_String_view_iterator<struct_std::char_traits<char>_> * __thiscall
std::_String_view_iterator<std::char_traits<char>_>::operator++
          (_String_view_iterator<std::char_traits<char>_> *this)

{
  this->_Myptr = this->_Myptr + 1;
  return (_String_view_iterator<struct_std::char_traits<char>_> *)this;
}

// operator- @ 14f8f0fb0

/* public: __int64 __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator-(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64 */

__int64 __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::operator-
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,
          _String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> *param_1
          )

{
  return (longlong)this->_Ptr - *(longlong *)param_1;
}

// operator() @ 14f8f0fc0

/* public: __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::insert(unsigned __int64,char const * __ptr64
   const,unsigned __int64) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const *
   __ptr64 const,unsigned __int64,unsigned __int64,char const * __ptr64 const,unsigned __int64)const
   __ptr64 */

void __thiscall
`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert(unsigned___int64,char_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,char *param_1,char *param_2,__uint64 param_3,__uint64 param_4,
          char *param_5,__uint64 param_6)

{
  memcpy(param_1,param_2,param_4);
  memcpy(param_1 + param_4,param_5,param_6);
  memcpy(param_1 + param_4 + param_6,param_2 + param_4,(param_3 - param_4) + 1);
  return;
}

// operator() @ 14f8f1050

/* public: __cdecl `public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::push_back(char) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64
   const,char const * __ptr64 const,unsigned __int64,char)const __ptr64 */

void __thiscall
`public:_void___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back(char)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,char *param_1,char *param_2,__uint64 param_3,char param_4)

{
  memcpy(param_1,param_2,param_3);
  param_1[param_3] = param_4;
  param_1[param_3 + 1] = '\0';
  return;
}

// Base64Escape @ 14f8f1090

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::Base64Escape(class std::basic_string_view<char,struct std::char_traits<char>
   >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::Base64Escape
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  uchar *puVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  _Var3 = param_1->_Mysize;
  puVar1 = (uchar *)param_1->_Mydata;
  _Var2 = strings_internal::CalculateBase64EscapedLenInternal(_Var3,true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (__return_storage_ptr__,_Var2,'\0');
  pbVar4 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  _Var3 = strings_internal::Base64EscapeInternal
                    (puVar1,_Var3,(char *)pbVar4,(__return_storage_ptr__->_Mypair)._Myval2._Mysize,
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",true);
  if (_Var3 <= (__return_storage_ptr__->_Mypair)._Myval2._Mysize) {
    pbVar4 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = _Var3;
    (pbVar4->_Mypair)._Myval2._Bx._Buf[_Var3] = '\0';
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// Base64Escape @ 14f8f1150

/* void __cdecl absl::lts_20240722::Base64Escape(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

void __cdecl
absl::lts_20240722::Base64Escape
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  strings_internal::
  Base64EscapeInternal<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ((uchar *)param_1->_Mydata,param_1->_Mysize,param_2,true,
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
  return;
}

// Base64Unescape @ 14f8f1180

/* bool __cdecl absl::lts_20240722::Base64Unescape(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

bool __cdecl
absl::lts_20240722::Base64Unescape
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)FUN_14f8f0c20(param_1->_Mydata,param_1->_Mysize,param_2,&DAT_1535324f0);
  return bVar1;
}

// FUN_14f8f11a0 @ 14f8f11a0

undefined8
FUN_14f8f11a0(byte *param_1,ulonglong param_2,longlong param_3,undefined1 *param_4,longlong param_5,
             ulonglong *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  
  iVar13 = 0;
  uVar5 = 0;
  puVar15 = (undefined1 *)0x0;
  bVar10 = 0;
  iVar11 = 0;
  iVar8 = 0;
  uVar6 = 0;
  iVar12 = iVar11;
  if (param_3 == 0) {
    if (3 < param_2) {
      do {
        uVar9 = (ulonglong)*param_1;
        if ((((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
           (uVar6 = (((int)*(char *)(uVar9 + param_5) << 6 |
                     (int)*(char *)((ulonglong)param_1[1] + param_5)) << 6 |
                    (int)*(char *)((ulonglong)param_1[2] + param_5)) << 6 |
                    (int)*(char *)((ulonglong)param_1[3] + param_5), (int)uVar6 < 0)) {
          bVar10 = *(byte *)(uVar9 + param_5);
          uVar5 = uVar9;
          while( true ) {
            param_1 = param_1 + 1;
            param_2 = param_2 - 1;
            if (-1 < (char)bVar10) break;
            iVar12 = iVar8;
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (param_2 < 4)) goto LAB_14f8f13c6;
            uVar5 = (ulonglong)*param_1;
            bVar10 = *(byte *)(uVar5 + param_5);
          }
          uVar5 = (ulonglong)*param_1;
          bVar10 = *(byte *)(uVar5 + param_5);
          while( true ) {
            param_1 = param_1 + 1;
            param_2 = param_2 - 1;
            if (-1 < (char)bVar10) break;
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (param_2 < 3)) {
              iVar12 = 1;
              goto LAB_14f8f13c6;
            }
            uVar5 = (ulonglong)*param_1;
            bVar10 = *(byte *)(uVar5 + param_5);
          }
          uVar5 = (ulonglong)*param_1;
          bVar10 = *(byte *)(uVar5 + param_5);
          while( true ) {
            param_1 = param_1 + 1;
            param_2 = param_2 - 1;
            if (-1 < (char)bVar10) break;
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (param_2 < 2)) {
              iVar12 = 2;
              goto LAB_14f8f13c6;
            }
            uVar5 = (ulonglong)*param_1;
            bVar10 = *(byte *)(uVar5 + param_5);
          }
          uVar5 = (ulonglong)*param_1;
          bVar10 = *(byte *)(uVar5 + param_5);
          while( true ) {
            param_1 = param_1 + 1;
            param_2 = param_2 - 1;
            if (-1 < (char)bVar10) break;
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (param_2 == 0)) {
              iVar12 = 3;
              goto LAB_14f8f13c6;
            }
            uVar5 = (ulonglong)*param_1;
            bVar10 = *(byte *)(uVar5 + param_5);
          }
        }
        else {
          param_2 = param_2 - 4;
          param_1 = param_1 + 4;
        }
        puVar15 = puVar15 + 3;
        iVar12 = iVar11;
      } while (3 < param_2);
      goto LAB_14f8f13c6;
    }
LAB_14f8f13f1:
    if (param_2 != 0) {
      puVar14 = puVar15 + param_3 + 1;
      pbVar3 = param_1;
      uVar5 = param_2;
      do {
        bVar10 = *pbVar3;
        param_1 = pbVar3 + 1;
        param_2 = uVar5 - 1;
        bVar1 = *(byte *)((ulonglong)bVar10 + param_5);
        if ((char)bVar1 < '\0') {
          uVar7 = uVar6;
          if ((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                        (ulonglong)bVar10) & 8) == 0) {
            param_1 = pbVar3;
            param_2 = uVar5;
            if ((bVar10 != 0x3d) && (bVar10 != 0x2e)) goto LAB_14f8f173e;
            break;
          }
        }
        else {
          iVar12 = iVar12 + 1;
          uVar7 = uVar6 << 6 | (uint)bVar1;
          if (iVar12 == 4) {
            if (param_3 != 0) {
              if (param_4 < puVar14 + (2 - param_3)) goto LAB_14f8f173e;
              puVar14[1] = (char)uVar7;
              *puVar14 = (char)((uVar6 << 6) >> 8);
              puVar14[-1] = (char)(((uVar6 & 0x3ffffff) >> 2) >> 8);
            }
            puVar15 = puVar15 + 3;
            iVar12 = 0;
            puVar14 = puVar14 + 3;
            uVar7 = 0;
          }
        }
        uVar6 = uVar7;
        pbVar3 = param_1;
        uVar5 = param_2;
      } while (param_2 != 0);
    }
LAB_14f8f1455:
    iVar8 = 0;
    puVar14 = puVar15;
    if (iVar12 != 0) {
      if (iVar12 == 1) goto LAB_14f8f173e;
      if (iVar12 == 2) {
        puVar14 = puVar15 + 1;
        if (param_3 != 0) {
          if (param_4 < puVar14) goto LAB_14f8f173e;
          puVar15[param_3] = (char)(uVar6 >> 4);
        }
        iVar8 = 2;
      }
      else {
        if (iVar12 != 3) {
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::raw_log_internal::RawLog
                    (kFatal,"escaping.cc",0x2ad,"This can\'t happen; base64 decoder state = %d",
                     iVar12);
        }
        puVar14 = puVar15 + 2;
        if (param_3 != 0) {
          if (param_4 < puVar14) goto LAB_14f8f173e;
          puVar15[param_3 + 1] = (char)(uVar6 >> 2);
          puVar15[param_3] = (char)((uVar6 >> 2) >> 8);
        }
        iVar8 = 1;
      }
    }
    if (param_2 != 0) {
      do {
        bVar10 = *param_1;
        if ((bVar10 == 0x3d) || (bVar10 == 0x2e)) {
          iVar13 = iVar13 + 1;
        }
        else if ((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                           (ulonglong)bVar10) & 8) == 0) goto LAB_14f8f173e;
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      if ((iVar13 != 0) && (iVar13 != iVar8)) goto LAB_14f8f173e;
    }
    uVar2 = 1;
    *param_6 = (ulonglong)puVar14;
  }
  else {
    if (3 < param_2) {
      puVar14 = (undefined1 *)(param_3 + 1);
      do {
        uVar9 = (ulonglong)*param_1;
        if ((((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
           (uVar6 = (((int)*(char *)(uVar9 + param_5) << 6 |
                     (int)*(char *)((ulonglong)param_1[1] + param_5)) << 6 |
                    (int)*(char *)((ulonglong)param_1[2] + param_5)) << 6 |
                    (int)*(char *)((ulonglong)param_1[3] + param_5), (int)uVar6 < 0)) {
          bVar10 = *(byte *)(uVar9 + param_5);
          uVar5 = uVar9;
          while( true ) {
            param_1 = param_1 + 1;
            param_2 = param_2 - 1;
            if (-1 < (char)bVar10) break;
            iVar12 = iVar11;
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (iVar12 = iVar8, param_2 < 4)) goto LAB_14f8f13c6;
            uVar5 = (ulonglong)*param_1;
            bVar10 = *(byte *)(uVar5 + param_5);
          }
          uVar5 = (ulonglong)*param_1;
          uVar6 = (uint)bVar10;
          bVar10 = *(byte *)(uVar5 + param_5);
          while( true ) {
            param_1 = param_1 + 1;
            param_2 = param_2 - 1;
            if (-1 < (char)bVar10) break;
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (param_2 < 3)) {
              iVar12 = 1;
              goto LAB_14f8f13c6;
            }
            uVar5 = (ulonglong)*param_1;
            bVar10 = *(byte *)(uVar5 + param_5);
          }
          uVar5 = (ulonglong)*param_1;
          uVar6 = uVar6 << 6 | (uint)bVar10;
          bVar10 = *(byte *)(uVar5 + param_5);
          uVar9 = param_2;
          pbVar3 = param_1;
          while( true ) {
            param_1 = pbVar3 + 1;
            param_2 = uVar9 - 1;
            if (-1 < (char)bVar10) break;
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (param_2 < 2)) {
              iVar12 = 2;
              goto LAB_14f8f13c6;
            }
            uVar5 = (ulonglong)*param_1;
            bVar10 = *(byte *)(uVar5 + param_5);
            uVar9 = param_2;
            pbVar3 = param_1;
          }
          uVar5 = (ulonglong)*param_1;
          param_2 = uVar9 - 2;
          param_1 = pbVar3 + 2;
          uVar6 = uVar6 << 6 | (uint)bVar10;
          bVar10 = *(byte *)(uVar5 + param_5);
          while ((char)bVar10 < '\0') {
            if (((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) &
                 8) == 0) || (param_2 == 0)) {
              iVar12 = 3;
              goto LAB_14f8f13c6;
            }
            uVar5 = (ulonglong)*param_1;
            param_2 = param_2 - 1;
            param_1 = param_1 + 1;
            bVar10 = *(byte *)(uVar5 + param_5);
          }
          uVar7 = uVar6 << 6 | (uint)bVar10;
        }
        else {
          param_2 = param_2 - 4;
          param_1 = param_1 + 4;
          uVar7 = uVar6;
        }
        if (param_4 < puVar14 + (2 - param_3)) goto LAB_14f8f173e;
        puVar14[1] = (char)uVar7;
        puVar15 = puVar15 + 3;
        *puVar14 = (char)(uVar7 >> 8);
        uVar6 = uVar7 >> 0x10;
        puVar14[-1] = (char)(uVar7 >> 0x10);
        puVar14 = puVar14 + 3;
        iVar12 = iVar11;
      } while (3 < param_2);
    }
LAB_14f8f13c6:
    cVar4 = (char)uVar5;
    if (-1 < (char)bVar10) {
      if ((cVar4 == '=') || (cVar4 == '.')) goto LAB_14f8f165f;
      goto LAB_14f8f13f1;
    }
    if ((cVar4 == '=') || (cVar4 == '.')) {
LAB_14f8f165f:
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
      goto LAB_14f8f1455;
    }
    if ((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits + uVar5) & 8) != 0)
    goto LAB_14f8f13f1;
LAB_14f8f173e:
    uVar2 = 0;
  }
  return uVar2;
}

// BytesToHexString @ 14f8f1770

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::BytesToHexString(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::BytesToHexString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  byte *pbVar1;
  ulong64 uVar2;
  byte *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  uVar2 = param_1->_Mysize;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (__return_storage_ptr__,uVar2 * 2,'\0');
  pbVar3 = (byte *)param_1->_Mydata;
  pbVar4 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar1 = pbVar3 + uVar2;
  for (; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    *(undefined2 *)&(pbVar4->_Mypair)._Myval2._Bx =
         *(undefined2 *)
          (
          "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f606162636465666768696a6b6c6d6e6f707172737475767778797a7b7c7d7e7f808182838485868788898a8b8c8d8e8f909192939495969798999a9b9c9d9e9fa0a1a2a3a4a5a6a7a8a9aaabacadaeafb0b1b2b3b4b5b6b7b8b9babbbcbdbebfc0c1c2c3c4c5c6c7c8c9cacbcccdcecfd0d1d2d3d4d5d6d7d8d9dadbdcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
          + (ulonglong)*pbVar3 * 2);
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)&(pbVar4->_Mypair)._Myval2._Bx + 2);
  }
  return __return_storage_ptr__;
}

// CEscape @ 14f8f1820

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::CEscape(class std::basic_string_view<char,struct std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::CEscape
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  FUN_14f8f1880(&local_18,__return_storage_ptr__,in_R8,in_R9,1);
  return __return_storage_ptr__;
}

// FUN_14f8f1880 @ 14f8f1880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8f1880(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  byte *pbVar1;
  byte bVar2;
  LogSeverity *pLVar3;
  char *pcVar4;
  ulonglong uVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  byte *pbVar7;
  LogSeverity *pLVar8;
  LogSeverity *pLVar9;
  LogSeverity *pLVar10;
  LogSeverity *unaff_RDI;
  LogSeverity *pLVar11;
  byte *pbVar12;
  LogSeverity *pLVar13;
  undefined1 auStackY_a8 [32];
  LogSeverity local_78 [2];
  char *local_70;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pLVar9 = (LogSeverity *)0x0;
  pLVar3 = (LogSeverity *)param_1[1];
  pLVar10 = pLVar3;
  if ((LogSeverity *)0x3fffffffffffffff < pLVar3) {
    pLVar10 = (LogSeverity *)0x3fffffffffffffff;
  }
  pcVar4 = (char *)*param_1;
  pLVar8 = pLVar9;
  pLVar11 = pLVar9;
  pLVar13 = pLVar9;
  if (&DAT_00000001 < pLVar10) {
    unaff_RDI = (LogSeverity *)((longlong)pLVar10 + -1);
    do {
      pLVar11 = (LogSeverity *)
                ((longlong)pLVar11 +
                (ulonglong)(byte)(&DAT_1535323f0)[(byte)pcVar4[(longlong)pLVar8]]);
      pLVar13 = (LogSeverity *)
                ((longlong)pLVar13 +
                (ulonglong)(byte)(&DAT_1535323f0)[(byte)(pcVar4 + 1)[(longlong)pLVar8]]);
      pLVar8 = (LogSeverity *)((longlong)pLVar8 + 2);
    } while (pLVar8 < unaff_RDI);
  }
  if (pLVar8 < pLVar10) {
    pLVar9 = (LogSeverity *)(ulonglong)(byte)(&DAT_1535323f0)[(byte)pcVar4[(longlong)pLVar8]];
    pLVar8 = (LogSeverity *)((longlong)pLVar8 + 1);
  }
  pLVar9 = (LogSeverity *)((longlong)pLVar9 + (longlong)((longlong)pLVar11 + (longlong)pLVar13));
  do {
    if (pLVar3 <= pLVar8) {
      unaff_RDI = pLVar3;
      if (pLVar9 == pLVar3) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (param_2,pcVar4,(ulong64)pLVar3);
      }
      else {
LAB_14f8f1a01:
        uVar5 = (param_2->_Mypair)._Myval2._Mysize;
        if (~(ulonglong)pLVar9 < uVar5) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    (&local_68,
                     "Check cur_dest_len <= std::numeric_limits<size_t>::max() - escaped_len failed: "
                    );
          pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                   basic_string<char,std::char_traits<char>,std::allocator<char>_>
                             (&local_48,"std::string size overflow");
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                    (&local_68,pbVar6);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_48);
          local_70 = 
          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\escaping.cc"
          ;
          local_78[1] = 0x1ab;
          local_78[0] = kFatal;
          pLVar9 = local_78;
          absl::lts_20240722::base_internal::
          AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
          ::
          operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                    (&absl::lts_20240722::raw_log_internal::internal_log_function,pLVar9,&local_70,
                     (int *)(local_78 + 1),&local_68);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                  (param_2,(ulong64)((longlong)pLVar9 + uVar5),'\0');
        if (0xf < (param_2->_Mypair)._Myval2._Myres) {
          param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (param_2->_Mypair)._Myval2._Bx._Ptr;
        }
        pbVar7 = (byte *)((param_2->_Mypair)._Myval2._Bx._Buf + uVar5);
        pbVar12 = (byte *)*param_1;
        pbVar1 = pbVar12 + (longlong)unaff_RDI;
        for (; pbVar12 != pbVar1; pbVar12 = pbVar12 + 1) {
          bVar2 = *pbVar12;
          if ((&DAT_1535323f0)[bVar2] == '\x01') {
            *pbVar7 = bVar2;
            pbVar7 = pbVar7 + 1;
          }
          else if ((&DAT_1535323f0)[bVar2] == '\x02') {
            switch(bVar2) {
            case 9:
              pbVar7[0] = 0x5c;
              pbVar7[1] = 0x74;
              pbVar7 = pbVar7 + 2;
              break;
            case 10:
              pbVar7[0] = 0x5c;
              pbVar7[1] = 0x6e;
              pbVar7 = pbVar7 + 2;
              break;
            case 0xd:
              pbVar7[0] = 0x5c;
              pbVar7[1] = 0x72;
              pbVar7 = pbVar7 + 2;
              break;
            case 0x22:
              pbVar7[0] = 0x5c;
              pbVar7[1] = 0x22;
              pbVar7 = pbVar7 + 2;
              break;
            case 0x27:
              pbVar7[0] = 0x5c;
              pbVar7[1] = 0x27;
              pbVar7 = pbVar7 + 2;
              break;
            case 0x5c:
              pbVar7[0] = 0x5c;
              pbVar7[1] = 0x5c;
              pbVar7 = pbVar7 + 2;
            }
          }
          else {
            *pbVar7 = 0x5c;
            pbVar7[1] = (bVar2 >> 6) + 0x30;
            pbVar7[2] = (bVar2 >> 3 & 7) + 0x30;
            pbVar7[3] = (bVar2 & 7) + 0x30;
            pbVar7 = pbVar7 + 4;
          }
        }
      }
      return;
    }
    pbVar7 = (byte *)(pcVar4 + (longlong)pLVar8);
    pLVar8 = (LogSeverity *)((longlong)pLVar8 + 1);
    if ((LogSeverity *)~(ulonglong)(byte)(&DAT_1535323f0)[*pbVar7] < pLVar9) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (&local_68,
                 "Check escaped_len <= std::numeric_limits<size_t>::max() - char_len failed: ");
      pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (&local_48,"escaped_len overflow");
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                (&local_68,pbVar6);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_48);
      local_70 = 
      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\escaping.cc"
      ;
      local_78[0] = 0x19a;
      local_78[1] = 3;
      pLVar9 = local_78 + 1;
      absl::lts_20240722::base_internal::
      AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
      ::
      operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                (&absl::lts_20240722::raw_log_internal::internal_log_function,pLVar9,&local_70,
                 (int *)local_78,&local_68);
      goto LAB_14f8f1a01;
    }
    pLVar9 = (LogSeverity *)((longlong)pLVar9 + (ulonglong)(byte)(&DAT_1535323f0)[*pbVar7]);
  } while( true );
}

// FUN_14f8f1c30 @ 14f8f1c30

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14f8f1c30(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             undefined8 *param_2,char param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  byte *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  <lambda_1> local_res8;
  
  (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  bVar6 = false;
  pbVar9 = (byte *)*param_2;
  pbVar7 = pbVar9 + param_2[1];
  if (pbVar9 != pbVar7) {
    local_res8 = SUB81(param_1,0);
    do {
      bVar1 = *pbVar9;
      switch(bVar1) {
      case 9:
        uVar3 = (param_1->_Mypair)._Myval2._Mysize;
        uVar4 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar3 < 2) {
          pcVar10 = "\\t";
LAB_14f8f1d56:
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                    (param_1,2,local_res8,pcVar10,2);
        }
        else {
          (param_1->_Mypair)._Myval2._Mysize = uVar3 + 2;
          pbVar8 = param_1;
          if (0xf < uVar4) {
            pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1->_Mypair)._Myval2._Bx._Ptr;
          }
          *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = 0x745c;
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 2] = '\0';
        }
        break;
      case 10:
        uVar3 = (param_1->_Mypair)._Myval2._Mysize;
        uVar4 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar3 < 2) {
          pcVar10 = "\\n";
          goto LAB_14f8f1d56;
        }
        (param_1->_Mypair)._Myval2._Mysize = uVar3 + 2;
        pbVar8 = param_1;
        if (0xf < uVar4) {
          pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = 0x6e5c;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 2] = '\0';
        break;
      default:
        if (((param_4 != '\0') && (0x7f < bVar1)) ||
           (((byte)(bVar1 - 0x20) < 0x5f &&
            ((!bVar6 ||
             (-1 < *(char *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                            (ulonglong)bVar1))))))) {
          uVar4 = (param_1->_Mypair)._Myval2._Mysize;
          uVar5 = (param_1->_Mypair)._Myval2._Myres;
          if (uVar4 < uVar5) {
            (param_1->_Mypair)._Myval2._Mysize = uVar4 + 1;
            pbVar8 = param_1;
            if (0xf < uVar5) {
              pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_1->_Mypair)._Myval2._Bx._Ptr;
            }
            (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4] = bVar1;
            (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4 + 1] = '\0';
          }
          else {
LAB_14f8f21da:
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                      (param_1,1,local_res8,bVar1);
          }
          break;
        }
        uVar4 = (param_1->_Mypair)._Myval2._Mysize;
        uVar5 = (param_1->_Mypair)._Myval2._Myres;
        if (param_3 == '\0') {
          if (uVar5 == uVar4) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                      (param_1,1,local_res8,"\\",1);
          }
          else {
            (param_1->_Mypair)._Myval2._Mysize = uVar4 + 1;
            pbVar8 = param_1;
            if (0xf < uVar5) {
              pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_1->_Mypair)._Myval2._Bx._Ptr;
            }
            *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar4) = 0x5c;
          }
          cVar2 = "0123456789abcdef"[bVar1 >> 6];
          uVar4 = (param_1->_Mypair)._Myval2._Mysize;
          uVar5 = (param_1->_Mypair)._Myval2._Myres;
          if (uVar4 < uVar5) {
            (param_1->_Mypair)._Myval2._Mysize = uVar4 + 1;
            pbVar8 = param_1;
            if (0xf < uVar5) {
              pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_1->_Mypair)._Myval2._Bx._Ptr;
            }
            (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4] = cVar2;
            (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4 + 1] = '\0';
          }
          else {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                      (param_1,1,(ulonglong)param_1 & 0xff);
          }
          cVar2 = "0123456789abcdef"[bVar1 >> 3 & 7];
          uVar4 = (param_1->_Mypair)._Myval2._Mysize;
          uVar5 = (param_1->_Mypair)._Myval2._Myres;
          if (uVar4 < uVar5) {
            (param_1->_Mypair)._Myval2._Mysize = uVar4 + 1;
            pbVar8 = param_1;
            if (0xf < uVar5) {
              pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_1->_Mypair)._Myval2._Bx._Ptr;
            }
            (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4] = cVar2;
            (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4 + 1] = '\0';
          }
          else {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                      (param_1,1,(ulonglong)param_1 & 0xff);
          }
          bVar1 = "0123456789abcdef"[bVar1 & 7];
          uVar4 = (param_1->_Mypair)._Myval2._Mysize;
          uVar5 = (param_1->_Mypair)._Myval2._Myres;
          if (uVar5 <= uVar4) goto LAB_14f8f21da;
          (param_1->_Mypair)._Myval2._Mysize = uVar4 + 1;
          pbVar8 = param_1;
          if (0xf < uVar5) {
            pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1->_Mypair)._Myval2._Bx._Ptr;
          }
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4] = bVar1;
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4 + 1] = '\0';
          break;
        }
        if (uVar5 - uVar4 < 2) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                    (param_1,2,local_res8,"\\x",2);
        }
        else {
          (param_1->_Mypair)._Myval2._Mysize = uVar4 + 2;
          pbVar8 = param_1;
          if (0xf < uVar5) {
            pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1->_Mypair)._Myval2._Bx._Ptr;
          }
          *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar4) = 0x785c;
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4 + 2] = '\0';
        }
        cVar2 = "0123456789abcdef"[bVar1 >> 4];
        uVar4 = (param_1->_Mypair)._Myval2._Mysize;
        uVar5 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 < uVar5) {
          (param_1->_Mypair)._Myval2._Mysize = uVar4 + 1;
          pbVar8 = param_1;
          if (0xf < uVar5) {
            pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1->_Mypair)._Myval2._Bx._Ptr;
          }
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4] = cVar2;
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4 + 1] = '\0';
        }
        else {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                    (param_1,1,(ulonglong)param_1 & 0xff);
        }
        cVar2 = "0123456789abcdef"[bVar1 & 0xf];
        uVar4 = (param_1->_Mypair)._Myval2._Mysize;
        uVar5 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 < uVar5) {
          (param_1->_Mypair)._Myval2._Mysize = uVar4 + 1;
          pbVar8 = param_1;
          if (0xf < uVar5) {
            pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1->_Mypair)._Myval2._Bx._Ptr;
          }
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4] = cVar2;
          (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar4 + 1] = '\0';
          bVar6 = true;
        }
        else {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                    (param_1,1,(ulonglong)param_1 & 0xff);
          bVar6 = true;
        }
        goto LAB_14f8f21f9;
      case 0xd:
        uVar3 = (param_1->_Mypair)._Myval2._Mysize;
        uVar4 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar3 < 2) {
          pcVar10 = "\\r";
          goto LAB_14f8f1d56;
        }
        (param_1->_Mypair)._Myval2._Mysize = uVar3 + 2;
        pbVar8 = param_1;
        if (0xf < uVar4) {
          pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = 0x725c;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 2] = '\0';
        break;
      case 0x22:
        uVar3 = (param_1->_Mypair)._Myval2._Mysize;
        uVar4 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar3 < 2) {
          pcVar10 = "\\\"";
          goto LAB_14f8f1d56;
        }
        (param_1->_Mypair)._Myval2._Mysize = uVar3 + 2;
        pbVar8 = param_1;
        if (0xf < uVar4) {
          pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = 0x225c;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 2] = '\0';
        break;
      case 0x27:
        uVar3 = (param_1->_Mypair)._Myval2._Mysize;
        uVar4 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar3 < 2) {
          pcVar10 = "\\\'";
          goto LAB_14f8f1d56;
        }
        (param_1->_Mypair)._Myval2._Mysize = uVar3 + 2;
        pbVar8 = param_1;
        if (0xf < uVar4) {
          pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = 0x275c;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 2] = '\0';
        break;
      case 0x5c:
        uVar3 = (param_1->_Mypair)._Myval2._Mysize;
        uVar4 = (param_1->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar3 < 2) {
          pcVar10 = "\\\\";
          goto LAB_14f8f1d56;
        }
        (param_1->_Mypair)._Myval2._Mysize = uVar3 + 2;
        pbVar8 = param_1;
        if (0xf < uVar4) {
          pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        *(undefined2 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + uVar3) = 0x5c5c;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar3 + 2] = '\0';
      }
      bVar6 = false;
LAB_14f8f21f9:
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 != pbVar7);
  }
  return param_1;
}

// FUN_14f8f22c0 @ 14f8f22c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f8f22c0(longlong *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStackY_98 [32];
  int local_68 [2];
  char *local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar9 = 0;
  uVar6 = param_1[1];
  uVar12 = uVar6;
  if (0x3fffffffffffffff < uVar6) {
    uVar12 = 0x3fffffffffffffff;
  }
  uVar3 = uVar9;
  uVar8 = uVar9;
  uVar10 = uVar9;
  if (uVar12 < 2) {
    uVar7 = 0;
    if (uVar12 == 0) goto LAB_14f8f236c;
    lVar11 = *param_1;
    uVar4 = uVar9;
  }
  else {
    lVar11 = *param_1;
    do {
      uVar10 = uVar10 + (byte)(&DAT_1535323f0)[*(byte *)(lVar11 + uVar3)];
      uVar8 = uVar8 + (byte)(&DAT_1535323f0)[*(byte *)(lVar11 + 1 + uVar3)];
      uVar3 = uVar3 + 2;
    } while (uVar3 < uVar12 - 1);
    uVar4 = uVar3;
    uVar7 = uVar9;
    uVar9 = uVar8;
    if (uVar12 <= uVar3) goto LAB_14f8f236c;
  }
  uVar3 = uVar4 + 1;
  uVar7 = (ulonglong)(byte)(&DAT_1535323f0)[*(byte *)(lVar11 + uVar4)];
  uVar8 = uVar9;
LAB_14f8f236c:
  uVar7 = uVar7 + uVar10 + uVar8;
  if (uVar3 < uVar6) {
    do {
      pbVar1 = (byte *)(*param_1 + uVar3);
      uVar3 = uVar3 + 1;
      if (~(ulonglong)(byte)(&DAT_1535323f0)[*pbVar1] < uVar7) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_58,
                   "Check escaped_len <= std::numeric_limits<size_t>::max() - char_len failed: ");
        pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 basic_string<char,std::char_traits<char>,std::allocator<char>_>
                           (&local_38,"escaped_len overflow");
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                  (&local_58,pbVar5);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_38);
        local_60 = 
        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\escaping.cc"
        ;
        local_68[0] = 0x19a;
        local_68[1] = 3;
        absl::lts_20240722::base_internal::
        AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
        ::
        operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                  (&absl::lts_20240722::raw_log_internal::internal_log_function,
                   (LogSeverity *)(local_68 + 1),&local_60,local_68,&local_58);
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      uVar7 = uVar7 + (byte)(&DAT_1535323f0)[*pbVar1];
    } while (uVar3 < uVar6);
  }
  return uVar7;
}

// CHexEscape @ 14f8f2450

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::CHexEscape(class std::basic_string_view<char,struct std::char_traits<char> >)
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::CHexEscape
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  FUN_14f8f1c30(local_18,&local_18,1,0);
  return __return_storage_ptr__;
}

// CUnescape @ 14f8f2480

/* bool __cdecl absl::lts_20240722::CUnescape(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

bool __cdecl
absl::lts_20240722::CUnescape
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  ulong64 *puVar1;
  char cVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulonglong local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (param_2,param_1->_Mysize,'\0');
  pbVar3 = param_2;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  cVar2 = FUN_14f8f2530(&local_18,0,pbVar3,&local_res8,param_3);
  if (cVar2 == '\0') {
    return false;
  }
  puVar1 = &(param_2->_Mypair)._Myval2._Mysize;
  if (local_res8 <= *puVar1) {
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = local_res8;
    (param_2->_Mypair)._Myval2._Bx._Buf[local_res8] = '\0';
    return true;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// FUN_14f8f2530 @ 14f8f2530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14f8f2530(undefined8 *param_1,char param_2,byte *param_3,longlong *param_4,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  void *pvVar5;
  char cVar6;
  __uint64 _Var7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  uint uVar10;
  void *pvVar11;
  undefined8 uVar12;
  _Bxty *p_Var13;
  ulong64 uVar14;
  int iVar15;
  wchar32 wVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *_Src;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  undefined1 auStackY_178 [32];
  <lambda_1> local_148;
  _Bxty local_128;
  undefined8 local_118;
  ulonglong uStack_110;
  _Bxty local_108;
  undefined8 local_f8;
  ulonglong uStack_f0;
  _Bxty local_e8;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  undefined8 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pbVar18 = (byte *)*param_1;
  pbVar21 = pbVar18 + param_1[1];
  pbVar1 = pbVar21 + -1;
  pbVar17 = param_3;
  if (pbVar18 == param_3) {
    do {
      if (pbVar21 <= pbVar18) goto LAB_14f8f28da;
      if (*pbVar18 == 0x5c) goto LAB_14f8f25b0;
      pbVar18 = pbVar18 + 1;
      pbVar17 = pbVar17 + 1;
    } while (pbVar18 == pbVar17);
  }
joined_r0x00014f8f25a1:
  do {
    if (pbVar21 <= pbVar18) {
LAB_14f8f28da:
      *param_4 = (longlong)pbVar17 - (longlong)param_3;
      return 1;
    }
LAB_14f8f25b0:
    _Src = pbVar18 + 1;
    if (*pbVar18 != 0x5c) {
      *pbVar17 = *pbVar18;
      pbVar17 = pbVar17 + 1;
      pbVar18 = _Src;
      goto joined_r0x00014f8f25a1;
    }
    if (pbVar1 < _Src) {
      if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return 0;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_5,"String cannot end with \\",0x18);
      return 0;
    }
    bVar3 = *_Src;
    iVar15 = (int)(char)bVar3;
    pbVar19 = _Src;
    switch(iVar15) {
    case 0x22:
      *pbVar17 = 0x22;
      pbVar17 = pbVar17 + 1;
      break;
    default:
      if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return 0;
      }
      local_128._Ptr = (char *)0x0;
      local_128._8_8_ = 0;
      local_128._Ptr = operator_new(0x20);
      uVar12 = s_Unknown_escape_sequence___._8_8_;
      uStack_110 = 0x1f;
      *(undefined8 *)local_128._Ptr = s_Unknown_escape_sequence___._0_8_;
      *(undefined8 *)(local_128._Ptr + 8) = uVar12;
      *(undefined8 *)(local_128._Ptr + 0x10) = s_Unknown_escape_sequence___._16_8_;
      *(undefined2 *)(local_128._Ptr + 0x18) = s_Unknown_escape_sequence___._24_2_;
      local_118 = 0x1b;
      *(byte *)((longlong)local_128._Ptr + 0x1a) = bVar3;
      *(local_128._Ptr + 0x1b) = '\0';
      local_e8._8_8_ = local_128._8_8_;
      local_d8 = 0x1b;
      uStack_d0 = 0x1f;
      local_e8._Ptr = local_128._Ptr;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_e8);
      if (0xf < uStack_d0) {
        uVar14 = uStack_d0 + 1;
        uVar12 = local_e8._Ptr;
        if (0xfff < uVar14) {
          uVar14 = uStack_d0 + 0x28;
          uVar12 = *(undefined8 *)(local_e8._Ptr + -8);
          if ((char *)0x1f < local_e8._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete((void *)uVar12,uVar14);
      }
      return 0;
    case 0x27:
      *pbVar17 = 0x27;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
      uVar20 = iVar15 - 0x30;
      if (_Src < pbVar1) {
        pbVar19 = pbVar18 + 2;
        pbVar18 = _Src;
        if (((7 < (byte)(*pbVar19 - 0x30)) ||
            (uVar20 = (int)(char)*pbVar19 + (iVar15 + -0x36) * 8, pbVar18 = pbVar19,
            pbVar19 < pbVar1)) &&
           (pbVar19 = pbVar18, pbVar18 = pbVar19 + 1, (byte)(*pbVar18 - 0x30) < 8)) {
          pbVar19 = pbVar19 + 1;
          uVar20 = (int)(char)*pbVar18 + (uVar20 - 6) * 8;
        }
      }
      if (0xff < uVar20) {
        if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return 0;
        }
        local_108._Ptr = (char *)0x0;
        local_108._8_8_ = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,
                   (char *)_Src,(ulong64)(pbVar19 + (1 - (longlong)_Src)));
        pbVar8 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_68,"Value of \\",
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_108);
        uVar14 = (pbVar8->_Mypair)._Myval2._Mysize;
        uVar4 = (pbVar8->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar14 < 0xd) {
          pbVar8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                   _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                             (pbVar8,0xd,local_148," exceeds 0xff",0xd);
        }
        else {
          (pbVar8->_Mypair)._Myval2._Mysize = uVar14 + 0xd;
          pbVar9 = pbVar8;
          if (0xf < uVar4) {
            pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar8->_Mypair)._Myval2._Bx._Ptr;
          }
          pcVar2 = (pbVar9->_Mypair)._Myval2._Bx._Buf + uVar14;
          memmove(pcVar2," exceeds 0xff",0xd);
          pcVar2[0xd] = '\0';
        }
        local_c8._Ptr = (pbVar8->_Mypair)._Myval2._Bx._Ptr;
        local_c8._8_8_ = *(undefined8 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + 8);
        local_b8 = (pbVar8->_Mypair)._Myval2._Mysize;
        uStack_b0 = (pbVar8->_Mypair)._Myval2._Myres;
        (pbVar8->_Mypair)._Myval2._Mysize = 0;
        (pbVar8->_Mypair)._Myval2._Myres = 0xf;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[0] = '\0';
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_c8);
        if (0xf < uStack_b0) {
          uVar14 = uStack_b0 + 1;
          uVar12 = local_c8._Ptr;
          if (0xfff < uVar14) {
            uVar14 = uStack_b0 + 0x28;
            uVar12 = *(undefined8 *)(local_c8._Ptr + -8);
            if ((char *)0x1f < local_c8._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete((void *)uVar12,uVar14);
        }
        if (0xf < uStack_50) {
          uVar14 = uStack_50 + 1;
          pvVar5 = (void *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
          pvVar11 = pvVar5;
          if (0xfff < uVar14) {
            uVar14 = uStack_50 + 0x28;
            pvVar11 = *(void **)((longlong)pvVar5 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,uVar14);
        }
        local_58 = ___xmm_000000000000000f0000000000000000;
        uStack_50 = _UNK_15076add8;
        local_68._Buf[0] = '\0';
        if (uStack_f0 < 0x10) {
          return 0;
        }
        uVar14 = uStack_f0 + 1;
        uVar12 = local_108._Ptr;
        if (0xfff < uVar14) {
          uVar14 = uStack_f0 + 0x28;
          uVar12 = *(undefined8 *)(local_108._Ptr + -8);
          if ((byte *)0x1f < local_108._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_14f8f3117:
        operator_delete((void *)uVar12,uVar14);
        return 0;
      }
      if ((uVar20 == 0) && (param_2 != '\0')) {
        *pbVar17 = 0x5c;
        memmove(pbVar17 + 1,_Src,(size_t)(pbVar19 + (1 - (longlong)_Src)));
        pbVar17 = pbVar17 + 1 + (longlong)(pbVar19 + (1 - (longlong)_Src));
      }
      else {
        *pbVar17 = (byte)uVar20;
        pbVar17 = pbVar17 + 1;
      }
      break;
    case 0x3f:
      *pbVar17 = 0x3f;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x55:
      wVar16 = L'\0';
      if (pbVar21 <= pbVar18 + 9) {
        if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return 0;
        }
        local_128._Ptr = (char *)0x0;
        local_128._8_8_ = 0;
        local_118 = 0;
        uStack_110 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128,
                   (char *)_Src,1);
        pbVar8 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_e8,"\\U must be followed by 8 hex digits: \\",
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_128);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_5,pbVar8);
        if (0xf < uStack_d0) {
          uVar14 = uStack_d0 + 1;
          uVar12 = local_e8._Ptr;
          if (0xfff < uVar14) {
            uVar14 = uStack_d0 + 0x28;
            uVar12 = *(undefined8 *)(local_e8._Ptr + -8);
            if ((char *)0x1f < local_e8._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete((void *)uVar12,uVar14);
        }
        local_d8 = ___xmm_000000000000000f0000000000000000;
        uStack_d0 = _UNK_15076add8;
        local_e8._Ptr = local_e8._Ptr & 0xffffffffffffff00;
        if (uStack_110 < 0x10) {
          return 0;
        }
        uVar14 = uStack_110 + 1;
        uVar12 = local_128._Ptr;
        if (0xfff < uVar14) {
          uVar14 = uStack_110 + 0x28;
          uVar12 = *(undefined8 *)(local_128._Ptr + -8);
          if ((byte *)0x1f < local_128._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_14f8f3117;
      }
      iVar15 = 0;
      do {
        bVar3 = pbVar19[1];
        if (-1 < *(char *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                          (ulonglong)bVar3)) {
          if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return 0;
          }
          local_128._Ptr = (char *)0x0;
          local_128._8_8_ = 0;
          local_118 = 0;
          uStack_110 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Construct<1,char_const_*>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128,
                     (char *)_Src,(ulong64)(pbVar19 + (1 - (longlong)_Src)));
          pbVar8 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_e8,"\\U must be followed by 8 hex digits: \\",
                              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_128);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (param_5,pbVar8);
          if (0xf < uStack_d0) {
            uVar14 = uStack_d0 + 1;
            uVar12 = local_e8._Ptr;
            if (0xfff < uVar14) {
              uVar14 = uStack_d0 + 0x28;
              uVar12 = *(undefined8 *)(local_e8._Ptr + -8);
              if ((char *)0x1f < local_e8._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar12,uVar14);
          }
          local_d8 = ___xmm_000000000000000f0000000000000000;
          uStack_d0 = _UNK_15076add8;
          local_e8._Ptr = local_e8._Ptr & 0xffffffffffffff00;
          if (uStack_110 < 0x10) {
            return 0;
          }
          uVar14 = uStack_110 + 1;
          uVar12 = local_128._Ptr;
          if (0xfff < uVar14) {
            uVar14 = uStack_110 + 0x28;
            uVar12 = *(undefined8 *)(local_128._Ptr + -8);
            if ((byte *)0x1f < local_128._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14f8f3117;
        }
        pbVar19 = pbVar19 + 1;
        uVar20 = bVar3 + 9;
        if (bVar3 < 0x3a) {
          uVar20 = (uint)bVar3;
        }
        wVar16 = wVar16 * 0x10 + (uVar20 & 0xf);
        if (0x10ffff < (uint)wVar16) {
          if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return 0;
          }
          local_128._Ptr = (char *)0x0;
          local_128._8_8_ = 0;
          local_118 = 0;
          uStack_110 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Construct<1,char_const_*>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128,
                     (char *)_Src,(ulong64)(pbVar19 + (1 - (longlong)_Src)));
          pbVar8 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_e8,"Value of \\",
                              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_128);
          uVar14 = (pbVar8->_Mypair)._Myval2._Mysize;
          uVar4 = (pbVar8->_Mypair)._Myval2._Myres;
          if (uVar4 - uVar14 < 0x21) {
            pbVar8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                     _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                               (pbVar8,0x21,local_148," exceeds Unicode limit (0x10FFFF)",0x21);
          }
          else {
            (pbVar8->_Mypair)._Myval2._Mysize = uVar14 + 0x21;
            pbVar9 = pbVar8;
            if (0xf < uVar4) {
              pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar8->_Mypair)._Myval2._Bx._Ptr;
            }
            pcVar2 = (pbVar9->_Mypair)._Myval2._Bx._Buf + uVar14;
            memmove(pcVar2," exceeds Unicode limit (0x10FFFF)",0x21);
            pcVar2[0x21] = '\0';
          }
          local_c8._Ptr = (pbVar8->_Mypair)._Myval2._Bx._Ptr;
          local_c8._8_8_ = *(undefined8 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + 8);
          local_b8 = (pbVar8->_Mypair)._Myval2._Mysize;
          uStack_b0 = (pbVar8->_Mypair)._Myval2._Myres;
          (pbVar8->_Mypair)._Myval2._Mysize = 0;
          (pbVar8->_Mypair)._Myval2._Myres = 0xf;
          (pbVar8->_Mypair)._Myval2._Bx._Buf[0] = '\0';
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_c8);
          if (0xf < uStack_b0) {
            uVar14 = uStack_b0 + 1;
            uVar12 = local_c8._Ptr;
            if (0xfff < uVar14) {
              uVar14 = uStack_b0 + 0x28;
              uVar12 = *(undefined8 *)(local_c8._Ptr + -8);
              if ((char *)0x1f < local_c8._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar12,uVar14);
          }
          if (0xf < uStack_d0) {
            uVar14 = uStack_d0 + 1;
            uVar12 = local_e8._Ptr;
            if (0xfff < uVar14) {
              uVar14 = uStack_d0 + 0x28;
              uVar12 = *(undefined8 *)(local_e8._Ptr + -8);
              if ((char *)0x1f < local_e8._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar12,uVar14);
          }
          local_d8 = ___xmm_000000000000000f0000000000000000;
          uStack_d0 = _UNK_15076add8;
          local_e8._Ptr = local_e8._Ptr & 0xffffffffffffff00;
          if (uStack_110 < 0x10) {
            return 0;
          }
          uVar14 = uStack_110 + 1;
          uVar12 = local_128._Ptr;
          if (0xfff < uVar14) {
            uVar14 = uStack_110 + 0x28;
            uVar12 = *(undefined8 *)(local_128._Ptr + -8);
            if ((byte *)0x1f < local_128._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14f8f3117;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 8);
      if ((wVar16 == L'\0') && (param_2 != '\0')) {
        *pbVar17 = 0x5c;
        memmove(pbVar17 + 1,_Src,9);
        pbVar17 = pbVar17 + 10;
      }
      else {
        local_108._8_8_ = 9;
        p_Var13 = &local_108;
        local_108._Ptr = (char *)_Src;
LAB_14f8f28a3:
        cVar6 = FUN_14f8f3780(wVar16,p_Var13);
        if (cVar6 != '\0') {
          return 0;
        }
        _Var7 = absl::lts_20240722::strings_internal::EncodeUTF8Char((char *)pbVar17,wVar16);
        pbVar17 = pbVar17 + _Var7;
      }
      break;
    case 0x58:
    case 0x78:
      if (pbVar1 <= _Src) {
        if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return 0;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_5,"String cannot end with \\x",0x19);
        return 0;
      }
      if (-1 < *(char *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                        (ulonglong)pbVar18[2])) {
        if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return 0;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_5,"\\x cannot be followed by a non-hex digit",0x28);
        return 0;
      }
      uVar20 = 0;
      do {
        pbVar18 = pbVar19 + 1;
        bVar3 = *pbVar18;
        if (-1 < *(char *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                          (ulonglong)bVar3)) break;
        uVar10 = bVar3 + 9;
        if (bVar3 < 0x3a) {
          uVar10 = (uint)bVar3;
        }
        uVar20 = uVar20 * 0x10 + (uVar10 & 0xf);
        pbVar19 = pbVar18;
      } while (pbVar18 < pbVar1);
      if (0xff < uVar20) {
        if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return 0;
        }
        local_88._Ptr = (char *)0x0;
        local_88._8_8_ = 0;
        local_78 = 0;
        uStack_70 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                   (char *)_Src,(ulong64)(pbVar19 + (1 - (longlong)_Src)));
        pbVar8 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_a8,"Value of \\",
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_88);
        uVar14 = (pbVar8->_Mypair)._Myval2._Mysize;
        uVar4 = (pbVar8->_Mypair)._Myval2._Myres;
        if (uVar4 - uVar14 < 0xd) {
          pbVar8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                   _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                             (pbVar8,0xd,local_148," exceeds 0xff",0xd);
        }
        else {
          (pbVar8->_Mypair)._Myval2._Mysize = uVar14 + 0xd;
          pbVar9 = pbVar8;
          if (0xf < uVar4) {
            pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar8->_Mypair)._Myval2._Bx._Ptr;
          }
          pcVar2 = (pbVar9->_Mypair)._Myval2._Bx._Buf + uVar14;
          memmove(pcVar2," exceeds 0xff",0xd);
          pcVar2[0xd] = '\0';
        }
        local_c8._Ptr = (pbVar8->_Mypair)._Myval2._Bx._Ptr;
        local_c8._8_8_ = *(undefined8 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + 8);
        local_b8 = (pbVar8->_Mypair)._Myval2._Mysize;
        uStack_b0 = (pbVar8->_Mypair)._Myval2._Myres;
        (pbVar8->_Mypair)._Myval2._Mysize = 0;
        (pbVar8->_Mypair)._Myval2._Myres = 0xf;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[0] = '\0';
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_c8);
        if (0xf < uStack_b0) {
          uVar14 = uStack_b0 + 1;
          uVar12 = local_c8._Ptr;
          if (0xfff < uVar14) {
            uVar14 = uStack_b0 + 0x28;
            uVar12 = *(undefined8 *)(local_c8._Ptr + -8);
            if ((char *)0x1f < local_c8._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete((void *)uVar12,uVar14);
        }
        if (0xf < uStack_90) {
          uVar14 = uStack_90 + 1;
          pvVar5 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
          pvVar11 = pvVar5;
          if (0xfff < uVar14) {
            uVar14 = uStack_90 + 0x28;
            pvVar11 = *(void **)((longlong)pvVar5 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,uVar14);
        }
        local_98 = ___xmm_000000000000000f0000000000000000;
        uStack_90 = _UNK_15076add8;
        local_a8._Buf[0] = '\0';
        if (uStack_70 < 0x10) {
          return 0;
        }
        uVar14 = uStack_70 + 1;
        uVar12 = local_88._Ptr;
        if (0xfff < uVar14) {
          uVar14 = uStack_70 + 0x28;
          uVar12 = *(undefined8 *)(local_88._Ptr + -8);
          if ((byte *)0x1f < local_88._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_14f8f3117;
      }
      if ((uVar20 == 0) && (param_2 != '\0')) {
        *pbVar17 = 0x5c;
        memmove(pbVar17 + 1,_Src,(size_t)(pbVar19 + (1 - (longlong)_Src)));
        pbVar17 = pbVar17 + 1 + (longlong)(pbVar19 + (1 - (longlong)_Src));
      }
      else {
        *pbVar17 = (byte)uVar20;
        pbVar17 = pbVar17 + 1;
      }
      break;
    case 0x5c:
      *pbVar17 = 0x5c;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x61:
      *pbVar17 = 7;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x62:
      *pbVar17 = 8;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x66:
      *pbVar17 = 0xc;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x6e:
      *pbVar17 = 10;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x72:
      *pbVar17 = 0xd;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x74:
      *pbVar17 = 9;
      pbVar17 = pbVar17 + 1;
      break;
    case 0x75:
      wVar16 = L'\0';
      if (pbVar21 <= pbVar18 + 5) {
        if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return 0;
        }
        local_108._Ptr = (char *)0x0;
        local_108._8_8_ = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,
                   (char *)_Src,1);
        pbVar8 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_a8,"\\u must be followed by 4 hex digits: \\",
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_108);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_5,pbVar8);
        if (0xf < uStack_90) {
          uVar14 = uStack_90 + 1;
          pvVar5 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
          pvVar11 = pvVar5;
          if (0xfff < uVar14) {
            uVar14 = uStack_90 + 0x28;
            pvVar11 = *(void **)((longlong)pvVar5 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,uVar14);
        }
        local_98 = ___xmm_000000000000000f0000000000000000;
        uStack_90 = _UNK_15076add8;
        local_a8._Buf[0] = '\0';
        if (uStack_f0 < 0x10) {
          return 0;
        }
        uVar14 = uStack_f0 + 1;
        uVar12 = local_108._Ptr;
        if (0xfff < uVar14) {
          uVar14 = uStack_f0 + 0x28;
          uVar12 = *(undefined8 *)(local_108._Ptr + -8);
          if ((byte *)0x1f < local_108._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_14f8f3117;
      }
      iVar15 = 0;
      do {
        bVar3 = pbVar19[1];
        if (-1 < *(char *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                          (ulonglong)bVar3)) {
          if (param_5 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return 0;
          }
          local_108._Ptr = (char *)0x0;
          local_108._8_8_ = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Construct<1,char_const_*>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,
                     (char *)_Src,(ulong64)(pbVar19 + (1 - (longlong)_Src)));
          pbVar8 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_a8,"\\u must be followed by 4 hex digits: \\",
                              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_108);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (param_5,pbVar8);
          if (0xf < uStack_90) {
            uVar14 = uStack_90 + 1;
            pvVar5 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
            pvVar11 = pvVar5;
            if (0xfff < uVar14) {
              uVar14 = uStack_90 + 0x28;
              pvVar11 = *(void **)((longlong)pvVar5 + -8);
              if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar11,uVar14);
          }
          local_98 = ___xmm_000000000000000f0000000000000000;
          uStack_90 = _UNK_15076add8;
          local_a8._Buf[0] = '\0';
          if (uStack_f0 < 0x10) {
            return 0;
          }
          uVar14 = uStack_f0 + 1;
          uVar12 = local_108._Ptr;
          if (0xfff < uVar14) {
            uVar14 = uStack_f0 + 0x28;
            uVar12 = *(undefined8 *)(local_108._Ptr + -8);
            if ((byte *)0x1f < local_108._Ptr + (-8 - uVar12)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14f8f3117;
        }
        pbVar19 = pbVar19 + 1;
        uVar20 = bVar3 + 9;
        if (bVar3 < 0x3a) {
          uVar20 = (uint)bVar3;
        }
        wVar16 = wVar16 * 0x10 + (uVar20 & 0xf);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 4);
      if ((wVar16 != L'\0') || (param_2 == '\0')) {
        local_88._8_8_ = 5;
        p_Var13 = &local_88;
        local_88._Ptr = (char *)_Src;
        goto LAB_14f8f28a3;
      }
      *pbVar17 = 0x5c;
      memmove(pbVar17 + 1,_Src,5);
      pbVar17 = pbVar17 + 6;
      break;
    case 0x76:
      *pbVar17 = 0xb;
      pbVar17 = pbVar17 + 1;
    }
    pbVar18 = pbVar19 + 1;
  } while( true );
}

// FUN_14f8f3390 @ 14f8f3390

undefined1
FUN_14f8f3390(undefined4 *param_1,undefined1 param_2,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
             undefined8 param_4)

{
  ulong64 *puVar1;
  char cVar2;
  undefined1 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulonglong local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (param_3,*(ulong64 *)(param_1 + 2),'\0');
  pbVar4 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  cVar2 = FUN_14f8f2530(&local_18,param_2,pbVar4,&local_res8,param_4);
  uVar3 = 0;
  if (cVar2 != '\0') {
    puVar1 = &(param_3->_Mypair)._Myval2._Mysize;
    if (*puVar1 < local_res8) {
                    /* WARNING: Subroutine does not return */
      std::_String_val<std::_Simple_types<char>_>::_Xran();
    }
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = local_res8;
    (param_3->_Mypair)._Myval2._Bx._Buf[local_res8] = '\0';
    uVar3 = 1;
  }
  return uVar3;
}

// HexStringToBytes @ 14f8f3440

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::HexStringToBytes(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::HexStringToBytes
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  uVar4 = param_1->_Mysize >> 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (__return_storage_ptr__,uVar4,'\0');
  pcVar1 = param_1->_Mydata;
  if (uVar4 != 0) {
    do {
      pbVar2 = __return_storage_ptr__;
      if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
        pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      }
      (pbVar2->_Mypair)._Myval2._Bx._Buf[uVar3] =
           (&DAT_1535326f0)[(byte)pcVar1[uVar3 * 2]] * '\x10' +
           (&DAT_1535326f0)[(byte)pcVar1[uVar3 * 2 + 1]];
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return __return_storage_ptr__;
}

// HexStringToBytes @ 14f8f34f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::HexStringToBytes(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

bool __cdecl
absl::lts_20240722::HexStringToBytes
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong _Size;
  undefined1 auStack_78 [32];
  <lambda_1> local_48;
  _Bxty local_40;
  ulonglong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_40._8_8_ = 0;
  local_30 = 0;
  uStack_28 = 0xf;
  local_40._Ptr = (char *)0x0;
  uVar7 = param_1->_Mysize >> 1;
  if (param_1->_Mysize == uVar7 * 2) {
    if (uVar7 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_40._Buf[0] = '\0';
      local_30 = uVar7;
    }
    else if (uVar7 < 0x10) {
      local_30 = uVar7;
      memset(&local_40,0,uVar7);
      local_40._Buf[uVar7] = '\0';
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,uVar7,
                 local_48,uVar7,'\0');
    }
    pcVar5 = param_1->_Mydata;
    uVar3 = &local_40;
    if (0xf < uStack_28) {
      uVar3 = local_40._Ptr;
    }
    while( true ) {
      uVar2 = &local_40;
      if (0xf < uStack_28) {
        uVar2 = local_40._Ptr;
      }
      if ((_Bxty *)uVar3 == (_Bxty *)(uVar2 + local_30)) {
        if ((_Bxty *)param_2 != &local_40) {
          uVar7 = (param_2->_Mypair)._Myval2._Myres;
          if (0xf < uVar7) {
            pcVar5 = (param_2->_Mypair)._Myval2._Bx._Ptr;
            uVar6 = uVar7 + 1;
            pcVar4 = pcVar5;
            if (0xfff < uVar6) {
              uVar6 = uVar7 + 0x28;
              pcVar4 = *(char **)(pcVar5 + -8);
              if ((char *)0x1f < pcVar5 + (-8 - (longlong)pcVar4)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete(pcVar4,uVar6);
          }
          (param_2->_Mypair)._Myval2._Bx._Ptr = local_40._Ptr;
          *(undefined8 *)((longlong)&(param_2->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
          (param_2->_Mypair)._Myval2._Mysize = local_30;
          (param_2->_Mypair)._Myval2._Myres = uStack_28;
          local_30 = 0;
          uStack_28 = 0xf;
          local_40._Ptr = local_40._Ptr & 0xffffffffffffff00;
        }
        bVar8 = true;
        goto LAB_14f8f3638;
      }
      cVar1 = *pcVar5;
      pcVar4 = pcVar5 + 1;
      pcVar5 = pcVar5 + 2;
      if (((&DAT_1535327f0)[cVar1] == -1) || ((&DAT_1535327f0)[*pcVar4] == -1)) break;
      *(char *)uVar3 = (&DAT_1535327f0)[cVar1] * '\x10' + (&DAT_1535327f0)[*pcVar4];
      uVar3 = (_Bxty *)(uVar3 + 1);
    }
    uVar2 = &local_40;
    if (0xf < uStack_28) {
      uVar2 = local_40._Ptr;
    }
    uVar7 = uVar3 - uVar2;
    if (local_30 < uVar7) {
      _Size = uVar7 - local_30;
      if (uStack_28 - local_30 < _Size) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                   _Size,local_48,_Size,'\0');
      }
      else {
        uVar3 = &local_40;
        if (0xf < uStack_28) {
          uVar3 = local_40._Ptr;
        }
        pcVar5 = (char *)(uVar3 + local_30);
        local_30 = uVar7;
        memset(pcVar5,0,_Size);
        pcVar5[_Size] = '\0';
      }
    }
    else {
      uVar3 = &local_40;
      if (0xf < uStack_28) {
        uVar3 = local_40._Ptr;
      }
      local_30 = uVar7;
      *(char *)(uVar3 + uVar7) = '\0';
    }
  }
  bVar8 = false;
LAB_14f8f3638:
  if (0xf < uStack_28) {
    uVar7 = uStack_28 + 1;
    uVar3 = local_40._Ptr;
    if (0xfff < uVar7) {
      uVar7 = uStack_28 + 0x28;
      uVar3 = *(undefined8 *)(local_40._Ptr + -8);
      if ((char *)0x1f < local_40._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar3,uVar7);
  }
  return bVar8;
}

// FUN_14f8f3780 @ 14f8f3780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f8f3780(int param_1,undefined8 *param_2,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined8 uStack_a0;
  _Bxty local_98;
  ulonglong local_80;
  AlphaNum local_78;
  AlphaNum local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 - 0xd800U < 0x800) {
    if (param_3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_78.piece_._Mydata = (char *)*param_2;
      local_78.piece_._Mysize = param_2[1];
      uStack_a0 = 0x2c;
      local_a8 = "invalid surrogate character (0xD800-DFFF): \\";
      local_48.piece_._Mydata = "invalid surrogate character (0xD800-DFFF): \\";
      local_48.piece_._Mysize = 0x2c;
      pbVar1 = absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_98,&local_48,&local_78);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_3,pbVar1);
      if (0xf < local_80) {
        uVar3 = local_80 + 1;
        uVar2 = local_98._Ptr;
        if (0xfff < uVar3) {
          uVar2 = *(undefined8 *)(local_98._Ptr + -8);
          uVar3 = local_80 + 0x28;
          if ((char *)0x1f < local_98._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete((void *)uVar2,uVar3);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// Utf8SafeCEscape @ 14f8f3870

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::Utf8SafeCEscape(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::Utf8SafeCEscape
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  FUN_14f8f1c30(local_18,&local_18,0,1);
  return __return_storage_ptr__;
}

// Utf8SafeCHexEscape @ 14f8f38a0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::Utf8SafeCHexEscape(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::Utf8SafeCHexEscape
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  FUN_14f8f1c30(local_18,&local_18,1);
  return __return_storage_ptr__;
}

// WebSafeBase64Escape @ 14f8f38e0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::WebSafeBase64Escape(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::WebSafeBase64Escape
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  uchar *puVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  _Var3 = param_1->_Mysize;
  puVar1 = (uchar *)param_1->_Mydata;
  _Var2 = strings_internal::CalculateBase64EscapedLenInternal(_Var3,false);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (__return_storage_ptr__,_Var2,'\0');
  pbVar4 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  _Var3 = strings_internal::Base64EscapeInternal
                    (puVar1,_Var3,(char *)pbVar4,(__return_storage_ptr__->_Mypair)._Myval2._Mysize,
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_",false);
  if (_Var3 <= (__return_storage_ptr__->_Mypair)._Myval2._Mysize) {
    pbVar4 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = _Var3;
    (pbVar4->_Mypair)._Myval2._Bx._Buf[_Var3] = '\0';
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// WebSafeBase64Escape @ 14f8f39a0

/* void __cdecl absl::lts_20240722::WebSafeBase64Escape(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

void __cdecl
absl::lts_20240722::WebSafeBase64Escape
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  strings_internal::
  Base64EscapeInternal<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ((uchar *)param_1->_Mydata,param_1->_Mysize,param_2,false,
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_");
  return;
}

// WebSafeBase64Unescape @ 14f8f39d0

/* bool __cdecl absl::lts_20240722::WebSafeBase64Unescape(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

bool __cdecl
absl::lts_20240722::WebSafeBase64Unescape
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)FUN_14f8f0c20(param_1->_Mydata,param_1->_Mysize,param_2,&DAT_1535325f0);
  return bVar1;
}

// _Adopt @ 14f8f39f0

/* public: void __cdecl std::_Iterator_base0::_Adopt(void const * __ptr64) __ptr64 */

void __thiscall std::_Iterator_base0::_Adopt(_Iterator_base0 *this,void *param_1)

{
  return;
}

// _Check_offset @ 14f8f3a00

/* public: void __cdecl std::_String_val<struct std::_Simple_types<char> >::_Check_offset(unsigned
   __int64)const __ptr64 */

void __thiscall
std::_String_val<std::_Simple_types<char>_>::_Check_offset
          (_String_val<std::_Simple_types<char>_> *this,__uint64 param_1)

{
  if (param_1 <= this->_Mysize) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Xran();
}

// _Compat @ 14f8f3a20

/* public: void __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_Compat(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64 */

void __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::_Compat
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,
          _String_const_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> *param_1
          )

{
  return;
}

// _Unchecked_begin @ 14f8f3a30

/* public: char const * __ptr64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::_Unchecked_begin(void)const __ptr64 */

char * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::_Unchecked_begin
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mydata;
}

// _Unchecked_end @ 14f8f3a40

/* public: char const * __ptr64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::_Unchecked_end(void)const __ptr64 */

char * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::_Unchecked_end
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mydata + this->_Mysize;
}

// ascii_isprint @ 14f8f3a50

/* bool __cdecl absl::lts_20240722::ascii_isprint(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_isprint(uchar param_1)

{
  return (byte)(param_1 - 0x20) < 0x5f;
}

// ascii_isspace @ 14f8f3a60

/* bool __cdecl absl::lts_20240722::ascii_isspace(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_isspace(uchar param_1)

{
  return (bool)(*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)param_1) >> 3 & 1);
}

// ascii_isxdigit @ 14f8f3a80

/* bool __cdecl absl::lts_20240722::ascii_isxdigit(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_isxdigit(uchar param_1)

{
  return (bool)(*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)param_1) >> 7);
}

// begin @ 14f8f3aa0

/* public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::begin(void) __ptr64 */

_String_iterator<std::_String_val<std::_Simple_types<char>_>_> __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  _String_iterator<std::_String_val<std::_Simple_types<char>_>_> in_RDX;
  
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    *(char **)in_RDX = (this->_Mypair)._Myval2._Bx._Ptr;
    return in_RDX;
  }
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)in_RDX = this;
  return in_RDX;
}

// begin @ 14f8f3ac0

/* public: class std::_String_view_iterator<struct std::char_traits<char> > __cdecl
   std::basic_string_view<char,struct std::char_traits<char> >::begin(void)const __ptr64 */

_String_view_iterator<std::char_traits<char>_> __thiscall
std::basic_string_view<char,std::char_traits<char>_>::begin
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  char *in_RDX;
  
  *(char **)in_RDX = this->_Mydata;
  return (_String_view_iterator<std::char_traits<char>_>)in_RDX;
}

// cbegin @ 14f8f3ad0

/* public: class std::_String_view_iterator<struct std::char_traits<char> > __cdecl
   std::basic_string_view<char,struct std::char_traits<char> >::cbegin(void)const __ptr64 */

_String_view_iterator<std::char_traits<char>_> __thiscall
std::basic_string_view<char,std::char_traits<char>_>::cbegin
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  char *in_RDX;
  
  *(char **)in_RDX = this->_Mydata;
  return (_String_view_iterator<std::char_traits<char>_>)in_RDX;
}

// clear @ 14f8f3ae0

/* public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::clear(void) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::clear
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  char *pcVar1;
  
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    pcVar1 = (this->_Mypair)._Myval2._Bx._Ptr;
    (this->_Mypair)._Myval2._Mysize = 0;
    *pcVar1 = '\0';
    return;
  }
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return;
}

// end @ 14f8f3b10

/* public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::end(void) __ptr64 */

_String_iterator<std::_String_val<std::_Simple_types<char>_>_> __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  _String_iterator<std::_String_val<std::_Simple_types<char>_>_> in_RDX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = this;
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  *(char **)in_RDX = (pbVar1->_Mypair)._Myval2._Bx._Buf + (this->_Mypair)._Myval2._Mysize;
  return in_RDX;
}

// erase @ 14f8f3b40

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::erase(unsigned __int64) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 <= (this->_Mypair)._Myval2._Mysize) {
    pbVar1 = this;
    if (0xf < (this->_Mypair)._Myval2._Myres) {
      pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
    }
    (this->_Mypair)._Myval2._Mysize = param_1;
    (pbVar1->_Mypair)._Myval2._Bx._Buf[param_1] = '\0';
    return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
  }
                    /* WARNING: Subroutine does not return */
  _String_val<std::_Simple_types<char>_>::_Xran();
}

// insert @ 14f8f3ba0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::insert(unsigned __int64,char const * __ptr64 const,unsigned __int64) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1,
          char *param_2,__uint64 param_3)

{
  char *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  size_t _Size;
  <lambda_1> local_res8;
  
  uVar1 = (this->_Mypair)._Myval2._Mysize;
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<char>_>::_Xran();
  }
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (uVar2 - uVar1 < param_3) {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert_::__l2::<lambda_1>,unsigned___int64,char_const_*,unsigned___int64>
                       (this,param_3,local_res8,param_1,param_2,param_3);
    return pbVar3;
  }
  (this->_Mypair)._Myval2._Mysize = uVar1 + param_3;
  pbVar4 = this;
  if (0xf < uVar2) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  _Src = (pbVar4->_Mypair)._Myval2._Bx._Buf + param_1;
  _Size = param_3;
  if ((_Src < param_2 + param_3) && (param_2 <= (pbVar4->_Mypair)._Myval2._Bx._Buf + uVar1)) {
    if (param_2 < _Src) {
      _Size = (longlong)_Src - (longlong)param_2;
    }
    else {
      _Size = 0;
    }
  }
  memmove(_Src + param_3,_Src,(uVar1 - param_1) + 1);
  memcpy(_Src,param_2,_Size);
  memcpy(_Src + _Size,param_2 + param_3 + _Size,param_3 - _Size);
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

// insert @ 14f8f3ca0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::insert(unsigned __int64,char const * __ptr64 const) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1,
          char *param_2)

{
  char *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulonglong uVar5;
  size_t _Size;
  <lambda_1> local_res8;
  
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (param_2[uVar5] != '\0');
  uVar1 = (this->_Mypair)._Myval2._Mysize;
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<char>_>::_Xran();
  }
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (uVar2 - uVar1 < uVar5) {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert_::__l2::<lambda_1>,unsigned___int64,char_const_*,unsigned___int64>
                       (this,uVar5,local_res8,param_1,param_2,uVar5);
    return pbVar3;
  }
  (this->_Mypair)._Myval2._Mysize = uVar1 + uVar5;
  pbVar4 = this;
  if (0xf < uVar2) {
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  _Src = (pbVar4->_Mypair)._Myval2._Bx._Buf + param_1;
  _Size = uVar5;
  if ((_Src < param_2 + uVar5) && (param_2 <= (pbVar4->_Mypair)._Myval2._Bx._Buf + uVar1)) {
    if (param_2 < _Src) {
      _Size = (longlong)_Src - (longlong)param_2;
    }
    else {
      _Size = 0;
    }
  }
  memmove(_Src + uVar5,_Src,(uVar1 - param_1) + 1);
  memcpy(_Src,param_2,_Size);
  memcpy(_Src + _Size,param_2 + _Size + uVar5,uVar5 - _Size);
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

// FUN_1502940f0 @ 1502940f0

void FUN_1502940f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x50)
              );
  }
  return;
}

// FUN_150294120 @ 150294120

void FUN_150294120(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40)
              );
  }
  return;
}

// FUN_150294150 @ 150294150

void FUN_150294150(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x50)
              );
  }
  return;
}

// FUN_150294200 @ 150294200

void FUN_150294200(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0xa0)
              );
  }
  return;
}

// FUN_1502943d0 @ 1502943d0

void FUN_1502943d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40)
              );
  }
  return;
}

// FUN_150294420 @ 150294420

void FUN_150294420(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x50)
              );
  }
  return;
}

