// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// AppendString @ 141926800

void __thiscall
UE::SourceLocation::FFileAndLineAdapter::AppendString
          (FFileAndLineAdapter *this,TStringBuilderBase<char8_t> *param_1)

{
  TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"%hs(%d)");
  return;
}

// AppendString @ 141926830

void __thiscall
UE::SourceLocation::FFileAndLineAdapter::AppendString
          (FFileAndLineAdapter *this,TStringBuilderBase<wchar_t> *param_1)

{
  TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%hs(%d)");
  return;
}

// ToString @ 1419720c0

FString * __thiscall
UE::SourceLocation::FFileAndLineAdapter::ToString
          (FFileAndLineAdapter *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reset(__return_storage_ptr__,0);
  ::FString::AppendfImpl(__return_storage_ptr__,L"%hs(%d)");
  return __return_storage_ptr__;
}

// ToString @ 141972110

void __thiscall
UE::SourceLocation::FFileAndLineAdapter::ToString(FFileAndLineAdapter *this,FString *param_1)

{
  ::FString::Reset(param_1,0);
  ::FString::AppendfImpl(param_1,L"%hs(%d)");
  return;
}

// ToString @ 141972160

void __thiscall
UE::SourceLocation::FFileAndLineAdapter::ToString(FFileAndLineAdapter *this,FUtf8String *param_1)

{
  FUtf8String::Reset(param_1,0);
  FUtf8String::AppendfImpl(param_1,(uchar *)"%hs(%d)");
  return;
}

// ToUtf8String @ 141973140

FUtf8String * __thiscall
UE::SourceLocation::FFileAndLineAdapter::ToUtf8String
          (FFileAndLineAdapter *this,FUtf8String *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FUtf8String::Reset(__return_storage_ptr__,0);
  FUtf8String::AppendfImpl(__return_storage_ptr__,(uchar *)"%hs(%d)");
  return __return_storage_ptr__;
}

