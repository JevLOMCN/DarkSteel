// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146724ae0

UScriptStruct * __cdecl FColorParameterNameAndCurves::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FColorParameterNameAndCurves.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FColorParameterNameAndCurves.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FColorParameterNameAndCurves,(UObject *)pUVar1,
                         L"ColorParameterNameAndCurves");
  }
  return Z_Registration_Info_UScriptStruct_FColorParameterNameAndCurves.OuterSingleton;
}

// FColorParameterNameAndCurves @ 14675fb90

FColorParameterNameAndCurves * __thiscall
FColorParameterNameAndCurves::FColorParameterNameAndCurves
          (FColorParameterNameAndCurves *this,FColorParameterNameAndCurves *param_1)

{
  this->_padding_ = param_1->_padding_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RedCurve,&param_1->RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->GreenCurve,&param_1->GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BlueCurve,&param_1->BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->AlphaCurve,&param_1->AlphaCurve);
  return this;
}

