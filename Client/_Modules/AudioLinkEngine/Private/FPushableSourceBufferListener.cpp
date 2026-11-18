// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 4

// GetPushableInterface @ 1464cd300

IPushableAudioOutput * __thiscall
`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener::
GetPushableInterface(void *this)

{
  IPushableAudioOutput *pIVar1;
  
  pIVar1 = (IPushableAudioOutput *)((longlong)this + 0xa8);
  if (this == &DAT_00000008) {
    pIVar1 = (IPushableAudioOutput *)0x0;
  }
  return pIVar1;
}

// GetPushableInterface @ 1464cd320

IPushableAudioOutput * __thiscall
`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener::
GetPushableInterface(void *this)

{
  IPushableAudioOutput *pIVar1;
  
  pIVar1 = (IPushableAudioOutput *)((longlong)this + 0xa8);
  if (this == &DAT_00000008) {
    pIVar1 = (IPushableAudioOutput *)0x0;
  }
  return pIVar1;
}

// LastBuffer @ 1464cd450

void __thiscall
`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener::LastBuffer
          (void *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001464cd45a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)((longlong)this + -0xb0) + 0x10))();
  return;
}

// PushNewBuffer @ 1464cdbf0

void __thiscall
`IAudioLinkFactory::CreatePushableBufferListener'::__l2::FPushableSourceBufferListener::
PushNewBuffer(void *this,FOnNewBufferParams *param_1)

{
  float *local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_28 = param_1->AudioData;
  local_18 = param_1->NumChannels;
  local_1c = param_1->NumSamples;
  local_20 = param_1->Id;
  local_14 = param_1->SampleRate;
  (**(code **)(*(longlong *)((longlong)this + -0xb0) + 8))
            ((longlong *)((longlong)this + -0xb0),&local_28);
  return;
}

