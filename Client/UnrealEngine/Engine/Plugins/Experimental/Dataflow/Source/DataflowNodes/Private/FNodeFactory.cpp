// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 16

// <lambda_invoker_cdecl> @ 14dac5600

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBreakAttributeKeyDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FBreakAttributeKeyDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FBreakAttributeKeyDataflowNode *)0x0) {
    pFVar1 = (FBreakAttributeKeyDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FBreakAttributeKeyDataflowNode::FBreakAttributeKeyDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FBreakAttributeKeyDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac5680

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowCollectionAddScalarVertexPropertyNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowCollectionAddScalarVertexPropertyNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x348);
  if (pFVar1 == (FDataflowCollectionAddScalarVertexPropertyNode *)0x0) {
    pFVar1 = (FDataflowCollectionAddScalarVertexPropertyNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowCollectionAddScalarVertexPropertyNode::
             FDataflowCollectionAddScalarVertexPropertyNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowCollectionAddScalarVertexPropertyNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac5700

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowCollectionEditSkeletonBonesNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowCollectionEditSkeletonBonesNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x348);
  if (pFVar1 == (FDataflowCollectionEditSkeletonBonesNode *)0x0) {
    pFVar1 = (FDataflowCollectionEditSkeletonBonesNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowCollectionEditSkeletonBonesNode::FDataflowCollectionEditSkeletonBonesNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowCollectionEditSkeletonBonesNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac5780

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowCollectionEditSkinWeightsNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowCollectionEditSkinWeightsNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x400);
  if (pFVar1 == (FDataflowCollectionEditSkinWeightsNode *)0x0) {
    pFVar1 = (FDataflowCollectionEditSkinWeightsNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowCollectionEditSkinWeightsNode::FDataflowCollectionEditSkinWeightsNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowCollectionEditSkinWeightsNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac5800

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowCollectionSetSkinningSkeletalMesh>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowCollectionSetSkinningSkeletalMesh *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FDataflowCollectionSetSkinningSkeletalMesh *)0x0) {
    pFVar1 = (FDataflowCollectionSetSkinningSkeletalMesh *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowCollectionSetSkinningSkeletalMesh::FDataflowCollectionSetSkinningSkeletalMesh
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowCollectionSetSkinningSkeletalMesh **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac5880

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatOverrideDataflowNode>'::__l2::<lambda_1>::
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
    this->_padding_ = (longlong)&___7FFloatOverrideDataflowNode__6B_;
    ::FName::FName((FName *)(this + 1),"Overrides");
    ::FName::FName((FName *)&this[1]._padding_,"FloatAttr");
    local_48.Index = -1;
    local_28.Reference = &this[1]._padding_;
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

// <lambda_invoker_cdecl> @ 14dac59b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetPhysicsAssetFromSkeletalMeshDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    this->_padding_ = (longlong)&___7FGetPhysicsAssetFromSkeletalMeshDataflowNode__6B_;
    local_58.Reference = this + 1;
    this[1]._padding_ = 0;
    ((FDataflowNode *)local_58.Reference)->_padding_ = 0;
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

// <lambda_invoker_cdecl> @ 14dac5ad0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetSkeletalMeshDataflowNode>'::__l2::<lambda_1>::
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
    this->_padding_ = (longlong)&___7FGetSkeletalMeshDataflowNode__6B_;
    this[1]._padding_ = 0;
    ::FName::FName((FName *)&this[1]._padding_,"SkeletalMesh");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Reference = (void *)0x0;
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
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

// <lambda_invoker_cdecl> @ 14dac5bf0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetSkeletonDataflowNode>'::__l2::<lambda_1>::
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
    this->_padding_ = (longlong)&___7FGetSkeletonDataflowNode__6B_;
    this[1]._padding_ = 0;
    ::FName::FName((FName *)&this[1]._padding_,"Skeleton");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Reference = (void *)0x0;
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
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

// <lambda_invoker_cdecl> @ 14dac5d10

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetStaticMeshBoundingBoxDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGetStaticMeshBoundingBoxDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b8);
  if (pFVar1 == (FGetStaticMeshBoundingBoxDataflowNode *)0x0) {
    pFVar1 = (FGetStaticMeshBoundingBoxDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGetStaticMeshBoundingBoxDataflowNode::FGetStaticMeshBoundingBoxDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FGetStaticMeshBoundingBoxDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac5d90

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetStaticMeshDataflowNode>'::__l2::<lambda_1>::
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
    this->_padding_ = (longlong)&___7FGetStaticMeshDataflowNode__6B_;
    this[1]._padding_ = 0;
    ::FName::FName((FName *)&this[1]._padding_,"StaticMesh");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Reference = (void *)0x0;
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
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

// <lambda_invoker_cdecl> @ 14dac5eb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeAttributeKeyDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FMakeAttributeKeyDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FMakeAttributeKeyDataflowNode *)0x0) {
    pFVar1 = (FMakeAttributeKeyDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FMakeAttributeKeyDataflowNode::FMakeAttributeKeyDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FMakeAttributeKeyDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac5f30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSelectionSetDataflowNode>'::__l2::<lambda_1>::
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
    this->_padding_ = (longlong)&___7FSelectionSetDataflowNode__6B_;
    ::FString::FString((FString *)(this + 1),"1 2 3");
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

// <lambda_invoker_cdecl> @ 14dac6050

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletalMeshBoneDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSkeletalMeshBoneDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FSkeletalMeshBoneDataflowNode *)0x0) {
    pFVar1 = (FSkeletalMeshBoneDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSkeletalMeshBoneDataflowNode::FSkeletalMeshBoneDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FSkeletalMeshBoneDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac60d0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletalMeshReferenceTransformDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSkeletalMeshReferenceTransformDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2c0);
  if (pFVar1 == (FSkeletalMeshReferenceTransformDataflowNode *)0x0) {
    pFVar1 = (FSkeletalMeshReferenceTransformDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSkeletalMeshReferenceTransformDataflowNode::
             FSkeletalMeshReferenceTransformDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSkeletalMeshReferenceTransformDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14dac6150

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletonAssetTerminalNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

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
    this->_padding_ = (longlong)&___7FSkeletonAssetTerminalNode__6B_;
    local_28.Reference = this + 1;
    this[1]._padding_ = 0;
    ((FDataflowNode *)local_28.Reference)->_padding_ = 0;
    local_28.ContainerReference = (void *)0x0;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this[1]._padding_;
    FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

