// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// GetBool @ 14163e910

bool __cdecl FConsoleVariableConversionHelper<int>::GetBool(int param_1)

{
  return param_1 != 0;
}

// GetBool @ 14163e920

bool __cdecl FConsoleVariableConversionHelper<float>::GetBool(float param_1)

{
  if (param_1 != 0.0) {
    return true;
  }
  return false;
}

// GetBool @ 14163e940

bool __cdecl FConsoleVariableConversionHelper<FString>::GetBool(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar3);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// GetBool @ 14163e990

bool __cdecl FConsoleVariableConversionHelper<bool>::GetBool(bool param_1)

{
  return param_1;
}

// GetFloat @ 141642150

float __cdecl FConsoleVariableConversionHelper<int>::GetFloat(int param_1)

{
  return (float)param_1;
}

// GetFloat @ 141642160

float __cdecl FConsoleVariableConversionHelper<float>::GetFloat(float param_1)

{
  return param_1;
}

// GetFloat @ 141642170

float __cdecl FConsoleVariableConversionHelper<FString>::GetFloat(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  double dVar2;
  char **local_res8;
  char *local_28;
  undefined8 local_20;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_28 = (char *)0x0;
  local_20 = 0;
  local_res8 = &local_28;
  `UE::ConsoleManager::Private::FConsoleManagerLocaleScope::FConsoleManagerLocaleScope'::__l2::
  <lambda_2>::operator()(&local_res8);
  dVar2 = _wtof(_Str);
  setlocale(4,local_28);
  if (local_28 != (char *)0x0) {
    FMemory::Free(local_28);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (float)dVar2;
}

// GetFloat @ 141642210

float __cdecl FConsoleVariableConversionHelper<bool>::GetFloat(bool param_1)

{
  if (param_1) {
    return __real_3f800000;
  }
  return 0.0;
}

// GetInt @ 141642c50

int __cdecl FConsoleVariableConversionHelper<int>::GetInt(int param_1)

{
  return param_1;
}

// GetInt @ 141642c60

int __cdecl FConsoleVariableConversionHelper<float>::GetInt(float param_1)

{
  return (int)param_1;
}

// GetInt @ 141642c70

int __cdecl FConsoleVariableConversionHelper<FString>::GetInt(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return iVar2;
}

// GetInt @ 141642cc0

int __cdecl FConsoleVariableConversionHelper<bool>::GetInt(bool param_1)

{
  return (int)param_1;
}

// GetString @ 1416467c0

FString * __cdecl
FConsoleVariableConversionHelper<int>::GetString(FString *__return_storage_ptr__,int param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetString @ 1416467f0

FString * __cdecl
FConsoleVariableConversionHelper<float>::GetString(FString *__return_storage_ptr__,float param_1)

{
  char **local_res8 [4];
  char *local_28;
  undefined8 local_20;
  
  local_28 = (char *)0x0;
  local_20 = 0;
  local_res8[0] = &local_28;
  `UE::ConsoleManager::Private::FConsoleManagerLocaleScope::FConsoleManagerLocaleScope'::__l2::
  <lambda_2>::operator()(local_res8);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%g");
  setlocale(4,local_28);
  if (local_28 != (char *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetString @ 141646870

FString * __cdecl
FConsoleVariableConversionHelper<FString>::GetString
          (FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetString @ 1416468c0

FString * __cdecl
FConsoleVariableConversionHelper<bool>::GetString(FString *__return_storage_ptr__,bool param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_1) {
    pwVar1 = L"true";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

