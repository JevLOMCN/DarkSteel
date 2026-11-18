// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FPostProcessSettingsDebugBlock @ 14d58e890

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettingsDebugBlock * __thiscall
UE::Cameras::FPostProcessSettingsDebugBlock::FPostProcessSettingsDebugBlock
          (FPostProcessSettingsDebugBlock *this,FPostProcessSettingsCollection *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPostProcessSettingsDebugBlock_Cameras_UE__6B_;
  FPostProcessSettings::FPostProcessSettings
            (&(this->PostProcessSettings).PostProcessSettings,&param_1->PostProcessSettings);
  return this;
}

// FPostProcessSettingsDebugBlock @ 14d58e8d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettingsDebugBlock * __thiscall
UE::Cameras::FPostProcessSettingsDebugBlock::FPostProcessSettingsDebugBlock
          (FPostProcessSettingsDebugBlock *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPostProcessSettingsDebugBlock_Cameras_UE__6B_;
  FPostProcessSettings::FPostProcessSettings(&(this->PostProcessSettings).PostProcessSettings);
  return this;
}

// GetTypeID @ 14d5abc40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FPostProcessSettingsDebugBlock::GetTypeID(FPostProcessSettingsDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b48a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FPostProcessSettingsDebugBlock::IsKindOf
          (FPostProcessSettingsDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FPostProcessSettingsDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5bbbd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsDebugBlock::OnDebugDraw
          (FPostProcessSettingsDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  byte bVar1;
  UTextureCube *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UEnum *pUVar7;
  uint uVar8;
  FLinearColor *this_00;
  longlong lVar9;
  FName local_res20;
  FString local_e18;
  FName local_e08;
  FName local_e00;
  FName local_df8;
  FName local_df0;
  FName local_de8;
  FName local_de0;
  FName local_dd8;
  FName local_dd0;
  FName local_dc8;
  FName local_dc0;
  FName local_db8;
  FName local_db0;
  FName local_da8;
  FName local_da0;
  FName local_d98;
  FName local_d90;
  FName local_d88;
  FName local_d80;
  FString local_d78;
  FString local_d68;
  FString local_d58;
  FString local_d48;
  FString local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  FString local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  FString local_c08;
  FString local_bf8;
  FString local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  if ((this->PostProcessSettings).bOverride_TemperatureType != 0) {
    bVar1 = (this->PostProcessSettings).PostProcessSettings.TemperatureType.Value;
    StaticEnum<enum_ETemperatureMethod>();
    UEnum::GetValueAsString<enum_ETemperatureMethod>(&local_d78,(uint)bVar1);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d78.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).bOverride_WhiteTemp != '\0') {
    ::FString::PrintfImpl(&local_d68,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d68.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).bOverride_WhiteTint != '\0') {
    ::FString::PrintfImpl(&local_d58,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d58.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).bOverride_ColorSaturation != '\0') {
    ::FString::PrintfImpl(&local_d48,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d48.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).bOverride_ColorContrast != '\0') {
    ::FString::PrintfImpl(&local_d38,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d38.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).bOverride_ColorGamma != '\0') {
    ::FString::PrintfImpl(&local_d28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d28.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).bOverride_ColorGain != '\0') {
    ::FString::PrintfImpl(&local_d18,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d18.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).bOverride_ColorOffset) {
    ::FString::PrintfImpl(&local_d08,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d08.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorSaturationShadows != 0) {
    ::FString::PrintfImpl(&local_cf8,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorContrastShadows != '\0') {
    ::FString::PrintfImpl(&local_ce8,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorGammaShadows != '\0') {
    ::FString::PrintfImpl(&local_cd8,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cd8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorGainShadows != '\0') {
    ::FString::PrintfImpl(&local_cc8,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cc8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorOffsetShadows != '\0') {
    ::FString::PrintfImpl(&local_cb8,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_cb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cb8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorSaturationMidtones != '\0') {
    ::FString::PrintfImpl(&local_ca8,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorContrastMidtones != '\0') {
    ::FString::PrintfImpl(&local_c98,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c98.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_ColorGammaMidtones) {
    ::FString::PrintfImpl(&local_c88,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c88.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorGainMidtones != 0) {
    ::FString::PrintfImpl(&local_c78,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c78.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorOffsetMidtones != '\0') {
    ::FString::PrintfImpl(&local_c68,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c68.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorSaturationHighlights != '\0') {
    ::FString::PrintfImpl(&local_c58,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c58.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorContrastHighlights != '\0') {
    ::FString::PrintfImpl(&local_c48,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c48.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorGammaHighlights != '\0') {
    ::FString::PrintfImpl(&local_c38,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c38.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorGainHighlights != '\0') {
    ::FString::PrintfImpl(&local_c28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c28.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorOffsetHighlights != '\0') {
    ::FString::PrintfImpl(&local_c18,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c18.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_ColorCorrectionShadowsMax) {
    ::FString::PrintfImpl(&local_c08,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c08.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorCorrectionHighlightsMin != 0) {
    ::FString::PrintfImpl(&local_bf8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorCorrectionHighlightsMax != '\0'
     ) {
    ::FString::PrintfImpl(&local_be8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BlueCorrection != '\0') {
    ::FString::PrintfImpl(&local_bd8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ExpandGamut != '\0') {
    ::FString::PrintfImpl(&local_bc8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ToneCurveAmount != '\0') {
    ::FString::PrintfImpl(&local_bb8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmSlope != '\0') {
    ::FString::PrintfImpl(&local_ba8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmToe != '\0') {
    ::FString::PrintfImpl(&local_b98,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_FilmShoulder) {
    ::FString::PrintfImpl(&local_b88,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b88.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmBlackClip != 0) {
    ::FString::PrintfImpl(&local_b78,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b78.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmWhiteClip != '\0') {
    ::FString::PrintfImpl(&local_b68,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b68.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_SceneColorTint != '\0') {
    FLinearColor::ToString
              (&(this->PostProcessSettings).PostProcessSettings.SceneColorTint,&local_b58);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b58.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_SceneFringeIntensity != '\0') {
    ::FString::PrintfImpl(&local_b48,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b48.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ChromaticAberrationStartOffset !=
      '\0') {
    ::FString::PrintfImpl(&local_b38,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b38.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomIntensity != '\0') {
    ::FString::PrintfImpl(&local_b28,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b28.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomGaussianIntensity != '\0') {
    ::FString::PrintfImpl(&local_b18,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomThreshold != '\0') {
    ::FString::PrintfImpl(&local_b08,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b08.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom1Tint != '\0') {
    FLinearColor::ToString(&(this->PostProcessSettings).PostProcessSettings.Bloom1Tint,&local_af8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_af8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomSizeScale != 0) {
    ::FString::PrintfImpl(&local_ae8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom1Size != '\0') {
    ::FString::PrintfImpl(&local_ad8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_Bloom2Tint) {
    FLinearColor::ToString(&(this->PostProcessSettings).PostProcessSettings.Bloom2Tint,&local_ac8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom2Size != '\0') {
    ::FString::PrintfImpl(&local_ab8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom3Tint != 0) {
    FLinearColor::ToString(&(this->PostProcessSettings).PostProcessSettings.Bloom3Tint,&local_aa8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom3Size != '\0') {
    ::FString::PrintfImpl(&local_a98,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a98.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom4Tint != '\0') {
    FLinearColor::ToString(&(this->PostProcessSettings).PostProcessSettings.Bloom4Tint,&local_a88);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a88.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom4Size != '\0') {
    ::FString::PrintfImpl(&local_a78,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a78.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom5Tint != '\0') {
    FLinearColor::ToString(&(this->PostProcessSettings).PostProcessSettings.Bloom5Tint,&local_a68);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a68.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom5Size != '\0') {
    ::FString::PrintfImpl(&local_a58,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Bloom6Tint != '\0') {
    FLinearColor::ToString(&(this->PostProcessSettings).PostProcessSettings.Bloom6Tint,&local_a48);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a48.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_Bloom6Size) {
    ::FString::PrintfImpl(&local_a38,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomDirtMaskIntensity != '\0') {
    ::FString::PrintfImpl(&local_a28,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a28.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomDirtMaskTint != '\0') {
    FLinearColor::ToString
              (&(this->PostProcessSettings).PostProcessSettings.BloomDirtMaskTint,&local_a18);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionIntensity != '\0') {
    ::FString::PrintfImpl(&local_a08,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a08.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionScatterDispersion !=
      '\0') {
    ::FString::PrintfImpl(&local_9f8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionSize != '\0') {
    ::FString::PrintfImpl(&local_9e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionCenterUV != '\0') {
    ::FString::PrintfImpl(&local_9d8,L"X=%3.3f Y=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionPreFilterMin)
  {
    ::FString::PrintfImpl(&local_9c8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionPreFilterMax != 0) {
    ::FString::PrintfImpl(&local_9b8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionPreFilterMult !=
      '\0') {
    ::FString::PrintfImpl(&local_9a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_AmbientCubemapIntensity) {
    ::FString::PrintfImpl(&local_998,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientCubemapTint != '\0') {
    FLinearColor::ToString
              (&(this->PostProcessSettings).PostProcessSettings.AmbientCubemapTint,&local_988);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_CameraShutterSpeed != '\0') {
    ::FString::PrintfImpl(&local_978,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_CameraISO) {
    ::FString::PrintfImpl(&local_968,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureLowPercent != '\0') {
    ::FString::PrintfImpl(&local_958,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureHighPercent != '\0') {
    ::FString::PrintfImpl(&local_948,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureMinBrightness != '\0') {
    ::FString::PrintfImpl(&local_938,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureMaxBrightness != '\0') {
    ::FString::PrintfImpl(&local_928,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureSpeedUp != '\0') {
    ::FString::PrintfImpl(&local_918,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureSpeedDown) {
    ::FString::PrintfImpl(&local_908,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureBias != 0) {
    ::FString::PrintfImpl(&local_8f8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_HistogramLogMin != '\0') {
    ::FString::PrintfImpl(&local_8e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_HistogramLogMax != '\0') {
    ::FString::PrintfImpl(&local_8d8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureMethod != '\0') {
    StaticEnum<enum_ELocalExposureMethod>();
    pUVar7 = StaticEnum<enum_ELocalExposureMethod>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_res20);
    ::FName::ToString(&local_res20,&local_8c8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.
            bOverride_LocalExposureContrastScale_DEPRECATED) {
    ::FString::PrintfImpl(&local_8b8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureHighlightContrastScale
      != 0) {
    ::FString::PrintfImpl(&local_8a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureShadowContrastScale !=
      '\0') {
    ::FString::PrintfImpl(&local_898,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureHighlightThreshold !=
      '\0') {
    ::FString::PrintfImpl(&local_888,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureShadowThreshold != '\0'
     ) {
    ::FString::PrintfImpl(&local_878,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureDetailStrength != '\0')
  {
    ::FString::PrintfImpl(&local_868,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.
            bOverride_LocalExposureBlurredLuminanceBlend) {
    ::FString::PrintfImpl(&local_858,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.
      bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0) {
    ::FString::PrintfImpl(&local_848,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.
      bOverride_LocalExposureHighlightThresholdStrength != '\0') {
    ::FString::PrintfImpl(&local_838,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureShadowThresholdStrength
      != '\0') {
    ::FString::PrintfImpl(&local_828,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureMiddleGreyBias != '\0')
  {
    ::FString::PrintfImpl(&local_818,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LensFlareIntensity != '\0') {
    ::FString::PrintfImpl(&local_808,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LensFlareTint != '\0') {
    FLinearColor::ToString
              (&(this->PostProcessSettings).PostProcessSettings.LensFlareTint,&local_7f8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_LensFlareBokehSize) {
    ::FString::PrintfImpl(&local_7e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LensFlareThreshold != '\0') {
    ::FString::PrintfImpl(&local_7d8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_VignetteIntensity != '\0') {
    ::FString::PrintfImpl(&local_7c8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_Sharpen != '\0') {
    ::FString::PrintfImpl(&local_7b8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainIntensity != '\0') {
    ::FString::PrintfImpl(&local_7a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainIntensityShadows) {
    ::FString::PrintfImpl(&local_798,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainIntensityMidtones != 0) {
    ::FString::PrintfImpl(&local_788,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainIntensityHighlights != '\0'
     ) {
    ::FString::PrintfImpl(&local_778,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainShadowsMax != '\0') {
    ::FString::PrintfImpl(&local_768,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainHighlightsMin != '\0') {
    ::FString::PrintfImpl(&local_758,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainHighlightsMax != '\0') {
    ::FString::PrintfImpl(&local_748,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainTexelSize != '\0') {
    ::FString::PrintfImpl(&local_738,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionIntensity) {
    ::FString::PrintfImpl(&local_728,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionStaticFraction != 0)
  {
    ::FString::PrintfImpl(&local_718,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionRadius != '\0') {
    ::FString::PrintfImpl(&local_708,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionFadeDistance != '\0'
     ) {
    ::FString::PrintfImpl(&local_6f8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionFadeRadius != '\0')
  {
    ::FString::PrintfImpl(&local_6e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionDistance_DEPRECATED
      != '\0') {
    ::FString::PrintfImpl(&local_6d8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionPower != '\0') {
    ::FString::PrintfImpl(&local_6c8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionBias) {
    ::FString::PrintfImpl(&local_6b8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionQuality != 0) {
    ::FString::PrintfImpl(&local_6a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionMipBlend != '\0') {
    ::FString::PrintfImpl(&local_698,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionMipScale != '\0') {
    ::FString::PrintfImpl(&local_688,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionMipThreshold != '\0'
     ) {
    ::FString::PrintfImpl(&local_678,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionTemporalBlendWeight
      != '\0') {
    ::FString::PrintfImpl(&local_668,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_IndirectLightingColor) {
    FLinearColor::ToString
              (&(this->PostProcessSettings).PostProcessSettings.IndirectLightingColor,&local_658);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_IndirectLightingIntensity != 0) {
    ::FString::PrintfImpl(&local_648,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldFocalDistance != '\0') {
    ::FString::PrintfImpl(&local_638,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldFstop != '\0') {
    ::FString::PrintfImpl(&local_628,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldMinFstop != '\0') {
    ::FString::PrintfImpl(&local_618,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldSensorWidth) {
    ::FString::PrintfImpl(&local_608,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldSqueezeFactor != 0) {
    ::FString::PrintfImpl(&local_5f8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldDepthBlurRadius != '\0')
  {
    ::FString::PrintfImpl(&local_5e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldUseHairDepth != '\0') {
    ::FString::PrintfImpl(&local_5d8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldDepthBlurAmount != '\0')
  {
    ::FString::PrintfImpl(&local_5c8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldFocalRegion != '\0') {
    ::FString::PrintfImpl(&local_5b8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldNearTransitionRegion !=
      '\0') {
    ::FString::PrintfImpl(&local_5a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldFarTransitionRegion !=
      '\0') {
    ::FString::PrintfImpl(&local_598,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldScale) {
    ::FString::PrintfImpl(&local_588,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldNearBlurSize != 0) {
    ::FString::PrintfImpl(&local_578,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldFarBlurSize != '\0') {
    ::FString::PrintfImpl(&local_568,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldOcclusion != '\0') {
    ::FString::PrintfImpl(&local_558,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldSkyFocusDistance != '\0'
     ) {
    ::FString::PrintfImpl(&local_548,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldVignetteSize != '\0') {
    ::FString::PrintfImpl(&local_538,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldAspectRatioScalar)
  {
    ::FString::PrintfImpl(&local_528,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldPetzvalBokeh != '\0') {
    ::FString::PrintfImpl(&local_518,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldPetzvalBokehFalloff !=
      '\0') {
    ::FString::PrintfImpl(&local_508,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.
      bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') {
    ::FString::PrintfImpl(&local_4f8,L"X=%3.3f Y=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.
      bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') {
    ::FString::PrintfImpl(&local_4e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldBarrelRadius != '\0') {
    ::FString::PrintfImpl(&local_4d8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldBarrelLength != '\0') {
    ::FString::PrintfImpl(&local_4c8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldMatteBoxFlags != 0) {
    FCameraDebugRenderer::AddText(param_2,L"DepthOfFieldMatteBoxFlags  : ");
    lVar9 = 3;
    do {
      FCameraDebugRenderer::AddText(param_2,L" %f;%f;%f");
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    FCameraDebugRenderer::AddText(param_2,L"\n");
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_MotionBlurAmount != '\0') {
    ::FString::PrintfImpl(&local_4b8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.bOverride_MotionBlurMax) {
    ::FString::PrintfImpl(&local_4a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_MotionBlurPerObjectSize != '\0') {
    ::FString::PrintfImpl(&local_498,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ScreenSpaceReflectionQuality != '\0'
     ) {
    ::FString::PrintfImpl(&local_488,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ScreenSpaceReflectionIntensity !=
      '\0') {
    ::FString::PrintfImpl(&local_478,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  if ((bool)(this->PostProcessSettings).PostProcessSettings.
            bOverride_ScreenSpaceReflectionMaxRoughness) {
    ::FString::PrintfImpl(&local_468,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_TranslucencyType != 0) {
    StaticEnum<enum_ETranslucencyType>();
    pUVar7 = StaticEnum<enum_ETranslucencyType>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_e08);
    ::FName::ToString(&local_e08,&local_458);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingTranslucencyMaxRoughness
      != 0) {
    ::FString::PrintfImpl(&local_448,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingTranslucencyRefractionRays
      != 0) {
    ::FString::PrintfImpl(&local_438,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.
      bOverride_RayTracingTranslucencySamplesPerPixel != 0) {
    ::FString::PrintfImpl(&local_428,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingTranslucencyShadows != 0)
  {
    StaticEnum<enum_EReflectedAndRefractedRayTracedShadows>();
    pUVar7 = StaticEnum<enum_EReflectedAndRefractedRayTracedShadows>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_e00);
    ::FName::ToString(&local_e00,&local_418);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingTranslucencyRefraction !=
      0) {
    ::FString::PrintfImpl(&local_408,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DynamicGlobalIlluminationMethod != 0
     ) {
    StaticEnum<enum_EDynamicGlobalIlluminationMethod::Type>();
    pUVar7 = StaticEnum<enum_EDynamicGlobalIlluminationMethod::Type>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_df8);
    ::FName::ToString(&local_df8,&local_3f8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenSurfaceCacheResolution != 0) {
    ::FString::PrintfImpl(&local_3e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenSceneLightingQuality != 0) {
    ::FString::PrintfImpl(&local_3d8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenSceneDetail != 0) {
    ::FString::PrintfImpl(&local_3c8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenSceneViewDistance != 0) {
    ::FString::PrintfImpl(&local_3b8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenSceneLightingUpdateSpeed != 0)
  {
    ::FString::PrintfImpl(&local_3a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenFinalGatherQuality != 0) {
    ::FString::PrintfImpl(&local_398,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenFinalGatherLightingUpdateSpeed
      != 0) {
    ::FString::PrintfImpl(&local_388,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenFinalGatherScreenTraces != 0) {
    ::FString::PrintfImpl(&local_378,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenMaxTraceDistance != 0) {
    ::FString::PrintfImpl(&local_368,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenDiffuseColorBoost != 0) {
    ::FString::PrintfImpl(&local_358,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenSkylightLeaking != 0) {
    ::FString::PrintfImpl(&local_348,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenSkylightLeakingTint != 0) {
    FLinearColor::ToString
              (&(this->PostProcessSettings).PostProcessSettings.LumenSkylightLeakingTint,&local_338)
    ;
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenFullSkylightLeakingDistance !=
      0) {
    ::FString::PrintfImpl(&local_328,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenRayLightingMode != 0) {
    StaticEnum<enum_ELumenRayLightingModeOverride>();
    pUVar7 = StaticEnum<enum_ELumenRayLightingModeOverride>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_df0);
    ::FName::ToString(&local_df0,&local_318);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenReflectionsScreenTraces != '\0'
     ) {
    ::FString::PrintfImpl(&local_308,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.
      bOverride_LumenFrontLayerTranslucencyReflections != '\0') {
    ::FString::PrintfImpl(&local_2f8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenMaxRoughnessToTraceReflections
      != 0) {
    ::FString::PrintfImpl(&local_2e8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenMaxReflectionBounces != 0) {
    ::FString::PrintfImpl(&local_2d8,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenMaxRefractionBounces != 0) {
    ::FString::PrintfImpl(&local_2c8,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ReflectionMethod != '\0') {
    StaticEnum<enum_EReflectionMethod::Type>();
    pUVar7 = StaticEnum<enum_EReflectionMethod::Type>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_de8);
    ::FName::ToString(&local_de8,&local_2b8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LumenReflectionQuality != '\0') {
    ::FString::PrintfImpl(&local_2a8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingAO != 0) {
    ::FString::PrintfImpl(&local_298,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingAOSamplesPerPixel != 0) {
    ::FString::PrintfImpl(&local_288,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingAOIntensity != 0) {
    ::FString::PrintfImpl(&local_278,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_RayTracingAORadius != 0) {
    ::FString::PrintfImpl(&local_268,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingMaxBounces != 0) {
    ::FString::PrintfImpl(&local_258,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingSamplesPerPixel != 0) {
    ::FString::PrintfImpl(&local_248,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingMaxPathIntensity != 0) {
    ::FString::PrintfImpl(&local_238,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingEnableEmissiveMaterials
      != 0) {
    ::FString::PrintfImpl(&local_228,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingEnableReferenceDOF != 0)
  {
    ::FString::PrintfImpl(&local_218,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingEnableReferenceAtmosphere
      != 0) {
    ::FString::PrintfImpl(&local_208,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingEnableDenoiser != 0) {
    ::FString::PrintfImpl(&local_1f8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingIncludeEmissive != 0) {
    ::FString::PrintfImpl(&local_1e8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingIncludeDiffuse != 0) {
    ::FString::PrintfImpl(&local_1d8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingIncludeIndirectDiffuse !=
      0) {
    ::FString::PrintfImpl(&local_1c8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingIncludeSpecular != 0) {
    ::FString::PrintfImpl(&local_1b8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingIncludeIndirectSpecular
      != 0) {
    ::FString::PrintfImpl(&local_1a8,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingIncludeVolume != 0) {
    ::FString::PrintfImpl(&local_198,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_PathTracingIncludeIndirectVolume !=
      0) {
    ::FString::PrintfImpl(&local_188,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_DepthOfFieldBladeCount != '\0') {
    ::FString::PrintfImpl(&local_178,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  pUVar2 = (this->PostProcessSettings).PostProcessSettings.AmbientCubemap.field0_0x0.DebugPtr;
  if (pUVar2 != (UTextureCube *)0x0) {
    local_de0 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_de0,&local_168);
    FCameraDebugRenderer::AddText(param_2,L"AmbientCubemap  : %s\n");
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorGradingIntensity != '\0') {
    ::FString::PrintfImpl(&local_158,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_ColorGradingLUT != '\0') {
    local_dd8 = (FName)((this->PostProcessSettings).PostProcessSettings.ColorGradingLUT.field0_0x0.
                       DebugPtr)->_padding_;
    ::FName::ToString(&local_dd8,&local_148);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomDirtMask != '\0') {
    local_dd0 = (FName)((this->PostProcessSettings).PostProcessSettings.BloomDirtMask.field0_0x0.
                       DebugPtr)->_padding_;
    ::FName::ToString(&local_dd0,&local_138);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomMethod != 0) {
    StaticEnum<enum_EBloomMethod>();
    pUVar7 = StaticEnum<enum_EBloomMethod>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_dc8);
    ::FName::ToString(&local_dc8,&local_128);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionTexture != '\0') {
    local_dc0 = (FName)((this->PostProcessSettings).PostProcessSettings.BloomConvolutionTexture.
                        field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_dc0,&local_118);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_FilmGrainTexture != '\0') {
    local_db8 = (FName)((this->PostProcessSettings).PostProcessSettings.FilmGrainTexture.field0_0x0.
                       DebugPtr)->_padding_;
    ::FName::ToString(&local_db8,&local_108);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_BloomConvolutionBufferScale != '\0')
  {
    ::FString::PrintfImpl(&local_f8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureBiasCurve != '\0') {
    local_db0 = (FName)((this->PostProcessSettings).PostProcessSettings.AutoExposureBiasCurve.
                        field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_db0,&local_e8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureMeterMask != '\0') {
    local_da8 = (FName)((this->PostProcessSettings).PostProcessSettings.AutoExposureMeterMask.
                        field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_da8,&local_d8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureHighlightContrastCurve
      != '\0') {
    local_da0 = (FName)((this->PostProcessSettings).PostProcessSettings.
                        LocalExposureHighlightContrastCurve.field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_da0,&local_c8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LocalExposureShadowContrastCurve !=
      '\0') {
    local_d98 = (FName)((this->PostProcessSettings).PostProcessSettings.
                        LocalExposureShadowContrastCurve.field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_d98,&local_b8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LensFlareBokehShape != 0) {
    local_d90 = (FName)((this->PostProcessSettings).PostProcessSettings.LensFlareBokehShape.
                        field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_d90,&local_a8);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_LensFlareTints != '\0') {
    FCameraDebugRenderer::AddText(param_2,L"LensFlareTints  :");
    this_00 = (this->PostProcessSettings).PostProcessSettings.LensFlareTints;
    lVar9 = 8;
    do {
      FLinearColor::ToString(this_00,&local_98);
      FCameraDebugRenderer::AddText(param_2,L" %s");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    FCameraDebugRenderer::AddText(param_2,L"\n");
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_MobileHQGaussian != '\0') {
    ::FString::PrintfImpl(&local_88,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"MobileHQGaussian  : %s\n");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AutoExposureMethod != 0) {
    StaticEnum<enum_EAutoExposureMethod>();
    pUVar7 = StaticEnum<enum_EAutoExposureMethod>();
    if ((pUVar7 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UEnum::GetNameByValue(pUVar7,(long64)&local_d88);
    ::FName::ToString(&local_d88,&local_78);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_AmbientOcclusionRadiusInWS != '\0')
  {
    ::FString::PrintfImpl(&local_68,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_MotionBlurTargetFPS != 0) {
    ::FString::PrintfImpl(&local_58,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.
      bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') {
    ::FString::PrintfImpl(&local_48,L"%u");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PostProcessSettings).PostProcessSettings.bOverride_UserFlags != '\0') {
    ::FString::PrintfImpl(local_38,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum) {
    FCameraDebugRenderer::AddText(param_2,L"WeightedBlendables  :");
    uVar8 = 0;
    if (0 < (this->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 <
            (this->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)
                 ((this->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.
                  AllocatorInstance.Data + lVar9 + 8);
        if (lVar3 == 0) {
          ::FString::FString(&local_e18,L"None");
        }
        else {
          local_d80 = *(FName *)(lVar3 + 0x18);
          ::FName::ToString(&local_d80,&local_e18);
        }
        FCameraDebugRenderer::AddText(param_2,L" [%d] %s (%d%%)");
        if (local_e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e18.Data.AllocatorInstance.Data);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar8 <
               (this->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.ArrayNum);
    }
    FCameraDebugRenderer::AddText(param_2,L"\n");
  }
  return;
}

// OnSerialize @ 14d5c38d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsDebugBlock::OnSerialize
          (FPostProcessSettingsDebugBlock *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  FPostProcessSettings *pFVar1;
  
  this_00 = FPostProcessSettings::StaticStruct();
  pFVar1 = FPostProcessSettings::GetDefault();
  UScriptStruct::SerializeItem(this_00,param_1,&this->PostProcessSettings,pFVar1);
  return;
}

