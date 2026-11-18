// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 103

// CreateNode @ 14ad6ce70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> *this_00;
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
  if (this_00 != (TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress> *)0x0) {
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
    FVar3 = (FName)TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>::
                   TAutoConverterNode<FString,Metasound::Frontend::FAnalyzerAddress>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad6e2d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::Frontend::FAnalyzerAddress>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::Frontend::FAnalyzerAddress>_>
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
               SendNodePrivate::TSendOperator<Metasound::Frontend::FAnalyzerAddress>::CreateOperator
              );
    *(undefined ***)this_00 = &___7__TSendNode_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad6e980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::Frontend::FAnalyzerAddress>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::Frontend::FAnalyzerAddress>_>
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
               ReceiveNodePrivate::TReceiverOperator<Metasound::Frontend::FAnalyzerAddress>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad71c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
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
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad73220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>_>
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
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad73cd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
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
               TSendOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad74610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
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
               TReceiverOperator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad7b910

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
               SendNodePrivate::
               TSendOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad7be40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
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
               ReceiveNodePrivate::
               TReceiverOperator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae91040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayConcatOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae91f70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<float>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<float>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_M_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae92070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::
               TReceiverOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae92d20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayRandomGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae933a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<FMetasoundParameterStorageWrapper>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<FMetasoundParameterStorageWrapper>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<FMetasoundParameterStorageWrapper>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae94760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae95df0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayLastIndexOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae95ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<FMetasoundParameterStorageWrapper>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<FMetasoundParameterStorageWrapper>_> *this
          ,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<FMetasoundParameterStorageWrapper>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae96b10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayRandomGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae97b30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae99620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayLastIndexOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae9a5d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae9ae60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae9c790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae9d4d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae9e970

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae9f910

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,bool>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,bool>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<bool,bool> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<bool,bool> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<bool,bool>::TAutoConverterNode<bool,bool>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae9faa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea0c60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FAudioBuffer>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FAudioBuffer>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFAudioBuffer_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea11b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea20c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea2b50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,bool>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,bool>_> *this,FNodeData *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<int,bool> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<int,bool> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<int,bool>::TAutoConverterNode<int,bool>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea2f30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<FString,FString>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<FString,FString>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<FString,FString> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<FString,FString> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<FString,FString>::TAutoConverterNode<FString,FString>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea2ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FAudioBuffer>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FAudioBuffer>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBuffer>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFAudioBuffer_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea40e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea46e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySubsetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea4be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,bool>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,bool>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<float,bool> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<float,bool> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<float,bool>::TAutoConverterNode<float,bool>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea5160

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::TSendNode<FString>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<FString>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<FString>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFString___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea5d10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySubsetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea6990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayConcatOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea77d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,int>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,int>_> *this,FNodeData *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<bool,int> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<bool,int> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<bool,int>::TAutoConverterNode<bool,int>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea7af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<FString>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<FString>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<FString>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFString___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea8e90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayConcatOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aea9a90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeac7f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,float>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<bool,float>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<bool,float> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<bool,float> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<bool,float>::TAutoConverterNode<bool,float>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeacfb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aead4b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayRandomGetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeaf8e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::TSendNode<bool>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<bool>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<bool>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode__N_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeb0020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayRandomGetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
              );
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeb0400

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayLastIndexOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeb13c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::TReceiveNode<bool>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<bool>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<bool>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode__N_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeb1dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayLastIndexOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
              );
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeb5630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<int,TSizedDefaultAllocator<32>_>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeb6f00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeb8d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aebb390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aebbc50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::FTrigger,bool>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<Metasound::FTrigger,bool> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<Metasound::FTrigger,bool> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<Metasound::FTrigger,bool>::
                   TAutoConverterNode<Metasound::FTrigger,bool>(this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aebc550

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::
               TReceiverOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aebdd70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aebe9b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::FTrigger,int>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::FTrigger,int>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<Metasound::FTrigger,int> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<Metasound::FTrigger,int> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<Metasound::FTrigger,int>::
                   TAutoConverterNode<Metasound::FTrigger,int>(this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aebeed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec0260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec1890

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::FTrigger,float>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::FTrigger,float>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<Metasound::FTrigger,float> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<Metasound::FTrigger,float> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<Metasound::FTrigger,float>::
                   TAutoConverterNode<Metasound::FTrigger,float>(this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec1990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec2cd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySubsetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec3fb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,int>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,int>_> *this,FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<int,int> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<int,int> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<int,int>::TAutoConverterNode<int,int>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec4340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec4d90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FTrigger>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FTrigger>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<Metasound::FTrigger>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFTrigger_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec6c70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayConcatOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec9860

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySubsetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec9900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,int>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,int>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<float,int> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<float,int> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<float,int>::TAutoConverterNode<float,int>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aec9a50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FTrigger>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FTrigger>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<Metasound::FTrigger>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFTrigger_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aecb050

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aecc600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayConcatOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeccc80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,float>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,float>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<int,float> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<int,float> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<int,float>::TAutoConverterNode<int,float>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeccf60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FTime>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FTime>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<Metasound::FTime>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFTime_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aecd980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayRandomGetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeceac0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aecf110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::TSendNode<int>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<int>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_H_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aecf1b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FTime>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FTime>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<Metasound::FTime>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFTime_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aed0080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayLastIndexOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aed2360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayRandomGetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aed3d90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::TReceiveNode<int>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<int>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<int>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_H_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aed5280

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayLastIndexOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aed6930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TSendNode_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aed9fd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &___7__TReceiveNode_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aeda8c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::
               TSendOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aedc960

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aedd570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::
               TReceiverOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aedef90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayGetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aedfad0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee0810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee13d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayGetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee1680

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<FString,Metasound::FSendAddress>_>
           *this,FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<FString,Metasound::FSendAddress> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<FString,Metasound::FSendAddress> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<FString,Metasound::FSendAddress>::
                   TAutoConverterNode<FString,Metasound::FSendAddress>(this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee2870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySubsetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee4220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee4d30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,float>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TAutoConverterNode<float,float>_> *this,
          FNodeData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNodeClassMetadata *pFVar2;
  TAutoConverterNode<float,float> *this_00;
  FNodeData *pFVar3;
  FName FVar4;
  atomic<int> *paVar5;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FNodeClassMetadata **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0xa0);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (this_00 != (TAutoConverterNode<float,float> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    local_a8.Object = pFVar2;
    local_a8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar3 = FNodeData::FNodeData(&local_98,in_R8);
    FVar4 = (FName)TAutoConverterNode<float,float>::TAutoConverterNode<float,float>
                             (this_00,pFVar3,&local_a8);
  }
  param_1->Name = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee4e50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FSendAddress>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FSendAddress>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<Metasound::FSendAddress>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFSendAddress_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee58a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayConcatOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee6240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArraySubsetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee67a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FSendAddress>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FSendAddress>_> *this,
          FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               ReceiveNodePrivate::TReceiverOperator<Metasound::FSendAddress>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFSendAddress_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee68d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::TSendNode<float>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<float>_> *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::TSendOperator<float>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_M_Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee6970

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               SendNodePrivate::
               TSendOperator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14aee78b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FNodeData *param_1)

{
  FName this_00;
  FNodeData *in_R8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_18;
  
  local_18.Object = *(FNodeClassMetadata **)&this->field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FName)::operator_new(0xa0);
  if (this_00 == (FName)0x0) {
    this_00.ComparisonIndex.Value = 0;
    this_00.Number = 0;
  }
  else {
    FNodeFacade::FNodeFacade
              ((FNodeFacade *)this_00,in_R8,&local_18,
               TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

