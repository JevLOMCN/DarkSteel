// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// Equals<TStringBuilderWithBuffer<wchar_t,256>_> @ 141e718b0

bool __thiscall
TStringView<wchar_t>::Equals<TStringBuilderWithBuffer<wchar_t,256>_>
          (TStringView<wchar_t> *this,TStringBuilderWithBuffer<wchar_t,256> *param_1,Type param_2)

{
  int iVar1;
  wchar_t *_Str2;
  int iVar2;
  int iVar3;
  
  _Str2 = (wchar_t *)param_1->_padding_;
  iVar1 = this->Size;
  iVar3 = (int)(param_1->_padding_ - (longlong)_Str2 >> 1);
  if (iVar1 == iVar3) {
    if ((iVar1 != 0) && (iVar3 != 0)) {
      if (param_2 == CaseSensitive) {
        iVar2 = wcsncmp(this->DataPtr,_Str2,(longlong)iVar3);
      }
      else {
        iVar2 = FGenericPlatformStricmp::Strnicmp(this->DataPtr,_Str2,(longlong)iVar3);
      }
      if (iVar2 != 0) {
        return false;
      }
    }
    if (iVar1 == iVar3) {
      return true;
    }
  }
  return false;
}

// Equals<TStringBuilderWithBuffer<wchar_t,16>_> @ 1422ca310

bool __thiscall
TStringView<wchar_t>::Equals<TStringBuilderWithBuffer<wchar_t,16>_>
          (TStringView<wchar_t> *this,TStringBuilderWithBuffer<wchar_t,16> *param_1,Type param_2)

{
  int iVar1;
  wchar_t *_Str2;
  int iVar2;
  int iVar3;
  
  _Str2 = (wchar_t *)param_1->_padding_;
  iVar1 = this->Size;
  iVar3 = (int)(param_1->_padding_ - (longlong)_Str2 >> 1);
  if (iVar1 == iVar3) {
    if ((iVar1 != 0) && (iVar3 != 0)) {
      if (param_2 == CaseSensitive) {
        iVar2 = wcsncmp(this->DataPtr,_Str2,(longlong)iVar3);
      }
      else {
        iVar2 = FGenericPlatformStricmp::Strnicmp(this->DataPtr,_Str2,(longlong)iVar3);
      }
      if (iVar2 != 0) {
        return false;
      }
    }
    if (iVar1 == iVar3) {
      return true;
    }
  }
  return false;
}

// Equals<TStringBuilderWithBuffer<wchar_t,128>_> @ 1422ca380

bool __thiscall
TStringView<wchar_t>::Equals<TStringBuilderWithBuffer<wchar_t,128>_>
          (TStringView<wchar_t> *this,TStringBuilderWithBuffer<wchar_t,128> *param_1,Type param_2)

{
  int iVar1;
  wchar_t *_Str2;
  int iVar2;
  int iVar3;
  
  _Str2 = (wchar_t *)param_1->_padding_;
  iVar1 = this->Size;
  iVar3 = (int)(param_1->_padding_ - (longlong)_Str2 >> 1);
  if (iVar1 == iVar3) {
    if ((iVar1 != 0) && (iVar3 != 0)) {
      if (param_2 == CaseSensitive) {
        iVar2 = wcsncmp(this->DataPtr,_Str2,(longlong)iVar3);
      }
      else {
        iVar2 = FGenericPlatformStricmp::Strnicmp(this->DataPtr,_Str2,(longlong)iVar3);
      }
      if (iVar2 != 0) {
        return false;
      }
    }
    if (iVar1 == iVar3) {
      return true;
    }
  }
  return false;
}

