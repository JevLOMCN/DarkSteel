// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetBool @ 14163eb60

bool __thiscall FConsoleVariableStringRef::GetBool(FConsoleVariableStringRef *this)

{
  bool bVar1;
  
  if ((this->MainValue).Data.ArrayNum != 0) {
    bVar1 = FToBoolHelper::FromCStringWide((wchar_t *)(this->MainValue).Data.AllocatorInstance.Data)
    ;
    return bVar1;
  }
  bVar1 = FToBoolHelper::FromCStringWide(L"");
  return bVar1;
}

// GetFloat @ 141642480

float __thiscall FConsoleVariableStringRef::GetFloat(FConsoleVariableStringRef *this)

{
  wchar_t *_Str;
  double dVar1;
  char **local_res8 [4];
  char *local_28;
  undefined8 local_20;
  
  if ((this->MainValue).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->MainValue).Data.AllocatorInstance.Data;
  }
  local_28 = (char *)0x0;
  local_20 = 0;
  local_res8[0] = &local_28;
  `UE::ConsoleManager::Private::FConsoleManagerLocaleScope::FConsoleManagerLocaleScope'::__l2::
  <lambda_2>::operator()(local_res8);
  dVar1 = _wtof(_Str);
  setlocale(4,local_28);
  if (local_28 != (char *)0x0) {
    FMemory::Free(local_28);
  }
  return (float)dVar1;
}

// GetInt @ 141642f80

int __thiscall FConsoleVariableStringRef::GetInt(FConsoleVariableStringRef *this)

{
  int iVar1;
  
  if ((this->MainValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141642f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(this->MainValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141642f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// GetString @ 141646bf0

FString * __thiscall
FConsoleVariableStringRef::GetString
          (FConsoleVariableStringRef *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->MainValue);
  return __return_storage_ptr__;
}

// IsVariableString @ 14164a6d0

bool __thiscall FConsoleVariableStringRef::IsVariableString(FConsoleVariableStringRef *this)

{
  return true;
}

// OnChanged @ 14164ef00

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableStringRef::OnChanged
          (FConsoleVariableStringRef *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<FString>
            (this->RefValue,&this->MainValue,(EConsoleVariableFlags)this->_padding_,param_1);
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// Release @ 141656870

void __thiscall FConsoleVariableStringRef::Release(FConsoleVariableStringRef *this)

{
  if (this != (FConsoleVariableStringRef *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165687d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Set @ 14165cc90

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableStringRef::Set
          (FConsoleVariableStringRef *this,wchar_t *param_1,FResolvedContext *param_2)

{
  EConsoleVariableFlags EVar1;
  bool bVar2;
  
  EVar1 = param_2->Flags;
  bVar2 = FConsoleVariableExtendedData<FString>::TrackHistory
                    ((FConsoleVariableExtendedData<FString> *)this,param_1,EVar1,param_2->Tag);
  if (bVar2) {
    bVar2 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,EVar1);
    if (bVar2) {
      ::FString::operator=(&this->MainValue,param_1);
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// SetInternal @ 14165da40

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableStringRef::SetInternal
          (FConsoleVariableStringRef *this,FString *param_1,EConsoleVariableFlags param_2)

{
  ::FString::operator=(&this->MainValue,param_1);
  return;
}

