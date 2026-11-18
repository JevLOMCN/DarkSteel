// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 4

// ~IInterchangeSlicedTexturePayloadInterface @ 14e709840

void __thiscall
IInterchangeSlicedTexturePayloadInterface::~IInterchangeSlicedTexturePayloadInterface
          (IInterchangeSlicedTexturePayloadInterface *this)

{
  *this = (IInterchangeSlicedTexturePayloadInterface)
          &___7IInterchangeSlicedTexturePayloadInterface__6B_;
  return;
}

// GetSlicedTexturePayloadData @ 14e71ac40

TOptional<UE::Interchange::FImportSlicedImage> * __thiscall
IInterchangeSlicedTexturePayloadInterface::GetSlicedTexturePayloadData
          (IInterchangeSlicedTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportSlicedImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Public\\Texture\\InterchangeSlicedTexturePayloadInterface.h"
             ,0x2b,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetSlicedTexturePayloadData @ 14e71ac80

TOptional<UE::Interchange::FImportSlicedImage> * __thiscall
IInterchangeSlicedTexturePayloadInterface::GetSlicedTexturePayloadData
          (IInterchangeSlicedTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportSlicedImage> *__return_storage_ptr__,
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

// _getUObject @ 14e72c010

UObject * __thiscall
IInterchangeSlicedTexturePayloadInterface::_getUObject
          (IInterchangeSlicedTexturePayloadInterface *this)

{
  return (UObject *)0x0;
}

