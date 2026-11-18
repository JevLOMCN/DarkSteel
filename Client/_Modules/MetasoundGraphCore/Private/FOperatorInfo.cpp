// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// FOperatorInfo @ 14ad3ba80

FOperatorInfo * __thiscall
Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo::FOperatorInfo
          (FOperatorInfo *this,FOperatorInfo *param_1)

{
  this->Ordinal = param_1->Ordinal;
  (this->Operator).Ptr = (param_1->Operator).Ptr;
  (param_1->Operator).Ptr = (IOperator *)0x0;
  (this->VertexData).InputVertexInterfaceData.bIsVertexInterfaceFrozen =
       (param_1->VertexData).InputVertexInterfaceData.bIsVertexInterfaceFrozen;
  (this->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (param_1->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  (param_1->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.Bindings.ArrayNum =
       (param_1->VertexData).InputVertexInterfaceData.Bindings.ArrayNum;
  (this->VertexData).InputVertexInterfaceData.Bindings.ArrayMax =
       (param_1->VertexData).InputVertexInterfaceData.Bindings.ArrayMax;
  (param_1->VertexData).InputVertexInterfaceData.Bindings.ArrayNum = 0;
  (param_1->VertexData).InputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (param_1->VertexData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
  (param_1->VertexData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayNum =
       (param_1->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayNum;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayMax =
       (param_1->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayMax;
  (param_1->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (param_1->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  (this->VertexData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen =
       (param_1->VertexData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen;
  (this->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (param_1->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  (param_1->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum =
       (param_1->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum;
  (this->VertexData).OutputVertexInterfaceData.Bindings.ArrayMax =
       (param_1->VertexData).OutputVertexInterfaceData.Bindings.ArrayMax;
  (param_1->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum = 0;
  (param_1->VertexData).OutputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (param_1->VertexData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
  (param_1->VertexData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayNum =
       (param_1->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayNum;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayMax =
       (param_1->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayMax;
  (param_1->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (param_1->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  (this->OutputConnections).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputConnections).Pairs.AllocatorInstance.Data =
       (param_1->OutputConnections).Pairs.AllocatorInstance.Data;
  (param_1->OutputConnections).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputConnections).Pairs.ArrayNum = (param_1->OutputConnections).Pairs.ArrayNum;
  (this->OutputConnections).Pairs.ArrayMax = (param_1->OutputConnections).Pairs.ArrayMax;
  (param_1->OutputConnections).Pairs.ArrayNum = 0;
  (param_1->OutputConnections).Pairs.ArrayMax = 0;
  return this;
}

