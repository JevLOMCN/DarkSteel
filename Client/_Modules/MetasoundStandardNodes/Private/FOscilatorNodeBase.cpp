// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 3

// FOscilatorNodeBase @ 14b141570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FOscilatorNodeBase * __thiscall
Metasound::FOscilatorNodeBase::FOscilatorNodeBase
          (FOscilatorNodeBase *this,FName *param_1,FGuid *param_2,FNodeClassMetadata *param_3,
          TSharedRef<Metasound::IOperatorFactory,1> *param_4,float param_5,float param_6,
          bool param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::FNodeClassMetadata,1> *pTVar2;
  FVertexInterface *pFVar3;
  FNodeData *pFVar4;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_f8;
  TSharedRef<Metasound::FNodeClassMetadata,1> local_e8;
  FNodeData local_d8;
  FVertexInterface local_60;
  
  pTVar2 = MakeShared<Metasound::FNodeClassMetadata,1,Metasound::FNodeClassMetadata_const_&>
                     (&local_e8,param_3);
  local_f8.Object = pTVar2->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = FVertexInterface::FVertexInterface(&local_60,&param_3->DefaultInterface);
  pFVar4 = FNodeData::FNodeData(&local_d8,param_1,param_2,pFVar3);
  FBasicNode::FBasicNode((FBasicNode *)this,pFVar4,&local_f8);
  FNodeData::~FNodeData(&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FOscilatorNodeBase_Metasound__6B_;
  (this->Factory).Object = param_4->Object;
  pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVertexInterface::FVertexInterface(&this->VertexInterface);
  this->bDefaultEnablement = param_7;
  this->DefaultFrequency = param_5;
  this->DefaultGlideFactor = param_6;
  this->DefaultPhaseOffset = 0.0;
  return this;
}

// FOscilatorNodeBase @ 14b1416b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FOscilatorNodeBase * __thiscall
Metasound::FOscilatorNodeBase::FOscilatorNodeBase
          (FOscilatorNodeBase *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2,
          TSharedRef<Metasound::IOperatorFactory,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FBasicNode::FBasicNode((FBasicNode *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7FOscilatorNodeBase_Metasound__6B_;
  (this->Factory).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->Factory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVertexInterface::FVertexInterface(&this->VertexInterface);
  this->DefaultFrequency = 440.0;
  this->DefaultGlideFactor = 0.0;
  this->DefaultPhaseOffset = 0.0;
  this->bDefaultEnablement = true;
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// GetDefaultOperatorFactory @ 14b191740

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::FOscilatorNodeBase::GetDefaultOperatorFactory
          (FOscilatorNodeBase *this,
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

