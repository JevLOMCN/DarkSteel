// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// FTriggerToggleNode @ 14b2348c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FTriggerToggleNode * __thiscall
Metasound::FTriggerToggleNode::FTriggerToggleNode(FTriggerToggleNode *this,FNodeInitData *param_1)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = FTriggerToggleOperator::GetNodeInfo();
  FNodeFacade::FNodeFacade
            ((FNodeFacade *)this,&param_1->InstanceName,&param_1->InstanceID,pFVar1,
             FTriggerToggleOperator::CreateOperator);
  *(undefined ***)this = &___7FTriggerToggleNode_Metasound__6B_;
  return this;
}

// FTriggerToggleNode @ 14b234920

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FTriggerToggleNode * __thiscall
Metasound::FTriggerToggleNode::FTriggerToggleNode
          (FTriggerToggleNode *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  FNodeFacade::FNodeFacade
            ((FNodeFacade *)this,param_1,param_2,FTriggerToggleOperator::CreateOperator);
  *(undefined ***)this = &___7FTriggerToggleNode_Metasound__6B_;
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FTriggerToggleNode @ 14b237a30

void __thiscall Metasound::FTriggerToggleNode::~FTriggerToggleNode(FTriggerToggleNode *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// CreateNodeClassMetadata @ 14b254910

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FTriggerToggleNode::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = FTriggerToggleOperator::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

