// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 5

// <lambda_invoker_cdecl> @ 1462ee260

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAdvancePhysicsSolversDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAdvancePhysicsSolversDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FAdvancePhysicsSolversDataflowNode *)0x0) {
    pFVar1 = (FAdvancePhysicsSolversDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAdvancePhysicsSolversDataflowNode::FAdvancePhysicsSolversDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FAdvancePhysicsSolversDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462ee2e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFilterSimulationProxiesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFilterSimulationProxiesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FFilterSimulationProxiesDataflowNode *)0x0) {
    pFVar1 = (FFilterSimulationProxiesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFilterSimulationProxiesDataflowNode::FFilterSimulationProxiesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FFilterSimulationProxiesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462ee360

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetPhysicsSolversDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_58;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_58.Name = *(FName *)(in_RDX + 3);
  local_58.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x268);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    local_48.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FGetPhysicsSolversDataflowNode__6B_;
    local_28.Reference = this + 1;
    this[1]._padding_ = 0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].Outputs = 0;
    local_48.Reference = (void *)0x0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_28,&local_res8);
    if (local_48.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_48);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462ee480

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetSimulationTimeDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_58;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_58.Name = *(FName *)(in_RDX + 3);
  local_58.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    local_48.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FGetSimulationTimeDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_28,&local_res8);
    if (local_48.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_48);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462ee590

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSimulationProxiesTerminalDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_38;
  FConnectionReference local_28;
  
  local_38.Name = *(FName *)(in_RDX + 3);
  local_38.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_28.Reference = (void *)*in_RDX;
    local_28._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_38,(FGuid *)&local_28);
    local_28.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FSimulationProxiesTerminalDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_28.ContainerReference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

