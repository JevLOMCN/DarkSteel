// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FromString @ 14163d120

EBuildConfiguration __cdecl EBuildConfigurations::FromString(FString *param_1)

{
  EBuildConfiguration local_res8 [32];
  
  if ((param_1->Data).ArrayNum != 0) {
    LexTryParseString(local_res8,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    return local_res8[0];
  }
  LexTryParseString(local_res8,L"");
  return local_res8[0];
}

// ToString @ 141664270

wchar_t * __cdecl EBuildConfigurations::ToString(EBuildConfiguration param_1)

{
  if (param_1 == Debug) {
    return L"Debug";
  }
  if (param_1 == DebugGame) {
    return L"DebugGame";
  }
  if (param_1 == Development) {
    return L"Development";
  }
  if (param_1 != Shipping) {
    if (param_1 != Test) {
      return L"Unknown";
    }
    return L"Test";
  }
  return L"Shipping";
}

// ToText @ 1416644c0

FText * __cdecl
EBuildConfigurations::ToText(FText *__return_storage_ptr__,EBuildConfiguration param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  if (param_1 == Debug) {
    pwVar2 = L"Debug";
    pwVar1 = L"DebugName";
  }
  else if (param_1 == DebugGame) {
    pwVar2 = L"DebugGame";
    pwVar1 = L"DebugGameName";
  }
  else if (param_1 == Development) {
    pwVar2 = L"Development";
    pwVar1 = L"DevelopmentName";
  }
  else {
    if (param_1 != Shipping) {
      if (param_1 != Test) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"UnrealBuildConfigurations",L"UnknownName",L"Unknown");
        return __return_storage_ptr__;
      }
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"UnrealBuildConfigurations",L"TestName",L"Test");
      return __return_storage_ptr__;
    }
    pwVar2 = L"Shipping";
    pwVar1 = L"ShippingName";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UnrealBuildConfigurations",pwVar1,pwVar2);
  return __return_storage_ptr__;
}

