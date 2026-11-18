// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// operator() @ 146626c10

void __thiscall
TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes>::operator()
          (TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes> *this,
          FMovieSceneTracksComponentTypes *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FMovieSceneTracksComponentTypes *)0x0) {
    UE::MovieScene::FMovieSceneTracksComponentTypes::FAccessors::~FAccessors(&param_1->Accessors);
    (param_1->Parameters).Transform.PropertyTraits =
         (TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Parameters).Color.PropertyTraits =
         (TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Parameters).Vector3.PropertyTraits =
         (TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Parameters).Vector2.PropertyTraits =
         (TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Parameters).Scalar.PropertyTraits =
         (TPropertyTraits<float,double,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Parameters).Integer.PropertyTraits =
         (TPropertyTraits<int,int,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Parameters).Byte.PropertyTraits =
         (TPropertyTraits<unsigned_char,unsigned_char,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Parameters).Bool.PropertyTraits =
         (TPropertyTraits<bool,bool,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->ColorParameter).PropertyTraits =
         (TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->FloatParameter).PropertyTraits =
         (TPropertyTraits<float,double,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Object).PropertyTraits =
         (FObjectPropertyTraits)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Text).PropertyTraits =
         (TPropertyTraits<FText,FText,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->String).PropertyTraits =
         (TPropertyTraits<FString,FString,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Rotator).PropertyTraits =
         (TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->ComponentTransform).PropertyTraits =
         (TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>
          )&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->EulerTransform).PropertyTraits =
         (TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    pFVar1 = (param_1->Transform).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Transform).PropertyTraits._padding_ =
         (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
    pFVar1 = (param_1->DoubleVector).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->DoubleVector).PropertyTraits._padding_ =
         (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
    pFVar1 = (param_1->FloatVector).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->FloatVector).PropertyTraits._padding_ =
         (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
    pFVar1 = (param_1->Color).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Color).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
    pFVar1 = (param_1->Double).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Double).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Float).PropertyTraits = (FFloatPropertyTraits)&___7IPropertyTraits_MovieScene_UE__6B_;
    pFVar1 = (param_1->Integer).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Integer).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Enum).PropertyTraits =
         (TPropertyTraits<unsigned_char,unsigned_char,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Byte).PropertyTraits =
         (TPropertyTraits<unsigned_char,unsigned_char,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
    (param_1->Bool).PropertyTraits = (FBoolPropertyTraits)&___7IPropertyTraits_MovieScene_UE__6B_;
    ::operator_delete(param_1,0x1280);
  }
  return;
}

