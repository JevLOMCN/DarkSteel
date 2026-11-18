// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 17

// ~IAudioSpatialization @ 14f044c00

void __thiscall IAudioSpatialization::~IAudioSpatialization(IAudioSpatialization *this)

{
  *this = (IAudioSpatialization)&___7IAudioSpatialization__6B_;
  return;
}

// CreateSpatializationEffect @ 14f046c40

bool __thiscall
IAudioSpatialization::CreateSpatializationEffect(IAudioSpatialization *this,uint param_1)

{
  return true;
}

// GetSpatializationEffect @ 14f0492e0

void * __thiscall
IAudioSpatialization::GetSpatializationEffect(IAudioSpatialization *this,uint param_1)

{
  return (void *)0x0;
}

// GetSpatializationParameters @ 14f0492f0

void __thiscall
IAudioSpatialization::GetSpatializationParameters
          (IAudioSpatialization *this,uint param_1,FSpatializationParams *param_2)

{
  return;
}

// Initialize @ 14f049a30

void __thiscall
IAudioSpatialization::Initialize
          (IAudioSpatialization *this,FAudioPluginInitializationParams *param_1)

{
  return;
}

// InitializeSpatializationEffect @ 14f049ae0

void __thiscall
IAudioSpatialization::InitializeSpatializationEffect(IAudioSpatialization *this,uint param_1)

{
  return;
}

// IsSpatializationEffectInitialized @ 14f049c40

bool __thiscall IAudioSpatialization::IsSpatializationEffectInitialized(IAudioSpatialization *this)

{
  return false;
}

// OnAllSourcesProcessed @ 14f04a350

void __thiscall IAudioSpatialization::OnAllSourcesProcessed(IAudioSpatialization *this)

{
  return;
}

// OnDeviceShutdown @ 14f04a380

void __thiscall
IAudioSpatialization::OnDeviceShutdown(IAudioSpatialization *this,FAudioDevice *param_1)

{
  return;
}

// OnInitSource @ 14f04aae0

void __thiscall
IAudioSpatialization::OnInitSource
          (IAudioSpatialization *this,uint param_1,FName *param_2,uint param_3,
          USpatializationPluginSourceSettingsBase *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014f04aae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x48))();
  return;
}

// OnInitSource @ 14f04ab00

void __thiscall
IAudioSpatialization::OnInitSource
          (IAudioSpatialization *this,uint param_1,FName *param_2,
          USpatializationPluginSourceSettingsBase *param_3)

{
  return;
}

// OnReleaseSource @ 14f04b340

void __thiscall IAudioSpatialization::OnReleaseSource(IAudioSpatialization *this,uint param_1)

{
  return;
}

// ProcessAudio @ 14f04bb40

void __thiscall
IAudioSpatialization::ProcessAudio
          (IAudioSpatialization *this,FAudioPluginSourceInputData *param_1,
          FAudioPluginSourceOutputData *param_2)

{
  return;
}

// ProcessSpatializationForVoice @ 14f04bf00

void __thiscall
IAudioSpatialization::ProcessSpatializationForVoice
          (IAudioSpatialization *this,uint param_1,float *param_2,float *param_3)

{
  return;
}

// ProcessSpatializationForVoice @ 14f04bf10

void __thiscall
IAudioSpatialization::ProcessSpatializationForVoice
          (IAudioSpatialization *this,uint param_1,float *param_2,float *param_3,
          TVector<double> *param_4)

{
  return;
}

// SetSpatializationParameters @ 14f04cfe0

void __thiscall
IAudioSpatialization::SetSpatializationParameters
          (IAudioSpatialization *this,uint param_1,FSpatializationParams *param_2)

{
  return;
}

// Shutdown @ 14f04d010

void __thiscall IAudioSpatialization::Shutdown(IAudioSpatialization *this)

{
  return;
}

