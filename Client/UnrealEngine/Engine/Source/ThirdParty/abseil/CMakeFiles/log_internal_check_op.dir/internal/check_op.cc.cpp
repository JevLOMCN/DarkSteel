// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 162

// _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1><std::allocator<char>_const&___ptr64> @ 14f8e0500

/* public: __cdecl std::_Compressed_pair<class std::allocator<char>,class std::_String_val<struct
   std::_Simple_types<char> >,1>::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1><class std::allocator<char> const &
   __ptr64>(struct std::_One_then_variadic_args_t,class std::allocator<char> const & __ptr64)
   __ptr64 */

_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> * __thiscall
std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>::
_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1><std::allocator<char>_const&___ptr64>
          (_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<char> *param_2)

{
  (this->_Myval2)._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Myval2)._Bx + 8) = 0;
  (this->_Myval2)._Mysize = 0;
  (this->_Myval2)._Myres = 0;
  return this;
}

// _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1><std::allocator<char>_> @ 14f8e0520

/* public: __cdecl std::_Compressed_pair<class std::allocator<char>,class std::_String_val<struct
   std::_Simple_types<char> >,1>::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1><class std::allocator<char> >(struct
   std::_One_then_variadic_args_t,class std::allocator<char> && __ptr64) __ptr64 */

_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> * __thiscall
std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>::
_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1><std::allocator<char>_>
          (_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<char> *param_2)

{
  (this->_Myval2)._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Myval2)._Bx + 8) = 0;
  (this->_Myval2)._Mysize = 0;
  (this->_Myval2)._Myres = 0;
  return this;
}

// operator<<<char,std::char_traits<char>_> @ 14f8e0540

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::operator<<<char,struct std::char_traits<char> >(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<char,std::char_traits<char>_>
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = _Insert_string<char,std::char_traits<char>,unsigned___int64>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,param_2->_Mydata,
                      param_2->_Mysize);
  return pbVar1;
}

// operator<<<std::char_traits<char>_> @ 14f8e0560

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::operator<<<struct std::char_traits<char> >(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,signed char) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<std::char_traits<char>_>
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,char param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,param_2);
  return pbVar1;
}

// operator<<<std::char_traits<char>_> @ 14f8e0570

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::operator<<<struct std::char_traits<char> >(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,unsigned char) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<std::char_traits<char>_>
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,uchar param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,param_2);
  return pbVar1;
}

// operator<<<std::char_traits<char>_> @ 14f8e0580

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::operator<<<struct std::char_traits<char> >(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,signed char const * __ptr64) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<std::char_traits<char>_>
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,param_2);
  return pbVar1;
}

// operator<<<std::char_traits<char>_> @ 14f8e0590

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::operator<<<struct std::char_traits<char> >(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,unsigned char const * __ptr64) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<std::char_traits<char>_>
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,uchar *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)param_2);
  return pbVar1;
}

// MakeCheckOpString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64> @ 14f8e05a0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64>(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
MakeCheckOpString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
          char *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  pbVar1 = param_1 + 0x10;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               param_1;
  }
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,(char *)param_1,
             *(ulong64 *)pbVar1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  pbVar1 = param_2 + 0x10;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               param_2;
  }
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,(char *)param_2,
             *(ulong64 *)pbVar1);
  pbVar2 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar2;
}

// MakeCheckOpString<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,std::basic_string_view<char,struct_std::char_traits<char>_>_const&___ptr64> @ 14f8e0680

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,char const * __ptr64)
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
MakeCheckOpString<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,std::basic_string_view<char,struct_std::char_traits<char>_>_const&___ptr64>
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1->_Mydata,
             param_1->_Mysize);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_2->_Mydata,
             param_2->_Mysize);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpString<char,char> @ 14f8e0750

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<char,char>(char,char,char const *
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<char,char>
          (char param_1,char param_2,char *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  if ((byte)(param_1 - 0x20U) < 0x5f) {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"\'");
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_1);
    std::operator<<<std::char_traits<char>_>(pbVar1,"\'");
  }
  else {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"char value ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(int)param_1);
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  if ((byte)(param_2 - 0x20U) < 0x5f) {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"\'");
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_2);
    std::operator<<<std::char_traits<char>_>(pbVar1,"\'");
  }
  else {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"char value ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(int)param_2);
  }
  pbVar2 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar2;
}

// MakeCheckOpString<unsigned_char,unsigned_char> @ 14f8e0890

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<unsigned char,unsigned char>(unsigned
   char,unsigned char,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<unsigned_char,unsigned_char>
          (uchar param_1,uchar param_2,char *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  if ((byte)(param_1 - 0x20) < 0x5f) {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"\'");
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_1);
    std::operator<<<std::char_traits<char>_>(pbVar1,"\'");
  }
  else {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,
                        "unsigned char value ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(uint)param_1);
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  if ((byte)(param_2 - 0x20) < 0x5f) {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"\'");
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_2);
    std::operator<<<std::char_traits<char>_>(pbVar1,"\'");
  }
  else {
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,
                        "unsigned char value ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(uint)param_2);
  }
  pbVar2 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar2;
}

// MakeCheckOpString<float,float> @ 14f8e09d0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<float,float>(float,float,char const *
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<float,float>
          (float param_1,float param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_11c;
  undefined1 local_118 [136];
  basic_ios<char,std::char_traits<char>_> local_90;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_118,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118," vs. ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_118);
  *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118._0_8_ + 4)) =
       *(int *)(local_118._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_118 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_118 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return pbVar1;
}

// MakeCheckOpString<double,double> @ 14f8e0aa0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<double,double>(double,double,char
   const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<double,double>
          (double param_1,double param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_11c;
  undefined1 local_118 [136];
  basic_ios<char,std::char_traits<char>_> local_90;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_118,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118," vs. ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_118);
  *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118._0_8_ + 4)) =
       *(int *)(local_118._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_118 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_118 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return pbVar1;
}

// MakeCheckOpString<signed_char_const*___ptr64,signed_char_const*___ptr64> @ 14f8e0b70

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<signed char const * __ptr64,signed
   char const * __ptr64>(signed char const * __ptr64,signed char const * __ptr64,char const *
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
MakeCheckOpString<signed_char_const*___ptr64,signed_char_const*___ptr64>
          (char *param_1,char *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  if (param_1 == (char *)0x0) {
    param_1 = "(null)";
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  if (param_2 == (char *)0x0) {
    param_2 = "(null)";
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpString<char_const*___ptr64,char_const*___ptr64> @ 14f8e0c50

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<char const * __ptr64,char const *
   __ptr64>(char const * __ptr64,char const * __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<char_const*___ptr64,char_const*___ptr64>
          (char *param_1,char *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  if (param_1 == (char *)0x0) {
    param_1 = "(null)";
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  if (param_2 == (char *)0x0) {
    param_2 = "(null)";
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpString<unsigned_char_const*___ptr64,unsigned_char_const*___ptr64> @ 14f8e0d30

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<unsigned char const *
   __ptr64,unsigned char const * __ptr64>(unsigned char const * __ptr64,unsigned char const *
   __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
MakeCheckOpString<unsigned_char_const*___ptr64,unsigned_char_const*___ptr64>
          (uchar *param_1,uchar *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)"(null)";
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,(char *)param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  if (param_2 == (uchar *)0x0) {
    param_2 = (uchar *)"(null)";
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,(char *)param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpString<void_const*___ptr64,void_const*___ptr64> @ 14f8e0e10

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<void const * __ptr64,void const *
   __ptr64>(void const * __ptr64,void const * __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>
          (void *param_1,void *param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  if (param_1 == (void *)0x0) {
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"(null)");
  }
  else {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  if (param_2 == (void *)0x0) {
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,"(null)");
  }
  else {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_2);
  }
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpString<__int64,__int64> @ 14f8e0f00

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>(__int64,__int64,char
   const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<__int64,__int64>
          (__int64 param_1,__int64 param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpString<unsigned___int64,unsigned___int64> @ 14f8e0fd0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<unsigned __int64,unsigned
   __int64>(unsigned __int64,unsigned __int64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<unsigned___int64,unsigned___int64>
          (__uint64 param_1,__uint64 param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpString<bool,bool> @ 14f8e10a0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<bool,bool>(bool,bool,char const *
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<bool,bool>
          (bool param_1,bool param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8," vs. ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// MakeCheckOpValueString<float> @ 14f8e1170

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<float>(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,float const & __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<float>
          (basic_ostream<char,std::char_traits<char>_> *param_1,float *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f8e1174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,*param_2);
  return;
}

// MakeCheckOpValueString<double> @ 14f8e1190

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<double>(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,double const & __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<double>
          (basic_ostream<char,std::char_traits<char>_> *param_1,double *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f8e1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,*param_2);
  return;
}

// MakeCheckOpValueString<signed_char_const*___ptr64> @ 14f8e11b0

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<signed char const *
   __ptr64>(class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,signed char
   const * __ptr64 const & __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<signed_char_const*___ptr64>
          (basic_ostream<char,std::char_traits<char>_> *param_1,char **param_2)

{
  char *pcVar1;
  
  pcVar1 = "(null)";
  if (*param_2 != (char *)0x0) {
    pcVar1 = *param_2;
  }
  std::operator<<<std::char_traits<char>_>(param_1,pcVar1);
  return;
}

// MakeCheckOpValueString<char_const*___ptr64> @ 14f8e11d0

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<char const * __ptr64>(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,char const * __ptr64 const &
   __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<char_const*___ptr64>
          (basic_ostream<char,std::char_traits<char>_> *param_1,char **param_2)

{
  char *pcVar1;
  
  pcVar1 = "(null)";
  if (*param_2 != (char *)0x0) {
    pcVar1 = *param_2;
  }
  std::operator<<<std::char_traits<char>_>(param_1,pcVar1);
  return;
}

// MakeCheckOpValueString<unsigned_char_const*___ptr64> @ 14f8e11f0

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<unsigned char const *
   __ptr64>(class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,unsigned char
   const * __ptr64 const & __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<unsigned_char_const*___ptr64>
          (basic_ostream<char,std::char_traits<char>_> *param_1,uchar **param_2)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)"(null)";
  if (*param_2 != (uchar *)0x0) {
    puVar1 = *param_2;
  }
  std::operator<<<std::char_traits<char>_>(param_1,(char *)puVar1);
  return;
}

// MakeCheckOpValueString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f8e1210

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::
MakeCheckOpValueString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var1;
  
  p_Var1 = &param_2->_Mypair;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            (param_1,(char *)param_2,(p_Var1->_Myval2)._Mysize);
  return;
}

// MakeCheckOpValueString<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f8e1230

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::
MakeCheckOpValueString<std::basic_string_view<char,std::char_traits<char>_>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            (param_1,param_2->_Mydata,param_2->_Mysize);
  return;
}

// MakeCheckOpValueString<__int64> @ 14f8e1250

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<__int64>(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,__int64 const & __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<__int64>
          (basic_ostream<char,std::char_traits<char>_> *param_1,__int64 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f8e1253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,*param_2);
  return;
}

// MakeCheckOpValueString<unsigned___int64> @ 14f8e1260

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<unsigned __int64>(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,unsigned __int64 const &
   __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<unsigned___int64>
          (basic_ostream<char,std::char_traits<char>_> *param_1,__uint64 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f8e1263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,*param_2);
  return;
}

// MakeCheckOpValueString<bool> @ 14f8e1270

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString<bool>(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,bool const & __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString<bool>
          (basic_ostream<char,std::char_traits<char>_> *param_1,bool *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f8e1273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,*param_2);
  return;
}

// StrCat<char_[2]> @ 14f8e1280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrCat<char [2]>(class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum const &
   __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum
   const & __ptr64,char const (& __ptr64)[2]) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrCat<char_[2]>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          AlphaNum *param_1,AlphaNum *param_2,AlphaNum *param_3,AlphaNum *param_4,AlphaNum *param_5,
          char *param_6)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_78;
  ulong64 uStack_70;
  char *local_68;
  ulong64 uStack_60;
  char *local_58;
  ulong64 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *local_38;
  ulong64 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_68 = (param_2->piece_)._Mydata;
  uStack_60 = (param_2->piece_)._Mysize;
  local_78 = (param_1->piece_)._Mydata;
  uStack_70 = (param_1->piece_)._Mysize;
  local_48 = *(undefined4 *)&(param_4->piece_)._Mydata;
  uStack_44 = *(undefined4 *)((longlong)&(param_4->piece_)._Mydata + 4);
  uStack_40 = (undefined4)(param_4->piece_)._Mysize;
  uStack_3c = *(undefined4 *)((longlong)&(param_4->piece_)._Mysize + 4);
  local_58 = (param_3->piece_)._Mydata;
  uStack_50 = (param_3->piece_)._Mysize;
  local_38 = (param_5->piece_)._Mydata;
  uStack_30 = (param_5->piece_)._Mysize;
  if (param_6 == (char *)0x0) {
    local_98 = (char **)0x0;
    uStack_90 = (ulonglong *)0x0;
  }
  else {
    local_98 = (char **)param_6;
    uStack_90 = (ulonglong *)0xffffffffffffffff;
    do {
      uStack_90 = (ulonglong *)((longlong)uStack_90 + 1);
    } while (param_6[(longlong)uStack_90] != '\0');
  }
  local_28 = (undefined4)local_98;
  uStack_24 = local_98._4_4_;
  uStack_20 = (undefined4)uStack_90;
  uStack_1c = uStack_90._4_4_;
  local_98 = &local_78;
  uStack_90 = local_18;
  strings_internal::CatPieces(__return_storage_ptr__,&local_98);
  return __return_storage_ptr__;
}

// _Allocate_at_least_helper<std::allocator<char>_> @ 14f8e1370

/* char * __ptr64 __cdecl std::_Allocate_at_least_helper<class std::allocator<char> >(class
   std::allocator<char> & __ptr64,unsigned __int64 & __ptr64) */

char * __cdecl
std::_Allocate_at_least_helper<std::allocator<char>_>(allocator<char> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  char *pcVar3;
  
  uVar1 = *param_2;
  if (uVar1 < 0x1000) {
    if (uVar1 != 0) {
      pcVar3 = ::operator_new(uVar1);
      return pcVar3;
    }
    return (char *)0x0;
  }
  if (uVar1 < uVar1 + 0x27) {
    pvVar2 = ::operator_new(uVar1 + 0x27);
    if (pvVar2 != (void *)0x0) {
      pcVar3 = (char *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)(pcVar3 + -8) = pvVar2;
      return pcVar3;
    }
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Allocate_for_capacity<0> @ 14f8e13e0

/* private: static char * __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Allocate_for_capacity<0>(class std::allocator<char> & __ptr64,unsigned
   __int64 & __ptr64) */

char * __cdecl
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Allocate_for_capacity<0>
          (allocator<char> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  char *pcVar3;
  
  *param_2 = *param_2 + 1;
  uVar1 = *param_2;
  if (uVar1 < 0x1000) {
    if (uVar1 != 0) {
      pcVar3 = ::operator_new(uVar1);
      *param_2 = *param_2 - 1;
      return pcVar3;
    }
    *param_2 = *param_2 - 1;
    return (char *)0x0;
  }
  if (uVar1 < uVar1 + 0x27) {
    pvVar2 = ::operator_new(uVar1 + 0x27);
    if (pvVar2 != (void *)0x0) {
      pcVar3 = (char *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)(pcVar3 + -8) = pvVar2;
      *param_2 = *param_2 - 1;
      return pcVar3;
    }
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Construct_in_place<char*___ptr64,char*___ptr64&___ptr64> @ 14f8e1460

/* void __cdecl std::_Construct_in_place<char * __ptr64,char * __ptr64 & __ptr64>(char * __ptr64 &
   __ptr64,char * __ptr64 & __ptr64) */

void __cdecl
std::_Construct_in_place<char*___ptr64,char*___ptr64&___ptr64>(char **param_1,char **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<char*___ptr64,char*___ptr64_const&___ptr64> @ 14f8e1470

/* void __cdecl std::_Construct_in_place<char * __ptr64,char * __ptr64 const & __ptr64>(char *
   __ptr64 & __ptr64,char * __ptr64 const & __ptr64) */

void __cdecl
std::_Construct_in_place<char*___ptr64,char*___ptr64_const&___ptr64>(char **param_1,char **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Deallocate<16,0> @ 14f8e1480

/* void __cdecl std::_Deallocate<16,0>(void * __ptr64,unsigned __int64) */

void __cdecl std::_Deallocate<16,0>(void *param_1,__uint64 param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if (0xfff < param_2) {
    pvVar1 = *(void **)((longlong)param_1 + -8);
    param_2 = param_2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pvVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pvVar1,param_2);
  return;
}

// _Destroy_in_place<char*___ptr64> @ 14f8e14c0

/* void __cdecl std::_Destroy_in_place<char * __ptr64>(char * __ptr64 & __ptr64) */

void __cdecl std::_Destroy_in_place<char*___ptr64>(char **param_1)

{
  return;
}

// _Get_size_of_n<1> @ 14f8e14d0

/* unsigned __int64 __cdecl std::_Get_size_of_n<1>(unsigned __int64) */

__uint64 __cdecl std::_Get_size_of_n<1>(__uint64 param_1)

{
  return param_1;
}

// _Reallocate_for<`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(char_const*___ptr64_const,unsigned___int64)___ptr64'::`2'::<lambda_1>,char_const*___ptr64> @ 14f8e14e0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_for<class `public: class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64 __cdecl
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::assign(char
   const * __ptr64 const,unsigned __int64) __ptr64'::`2'::<lambda_1>,char const * __ptr64>(unsigned
   __int64,class `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::assign(char const * __ptr64 const,unsigned
   __int64) __ptr64'::`2'::<lambda_1>,char const * __ptr64) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_for<_public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(char_const*___ptr64_const,unsigned___int64)___ptr64_::_2_::<lambda_1>,char_const*___ptr64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,ulonglong param_1,
          undefined8 param_3,void *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *_Dst;
  
  uVar7 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar6 = param_1 | 0xf;
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if ((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (0xfff < uVar1) {
      uVar6 = uVar7 + 0x28;
      if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
      goto LAB_14f8e1568;
    }
    if (uVar1 == 0) {
      _Dst = (char *)0x0;
    }
    else {
      _Dst = ::operator_new(uVar1);
    }
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_14f8e1568:
    pvVar4 = ::operator_new(uVar6);
    if (pvVar4 == (void *)0x0) goto LAB_14f8e1603;
    _Dst = (char *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -8) = pvVar4;
  }
  (this->_Mypair)._Myval2._Mysize = param_1;
  (this->_Mypair)._Myval2._Myres = uVar7;
  memcpy(_Dst,param_4,param_1);
  _Dst[param_1] = '\0';
  if (0xf < uVar2) {
    pcVar3 = (this->_Mypair)._Myval2._Bx._Ptr;
    uVar7 = uVar2 + 1;
    pcVar5 = pcVar3;
    if (0xfff < uVar7) {
      pcVar5 = *(char **)(pcVar3 + -8);
      uVar7 = uVar2 + 0x28;
      if ((char *)0x1f < pcVar3 + (-8 - (longlong)pcVar5)) {
LAB_14f8e1603:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar5,uVar7);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

// _Unfancy<char> @ 14f8e1620

/* char * __ptr64 __cdecl std::_Unfancy<char>(char * __ptr64) */

char * __cdecl std::_Unfancy<char>(char *param_1)

{
  return param_1;
}

// addressof<std::_String_val<std::_Simple_types<char>_>_const_> @ 14f8e1630

/* class std::_String_val<struct std::_Simple_types<char> > const * __ptr64 __cdecl
   std::addressof<class std::_String_val<struct std::_Simple_types<char> > const >(class
   std::_String_val<struct std::_Simple_types<char> > const & __ptr64) */

_String_val<std::_Simple_types<char>_> * __cdecl
std::addressof<std::_String_val<std::_Simple_types<char>_>_const_>
          (_String_val<struct_std::_Simple_types<char>_> *param_1)

{
  return (_String_val<std::_Simple_types<char>_> *)param_1;
}

// addressof<char> @ 14f8e1640

/* char * __ptr64 __cdecl std::addressof<char>(char & __ptr64) */

char * __cdecl std::addressof<char>(char *param_1)

{
  return param_1;
}

// addressof<char*___ptr64> @ 14f8e1650

/* char * __ptr64 * __ptr64 __cdecl std::addressof<char * __ptr64>(char * __ptr64 & __ptr64) */

char ** __cdecl std::addressof<char*___ptr64>(char **param_1)

{
  return param_1;
}

// addressof<std::_String_val<std::_Simple_types<char>_>_> @ 14f8e1660

/* class std::_String_val<struct std::_Simple_types<char> > * __ptr64 __cdecl std::addressof<class
   std::_String_val<struct std::_Simple_types<char> > >(class std::_String_val<struct
   std::_Simple_types<char> > & __ptr64) */

_String_val<std::_Simple_types<char>_> * __cdecl
std::addressof<std::_String_val<std::_Simple_types<char>_>_>
          (_String_val<struct_std::_Simple_types<char>_> *param_1)

{
  return (_String_val<std::_Simple_types<char>_> *)param_1;
}

// addressof<std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f8e1670

/* class std::basic_stringbuf<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl std::addressof<class std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64) */

basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::addressof<std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  return (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// construct_at<char,0> @ 14f8e1680

/* char * __ptr64 __cdecl std::construct_at<char,0>(char * __ptr64 const) */

char * __cdecl std::construct_at<char,0>(char *param_1)

{
  *param_1 = '\0';
  return param_1;
}

// construct_at<char,char_const&___ptr64,0> @ 14f8e1690

/* char * __ptr64 __cdecl std::construct_at<char,char const & __ptr64,0>(char * __ptr64 const,char
   const & __ptr64) */

char * __cdecl std::construct_at<char,char_const&___ptr64,0>(char *param_1,char *param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<char*___ptr64,char*___ptr64&___ptr64,0> @ 14f8e16a0

/* char * __ptr64 * __ptr64 __cdecl std::construct_at<char * __ptr64,char * __ptr64 &
   __ptr64,0>(char * __ptr64 * __ptr64 const,char * __ptr64 & __ptr64) */

char ** __cdecl
std::construct_at<char*___ptr64,char*___ptr64&___ptr64,0>(char **param_1,char **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<char*___ptr64,char*___ptr64_const&___ptr64,0> @ 14f8e16b0

/* char * __ptr64 * __ptr64 __cdecl std::construct_at<char * __ptr64,char * __ptr64 const &
   __ptr64,0>(char * __ptr64 * __ptr64 const,char * __ptr64 const & __ptr64) */

char ** __cdecl
std::construct_at<char*___ptr64,char*___ptr64_const&___ptr64,0>(char **param_1,char **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// forward<char*___ptr64&___ptr64> @ 14f8e16c0

/* char * __ptr64 & __ptr64 __cdecl std::forward<char * __ptr64 & __ptr64>(char * __ptr64 & __ptr64)
    */

char ** __cdecl std::forward<char*___ptr64&___ptr64>(char **param_1)

{
  return param_1;
}

// forward<char_const&___ptr64> @ 14f8e16d0

/* char const & __ptr64 __cdecl std::forward<char const & __ptr64>(char const & __ptr64) */

char * __cdecl std::forward<char_const&___ptr64>(char *param_1)

{
  return param_1;
}

// forward<char*___ptr64_const&___ptr64> @ 14f8e16e0

/* char * __ptr64 const & __ptr64 __cdecl std::forward<char * __ptr64 const & __ptr64>(char *
   __ptr64 const & __ptr64) */

char ** __cdecl std::forward<char*___ptr64_const&___ptr64>(char **param_1)

{
  return param_1;
}

// forward<std::allocator<char>_const&___ptr64> @ 14f8e16f0

/* class std::allocator<char> const & __ptr64 __cdecl std::forward<class std::allocator<char> const
   & __ptr64>(class std::allocator<char> const & __ptr64) */

allocator<char> * __cdecl
std::forward<std::allocator<char>_const&___ptr64>(allocator<char> *param_1)

{
  return param_1;
}

// forward<std::allocator<char>_> @ 14f8e1700

/* class std::allocator<char> && __ptr64 __cdecl std::forward<class std::allocator<char> >(class
   std::allocator<char> & __ptr64) */

allocator<char> * __cdecl std::forward<std::allocator<char>_>(allocator<char> *param_1)

{
  return param_1;
}

// max<char*___ptr64> @ 14f8e1710

/* char * __ptr64 const & __ptr64 __cdecl std::max<char * __ptr64>(char * __ptr64 const &
   __ptr64,char * __ptr64 const & __ptr64) */

char ** __cdecl std::max<char*___ptr64>(char **param_1,char **param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// max<unsigned___int64> @ 14f8e1730

/* unsigned __int64 const & __ptr64 __cdecl std::max<unsigned __int64>(unsigned __int64 const &
   __ptr64,unsigned __int64 const & __ptr64) */

__uint64 * __cdecl std::max<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// min<unsigned___int64> @ 14f8e1750

/* unsigned __int64 const & __ptr64 __cdecl std::min<unsigned __int64>(unsigned __int64 const &
   __ptr64,unsigned __int64 const & __ptr64) */

__uint64 * __cdecl std::min<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

// move<std::allocator<char>&___ptr64> @ 14f8e1770

/* class std::allocator<char> && __ptr64 __cdecl std::move<class std::allocator<char> &
   __ptr64>(class std::allocator<char> & __ptr64) */

allocator<char> * __cdecl std::move<std::allocator<char>&___ptr64>(allocator<char> *param_1)

{
  return param_1;
}

// _String_val<std::_Simple_types<char>_> @ 14f8e1780

/* public: __cdecl std::_String_val<struct std::_Simple_types<char> >::_String_val<struct
   std::_Simple_types<char> >(void) __ptr64 */

_String_val<std::_Simple_types<char>_> * __thiscall
std::_String_val<std::_Simple_types<char>_>::_String_val<std::_Simple_types<char>_>
          (_String_val<std::_Simple_types<char>_> *this)

{
  (this->_Bx)._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&this->_Bx + 8) = 0;
  this->_Mysize = 0;
  this->_Myres = 0;
  return this;
}

// allocator<char> @ 14f8e17a0

/* public: __cdecl std::allocator<char>::allocator<char>(void) __ptr64 */

allocator<char> * __thiscall std::allocator<char>::allocator<char>(allocator<char> *this)

{
  return this;
}

// basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> @ 14f8e17b0

/* public: __cdecl std::basic_ostringstream<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_ostringstream<char,struct std::char_traits<char>,class
   std::allocator<char> >(void) __ptr64 */

basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
          (basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined1 **)this = &_vbtable_;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)&this->field_0x88);
  }
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (basic_streambuf<char,std::char_traits<char>_> *)&this->_Stringbuffer,false);
  *(undefined ***)(&this->field_0x0 + *(int *)(*(longlong *)this + 4)) = vftable;
  *(int *)((longlong)*(int *)(*(longlong *)this + 4) + -4 + (longlong)this) =
       *(int *)(*(longlong *)this + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&this->_Stringbuffer);
  (this->_Stringbuffer)._padding_ =
       (longlong)basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  (this->_Stringbuffer)._Seekhigh = (char *)0x0;
  (this->_Stringbuffer)._Mystate = 4;
  return this;
}

// basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 14f8e1860

/* public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(class
   std::allocator<char> const & __ptr64) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          allocator<char> *param_1)

{
  (this->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0xf;
  (this->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return this;
}

// basic_string_view<char,std::char_traits<char>_> @ 14f8e1890

/* public: __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::basic_string_view<char,struct std::char_traits<char> >(char const * __ptr64 const) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::
basic_string_view<char,std::char_traits<char>_>
          (basic_string_view<char,std::char_traits<char>_> *this,char *param_1)

{
  ulong64 uVar1;
  
  this->_Mydata = param_1;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_1[uVar1] != '\0');
  this->_Mysize = uVar1;
  return this;
}

// basic_string_view<char,std::char_traits<char>_> @ 14f8e18c0

/* public: __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::basic_string_view<char,struct std::char_traits<char> >(void) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::
basic_string_view<char,std::char_traits<char>_>
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  this->_Mydata = (char *)0x0;
  this->_Mysize = 0;
  return this;
}

// basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> @ 14f8e18e0

/* public: __cdecl std::basic_stringbuf<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_stringbuf<char,struct std::char_traits<char>,class
   std::allocator<char> >(int) __ptr64 */

basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  this->_Seekhigh = (char *)0x0;
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

// fpos<_Mbstatet> @ 14f8e1950

/* public: __cdecl std::fpos<struct _Mbstatet>::fpos<struct _Mbstatet>(__int64) __ptr64 */

fpos<_Mbstatet> * __thiscall
std::fpos<_Mbstatet>::fpos<_Mbstatet>(fpos<_Mbstatet> *this,__int64 param_1)

{
  this->_Myoff = param_1;
  this->_Fpos = 0;
  (this->_Mystate)._Wchar = 0;
  (this->_Mystate)._Byte = 0;
  (this->_Mystate)._State = 0;
  return this;
}

// initializer_list<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f8e1970

/* public: __cdecl std::initializer_list<class std::basic_string_view<char,struct
   std::char_traits<char> > >::initializer_list<class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::basic_string_view<char,struct std::char_traits<char> >
   const * __ptr64,class std::basic_string_view<char,struct std::char_traits<char> > const *
   __ptr64) __ptr64 */

initializer_list<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::initializer_list<std::basic_string_view<char,std::char_traits<char>_>_>::
initializer_list<std::basic_string_view<char,std::char_traits<char>_>_>
          (initializer_list<std::basic_string_view<char,std::char_traits<char>_>_> *this,
          basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  *(basic_string_view<char,std::char_traits<char>_> **)this = param_1;
  *(basic_string_view<char,std::char_traits<char>_> **)(this + 8) = param_2;
  return this;
}

// AlphaNum @ 14f8e1990

/* public: __cdecl absl::lts_20240722::AlphaNum::AlphaNum(char const * __ptr64) __ptr64 */

AlphaNum * __thiscall absl::lts_20240722::AlphaNum::AlphaNum(AlphaNum *this,char *param_1)

{
  ulong64 uVar1;
  char *local_18;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
    local_18 = (char *)0x0;
  }
  else {
    uVar1 = 0xffffffffffffffff;
    do {
      uVar1 = uVar1 + 1;
      local_18 = param_1;
    } while (param_1[uVar1] != '\0');
  }
  (this->piece_)._Mydata = local_18;
  (this->piece_)._Mysize = uVar1;
  return this;
}

// CheckOpMessageBuilder @ 14f8e19e0

/* public: __cdecl
   absl::lts_20240722::log_internal::CheckOpMessageBuilder::CheckOpMessageBuilder(char const *
   __ptr64) __ptr64 */

CheckOpMessageBuilder * __thiscall
absl::lts_20240722::log_internal::CheckOpMessageBuilder::CheckOpMessageBuilder
          (CheckOpMessageBuilder *this,char *param_1)

{
  int iVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  
  *(undefined1 **)&this->stream_ =
       &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)&(this->stream_).field_0x88);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (basic_streambuf<char,std::char_traits<char>_> *)&(this->stream_)._Stringbuffer,false);
  *(undefined ***)(&(this->stream_).field_0x0 + *(int *)(*(longlong *)&this->stream_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)&this->stream_ + 4);
  *(int *)((longlong)iVar1 + -4 + (longlong)this) = iVar1 + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&(this->stream_)._Stringbuffer);
  (this->stream_)._Stringbuffer._padding_ =
       (longlong)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  (this->stream_)._Stringbuffer._Seekhigh = (char *)0x0;
  (this->stream_)._Stringbuffer._Mystate = 4;
  pbVar2 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)this,param_1);
  std::operator<<<std::char_traits<char>_>(pbVar2," (");
  return this;
}

// StringifySink @ 14f8e1ab0

/* public: __cdecl
   absl::lts_20240722::log_internal::detect_specialization::StringifySink::StringifySink(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64) __ptr64 */

StringifySink * __thiscall
absl::lts_20240722::log_internal::detect_specialization::StringifySink::StringifySink
          (StringifySink *this,basic_ostream<char,std::char_traits<char>_> *param_1)

{
  *(basic_ostream<char,std::char_traits<char>_> **)this = param_1;
  return this;
}

// _Bxty @ 14f8e1ac0

/* public: __cdecl std::_String_val<struct std::_Simple_types<char> >::_Bxty::_Bxty(void) __ptr64 */

_Bxty * __thiscall std::_String_val<std::_Simple_types<char>_>::_Bxty::_Bxty(_Bxty *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Sentry_base @ 14f8e1ad0

/* public: __cdecl std::basic_ostream<char,struct std::char_traits<char>
   >::_Sentry_base::_Sentry_base(class std::basic_ostream<char,struct std::char_traits<char> > &
   __ptr64) __ptr64 */

_Sentry_base * __thiscall
std::basic_ostream<char,std::char_traits<char>_>::_Sentry_base::_Sentry_base
          (_Sentry_base *this,basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  this->_Myostr = (basic_ostream<char,std::char_traits<char>_> *)param_1;
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(pbVar1->_padding_ + 8))(pbVar1);
  }
  return this;
}

// bad_alloc @ 14f8e1b10

/* private: __cdecl std::bad_alloc::bad_alloc(char const * __ptr64 const) __ptr64 */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = vftable;
  *(char **)&this->field_0x8 = param_1;
  return this;
}

// exception @ 14f8e1b30

/* public: __cdecl std::exception::exception(char const * __ptr64 const,int) __ptr64 */

exception * __thiscall std::exception::exception(exception *this,char *param_1,int param_2)

{
  this->_padding_ = (longlong)vftable;
  *(undefined8 *)&(this->_Data)._DoFree = 0;
  (this->_Data)._What = param_1;
  return this;
}

// sentry @ 14f8e1b50

/* public: __cdecl std::basic_ostream<char,struct std::char_traits<char> >::sentry::sentry(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64) __ptr64 */

sentry * __thiscall
std::basic_ostream<char,std::char_traits<char>_>::sentry::sentry
          (sentry *this,basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  bool bVar1;
  bool bVar2;
  basic_streambuf<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  
  this->_padding_ = (longlong)param_1;
  pbVar3 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar3 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(pbVar3->_padding_ + 8))(pbVar3);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this_00 = std::basic_ios<char,std::char_traits<char>_>::tie
                        ((basic_ios<char,std::char_traits<char>_> *)
                         (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this_00 == (basic_ostream<char,std::char_traits<char>_> *)0x0) ||
       (this_00 == (basic_ostream<char,std::char_traits<char>_> *)param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this_00);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  this->_Ok = bVar2;
  return this;
}

// ~_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> @ 14f8e1bf0

/* public: __cdecl std::_Compressed_pair<class std::allocator<char>,class std::_String_val<struct
   std::_Simple_types<char> >,1>::~_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>(void) __ptr64 */

void __thiscall
std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>::
~_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
          (_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
           *this)

{
  return;
}

// ~_String_val<std::_Simple_types<char>_> @ 14f8e1c00

/* public: __cdecl std::_String_val<struct std::_Simple_types<char> >::~_String_val<struct
   std::_Simple_types<char> >(void) __ptr64 */

void __thiscall
std::_String_val<std::_Simple_types<char>_>::~_String_val<std::_Simple_types<char>_>
          (_String_val<std::_Simple_types<char>_> *this)

{
  return;
}

// ~CheckOpMessageBuilder @ 14f8e1c10

/* public: __cdecl
   absl::lts_20240722::log_internal::CheckOpMessageBuilder::~CheckOpMessageBuilder(void) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::CheckOpMessageBuilder::~CheckOpMessageBuilder
          (CheckOpMessageBuilder *this)

{
  undefined1 *this_00;
  int iVar1;
  
  this_00 = &(this->stream_).field_0x88;
  *(undefined ***)(this_00 + (longlong)*(int *)(*(longlong *)&this->stream_ + 4) + -0x88) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)&this->stream_ + 4);
  *(int *)(this_00 + (longlong)iVar1 + -0x8c) = iVar1 + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            (&(this->stream_)._Stringbuffer);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&(this->stream_)._Stringbuffer._padding_
            );
                    /* WARNING: Could not recover jumptable at 0x00014f8e1c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)this_00);
  return;
}

// ~_Bxty @ 14f8e1c80

/* public: __cdecl std::_String_val<struct std::_Simple_types<char> >::_Bxty::~_Bxty(void) __ptr64
    */

void __thiscall std::_String_val<std::_Simple_types<char>_>::_Bxty::~_Bxty(_Bxty *this)

{
  return;
}

// ~bad_alloc @ 14f8e1c90

/* public: virtual __cdecl std::bad_alloc::~bad_alloc(void) __ptr64 */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// operator___int64 @ 14f8e1cb0

/* public: __cdecl std::fpos<struct _Mbstatet>::operator __int64(void)const __ptr64 */

__int64 __thiscall std::fpos<_Mbstatet>::operator___int64(fpos<_Mbstatet> *this)

{
  return this->_Fpos + this->_Myoff;
}

// operator_bool @ 14f8e1cc0

/* public: __cdecl std::basic_ostream<char,struct std::char_traits<char> >::sentry::operator
   bool(void)const __ptr64 */

bool __thiscall
std::basic_ostream<char,std::char_traits<char>_>::sentry::operator_bool(sentry *this)

{
  return this->_Ok;
}

// operator() @ 14f8e1cd0

/* public: __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::assign(char const * __ptr64 const,unsigned
   __int64) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,unsigned __int64,char const *
   __ptr64 const)const __ptr64 */

void __thiscall
`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(char_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,char *param_1,__uint64 param_2,char *param_3)

{
  memcpy(param_1,param_3,param_2);
  param_1[param_2] = '\0';
  return;
}

// AbslFormatFlush @ 14f8e1d00

/* void __cdecl absl::lts_20240722::log_internal::detect_specialization::AbslFormatFlush(class
   absl::lts_20240722::log_internal::detect_specialization::StringifySink * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::log_internal::detect_specialization::AbslFormatFlush
          (StringifySink *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            (*(basic_ostream<char,std::char_traits<char>_> **)param_1,param_2->_Mydata,
             param_2->_Mysize);
  return;
}

// Append @ 14f8e1d20

/* public: void __cdecl
   absl::lts_20240722::log_internal::detect_specialization::StringifySink::Append(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::detect_specialization::StringifySink::Append
          (StringifySink *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            (*(basic_ostream<char,std::char_traits<char>_> **)this,param_1->_Mydata,param_1->_Mysize
            );
  return;
}

// Append @ 14f8e1d40

/* public: void __cdecl
   absl::lts_20240722::log_internal::detect_specialization::StringifySink::Append(unsigned
   __int64,char) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::detect_specialization::StringifySink::Append
          (StringifySink *this,__uint64 param_1,char param_2)

{
  for (; param_1 != 0; param_1 = param_1 - 1) {
    std::basic_ostream<char,std::char_traits<char>_>::put
              (*(basic_ostream<char,std::char_traits<char>_> **)this,param_2);
  }
  return;
}

// CheckstrcasecmpfalseImpl @ 14f8e1d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::CheckstrcasecmpfalseImpl(char const * __ptr64,char
   const * __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::CheckstrcasecmpfalseImpl
          (char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  undefined1 auStack_118 [32];
  char **local_f8;
  ulonglong *puStack_f0;
  char *local_e8;
  longlong lStack_e0;
  char *local_d8;
  longlong lStack_d0;
  char *local_c8;
  longlong lStack_c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  char *local_98;
  longlong lStack_90;
  char *local_88;
  undefined8 uStack_80;
  char *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if ((param_1 == param_2) ||
     (((param_1 != (char *)0x0 && (param_2 != (char *)0x0)) &&
      (iVar1 = _stricmp(param_1,param_2), iVar1 == 0)))) {
    pbVar2 = ::operator_new(0x20);
    if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      lStack_c0 = -1;
      if (param_2 == (char *)0x0) {
        local_e8 = (char *)0x0;
        lStack_e0 = 0;
      }
      else {
        lStack_e0 = -1;
        do {
          lStack_e0 = lStack_e0 + 1;
          local_e8 = param_2;
        } while (param_2[lStack_e0] != '\0');
      }
      if (param_1 == (char *)0x0) {
        local_d8 = (char *)0x0;
        lStack_d0 = 0;
      }
      else {
        lStack_d0 = -1;
        do {
          lStack_d0 = lStack_d0 + 1;
          local_d8 = param_1;
        } while (param_1[lStack_d0] != '\0');
      }
      local_b0 = " (";
      uStack_a8 = 2;
      if (param_3 == (char *)0x0) {
        local_c8 = (char *)0x0;
        lStack_c0 = 0;
      }
      else {
        do {
          lStack_c0 = lStack_c0 + 1;
          local_c8 = param_3;
        } while (param_3[lStack_c0] != '\0');
      }
      local_98 = local_c8;
      lStack_90 = lStack_c0;
      local_88 = " (";
      uStack_80 = 2;
      local_78 = local_d8;
      lStack_70 = lStack_d0;
      local_68 = 0x53531fb0;
      uStack_64 = 1;
      uStack_60 = 5;
      uStack_5c = 0;
      local_58 = local_e8;
      lStack_50 = lStack_e0;
      local_48 = 0x508995b0;
      uStack_44 = 1;
      uStack_40 = 1;
      uStack_3c = 0;
      local_f8 = &local_98;
      puStack_f0 = local_38;
      local_b8 = pbVar2;
      strings_internal::CatPieces(pbVar2,&local_f8);
      pbVar3 = pbVar2;
    }
  }
  else {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  return pbVar3;
}

// CheckstrcasecmptrueImpl @ 14f8e1f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::CheckstrcasecmptrueImpl(char const * __ptr64,char const
   * __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::CheckstrcasecmptrueImpl(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  undefined1 auStack_118 [32];
  char **local_f8;
  ulonglong *puStack_f0;
  char *local_e8;
  longlong lStack_e0;
  char *local_d8;
  longlong lStack_d0;
  char *local_c8;
  longlong lStack_c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  char *local_98;
  longlong lStack_90;
  char *local_88;
  undefined8 uStack_80;
  char *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_118;
  pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if ((param_1 == param_2) ||
     (((param_1 != (char *)0x0 && (param_2 != (char *)0x0)) &&
      (iVar1 = _stricmp(param_1,param_2), iVar1 == 0)))) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    pbVar2 = ::operator_new(0x20);
    if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      lStack_c0 = -1;
      if (param_2 == (char *)0x0) {
        local_e8 = (char *)0x0;
        lStack_e0 = 0;
      }
      else {
        lStack_e0 = -1;
        do {
          lStack_e0 = lStack_e0 + 1;
          local_e8 = param_2;
        } while (param_2[lStack_e0] != '\0');
      }
      if (param_1 == (char *)0x0) {
        local_d8 = (char *)0x0;
        lStack_d0 = 0;
      }
      else {
        lStack_d0 = -1;
        do {
          lStack_d0 = lStack_d0 + 1;
          local_d8 = param_1;
        } while (param_1[lStack_d0] != '\0');
      }
      local_b0 = " (";
      uStack_a8 = 2;
      if (param_3 == (char *)0x0) {
        local_c8 = (char *)0x0;
        lStack_c0 = 0;
      }
      else {
        do {
          lStack_c0 = lStack_c0 + 1;
          local_c8 = param_3;
        } while (param_3[lStack_c0] != '\0');
      }
      local_98 = local_c8;
      lStack_90 = lStack_c0;
      local_88 = " (";
      uStack_80 = 2;
      local_78 = local_d8;
      lStack_70 = lStack_d0;
      local_68 = 0x53531fb0;
      uStack_64 = 1;
      uStack_60 = 5;
      uStack_5c = 0;
      local_58 = local_e8;
      lStack_50 = lStack_e0;
      local_48 = 0x508995b0;
      uStack_44 = 1;
      uStack_40 = 1;
      uStack_3c = 0;
      local_f8 = &local_98;
      puStack_f0 = local_38;
      local_b8 = pbVar2;
      strings_internal::CatPieces(pbVar2,&local_f8);
      pbVar3 = pbVar2;
    }
  }
  return pbVar3;
}

// CheckstrcmpfalseImpl @ 14f8e2100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::CheckstrcmpfalseImpl(char const * __ptr64,char const *
   __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::CheckstrcmpfalseImpl(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStack_108 [32];
  char **local_e8;
  ulonglong *puStack_e0;
  char *local_d8;
  longlong lStack_d0;
  char *local_c8;
  longlong lStack_c0;
  char *local_b8;
  longlong lStack_b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a8;
  char *local_a0;
  undefined8 uStack_98;
  char *local_88;
  longlong lStack_80;
  char *local_78;
  undefined8 uStack_70;
  char *local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char *local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (param_1 == param_2) {
LAB_14f8e2170:
    pbVar4 = ::operator_new(0x20);
    if (pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      lStack_b0 = -1;
      if (param_2 == (char *)0x0) {
        local_d8 = (char *)0x0;
        lStack_d0 = 0;
      }
      else {
        lStack_d0 = -1;
        do {
          lStack_d0 = lStack_d0 + 1;
          local_d8 = param_2;
        } while (param_2[lStack_d0] != '\0');
      }
      if (param_1 == (char *)0x0) {
        local_c8 = (char *)0x0;
        lStack_c0 = 0;
      }
      else {
        lStack_c0 = -1;
        do {
          lStack_c0 = lStack_c0 + 1;
          local_c8 = param_1;
        } while (param_1[lStack_c0] != '\0');
      }
      local_a0 = " (";
      uStack_98 = 2;
      if (param_3 == (char *)0x0) {
        local_b8 = (char *)0x0;
        lStack_b0 = 0;
      }
      else {
        do {
          lStack_b0 = lStack_b0 + 1;
          local_b8 = param_3;
        } while (param_3[lStack_b0] != '\0');
      }
      local_88 = local_b8;
      lStack_80 = lStack_b0;
      local_78 = " (";
      uStack_70 = 2;
      local_68 = local_c8;
      lStack_60 = lStack_c0;
      local_58 = 0x53531fb0;
      uStack_54 = 1;
      uStack_50 = 5;
      uStack_4c = 0;
      local_48 = local_d8;
      lStack_40 = lStack_d0;
      local_38 = 0x508995b0;
      uStack_34 = 1;
      uStack_30 = 1;
      uStack_2c = 0;
      local_e8 = &local_88;
      puStack_e0 = local_28;
      local_a8 = pbVar4;
      strings_internal::CatPieces(pbVar4,&local_e8);
      pbVar5 = pbVar4;
    }
  }
  else {
    if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[(longlong)param_2 - (longlong)param_1];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) goto LAB_14f8e2170;
    }
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  return pbVar5;
}

// CheckstrcmptrueImpl @ 14f8e22d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::CheckstrcmptrueImpl(char const * __ptr64,char const *
   __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::CheckstrcmptrueImpl(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStack_108 [32];
  char **local_e8;
  ulonglong *puStack_e0;
  char *local_d8;
  longlong lStack_d0;
  char *local_c8;
  longlong lStack_c0;
  char *local_b8;
  longlong lStack_b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a8;
  char *local_a0;
  undefined8 uStack_98;
  char *local_88;
  longlong lStack_80;
  char *local_78;
  undefined8 uStack_70;
  char *local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char *local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (param_1 == param_2) {
LAB_14f8e247f:
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[(longlong)param_2 - (longlong)param_1];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) goto LAB_14f8e247f;
    }
    pbVar4 = ::operator_new(0x20);
    if (pbVar4 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      lStack_b0 = -1;
      if (param_2 == (char *)0x0) {
        local_d8 = (char *)0x0;
        lStack_d0 = 0;
      }
      else {
        lStack_d0 = -1;
        do {
          lStack_d0 = lStack_d0 + 1;
          local_d8 = param_2;
        } while (param_2[lStack_d0] != '\0');
      }
      if (param_1 == (char *)0x0) {
        local_c8 = (char *)0x0;
        lStack_c0 = 0;
      }
      else {
        lStack_c0 = -1;
        do {
          lStack_c0 = lStack_c0 + 1;
          local_c8 = param_1;
        } while (param_1[lStack_c0] != '\0');
      }
      local_a0 = " (";
      uStack_98 = 2;
      if (param_3 == (char *)0x0) {
        local_b8 = (char *)0x0;
        lStack_b0 = 0;
      }
      else {
        do {
          lStack_b0 = lStack_b0 + 1;
          local_b8 = param_3;
        } while (param_3[lStack_b0] != '\0');
      }
      local_88 = local_b8;
      lStack_80 = lStack_b0;
      local_78 = " (";
      uStack_70 = 2;
      local_68 = local_c8;
      lStack_60 = lStack_c0;
      local_58 = 0x53531fb0;
      uStack_54 = 1;
      uStack_50 = 5;
      uStack_4c = 0;
      local_48 = local_d8;
      lStack_40 = lStack_d0;
      local_38 = 0x508995b0;
      uStack_34 = 1;
      uStack_30 = 1;
      uStack_2c = 0;
      local_e8 = &local_88;
      puStack_e0 = local_28;
      local_a8 = pbVar4;
      strings_internal::CatPieces(pbVar4,&local_e8);
      pbVar5 = pbVar4;
    }
  }
  return pbVar5;
}

// ForVar1 @ 14f8e24b0

/* public: class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar1(void) __ptr64 */

basic_ostream<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar1(CheckOpMessageBuilder *this)

{
  return (basic_ostream<char,std::char_traits<char>_> *)this;
}

// ForVar2 @ 14f8e24c0

/* public: class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar2(void) __ptr64 */

basic_ostream<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar2(CheckOpMessageBuilder *this)

{
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)this," vs. ");
  return (basic_ostream<char,std::char_traits<char>_> *)this;
}

// Guard @ 14f8e24f0

/* public: static float const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<float>::Guard(float const & __ptr64) */

float * __cdecl absl::lts_20240722::log_internal::NullGuard<float>::Guard(float *param_1)

{
  return param_1;
}

// Guard @ 14f8e2500

/* public: static double const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<double>::Guard(double const & __ptr64) */

double * __cdecl absl::lts_20240722::log_internal::NullGuard<double>::Guard(double *param_1)

{
  return param_1;
}

// Guard @ 14f8e2510

/* public: static signed char const * __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<signed char const * __ptr64>::Guard(signed char const
   * __ptr64) */

char * __cdecl
absl::lts_20240722::log_internal::NullGuard<signed_char_const*___ptr64>::Guard(char *param_1)

{
  if (param_1 == (char *)0x0) {
    param_1 = "(null)";
  }
  return param_1;
}

// Guard @ 14f8e2530

/* public: static char const * __ptr64 __cdecl absl::lts_20240722::log_internal::NullGuard<char
   const * __ptr64>::Guard(char const * __ptr64) */

char * __cdecl
absl::lts_20240722::log_internal::NullGuard<char_const*___ptr64>::Guard(char *param_1)

{
  if (param_1 == (char *)0x0) {
    param_1 = "(null)";
  }
  return param_1;
}

// Guard @ 14f8e2550

/* public: static unsigned char const * __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<unsigned char const * __ptr64>::Guard(unsigned char
   const * __ptr64) */

uchar * __cdecl
absl::lts_20240722::log_internal::NullGuard<unsigned_char_const*___ptr64>::Guard(uchar *param_1)

{
  if (param_1 == (uchar *)0x0) {
    param_1 = (uchar *)"(null)";
  }
  return param_1;
}

// Guard @ 14f8e2570

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64 __cdecl absl::lts_20240722::log_internal::NullGuard<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::Guard(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
NullGuard<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Guard
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// Guard @ 14f8e2580

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64
   __cdecl absl::lts_20240722::log_internal::NullGuard<class std::basic_string_view<char,struct
   std::char_traits<char> > >::Guard(class std::basic_string_view<char,struct std::char_traits<char>
   > const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::log_internal::NullGuard<std::basic_string_view<char,std::char_traits<char>_>_>::
Guard(basic_string_view<char,struct_std::char_traits<char>_> *param_1)

{
  return (basic_string_view<char,std::char_traits<char>_> *)param_1;
}

// Guard @ 14f8e2590

/* public: static __int64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<__int64>::Guard(__int64 const & __ptr64) */

__int64 * __cdecl absl::lts_20240722::log_internal::NullGuard<__int64>::Guard(__int64 *param_1)

{
  return param_1;
}

// Guard @ 14f8e25a0

/* public: static unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<unsigned __int64>::Guard(unsigned __int64 const &
   __ptr64) */

__uint64 * __cdecl
absl::lts_20240722::log_internal::NullGuard<unsigned___int64>::Guard(__uint64 *param_1)

{
  return param_1;
}

// Guard @ 14f8e25b0

/* public: static bool const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<bool>::Guard(bool const & __ptr64) */

bool * __cdecl absl::lts_20240722::log_internal::NullGuard<bool>::Guard(bool *param_1)

{
  return param_1;
}

// MakeCheckOpValueString @ 14f8e25c0

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,signed char) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString
          (basic_ostream<char,std::char_traits<char>_> *param_1,char param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  if ((byte)(param_2 - 0x20U) < 0x5f) {
    pbVar1 = std::operator<<<std::char_traits<char>_>(param_1,"\'");
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_2);
    std::operator<<<std::char_traits<char>_>(pbVar1,"\'");
    return;
  }
  pbVar1 = std::operator<<<std::char_traits<char>_>(param_1,"signed char value ");
                    /* WARNING: Could not recover jumptable at 0x00014f8e2611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(int)param_2);
  return;
}

// MakeCheckOpValueString @ 14f8e2620

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,char) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString
          (basic_ostream<char,std::char_traits<char>_> *param_1,char param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  if ((byte)(param_2 - 0x20U) < 0x5f) {
    pbVar1 = std::operator<<<std::char_traits<char>_>(param_1,"\'");
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_2);
    std::operator<<<std::char_traits<char>_>(pbVar1,"\'");
    return;
  }
  pbVar1 = std::operator<<<std::char_traits<char>_>(param_1,"char value ");
                    /* WARNING: Could not recover jumptable at 0x00014f8e2671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(int)param_2);
  return;
}

// MakeCheckOpValueString @ 14f8e2680

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,unsigned char) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString
          (basic_ostream<char,std::char_traits<char>_> *param_1,uchar param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  if ((byte)(param_2 - 0x20) < 0x5f) {
    pbVar1 = std::operator<<<std::char_traits<char>_>(param_1,"\'");
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_2);
    std::operator<<<std::char_traits<char>_>(pbVar1,"\'");
    return;
  }
  pbVar1 = std::operator<<<std::char_traits<char>_>(param_1,"unsigned char value ");
                    /* WARNING: Could not recover jumptable at 0x00014f8e26d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,(uint)param_2);
  return;
}

// MakeCheckOpValueString @ 14f8e26e0

/* void __cdecl absl::lts_20240722::log_internal::MakeCheckOpValueString(class
   std::basic_ostream<char,struct std::char_traits<char> > & __ptr64,void const * __ptr64) */

void __cdecl
absl::lts_20240722::log_internal::MakeCheckOpValueString
          (basic_ostream<char,std::char_traits<char>_> *param_1,void *param_2)

{
  if (param_2 == (void *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_1,"(null)");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f8e26f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,param_2);
  return;
}

// NewString @ 14f8e2700

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl absl::lts_20240722::log_internal::CheckOpMessageBuilder::NewString(void) __ptr64
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::log_internal::CheckOpMessageBuilder::NewString(CheckOpMessageBuilder *this)

{
  char **ppcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  char *pcVar2;
  char *pcVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulong64 uVar5;
  basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  char **ppcVar6;
  char *local_30;
  char *local_28;
  ulong64 uStack_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_10;
  
  std::operator<<<std::char_traits<char>_>((basic_ostream<char,std::char_traits<char>_> *)this,")");
  this_00 = ::operator_new(0x20);
  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    this_01 = &(this->stream_)._Stringbuffer;
    (this_00->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(this_00->_Mypair)._Myval2._Bx + 8) = 0;
    (this_00->_Mypair)._Myval2._Mysize = 0;
    (this_00->_Mypair)._Myval2._Myres = 0xf;
    (this_00->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_10 = this_00;
    if ((((byte)(this->stream_)._Stringbuffer._Mystate & 0x22) == 2) ||
       (pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                           ((basic_streambuf<char,std::char_traits<char>_> *)this_01),
       pcVar2 == (char *)0x0)) {
      uVar5 = uStack_20;
      pcVar2 = local_28;
      if ((((this->stream_)._Stringbuffer._Mystate & 4) == 0) &&
         (pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::gptr
                             ((basic_streambuf<char,std::char_traits<char>_> *)this_01),
         uVar5 = uStack_20, pcVar2 = local_28, pcVar3 != (char *)0x0)) {
        pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::eback
                           ((basic_streambuf<char,std::char_traits<char>_> *)this_01);
        pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::egptr
                           ((basic_streambuf<char,std::char_traits<char>_> *)this_01);
        uVar5 = (longlong)pcVar3 - (longlong)pcVar2;
      }
    }
    else {
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pbase
                         ((basic_streambuf<char,std::char_traits<char>_> *)this_01);
      local_30 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                           ((basic_streambuf<char,std::char_traits<char>_> *)this_01);
      ppcVar1 = &(this->stream_)._Stringbuffer._Seekhigh;
      ppcVar6 = &local_30;
      if (local_30 < *ppcVar1) {
        ppcVar6 = ppcVar1;
      }
      pcVar3 = *ppcVar6;
      std::basic_streambuf<char,std::char_traits<char>_>::epptr
                ((basic_streambuf<char,std::char_traits<char>_> *)this_01);
      uVar5 = (longlong)pcVar3 - (longlong)pcVar2;
    }
    pbVar4 = this_00;
    if (pcVar2 != (char *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (this_00,pcVar2,uVar5);
    }
  }
  return pbVar4;
}

// NullSafeStringView @ 14f8e2830

/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::NullSafeStringView(char const * __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::NullSafeStringView
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,char *param_1)

{
  ulong64 uVar1;
  char *local_18;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
    local_18 = (char *)0x0;
  }
  else {
    uVar1 = 0xffffffffffffffff;
    do {
      uVar1 = uVar1 + 1;
      local_18 = param_1;
    } while (param_1[uVar1] != '\0');
  }
  __return_storage_ptr__->_Mydata = local_18;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// Piece @ 14f8e2880

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::AlphaNum::Piece(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::AlphaNum::Piece
          (AlphaNum *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  uVar1 = (this->piece_)._Mysize;
  __return_storage_ptr__->_Mydata = (this->piece_)._Mydata;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// _Activate_SSO_buffer @ 14f8e2890

/* public: void __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Activate_SSO_buffer(void) __ptr64 */

void __thiscall
std::_String_val<std::_Simple_types<char>_>::_Activate_SSO_buffer
          (_String_val<std::_Simple_types<char>_> *this)

{
  return;
}

// _Adjust_manually_vector_aligned @ 14f8e28a0

/* void __cdecl std::_Adjust_manually_vector_aligned(void * __ptr64 & __ptr64,unsigned __int64 &
   __ptr64) */

void __cdecl std::_Adjust_manually_vector_aligned(void **param_1,__uint64 *param_2)

{
  void *pvVar1;
  
  *param_2 = *param_2 + 0x27;
  pvVar1 = *(void **)((longlong)*param_1 + -8);
  if ((ulonglong)((longlong)*param_1 + (-8 - (longlong)pvVar1)) < 0x20) {
    *param_1 = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}

// _Alloc_proxy @ 14f8e28e0

/* public: void __cdecl std::_Container_base0::_Alloc_proxy(struct std::_Fake_allocator const &
   __ptr64) __ptr64 */

void __thiscall std::_Container_base0::_Alloc_proxy(_Container_base0 *this,_Fake_allocator *param_1)

{
  return;
}

// _Allocate @ 14f8e28f0

/* public: static void * __ptr64 __cdecl std::_Default_allocate_traits::_Allocate(unsigned __int64)
    */

void * __cdecl std::_Default_allocate_traits::_Allocate(__uint64 param_1)

{
  void *pvVar1;
  
  pvVar1 = ::operator_new(param_1);
  return pvVar1;
}

// _Calculate_growth @ 14f8e2900

/* private: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (this->_Mypair)._Myval2._Myres;
  uVar2 = param_1 | 0xf;
  if ((uVar2 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) {
    uVar1 = (uVar1 >> 1) + uVar1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0x7fffffffffffffff;
}

// _Calculate_growth @ 14f8e2950

/* private: static unsigned __int64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::_Calculate_growth(unsigned __int64,unsigned
   __int64,unsigned __int64) */

__uint64 __cdecl
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
          (__uint64 param_1,__uint64 param_2,__uint64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 | 0xf;
  if ((uVar2 <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) {
    uVar1 = (param_2 >> 1) + param_2;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return param_3;
}

// _Get_buffer_view @ 14f8e2990

/* public: struct std::basic_stringbuf<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Buffer_view __cdecl std::basic_stringbuf<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Get_buffer_view(void)const __ptr64 */

void __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Get_buffer_view
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 *in_RDX;
  
  *in_RDX = 0;
  in_RDX[1] = 0;
  in_RDX[2] = 0;
  if ((((byte)this->_Mystate & 0x22) == 2) ||
     (pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)this),
     pcVar1 == (char *)0x0)) {
    if ((this->_Mystate & 4) != 0) {
      return;
    }
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    if (pcVar1 == (char *)0x0) {
      return;
    }
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::eback
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    *in_RDX = pcVar1;
    pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::egptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    lVar3 = (longlong)pcVar2 - (longlong)pcVar1;
    in_RDX[1] = lVar3;
  }
  else {
    pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pbase
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    *in_RDX = pcVar2;
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    if (pcVar1 < this->_Seekhigh) {
      pcVar1 = this->_Seekhigh;
    }
    in_RDX[1] = (longlong)pcVar1 - (longlong)pcVar2;
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::epptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    lVar3 = (longlong)pcVar1 - (longlong)pcVar2;
  }
  in_RDX[2] = lVar3;
  return;
}

// _Get_first @ 14f8e2a50

/* public: class std::allocator<char> & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char>
   >,1>::_Get_first(void) __ptr64 */

allocator<char> * __thiscall
std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>::
_Get_first(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
           *this)

{
  return (allocator<char> *)this;
}

// _Get_first @ 14f8e2a60

/* public: class std::allocator<char> const & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char>
   >,1>::_Get_first(void)const __ptr64 */

allocator<char> * __thiscall
std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>::
_Get_first(_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
           *this)

{
  return (allocator<char> *)this;
}

// _Getal @ 14f8e2a70

/* private: class std::allocator<char> & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::_Getal(void) __ptr64 */

allocator<char> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Getal
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  return (allocator<char> *)this;
}

// _Getal @ 14f8e2a80

/* private: class std::allocator<char> const & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::_Getal(void)const __ptr64 */

allocator<char> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Getal
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  return (allocator<char> *)this;
}

// _Getstate @ 14f8e2a90

/* private: static int __cdecl std::basic_stringbuf<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Getstate(int) */

int __cdecl
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Getstate(int param_1)

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

// _Large_mode_engaged @ 14f8e2ad0

/* public: bool __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Large_mode_engaged(void)const __ptr64 */

bool __thiscall
std::_String_val<std::_Simple_types<char>_>::_Large_mode_engaged
          (_String_val<std::_Simple_types<char>_> *this)

{
  return 0xf < this->_Myres;
}

// _Memcpy_val_from @ 14f8e2ae0

/* private: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Memcpy_val_from(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Memcpy_val_from
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  (this->_Mypair)._Myval2._Bx._Ptr = *(char **)param_1;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(param_1 + 0x18);
  (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
  (this->_Mypair)._Myval2._Myres = uVar2;
  return;
}

// _Myptr @ 14f8e2b00

/* public: char * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char> >::_Myptr(void)
   __ptr64 */

char * __thiscall
std::_String_val<std::_Simple_types<char>_>::_Myptr(_String_val<std::_Simple_types<char>_> *this)

{
  if (0xf < this->_Myres) {
    return (this->_Bx)._Ptr;
  }
  return (char *)this;
}

// _Orphan_all @ 14f8e2b20

/* public: void __cdecl std::_Container_base0::_Orphan_all(void) __ptr64 */

void __thiscall std::_Container_base0::_Orphan_all(_Container_base0 *this)

{
  return;
}

// _Swap_proxy_and_iterators @ 14f8e2b30

/* private: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Swap_proxy_and_iterators(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Swap_proxy_and_iterators
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  return;
}

// _Swap_proxy_and_iterators @ 14f8e2b40

/* public: void __cdecl std::_Container_base0::_Swap_proxy_and_iterators(struct
   std::_Container_base0 & __ptr64) __ptr64 */

void __thiscall
std::_Container_base0::_Swap_proxy_and_iterators(_Container_base0 *this,_Container_base0 *param_1)

{
  return;
}

// _Take_contents @ 14f8e2b50

/* private: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Take_contents(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Take_contents
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  (this->_Mypair)._Myval2._Bx._Ptr = *(char **)param_1;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = uVar1;
  uVar2 = *(ulong64 *)(param_1 + 0x18);
  (this->_Mypair)._Myval2._Mysize = *(ulong64 *)(param_1 + 0x10);
  (this->_Mypair)._Myval2._Myres = uVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  return;
}

// _Tidy_init @ 14f8e2b80

/* private: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Tidy_init(void) __ptr64 */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_init
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0xf;
  (this->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return;
}

// allocate @ 14f8e2ba0

/* public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64 */

char * __thiscall std::allocator<char>::allocate(allocator<char> *this,__uint64 param_1)

{
  void *pvVar1;
  char *pcVar2;
  
  if (param_1 < 0x1000) {
    if (param_1 != 0) {
      pcVar2 = ::operator_new(param_1);
      return pcVar2;
    }
    return (char *)0x0;
  }
  if (param_1 < param_1 + 0x27) {
    pvVar1 = ::operator_new(param_1 + 0x27);
    if (pvVar1 != (void *)0x0) {
      pcVar2 = (char *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
      *(void **)(pcVar2 + -8) = pvVar1;
      return pcVar2;
    }
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// assign @ 14f8e2c00

/* public: static void __cdecl std::_Char_traits<char,int>::assign(char & __ptr64,char const &
   __ptr64) */

void __cdecl std::_Char_traits<char,int>::assign(char *param_1,char *param_2)

{
  *param_1 = *param_2;
  return;
}

// assign @ 14f8e2c10

/* public: static void __cdecl std::_Narrow_char_traits<char,int>::assign(char & __ptr64,char const
   & __ptr64) */

void __cdecl std::_Narrow_char_traits<char,int>::assign(char *param_1,char *param_2)

{
  *param_1 = *param_2;
  return;
}

// copy @ 14f8e2c20

/* public: static char * __ptr64 __cdecl std::_Char_traits<char,int>::copy(char * __ptr64 const,char
   const * __ptr64 const,unsigned __int64) */

char * __cdecl std::_Char_traits<char,int>::copy(char *param_1,char *param_2,__uint64 param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_1;
}

// data @ 14f8e2c40

/* public: signed char const * __ptr64 __cdecl std::array<signed char,7>::data(void)const __ptr64 */

char * __thiscall std::array<signed_char,7>::data(array<signed_char,7> *this)

{
  return (char *)this;
}

// data @ 14f8e2c50

/* public: char const * __ptr64 __cdecl std::array<char,7>::data(void)const __ptr64 */

char * __thiscall std::array<char,7>::data(array<char,7> *this)

{
  return (char *)this;
}

// data @ 14f8e2c60

/* public: unsigned char const * __ptr64 __cdecl std::array<unsigned char,7>::data(void)const
   __ptr64 */

uchar * __thiscall std::array<unsigned_char,7>::data(array<unsigned_char,7> *this)

{
  return (uchar *)this;
}

// data @ 14f8e2c70

/* public: char const * __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::data(void)const __ptr64 */

char * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::data
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    return (this->_Mypair)._Myval2._Bx._Ptr;
  }
  return (char *)this;
}

// data @ 14f8e2c90

/* public: char const * __ptr64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::data(void)const __ptr64 */

char * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::data
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mydata;
}

// eof @ 14f8e2ca0

/* public: static int __cdecl std::_Narrow_char_traits<char,int>::eof(void) */

int __cdecl std::_Narrow_char_traits<char,int>::eof(void)

{
  return -1;
}

// eq @ 14f8e2cb0

/* public: static bool __cdecl std::_Narrow_char_traits<char,int>::eq(char,char) */

bool __cdecl std::_Narrow_char_traits<char,int>::eq(char param_1,char param_2)

{
  return param_1 == param_2;
}

// eq_int_type @ 14f8e2cc0

/* public: static bool __cdecl std::_Narrow_char_traits<char,int>::eq_int_type(int,int) */

bool __cdecl std::_Narrow_char_traits<char,int>::eq_int_type(int param_1,int param_2)

{
  return param_1 == param_2;
}

// length @ 14f8e2cd0

/* public: static unsigned __int64 __cdecl std::_Narrow_char_traits<char,int>::length(char const *
   __ptr64 const) */

__uint64 __cdecl std::_Narrow_char_traits<char,int>::length(char *param_1)

{
  __uint64 _Var1;
  
  _Var1 = 0xffffffffffffffff;
  do {
    _Var1 = _Var1 + 1;
  } while (param_1[_Var1] != '\0');
  return _Var1;
}

// max @ 14f8e2cf0

/* public: static __int64 __cdecl std::numeric_limits<__int64>::max(void) */

__int64 __cdecl std::numeric_limits<__int64>::max(void)

{
  return 0x7fffffffffffffff;
}

// max_size @ 14f8e2d10

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::max_size(class std::allocator<char> const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<char>_>::max_size(allocator<char> *param_1)

{
  return 0xffffffffffffffff;
}

// max_size @ 14f8e2d20

/* public: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  return 0x7fffffffffffffff;
}

// move @ 14f8e2d40

/* public: static char * __ptr64 __cdecl std::_Char_traits<char,int>::move(char * __ptr64 const,char
   const * __ptr64 const,unsigned __int64) */

char * __cdecl std::_Char_traits<char,int>::move(char *param_1,char *param_2,__uint64 param_3)

{
  memmove(param_1,param_2,param_3);
  return param_1;
}

// not_eof @ 14f8e2d60

/* public: static int __cdecl std::_Narrow_char_traits<char,int>::not_eof(int) */

int __cdecl std::_Narrow_char_traits<char,int>::not_eof(int param_1)

{
  if (param_1 == -1) {
    param_1 = 0;
  }
  return param_1;
}

// pointer_to @ 14f8e2d80

/* public: static char * __ptr64 __cdecl std::pointer_traits<char * __ptr64>::pointer_to(char &
   __ptr64) */

char * __cdecl std::pointer_traits<char*___ptr64>::pointer_to(char *param_1)

{
  return param_1;
}

// size @ 14f8e2d90

/* public: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::size(void)const __ptr64 */

__uint64 __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::size
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  return (this->_Mypair)._Myval2._Mysize;
}

// size @ 14f8e2da0

/* public: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::size(void)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::size
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mysize;
}

// str @ 14f8e2db0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl std::basic_stringbuf<char,struct std::char_traits<char>,class std::allocator<char>
   >::str(void)const __ptr64&  */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  char *pcVar1;
  char *pcVar2;
  ulong64 uStack_18;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  uStack_18 = 0;
  if (((byte)this->_Mystate & 0x22) != 2) {
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pbase
                         ((basic_streambuf<char,std::char_traits<char>_> *)this);
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)this);
      if (pcVar2 < this->_Seekhigh) {
        pcVar2 = this->_Seekhigh;
      }
      uStack_18 = (longlong)pcVar2 - (longlong)pcVar1;
      std::basic_streambuf<char,std::char_traits<char>_>::epptr
                ((basic_streambuf<char,std::char_traits<char>_> *)this);
      goto LAB_14f8e2e74;
    }
  }
  if ((this->_Mystate & 4) == 0) {
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::eback
                         ((basic_streambuf<char,std::char_traits<char>_> *)this);
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::egptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)this);
      uStack_18 = (longlong)pcVar2 - (longlong)pcVar1;
      goto LAB_14f8e2e74;
    }
  }
  pcVar1 = (char *)0x0;
LAB_14f8e2e74:
  if (pcVar1 != (char *)0x0) {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,uStack_18);
  }
  return __return_storage_ptr__;
}

// to_char_type @ 14f8e2eb0

/* public: static char __cdecl std::_Narrow_char_traits<char,int>::to_char_type(int) */

char __cdecl std::_Narrow_char_traits<char,int>::to_char_type(int param_1)

{
  return (char)param_1;
}

// to_int_type @ 14f8e2ec0

/* public: static int __cdecl std::_Narrow_char_traits<char,int>::to_int_type(char) */

int __cdecl std::_Narrow_char_traits<char,int>::to_int_type(char param_1)

{
  return (int)(byte)param_1;
}

// FUN_150292cd0 @ 150292cd0

void FUN_150292cd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0x88));
  }
  return;
}

// FUN_150292d50 @ 150292d50

void FUN_150292d50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x58) + 0x88));
  }
  return;
}

// FUN_150292dd0 @ 150292dd0

void FUN_150292dd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60),0x20);
  return;
}

// FUN_150292e00 @ 150292e00

void FUN_150292e00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60),0x20);
  return;
}

// FUN_150292e30 @ 150292e30

void FUN_150292e30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60),0x20);
  return;
}

// FUN_150292e60 @ 150292e60

void FUN_150292e60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60),0x20);
  return;
}

// FUN_150292e90 @ 150292e90

void FUN_150292e90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48),0x20);
  return;
}

// FUN_150292ec0 @ 150292ec0

void FUN_150292ec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48)
              );
  }
  return;
}

// FUN_150292ef0 @ 150292ef0

void FUN_150292ef0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x58)
              );
  }
  return;
}

