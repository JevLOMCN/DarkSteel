// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 20

// GetDefaultOperatorFactory @ 14b2c5b80

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>::GetDefaultOperatorFactory
          (TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14b2c6510

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>::
GetDefaultOperatorFactory
          (TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14b2c6b70

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>::GetDefaultOperatorFactory
          (TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14b2c6fb0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>::
GetDefaultOperatorFactory
          (TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetDefaultOperatorFactory @ 14b2c7690

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>::
GetDefaultOperatorFactory
          (TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> *this,
          TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> @ 14b344d00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> * __thiscall
Metasound::TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>::
TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> *this,
          FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> *pTVar3;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> local_28;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> local_18;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)
       &___7__TWavePlayerNode_UFFiveDotOneAudioChannelConfigurationInfo_Metasound___Metasound__6B_;
  pTVar2 = FFiveDotOneAudioChannelConfigurationInfo::GetAudioOutputs(&local_18);
  pTVar3 = MakeOperatorFactoryRef<Metasound::FWavePlayerOperatorFactory,TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_>_>
                     (&local_28,pTVar2);
  (this->Factory).Object = (IOperatorFactory *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> @ 14b344da0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> * __thiscall
Metasound::TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>::
TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> *pTVar3;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> local_28;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> local_18;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)
       &___7__TWavePlayerNode_UFMonoAudioChannelConfigurationInfo_Metasound___Metasound__6B_;
  pTVar2 = FMonoAudioChannelConfigurationInfo::GetAudioOutputs(&local_18);
  pTVar3 = MakeOperatorFactoryRef<Metasound::FWavePlayerOperatorFactory,TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_>_>
                     (&local_28,pTVar2);
  (this->Factory).Object = (IOperatorFactory *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> @ 14b344e40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> * __thiscall
Metasound::TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>::
TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> *pTVar3;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> local_28;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> local_18;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)
       &___7__TWavePlayerNode_UFQuadAudioChannelConfigurationInfo_Metasound___Metasound__6B_;
  pTVar2 = FQuadAudioChannelConfigurationInfo::GetAudioOutputs(&local_18);
  pTVar3 = MakeOperatorFactoryRef<Metasound::FWavePlayerOperatorFactory,TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_>_>
                     (&local_28,pTVar2);
  (this->Factory).Object = (IOperatorFactory *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> @ 14b344ee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> * __thiscall
Metasound::TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>::
TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> *this,
          FNodeData *param_1,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> *pTVar3;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> local_28;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> local_18;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)
       &___7__TWavePlayerNode_UFSevenDotOneAudioChannelConfigurationInfo_Metasound___Metasound__6B_;
  pTVar2 = FSevenDotOneAudioChannelConfigurationInfo::GetAudioOutputs(&local_18);
  pTVar3 = MakeOperatorFactoryRef<Metasound::FWavePlayerOperatorFactory,TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_>_>
                     (&local_28,pTVar2);
  (this->Factory).Object = (IOperatorFactory *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> @ 14b344f80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> * __thiscall
Metasound::TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>::
TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> *this,FNodeData *param_1
          ,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> *pTVar3;
  TSharedRef<Metasound::FWavePlayerOperatorFactory,1> local_28;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> local_18;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ =
       (longlong)
       &___7__TWavePlayerNode_UFStereoAudioChannelConfigurationInfo_Metasound___Metasound__6B_;
  pTVar2 = FStereoAudioChannelConfigurationInfo::GetAudioOutputs(&local_18);
  pTVar3 = MakeOperatorFactoryRef<Metasound::FWavePlayerOperatorFactory,TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_>_>
                     (&local_28,pTVar2);
  (this->Factory).Object = (IOperatorFactory *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> @ 14b350830

void __thiscall
Metasound::TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>::
~TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> @ 14b350870

void __thiscall
Metasound::TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>::
~TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> @ 14b3508b0

void __thiscall
Metasound::TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>::
~TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> @ 14b3508f0

void __thiscall
Metasound::TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>::
~TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// ~TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> @ 14b350930

void __thiscall
Metasound::TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>::
~TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>
          (TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Factory).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FNodeData::~FNodeData((FNodeData *)&this->_padding_);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// CreateNodeClassMetadata @ 14b37b6e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWavePlayerNode<Metasound::FFiveDotOneAudioChannelConfigurationInfo>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  WavePlayerOperatorPrivate::GetNodeInfo<Metasound::FFiveDotOneAudioChannelConfigurationInfo>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b37b700

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWavePlayerNode<Metasound::FMonoAudioChannelConfigurationInfo>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  WavePlayerOperatorPrivate::GetNodeInfo<Metasound::FMonoAudioChannelConfigurationInfo>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b37b720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWavePlayerNode<Metasound::FQuadAudioChannelConfigurationInfo>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  WavePlayerOperatorPrivate::GetNodeInfo<Metasound::FQuadAudioChannelConfigurationInfo>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b37b740

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWavePlayerNode<Metasound::FSevenDotOneAudioChannelConfigurationInfo>::
CreateNodeClassMetadata(FNodeClassMetadata *__return_storage_ptr__)

{
  WavePlayerOperatorPrivate::GetNodeInfo<Metasound::FSevenDotOneAudioChannelConfigurationInfo>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b37b760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TWavePlayerNode<Metasound::FStereoAudioChannelConfigurationInfo>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__)

{
  WavePlayerOperatorPrivate::GetNodeInfo<Metasound::FStereoAudioChannelConfigurationInfo>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

