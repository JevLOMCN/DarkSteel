// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// Reset @ 14693cbe0

void __thiscall
TUniquePtr<UE::MovieScene::FMovieSceneUMGComponentTypes,TDefaultDelete<UE::MovieScene::FMovieSceneUMGComponentTypes>_>
::Reset(TUniquePtr<UE::MovieScene::FMovieSceneUMGComponentTypes,TDefaultDelete<UE::MovieScene::FMovieSceneUMGComponentTypes>_>
        *this,FMovieSceneUMGComponentTypes *param_1)

{
  FMovieSceneUMGComponentTypes *pFVar1;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
  FVar2;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
  FVar3;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FMovieSceneUMGComponentTypes *)0x0)) {
    FVar2 = (pFVar1->CustomWidgetTransformAccessors).CustomAccessors.AllocatorInstance.SecondaryData
    ;
    if (FVar2 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar2);
    }
    (pFVar1->CustomWidgetTransformAccessors)._padding_ =
         (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
    FVar3 = (pFVar1->CustomMarginAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar3);
    }
    (pFVar1->CustomMarginAccessors)._padding_ =
         (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
    (pFVar1->WidgetTransform).PropertyTraits =
         (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    (pFVar1->Margin).PropertyTraits =
         (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    ::operator_delete(pFVar1,0xb8);
  }
  return;
}

