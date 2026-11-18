// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 4

// ~IInterchangeBlockedTexturePayloadInterface @ 14e6b9a40

void __thiscall
IInterchangeBlockedTexturePayloadInterface::~IInterchangeBlockedTexturePayloadInterface
          (IInterchangeBlockedTexturePayloadInterface *this)

{
  *this = (IInterchangeBlockedTexturePayloadInterface)
          &___7IInterchangeBlockedTexturePayloadInterface__6B_;
  return;
}

// GetBlockedTexturePayloadData @ 14e6c3090

TOptional<UE::Interchange::FImportBlockedImage> * __thiscall
IInterchangeBlockedTexturePayloadInterface::GetBlockedTexturePayloadData
          (IInterchangeBlockedTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportBlockedImage> *__return_storage_ptr__,
          UInterchangeSourceData *param_1,FString *param_2)

{
  void *local_18;
  undefined4 local_10;
  int local_c;
  
  local_c = -1;
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 0x10))(this,__return_storage_ptr__,param_2,&local_18);
  if ((local_c != -1) && (local_18 != (void *)0x0)) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetBlockedTexturePayloadData @ 14e6c30e0

TOptional<UE::Interchange::FImportBlockedImage> * __thiscall
IInterchangeBlockedTexturePayloadInterface::GetBlockedTexturePayloadData
          (IInterchangeBlockedTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportBlockedImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// _getUObject @ 14e6d7f90

UObject * __thiscall
IInterchangeBlockedTexturePayloadInterface::_getUObject
          (IInterchangeBlockedTexturePayloadInterface *this)

{
  return (UObject *)0x0;
}

