// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetStorageType @ 146837c50

FPreAnimatedStorageID __thiscall
UE::MovieScene::FPreAnimatedFadeStateStorage::GetStorageType(FPreAnimatedFadeStateStorage *this)

{
  TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedFadeStateStorage> *in_RDX;
  
  *in_RDX = StorageID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

