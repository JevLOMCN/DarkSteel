// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// ~IAudioReverb @ 14f044bc0

void __thiscall IAudioReverb::~IAudioReverb(IAudioReverb *this)

{
  *this = (IAudioReverb)&___7IAudioReverb__6B_;
  return;
}

// Initialize @ 14f049a20

void __thiscall
IAudioReverb::Initialize(IAudioReverb *this,FAudioPluginInitializationParams *param_1)

{
  return;
}

// LoadSubmix @ 14f04a290

USoundSubmix * __thiscall IAudioReverb::LoadSubmix(IAudioReverb *this)

{
  USoundSubmix *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f04a293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (USoundSubmix *)(**(code **)((longlong)*this + 0x40))();
  return pUVar1;
}

// OnDeviceShutdown @ 14f04a370

void __thiscall IAudioReverb::OnDeviceShutdown(IAudioReverb *this,FAudioDevice *param_1)

{
  return;
}

// ProcessSourceAudio @ 14f04bef0

void __thiscall
IAudioReverb::ProcessSourceAudio
          (IAudioReverb *this,FAudioPluginSourceInputData *param_1,
          FAudioPluginSourceOutputData *param_2)

{
  return;
}

// Shutdown @ 14f04d000

void __thiscall IAudioReverb::Shutdown(IAudioReverb *this)

{
  return;
}

