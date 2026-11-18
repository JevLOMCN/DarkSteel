// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 3

// FlagsToString @ 1501e4390

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::str_format_internal::FlagsToString(enum
   absl::lts_20240722::str_format_internal::Flags) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::str_format_internal::FlagsToString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Flags param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  char *pcVar3;
  ulong64 uVar4;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  pcVar3 = "";
  pcVar1 = "";
  if ((param_1 & kLeft) != kBasic) {
    pcVar1 = "-";
  }
  uVar2 = 0xffffffffffffffff;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (pcVar1[uVar4] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (__return_storage_ptr__,pcVar1,uVar4);
  pcVar1 = "";
  if ((param_1 & kShowPos) != kBasic) {
    pcVar1 = "+";
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (pcVar1[uVar4] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (__return_storage_ptr__,pcVar1,uVar4);
  pcVar1 = "";
  if ((param_1 & kSignCol) != kBasic) {
    pcVar1 = " ";
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (pcVar1[uVar4] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (__return_storage_ptr__,pcVar1,uVar4);
  pcVar1 = "";
  if ((param_1 & kAlt) != kBasic) {
    pcVar1 = "#";
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (pcVar1[uVar4] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (__return_storage_ptr__,pcVar1,uVar4);
  if ((param_1 & kZero) != kBasic) {
    pcVar3 = "0";
  }
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar3[uVar2] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (__return_storage_ptr__,pcVar3,uVar2);
  return __return_storage_ptr__;
}

// PutPaddedString @ 1501e44e0

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString(class
   std::basic_string_view<char,struct std::char_traits<char> >,int,int,bool) __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString
          (FormatSinkImpl *this,basic_string_view<char,std::char_traits<char>_> *param_1,int param_2
          ,int param_3,bool param_4)

{
  FormatSinkImpl *_Src;
  void *_Dst;
  FormatSinkImpl *pFVar1;
  FormatSinkImpl *pFVar2;
  FormatSinkImpl *_Size;
  FormatSinkImpl *local_18;
  FormatSinkImpl *local_10;
  
  _Size = (FormatSinkImpl *)param_1->_Mysize;
  pFVar1 = (FormatSinkImpl *)(longlong)param_2;
  if (param_2 < 0) {
    pFVar1 = (FormatSinkImpl *)0x0;
  }
  if ((-1 < param_3) && ((FormatSinkImpl *)(longlong)param_3 < _Size)) {
    _Size = (FormatSinkImpl *)(longlong)param_3;
  }
  _Src = (FormatSinkImpl *)param_1->_Mydata;
  pFVar2 = pFVar1 + -(longlong)_Size;
  if (pFVar1 <= _Size) {
    pFVar2 = (FormatSinkImpl *)0x0;
  }
  if (!param_4) {
    Append(this,(__uint64)pFVar2,' ');
  }
  if (_Size != (FormatSinkImpl *)0x0) {
    _Dst = *(void **)(this + 0x18);
    *(FormatSinkImpl **)(this + 0x10) = _Size + *(longlong *)(this + 0x10);
    if (_Size < this + (0x420 - (longlong)_Dst)) {
      memcpy(_Dst,_Src,(size_t)_Size);
      *(FormatSinkImpl **)(this + 0x18) = _Size + *(longlong *)(this + 0x18);
    }
    else {
      local_10 = (FormatSinkImpl *)((longlong)_Dst + (-0x20 - (longlong)this));
      local_18 = this + 0x20;
      (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
      *(FormatSinkImpl **)(this + 0x18) = this + 0x20;
      local_18 = _Src;
      local_10 = _Size;
      (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
    }
  }
  if (param_4) {
    Append(this,(__uint64)pFVar2,' ');
  }
  return true;
}

// FUN_150330860 @ 150330860

void FUN_150330860(undefined8 param_1,longlong param_2)

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

