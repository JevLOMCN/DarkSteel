// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator= @ 1452117d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVisualizeBufferTile * __thiscall
FVisualizeBufferTile::operator=(FVisualizeBufferTile *this,FVisualizeBufferTile *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->Label;
  (this->Input).Texture = (param_1->Input).Texture;
  pFVar2 = &this->Label;
  (this->Input).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Input).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Input).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Input).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Label).Data.ArrayNum = (param_1->Label).Data.ArrayNum;
    (this->Label).Data.ArrayMax = (param_1->Label).Data.ArrayMax;
    (param_1->Label).Data.ArrayNum = 0;
    (param_1->Label).Data.ArrayMax = 0;
  }
  this->bSelected = param_1->bSelected;
  return this;
}

// ~FVisualizeBufferTile @ 145296810

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FVisualizeBufferTile::~FVisualizeBufferTile(FVisualizeBufferTile *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Label).Data.AllocatorInstance.Data;
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

