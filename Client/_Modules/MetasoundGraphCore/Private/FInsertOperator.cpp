// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FInsertOperator @ 14ad3ab70

FInsertOperator * __thiscall
Metasound::DynamicGraph::FInsertOperator::FInsertOperator
          (FInsertOperator *this,ulong64 param_1,FOperatorInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  IOperator *pIVar2;
  
  this->OperatorID = param_1;
  this->_padding_ = (longlong)&___7FInsertOperator_DynamicGraph_Metasound__6B_;
  DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo::FOperatorInfo(&this->OperatorInfo,param_2);
  DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
              *)(param_2->OutputConnections).Pairs.AllocatorInstance.Data,
             (param_2->OutputConnections).Pairs.ArrayNum);
  pFVar1 = (param_2->OutputConnections).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVertexInterfaceData::~FVertexInterfaceData(&param_2->VertexData);
  pIVar2 = (param_2->Operator).Ptr;
  if (pIVar2 != (IOperator *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return this;
}

// Transform @ 14ad677b0

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FInsertOperator::Transform
          (FInsertOperator *this,FDynamicGraphOperatorData *param_1)

{
  bool bVar1;
  FOperatorInfo *pFVar2;
  bool bVar3;
  FOperatorInfo local_78;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::InsertOperator");
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId300,"Metasound::DynamicOperator::InsertOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,300);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId300);
  }
  pFVar2 = DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo::FOperatorInfo
                     (&local_78,&this->OperatorInfo);
  InsertOperator(this->OperatorID,pFVar2,param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

