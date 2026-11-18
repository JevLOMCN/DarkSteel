// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// GetHandle @ 14668a1d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146794f60

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146794f80

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

