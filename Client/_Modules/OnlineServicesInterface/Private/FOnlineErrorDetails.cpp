// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 4

// ~FOnlineErrorDetails @ 14ec23ca0

void __thiscall UE::Online::FOnlineErrorDetails::~FOnlineErrorDetails(FOnlineErrorDetails *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FOnlineErrorDetails_Online_UE__6B_;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->LogString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FriendlyErrorCode).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// GetFriendlyErrorCode @ 14ec293f0

FString * __thiscall
UE::Online::FOnlineErrorDetails::GetFriendlyErrorCode
          (FOnlineErrorDetails *this,FString *__return_storage_ptr__,FOnlineError *param_1)

{
  ::FString::FString(__return_storage_ptr__,&this->FriendlyErrorCode);
  return __return_storage_ptr__;
}

// GetLogString @ 14ec294a0

FString * __thiscall
UE::Online::FOnlineErrorDetails::GetLogString
          (FOnlineErrorDetails *this,FString *__return_storage_ptr__,FOnlineError *param_1)

{
  ::FString::FString(__return_storage_ptr__,&this->LogString);
  return __return_storage_ptr__;
}

// GetText @ 14ec29960

FText * __thiscall
UE::Online::FOnlineErrorDetails::GetText
          (FOnlineErrorDetails *this,FText *__return_storage_ptr__,FOnlineError *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Text).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Text).Flags;
  return __return_storage_ptr__;
}

