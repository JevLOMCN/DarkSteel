// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// PreTask @ 14ac7de00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FGatherPropertyScales::PreTask(FGatherPropertyScales *this)

{
  TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
           *)&this->EvaluatorSystem->PropertyScales);
  return;
}

