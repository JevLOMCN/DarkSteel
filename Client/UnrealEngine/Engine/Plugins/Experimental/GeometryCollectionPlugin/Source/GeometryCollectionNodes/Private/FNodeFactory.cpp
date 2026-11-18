// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 334

// <lambda_invoker_cdecl> @ 14e8e3890

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAbsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FAbsDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e39b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAddCustomCollectionAttributeDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAddCustomCollectionAttributeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FAddCustomCollectionAttributeDataflowNode *)0x0) {
    pFVar1 = (FAddCustomCollectionAttributeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAddCustomCollectionAttributeDataflowNode::FAddCustomCollectionAttributeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FAddCustomCollectionAttributeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3a30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAddDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAddDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FAddDataflowNode *)0x0) {
    pFVar1 = (FAddDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAddDataflowNode::FAddDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FAddDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3ab0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAddMaterialToCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAddMaterialToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x348);
  if (pFVar1 == (FAddMaterialToCollectionDataflowNode *)0x0) {
    pFVar1 = (FAddMaterialToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAddMaterialToCollectionDataflowNode::FAddMaterialToCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FAddMaterialToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3b30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAddRootProxyMeshToArrayDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAddRootProxyMeshToArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2e0);
  if (pFVar1 == (FAddRootProxyMeshToArrayDataflowNode *)0x0) {
    pFVar1 = (FAddRootProxyMeshToArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAddRootProxyMeshToArrayDataflowNode::FAddRootProxyMeshToArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FAddRootProxyMeshToArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3bb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAddToMaterialInterfaceArrayDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAddToMaterialInterfaceArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FAddToMaterialInterfaceArrayDataflowNode *)0x0) {
    pFVar1 = (FAddToMaterialInterfaceArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAddToMaterialInterfaceArrayDataflowNode::FAddToMaterialInterfaceArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FAddToMaterialInterfaceArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3c30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAddUVChannelDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAddUVChannelDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x308);
  if (pFVar1 == (FAddUVChannelDataflowNode *)0x0) {
    pFVar1 = (FAddUVChannelDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAddUVChannelDataflowNode::FAddUVChannelDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FAddUVChannelDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3cb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAppendCollectionAssetsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAppendCollectionAssetsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3c8);
  if (pFVar1 == (FAppendCollectionAssetsDataflowNode *)0x0) {
    pFVar1 = (FAppendCollectionAssetsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAppendCollectionAssetsDataflowNode::FAppendCollectionAssetsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FAppendCollectionAssetsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3d30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAppendMeshesToCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAppendMeshesToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FAppendMeshesToCollectionDataflowNode *)0x0) {
    pFVar1 = (FAppendMeshesToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAppendMeshesToCollectionDataflowNode::FAppendMeshesToCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FAppendMeshesToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3db0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAppendPointsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAppendPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FAppendPointsDataflowNode *)0x0) {
    pFVar1 = (FAppendPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAppendPointsDataflowNode::FAppendPointsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FAppendPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3e30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FApplyMeshProcessorToGeometryCollectionDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FApplyMeshProcessorToGeometryCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3d8);
  if (pFVar1 == (FApplyMeshProcessorToGeometryCollectionDataflowNode *)0x0) {
    pFVar1 = (FApplyMeshProcessorToGeometryCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FApplyMeshProcessorToGeometryCollectionDataflowNode::
             FApplyMeshProcessorToGeometryCollectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FApplyMeshProcessorToGeometryCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3eb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FApplyMeshProcessorToMeshDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMeshProcessorDataflowNodeBase *pFVar1;
  FMeshProcessorDataflowNodeBase *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x300);
  if (this == (FMeshProcessorDataflowNodeBase *)0x0) {
    this = (FMeshProcessorDataflowNodeBase *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FMeshProcessorDataflowNodeBase::FMeshProcessorDataflowNodeBase
              (this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ =
         (longlong)&FApplyMeshProcessorToMeshDataflowNode::_vftable__for__FDataflowNode__;
    pFVar1 = this + 1;
    pFVar1->_padding_ = 0;
    this->_padding_ =
         (longlong)
         &FApplyMeshProcessorToMeshDataflowNode::
          _vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = pFVar1;
    FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_58.Reference = pFVar1;
    local_38.Reference = pFVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal
                        ((FDataflowNode *)this,&local_38,&local_res8);
    if (local_58.Reference != (FMeshProcessorDataflowNodeBase *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FMeshProcessorDataflowNodeBase **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e3fe0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FArcCosDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FArcCosDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4100

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FArcSinDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FArcSinDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4220

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FArcTan2DataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FArcTan2DataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FArcTan2DataflowNode *)0x0) {
    pFVar1 = (FArcTan2DataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FArcTan2DataflowNode::FArcTan2DataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FArcTan2DataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e42a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FArcTanDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FArcTanDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e43c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAssignMaterialInterfaceToCollectionDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAssignMaterialInterfaceToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FAssignMaterialInterfaceToCollectionDataflowNode *)0x0) {
    pFVar1 = (FAssignMaterialInterfaceToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAssignMaterialInterfaceToCollectionDataflowNode::
             FAssignMaterialInterfaceToCollectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FAssignMaterialInterfaceToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4440

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAutoClusterDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAutoClusterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x380);
  if (pFVar1 == (FAutoClusterDataflowNode *)0x0) {
    pFVar1 = (FAutoClusterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAutoClusterDataflowNode::FAutoClusterDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FAutoClusterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e44c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAutoUnwrapUVDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FAutoUnwrapUVDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FAutoUnwrapUVDataflowNode *)0x0) {
    pFVar1 = (FAutoUnwrapUVDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FAutoUnwrapUVDataflowNode::FAutoUnwrapUVDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FAutoUnwrapUVDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4540

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBakeTextureFromCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBakeTextureFromCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x388);
  if (pFVar1 == (FBakeTextureFromCollectionDataflowNode *)0x0) {
    pFVar1 = (FBakeTextureFromCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBakeTextureFromCollectionDataflowNode::FBakeTextureFromCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FBakeTextureFromCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e45c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBakeTransformsInCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowNode *this_00;
  FDataflowOutput *this_01;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this_00 = ::operator_new(0x2f8);
  if (this_00 == (FDataflowNode *)0x0) {
    this_00 = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this_00,&local_68,(FGuid *)&local_58);
    this = this_00 + 1;
    this_00->_padding_ = (longlong)&___7FBakeTransformsInCollectionDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this;
    FDataflowNode::RegisterInputConnectionInternal(this_00,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_58.Reference = this;
    local_38.Reference = this;
    this_01 = FDataflowNode::RegisterOutputConnectionInternal(this_00,&local_38,&local_res8);
    if (local_58.Reference != (FDataflowNode *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_01,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this_00;
  (**(code **)(this_00->_padding_ + 0xe0))(this_00);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e46e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBlueprintToCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBlueprintToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FBlueprintToCollectionDataflowNode *)0x0) {
    pFVar1 = (FBlueprintToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBlueprintToCollectionDataflowNode::FBlueprintToCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FBlueprintToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBlueprintToCollectionDataflowNode_v2>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBlueprintToCollectionDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FBlueprintToCollectionDataflowNode_v2 *)0x0) {
    pFVar1 = (FBlueprintToCollectionDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBlueprintToCollectionDataflowNode_v2::FBlueprintToCollectionDataflowNode_v2
                       (pFVar1,&local_28,&local_18);
  }
  *(FBlueprintToCollectionDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e47e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoolArrayToFaceSelectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBoolArrayToFaceSelectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FBoolArrayToFaceSelectionDataflowNode *)0x0) {
    pFVar1 = (FBoolArrayToFaceSelectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBoolArrayToFaceSelectionDataflowNode::FBoolArrayToFaceSelectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FBoolArrayToFaceSelectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4860

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoolToIntDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FBoolToIntDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined1 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4980

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoolToStringDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FBoolToStringDataflowNode__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    ::FString::FString((FString *)&this[1]._padding_,"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4ac0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBooleanOperationDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBooleanOperationDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x250);
  if (pFVar1 == (FBooleanOperationDataflowNode *)0x0) {
    pFVar1 = (FBooleanOperationDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBooleanOperationDataflowNode::FBooleanOperationDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FBooleanOperationDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4b40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoundingBoxDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBoundingBoxDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x360);
  if (pFVar1 == (FBoundingBoxDataflowNode *)0x0) {
    pFVar1 = (FBoundingBoxDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBoundingBoxDataflowNode::FBoundingBoxDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBoundingBoxDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4bc0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoundingSphereDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBoundingSphereDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x318);
  if (pFVar1 == (FBoundingSphereDataflowNode *)0x0) {
    pFVar1 = (FBoundingSphereDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBoundingSphereDataflowNode::FBoundingSphereDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBoundingSphereDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4c40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoxFalloffFieldDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBoxFalloffFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x390);
  if (pFVar1 == (FBoxFalloffFieldDataflowNode *)0x0) {
    pFVar1 = (FBoxFalloffFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBoxFalloffFieldDataflowNode::FBoxFalloffFieldDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBoxFalloffFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4cc0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoxProjectUVDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBoxProjectUVDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FBoxProjectUVDataflowNode *)0x0) {
    pFVar1 = (FBoxProjectUVDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBoxProjectUVDataflowNode::FBoxProjectUVDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBoxProjectUVDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4d40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBoxToMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBoxToMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FBoxToMeshDataflowNode *)0x0) {
    pFVar1 = (FBoxToMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBoxToMeshDataflowNode::FBoxToMeshDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBoxToMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4dc0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBranchCollectionDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBranchCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x460);
  if (pFVar1 == (FBranchCollectionDataflowNode *)0x0) {
    pFVar1 = (FBranchCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBranchCollectionDataflowNode::FBranchCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FBranchCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4e40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBranchFloatDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBranchFloatDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FBranchFloatDataflowNode *)0x0) {
    pFVar1 = (FBranchFloatDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBranchFloatDataflowNode::FBranchFloatDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBranchFloatDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4ec0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBranchIntDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBranchIntDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FBranchIntDataflowNode *)0x0) {
    pFVar1 = (FBranchIntDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBranchIntDataflowNode::FBranchIntDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBranchIntDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4f40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBranchMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBranchMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FBranchMeshDataflowNode *)0x0) {
    pFVar1 = (FBranchMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBranchMeshDataflowNode::FBranchMeshDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBranchMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e4fc0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBreakTransformDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBreakTransformDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FBreakTransformDataflowNode *)0x0) {
    pFVar1 = (FBreakTransformDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBreakTransformDataflowNode::FBreakTransformDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBreakTransformDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5040

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBrickCutterDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBrickCutterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x430);
  if (pFVar1 == (FBrickCutterDataflowNode *)0x0) {
    pFVar1 = (FBrickCutterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBrickCutterDataflowNode::FBrickCutterDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FBrickCutterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e50c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCeilDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FCeilDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e51e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClampDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClampDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FClampDataflowNode *)0x0) {
    pFVar1 = (FClampDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClampDataflowNode::FClampDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FClampDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5260

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClearConvexHullsDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClearConvexHullsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FClearConvexHullsDataflowNode *)0x0) {
    pFVar1 = (FClearConvexHullsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClearConvexHullsDataflowNode::FClearConvexHullsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FClearConvexHullsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e52e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCloseGeometryOnCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowNode *this_00;
  FDataflowOutput *this_01;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this_00 = ::operator_new(0x2f8);
  if (this_00 == (FDataflowNode *)0x0) {
    this_00 = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this_00,&local_68,(FGuid *)&local_58);
    this = this_00 + 1;
    this_00->_padding_ = (longlong)&___7FCloseGeometryOnCollectionDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this;
    FDataflowNode::RegisterInputConnectionInternal(this_00,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = this;
    this_01 = FDataflowNode::RegisterOutputConnectionInternal(this_00,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_01,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this_00;
  (**(code **)(this_00->_padding_ + 0xe0))(this_00);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5400

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClusterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FClusterDataflowNode *)0x0) {
    pFVar1 = (FClusterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClusterDataflowNode::FClusterDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FClusterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5480

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterFlattenDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClusterFlattenDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FClusterFlattenDataflowNode *)0x0) {
    pFVar1 = (FClusterFlattenDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClusterFlattenDataflowNode::FClusterFlattenDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FClusterFlattenDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5500

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterIsolatedRootsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowNode *this_00;
  FDataflowOutput *this_01;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this_00 = ::operator_new(0x2f8);
  if (this_00 == (FDataflowNode *)0x0) {
    this_00 = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this_00,&local_68,(FGuid *)&local_58);
    this = this_00 + 1;
    this_00->_padding_ = (longlong)&___7FClusterIsolatedRootsDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this;
    FDataflowNode::RegisterInputConnectionInternal(this_00,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_58.Reference = this;
    local_38.Reference = this;
    this_01 = FDataflowNode::RegisterOutputConnectionInternal(this_00,&local_38,&local_res8);
    if (local_58.Reference != (FDataflowNode *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_01,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this_00;
  (**(code **)(this_00->_padding_ + 0xe0))(this_00);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5620

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterMagnetDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClusterMagnetDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FClusterMagnetDataflowNode *)0x0) {
    pFVar1 = (FClusterMagnetDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClusterMagnetDataflowNode::FClusterMagnetDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FClusterMagnetDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e56a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterMergeDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClusterMergeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FClusterMergeDataflowNode *)0x0) {
    pFVar1 = (FClusterMergeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClusterMergeDataflowNode::FClusterMergeDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FClusterMergeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5720

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterMergeToNeighborsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClusterMergeToNeighborsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FClusterMergeToNeighborsDataflowNode *)0x0) {
    pFVar1 = (FClusterMergeToNeighborsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClusterMergeToNeighborsDataflowNode::FClusterMergeToNeighborsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FClusterMergeToNeighborsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e57a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterScatterPointsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClusterScatterPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FClusterScatterPointsDataflowNode *)0x0) {
    pFVar1 = (FClusterScatterPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClusterScatterPointsDataflowNode::FClusterScatterPointsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FClusterScatterPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5820

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FClusterUnclusterDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FClusterUnclusterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FClusterUnclusterDataflowNode *)0x0) {
    pFVar1 = (FClusterUnclusterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FClusterUnclusterDataflowNode::FClusterUnclusterDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FClusterUnclusterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e58a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionFaceSelectionCustomDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionFaceSelectionCustomDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionFaceSelectionCustomDataflowNode *)0x0) {
    pFVar1 = (FCollectionFaceSelectionCustomDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionFaceSelectionCustomDataflowNode::FCollectionFaceSelectionCustomDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionFaceSelectionCustomDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5920

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionFaceSelectionInvertDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *pFVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x270);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    pFVar1 = this + 1;
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FCollectionFaceSelectionInvertDataflowNode__6B_;
    pFVar1->_padding_ = (longlong)FDataflowFaceSelection::FacesGroupName;
    *(undefined8 *)&this[1].Outputs = 0;
    *(undefined4 *)&this[1].Outputs.field_0x8 = 0;
    *(undefined4 *)&this[1].Outputs.field_0xc = 0x80;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = pFVar1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_58.Reference = pFVar1;
    local_38.Reference = pFVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (FDataflowNode *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5a50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSelectInternalFacesDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSelectInternalFacesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x348);
  if (pFVar1 == (FCollectionSelectInternalFacesDataflowNode *)0x0) {
    pFVar1 = (FCollectionSelectInternalFacesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSelectInternalFacesDataflowNode::FCollectionSelectInternalFacesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionSelectInternalFacesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5ad0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSelectTransformStringDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSelectTransformStringDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x348);
  if (pFVar1 == (FCollectionSelectTransformStringDataflowNode *)0x0) {
    pFVar1 = (FCollectionSelectTransformStringDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSelectTransformStringDataflowNode::
             FCollectionSelectTransformStringDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionSelectTransformStringDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5b50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSelectionByAttrDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSelectionByAttrDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x438);
  if (pFVar1 == (FCollectionSelectionByAttrDataflowNode *)0x0) {
    pFVar1 = (FCollectionSelectionByAttrDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSelectionByAttrDataflowNode::FCollectionSelectionByAttrDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionSelectionByAttrDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5bd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSelectionConvertDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSelectionConvertDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x378);
  if (pFVar1 == (FCollectionSelectionConvertDataflowNode *)0x0) {
    pFVar1 = (FCollectionSelectionConvertDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSelectionConvertDataflowNode::FCollectionSelectionConvertDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionSelectionConvertDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5c50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSelectionInvertDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSelectionInvertDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FCollectionSelectionInvertDataflowNode *)0x0) {
    pFVar1 = (FCollectionSelectionInvertDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSelectionInvertDataflowNode::FCollectionSelectionInvertDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionSelectionInvertDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5cd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSelectionSetOperationDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSelectionSetOperationDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c8);
  if (pFVar1 == (FCollectionSelectionSetOperationDataflowNode *)0x0) {
    pFVar1 = (FCollectionSelectionSetOperationDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSelectionSetOperationDataflowNode::
             FCollectionSelectionSetOperationDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionSelectionSetOperationDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5d50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSelectionToMeshesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSelectionToMeshesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FCollectionSelectionToMeshesDataflowNode *)0x0) {
    pFVar1 = (FCollectionSelectionToMeshesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSelectionToMeshesDataflowNode::FCollectionSelectionToMeshesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionSelectionToMeshesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5dd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSetPivotDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSetPivotDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x360);
  if (pFVar1 == (FCollectionSetPivotDataflowNode *)0x0) {
    pFVar1 = (FCollectionSetPivotDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSetPivotDataflowNode::FCollectionSetPivotDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionSetPivotDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5e50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionSetTransformStringValueDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionSetTransformStringValueDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FCollectionSetTransformStringValueDataflowNode *)0x0) {
    pFVar1 = (FCollectionSetTransformStringValueDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionSetTransformStringValueDataflowNode::
             FCollectionSetTransformStringValueDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionSetTransformStringValueDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5ed0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionToMeshDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionToMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FCollectionToMeshDataflowNode *)0x0) {
    pFVar1 = (FCollectionToMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionToMeshDataflowNode::FCollectionToMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionToMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5f50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionToPointsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionToPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x308);
  if (pFVar1 == (FCollectionToPointsDataflowNode *)0x0) {
    pFVar1 = (FCollectionToPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionToPointsDataflowNode::FCollectionToPointsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionToPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e5fd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionToSkeletalMeshDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionToSkeletalMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x318);
  if (pFVar1 == (FCollectionToSkeletalMeshDataflowNode *)0x0) {
    pFVar1 = (FCollectionToSkeletalMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionToSkeletalMeshDataflowNode::FCollectionToSkeletalMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCollectionToSkeletalMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6050

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionAllDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionAllDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionAllDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionAllDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionAllDataflowNode::
             FCollectionTransformSelectionAllDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionAllDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e60d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionByFloatAttrDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionByFloatAttrDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x350);
  if (pFVar1 == (FCollectionTransformSelectionByFloatAttrDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionByFloatAttrDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionByFloatAttrDataflowNode::
             FCollectionTransformSelectionByFloatAttrDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionByFloatAttrDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6150

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionByIntAttrDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionByIntAttrDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x350);
  if (pFVar1 == (FCollectionTransformSelectionByIntAttrDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionByIntAttrDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionByIntAttrDataflowNode::
             FCollectionTransformSelectionByIntAttrDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionByIntAttrDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e61d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionByPercentageDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionByPercentageDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FCollectionTransformSelectionByPercentageDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionByPercentageDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionByPercentageDataflowNode::
             FCollectionTransformSelectionByPercentageDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionByPercentageDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6250

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionBySizeDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionBySizeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionTransformSelectionBySizeDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionBySizeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionBySizeDataflowNode::
             FCollectionTransformSelectionBySizeDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionBySizeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e62d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionByVolumeDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionByVolumeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionTransformSelectionByVolumeDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionByVolumeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionByVolumeDataflowNode::
             FCollectionTransformSelectionByVolumeDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionByVolumeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6350

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionChildrenDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionChildrenDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionChildrenDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionChildrenDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionChildrenDataflowNode::
             FCollectionTransformSelectionChildrenDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionChildrenDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e63d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionClusterDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionClusterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionClusterDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionClusterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionClusterDataflowNode::
             FCollectionTransformSelectionClusterDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionClusterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6450

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionClusterDataflowNode_v2>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionClusterDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionClusterDataflowNode_v2 *)0x0) {
    pFVar1 = (FCollectionTransformSelectionClusterDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionClusterDataflowNode_v2::
             FCollectionTransformSelectionClusterDataflowNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionClusterDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e64d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionContactDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionContactDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FCollectionTransformSelectionContactDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionContactDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionContactDataflowNode::
             FCollectionTransformSelectionContactDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionContactDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6550

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionCustomDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionCustomDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionTransformSelectionCustomDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionCustomDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionCustomDataflowNode::
             FCollectionTransformSelectionCustomDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionCustomDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e65d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionCustomDataflowNode_v2>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionCustomDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionTransformSelectionCustomDataflowNode_v2 *)0x0) {
    pFVar1 = (FCollectionTransformSelectionCustomDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionCustomDataflowNode_v2::
             FCollectionTransformSelectionCustomDataflowNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionCustomDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6650

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionFromIndexArrayDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionFromIndexArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionTransformSelectionFromIndexArrayDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionFromIndexArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionFromIndexArrayDataflowNode::
             FCollectionTransformSelectionFromIndexArrayDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionFromIndexArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e66d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionInBoxDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionInBoxDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3c0);
  if (pFVar1 == (FCollectionTransformSelectionInBoxDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionInBoxDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionInBoxDataflowNode::
             FCollectionTransformSelectionInBoxDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionInBoxDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6750

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionInSphereDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionInSphereDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3b0);
  if (pFVar1 == (FCollectionTransformSelectionInSphereDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionInSphereDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionInSphereDataflowNode::
             FCollectionTransformSelectionInSphereDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionInSphereDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e67d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionInfoDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionInfoDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionTransformSelectionInfoDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionInfoDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionInfoDataflowNode::
             FCollectionTransformSelectionInfoDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionInfoDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6850

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionInvertDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *pFVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x270);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    pFVar1 = this + 1;
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FCollectionTransformSelectionInvertDataflowNode__6B_;
    pFVar1->_padding_ = (longlong)FDataflowTransformSelection::TransformGroupName;
    *(undefined8 *)&this[1].Outputs = 0;
    *(undefined4 *)&this[1].Outputs.field_0x8 = 0;
    *(undefined4 *)&this[1].Outputs.field_0xc = 0x80;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = pFVar1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_58.Reference = pFVar1;
    local_38.Reference = pFVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (FDataflowNode *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6980

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionLeafDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionLeafDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionLeafDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionLeafDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionLeafDataflowNode::
             FCollectionTransformSelectionLeafDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionLeafDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6a00

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionLevelDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionLevelDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionLevelDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionLevelDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionLevelDataflowNode::
             FCollectionTransformSelectionLevelDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionLevelDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6a80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionNoneDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionNoneDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionNoneDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionNoneDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionNoneDataflowNode::
             FCollectionTransformSelectionNoneDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionNoneDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6b00

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionParentDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionParentDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionParentDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionParentDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionParentDataflowNode::
             FCollectionTransformSelectionParentDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionParentDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6b80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionRandomDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionRandomDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionTransformSelectionRandomDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionRandomDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionRandomDataflowNode::
             FCollectionTransformSelectionRandomDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionRandomDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6c00

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionTransformSelectionRootDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionRootDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionRootDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionRootDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionRootDataflowNode::
             FCollectionTransformSelectionRootDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionRootDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6c80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionSetOperationDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionSetOperationDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c8);
  if (pFVar1 == (FCollectionTransformSelectionSetOperationDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionSetOperationDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionSetOperationDataflowNode::
             FCollectionTransformSelectionSetOperationDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionSetOperationDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6d00

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionSiblingsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionSiblingsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FCollectionTransformSelectionSiblingsDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionSiblingsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionSiblingsDataflowNode::
             FCollectionTransformSelectionSiblingsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionSiblingsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6d80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionTransformSelectionTargetLevelDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionTransformSelectionTargetLevelDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FCollectionTransformSelectionTargetLevelDataflowNode *)0x0) {
    pFVar1 = (FCollectionTransformSelectionTargetLevelDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionTransformSelectionTargetLevelDataflowNode::
             FCollectionTransformSelectionTargetLevelDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionTransformSelectionTargetLevelDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6e00

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionVertexSelectionByPercentageDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionVertexSelectionByPercentageDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FCollectionVertexSelectionByPercentageDataflowNode *)0x0) {
    pFVar1 = (FCollectionVertexSelectionByPercentageDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionVertexSelectionByPercentageDataflowNode::
             FCollectionVertexSelectionByPercentageDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionVertexSelectionByPercentageDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6e80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCollectionVertexSelectionCustomDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionVertexSelectionCustomDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCollectionVertexSelectionCustomDataflowNode *)0x0) {
    pFVar1 = (FCollectionVertexSelectionCustomDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionVertexSelectionCustomDataflowNode::
             FCollectionVertexSelectionCustomDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionVertexSelectionCustomDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6f00

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCollectionVertexSelectionSetOperationDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCollectionVertexSelectionSetOperationDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c8);
  if (pFVar1 == (FCollectionVertexSelectionSetOperationDataflowNode *)0x0) {
    pFVar1 = (FCollectionVertexSelectionSetOperationDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCollectionVertexSelectionSetOperationDataflowNode::
             FCollectionVertexSelectionSetOperationDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCollectionVertexSelectionSetOperationDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e6f80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCompareFloatDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCompareFloatDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FCompareFloatDataflowNode *)0x0) {
    pFVar1 = (FCompareFloatDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCompareFloatDataflowNode::FCompareFloatDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCompareFloatDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7000

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCompareIntDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCompareIntDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FCompareIntDataflowNode *)0x0) {
    pFVar1 = (FCompareIntDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCompareIntDataflowNode::FCompareIntDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCompareIntDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7080

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvexHullToMeshDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvexHullToMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FConvexHullToMeshDataflowNode *)0x0) {
    pFVar1 = (FConvexHullToMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvexHullToMeshDataflowNode::FConvexHullToMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvexHullToMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7100

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCosDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FCosDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7220

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCreateColorArrayFromFloatArrayDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCreateColorArrayFromFloatArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FCreateColorArrayFromFloatArrayDataflowNode *)0x0) {
    pFVar1 = (FCreateColorArrayFromFloatArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCreateColorArrayFromFloatArrayDataflowNode::
             FCreateColorArrayFromFloatArrayDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCreateColorArrayFromFloatArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e72a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCreateGeometryCollectionFromSourcesDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCreateGeometryCollectionFromSourcesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FCreateGeometryCollectionFromSourcesDataflowNode *)0x0) {
    pFVar1 = (FCreateGeometryCollectionFromSourcesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCreateGeometryCollectionFromSourcesDataflowNode::
             FCreateGeometryCollectionFromSourcesDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCreateGeometryCollectionFromSourcesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7320

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FCreateGeometryCollectionFromSourcesDataflowNode_v2>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCreateGeometryCollectionFromSourcesDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *)0x0) {
    pFVar1 = (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCreateGeometryCollectionFromSourcesDataflowNode_v2::
             FCreateGeometryCollectionFromSourcesDataflowNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FCreateGeometryCollectionFromSourcesDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e73a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCreateLeafConvexHullsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCreateLeafConvexHullsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3d8);
  if (pFVar1 == (FCreateLeafConvexHullsDataflowNode *)0x0) {
    pFVar1 = (FCreateLeafConvexHullsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCreateLeafConvexHullsDataflowNode::FCreateLeafConvexHullsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FCreateLeafConvexHullsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7420

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCreateNonOverlappingConvexHullsDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCreateNonOverlappingConvexHullsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FCreateNonOverlappingConvexHullsDataflowNode *)0x0) {
    pFVar1 = (FCreateNonOverlappingConvexHullsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCreateNonOverlappingConvexHullsDataflowNode::
             FCreateNonOverlappingConvexHullsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCreateNonOverlappingConvexHullsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e74a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCrossProductDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FCrossProductDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FCrossProductDataflowNode *)0x0) {
    pFVar1 = (FCrossProductDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FCrossProductDataflowNode::FCrossProductDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FCrossProductDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7520

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FCubeDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FCubeDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7640

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowConvertToArrayNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowConvertToArrayNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x250);
  if (pFVar1 == (FDataflowConvertToArrayNode *)0x0) {
    pFVar1 = (FDataflowConvertToArrayNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowConvertToArrayNode::FDataflowConvertToArrayNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowConvertToArrayNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e76c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowGetArrayElementNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowGetArrayElementNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FDataflowGetArrayElementNode *)0x0) {
    pFVar1 = (FDataflowGetArrayElementNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowGetArrayElementNode::FDataflowGetArrayElementNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowGetArrayElementNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7740

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowGetArraySizeNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowInput *this_00;
  FDataflowOutput *this_01;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FDataflowGetArraySizeNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    local_58.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    FDataflowConnection::SetTypePolicy
              ((FDataflowConnection *)this_00,
               (IDataflowTypePolicy *)
               &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowArrayTypePolicy::GetInterface(void)'
                ::__l2::Instance);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_01 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_01,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7870

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMakeManagedArrayCollectionArrayNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMakeManagedArrayCollectionArrayNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x308);
  if (pFVar1 == (FDataflowMakeManagedArrayCollectionArrayNode *)0x0) {
    pFVar1 = (FDataflowMakeManagedArrayCollectionArrayNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowMakeManagedArrayCollectionArrayNode::
             FDataflowMakeManagedArrayCollectionArrayNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowMakeManagedArrayCollectionArrayNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e78f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMeshAppendDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMeshAppendDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FDataflowMeshAppendDataflowNode *)0x0) {
    pFVar1 = (FDataflowMeshAppendDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowMeshAppendDataflowNode::FDataflowMeshAppendDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowMeshAppendDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7970

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDegreesToRadiansDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FDegreesToRadiansDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7a90

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDistanceDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDistanceDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FDistanceDataflowNode *)0x0) {
    pFVar1 = (FDistanceDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDistanceDataflowNode::FDistanceDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FDistanceDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7b10

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDivideDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSafeDivideDataflowNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FSafeDivideDataflowNode *)0x0) {
    this = (FSafeDivideDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FSafeDivideDataflowNode::FSafeDivideDataflowNode(this,&local_28,&local_18);
    this->_padding_ = (longlong)&___7FDivideDataflowNode__6B_;
  }
  *(FSafeDivideDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7bb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDivisionDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDivisionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FDivisionDataflowNode *)0x0) {
    pFVar1 = (FDivisionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDivisionDataflowNode::FDivisionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FDivisionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7c30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDotProductDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDotProductDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FDotProductDataflowNode *)0x0) {
    pFVar1 = (FDotProductDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDotProductDataflowNode::FDotProductDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FDotProductDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7cb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDuplicateMeshUVChannelNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDuplicateMeshUVChannelNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FDuplicateMeshUVChannelNode *)0x0) {
    pFVar1 = (FDuplicateMeshUVChannelNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDuplicateMeshUVChannelNode::FDuplicateMeshUVChannelNode(pFVar1,&local_28,&local_18);
  }
  *(FDuplicateMeshUVChannelNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7d30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FEFitDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FEFitDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FEFitDataflowNode *)0x0) {
    pFVar1 = (FEFitDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FEFitDataflowNode::FEFitDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FEFitDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7db0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FExpDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FExpDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7ed0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FExpandBoundingBoxDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FExpandBoundingBoxDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2e8);
  if (pFVar1 == (FExpandBoundingBoxDataflowNode *)0x0) {
    pFVar1 = (FExpandBoundingBoxDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FExpandBoundingBoxDataflowNode::FExpandBoundingBoxDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FExpandBoundingBoxDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7f50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FExpandBoundingSphereDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FExpandBoundingSphereDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FExpandBoundingSphereDataflowNode *)0x0) {
    pFVar1 = (FExpandBoundingSphereDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FExpandBoundingSphereDataflowNode::FExpandBoundingSphereDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FExpandBoundingSphereDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e7fd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FExpandVectorDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FExpandVectorDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FExpandVectorDataflowNode *)0x0) {
    pFVar1 = (FExpandVectorDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FExpandVectorDataflowNode::FExpandVectorDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FExpandVectorDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8050

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FExplodedViewDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FExplodedViewDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FExplodedViewDataflowNode *)0x0) {
    pFVar1 = (FExplodedViewDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FExplodedViewDataflowNode::FExplodedViewDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FExplodedViewDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e80d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFieldMakeDenseFloatArrayDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFieldMakeDenseFloatArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FFieldMakeDenseFloatArrayDataflowNode *)0x0) {
    pFVar1 = (FFieldMakeDenseFloatArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFieldMakeDenseFloatArrayDataflowNode::FFieldMakeDenseFloatArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FFieldMakeDenseFloatArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8150

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFilterPointSetWithMeshDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFilterPointSetWithMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FFilterPointSetWithMeshDataflowNode *)0x0) {
    pFVar1 = (FFilterPointSetWithMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFilterPointSetWithMeshDataflowNode::FFilterPointSetWithMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FFilterPointSetWithMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e81d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFitDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFitDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FFitDataflowNode *)0x0) {
    pFVar1 = (FFitDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFitDataflowNode::FFitDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FFitDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8250

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFixTinyGeoDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFixTinyGeoDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FFixTinyGeoDataflowNode *)0x0) {
    pFVar1 = (FFixTinyGeoDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFixTinyGeoDataflowNode::FFixTinyGeoDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FFixTinyGeoDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e82d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatArrayComputeStatisticsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFloatArrayComputeStatisticsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x298);
  if (pFVar1 == (FFloatArrayComputeStatisticsDataflowNode *)0x0) {
    pFVar1 = (FFloatArrayComputeStatisticsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFloatArrayComputeStatisticsDataflowNode::FFloatArrayComputeStatisticsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FFloatArrayComputeStatisticsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8350

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatArrayNormalizeDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFloatArrayNormalizeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x298);
  if (pFVar1 == (FFloatArrayNormalizeDataflowNode *)0x0) {
    pFVar1 = (FFloatArrayNormalizeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFloatArrayNormalizeDataflowNode::FFloatArrayNormalizeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FFloatArrayNormalizeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e83d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatArrayToIntArrayDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x270);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    *(undefined1 *)&this[1]._padding_ = 4;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FFloatArrayToIntArrayDataflowNode__6B_;
    local_58.Reference = &this[1]._padding_;
    *(undefined8 *)&this[1].Outputs = 0;
    *(longlong *)local_58.Reference = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].Outputs.field_0x8 = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1].Outputs;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8500

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatArrayToVertexSelectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFloatArrayToVertexSelectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FFloatArrayToVertexSelectionDataflowNode *)0x0) {
    pFVar1 = (FFloatArrayToVertexSelectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFloatArrayToVertexSelectionDataflowNode::FFloatArrayToVertexSelectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FFloatArrayToVertexSelectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8580

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatMathExpressionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FFloatMathExpressionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FFloatMathExpressionDataflowNode *)0x0) {
    pFVar1 = (FFloatMathExpressionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FFloatMathExpressionDataflowNode::FFloatMathExpressionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FFloatMathExpressionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8600

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatToDoubleDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FFloatToDoubleDataflowNode__6B_;
    local_58.Reference = this + 1;
    this[1]._padding_ = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8720

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatToIntDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    *(undefined1 *)&this[1]._padding_ = 2;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FFloatToIntDataflowNode__6B_;
    local_58.Reference = (void *)((longlong)&this[1]._padding_ + 4);
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)local_58.Reference = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8850

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatToStringDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FFloatToStringDataflowNode__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    ::FString::FString((FString *)&this[1]._padding_,"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8990

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloorDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FFloorDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8ab0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFracDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FFracDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8bd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FGenerateClusterConvexHullsFromChildrenHullsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(1000);
  if (pFVar1 == (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *)0x0) {
    pFVar1 = (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::
             FGenerateClusterConvexHullsFromChildrenHullsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8c50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FGenerateClusterConvexHullsFromLeafHullsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGenerateClusterConvexHullsFromLeafHullsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3e0);
  if (pFVar1 == (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *)0x0) {
    pFVar1 = (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGenerateClusterConvexHullsFromLeafHullsDataflowNode::
             FGenerateClusterConvexHullsFromLeafHullsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGenerateClusterConvexHullsFromLeafHullsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8cd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FGeometryCollectionSetKinematicVertexSelectionNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionSetKinematicVertexSelectionNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FGeometryCollectionSetKinematicVertexSelectionNode *)0x0) {
    pFVar1 = (FGeometryCollectionSetKinematicVertexSelectionNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionSetKinematicVertexSelectionNode::
             FGeometryCollectionSetKinematicVertexSelectionNode(pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionSetKinematicVertexSelectionNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8d50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGeometryCollectionTerminalDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionTerminalDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FGeometryCollectionTerminalDataflowNode *)0x0) {
    pFVar1 = (FGeometryCollectionTerminalDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionTerminalDataflowNode::FGeometryCollectionTerminalDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionTerminalDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8dd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGeometryCollectionTerminalDataflowNode_v2>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionTerminalDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FGeometryCollectionTerminalDataflowNode_v2 *)0x0) {
    pFVar1 = (FGeometryCollectionTerminalDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionTerminalDataflowNode_v2::FGeometryCollectionTerminalDataflowNode_v2
                       (pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionTerminalDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8e50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGeometryCollectionToCollectionDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FGeometryCollectionToCollectionDataflowNode *)0x0) {
    pFVar1 = (FGeometryCollectionToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionToCollectionDataflowNode::
             FGeometryCollectionToCollectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8ed0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGeometryCollectionToCollectionDataflowNode_v2>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionToCollectionDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FGeometryCollectionToCollectionDataflowNode_v2 *)0x0) {
    pFVar1 = (FGeometryCollectionToCollectionDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionToCollectionDataflowNode_v2::
             FGeometryCollectionToCollectionDataflowNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionToCollectionDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8f50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGeometryCollectionTransferVertexAttributeNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionTransferVertexAttributeNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(1000);
  if (pFVar1 == (FGeometryCollectionTransferVertexAttributeNode *)0x0) {
    pFVar1 = (FGeometryCollectionTransferVertexAttributeNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionTransferVertexAttributeNode::
             FGeometryCollectionTransferVertexAttributeNode(pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionTransferVertexAttributeNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e8fd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGeometryCollectionTransferVertexSkinWeightsNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionTransferVertexSkinWeightsNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3c8);
  if (pFVar1 == (FGeometryCollectionTransferVertexSkinWeightsNode *)0x0) {
    pFVar1 = (FGeometryCollectionTransferVertexSkinWeightsNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionTransferVertexSkinWeightsNode::
             FGeometryCollectionTransferVertexSkinWeightsNode(pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionTransferVertexSkinWeightsNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9050

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FGeometryCollectionVertexScalarToVertexIndicesNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionVertexScalarToVertexIndicesNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FGeometryCollectionVertexScalarToVertexIndicesNode *)0x0) {
    pFVar1 = (FGeometryCollectionVertexScalarToVertexIndicesNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionVertexScalarToVertexIndicesNode::
             FGeometryCollectionVertexScalarToVertexIndicesNode(pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionVertexScalarToVertexIndicesNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e90d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGeometrySelectionToVertexSelectionDataflowNode>'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometrySelectionToVertexSelectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x358);
  if (pFVar1 == (FGeometrySelectionToVertexSelectionDataflowNode *)0x0) {
    pFVar1 = (FGeometrySelectionToVertexSelectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometrySelectionToVertexSelectionDataflowNode::
             FGeometrySelectionToVertexSelectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGeometrySelectionToVertexSelectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9150

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetArrayElementDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetArrayElementDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FGetArrayElementDataflowNode *)0x0) {
    pFVar1 = (FGetArrayElementDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetArrayElementDataflowNode::FGetArrayElementDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGetArrayElementDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e91d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetBoolOverrideFromAssetDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetBoolOverrideFromAssetDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FGetBoolOverrideFromAssetDataflowNode *)0x0) {
    pFVar1 = (FGetBoolOverrideFromAssetDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetBoolOverrideFromAssetDataflowNode::FGetBoolOverrideFromAssetDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetBoolOverrideFromAssetDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9250

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetBoundingBoxesFromCollectionDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetBoundingBoxesFromCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FGetBoundingBoxesFromCollectionDataflowNode *)0x0) {
    pFVar1 = (FGetBoundingBoxesFromCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetBoundingBoxesFromCollectionDataflowNode::
             FGetBoundingBoxesFromCollectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGetBoundingBoxesFromCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e92d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetBoxLengthsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x270);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this[1].Outputs.field_0x8 = 5;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FGetBoxLengthsDataflowNode__6B_;
    local_58.Reference = this + 1;
    this[1]._padding_ = 0;
    ((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].Outputs = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9400

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetCentroidsFromCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetCentroidsFromCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(1000);
  if (pFVar1 == (FGetCentroidsFromCollectionDataflowNode *)0x0) {
    pFVar1 = (FGetCentroidsFromCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetCentroidsFromCollectionDataflowNode::FGetCentroidsFromCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetCentroidsFromCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9480

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetCollectionAttributeDataTypedDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetCollectionAttributeDataTypedDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3c0);
  if (pFVar1 == (FGetCollectionAttributeDataTypedDataflowNode *)0x0) {
    pFVar1 = (FGetCollectionAttributeDataTypedDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetCollectionAttributeDataTypedDataflowNode::
             FGetCollectionAttributeDataTypedDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGetCollectionAttributeDataTypedDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9500

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetCollectionFromAssetDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x300);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FGetCollectionFromAssetDataflowNode__6B_;
    this[1]._padding_ = 0;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)&this[1]._padding_);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9640

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetConvexHullVolumeDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetConvexHullVolumeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x348);
  if (pFVar1 == (FGetConvexHullVolumeDataflowNode *)0x0) {
    pFVar1 = (FGetConvexHullVolumeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetConvexHullVolumeDataflowNode::FGetConvexHullVolumeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetConvexHullVolumeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e96c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetFloatArrayElementDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetFloatArrayElementDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FGetFloatArrayElementDataflowNode *)0x0) {
    pFVar1 = (FGetFloatArrayElementDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetFloatArrayElementDataflowNode::FGetFloatArrayElementDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetFloatArrayElementDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9740

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetFloatOverrideFromAssetDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetFloatOverrideFromAssetDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FGetFloatOverrideFromAssetDataflowNode *)0x0) {
    pFVar1 = (FGetFloatOverrideFromAssetDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetFloatOverrideFromAssetDataflowNode::FGetFloatOverrideFromAssetDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetFloatOverrideFromAssetDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e97c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetFromMaterialInterfaceArrayDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetFromMaterialInterfaceArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FGetFromMaterialInterfaceArrayDataflowNode *)0x0) {
    pFVar1 = (FGetFromMaterialInterfaceArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetFromMaterialInterfaceArrayDataflowNode::FGetFromMaterialInterfaceArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetFromMaterialInterfaceArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9840

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetGeometryCollectionAssetDataflowNode>'::__l2::
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
    this->_padding_ = (longlong)&___7FGetGeometryCollectionAssetDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8e9940

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetGeometryCollectionSourcesDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FGetGeometryCollectionSourcesDataflowNode__6B_;
    local_58.Reference = this + 1;
    this[1]._padding_ = 0;
    ((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9a70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetIntOverrideFromAssetDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetIntOverrideFromAssetDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FGetIntOverrideFromAssetDataflowNode *)0x0) {
    pFVar1 = (FGetIntOverrideFromAssetDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetIntOverrideFromAssetDataflowNode::FGetIntOverrideFromAssetDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetIntOverrideFromAssetDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9af0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetMaterialFromMaterialsArrayDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetMaterialFromMaterialsArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FGetMaterialFromMaterialsArrayDataflowNode *)0x0) {
    pFVar1 = (FGetMaterialFromMaterialsArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetMaterialFromMaterialsArrayDataflowNode::FGetMaterialFromMaterialsArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetMaterialFromMaterialsArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9b70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetMaterialInterfaceArraySizeDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetMaterialInterfaceArraySizeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FGetMaterialInterfaceArraySizeDataflowNode *)0x0) {
    pFVar1 = (FGetMaterialInterfaceArraySizeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetMaterialInterfaceArraySizeDataflowNode::FGetMaterialInterfaceArraySizeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetMaterialInterfaceArraySizeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9bf0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetMaterialInterfaceAssetDataflowNode>'::__l2::
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
    this->_padding_ = (longlong)&___7FGetMaterialInterfaceAssetDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8e9cf0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetMeshBoundingBoxDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetMeshBoundingBoxDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b8);
  if (pFVar1 == (FGetMeshBoundingBoxDataflowNode *)0x0) {
    pFVar1 = (FGetMeshBoundingBoxDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetMeshBoundingBoxDataflowNode::FGetMeshBoundingBoxDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetMeshBoundingBoxDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9d70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetMeshDataDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetMeshDataDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FGetMeshDataDataflowNode *)0x0) {
    pFVar1 = (FGetMeshDataDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetMeshDataDataflowNode::FGetMeshDataDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGetMeshDataDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9df0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetNumArrayElementsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetNumArrayElementsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FGetNumArrayElementsDataflowNode *)0x0) {
    pFVar1 = (FGetNumArrayElementsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetNumArrayElementsDataflowNode::FGetNumArrayElementsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetNumArrayElementsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9e70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetNumElementsInCollectionGroupDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetNumElementsInCollectionGroupDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x318);
  if (pFVar1 == (FGetNumElementsInCollectionGroupDataflowNode *)0x0) {
    pFVar1 = (FGetNumElementsInCollectionGroupDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetNumElementsInCollectionGroupDataflowNode::
             FGetNumElementsInCollectionGroupDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FGetNumElementsInCollectionGroupDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8e9ef0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetRootIndexFromCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined1 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x300);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FGetRootIndexFromCollectionDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(this + 1));
    puVar1 = &this[1].ExpandedInputs.field_0x8;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    *(undefined4 *)puVar1 = 0xffffffff;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea030

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetSchemaDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined1 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x308);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FGetSchemaDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(this + 1));
    puVar1 = &this[1].ExpandedInputs.field_0x8;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&this[1].ExpandedInputs.field_0x10 = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea170

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetStringOverrideFromAssetDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetStringOverrideFromAssetDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FGetStringOverrideFromAssetDataflowNode *)0x0) {
    pFVar1 = (FGetStringOverrideFromAssetDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetStringOverrideFromAssetDataflowNode::FGetStringOverrideFromAssetDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetStringOverrideFromAssetDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea1f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGridScatterPointsDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGridScatterPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FGridScatterPointsDataflowNode *)0x0) {
    pFVar1 = (FGridScatterPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGridScatterPointsDataflowNode::FGridScatterPointsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGridScatterPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea270

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FHashStringDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FHashStringDataflowNode__6B_;
    ::FString::FString((FString *)(this + 1),"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea3b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FHashVectorDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x268);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FHashVectorDataflowNode__6B_;
    local_58.Reference = this + 1;
    *(undefined4 *)&this[1].Outputs = 0;
    ((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1].Outputs;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea4e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FIntToBoolDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined1 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FIntToBoolDataflowNode__6B_;
    puVar1 = (undefined1 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea600

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FIntToDoubleDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FIntToDoubleDataflowNode__6B_;
    local_58.Reference = this + 1;
    this[1]._padding_ = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea720

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FIntToFloatDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FIntToFloatDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea840

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FIntToStringDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FIntToStringDataflowNode__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    ::FString::FString((FString *)&this[1]._padding_,"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ea980

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FInverseSqrtDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FInverseSqrtDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eaaa0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FInvertTransformDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FInvertTransformDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x310);
  if (pFVar1 == (FInvertTransformDataflowNode *)0x0) {
    pFVar1 = (FInvertTransformDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FInvertTransformDataflowNode::FInvertTransformDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FInvertTransformDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eab20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FIsNearlyZeroDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined1 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FIsNearlyZeroDataflowNode__6B_;
    puVar1 = (undefined1 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eac40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FLengthDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x268);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FLengthDataflowNode__6B_;
    local_58.Reference = this + 1;
    *(undefined4 *)&this[1].Outputs = 0;
    ((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1].Outputs;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ead70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FLerpDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FLerpDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FLerpDataflowNode *)0x0) {
    pFVar1 = (FLerpDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FLerpDataflowNode::FLerpDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FLerpDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eadf0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FLogDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FLogDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FLogDataflowNode *)0x0) {
    pFVar1 = (FLogDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FLogDataflowNode::FLogDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FLogDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eae70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FLogStringDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_38;
  FConnectionReference local_28;
  
  local_38.Name = *(FName *)(in_RDX + 3);
  local_38.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowNode *)0x0) {
    local_28.Reference = (void *)*in_RDX;
    local_28._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_38,(FGuid *)&local_28);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7FLogStringDataflowNode__6B_;
    ::FString::FString((FString *)&this[1]._padding_,"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    local_28.Reference = &this[1]._padding_;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eaf50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FLogeDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FLogeDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eb070

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeBoxDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeBoxDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2e8);
  if (pFVar1 == (FMakeBoxDataflowNode *)0x0) {
    pFVar1 = (FMakeBoxDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeBoxDataflowNode::FMakeBoxDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeBoxDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eb0f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeBoxMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
  this = ::operator_new(0x290);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    *(undefined4 *)&this[1].Outputs.field_0x18 = 3;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMakeBoxMeshDataflowNode__6B_;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].Outputs = 0x4014000000000000;
    *(undefined8 *)&this[1].Outputs.field_0x8 = 0x4014000000000000;
    *(undefined8 *)&this[1].Outputs.field_0x10 = 0x4014000000000000;
    local_28.Reference = &this[1].Outputs.field_0x28;
    *(undefined8 *)local_28.Reference = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    local_48.Reference = (void *)0x0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    *(undefined4 *)&this[1].Outputs.field_0x1c = 3;
    *(undefined4 *)&this[1].Outputs.field_0x20 = 3;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8eb250

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeCapsuleMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMakeCapsuleMeshDataflowNode__6B_;
    local_28.Reference = &this[1].Outputs;
    local_48.Reference = (void *)0x0;
    *(undefined8 *)local_28.Reference = 0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 5;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 6;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8eb380

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeCollectionDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
  this = ::operator_new(0x300);
  if (this != (FDataflowNode *)0x0) {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    this->_padding_ = (longlong)&___7FMakeCollectionDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(this + 1));
    this[1].ExpandedInputs.field_0x8 = 0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Reference = (void *)0x0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    local_48.Index = -1;
    local_28.Index = -1;
    local_28.Reference = this + 1;
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

// <lambda_invoker_cdecl> @ 14e8eb490

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeCylinderMeshDataflowNode>'::__l2::<lambda_1>
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
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMakeCylinderMeshDataflowNode__6B_;
    local_28.Reference = &this[1].Outputs;
    local_48.Reference = (void *)0x0;
    *(undefined8 *)local_28.Reference = 0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this[1]._padding_ = 0x40a00000;
    *(undefined4 *)&this[1]._padding_ = 0xc;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8eb5c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeDataflowConvexDecompositionSettingsNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeDataflowConvexDecompositionSettingsNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FMakeDataflowConvexDecompositionSettingsNode *)0x0) {
    pFVar1 = (FMakeDataflowConvexDecompositionSettingsNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeDataflowConvexDecompositionSettingsNode::
             FMakeDataflowConvexDecompositionSettingsNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeDataflowConvexDecompositionSettingsNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eb640

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeDataflowMeshDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeDataflowMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FMakeDataflowMeshDataflowNode *)0x0) {
    pFVar1 = (FMakeDataflowMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeDataflowMeshDataflowNode::FMakeDataflowMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMakeDataflowMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eb6c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeDiscMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined8 uVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_58;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_58.Name = *(FName *)(in_RDX + 3);
  local_58.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x280);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMakeDiscMeshDataflowNode__6B_;
    uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_28.Reference = &this[1].Outputs.field_0x18;
    local_48.Reference = (void *)0x0;
    local_48.ContainerReference = (void *)0x0;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    local_28.ContainerReference = (void *)0x0;
    *(double *)&this[1].Outputs = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    *(undefined8 *)local_28.Reference = 0;
    *(undefined4 *)&this[1].Outputs.field_0x8 = 0xc;
    *(undefined8 *)&this[1].Outputs.field_0xc = 2;
    *(undefined4 *)&this[1].Outputs.field_0x14 = 0x43b40000;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8eb810

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeFloatArrayDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeFloatArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FMakeFloatArrayDataflowNode *)0x0) {
    pFVar1 = (FMakeFloatArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeFloatArrayDataflowNode::FMakeFloatArrayDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeFloatArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eb890

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralBoolDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    *(undefined1 *)&this[1]._padding_ = 0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMakeLiteralBoolDataflowNode__6B_;
    local_28.Reference = (void *)((longlong)&this[1]._padding_ + 1);
    local_48.Reference = (void *)0x0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    *(undefined1 *)local_28.Reference = 0;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8eb9a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralBoolDataflowNode_v2>'::__l2::
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
    this->_padding_ = (longlong)&___7FMakeLiteralBoolDataflowNode_v2__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    *(undefined1 *)&((FDataflowNode *)local_28.Reference)->_padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8ebaa0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralDoubleDataflowNode>'::__l2::<lambda_1>
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
    this->_padding_ = (longlong)&___7FMakeLiteralDoubleDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8ebba0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralFloatDataflowNode>'::__l2::<lambda_1>
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
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    local_48.Index = -1;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7FMakeLiteralFloatDataflowNode__6B_;
    local_28.Reference = (void *)((longlong)&this[1]._padding_ + 4);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    *(undefined4 *)local_28.Reference = 0;
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

// <lambda_invoker_cdecl> @ 14e8ebcb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralFloatDataflowNode_v2>'::__l2::
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
    this->_padding_ = (longlong)&___7FMakeLiteralFloatDataflowNode_v2__6B_;
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

// <lambda_invoker_cdecl> @ 14e8ebdb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralIntDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7FMakeLiteralIntDataflowNode__6B_;
    local_28.Reference = (void *)((longlong)&this[1]._padding_ + 4);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    *(undefined4 *)local_28.Reference = 0;
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

// <lambda_invoker_cdecl> @ 14e8ebec0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralIntDataflowNode_v2>'::__l2::<lambda_1>
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
    this->_padding_ = (longlong)&___7FMakeLiteralIntDataflowNode_v2__6B_;
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

// <lambda_invoker_cdecl> @ 14e8ebfc0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralStringDataflowNode>'::__l2::<lambda_1>
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
    this->_padding_ = (longlong)&___7FMakeLiteralStringDataflowNode__6B_;
    ::FString::FString((FString *)(this + 1),"");
    local_48.Index = -1;
    local_28.Reference = &this[1]._padding_;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    *(longlong *)local_28.Reference = 0;
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

// <lambda_invoker_cdecl> @ 14e8ec0e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralStringDataflowNode_v2>'::__l2::
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
    this->_padding_ = (longlong)&___7FMakeLiteralStringDataflowNode_v2__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8ec1f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeLiteralVectorDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeLiteralVectorDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FMakeLiteralVectorDataflowNode *)0x0) {
    pFVar1 = (FMakeLiteralVectorDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeLiteralVectorDataflowNode::FMakeLiteralVectorDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMakeLiteralVectorDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ec270

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeMaterialDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    this->_padding_ = (longlong)&___7FMakeMaterialDataflowNode__6B_;
    local_28.Reference = &this[1]._padding_;
    this[1]._padding_ = 0;
    *(longlong *)local_28.Reference = 0;
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

// <lambda_invoker_cdecl> @ 14e8ec380

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeMaterialInterfaceArrayDataflowNode>'::__l2::
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
    this->_padding_ = (longlong)&___7FMakeMaterialInterfaceArrayDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8ec490

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeMaterialsArrayDataflowNode>'::__l2::
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
    this->_padding_ = (longlong)&___7FMakeMaterialsArrayDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8ec5a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakePlaneDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakePlaneDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c0);
  if (pFVar1 == (FMakePlaneDataflowNode *)0x0) {
    pFVar1 = (FMakePlaneDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakePlaneDataflowNode::FMakePlaneDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakePlaneDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ec620

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakePointsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    this->_padding_ = (longlong)&___7FMakePointsDataflowNode__6B_;
    local_28.Reference = &this[1]._padding_;
    this[1]._padding_ = 0;
    *(longlong *)local_28.Reference = 0;
    *(undefined8 *)&this[1].Outputs = 0;
    this[1]._padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8ec740

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeQuaternionDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeQuaternionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FMakeQuaternionDataflowNode *)0x0) {
    pFVar1 = (FMakeQuaternionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeQuaternionDataflowNode::FMakeQuaternionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeQuaternionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ec7c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeRectangleMeshDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeRectangleMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FMakeRectangleMeshDataflowNode *)0x0) {
    pFVar1 = (FMakeRectangleMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeRectangleMeshDataflowNode::FMakeRectangleMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMakeRectangleMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ec840

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeRootProxyMeshArrayDataflowNode>'::__l2::
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
    this->_padding_ = (longlong)&___7FMakeRootProxyMeshArrayDataflowNode__6B_;
    local_28.Reference = this + 1;
    local_48.Reference = (void *)0x0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14e8ec950

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeRootProxyMeshDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeRootProxyMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FMakeRootProxyMeshDataflowNode *)0x0) {
    pFVar1 = (FMakeRootProxyMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeRootProxyMeshDataflowNode::FMakeRootProxyMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMakeRootProxyMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ec9d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeRotatorDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeRotatorDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FMakeRotatorDataflowNode *)0x0) {
    pFVar1 = (FMakeRotatorDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeRotatorDataflowNode::FMakeRotatorDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeRotatorDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eca50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeSphereDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeSphereDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FMakeSphereDataflowNode *)0x0) {
    pFVar1 = (FMakeSphereDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeSphereDataflowNode::FMakeSphereDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeSphereDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ecad0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeSphereMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
  this = ::operator_new(0x260);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMakeSphereMeshDataflowNode__6B_;
    local_28.Reference = &this[1]._padding_;
    local_48.Reference = (void *)0x0;
    *(longlong *)local_28.Reference = 0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xc;
    *(undefined4 *)&this[1]._padding_ = 0xc;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8ecbf0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeStairMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
  this = ::operator_new(0x270);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_48.Reference = (void *)*in_RDX;
    local_48._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_58,(FGuid *)&local_48);
    *(undefined1 *)&this[1]._padding_ = 0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMakeStairMeshDataflowNode__6B_;
    local_28.Reference = &this[1].Outputs.field_0x8;
    local_48.Reference = (void *)0x0;
    *(undefined8 *)local_28.Reference = 0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 8;
    *(undefined4 *)&this[1]._padding_ = 0x43160000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41a00000;
    *(undefined4 *)&this[1]._padding_ = 0x41f00000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42b40000;
    *(undefined4 *)&this[1].Outputs = 0x43160000;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8ecd40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeTorusMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeTorusMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FMakeTorusMeshDataflowNode *)0x0) {
    pFVar1 = (FMakeTorusMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeTorusMeshDataflowNode::FMakeTorusMeshDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeTorusMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ecdc0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeTransformDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeTransformDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2f0);
  if (pFVar1 == (FMakeTransformDataflowNode *)0x0) {
    pFVar1 = (FMakeTransformDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeTransformDataflowNode::FMakeTransformDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMakeTransformDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ece40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeTransformDataflowNode_v2>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeTransformDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FMakeTransformDataflowNode_v2 *)0x0) {
    pFVar1 = (FMakeTransformDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeTransformDataflowNode_v2::FMakeTransformDataflowNode_v2
                       (pFVar1,&local_28,&local_18);
  }
  *(FMakeTransformDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ecec0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMaterialInterfaceTextureOverrideDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMaterialInterfaceTextureOverrideDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FMaterialInterfaceTextureOverrideDataflowNode *)0x0) {
    pFVar1 = (FMaterialInterfaceTextureOverrideDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMaterialInterfaceTextureOverrideDataflowNode::
             FMaterialInterfaceTextureOverrideDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMaterialInterfaceTextureOverrideDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ecf40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMaterialsInfoDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x268);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMaterialsInfoDataflowNode__6B_;
    local_58.Reference = this + 1;
    this[1]._padding_ = 0;
    ((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].Outputs = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed070

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMathConstantsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    *(undefined1 *)&this[1]._padding_ = 0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FMathConstantsDataflowNode__6B_;
    local_28.Reference = (void *)((longlong)&this[1]._padding_ + 4);
    local_48.Reference = (void *)0x0;
    *(undefined4 *)local_28.Reference = 0;
    local_48.ContainerReference = (void *)0x0;
    local_28.ContainerReference = (void *)0x0;
    local_48.Index = -1;
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

// <lambda_invoker_cdecl> @ 14e8ed180

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMathExpressionDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMathExpressionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FMathExpressionDataflowNode *)0x0) {
    pFVar1 = (FMathExpressionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMathExpressionDataflowNode::FMathExpressionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMathExpressionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed200

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMax3DataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMax3DataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FMax3DataflowNode *)0x0) {
    pFVar1 = (FMax3DataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMax3DataflowNode::FMax3DataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMax3DataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed280

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMaxDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMaxDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FMaxDataflowNode *)0x0) {
    pFVar1 = (FMaxDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMaxDataflowNode::FMaxDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMaxDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed300

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMergeConvexHullsDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMergeConvexHullsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3e0);
  if (pFVar1 == (FMergeConvexHullsDataflowNode *)0x0) {
    pFVar1 = (FMergeConvexHullsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMergeConvexHullsDataflowNode::FMergeConvexHullsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMergeConvexHullsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed380

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMergeInCollectionDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMergeInCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FMergeInCollectionDataflowNode *)0x0) {
    pFVar1 = (FMergeInCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMergeInCollectionDataflowNode::FMergeInCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMergeInCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed400

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMergeUVIslandsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMergeUVIslandsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x348);
  if (pFVar1 == (FMergeUVIslandsDataflowNode *)0x0) {
    pFVar1 = (FMergeUVIslandsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMergeUVIslandsDataflowNode::FMergeUVIslandsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMergeUVIslandsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed480

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshAppendDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMeshAppendDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FMeshAppendDataflowNode *)0x0) {
    pFVar1 = (FMeshAppendDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMeshAppendDataflowNode::FMeshAppendDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMeshAppendDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed500

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshCopyToPointsDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMeshCopyToPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FMeshCopyToPointsDataflowNode *)0x0) {
    pFVar1 = (FMeshCopyToPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMeshCopyToPointsDataflowNode::FMeshCopyToPointsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMeshCopyToPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed580

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshCutterDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMeshCutterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x450);
  if (pFVar1 == (FMeshCutterDataflowNode *)0x0) {
    pFVar1 = (FMeshCutterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMeshCutterDataflowNode::FMeshCutterDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMeshCutterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed600

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshInfoDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FMeshInfoDataflowNode__6B_;
    this[1]._padding_ = 0;
    ::FString::FString((FString *)&this[1]._padding_,"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed740

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshToCollectionDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMeshToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x310);
  if (pFVar1 == (FMeshToCollectionDataflowNode *)0x0) {
    pFVar1 = (FMeshToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMeshToCollectionDataflowNode::FMeshToCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMeshToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed7c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshToOBJStringDebugDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMeshToOBJStringDebugDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FMeshToOBJStringDebugDataflowNode *)0x0) {
    pFVar1 = (FMeshToOBJStringDebugDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMeshToOBJStringDebugDataflowNode::FMeshToOBJStringDebugDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMeshToOBJStringDebugDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed840

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMin3DataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMin3DataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FMin3DataflowNode *)0x0) {
    pFVar1 = (FMin3DataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMin3DataflowNode::FMin3DataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMin3DataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed8c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMinDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMinDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FMinDataflowNode *)0x0) {
    pFVar1 = (FMinDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMinDataflowNode::FMinDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMinDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed940

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMultiplyDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMultiplyDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FMultiplyDataflowNode *)0x0) {
    pFVar1 = (FMultiplyDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMultiplyDataflowNode::FMultiplyDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FMultiplyDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ed9c0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMultiplyTransformDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMultiplyTransformDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x370);
  if (pFVar1 == (FMultiplyTransformDataflowNode *)0x0) {
    pFVar1 = (FMultiplyTransformDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMultiplyTransformDataflowNode::FMultiplyTransformDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMultiplyTransformDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eda40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FNegateDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FNegateDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8edb60

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FNoiseFieldDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FNoiseFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FNoiseFieldDataflowNode *)0x0) {
    pFVar1 = (FNoiseFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FNoiseFieldDataflowNode::FNoiseFieldDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FNoiseFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8edbe0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FNonUniformPointSamplingDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FNonUniformPointSamplingDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b8);
  if (pFVar1 == (FNonUniformPointSamplingDataflowNode *)0x0) {
    pFVar1 = (FNonUniformPointSamplingDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FNonUniformPointSamplingDataflowNode::FNonUniformPointSamplingDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FNonUniformPointSamplingDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8edc60

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FNormalizeDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FNormalizeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FNormalizeDataflowNode *)0x0) {
    pFVar1 = (FNormalizeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FNormalizeDataflowNode::FNormalizeDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FNormalizeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8edce0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FNormalizeToRangeDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FNormalizeToRangeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FNormalizeToRangeDataflowNode *)0x0) {
    pFVar1 = (FNormalizeToRangeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FNormalizeToRangeDataflowNode::FNormalizeToRangeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FNormalizeToRangeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8edd60

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FOneMinusDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FOneMinusDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ede80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPlaneCutterDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FPlaneCutterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x388);
  if (pFVar1 == (FPlaneCutterDataflowNode *)0x0) {
    pFVar1 = (FPlaneCutterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FPlaneCutterDataflowNode::FPlaneCutterDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FPlaneCutterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8edf00

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPlaneCutterDataflowNode_v2>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FPlaneCutterDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x440);
  if (pFVar1 == (FPlaneCutterDataflowNode_v2 *)0x0) {
    pFVar1 = (FPlaneCutterDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FPlaneCutterDataflowNode_v2::FPlaneCutterDataflowNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FPlaneCutterDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8edf80

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPlaneFalloffFieldDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FPlaneFalloffFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FPlaneFalloffFieldDataflowNode *)0x0) {
    pFVar1 = (FPlaneFalloffFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FPlaneFalloffFieldDataflowNode::FPlaneFalloffFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FPlaneFalloffFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee000

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPointsToCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FPointsToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x308);
  if (pFVar1 == (FPointsToCollectionDataflowNode *)0x0) {
    pFVar1 = (FPointsToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FPointsToCollectionDataflowNode::FPointsToCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FPointsToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee080

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPointsToMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FPointsToMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FPointsToMeshDataflowNode *)0x0) {
    pFVar1 = (FPointsToMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FPointsToMeshDataflowNode::FPointsToMeshDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FPointsToMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee100

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPowDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FPowDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FPowDataflowNode *)0x0) {
    pFVar1 = (FPowDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FPowDataflowNode::FPowDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FPowDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee180

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPrintStringDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_38;
  FConnectionReference local_28;
  
  local_38.Name = *(FName *)(in_RDX + 3);
  local_38.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x268);
  if (this != (FDataflowNode *)0x0) {
    local_28.Reference = (void *)*in_RDX;
    local_28._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_38,(FGuid *)&local_28);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&___7FPrintStringDataflowNode__6B_;
    ((FColor_u_0 *)((longlong)&this[1]._padding_ + 4))->_s_0 =
         (FColor_u_0_s_0)FColor::White.field0_0x0;
    *(undefined4 *)&this[1]._padding_ = 0x40000000;
    ::FString::FString((FString *)&this[1]._padding_,"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    local_28.Reference = &this[1]._padding_;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee280

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FProximityDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FProximityDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FProximityDataflowNode *)0x0) {
    pFVar1 = (FProximityDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FProximityDataflowNode::FProximityDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FProximityDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee300

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPruneInCollectionDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FPruneInCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FPruneInCollectionDataflowNode *)0x0) {
    pFVar1 = (FPruneInCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FPruneInCollectionDataflowNode::FPruneInCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FPruneInCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee380

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRadialFalloffFieldDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRadialFalloffFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FRadialFalloffFieldDataflowNode *)0x0) {
    pFVar1 = (FRadialFalloffFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRadialFalloffFieldDataflowNode::FRadialFalloffFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRadialFalloffFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee400

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRadialIntMaskFieldDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRadialIntMaskFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2f0);
  if (pFVar1 == (FRadialIntMaskFieldDataflowNode *)0x0) {
    pFVar1 = (FRadialIntMaskFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRadialIntMaskFieldDataflowNode::FRadialIntMaskFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRadialIntMaskFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee480

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRadialScatterPointsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRadialScatterPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2a0);
  if (pFVar1 == (FRadialScatterPointsDataflowNode *)0x0) {
    pFVar1 = (FRadialScatterPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRadialScatterPointsDataflowNode::FRadialScatterPointsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRadialScatterPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee500

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRadialScatterPointsDataflowNode_v2>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRadialScatterPointsDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2f0);
  if (pFVar1 == (FRadialScatterPointsDataflowNode_v2 *)0x0) {
    pFVar1 = (FRadialScatterPointsDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRadialScatterPointsDataflowNode_v2::FRadialScatterPointsDataflowNode_v2
                       (pFVar1,&local_28,&local_18);
  }
  *(FRadialScatterPointsDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee580

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRadialVectorFieldDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRadialVectorFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c8);
  if (pFVar1 == (FRadialVectorFieldDataflowNode *)0x0) {
    pFVar1 = (FRadialVectorFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRadialVectorFieldDataflowNode::FRadialVectorFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRadialVectorFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee600

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRadiansToDegreesDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FRadiansToDegreesDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee720

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRandomFloatDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRandomFloatDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FRandomFloatDataflowNode *)0x0) {
    pFVar1 = (FRandomFloatDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRandomFloatDataflowNode::FRandomFloatDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FRandomFloatDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee7a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRandomFloatInRangeDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRandomFloatInRangeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FRandomFloatInRangeDataflowNode *)0x0) {
    pFVar1 = (FRandomFloatInRangeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRandomFloatInRangeDataflowNode::FRandomFloatInRangeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRandomFloatInRangeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee820

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRandomUnitVectorDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRandomUnitVectorDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FRandomUnitVectorDataflowNode *)0x0) {
    pFVar1 = (FRandomUnitVectorDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRandomUnitVectorDataflowNode::FRandomUnitVectorDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRandomUnitVectorDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee8a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRandomUnitVectorInConeDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRandomUnitVectorInConeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FRandomUnitVectorInConeDataflowNode *)0x0) {
    pFVar1 = (FRandomUnitVectorInConeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRandomUnitVectorInConeDataflowNode::FRandomUnitVectorInConeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRandomUnitVectorInConeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee920

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRandomVectorFieldDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRandomVectorFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FRandomVectorFieldDataflowNode *)0x0) {
    pFVar1 = (FRandomVectorFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRandomVectorFieldDataflowNode::FRandomVectorFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRandomVectorFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ee9a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRandomizeFloatArrayDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRandomizeFloatArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FRandomizeFloatArrayDataflowNode *)0x0) {
    pFVar1 = (FRandomizeFloatArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRandomizeFloatArrayDataflowNode::FRandomizeFloatArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRandomizeFloatArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eea20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FReAssignMaterialInCollectionDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FReAssignMaterialInCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FReAssignMaterialInCollectionDataflowNode *)0x0) {
    pFVar1 = (FReAssignMaterialInCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FReAssignMaterialInCollectionDataflowNode::FReAssignMaterialInCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FReAssignMaterialInCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eeaa0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FRecomputeNormalsInGeometryCollectionDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRecomputeNormalsInGeometryCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FRecomputeNormalsInGeometryCollectionDataflowNode *)0x0) {
    pFVar1 = (FRecomputeNormalsInGeometryCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRecomputeNormalsInGeometryCollectionDataflowNode::
             FRecomputeNormalsInGeometryCollectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FRecomputeNormalsInGeometryCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eeb20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRemoveFloatArrayElementDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRemoveFloatArrayElementDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FRemoveFloatArrayElementDataflowNode *)0x0) {
    pFVar1 = (FRemoveFloatArrayElementDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRemoveFloatArrayElementDataflowNode::FRemoveFloatArrayElementDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FRemoveFloatArrayElementDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eeba0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRemoveOnBreakDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FRemoveOnBreakDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x338);
  if (pFVar1 == (FRemoveOnBreakDataflowNode *)0x0) {
    pFVar1 = (FRemoveOnBreakDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FRemoveOnBreakDataflowNode::FRemoveOnBreakDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FRemoveOnBreakDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eec20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FResampleGeometryCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FResampleGeometryCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FResampleGeometryCollectionDataflowNode *)0x0) {
    pFVar1 = (FResampleGeometryCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FResampleGeometryCollectionDataflowNode::FResampleGeometryCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FResampleGeometryCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eeca0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FRoundDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FRoundDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eedc0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSafeDivideDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSafeDivideDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FSafeDivideDataflowNode *)0x0) {
    pFVar1 = (FSafeDivideDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSafeDivideDataflowNode::FSafeDivideDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSafeDivideDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eee40

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSafeReciprocalDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FSafeReciprocalDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eef60

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FScaleVectorDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FScaleVectorDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FScaleVectorDataflowNode *)0x0) {
    pFVar1 = (FScaleVectorDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FScaleVectorDataflowNode::FScaleVectorDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FScaleVectorDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eefe0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSelectFloatArrayIndicesInRangeDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSelectFloatArrayIndicesInRangeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FSelectFloatArrayIndicesInRangeDataflowNode *)0x0) {
    pFVar1 = (FSelectFloatArrayIndicesInRangeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSelectFloatArrayIndicesInRangeDataflowNode::
             FSelectFloatArrayIndicesInRangeDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSelectFloatArrayIndicesInRangeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef060

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSelectionToVertexListDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSelectionToVertexListDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FSelectionToVertexListDataflowNode *)0x0) {
    pFVar1 = (FSelectionToVertexListDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSelectionToVertexListDataflowNode::FSelectionToVertexListDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSelectionToVertexListDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef0e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetAnchorStateDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetAnchorStateDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FSetAnchorStateDataflowNode *)0x0) {
    pFVar1 = (FSetAnchorStateDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetAnchorStateDataflowNode::FSetAnchorStateDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSetAnchorStateDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef160

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetCollectionAttributeDataTypedDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetCollectionAttributeDataTypedDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3c0);
  if (pFVar1 == (FSetCollectionAttributeDataTypedDataflowNode *)0x0) {
    pFVar1 = (FSetCollectionAttributeDataTypedDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetCollectionAttributeDataTypedDataflowNode::
             FSetCollectionAttributeDataTypedDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSetCollectionAttributeDataTypedDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef1e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetDynamicStateDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetDynamicStateDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FSetDynamicStateDataflowNode *)0x0) {
    pFVar1 = (FSetDynamicStateDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetDynamicStateDataflowNode::FSetDynamicStateDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSetDynamicStateDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef260

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetIntoMaterialInterfaceArrayDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetIntoMaterialInterfaceArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FSetIntoMaterialInterfaceArrayDataflowNode *)0x0) {
    pFVar1 = (FSetIntoMaterialInterfaceArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetIntoMaterialInterfaceArrayDataflowNode::FSetIntoMaterialInterfaceArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSetIntoMaterialInterfaceArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef2e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetMaterialInMaterialsArrayDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetMaterialInMaterialsArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FSetMaterialInMaterialsArrayDataflowNode *)0x0) {
    pFVar1 = (FSetMaterialInMaterialsArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetMaterialInMaterialsArrayDataflowNode::FSetMaterialInMaterialsArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSetMaterialInMaterialsArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef360

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetVertexColorFromFloatArrayDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetVertexColorFromFloatArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(800);
  if (pFVar1 == (FSetVertexColorFromFloatArrayDataflowNode *)0x0) {
    pFVar1 = (FSetVertexColorFromFloatArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetVertexColorFromFloatArrayDataflowNode::FSetVertexColorFromFloatArrayDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSetVertexColorFromFloatArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef3e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetVertexColorFromVertexIndicesDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetVertexColorFromVertexIndicesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x318);
  if (pFVar1 == (FSetVertexColorFromVertexIndicesDataflowNode *)0x0) {
    pFVar1 = (FSetVertexColorFromVertexIndicesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetVertexColorFromVertexIndicesDataflowNode::
             FSetVertexColorFromVertexIndicesDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSetVertexColorFromVertexIndicesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef460

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetVertexColorFromVertexSelectionDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetVertexColorFromVertexSelectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FSetVertexColorFromVertexSelectionDataflowNode *)0x0) {
    pFVar1 = (FSetVertexColorFromVertexSelectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetVertexColorFromVertexSelectionDataflowNode::
             FSetVertexColorFromVertexSelectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSetVertexColorFromVertexSelectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef4e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSetVisibilityInCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetVisibilityInCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x350);
  if (pFVar1 == (FSetVisibilityInCollectionDataflowNode *)0x0) {
    pFVar1 = (FSetVisibilityInCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetVisibilityInCollectionDataflowNode::FSetVisibilityInCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSetVisibilityInCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef560

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSignDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FSignDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef680

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSimplifyConvexHullsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSimplifyConvexHullsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x358);
  if (pFVar1 == (FSimplifyConvexHullsDataflowNode *)0x0) {
    pFVar1 = (FSimplifyConvexHullsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSimplifyConvexHullsDataflowNode::FSimplifyConvexHullsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSimplifyConvexHullsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef700

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSinDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FSinDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef820

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletalMeshToCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x308);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FSkeletalMeshToCollectionDataflowNode__6B_;
    this[1]._padding_ = 0;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)&this[1]._padding_);
    this[1].ExpandedInputs.field_0x10 = 0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8ef960

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletonToCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x300);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FSkeletonToCollectionDataflowNode__6B_;
    this[1]._padding_ = 0;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)&this[1]._padding_);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = &this[1]._padding_;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8efaa0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSliceCutterDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSliceCutterDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3c8);
  if (pFVar1 == (FSliceCutterDataflowNode *)0x0) {
    pFVar1 = (FSliceCutterDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSliceCutterDataflowNode::FSliceCutterDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSliceCutterDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8efb20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSphereCoveringCountSpheresNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined1 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x270);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FSphereCoveringCountSpheresNode__6B_;
    puVar1 = &this[1].Outputs.field_0x8;
    local_58.Reference = this + 1;
    *(undefined4 *)puVar1 = 0;
    ((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].Outputs = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8efc50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSphereCoveringToMeshDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSphereCoveringToMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FSphereCoveringToMeshDataflowNode *)0x0) {
    pFVar1 = (FSphereCoveringToMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSphereCoveringToMeshDataflowNode::FSphereCoveringToMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSphereCoveringToMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8efcd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSpheresToPointsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSpheresToPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FSpheresToPointsDataflowNode *)0x0) {
    pFVar1 = (FSpheresToPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSpheresToPointsDataflowNode::FSpheresToPointsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSpheresToPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8efd50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSplitDataflowMeshDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSplitDataflowMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FSplitDataflowMeshDataflowNode *)0x0) {
    pFVar1 = (FSplitDataflowMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSplitDataflowMeshDataflowNode::FSplitDataflowMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSplitDataflowMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8efdd0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSplitMeshIslandsDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSplitMeshIslandsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FSplitMeshIslandsDataflowNode *)0x0) {
    pFVar1 = (FSplitMeshIslandsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSplitMeshIslandsDataflowNode::FSplitMeshIslandsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSplitMeshIslandsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8efe50

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSquareDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FSquareDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8eff70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSquareRootDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FSquareRootDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0090

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FStaticMeshToCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FStaticMeshToCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3a0);
  if (pFVar1 == (FStaticMeshToCollectionDataflowNode *)0x0) {
    pFVar1 = (FStaticMeshToCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FStaticMeshToCollectionDataflowNode::FStaticMeshToCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FStaticMeshToCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0110

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FStaticMeshToCollectionDataflowNode_v2>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FStaticMeshToCollectionDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3a0);
  if (pFVar1 == (FStaticMeshToCollectionDataflowNode_v2 *)0x0) {
    pFVar1 = (FStaticMeshToCollectionDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FStaticMeshToCollectionDataflowNode_v2::FStaticMeshToCollectionDataflowNode_v2
                       (pFVar1,&local_28,&local_18);
  }
  *(FStaticMeshToCollectionDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0190

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FStaticMeshToMeshDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FStaticMeshToMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FStaticMeshToMeshDataflowNode *)0x0) {
    pFVar1 = (FStaticMeshToMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FStaticMeshToMeshDataflowNode::FStaticMeshToMeshDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FStaticMeshToMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0210

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FStringAppendDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FStringAppendDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FStringAppendDataflowNode *)0x0) {
    pFVar1 = (FStringAppendDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FStringAppendDataflowNode::FStringAppendDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FStringAppendDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0290

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FStringAppendDataflowNode_v2>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FStringAppendDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FStringAppendDataflowNode_v2 *)0x0) {
    pFVar1 = (FStringAppendDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FStringAppendDataflowNode_v2::FStringAppendDataflowNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FStringAppendDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0310

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSubtractDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSubtractDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FSubtractDataflowNode *)0x0) {
    pFVar1 = (FSubtractDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSubtractDataflowNode::FSubtractDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSubtractDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0390

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSumScalarFieldDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSumScalarFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FSumScalarFieldDataflowNode *)0x0) {
    pFVar1 = (FSumScalarFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSumScalarFieldDataflowNode::FSumScalarFieldDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSumScalarFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0410

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSumVectorFieldDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSumVectorFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2d0);
  if (pFVar1 == (FSumVectorFieldDataflowNode *)0x0) {
    pFVar1 = (FSumVectorFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSumVectorFieldDataflowNode::FSumVectorFieldDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSumVectorFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0490

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTanDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FTanDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f05b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTransformCollectionAttributeDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FTransformCollectionAttributeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3e0);
  if (pFVar1 == (FTransformCollectionAttributeDataflowNode *)0x0) {
    pFVar1 = (FTransformCollectionAttributeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FTransformCollectionAttributeDataflowNode::FTransformCollectionAttributeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FTransformCollectionAttributeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0630

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTransformCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FTransformCollectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3b0);
  if (pFVar1 == (FTransformCollectionDataflowNode *)0x0) {
    pFVar1 = (FTransformCollectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FTransformCollectionDataflowNode::FTransformCollectionDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FTransformCollectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f06b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTransformMeshDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FTransformMeshDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2e0);
  if (pFVar1 == (FTransformMeshDataflowNode *)0x0) {
    pFVar1 = (FTransformMeshDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FTransformMeshDataflowNode::FTransformMeshDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FTransformMeshDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0730

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTransformPointsDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FTransformPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c0);
  if (pFVar1 == (FTransformPointsDataflowNode *)0x0) {
    pFVar1 = (FTransformPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FTransformPointsDataflowNode::FTransformPointsDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FTransformPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f07b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTriangleBoundaryIndicesNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined1 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x308);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    this->_padding_ = (longlong)&___7FTriangleBoundaryIndicesNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(this + 1));
    puVar1 = &this[1].ExpandedInputs.field_0x8;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&this[1].ExpandedInputs.field_0x10 = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f08f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTruncDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  undefined4 *puVar1;
  FDataflowNode *this;
  FDataflowOutput *this_00;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x250);
  if (this == (FDataflowNode *)0x0) {
    this = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_68,(FGuid *)&local_58);
    local_58.Index = -1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    this->_padding_ = (longlong)&___7FTruncDataflowNode__6B_;
    puVar1 = (undefined4 *)((longlong)&this[1]._padding_ + 4);
    local_58.Reference = this + 1;
    *puVar1 = 0;
    *(undefined4 *)&((FDataflowNode *)local_58.Reference)->_padding_ = 0;
    local_58.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = puVar1;
    this_00 = FDataflowNode::RegisterOutputConnectionInternal(this,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_00,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0a10

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUniformFractureDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUniformFractureDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3f0);
  if (pFVar1 == (FUniformFractureDataflowNode *)0x0) {
    pFVar1 = (FUniformFractureDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUniformFractureDataflowNode::FUniformFractureDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FUniformFractureDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0a90

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUniformIntegerFieldDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUniformIntegerFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FUniformIntegerFieldDataflowNode *)0x0) {
    pFVar1 = (FUniformIntegerFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUniformIntegerFieldDataflowNode::FUniformIntegerFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FUniformIntegerFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0b10

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUniformPointSamplingDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUniformPointSamplingDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x298);
  if (pFVar1 == (FUniformPointSamplingDataflowNode *)0x0) {
    pFVar1 = (FUniformPointSamplingDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUniformPointSamplingDataflowNode::FUniformPointSamplingDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FUniformPointSamplingDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0b90

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUniformScalarFieldDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUniformScalarFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FUniformScalarFieldDataflowNode *)0x0) {
    pFVar1 = (FUniformScalarFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUniformScalarFieldDataflowNode::FUniformScalarFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FUniformScalarFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0c10

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUniformScatterPointsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUniformScatterPointsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2a0);
  if (pFVar1 == (FUniformScatterPointsDataflowNode *)0x0) {
    pFVar1 = (FUniformScatterPointsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUniformScatterPointsDataflowNode::FUniformScatterPointsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FUniformScatterPointsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0c90

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUniformScatterPointsDataflowNode_v2>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUniformScatterPointsDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2a0);
  if (pFVar1 == (FUniformScatterPointsDataflowNode_v2 *)0x0) {
    pFVar1 = (FUniformScatterPointsDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUniformScatterPointsDataflowNode_v2::FUniformScatterPointsDataflowNode_v2
                       (pFVar1,&local_28,&local_18);
  }
  *(FUniformScatterPointsDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0d10

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUniformVectorFieldDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUniformVectorFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c8);
  if (pFVar1 == (FUniformVectorFieldDataflowNode *)0x0) {
    pFVar1 = (FUniformVectorFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUniformVectorFieldDataflowNode::FUniformVectorFieldDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FUniformVectorFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0d90

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUnionIntArraysDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FUnionIntArraysDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FUnionIntArraysDataflowNode *)0x0) {
    pFVar1 = (FUnionIntArraysDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FUnionIntArraysDataflowNode::FUnionIntArraysDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FUnionIntArraysDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0e10

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FUpdateVolumeAttributesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowNode *this_00;
  FDataflowOutput *this_01;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this_00 = ::operator_new(0x2f8);
  if (this_00 == (FDataflowNode *)0x0) {
    this_00 = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this_00,&local_68,(FGuid *)&local_58);
    this = this_00 + 1;
    this_00->_padding_ = (longlong)&___7FUpdateVolumeAttributesDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.ContainerReference = (void *)0x0;
    local_58.Index = -1;
    local_58.Reference = this;
    FDataflowNode::RegisterInputConnectionInternal(this_00,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Reference = (void *)0x0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_38.Reference = this;
    this_01 = FDataflowNode::RegisterOutputConnectionInternal(this_00,&local_38,&local_res8);
    if (local_58.Reference != (void *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_01,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this_00;
  (**(code **)(this_00->_padding_ + 0xe0))(this_00);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f0f30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FValidateGeometryCollectionDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  FDataflowNode *this_00;
  FDataflowOutput *this_01;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_68;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_68.Name = *(FName *)(in_RDX + 3);
  local_68.OwningObject = (UObject *)in_RDX[4];
  this_00 = ::operator_new(0x300);
  if (this_00 == (FDataflowNode *)0x0) {
    this_00 = (FDataflowNode *)0x0;
  }
  else {
    local_58.Reference = (void *)*in_RDX;
    local_58._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this_00,&local_68,(FGuid *)&local_58);
    this = this_00 + 1;
    this_00->_padding_ = (longlong)&___7FValidateGeometryCollectionDataflowNode__6B_;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
    *(undefined2 *)&this_00[1].ExpandedInputs.field_0x8 = 1;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.ContainerReference = (void *)0x0;
    this_00[1].ExpandedInputs.field_0xa = 0;
    local_58.Index = -1;
    local_58.Reference = this;
    FDataflowNode::RegisterInputConnectionInternal(this_00,&local_58,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_58.Reference = this;
    local_38.Reference = this;
    this_01 = FDataflowNode::RegisterOutputConnectionInternal(this_00,&local_38,&local_res8);
    if (local_58.Reference != (FDataflowNode *)0x0) {
      FDataflowOutput::SetPassthroughInput(this_01,&local_58);
    }
  }
  *(FDataflowNode **)&param_1->Guid = this_00;
  (**(code **)(this_00->_padding_ + 0xe0))(this_00);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f1060

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FVectorArrayNormalizeDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FVectorArrayNormalizeDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x298);
  if (pFVar1 == (FVectorArrayNormalizeDataflowNode *)0x0) {
    pFVar1 = (FVectorArrayNormalizeDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FVectorArrayNormalizeDataflowNode::FVectorArrayNormalizeDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FVectorArrayNormalizeDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f10e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FVectorToStringDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FVectorToStringDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FVectorToStringDataflowNode *)0x0) {
    pFVar1 = (FVectorToStringDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FVectorToStringDataflowNode::FVectorToStringDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FVectorToStringDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f1160

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FVertexWeightedPointSamplingDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FVertexWeightedPointSamplingDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c8);
  if (pFVar1 == (FVertexWeightedPointSamplingDataflowNode *)0x0) {
    pFVar1 = (FVertexWeightedPointSamplingDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FVertexWeightedPointSamplingDataflowNode::FVertexWeightedPointSamplingDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FVertexWeightedPointSamplingDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f11e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FVisualizeFractureDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FVisualizeFractureDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x380);
  if (pFVar1 == (FVisualizeFractureDataflowNode *)0x0) {
    pFVar1 = (FVisualizeFractureDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FVisualizeFractureDataflowNode::FVisualizeFractureDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FVisualizeFractureDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f1260

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FVisualizeTetrahedronsDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FVisualizeTetrahedronsDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x308);
  if (pFVar1 == (FVisualizeTetrahedronsDataflowNode *)0x0) {
    pFVar1 = (FVisualizeTetrahedronsDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FVisualizeTetrahedronsDataflowNode::FVisualizeTetrahedronsDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FVisualizeTetrahedronsDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f12e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FVoronoiFractureDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FVoronoiFractureDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x360);
  if (pFVar1 == (FVoronoiFractureDataflowNode *)0x0) {
    pFVar1 = (FVoronoiFractureDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FVoronoiFractureDataflowNode::FVoronoiFractureDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FVoronoiFractureDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f1360

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FVoronoiFractureDataflowNode_v2>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FVoronoiFractureDataflowNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3f0);
  if (pFVar1 == (FVoronoiFractureDataflowNode_v2 *)0x0) {
    pFVar1 = (FVoronoiFractureDataflowNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FVoronoiFractureDataflowNode_v2::FVoronoiFractureDataflowNode_v2
                       (pFVar1,&local_28,&local_18);
  }
  *(FVoronoiFractureDataflowNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f13e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FWaveScalarFieldDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FWaveScalarFieldDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2f0);
  if (pFVar1 == (FWaveScalarFieldDataflowNode *)0x0) {
    pFVar1 = (FWaveScalarFieldDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FWaveScalarFieldDataflowNode::FWaveScalarFieldDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FWaveScalarFieldDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f1460

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FWrapDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FWrapDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FWrapDataflowNode *)0x0) {
    pFVar1 = (FWrapDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FWrapDataflowNode::FWrapDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FWrapDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e8f14e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FWriteStringToFile>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowNode *this;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_38;
  FConnectionReference local_28;
  
  local_38.Name = *(FName *)(in_RDX + 3);
  local_38.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x268);
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
    this->_padding_ = (longlong)&___7FWriteStringToFile__6B_;
    local_28.Reference = &this[1]._padding_;
    this[1]._padding_ = 0;
    *(longlong *)local_28.Reference = 0;
    *(undefined8 *)&this[1].Outputs = 0;
    this[1]._padding_ = 0;
    local_28.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = this + 1;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

