// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 5

// ~IInterchangeTextureLightProfilePayloadInterface @ 14e6b9a60

void __thiscall
IInterchangeTextureLightProfilePayloadInterface::~IInterchangeTextureLightProfilePayloadInterface
          (IInterchangeTextureLightProfilePayloadInterface *this)

{
  *this = (IInterchangeTextureLightProfilePayloadInterface)
          &___7IInterchangeTextureLightProfilePayloadInterface__6B_;
  return;
}

// GetLightProfilePayloadData @ 14e6c3ab0

TOptional<UE::Interchange::FImportLightProfile> * __thiscall
IInterchangeTextureLightProfilePayloadInterface::GetLightProfilePayloadData
          (IInterchangeTextureLightProfilePayloadInterface *this,
          TOptional<UE::Interchange::FImportLightProfile> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Public\\Texture\\InterchangeTextureLightProfilePayloadInterface.h"
             ,0x2b,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetLightProfilePayloadData @ 14e6c3af0

TOptional<UE::Interchange::FImportLightProfile> * __thiscall
IInterchangeTextureLightProfilePayloadInterface::GetLightProfilePayloadData
          (IInterchangeTextureLightProfilePayloadInterface *this,
          TOptional<UE::Interchange::FImportLightProfile> *__return_storage_ptr__,uchar *param_1,
          uint param_2)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetLightProfilePayloadData @ 14e6c3b10

TOptional<UE::Interchange::FImportLightProfile> * __thiscall
IInterchangeTextureLightProfilePayloadInterface::GetLightProfilePayloadData
          (IInterchangeTextureLightProfilePayloadInterface *this,
          TOptional<UE::Interchange::FImportLightProfile> *__return_storage_ptr__,
          UInterchangeSourceData *param_1,FString *param_2)

{
  void *local_18;
  undefined4 local_10;
  int local_c;
  
  local_c = -1;
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)((longlong)*this + 0x18))(this,__return_storage_ptr__,param_2,&local_18);
  if ((local_c != -1) && (local_18 != (void *)0x0)) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// _getUObject @ 14e6d7fa0

UObject * __thiscall
IInterchangeTextureLightProfilePayloadInterface::_getUObject
          (IInterchangeTextureLightProfilePayloadInterface *this)

{
  return (UObject *)0x0;
}

