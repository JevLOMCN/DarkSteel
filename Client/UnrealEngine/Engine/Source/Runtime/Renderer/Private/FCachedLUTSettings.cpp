// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetCombineLUTParameters @ 14514ae80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCachedLUTSettings::GetCombineLUTParameters
          (FCachedLUTSettings *this,FRDGBuilder *param_1,FViewInfo *param_2,FTexture **param_3,
          float *param_4,uint param_5,bool *param_6)

{
  FSceneViewFamily *pFVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  FPostProcessSettings *pFVar7;
  FShaderParametersMetadata *pFVar8;
  TVector<float> *pTVar9;
  FCombineLUTParameters *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TVector4<float>_u_0 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  TVector<float>_u_0 local_98;
  uint local_8c;
  uint local_88;
  float local_84;
  undefined8 local_78;
  EUniformBufferBindingFlags EStack_70;
  undefined7 uStack_6f;
  TVector<float> local_68;
  TVector<float> local_5c [2];
  
  if ((param_3 == (FTexture **)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Textures",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessCombineLUTs.cpp"
                         ,0xd9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4 == (float *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Weights",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessCombineLUTs.cpp"
                         ,0xda,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = CVarColorGrading.Ref;
  pFVar1 = (FSceneViewFamily *)param_2->_padding_;
  if ((pFVar1->EngineShowFlags).ColorGrading != 0) {
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pTVar4->ShadowedValue[1] != 0) {
      pFVar7 = (FPostProcessSettings *)&param_2->_padding_;
      goto LAB_14514af69;
    }
  }
  pFVar7 = FPostProcessSettings::GetDefault();
LAB_14514af69:
  uVar11 = 0;
  if (param_5 != 0) {
    pFVar10 = &this->Parameters;
    uVar12 = 0;
    do {
      if (uVar11 != 0) {
        if ((*(longlong *)((longlong)param_3 + (-0x10 - (longlong)this) + (longlong)pFVar10) == 0)
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Textures[BlendIndex]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessCombineLUTs.cpp"
                                  ,0xe7,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)
                 (*(longlong *)((longlong)param_3 + (-0x10 - (longlong)this) + (longlong)pFVar10) +
                 0x20);
        if (lVar2 != *(longlong *)&pFVar10->Textures) {
          *(longlong *)&pFVar10->Textures = lVar2;
          *param_6 = true;
        }
        *(FRHISamplerState **)&pFVar10->Samplers =
             TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
      }
      if (*param_4 !=
          (this->Parameters).LUTWeights.Elements[uVar12 >> 2].field0_0x0.XYZW[uVar11 & 3]) {
        (this->Parameters).LUTWeights.Elements[uVar12 >> 2].field0_0x0.XYZW[uVar11 & 3] = *param_4;
        *param_6 = true;
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 1;
      pFVar10 = (FCombineLUTParameters *)&(pFVar10->Textures).field_0x8;
      param_4 = param_4 + 1;
    } while (uVar11 < param_5);
  }
  if ((GDefaultWorkingColorSpaceUniformBuffer._40_8_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferRHI.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                         ,0x6c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = FWorkingColorSpaceShaderParameters::GetStructMetadata();
  local_78 = GDefaultWorkingColorSpaceUniformBuffer._40_8_;
  EStack_70 = Static;
  if (pFVar8->BindingFlags != StaticAndShader) {
    EStack_70 = pFVar8->BindingFlags;
  }
  *(undefined8 *)&(this->Parameters).WorkingColorSpace =
       GDefaultWorkingColorSpaceUniformBuffer._40_8_;
  *(ulonglong *)&(this->Parameters).WorkingColorSpace.field_0x8 = CONCAT71(uStack_6f,EStack_70);
  HDRGetACESTonemapParams((FACESTonemapParams *)&local_e8._s_0);
  if (__real_3f800000 <= local_9c) {
    local_9c = __real_3f800000;
  }
  if (local_9c <= 0.0) {
    local_9c = 0.0;
  }
  if ((((local_e8._s_0.X !=
         (this->Parameters).ACESTonemapParameters.ACESMinMaxData.field0_0x0._s_0.X) ||
       (local_e8._s_0.Y != (this->Parameters).ACESTonemapParameters.ACESMinMaxData.field0_0x0._s_0.Y
       )) || (local_e8._s_0.Z !=
              (this->Parameters).ACESTonemapParameters.ACESMinMaxData.field0_0x0._s_0.Z)) ||
     (local_e8._s_0.W != (this->Parameters).ACESTonemapParameters.ACESMinMaxData.field0_0x0._s_0.W))
  {
    *(ulonglong *)&(this->Parameters).ACESTonemapParameters.ACESMinMaxData.field0_0x0 =
         CONCAT44(local_e8._s_0.Y,local_e8._s_0.X);
    *(ulonglong *)
     ((longlong)&(this->Parameters).ACESTonemapParameters.ACESMinMaxData.field0_0x0 + 8) =
         CONCAT44(local_e8._s_0.W,local_e8._s_0.Z);
    *param_6 = true;
  }
  if (((local_d8 != (this->Parameters).ACESTonemapParameters.ACESMidData.field0_0x0._s_0.X) ||
      (fStack_d4 != (this->Parameters).ACESTonemapParameters.ACESMidData.field0_0x0._s_0.Y)) ||
     ((fStack_d0 != (this->Parameters).ACESTonemapParameters.ACESMidData.field0_0x0._s_0.Z ||
      (fStack_cc != (this->Parameters).ACESTonemapParameters.ACESMidData.field0_0x0._s_0.W)))) {
    *(ulonglong *)&(this->Parameters).ACESTonemapParameters.ACESMidData.field0_0x0 =
         CONCAT44(fStack_d4,local_d8);
    *(ulonglong *)((longlong)&(this->Parameters).ACESTonemapParameters.ACESMidData.field0_0x0 + 8) =
         CONCAT44(fStack_cc,fStack_d0);
    *param_6 = true;
  }
  if (((local_c8 != (this->Parameters).ACESTonemapParameters.ACESCoefsLow_0.field0_0x0._s_0.X) ||
      (fStack_c4 != (this->Parameters).ACESTonemapParameters.ACESCoefsLow_0.field0_0x0._s_0.Y)) ||
     ((fStack_c0 != (this->Parameters).ACESTonemapParameters.ACESCoefsLow_0.field0_0x0._s_0.Z ||
      (fStack_bc != (this->Parameters).ACESTonemapParameters.ACESCoefsLow_0.field0_0x0._s_0.W)))) {
    *(ulonglong *)&(this->Parameters).ACESTonemapParameters.ACESCoefsLow_0.field0_0x0 =
         CONCAT44(fStack_c4,local_c8);
    *(ulonglong *)
     ((longlong)&(this->Parameters).ACESTonemapParameters.ACESCoefsLow_0.field0_0x0 + 8) =
         CONCAT44(fStack_bc,fStack_c0);
    *param_6 = true;
  }
  if ((((local_b8 != (this->Parameters).ACESTonemapParameters.ACESCoefsHigh_0.field0_0x0._s_0.X) ||
       (fStack_b4 != (this->Parameters).ACESTonemapParameters.ACESCoefsHigh_0.field0_0x0._s_0.Y)) ||
      (fStack_b0 != (this->Parameters).ACESTonemapParameters.ACESCoefsHigh_0.field0_0x0._s_0.Z)) ||
     (fStack_ac != (this->Parameters).ACESTonemapParameters.ACESCoefsHigh_0.field0_0x0._s_0.W)) {
    *(ulonglong *)&(this->Parameters).ACESTonemapParameters.ACESCoefsHigh_0.field0_0x0 =
         CONCAT44(fStack_b4,local_b8);
    *(ulonglong *)
     ((longlong)&(this->Parameters).ACESTonemapParameters.ACESCoefsHigh_0.field0_0x0 + 8) =
         CONCAT44(fStack_ac,fStack_b0);
    *param_6 = true;
  }
  if (local_a8 != (this->Parameters).ACESTonemapParameters.ACESCoefsLow_4) {
    (this->Parameters).ACESTonemapParameters.ACESCoefsLow_4 = local_a8;
    *param_6 = true;
  }
  if (local_a4 != (this->Parameters).ACESTonemapParameters.ACESCoefsHigh_4) {
    (this->Parameters).ACESTonemapParameters.ACESCoefsHigh_4 = local_a4;
    *param_6 = true;
  }
  if (local_a0 != (this->Parameters).ACESTonemapParameters.ACESSceneColorMultiplier) {
    (this->Parameters).ACESTonemapParameters.ACESSceneColorMultiplier = local_a0;
    *param_6 = true;
  }
  if (local_9c != (this->Parameters).ACESTonemapParameters.ACESGamutCompression) {
    (this->Parameters).ACESTonemapParameters.ACESGamutCompression = local_9c;
    *param_6 = true;
  }
  fVar13 = HDRGetDisplayMaximumLuminance();
  UE::Color::ACES::GetTransformResources
            (param_1,fVar13,&(this->Parameters).ACESTonemapParameters.ACESReachTable,
             &(this->Parameters).ACESTonemapParameters.ACESGamutTable,
             &(this->Parameters).ACESTonemapParameters.ACESGammaTable);
  fVar13 = *(float *)((longlong)&param_2->_padding_ + 4);
  fVar14 = *(float *)&param_2->_padding_;
  if (((*(float *)&param_2->_padding_ != (this->Parameters).ColorScale.field0_0x0._s_0.X) ||
      (fVar13 != (this->Parameters).ColorScale.field0_0x0._s_0.Y)) ||
     (fVar14 != (this->Parameters).ColorScale.field0_0x0._s_0.Z)) {
    (this->Parameters).ColorScale.field0_0x0._s_0.X = *(float *)&param_2->_padding_;
    (this->Parameters).ColorScale.field0_0x0._s_0.Y = fVar13;
    (this->Parameters).ColorScale.field0_0x0._s_0.Z = fVar14;
    *param_6 = true;
  }
  fVar13 = *(float *)((longlong)&param_2->_padding_ + 4);
  fVar14 = *(float *)&param_2->_padding_;
  fVar15 = *(float *)((longlong)&param_2->_padding_ + 4);
  if (((*(float *)&param_2->_padding_ != (this->Parameters).OverlayColor.field0_0x0._s_0.X) ||
      (fVar13 != (this->Parameters).OverlayColor.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).OverlayColor.field0_0x0._s_0.Z ||
      (fVar15 != (this->Parameters).OverlayColor.field0_0x0._s_0.W)))) {
    (this->Parameters).OverlayColor.field0_0x0._s_0.X = *(float *)&param_2->_padding_;
    (this->Parameters).OverlayColor.field0_0x0._s_0.Y = fVar13;
    (this->Parameters).OverlayColor.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).OverlayColor.field0_0x0._s_0.W = fVar15;
    *param_6 = true;
  }
  pTVar9 = GetMappingPolynomial(&local_68);
  if ((((pTVar9->field0_0x0)._s_0.X !=
        (this->Parameters).ColorRemap.MappingPolynomial.field0_0x0._s_0.X) ||
      ((pTVar9->field0_0x0)._s_0.Y !=
       (this->Parameters).ColorRemap.MappingPolynomial.field0_0x0._s_0.Y)) ||
     ((pTVar9->field0_0x0)._s_0.Z !=
      (this->Parameters).ColorRemap.MappingPolynomial.field0_0x0._s_0.Z)) {
    pTVar9 = GetMappingPolynomial(local_5c);
    *(undefined8 *)&(this->Parameters).ColorRemap.MappingPolynomial.field0_0x0 =
         *(undefined8 *)&pTVar9->field0_0x0;
    (this->Parameters).ColorRemap.MappingPolynomial.field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
    *param_6 = true;
  }
  uVar11 = (uint)((pFVar7->TemperatureType).Value == '\0');
  if ((this->Parameters).bIsTemperatureWhiteBalance != uVar11) {
    (this->Parameters).bIsTemperatureWhiteBalance = uVar11;
    *param_6 = true;
  }
  iVar6 = (**(code **)(*(longlong *)CVarLUTSize._padding_ + 200))();
  if ((float)iVar6 != (this->Parameters).LUTSize) {
    iVar6 = (**(code **)(*(longlong *)CVarLUTSize._padding_ + 200))();
    (this->Parameters).LUTSize = (float)iVar6;
    *param_6 = true;
  }
  if (pFVar7->WhiteTemp != (this->Parameters).WhiteTemp) {
    (this->Parameters).WhiteTemp = pFVar7->WhiteTemp;
    *param_6 = true;
  }
  if (pFVar7->WhiteTint != (this->Parameters).WhiteTint) {
    (this->Parameters).WhiteTint = pFVar7->WhiteTint;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorSaturation).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorSaturation).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorSaturation).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorSaturation).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorSaturation.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorSaturation.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorSaturation.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorSaturation.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorSaturation.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorSaturation.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorSaturation.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorSaturation.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorContrast).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorContrast).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorContrast).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorContrast).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorContrast.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorContrast.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorContrast.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorContrast.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorContrast.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorContrast.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorContrast.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorContrast.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGamma).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGamma).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGamma).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGamma).field0_0x0._s_0.W;
  if ((((fVar16 != (this->Parameters).ColorGamma.field0_0x0._s_0.X) ||
       (fVar15 != (this->Parameters).ColorGamma.field0_0x0._s_0.Y)) ||
      (fVar14 != (this->Parameters).ColorGamma.field0_0x0._s_0.Z)) ||
     (fVar13 != (this->Parameters).ColorGamma.field0_0x0._s_0.W)) {
    (this->Parameters).ColorGamma.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGamma.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGamma.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGamma.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGain).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGain).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGain).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGain).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorGain.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorGain.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorGain.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorGain.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorGain.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGain.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGain.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGain.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorOffset).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorOffset).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorOffset).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorOffset).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorOffset.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorOffset.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorOffset.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorOffset.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorOffset.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorOffset.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorOffset.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorOffset.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorSaturationShadows).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorSaturationShadows).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorSaturationShadows).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorSaturationShadows).field0_0x0._s_0.W;
  if ((((fVar16 != (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.X) ||
       (fVar15 != (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.Y)) ||
      (fVar14 != (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.Z)) ||
     (fVar13 != (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.W)) {
    (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorSaturationShadows.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorContrastShadows).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorContrastShadows).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorContrastShadows).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorContrastShadows).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorContrastShadows.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorContrastShadows.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorContrastShadows.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorContrastShadows.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorContrastShadows.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorContrastShadows.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorContrastShadows.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorContrastShadows.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGammaShadows).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGammaShadows).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGammaShadows).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGammaShadows).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorGammaShadows.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorGammaShadows.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorGammaShadows.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorGammaShadows.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorGammaShadows.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGammaShadows.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGammaShadows.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGammaShadows.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGainShadows).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGainShadows).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGainShadows).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGainShadows).field0_0x0._s_0.W;
  if ((((fVar16 != (this->Parameters).ColorGainShadows.field0_0x0._s_0.X) ||
       (fVar15 != (this->Parameters).ColorGainShadows.field0_0x0._s_0.Y)) ||
      (fVar14 != (this->Parameters).ColorGainShadows.field0_0x0._s_0.Z)) ||
     (fVar13 != (this->Parameters).ColorGainShadows.field0_0x0._s_0.W)) {
    (this->Parameters).ColorGainShadows.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGainShadows.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGainShadows.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGainShadows.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorOffsetShadows).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorOffsetShadows).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorOffsetShadows).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorOffsetShadows).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorOffsetShadows.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorSaturationMidtones).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorSaturationMidtones).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorSaturationMidtones).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorSaturationMidtones).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorSaturationMidtones.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorContrastMidtones).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorContrastMidtones).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorContrastMidtones).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorContrastMidtones).field0_0x0._s_0.W;
  if ((((fVar16 != (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.X) ||
       (fVar15 != (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.Y)) ||
      (fVar14 != (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.Z)) ||
     (fVar13 != (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.W)) {
    (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorContrastMidtones.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGammaMidtones).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGammaMidtones).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGammaMidtones).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGammaMidtones).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGammaMidtones.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGainMidtones).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGainMidtones).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGainMidtones).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGainMidtones).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorGainMidtones.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorGainMidtones.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorGainMidtones.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorGainMidtones.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorGainMidtones.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGainMidtones.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGainMidtones.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGainMidtones.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorOffsetMidtones).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorOffsetMidtones).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorOffsetMidtones).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorOffsetMidtones).field0_0x0._s_0.W;
  if ((((fVar16 != (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.X) ||
       (fVar15 != (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.Y)) ||
      (fVar14 != (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.Z)) ||
     (fVar13 != (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.W)) {
    (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorOffsetMidtones.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorSaturationHighlights).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorSaturationHighlights).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorSaturationHighlights).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorSaturationHighlights).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorSaturationHighlights.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorContrastHighlights).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorContrastHighlights).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorContrastHighlights).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorContrastHighlights).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorContrastHighlights.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGammaHighlights).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGammaHighlights).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGammaHighlights).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGammaHighlights).field0_0x0._s_0.W;
  if ((((fVar16 != (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.X) ||
       (fVar15 != (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.Y)) ||
      (fVar14 != (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.Z)) ||
     (fVar13 != (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.W)) {
    (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGammaHighlights.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorGainHighlights).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorGainHighlights).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorGainHighlights).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorGainHighlights).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorGainHighlights.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorGainHighlights.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorGainHighlights.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorGainHighlights.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorGainHighlights.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorGainHighlights.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorGainHighlights.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorGainHighlights.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  fVar16 = (float)(pFVar7->ColorOffsetHighlights).field0_0x0._s_0.X;
  fVar15 = (float)(pFVar7->ColorOffsetHighlights).field0_0x0._s_0.Y;
  fVar14 = (float)(pFVar7->ColorOffsetHighlights).field0_0x0._s_0.Z;
  fVar13 = (float)(pFVar7->ColorOffsetHighlights).field0_0x0._s_0.W;
  if (((fVar16 != (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.X) ||
      (fVar15 != (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.Y)) ||
     ((fVar14 != (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.Z ||
      (fVar13 != (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.W)))) {
    (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.X = fVar16;
    (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.Y = fVar15;
    (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.Z = fVar14;
    (this->Parameters).ColorOffsetHighlights.field0_0x0._s_0.W = fVar13;
    *param_6 = true;
  }
  if (pFVar7->ColorCorrectionShadowsMax != (this->Parameters).ColorCorrectionShadowsMax) {
    (this->Parameters).ColorCorrectionShadowsMax = pFVar7->ColorCorrectionShadowsMax;
    *param_6 = true;
  }
  if (pFVar7->ColorCorrectionHighlightsMin != (this->Parameters).ColorCorrectionHighlightsMin) {
    (this->Parameters).ColorCorrectionHighlightsMin = pFVar7->ColorCorrectionHighlightsMin;
    *param_6 = true;
  }
  if (pFVar7->ColorCorrectionHighlightsMax != (this->Parameters).ColorCorrectionHighlightsMax) {
    (this->Parameters).ColorCorrectionHighlightsMax = pFVar7->ColorCorrectionHighlightsMax;
    *param_6 = true;
  }
  if (pFVar7->BlueCorrection != (this->Parameters).BlueCorrection) {
    (this->Parameters).BlueCorrection = pFVar7->BlueCorrection;
    *param_6 = true;
  }
  if (pFVar7->ExpandGamut != (this->Parameters).ExpandGamut) {
    (this->Parameters).ExpandGamut = pFVar7->ExpandGamut;
    *param_6 = true;
  }
  if (pFVar7->ToneCurveAmount != (this->Parameters).ToneCurveAmount) {
    (this->Parameters).ToneCurveAmount = pFVar7->ToneCurveAmount;
    *param_6 = true;
  }
  if (pFVar7->FilmSlope != (this->Parameters).FilmSlope) {
    (this->Parameters).FilmSlope = pFVar7->FilmSlope;
    *param_6 = true;
  }
  if (pFVar7->FilmToe != (this->Parameters).FilmToe) {
    (this->Parameters).FilmToe = pFVar7->FilmToe;
    *param_6 = true;
  }
  if (pFVar7->FilmShoulder != (this->Parameters).FilmShoulder) {
    (this->Parameters).FilmShoulder = pFVar7->FilmShoulder;
    *param_6 = true;
  }
  if (pFVar7->FilmBlackClip != (this->Parameters).FilmBlackClip) {
    (this->Parameters).FilmBlackClip = pFVar7->FilmBlackClip;
    *param_6 = true;
  }
  if (pFVar7->FilmWhiteClip != (this->Parameters).FilmWhiteClip) {
    (this->Parameters).FilmWhiteClip = pFVar7->FilmWhiteClip;
    *param_6 = true;
  }
  GetTonemapperOutputDeviceParameters((FTonemapperOutputDeviceParameters *)&local_98._s_0,pFVar1);
  if (((local_98._s_0.X != (this->Parameters).OutputDevice.InverseGamma.field0_0x0._s_0.X) ||
      (local_98._s_0.Y != (this->Parameters).OutputDevice.InverseGamma.field0_0x0._s_0.Y)) ||
     (local_98._s_0.Z != (this->Parameters).OutputDevice.InverseGamma.field0_0x0._s_0.Z)) {
    *(ulonglong *)&(this->Parameters).OutputDevice.InverseGamma.field0_0x0 =
         CONCAT44(local_98._s_0.Y,local_98._s_0.X);
    (this->Parameters).OutputDevice.InverseGamma.field0_0x0._s_0.Z = local_98._s_0.Z;
    *param_6 = true;
  }
  if ((this->Parameters).OutputDevice.OutputDevice != local_8c) {
    (this->Parameters).OutputDevice.OutputDevice = local_8c;
    *param_6 = true;
  }
  if ((this->Parameters).OutputDevice.OutputGamut != local_88) {
    (this->Parameters).OutputDevice.OutputGamut = local_88;
    *param_6 = true;
  }
  if (local_84 != (this->Parameters).OutputDevice.OutputMaxLuminance) {
    (this->Parameters).OutputDevice.OutputMaxLuminance = local_84;
    *param_6 = true;
  }
  return;
}

// UpdateCachedValues @ 145164b20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FCachedLUTSettings::UpdateCachedValues
          (FCachedLUTSettings *this,FRDGBuilder *param_1,FViewInfo *param_2,FTexture **param_3,
          float *param_4,uint param_5,bool param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  EShaderPlatform EVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  float *pfVar9;
  bool local_res8 [8];
  
  local_res8[0] = false;
  GetCombineLUTParameters(this,param_1,param_2,param_3,param_4,param_5,local_res8);
  if ((longlong *)param_2->_padding_ == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(longlong *)param_2->_padding_ + 0x70))();
  }
  uVar7 = local_res8[0];
  if (this->UniqueID != uVar4) {
    if ((longlong *)param_2->_padding_ == (longlong *)0x0) {
      this->UniqueID = 0;
      uVar7 = 1;
    }
    else {
      uVar4 = (**(code **)(*(longlong *)param_2->_padding_ + 0x70))();
      this->UniqueID = uVar4;
      uVar7 = 1;
    }
  }
  EVar3 = FSceneView::GetShaderPlatform((FSceneView *)param_2);
  if (this->ShaderPlatform != EVar3) {
    EVar3 = FSceneView::GetShaderPlatform((FSceneView *)param_2);
    this->ShaderPlatform = EVar3;
    uVar7 = 1;
  }
  if (this->bUseCompute != param_6) {
    this->bUseCompute = param_6;
    uVar7 = 1;
  }
  uVar2 = GDefaultWorkingColorSpaceUniformBuffer._48_8_;
  if (GDefaultWorkingColorSpaceUniformBuffer._48_8_ != 0) {
    lVar8 = 0;
    pfVar9 = (float *)GDefaultWorkingColorSpaceUniformBuffer._48_8_;
    do {
      lVar6 = 0;
      pfVar5 = pfVar9;
      do {
        if (*pfVar5 !=
            *(float *)((longlong)pfVar5 +
                      (longlong)this + (0x2d0 - GDefaultWorkingColorSpaceUniformBuffer._48_8_))) {
          uVar1 = *(undefined8 *)(GDefaultWorkingColorSpaceUniformBuffer._48_8_ + 8);
          uVar7 = 1;
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToXYZ.M[0] =
               *(undefined8 *)GDefaultWorkingColorSpaceUniformBuffer._48_8_;
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToXYZ.M[0] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x18);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToXYZ.M[1] =
               *(undefined8 *)(uVar2 + 0x10);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToXYZ.M[1] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x28);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToXYZ.M[2] =
               *(undefined8 *)(uVar2 + 0x20);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToXYZ.M[2] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x38);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToXYZ.M[3] =
               *(undefined8 *)(uVar2 + 0x30);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToXYZ.M[3] + 2) = uVar1;
          goto LAB_145164c49;
        }
        lVar6 = lVar6 + 1;
        pfVar5 = pfVar5 + 1;
      } while (lVar6 < 4);
      lVar8 = lVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (lVar8 < 4);
LAB_145164c49:
    lVar8 = 0;
    pfVar9 = (float *)(uVar2 + 0x40);
    do {
      lVar6 = 0;
      pfVar5 = pfVar9;
      do {
        if (*pfVar5 != *(float *)((longlong)this + (0x2d0 - uVar2) + (longlong)pfVar5)) {
          uVar1 = *(undefined8 *)(uVar2 + 0x48);
          uVar7 = 1;
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromXYZ.M[0] =
               *(undefined8 *)(uVar2 + 0x40);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromXYZ.M[0] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x58);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromXYZ.M[1] =
               *(undefined8 *)(uVar2 + 0x50);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromXYZ.M[1] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x68);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromXYZ.M[2] =
               *(undefined8 *)(uVar2 + 0x60);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromXYZ.M[2] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x78);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromXYZ.M[3] =
               *(undefined8 *)(uVar2 + 0x70);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromXYZ.M[3] + 2) = uVar1;
          goto LAB_145164cbb;
        }
        lVar6 = lVar6 + 1;
        pfVar5 = pfVar5 + 1;
      } while (lVar6 < 4);
      lVar8 = lVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (lVar8 < 4);
LAB_145164cbb:
    lVar8 = 0;
    pfVar9 = (float *)(uVar2 + 0x80);
    do {
      lVar6 = 0;
      pfVar5 = pfVar9;
      do {
        if (*pfVar5 != *(float *)((longlong)this + (0x2d0 - uVar2) + (longlong)pfVar5)) {
          uVar1 = *(undefined8 *)(uVar2 + 0x88);
          uVar7 = 1;
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP1.M[0] =
               *(undefined8 *)(uVar2 + 0x80);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP1.M[0] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x98);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP1.M[1] =
               *(undefined8 *)(uVar2 + 0x90);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP1.M[1] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0xa8);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP1.M[2] =
               *(undefined8 *)(uVar2 + 0xa0);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP1.M[2] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0xb8);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP1.M[3] =
               *(undefined8 *)(uVar2 + 0xb0);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP1.M[3] + 2) = uVar1;
          goto LAB_145164d37;
        }
        lVar6 = lVar6 + 1;
        pfVar5 = pfVar5 + 1;
      } while (lVar6 < 4);
      lVar8 = lVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (lVar8 < 4);
LAB_145164d37:
    lVar8 = 0;
    pfVar9 = (float *)(uVar2 + 0xc0);
    do {
      lVar6 = 0;
      pfVar5 = pfVar9;
      do {
        if (*pfVar5 != *(float *)((longlong)this + (0x2d0 - uVar2) + (longlong)pfVar5)) {
          uVar1 = *(undefined8 *)(uVar2 + 200);
          uVar7 = 1;
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromAP1.M[0] =
               *(undefined8 *)(uVar2 + 0xc0);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromAP1.M[0] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0xd8);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromAP1.M[1] =
               *(undefined8 *)(uVar2 + 0xd0);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromAP1.M[1] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0xe8);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromAP1.M[2] =
               *(undefined8 *)(uVar2 + 0xe0);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromAP1.M[2] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0xf8);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).FromAP1.M[3] =
               *(undefined8 *)(uVar2 + 0xf0);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).FromAP1.M[3] + 2) = uVar1;
          goto LAB_145164dc5;
        }
        lVar6 = lVar6 + 1;
        pfVar5 = pfVar5 + 1;
      } while (lVar6 < 4);
      lVar8 = lVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (lVar8 < 4);
LAB_145164dc5:
    lVar8 = 0;
    pfVar9 = (float *)(uVar2 + 0x100);
    do {
      lVar6 = 0;
      pfVar5 = pfVar9;
      do {
        if (*pfVar5 != *(float *)((longlong)pfVar5 + (longlong)this + (0x2d0 - uVar2))) {
          uVar1 = *(undefined8 *)(uVar2 + 0x108);
          uVar7 = 1;
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP0.M[0] =
               *(undefined8 *)(uVar2 + 0x100);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP0.M[0] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x118);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP0.M[1] =
               *(undefined8 *)(uVar2 + 0x110);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP0.M[1] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x128);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP0.M[2] =
               *(undefined8 *)(uVar2 + 0x120);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP0.M[2] + 2) = uVar1;
          uVar1 = *(undefined8 *)(uVar2 + 0x138);
          *(undefined8 *)(this->WorkingColorSpaceShaderParameters).ToAP0.M[3] =
               *(undefined8 *)(uVar2 + 0x130);
          *(undefined8 *)((this->WorkingColorSpaceShaderParameters).ToAP0.M[3] + 2) = uVar1;
          goto LAB_145164e55;
        }
        lVar6 = lVar6 + 1;
        pfVar5 = pfVar5 + 1;
      } while (lVar6 < 4);
      lVar8 = lVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (lVar8 < 4);
LAB_145164e55:
    if ((this->WorkingColorSpaceShaderParameters).bIsSRGB != *(uint *)(uVar2 + 0x180)) {
      (this->WorkingColorSpaceShaderParameters).bIsSRGB = *(uint *)(uVar2 + 0x180);
      return true;
    }
  }
  return (bool)uVar7;
}

