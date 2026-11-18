// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FWorldAsyncTraceState @ 1477ee750

FWorldAsyncTraceState * __thiscall
FWorldAsyncTraceState::FWorldAsyncTraceState(FWorldAsyncTraceState *this)

{
  this->DataBuffer[0].TraceData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DataBuffer[0].TraceData.ArrayNum = 0;
  this->DataBuffer[0].TraceData.ArrayMax = 0;
  this->DataBuffer[0].OverlapData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DataBuffer[0].OverlapData.ArrayNum = 0;
  this->DataBuffer[0].OverlapData.ArrayMax = 0;
  this->DataBuffer[0].NumQueuedTraceData = 0;
  this->DataBuffer[0].NumQueuedOverlapData = 0;
  this->DataBuffer[0].TransactionalTraceData.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DataBuffer[0].TransactionalTraceData.Data.ArrayNum = 0;
  this->DataBuffer[0].TransactionalTraceData.Data.ArrayMax = 0;
  this->DataBuffer[0].TransactionalOverlapData.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DataBuffer[0].TransactionalOverlapData.Data.ArrayNum = 0;
  this->DataBuffer[0].TransactionalOverlapData.Data.ArrayMax = 0;
  this->DataBuffer[0].bAsyncAllowed = true;
  this->DataBuffer[0].bAsyncTasksCompleted = false;
  this->DataBuffer[0].AsyncTraceCompletionEvent.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  this->DataBuffer[0].AsyncTraceCompletionEvent.ArrayNum = 0;
  this->DataBuffer[0].AsyncTraceCompletionEvent.ArrayMax = 4;
  this->DataBuffer[1].TraceData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DataBuffer[1].TraceData.ArrayNum = 0;
  this->DataBuffer[1].TraceData.ArrayMax = 0;
  this->DataBuffer[1].OverlapData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DataBuffer[1].OverlapData.ArrayNum = 0;
  this->DataBuffer[1].OverlapData.ArrayMax = 0;
  this->DataBuffer[1].NumQueuedTraceData = 0;
  this->DataBuffer[1].NumQueuedOverlapData = 0;
  this->DataBuffer[1].TransactionalTraceData.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DataBuffer[1].TransactionalTraceData.Data.ArrayNum = 0;
  this->DataBuffer[1].TransactionalTraceData.Data.ArrayMax = 0;
  this->DataBuffer[1].TransactionalOverlapData.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DataBuffer[1].TransactionalOverlapData.Data.ArrayNum = 0;
  this->DataBuffer[1].TransactionalOverlapData.Data.ArrayMax = 0;
  this->DataBuffer[1].bAsyncAllowed = false;
  this->DataBuffer[1].bAsyncTasksCompleted = false;
  this->DataBuffer[1].AsyncTraceCompletionEvent.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  this->DataBuffer[1].AsyncTraceCompletionEvent.ArrayNum = 0;
  *(undefined8 *)&this->DataBuffer[1].AsyncTraceCompletionEvent.ArrayMax = 4;
  return this;
}

