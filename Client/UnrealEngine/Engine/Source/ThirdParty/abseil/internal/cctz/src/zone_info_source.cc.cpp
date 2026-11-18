// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 4

// FUN_14f91a040 @ 14f91a040

undefined8 FUN_14f91a040(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 extraout_RAX;
  
  plVar1 = *(longlong **)(param_3 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
    return param_1;
  }
  std::_Xbad_function_call();
  return extraout_RAX;
}

// ~ZoneInfoSource @ 14f91a080

/* public: virtual __cdecl
   absl::lts_20240722::time_internal::cctz::ZoneInfoSource::~ZoneInfoSource(void) __ptr64 */

void __thiscall
absl::lts_20240722::time_internal::cctz::ZoneInfoSource::~ZoneInfoSource(ZoneInfoSource *this)

{
  *(undefined ***)this = vftable;
  return;
}

// operator() @ 14f91a0a0

/* public: class std::unique_ptr<class
   absl::lts_20240722::time_internal::cctz::ZoneInfoSource,struct std::default_delete<class
   absl::lts_20240722::time_internal::cctz::ZoneInfoSource> > __cdecl std::_Func_class<class
   std::unique_ptr<class absl::lts_20240722::time_internal::cctz::ZoneInfoSource,struct
   std::default_delete<class absl::lts_20240722::time_internal::cctz::ZoneInfoSource> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64>::operator()(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const & __ptr64)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::
_Func_class<std::unique_ptr<absl::lts_20240722::time_internal::cctz::ZoneInfoSource,std::default_delete<absl::lts_20240722::time_internal::cctz::ZoneInfoSource>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
::operator()(_Func_class<std::unique_ptr<absl::lts_20240722::time_internal::cctz::ZoneInfoSource,std::default_delete<absl::lts_20240722::time_internal::cctz::ZoneInfoSource>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
             *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *extraout_RAX;
  
  if (*(longlong **)(this + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x38) + 0x10))();
    return param_1;
  }
  _Xbad_function_call();
  return extraout_RAX;
}

// Version @ 14f91a0d0

/* public: virtual class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __cdecl
   absl::lts_20240722::time_internal::cctz::ZoneInfoSource::Version(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::time_internal::cctz::ZoneInfoSource::Version
          (ZoneInfoSource *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  return __return_storage_ptr__;
}

