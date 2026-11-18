// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 27

// STLStringResizeUninitialized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void> @ 14f8f0170

/* void __cdecl absl::lts_20240722::strings_internal::STLStringResizeUninitialized<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,void>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::strings_internal::
STLStringResizeUninitialized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,__uint64 param_2
          )

{
  ulong64 *puVar1;
  char *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  <lambda_1> local_res8;
  
  uVar2 = (param_1->_Mypair)._Myval2._Mysize;
  puVar1 = &(param_1->_Mypair)._Myval2._Mysize;
  if (param_2 <= uVar2) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = param_2;
    (param_1->_Mypair)._Myval2._Bx._Buf[param_2] = '\0';
    return;
  }
  uVar3 = (param_1->_Mypair)._Myval2._Myres;
  _Size = param_2 - uVar2;
  if (_Size <= uVar3 - uVar2) {
    *puVar1 = param_2;
    if (0xf < uVar3) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    _Dst = (param_1->_Mypair)._Myval2._Bx._Buf + uVar2;
    memset(_Dst,0,_Size);
    _Dst[_Size] = '\0';
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
            (param_1,_Size,local_res8,_Size,'\0');
  return;
}

// operator[] @ 14f8f0210

/* public: char & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator[](unsigned __int64) __ptr64 */

char * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1)

{
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    return (this->_Mypair)._Myval2._Bx._Ptr + param_1;
  }
  return (char *)((longlong)&(this->_Mypair)._Myval2._Bx + param_1);
}

// operator() @ 14f8f0230

/* public: __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::append(unsigned __int64,char)
   __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const * __ptr64 const,unsigned
   __int64,unsigned __int64,char)const __ptr64 */

void __thiscall
`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(unsigned___int64,char)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,char *param_1,char *param_2,__uint64 param_3,__uint64 param_4,
          char param_5)

{
  memcpy(param_1,param_2,param_3);
  memset(param_1 + param_3,(int)param_5,param_4);
  (param_1 + param_3)[param_4] = '\0';
  return;
}

// Append @ 14f8f0280

/* public: static void __cdecl absl::lts_20240722::strings_internal::AppendUninitializedTraits<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,void>::Append(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::strings_internal::
AppendUninitializedTraits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void>
::Append(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,__uint64 param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(param_1,param_2,'\0')
  ;
  return;
}

// FUN_14f8f0290 @ 14f8f0290

longlong FUN_14f8f0290(void *param_1,undefined8 *param_2)

{
  size_t _Size;
  
  _Size = param_2[1];
  if (_Size != 0) {
    memcpy(param_1,(void *)*param_2,_Size);
  }
  return _Size + (longlong)param_1;
}

// AppendPieces @ 14f8f02c0

/* void __cdecl absl::lts_20240722::strings_internal::AppendPieces(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::initializer_list<class std::basic_string_view<char,struct std::char_traits<char> > >) */

void __cdecl
absl::lts_20240722::strings_internal::AppendPieces
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          undefined8 *param_2)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  size_t _Size;
  __uint64 _Var3;
  char *_Dst;
  undefined8 *puVar4;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  puVar2 = (undefined8 *)param_2[1];
  _Var3 = 0;
  param_2 = (undefined8 *)*param_2;
  for (puVar4 = param_2; puVar4 != puVar2; puVar4 = puVar4 + 2) {
    _Var3 = _Var3 + puVar4[1];
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(param_1,_Var3,'\0');
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  _Dst = (param_1->_Mypair)._Myval2._Bx._Buf + uVar1;
  for (; param_2 != puVar2; param_2 = param_2 + 2) {
    _Size = param_2[1];
    if (_Size != 0) {
      memcpy(_Dst,(void *)*param_2,_Size);
      _Dst = _Dst + _Size;
    }
  }
  return;
}

// CatPieces @ 14f8f0360

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::strings_internal::CatPieces(class std::initializer_list<class
   std::basic_string_view<char,struct std::char_traits<char> > >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::strings_internal::CatPieces
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t _Size;
  undefined8 *puVar2;
  __uint64 _Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Dst;
  
  _Var3 = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  puVar1 = (undefined8 *)param_2[1];
  for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar1; puVar2 = puVar2 + 2) {
    _Var3 = _Var3 + puVar2[1];
  }
  STLStringResizeUninitialized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void>
            (__return_storage_ptr__,_Var3);
  _Dst = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    _Dst = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  for (param_2 = (undefined8 *)*param_2; param_2 != puVar1; param_2 = param_2 + 2) {
    _Size = param_2[1];
    if (_Size != 0) {
      memcpy(_Dst,(void *)*param_2,_Size);
      _Dst = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)&(_Dst->_Mypair)._Myval2._Bx + _Size);
    }
  }
  return __return_storage_ptr__;
}

// Resize @ 14f8f0420

/* public: static void __cdecl absl::lts_20240722::strings_internal::ResizeUninitializedTraits<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,void>::Resize(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::strings_internal::
ResizeUninitializedTraits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void>
::Resize(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,__uint64 param_2)

{
  ulong64 *puVar1;
  char *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  <lambda_1> local_res8;
  
  uVar2 = (param_1->_Mypair)._Myval2._Mysize;
  puVar1 = &(param_1->_Mypair)._Myval2._Mysize;
  if (param_2 <= uVar2) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = param_2;
    (param_1->_Mypair)._Myval2._Bx._Buf[param_2] = '\0';
    return;
  }
  uVar3 = (param_1->_Mypair)._Myval2._Myres;
  _Size = param_2 - uVar2;
  if (_Size <= uVar3 - uVar2) {
    *puVar1 = param_2;
    if (0xf < uVar3) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    _Dst = (param_1->_Mypair)._Myval2._Bx._Buf + uVar2;
    memset(_Dst,0,_Size);
    _Dst[_Size] = '\0';
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
            (param_1,_Size,local_res8,_Size,'\0');
  return;
}

// StrAppend @ 14f8f04d0

/* void __cdecl absl::lts_20240722::StrAppend(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class absl::lts_20240722::AlphaNum
   const & __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64)
    */

void __cdecl
absl::lts_20240722::StrAppend
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          AlphaNum *param_2,AlphaNum *param_3,AlphaNum *param_4,AlphaNum *param_5)

{
  char *_Dst;
  char *_Dst_00;
  ulong64 uVar1;
  size_t sVar2;
  size_t _Size;
  size_t _Size_00;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,(param_2->piece_)._Mysize + (param_4->piece_)._Mysize +
                     (param_5->piece_)._Mysize + (param_3->piece_)._Mysize,'\0');
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  sVar2 = (param_2->piece_)._Mysize;
  _Dst = (param_1->_Mypair)._Myval2._Bx._Buf + uVar1;
  _Dst_00 = _Dst + sVar2;
  if (sVar2 != 0) {
    memcpy(_Dst,(param_2->piece_)._Mydata,sVar2);
  }
  sVar2 = (param_3->piece_)._Mysize;
  if (sVar2 != 0) {
    memcpy(_Dst_00,(param_3->piece_)._Mydata,sVar2);
  }
  _Size = (param_4->piece_)._Mysize;
  if (_Size != 0) {
    memcpy(_Dst_00 + sVar2,(param_4->piece_)._Mydata,_Size);
  }
  _Size_00 = (param_5->piece_)._Mysize;
  if (_Size_00 != 0) {
    memcpy(_Dst_00 + sVar2 + _Size,(param_5->piece_)._Mydata,_Size_00);
  }
  return;
}

// StrAppend @ 14f8f05a0

/* void __cdecl absl::lts_20240722::StrAppend(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class absl::lts_20240722::AlphaNum
   const & __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64) */

void __cdecl
absl::lts_20240722::StrAppend
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          AlphaNum *param_2,AlphaNum *param_3,AlphaNum *param_4)

{
  char *_Dst;
  ulong64 uVar1;
  size_t _Size;
  size_t _Size_00;
  size_t _Size_01;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,(param_2->piece_)._Mysize + (param_4->piece_)._Mysize +
                     (param_3->piece_)._Mysize,'\0');
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  _Size = (param_2->piece_)._Mysize;
  _Dst = (param_1->_Mypair)._Myval2._Bx._Buf + uVar1;
  if (_Size != 0) {
    memcpy(_Dst,(param_2->piece_)._Mydata,_Size);
  }
  _Size_00 = (param_3->piece_)._Mysize;
  if (_Size_00 != 0) {
    memcpy(_Dst + _Size,(param_3->piece_)._Mydata,_Size_00);
  }
  _Size_01 = (param_4->piece_)._Mysize;
  if (_Size_01 != 0) {
    memcpy(_Dst + _Size + _Size_00,(param_4->piece_)._Mydata,_Size_01);
  }
  return;
}

// StrAppend @ 14f8f0650

/* void __cdecl absl::lts_20240722::StrAppend(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class absl::lts_20240722::AlphaNum
   const & __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64) */

void __cdecl
absl::lts_20240722::StrAppend
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          AlphaNum *param_2,AlphaNum *param_3)

{
  char *_Dst;
  ulong64 uVar1;
  size_t _Size;
  size_t _Size_00;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,(param_2->piece_)._Mysize + (param_3->piece_)._Mysize,'\0');
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  _Size = (param_2->piece_)._Mysize;
  _Dst = (param_1->_Mypair)._Myval2._Bx._Buf + uVar1;
  if (_Size != 0) {
    memcpy(_Dst,(param_2->piece_)._Mydata,_Size);
  }
  _Size_00 = (param_3->piece_)._Mysize;
  if (_Size_00 != 0) {
    memcpy(_Dst + _Size,(param_3->piece_)._Mydata,_Size_00);
  }
  return;
}

// StrAppend @ 14f8f06e0

/* void __cdecl absl::lts_20240722::StrAppend(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class absl::lts_20240722::AlphaNum
   const & __ptr64) */

void __cdecl
absl::lts_20240722::StrAppend
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          AlphaNum *param_2)

{
  ulong64 uVar1;
  size_t _Size;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,(param_2->piece_)._Mysize,'\0');
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  _Size = (param_2->piece_)._Mysize;
  if (_Size != 0) {
    memcpy((void *)((longlong)&(param_1->_Mypair)._Myval2._Bx + uVar1),(param_2->piece_)._Mydata,
           _Size);
  }
  return;
}

// StrCat @ 14f8f0740

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrCat(class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum const &
   __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrCat
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          AlphaNum *param_1,AlphaNum *param_2,AlphaNum *param_3,AlphaNum *param_4)

{
  char *_Dst;
  size_t sVar1;
  size_t _Size;
  size_t _Size_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Dst_00;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  strings_internal::
  STLStringResizeUninitialized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void>
            (__return_storage_ptr__,
             (param_3->piece_)._Mysize + (param_4->piece_)._Mysize + (param_2->piece_)._Mysize +
             (param_1->piece_)._Mysize);
  _Dst_00 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    _Dst_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  sVar1 = (param_1->piece_)._Mysize;
  _Dst = (_Dst_00->_Mypair)._Myval2._Bx._Buf + sVar1;
  if (sVar1 != 0) {
    memcpy(_Dst_00,(param_1->piece_)._Mydata,sVar1);
  }
  sVar1 = (param_2->piece_)._Mysize;
  if (sVar1 != 0) {
    memcpy(_Dst,(param_2->piece_)._Mydata,sVar1);
  }
  _Size = (param_3->piece_)._Mysize;
  if (_Size != 0) {
    memcpy(_Dst + sVar1,(param_3->piece_)._Mydata,_Size);
  }
  _Size_00 = (param_4->piece_)._Mysize;
  if (_Size_00 != 0) {
    memcpy(_Dst + sVar1 + _Size,(param_4->piece_)._Mydata,_Size_00);
  }
  return __return_storage_ptr__;
}

// StrCat @ 14f8f0820

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrCat(class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64)
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrCat
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          AlphaNum *param_1,AlphaNum *param_2,AlphaNum *param_3)

{
  char *_Dst;
  size_t sVar1;
  size_t _Size;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Dst_00;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  strings_internal::
  STLStringResizeUninitialized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void>
            (__return_storage_ptr__,
             (param_2->piece_)._Mysize + (param_3->piece_)._Mysize + (param_1->piece_)._Mysize);
  _Dst_00 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    _Dst_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  sVar1 = (param_1->piece_)._Mysize;
  _Dst = (_Dst_00->_Mypair)._Myval2._Bx._Buf + sVar1;
  if (sVar1 != 0) {
    memcpy(_Dst_00,(param_1->piece_)._Mydata,sVar1);
  }
  sVar1 = (param_2->piece_)._Mysize;
  if (sVar1 != 0) {
    memcpy(_Dst,(param_2->piece_)._Mydata,sVar1);
  }
  _Size = (param_3->piece_)._Mysize;
  if (_Size != 0) {
    memcpy(_Dst + sVar1,(param_3->piece_)._Mydata,_Size);
  }
  return __return_storage_ptr__;
}

// StrCat @ 14f8f08e0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrCat(class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrCat
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          AlphaNum *param_1,AlphaNum *param_2)

{
  size_t _Size;
  size_t _Size_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Dst;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  strings_internal::
  STLStringResizeUninitialized<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void>
            (__return_storage_ptr__,(param_1->piece_)._Mysize + (param_2->piece_)._Mysize);
  _Dst = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    _Dst = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  _Size = (param_1->piece_)._Mysize;
  if (_Size != 0) {
    memcpy(_Dst,(param_1->piece_)._Mydata,_Size);
  }
  _Size_00 = (param_2->piece_)._Mysize;
  if (_Size_00 != 0) {
    memcpy((void *)((longlong)&(_Dst->_Mypair)._Myval2._Bx + _Size),(param_2->piece_)._Mydata,
           _Size_00);
  }
  return __return_storage_ptr__;
}

// _Eos @ 14f8f0980

/* private: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Eos(unsigned __int64) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1)

{
  char *pcVar1;
  
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    pcVar1 = (this->_Mypair)._Myval2._Bx._Ptr;
    (this->_Mypair)._Myval2._Mysize = param_1;
    pcVar1[param_1] = '\0';
    return;
  }
  (this->_Mypair)._Myval2._Mysize = param_1;
  (this->_Mypair)._Myval2._Bx._Buf[param_1] = '\0';
  return;
}

// append @ 14f8f09b0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(unsigned __int64,char) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1,
          char param_2)

{
  char *_Dst;
  ulong64 uVar1;
  ulonglong uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  <lambda_1> local_res8;
  
  uVar1 = (this->_Mypair)._Myval2._Mysize;
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (param_1 <= uVar2 - uVar1) {
    (this->_Mypair)._Myval2._Mysize = uVar1 + param_1;
    pbVar3 = this;
    if (0xf < uVar2) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
    }
    _Dst = (pbVar3->_Mypair)._Myval2._Bx._Buf + uVar1;
    memset(_Dst,(int)param_2,param_1);
    _Dst[param_1] = '\0';
    return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
  }
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                     (this,param_1,local_res8,param_1,param_2);
  return pbVar4;
}

// assign @ 14f8f0a40

/* public: static char * __ptr64 __cdecl std::_Char_traits<char,int>::assign(char * __ptr64
   const,unsigned __int64,char) */

char * __cdecl std::_Char_traits<char,int>::assign(char *param_1,__uint64 param_2,char param_3)

{
  if (param_2 != 0) {
    memset(param_1,(uint)(byte)param_3,param_2);
  }
  return param_1;
}

// assign @ 14f8f0a70

/* public: static char * __ptr64 __cdecl std::_Narrow_char_traits<char,int>::assign(char * __ptr64
   const,unsigned __int64,char) */

char * __cdecl
std::_Narrow_char_traits<char,int>::assign(char *param_1,__uint64 param_2,char param_3)

{
  char *pcVar1;
  
  pcVar1 = memset(param_1,(int)param_3,param_2);
  return pcVar1;
}

// begin @ 14f8f0a90

/* public: class std::basic_string_view<char,struct std::char_traits<char> > const * __ptr64 __cdecl
   std::initializer_list<class std::basic_string_view<char,struct std::char_traits<char> >
   >::begin(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::initializer_list<std::basic_string_view<char,std::char_traits<char>_>_>::begin
          (initializer_list<std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return *(basic_string_view<char,std::char_traits<char>_> **)this;
}

// data @ 14f8f0aa0

/* public: char const * __ptr64 __cdecl absl::lts_20240722::AlphaNum::data(void)const __ptr64 */

char * __thiscall absl::lts_20240722::AlphaNum::data(AlphaNum *this)

{
  return (this->piece_)._Mydata;
}

// end @ 14f8f0ab0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > const * __ptr64 __cdecl
   std::initializer_list<class std::basic_string_view<char,struct std::char_traits<char> >
   >::end(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::initializer_list<std::basic_string_view<char,std::char_traits<char>_>_>::end
          (initializer_list<std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return *(basic_string_view<char,std::char_traits<char>_> **)(this + 8);
}

// size @ 14f8f0ac0

/* public: unsigned __int64 __cdecl absl::lts_20240722::AlphaNum::size(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::AlphaNum::size(AlphaNum *this)

{
  return (this->piece_)._Mysize;
}

// FUN_150294030 @ 150294030

void FUN_150294030(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28)
              );
  }
  return;
}

// FUN_150294060 @ 150294060

void FUN_150294060(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28)
              );
  }
  return;
}

// FUN_150294090 @ 150294090

void FUN_150294090(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28)
              );
  }
  return;
}

// FUN_1502940c0 @ 1502940c0

void FUN_1502940c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28)
              );
  }
  return;
}

