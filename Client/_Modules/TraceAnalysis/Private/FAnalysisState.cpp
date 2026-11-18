// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// FAnalysisState @ 14d38f110

FAnalysisState * __thiscall UE::Trace::FAnalysisState::FAnalysisState(FAnalysisState *this)

{
  TArray<UE::Trace::FThreads::FInfo_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  
  (this->Threads).LastGetInfoId = 0xffffffff;
  pTVar1 = &(this->Threads).Infos;
  (this->Threads).GroupName.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Threads).Infos.ArrayMax;
  (this->Threads).GroupName.ArrayNum = 0;
  (this->Threads).GroupName.ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Threads).Infos.ArrayNum = 0;
  *piVar2 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x40,&pTVar1->AllocatorInstance,0,piVar2);
  (this->Timing).BaseTimestamp = 0;
  (this->Timing).TimestampHz = 0;
  (this->Timing).InvTimestampHz = 0.0;
  (this->Timing).EventTimestamp = 0;
  (this->Timing).BaseDateTimestamp = 0.0;
  (this->Serial).Value = 0;
  (this->Serial).Mask = 0;
  this->UserUidBias = 5;
  return this;
}

