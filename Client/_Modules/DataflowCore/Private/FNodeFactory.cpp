// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 96

// <lambda_invoker_cdecl> @ 1444009a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertBoolArrayTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertBoolArrayTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FConvertBoolArrayTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertBoolArrayTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertBoolArrayTypesDataflowNode::FConvertBoolArrayTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertBoolArrayTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400a20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertBoolTypesDataflowNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertBoolTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x250);
  if (pFVar1 == (FConvertBoolTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertBoolTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertBoolTypesDataflowNode::FConvertBoolTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertBoolTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400aa0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertIndexArrayToSelectionTypesDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertIndexArrayToSelectionTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x330);
  if (pFVar1 == (FConvertIndexArrayToSelectionTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertIndexArrayToSelectionTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertIndexArrayToSelectionTypesDataflowNode::
             FConvertIndexArrayToSelectionTypesDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FConvertIndexArrayToSelectionTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400b20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertIndexToSelectionTypesDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertIndexToSelectionTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FConvertIndexToSelectionTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertIndexToSelectionTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertIndexToSelectionTypesDataflowNode::FConvertIndexToSelectionTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertIndexToSelectionTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400ba0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertNumericArrayTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertNumericArrayTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FConvertNumericArrayTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertNumericArrayTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertNumericArrayTypesDataflowNode::FConvertNumericArrayTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertNumericArrayTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400c20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertNumericTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertNumericTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FConvertNumericTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertNumericTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertNumericTypesDataflowNode::FConvertNumericTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertNumericTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400ca0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertRotationDataflowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertRotationDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x278);
  if (pFVar1 == (FConvertRotationDataflowNode *)0x0) {
    pFVar1 = (FConvertRotationDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertRotationDataflowNode::FConvertRotationDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FConvertRotationDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400d20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertSelectionTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertSelectionTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x350);
  if (pFVar1 == (FConvertSelectionTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertSelectionTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertSelectionTypesDataflowNode::FConvertSelectionTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertSelectionTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400da0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertSelectionTypesToIndexArrayDataflowNode>'::
__l2::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertSelectionTypesToIndexArrayDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FConvertSelectionTypesToIndexArrayDataflowNode *)0x0) {
    pFVar1 = (FConvertSelectionTypesToIndexArrayDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertSelectionTypesToIndexArrayDataflowNode::
             FConvertSelectionTypesToIndexArrayDataflowNode(pFVar1,&local_28,&local_18);
  }
  *(FConvertSelectionTypesToIndexArrayDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400e20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertStringArrayTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertStringArrayTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FConvertStringArrayTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertStringArrayTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertStringArrayTypesDataflowNode::FConvertStringArrayTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertStringArrayTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400ea0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertStringConvertibleTypesDataflowNode>'::__l2
::<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertStringConvertibleTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FConvertStringConvertibleTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertStringConvertibleTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertStringConvertibleTypesDataflowNode::FConvertStringConvertibleTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertStringConvertibleTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400f20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertStringTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertStringTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FConvertStringTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertStringTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertStringTypesDataflowNode::FConvertStringTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertStringTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144400fa0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertTransformArrayTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertTransformArrayTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FConvertTransformArrayTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertTransformArrayTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertTransformArrayTypesDataflowNode::FConvertTransformArrayTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertTransformArrayTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401020

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertTransformTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertTransformTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x310);
  if (pFVar1 == (FConvertTransformTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertTransformTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertTransformTypesDataflowNode::FConvertTransformTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertTransformTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444010a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertVectorArrayTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertVectorArrayTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FConvertVectorArrayTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertVectorArrayTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertVectorArrayTypesDataflowNode::FConvertVectorArrayTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertVectorArrayTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401120

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FConvertVectorTypesDataflowNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FConvertVectorTypesDataflowNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FConvertVectorTypesDataflowNode *)0x0) {
    pFVar1 = (FConvertVectorTypesDataflowNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FConvertVectorTypesDataflowNode::FConvertVectorTypesDataflowNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FConvertVectorTypesDataflowNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444011a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowBranchNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowBranchNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x250);
  if (pFVar1 == (FDataflowBranchNode *)0x0) {
    pFVar1 = (FDataflowBranchNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowBranchNode::FDataflowBranchNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowBranchNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401220

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowForceDependencyNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowForceDependencyNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x250);
  if (pFVar1 == (FDataflowForceDependencyNode *)0x0) {
    pFVar1 = (FDataflowForceDependencyNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowForceDependencyNode::FDataflowForceDependencyNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowForceDependencyNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444012a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageCombineChannelsNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowImageCombineChannelsNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x318);
  if (pFVar1 == (FDataflowImageCombineChannelsNode *)0x0) {
    pFVar1 = (FDataflowImageCombineChannelsNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowImageCombineChannelsNode::FDataflowImageCombineChannelsNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowImageCombineChannelsNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401320

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageFromColorNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowImageFromColorNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x288);
  if (pFVar1 == (FDataflowImageFromColorNode *)0x0) {
    pFVar1 = (FDataflowImageFromColorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowImageFromColorNode::FDataflowImageFromColorNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowImageFromColorNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444013a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageSplitChannelsNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowImageSplitChannelsNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x310);
  if (pFVar1 == (FDataflowImageSplitChannelsNode *)0x0) {
    pFVar1 = (FDataflowImageSplitChannelsNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowImageSplitChannelsNode::FDataflowImageSplitChannelsNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowImageSplitChannelsNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401420

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathAbsNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathAbsNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444014e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathAddNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathTwoInputsOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowMathTwoInputsOperatorNode *)0x0) {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathAddNode__6B_;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444015a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcCosNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathArcCosNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401660

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcSinNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathArcSinNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401720

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcTan2Node>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathTwoInputsOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowMathTwoInputsOperatorNode *)0x0) {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathArcTan2Node__6B_;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444017e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathArcTanNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathArcTanNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444018a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathCeilNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathCeilNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401960

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathClampNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathClampNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x268);
  if (pFVar1 == (FDataflowMathClampNode *)0x0) {
    pFVar1 = (FDataflowMathClampNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowMathClampNode::FDataflowMathClampNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowMathClampNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444019e0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathConstantNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathConstantNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FDataflowMathConstantNode *)0x0) {
    pFVar1 = (FDataflowMathConstantNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowMathConstantNode::FDataflowMathConstantNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowMathConstantNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401a60

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathCosNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathCosNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401b20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathCubeNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathCubeNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401be0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathDegToRadNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathDegToRadNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401ca0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathDivideNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowMathTwoInputsOperatorNode *this;
  FDataflowInput *pFVar3;
  TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> TVar4;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_48;
  FGuid local_38;
  FConnectionReference local_28;
  
  local_48.Name = *(FName *)(in_RDX + 3);
  local_48.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x268);
  if (this == (FDataflowMathTwoInputsOperatorNode *)0x0) {
    this = (FDataflowMathTwoInputsOperatorNode *)0x0;
  }
  else {
    local_38._0_8_ = *in_RDX;
    local_38._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_48,&local_38);
    this->_padding_ = (longlong)&___7FDataflowMathDivideNode__6B_;
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this[1]._padding_ = 0;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = this + 1;
    pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                       ((FDataflowNode *)this,&local_28,&local_res8);
    if (pFVar3->_padding_ == 0) {
      pFVar3->_padding_ =
           (longlong)
           &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
            ::__l2::Instance;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174732029>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0xfd,"TypePolicy == nullptr");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FDataflowNode *)(*pcVar1)();
        return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)TVar4.Ptr;
      }
    }
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401de0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathExpNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathExpNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401ea0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathFloorNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathFloorNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144401f60

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathFracNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathFracNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402020

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathInverseSquareRootNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowMathOneInputOperatorNode *this;
  FDataflowInput *pFVar3;
  TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> TVar4;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_48;
  FGuid local_38;
  FConnectionReference local_28;
  
  local_48.Name = *(FName *)(in_RDX + 3);
  local_48.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_38._0_8_ = *in_RDX;
    local_38._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_48,&local_38);
    this->_padding_ = (longlong)&___7FDataflowMathInverseSquareRootNode__6B_;
    (this->A).Value = 0.0;
    (this->Result).Value = 0.0;
    this[1]._padding_ = 0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = this + 1;
    pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                       ((FDataflowNode *)this,&local_28,&local_res8);
    if (pFVar3->_padding_ == 0) {
      pFVar3->_padding_ =
           (longlong)
           &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
            ::__l2::Instance;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174732029>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0xfd,"TypePolicy == nullptr");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FDataflowNode *)(*pcVar1)();
        return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)TVar4.Ptr;
      }
    }
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402160

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathLogNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathLogNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402220

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathLogXNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowMathOneInputOperatorNode *this;
  FDataflowInput *pFVar3;
  TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> TVar4;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_48;
  FGuid local_38;
  FConnectionReference local_28;
  
  local_48.Name = *(FName *)(in_RDX + 3);
  local_48.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_38._0_8_ = *in_RDX;
    local_38._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_48,&local_38);
    this->_padding_ = (longlong)&___7FDataflowMathLogXNode__6B_;
    (this->A).Value = 0.0;
    this[1]._padding_ = 0x4024000000000000;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = this + 1;
    pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                       ((FDataflowNode *)this,&local_28,&local_res8);
    if (pFVar3->_padding_ == 0) {
      pFVar3->_padding_ =
           (longlong)
           &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
            ::__l2::Instance;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174732029>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0xfd,"TypePolicy == nullptr");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FDataflowNode *)(*pcVar1)();
        return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)TVar4.Ptr;
      }
    }
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402370

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMaximumNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathTwoInputsOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowMathTwoInputsOperatorNode *)0x0) {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathMaximumNode__6B_;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402430

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMaximumNode_v2>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathMaximumNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FDataflowMathMaximumNode_v2 *)0x0) {
    pFVar1 = (FDataflowMathMaximumNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowMathMaximumNode_v2::FDataflowMathMaximumNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FDataflowMathMaximumNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444024b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMinimumNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathTwoInputsOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowMathTwoInputsOperatorNode *)0x0) {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathMinimumNode__6B_;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402570

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMinimumNode_v2>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathMinimumNode_v2 *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FDataflowMathMinimumNode_v2 *)0x0) {
    pFVar1 = (FDataflowMathMinimumNode_v2 *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowMathMinimumNode_v2::FDataflowMathMinimumNode_v2(pFVar1,&local_28,&local_18);
  }
  *(FDataflowMathMinimumNode_v2 **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444025f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathMultiplyNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathTwoInputsOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowMathTwoInputsOperatorNode *)0x0) {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathMultiplyNode__6B_;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444026b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathNegateNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathNegateNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402770

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathOneMinusNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathOneMinusNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402830

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathPowNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathTwoInputsOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowMathTwoInputsOperatorNode *)0x0) {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathPowNode__6B_;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444028f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathRadToDegNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathRadToDegNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444029b0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathReciprocalNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowMathOneInputOperatorNode *this;
  FDataflowInput *pFVar3;
  TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> TVar4;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_48;
  FGuid local_38;
  FConnectionReference local_28;
  
  local_48.Name = *(FName *)(in_RDX + 3);
  local_48.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_38._0_8_ = *in_RDX;
    local_38._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_48,&local_38);
    this->_padding_ = (longlong)&___7FDataflowMathReciprocalNode__6B_;
    (this->A).Value = 0.0;
    (this->Result).Value = 0.0;
    this[1]._padding_ = 0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = this + 1;
    pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                       ((FDataflowNode *)this,&local_28,&local_res8);
    if (pFVar3->_padding_ == 0) {
      pFVar3->_padding_ =
           (longlong)
           &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
            ::__l2::Instance;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174732029>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0xfd,"TypePolicy == nullptr");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FDataflowNode *)(*pcVar1)();
        return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)TVar4.Ptr;
      }
    }
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402af0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathRoundNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathRoundNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402bb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSignNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathSignNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402c70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSinNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathSinNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402d30

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSquareNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathSquareNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402df0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSquareRootNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathSquareRootNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402eb0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathSubtractNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathTwoInputsOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(0x260);
  if (this != (FDataflowMathTwoInputsOperatorNode *)0x0) {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    (this->B).Value = 0.0;
    (this->Result).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathSubtractNode__6B_;
    FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathTwoInputsOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144402f70

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathTanNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathTanNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403030

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowMathTruncNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowMathOneInputOperatorNode *this;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this == (FDataflowMathOneInputOperatorNode *)0x0) {
    this = (FDataflowMathOneInputOperatorNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode((FDataflowNode *)this,&local_28,&local_18);
    (this->A).Value = 0.0;
    this->_padding_ = (longlong)&___7FDataflowMathTruncNode__6B_;
    (this->Result).Value = 0.0;
    FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(this);
  }
  *(FDataflowMathOneInputOperatorNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444030f0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowPrintNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowNode *this;
  FDataflowInput *pFVar3;
  TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> TVar4;
  undefined8 *in_RDX;
  FName local_res8;
  FNodeParameters local_48;
  FGuid local_38;
  FConnectionReference local_28;
  
  local_48.Name = *(FName *)(in_RDX + 3);
  local_48.OwningObject = (UObject *)in_RDX[4];
  this = ::operator_new(600);
  if (this != (FDataflowNode *)0x0) {
    local_38._0_8_ = *in_RDX;
    local_38._8_8_ = in_RDX[1];
    FDataflowNode::FDataflowNode(this,&local_48,&local_38);
    this->_padding_ = (longlong)&___7FDataflowPrintNode__6B_;
    ::FString::FString((FString *)(this + 1),"");
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_28.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    local_28.Reference = this + 1;
    pFVar3 = FDataflowNode::RegisterInputConnectionInternal(this,&local_28,&local_res8);
    if (pFVar3->_padding_ == 0) {
      pFVar3->_padding_ =
           (longlong)
           &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowStringConvertibleTypePolicy::GetInterface(void)'
            ::__l2::Instance;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174732029>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0xfd,"TypePolicy == nullptr");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (FDataflowNode *)(*pcVar1)();
        return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)TVar4.Ptr;
      }
    }
  }
  *(FDataflowNode **)&param_1->Guid = this;
  (**(code **)(this->_padding_ + 0xe0))(this);
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403220

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowReRouteNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowReRouteNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x250);
  if (pFVar1 == (FDataflowReRouteNode *)0x0) {
    pFVar1 = (FDataflowReRouteNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowReRouteNode::FDataflowReRouteNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowReRouteNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444032a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowSelectNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowSelectNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 == (FDataflowSelectNode *)0x0) {
    pFVar1 = (FDataflowSelectNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowSelectNode::FDataflowSelectNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowSelectNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403320

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorAddNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorAddNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FDataflowVectorAddNode *)0x0) {
    pFVar1 = (FDataflowVectorAddNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorAddNode::FDataflowVectorAddNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorAddNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444033a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorBreakNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorBreakNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FDataflowVectorBreakNode *)0x0) {
    pFVar1 = (FDataflowVectorBreakNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorBreakNode::FDataflowVectorBreakNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorBreakNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403420

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorCrossProductNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorCrossProductNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FDataflowVectorCrossProductNode *)0x0) {
    pFVar1 = (FDataflowVectorCrossProductNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorCrossProductNode::FDataflowVectorCrossProductNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorCrossProductNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444034a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorDistanceNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorDistanceNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2a0);
  if (pFVar1 == (FDataflowVectorDistanceNode *)0x0) {
    pFVar1 = (FDataflowVectorDistanceNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorDistanceNode::FDataflowVectorDistanceNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorDistanceNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403520

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorDivideNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorDivideNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2d0);
  if (pFVar1 == (FDataflowVectorDivideNode *)0x0) {
    pFVar1 = (FDataflowVectorDivideNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorDivideNode::FDataflowVectorDivideNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorDivideNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444035a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorDotProductNode>'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorDotProductNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2a0);
  if (pFVar1 == (FDataflowVectorDotProductNode *)0x0) {
    pFVar1 = (FDataflowVectorDotProductNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorDotProductNode::FDataflowVectorDotProductNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorDotProductNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403620

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorLengthNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorLengthNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FDataflowVectorLengthNode *)0x0) {
    pFVar1 = (FDataflowVectorLengthNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorLengthNode::FDataflowVectorLengthNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorLengthNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444036a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMakeVec2Node>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorMakeVec2Node *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FDataflowVectorMakeVec2Node *)0x0) {
    pFVar1 = (FDataflowVectorMakeVec2Node *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorMakeVec2Node::FDataflowVectorMakeVec2Node(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorMakeVec2Node **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403720

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMakeVec3Node>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorMakeVec3Node *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FDataflowVectorMakeVec3Node *)0x0) {
    pFVar1 = (FDataflowVectorMakeVec3Node *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorMakeVec3Node::FDataflowVectorMakeVec3Node(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorMakeVec3Node **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444037a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMakeVec4Node>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorMakeVec4Node *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FDataflowVectorMakeVec4Node *)0x0) {
    pFVar1 = (FDataflowVectorMakeVec4Node *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorMakeVec4Node::FDataflowVectorMakeVec4Node(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorMakeVec4Node **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403820

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorMultiplyNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorMultiplyNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FDataflowVectorMultiplyNode *)0x0) {
    pFVar1 = (FDataflowVectorMultiplyNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorMultiplyNode::FDataflowVectorMultiplyNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorMultiplyNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444038a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorNormalize>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorNormalize *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x290);
  if (pFVar1 == (FDataflowVectorNormalize *)0x0) {
    pFVar1 = (FDataflowVectorNormalize *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorNormalize::FDataflowVectorNormalize(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorNormalize **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403920

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorScaleNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorScaleNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2a0);
  if (pFVar1 == (FDataflowVectorScaleNode *)0x0) {
    pFVar1 = (FDataflowVectorScaleNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorScaleNode::FDataflowVectorScaleNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorScaleNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 1444039a0

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorSquaredLengthNode>'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorSquaredLengthNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x280);
  if (pFVar1 == (FDataflowVectorSquaredLengthNode *)0x0) {
    pFVar1 = (FDataflowVectorSquaredLengthNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorSquaredLengthNode::FDataflowVectorSquaredLengthNode
                       (pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorSquaredLengthNode **)&param_1->Guid = pFVar1;
  (**(code **)(*(longlong *)pFVar1 + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// <lambda_invoker_cdecl> @ 144403a20

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
`UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowVectorSubtractNode>'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNewNodeParameters *param_1)

{
  FDataflowVectorSubtractNode *pFVar1;
  undefined8 *in_RDX;
  FNodeParameters local_28;
  FGuid local_18;
  
  local_28.Name = *(FName *)(in_RDX + 3);
  local_28.OwningObject = (UObject *)in_RDX[4];
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 == (FDataflowVectorSubtractNode *)0x0) {
    pFVar1 = (FDataflowVectorSubtractNode *)0x0;
  }
  else {
    local_18._0_8_ = *in_RDX;
    local_18._8_8_ = in_RDX[1];
    pFVar1 = FDataflowVectorSubtractNode::FDataflowVectorSubtractNode(pFVar1,&local_28,&local_18);
  }
  *(FDataflowVectorSubtractNode **)&param_1->Guid = pFVar1;
  (**(code **)(pFVar1->_padding_ + 0xe0))();
  (**(code **)(**(longlong **)&param_1->Guid + 0xd8))();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)(FDataflowNode *)param_1;
}

// FNodeFactory @ 144431c70

FNodeFactory * __thiscall UE::Dataflow::FNodeFactory::FNodeFactory(FNodeFactory *this)

{
  *(undefined8 *)&this->ClassMap = 0;
  *(undefined8 *)&(this->ClassMap).field_0x8 = 0;
  *(undefined8 *)&(this->ClassMap).field_0x20 = 0;
  *(undefined4 *)&(this->ClassMap).field_0x28 = 0;
  *(undefined4 *)&(this->ClassMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassMap).field_0x34 = 0;
  *(undefined4 *)&(this->ClassMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassMap).field_0x40 = 0;
  *(undefined4 *)&(this->ClassMap).field_0x48 = 0;
  *(undefined8 *)&this->ParametersMap = 0;
  *(undefined8 *)&(this->ParametersMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParametersMap).field_0x20 = 0;
  *(undefined4 *)&(this->ParametersMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParametersMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParametersMap).field_0x34 = 0;
  *(undefined4 *)&(this->ParametersMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ParametersMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParametersMap).field_0x48 = 0;
  *(undefined8 *)&this->VersionMap = 0;
  *(undefined8 *)&(this->VersionMap).field_0x8 = 0;
  *(undefined8 *)&(this->VersionMap).field_0x20 = 0;
  *(undefined4 *)&(this->VersionMap).field_0x28 = 0;
  *(undefined4 *)&(this->VersionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->VersionMap).field_0x34 = 0;
  *(undefined4 *)&(this->VersionMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VersionMap).field_0x40 = 0;
  *(undefined4 *)&(this->VersionMap).field_0x48 = 0;
  *(undefined8 *)&this->GetterNodesByAssetType = 0;
  *(undefined8 *)&(this->GetterNodesByAssetType).field_0x8 = 0;
  *(undefined8 *)&(this->GetterNodesByAssetType).field_0x20 = 0;
  *(undefined4 *)&(this->GetterNodesByAssetType).field_0x28 = 0;
  *(undefined4 *)&(this->GetterNodesByAssetType).field_0x2c = 0x80;
  *(undefined4 *)&(this->GetterNodesByAssetType).field_0x34 = 0;
  *(undefined4 *)&(this->GetterNodesByAssetType).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GetterNodesByAssetType).field_0x40 = 0;
  *(undefined4 *)&(this->GetterNodesByAssetType).field_0x48 = 0;
  return this;
}

// ~FNodeFactory @ 144433cb0

void __thiscall UE::Dataflow::FNodeFactory::~FNodeFactory(FNodeFactory *this)

{
  void *pvVar1;
  FNodeFactory *pFVar2;
  
  pFVar2 = Instance;
  if (Instance != (FNodeFactory *)0x0) {
    ~FNodeFactory(Instance);
    ::operator_delete(pFVar2,0x140);
  }
  *(undefined4 *)&(this->GetterNodesByAssetType).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GetterNodesByAssetType).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GetterNodesByAssetType);
  *(undefined4 *)&(this->VersionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VersionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VersionMap);
  *(undefined4 *)&(this->ParametersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ParametersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Dataflow::FFactoryParameters>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParametersMap);
  *(undefined4 *)&(this->ClassMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClassMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetDisplayNameNoVersion @ 14444b4b0

FName __cdecl UE::Dataflow::FNodeFactory::GetDisplayNameNoVersion(FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *in_RDX;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  *param_1 = *in_RDX;
  ::FName::ToString(in_RDX,&local_28);
  ::FString::FString(&local_18,"_v");
  iVar1 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  iVar1 = ::FString::Find(&local_28,(wchar_t *)FVar3.Data,iVar1,IgnoreCase,FromEnd,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar1 != -1) {
    ::FString::Mid(&local_28,&local_18,0,iVar1);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    *param_1 = *pFVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetGetterNodeFromAssetClass @ 14444b620

FName __thiscall
UE::Dataflow::FNodeFactory::GetGetterNodeFromAssetClass(FNodeFactory *this,UClass *param_1)

{
  FName *pFVar1;
  FName FVar2;
  longlong in_R8;
  
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->GetterNodesByAssetType,*(FName *)(in_R8 + 0x18));
  if (pFVar1 == (FName *)0x0) {
    if (*(longlong *)(in_R8 + 0x40) != 0) {
      GetGetterNodeFromAssetClass(this,param_1);
      return (FName)param_1;
    }
    FVar2.ComparisonIndex.Value = 0;
    FVar2.Number = 0;
  }
  else {
    FVar2 = *pFVar1;
  }
  param_1->_padding_ = (longlong)FVar2;
  return (FName)param_1;
}

// GetInstance @ 14444b820

FNodeFactory * __cdecl UE::Dataflow::FNodeFactory::GetInstance(void)

{
  FNodeFactory *pFVar1;
  
  if (Instance == (FNodeFactory *)0x0) {
    pFVar1 = ::operator_new(0x140);
    Instance = (FNodeFactory *)0x0;
    if (pFVar1 != (FNodeFactory *)0x0) {
      *(undefined8 *)&pFVar1->ClassMap = 0;
      *(undefined8 *)&(pFVar1->ClassMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ClassMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ClassMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ClassMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ClassMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ClassMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ClassMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ClassMap).field_0x48 = 0;
      *(undefined8 *)&pFVar1->ParametersMap = 0;
      *(undefined8 *)&(pFVar1->ParametersMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ParametersMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ParametersMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ParametersMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ParametersMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ParametersMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ParametersMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ParametersMap).field_0x48 = 0;
      *(undefined8 *)&pFVar1->VersionMap = 0;
      *(undefined8 *)&(pFVar1->VersionMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->VersionMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->VersionMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->VersionMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->VersionMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->VersionMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->VersionMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->VersionMap).field_0x48 = 0;
      *(undefined8 *)&pFVar1->GetterNodesByAssetType = 0;
      *(undefined8 *)&(pFVar1->GetterNodesByAssetType).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->GetterNodesByAssetType).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->GetterNodesByAssetType).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->GetterNodesByAssetType).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->GetterNodesByAssetType).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->GetterNodesByAssetType).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->GetterNodesByAssetType).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->GetterNodesByAssetType).field_0x48 = 0;
      Instance = pFVar1;
    }
    RegisterDefaultNodes(Instance);
  }
  return Instance;
}

// GetNumVersionFromVersion @ 14444c790

int __cdecl UE::Dataflow::FNodeFactory::GetNumVersionFromVersion(FName *param_1)

{
  int iVar1;
  ForAnyElementType _Str;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  ::FString::RightChop(&local_18,&local_28,1);
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    _Str.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = _wtoi((wchar_t *)_Str.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1;
}

// GetParameters @ 14444c910

FFactoryParameters * __thiscall
UE::Dataflow::FNodeFactory::GetParameters(FNodeFactory *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,UE::Dataflow::FFactoryParameters> *pTVar5;
  FFactoryParameters *pFVar6;
  undefined1 *puVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&EmptyFactoryParameters.NodeVersion,L"v1");
      EmptyFactoryParameters.DefaultNodeObject.Object = (FDataflowNode *)0x0;
      EmptyFactoryParameters.DefaultNodeObject.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      atexit(`UE::Dataflow::FNodeFactory::GetParameters'::__l2::
             _dynamic_atexit_destructor_for__EmptyFactoryParameters__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ParametersMap).field_0x8 != *(int *)&(this->ParametersMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ParametersMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ParametersMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ParametersMap).field_0x48 - 1U &
                              param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)((longlong)iVar4 * 0x68 + *(longlong *)&this->ParametersMap) == param_1) {
          pTVar5 = TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                           *)&this->ParametersMap,param_1);
          if (pTVar5 == (TTuple<FName,UE::Dataflow::FFactoryParameters> *)0x0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar6 = (FFactoryParameters *)(*pcVar1)();
              return pFVar6;
            }
          }
          return (FFactoryParameters *)&pTVar5->field_0x8;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x68 + 0x60 + *(longlong *)&this->ParametersMap);
      } while (iVar4 != -1);
    }
  }
  return &EmptyFactoryParameters;
}

// GetToolTipFromStruct @ 14444e310

FString * __cdecl
UE::Dataflow::FNodeFactory::GetToolTipFromStruct
          (FString *__return_storage_ptr__,UScriptStruct *param_1,FName *param_2,FName *param_3)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTypeNameNoVersion @ 14444e560

FName __cdecl UE::Dataflow::FNodeFactory::GetTypeNameNoVersion(FName *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *in_RDX;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  *param_1 = *in_RDX;
  ::FName::ToString(in_RDX,&local_28);
  ::FString::FString(&local_18,"_v");
  iVar1 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  iVar1 = ::FString::Find(&local_28,(wchar_t *)FVar3.Data,iVar1,IgnoreCase,FromEnd,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar1 != -1) {
    ::FString::Mid(&local_28,&local_18,0,iVar1);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    *param_1 = *pFVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetVersionFromTypeName @ 14444f1b0

FName __cdecl UE::Dataflow::FNodeFactory::GetVersionFromTypeName(FName *param_1)

{
  int iVar1;
  FName *in_RDX;
  ForAnyElementType FVar2;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(in_RDX,&local_28);
  ::FString::FString(&local_18,"_v");
  iVar1 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  iVar1 = ::FString::Find(&local_28,(wchar_t *)FVar2.Data,iVar1,IgnoreCase,FromEnd,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (iVar1 == -1) {
    ::FName::FName(param_1,L"v1");
  }
  else {
    ::FString::RightChop(&local_28,&local_18,iVar1 + 1);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName(param_1,(wchar_t *)FVar2.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// IsNodeDeprecated @ 144451610

bool __cdecl UE::Dataflow::FNodeFactory::IsNodeDeprecated(UStruct *param_1)

{
  return false;
}

// IsNodeDeprecated @ 144451620

bool __cdecl UE::Dataflow::FNodeFactory::IsNodeDeprecated(FName param_1)

{
  bool bVar1;
  FNodeFactory *this;
  FFactoryParameters *this_00;
  
  this = GetInstance();
  if (this != (FNodeFactory *)0x0) {
    this_00 = GetParameters(this,param_1);
    bVar1 = FFactoryParameters::IsValid(this_00);
    if (bVar1) {
      return this_00->bIsDeprecated != false;
    }
  }
  return false;
}

// IsNodeExperimental @ 144451670

bool __cdecl UE::Dataflow::FNodeFactory::IsNodeExperimental(UStruct *param_1)

{
  return false;
}

// IsNodeExperimental @ 144451680

bool __cdecl UE::Dataflow::FNodeFactory::IsNodeExperimental(FName param_1)

{
  bool bVar1;
  FNodeFactory *this;
  FFactoryParameters *this_00;
  
  this = GetInstance();
  if (this != (FNodeFactory *)0x0) {
    this_00 = GetParameters(this,param_1);
    bVar1 = FFactoryParameters::IsValid(this_00);
    if (bVar1) {
      return this_00->bIsExperimental != false;
    }
  }
  return false;
}

// NewNodeFromRegisteredType @ 1444521c0

TSharedPtr<FDataflowNode,1> * __thiscall
UE::Dataflow::FNodeFactory::NewNodeFromRegisteredType
          (FNodeFactory *this,TSharedPtr<FDataflowNode,1> *__return_storage_ptr__,FGraph *param_1,
          FNewNodeParameters *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
  *pTVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  TTuple<FName,UE::Dataflow::FFactoryParameters> *pTVar9;
  TSharedPtr<FDataflowNode,1> *pTVar10;
  FName *this_00;
  longlong *plVar11;
  undefined1 *puVar12;
  TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> local_res8;
  FName local_res20;
  undefined1 local_98 [8];
  FText local_90;
  FString local_80;
  FText local_70;
  void *local_60 [2];
  FString local_50;
  FString local_40;
  
  FVar1 = param_2->Type;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->ClassMap).field_0x8 != *(int *)&(this->ClassMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ClassMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ClassMap).field_0x38;
    }
    iVar5 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->ClassMap).field_0x48 - 1U & FVar1.Number + uVar4) *
                    4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->ClassMap + (longlong)iVar5 * 0x50) == FVar1) {
          pTVar6 = TMapBase<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,0>_>
                   ::FindChecked((TMapBase<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,0>_>
                                  *)this,param_2->Type);
          Core::Private::Function::CheckCallable(*(void **)pTVar6);
          pcVar2 = *(code **)pTVar6;
          plVar11 = (longlong *)&pTVar6->field_0x10;
          if (*(longlong **)&pTVar6->field_0x28 != (longlong *)0x0) {
            plVar11 = *(longlong **)&pTVar6->field_0x28;
          }
          uVar7 = (**(code **)(*plVar11 + 8))();
          (*pcVar2)(&local_res8,uVar7,param_2);
          if ((local_res8.Ptr)->bHasValidConnections != false) {
            puVar8 = (undefined8 *)
                     (**(code **)((local_res8.Ptr)->_padding_ + 0x28))(local_res8.Ptr,local_60);
            pTVar9 = TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                     ::Find((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                             *)&this->ParametersMap,param_2->Type);
            if ((pTVar9 == (TTuple<FName,UE::Dataflow::FFactoryParameters> *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar10 = (TSharedPtr<FDataflowNode,1> *)(*pcVar2)();
              return pTVar10;
            }
            puVar12 = &pTVar9->field_0x30;
            if ((undefined8 *)puVar12 != puVar8) {
              if (*(void **)puVar12 != (void *)0x0) {
                FMemory::Free(*(void **)puVar12);
              }
              *(undefined8 *)puVar12 = *puVar8;
              *puVar8 = 0;
              *(undefined4 *)&pTVar9->field_0x38 = *(undefined4 *)(puVar8 + 1);
              *(undefined4 *)&pTVar9->field_0x3c = *(undefined4 *)((longlong)puVar8 + 0xc);
              puVar8[1] = 0;
            }
            if (local_60[0] != (void *)0x0) {
              FMemory::Free(local_60[0]);
            }
            FGraph::AddNode<FDataflowNode>(param_1,__return_storage_ptr__,&local_res8);
            if (local_res8.Ptr == (FDataflowNode *)0x0) {
              return __return_storage_ptr__;
            }
            (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
            return __return_storage_ptr__;
          }
          FText::FromString(&local_70,"Node Factory");
          this_00 = (FName *)(**(code **)((local_res8.Ptr)->_padding_ + 0x10))
                                       (local_res8.Ptr,local_98);
          ::FName::ToString(this_00,&local_40);
          local_res20 = (local_res8.Ptr)->Name;
          ::FName::ToString(&local_res20,&local_50);
          ::FString::PrintfImpl
                    (&local_80,L"Cannot create Node %s. Node Type %s is not well defined.");
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
          FText::FromString(&local_90,&local_80);
          FMessageDialog::Debugf(&local_90,&local_70);
          if (local_90.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_70.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
          }
          if (local_res8.Ptr != (FDataflowNode *)0x0) {
            (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)&this->ClassMap + 0x40 + (longlong)iVar5 * 0x50);
      } while (iVar5 != -1);
    }
  }
  __return_storage_ptr__->Object = (FDataflowNode *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// RegisterDefaultNodes @ 144457f10

void __thiscall UE::Dataflow::FNodeFactory::RegisterDefaultNodes(FNodeFactory *this)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res10 [3];
  FString local_18;
  
  RegisterAnyTypes();
  RegisterDataflowCoreColors();
  RegisterCoreNodes();
  RegisterDataflowMathNodes();
  RegisterDataflowVectorNodes();
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FDataflowImageFromColorNode");
  FVar1 = local_res10[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageFromColorNode,(UObject *)pUVar2,
                         L"DataflowImageFromColorNode");
  }
  RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageFromColorNode.OuterSingleton,FVar1,
             "ImageFromColor","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageFromColorNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FDataflowImageSplitChannelsNode");
  FVar1 = local_res10[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageSplitChannelsNode,(UObject *)pUVar2
                         ,L"DataflowImageSplitChannelsNode");
  }
  RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageSplitChannelsNode.OuterSingleton,FVar1,
             "ImageSplitChannels","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageSplitChannelsNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FDataflowImageCombineChannelsNode");
  if (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageCombineChannelsNode,
                         (UObject *)pUVar2,L"DataflowImageCombineChannelsNode");
  }
  RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageCombineChannelsNode.OuterSingleton,
             local_res10[0],"ImageCombineChannels","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageCombineChannelsNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  RegisterDataflowConvertNodes();
  return;
}

// RegisterGetterNodeForAssetType @ 144458100

void __thiscall
UE::Dataflow::FNodeFactory::RegisterGetterNodeForAssetType
          (FNodeFactory *this,FName param_1,FName param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  TPairInitializer<FName_&,FName_&> local_res8;
  FName local_res18;
  FName **local_18;
  FName *local_10;
  
  local_res8.Value = (FName *)param_1;
  local_res18 = param_2;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GetterNodesByAssetType).field_0x8 !=
      *(int *)&(this->GetterNodesByAssetType).field_0x34) {
    puVar6 = *(undefined1 **)&(this->GetterNodesByAssetType).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GetterNodesByAssetType).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GetterNodesByAssetType).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->GetterNodesByAssetType).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar5 * 0x18) == param_1) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5052840028003106655>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNodeFactory.cpp"
                             ,0xa1,"!GetterNodesByAssetType.Contains(AssetTypeName)");
          if (!bVar3) {
            return;
          }
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_18 = &local_res8.Value;
  local_10 = &local_res18;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&,FName_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->GetterNodesByAssetType,&local_res8,(bool *)&local_18);
  return;
}

// RegisterNode @ 144458fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::FNodeFactory::RegisterNode
          (FNodeFactory *this,FFactoryParameters *param_1,
          TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
          *param_2)

{
  TMap<FName,UE::Dataflow::FFactoryParameters,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>_>
  *this_00;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  TTuple<FName,UE::Dataflow::FFactoryParameters> *pTVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  ForAnyElementType FVar12;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  uint uVar13;
  FName local_218;
  int local_210 [2];
  FName local_208;
  FName local_200;
  FName local_1f8;
  FString local_1f0;
  FString local_1e0;
  undefined1 local_1d0;
  undefined1 local_1cf;
  FName local_1cc;
  FDataflowNode *local_1c0;
  TReferenceControllerBase<1> *local_1b8;
  FString local_1a8;
  undefined1 local_198 [8];
  TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
  *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FName *local_138;
  TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
  *local_130;
  FName *local_128;
  FName *local_120;
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_208 = param_1->TypeName;
  local_200 = param_1->DisplayName;
  local_1f8 = param_1->Category;
  ::FString::FString(&local_1f0,&param_1->Tags);
  ::FString::FString(&local_1e0,&param_1->ToolTip);
  local_1d0 = param_1->bIsDeprecated;
  local_1cf = param_1->bIsExperimental;
  local_1cc = param_1->NodeVersion;
  local_1c0 = (param_1->DefaultNodeObject).Object;
  local_1b8 = (param_1->DefaultNodeObject).SharedReferenceCount.ReferenceController;
  if (local_1b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1b8->SharedReferenceCount = (atomic<int>)((int)local_1b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = ::FName::ToString(&param_1->NodeVersion,&local_f8);
  ::FString::FString(&local_148,"_");
  pFVar7 = ::FName::ToString(&param_1->DisplayName,&local_108);
  ::FString::ConcatFF(&local_158,pFVar7,&local_148);
  ::FString::ConcatFF(&local_188,&local_158,pFVar6);
  iVar5 = local_188.Data.ArrayNum + -1;
  if (local_188.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  pFVar8 = ::FName::FName(&local_118,iVar5,(wchar_t *)local_188.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_200 = *pFVar8;
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  FVar2 = local_208;
  uVar4 = ::GetTypeHash(local_208.ComparisonIndex.Value);
  if (*(int *)&(this->ClassMap).field_0x8 != *(int *)&(this->ClassMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ClassMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ClassMap).field_0x38;
    }
    iVar5 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->ClassMap).field_0x48 - 1U & FVar2.Number + uVar4) *
                    4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->ClassMap + (longlong)iVar5 * 0x50) == FVar2) {
          this_00 = &this->ParametersMap;
          if (iVar5 != -1) {
            pTVar9 = TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                     ::Find((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                             *)this_00,local_208);
            if ((pTVar9 == (TTuple<FName,UE::Dataflow::FFactoryParameters> *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (((*(uint *)&pTVar9->field_0x10 == local_200.ComparisonIndex.Value) &&
                (*(uint *)&pTVar9->field_0x14 == local_200.Number)) &&
               (2 < (byte)LogDataflowFactory._0_1_)) {
              ::FName::ToString(&local_208,&local_b8);
              ::FName::ToString(&local_200,&local_c8);
              pTVar9 = TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                               *)this_00,local_208);
              if ((pTVar9 == (TTuple<FName,UE::Dataflow::FFactoryParameters> *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x288,L""), bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              ::FName::ToString((FName *)&pTVar9->field_0x10,&local_d8);
              ::FName::ToString(&local_208,&local_e8);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataflowFactory);
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
            }
            pTVar9 = TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                     ::Find((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                             *)this_00,local_208);
            if ((pTVar9 == (TTuple<FName,UE::Dataflow::FFactoryParameters> *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (((*(uint *)&pTVar9->field_0x18 == local_1f8.ComparisonIndex.Value) &&
                (*(uint *)&pTVar9->field_0x1c == local_1f8.Number)) &&
               (2 < (byte)LogDataflowFactory._0_1_)) {
              ::FName::ToString(&local_208,&local_78);
              ::FName::ToString(&local_200,&local_88);
              pTVar9 = TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                               *)this_00,local_208);
              if ((pTVar9 == (TTuple<FName,UE::Dataflow::FFactoryParameters> *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x288,L""), bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              ::FName::ToString((FName *)&pTVar9->field_0x10,&local_98);
              ::FName::ToString(&local_208,&local_a8);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataflowFactory);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
            }
            FVar2 = local_208;
            uVar4 = ::GetTypeHash(local_208.ComparisonIndex.Value);
            if (*(int *)&(this->ClassMap).field_0x8 == *(int *)&(this->ClassMap).field_0x34)
            goto LAB_14445967c;
            puVar11 = *(undefined1 **)&(this->ClassMap).field_0x40;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = &(this->ClassMap).field_0x38;
            }
            iVar5 = *(int *)(puVar11 +
                            (ulonglong)
                            (*(int *)&(this->ClassMap).field_0x48 - 1U & FVar2.Number + uVar4) * 4);
            if (iVar5 == -1) goto LAB_14445967c;
            goto LAB_144459660;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)&this->ClassMap + 0x40 + (longlong)iVar5 * 0x50);
      } while (iVar5 != -1);
    }
  }
  local_138 = &local_208;
  local_130 = param_2;
  TSet<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_const_&>_>
            ((TSet<TTuple<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>_const_&>
                      *)local_198,(bool *)&local_138);
  local_128 = &local_208;
  local_120 = &local_208;
  TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UE::Dataflow::FFactoryParameters_const_&>_>
            ((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
              *)&this->ParametersMap,
             (TPairInitializer<FName_const_&,UE::Dataflow::FFactoryParameters_const_&> *)
             (local_198 + 4),(bool *)&local_128);
  local_218 = local_208;
  ::FName::ToString(&local_208,&local_1a8);
  ::FString::FString(&local_178,"_v");
  iVar5 = local_178.Data.ArrayNum + -1;
  FVar12.Data = local_178.Data.AllocatorInstance.Data;
  if (local_178.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar12.Data = (FScriptContainerElement *)L"";
  }
  iVar5 = ::FString::Find(&local_1a8,(wchar_t *)FVar12.Data,iVar5,IgnoreCase,FromEnd,-1);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (iVar5 != -1) {
    ::FString::Mid(&local_1a8,&local_168,0,iVar5);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar12.Data = local_168.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_110,(wchar_t *)FVar12.Data);
    local_218 = *pFVar8;
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  FVar2 = local_218;
  this_01 = &this->VersionMap;
  uVar4 = ::GetTypeHash(local_218.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar2.Number;
  if (*(int *)&(this->VersionMap).field_0x8 != *(int *)&(this->VersionMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->VersionMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->VersionMap).field_0x38;
    }
    uVar13 = *(uint *)(puVar11 +
                      (ulonglong)(*(int *)&(this->VersionMap).field_0x48 - 1U & uVar4) * 4);
    if (uVar13 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar13 * 0x20 + *(longlong *)&this_01->field_0x0);
        if (*pFVar8 == local_218) {
          if (pFVar8 != (FName *)0x0) goto LAB_14445979d;
          break;
        }
        uVar13 = pFVar8[3].ComparisonIndex.Value;
      } while (uVar13 != 0xffffffff);
    }
  }
  local_190 = (TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
               *)&local_218;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_01,(uint)local_210,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar4,
             (bool *)&local_190);
  pFVar8 = (FName *)((longlong)local_210[0] * 0x20 + *(longlong *)&this_01->field_0x0);
LAB_14445979d:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),&local_208);
LAB_1444597ab:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
  while (iVar5 = *(int *)(*(longlong *)&this->ClassMap + 0x40 + (longlong)iVar5 * 0x50), iVar5 != -1
        ) {
LAB_144459660:
    if (*(FName *)(*(longlong *)&this->ClassMap + (longlong)iVar5 * 0x50) == FVar2)
    goto LAB_1444597ab;
  }
LAB_14445967c:
  if (2 < (byte)LogDataflowFactory._0_1_) {
    pTVar9 = TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Dataflow::FFactoryParameters>,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FFactoryParameters,0>,FDefaultSetAllocator>
                     *)this_00,local_208);
    if ((pTVar9 == (TTuple<FName,UE::Dataflow::FFactoryParameters> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::FName::ToString((FName *)&pTVar9->field_0x10,&local_48);
    ::FName::ToString(&local_200,&local_58);
    ::FName::ToString(&local_208,&local_68);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataflowFactory);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_1444597ab;
}

// RegisterNodeStaticInternal @ 1444599d0

void __cdecl
UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
          (UScriptStruct *param_1,FName param_2,char *param_3,char *param_4,FString *param_5,
          _func___cdecl_TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_FNewNodeParameters_ptr
          *param_6)

{
  FDataflowNode *pFVar1;
  FScriptContainerElement *_Src;
  _func___cdecl_TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_FNewNodeParameters_ptr
  *p_Var2;
  int iVar3;
  TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> TVar4;
  FNodeFactory *this;
  longlong lVar5;
  ForAnyElementType FVar6;
  FName local_res10;
  FString local_118;
  FString local_108;
  undefined8 *local_f8 [2];
  FFactoryParameters local_e8;
  FGuid local_88;
  undefined8 local_78;
  FName local_70;
  UPackage *local_68;
  code *local_58 [2];
  undefined **local_48;
  _func___cdecl_TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_FNewNodeParameters_ptr
  *local_40;
  undefined8 local_30;
  
  local_res10 = param_2;
  FGuid::NewGuid(&local_88);
  local_70 = local_res10;
  local_78 = 0;
  local_68 = GetTransientPackage();
  p_Var2 = param_6;
  TVar4 = (*param_6)((FNewNodeParameters *)local_f8);
  pFVar1 = (FDataflowNode *)(TVar4.Ptr)->_padding_;
  (TVar4.Ptr)->_padding_ = 0;
  if (local_f8[0] != (undefined8 *)0x0) {
    (**(code **)*local_f8[0])(local_f8[0],1);
  }
  local_e8.TypeName = local_res10;
  ::FName::FName(&local_e8.DisplayName,param_3);
  ::FName::FName(&local_e8.Category,param_4);
  local_e8.Tags.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Tags.Data.ArrayNum = (param_5->Data).ArrayNum;
  lVar5 = (longlong)local_e8.Tags.Data.ArrayNum;
  _Src = (param_5->Data).AllocatorInstance.Data;
  if (local_e8.Tags.Data.ArrayNum == 0) {
    local_e8.Tags.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e8.Tags.Data.ArrayNum,0,(ForAnyElementType *)&local_e8.Tags,
               local_e8.Tags.Data.ArrayNum,&local_e8.Tags.Data.ArrayMax);
    memcpy(local_e8.Tags.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  ::FName::FName((FName *)&param_6,param_3);
  local_e8.ToolTip.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ToolTip.Data.ArrayNum = 0;
  local_e8.ToolTip.Data.ArrayMax = 0;
  local_e8.bIsDeprecated = false;
  local_e8.bIsExperimental = false;
  ::FName::ToString(&local_res10,&local_108);
  ::FString::FString(&local_118,"_v");
  iVar3 = local_118.Data.ArrayNum + -1;
  FVar6.Data = local_118.Data.AllocatorInstance.Data;
  if (local_118.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  iVar3 = ::FString::Find(&local_108,(wchar_t *)FVar6.Data,iVar3,IgnoreCase,FromEnd,-1);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (iVar3 == -1) {
    ::FName::FName(&local_e8.NodeVersion,L"v1");
  }
  else {
    ::FString::RightChop(&local_108,&local_118,iVar3 + 1);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar6.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_e8.NodeVersion,(wchar_t *)FVar6.Data);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  TSharedPtr<FDataflowNode,1>::TSharedPtr<FDataflowNode,1><FDataflowNode>
            (&local_e8.DefaultNodeObject,pFVar1);
  this = GetInstance();
  local_58[0] = (code *)0x0;
  local_30 = 0;
  if (p_Var2 != (_func___cdecl_TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_FNewNodeParameters_ptr
                 *)0x0) {
    local_40 = p_Var2;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_UFDataflowNode__U__TDefaultDelete_UFDataflowNode______AEBUFNewNodeParameters_Dataflow_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>,UE::Dataflow::FNewNodeParameters_const_&>
                  ::Call;
  }
  RegisterNode(this,&local_e8,
               (TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
                *)local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.DefaultNodeObject.SharedReferenceCount.ReferenceController);
  if (local_e8.ToolTip.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.ToolTip.Data.AllocatorInstance.Data);
  }
  if (local_e8.Tags.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Tags.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisteredParameters @ 14445ab80

TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FNodeFactory::RegisteredParameters
          (FNodeFactory *this,
          TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  void *_Src;
  FFactoryParameters *pFVar3;
  code *pcVar4;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> *pTVar8;
  FFactoryParameters *pFVar9;
  FName FVar10;
  FString *pFVar11;
  FName *pFVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined8 *puVar15;
  int iVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_188;
  undefined8 local_180;
  uint local_178;
  undefined8 local_170;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  FString local_158;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  FString local_110;
  FString local_100;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_148 = &this->VersionMap;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar7 = *(int *)&(this->VersionMap).field_0x28;
  iStack_140 = 0;
  uStack_13c = 1;
  local_128 = 0;
  iStack_12c = iStack_140;
  if (iVar7 != 0) {
    puVar21 = *(uint **)&(this->VersionMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)&(this->VersionMap).field_0x10;
    }
    uVar19 = *puVar21;
    local_128 = 0;
    iStack_140 = 0;
    while (uVar19 == 0) {
      lVar13 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      iStack_12c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) goto LAB_14445ac45;
      uVar19 = puVar21[lVar13 + 1];
    }
    uStack_13c = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_13c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_118 = (int)lVar13;
    iStack_12c = local_128 + -1 + local_118;
    if (iVar7 < iStack_12c) {
      iStack_12c = iVar7;
    }
  }
LAB_14445ac45:
  local_138 = &(this->VersionMap).field_0x10;
  uVar19 = *(uint *)&(this->VersionMap).field_0x28;
  iStack_120 = *(int *)&(this->VersionMap).field_0x8 - *(int *)&(this->VersionMap).field_0x34;
  uVar18 = uVar19 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uStack_13c,iStack_140);
  uStack_130 = 0xffffffff;
  TStack_e8.CurrentBitIndex = iStack_12c;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_e8._28_4_ = iStack_12c;
  TStack_e8.BaseBitIndex = local_128;
  uStack_c8 = CONCAT44(uStack_11c,iStack_120);
  local_178 = uVar19;
  iStack_124 = iStack_12c;
  local_f0 = local_148;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_138;
  if ((((int)uVar19 < 0) || (iVar7 < (int)uVar19)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar2 = *(uint *)&(this->VersionMap).field_0x28;
  if (uVar19 != uVar2) {
    puVar20 = *(undefined1 **)&(this->VersionMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->VersionMap).field_0x10;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar2;
      local_178 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14445ad61;
      uVar19 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_114 = (int)lVar13;
    uVar19 = local_114 + -1 + uVar18;
    local_178 = uVar19;
    if ((int)uVar2 < (int)uVar19) {
      uVar19 = uVar2;
      local_178 = uVar2;
    }
  }
LAB_14445ad61:
  do {
    pTVar5 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_e8.CurrentBitIndex == uVar19) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->VersionMap).field_0x10))
       && (pTVar5 == &this->VersionMap)) {
      return __return_storage_ptr__;
    }
    puVar15 = (undefined8 *)((longlong)TStack_e8.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
    local_170 = *puVar15;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = *(int *)(puVar15 + 2);
    lVar13 = (longlong)local_160;
    _Src = (void *)puVar15[1];
    if (local_160 == 0) {
      local_15c = 0;
      iVar7 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_160,0,&local_168,local_160,&local_15c);
      memcpy(local_168.Data,_Src,lVar13 << 3);
      iVar7 = local_160;
    }
    local_188.Data = (FScriptContainerElement *)0x0;
    local_180 = 0;
    pFVar12 = (FName *)(local_168.Data + (longlong)iVar7 * 8);
    FVar17.Data = local_168.Data;
    iVar16 = iVar7;
    while( true ) {
      if (iVar16 != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if ((FName *)FVar17.Data == pFVar12) break;
      pFVar9 = GetParameters(this,*(FName *)FVar17.Data);
      if (pFVar9->bIsDeprecated == false) {
        if (((local_188.Data <= pFVar9) &&
            (pFVar9 < (FFactoryParameters *)(local_188.Data + (longlong)local_180._4_4_ * 0x58))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar8;
        }
        iVar16 = (int)local_180;
        if ((int)local_180 == local_180._4_4_) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&local_188,(int *)((longlong)&local_180 + 4));
        }
        local_180 = CONCAT44(local_180._4_4_,iVar16 + 1);
        FFactoryParameters::FFactoryParameters
                  ((FFactoryParameters *)(local_188.Data + (longlong)iVar16 * 0x58),pFVar9);
      }
      FVar17.Data = FVar17.Data + 8;
      iVar16 = local_160;
    }
    iVar7 = (int)local_180;
    if ((int)local_180 == 1) {
      FVar10 = GetDisplayNameNoVersion(&local_70);
      FVar10 = *(FName *)FVar10;
      if (((int)local_180 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
        ;
        return pTVar8;
      }
      *(FName *)(local_188.Data + 8) = FVar10;
      if (((int)local_180 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
        ;
        return pTVar8;
      }
      FVar17.Data = local_188.Data;
      pFVar9 = (FFactoryParameters *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar9 <= local_188.Data) &&
          (local_188.Data < pFVar9 + __return_storage_ptr__->ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
        ;
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      FFactoryParameters::FFactoryParameters
                ((FFactoryParameters *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x58),
                 (FFactoryParameters *)FVar17.Data);
    }
    else if (1 < (int)local_180) {
      pFVar9 = (FFactoryParameters *)(local_188.Data + (longlong)(int)local_180 * 0x58);
      FVar17.Data = local_188.Data;
      while( true ) {
        if ((int)local_180 != iVar7) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UE::Dataflow::FFactoryParameters,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if ((FFactoryParameters *)FVar17.Data == pFVar9) break;
        ::FString::FString(&local_80,")");
        ::FName::ToString(&((FFactoryParameters *)FVar17.Data)->NodeVersion,&local_c0);
        ::FString::RightChop(&local_c0,&local_110,1);
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_110.Data.ArrayNum != 0) {
          FVar14.Data = local_110.Data.AllocatorInstance.Data;
        }
        iVar16 = _wtoi((wchar_t *)FVar14.Data);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_158,iVar16);
        ::FString::FString(&local_90," (v");
        FVar10 = GetDisplayNameNoVersion(&local_68);
        pFVar11 = ::FName::ToString((FName *)FVar10,&local_58);
        ::FString::ConcatFF(&local_a0,pFVar11,&local_90);
        ::FString::ConcatFF(&local_b0,&local_a0,&local_158);
        ::FString::ConcatFF(&local_100,&local_b0,&local_80);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_100.Data.ArrayNum != 0) {
          FVar14.Data = local_100.Data.AllocatorInstance.Data;
        }
        pFVar12 = ::FName::FName(&local_60,(wchar_t *)FVar14.Data);
        ((FFactoryParameters *)FVar17.Data)->DisplayName = *pFVar12;
        pFVar3 = (FFactoryParameters *)(__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar3 <= FVar17.Data) && (FVar17.Data < pFVar3 + __return_storage_ptr__->ArrayMax))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UE::Dataflow::FFactoryParameters,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar8;
        }
        iVar16 = __return_storage_ptr__->ArrayNum;
        if (iVar16 == __return_storage_ptr__->ArrayMax) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar16 + 1;
        FFactoryParameters::FFactoryParameters
                  ((FFactoryParameters *)
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar16 * 0x58),
                   (FFactoryParameters *)FVar17.Data);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        FVar17.Data = FVar17.Data + 0x58;
      }
    }
    DestructItems<UE::Dataflow::FFactoryParameters,int>
              ((FFactoryParameters *)local_188.Data,(int)local_180);
    if ((FFactoryParameters *)local_188.Data != (FFactoryParameters *)0x0) {
      FMemory::Free(local_188.Data);
    }
    if ((FName *)local_168.Data != (FName *)0x0) {
      FMemory::Free(local_168.Data);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    uVar19 = local_178;
  } while( true );
}

