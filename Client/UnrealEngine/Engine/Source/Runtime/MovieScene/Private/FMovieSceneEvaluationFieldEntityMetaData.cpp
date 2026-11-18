// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146162a60

UScriptStruct * __cdecl FMovieSceneEvaluationFieldEntityMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData,
                         (UObject *)pUVar1,L"MovieSceneEvaluationFieldEntityMetaData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationFieldEntityMetaData.OuterSingleton;
}

// FMovieSceneEvaluationFieldEntityMetaData @ 14617ee60

FMovieSceneEvaluationFieldEntityMetaData * __thiscall
FMovieSceneEvaluationFieldEntityMetaData::FMovieSceneEvaluationFieldEntityMetaData
          (FMovieSceneEvaluationFieldEntityMetaData *this,
          FMovieSceneEvaluationFieldEntityMetaData *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  
  *(undefined8 *)&(this->Condition).SoftObjectPtr =
       *(undefined8 *)&(param_1->Condition).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->Condition).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->Condition).SoftObjectPtr.field_0x8);
  ::FString::FString(&this->OverrideBoundPropertyPath,&param_1->OverrideBoundPropertyPath);
  this->NotifyFunctionName = param_1->NotifyFunctionName;
  (this->ForcedTime).Value = (param_1->ForcedTime).Value;
  this->Flags = param_1->Flags;
  bVar2 = (this->bEvaluateInSequencePreRoll ^ param_1->bEvaluateInSequencePreRoll) & 1 ^
          this->field_0x45;
  this->field_0x45 = bVar2;
  this->field_0x45 = (bVar2 ^ param_1->field_0x45) & 2 ^ bVar2;
  return this;
}

