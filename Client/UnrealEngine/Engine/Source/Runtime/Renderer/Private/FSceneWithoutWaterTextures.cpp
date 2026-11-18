// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FSceneWithoutWaterTextures @ 1447f5360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneWithoutWaterTextures * __thiscall
FSceneWithoutWaterTextures::FSceneWithoutWaterTextures(FSceneWithoutWaterTextures *this)

{
  this->RefractionDownsampleFactor = 1.0;
  this->SeparatedMainDirLightTexture = (FRDGTexture *)0x0;
  this->ColorTexture = (FRDGTexture *)0x0;
  this->DepthTexture = (FRDGTexture *)0x0;
  (this->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  return this;
}

// ~FSceneWithoutWaterTextures @ 1447f69e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneWithoutWaterTextures::~FSceneWithoutWaterTextures(FSceneWithoutWaterTextures *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Views).AllocatorInstance.Data;
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

