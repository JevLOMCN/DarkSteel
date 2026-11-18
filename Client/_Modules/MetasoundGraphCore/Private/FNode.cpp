// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 8

// FNode @ 14ad3b160

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNode * __thiscall
Metasound::FNode::FNode
          (FNode *this,FName *param_1,FGuid *param_2,FNodeClassMetadata *param_3,
          TSharedPtr<Metasound::IOperatorData_const_,1> *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->_padding_ = (longlong)&___7FNode_Metasound__6B_;
  this->InstanceName = *param_1;
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  (this->InstanceID).A = param_2->A;
  (this->InstanceID).B = uVar1;
  (this->InstanceID).C = uVar2;
  (this->InstanceID).D = uVar3;
  FNodeClassMetadata::FNodeClassMetadata(&this->Info,param_3);
  (this->OperatorData).Object = param_4->Object;
  (this->OperatorData).SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (IOperatorData *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return this;
}

// ~FNode @ 14ad3de70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FNode::~FNode(FNode *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OperatorData).SharedReferenceCount.ReferenceController);
  FNodeClassMetadata::~FNodeClassMetadata(&this->Info);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// GetInstanceID @ 14ad55fc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGuid * __thiscall Metasound::FNode::GetInstanceID(FNode *this)

{
  return &this->InstanceID;
}

// GetInstanceName @ 14ad55ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FName * __thiscall Metasound::FNode::GetInstanceName(FNode *this)

{
  return &this->InstanceName;
}

// GetMetadata @ 14ad56040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall Metasound::FNode::GetMetadata(FNode *this)

{
  return &this->Info;
}

// GetOperatorData @ 14ad56470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::IOperatorData_const_,1> * __thiscall
Metasound::FNode::GetOperatorData
          (FNode *this,TSharedPtr<Metasound::IOperatorData_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OperatorData).Object;
  pTVar1 = (this->OperatorData).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetVertexInterface @ 14ad57430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FVertexInterface * __thiscall Metasound::FNode::GetVertexInterface(FNode *this)

{
  return &(this->Info).DefaultInterface;
}

// SetDefaultInput @ 14ad636b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FNode::SetDefaultInput(FNode *this,FName *param_1,FLiteral *param_2)

{
  FInputDataVertex *this_00;
  FInputDataVertex *pFVar1;
  FString local_28;
  FString local_18;
  
  this_00 = (FInputDataVertex *)(this->Info).DefaultInterface.InputInterface._padding_;
  pFVar1 = this_00 + (int)(this->Info).DefaultInterface.InputInterface._padding_;
  if (this_00 != pFVar1) {
    do {
      if ((FName)this_00->_padding_ == *param_1) {
        FInputDataVertex::SetDefaultLiteral(this_00,param_2);
        return;
      }
      this_00 = this_00 + 1;
    } while (this_00 != pFVar1);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&this->InstanceName,&local_18);
    ::FName::ToString(param_1,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

