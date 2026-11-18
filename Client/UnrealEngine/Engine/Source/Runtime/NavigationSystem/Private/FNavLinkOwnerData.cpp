// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FNavLinkOwnerData @ 146dd3fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavLinkOwnerData * __thiscall
NavigationHelper::FNavLinkOwnerData::FNavLinkOwnerData(FNavLinkOwnerData *this,AActor *param_1)

{
  USceneComponent *pUVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TTransform<double> *pTVar11;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Scale3D.ZW.m128d_f64 = auVar9;
  this->Actor = param_1;
  pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USceneComponent *)0x0) {
    pTVar11 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar11 = &pUVar1->ComponentToWorld;
  }
  dVar10 = (pTVar11->Rotation).XY.m128d_f64[1];
  (this->LinkToWorld).Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
  (this->LinkToWorld).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (pTVar11->Rotation).ZW.m128d_f64[1];
  (this->LinkToWorld).Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
  (this->LinkToWorld).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (pTVar11->Translation).XY.m128d_f64[1];
  (this->LinkToWorld).Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
  (this->LinkToWorld).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (pTVar11->Translation).ZW.m128d_f64[1];
  (this->LinkToWorld).Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
  (this->LinkToWorld).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (pTVar11->Scale3D).XY.m128d_f64[1];
  (this->LinkToWorld).Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
  (this->LinkToWorld).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (pTVar11->Scale3D).ZW.m128d_f64[1];
  (this->LinkToWorld).Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  (this->LinkToWorld).Scale3D.ZW.m128d_f64[1] = dVar10;
  return this;
}

// FNavLinkOwnerData @ 146dd4040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavLinkOwnerData * __thiscall
NavigationHelper::FNavLinkOwnerData::FNavLinkOwnerData
          (FNavLinkOwnerData *this,USceneComponent *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LinkToWorld).Scale3D.ZW.m128d_f64 = auVar8;
  this->Actor = (AActor *)param_1->_padding_;
  dVar9 = (param_1->ComponentToWorld).Rotation.XY.m128d_f64[1];
  (this->LinkToWorld).Rotation.XY.m128d_f64[0] =
       (param_1->ComponentToWorld).Rotation.XY.m128d_f64[0];
  (this->LinkToWorld).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  (this->LinkToWorld).Rotation.ZW.m128d_f64[0] =
       (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  (this->LinkToWorld).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
  (this->LinkToWorld).Translation.XY.m128d_f64[0] =
       (param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
  (this->LinkToWorld).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[1];
  (this->LinkToWorld).Translation.ZW.m128d_f64[0] =
       (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  (this->LinkToWorld).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  (this->LinkToWorld).Scale3D.XY.m128d_f64[0] = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  (this->LinkToWorld).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
  (this->LinkToWorld).Scale3D.ZW.m128d_f64[0] = (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  (this->LinkToWorld).Scale3D.ZW.m128d_f64[1] = dVar9;
  return this;
}

