// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// ~IMovieSceneScalingDriver @ 1460981a0

void __thiscall IMovieSceneScalingDriver::~IMovieSceneScalingDriver(IMovieSceneScalingDriver *this)

{
  *this = (IMovieSceneScalingDriver)&___7IMovieSceneScalingDriver__6B_;
  return;
}

// PopulateInitialAnchors @ 1460df720

void __thiscall
IMovieSceneScalingDriver::PopulateInitialAnchors
          (IMovieSceneScalingDriver *this,
          TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
          *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001460df723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x18))();
  return;
}

// _getUObject @ 146100830

UObject * __thiscall IMovieSceneScalingDriver::_getUObject(IMovieSceneScalingDriver *this)

{
  return (UObject *)0x0;
}

