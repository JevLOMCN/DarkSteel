// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 3

// DestroyObject @ 146bf7e00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
::DestroyObject(TIntrusiveReferenceController<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
                *this)

{
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
  ~TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
            ((TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 146bf7e10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaPlayerLifecycleManagerDelegateControl,1>
::DestroyObject(TIntrusiveReferenceController<FMediaPlayerLifecycleManagerDelegateControl,1> *this)

{
  FMediaPlayerLifecycleManagerDelegateControl::~FMediaPlayerLifecycleManagerDelegateControl
            ((FMediaPlayerLifecycleManagerDelegateControl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146bf7e20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMediaRecorderClockSink,1>::DestroyObject
          (TIntrusiveReferenceController<FMediaRecorderClockSink,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMediaClockSink__6B_;
  return;
}

