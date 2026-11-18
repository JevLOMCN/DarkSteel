// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// ~IInterchangeTexturePayloadInterface @ 14e691ca0

void __thiscall
IInterchangeTexturePayloadInterface::~IInterchangeTexturePayloadInterface
          (IInterchangeTexturePayloadInterface *this)

{
  *this = (IInterchangeTexturePayloadInterface)&___7IInterchangeTexturePayloadInterface__6B_;
  return;
}

// GetCompressedTexturePayloadData @ 14e69e390

TOptional<UE::Interchange::FImportImage> * __thiscall
IInterchangeTexturePayloadInterface::GetCompressedTexturePayloadData
          (IInterchangeTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,
          UInterchangeSourceData *param_1,FString *param_2)

{
  void *local_28;
  undefined4 local_20;
  int local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_1c = -1;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 0x28))(this,__return_storage_ptr__,&local_18,&local_28);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if ((local_1c != -1) && (local_28 != (void *)0x0)) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetCompressedTexturePayloadData @ 14e69e400

TOptional<UE::Interchange::FImportImage> * __thiscall
IInterchangeTexturePayloadInterface::GetCompressedTexturePayloadData
          (IInterchangeTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e6a1e20

TOptional<UE::Interchange::FImportImage> * __thiscall
IInterchangeTexturePayloadInterface::GetTexturePayloadData
          (IInterchangeTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Public\\Texture\\InterchangeTexturePayloadInterface.h"
             ,0x2b,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e6a1e60

TOptional<UE::Interchange::FImportImage> * __thiscall
IInterchangeTexturePayloadInterface::GetTexturePayloadData
          (IInterchangeTexturePayloadInterface *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,
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

// SupportCompressedTexturePayloadData @ 14e6a83d0

bool __thiscall
IInterchangeTexturePayloadInterface::SupportCompressedTexturePayloadData
          (IInterchangeTexturePayloadInterface *this)

{
  return false;
}

// _getUObject @ 14e6aac90

UObject * __thiscall
IInterchangeTexturePayloadInterface::_getUObject(IInterchangeTexturePayloadInterface *this)

{
  return (UObject *)0x0;
}

