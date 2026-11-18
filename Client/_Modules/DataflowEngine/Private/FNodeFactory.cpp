// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 8

// <lambda_invoker_cdecl> @ 1462c6b70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowCallSubGraphNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowCallSubGraphNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x390);
  if (pFVar1 == (FDataflowCallSubGraphNode *)0x0) {
    pFVar1 = (FDataflowCallSubGraphNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowCallSubGraphNode::FDataflowCallSubGraphNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowCallSubGraphNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462c6bf0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageToTextureNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowImageToTextureNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FDataflowImageToTextureNode *)0x0) {
    pFVar1 = (FDataflowImageToTextureNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowImageToTextureNode::FDataflowImageToTextureNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowImageToTextureNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462c6c70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowSubGraphGetCurrentIndexNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
  this = ::operator_new(0x250);
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
    this->_padding_ = (longlong)&___7FDataflowSubGraphGetCurrentIndexNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    *(undefined4 *)&((FDataflowNode *)local_28.Reference)->_padding_ = 0;
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

// <lambda_invoker_cdecl> @ 1462c6d70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowSubGraphInputNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowSubGraphInputNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2d8);
  if (pFVar1 == (FDataflowSubGraphInputNode *)0x0) {
    pFVar1 = (FDataflowSubGraphInputNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowSubGraphInputNode::FDataflowSubGraphInputNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowSubGraphInputNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462c6df0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowSubGraphOutputNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowSubGraphOutputNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2d8);
  if (pFVar1 == (FDataflowSubGraphOutputNode *)0x0) {
    pFVar1 = (FDataflowSubGraphOutputNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowSubGraphOutputNode::FDataflowSubGraphOutputNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowSubGraphOutputNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462c6e70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowTextureTerminalNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowTextureTerminalNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FDataflowTextureTerminalNode *)0x0) {
    pFVar1 = (FDataflowTextureTerminalNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowTextureTerminalNode::FDataflowTextureTerminalNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowTextureTerminalNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462c6ef0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowTextureToImageNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowTextureToImageNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FDataflowTextureToImageNode *)0x0) {
    pFVar1 = (FDataflowTextureToImageNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowTextureToImageNode::FDataflowTextureToImageNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowTextureToImageNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1462c6f70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetDataflowVariableNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetDataflowVariableNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FGetDataflowVariableNode *)0x0) {
    pFVar1 = (FGetDataflowVariableNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetDataflowVariableNode::FGetDataflowVariableNode(pFVar1,&local_28,&local_18);
  }
  *(FGetDataflowVariableNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

