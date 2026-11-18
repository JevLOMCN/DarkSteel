// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ToString @ 141838160

FString * __thiscall
FAutomationExecutionEntry::ToString(FAutomationExecutionEntry *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::operator=(__return_storage_ptr__,&(this->Event).Message);
  if (1 < (this->Event).Context.Data.ArrayNum) {
    ::FString::AppendChars(__return_storage_ptr__,L" [",2);
    iVar2 = (this->Event).Context.Data.ArrayNum;
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(this->Event).Context.Data.AllocatorInstance.Data,
               iVar1);
    ::FString::AppendChars(__return_storage_ptr__,L"] ",2);
  }
  AutomationTest::CreateFileLineDescription(&local_18,&this->Filename,this->LineNumber);
  if (1 < local_18.Data.ArrayNum) {
    ::FString::AppendChars(__return_storage_ptr__,L" [",2);
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToStringFormattedEditorLog @ 141838470

FString * __thiscall
FAutomationExecutionEntry::ToStringFormattedEditorLog
          (FAutomationExecutionEntry *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::operator=(__return_storage_ptr__,&(this->Event).Message);
  if (1 < (this->Event).Context.Data.ArrayNum) {
    ::FString::AppendChars(__return_storage_ptr__,L" [",2);
    iVar2 = (this->Event).Context.Data.ArrayNum;
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(this->Event).Context.Data.AllocatorInstance.Data,
               iVar1);
    ::FString::AppendChars(__return_storage_ptr__,L"] ",2);
  }
  AutomationTest::CreateFileLineDescription(&local_18,&this->Filename,this->LineNumber);
  if (1 < local_18.Data.ArrayNum) {
    ::FString::AppendChars(__return_storage_ptr__,L" ",1);
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

