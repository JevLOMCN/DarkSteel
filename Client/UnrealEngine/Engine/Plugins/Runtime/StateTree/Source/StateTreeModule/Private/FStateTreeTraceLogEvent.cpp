// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetTypeString @ 14d4c0380

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FStateTreeTraceLogEvent::GetTypeString
          (FStateTreeTraceLogEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Log");
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c0c80

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FStateTreeTraceLogEvent::GetValueString
          (FStateTreeTraceLogEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  if ((this->Message).Data.ArrayNum != 0) {
    ::FString::FString(__return_storage_ptr__,(wchar_t *)(this->Message).Data.AllocatorInstance.Data
                      );
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d1b70

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FStateTreeTraceLogEvent::ToFullString
          (FStateTreeTraceLogEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  if ((this->Message).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(this->Message).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  ::FString::FString(&local_28,L"Log");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

