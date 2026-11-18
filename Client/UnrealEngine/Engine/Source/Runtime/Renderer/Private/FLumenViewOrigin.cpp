// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Init @ 144d8b6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FLumenViewOrigin::Init(FLumenViewOrigin *this,FViewInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  int iVar17;
  TVector<double> *pTVar18;
  float fVar19;
  float fVar20;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  this->Family = (FSceneViewFamily *)param_1->_padding_;
  iVar17 = GlobalDistanceField::GetNumGlobalDistanceFieldClipmaps
                     (true,*(float *)&param_1->_padding_);
  pTVar18 = Lumen::GetLumenSceneViewOrigin((TVector<double> *)&local_58,param_1,iVar17 + -1);
  dVar1 = (pTVar18->field0_0x0)._s_0.Y;
  (this->LumenSceneViewOrigin).field0_0x0._s_0.X = (pTVar18->field0_0x0)._s_0.X;
  (this->LumenSceneViewOrigin).field0_0x0._s_0.Y = dVar1;
  (this->LumenSceneViewOrigin).field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  (this->WorldCameraOrigin).field0_0x0._s_0.X = (float)(double)param_1->_padding_;
  (this->WorldCameraOrigin).field0_0x0._s_0.Y = (float)dVar1;
  (this->WorldCameraOrigin).field0_0x0._s_0.Z = (float)dVar2;
  (this->WorldCameraOrigin).field0_0x0._s_0.W = 0.0;
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  dVar4 = (double)param_1->_padding_;
  dVar5 = (double)param_1->_padding_;
  dVar6 = (double)param_1->_padding_;
  dVar7 = (double)param_1->_padding_;
  dVar8 = (double)param_1->_padding_;
  dVar9 = (double)param_1->_padding_;
  dVar10 = (double)param_1->_padding_;
  dVar11 = (double)param_1->_padding_;
  dVar12 = (double)param_1->_padding_;
  dVar13 = (double)param_1->_padding_;
  dVar14 = (double)param_1->_padding_;
  dVar15 = (double)param_1->_padding_;
  (this->ViewToClip).M[0][0] = (float)(double)param_1->_padding_;
  (this->ViewToClip).M[0][1] = (float)dVar11;
  (this->ViewToClip).M[0][2] = (float)dVar14;
  (this->ViewToClip).M[0][3] = (float)dVar15;
  (this->ViewToClip).M[1][0] = (float)dVar3;
  (this->ViewToClip).M[1][1] = (float)dVar4;
  (this->ViewToClip).M[1][2] = (float)dVar1;
  (this->ViewToClip).M[1][3] = (float)dVar2;
  (this->ViewToClip).M[2][0] = (float)dVar5;
  (this->ViewToClip).M[2][1] = (float)dVar6;
  (this->ViewToClip).M[2][2] = (float)dVar7;
  (this->ViewToClip).M[2][3] = (float)dVar8;
  (this->ViewToClip).M[3][0] = (float)dVar9;
  (this->ViewToClip).M[3][1] = (float)dVar10;
  (this->ViewToClip).M[3][2] = (float)dVar12;
  (this->ViewToClip).M[3][3] = (float)dVar13;
  local_58 = (float)(double)param_1->_padding_;
  fStack_54 = (float)(double)param_1->_padding_;
  uStack_50 = (undefined4)(double)param_1->_padding_;
  uStack_4c = (undefined4)((double)param_1->_padding_ - (double)local_58);
  uStack_44 = (undefined4)((double)param_1->_padding_ - (double)(float)uStack_50);
  uStack_48 = (undefined4)((double)param_1->_padding_ - (double)fStack_54);
  (this->PreViewTranslationDF).High.field0_0x0._s_0.X = local_58;
  (this->PreViewTranslationDF).High.field0_0x0._s_0.Y = fStack_54;
  (this->PreViewTranslationDF).High.field0_0x0._s_0.Z = (float)uStack_50;
  (this->PreViewTranslationDF).Low.field0_0x0._s_0.X = (float)uStack_4c;
  *(ulonglong *)((longlong)&(this->PreViewTranslationDF).Low.field0_0x0 + 4) =
       CONCAT44(uStack_44,uStack_48);
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  dVar4 = (double)param_1->_padding_;
  dVar5 = (double)param_1->_padding_;
  dVar6 = (double)param_1->_padding_;
  dVar7 = (double)param_1->_padding_;
  dVar8 = (double)param_1->_padding_;
  dVar9 = (double)param_1->_padding_;
  dVar10 = (double)param_1->_padding_;
  dVar11 = (double)param_1->_padding_;
  dVar12 = (double)param_1->_padding_;
  dVar13 = (double)param_1->_padding_;
  dVar14 = (double)param_1->_padding_;
  dVar15 = (double)param_1->_padding_;
  (this->FrustumTranslatedWorldToClip).M[0][0] = (float)(double)param_1->_padding_;
  (this->FrustumTranslatedWorldToClip).M[0][1] = (float)dVar13;
  (this->FrustumTranslatedWorldToClip).M[0][2] = (float)dVar14;
  (this->FrustumTranslatedWorldToClip).M[0][3] = (float)dVar15;
  (this->FrustumTranslatedWorldToClip).M[1][0] = (float)dVar3;
  (this->FrustumTranslatedWorldToClip).M[1][1] = (float)dVar4;
  (this->FrustumTranslatedWorldToClip).M[1][2] = (float)dVar1;
  (this->FrustumTranslatedWorldToClip).M[1][3] = (float)dVar2;
  (this->FrustumTranslatedWorldToClip).M[2][0] = (float)dVar7;
  (this->FrustumTranslatedWorldToClip).M[2][1] = (float)dVar8;
  (this->FrustumTranslatedWorldToClip).M[2][2] = (float)dVar5;
  (this->FrustumTranslatedWorldToClip).M[2][3] = (float)dVar6;
  (this->FrustumTranslatedWorldToClip).M[3][0] = (float)dVar9;
  (this->FrustumTranslatedWorldToClip).M[3][1] = (float)dVar10;
  (this->FrustumTranslatedWorldToClip).M[3][2] = (float)dVar11;
  (this->FrustumTranslatedWorldToClip).M[3][3] = (float)dVar12;
  if ((double)param_1->_padding_ <= __real_3ff0000000000000 &&
      __real_3ff0000000000000 != (double)param_1->_padding_) {
    _local_58 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    uVar16 = _local_58;
    fStack_54 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    local_58 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    fVar19 = fStack_54;
    fVar20 = local_58;
    _local_58 = uVar16;
  }
  else {
    fVar19 = (float)(double)param_1->_padding_ + (float)(double)param_1->_padding_;
    fVar20 = (float)(double)param_1->_padding_ + (float)(double)param_1->_padding_;
  }
  if (fVar19 <= fVar20) {
    fVar19 = fVar20;
  }
  this->OrthoMaxDimension = fVar19;
  fVar19 = FViewInfo::GetLastEyeAdaptationExposure(param_1);
  this->LastEyeAdaptationExposure = fVar19;
  if (fVar19 <= 0.0) {
    this->LastEyeAdaptationExposure = 1.0;
  }
  fVar19 = Lumen::GetMaxTraceDistance(param_1);
  this->MaxTraceDistance = fVar19;
  fVar19 = LumenScene::GetCardMaxDistance(param_1);
  this->CardMaxDistance = fVar19;
  fVar19 = *(float *)((longlong)&param_1->_padding_ + 4);
  if (__real_41000000 <= fVar19) {
    fVar19 = __real_41000000;
  }
  this->ReferenceView = param_1;
  if (fVar19 <= __real_3e000000) {
    fVar19 = __real_3e000000;
  }
  this->LumenSceneDetail = fVar19;
  return;
}

