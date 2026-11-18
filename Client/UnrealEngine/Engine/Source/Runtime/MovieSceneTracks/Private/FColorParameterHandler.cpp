// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// MakeInitialValueProcessor @ 1466a7ea0

TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> * __thiscall
UE::MovieScene::FColorParameterHandler::MakeInitialValueProcessor
          (FColorParameterHandler *this,
          TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *__return_storage_ptr__,
          FPropertyDefinition *param_1)

{
  __return_storage_ptr__->Object = (IInitialValueProcessor *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

