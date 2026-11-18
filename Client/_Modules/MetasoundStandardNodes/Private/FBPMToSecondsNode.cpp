// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 3

// FBPMToSecondsNode @ 14b051a30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FBPMToSecondsNode * __thiscall
Metasound::FBPMToSecondsNode::FBPMToSecondsNode(FBPMToSecondsNode *this,FNodeInitData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *this_00;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_e8;
  FVertexInterface local_d8;
  FNodeData local_88;
  
  pFVar1 = FBPMToSecondsOperator::GetNodeInfo();
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_e8,pFVar1);
  pFVar1 = FBPMToSecondsOperator::GetNodeInfo();
  pFVar3 = FVertexInterface::FVertexInterface(&local_d8,&pFVar1->DefaultInterface);
  this_00 = FNodeData::FNodeData(&local_88,&param_1->InstanceName,&param_1->InstanceID,pFVar3);
  FNodeFacade::FNodeFacade((FNodeFacade *)this,this_00,pTVar2,FBPMToSecondsOperator::CreateOperator)
  ;
  *(undefined ***)this = &___7FBPMToSecondsNode_Metasound__6B_;
  FNodeData::~FNodeData(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar2->SharedReferenceCount).ReferenceController);
  *(undefined ***)this = &___7FBPMToSecondsNode_Metasound__6B_;
  return this;
}

// FBPMToSecondsNode @ 14b051af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FBPMToSecondsNode * __thiscall
Metasound::FBPMToSecondsNode::FBPMToSecondsNode
          (FBPMToSecondsNode *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  FNodeFacade::FNodeFacade
            ((FNodeFacade *)this,param_1,param_2,FBPMToSecondsOperator::CreateOperator);
  *(undefined ***)this = &___7FBPMToSecondsNode_Metasound__6B_;
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateNodeClassMetadata @ 14b0608e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FBPMToSecondsNode::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = FBPMToSecondsOperator::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

