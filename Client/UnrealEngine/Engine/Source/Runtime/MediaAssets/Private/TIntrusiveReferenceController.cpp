// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 5

// DestroyObject @ 146c26a10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>,1>
              *this)

{
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::
  ~TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>
            ((TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146c26a20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaAudioSampleQueue,1>::DestroyObject
          (TIntrusiveReferenceController<FMediaAudioSampleQueue,1> *this)

{
  TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
  ~TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>
            ((TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146c26a30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaPlayerProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FMediaPlayerProxy,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMediaPlayerProxy__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146c26a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 146c26a70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaSoundComponentClockSink,1>::
DestroyObject(TIntrusiveReferenceController<FMediaSoundComponentClockSink,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMediaClockSink__6B_;
  return;
}

// DestroyObject @ 146c26a90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaTextureClockSink,1>::DestroyObject
          (TIntrusiveReferenceController<FMediaTextureClockSink,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMediaTextureClockSink__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x10));
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMediaClockSink__6B_;
  return;
}

