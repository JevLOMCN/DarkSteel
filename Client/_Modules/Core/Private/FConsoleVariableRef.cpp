// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 36

// GetBool @ 14163e9a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall FConsoleVariableRef<int>::GetBool(FConsoleVariableRef<int> *this)

{
  uint uVar1;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    return this->MainValue != 0;
  }
  return *this->RefValue != 0;
}

// GetBool @ 14163e9e0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall FConsoleVariableRef<float>::GetBool(FConsoleVariableRef<float> *this)

{
  uint uVar1;
  float *pfVar2;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    pfVar2 = &this->MainValue;
  }
  else {
    pfVar2 = this->RefValue;
  }
  if (*pfVar2 != 0.0) {
    return true;
  }
  return false;
}

// GetBool @ 14163ea20

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall FConsoleVariableRef<bool>::GetBool(FConsoleVariableRef<bool> *this)

{
  uint uVar1;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    return this->MainValue;
  }
  return *this->RefValue;
}

// GetFloat @ 141642230

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

float __thiscall FConsoleVariableRef<int>::GetFloat(FConsoleVariableRef<int> *this)

{
  uint uVar1;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    return (float)this->MainValue;
  }
  return (float)*this->RefValue;
}

// GetFloat @ 141642270

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

float __thiscall FConsoleVariableRef<float>::GetFloat(FConsoleVariableRef<float> *this)

{
  uint uVar1;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    return this->MainValue;
  }
  return *this->RefValue;
}

// GetFloat @ 1416422b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

float __thiscall FConsoleVariableRef<bool>::GetFloat(FConsoleVariableRef<bool> *this)

{
  uint uVar1;
  bool *pbVar2;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    pbVar2 = &this->MainValue;
  }
  else {
    pbVar2 = this->RefValue;
  }
  if (*pbVar2 != false) {
    return __real_3f800000;
  }
  return 0.0;
}

// GetInt @ 141642cd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

int __thiscall FConsoleVariableRef<int>::GetInt(FConsoleVariableRef<int> *this)

{
  uint uVar1;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    return this->MainValue;
  }
  return *this->RefValue;
}

// GetInt @ 141642d10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

int __thiscall FConsoleVariableRef<float>::GetInt(FConsoleVariableRef<float> *this)

{
  uint uVar1;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    return (int)this->MainValue;
  }
  return (int)*this->RefValue;
}

// GetInt @ 141642d50

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

int __thiscall FConsoleVariableRef<bool>::GetInt(FConsoleVariableRef<bool> *this)

{
  uint uVar1;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    return (uint)(this->MainValue != false);
  }
  return (int)(*this->RefValue != false);
}

// GetString @ 141646900

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FString * __thiscall
FConsoleVariableRef<int>::GetString(FConsoleVariableRef<int> *this,FString *__return_storage_ptr__)

{
  FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetString @ 141646950

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FString * __thiscall
FConsoleVariableRef<float>::GetString
          (FConsoleVariableRef<float> *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  float *pfVar2;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    pfVar2 = &this->MainValue;
  }
  else {
    pfVar2 = this->RefValue;
  }
  FConsoleVariableConversionHelper<float>::GetString(__return_storage_ptr__,*pfVar2);
  return __return_storage_ptr__;
}

// GetString @ 1416469a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FString * __thiscall
FConsoleVariableRef<bool>::GetString
          (FConsoleVariableRef<bool> *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  wchar_t *pwVar2;
  bool *pbVar3;
  
  uVar1 = FConsoleVariableBase::GetShadowIndex((FConsoleVariableBase *)this);
  if (uVar1 == 0) {
    pbVar3 = &this->MainValue;
  }
  else {
    pbVar3 = this->RefValue;
  }
  pwVar2 = L"false";
  if (*pbVar3 != false) {
    pwVar2 = L"true";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// IsVariableBool @ 14164a410

bool __thiscall FConsoleVariableRef<int>::IsVariableBool(FConsoleVariableRef<int> *this)

{
  return false;
}

// IsVariableBool @ 14164a420

bool __thiscall FConsoleVariableRef<float>::IsVariableBool(FConsoleVariableRef<float> *this)

{
  return false;
}

// IsVariableBool @ 14164a430

bool __thiscall FConsoleVariableRef<bool>::IsVariableBool(FConsoleVariableRef<bool> *this)

{
  return true;
}

// IsVariableFloat @ 14164a4d0

bool __thiscall FConsoleVariableRef<int>::IsVariableFloat(FConsoleVariableRef<int> *this)

{
  return false;
}

// IsVariableFloat @ 14164a4e0

bool __thiscall FConsoleVariableRef<float>::IsVariableFloat(FConsoleVariableRef<float> *this)

{
  return true;
}

// IsVariableFloat @ 14164a4f0

bool __thiscall FConsoleVariableRef<bool>::IsVariableFloat(FConsoleVariableRef<bool> *this)

{
  return false;
}

// IsVariableInt @ 14164a590

bool __thiscall FConsoleVariableRef<int>::IsVariableInt(FConsoleVariableRef<int> *this)

{
  return true;
}

// IsVariableInt @ 14164a5a0

bool __thiscall FConsoleVariableRef<float>::IsVariableInt(FConsoleVariableRef<float> *this)

{
  return false;
}

// IsVariableInt @ 14164a5b0

bool __thiscall FConsoleVariableRef<bool>::IsVariableInt(FConsoleVariableRef<bool> *this)

{
  return false;
}

// IsVariableString @ 14164a650

bool __thiscall FConsoleVariableRef<int>::IsVariableString(FConsoleVariableRef<int> *this)

{
  return false;
}

// IsVariableString @ 14164a660

bool __thiscall FConsoleVariableRef<float>::IsVariableString(FConsoleVariableRef<float> *this)

{
  return false;
}

// IsVariableString @ 14164a670

bool __thiscall FConsoleVariableRef<bool>::IsVariableString(FConsoleVariableRef<bool> *this)

{
  return false;
}

// OnChanged @ 14164ebd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<int>::OnChanged
          (FConsoleVariableRef<int> *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<int>(this->RefValue,&this->MainValue,(EConsoleVariableFlags)this->_padding_,param_1);
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// OnChanged @ 14164ec30

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<float>::OnChanged
          (FConsoleVariableRef<float> *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<float>(this->RefValue,&this->MainValue,(EConsoleVariableFlags)this->_padding_,param_1
                     );
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// OnChanged @ 14164ec90

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<bool>::OnChanged
          (FConsoleVariableRef<bool> *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<bool>(this->RefValue,&this->MainValue,(EConsoleVariableFlags)this->_padding_,param_1)
  ;
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// Release @ 1416566b0

void __thiscall FConsoleVariableRef<int>::Release(FConsoleVariableRef<int> *this)

{
  if (this != (FConsoleVariableRef<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416566bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Release @ 1416566d0

void __thiscall FConsoleVariableRef<float>::Release(FConsoleVariableRef<float> *this)

{
  if (this != (FConsoleVariableRef<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416566dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Release @ 1416566f0

void __thiscall FConsoleVariableRef<bool>::Release(FConsoleVariableRef<bool> *this)

{
  if (this != (FConsoleVariableRef<bool> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416566fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Set @ 14165c960

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<int>::Set
          (FConsoleVariableRef<int> *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FConsoleVariableExtendedData<int>::TrackHistory
                    ((FConsoleVariableExtendedData<int> *)this,param_1,param_2->Flags,param_2->Tag);
  if (bVar1) {
    bVar1 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,param_2->Flags);
    if (bVar1) {
      iVar2 = _wtoi(param_1);
      this->MainValue = iVar2;
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// Set @ 14165c9d0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<float>::Set
          (FConsoleVariableRef<float> *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  
  bVar1 = FConsoleVariableExtendedData<float>::TrackHistory
                    ((FConsoleVariableExtendedData<float> *)this,param_1,param_2->Flags,param_2->Tag
                    );
  if (bVar1) {
    bVar1 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,param_2->Flags);
    if (bVar1) {
      UE::ConsoleManager::Private::GetValueFromString<float>(&this->MainValue,param_1);
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// Set @ 14165ca40

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<bool>::Set
          (FConsoleVariableRef<bool> *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  
  bVar1 = FConsoleVariableExtendedData<bool>::TrackHistory
                    ((FConsoleVariableExtendedData<bool> *)this,param_1,param_2->Flags,param_2->Tag)
  ;
  if (bVar1) {
    bVar1 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,param_2->Flags);
    if (bVar1) {
      bVar1 = FToBoolHelper::FromCStringWide(param_1);
      this->MainValue = bVar1;
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// SetInternal @ 14165d950

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<int>::SetInternal
          (FConsoleVariableRef<int> *this,int *param_1,EConsoleVariableFlags param_2)

{
  this->MainValue = *param_1;
  return;
}

// SetInternal @ 14165d960

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<float>::SetInternal
          (FConsoleVariableRef<float> *this,float *param_1,EConsoleVariableFlags param_2)

{
  this->MainValue = *param_1;
  return;
}

// SetInternal @ 14165d970

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableRef<bool>::SetInternal
          (FConsoleVariableRef<bool> *this,bool *param_1,EConsoleVariableFlags param_2)

{
  this->MainValue = *param_1;
  return;
}

