// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// StaticStruct @ 14dd5ef70

UScriptStruct * __cdecl FMovieGraphPostRenderImageSequencePlayOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions,
                         (UObject *)pUVar1,L"MovieGraphPostRenderImageSequencePlayOptions");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderImageSequencePlayOptions.
         OuterSingleton;
}

// FMovieGraphPostRenderImageSequencePlayOptions @ 14dd69de0

FMovieGraphPostRenderImageSequencePlayOptions * __thiscall
FMovieGraphPostRenderImageSequencePlayOptions::FMovieGraphPostRenderImageSequencePlayOptions
          (FMovieGraphPostRenderImageSequencePlayOptions *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->FrameRangeNotation = HashWithStartEndFrame;
  this->PlaybackRange = FirstFrameOnly;
  return this;
}

