// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 8

// FBasicNode @ 14ad37660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FBasicNode * __thiscall
Metasound::FBasicNode::FBasicNode
          (FBasicNode *this,FNodeData *param_1,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->_padding_ = (longlong)&___7FBasicNode_Metasound__6B_;
  (this->NodeData).Name = param_1->Name;
  uVar2 = (param_1->ID).B;
  uVar3 = (param_1->ID).C;
  uVar4 = (param_1->ID).D;
  (this->NodeData).ID.A = (param_1->ID).A;
  (this->NodeData).ID.B = uVar2;
  (this->NodeData).ID.C = uVar3;
  (this->NodeData).ID.D = uVar4;
  FInputVertexInterface::FInputVertexInterface
            (&(this->NodeData).Interface.InputInterface,&(param_1->Interface).InputInterface);
  FOutputVertexInterface::FOutputVertexInterface
            (&(this->NodeData).Interface.OutputInterface,&(param_1->Interface).OutputInterface);
  FEnvironmentVertexInterface::FEnvironmentVertexInterface
            (&(this->NodeData).Interface.EnvironmentInterface,
             &(param_1->Interface).EnvironmentInterface);
  (this->NodeData).OperatorData.Object = (param_1->OperatorData).Object;
  pTVar1 = (param_1->OperatorData).SharedReferenceCount.ReferenceController;
  (this->NodeData).OperatorData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ClassMetadata).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ClassMetadata).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FBasicNode @ 14ad3d7d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FBasicNode::~FBasicNode(FBasicNode *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClassMetadata).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NodeData).OperatorData.SharedReferenceCount.ReferenceController);
  FVertexInterface::~FVertexInterface(&(this->NodeData).Interface);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// GetInstanceID @ 14ad55fa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGuid * __thiscall Metasound::FBasicNode::GetInstanceID(FBasicNode *this)

{
  return &(this->NodeData).ID;
}

// GetInstanceName @ 14ad55fd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FName * __thiscall Metasound::FBasicNode::GetInstanceName(FBasicNode *this)

{
  return &(this->NodeData).Name;
}

// GetMetadata @ 14ad56020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall Metasound::FBasicNode::GetMetadata(FBasicNode *this)

{
  return (this->ClassMetadata).Object;
}

// GetOperatorData @ 14ad56410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::IOperatorData_const_,1> * __thiscall
Metasound::FBasicNode::GetOperatorData
          (FBasicNode *this,TSharedPtr<Metasound::IOperatorData_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NodeData).OperatorData.Object;
  pTVar1 = (this->NodeData).OperatorData.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetVertexInterface @ 14ad57410

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FVertexInterface * __thiscall Metasound::FBasicNode::GetVertexInterface(FBasicNode *this)

{
  return &(this->NodeData).Interface;
}

// SetDefaultInput @ 14ad63290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FBasicNode::SetDefaultInput(FBasicNode *this,FName *param_1,FLiteral *param_2)

{
  FInputDataVertex *this_00;
  FInputDataVertex *pFVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this_00 = (FInputDataVertex *)(this->NodeData).Interface.InputInterface._padding_;
  pFVar1 = this_00 + (int)(this->NodeData).Interface.InputInterface._padding_;
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
    FNodeClassName::ToString(&((this->ClassMetadata).Object)->ClassName,&local_18);
    ::FName::ToString(&(this->NodeData).Name,&local_28);
    ::FName::ToString(param_1,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

