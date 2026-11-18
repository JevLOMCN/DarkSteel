// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FMapErrorToken @ 1418bc550

FMapErrorToken * __thiscall FMapErrorToken::FMapErrorToken(FMapErrorToken *this,FName *param_1)

{
  FString *pFVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString(param_1,&local_18);
  ::FString::FString(&local_28,MapErrorsLocalPath);
  ::FString::FString(&local_38,MapErrorsURLPath);
  FDocumentationToken::FDocumentationToken((FDocumentationToken *)this,&local_38,&local_28,pFVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7FMapErrorToken__6B_;
  return this;
}

// Create @ 1418d2e20

TSharedRef<FMapErrorToken,1> * __cdecl
FMapErrorToken::Create(TSharedRef<FMapErrorToken,1> *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDocumentationToken *this;
  FString *pFVar3;
  TSharedRef<FMapErrorToken,1> *pTVar4;
  TRawPtrProxy<FMapErrorToken> local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this = ::operator_new(0x70);
  if (this == (FDocumentationToken *)0x0) {
    this = (FDocumentationToken *)0x0;
  }
  else {
    pFVar3 = ::FName::ToString(param_1,&local_18);
    ::FString::FString(&local_28,MapErrorsLocalPath);
    ::FString::FString(&local_38,MapErrorsURLPath);
    FDocumentationToken::FDocumentationToken(this,&local_38,&local_28,pFVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    this->_padding_ = (longlong)&___7FMapErrorToken__6B_;
    if (((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FMapErrorToken,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  local_res8.Object = (FMapErrorToken *)this;
  TSharedRef<FMapErrorToken,1>::TSharedRef<FMapErrorToken,1><FMapErrorToken>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

