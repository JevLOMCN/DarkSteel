// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToString @ 147dc52f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Math::TIntVector2<int>::ToString(TIntVector2<int> *this,FString *__return_storage_ptr__)

{
  TStringBuilderBase<wchar_t> *this_00;
  wchar_t *pwVar1;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_118,2,"X=",2);
  this_00 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"%d");
  if (this_00->End < this_00->CurPos + 3) {
    TStringBuilderBase<wchar_t>::Extend(this_00,3);
  }
  pwVar1 = FGenericPlatformString::Convert<char,wchar_t>(this_00->CurPos,3," Y=",3);
  this_00->CurPos = pwVar1;
  TStringBuilderBase<wchar_t>::AppendfImpl(this_00,L"%d");
  ::FString::AppendChars
            (__return_storage_ptr__,local_138.Base,
             (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

