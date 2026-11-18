// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 4

// FStateTreeTraceInstanceFrameEvent @ 14d4b1eb0

FStateTreeTraceInstanceFrameEvent * __thiscall
FStateTreeTraceInstanceFrameEvent::FStateTreeTraceInstanceFrameEvent
          (FStateTreeTraceInstanceFrameEvent *this,double param_1,EStateTreeTraceEventType param_2,
          UStateTree *param_3)

{
  UStateTree *local_res8;
  
  this->_padding_ = (longlong)param_1;
  *(EStateTreeTraceEventType *)&this->_padding_ = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->WeakStateTree).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->WeakStateTree).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// GetTypeString @ 14d4c0350

FString * __thiscall
FStateTreeTraceInstanceFrameEvent::GetTypeString
          (FStateTreeTraceInstanceFrameEvent *this,FString *__return_storage_ptr__,
          UStateTree *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"New instance frame");
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c0c20

FString * __thiscall
FStateTreeTraceInstanceFrameEvent::GetValueString
          (FStateTreeTraceInstanceFrameEvent *this,FString *__return_storage_ptr__,
          UStateTree *param_1)

{
  UObject *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakStateTree).WeakPtr);
  if (pUVar1 == (UObject *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
  local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d1aa0

FString * __thiscall
FStateTreeTraceInstanceFrameEvent::ToFullString
          (FStateTreeTraceInstanceFrameEvent *this,FString *__return_storage_ptr__,
          UStateTree *param_1)

{
  UObject *pUVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakStateTree).WeakPtr);
  if (pUVar1 == (UObject *)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8.Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(&local_res8,&local_28);
  }
  ::FString::FString(&local_18,L"New instance frame");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

