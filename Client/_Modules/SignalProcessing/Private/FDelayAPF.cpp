// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// FDelayAPF @ 1444a3660

FDelayAPF * __thiscall Audio::FDelayAPF::FDelayAPF(FDelayAPF *this)

{
  FDelay::FDelay((FDelay *)this);
  this->G = 0.0;
  this->_padding_ = (longlong)&___7FDelayAPF_Audio__6B_;
  return this;
}

// ~FDelayAPF @ 1444a6180

void __thiscall Audio::FDelayAPF::~FDelayAPF(FDelayAPF *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FDelay_Audio__6B_;
  pvVar1 = (void *)this->_padding_;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ProcessAudioSample @ 1444df3e0

float __thiscall Audio::FDelayAPF::ProcessAudioSample(FDelayAPF *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = FDelay::Read((FDelay *)this);
  if (*(int *)((longlong)&this->_padding_ + 4) == (int)this->_padding_) {
    FDelay::WriteDelayAndInc((FDelay *)this,param_1);
    return param_1;
  }
  fVar1 = this->G;
  fVar3 = fVar1 * fVar2 + param_1;
  FDelay::WriteDelayAndInc((FDelay *)this,fVar3);
  return fVar2 - fVar3 * fVar1;
}

