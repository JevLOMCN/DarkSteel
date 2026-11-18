// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// ~IMovieSceneChannelOwner @ 14629ba30

void __thiscall IMovieSceneChannelOwner::~IMovieSceneChannelOwner(IMovieSceneChannelOwner *this)

{
  *this = (IMovieSceneChannelOwner)&___7IMovieSceneChannelOwner__6B_;
  return;
}

// GetCapabilities @ 1462aecf0

FChannelOwnerCapabilities __thiscall
IMovieSceneChannelOwner::GetCapabilities(IMovieSceneChannelOwner *this,FName param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfe;
  return param_1.ComparisonIndex.Value._0_1_;
}

// IsMuted @ 1462b56f0

bool __thiscall IMovieSceneChannelOwner::IsMuted(IMovieSceneChannelOwner *this,FName param_1)

{
  return false;
}

// SetIsMuted @ 1462bd1a0

void __thiscall
IMovieSceneChannelOwner::SetIsMuted(IMovieSceneChannelOwner *this,FName param_1,bool param_2)

{
  return;
}

// _getUObject @ 1462bfc70

UObject * __thiscall IMovieSceneChannelOwner::_getUObject(IMovieSceneChannelOwner *this)

{
  return (UObject *)0x0;
}

