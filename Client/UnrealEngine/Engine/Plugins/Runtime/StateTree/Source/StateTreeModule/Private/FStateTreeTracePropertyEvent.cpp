// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetTypeString @ 14d4c0550

FString * __thiscall
FStateTreeTracePropertyEvent::GetTypeString
          (FStateTreeTracePropertyEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Property value");
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c1220

FString * __thiscall
FStateTreeTracePropertyEvent::GetValueString
          (FStateTreeTracePropertyEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  if (*(int *)&this->field_0x20 != 0) {
    ::FString::FString(__return_storage_ptr__,*(wchar_t **)&this->field_0x18);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d1e90

FString * __thiscall
FStateTreeTracePropertyEvent::ToFullString
          (FStateTreeTracePropertyEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  if (*(int *)&this->field_0x20 == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = *(wchar_t **)&this->field_0x18;
  }
  ::FString::FString(&local_18,pwVar1);
  ::FString::FString(&local_28,L"Property value");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

