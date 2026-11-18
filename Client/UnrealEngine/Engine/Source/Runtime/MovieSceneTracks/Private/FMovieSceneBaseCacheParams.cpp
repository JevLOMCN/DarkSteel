// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// StaticStruct @ 14658dd70

UScriptStruct * __cdecl FMovieSceneBaseCacheParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBaseCacheParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneBaseCacheParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams,(UObject *)pUVar1,
                         L"MovieSceneBaseCacheParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBaseCacheParams.OuterSingleton;
}

// GetSequenceLength @ 14658ddb0

float __thiscall FMovieSceneBaseCacheParams::GetSequenceLength(FMovieSceneBaseCacheParams *this)

{
  return 0.0;
}

// FMovieSceneBaseCacheParams @ 14660fe70

FMovieSceneBaseCacheParams * __thiscall
FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams(FMovieSceneBaseCacheParams *this)

{
  this->bReverse = 0;
  this->_padding_ = (longlong)&___7FMovieSceneBaseCacheParams__6B_;
  this->FirstLoopStartFrameOffset = 0;
  this->StartFrameOffset = 0;
  (this->EndFrameOffset).Value = 0;
  this->PlayRate = 1.0;
  return this;
}

// ~FMovieSceneBaseCacheParams @ 146620b80

void __thiscall
FMovieSceneBaseCacheParams::~FMovieSceneBaseCacheParams(FMovieSceneBaseCacheParams *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneBaseCacheParams__6B_;
  return;
}

