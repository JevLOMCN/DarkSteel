// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// StaticStruct @ 146591620

UScriptStruct * __cdecl FMovieSceneParticleParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneParticleParameterSectionTemplate.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneParticleParameterSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleParameterSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneParticleParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneParticleParameterSectionTemplate.
         OuterSingleton;
}

// GetScriptStructImpl @ 146591680

UScriptStruct * __thiscall
FMovieSceneParticleParameterSectionTemplate::GetScriptStructImpl
          (FMovieSceneParticleParameterSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneParticleParameterSectionTemplate.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneParticleParameterSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleParameterSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneParticleParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneParticleParameterSectionTemplate.
         OuterSingleton;
}

// Evaluate @ 146591700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneParticleParameterSectionTemplate::Evaluate
          (FMovieSceneParticleParameterSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  undefined1 auStack_208 [32];
  FParticleParameterExecutionToken local_1e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_1e8._padding_ = (longlong)&___7FParticleParameterExecutionToken__6B_;
  local_1e8.Values.ScalarValues.ArrayMax = 2;
  local_1e8.Values.ScalarValues.AllocatorInstance.SecondaryData =
       (ForElementType<FScalarParameterNameAndValue>)0x0;
  local_1e8.Values.ScalarValues.ArrayNum = 0;
  local_1e8.Values.BoolValues.AllocatorInstance.SecondaryData =
       (ForElementType<FBoolParameterNameAndValue>)0x0;
  local_1e8.Values.BoolValues.ArrayNum = 0;
  local_1e8.Values.Vector2DValues.AllocatorInstance.SecondaryData =
       (ForElementType<FVector2DParameterNameAndValue>)0x0;
  local_1e8.Values.Vector2DValues.ArrayNum = 0;
  local_1e8.Values.VectorValues.AllocatorInstance.SecondaryData =
       (ForElementType<FVectorParameterNameAndValue>)0x0;
  local_1e8.Values.VectorValues.ArrayNum = 0;
  local_1e8.Values.ColorValues.AllocatorInstance.SecondaryData =
       (ForElementType<FColorParameterNameAndValue>)0x0;
  local_1e8.Values.ColorValues.ArrayNum = 0;
  local_1e8.Values.TransformValues.AllocatorInstance.SecondaryData =
       (ForElementType<FTransformParameterNameAndValue>)0x0;
  local_1e8.Values.TransformValues.ArrayNum = 0;
  local_1e8.Values.BoolValues.ArrayMax = 2;
  local_1e8.Values.Vector2DValues.ArrayMax = 2;
  local_1e8.Values.VectorValues.ArrayMax = 2;
  local_1e8.Values.ColorValues.ArrayMax = 2;
  local_1e8.Values.TransformValues.ArrayMax = 2;
  FMovieSceneParameterSectionTemplate::EvaluateCurves
            ((FMovieSceneParameterSectionTemplate *)this,param_2,&local_1e8.Values);
  FMovieSceneExecutionTokens::Add<FParticleParameterExecutionToken>(param_4,&local_1e8);
  if (local_1e8.Values.TransformValues.AllocatorInstance.SecondaryData !=
      (ForElementType<FTransformParameterNameAndValue>)0x0) {
    FMemory::Free((void *)local_1e8.Values.TransformValues.AllocatorInstance.SecondaryData);
  }
  if (local_1e8.Values.ColorValues.AllocatorInstance.SecondaryData !=
      (ForElementType<FColorParameterNameAndValue>)0x0) {
    FMemory::Free((void *)local_1e8.Values.ColorValues.AllocatorInstance.SecondaryData);
  }
  if (local_1e8.Values.VectorValues.AllocatorInstance.SecondaryData !=
      (ForElementType<FVectorParameterNameAndValue>)0x0) {
    FMemory::Free((void *)local_1e8.Values.VectorValues.AllocatorInstance.SecondaryData);
  }
  if (local_1e8.Values.Vector2DValues.AllocatorInstance.SecondaryData !=
      (ForElementType<FVector2DParameterNameAndValue>)0x0) {
    FMemory::Free((void *)local_1e8.Values.Vector2DValues.AllocatorInstance.SecondaryData);
  }
  if (local_1e8.Values.BoolValues.AllocatorInstance.SecondaryData !=
      (ForElementType<FBoolParameterNameAndValue>)0x0) {
    FMemory::Free((void *)local_1e8.Values.BoolValues.AllocatorInstance.SecondaryData);
  }
  if (local_1e8.Values.ScalarValues.AllocatorInstance.SecondaryData !=
      (ForElementType<FScalarParameterNameAndValue>)0x0) {
    FMemory::Free((void *)local_1e8.Values.ScalarValues.AllocatorInstance.SecondaryData);
  }
  return;
}

// FMovieSceneParticleParameterSectionTemplate @ 1466110d0

FMovieSceneParticleParameterSectionTemplate * __thiscall
FMovieSceneParticleParameterSectionTemplate::FMovieSceneParticleParameterSectionTemplate
          (FMovieSceneParticleParameterSectionTemplate *this,UMovieSceneParameterSection *param_1,
          UMovieSceneParticleParameterTrack *param_2)

{
  FMovieSceneParameterSectionTemplate::FMovieSceneParameterSectionTemplate
            ((FMovieSceneParameterSectionTemplate *)this,param_1);
  *(undefined ***)this = &___7FMovieSceneParticleParameterSectionTemplate__6B_;
  return this;
}

