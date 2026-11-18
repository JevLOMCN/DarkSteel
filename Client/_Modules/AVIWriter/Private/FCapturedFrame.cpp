// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 2

// FCapturedFrame @ 14464e9d0

FCapturedFrame * __thiscall
FCapturedFrame::FCapturedFrame
          (FCapturedFrame *this,double param_1,double param_2,uint param_3,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  
  this->StartTimeSeconds = param_1;
  this->EndTimeSeconds = param_2;
  this->FrameIndex = param_3;
  (this->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameData).AllocatorInstance.Data = (param_4->AllocatorInstance).Data;
  (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FrameData).ArrayNum = param_4->ArrayNum;
  (this->FrameData).ArrayMax = param_4->ArrayMax;
  param_4->ArrayNum = 0;
  param_4->ArrayMax = 0;
  this->FrameProcessedEvent = (FEvent *)0x0;
  pFVar1 = (param_4->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FCapturedFrame @ 14464ed00

void __thiscall FCapturedFrame::~FCapturedFrame(FCapturedFrame *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->FrameData).AllocatorInstance.Data;
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

