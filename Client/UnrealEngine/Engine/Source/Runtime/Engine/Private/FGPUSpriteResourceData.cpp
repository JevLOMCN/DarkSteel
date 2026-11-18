// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147312200

UScriptStruct * __cdecl FGPUSpriteResourceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGPUSpriteResourceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FGPUSpriteResourceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteResourceData,(UObject *)pUVar1,
                         L"GPUSpriteResourceData");
  }
  return Z_Registration_Info_UScriptStruct_FGPUSpriteResourceData.OuterSingleton;
}

// FGPUSpriteResourceData @ 147318630

FGPUSpriteResourceData * __thiscall
FGPUSpriteResourceData::FGPUSpriteResourceData(FGPUSpriteResourceData *this)

{
  undefined1 *puVar1;
  
  this->bUseVelocityForMotionBlur = 0;
  this->bRemoveHMDRoll = 0;
  (this->QuantizedColorSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PivotOffset).field0_0x0._s_0.X = -0.5;
  (this->PivotOffset).field0_0x0._s_0.Y = -0.5;
  (this->QuantizedColorSamples).ArrayNum = 0;
  (this->QuantizedColorSamples).ArrayMax = 0;
  (this->QuantizedMiscSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuantizedMiscSamples).ArrayNum = 0;
  (this->QuantizedMiscSamples).ArrayMax = 0;
  (this->QuantizedSimulationAttrSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuantizedSimulationAttrSamples).ArrayNum = 0;
  (this->QuantizedSimulationAttrSamples).ArrayMax = 0;
  (this->ColorScale).field0_0x0._s_0.X = 0.0;
  (this->ColorScale).field0_0x0._s_0.Y = 0.0;
  (this->ColorScale).field0_0x0._s_0.Z = 0.0;
  (this->ColorScale).field0_0x0._s_0.W = 0.0;
  (this->ColorBias).field0_0x0._s_0.X = 0.0;
  (this->ColorBias).field0_0x0._s_0.Y = 0.0;
  (this->ColorBias).field0_0x0._s_0.Z = 0.0;
  (this->ColorBias).field0_0x0._s_0.W = 0.0;
  (this->MiscScale).field0_0x0._s_0.X = 0.0;
  (this->MiscScale).field0_0x0._s_0.Y = 0.0;
  (this->MiscScale).field0_0x0._s_0.Z = 0.0;
  (this->MiscScale).field0_0x0._s_0.W = 0.0;
  (this->MiscBias).field0_0x0._s_0.X = 0.0;
  (this->MiscBias).field0_0x0._s_0.Y = 0.0;
  (this->MiscBias).field0_0x0._s_0.Z = 0.0;
  (this->MiscBias).field0_0x0._s_0.W = 0.0;
  (this->SimulationAttrCurveScale).field0_0x0._s_0.X = 0.0;
  (this->SimulationAttrCurveScale).field0_0x0._s_0.Y = 0.0;
  (this->SimulationAttrCurveScale).field0_0x0._s_0.Z = 0.0;
  (this->SimulationAttrCurveScale).field0_0x0._s_0.W = 0.0;
  (this->SimulationAttrCurveBias).field0_0x0._s_0.X = 0.0;
  (this->SimulationAttrCurveBias).field0_0x0._s_0.Y = 0.0;
  (this->SimulationAttrCurveBias).field0_0x0._s_0.Z = 0.0;
  (this->SimulationAttrCurveBias).field0_0x0._s_0.W = 0.0;
  (this->SubImageSize).field0_0x0._s_0.X = 0.0;
  (this->SubImageSize).field0_0x0._s_0.Y = 0.0;
  (this->SubImageSize).field0_0x0._s_0.Z = 0.0;
  (this->SubImageSize).field0_0x0._s_0.W = 0.0;
  (this->SizeBySpeed).field0_0x0._s_0.X = 0.0;
  (this->SizeBySpeed).field0_0x0._s_0.Y = 0.0;
  (this->SizeBySpeed).field0_0x0._s_0.Z = 0.0;
  (this->SizeBySpeed).field0_0x0._s_0.W = 0.0;
  (this->ConstantAcceleration).field0_0x0._s_0.X = 0.0;
  (this->ConstantAcceleration).field0_0x0._s_0.Y = 0.0;
  (this->ConstantAcceleration).field0_0x0._s_0.Z = 0.0;
  (this->OrbitOffsetBase).field0_0x0._s_0.X = 0.0;
  (this->OrbitOffsetBase).field0_0x0._s_0.Y = 0.0;
  (this->OrbitOffsetBase).field0_0x0._s_0.Z = 0.0;
  (this->OrbitOffsetRange).field0_0x0._s_0.X = 0.0;
  (this->OrbitOffsetRange).field0_0x0._s_0.Y = 0.0;
  (this->OrbitOffsetRange).field0_0x0._s_0.Z = 0.0;
  (this->OrbitFrequencyBase).field0_0x0._s_0.X = 0.0;
  (this->OrbitFrequencyBase).field0_0x0._s_0.Y = 0.0;
  (this->OrbitFrequencyBase).field0_0x0._s_0.Z = 0.0;
  (this->OrbitFrequencyRange).field0_0x0._s_0.X = 0.0;
  (this->OrbitFrequencyRange).field0_0x0._s_0.Y = 0.0;
  (this->OrbitFrequencyRange).field0_0x0._s_0.Z = 0.0;
  (this->OrbitPhaseBase).field0_0x0._s_0.X = 0.0;
  (this->OrbitPhaseBase).field0_0x0._s_0.Y = 0.0;
  (this->OrbitPhaseBase).field0_0x0._s_0.Z = 0.0;
  (this->OrbitPhaseRange).field0_0x0._s_0.X = 0.0;
  (this->OrbitPhaseRange).field0_0x0._s_0.Y = 0.0;
  (this->OrbitPhaseRange).field0_0x0._s_0.Z = 0.0;
  this->GlobalVectorFieldScale = 0.0;
  this->GlobalVectorFieldTightness = -1.0;
  this->PerParticleVectorFieldScale = 0.0;
  this->PerParticleVectorFieldBias = 0.0;
  this->DragCoefficientScale = 0.0;
  this->DragCoefficientBias = 0.0;
  this->ResilienceScale = 0.0;
  this->ResilienceBias = 0.0;
  this->CollisionRadiusScale = 0.0;
  this->CollisionRadiusBias = 0.0;
  this->CollisionTimeBias = 0.0;
  this->CollisionRandomSpread = 0.0;
  this->CollisionRandomDistribution = 2.0;
  this->OneMinusFriction = 0.0;
  this->RotationRateScale = 0.0;
  this->CameraMotionBlurAmount = 0.0;
  this->ScreenAlignment = '\0';
  this->LockAxisFlag = '\0';
  this->MinFacingCameraBlendDistance = 0.0;
  this->MaxFacingCameraBlendDistance = 0.0;
  return this;
}

