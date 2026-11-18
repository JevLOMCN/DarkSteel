// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FSwapOperatorOrdinalsAndSort @ 14ad3cae0

FSwapOperatorOrdinalsAndSort * __thiscall
Metasound::DynamicGraph::FSwapOperatorOrdinalsAndSort::FSwapOperatorOrdinalsAndSort
          (FSwapOperatorOrdinalsAndSort *this,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSwapOperatorOrdinalsAndSort_DynamicGraph_Metasound__6B_;
  (this->Swaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Swaps).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Swaps).ArrayNum = param_1->ArrayNum;
  (this->Swaps).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// Transform @ 14ad68950

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FSwapOperatorOrdinalsAndSort::Transform
          (FSwapOperatorOrdinalsAndSort *this,FDynamicGraphOperatorData *param_1)

{
  bool bVar1;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::SwapOperatorOrdinalsAndSort");
  }
  if (CpuChannel->Enabled < 0) {
    SwapOrdinalsAndSort(&this->Swaps,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId284,
               "Metasound::DynamicOperator::SwapOperatorOrdinalsAndSort",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x11c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId284);
    SwapOrdinalsAndSort(&this->Swaps,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

