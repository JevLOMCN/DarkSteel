// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 146725340

UScriptStruct * __cdecl FScalarMaterialParameterInfoAndCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FScalarMaterialParameterInfoAndCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FScalarMaterialParameterInfoAndCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve,
                         (UObject *)pUVar1,L"ScalarMaterialParameterInfoAndCurve");
  }
  return Z_Registration_Info_UScriptStruct_FScalarMaterialParameterInfoAndCurve.OuterSingleton;
}

// FScalarMaterialParameterInfoAndCurve @ 146760020

FScalarMaterialParameterInfoAndCurve * __thiscall
FScalarMaterialParameterInfoAndCurve::FScalarMaterialParameterInfoAndCurve
          (FScalarMaterialParameterInfoAndCurve *this,FMaterialParameterInfo *param_1)

{
  TEnumAsByte<EMaterialParameterAssociation> TVar1;
  undefined3 uVar2;
  int iVar3;
  
  (this->ParameterInfo).Index = -1;
  (this->ParameterInfo).Name.ComparisonIndex = 0;
  (this->ParameterInfo).Name.Number = 0;
  (this->ParameterInfo).Association.Value = '\x02';
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->ParameterCurve);
  TVar1.Value = (param_1->Association).Value;
  uVar2 = *(undefined3 *)&param_1->field_0x9;
  iVar3 = param_1->Index;
  (this->ParameterInfo).Name = param_1->Name;
  (this->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar1.Value;
  *(undefined3 *)&(this->ParameterInfo).field_0x9 = uVar2;
  (this->ParameterInfo).Index = iVar3;
  return this;
}

