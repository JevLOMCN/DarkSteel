// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 68

// AsVariableBool @ 141629d60

TConsoleVariableData<bool> * __thiscall
FConsoleVariable<int>::AsVariableBool(FConsoleVariable<int> *this)

{
  return (TConsoleVariableData<bool> *)0x0;
}

// AsVariableBool @ 141629d70

TConsoleVariableData<bool> * __thiscall
FConsoleVariable<float>::AsVariableBool(FConsoleVariable<float> *this)

{
  return (TConsoleVariableData<bool> *)0x0;
}

// AsVariableBool @ 141629d80

TConsoleVariableData<bool> * __thiscall
FConsoleVariable<FString>::AsVariableBool(FConsoleVariable<FString> *this)

{
  return (TConsoleVariableData<bool> *)0x0;
}

// AsVariableBool @ 141629d90

TConsoleVariableData<bool> * __thiscall
FConsoleVariable<bool>::AsVariableBool(FConsoleVariable<bool> *this)

{
  return &this->Data;
}

// AsVariableFloat @ 141629e00

TConsoleVariableData<float> * __thiscall
FConsoleVariable<int>::AsVariableFloat(FConsoleVariable<int> *this)

{
  return (TConsoleVariableData<float> *)0x0;
}

// AsVariableFloat @ 141629e10

TConsoleVariableData<float> * __thiscall
FConsoleVariable<float>::AsVariableFloat(FConsoleVariable<float> *this)

{
  return &this->Data;
}

// AsVariableFloat @ 141629e20

TConsoleVariableData<float> * __thiscall
FConsoleVariable<FString>::AsVariableFloat(FConsoleVariable<FString> *this)

{
  return (TConsoleVariableData<float> *)0x0;
}

// AsVariableFloat @ 141629e30

TConsoleVariableData<float> * __thiscall
FConsoleVariable<bool>::AsVariableFloat(FConsoleVariable<bool> *this)

{
  return (TConsoleVariableData<float> *)0x0;
}

// AsVariableInt @ 141629ea0

TConsoleVariableData<int> * __thiscall
FConsoleVariable<int>::AsVariableInt(FConsoleVariable<int> *this)

{
  return &this->Data;
}

// AsVariableInt @ 141629eb0

TConsoleVariableData<int> * __thiscall
FConsoleVariable<float>::AsVariableInt(FConsoleVariable<float> *this)

{
  return (TConsoleVariableData<int> *)0x0;
}

// AsVariableInt @ 141629ec0

TConsoleVariableData<int> * __thiscall
FConsoleVariable<FString>::AsVariableInt(FConsoleVariable<FString> *this)

{
  return (TConsoleVariableData<int> *)0x0;
}

// AsVariableInt @ 141629ed0

TConsoleVariableData<int> * __thiscall
FConsoleVariable<bool>::AsVariableInt(FConsoleVariable<bool> *this)

{
  return (TConsoleVariableData<int> *)0x0;
}

// AsVariableString @ 141629f40

TConsoleVariableData<FString> * __thiscall
FConsoleVariable<int>::AsVariableString(FConsoleVariable<int> *this)

{
  return (TConsoleVariableData<FString> *)0x0;
}

// AsVariableString @ 141629f50

TConsoleVariableData<FString> * __thiscall
FConsoleVariable<float>::AsVariableString(FConsoleVariable<float> *this)

{
  return (TConsoleVariableData<FString> *)0x0;
}

// AsVariableString @ 141629f60

TConsoleVariableData<FString> * __thiscall
FConsoleVariable<FString>::AsVariableString(FConsoleVariable<FString> *this)

{
  return &this->Data;
}

// AsVariableString @ 141629f70

TConsoleVariableData<FString> * __thiscall
FConsoleVariable<bool>::AsVariableString(FConsoleVariable<bool> *this)

{
  return (TConsoleVariableData<FString> *)0x0;
}

// GetBool @ 14163e7c0

bool __thiscall FConsoleVariable<int>::GetBool(FConsoleVariable<int> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_14163e7e5;
  }
  lVar2 = 0xb8;
LAB_14163e7e5:
  return *(int *)((longlong)&this->_padding_ + lVar2) != 0;
}

// GetBool @ 14163e800

bool __thiscall FConsoleVariable<float>::GetBool(FConsoleVariable<float> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_14163e825;
  }
  lVar2 = 0xb8;
LAB_14163e825:
  if (*(float *)((longlong)&this->_padding_ + lVar2) != 0.0) {
    return true;
  }
  return false;
}

// GetBool @ 14163e850

bool __thiscall FConsoleVariable<FString>::GetBool(FConsoleVariable<FString> *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  longlong lVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 200;
    if (!bVar2) goto LAB_14163e879;
  }
  lVar3 = 0xb8;
LAB_14163e879:
  pFVar4 = ::FString::FString(&local_18,(FString *)((longlong)&this->_padding_ + lVar3));
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar5);
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// GetBool @ 14163e8d0

bool __thiscall FConsoleVariable<bool>::GetBool(FConsoleVariable<bool> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xb9;
    if (!bVar1) goto LAB_14163e8f5;
  }
  lVar2 = 0xb8;
LAB_14163e8f5:
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + lVar2);
}

// GetFloat @ 141641fb0

float __thiscall FConsoleVariable<int>::GetFloat(FConsoleVariable<int> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_141641fd5;
  }
  lVar2 = 0xb8;
LAB_141641fd5:
  return (float)*(int *)((longlong)&this->_padding_ + lVar2);
}

// GetFloat @ 141641ff0

float __thiscall FConsoleVariable<float>::GetFloat(FConsoleVariable<float> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_141642015;
  }
  lVar2 = 0xb8;
LAB_141642015:
  return *(float *)((longlong)&this->_padding_ + lVar2);
}

// GetFloat @ 141642030

float __thiscall FConsoleVariable<FString>::GetFloat(FConsoleVariable<FString> *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  longlong lVar3;
  FString *pFVar4;
  wchar_t *_Str;
  double dVar5;
  char **local_res8;
  char *local_38;
  undefined8 local_30;
  FString local_28 [2];
  
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 200;
    if (!bVar2) goto LAB_14164205e;
  }
  lVar3 = 0xb8;
LAB_14164205e:
  pFVar4 = ::FString::FString(local_28,(FString *)((longlong)&this->_padding_ + lVar3));
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  local_38 = (char *)0x0;
  local_30 = 0;
  local_res8 = &local_38;
  `UE::ConsoleManager::Private::FConsoleManagerLocaleScope::FConsoleManagerLocaleScope'::__l2::
  <lambda_2>::operator()(&local_res8);
  dVar5 = _wtof(_Str);
  setlocale(4,local_38);
  if (local_38 != (char *)0x0) {
    FMemory::Free(local_38);
  }
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (float)dVar5;
}

// GetFloat @ 141642100

float __thiscall FConsoleVariable<bool>::GetFloat(FConsoleVariable<bool> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xb9;
    if (!bVar1) goto LAB_141642125;
  }
  lVar2 = 0xb8;
LAB_141642125:
  if (*(char *)((longlong)&this->_padding_ + lVar2) != '\0') {
    return __real_3f800000;
  }
  return 0.0;
}

// GetInt @ 141642b10

int __thiscall FConsoleVariable<int>::GetInt(FConsoleVariable<int> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_141642b35;
  }
  lVar2 = 0xb8;
LAB_141642b35:
  return *(int *)((longlong)&this->_padding_ + lVar2);
}

// GetInt @ 141642b50

int __thiscall FConsoleVariable<float>::GetInt(FConsoleVariable<float> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_141642b75;
  }
  lVar2 = 0xb8;
LAB_141642b75:
  return (int)*(float *)((longlong)&this->_padding_ + lVar2);
}

// GetInt @ 141642b90

int __thiscall FConsoleVariable<FString>::GetInt(FConsoleVariable<FString> *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FString *pFVar5;
  wchar_t *_Str;
  FString local_18;
  
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 200;
    if (!bVar2) goto LAB_141642bb9;
  }
  lVar4 = 0xb8;
LAB_141642bb9:
  pFVar5 = ::FString::FString(&local_18,(FString *)((longlong)&this->_padding_ + lVar4));
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return iVar3;
}

// GetInt @ 141642c10

int __thiscall FConsoleVariable<bool>::GetInt(FConsoleVariable<bool> *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xb9;
    if (!bVar1) goto LAB_141642c35;
  }
  lVar2 = 0xb8;
LAB_141642c35:
  return (int)(*(char *)((longlong)&this->_padding_ + lVar2) != '\0');
}

// GetParentObject @ 1416444c0

IConsoleObject * __thiscall FConsoleVariable<int>::GetParentObject(FConsoleVariable<int> *this)

{
  return (IConsoleObject *)this->ParentVariable;
}

// GetParentObject @ 1416444d0

IConsoleObject * __thiscall FConsoleVariable<float>::GetParentObject(FConsoleVariable<float> *this)

{
  return (IConsoleObject *)this->ParentVariable;
}

// GetParentObject @ 1416444e0

IConsoleObject * __thiscall
FConsoleVariable<FString>::GetParentObject(FConsoleVariable<FString> *this)

{
  return (IConsoleObject *)this->ParentVariable;
}

// GetParentObject @ 1416444f0

IConsoleObject * __thiscall FConsoleVariable<bool>::GetParentObject(FConsoleVariable<bool> *this)

{
  return (IConsoleObject *)this->ParentVariable;
}

// GetString @ 141646630

FString * __thiscall
FConsoleVariable<int>::GetString(FConsoleVariable<int> *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    IsInGameThread();
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetString @ 141646690

FString * __thiscall
FConsoleVariable<float>::GetString(FConsoleVariable<float> *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_1416466bc;
  }
  lVar2 = 0xb8;
LAB_1416466bc:
  FConsoleVariableConversionHelper<float>::GetString
            (__return_storage_ptr__,*(float *)((longlong)&this->_padding_ + lVar2));
  return __return_storage_ptr__;
}

// GetString @ 1416466e0

FString * __thiscall
FConsoleVariable<FString>::GetString
          (FConsoleVariable<FString> *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  longlong lVar3;
  FString *pFVar4;
  FString local_18;
  
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 200;
    if (!bVar2) goto LAB_14164670c;
  }
  lVar3 = 0xb8;
LAB_14164670c:
  pFVar4 = ::FString::FString(&local_18,(FString *)((longlong)&this->_padding_ + lVar3));
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetString @ 141646760

FString * __thiscall
FConsoleVariable<bool>::GetString(FConsoleVariable<bool> *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xb9;
    if (!bVar1) goto LAB_14164678c;
  }
  lVar2 = 0xb8;
LAB_14164678c:
  pwVar3 = L"false";
  if (*(char *)((longlong)&this->_padding_ + lVar2) != '\0') {
    pwVar3 = L"true";
  }
  ::FString::FString(__return_storage_ptr__,pwVar3);
  return __return_storage_ptr__;
}

// IsVariableBool @ 14164a3d0

bool __thiscall FConsoleVariable<int>::IsVariableBool(FConsoleVariable<int> *this)

{
  return false;
}

// IsVariableBool @ 14164a3e0

bool __thiscall FConsoleVariable<float>::IsVariableBool(FConsoleVariable<float> *this)

{
  return false;
}

// IsVariableBool @ 14164a3f0

bool __thiscall FConsoleVariable<FString>::IsVariableBool(FConsoleVariable<FString> *this)

{
  return false;
}

// IsVariableBool @ 14164a400

bool __thiscall FConsoleVariable<bool>::IsVariableBool(FConsoleVariable<bool> *this)

{
  return true;
}

// IsVariableFloat @ 14164a490

bool __thiscall FConsoleVariable<int>::IsVariableFloat(FConsoleVariable<int> *this)

{
  return false;
}

// IsVariableFloat @ 14164a4a0

bool __thiscall FConsoleVariable<float>::IsVariableFloat(FConsoleVariable<float> *this)

{
  return true;
}

// IsVariableFloat @ 14164a4b0

bool __thiscall FConsoleVariable<FString>::IsVariableFloat(FConsoleVariable<FString> *this)

{
  return false;
}

// IsVariableFloat @ 14164a4c0

bool __thiscall FConsoleVariable<bool>::IsVariableFloat(FConsoleVariable<bool> *this)

{
  return false;
}

// IsVariableInt @ 14164a550

bool __thiscall FConsoleVariable<int>::IsVariableInt(FConsoleVariable<int> *this)

{
  return true;
}

// IsVariableInt @ 14164a560

bool __thiscall FConsoleVariable<float>::IsVariableInt(FConsoleVariable<float> *this)

{
  return false;
}

// IsVariableInt @ 14164a570

bool __thiscall FConsoleVariable<FString>::IsVariableInt(FConsoleVariable<FString> *this)

{
  return false;
}

// IsVariableInt @ 14164a580

bool __thiscall FConsoleVariable<bool>::IsVariableInt(FConsoleVariable<bool> *this)

{
  return false;
}

// IsVariableString @ 14164a610

bool __thiscall FConsoleVariable<int>::IsVariableString(FConsoleVariable<int> *this)

{
  return false;
}

// IsVariableString @ 14164a620

bool __thiscall FConsoleVariable<float>::IsVariableString(FConsoleVariable<float> *this)

{
  return false;
}

// IsVariableString @ 14164a630

bool __thiscall FConsoleVariable<FString>::IsVariableString(FConsoleVariable<FString> *this)

{
  return true;
}

// IsVariableString @ 14164a640

bool __thiscall FConsoleVariable<bool>::IsVariableString(FConsoleVariable<bool> *this)

{
  return false;
}

// OnChanged @ 14164ea50

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<int>::OnChanged
          (FConsoleVariable<int> *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<int>((this->Data).ShadowedValue + 1,(this->Data).ShadowedValue,
                    (EConsoleVariableFlags)this->_padding_,param_1);
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// OnChanged @ 14164eab0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<float>::OnChanged
          (FConsoleVariable<float> *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<float>((this->Data).ShadowedValue + 1,(this->Data).ShadowedValue,
                      (EConsoleVariableFlags)this->_padding_,param_1);
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// OnChanged @ 14164eb10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<FString>::OnChanged
          (FConsoleVariable<FString> *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<FString>
            ((this->Data).ShadowedValue + 1,(this->Data).ShadowedValue,
             (EConsoleVariableFlags)this->_padding_,param_1);
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// OnChanged @ 14164eb70

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<bool>::OnChanged
          (FConsoleVariable<bool> *this,EConsoleVariableFlags param_1,bool param_2)

{
  OnCVarChange<bool>((this->Data).ShadowedValue + 1,(this->Data).ShadowedValue,
                     (EConsoleVariableFlags)this->_padding_,param_1);
  FConsoleVariableBase::OnChanged((FConsoleVariableBase *)this,param_1,param_2);
  return;
}

// Release @ 141656630

void __thiscall FConsoleVariable<int>::Release(FConsoleVariable<int> *this)

{
  if (this != (FConsoleVariable<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165663d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Release @ 141656650

void __thiscall FConsoleVariable<float>::Release(FConsoleVariable<float> *this)

{
  if (this != (FConsoleVariable<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165665d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Release @ 141656670

void __thiscall FConsoleVariable<FString>::Release(FConsoleVariable<FString> *this)

{
  if (this != (FConsoleVariable<FString> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165667d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Release @ 141656690

void __thiscall FConsoleVariable<bool>::Release(FConsoleVariable<bool> *this)

{
  if (this != (FConsoleVariable<bool> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165669d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Set @ 14165c790

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<int>::Set(FConsoleVariable<int> *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FConsoleVariableExtendedData<int>::TrackHistory
                    ((FConsoleVariableExtendedData<int> *)this,param_1,param_2->Flags,param_2->Tag);
  if (bVar1) {
    bVar1 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,param_2->Flags);
    if (bVar1) {
      iVar2 = _wtoi(param_1);
      (this->Data).ShadowedValue[0] = iVar2;
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// Set @ 14165c800

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<float>::Set
          (FConsoleVariable<float> *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  
  bVar1 = FConsoleVariableExtendedData<float>::TrackHistory
                    ((FConsoleVariableExtendedData<float> *)this,param_1,param_2->Flags,param_2->Tag
                    );
  if (bVar1) {
    bVar1 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,param_2->Flags);
    if (bVar1) {
      UE::ConsoleManager::Private::GetValueFromString<float>((this->Data).ShadowedValue,param_1);
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// Set @ 14165c870

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<FString>::Set
          (FConsoleVariable<FString> *this,wchar_t *param_1,FResolvedContext *param_2)

{
  EConsoleVariableFlags EVar1;
  bool bVar2;
  
  EVar1 = param_2->Flags;
  bVar2 = FConsoleVariableExtendedData<FString>::TrackHistory
                    ((FConsoleVariableExtendedData<FString> *)this,param_1,EVar1,param_2->Tag);
  if (bVar2) {
    bVar2 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,EVar1);
    if (bVar2) {
      ::FString::operator=((this->Data).ShadowedValue,param_1);
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// Set @ 14165c8f0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<bool>::Set(FConsoleVariable<bool> *this,wchar_t *param_1,FResolvedContext *param_2)

{
  bool bVar1;
  
  bVar1 = FConsoleVariableExtendedData<bool>::TrackHistory
                    ((FConsoleVariableExtendedData<bool> *)this,param_1,param_2->Flags,param_2->Tag)
  ;
  if (bVar1) {
    bVar1 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,param_2->Flags);
    if (bVar1) {
      bVar1 = FToBoolHelper::FromCStringWide(param_1);
      (this->Data).ShadowedValue[0] = bVar1;
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// SetInternal @ 14165d900

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<int>::SetInternal
          (FConsoleVariable<int> *this,int *param_1,EConsoleVariableFlags param_2)

{
  (this->Data).ShadowedValue[0] = *param_1;
  return;
}

// SetInternal @ 14165d910

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<float>::SetInternal
          (FConsoleVariable<float> *this,float *param_1,EConsoleVariableFlags param_2)

{
  (this->Data).ShadowedValue[0] = *param_1;
  return;
}

// SetInternal @ 14165d920

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<FString>::SetInternal
          (FConsoleVariable<FString> *this,FString *param_1,EConsoleVariableFlags param_2)

{
  ::FString::operator=((this->Data).ShadowedValue,param_1);
  return;
}

// SetInternal @ 14165d940

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariable<bool>::SetInternal
          (FConsoleVariable<bool> *this,bool *param_1,EConsoleVariableFlags param_2)

{
  (this->Data).ShadowedValue[0] = *param_1;
  return;
}

