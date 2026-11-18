// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 8

// ~TMediaSampleSink<IMediaAudioSample> @ 146bf2f70

void __thiscall
TMediaSampleSink<IMediaAudioSample>::~TMediaSampleSink<IMediaAudioSample>
          (TMediaSampleSink<IMediaAudioSample> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaAudioSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  return;
}

// ~TMediaSampleSink<IMediaBinarySample> @ 146bf2fc0

void __thiscall
TMediaSampleSink<IMediaBinarySample>::~TMediaSampleSink<IMediaBinarySample>
          (TMediaSampleSink<IMediaBinarySample> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaBinarySample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  return;
}

// ~TMediaSampleSink<IMediaOverlaySample> @ 146bf3010

void __thiscall
TMediaSampleSink<IMediaOverlaySample>::~TMediaSampleSink<IMediaOverlaySample>
          (TMediaSampleSink<IMediaOverlaySample> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaOverlaySample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  return;
}

// ~TMediaSampleSink<IMediaTextureSample> @ 146bf3060

void __thiscall
TMediaSampleSink<IMediaTextureSample>::~TMediaSampleSink<IMediaTextureSample>
          (TMediaSampleSink<IMediaTextureSample> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaTextureSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaSampleSinkEvent).field_0x8,
             *(int *)&(this->MediaSampleSinkEvent).field_0x10);
  pvVar1 = *(void **)&(this->MediaSampleSinkEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaSampleSinkEvent);
  return;
}

// CanAcceptSamples @ 146bf60c0

bool __thiscall
TMediaSampleSink<IMediaAudioSample>::CanAcceptSamples
          (TMediaSampleSink<IMediaAudioSample> *this,int param_1)

{
  return true;
}

// CanAcceptSamples @ 146bf60d0

bool __thiscall
TMediaSampleSink<IMediaBinarySample>::CanAcceptSamples
          (TMediaSampleSink<IMediaBinarySample> *this,int param_1)

{
  return true;
}

// CanAcceptSamples @ 146bf60e0

bool __thiscall
TMediaSampleSink<IMediaOverlaySample>::CanAcceptSamples
          (TMediaSampleSink<IMediaOverlaySample> *this,int param_1)

{
  return true;
}

// CanAcceptSamples @ 146bf60f0

bool __thiscall
TMediaSampleSink<IMediaTextureSample>::CanAcceptSamples
          (TMediaSampleSink<IMediaTextureSample> *this,int param_1)

{
  return true;
}

