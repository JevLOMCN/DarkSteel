// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 68

// CreateNode @ 14b2c3000

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2c4c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2c5f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2c7180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2c8760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2c8c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2c8d90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> *this_00;
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
  if (this_00 != (TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> *)0x0) {
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
    FVar3 = (FName)TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>::
                   TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2caa70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>_>
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
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cab20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cac20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> *this_00;
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
  if (this_00 != (TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> *)0x0) {
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
    FVar3 = (FName)TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>::
                   TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cb110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<1>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<1>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusReaderOperator<1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusReaderOperator__00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cbd90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FAudioBusAsset>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FAudioBusAsset>_> *this,
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
               SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFAudioBusAsset_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cc1c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>_>
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
               FMetasoundWaveTableEnvelopeNodeOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMetasoundWaveTableEnvelopeNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cc850

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cca30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>_>
           *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> *this_00;
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
  if (this_00 != (TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> *)0x0) {
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
    FVar3 = (FName)TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>::
                   TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cccc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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
               TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cd070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<2>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusReaderOperator<2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusReaderOperator__01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cda20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FAudioBusAsset>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FAudioBusAsset>_> *this,
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
               ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFAudioBusAsset_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2ce3f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableEvaluateNodeOperator>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableEvaluateNodeOperator>_>
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
               FMetasoundWaveTableEvaluateNodeOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMetasoundWaveTableEvaluateNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2ce930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> *this_00;
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
  if (this_00 != (TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> *)0x0) {
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
    FVar3 = (FName)TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>::
                   TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cebe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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
               TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2cf340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<4>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<4>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusReaderOperator<4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusReaderOperator__03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d1810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>_>
             *this,FNodeData *param_1)

{
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar1;
  TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> *this_00;
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
  if (this_00 != (TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> *)0x0) {
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
    FVar3 = (FName)TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>::
                   TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d1960

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
               TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d2590

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<6>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<6>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusReaderOperator<6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusReaderOperator__05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d2f50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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
    FVar3 = (FName)TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   ::
                   TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d3170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableGetNodeOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableGetNodeOperator>_>
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
               FMetasoundWaveTableGetNodeOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMetasoundWaveTableGetNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d4e90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
               TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d52e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<8>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusReaderOperator<8>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusReaderOperator<8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusReaderOperator__07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d5e40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>_>
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
    FVar3 = (FName)TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
                   ::
                   TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>
                             (this_00,pFVar2,&local_a8);
  }
  param_1->Name = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d6ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableOscillatorNodeOperator>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableOscillatorNodeOperator>_>
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
               FMetasoundWaveTableOscillatorNodeOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMetasoundWaveTableOscillatorNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d6cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d71e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<1>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<1>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusWriterOperator<1>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusWriterOperator__00_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d77e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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
               TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d85b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d8b90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<2>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<2>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusWriterOperator<2>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusWriterOperator__01_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d9600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>_>
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
               FMetasoundWaveTableBankEvaluateNodeOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMetasoundWaveTableBankEvaluateNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d9690

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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
               TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2d9fd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2da940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<4>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<4>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusWriterOperator<4>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusWriterOperator__03_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2db760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetaSoundWaveTablePlayerNodeOperator>_>::
CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FMetaSoundWaveTablePlayerNodeOperator>_>
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
               FMetaSoundWaveTablePlayerNodeOperator::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_VFMetaSoundWaveTablePlayerNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2dc010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2dc1a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FWaveAsset>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FWaveAsset>_> *this,
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
               SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFWaveAsset_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2dc230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<6>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<6>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusWriterOperator<6>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusWriterOperator__05_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2dd590

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2dda30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FWaveAsset>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FWaveAsset>_> *this,
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
               ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_VFWaveAsset_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2ddb30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<8>_>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TAudioBusWriterOperator<8>_>_>
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,TAudioBusWriterOperator<8>::CreateOperator);
    *(undefined ***)this_00 =
         &___7__TNodeFacade_V__TAudioBusWriterOperator__07_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2dfca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2e2b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2e45a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2e6a40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
               TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2e9490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
               TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2eb750

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2ed180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<WaveTable::FWaveTable>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<WaveTable::FWaveTable>_> *this,
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
               SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_UFWaveTable_WaveTable___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2eda00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayGetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2ee550

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<WaveTable::FWaveTable>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<WaveTable::FWaveTable>_> *this,
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
               ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::CreateOperator);
    *(undefined ***)this_00 = &___7__TReceiveNode_UFWaveTable_WaveTable___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2ef630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2eff10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FWaveTableBankAsset>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::FWaveTableBankAsset>_> *this,
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
               SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::CreateOperator);
    *(undefined ***)this_00 = &___7__TSendNode_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2f0be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArraySubsetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2f1e70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FWaveTableBankAsset>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::FWaveTableBankAsset>_> *this,
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
               ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::CreateOperator
              );
    *(undefined ***)this_00 = &___7__TReceiveNode_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2f2060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayConcatOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2f40e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayShuffleOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2f6a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayRandomGetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2f8ad0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
               ::CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayLastIndexOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2fc140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TSendNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
               TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TSendNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2fc600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FWaveInfoNodeOperator>_>::CreateNode
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FWaveInfoNodeOperator>_> *this,
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
              ((FNodeFacade *)this_00,in_R8,pTVar1,FWaveInfoNodeOperator::CreateOperator);
    *(undefined ***)this_00 = &___7__TNodeFacade_VFWaveInfoNodeOperator_Metasound___Metasound__6B_;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2fd120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TReceiveNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
               TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TReceiveNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14b2fe410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::CreateNode(TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
               TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
               CreateOperator);
    *(undefined ***)this_00 =
         &
         ___7__TNodeFacade_V__TArrayNumOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
  }
  param_1->Name = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

