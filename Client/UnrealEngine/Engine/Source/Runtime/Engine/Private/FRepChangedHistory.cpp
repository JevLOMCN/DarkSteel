// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FRepChangedHistory @ 147a26430

FRepChangedHistory * __thiscall
FRepChangedHistory::FRepChangedHistory(FRepChangedHistory *this,FRepChangedHistory *param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Changed;
  this->OutPacketIdRange = param_1->OutPacketIdRange;
  piVar2 = &(this->Changed).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Changed).ArrayNum;
  _Src = (param_1->Changed).AllocatorInstance.Data;
  (this->Changed).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 2);
  }
  this->Resend = param_1->Resend;
  return this;
}

// ~FRepChangedHistory @ 147a29ba0

void __thiscall FRepChangedHistory::~FRepChangedHistory(FRepChangedHistory *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Changed).AllocatorInstance.Data;
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

// FRepChangedHistory @ 1484bbe40

FRepChangedHistory * __thiscall FRepChangedHistory::FRepChangedHistory(FRepChangedHistory *this)

{
  (this->OutPacketIdRange).First = -1;
  (this->OutPacketIdRange).Last = -1;
  (this->Changed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Changed).ArrayNum = 0;
  (this->Changed).ArrayMax = 0;
  this->Resend = false;
  return this;
}

