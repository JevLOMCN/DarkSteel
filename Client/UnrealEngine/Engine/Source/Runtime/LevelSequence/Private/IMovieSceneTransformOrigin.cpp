// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 3

// ~IMovieSceneTransformOrigin @ 146c4eff0

void __thiscall
IMovieSceneTransformOrigin::~IMovieSceneTransformOrigin(IMovieSceneTransformOrigin *this)

{
  *this = (IMovieSceneTransformOrigin)&___7IMovieSceneTransformOrigin__6B_;
  return;
}

// NativeGetTransformOrigin @ 146c57c30

TTransform<double> * __thiscall
IMovieSceneTransformOrigin::NativeGetTransformOrigin
          (IMovieSceneTransformOrigin *this,TTransform<double> *__return_storage_ptr__)

{
  BP_GetTransformOrigin(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _getUObject @ 146c5e420

UObject * __thiscall IMovieSceneTransformOrigin::_getUObject(IMovieSceneTransformOrigin *this)

{
  return (UObject *)0x0;
}

