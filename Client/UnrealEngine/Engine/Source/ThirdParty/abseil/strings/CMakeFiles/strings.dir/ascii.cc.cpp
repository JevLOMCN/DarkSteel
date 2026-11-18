// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 45

// operator!=<char_const*___ptr64,char_const*___ptr64> @ 14f8f3db0

/* bool __cdecl std::operator!=<char const * __ptr64,char const * __ptr64>(class
   std::reverse_iterator<char const * __ptr64> const & __ptr64,class std::reverse_iterator<char
   const * __ptr64> const & __ptr64) */

bool __cdecl
std::operator!=<char_const*___ptr64,char_const*___ptr64>
          (reverse_iterator<char_const*___ptr64> *param_1,
          reverse_iterator<char_const*___ptr64> *param_2)

{
  return *(longlong *)param_1 != *(longlong *)param_2;
}

// operator-<std::_String_view_iterator<std::char_traits<char>_>,std::_String_view_iterator<struct_std::char_traits<char>_>_> @ 14f8f3dc0

/* __int64 __cdecl std::operator-<class std::_String_view_iterator<struct std::char_traits<char>
   >,class std::_String_view_iterator<struct std::char_traits<char> > >(class
   std::reverse_iterator<class std::_String_view_iterator<struct std::char_traits<char> > > const &
   __ptr64,class std::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > > const & __ptr64) */

__int64 __cdecl
std::
operator-<std::_String_view_iterator<std::char_traits<char>_>,std::_String_view_iterator<struct_std::char_traits<char>_>_>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *param_1,
          reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *param_2)

{
  return *(longlong *)param_2 - *(longlong *)param_1;
}

// AsciiInAZRange<1> @ 14f8f3dd0

/* bool __cdecl absl::lts_20240722::ascii_internal::AsciiInAZRange<1>(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_internal::AsciiInAZRange<1>(uchar param_1)

{
  return (char)(param_1 + '\x1f') < -0x66;
}

// AsciiInAZRange<0> @ 14f8f3de0

/* bool __cdecl absl::lts_20240722::ascii_internal::AsciiInAZRange<0>(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_internal::AsciiInAZRange<0>(uchar param_1)

{
  return (char)(param_1 + '?') < -0x66;
}

// AsciiStrCaseFold<1> @ 14f8f3df0

/* void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFold<1>(char * __ptr64,unsigned
   __int64) */

void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFold<1>(char *param_1,__uint64 param_2)

{
  byte bVar1;
  
  if (param_2 < 0x10) {
    if (param_2 != 0) {
      do {
        bVar1 = 0;
        if ((char)(*param_1 + 0x1fU) < -0x66) {
          bVar1 = 0x20;
        }
        *param_1 = bVar1 ^ *param_1;
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      return;
    }
  }
  else {
    do {
      bVar1 = 0;
      if ((char)(*param_1 + 0x1fU) < -0x66) {
        bVar1 = 0x20;
      }
      *param_1 = bVar1 ^ *param_1;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

// AsciiStrCaseFold<0> @ 14f8f3e70

/* void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFold<0>(char * __ptr64,unsigned
   __int64) */

void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFold<0>(char *param_1,__uint64 param_2)

{
  byte bVar1;
  
  if (param_2 < 0x10) {
    if (param_2 != 0) {
      do {
        bVar1 = 0;
        if ((char)(*param_1 + 0x3fU) < -0x66) {
          bVar1 = 0x20;
        }
        *param_1 = bVar1 ^ *param_1;
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      return;
    }
  }
  else {
    do {
      bVar1 = 0;
      if ((char)(*param_1 + 0x3fU) < -0x66) {
        bVar1 = 0x20;
      }
      *param_1 = bVar1 ^ *param_1;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

// AsciiStrCaseFoldImpl<1> @ 14f8f3ef0

/* void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFoldImpl<1>(char * __ptr64,unsigned
   __int64) */

void __cdecl
absl::lts_20240722::ascii_internal::AsciiStrCaseFoldImpl<1>(char *param_1,__uint64 param_2)

{
  byte bVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    bVar1 = 0;
    if ((char)(*param_1 + 0x1fU) < -0x66) {
      bVar1 = 0x20;
    }
    *param_1 = bVar1 ^ *param_1;
    param_1 = param_1 + 1;
  }
  return;
}

// AsciiStrCaseFoldImpl<0> @ 14f8f3f30

/* void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFoldImpl<0>(char * __ptr64,unsigned
   __int64) */

void __cdecl
absl::lts_20240722::ascii_internal::AsciiStrCaseFoldImpl<0>(char *param_1,__uint64 param_2)

{
  byte bVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    bVar1 = 0;
    if ((char)(*param_1 + 0x3fU) < -0x66) {
      bVar1 = 0x20;
    }
    *param_1 = bVar1 ^ *param_1;
    param_1 = param_1 + 1;
  }
  return;
}

// AsciiStrCaseFoldLong<1> @ 14f8f3f70

/* void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFoldLong<1>(char * __ptr64,unsigned
   __int64) */

void __cdecl
absl::lts_20240722::ascii_internal::AsciiStrCaseFoldLong<1>(char *param_1,__uint64 param_2)

{
  byte bVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    bVar1 = 0;
    if ((char)(*param_1 + 0x1fU) < -0x66) {
      bVar1 = 0x20;
    }
    *param_1 = bVar1 ^ *param_1;
    param_1 = param_1 + 1;
  }
  return;
}

// AsciiStrCaseFoldLong<0> @ 14f8f3fb0

/* void __cdecl absl::lts_20240722::ascii_internal::AsciiStrCaseFoldLong<0>(char * __ptr64,unsigned
   __int64) */

void __cdecl
absl::lts_20240722::ascii_internal::AsciiStrCaseFoldLong<0>(char *param_1,__uint64 param_2)

{
  byte bVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    bVar1 = 0;
    if ((char)(*param_1 + 0x3fU) < -0x66) {
      bVar1 = 0x20;
    }
    *param_1 = bVar1 ^ *param_1;
    param_1 = param_1 + 1;
  }
  return;
}

// _Adl_verify_range<std::_String_view_iterator<std::char_traits<char>_>,std::_String_view_iterator<struct_std::char_traits<char>_>_> @ 14f8f3ff0

/* void __cdecl std::_Adl_verify_range<class std::_String_view_iterator<struct
   std::char_traits<char> >,class std::_String_view_iterator<struct std::char_traits<char> > >(class
   std::_String_view_iterator<struct std::char_traits<char> > const & __ptr64,class
   std::_String_view_iterator<struct std::char_traits<char> > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_String_view_iterator<std::char_traits<char>_>,std::_String_view_iterator<struct_std::char_traits<char>_>_>
          (_String_view_iterator<std::char_traits<char>_> *param_1,
          _String_view_iterator<std::char_traits<char>_> *param_2)

{
  return;
}

// _Adl_verify_range<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>,std::reverse_iterator<class_std::_String_view_iterator<struct_std::char_traits<char>_>_>_> @ 14f8f4000

/* void __cdecl std::_Adl_verify_range<class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > >,class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > > >(class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > > const & __ptr64,class
   std::reverse_iterator<class std::_String_view_iterator<struct std::char_traits<char> > > const &
   __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>,std::reverse_iterator<class_std::_String_view_iterator<struct_std::char_traits<char>_>_>_>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *param_1,
          reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *param_2)

{
  return;
}

// _Get_unwrapped<std::_String_view_iterator<std::char_traits<char>_>&___ptr64> @ 14f8f4010

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_String_view_iterator<struct
   std::char_traits<char> > & __ptr64>(class std::_String_view_iterator<struct
   std::char_traits<char> > & __ptr64) */

char * __cdecl
std::_Get_unwrapped<std::_String_view_iterator<std::char_traits<char>_>&___ptr64>
          (_String_view_iterator<std::char_traits<char>_> *param_1)

{
  return param_1->_Myptr;
}

// _Get_unwrapped<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>&___ptr64> @ 14f8f4020

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > > & __ptr64>(class
   std::reverse_iterator<class std::_String_view_iterator<struct std::char_traits<char> > > &
   __ptr64) */

reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> * __cdecl
std::
_Get_unwrapped<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>&___ptr64>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined8 *)param_1 = *in_RDX;
  return param_1;
}

// _Get_unwrapped<std::_String_view_iterator<std::char_traits<char>_>_const&___ptr64> @ 14f8f4030

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_String_view_iterator<struct
   std::char_traits<char> > const & __ptr64>(class std::_String_view_iterator<struct
   std::char_traits<char> > const & __ptr64) */

char * __cdecl
std::_Get_unwrapped<std::_String_view_iterator<std::char_traits<char>_>_const&___ptr64>
          (_String_view_iterator<std::char_traits<char>_> *param_1)

{
  return param_1->_Myptr;
}

// _Get_unwrapped<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>_const&___ptr64> @ 14f8f4040

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > > const & __ptr64>(class
   std::reverse_iterator<class std::_String_view_iterator<struct std::char_traits<char> > > const &
   __ptr64) */

reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> * __cdecl
std::
_Get_unwrapped<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>_const&___ptr64>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined8 *)param_1 = *in_RDX;
  return param_1;
}

// _Seek_to<char_const*___ptr64,0> @ 14f8f4050

/* public: void __cdecl std::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > >::_Seek_to<char const * __ptr64,0>(class std::reverse_iterator<char
   const * __ptr64> const & __ptr64) __ptr64 */

void __thiscall
std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>::
_Seek_to<char_const*___ptr64,0>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *this,
          reverse_iterator<char_const*___ptr64> *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}

// _Seek_wrapped<std::_String_view_iterator<std::char_traits<char>_>,char_const*___ptr64&___ptr64> @ 14f8f4060

/* void __cdecl std::_Seek_wrapped<class std::_String_view_iterator<struct std::char_traits<char>
   >,char const * __ptr64 & __ptr64>(class std::_String_view_iterator<struct std::char_traits<char>
   > & __ptr64,char const * __ptr64 & __ptr64) */

void __cdecl
std::_Seek_wrapped<std::_String_view_iterator<std::char_traits<char>_>,char_const*___ptr64&___ptr64>
          (_String_view_iterator<std::char_traits<char>_> *param_1,char **param_2)

{
  param_1->_Myptr = *param_2;
  return;
}

// _Seek_wrapped<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>,std::reverse_iterator<char_const*___ptr64>&___ptr64> @ 14f8f4070

/* void __cdecl std::_Seek_wrapped<class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > >,class std::reverse_iterator<char
   const * __ptr64> & __ptr64>(class std::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > > & __ptr64,class std::reverse_iterator<char const * __ptr64> & __ptr64)
    */

void __cdecl
std::
_Seek_wrapped<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>,std::reverse_iterator<char_const*___ptr64>&___ptr64>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *param_1,
          reverse_iterator<char_const*___ptr64> *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// _Unwrapped<std::_String_view_iterator<std::char_traits<char>_>,0> @ 14f8f4080

/* public: class std::reverse_iterator<char const * __ptr64> __cdecl std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > >::_Unwrapped<class
   std::_String_view_iterator<struct std::char_traits<char> >,0>(void)const __ptr64&  */

void __thiscall
std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>::
_Unwrapped<std::_String_view_iterator<std::char_traits<char>_>,0>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// find_if_not<std::_String_view_iterator<std::char_traits<char>_>,bool_(__cdecl*)(unsigned_char)> @ 14f8f4090

/* class std::_String_view_iterator<struct std::char_traits<char> > __cdecl std::find_if_not<class
   std::_String_view_iterator<struct std::char_traits<char> >,bool (__cdecl*)(unsigned char)>(class
   std::_String_view_iterator<struct std::char_traits<char> >,class
   std::_String_view_iterator<struct std::char_traits<char> >,bool (__cdecl*)(unsigned char)) */

_String_view_iterator<std::char_traits<char>_> __cdecl
std::find_if_not<std::_String_view_iterator<std::char_traits<char>_>,bool_(__cdecl*)(unsigned_char)>
          (char *param_1,undefined1 *param_2,undefined1 *param_3,code *param_4)

{
  char cVar1;
  
  if (param_2 == param_3) {
    *(undefined1 **)param_1 = param_2;
  }
  else {
    do {
      cVar1 = (*param_4)(*param_2);
      if (cVar1 == '\0') break;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
    *(undefined1 **)param_1 = param_2;
  }
  return (_String_view_iterator<std::char_traits<char>_>)param_1;
}

// find_if_not<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>,bool_(__cdecl*)(unsigned_char)> @ 14f8f40f0

/* class std::reverse_iterator<class std::_String_view_iterator<struct std::char_traits<char> > >
   __cdecl std::find_if_not<class std::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > >,bool (__cdecl*)(unsigned char)>(class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > >,class std::reverse_iterator<class
   std::_String_view_iterator<struct std::char_traits<char> > >,bool (__cdecl*)(unsigned char)) */

longlong * __cdecl
std::
find_if_not<std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>,bool_(__cdecl*)(unsigned_char)>
          (longlong *param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong lVar1;
  char cVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
  }
  else {
    do {
      lVar1 = param_2 + -1;
      cVar2 = (*param_4)(*(undefined1 *)(param_2 + -1));
      if (cVar2 == '\0') break;
      param_2 = lVar1;
    } while (lVar1 != param_3);
    *param_1 = param_2;
  }
  return param_1;
}

// forward<std::reverse_iterator<char_const*___ptr64>&___ptr64> @ 14f8f4170

/* class std::reverse_iterator<char const * __ptr64> & __ptr64 __cdecl std::forward<class
   std::reverse_iterator<char const * __ptr64> & __ptr64>(class std::reverse_iterator<char const *
   __ptr64> & __ptr64) */

reverse_iterator<char_const*___ptr64> * __cdecl
std::forward<std::reverse_iterator<char_const*___ptr64>&___ptr64>
          (reverse_iterator<char_const*___ptr64> *param_1)

{
  return param_1;
}

// move<char_const*___ptr64&___ptr64> @ 14f8f4180

/* char const * __ptr64 && __ptr64 __cdecl std::move<char const * __ptr64 & __ptr64>(char const *
   __ptr64 & __ptr64) */

char ** __cdecl std::move<char_const*___ptr64&___ptr64>(char **param_1)

{
  return param_1;
}

// move<std::_String_view_iterator<std::char_traits<char>_>&___ptr64> @ 14f8f4190

/* class std::_String_view_iterator<struct std::char_traits<char> > && __ptr64 __cdecl
   std::move<class std::_String_view_iterator<struct std::char_traits<char> > & __ptr64>(class
   std::_String_view_iterator<struct std::char_traits<char> > & __ptr64) */

_String_view_iterator<std::char_traits<char>_> * __cdecl
std::move<std::_String_view_iterator<std::char_traits<char>_>&___ptr64>
          (_String_view_iterator<struct_std::char_traits<char>_> *param_1)

{
  return (_String_view_iterator<std::char_traits<char>_> *)param_1;
}

// reverse_iterator<char_const*___ptr64> @ 14f8f41a0

/* public: __cdecl std::reverse_iterator<char const * __ptr64>::reverse_iterator<char const *
   __ptr64>(char const * __ptr64) __ptr64 */

reverse_iterator<char_const*___ptr64> * __thiscall
std::reverse_iterator<char_const*___ptr64>::reverse_iterator<char_const*___ptr64>
          (reverse_iterator<char_const*___ptr64> *this,char *param_1)

{
  *(char **)this = param_1;
  return this;
}

// reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> @ 14f8f41b0

/* public: __cdecl std::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > >::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > >(class std::_String_view_iterator<struct std::char_traits<char> >)
   __ptr64 */

reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> * __thiscall
std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>::
reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *this,
          _String_view_iterator<std::char_traits<char>_> param_1)

{
  *(char **)this = param_1._Myptr;
  return this;
}

// operator* @ 14f8f41c0

/* public: char const & __ptr64 __cdecl std::reverse_iterator<char const *
   __ptr64>::operator*(void)const __ptr64 */

char * __thiscall
std::reverse_iterator<char_const*___ptr64>::operator*(reverse_iterator<char_const*___ptr64> *this)

{
  return (char *)(*(longlong *)this + -1);
}

// operator++ @ 14f8f41d0

/* public: class std::reverse_iterator<char const * __ptr64> & __ptr64 __cdecl
   std::reverse_iterator<char const * __ptr64>::operator++(void) __ptr64 */

reverse_iterator<char_const*___ptr64> * __thiscall
std::reverse_iterator<char_const*___ptr64>::operator++(reverse_iterator<char_const*___ptr64> *this)

{
  *(longlong *)this = *(longlong *)this + -1;
  return this;
}

// operator- @ 14f8f41e0

/* public: __int64 __cdecl std::_String_view_iterator<struct std::char_traits<char>
   >::operator-(class std::_String_view_iterator<struct std::char_traits<char> > const &
   __ptr64)const __ptr64 */

__int64 __thiscall
std::_String_view_iterator<std::char_traits<char>_>::operator-
          (_String_view_iterator<std::char_traits<char>_> *this,
          _String_view_iterator<struct_std::char_traits<char>_> *param_1)

{
  return (longlong)this->_Myptr - *(longlong *)param_1;
}

// operator< @ 14f8f41f0

/* bool __cdecl std::operator<(struct std::strong_ordering,struct std::_Literal_zero) */

bool __cdecl std::operator<(strong_ordering param_1,_Literal_zero param_2)

{
  return (bool)((byte)param_1._Value >> 7);
}

// ERROR_UNKNOWN_OPERATOR_TYPE @ 14f8f4200

/* public: struct std::strong_ordering __cdecl std::_String_view_iterator<struct
   std::char_traits<char> >::ERROR UNKNOWN OPERATOR TYPE(class std::_String_view_iterator<struct
   std::char_traits<char> > const & __ptr64)const __ptr64 */

strong_ordering __thiscall
std::_String_view_iterator<std::char_traits<char>_>::ERROR_UNKNOWN_OPERATOR_TYPE
          (_String_view_iterator<std::char_traits<char>_> *this,
          _String_view_iterator<struct_std::char_traits<char>_> *param_1)

{
  _String_view_iterator<struct_std::char_traits<char>_> _Var1;
  ulonglong *in_R8;
  
  if (this->_Myptr == (char *)*in_R8) {
    *param_1 = (_String_view_iterator<struct_std::char_traits<char>_>)0x0;
    return (strong_ordering)(schar)param_1;
  }
  _Var1 = (_String_view_iterator<struct_std::char_traits<char>_>)0xff;
  if ((char *)*in_R8 <= this->_Myptr) {
    _Var1 = (_String_view_iterator<struct_std::char_traits<char>_>)0x1;
  }
  *param_1 = _Var1;
  return (strong_ordering)(schar)param_1;
}

// AsciiStrToLower @ 14f8f4230

/* void __cdecl absl::lts_20240722::AsciiStrToLower(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

void __cdecl
absl::lts_20240722::AsciiStrToLower
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar3 < 0x10) {
    if (uVar3 != 0) {
      do {
        bVar1 = (param_1->_Mypair)._Myval2._Bx._Buf[0];
        bVar2 = 0;
        if ((char)(bVar1 + 0x3f) < -0x66) {
          bVar2 = 0x20;
        }
        (param_1->_Mypair)._Myval2._Bx._Buf[0] = bVar2 ^ bVar1;
        uVar3 = uVar3 - 1;
        param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  ((longlong)&(param_1->_Mypair)._Myval2._Bx + 1);
      } while (uVar3 != 0);
      return;
    }
  }
  else {
    do {
      bVar1 = (param_1->_Mypair)._Myval2._Bx._Buf[0];
      bVar2 = 0;
      if ((char)(bVar1 + 0x3f) < -0x66) {
        bVar2 = 0x20;
      }
      (param_1->_Mypair)._Myval2._Bx._Buf[0] = bVar2 ^ bVar1;
      uVar3 = uVar3 - 1;
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                ((longlong)&(param_1->_Mypair)._Myval2._Bx + 1);
    } while (uVar3 != 0);
  }
  return;
}

// AsciiStrToUpper @ 14f8f42b0

/* void __cdecl absl::lts_20240722::AsciiStrToUpper(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

void __cdecl
absl::lts_20240722::AsciiStrToUpper
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (uVar3 < 0x10) {
    if (uVar3 != 0) {
      do {
        bVar1 = (param_1->_Mypair)._Myval2._Bx._Buf[0];
        bVar2 = 0;
        if ((char)(bVar1 + 0x1f) < -0x66) {
          bVar2 = 0x20;
        }
        (param_1->_Mypair)._Myval2._Bx._Buf[0] = bVar2 ^ bVar1;
        uVar3 = uVar3 - 1;
        param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  ((longlong)&(param_1->_Mypair)._Myval2._Bx + 1);
      } while (uVar3 != 0);
      return;
    }
  }
  else {
    do {
      bVar1 = (param_1->_Mypair)._Myval2._Bx._Buf[0];
      bVar2 = 0;
      if ((char)(bVar1 + 0x1f) < -0x66) {
        bVar2 = 0x20;
      }
      (param_1->_Mypair)._Myval2._Bx._Buf[0] = bVar2 ^ bVar1;
      uVar3 = uVar3 - 1;
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                ((longlong)&(param_1->_Mypair)._Myval2._Bx + 1);
    } while (uVar3 != 0);
  }
  return;
}

// RemoveExtraAsciiWhitespace @ 14f8f4330

/* void __cdecl absl::lts_20240722::RemoveExtraAsciiWhitespace(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

void __cdecl
absl::lts_20240722::RemoveExtraAsciiWhitespace
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  byte bVar1;
  byte bVar2;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  
  pbVar6 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar10 = (param_1->_Mypair)._Myval2._Mysize;
  pbVar5 = pbVar6;
  while ((pbVar5 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    ((pbVar6->_Mypair)._Myval2._Bx._Buf + uVar10) &&
         ((*(byte *)((longlong)&ascii_internal::kPropertyBits +
                    (ulonglong)(byte)(pbVar5->_Mypair)._Myval2._Bx._Buf[0]) & 8) != 0))) {
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 1);
  }
  if (uVar10 < (ulonglong)((longlong)pbVar5 - (longlong)pbVar6)) {
                    /* WARNING: Subroutine does not return */
    std::basic_string_view<char,std::char_traits<char>_>::_Xran();
  }
  uVar10 = uVar10 - ((longlong)pbVar5 - (longlong)pbVar6);
  uVar8 = 0xffffffffffffffff;
  if (uVar10 != 0xffffffffffffffff) {
    uVar8 = uVar10;
  }
  pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           ((pbVar5->_Mypair)._Myval2._Bx._Buf + uVar8);
  do {
    pbVar4 = pbVar6;
    if (pbVar4 == pbVar5) break;
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)&pbVar4[-1]._Mypair._Myval2._Myres + 7);
  } while ((*(byte *)((longlong)&ascii_internal::kPropertyBits +
                     (ulonglong)*(byte *)((longlong)&pbVar4[-1]._Mypair._Myval2._Myres + 7)) & 8) !=
           0);
  uVar10 = (param_1->_Mypair)._Myval2._Myres;
  uVar7 = (longlong)pbVar4 - (longlong)pbVar5;
  if (uVar8 < (ulonglong)((longlong)pbVar4 - (longlong)pbVar5)) {
    uVar7 = uVar8;
  }
  if (uVar7 == 0) {
    pbVar6 = param_1;
    if (0xf < uVar10) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (pbVar6->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    return;
  }
  p_Var3 = &pbVar5->_Mypair;
  pbVar6 = param_1;
  if (0xf < uVar10) {
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  bVar9 = 0;
  for (; pbVar5 < (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  ((p_Var3->_Myval2)._Bx._Buf + uVar7);
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 1)) {
    bVar1 = (pbVar5->_Mypair)._Myval2._Bx._Buf[0];
    bVar2 = *(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)bVar1);
    if ((bVar9 != 0) && ((bVar2 & 8) != 0)) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((longlong)&pbVar6[-1]._Mypair._Myval2._Myres + 7);
    }
    (pbVar6->_Mypair)._Myval2._Bx._Buf[0] = bVar1;
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)&(pbVar6->_Mypair)._Myval2._Bx + 1);
    bVar9 = bVar2 >> 3 & 1;
  }
  uVar10 = (param_1->_Mypair)._Myval2._Myres;
  pbVar5 = param_1;
  if (0xf < uVar10) {
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar8 = (longlong)pbVar6 - (longlong)pbVar5;
  if (uVar8 <= (param_1->_Mypair)._Myval2._Mysize) {
    pbVar6 = param_1;
    if (0xf < uVar10) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_1->_Mypair)._Myval2._Mysize = uVar8;
    *(undefined1 *)((longlong)pbVar6 + uVar8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// StripAsciiWhitespace @ 14f8f4480

/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::StripAsciiWhitespace(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::StripAsciiWhitespace
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  pbVar5 = (byte *)*param_2;
  uVar4 = param_2[1];
  pbVar2 = pbVar5;
  while ((pbVar2 != pbVar5 + uVar4 &&
         ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)*pbVar2) & 8) != 0))) {
    pbVar2 = pbVar2 + 1;
  }
  uVar3 = (longlong)pbVar2 - (longlong)pbVar5;
  if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::basic_string_view<char,std::char_traits<char>_>::_Xran();
  }
  pbVar5 = pbVar5 + uVar3;
  uVar6 = 0xffffffffffffffff;
  if (uVar4 - uVar3 != 0xffffffffffffffff) {
    uVar6 = uVar4 - uVar3;
  }
  pbVar2 = pbVar5 + uVar6;
  do {
    pbVar1 = pbVar2;
    if (pbVar1 == pbVar5) break;
    pbVar2 = pbVar1 + -1;
  } while ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)pbVar1[-1]) & 8) != 0);
  __return_storage_ptr__->_Mydata = (char *)pbVar5;
  uVar4 = (longlong)pbVar1 - (longlong)pbVar5;
  if (uVar6 < (ulonglong)((longlong)pbVar1 - (longlong)pbVar5)) {
    uVar4 = uVar6;
  }
  __return_storage_ptr__->_Mysize = uVar4;
  return __return_storage_ptr__;
}

// StripLeadingAsciiWhitespace @ 14f8f4520

/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::StripLeadingAsciiWhitespace(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::StripLeadingAsciiWhitespace
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  
  pbVar1 = (byte *)*param_2;
  uVar2 = param_2[1];
  pbVar3 = pbVar1;
  while ((pbVar3 != pbVar1 + uVar2 &&
         ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)*pbVar3) & 8) != 0))) {
    pbVar3 = pbVar3 + 1;
  }
  if ((ulonglong)((longlong)pbVar3 - (longlong)pbVar1) <= uVar2) {
    __return_storage_ptr__->_Mydata = (char *)pbVar3;
    uVar5 = uVar2 - ((longlong)pbVar3 - (longlong)pbVar1);
    uVar4 = 0xffffffffffffffff;
    if (uVar5 != 0xffffffffffffffff) {
      uVar4 = uVar5;
    }
    __return_storage_ptr__->_Mysize = uVar4;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
}

// StripTrailingAsciiWhitespace @ 14f8f4590

/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::StripTrailingAsciiWhitespace(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::StripTrailingAsciiWhitespace
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,longlong *param_2
          )

{
  char *pcVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  pcVar1 = (char *)*param_2;
  uVar2 = param_2[1];
  pcVar4 = pcVar1 + uVar2;
  do {
    pcVar3 = pcVar4;
    if (pcVar3 == pcVar1) break;
    pcVar4 = pcVar3 + -1;
  } while ((*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)(byte)pcVar3[-1]) & 8)
           != 0);
  __return_storage_ptr__->_Mydata = pcVar1;
  uVar5 = (longlong)pcVar3 - (longlong)pcVar1;
  if (uVar2 < (ulonglong)((longlong)pcVar3 - (longlong)pcVar1)) {
    uVar5 = uVar2;
  }
  __return_storage_ptr__->_Mysize = uVar5;
  return __return_storage_ptr__;
}

// _Get_current @ 14f8f45f0

/* public: char const * __ptr64 const & __ptr64 __cdecl std::reverse_iterator<char const *
   __ptr64>::_Get_current(void)const __ptr64 */

char ** __thiscall
std::reverse_iterator<char_const*___ptr64>::_Get_current
          (reverse_iterator<char_const*___ptr64> *this)

{
  return (char **)this;
}

// _Get_current @ 14f8f4600

/* public: class std::_String_view_iterator<struct std::char_traits<char> > const & __ptr64 __cdecl
   std::reverse_iterator<class std::_String_view_iterator<struct std::char_traits<char> >
   >::_Get_current(void)const __ptr64 */

_String_view_iterator<std::char_traits<char>_> * __thiscall
std::reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_>::_Get_current
          (reverse_iterator<std::_String_view_iterator<std::char_traits<char>_>_> *this)

{
  return (_String_view_iterator<std::char_traits<char>_> *)this;
}

// _Seek_to @ 14f8f4610

/* public: void __cdecl std::_String_view_iterator<struct std::char_traits<char> >::_Seek_to(char
   const * __ptr64) __ptr64 */

void __thiscall
std::_String_view_iterator<std::char_traits<char>_>::_Seek_to
          (_String_view_iterator<std::char_traits<char>_> *this,char *param_1)

{
  this->_Myptr = param_1;
  return;
}

// _Unwrapped @ 14f8f4620

/* public: char const * __ptr64 __cdecl std::_String_view_iterator<struct std::char_traits<char>
   >::_Unwrapped(void)const __ptr64 */

char * __thiscall
std::_String_view_iterator<std::char_traits<char>_>::_Unwrapped
          (_String_view_iterator<std::char_traits<char>_> *this)

{
  return this->_Myptr;
}

// end @ 14f8f4630

/* public: class std::_String_view_iterator<struct std::char_traits<char> > __cdecl
   std::basic_string_view<char,struct std::char_traits<char> >::end(void)const __ptr64 */

_String_view_iterator<std::char_traits<char>_> __thiscall
std::basic_string_view<char,std::char_traits<char>_>::end
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  longlong *in_RDX;
  
  *in_RDX = (longlong)(this->_Mydata + this->_Mysize);
  return (_String_view_iterator<std::char_traits<char>_>)(char *)in_RDX;
}

// rbegin @ 14f8f4650

/* public: class std::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > > __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::rbegin(void)const __ptr64 */

void __thiscall
std::basic_string_view<char,std::char_traits<char>_>::rbegin
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  longlong *in_RDX;
  
  *in_RDX = (longlong)(this->_Mydata + this->_Mysize);
  return;
}

// rend @ 14f8f4670

/* public: class std::reverse_iterator<class std::_String_view_iterator<struct
   std::char_traits<char> > > __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::rend(void)const __ptr64 */

void __thiscall
std::basic_string_view<char,std::char_traits<char>_>::rend
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = this->_Mydata;
  return;
}

