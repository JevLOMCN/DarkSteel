// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 7

// OnBufferEnd @ 148d3f0c0

void __thiscall Audio::FXAudio2VoiceCallback::OnBufferEnd(FXAudio2VoiceCallback *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FXAudio2VoiceCallback_OnBufferEnd");
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId107,"FXAudio2VoiceCallback_OnBufferEnd",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  }
  if ((param_1 == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  IAudioMixerPlatformInterface::ReadNextBuffer(param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// OnBufferStart @ 148d3f180

void __thiscall
Audio::FXAudio2VoiceCallback::OnBufferStart(FXAudio2VoiceCallback *this,void *param_1)

{
  return;
}

// OnLoopEnd @ 148d3f8f0

void __thiscall Audio::FXAudio2VoiceCallback::OnLoopEnd(FXAudio2VoiceCallback *this,void *param_1)

{
  return;
}

// OnStreamEnd @ 148d3f9b0

void __thiscall Audio::FXAudio2VoiceCallback::OnStreamEnd(FXAudio2VoiceCallback *this)

{
  return;
}

// OnVoiceError @ 148d3f9c0

void __thiscall
Audio::FXAudio2VoiceCallback::OnVoiceError
          (FXAudio2VoiceCallback *this,void *param_1,T_HRESULT param_2)

{
  return;
}

// OnVoiceProcessingPassEnd @ 148d3f9d0

void __thiscall Audio::FXAudio2VoiceCallback::OnVoiceProcessingPassEnd(FXAudio2VoiceCallback *this)

{
  return;
}

// OnVoiceProcessingPassStart @ 148d3f9e0

void __thiscall
Audio::FXAudio2VoiceCallback::OnVoiceProcessingPassStart(FXAudio2VoiceCallback *this,uint param_1)

{
  return;
}

