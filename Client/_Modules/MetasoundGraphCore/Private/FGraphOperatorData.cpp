// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// FGraphOperatorData @ 14ad3a250

FGraphOperatorData * __thiscall
Metasound::DirectedGraphAlgo::FGraphOperatorData::FGraphOperatorData
          (FGraphOperatorData *this,FOperatorSettings *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = param_1->TargetBlockRate;
  fVar2 = param_1->ActualBlockRate;
  iVar3 = param_1->NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = param_1->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar1;
  (this->OperatorSettings).ActualBlockRate = fVar2;
  (this->OperatorSettings).NumFramesPerBlock = iVar3;
  (this->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.Bindings.ArrayNum = 0;
  (this->VertexData).InputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  (this->VertexData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
  (this->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum = 0;
  (this->VertexData).OutputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  (this->OperatorMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OperatorMap).Pairs.ArrayNum = 0;
  (this->OperatorMap).Pairs.ArrayMax = 0;
  (this->InputVertexMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputVertexMap).Pairs.ArrayNum = 0;
  (this->InputVertexMap).Pairs.ArrayMax = 0;
  (this->OutputVertexMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputVertexMap).Pairs.ArrayNum = 0;
  (this->OutputVertexMap).Pairs.ArrayMax = 0;
  (this->VertexData).InputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
  return this;
}

