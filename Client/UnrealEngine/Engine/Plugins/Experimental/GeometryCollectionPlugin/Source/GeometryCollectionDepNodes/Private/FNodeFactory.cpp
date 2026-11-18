// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 3

// <lambda_invoker_cdecl> @ 14e96b070

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FGeometryCollectionTransferVertexScalarAttributeNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FGeometryCollectionTransferVertexScalarAttributeNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x3d8);
  if (pFVar1 == (FGeometryCollectionTransferVertexScalarAttributeNode *)0x0) {
    pFVar1 = (FGeometryCollectionTransferVertexScalarAttributeNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FGeometryCollectionTransferVertexScalarAttributeNode::
             FGeometryCollectionTransferVertexScalarAttributeNode(pFVar1,&local_28,&local_18);
  }
  *(FGeometryCollectionTransferVertexScalarAttributeNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e96b0f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FSetVertexColorInCollectionFromFloatArrayDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetVertexColorInCollectionFromFloatArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x310);
  if (pFVar1 == (FSetVertexColorInCollectionFromFloatArrayDataflowNode *)0x0) {
    pFVar1 = (FSetVertexColorInCollectionFromFloatArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetVertexColorInCollectionFromFloatArrayDataflowNode::
             FSetVertexColorInCollectionFromFloatArrayDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSetVertexColorInCollectionFromFloatArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 14e96b170

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::
RegisterNodeFromType<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FSetVertexColorInCollectionFromVertexSelectionDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x340);
  if (pFVar1 == (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *)0x0) {
    pFVar1 = (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FSetVertexColorInCollectionFromVertexSelectionDataflowNode::
             FSetVertexColorInCollectionFromVertexSelectionDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FSetVertexColorInCollectionFromVertexSelectionDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

