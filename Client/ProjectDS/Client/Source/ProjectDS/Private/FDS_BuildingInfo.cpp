// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// ~FDS_BuildingInfo @ 14ba928a0

void __thiscall FDS_BuildingInfo::~FDS_BuildingInfo(FDS_BuildingInfo *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->LocalIndices).AllocatorInstance.Data;
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

// operator= @ 14ba929a0

FDS_BuildingInfo * __thiscall
FDS_BuildingInfo::operator=(FDS_BuildingInfo *this,FDS_BuildingInfo *param_1)

{
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->LocalIndices;
  this->Path = param_1->Path;
  pTVar2 = &this->LocalIndices;
  *(undefined8 *)&(this->Size).field0_0x0 = *(undefined8 *)&(param_1->Size).field0_0x0;
  (this->Size).field0_0x0._s_0.Z = (param_1->Size).field0_0x0._s_0.Z;
  this->ConstructType = param_1->ConstructType;
  this->AttachableFaceType = param_1->AttachableFaceType;
  this->Rotation = param_1->Rotation;
  *(undefined8 *)&(this->GridIndex).field0_0x0 = *(undefined8 *)&(param_1->GridIndex).field0_0x0;
  (this->GridIndex).field0_0x0._s_0.Z = (param_1->GridIndex).field0_0x0._s_0.Z;
  this->CenterIndex = param_1->CenterIndex;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LocalIndices).ArrayNum = (param_1->LocalIndices).ArrayNum;
    (this->LocalIndices).ArrayMax = (param_1->LocalIndices).ArrayMax;
    (param_1->LocalIndices).ArrayNum = 0;
    (param_1->LocalIndices).ArrayMax = 0;
  }
  return this;
}

