// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FRemoveOperator @ 14ad3c4a0

FRemoveOperator * __thiscall
Metasound::DynamicGraph::FRemoveOperator::FRemoveOperator
          (FRemoveOperator *this,ulong64 param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  this->OperatorID = param_1;
  this->_padding_ = (longlong)&___7FRemoveOperator_DynamicGraph_Metasound__6B_;
  (this->OperatorsConnectedToInput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OperatorsConnectedToInput).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OperatorsConnectedToInput).ArrayNum = param_2->ArrayNum;
  (this->OperatorsConnectedToInput).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// Transform @ 14ad67b90

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FRemoveOperator::Transform
          (FRemoveOperator *this,FDynamicGraphOperatorData *param_1)

{
  bool bVar1;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::RemoveOperator");
  }
  if (CpuChannel->Enabled < 0) {
    RemoveOperator(this->OperatorID,&this->OperatorsConnectedToInput,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId316,"Metasound::DynamicOperator::RemoveOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x13c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId316);
    RemoveOperator(this->OperatorID,&this->OperatorsConnectedToInput,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

