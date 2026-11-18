// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 4

// FUN_1501ea6c0 @ 1501ea6c0

int * FUN_1501ea6c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = _errno();
  *param_1 = *piVar1;
  piVar1 = _errno();
  *piVar1 = 0;
  return param_1;
}

// FUN_1501ea6f0 @ 1501ea6f0

void FUN_1501ea6f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = _errno();
  if (*piVar2 == 0) {
    iVar1 = *param_1;
    piVar2 = _errno();
    *piVar2 = iVar1;
  }
  return;
}

// Write @ 1501ea720

/* public: void __cdecl absl::lts_20240722::str_format_internal::BufferRawSink::Write(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::BufferRawSink::Write
          (BufferRawSink *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulonglong uVar1;
  ulonglong _Size;
  
  uVar1 = param_1->_Mysize;
  _Size = uVar1;
  if (*(ulonglong *)(this + 8) < uVar1) {
    _Size = *(size_t *)(this + 8);
  }
  memcpy(*(void **)this,param_1->_Mydata,_Size);
  *(ulonglong *)this = *(longlong *)this + _Size;
  *(ulonglong *)(this + 8) = *(longlong *)(this + 8) - _Size;
  *(ulonglong *)(this + 0x10) = *(longlong *)(this + 0x10) + uVar1;
  return;
}

// Write @ 1501ea780

/* public: void __cdecl absl::lts_20240722::str_format_internal::FILERawSink::Write(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FILERawSink::Write
          (FILERawSink *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  char *_Str;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  size_t _Count;
  
  _Count = param_1->_Mysize;
  do {
    if ((_Count == 0) || (*(int *)(this + 8) != 0)) {
      return;
    }
    piVar3 = _errno();
    iVar1 = *piVar3;
    piVar3 = _errno();
    _Str = param_1->_Mydata;
    *piVar3 = 0;
    sVar4 = fwrite(_Str,1,_Count,*(FILE **)this);
    if (sVar4 == 0) {
      piVar3 = _errno();
      if (*piVar3 != 4) {
        piVar3 = _errno();
        if (*piVar3 == 0) {
          iVar2 = ferror(*(FILE **)this);
          if (iVar2 == 0) {
            piVar3 = _errno();
            iVar2 = *piVar3;
            goto joined_r0x0001501ea852;
          }
          *(undefined4 *)(this + 8) = 9;
        }
        else {
          piVar3 = _errno();
          *(int *)(this + 8) = *piVar3;
        }
        goto LAB_1501ea83b;
      }
      piVar3 = _errno();
      iVar2 = *piVar3;
    }
    else {
      *(size_t *)(this + 0x10) = *(longlong *)(this + 0x10) + sVar4;
      _Count = _Count - sVar4;
      param_1->_Mydata = _Str + sVar4;
      param_1->_Mysize = _Count;
LAB_1501ea83b:
      piVar3 = _errno();
      iVar2 = *piVar3;
    }
joined_r0x0001501ea852:
    if (iVar2 == 0) {
      piVar3 = _errno();
      *piVar3 = iVar1;
    }
  } while( true );
}

