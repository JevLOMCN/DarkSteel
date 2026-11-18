// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// CreateNode @ 14bb9a300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FDS_MetasoundTimeCenterWeightNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FDS_MetasoundTimeCenterWeightNode> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *this_01;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    local_a8.Object = pTVar1->Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = FNodeData::FNodeData(&local_88,in_R8);
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,this_01,&local_a8,
               FDS_MetasoundTimeCenterWeight::CreateOperator);
    *(undefined ***)this_00 = &___7FDS_MetasoundTimeCenterWeightNode_Metasound__6B_;
    FNodeData::~FNodeData(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14bb9a500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FDS_MetasoundTimeOfDayNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FDS_MetasoundTimeOfDayNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *this_01;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    local_a8.Object = pTVar1->Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = FNodeData::FNodeData(&local_88,in_R8);
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,this_01,&local_a8,FDS_MetasoundTimeOfDay::CreateOperator);
    *(undefined ***)this_00 = &___7FDS_MetasoundTimeOfDayNode_Metasound__6B_;
    FNodeData::~FNodeData(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

