// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FChannelInfo @ 1453f9390

FChannelInfo * __thiscall
FDynamicShadowMapChannelBindingHelper::FChannelInfo::FChannelInfo(FChannelInfo *this)

{
  (this->Lights).AllocatorInstance.SecondaryData = (ForElementType<FLightSceneInfo_*>)0x0;
  (this->Lights).ArrayNum = 0;
  (this->Lights).ArrayMax = 8;
  this->bIsAvailable = true;
  return this;
}

// ~FChannelInfo @ 145404ea0

void __thiscall
FDynamicShadowMapChannelBindingHelper::FChannelInfo::~FChannelInfo(FChannelInfo *this)

{
  ForElementType<FLightSceneInfo_*> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->Lights).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FLightSceneInfo_*>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<FLightSceneInfo_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

