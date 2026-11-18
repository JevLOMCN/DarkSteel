// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FAccumulatedShake @ 14675f500

FAccumulatedShake * __thiscall
UE::MovieScene::FAccumulatedShake::FAccumulatedShake
          (FAccumulatedShake *this,FAccumulatedShake *param_1)

{
  ForElementType<TTuple<FPostProcessSettings,float>_> FVar1;
  double dVar2;
  
  this->bApplyTransform = param_1->bApplyTransform;
  this->bApplyPostProcessing = param_1->bApplyPostProcessing;
  dVar2 = (param_1->TotalTransformOffset).Rotation.XY.m128d_f64[1];
  (this->TotalTransformOffset).Rotation.XY.m128d_f64[0] =
       (param_1->TotalTransformOffset).Rotation.XY.m128d_f64[0];
  (this->TotalTransformOffset).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->TotalTransformOffset).Rotation.ZW.m128d_f64[1];
  (this->TotalTransformOffset).Rotation.ZW.m128d_f64[0] =
       (param_1->TotalTransformOffset).Rotation.ZW.m128d_f64[0];
  (this->TotalTransformOffset).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->TotalTransformOffset).Translation.XY.m128d_f64[1];
  (this->TotalTransformOffset).Translation.XY.m128d_f64[0] =
       (param_1->TotalTransformOffset).Translation.XY.m128d_f64[0];
  (this->TotalTransformOffset).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->TotalTransformOffset).Translation.ZW.m128d_f64[1];
  (this->TotalTransformOffset).Translation.ZW.m128d_f64[0] =
       (param_1->TotalTransformOffset).Translation.ZW.m128d_f64[0];
  (this->TotalTransformOffset).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->TotalTransformOffset).Scale3D.XY.m128d_f64[1];
  (this->TotalTransformOffset).Scale3D.XY.m128d_f64[0] =
       (param_1->TotalTransformOffset).Scale3D.XY.m128d_f64[0];
  (this->TotalTransformOffset).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->TotalTransformOffset).Scale3D.ZW.m128d_f64[1];
  (this->TotalTransformOffset).Scale3D.ZW.m128d_f64[0] =
       (param_1->TotalTransformOffset).Scale3D.ZW.m128d_f64[0];
  (this->TotalTransformOffset).Scale3D.ZW.m128d_f64[1] = dVar2;
  this->TotalFOVOffset = param_1->TotalFOVOffset;
  (this->PostProcessSettings).AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0;
  if ((param_1->PostProcessSettings).AllocatorInstance.SecondaryData ==
      (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0) {
    memmove(&this->PostProcessSettings,&param_1->PostProcessSettings,0xf00);
  }
  FVar1 = (this->PostProcessSettings).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->PostProcessSettings).AllocatorInstance.SecondaryData =
       (param_1->PostProcessSettings).AllocatorInstance.SecondaryData;
  (param_1->PostProcessSettings).AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0;
  (this->PostProcessSettings).ArrayNum = (param_1->PostProcessSettings).ArrayNum;
  (this->PostProcessSettings).ArrayMax = (param_1->PostProcessSettings).ArrayMax;
  (param_1->PostProcessSettings).ArrayNum = 0;
  (param_1->PostProcessSettings).ArrayMax = 2;
  return this;
}

