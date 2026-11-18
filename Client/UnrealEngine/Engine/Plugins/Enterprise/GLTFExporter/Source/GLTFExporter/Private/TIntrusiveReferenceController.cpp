// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// DestroyObject @ 14e5f0b30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<FColor,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<FColor,TSizedDefaultAllocator<32>_>,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
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

// DestroyObject @ 14e5f0b50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGLTFMemoryArchive,1>::DestroyObject
          (TIntrusiveReferenceController<FGLTFMemoryArchive,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x98);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FArchive::~FArchive((FArchive *)&this->ObjectStorage);
  return;
}

