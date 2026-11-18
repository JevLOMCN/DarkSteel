// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14732b130

UScriptStruct * __cdecl FSkyAtmosphereDynamicState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkyAtmosphereDynamicState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkyAtmosphereDynamicState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkyAtmosphereDynamicState,(UObject *)pUVar1,
                         L"SkyAtmosphereDynamicState");
  }
  return Z_Registration_Info_UScriptStruct_FSkyAtmosphereDynamicState.OuterSingleton;
}

// FSkyAtmosphereDynamicState @ 147330be0

FSkyAtmosphereDynamicState * __thiscall
FSkyAtmosphereDynamicState::FSkyAtmosphereDynamicState(FSkyAtmosphereDynamicState *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  FLinearColor FVar10;
  
  this->ModifiedFlags = 0;
  this->TransformMode = PlanetTopAtAbsoluteWorldOrigin;
  this->BottomRadius = 0.0;
  (this->GroundAlbedo).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  this->AtmosphereHeight = 0.0;
  this->MultiScatteringFactor = 0.0;
  this->TraceSampleCountScale = 0.0;
  FVar10 = FLinearColor::White;
  this->RayleighScatteringScale = 0.0;
  this->RayleighExponentialDistribution = 0.0;
  this->MieScatteringScale = 0.0;
  (this->RayleighScattering).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar10.field0_0x0;
  FVar10 = FLinearColor::White;
  this->MieAbsorptionScale = 0.0;
  (this->MieScattering).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar10.field0_0x0;
  FVar10 = FLinearColor::White;
  this->MieAnisotropy = 0.0;
  this->MieExponentialDistribution = 0.0;
  this->OtherAbsorptionScale = 0.0;
  (this->MieAbsorption).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar10.field0_0x0;
  FVar10 = FLinearColor::White;
  this->OtherTentDistributionTipAltitude = 0.0;
  this->OtherTentDistributionTipValue = 0.0;
  this->OtherTentDistributionWidth = 1.0;
  (this->OtherAbsorption).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar10.field0_0x0;
  (this->SkyLuminanceFactor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar10 = FLinearColor::White;
  this->bHoldout = '\0';
  this->bBuilt = '\0';
  this->bRenderInMainPass = '\0';
  this->AerialPespectiveViewDistanceScale = 0.0;
  this->HeightFogContribution = 0.0;
  (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar10.field0_0x0;
  this->TransmittanceMinLightElevationAngle = 0.0;
  this->AerialPerspectiveStartDepth = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.ZW.m128d_f64 = auVar9;
  *(undefined8 *)&this->OverrideAtmosphericLight = 0;
  (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.X = 0.0;
  (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Y = 0.0;
  (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Z = 0.0;
  (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.X = 0.0;
  (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Y = 0.0;
  (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Z = 0.0;
  return this;
}

