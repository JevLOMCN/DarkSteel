// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 328

// CreateNode @ 14afc2f30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TAutoConverterNode<int,Metasound::FMonoAudioFormat> *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (TAutoConverterNode<int,Metasound::FMonoAudioFormat> *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::FMonoAudioFormat>::
                   TAutoConverterNode<int,Metasound::FMonoAudioFormat>(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc3880

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<2,1>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<2,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<2,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__01_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc3dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TAutoConverterNode<float,Metasound::FMonoAudioFormat> *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (TAutoConverterNode<float,Metasound::FMonoAudioFormat> *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<float,Metasound::FMonoAudioFormat>::
                   TAutoConverterNode<float,Metasound::FMonoAudioFormat>(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc4190

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<3,1>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<3,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<3,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__02_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc4e80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FMonoAudioFormat>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FMonoAudioFormat>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFMonoAudioFormat_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc5670

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<4,1>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<4,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<4,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__03_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc6a50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FMonoAudioFormat>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FMonoAudioFormat>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFMonoAudioFormat_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc70a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<5,1>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<5,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<5,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__04_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc7400

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TAutoConverterNode<bool,Metasound::FStereoAudioFormat> *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (TAutoConverterNode<bool,Metasound::FStereoAudioFormat> *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::
                   TAutoConverterNode<bool,Metasound::FStereoAudioFormat>(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc7610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<2,2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<2,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<2,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__01_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc8a60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TAutoConverterNode<int,Metasound::FStereoAudioFormat> *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (TAutoConverterNode<int,Metasound::FStereoAudioFormat> *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::FStereoAudioFormat>::
                   TAutoConverterNode<int,Metasound::FStereoAudioFormat>(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc8e20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<3,2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<3,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<3,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__02_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc9180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLadderFilterOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLadderFilterOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FLadderFilterOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFLadderFilterOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc9810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TAutoConverterNode<float,Metasound::FStereoAudioFormat> *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (TAutoConverterNode<float,Metasound::FStereoAudioFormat> *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<float,Metasound::FStereoAudioFormat>::
                   TAutoConverterNode<float,Metasound::FStereoAudioFormat>(this_00,pFVar2,&local_a8)
    ;
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc9b40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<4,2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<4,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<4,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__03_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afc9ed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStateVariableFilterOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStateVariableFilterOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FStateVariableFilterOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFStateVariableFilterOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afca3b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<5,2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TBandSplitterOperator<5,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TBandSplitterOperator<5,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TBandSplitterOperator__04_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afca440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FStereoAudioFormat>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FStereoAudioFormat>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFStereoAudioFormat_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afca8a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FOnePoleLowPassFilterOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FOnePoleLowPassFilterOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FOnePoleLowPassFilterOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFOnePoleLowPassFilterOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcbe50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FStereoAudioFormat>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FStereoAudioFormat>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>::CreateOperator)
    ;
    *(undefined ***)this_00 = &___7__TReceiveNode_VFStereoAudioFormat_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcc240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FOnePoleHighPassFilterOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FOnePoleHighPassFilterOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FOnePoleHighPassFilterOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFOnePoleHighPassFilterOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afccbb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FBiquadFilterOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FBiquadFilterOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FBiquadFilterOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFBiquadFilterOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcccf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcd530

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcde30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afce670

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcede0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcf370

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afcf870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afd0270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afd0d30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afd1eb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afd2210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<int>_>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAbsNodeOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TAbsNodeOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afd3520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAbsNodeOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TAbsNodeOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afd5600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<Metasound::FTime>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<Metasound::FTime>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TAbsNodeOperator<Metasound::FTime>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAbsNodeOperator_VFTime_Metasound___Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afd6f00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TAbsNodeOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAbsNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afda140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FAdditiveSynthOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FAdditiveSynthOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FAdditiveSynthOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFAdditiveSynthOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afda580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADEnvelopeNodeOperator<float>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADEnvelopeNodeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TADEnvelopeNodeOperator<float>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TADEnvelopeNodeOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afdb5f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TADEnvelopeNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afdc790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TADSREnvelopeNodeOperator_UFFloatADSREnvelope_ADSREnvelopeNodePrivate_Metasound__M_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afdd9d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TAutoConverterNode<bool,Metasound::FMonoAudioFormat> *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (TAutoConverterNode<bool,Metasound::FMonoAudioFormat> *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::
                   TAutoConverterNode<bool,Metasound::FMonoAudioFormat>(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14afddc20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TADSREnvelopeNodeOperator_UFAudioADSREnvelope_ADSREnvelopeNodePrivate_Metasound__VFAudioBuffer_3__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b034290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TConversionOperator<float,Metasound::FTime>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TConversionOperator_MVFTime_Metasound___Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b034440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TConversionOperator<Metasound::FTime,float>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TConversionOperator_VFTime_Metasound__M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0346a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TConversionOperator<int,Metasound::FTime>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TConversionOperator_HVFTime_Metasound___Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b034940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b034b10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TConversionOperator<Metasound::FTime,int>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TConversionOperator_VFTime_Metasound__H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b034e20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b035170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TConversionOperator<float,Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TConversionOperator_MVFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b035430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b035600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TConversionOperator<Metasound::FAudioBuffer,float>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TConversionOperator_VFAudioBuffer_Metasound__M_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b035de0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b035f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TCrossfadeOperator<float,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TCrossfadeOperator_M_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0363b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b036440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TCrossfadeOperator<float,3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TCrossfadeOperator_M_02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b036770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b036800

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TCrossfadeOperator<float,4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TCrossfadeOperator_M_03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b036d00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TCrossfadeOperator<float,5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TCrossfadeOperator_M_04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b037780

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TCrossfadeOperator<float,6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TCrossfadeOperator_M_05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0380a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TCrossfadeOperator<float,7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TCrossfadeOperator_M_06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0386d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TCrossfadeOperator<float,8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TCrossfadeOperator_M_07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b038940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TCrossfadeOperator<Metasound::FAudioBuffer,2>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___01_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b039b60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TCrossfadeOperator<Metasound::FAudioBuffer,3>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___02_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03a710

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TCrossfadeOperator<Metasound::FAudioBuffer,4>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___03_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03b5c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TCrossfadeOperator<Metasound::FAudioBuffer,5>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___04_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03c190

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TCrossfadeOperator<Metasound::FAudioBuffer,6>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___05_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03d500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TCrossfadeOperator<Metasound::FAudioBuffer,7>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___06_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03e080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TCrossfadeOperator<Metasound::FAudioBuffer,8>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___07_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03e720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TPrintLogOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TPrintLogOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03eb20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TPrintLogOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TPrintLogOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03ec40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FBitcrusherOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFBitcrusherOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03f470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TPrintLogOperator<bool>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TPrintLogOperator__N_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b03fef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FBPMToSecondsNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FBPMToSecondsNode> *this,FNodeData *param_1)

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
              ((FNodeFacade *)this_00,this_01,&local_a8,FBPMToSecondsOperator::CreateOperator);
    *(undefined ***)this_00 = &___7FBPMToSecondsNode_Metasound__6B_;
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

// CreateNode @ 14b040360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TPrintLogOperator<FString>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TPrintLogOperator_VFString___Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b040b10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TClampNodeOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TClampNodeOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0412e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FTriggerOnNanOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFTriggerOnNanOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0415c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TClampNodeOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TClampNodeOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b041e10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FDecibelsToLinearGainOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFDecibelsToLinearGainOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b042130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TClampNodeOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TClampNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b042980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TDelayNodeOperator<Metasound::FTime>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TDelayNodeOperator_VFTime_Metasound___Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b042bf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TDelayNodeOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TDelayNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b043050

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDiffuserOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDiffuserOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade((FNodeFacade *)this_00,in_R8,pTVar1,FDiffuserOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFDiffuserOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b043200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FDynamicFilterOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFDynamicFilterOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0433b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FDopplerPitchShiftOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFDopplerPitchShiftOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b043440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FCompressorOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FCompressorOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FCompressorOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFCompressorOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0437a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FEnvelopeFollowerNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FEnvelopeFollowerNode> *this,FNodeData *param_1)

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
              ((FNodeFacade *)this_00,this_01,&local_a8,FEnvelopeFollowerOperator::CreateOperator);
    *(undefined ***)this_00 = &___7FEnvelopeFollowerNode_Metasound__6B_;
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

// CreateNode @ 14b07cd70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FAddAudioFloatNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FAddAudioFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FAddAudioFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b07dd40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FSubtractFloatNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FSubtractFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FSubtractFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b07df70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b07efc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FSubtractInt32Node>
::CreateNode(TNodeRegistryEntryBase<Metasound::FSubtractInt32Node> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FSubtractInt32Node_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b07f470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0802f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FSubtractTimeNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FSubtractTimeNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FSubtractTimeNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b081110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b081520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FSubtractAudioNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FSubtractAudioNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FSubtractAudioNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b081b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b082160

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FMultiplyAudioNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FMultiplyAudioNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FMultiplyAudioNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0829b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FMultiplyAudioFloatNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FMultiplyAudioFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FMultiplyAudioFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b082d90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b083220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FMultiplyFloatNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FMultiplyFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FMultiplyFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b083460

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b083790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FMultiplyInt32Node>
::CreateNode(TNodeRegistryEntryBase<Metasound::FMultiplyInt32Node> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FMultiplyInt32Node_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b083f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0852e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FMultiplyTimeFloatNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FMultiplyTimeFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FMultiplyTimeFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b085b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0862b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FDivideFloatNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FDivideFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FDivideFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b086af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FDivideInt32Node>::
CreateNode(TNodeRegistryEntryBase<Metasound::FDivideInt32Node> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FDivideInt32Node_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0870b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FDivideTimeFloatNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FDivideTimeFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FDivideTimeFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b087c50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FModuloInt32Node>::
CreateNode(TNodeRegistryEntryBase<Metasound::FModuloInt32Node> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FModuloInt32Node_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0882e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FPowerFloatNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FPowerFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FPowerFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b089210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FLogarithmFloatNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FLogarithmFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FLogarithmFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b089ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FConvertQToBandwidthNodeOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FConvertQToBandwidthNodeOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FConvertQToBandwidthNodeOperator::CreateOperator)
    ;
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFConvertQToBandwidthNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b08caf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FFlangerOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FFlangerOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade((FNodeFacade *)this_00,in_R8,pTVar1,FFlangerOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFFlangerOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b08d460

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FFrequencyMultiplierToSemitoneOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FFrequencyMultiplierToSemitoneOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               FFrequencyMultiplierToSemitoneOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFFrequencyMultiplierToSemitoneOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b08de70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FFreqToMidiOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FFreqToMidiOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FFreqToMidiOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFFreqToMidiOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b08df70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b08e0b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FGrainDelayOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FGrainDelayOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FGrainDelayOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFGrainDelayOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b08f6c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLimiterOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLimiterOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade((FNodeFacade *)this_00,in_R8,pTVar1,FLimiterOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFLimiterOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0900a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLowFrequencyNoiseOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLowFrequencyNoiseOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FLowFrequencyNoiseOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFLowFrequencyNoiseOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b090590

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b090ce0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FInterpToOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FInterpToOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade((FNodeFacade *)this_00,in_R8,pTVar1,FInterpToOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFInterpToOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b090d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLinearGainToDecibelsOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLinearGainToDecibelsOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FLinearGainToDecibelsOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFLinearGainToDecibelsOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b091180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::CreateOperator
              );
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b091730

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLinearToLogFrequencyOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FLinearToLogFrequencyOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FLinearToLogFrequencyOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFLinearToLogFrequencyOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0917c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FITDPannerOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FITDPannerOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade((FNodeFacade *)this_00,in_R8,pTVar1,FITDPannerOperator::CreateOperator)
    ;
    *(undefined ***)this_00 = &___7__TNodeFacade_VFITDPannerOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b091c20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b093480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::CreateOperator
              );
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TMapRangeOperator_VFIntRange_MetasoundMapRangeNodePrivate_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0947a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TMapRangeOperator_VFFloatRange_MetasoundMapRangeNodePrivate_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0950e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b095440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TMapRangeOperator_VFAudioRange_MetasoundMapRangeNodePrivate_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b095f60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0961b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FAddFloatNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FAddFloatNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FAddFloatNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b097270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b097390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FAddInt32Node>::
CreateNode(TNodeRegistryEntryBase<Metasound::FAddInt32Node> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>::
               CreateOperator);
    *(undefined ***)this_00 = &___7FAddInt32Node_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b098400

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::CreateOperator)
    ;
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0985c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FAddTimeNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FAddTimeNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FAddTimeNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b099260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FAddAudioNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FAddAudioNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>
               ::CreateOperator);
    *(undefined ***)this_00 = &___7FAddAudioNode_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0e7be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0e8c50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<6,1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<6,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<6,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__05_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0e9370

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0e96d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FSquareOscilatorNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FSquareOscilatorNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FSquareOscilatorNode *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0x100);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (FSquareOscilatorNode *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)FSquareOscilatorNode::FSquareOscilatorNode(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0e9930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<7,1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<7,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<7,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__06_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0ea6f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0eb610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<8,1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<8,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<8,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__07_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0ec610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<2,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<2,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<2,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__01_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0ec7c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0ec870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FSawOscilatorNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FSawOscilatorNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FSawOscilatorNode *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0x100);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (FSawOscilatorNode *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)FSawOscilatorNode::FSawOscilatorNode(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0eead0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<3,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<3,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<3,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__02_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0eef00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0efb30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<4,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<4,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<4,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__03_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f0290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f05c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FSineOscilatorNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FSineOscilatorNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FSineOscilatorNode *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0x100);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (FSineOscilatorNode *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)FSineOscilatorNode::FSineOscilatorNode(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f0d90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<5,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<5,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<5,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__04_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f20d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f2160

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f2e90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<6,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<6,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<6,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__05_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f3130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FNoiseNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FNoiseNode> *this,FNodeData *param_1)

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
              ((FNodeFacade *)this_00,this_01,&local_a8,FNoiseOperator::CreateOperator);
    *(undefined ***)this_00 = &___7FNoiseNode_Metasound__6B_;
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

// CreateNode @ 14b0f37c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f41b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f4770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<7,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<7,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<7,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__06_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f5940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f5e90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<8,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<8,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<8,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__07_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f5fb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f7500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f8180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::CreateOperator
              );
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f8f60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0f94b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0fa270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0fac50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMaxNodeOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMaxNodeOperator<int>_>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TMaxNodeOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TMaxNodeOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0fbaa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMaxNodeOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMaxNodeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TMaxNodeOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TMaxNodeOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0fc880

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0fc9f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMaxNodeOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TMaxNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b0fe6d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b100c10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1020f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMidiNoteQuantizerOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMidiNoteQuantizerOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FMidiNoteQuantizerOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMidiNoteQuantizerOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b103060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b105260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMusicalScaleToNoteArrayOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMusicalScaleToNoteArrayOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FMusicalScaleToNoteArrayOperator::CreateOperator)
    ;
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMusicalScaleToNoteArrayOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b106c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMidiToFreqOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMidiToFreqOperator<int>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TMidiToFreqOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TMidiToFreqOperator_H_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b107150

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1089c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMidiToFreqOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMidiToFreqOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TMidiToFreqOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TMidiToFreqOperator_M_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b109200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10a130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10ad50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMidSideEncodeOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMidSideEncodeOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FMidSideEncodeOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFMidSideEncodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10b2e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10b8f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMidSideDecodeOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMidSideDecodeOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FMidSideDecodeOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFMidSideDecodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10ca90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMinNodeOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMinNodeOperator<int>_>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TMinNodeOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TMinNodeOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10cf20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10da70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMinNodeOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMinNodeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TMinNodeOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TMinNodeOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10e1f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10e920

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TMinNodeOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TMinNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10f4f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b10fcb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<2,1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<2,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<2,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__01_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b110770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FLfoNode>::
CreateNode(TNodeRegistryEntryBase<Metasound::FLfoNode> *this,FNodeData *param_1)

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
    FNodeFacade::FNodeFacade((FNodeFacade *)this_00,this_01,&local_a8,FLfoOperator::CreateOperator);
    *(undefined ***)this_00 = &___7FLfoNode_Metasound__6B_;
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

// CreateNode @ 14b110a10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b111680

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<3,1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<3,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<3,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__02_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1121b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<4,1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<4,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<4,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__03_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1123f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FTriangleOscilatorNode>::CreateNode
          (TNodeRegistryEntryBase<Metasound::FTriangleOscilatorNode> *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FTriangleOscilatorNode *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_98);
  this_00 = ::operator_new(0x100);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (FTriangleOscilatorNode *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)FTriangleOscilatorNode::FTriangleOscilatorNode(this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1124d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b113c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<5,1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioMixerNodeOperator<5,1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioMixerNodeOperator<5,1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioMixerNodeOperator__04_00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ac060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FStereoPannerOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFStereoPannerOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ac490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FSampleAndHoldOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFSampleAndHoldOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ac7e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FSubharmonizerOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFSubharmonizerOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ace90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               FSemitoneToFrequencyMultiplierOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFSemitoneToFrequencyMultiplierOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ad110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FStereoDelayOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFStereoDelayOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b0d40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FSuperOscillatorOperatorMono::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFSuperOscillatorOperatorMono_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b0f30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FSuperOscillatorOperatorStereo::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFSuperOscillatorOperatorStereo_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b1a10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FSwitchAndRampOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFSwitchAndRampOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b3730

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b3ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b3fe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b4440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b4700

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinControlRate>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinControlRate>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFPerlinControlRate_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b4b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
               CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFPerlinAudioRate_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b51a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b5ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b6000

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b66d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FPlateReverbOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFPlateReverbOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b6960

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b8cd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TRandomNodeOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TRandomNodeOperator_H_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b9820

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TRandomNodeOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TRandomNodeOperator_M_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1b9bb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TRandomNodeOperator<bool>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TRandomNodeOperator__N_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ba170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TRandomNodeOperator<Metasound::FTime>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TRandomNodeOperator_VFTime_Metasound___Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1bad20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FRingModOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FRingModOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade((FNodeFacade *)this_00,in_R8,pTVar1,FRingModOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFRingModOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ec130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerCounterOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerCounterOperator>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FTriggerCounterOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFTriggerCounterOperator_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ec580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FTime,3>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFTime_Metasound___02_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ec720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<1>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<1>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ecac0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<7>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<7>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSequenceOperator<7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSequenceOperator__06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ed9b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FTime,4>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFTime_Metasound___03_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1edb40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ee170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<8>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<8>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSequenceOperator<8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSequenceOperator__07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1eeea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerDelayOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerDelayOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FTriggerDelayOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFTriggerDelayOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ef610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FTime,5>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFTime_Metasound___04_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ef770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<3>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<3>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f05e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FTriggerToggleNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FTriggerToggleNode> *this,FNodeData *param_1)

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
              ((FNodeFacade *)this_00,this_01,&local_a8,FTriggerToggleOperator::CreateOperator);
    *(undefined ***)this_00 = &___7FTriggerToggleNode_Metasound__6B_;
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

// CreateNode @ 14b1f0840

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerOnceOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerOnceOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FTriggerOnceOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFTriggerOnceOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f08d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FTime,6>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFTime_Metasound___05_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f0a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<4>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<4>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f11a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<int>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<int>_>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TValueOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TValueOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f1b70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FTime,7>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFTime_Metasound___06_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f21d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<5>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<5>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f2fe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<float>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<float>_>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TValueOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TValueOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f3470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FTime,8>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFTime_Metasound___07_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f3650

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<6>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<6>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f3ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FWaveShaperOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FWaveShaperOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FWaveShaperOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFWaveShaperOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f4860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<bool>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<bool>_>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TValueOperator<bool>::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_V__TValueOperator__N_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f4d50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<bool,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator__N_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f4f30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<7>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<7>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f5540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<FString>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TValueOperator<FString>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TValueOperator<FString>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TValueOperator_VFString___Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f57a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,3>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,3>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<bool,3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator__N_02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f58c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<8>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAccumulatorOperator<8>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAccumulatorOperator<8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAccumulatorOperator__07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f6fc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,4>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,4>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<bool,4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator__N_03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f7160

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<2>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAnyOperator<2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAnyOperator__01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f7500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerOnThresholdOperator_VFAudioBuffer_Metasound__M_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f84a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,5>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,5>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<bool,5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator__N_04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f89f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<3>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<3>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAnyOperator<3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAnyOperator__02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f90e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnThresholdOperator<float,float>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnThresholdOperator<float,float>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerOnThresholdOperator<float,float>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerOnThresholdOperator_MM_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f9a60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,6>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,6>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<bool,6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator__N_05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1f9bf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<4>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<4>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAnyOperator<4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAnyOperator__03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fa2f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnThresholdOperator<int,int>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnThresholdOperator<int,int>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerOnThresholdOperator<int,int>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerOnThresholdOperator_HH_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fa790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,7>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,7>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<bool,7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator__N_06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fa9f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<5>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<5>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAnyOperator<5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAnyOperator__04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fb300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnValueChangeOperator<int>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnValueChangeOperator<int>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerOnValueChangeOperator<int>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerOnValueChangeOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fbed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,8>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<bool,8>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<bool,8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator__N_07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fbff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<6>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<6>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAnyOperator<6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAnyOperator__05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fc2c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnValueChangeOperator<float>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnValueChangeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerOnValueChangeOperator<float>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerOnValueChangeOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fd100

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FAudioBuffer,2>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFAudioBuffer_Metasound___01_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fd3f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<7>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<7>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAnyOperator<7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAnyOperator__06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1fe3d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnValueChangeOperator<bool>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerOnValueChangeOperator<bool>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerOnValueChangeOperator<bool>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerOnValueChangeOperator__N_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ff720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FAudioBuffer,3>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFAudioBuffer_Metasound___02_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b1ffb80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<8>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerAnyOperator<8>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerAnyOperator<8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerAnyOperator__07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b200c60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerPipeOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerPipeOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FTriggerPipeOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFTriggerPipeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b201720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FAudioBuffer,4>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFAudioBuffer_Metasound___03_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b202820

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FTriggerRepeatNode>
::CreateNode(TNodeRegistryEntryBase<Metasound::FTriggerRepeatNode> *this,FNodeData *param_1)

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
              ((FNodeFacade *)this_00,this_01,&local_a8,FTriggerRepeatOperator::CreateOperator);
    *(undefined ***)this_00 = &___7FTriggerRepeatNode_Metasound__6B_;
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

// CreateNode @ 14b203180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b203670

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FAudioBuffer,5>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFAudioBuffer_Metasound___04_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b203930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<int,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_H_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b203ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b203c50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FAudioBuffer,6>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFAudioBuffer_Metasound___05_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b204570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,3>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,3>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<int,3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_H_02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2049b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FAudioBuffer,7>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFAudioBuffer_Metasound___06_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b204a40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2052a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerCoinOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerCoinOperator>_> *this,
          FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FTriggerCoinOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFTriggerCoinOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b205c10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,4>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,4>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<int,4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_H_03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b206500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FAudioBuffer,8>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFAudioBuffer_Metasound___07_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b206620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b208790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,5>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,5>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<int,5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_H_04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b208de0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSelectOperator<2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSelectOperator__01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20a070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,6>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,6>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<int,6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_H_05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20a950

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<3>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<3>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSelectOperator<3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSelectOperator__02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20b400

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20bf90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,7>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,7>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<int,7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_H_06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20c600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<4>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<4>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSelectOperator<4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSelectOperator__03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20d820

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20d940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,8>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<int,8>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<int,8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_H_07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20df80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<5>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<5>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSelectOperator<5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSelectOperator__04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20e560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,2>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<float,2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_M_01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20e5f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::
               TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20e920

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<6>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<6>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSelectOperator<6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSelectOperator__05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20ef90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,3>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,3>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<float,3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_M_02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20f090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20f860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerCompareNodeOperator<int>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerCompareNodeOperator<int>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerCompareNodeOperator<int>::CreateOperator)
    ;
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerCompareNodeOperator_H_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b20f8f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<7>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<7>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSelectOperator<7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSelectOperator__06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2109f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,4>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,4>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<float,4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_M_03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b211170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerCompareNodeOperator<float>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerCompareNodeOperator<float>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerCompareNodeOperator<float>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerCompareNodeOperator_M_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b211200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<8>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSelectOperator<8>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSelectOperator<8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSelectOperator__07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b211c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b211e70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,5>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,5>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<float,5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_M_04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b212080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerCompareNodeOperator<bool>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerCompareNodeOperator<bool>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerCompareNodeOperator<bool>::CreateOperator
              );
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerCompareNodeOperator__N_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b212110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<2>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSequenceOperator<2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSequenceOperator__01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b212910

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>_>
::CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  void *this_00;
  FNodeData *pFVar2;
  FName FVar3;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_98;
  FNodeData local_88;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_98);
  this_00 = ::operator_new(0xa0);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if (this_00 != (void *)0x0) {
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
    pFVar2 = FNodeData::FNodeData(&local_88,in_R8);
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
                   TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2129c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,6>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,6>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<float,6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_M_05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b212d50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<3>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<3>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSequenceOperator<3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSequenceOperator__02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b213780

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,7>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,7>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<float,7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_M_06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b213810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b213f70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<4>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<4>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSequenceOperator<4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSequenceOperator__03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2149e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerControlOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerControlOperator>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,FTriggerControlOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFTriggerControlOperator_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b215360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,8>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<float,8>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerRouteOperator<float,8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerRouteOperator_M_07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b215450

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>::
CreateNode(void *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata(this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               ReceiveNodePrivate::
               TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b215b10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<5>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<5>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSequenceOperator<5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSequenceOperator__04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b216430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,
               TTriggerRouteOperator<Metasound::FTime,2>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TTriggerRouteOperator_VFTime_Metasound___01_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b216640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<6>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TTriggerSequenceOperator<6>_>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TTriggerSequenceOperator<6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TTriggerSequenceOperator__05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b291ee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b292090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b292240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<3>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__02_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2923f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2925a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<5>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__04_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b292750

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b292900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<7>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__06_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b292ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>_> *this
          ,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  pTVar1 = FNodeRegistryEntryBase::GetNodeClassMetadata((FNodeRegistryEntryBase *)this,&local_18);
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,pTVar1,TWaveWriterOperator<8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TWaveWriterOperator__07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

