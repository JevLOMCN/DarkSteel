// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// StaticStruct @ 146725380

UScriptStruct * __cdecl FColorMaterialParameterInfoAndCurves::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FColorMaterialParameterInfoAndCurves.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FColorMaterialParameterInfoAndCurves.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves,
                         (UObject *)pUVar1,L"ColorMaterialParameterInfoAndCurves");
  }
  return Z_Registration_Info_UScriptStruct_FColorMaterialParameterInfoAndCurves.OuterSingleton;
}

// FColorMaterialParameterInfoAndCurves @ 14675fab0

FColorMaterialParameterInfoAndCurves * __thiscall
FColorMaterialParameterInfoAndCurves::FColorMaterialParameterInfoAndCurves
          (FColorMaterialParameterInfoAndCurves *this,FColorMaterialParameterInfoAndCurves *param_1)

{
  TEnumAsByte<EMaterialParameterAssociation> TVar1;
  undefined3 uVar2;
  int iVar3;
  
  TVar1.Value = (param_1->ParameterInfo).Association.Value;
  uVar2 = *(undefined3 *)&(param_1->ParameterInfo).field_0x9;
  iVar3 = (param_1->ParameterInfo).Index;
  (this->ParameterInfo).Name = (param_1->ParameterInfo).Name;
  (this->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar1.Value;
  *(undefined3 *)&(this->ParameterInfo).field_0x9 = uVar2;
  (this->ParameterInfo).Index = iVar3;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RedCurve,&param_1->RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->GreenCurve,&param_1->GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BlueCurve,&param_1->BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->AlphaCurve,&param_1->AlphaCurve);
  return this;
}

// FColorMaterialParameterInfoAndCurves @ 14675fb20

FColorMaterialParameterInfoAndCurves * __thiscall
FColorMaterialParameterInfoAndCurves::FColorMaterialParameterInfoAndCurves
          (FColorMaterialParameterInfoAndCurves *this,FMaterialParameterInfo *param_1)

{
  TEnumAsByte<EMaterialParameterAssociation> TVar1;
  undefined3 uVar2;
  int iVar3;
  
  (this->ParameterInfo).Index = -1;
  (this->ParameterInfo).Name.ComparisonIndex = 0;
  (this->ParameterInfo).Name.Number = 0;
  (this->ParameterInfo).Association.Value = '\x02';
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->AlphaCurve);
  TVar1.Value = (param_1->Association).Value;
  uVar2 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->Index;
  (this->ParameterInfo).Name = param_1->Name;
  (this->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar1.Value;
  *(undefined3 *)&(this->ParameterInfo).field_0x9 = uVar2;
  (this->ParameterInfo).Index = iVar3;
  return this;
}

