// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 9

// GetBuffer @ 146501490

FSoundBuffer * __thiscall FSoundSource::GetBuffer(FSoundSource *this)

{
  return (FSoundBuffer *)0x0;
}

// GetEnvelopeValue @ 1465024b0

float __thiscall FSoundSource::GetEnvelopeValue(FSoundSource *this)

{
  return 0.0;
}

// GetRelativeRenderCost @ 146505290

float __thiscall FSoundSource::GetRelativeRenderCost(FSoundSource *this)

{
  return __real_3f800000;
}

// InitializeSourceEffects @ 14650e260

void __thiscall FSoundSource::InitializeSourceEffects(FSoundSource *this,uint param_1)

{
  return;
}

// IsInitialized @ 14650ea60

bool __thiscall FSoundSource::IsInitialized(FSoundSource *this)

{
  return this->bInitialized;
}

// IsPreparedToInit @ 14650f0a0

bool __thiscall FSoundSource::IsPreparedToInit(FSoundSource *this)

{
  return true;
}

// IsStopping @ 14650f330

bool __thiscall FSoundSource::IsStopping(FSoundSource *this)

{
  return false;
}

// PrepareForInitialization @ 146515890

bool __thiscall FSoundSource::PrepareForInitialization(FSoundSource *this,FWaveInstance *param_1)

{
  return true;
}

// StopNow @ 1465260a0

void __thiscall FSoundSource::StopNow(FSoundSource *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001465260a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

