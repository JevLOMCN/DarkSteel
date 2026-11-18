// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 11

// FNodeClassName @ 14ad3b680

FNodeClassName * __thiscall
Metasound::FNodeClassName::FNodeClassName
          (FNodeClassName *this,FName *param_1,FName *param_2,FName *param_3)

{
  this->Namespace = *param_1;
  this->Name = *param_2;
  this->Variant = *param_3;
  return this;
}

// FNodeClassName @ 14ad3b6a0

FNodeClassName * __thiscall Metasound::FNodeClassName::FNodeClassName(FNodeClassName *this)

{
  (this->Namespace).ComparisonIndex = 0;
  (this->Namespace).Number = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Variant).ComparisonIndex = 0;
  (this->Variant).Number = 0;
  return this;
}

// FormatFullName @ 14ad532c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl
Metasound::FNodeClassName::FormatFullName(FName *param_1,FName *param_2,FName *param_3)

{
  FName *in_R9;
  undefined1 auStack_898 [32];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_898;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.Base = local_858;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  ::FName::AppendString(param_2,&local_878);
  if (local_878.End < local_878.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_878,1);
  }
  local_878.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_878.CurPos,1,".",1);
  ::FName::AppendString(param_3,&local_878);
  if (*in_R9 != (FName)0x0) {
    if (local_878.End < local_878.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    local_878.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_878.CurPos,1,".",1);
    ::FName::AppendString(in_R9,&local_878);
  }
  if (local_878.End < local_878.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_878,1);
  }
  *local_878.CurPos = L'\0';
  ::FName::FName(param_1,local_878.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  return (FName)param_1;
}

// FormatFullName @ 14ad53430

void __cdecl
Metasound::FNodeClassName::FormatFullName
          (FNameBuilder *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  wchar_t *pwVar1;
  
  FormatScopedName(param_1,param_2,param_3);
  if (*param_4 != (FName)0x0) {
    if (*(ulonglong *)&param_1->field_0x10 < *(longlong *)&param_1->field_0x8 + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,1);
    }
    pwVar1 = FGenericPlatformString::Convert<char,wchar_t>(*(wchar_t **)&param_1->field_0x8,1,".",1)
    ;
    *(wchar_t **)&param_1->field_0x8 = pwVar1;
    ::FName::AppendString(param_4,(TStringBuilderBase<wchar_t> *)param_1);
  }
  return;
}

// FormatScopedName @ 14ad534a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl Metasound::FNodeClassName::FormatScopedName(FName *param_1,FName *param_2)

{
  FName *in_R8;
  undefined1 auStack_878 [32];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_878;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  ::FName::AppendString(param_2,&local_858);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  local_858.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_858.CurPos,1,".",1);
  ::FName::AppendString(in_R8,&local_858);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FName::FName(param_1,local_858.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return (FName)param_1;
}

// FormatScopedName @ 14ad535c0

void __cdecl
Metasound::FNodeClassName::FormatScopedName(FNameBuilder *param_1,FName *param_2,FName *param_3)

{
  wchar_t *pwVar1;
  
  ::FName::AppendString(param_2,(TStringBuilderBase<wchar_t> *)param_1);
  if (*(ulonglong *)&param_1->field_0x10 < *(longlong *)&param_1->field_0x8 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,1);
  }
  pwVar1 = FGenericPlatformString::Convert<char,wchar_t>(*(wchar_t **)&param_1->field_0x8,1,".",1);
  *(wchar_t **)&param_1->field_0x8 = pwVar1;
  ::FName::AppendString(param_3,(TStringBuilderBase<wchar_t> *)param_1);
  return;
}

// GetName @ 14ad56070

FName * __thiscall Metasound::FNodeClassName::GetName(FNodeClassName *this)

{
  return &this->Name;
}

// GetNamespace @ 14ad56080

FName * __thiscall Metasound::FNodeClassName::GetNamespace(FNodeClassName *this)

{
  return &this->Namespace;
}

// GetVariant @ 14ad57200

FName * __thiscall Metasound::FNodeClassName::GetVariant(FNodeClassName *this)

{
  return &this->Variant;
}

// IsValid @ 14ad5a910

bool __thiscall Metasound::FNodeClassName::IsValid(FNodeClassName *this)

{
  if (((this->Namespace == InvalidNodeClassName.Namespace) &&
      (this->Name == InvalidNodeClassName.Name)) && (this->Variant == InvalidNodeClassName.Variant))
  {
    return false;
  }
  return true;
}

// ToString @ 14ad664d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::FNodeClassName::ToString(FNodeClassName *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_888 [32];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_868.Base = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.CurPos = local_848;
  local_868.End = local_32;
  ::FName::AppendString(&this->Namespace,&local_868);
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  local_868.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_868.CurPos,1,".",1);
  ::FName::AppendString(&this->Name,&local_868);
  if (this->Variant != (FName)0x0) {
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    local_868.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_868.CurPos,1,".",1);
    ::FName::AppendString(&this->Variant,&local_868);
  }
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_868.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return __return_storage_ptr__;
}

