// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// FLfoNode @ 14b140420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FLfoNode * __thiscall Metasound::FLfoNode::FLfoNode(FLfoNode *this,FNodeInitData *param_1)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = FLfoOperator::GetNodeInfo();
  FNodeFacade::FNodeFacade
            ((FNodeFacade *)this,&param_1->InstanceName,&param_1->InstanceID,pFVar1,
             FLfoOperator::CreateOperator);
  *(undefined ***)this = &___7FLfoNode_Metasound__6B_;
  return this;
}

// FLfoNode @ 14b140480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FLfoNode * __thiscall
Metasound::FLfoNode::FLfoNode
          (FLfoNode *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  FNodeFacade::FNodeFacade((FNodeFacade *)this,param_1,param_2,FLfoOperator::CreateOperator);
  *(undefined ***)this = &___7FLfoNode_Metasound__6B_;
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FLfoNode @ 14b1456b0

void __thiscall Metasound::FLfoNode::~FLfoNode(FLfoNode *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  return;
}

// CreateNodeClassMetadata @ 14b16beb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FLfoNode::CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  FNodeClassMetadata *pFVar1;
  
  pFVar1 = FLfoOperator::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

