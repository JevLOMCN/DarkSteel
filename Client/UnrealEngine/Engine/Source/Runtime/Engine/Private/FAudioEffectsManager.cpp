// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FAudioEffectsManager @ 14761c930

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioEffectsManager * __thiscall
FAudioEffectsManager::FAudioEffectsManager(FAudioEffectsManager *this,FAudioDevice *param_1)

{
  float fVar1;
  USoundMix *pUVar2;
  atomic<double> aVar3;
  FName local_res8;
  FString local_18;
  
  (this->SourceReverbEffect).Density = 1.0;
  (this->CurrentReverbAsset).field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  this->_padding_ = (longlong)&___7FAudioEffectsManager__6B_;
  (this->SourceReverbEffect).Time = 0.0;
  (this->SourceReverbEffect)._padding_ = (longlong)&___7FAudioReverbEffect__6B_;
  (this->CurrentReverbEffect)._padding_ = (longlong)&___7FAudioReverbEffect__6B_;
  (this->DestinationReverbEffect)._padding_ = (longlong)&___7FAudioReverbEffect__6B_;
  (this->SourceReverbEffect).Volume = 0.0;
  (this->SourceReverbEffect).Diffusion = 1.0;
  (this->SourceReverbEffect).Gain = 0.32;
  (this->SourceReverbEffect).GainHF = 0.89;
  (this->SourceReverbEffect).DecayTime = 1.49;
  (this->SourceReverbEffect).DecayHFRatio = 0.83;
  (this->SourceReverbEffect).ReflectionsGain = 0.05;
  (this->SourceReverbEffect).ReflectionsDelay = 0.007;
  (this->SourceReverbEffect).LateGain = 1.26;
  (this->SourceReverbEffect).LateDelay = 0.011;
  (this->SourceReverbEffect).AirAbsorptionGainHF = 0.994;
  (this->SourceReverbEffect).RoomRolloffFactor = 0.0;
  (this->SourceReverbEffect).bBypassEarlyReflections = true;
  (this->SourceReverbEffect).bBypassLateReflections = false;
  (this->CurrentReverbEffect).Time = 0.0;
  (this->CurrentReverbEffect).Volume = 0.0;
  (this->CurrentReverbEffect).Density = 1.0;
  (this->CurrentReverbEffect).Diffusion = 1.0;
  (this->CurrentReverbEffect).Gain = 0.32;
  (this->CurrentReverbEffect).GainHF = 0.89;
  (this->CurrentReverbEffect).DecayTime = 1.49;
  (this->CurrentReverbEffect).DecayHFRatio = 0.83;
  (this->CurrentReverbEffect).ReflectionsGain = 0.05;
  (this->CurrentReverbEffect).ReflectionsDelay = 0.007;
  (this->CurrentReverbEffect).LateGain = 1.26;
  (this->CurrentReverbEffect).LateDelay = 0.011;
  (this->CurrentReverbEffect).AirAbsorptionGainHF = 0.994;
  (this->CurrentReverbEffect).RoomRolloffFactor = 0.0;
  (this->CurrentReverbEffect).bBypassEarlyReflections = true;
  (this->CurrentReverbEffect).bBypassLateReflections = false;
  (this->DestinationReverbEffect).Time = 0.0;
  (this->DestinationReverbEffect).Volume = 0.0;
  (this->DestinationReverbEffect).Density = 1.0;
  (this->DestinationReverbEffect).Diffusion = 1.0;
  (this->DestinationReverbEffect).Gain = 0.32;
  (this->DestinationReverbEffect).GainHF = 0.89;
  (this->DestinationReverbEffect).DecayTime = 1.49;
  (this->DestinationReverbEffect).DecayHFRatio = 0.83;
  (this->DestinationReverbEffect).ReflectionsGain = 0.05;
  (this->DestinationReverbEffect).ReflectionsDelay = 0.007;
  (this->DestinationReverbEffect).LateGain = 1.26;
  (this->DestinationReverbEffect).LateDelay = 0.011;
  (this->DestinationReverbEffect).AirAbsorptionGainHF = 0.994;
  (this->DestinationReverbEffect).RoomRolloffFactor = 0.0;
  (this->DestinationReverbEffect).bBypassEarlyReflections = true;
  (this->DestinationReverbEffect).bBypassLateReflections = false;
  (this->CurrentReverbSettings).bApplyReverb = true;
  (this->CurrentReverbSettings).ReverbEffect.field0_0x0.DebugPtr = (UReverbEffect *)0x0;
  (this->CurrentReverbSettings).ReverbPluginEffect.field0_0x0.DebugPtr =
       (USoundEffectSubmixPreset *)0x0;
  (this->CurrentReverbSettings).Volume = 0.5;
  (this->CurrentReverbSettings).FadeTime = 2.0;
  this->CurrentEQMix = (USoundMix *)0x0;
  (this->SourceEQEffect)._padding_ = (longlong)&___7FAudioEQEffect__6B_;
  (this->CurrentEQEffect)._padding_ = (longlong)&___7FAudioEQEffect__6B_;
  this->AudioDevice = param_1;
  this->bEffectsInitialised = false;
  (this->SourceEQEffect).RootTime = 0.0;
  (this->SourceEQEffect).FrequencyCenter0 = 600.0;
  (this->SourceEQEffect).Gain0 = 1.0;
  (this->SourceEQEffect).Bandwidth0 = 1.0;
  (this->SourceEQEffect).FrequencyCenter1 = 1000.0;
  (this->SourceEQEffect).Gain1 = 1.0;
  (this->SourceEQEffect).Bandwidth1 = 1.0;
  (this->SourceEQEffect).FrequencyCenter2 = 2000.0;
  (this->SourceEQEffect).Gain2 = 1.0;
  (this->SourceEQEffect).Bandwidth2 = 1.0;
  (this->SourceEQEffect).FrequencyCenter3 = 10000.0;
  (this->SourceEQEffect).Gain3 = 1.0;
  (this->SourceEQEffect).Bandwidth3 = 1.0;
  (this->CurrentEQEffect).RootTime = 0.0;
  (this->CurrentEQEffect).FrequencyCenter0 = 600.0;
  (this->CurrentEQEffect).Gain0 = 1.0;
  (this->CurrentEQEffect).Bandwidth0 = 1.0;
  (this->CurrentEQEffect).FrequencyCenter1 = 1000.0;
  (this->CurrentEQEffect).Gain1 = 1.0;
  (this->DestinationEQEffect)._padding_ = (longlong)&___7FAudioEQEffect__6B_;
  (this->CurrentEQEffect).Bandwidth1 = 1.0;
  (this->CurrentEQEffect).FrequencyCenter2 = 2000.0;
  (this->CurrentEQEffect).Gain2 = 1.0;
  (this->CurrentEQEffect).Bandwidth2 = 1.0;
  (this->CurrentEQEffect).FrequencyCenter3 = 10000.0;
  (this->CurrentEQEffect).Gain3 = 1.0;
  (this->CurrentEQEffect).Bandwidth3 = 1.0;
  (this->DestinationEQEffect).RootTime = 0.0;
  (this->DestinationEQEffect).FrequencyCenter0 = 600.0;
  (this->DestinationEQEffect).Gain0 = 1.0;
  (this->DestinationEQEffect).Bandwidth0 = 1.0;
  (this->DestinationEQEffect).FrequencyCenter1 = 1000.0;
  (this->DestinationEQEffect).Gain1 = 1.0;
  (this->DestinationEQEffect).Bandwidth1 = 1.0;
  (this->DestinationEQEffect).FrequencyCenter2 = 2000.0;
  (this->DestinationEQEffect).Gain2 = 1.0;
  (this->DestinationEQEffect).Bandwidth2 = 1.0;
  (this->DestinationEQEffect).FrequencyCenter3 = 10000.0;
  (this->DestinationEQEffect).Gain3 = 1.0;
  *(undefined8 *)&(this->DestinationEQEffect).Bandwidth3 = 0x3f800000;
  (this->PrevReverbEffect)._padding_ = 0;
  (this->PrevReverbEffect).Time = 0.0;
  (this->PrevReverbEffect).Volume = 0.0;
  (this->PrevReverbEffect).Density = 0.0;
  (this->PrevReverbEffect).Diffusion = 0.0;
  (this->PrevReverbEffect).Gain = 0.0;
  (this->PrevReverbEffect).GainHF = 0.0;
  (this->PrevReverbEffect).DecayTime = 0.0;
  (this->PrevReverbEffect).DecayHFRatio = 0.0;
  (this->PrevReverbEffect).ReflectionsGain = 0.0;
  (this->PrevReverbEffect).ReflectionsDelay = 0.0;
  (this->PrevReverbEffect).LateGain = 0.0;
  (this->PrevReverbEffect).LateDelay = 0.0;
  (this->PrevReverbEffect).AirAbsorptionGainHF = 0.0;
  (this->PrevReverbEffect).RoomRolloffFactor = 0.0;
  (this->PrevReverbEffect).bBypassEarlyReflections = false;
  (this->PrevReverbEffect).bBypassLateReflections = false;
  *(undefined2 *)&(this->PrevReverbEffect).field_0x46 = 0;
  if (this->CurrentEQMix != (USoundMix *)0x0) {
    if (4 < (byte)LogAudio._0_1_) {
      local_res8 = (FName)this->CurrentEQMix->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SourceEQEffect).RootTime = (this->CurrentEQEffect).RootTime;
    (this->SourceEQEffect).FrequencyCenter0 = (this->CurrentEQEffect).FrequencyCenter0;
    (this->SourceEQEffect).Gain0 = (this->CurrentEQEffect).Gain0;
    (this->SourceEQEffect).Bandwidth0 = (this->CurrentEQEffect).Bandwidth0;
    (this->SourceEQEffect).FrequencyCenter1 = (this->CurrentEQEffect).FrequencyCenter1;
    (this->SourceEQEffect).Gain1 = (this->CurrentEQEffect).Gain1;
    (this->SourceEQEffect).Bandwidth1 = (this->CurrentEQEffect).Bandwidth1;
    (this->SourceEQEffect).FrequencyCenter2 = (this->CurrentEQEffect).FrequencyCenter2;
    (this->SourceEQEffect).Gain2 = (this->CurrentEQEffect).Gain2;
    (this->SourceEQEffect).Bandwidth2 = (this->CurrentEQEffect).Bandwidth2;
    (this->SourceEQEffect).FrequencyCenter3 = (this->CurrentEQEffect).FrequencyCenter3;
    (this->SourceEQEffect).Gain3 = (this->CurrentEQEffect).Gain3;
    (this->SourceEQEffect).Bandwidth3 = (this->CurrentEQEffect).Bandwidth3;
    aVar3 = FApp::CurrentTime;
    (this->DestinationEQEffect).RootTime = 0.0;
    (this->DestinationEQEffect).FrequencyCenter0 = 600.0;
    (this->DestinationEQEffect).Gain0 = 1.0;
    (this->DestinationEQEffect).Bandwidth0 = 1.0;
    pUVar2 = this->CurrentEQMix;
    (this->SourceEQEffect).RootTime = (double)aVar3;
    (this->DestinationEQEffect).FrequencyCenter1 = 1000.0;
    (this->DestinationEQEffect).Gain1 = 1.0;
    (this->DestinationEQEffect).Bandwidth1 = 1.0;
    (this->DestinationEQEffect).FrequencyCenter2 = 2000.0;
    (this->DestinationEQEffect).Gain2 = 1.0;
    (this->DestinationEQEffect).Bandwidth2 = 1.0;
    (this->DestinationEQEffect).FrequencyCenter3 = 10000.0;
    (this->DestinationEQEffect).Gain3 = 1.0;
    (this->DestinationEQEffect).Bandwidth3 = 1.0;
    fVar1 = pUVar2->FadeOutTime;
    this->CurrentEQMix = (USoundMix *)0x0;
    (this->DestinationEQEffect).RootTime = (double)fVar1 + (double)aVar3;
  }
  return this;
}

// AddReferencedObjects @ 147629380

void __thiscall
FAudioEffectsManager::AddReferencedObjects(FAudioEffectsManager *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147629393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->CurrentReverbAsset,0,0);
  return;
}

// ClearMixSettings @ 14762da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioEffectsManager::ClearMixSettings(FAudioEffectsManager *this)

{
  float fVar1;
  USoundMix *pUVar2;
  atomic<double> aVar3;
  FName local_res8 [4];
  FString local_18;
  
  if (this->CurrentEQMix != (USoundMix *)0x0) {
    if (4 < (byte)LogAudio._0_1_) {
      local_res8[0] = (FName)this->CurrentEQMix->_padding_;
      ::FName::ToString(local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SourceEQEffect).RootTime = (this->CurrentEQEffect).RootTime;
    (this->SourceEQEffect).FrequencyCenter0 = (this->CurrentEQEffect).FrequencyCenter0;
    (this->SourceEQEffect).Gain0 = (this->CurrentEQEffect).Gain0;
    (this->SourceEQEffect).Bandwidth0 = (this->CurrentEQEffect).Bandwidth0;
    (this->SourceEQEffect).FrequencyCenter1 = (this->CurrentEQEffect).FrequencyCenter1;
    (this->SourceEQEffect).Gain1 = (this->CurrentEQEffect).Gain1;
    (this->SourceEQEffect).Bandwidth1 = (this->CurrentEQEffect).Bandwidth1;
    (this->SourceEQEffect).FrequencyCenter2 = (this->CurrentEQEffect).FrequencyCenter2;
    (this->SourceEQEffect).Gain2 = (this->CurrentEQEffect).Gain2;
    (this->SourceEQEffect).Bandwidth2 = (this->CurrentEQEffect).Bandwidth2;
    (this->SourceEQEffect).FrequencyCenter3 = (this->CurrentEQEffect).FrequencyCenter3;
    (this->SourceEQEffect).Gain3 = (this->CurrentEQEffect).Gain3;
    (this->SourceEQEffect).Bandwidth3 = (this->CurrentEQEffect).Bandwidth3;
    aVar3 = FApp::CurrentTime;
    (this->DestinationEQEffect).RootTime = 0.0;
    (this->DestinationEQEffect).FrequencyCenter0 = 600.0;
    (this->DestinationEQEffect).Gain0 = 1.0;
    (this->DestinationEQEffect).Bandwidth0 = 1.0;
    pUVar2 = this->CurrentEQMix;
    (this->SourceEQEffect).RootTime = (double)aVar3;
    (this->DestinationEQEffect).FrequencyCenter1 = 1000.0;
    (this->DestinationEQEffect).Gain1 = 1.0;
    (this->DestinationEQEffect).Bandwidth1 = 1.0;
    (this->DestinationEQEffect).FrequencyCenter2 = 2000.0;
    (this->DestinationEQEffect).Gain2 = 1.0;
    (this->DestinationEQEffect).Bandwidth2 = 1.0;
    (this->DestinationEQEffect).FrequencyCenter3 = 10000.0;
    (this->DestinationEQEffect).Gain3 = 1.0;
    (this->DestinationEQEffect).Bandwidth3 = 1.0;
    fVar1 = pUVar2->FadeOutTime;
    this->CurrentEQMix = (USoundMix *)0x0;
    (this->DestinationEQEffect).RootTime = (double)fVar1 + (double)aVar3;
  }
  return;
}

// InitAudioEffects @ 147646cb0

void __thiscall FAudioEffectsManager::InitAudioEffects(FAudioEffectsManager *this)

{
  (this->PrevReverbEffect)._padding_ = 0;
  (this->PrevReverbEffect).Time = 0.0;
  (this->PrevReverbEffect).Volume = 0.0;
  (this->PrevReverbEffect).Density = 0.0;
  (this->PrevReverbEffect).Diffusion = 0.0;
  (this->PrevReverbEffect).Gain = 0.0;
  (this->PrevReverbEffect).GainHF = 0.0;
  (this->PrevReverbEffect).DecayTime = 0.0;
  (this->PrevReverbEffect).DecayHFRatio = 0.0;
  (this->PrevReverbEffect).ReflectionsGain = 0.0;
  (this->PrevReverbEffect).ReflectionsDelay = 0.0;
  (this->PrevReverbEffect).LateGain = 0.0;
  (this->PrevReverbEffect).LateDelay = 0.0;
  (this->PrevReverbEffect).AirAbsorptionGainHF = 0.0;
  (this->PrevReverbEffect).RoomRolloffFactor = 0.0;
  (this->PrevReverbEffect).bBypassEarlyReflections = false;
  (this->PrevReverbEffect).bBypassLateReflections = false;
  *(undefined2 *)&(this->PrevReverbEffect).field_0x46 = 0;
  ClearMixSettings(this);
  return;
}

// ResetInterpolation @ 14765a240

void __thiscall FAudioEffectsManager::ResetInterpolation(FAudioEffectsManager *this)

{
  (this->PrevReverbEffect)._padding_ = 0;
  (this->PrevReverbEffect).Time = 0.0;
  (this->PrevReverbEffect).Volume = 0.0;
  (this->PrevReverbEffect).Density = 0.0;
  (this->PrevReverbEffect).Diffusion = 0.0;
  (this->PrevReverbEffect).Gain = 0.0;
  (this->PrevReverbEffect).GainHF = 0.0;
  (this->PrevReverbEffect).DecayTime = 0.0;
  (this->PrevReverbEffect).DecayHFRatio = 0.0;
  (this->PrevReverbEffect).ReflectionsGain = 0.0;
  (this->PrevReverbEffect).ReflectionsDelay = 0.0;
  (this->PrevReverbEffect).LateGain = 0.0;
  (this->PrevReverbEffect).LateDelay = 0.0;
  (this->PrevReverbEffect).AirAbsorptionGainHF = 0.0;
  (this->PrevReverbEffect).RoomRolloffFactor = 0.0;
  (this->PrevReverbEffect).bBypassEarlyReflections = false;
  (this->PrevReverbEffect).bBypassLateReflections = false;
  *(undefined2 *)&(this->PrevReverbEffect).field_0x46 = 0;
  ClearMixSettings(this);
  return;
}

// SetMixSettings @ 147661500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioEffectsManager::SetMixSettings
          (FAudioEffectsManager *this,USoundMix *param_1,bool param_2,bool param_3)

{
  USoundMix *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FName local_res10 [3];
  FString local_18;
  
  if (((param_1 != (USoundMix *)0x0) &&
      ((pUVar1 = this->CurrentEQMix, param_1 != pUVar1 || (param_3)))) &&
     ((pUVar1 == (USoundMix *)0x0 || ((param_2 || (pUVar1->EQPriority < param_1->EQPriority)))))) {
    if (4 < (byte)LogAudio._0_1_) {
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SourceEQEffect).RootTime = (this->CurrentEQEffect).RootTime;
    (this->SourceEQEffect).FrequencyCenter0 = (this->CurrentEQEffect).FrequencyCenter0;
    (this->SourceEQEffect).Gain0 = (this->CurrentEQEffect).Gain0;
    (this->SourceEQEffect).Bandwidth0 = (this->CurrentEQEffect).Bandwidth0;
    (this->SourceEQEffect).FrequencyCenter1 = (this->CurrentEQEffect).FrequencyCenter1;
    (this->SourceEQEffect).Gain1 = (this->CurrentEQEffect).Gain1;
    (this->SourceEQEffect).Bandwidth1 = (this->CurrentEQEffect).Bandwidth1;
    (this->SourceEQEffect).FrequencyCenter2 = (this->CurrentEQEffect).FrequencyCenter2;
    (this->SourceEQEffect).Gain2 = (this->CurrentEQEffect).Gain2;
    (this->SourceEQEffect).Bandwidth2 = (this->CurrentEQEffect).Bandwidth2;
    (this->SourceEQEffect).FrequencyCenter3 = (this->CurrentEQEffect).FrequencyCenter3;
    (this->SourceEQEffect).Gain3 = (this->CurrentEQEffect).Gain3;
    (this->SourceEQEffect).Bandwidth3 = (this->CurrentEQEffect).Bandwidth3;
    (this->SourceEQEffect).RootTime = (double)FApp::CurrentTime;
    fVar2 = __real_3f800000;
    if (param_1->bApplyEQ == 0) {
      (this->DestinationEQEffect).RootTime = 0.0;
      (this->DestinationEQEffect).FrequencyCenter0 = 600.0;
      (this->DestinationEQEffect).Gain0 = 1.0;
      (this->DestinationEQEffect).Bandwidth0 = 1.0;
      (this->DestinationEQEffect).FrequencyCenter1 = 1000.0;
      (this->DestinationEQEffect).Gain1 = 1.0;
      (this->DestinationEQEffect).Bandwidth1 = 1.0;
      (this->DestinationEQEffect).FrequencyCenter2 = 2000.0;
      (this->DestinationEQEffect).Gain2 = 1.0;
      (this->DestinationEQEffect).Bandwidth2 = 1.0;
      (this->DestinationEQEffect).FrequencyCenter3 = 10000.0;
      (this->DestinationEQEffect).Gain3 = 1.0;
    }
    else {
      (this->DestinationEQEffect).RootTime = (param_1->EQSettings).RootTime;
      (this->DestinationEQEffect).FrequencyCenter0 = (param_1->EQSettings).FrequencyCenter0;
      (this->DestinationEQEffect).Gain0 = (param_1->EQSettings).Gain0;
      (this->DestinationEQEffect).Bandwidth0 = (param_1->EQSettings).Bandwidth0;
      (this->DestinationEQEffect).FrequencyCenter1 = (param_1->EQSettings).FrequencyCenter1;
      (this->DestinationEQEffect).Gain1 = (param_1->EQSettings).Gain1;
      (this->DestinationEQEffect).Bandwidth1 = (param_1->EQSettings).Bandwidth1;
      (this->DestinationEQEffect).FrequencyCenter2 = (param_1->EQSettings).FrequencyCenter2;
      (this->DestinationEQEffect).Gain2 = (param_1->EQSettings).Gain2;
      (this->DestinationEQEffect).Bandwidth2 = (param_1->EQSettings).Bandwidth2;
      (this->DestinationEQEffect).FrequencyCenter3 = (param_1->EQSettings).FrequencyCenter3;
      (this->DestinationEQEffect).Gain3 = (param_1->EQSettings).Gain3;
      fVar2 = (param_1->EQSettings).Bandwidth3;
    }
    (this->DestinationEQEffect).Bandwidth3 = fVar2;
    fVar4 = __real_469c4000;
    fVar5 = __real_41a00000;
    (this->DestinationEQEffect).RootTime = (double)param_1->FadeInTime + (double)FApp::CurrentTime;
    fVar2 = (this->DestinationEQEffect).FrequencyCenter1;
    fVar6 = (this->DestinationEQEffect).FrequencyCenter0;
    if (fVar4 <= fVar2) {
      fVar2 = fVar4;
    }
    fVar3 = (this->DestinationEQEffect).FrequencyCenter2;
    if (fVar4 <= fVar6) {
      fVar6 = fVar4;
    }
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    if (fVar2 <= fVar5) {
      fVar2 = fVar5;
    }
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    if (fVar3 <= fVar5) {
      fVar3 = fVar5;
    }
    (this->DestinationEQEffect).FrequencyCenter1 = fVar2;
    fVar2 = (this->DestinationEQEffect).FrequencyCenter3;
    (this->DestinationEQEffect).FrequencyCenter2 = fVar3;
    if (fVar4 <= fVar2) {
      fVar2 = fVar4;
    }
    fVar4 = (this->DestinationEQEffect).Gain0;
    (this->DestinationEQEffect).FrequencyCenter0 = fVar6;
    fVar6 = __real_40fe147b;
    if (__real_40fe147b <= fVar4) {
      fVar4 = __real_40fe147b;
    }
    if (fVar2 <= fVar5) {
      fVar2 = fVar5;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    (this->DestinationEQEffect).FrequencyCenter3 = fVar2;
    fVar2 = (this->DestinationEQEffect).Gain1;
    if (fVar6 <= fVar2) {
      fVar2 = fVar6;
    }
    (this->DestinationEQEffect).Gain0 = fVar4;
    fVar5 = (this->DestinationEQEffect).Gain2;
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (this->DestinationEQEffect).Gain1 = fVar2;
    fVar4 = __real_3dcccccd;
    fVar2 = (this->DestinationEQEffect).Gain3;
    if (fVar6 <= fVar2) {
      fVar2 = fVar6;
    }
    (this->DestinationEQEffect).Gain2 = fVar5;
    fVar5 = __real_40000000;
    fVar6 = (this->DestinationEQEffect).Bandwidth0;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (__real_40000000 <= fVar6) {
      fVar6 = __real_40000000;
    }
    (this->DestinationEQEffect).Gain3 = fVar2;
    fVar2 = (this->DestinationEQEffect).Bandwidth1;
    if (fVar6 <= fVar4) {
      fVar6 = fVar4;
    }
    if (fVar5 <= fVar2) {
      fVar2 = fVar5;
    }
    (this->DestinationEQEffect).Bandwidth0 = fVar6;
    fVar6 = (this->DestinationEQEffect).Bandwidth2;
    if (fVar2 <= fVar4) {
      fVar2 = fVar4;
    }
    if (fVar5 <= fVar6) {
      fVar6 = fVar5;
    }
    (this->DestinationEQEffect).Bandwidth1 = fVar2;
    fVar2 = (this->DestinationEQEffect).Bandwidth3;
    if (fVar6 <= fVar4) {
      fVar6 = fVar4;
    }
    if (fVar5 <= fVar2) {
      fVar2 = fVar5;
    }
    (this->DestinationEQEffect).Bandwidth2 = fVar6;
    if (fVar2 <= fVar4) {
      fVar2 = fVar4;
    }
    (this->DestinationEQEffect).Bandwidth3 = fVar2;
    this->bEQChanged = true;
    this->CurrentEQMix = param_1;
  }
  return;
}

// SetReverbSettings @ 147661b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioEffectsManager::SetReverbSettings
          (FAudioEffectsManager *this,FReverbSettings *param_1,bool param_2)

{
  UReverbEffect *pUVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((((param_1->bApplyReverb != (this->CurrentReverbSettings).bApplyReverb) ||
       ((param_1->ReverbEffect).field0_0x0.DebugPtr !=
        (this->CurrentReverbAsset).field0_0x0.DebugPtr)) || (param_2)) ||
     (__real_322bcc77 <
      (float)((uint)(param_1->Volume - (this->CurrentReverbSettings).Volume) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pUVar1 = (this->CurrentReverbAsset).field0_0x0.DebugPtr;
    if (pUVar1 == (UReverbEffect *)0x0) {
      pFVar3 = ::FString::FString(&local_38,L"None");
      FVar4.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
    }
    pUVar1 = (param_1->ReverbEffect).field0_0x0.DebugPtr;
    bVar5 = pUVar1 == (UReverbEffect *)0x0;
    if (bVar5) {
      pFVar3 = ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      pFVar3 = &local_48;
    }
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((!bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    if ((__real_3f800000 < param_1->Volume) && (2 < (byte)LogAudio._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    FReverbSettings::operator=(&this->CurrentReverbSettings,param_1);
    (this->SourceReverbEffect).Time = (this->CurrentReverbEffect).Time;
    (this->SourceReverbEffect).Volume = (this->CurrentReverbEffect).Volume;
    (this->SourceReverbEffect).Density = (this->CurrentReverbEffect).Density;
    (this->SourceReverbEffect).Diffusion = (this->CurrentReverbEffect).Diffusion;
    (this->SourceReverbEffect).Gain = (this->CurrentReverbEffect).Gain;
    (this->SourceReverbEffect).GainHF = (this->CurrentReverbEffect).GainHF;
    (this->SourceReverbEffect).DecayTime = (this->CurrentReverbEffect).DecayTime;
    (this->SourceReverbEffect).DecayHFRatio = (this->CurrentReverbEffect).DecayHFRatio;
    (this->SourceReverbEffect).ReflectionsGain = (this->CurrentReverbEffect).ReflectionsGain;
    (this->SourceReverbEffect).ReflectionsDelay = (this->CurrentReverbEffect).ReflectionsDelay;
    (this->SourceReverbEffect).LateGain = (this->CurrentReverbEffect).LateGain;
    (this->SourceReverbEffect).LateDelay = (this->CurrentReverbEffect).LateDelay;
    (this->SourceReverbEffect).AirAbsorptionGainHF = (this->CurrentReverbEffect).AirAbsorptionGainHF
    ;
    (this->SourceReverbEffect).RoomRolloffFactor = (this->CurrentReverbEffect).RoomRolloffFactor;
    (this->SourceReverbEffect).bBypassEarlyReflections =
         (this->CurrentReverbEffect).bBypassEarlyReflections;
    (this->SourceReverbEffect).bBypassLateReflections =
         (this->CurrentReverbEffect).bBypassLateReflections;
    (this->SourceReverbEffect).Time = (double)FApp::CurrentTime;
    pUVar1 = (param_1->ReverbEffect).field0_0x0.DebugPtr;
    if (pUVar1 != (UReverbEffect *)0x0) {
      (this->DestinationReverbEffect).Density = pUVar1->Density;
      (this->DestinationReverbEffect).Diffusion = pUVar1->Diffusion;
      (this->DestinationReverbEffect).Gain = pUVar1->Gain;
      (this->DestinationReverbEffect).GainHF = pUVar1->GainHF;
      (this->DestinationReverbEffect).DecayTime = pUVar1->DecayTime;
      (this->DestinationReverbEffect).DecayHFRatio = pUVar1->DecayHFRatio;
      (this->DestinationReverbEffect).ReflectionsGain = pUVar1->ReflectionsGain;
      (this->DestinationReverbEffect).ReflectionsDelay = pUVar1->ReflectionsDelay;
      (this->DestinationReverbEffect).LateGain = pUVar1->LateGain;
      (this->DestinationReverbEffect).LateDelay = pUVar1->LateDelay;
      (this->DestinationReverbEffect).AirAbsorptionGainHF = pUVar1->AirAbsorptionGainHF;
      (this->DestinationReverbEffect).bBypassEarlyReflections = pUVar1->bBypassEarlyReflections;
      (this->DestinationReverbEffect).bBypassLateReflections = pUVar1->bBypassLateReflections;
    }
    this->bReverbChanged = true;
    if (param_2) {
      (this->DestinationReverbEffect).Time = (double)FApp::CurrentTime;
    }
    else {
      (this->DestinationReverbEffect).Time = (double)param_1->FadeTime + (double)FApp::CurrentTime;
    }
    (this->DestinationReverbEffect).Volume = param_1->Volume;
    if (((param_1->ReverbEffect).field0_0x0.DebugPtr == (UReverbEffect *)0x0) ||
       (param_1->bApplyReverb == false)) {
      (this->DestinationReverbEffect).Volume = 0.0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->ReverbEffect).field0_0x0.DebugPtr, pUVar1 != (UReverbEffect *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->CurrentReverbAsset).field0_0x0 = (param_1->ReverbEffect).field0_0x0;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
  }
  return;
}

// Update @ 14766c920

void __thiscall FAudioEffectsManager::Update(FAudioEffectsManager *this)

{
  char cVar1;
  
  cVar1 = (**(code **)((this->CurrentReverbEffect)._padding_ + 8))
                    (&this->CurrentReverbEffect,&this->SourceReverbEffect,
                     &this->DestinationReverbEffect);
  if (((cVar1 == '\0') || (this->bReverbActive != false)) || (this->bReverbChanged != false)) {
    this->bReverbChanged = false;
    (this->PrevReverbEffect).Time = (this->CurrentReverbEffect).Time;
    (this->PrevReverbEffect).Volume = (this->CurrentReverbEffect).Volume;
    (this->PrevReverbEffect).Density = (this->CurrentReverbEffect).Density;
    (this->PrevReverbEffect).Diffusion = (this->CurrentReverbEffect).Diffusion;
    (this->PrevReverbEffect).Gain = (this->CurrentReverbEffect).Gain;
    (this->PrevReverbEffect).GainHF = (this->CurrentReverbEffect).GainHF;
    (this->PrevReverbEffect).DecayTime = (this->CurrentReverbEffect).DecayTime;
    (this->PrevReverbEffect).DecayHFRatio = (this->CurrentReverbEffect).DecayHFRatio;
    (this->PrevReverbEffect).ReflectionsGain = (this->CurrentReverbEffect).ReflectionsGain;
    (this->PrevReverbEffect).ReflectionsDelay = (this->CurrentReverbEffect).ReflectionsDelay;
    (this->PrevReverbEffect).LateGain = (this->CurrentReverbEffect).LateGain;
    (this->PrevReverbEffect).LateDelay = (this->CurrentReverbEffect).LateDelay;
    (this->PrevReverbEffect).AirAbsorptionGainHF = (this->CurrentReverbEffect).AirAbsorptionGainHF;
    (this->PrevReverbEffect).RoomRolloffFactor = (this->CurrentReverbEffect).RoomRolloffFactor;
    (this->PrevReverbEffect).bBypassEarlyReflections =
         (this->CurrentReverbEffect).bBypassEarlyReflections;
    (this->PrevReverbEffect).bBypassLateReflections =
         (this->CurrentReverbEffect).bBypassLateReflections;
    this->bReverbActive = cVar1 == '\0';
    (**(code **)(this->_padding_ + 8))(this,&this->CurrentReverbEffect);
  }
  cVar1 = (**(code **)((this->CurrentEQEffect)._padding_ + 8))
                    (&this->CurrentEQEffect,&this->SourceEQEffect,&this->DestinationEQEffect);
  if (((cVar1 == '\0') || (this->bEQActive != false)) || (this->bEQChanged != false)) {
    this->bEQChanged = false;
    this->bEQActive = cVar1 == '\0';
    (**(code **)(this->_padding_ + 0x10))(this,&this->CurrentEQEffect);
  }
  return;
}

// VolumeToDeciBels @ 147670980

long64 __thiscall FAudioEffectsManager::VolumeToDeciBels(FAudioEffectsManager *this,float param_1)

{
  longlong lVar1;
  long64 lVar2;
  float fVar3;
  
  lVar2 = -100;
  if (0.0 < param_1) {
    fVar3 = log10f(param_1);
    lVar1 = 0;
    if ((longlong)(fVar3 * __real_41a00000) < 0) {
      lVar1 = (longlong)(fVar3 * __real_41a00000);
    }
    if (-100 < lVar1) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}

// VolumeToMilliBels @ 1476709d0

long64 __thiscall
FAudioEffectsManager::VolumeToMilliBels(FAudioEffectsManager *this,float param_1,int param_2)

{
  longlong lVar1;
  long64 lVar2;
  float fVar3;
  
  lVar2 = -10000;
  if (0.0 < param_1) {
    fVar3 = log10f(param_1);
    lVar1 = (longlong)param_2;
    if ((longlong)(fVar3 * __real_44fa0000) < (longlong)param_2) {
      lVar1 = (longlong)(fVar3 * __real_44fa0000);
    }
    if (-10000 < lVar1) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}

