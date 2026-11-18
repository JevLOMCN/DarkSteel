// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 2

// GetErrorId @ 14ec292a0

FString * __thiscall
UE::Online::FOnlineError::GetErrorId(FOnlineError *this,FString *__return_storage_ptr__)

{
  FOnlineError *pFVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_28,L"%llx.%llx.%llx");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  for (pFVar1 = (this->Inner).Object; pFVar1 != (FOnlineError *)0x0; pFVar1 = (pFVar1->Inner).Object
      ) {
    ::FString::PrintfImpl(&local_18,L"%llx.%llx.%llx");
    ::FString::PrintfImpl(&local_28,L"-%s");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// IsSuccess @ 14ec2a430

bool __thiscall UE::Online::FOnlineError::IsSuccess(FOnlineError *this)

{
  return this->ErrorCode == 0x1000000100000000;
}

