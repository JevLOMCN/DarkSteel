// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// ~IPropertyComponentHandler @ 146621410

void __thiscall
UE::MovieScene::IPropertyComponentHandler::~IPropertyComponentHandler
          (IPropertyComponentHandler *this)

{
  *this = (IPropertyComponentHandler)&___7IPropertyComponentHandler_MovieScene_UE__6B_;
  return;
}

// DispatchInitializePropertyMetaDataTasks @ 14665d750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::IPropertyComponentHandler::DispatchInitializePropertyMetaDataTasks
          (IPropertyComponentHandler *this,FPropertyDefinition *param_1,
          FSystemTaskPrerequisites *param_2,FSystemSubsequentTasks *param_3,
          UMovieSceneEntitySystemLinker *param_4)

{
  return;
}

// GetPreAnimatedStateStorage @ 146695ea0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> * __thiscall
UE::MovieScene::IPropertyComponentHandler::GetPreAnimatedStateStorage
          (IPropertyComponentHandler *this,
          TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *__return_storage_ptr__,
          FPropertyDefinition *param_1,FPreAnimatedStateExtension *param_2)

{
  __return_storage_ptr__->Object = (IPreAnimatedStorage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

