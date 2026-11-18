// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Write<char_const_*> @ 141852dc0

void __cdecl UE::Logging::Private::FLogField::Write<char_const_*>(FCbWriter *param_1,void *param_2)

{
  uchar *_Str;
  size_t sVar1;
  TStringView<char8_t> local_18;
  
  _Str = *(uchar **)param_2;
  local_18.Size = 0;
  if (_Str != (uchar *)0x0) {
    sVar1 = strlen((char *)_Str);
    local_18.Size = (int)sVar1;
  }
  local_18.DataPtr = _Str;
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  return;
}

// Write<FName> @ 141852e20

void __cdecl UE::Logging::Private::FLogField::Write<FName>(FCbWriter *param_1,void *param_2)

{
  FCbWriter::operator<<(param_1,*(FName *)param_2);
  return;
}

// Write<wchar_t_const_*> @ 141a9ba80

void __cdecl
UE::Logging::Private::FLogField::Write<wchar_t_const_*>(FCbWriter *param_1,void *param_2)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = *(wchar_t **)param_2;
  if (local_18.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_18.DataPtr);
    local_18.Size = (int)sVar1;
  }
  FCbWriter::AddString(param_1,&local_18);
  return;
}

