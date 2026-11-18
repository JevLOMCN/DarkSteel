// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// FNoiseNode @ 14b1412d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNoiseNode * __thiscall Metasound::FNoiseNode::FNoiseNode(FNoiseNode *this,FNodeInitData *param_1)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *this_00;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_e8;
  FVertexInterface local_d8;
  FNodeData local_88;
  
  pFVar1 = FNoiseOperator::GetNodeInfo();
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_e8,pFVar1);
  pFVar1 = FNoiseOperator::GetNodeInfo();
  pFVar3 = FVertexInterface::FVertexInterface(&local_d8,&pFVar1->DefaultInterface);
  this_00 = FNodeData::FNodeData(&local_88,&param_1->InstanceName,&param_1->InstanceID,pFVar3);
  FNodeFacade::FNodeFacade((FNodeFacade *)this,this_00,pTVar2,FNoiseOperator::CreateOperator);
  *(undefined ***)this = &___7FNoiseNode_Metasound__6B_;
  FNodeData::~FNodeData(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar2->SharedReferenceCount).ReferenceController);
  *(undefined ***)this = &___7FNoiseNode_Metasound__6B_;
  return this;
}

// FNoiseNode @ 14b141390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNoiseNode * __thiscall
Metasound::FNoiseNode::FNoiseNode(FNoiseNode *this,FName *param_1,FGuid *param_2,int param_3)

{
  FNodeClassMetadata *pFVar1;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *this_00;
  FName local_f8;
  FGuid local_f0;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_e0;
  FVertexInterface local_d0;
  FNodeData local_80;
  
  local_f0.A = param_2->A;
  local_f0.B = param_2->B;
  local_f0.C = param_2->C;
  local_f0.D = param_2->D;
  local_f8 = *param_1;
  pFVar1 = FNoiseOperator::GetNodeInfo();
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_e0,pFVar1);
  pFVar1 = FNoiseOperator::GetNodeInfo();
  pFVar3 = FVertexInterface::FVertexInterface(&local_d0,&pFVar1->DefaultInterface);
  this_00 = FNodeData::FNodeData(&local_80,&local_f8,&local_f0,pFVar3);
  FNodeFacade::FNodeFacade((FNodeFacade *)this,this_00,pTVar2,FNoiseOperator::CreateOperator);
  *(undefined ***)this = &___7FNoiseNode_Metasound__6B_;
  FNodeData::~FNodeData(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar2->SharedReferenceCount).ReferenceController);
  *(undefined ***)this = &___7FNoiseNode_Metasound__6B_;
  return this;
}

// FNoiseNode @ 14b141460

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNoiseNode * __thiscall
Metasound::FNoiseNode::FNoiseNode
          (FNoiseNode *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  FNodeFacade::FNodeFacade((FNodeFacade *)this,param_1,param_2,FNoiseOperator::CreateOperator);
  *(undefined ***)this = &___7FNoiseNode_Metasound__6B_;
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateNodeClassMetadata @ 14b16bee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FNoiseNode::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = FNoiseOperator::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

