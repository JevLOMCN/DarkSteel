// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 2

// Append @ 1501da280

/* public: void __cdecl absl::lts_20240722::strings_internal::StringifySink::Append(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::StringifySink::Append
          (StringifySink *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  longlong lVar1;
  ulong64 _Size;
  char *_Src;
  <lambda_1> local_res8;
  
  lVar1 = *(longlong *)(this + 0x10);
  _Size = param_1->_Mysize;
  _Src = param_1->_Mydata;
  if (_Size <= *(ulonglong *)(this + 0x18) - lVar1) {
    *(ulong64 *)(this + 0x10) = _Size + lVar1;
    if (0xf < *(ulonglong *)(this + 0x18)) {
      this = *(StringifySink **)this;
    }
    memmove(this + lVar1,_Src,_Size);
    this[lVar1 + _Size] = (StringifySink)0x0;
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,_Size,
             local_res8,_Src,_Size);
  return;
}

// Append @ 1501da310

/* public: void __cdecl absl::lts_20240722::strings_internal::StringifySink::Append(unsigned
   __int64,char) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::StringifySink::Append
          (StringifySink *this,__uint64 param_1,char param_2)

{
  longlong lVar1;
  <lambda_1> local_res8;
  
  lVar1 = *(longlong *)(this + 0x10);
  if (param_1 <= *(ulonglong *)(this + 0x18) - lVar1) {
    *(__uint64 *)(this + 0x10) = lVar1 + param_1;
    if (0xf < *(ulonglong *)(this + 0x18)) {
      this = *(StringifySink **)this;
    }
    memset(this + lVar1,(int)param_2,param_1);
    (this + lVar1)[param_1] = (StringifySink)0x0;
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,param_1,
             local_res8,param_1,param_2);
  return;
}

