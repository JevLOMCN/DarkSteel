// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// AppendString @ 142aeab50

void __thiscall
FAssetIdentifier::AppendString(FAssetIdentifier *this,TStringBuilderBase<wchar_t> *param_1)

{
  FName FVar1;
  FName *this_00;
  FName local_18;
  FName local_10;
  
  FVar1 = (this->PrimaryAssetType).Name;
  if (FVar1 == (FName)0x0) {
    ::FName::AppendString(&this->PackageName,param_1);
    if (this->ObjectName == (FName)0x0) goto LAB_142aeabe6;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L".",1);
    this_00 = &this->ObjectName;
  }
  else {
    local_10 = this->ObjectName;
    local_18 = FVar1;
    if ((FVar1 == (FName)0x0) || (local_10 == (FName)0x0)) goto LAB_142aeabe6;
    ::FName::AppendString(&local_18,param_1);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L":",1);
    this_00 = &local_10;
  }
  ::FName::AppendString(this_00,param_1);
LAB_142aeabe6:
  if (this->ValueName != (FName)0x0) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"::",2);
    ::FName::AppendString(&this->ValueName,param_1);
  }
  return;
}

// ToString @ 142b26ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FAssetIdentifier::ToString(FAssetIdentifier *this,FString *__return_storage_ptr__)

{
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  AppendString(this,&local_238);
  ::FString::ConstructFromPtrSize
            (__return_storage_ptr__,local_238.Base,
             (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// FAssetIdentifier @ 142b4e020

FAssetIdentifier * __thiscall
FAssetIdentifier::FAssetIdentifier(FAssetIdentifier *this,FName param_1,FName param_2,FName param_3)

{
  this->PackageName = param_1;
  (this->PrimaryAssetType).Name = (FName)0x0;
  this->ObjectName = param_2;
  this->ValueName = param_3;
  return this;
}

