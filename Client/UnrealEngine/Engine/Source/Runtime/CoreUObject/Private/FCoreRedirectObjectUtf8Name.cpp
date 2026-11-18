// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FCoreRedirectObjectUtf8Name @ 141fbd490

FCoreRedirectObjectUtf8Name * __thiscall
UE::CoreRedirects::Private::FCoreRedirectObjectUtf8Name::FCoreRedirectObjectUtf8Name
          (FCoreRedirectObjectUtf8Name *this,FCoreRedirectObjectName *param_1)

{
  uchar *puVar1;
  FName local_res8;
  
  local_res8 = param_1->ObjectName;
  puVar1 = (this->ObjectName).UTF8.StringBuffer;
  (this->ObjectName).UTF8._padding_ = (longlong)puVar1;
  (this->ObjectName).UTF8._padding_ = (longlong)puVar1;
  (this->ObjectName).UTF8._padding_ = (longlong)&(this->ObjectName).UTF8.field_0x42b;
  *(undefined2 *)&(this->ObjectName).UTF8._padding_ = 0;
  if (local_res8 != (FName)0x0) {
    ::FName::AppendString(&local_res8,(TStringBuilderBase<char8_t> *)this);
  }
  local_res8 = param_1->OuterName;
  puVar1 = (this->OuterName).UTF8.StringBuffer;
  (this->OuterName).UTF8._padding_ = (longlong)puVar1;
  (this->OuterName).UTF8._padding_ = (longlong)puVar1;
  (this->OuterName).UTF8._padding_ = (longlong)&(this->OuterName).UTF8.field_0x42b;
  *(undefined2 *)&(this->OuterName).UTF8._padding_ = 0;
  if (local_res8 != (FName)0x0) {
    ::FName::AppendString(&local_res8,(TStringBuilderBase<char8_t> *)&this->OuterName);
  }
  local_res8 = param_1->PackageName;
  puVar1 = (this->PackageName).UTF8.StringBuffer;
  (this->PackageName).UTF8._padding_ = (longlong)puVar1;
  (this->PackageName).UTF8._padding_ = (longlong)puVar1;
  (this->PackageName).UTF8._padding_ = (longlong)&(this->PackageName).UTF8.field_0x42b;
  *(undefined2 *)&(this->PackageName).UTF8._padding_ = 0;
  if (local_res8 != (FName)0x0) {
    ::FName::AppendString(&local_res8,(TStringBuilderBase<char8_t> *)&this->PackageName);
  }
  return this;
}

