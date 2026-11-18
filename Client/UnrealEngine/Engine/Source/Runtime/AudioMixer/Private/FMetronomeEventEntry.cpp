// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// FMetronomeEventEntry @ 14653ca20

FMetronomeEventEntry * __thiscall
Audio::FQuartzMetronome::FMetronomeEventEntry::FMetronomeEventEntry(FMetronomeEventEntry *this)

{
  (this->EventFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventFrames).ArrayNum = 0;
  (this->EventFrames).ArrayMax = 0;
  return this;
}

// ~FMetronomeEventEntry @ 1465405b0

void __thiscall
Audio::FQuartzMetronome::FMetronomeEventEntry::~FMetronomeEventEntry(FMetronomeEventEntry *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->EventFrames).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Reset @ 14656f310

void __thiscall Audio::FQuartzMetronome::FMetronomeEventEntry::Reset(FMetronomeEventEntry *this)

{
  (this->EventFrames).ArrayNum = 0;
  if ((this->EventFrames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->EventFrames).ArrayMax);
  }
  return;
}

