// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 6

// ~FAudioEffectsManager @ 1464dbd90

void __thiscall FAudioEffectsManager::~FAudioEffectsManager(FAudioEffectsManager *this)

{
  this->_padding_ = (longlong)&___7FAudioEffectsManager__6B_;
  (this->DestinationEQEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->CurrentEQEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->SourceEQEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->DestinationReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->PrevReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->CurrentReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  (this->SourceReverbEffect)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  return;
}

// InitEffect @ 146509c40

void * __thiscall FAudioEffectsManager::InitEffect(FAudioEffectsManager *this,FSoundSource *param_1)

{
  return (void *)0x0;
}

// SetEQEffectParameters @ 14651f690

void __thiscall
FAudioEffectsManager::SetEQEffectParameters
          (FAudioEffectsManager *this,FAudioEffectParameters *param_1)

{
  return;
}

// SetRadioEffectParameters @ 146520c10

void __thiscall
FAudioEffectsManager::SetRadioEffectParameters
          (FAudioEffectsManager *this,FAudioEffectParameters *param_1)

{
  return;
}

// SetReverbEffectParameters @ 146520c40

void __thiscall
FAudioEffectsManager::SetReverbEffectParameters
          (FAudioEffectsManager *this,FAudioEffectParameters *param_1)

{
  return;
}

// UpdateEffect @ 14652b840

void * __thiscall
FAudioEffectsManager::UpdateEffect(FAudioEffectsManager *this,FSoundSource *param_1)

{
  return (void *)0x0;
}

