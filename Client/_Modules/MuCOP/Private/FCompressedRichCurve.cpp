// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 2

// FCompressedRichCurve @ 14d3672b0

FCompressedRichCurve * __thiscall
FCompressedRichCurve::FCompressedRichCurve(FCompressedRichCurve *this)

{
  this->CompressionFormat = '\0';
  this->KeyTimeCompressionFormat = '\x01';
  this->PreInfinityExtrap = '\x05';
  this->PostInfinityExtrap = '\x05';
  this->ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  (this->CompressedKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedKeys).ArrayNum = 0;
  (this->CompressedKeys).ArrayMax = 0;
  return this;
}

// ~FCompressedRichCurve @ 14d367c00

void __thiscall FCompressedRichCurve::~FCompressedRichCurve(FCompressedRichCurve *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->CompressedKeys).AllocatorInstance.Data;
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

