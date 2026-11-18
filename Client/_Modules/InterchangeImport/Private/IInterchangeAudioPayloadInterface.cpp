// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// ~IInterchangeAudioPayloadInterface @ 14e691c60

void __thiscall
IInterchangeAudioPayloadInterface::~IInterchangeAudioPayloadInterface
          (IInterchangeAudioPayloadInterface *this)

{
  *this = (IInterchangeAudioPayloadInterface)&___7IInterchangeAudioPayloadInterface__6B_;
  return;
}

// GetAudioPayloadData @ 14e69c910

TOptional<UE::Interchange::FInterchangeAudioPayloadData> * __thiscall
IInterchangeAudioPayloadInterface::GetAudioPayloadData
          (IInterchangeAudioPayloadInterface *this,
          TOptional<UE::Interchange::FInterchangeAudioPayloadData> *__return_storage_ptr__,
          FString *param_1)

{
  FInterchangeAudioPayloadDataUtils::GetAudioPayloadFromSourceFileKey
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// _getUObject @ 14e6aac70

UObject * __thiscall
IInterchangeAudioPayloadInterface::_getUObject(IInterchangeAudioPayloadInterface *this)

{
  return (UObject *)0x0;
}

