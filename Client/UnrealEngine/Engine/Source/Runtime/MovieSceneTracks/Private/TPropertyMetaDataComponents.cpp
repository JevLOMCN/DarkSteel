// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// Initialize @ 1466a0950

void __thiscall
UE::MovieScene::
TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
::Initialize(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
             *this,FComponentRegistry *param_1,wchar_t *param_2)

{
  TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> TVar1;
  undefined6 extraout_var;
  wchar_t local_res8 [16];
  
  TVar1 = FComponentRegistry::NewComponentType<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
                    (param_1,local_res8,(FNewComponentTypeParams *)param_2);
  *this = *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
            *)CONCAT62(extraout_var,TVar1);
  return;
}

// Initialize @ 1466a0990

void __thiscall
UE::MovieScene::
TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
::Initialize(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
             *this,FComponentRegistry *param_1,wchar_t *param_2)

{
  TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> TVar1;
  undefined6 extraout_var;
  wchar_t local_res8 [16];
  
  TVar1 = FComponentRegistry::
          NewComponentType<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                    (param_1,local_res8,(FNewComponentTypeParams *)param_2);
  *this = *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
            *)CONCAT62(extraout_var,TVar1);
  return;
}

